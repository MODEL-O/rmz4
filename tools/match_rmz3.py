#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
match_rmz3.py  --  跨工程函数同源匹配 (rmz4 <- rmz3-dev)

目的
----
rmz4 (Rockman Zero 4, B4ZJ) 的 6885 个无名函数 FUN_<addr> 没有语义类别。
rmz3-dev 是同引擎 (Rockman Zero 3) 的**已命名、按子系统分文件**的反编译,
能编出带符号的 ELF (rmz3-modern.elf) + 链接 map (按 .o 归属 src 子系统)。
本脚本用"归一化指令签名"在两个工程间做同源匹配, 把 rmz3 的类别/候选名
继承给 rmz4 的 FUN_, 产出候选表供人工审阅。**不修改任何构建文件。**

数据来源
--------
rmz3-dev:
  * build/rmz3-modern/rmz3-modern.map  —— 每个 .text 块 (addr,size) -> src/<subsys>/<file>.o
  * rmz3-modern.elf (nm -n 取 符号->地址; objdump -d 取每函数反汇编)
    -> _match_work/rmz3_nm.txt, _match_work/rmz3_disasm.txt (预先 dump 好)
rmz4-dev:
  * asm/funcs/**/FUN_*.inc  —— 逐字节反汇编, 每条指令行已带助记符+操作数
  * archive/code_c/funcs_index.base.csv —— 权威函数清单 (name,entry,size,c_ok,shard)

归一化签名
----------
对每条指令只留 助记符(去掉 .n/.w 宽度后缀, 保留条件码) + 寄存器操作数,
**屏蔽**: 立即数(#...)、PC 相对字面量装载([pc,...])、分支/调用目标(<...> 或绝对地址)、
.word 字面量池、地址注释。这样两个 ROM 不同的绝对地址/常量不会影响匹配。
签名 = 归一化指令助记串的元组。

匹配
----
* 先按签名精确分桶: 同签名 (且指令数 >= MIN_INSN) 即候选同源。
* 唯一性加权: rmz3 侧某签名只对应 1 个具名函数时置信度高; 对应多个则取
  多数类别并降分。
* 相似度: 对未精确命中的 rmz4 FUN, 在长度相近的 rmz3 函数里找最高
  difflib 比率 >= SIM_THRESH 的, 作为低一档候选。
* 保守: 短函数(< MIN_INSN)只在签名全局唯一且较长时才给低分候选, 否则跳过。

用法
----
  E:\\Python\\python.exe tools\\match_rmz3.py
产出:
  tools/categories_candidates.tsv   (entry\\tcategory\\tcandidate\\tscore\\tevidence)
  tools/match_report.md
中间产物缓存在 tools/_match_work/。
"""
import os, re, csv, sys, glob, json, difflib
from collections import defaultdict, Counter

HERE = os.path.dirname(os.path.abspath(__file__))
RMZ4 = os.path.dirname(HERE)                       # E:\...\rmz4-dev
RMZ3 = os.path.join(os.path.dirname(RMZ4), "rmz3-dev")
WORK = os.path.join(HERE, "_match_work")
os.makedirs(WORK, exist_ok=True)

NM_TXT     = os.path.join(WORK, "rmz3_nm.txt")
DIS_TXT    = os.path.join(WORK, "rmz3_disasm.txt")
MAP_FILE   = os.path.join(RMZ3, "build", "rmz3-modern", "rmz3-modern.map")
IDX_CSV    = os.path.join(RMZ4, "archive", "code_c", "funcs_index.base.csv")
FUNCS_DIR  = os.path.join(RMZ4, "asm", "funcs")

OUT_TSV    = os.path.join(HERE, "categories_candidates.tsv")
OUT_REPORT = os.path.join(HERE, "match_report.md")

MIN_INSN   = 8       # 低于此指令数的函数不做精确同源(太泛, 易误配)
SIM_THRESH = 0.92    # 模糊匹配相似度阈值
MIN_INSN_FUZZY = 12  # 模糊匹配要求更长, 进一步压误报

# ---------------------------------------------------------------------------
# 归一化: 把一条反汇编指令文本 -> 归一化 token
# ---------------------------------------------------------------------------
WIDTH_SUFFIX = re.compile(r'\.[nw]$')
HEXNUM   = re.compile(r'0x[0-9a-fA-F]+')
IMM      = re.compile(r'#[^,\]\}]*')           # 立即数 #..
PCREL    = re.compile(r'\[pc[^\]]*\]')         # [pc, #..] 字面量装载
BRANCH_TGT = re.compile(r'<[^>]*>')            # <sym+0x..>
ABS_ADDR = re.compile(r'\b[0-9a-fA-F]{6,8}\b') # 裸绝对地址(分支目标)
COMMENT  = re.compile(r'@.*$')

def norm_insn(mnem, ops):
    mnem = WIDTH_SUFFIX.sub('', mnem.strip())
    # .word / 字面量池 / 数据 -> 统一为 DATA, 但通常落在函数尾 pool, 由调用方剔除
    if mnem in ('.word', '.short', '.byte', '.hword'):
        return None
    ops = COMMENT.sub('', ops)
    if 'pc' in ops:                 # PC 相对装载/地址 -> 屏蔽成统一占位
        ops = PCREL.sub('[pc]', ops)
    ops = BRANCH_TGT.sub('', ops)   # 分支目标符号
    ops = IMM.sub('#', ops)         # 立即数
    ops = HEXNUM.sub('', ops)       # 残留 hex
    ops = ABS_ADDR.sub('', ops)     # 裸地址
    ops = re.sub(r'\s+', '', ops)   # 去空白
    # 屏蔽 ldr/adr 的 PC 相对结果寄存器之外内容已处理; 保留寄存器名与结构
    return mnem + '|' + ops

# ---------------------------------------------------------------------------
# 解析 rmz3 .map: 地址区间 -> src 对象 -> 子系统类别
# ---------------------------------------------------------------------------
def parse_map():
    """返回 [(start, end, category, srcfile)] 按 start 排序"""
    ranges = []
    # 形如:  .text          0x08000300      0x514 src/sprite2.o
    pat = re.compile(r'^\s*\.text\S*\s+0x([0-9a-fA-F]+)\s+0x([0-9a-fA-F]+)\s+(\S+\.o)')
    with open(MAP_FILE, encoding='utf-8', errors='replace') as f:
        for ln in f:
            m = pat.match(ln)
            if not m:
                continue
            start = int(m.group(1), 16)
            size  = int(m.group(2), 16)
            obj   = m.group(3)
            if size == 0:
                continue
            ranges.append((start, start+size, obj_to_category(obj), obj))
    ranges.sort()
    return ranges

def obj_to_category(obj):
    """src/boss/anubis.o -> ('boss','anubis');  src/player.o -> ('player','player');
    src/camera.o -> ('misc'/'camera'..). 返回 (category, subname)。
    category = rmz4 拟用的 funcs/ 子目录名(顶层子系统)。"""
    p = obj
    if p.startswith('src/'):
        p = p[4:]
    elif p.startswith('asm/'):
        p = p[4:]
    p = p[:-2] if p.endswith('.o') else p
    parts = p.split('/')
    if len(parts) >= 2:
        cat = parts[0]
        sub = parts[-1]
    else:
        cat = parts[0]
        sub = parts[0]
    return (cat, sub)

def category_of(ranges, addr):
    # 二分
    lo, hi = 0, len(ranges)
    while lo < hi:
        mid = (lo+hi)//2
        s,e,cat,obj = ranges[mid]
        if addr < s: hi = mid
        elif addr >= e: lo = mid+1
        else: return cat, obj
    return None, None

# ---------------------------------------------------------------------------
# 解析 rmz3 nm + 反汇编 -> 每具名函数的归一化签名 + 类别
# ---------------------------------------------------------------------------
def load_rmz3_symbols():
    """从 nm -n 取 .text 内 (addr, name) 函数符号列表, 按地址排序去重。"""
    syms = []
    with open(NM_TXT, encoding='utf-8', errors='replace') as f:
        for ln in f:
            parts = ln.split()
            if len(parts) < 3:
                continue
            addr_s, typ, name = parts[0], parts[1], parts[2]
            if typ not in ('t', 'T'):
                continue
            try:
                addr = int(addr_s, 16)
            except ValueError:
                continue
            syms.append((addr, name))
    syms.sort()
    return syms

def parse_rmz3_disasm():
    """返回 dict: func_name -> [ (addr, mnem, ops) ... ] 按 disasm 块解析。"""
    funcs = {}
    cur = None
    cur_list = None
    hdr = re.compile(r'^([0-9a-fA-F]{8}) <([^>]+)>:')
    insn = re.compile(r'^\s*([0-9a-fA-F]+):\t(.*)$')
    with open(DIS_TXT, encoding='utf-8', errors='replace') as f:
        for ln in f:
            ln = ln.rstrip('\n')
            m = hdr.match(ln)
            if m:
                cur = m.group(2)
                cur_list = []
                funcs[cur] = cur_list
                continue
            if cur is None:
                continue
            mi = insn.match(ln)
            if not mi:
                continue
            body = mi.group(2).strip()
            if not body:
                continue
            # body 形如 "push\t{r4...}" 或 "movs\tr4, #128 @ 0x80" 或 ".word\t0x.."
            if '\t' in body:
                mnem, ops = body.split('\t', 1)
            else:
                mnem, ops = body, ''
            funcs[cur] = cur_list
            cur_list.append((mnem, ops))
    return funcs

def build_rmz3_sig(ranges):
    """每具名函数 -> (sig 元组, category, name, insn_count)。pool .word 截断。"""
    disasm = parse_rmz3_disasm()
    syms = load_rmz3_symbols()
    addr_of = {}
    for addr, name in syms:
        addr_of.setdefault(name, addr)
    out = {}
    for name, insns in disasm.items():
        addr = addr_of.get(name)
        if addr is None:
            continue
        cat, obj = category_of(ranges, addr)
        if cat is None:
            continue
        # data 类别 / .word 满满 跳过
        if cat == 'data':
            continue
        sig = []
        for mnem, ops in insns:
            n = norm_insn(mnem, ops)
            if n is None:
                break  # 遇到字面量池 -> 函数体结束
            sig.append(n)
        if not sig:
            continue
        out[name] = (tuple(sig), cat, obj, len(sig))
    return out

# ---------------------------------------------------------------------------
# 解析 rmz4 .inc -> 每 FUN 的归一化签名
# ---------------------------------------------------------------------------
def parse_rmz4_inc(path):
    """.inc 行: '\tmnem ops\t@ addr hexbytes'  或  '.org ..' / '.thumb'/'.arm'/header"""
    sig = []
    insn_line = re.compile(r'^\t([^\t@]+?)\s*@\s+[0-9a-fA-F]+\s+[0-9a-fA-F]+\s*$')
    with open(path, encoding='utf-8', errors='replace') as f:
        for ln in f:
            ln = ln.rstrip('\n')
            if ln.startswith('.') or ln.startswith('@') or ln.endswith(':'):
                continue
            m = insn_line.match(ln)
            if not m:
                continue
            body = m.group(1).strip()
            if not body:
                continue
            # body: "push {r4, r5}"  或 "ldr r0, [pc, #4]" 等
            sp = body.split(None, 1)
            mnem = sp[0]
            ops  = sp[1] if len(sp) > 1 else ''
            n = norm_insn(mnem, ops)
            if n is None:
                break
            sig.append(n)
    return tuple(sig)

def load_rmz4_funcs():
    """返回 dict: entry_hex(0x...) -> (sig, name, path)。从 funcs_index 取权威清单。"""
    funcs = {}
    # 建 entry -> inc 路径索引
    inc_index = {}
    for p in glob.glob(os.path.join(FUNCS_DIR, '**', 'FUN_*.inc'), recursive=True):
        base = os.path.basename(p)[:-4]  # FUN_080001d4
        inc_index[base.upper()] = p
    with open(IDX_CSV, newline='') as f:
        for row in csv.DictReader(f):
            name = row['name'].strip()
            entry = row['entry'].strip()
            if not name.startswith('FUN_'):
                continue  # 已命名的(lib_runtime 等)不需要候选
            key = ('FUN_' + entry[2:]).upper()
            path = inc_index.get(key)
            if not path:
                continue
            sig = parse_rmz4_inc(path)
            funcs[entry] = (sig, name, path)
    return funcs

# ---------------------------------------------------------------------------
# 主匹配
# ---------------------------------------------------------------------------
def main():
    print("[1/4] 解析 rmz3 .map ...")
    ranges = parse_map()
    print(f"      .text 块: {len(ranges)}")

    print("[2/4] 构建 rmz3 具名函数签名 ...")
    rmz3 = build_rmz3_sig(ranges)
    print(f"      具名函数(非 data): {len(rmz3)}")

    # 按签名分桶 (rmz3 侧)
    sig_to_rmz3 = defaultdict(list)
    for nm, (sig, cat, obj, n) in rmz3.items():
        sig_to_rmz3[sig].append((nm, cat, obj, n))

    print("[3/4] 解析 rmz4 FUN_ 签名 ...")
    rmz4 = load_rmz4_funcs()
    print(f"      待匹配 FUN_: {len(rmz4)}")

    # 为模糊匹配预备: 按长度分桶 rmz3 唯一长函数(只取每签名众数类别代表)
    rmz3_long = []   # (sig, cat, name, n)
    for sig, lst in sig_to_rmz3.items():
        if len(sig) < MIN_INSN_FUZZY:
            continue
        cat_counter = Counter(c for _,c,_,_ in lst)
        cat = cat_counter.most_common(1)[0][0]
        # 取代表名(该 cat 下第一个)
        rep = next((nm for nm,c,_,_ in lst if c==cat), lst[0][0])
        rmz3_long.append((sig, cat, rep, len(sig)))

    print("[4/4] 匹配 ...")
    results = []  # (entry, category, candidate, score, evidence)
    n_exact = 0; n_fuzzy = 0; n_none = 0
    for entry, (sig, fun, path) in rmz4.items():
        if not sig:
            n_none += 1
            continue
        # --- 精确签名命中 ---
        hit = sig_to_rmz3.get(sig)
        if hit and len(sig) >= MIN_INSN:
            cat_counter = Counter(c for _,c,_,_ in hit)
            cat, catn = cat_counter.most_common(1)[0]
            names = sorted(set(nm for nm,_,_,_ in hit))
            cand = pick_candidate(hit, cat)
            # 置信度: 指令数越多越唯一越高
            uniq = len([1 for s in [sig] if len(sig_to_rmz3[s])>0])
            n_funcs = len(hit)
            purity = cat_counter[cat] / sum(cat_counter.values())
            score = exact_score(len(sig), n_funcs, purity)
            ev = f"exact sig n={len(sig)} matches={len(hit)} purity={purity:.2f} ex={names[:3]}"
            results.append((entry, cat, cand, score, ev))
            n_exact += 1
            continue
        # --- 模糊匹配(长函数) ---
        if len(sig) >= MIN_INSN_FUZZY:
            best = None; best_r = 0.0
            for rsig, rcat, rname, rn in rmz3_long:
                if abs(rn - len(sig)) > max(4, len(sig)*0.25):
                    continue
                # 快速过滤: 助记符多重集合相近
                r = difflib.SequenceMatcher(None, sig, rsig).ratio()
                if r > best_r:
                    best_r = r; best = (rcat, rname, rn, rsig)
            if best and best_r >= SIM_THRESH:
                rcat, rname, rn, rsig = best
                score = round(0.55 * best_r, 3)   # 模糊一律低一档
                ev = f"fuzzy sim={best_r:.3f} n={len(sig)} vs {rname}(n={rn})"
                results.append((entry, rcat, rname, score, ev))
                n_fuzzy += 1
                continue
        n_none += 1

    results.sort(key=lambda x: -x[3])

    # 写候选 tsv
    with open(OUT_TSV, 'w', encoding='utf-8', newline='') as f:
        f.write("# entry\tcategory\tcandidate_name\tscore\tevidence\n")
        f.write("# 由 match_rmz3.py 生成. 前三列(entry/category/name)可喂 categorize.py(它忽略后两列).\n")
        f.write("# score: exact>=0.6 高可信; fuzzy<=0.55 低可信需人工复核. 按 score 降序.\n")
        for entry, cat, cand, score, ev in results:
            f.write(f"{entry}\t{cat}\t{cand}\t{score}\t{ev}\n")

    # 报告
    write_report(ranges, rmz3, rmz4, results, n_exact, n_fuzzy, n_none)
    print(f"DONE  exact={n_exact} fuzzy={n_fuzzy} none={n_none} -> {OUT_TSV}")

def pick_candidate(hit, cat):
    """从命中里挑候选名: 优先该 cat 下出现的名字; 若多个不同名, 给子系统代表。"""
    names_in_cat = [nm for nm,c,obj,_ in hit if c==cat]
    if len(set(names_in_cat)) == 1:
        return names_in_cat[0]
    # 多名 -> 用对象文件子名做候选, 名字不确定
    objs = [obj for _,c,obj,_ in hit if c==cat]
    sub = obj_to_category(objs[0])[1] if objs else cat
    return f"{sub}_?"

def exact_score(n_insn, n_matches, purity):
    base = 0.6
    base += min(0.25, (n_insn-MIN_INSN)*0.01)     # 越长越可信
    if n_matches == 1: base += 0.12               # rmz3 侧全局唯一
    elif n_matches <= 3: base += 0.05
    base *= purity                                # 类别不纯打折
    return round(min(base, 0.99), 3)

def write_report(ranges, rmz3, rmz4, results, n_exact, n_fuzzy, n_none):
    cat_dist = Counter()
    score_buckets = Counter()
    for entry, cat, cand, score, ev in results:
        cat_dist[cat] += 1
        if score >= 0.8: score_buckets['high(>=0.8)'] += 1
        elif score >= 0.6: score_buckets['mid(0.6-0.8)'] += 1
        else: score_buckets['low(<0.6,fuzzy)'] += 1
    total = len(rmz4)
    matched = len(results)
    lines = []
    lines.append("# rmz4 <- rmz3-dev 函数同源匹配报告\n")
    lines.append("## 方法\n")
    lines.append("- rmz3-dev: 用 `rmz3-modern.elf` (nm 取符号->地址, objdump -d 取每函数反汇编) "
                 "+ `rmz3-modern.map` (每 .text 块 -> src/<子系统>.o) 得到 **具名函数 -> 子系统类别**。\n")
    lines.append("- 两侧都做**归一化指令签名**: 只保留助记符(去 .n/.w)+寄存器操作数, "
                 "屏蔽立即数 / PC 相对字面量装载 / 分支目标 / 裸绝对地址 / .word 池。\n")
    lines.append(f"- 精确匹配: 签名完全相等且指令数 >= {MIN_INSN}。模糊匹配: difflib 相似度 "
                 f">= {SIM_THRESH} 且指令数 >= {MIN_INSN_FUZZY}(打 0.55 折)。\n")
    lines.append("- 保守策略: 短函数不做精确同源(纯 push/pop/访问器易撞), 类别不纯按比例打折, "
                 "rmz3 侧签名全局唯一额外加分。\n\n")
    lines.append("## 命中\n")
    lines.append(f"- rmz4 待匹配 FUN_: **{total}**\n")
    lines.append(f"- rmz3-dev 具名函数(非 data): **{len(rmz3)}**\n")
    lines.append(f"- 精确命中: **{n_exact}**  模糊命中: **{n_fuzzy}**  未匹配: **{n_none}**\n")
    lines.append(f"- 覆盖率: **{matched}/{total} = {matched/total*100:.1f}%**\n\n")
    lines.append("## 置信度分布\n")
    for k in ('high(>=0.8)','mid(0.6-0.8)','low(<0.6,fuzzy)'):
        lines.append(f"- {k}: {score_buckets.get(k,0)}\n")
    lines.append("\n## 类别分布(候选)\n")
    for cat, c in cat_dist.most_common():
        lines.append(f"- {cat}: {c}\n")
    lines.append("\n## 已知误差来源\n")
    lines.append("- **泛型短函数**: 引擎里大量 8~12 条的 getter/setter/task 调度同型, 不同子系统会撞签名; "
                 "已用长度门限+纯度打折压制, 但 mid 档仍可能错挂。\n")
    lines.append("- **编译器差异**: rmz3-modern 用现代 gcc 重编, 与 rmz4 原 ROM(老 agbcc 风格)指令选择可能不同, "
                 "导致真同源函数签名不等 -> 漏配(降低覆盖率, 不产生错配)。\n")
    lines.append("- **rmz4 专属内容**: rmz4 新增 boss/stage/cyberelf 在 rmz3 无对应, 必然未匹配, 属正常。\n")
    lines.append("- **类别粒度**: category 取顶层子系统(boss/player/enemy..), 具体名(anubis 等)放 candidate 列, "
                 "rmz4 同名实体未必存在, candidate 仅作线索。\n\n")
    lines.append("## 未匹配\n")
    lines.append(f"- 未匹配 {n_none}/{total} = {n_none/total*100:.1f}%。大头是 rmz4 专属逻辑 + 编译器差异漏配。\n")
    lines.append("- 替代粗分类思路: 用 rmz4 .inc 字面量池里引用的已知表地址(graphic/animation/tileset/stage "
                 "主表, 见 memory 里 reference_rmz4_*)反推子系统, 可作第二信号源补充。\n")
    with open(OUT_REPORT, 'w', encoding='utf-8') as f:
        f.writelines(lines)

if __name__ == '__main__':
    main()

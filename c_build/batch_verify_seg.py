#!/usr/bin/env python3
# 批量把某 shard(默认 seg_08000000) 的全部函数: 原始 Ghidra C -> (可选)auto_clean 清理
# -> agbcc 编译 -> 链到 entry -> 逐字节比对原 ROM。每函数依次试 -O2/-O1/-O0, 先试原始 C,
# 不中再试清理版, 任一 MATCH 即通过并把命中的 .c 拷进 c_build/src/<shard>/<name>.c。
# 输出每函数结果 + 总匹配率, 写两份日志:
#   c_build/verify_<shard>.log       —— 每函数一行(MATCH/MISS/NOC)
#   c_build/verify_<shard>_fail.log  —— 失败明细+原因归类直方图(吸取教训用)
# 用法: python batch_verify_seg.py [shard=seg_08000000] [-jN 并发]
import os, sys, csv, re, shutil, collections, concurrent.futures as cf
import verify_c_func as v
import auto_clean

SRC = os.path.join(v.HERE, "src")
CLEAN = os.path.join(v.HERE, "clean")
MANUAL = os.path.join(v.HERE, "manual")   # 人工反编译的 .c, 优先级最高, 永不被覆盖
OPTS = ["-O2", "-O1", "-O0"]

def funcs_in_shard(shard):
    out = []
    with open(v.IDX) as f:
        for row in csv.DictReader(f):
            if row["shard"] == shard:
                out.append((int(row["entry"], 16), int(row["size_bytes"]), row["name"]))
    out.sort()
    return out

# ---- 失败原因归类: 从 verify() 的 msg 里抽出 (类别, 简短原因) ----
def categorize(msg):
    if "[CPP 失败]" in msg:
        return "预处理失败", _first_diag(msg)
    if "[agbcc C->S 失败]" in msg:
        return "编译失败", _first_diag(msg)
    if "[S->O 失败]" in msg:
        return "汇编失败", _first_diag(msg)
    if "[链接失败]" in msg:
        m = re.search(r"undefined reference to [`']([^`'\n]+)", msg)
        return "链接失败", ("缺符号 " + m.group(1)) if m else _first_diag(msg)
    m = re.search(r"MISMATCH .*?: (\d+) diff bytes", msg)
    if m:
        return "字节不符", f"{m.group(1)} 字节不同"
    return "其它", msg.splitlines()[0] if msg else ""

def _first_diag(msg):
    # 取第一条像编译器诊断的行 (含 error/undeclared/is not/parse 等关键词)
    for ln in msg.splitlines():
        s = ln.strip()
        if (not s or s.startswith("[") or s.startswith("time in")
                or "In function" in s or "warning:" in s):
            continue
        if any(k in s for k in ("error", "undeclared", "is not", "parse error",
                                "conflicting", "redeclared", "incompatible", "undefined",
                                "invalid", "too many", "too few", "cannot")):
            # 去掉冗长的文件路径前缀
            return re.sub(r"^.*?\.c:\d+:\s*", "", s)[:160]
    for ln in msg.splitlines():
        s = ln.strip()
        if s and not s.startswith("[") and not s.startswith("time in"):
            return re.sub(r"^.*?\.c:\d+:\s*", "", s)[:160]
    return ""

def _try_paths(name, raw, opt):
    """对一个 .c 路径试某 opt, 返回 (ok, msg)。"""
    try:
        ok, msg, _ = v.verify(name, raw, opt)
        return ok, msg
    except Exception as e:
        return False, "[异常] " + (str(e).splitlines()[0] if str(e) else repr(e))

def try_one(name, shard):
    raw = os.path.join(v.ROOT, "archive", "code_c", "funcs", shard, name + ".c")
    if not os.path.exists(raw):
        return dict(name=name, status="NOC", opt="", src="", cat="无原始C",
                    reason="原始 Ghidra C 不存在", detail="")
    rawtxt = open(raw, encoding="utf-8", errors="ignore").read()
    os.makedirs(os.path.join(CLEAN, shard), exist_ok=True)
    # 候选: 人工版(若有) -> 原始 -> 清理(in_lr+deref) -> 清理+字面量内联。取首个字节一致者。
    candidates = []
    manp = os.path.join(MANUAL, shard, name + ".c")
    if os.path.exists(manp):
        candidates.append(("manual", manp))
    candidates.append(("raw", raw))
    cleaned = auto_clean.clean_text(rawtxt, name, inline_lit=False)
    if cleaned != rawtxt:
        cp = os.path.join(CLEAN, shard, name + ".c")
        open(cp, "w", encoding="utf-8").write(cleaned)
        candidates.append(("clean", cp))
    litted = auto_clean.clean_text(rawtxt, name, inline_lit=True)
    if litted != cleaned:
        lp = os.path.join(CLEAN, shard, name + ".lit.c")
        open(lp, "w", encoding="utf-8").write(litted)
        candidates.append(("lit", lp))

    best = None  # (score, cat, reason, msg, opt, which) 记录"最有信息量"的失败
    for which, path in candidates:
        for opt in OPTS:
            ok, msg = _try_paths(name, path, opt)
            if ok:
                return dict(name=name, status="MATCH", opt=opt, src=which,
                            cat="", reason="", detail=msg.strip())
            cat, reason = categorize(msg)
            # 失败优先级: 字节不符(已能编译链接, 最有价值) > 链接 > 汇编 > 编译 > 预处理
            rank = {"字节不符":5, "链接失败":4, "汇编失败":3, "编译失败":2,
                    "预处理失败":1, "其它":0, "异常":0}.get(cat, 0)
            # 字节不符时取 diff 最少的
            score = rank
            if cat == "字节不符":
                dm = re.search(r"(\d+) 字节不同", reason)
                score = rank + 1.0/(1+int(dm.group(1))) if dm else rank
            if best is None or score > best[0]:
                best = (score, cat, reason, msg, opt, which)
    _, cat, reason, msg, opt, which = best
    return dict(name=name, status="MISS", opt=opt, src=which,
                cat=cat, reason=reason, detail=msg)

def main():
    shard = "seg_08000000"
    jobs = 1
    for a in sys.argv[1:]:
        if a.startswith("-j"): jobs = int(a[2:])
        else: shard = a
    funcs = funcs_in_shard(shard)
    print(f"shard {shard}: {len(funcs)} 函数, 并发 {jobs}")
    od = os.path.join(SRC, shard); os.makedirs(od, exist_ok=True)
    names = [nm for _, _, nm in funcs]

    def run(nm):
        return try_one(nm, shard)

    results = []
    if jobs > 1:
        with cf.ThreadPoolExecutor(max_workers=jobs) as ex:
            for r in ex.map(run, names):
                results.append(r)
    else:
        for nm in names:
            results.append(run(nm))

    match = miss = noc = 0
    match_raw = match_clean = match_manual = 0
    log = []
    fail = []
    cat_hist = collections.Counter()
    reason_hist = collections.Counter()
    for r in sorted(results, key=lambda x: x["name"]):
        name, status = r["name"], r["status"]
        if status == "MATCH":
            match += 1
            which = r["src"]
            if which == "manual":
                match_manual += 1
                srcp = os.path.join(MANUAL, shard, name + ".c")
            elif which == "lit":
                match_clean += 1
                srcp = os.path.join(CLEAN, shard, name + ".lit.c")
            elif which == "clean":
                match_clean += 1
                srcp = os.path.join(CLEAN, shard, name + ".c")
            else:
                match_raw += 1
                srcp = os.path.join(v.ROOT, "archive", "code_c", "funcs", shard, name + ".c")
            shutil.copyfile(srcp, os.path.join(od, name + ".c"))
            log.append(f"MATCH {r['opt']:4} {which:5} {name}")
        elif status == "NOC":
            noc += 1
            log.append(f"NOC        {name}  {r['reason']}")
            fail.append(f"[无原始C] {name}  {r['reason']}")
            cat_hist["无原始C"] += 1
        else:
            miss += 1
            cat, reason = r["cat"], r["reason"]
            cat_hist[cat] += 1
            reason_hist[f"{cat}: {reason}"] += 1
            log.append(f"MISS  {cat:6} {name}  {reason}")
            fail.append(f"==== {name}  [{cat}] {reason}  (best opt {r['opt']}, src {r['src']})\n"
                        + "\n".join("    " + ln for ln in r["detail"].splitlines()))

    total = len(funcs)
    logp = os.path.join(v.HERE, f"verify_{shard}.log")
    open(logp, "w", encoding="utf-8").write("\n".join(log) + "\n")

    failp = os.path.join(v.HERE, f"verify_{shard}_fail.log")
    head = [f"# {shard} 失败明细  (MATCH {match}/{total}, MISS {miss}, NOC {noc})",
            "# ===== 失败原因分类直方图 =====",]
    for cat, n in cat_hist.most_common():
        head.append(f"#   {n:4}  {cat}")
    head.append("# ===== 失败原因 TOP30 (类别: 具体原因) =====")
    for reason, n in reason_hist.most_common(30):
        head.append(f"#   {n:4}  {reason}")
    head.append("# ===== 逐函数明细 =====\n")
    open(failp, "w", encoding="utf-8").write("\n".join(head) + "\n".join(fail) + "\n")

    print(f"\n== {shard}: MATCH {match}/{total} ({100*match/total:.1f}%) "
          f"[人工 {match_manual} + 原始 {match_raw} + 清理 {match_clean}]  MISS {miss}  NOC {noc} ==")
    print("   失败分类:", "  ".join(f"{c}={n}" for c, n in cat_hist.most_common()))
    print(f"   匹配的 .c 已入 {od}")
    print(f"   明细日志 {logp}")
    print(f"   失败教训 {failp}")

if __name__ == "__main__":
    main()

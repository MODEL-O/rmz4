#!/usr/bin/env python3
# 混合 master 构建: 每函数 *要么* 用已验证字节匹配的 C (编成 .s), *要么* 用原字节一致
# 反汇编 .s。做法 = 在已字节一致的 archive/code_asm/code_split.s 上做最小改写:
#   1) 把 C-ready 函数的 .include 从 funcs/.. 换成 hybrid/..(agbcc 编出的 .s);
#   2) 在 master 顶部预置全部被 C 引用到的 DAT_/PTR_ 的 .set 绝对地址(它们不是标号);
# 其余(函数间内联数据、未迁函数)原样保留 => 整体仍链接出字节一致 code.bin。
# C-ready = c_build/src/<shard>/<name>.c 存在且 verify() 通过 MATCH。
import os, re, subprocess, hashlib, csv
import verify_c_func as v

OUTD = os.path.join(v.ROOT, "archive", "code_asm")
SRC  = os.path.join(v.HERE, "src")
HYBD = os.path.join(OUTD, "hybrid")
MASTER_IN  = os.path.join(OUTD, "code_split.s")
MASTER_OUT = os.path.join(OUTD, "code_hybrid.s")
MOP = os.path.join(OUTD, "code_hybrid.o")
MEP = os.path.join(OUTD, "code_hybrid.elf")
MBP = os.path.join(OUTD, "code_hybrid.bin")
LDS = os.path.join(OUTD, "code_hybrid.ld")

def func_entries():
    s = {}
    with open(v.IDX) as f:
        for row in csv.DictReader(f):
            s[row["name"]] = int(row["entry"], 16)
    return s

def lower_s(name, stxt):
    """把 agbcc 原始 .s 降为可并入 base-0 master 的形式。返回 (s_text, dat_addrs)。"""
    hx = name.split("_")[1]
    # 局部标号唯一化, 避免多函数并入同一 TU 时 .L 冲突
    stxt = re.sub(r'\.L(\w+)', rf'.L{hx}_\1', stxt)
    # 函数指针字面量: .word FUN_xxxxxxxx -> 常量(Thumb 置低位, ARM 不置)
    def wrepl(m):
        a = int(m.group(1), 16)
        return f".word 0x{a if v.is_arm(a) else a|1:08x}"
    stxt = re.sub(r'\.word\s+FUN_([0-9A-Fa-f]{8})', wrepl, stxt)
    dats = set(int(h, 16) for h in re.findall(r'\b(?:_?DAT|PTR)_([0-9A-Fa-f]{8})\b', stxt))
    # agbcc 出 .gcc2_compiled.: 标号, 多函数并入同一 TU 会重定义冲突 -> 删掉
    stxt = re.sub(r'^\s*\.gcc2_compiled\.:\s*$\n?', '', stxt, flags=re.M)
    # master 顶部是 .syntax unified, 但 agbcc 出旧 divided 语法(add/mov #imm 等),
    # 故把每个 hybrid 体包在 divided 里, 末尾恢复 unified 给后续 master 用。
    stxt = ".syntax divided\n" + stxt + "\n.syntax unified\n"
    return stxt, dats

def main():
    entries = func_entries()
    entry_addrs = set(entries.values())
    # 收集 C-ready 函数
    ready = {}   # name -> shard
    for shard in (os.listdir(SRC) if os.path.isdir(SRC) else []):
        d = os.path.join(SRC, shard)
        if not os.path.isdir(d): continue
        for fn in os.listdir(d):
            if fn.endswith(".c"):
                ready[fn[:-2]] = shard
    if not ready:
        print("没有 C-ready 函数 (c_build/src/ 为空)"); return
    # 验证并生成 hybrid .s
    os.makedirs(HYBD, exist_ok=True)
    all_dats = set()
    used = []
    for name, shard in sorted(ready.items()):
        cpath = os.path.join(SRC, shard, name + ".c")
        ok, msg, _ = v.verify(name, cpath, "-O2")
        if not ok:
            print(f"跳过(未匹配): {msg.splitlines()[0]}"); continue
        raw, _ = v.compile_c_to_s(name, cpath, "-O2")
        low, dats = lower_s(name, raw)
        od = os.path.join(HYBD, shard); os.makedirs(od, exist_ok=True)
        open(os.path.join(od, name + ".s"), "w").write(low)
        all_dats |= dats
        used.append((name, shard))
        print(f"用 C: {msg}")
    # DAT_ 的 .set(跳过恰为函数入口的, 免与标号冲突)
    setblk = ["@ === hybrid: C 函数引用的 DAT_/PTR_ 绝对地址 ==="]
    for a in sorted(all_dats):
        if a in entry_addrs: continue
        setblk.append(f".set DAT_{a:08x}, 0x{a:08x}")
        setblk.append(f".set _DAT_{a:08x}, 0x{a:08x}")
        setblk.append(f".set PTR_{a:08x}, 0x{a:08x}")
    # 改写 master
    lines = open(MASTER_IN).read().splitlines()
    swap = {f'.include "funcs/{sh}/{nm}.s"': f'.include "hybrid/{sh}/{nm}.s"'
            for nm, sh in used}
    out, inserted = [], False
    for ln in lines:
        if not inserted and ln.startswith(".org"):
            out += setblk; inserted = True
        out.append(swap.get(ln.strip(), ln))
    open(MASTER_OUT, "w").write("\n".join(out) + "\n")
    print(f"写出 {MASTER_OUT} (替换 {len(used)} 个函数为 C)")
    # 汇编 + 链接(base 0) + objcopy + 比对
    open(LDS, "w").write('SECTIONS { . = 0x0; .text : { *(.text) } /DISCARD/ : { *(*) } }\n')
    r = subprocess.run([v.AS, "-mcpu=arm7tdmi", "-march=armv4t", "-mthumb-interwork",
                        "-I", OUTD, "-o", MOP, MASTER_OUT], capture_output=True, text=True)
    if r.returncode != 0:
        print("AS 失败:\n" + r.stderr[:4000]); return
    r = subprocess.run([v.LD, "-T", LDS, "-o", MEP, MOP], capture_output=True, text=True)
    if r.returncode != 0:
        print("LD 失败:\n" + r.stderr[:4000]); return
    subprocess.run([v.OBJCOPY, "-O", "binary", MEP, MBP], check=True)
    data = open(MBP, "rb").read()
    orig = open(v.BIN, "rb").read()
    data = data[:len(orig)] + b"\x00" * max(0, len(orig) - len(data))
    if data == orig:
        print(f"HYBRID BYTE-EXACT OK  sha1={hashlib.sha1(data).hexdigest()}")
    else:
        diffs = [k for k in range(len(orig)) if data[k] != orig[k]]
        print(f"HYBRID MISMATCH diffs={len(diffs)}  first:")
        for dd in diffs[:20]:
            print(f"  @0x{dd:08x} got {data[dd]:02x} want {orig[dd]:02x}")

if __name__ == "__main__":
    main()

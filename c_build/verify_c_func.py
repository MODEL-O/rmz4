#!/usr/bin/env python3
# 单函数匹配验证 + 可复用编译入口。把清理后的 .c 编成机器码, 链到原 entry 地址,
# 与 code.bin 切片逐字节比对。用法:
#   python verify_c_func.py FUN_080060b4 [path/to/cleaned.c] [-O2|-O1|-O0]
# 不给 .c 路径时默认用 archive/code_c/funcs/<shard>/<name>.c (原始 Ghidra 输出)。
# 流程严格按用户要求: C -> .s (agbcc) -> .o (as) -> 链接 -> objcopy -> 比对。
import os, sys, csv, re, subprocess

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
TC   = r"E:\GameProjects\rmz3\toolchain\arm\xpack-arm-none-eabi-gcc-15.2.1-1.1\bin"
CPP  = os.path.join(TC, "arm-none-eabi-cpp.exe")
AS   = os.path.join(TC, "arm-none-eabi-as.exe")
LD   = os.path.join(TC, "arm-none-eabi-ld.exe")
OBJCOPY = os.path.join(TC, "arm-none-eabi-objcopy.exe")
# 与原版 ROM 字节匹配用 agbcc (gcc 2.95), 与 rmz3-dev 同; agbcc 只能出 .s, 故 C->.s->.o 两步。
AGBCC      = os.path.join(HERE, "agbcc", "agbcc.exe")       # Thumb
AGBCC_ARM  = os.path.join(HERE, "agbcc", "agbcc_arm.exe")   # ARM
AGBINC     = os.path.join(HERE, "agbcc", "include")
BIN  = os.path.join(ROOT, "archive", "code.bin")
IDX  = os.path.join(ROOT, "archive", "code_c", "funcs_index.csv")
TSV  = os.path.join(ROOT, "archive", "code_c", "code.bin.units.tsv")
SYMS = os.path.join(HERE, "symbols.ld")
TYPES= os.path.join(HERE, "gba_types.h")
DECLS= os.path.join(HERE, "extern_decls.h")
WORK = os.path.join(HERE, "work")
BASE = 0x08000000
REFRE = re.compile(r'\b(?:FUN|_DAT|DAT|PTR)_([0-9A-Fa-f]{8})\b')

def func_info(name):
    with open(IDX) as f:
        for row in csv.DictReader(f):
            if row["name"] == name:
                return int(row["entry"], 16), int(row["size_bytes"]), row["shard"]
    raise SystemExit(f"未在 funcs_index.csv 找到 {name}")

_ARM = None
def is_arm(entry):
    global _ARM
    if _ARM is None:
        _ARM = set()
        with open(TSV) as f:
            for line in f:
                p = line.rstrip("\n").split("\t")
                if len(p) >= 4 and p[0]:
                    try: off = int(p[0], 16)
                    except ValueError: continue
                    if p[2] == "I" and p[3] == "A":
                        _ARM.add(off)
    return entry in _ARM

def compile_c_to_s(name, cpath, opt="-O2"):
    """C -> 预处理 -> agbcc -> 原始 .s 文本(不含 .set 前导)。返回 (s_text, arm)。"""
    entry, size, shard = func_info(name)
    arm = is_arm(entry)
    os.makedirs(WORK, exist_ok=True)
    ip = os.path.join(WORK, name + ".i")
    sp = os.path.join(WORK, name + ".s")
    r = subprocess.run([CPP, "-nostdinc", "-undef", "-std=gnu89", "-I", AGBINC,
                        "-include", TYPES, "-include", DECLS, "-o", ip, cpath],
                       capture_output=True, text=True)
    if r.returncode != 0:
        raise RuntimeError("[CPP 失败]\n" + r.stderr[:4000])
    cc = AGBCC_ARM if arm else AGBCC
    ccflags = [opt, "-fshort-enums", "-Wimplicit", "-Wparentheses"]
    if not arm: ccflags = ["-mthumb-interwork"] + ccflags
    r = subprocess.run([cc, *ccflags, "-o", sp, ip], capture_output=True, text=True)
    if r.returncode != 0:
        raise RuntimeError("[agbcc C->S 失败]\n" + (r.stderr or r.stdout)[:4000])
    return open(sp).read(), arm

def verify(name, cpath, opt="-O2"):
    """编译 + 链到 entry + 比对。返回 (ok, msg, got_bytes)。"""
    entry, size, shard = func_info(name)
    try:
        stxt, arm = compile_c_to_s(name, cpath, opt)
    except RuntimeError as e:
        return False, str(e), b""
    # 外部 FUN_/DAT_/PTR_ 以 .set 定为绝对地址, 让 gas 汇编期解析 bl/引用,
    # 避免 ld 对无类型绝对符号插互通跳板(veneer)破坏字节。
    pre = []
    for hx in sorted(set(REFRE.findall(stxt))):
        a = int(hx, 16)
        for pfx in ("FUN_", "DAT_", "_DAT_", "PTR_"):
            sym = f"{pfx}{hx}"
            if sym == name: continue
            if sym in stxt:
                pre.append(f".set {sym}, 0x{a:08x}")
    sp = os.path.join(WORK, name + ".s")
    op = os.path.join(WORK, name + ".o")
    ep = os.path.join(WORK, name + ".elf")
    bp = os.path.join(WORK, name + ".bin")
    lds= os.path.join(WORK, name + ".ld")
    open(sp, "w").write("\n".join(pre) + "\n" + stxt)
    r = subprocess.run([AS, "-mcpu=arm7tdmi", "-march=armv4t", "-mthumb-interwork", "-o", op, sp],
                       capture_output=True, text=True)
    if r.returncode != 0:
        return False, "[S->O 失败]\n" + r.stderr[:4000], b""
    with open(lds, "w") as fp:
        fp.write(f'INCLUDE "{SYMS}"\n')
        fp.write("SECTIONS { . = 0x%08x; .text : { *(.text*) *(.rodata*) } /DISCARD/ : { *(*) } }\n" % entry)
    r = subprocess.run([LD, "-T", lds, "-o", ep, op], capture_output=True, text=True)
    if r.returncode != 0:
        return False, "[链接失败]\n" + r.stderr[:4000], b""
    subprocess.run([OBJCOPY, "-O", "binary", "--only-section=.text", ep, bp], check=True)
    got = open(bp, "rb").read()[:size]
    orig = open(BIN, "rb").read()[entry-BASE: entry-BASE+size]
    if got == orig:
        return True, f"MATCH  {name}  entry 0x{entry:08x}  size {size}  ({opt}, {'ARM' if arm else 'Thumb'})", got
    n = min(len(got), len(orig))
    nd = sum(1 for i in range(n) if got[i] != orig[i]) + (1 if len(got) != len(orig) else 0)
    msg = (f"MISMATCH {name} entry 0x{entry:08x} size {size}: {nd} diff bytes ({opt})\n"
           f"  orig: {orig.hex()}\n  got : {got.hex()}")
    return False, msg, got

def main():
    if len(sys.argv) < 2:
        raise SystemExit(__doc__)
    name = sys.argv[1]
    opt, cpath = "-O2", None
    for a in sys.argv[2:]:
        if a.startswith("-O"): opt = a
        else: cpath = a
    if cpath is None:
        _, _, shard = func_info(name)
        cpath = os.path.join(ROOT, "archive", "code_c", "funcs", shard, name + ".c")
    ok, msg, _ = verify(name, cpath, opt)
    print(msg)
    return 0 if ok else 2

if __name__ == "__main__":
    sys.exit(main())

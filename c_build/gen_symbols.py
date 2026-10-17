#!/usr/bin/env python3
# 生成 c_build/symbols.ld: 为所有 FUN_/DAT_ 符号 PROVIDE 其原始绝对地址。
#   * FUN_(Thumb) = entry | 1  (R_ARM_THM_CALL 互通需置低位); FUN_(ARM)=entry
#   * DAT_xxxxxxxx = 0xxxxxxxx (地址即在名字里)
# PROVIDE 仅在符号未被对象定义时生效 => 任一单函数 .o 可链此脚本, 自身符号来自对象,
# 其余外部 FUN_/DAT_ 由本脚本补地址, 从而单独验证字节一致。
import os, csv, re, sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
IDX  = os.path.join(ROOT, "archive", "code_c", "funcs_index.csv")
TSV  = os.path.join(ROOT, "archive", "code_c", "code.bin.units.tsv")
CDIR = os.path.join(ROOT, "archive", "code_c", "funcs")
OUT  = os.path.join(HERE, "symbols.ld")
DECL = os.path.join(HERE, "extern_decls.h")
BASE = 0x08000000

def arm_entries():
    # 从 units.tsv 找出 mode==A 的代码单元起始(绝对地址), 用于判断 FUN 是否 ARM。
    arm = set()
    with open(TSV) as f:
        for line in f:
            p = line.rstrip("\n").split("\t")
            if len(p) < 4: continue
            try: off = int(p[0], 16)
            except ValueError: continue
            kind, mode = p[2], p[3]
            if kind == "I" and mode == "A":
                arm.add(off)  # off 含 imageBase
    return arm

def main():
    arm = arm_entries()
    funcs = {}
    with open(IDX) as f:
        for row in csv.DictReader(f):
            ent = int(row["entry"], 16)
            funcs[row["name"]] = ent
    # 扫所有 C 收集 DAT_ 引用地址
    dat = set()
    pat = re.compile(r'\b(?:_?DAT|PTR)_([0-9A-Fa-f]{8})\b')
    for r, _, fs in os.walk(CDIR):
        for fn in fs:
            if not fn.endswith(".c"): continue
            txt = open(os.path.join(r, fn), encoding="utf-8", errors="ignore").read()
            for m in pat.finditer(txt):
                dat.add(int(m.group(1), 16))
    lines = ["/* 自动生成: 所有 FUN_/DAT_ 原始绝对地址 (PROVIDE, 不覆盖对象定义) */"]
    for name, ent in sorted(funcs.items(), key=lambda kv: kv[1]):
        val = ent if ent in arm else (ent | 1)
        lines.append(f"PROVIDE( {name} = 0x{val:08x} );")
    for a in sorted(dat):
        lines.append(f"PROVIDE( DAT_{a:08x} = 0x{a:08x} );")
        lines.append(f"PROVIDE( _DAT_{a:08x} = 0x{a:08x} );")
        lines.append(f"PROVIDE( PTR_{a:08x} = 0x{a:08x} );")
    open(OUT, "w").write("\n".join(lines) + "\n")
    # extern_decls.h: 让原始 C 能过编译 —— 每个 DAT_/_DAT_/PTR_ 声明为外部变量。
    # 类型先统一给 unsigned int(地址/字量), 字节匹配阶段再按需逐个改宽度。
    # FUN_ 不声明: 留隐式声明(仅告警), 避免与函数定义的返回类型冲突。
    d = ["/* 自动生成: DAT_/PTR_ 外部声明, 仅为可编译; 宽度匹配时再细化 */",
         "#ifndef EXTERN_DECLS_H", "#define EXTERN_DECLS_H"]
    for a in sorted(dat):
        d.append(f"extern unsigned int DAT_{a:08x};")
        d.append(f"extern unsigned int _DAT_{a:08x};")
        d.append(f"extern unsigned int PTR_{a:08x};")
    d.append("#endif")
    open(DECL, "w").write("\n".join(d) + "\n")
    print(f"symbols.ld: {len(funcs)} FUN + {len(dat)} DAT -> {OUT}")
    print(f"extern_decls.h: {len(dat)} DAT -> {DECL}")

if __name__ == "__main__":
    main()

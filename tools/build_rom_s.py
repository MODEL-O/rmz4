#!/usr/bin/env python3
# 顶层 rom.s 生成 + 全 ROM 字节一致校验。
#   * 代码区 0..CODE_END: 内联 split 出的 master 主体(per-func .inc 的 .include 与内联字节);
#   * 资源区: 按 manifest 逐段 .incbin archive/res/*.bin, 填充段 .fill n,1,0xFF;
#   * 汇编 rom.s -> 链接基址0 -> objcopy -> 与原 ROM 比 sha1。
import os, json, subprocess, hashlib, sys
try: sys.stdout.reconfigure(encoding='utf-8')
except Exception: pass
import gen_asm as g

ROOT   = g.ROOT
ASMD   = os.path.join(ROOT, "asm")
MASTER = os.path.join(ASMD, "code.s")            # split_asm 产出的代码区主文件
ROMS   = os.path.join(ROOT, "rom.s")
MAN    = os.path.join(ROOT, "archive", "manifest.json")
ROMBIN = os.path.join(ROOT, "Rockman Zero 4.gba")
OP     = os.path.join(ROOT, "rom.o")
EP     = os.path.join(ROOT, "rom.elf")
BP     = os.path.join(ROOT, "rom_built.bin")
LDS    = os.path.join(ROOT, "rom.ld")

def code_body():
    # 取 asm/code.s 去掉前导 4 行头(.syntax/.section/.thumb/空), 其余 .org/.include/.byte 主体可复用
    lines = open(MASTER).read().splitlines()
    body = []
    skip = True
    for ln in lines:
        if skip:
            if ln.startswith(".org"):   # 第一条 .org 起为主体
                skip = False
            else:
                continue
        body.append(ln)
    return body

def main():
    man = json.load(open(MAN))
    code_end = man["code_end"]
    out = [".syntax unified",
           "@ rmz4-dev 顶层: 代码区(per-func .inc) + 资源区(.incbin) => 全 ROM 字节一致",
           ".section .rom,\"ax\",%progbits",
           ".thumb",
           ".org 0x0"]
    out += code_body()
    out.append("")
    out.append("@ ========== 资源区 ==========")
    for s in man["segments"]:
        a = s["a"]
        if a < code_end:
            continue   # 代码段已由上面主体覆盖
        if s["k"] == "fill":
            out.append(f".org 0x{a:x}")
            out.append(f"\t.fill 0x{s['n']:x}, 1, 0x{s['b']:02x}")
        else:
            out.append(f".org 0x{a:x}")
            p = s["f"].replace("\\", "/")
            out.append(f"\t.incbin \"archive/{p}\"")
    open(ROMS, "w").write("\n".join(out) + "\n")
    print(f"wrote {ROMS}")

    open(LDS, "w").write("SECTIONS { . = 0x0; .rom : { *(.rom) } /DISCARD/ : { *(*) } }\n")
    r = subprocess.run([g.AS, "-mcpu=arm7tdmi", "-I", ASMD, "-I", ROOT, "-o", OP, ROMS],
                       capture_output=True, text=True)
    if r.returncode != 0:
        print("AS FAIL:\n"+r.stderr[:4000]); return
    rl = subprocess.run([g.LD, "-T", LDS, "-o", EP, OP], capture_output=True, text=True)
    if rl.returncode != 0:
        print("LD FAIL:\n"+rl.stderr[:4000]); return
    subprocess.run([g.OBJCOPY, "-O", "binary", EP, BP], check=True)
    data = open(BP, "rb").read()
    orig = open(ROMBIN, "rb").read()
    if len(data) < len(orig):
        data = data + b"\xff"*(len(orig)-len(data))
    data = data[:len(orig)]
    got = hashlib.sha1(data).hexdigest()
    print(f"  built {len(data)} B  sha1={got}")
    print(f"  orig  {len(orig)} B  sha1={hashlib.sha1(orig).hexdigest()}")
    if data == orig:
        print("FULL-ROM BYTE-EXACT OK")
    else:
        diffs=[k for k in range(len(orig)) if data[k]!=orig[k]]
        print(f"MISMATCH diffs={len(diffs)} first:")
        for dd in diffs[:20]: print(f"  @0x{dd:08x} got {data[dd]:02x} want {orig[dd]:02x}")

if __name__ == "__main__":
    main()

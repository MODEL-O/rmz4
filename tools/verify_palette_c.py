#!/usr/bin/env python
"""Verify animation/palette.{s,c} link byte-identical to ROM.

palette has two named .rodata sections at distinct ROM bases:
  .rodata.gPlttAnimDataOffsets   @ 0x08C0C000  (self-relative; ok unlinked too)
  .rodata.gPlttAnimScriptTable   @ 0x08C18000  (absolute AnimCmd** ptrs; needs
                                                linking at base to resolve)
So we LINK each .o with a script placing each section at its base, objcopy each
section to binary, and compare to its ROM region. Run from rmz4-dev root."""
import subprocess
import sys

BIN = ("E:/GameProjects/rmz3/toolchain/arm/"
       "xpack-arm-none-eabi-gcc-15.2.1-1.1/bin")
GCC = f"{BIN}/arm-none-eabi-gcc.exe"
LD = f"{BIN}/arm-none-eabi-ld.exe"
OBJCOPY = f"{BIN}/arm-none-eabi-objcopy.exe"

ROM = open("Rockman Zero 4.gba", "rb").read()
BASE = 0x08000000
OFF_VA = 0x08C0C000
SCR_VA = 0x08C18000
SF = "src/data/animation/palette.s"
CF = "src/data/animation/palette.c"

LDS = """SECTIONS {
  . = 0x08C0C000;
  .out_off : { *(.rodata.gPlttAnimDataOffsets) }
  . = 0x08C18000;
  .out_scr : { *(.rodata.gPlttAnimScriptTable) }
  /DISCARD/ : { *(*) }
}
"""


def run(cmd):
    p = subprocess.run(cmd, capture_output=True, text=True)
    if p.returncode != 0:
        print("CMD FAILED:", " ".join(cmd))
        print(p.stdout)
        print(p.stderr)
        sys.exit(1)


def build(src, tag, extra):
    obj = f"build/_pal_{tag}.o"
    elf = f"build/_pal_{tag}.elf"
    run([GCC, "-c", "-fno-toplevel-reorder", *extra, src, "-o", obj])
    open("build/_pal.lds", "w").write(LDS)
    run([LD, "-T", "build/_pal.lds", obj, "-o", elf])
    off = f"build/_pal_{tag}_off.bin"
    scr = f"build/_pal_{tag}_scr.bin"
    run([OBJCOPY, "-O", "binary", "--only-section=.out_off", elf, off])
    run([OBJCOPY, "-O", "binary", "--only-section=.out_scr", elf, scr])
    return open(off, "rb").read(), open(scr, "rb").read()


def cmp(name, data, region):
    if data == region:
        print(f"PASS  {name}: {len(data)} bytes")
        return True
    print(f"FAIL  {name}: len={len(data)} region={len(region)}")
    for i in range(min(len(data), len(region))):
        if data[i] != region[i]:
            print(f"  first diff at +0x{i:x}: got 0x{data[i]:02x} "
                  f"want 0x{region[i]:02x}")
            break
    return False


def main():
    s_off, s_scr = build(SF, "s", [])
    c_off, c_scr = build(CF, "c", ["-O2", "-Iinclude"])
    r_off = ROM[OFF_VA - BASE:OFF_VA - BASE + len(s_off)]
    r_scr = ROM[SCR_VA - BASE:SCR_VA - BASE + len(s_scr)]
    ok = True
    ok &= cmp("palette.s offsets vs ROM", s_off, r_off)
    ok &= cmp("palette.c offsets vs ROM", c_off, r_off)
    ok &= cmp("palette.s script  vs ROM", s_scr, r_scr)
    ok &= cmp("palette.c script  vs ROM", c_scr, r_scr)
    if c_off == s_off and c_scr == s_scr:
        print("PASS  palette.c == palette.s")
    else:
        print("FAIL  palette.c != palette.s")
        ok = False
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()

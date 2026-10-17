#!/usr/bin/env python
"""Verify src/data/tilesets.c (and tilesets.s) assemble byte-identical to ROM.

Compiles both forms, extracts .rodata, and compares each against the ROM
region starting at 0x08df2000 (length taken from the assembled .s). Run from
rmz4-dev root.
"""
import subprocess
import sys

BIN = ("E:/GameProjects/rmz3/toolchain/arm/"
       "xpack-arm-none-eabi-gcc-15.2.1-1.1/bin")
GCC = f"{BIN}/arm-none-eabi-gcc.exe"
OBJCOPY = f"{BIN}/arm-none-eabi-objcopy.exe"

ROM = open("Rockman Zero 4.gba", "rb").read()
TABLE_FOFS = 0x08df2000 - 0x08000000


def run(cmd):
    p = subprocess.run(cmd, capture_output=True, text=True)
    if p.returncode != 0:
        print("CMD FAILED:", " ".join(cmd))
        print(p.stdout)
        print(p.stderr)
        sys.exit(1)


def build_rodata(src, obj, binout, extra):
    run([GCC, "-c", "-fno-toplevel-reorder", *extra, src, "-o", obj])
    run([OBJCOPY, "-O", "binary", "--only-section=.rodata", obj, binout])
    return open(binout, "rb").read()


def cmp(name, data, region):
    if data == region:
        print(f"PASS  {name}: .rodata == ROM region ({len(data)} bytes)")
        return True
    print(f"FAIL  {name}: len(rodata)={len(data)} len(region)={len(region)}")
    n = min(len(data), len(region))
    for i in range(n):
        if data[i] != region[i]:
            print(f"  first diff at +0x{i:x}: got 0x{data[i]:02x} "
                  f"want 0x{region[i]:02x}")
            break
    return False


def main():
    s = build_rodata("src/data/tilesets.s", "build/_tilesets_s.o",
                     "build/_tilesets_s.bin", [])
    c = build_rodata("src/data/tilesets.c", "build/_tilesets_c.o",
                     "build/_tilesets_c.bin", ["-O2", "-Iinclude"])
    region = ROM[TABLE_FOFS:TABLE_FOFS + len(s)]
    ok = cmp("tilesets.s", s, region)
    ok &= cmp("tilesets.c", c, region)
    if c == s:
        print("PASS  tilesets.c .rodata == tilesets.s .rodata")
    else:
        print("FAIL  tilesets.c != tilesets.s")
        ok = False
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()

#!/usr/bin/env python
"""Verify src/data/bgmaps.c (and bgmaps.s) assemble byte-identical to ROM.

Compiles both forms to an object, extracts the .rodata section, and compares
each against ROM[0xb2c000:0xb6b918]. Run from rmz4-dev root.
"""
import subprocess
import sys

BIN = ("E:/GameProjects/rmz3/toolchain/arm/"
       "xpack-arm-none-eabi-gcc-15.2.1-1.1/bin")
GCC = f"{BIN}/arm-none-eabi-gcc.exe"
OBJCOPY = f"{BIN}/arm-none-eabi-objcopy.exe"

ROM = open("Rockman Zero 4.gba", "rb").read()
REGION = ROM[0xb2c000:0xb6b918]  # VA 0x08b2c000..0x08b6b918


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


def cmp(name, data):
    if data == REGION:
        print(f"PASS  {name}: .rodata == ROM[0xb2c000:0xb6b918] "
              f"({len(data)} bytes)")
        return True
    print(f"FAIL  {name}: len(rodata)={len(data)} len(region)={len(REGION)}")
    n = min(len(data), len(REGION))
    for i in range(n):
        if data[i] != REGION[i]:
            print(f"  first diff at +0x{i:x}: got 0x{data[i]:02x} "
                  f"want 0x{REGION[i]:02x}")
            break
    return False


def main():
    s = build_rodata("src/data/bgmaps.s", "build/_bgmaps_s.o",
                     "build/_bgmaps_s.bin", [])
    c = build_rodata("src/data/bgmaps.c", "build/_bgmaps_c.o",
                     "build/_bgmaps_c.bin", ["-O2", "-Iinclude"])
    ok = cmp("bgmaps.s", s)
    ok &= cmp("bgmaps.c", c)
    if c == s:
        print("PASS  bgmaps.c .rodata == bgmaps.s .rodata")
    else:
        print("FAIL  bgmaps.c != bgmaps.s")
        ok = False
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()

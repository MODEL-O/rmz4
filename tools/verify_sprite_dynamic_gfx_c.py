#!/usr/bin/env python
"""Verify graphic_table/sprite_dynamic.{s,c} assemble byte-identical to ROM.
Run from rmz4-dev root."""
import subprocess
import sys

BIN = ("E:/GameProjects/rmz3/toolchain/arm/"
       "xpack-arm-none-eabi-gcc-15.2.1-1.1/bin")
GCC = f"{BIN}/arm-none-eabi-gcc.exe"
OBJCOPY = f"{BIN}/arm-none-eabi-objcopy.exe"

ROM = open("Rockman Zero 4.gba", "rb").read()
FOFS = 0x088CC000 - 0x08000000
SF = "src/data/graphic_table/sprite_dynamic.s"
CF = "src/data/graphic_table/sprite_dynamic.c"


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
    s = build_rodata(SF, "build/_sd_s.o", "build/_sd_s.bin", [])
    c = build_rodata(CF, "build/_sd_c.o", "build/_sd_c.bin", ["-O2", "-Iinclude"])
    region = ROM[FOFS:FOFS + len(s)]
    ok = cmp("sprite_dynamic.s vs ROM", s, region)
    ok &= cmp("sprite_dynamic.c vs ROM", c, region)
    if c == s:
        print("PASS  sprite_dynamic.c == sprite_dynamic.s")
    else:
        print("FAIL  sprite_dynamic.c != sprite_dynamic.s")
        ok = False
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()

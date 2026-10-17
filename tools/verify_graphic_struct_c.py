#!/usr/bin/env python
"""Verify the graphic_table ColorGraphic[] C forms assemble byte-identical to
their .s and to the ROM region. Run from rmz4-dev root."""
import subprocess
import sys

BIN = ("E:/GameProjects/rmz3/toolchain/arm/"
       "xpack-arm-none-eabi-gcc-15.2.1-1.1/bin")
GCC = f"{BIN}/arm-none-eabi-gcc.exe"
OBJCOPY = f"{BIN}/arm-none-eabi-objcopy.exe"

ROM = open("Rockman Zero 4.gba", "rb").read()

# (name, sfile, cfile, rom_va, count)
TARGETS = [
    ("bg", "src/data/graphic_table/bg.s", "src/data/graphic_table/bg.c",
     0x08B6C000, 174),
    ("dialog", "src/data/graphic_table/dialog.s", "src/data/graphic_table/dialog.c",
     0x08BFC000, 52),
    ("sprite_static", "src/data/graphic_table/sprite_static.s",
     "src/data/graphic_table/sprite_static.c", 0x08C44000, 248),
]


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
    ok = True
    for name, sf, cf, va, n in TARGETS:
        fofs = va - 0x08000000
        s = build_rodata(sf, f"build/_{name}_s.o", f"build/_{name}_s.bin", [])
        c = build_rodata(cf, f"build/_{name}_c.o", f"build/_{name}_c.bin",
                         ["-O2", "-Iinclude"])
        region = ROM[fofs:fofs + len(s)]
        ok &= cmp(f"{name}.s vs ROM", s, region)
        ok &= cmp(f"{name}.c vs ROM", c, region)
        if c == s:
            print(f"PASS  {name}.c == {name}.s")
        else:
            print(f"FAIL  {name}.c != {name}.s")
            ok = False
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()

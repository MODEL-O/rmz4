#!/usr/bin/env python
"""Verify strings/strings.c links byte-identical to ROM.

Each gStringData label is emitted as a `const u8 <label>[]` in its own named
section (.rodata.<label>). We link all of them at their ROM addresses with a
generated script, objcopy each to binary, and compare to the ROM region.

(strings.s itself uses charmap `.string` directives plain gas cannot assemble, so
there is no .s-vs-ROM leg here; export_strings_c.py already cross-checks the
encoder output against ROM independently.) Run from rmz4-dev root."""
import re
import subprocess
import sys

BIN = ("E:/GameProjects/rmz3/toolchain/arm/"
       "xpack-arm-none-eabi-gcc-15.2.1-1.1/bin")
GCC = f"{BIN}/arm-none-eabi-gcc.exe"
LD = f"{BIN}/arm-none-eabi-ld.exe"
OBJCOPY = f"{BIN}/arm-none-eabi-objcopy.exe"

BASE = 0x08000000
ROM = open("Rockman Zero 4.gba", "rb").read()
SF = "src/data/strings/strings.s"
CF = "src/data/strings/strings.c"
LABEL_RE = re.compile(r"^(\w+)::\s*@\s*0x([0-9A-Fa-f]+)")


def run(cmd):
    p = subprocess.run(cmd, capture_output=True, text=True)
    if p.returncode != 0:
        print("CMD FAILED:", " ".join(cmd))
        print(p.stdout)
        print(p.stderr)
        sys.exit(1)


def labels():
    out = []
    for l in open(SF, encoding="utf-8"):
        m = LABEL_RE.match(l)
        if m:
            out.append((m.group(1), int(m.group(2), 16)))
    return out


def main():
    labs = labels()
    base = labs[0][1]
    lds = ["SECTIONS {",
           f"  . = 0x{base:08X};",
           "  .out : { *(.rodata.gStringData) }",
           "  /DISCARD/ : { *(*) }",
           "}"]
    open("build/_str.lds", "w").write("\n".join(lds) + "\n")

    run([GCC, "-c", "-fno-toplevel-reorder", "-O2", "-Iinclude", CF,
         "-o", "build/_str_c.o"])
    run([LD, "-T", "build/_str.lds", "build/_str_c.o", "-o", "build/_str_c.elf"])
    run([OBJCOPY, "-O", "binary", "--only-section=.out",
         "build/_str_c.elf", "build/_str_c.bin"])
    data = open("build/_str_c.bin", "rb").read()
    region = ROM[base - BASE:base - BASE + len(data)]
    if data == region:
        print(f"PASS  strings.c vs ROM: {len(labs)} labels, {len(data)} bytes "
              f"@ 0x{base:08X}")
        sys.exit(0)
    print(f"FAIL  strings.c vs ROM: len={len(data)} region={len(region)}")
    for i in range(min(len(data), len(region))):
        if data[i] != region[i]:
            print(f"  first diff at +0x{i:x}: got 0x{data[i]:02x} "
                  f"want 0x{region[i]:02x}")
            break
    sys.exit(1)


if __name__ == "__main__":
    main()

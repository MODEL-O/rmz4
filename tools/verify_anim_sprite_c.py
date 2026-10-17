#!/usr/bin/env python
"""Verify animation/sprite_{static,dynamic}.{s,c} link byte-identical to ROM.

Each file has a metasprite region (pointer table @ meta_base + per-motion
metasprite blocks) and a cmd region (pointer table @ cmd_base + sequence blocks).
Both regions are contiguous in ROM. We link with a script that gathers each
table's section + its body sections (address-ordered by .include order) into one
output section at its ROM base, objcopy to binary, and compare to the ROM region.
Three-way: .s==ROM, .c==ROM, .c==.s. Run from rmz4-dev root."""
import subprocess
import sys

BIN = ("E:/GameProjects/rmz3/toolchain/arm/"
       "xpack-arm-none-eabi-gcc-15.2.1-1.1/bin")
GCC = f"{BIN}/arm-none-eabi-gcc.exe"
LD = f"{BIN}/arm-none-eabi-ld.exe"
OBJCOPY = f"{BIN}/arm-none-eabi-objcopy.exe"

ROM = open("Rockman Zero 4.gba", "rb").read()
BASE = 0x08000000

# key: (meta_sym, meta_base, body_prefix_meta, cmd_sym, cmd_base, body_prefix_cmd)
KEYS = {
    "static": ("gStaticMotionMetaspriteTable", 0x08C1C000, "gMetaSprite_static_",
               "gStaticMotionCmdTable", 0x08C3C000, "gAnimationSequence_static_"),
    "dynamic": ("gDynamicMotionMetaspriteTable", 0x088A7000, "gMetaSprite_dynamic_",
                "gDynamicMotionCmdTable", 0x088C7000, "gAnimationSequence_dynamic_"),
}


def run(cmd):
    p = subprocess.run(cmd, capture_output=True, text=True)
    if p.returncode != 0:
        print("CMD FAILED:", " ".join(cmd))
        print(p.stdout)
        print(p.stderr)
        sys.exit(1)


def lds(meta_sym, meta_base, mp, cmd_sym, cmd_base, cp):
    return f"""SECTIONS {{
  . = 0x{meta_base:08X};
  .meta : {{ *(.rodata.{meta_sym}) *(.rodata.{mp}*) }}
  . = 0x{cmd_base:08X};
  .cmd : {{ *(.rodata.{cmd_sym}) *(.rodata.{cp}*) }}
  /DISCARD/ : {{ *(*) }}
}}
"""


def build(key, src, tag, extra, lscript):
    obj = f"build/_as_{key}_{tag}.o"
    elf = f"build/_as_{key}_{tag}.elf"
    run([GCC, "-c", "-fno-toplevel-reorder", *extra, src, "-o", obj])
    open(f"build/_as_{key}.lds", "w").write(lscript)
    run([LD, "-T", f"build/_as_{key}.lds", obj, "-o", elf])
    m = f"build/_as_{key}_{tag}_m.bin"
    c = f"build/_as_{key}_{tag}_c.bin"
    run([OBJCOPY, "-O", "binary", "--only-section=.meta", elf, m])
    run([OBJCOPY, "-O", "binary", "--only-section=.cmd", elf, c])
    return open(m, "rb").read(), open(c, "rb").read()


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
    for key, (ms, mb, mp, cs, cb, cp) in KEYS.items():
        L = lds(ms, mb, mp, cs, cb, cp)
        sm, sc = build(key, f"src/data/animation/sprite_{key}.s", "s", [], L)
        cm, cc = build(key, f"src/data/animation/sprite_{key}.c", "c",
                       ["-O2", "-Iinclude"], L)
        rm = ROM[mb - BASE:mb - BASE + len(sm)]
        rc = ROM[cb - BASE:cb - BASE + len(sc)]
        ok &= cmp(f"{key} meta .s vs ROM", sm, rm)
        ok &= cmp(f"{key} meta .c vs ROM", cm, rm)
        ok &= cmp(f"{key} cmd  .s vs ROM", sc, rc)
        ok &= cmp(f"{key} cmd  .c vs ROM", cc, rc)
        if cm == sm and cc == sc:
            print(f"PASS  sprite_{key}.c == sprite_{key}.s")
        else:
            print(f"FAIL  sprite_{key}.c != sprite_{key}.s")
            ok = False
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()

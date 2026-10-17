#!/usr/bin/env python
"""Export rmz4 background tilemaps in the rmz3 data/bgmaps layout.

Source table (found via find_bgmaps.py; mirror of rmz3 src/data/bgmaps.c):
  gBgMapOffsets @ 0x08b2c000 = 178 self-relative u32 offsets, one per BG-map
  slot; each -> struct BgMapHeader { u32 magic=0x00010001; u16 w; u16 h; }
  followed by u16 map[w*h]. First offset == table end (table & data contiguous).
  161 unique maps (17 alias slots reuse an earlier map). Region
  0x08b2c2c8..0x08b6b918, then 0xff padding.

Output (mirrors rmz3 data/bgmaps/ + src/data/bgmaps.c, but asm form):
  data/bgmaps/NNN.bin   raw u16 tilemap slice (header stripped)
  src/data/bgmaps.s     .equiv + gBgMapOffsets (178 self-rel .word) +
                        per-map BgMapHeader{magic,w,h} + .incbin

Byte note: 2 maps (idx 44, 52 -> 0x08b38e90 / 0x08b3cad0) declare 32x32 but
telescope into the next map (its lower half IS the next map's header+data), so
their .bin is sized by the next unique target, not w*h*2. This keeps the
assembled bgmaps.s byte-identical to the ROM region.
"""
import os

BASE = 0x08000000
ROM = open("Rockman Zero 4.gba", "rb").read()
N = len(ROM)
TABLE = 0x08b2c000
NENT = 178
OUT = "data/bgmaps"


def u16(o):
    return ROM[o] | (ROM[o+1] << 8)


def u32(o):
    return int.from_bytes(ROM[o:o+4], "little")


def main():
    t0 = TABLE - BASE
    ents = [u32(t0 + 4*k) for k in range(NENT)]
    targets = [t0 + 4*k + ents[k] for k in range(NENT)]   # file offsets
    uniq = sorted(set(targets))
    # rmz3 convention: name each map by the SLOT index of its FIRST occurrence
    # (alias slots reuse an earlier map and get no bin of their own).
    first_slot = {}
    for k, tg in enumerate(targets):
        first_slot.setdefault(tg, k)
    name = {o: f"{first_slot[o]:03d}" for o in uniq}
    sym = {o: f"gBgMap{first_slot[o]:03d}" for o in uniq}

    # last map ends per its own header (no next target to bound it)
    lw = u16(uniq[-1]+4); lh = u16(uniq[-1]+6)
    region_end = uniq[-1] + 8 + lw*lh*2          # file offset, exclusive
    bounds = uniq + [region_end]

    os.makedirs(OUT, exist_ok=True)
    sizes = {}
    for i, o in enumerate(uniq):
        nxt = bounds[i+1]
        data = ROM[o+8: nxt]            # strip 8-byte header
        sizes[o] = len(data)
        open(os.path.join(OUT, f"{name[o]}.bin"), "wb").write(data)

    # ---- src/data/bgmaps.s ----
    S = [".equiv BGMAP_MAGIC, 0x00010001", "",
         ".section .rodata", ".balign 4, 0", "",
         "@ rmz4 background tilemaps (mirror of rmz3 src/data/bgmaps.c)",
         f"@ gBgMapOffsets @ 0x{TABLE:08x}, {NENT} slots, "
         f"{len(uniq)} unique maps",
         f"@ region 0x{uniq[0]+BASE:08x}..0x{region_end+BASE:08x}", "",
         ".global gBgMapOffsets", "gBgMapOffsets:"]
    for k in range(NENT):
        tgt = targets[k]
        shared = f"  @ alias of slot {first_slot[tgt]}" \
            if first_slot[tgt] != k else ""
        S.append(f"\t.word {sym[tgt]} - .  @ slot {k:3}{shared}")
    S.append("")
    for o in uniq:
        w = u16(o+4); h = u16(o+6)
        note = ""
        if sizes[o] != w*h*2:
            note = f"  @ telescoped: bin={sizes[o]}B (shares tail w/ next map)"
        S.append(f".global {sym[o]}")
        S.append(f"{sym[o]}:")
        S.append(f"\t.4byte BGMAP_MAGIC")
        S.append(f"\t.2byte {w}, {h}\t@ w, h{note}")
        S.append(f"\t.incbin \"{OUT}/{name[o]}.bin\"")
        S.append("")
    open("src/data/bgmaps.s", "w", encoding="utf-8").write("\n".join(S))

    # ---- report ----
    aliases = NENT - len(uniq)
    tele = sum(1 for o in uniq if sizes[o] != u16(o+4)*u16(o+6)*2)
    print(f"gBgMapOffsets @ 0x{TABLE:08x}: {NENT} slots, {len(uniq)} unique "
          f"maps, {aliases} aliases")
    print(f"region VA 0x{uniq[0]+BASE:08x}..0x{region_end+BASE:08x}")
    print(f"telescoped maps: {tele}")
    print(f"wrote {len(uniq)} bins under {OUT}/ + src/data/bgmaps.s")


if __name__ == "__main__":
    main()

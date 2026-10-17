#!/usr/bin/env python
"""Locate rmz4's gStageTilesetOffsets equivalent.

rmz3 model (see asm/wip/UpdateStageTileset.inc + map):
  gStageTilesetOffsets @ 0x08559ed8 = run of N self-relative .word offsets,
  each -> a per-stage array of ColorGraphic[20B]; first offset points to the
  byte right after the table (table & data contiguous). Stage tile chunks are
  loaded via RequestGraphicTransfer(entry, 0x4000)+LoadPalette(entry+0xc).

We scan the ROM for the same structure: a window of >=K consecutive u32 values
that, read as self-relative pointers, each land on a plausible ColorGraphic.
"""
import sys

BASE = 0x08000000
ROM = "Rockman Zero 4.gba"


def main():
    d = open(ROM, "rb").read()
    n = len(d)

    def u32(o):
        return d[o] | (d[o+1] << 8) | (d[o+2] << 16) | (d[o+3] << 24)

    def u16(o):
        return d[o] | (d[o+1] << 8)

    def in_rom(va):
        return BASE <= va < BASE + n

    def valid_colorgraphic(off):
        """off = file offset of a ColorGraphic[20]; return True if plausible."""
        if off + 20 > n:
            return False
        src = u32(off)
        gfx = off + src                      # self-relative gfx
        if not (0 <= gfx < n) or src == 0 or src > 0x800000:
            return False
        sizeOfs = u32(off + 4)
        size = sizeOfs & 0x3FFFFF
        if size == 0 or size > 0x40000:
            return False
        props = u16(off + 10)
        if not (props & 0x20):               # BPP4 expected for tiles
            return False
        psrc = u32(off + 12)
        pal = off + 12 + psrc
        if not (0 <= pal < n) or psrc == 0 or psrc > 0x800000:
            return False
        psize = u16(off + 16)
        if psize == 0 or psize % 32 != 0 or psize > 0x400:
            return False
        if d[off + 18] > 1:                  # lz77 flag 0/1
            return False
        if d[off + 19] >= 32:                # palette dst slot
            return False
        return True

    # scan: for each 4-aligned position, count how many consecutive self-rel
    # word offsets land on a valid ColorGraphic.
    K = 6
    lo, hi = 0x00400000, min(n, 0x00E00000)
    hits = []
    i = lo
    while i + 4 <= hi:
        cnt = 0
        targets = []
        j = i
        while j + 4 <= hi:
            v = u32(j)
            tgt = j + v                       # self-relative
            if 0 <= tgt < n and 0 < v < 0x800000 and valid_colorgraphic(tgt):
                cnt += 1
                targets.append((j, tgt))
                j += 4
            else:
                break
        if cnt >= K:
            hits.append((i, cnt, targets))
            i = j
        else:
            i += 4
    for off, cnt, tg in hits:
        va = off + BASE
        first = tg[0][1] + BASE
        last = tg[-1][1] + BASE
        print(f"TABLE @ 0x{va:08x}  entries={cnt}  "
              f"first->0x{first:08x}  last->0x{last:08x}  "
              f"first_delta=0x{tg[0][0]+u32(tg[0][0]) - tg[0][0]:x}")
    print(f"\n{len(hits)} candidate table(s)")


if __name__ == "__main__":
    main()

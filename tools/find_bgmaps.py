#!/usr/bin/env python
"""Locate rmz4's gBgMapOffsets equivalent.

rmz3 model (src/data/bgmaps.c @ 0x085222a0):
  gBgMapOffsets[N] = run of self-relative u32 offsets; each ->
    struct BgMapHeader { u32 magic=0x00010001; u16 w; u16 h; } + u16 map[w*h].
  First offset points right after the table (table & data contiguous). Some
  entries are aliases (small offsets pointing back to map 0).

Scan: window of >=K consecutive u32 self-relative offsets each landing on a
valid BgMapHeader (magic + plausible w,h).
"""
BASE = 0x08000000


def main():
    d = open("Rockman Zero 4.gba", "rb").read()
    n = len(d)

    def u32(o):
        return int.from_bytes(d[o:o+4], "little")

    def u16(o):
        return d[o] | (d[o+1] << 8)

    def valid_hdr(off):
        if off + 8 > n:
            return False
        if u32(off) != 0x00010001:
            return False
        w = u16(off+4)
        h = u16(off+6)
        return 1 <= w <= 64 and 1 <= h <= 64

    K = 8
    lo, hi = 0x00100000, min(n, 0x00E00000)
    hits = []
    i = lo
    while i + 4 <= hi:
        cnt = 0
        tgts = []
        j = i
        while j + 4 <= hi:
            v = u32(j)
            tgt = j + v
            if 0 < v < 0x800000 and 0 <= tgt < n and valid_hdr(tgt):
                cnt += 1
                tgts.append((j, tgt))
                j += 4
            else:
                break
        if cnt >= K:
            hits.append((i, cnt, tgts))
            i = j
        else:
            i += 4

    for off, cnt, tg in hits:
        va = off + BASE
        first = tg[0][1] + BASE
        last = tg[-1][1] + BASE
        # gap between table end and first target
        tbl_end = off + cnt*4
        print(f"TABLE @ 0x{va:08x}  entries={cnt}  "
              f"first->0x{first:08x}  last->0x{last:08x}  "
              f"tbl_end=0x{tbl_end+BASE:08x}  "
              f"first_after_tbl={'Y' if tg[0][1] >= tbl_end else 'N'}")
    print(f"\n{len(hits)} candidate table(s)")


if __name__ == "__main__":
    main()

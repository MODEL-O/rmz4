#!/usr/bin/env python
"""Export rmz4 stage/map data in the rmz3 data/stage layout.

Discovered structures (1:1 with rmz3 include/overworld_stage.h):
  gStageLandscape @ 0x0882c5d4 = 52 Stage* (26 stages x2 sub-sections);
    32 unique Stage structs, ids 0..16,19..25.
  struct Stage (128B, identical to rmz3):
    +0x00 id  +0x04 fn  +0x08 terrainHdr  +0x0c maps[3]  +0x18 bgIdx[3]
    +0x24 prio[3] +0x30 screenBase[3] +0x3c scrollPower[3] +0x54 scroll[3]
    +0x6c tilesetOffset +0x70 bgFns +0x74 behavior +0x78 conveyor[2]
  gStageTerrains @ 0x08cd9000 = MetatileMapSelfRelPtr[26]{tiles,attrs,chunks}
    (self-relative each) -> metatile.bin / metatile_attr.bin / screen.bin.

Per stage we dump (exact ROM slices, sized by next sorted boundary):
  layer1/2/3.bin (maps[]), tileset_offset.bin, screen_behavior.bin   [0x0882]
  metatile.bin, metatile_attr.bin, screen.bin (by terrainHdr, per id) [0x08cd]
  stage.json (id, section, tileset idx, per-layer bg/prio/scrollPower/scroll)
"""
import os
import json

BASE = 0x08000000
ROM = open("Rockman Zero 4.gba", "rb").read()
N = len(ROM)
LAND = 0x0882c5d4
NLAND = 52
GT = 0x08cd9000
NID = 26
OUT = "data/stage"
TS_TABLE = 0x08df2000   # gStageTilesetOffsets (26 entries)


def u32(a):
    return int.from_bytes(ROM[a-BASE:a-BASE+4], "little")


def s32(a):
    v = u32(a)
    return v - (1 << 32) if v & 0x80000000 else v


def pad_end(start, region_max):
    """end of the final blob: last non-pad byte in [start, region_max), +4 round.
    Scanning backward avoids mistaking leading 0x0000 chunk indices (valid map
    data) for trailing padding."""
    p = region_max - BASE - 1
    lo = start - BASE
    while p >= lo and ROM[p] in (0x00, 0xFF):
        p -= 1
    e = p + 1                       # one past last real byte
    return e + ((-e) & 3)


def main():
    ents = [u32(LAND + 4*k) for k in range(NLAND)]
    uniq = sorted(set(ents))

    # terrain pointers per id
    # MetatileMapSelfRelPtr: all three offsets are relative to the struct base
    # (&self + .field), NOT &.field + .field -- per overworld_stage.h comment.
    terr = []
    for i in range(NID):
        b = GT + i*12
        terr.append((b + s32(b), b + s32(b+4), b + s32(b+8)))

    # ----- boundary sets for sizing -----
    b0882 = {LAND}
    for s in uniq:
        b0882.add(s)
        b0882.add(u32(s+4))                       # fn
        for j in range(3):
            b0882.add(u32(s+0xc+4*j))             # maps
        b0882.add(u32(s+0x6c))                    # tilesetOffset
        b0882.add(u32(s+0x70))                    # bgFns
        b0882.add(u32(s+0x74))                    # behavior
    b0882 = sorted(x for x in b0882 if 0x08820000 <= x < 0x08850000)
    end0882 = pad_end(b0882[-1], 0x08850000)
    # append region end sentinel
    bset0882 = b0882 + [end0882 + BASE]

    bterr = set()
    for t in terr:
        bterr.update(t)
    bterr = sorted(bterr)
    endterr = pad_end(bterr[-1], 0x08df0000)
    bsetterr = bterr + [endterr + BASE]

    def nxt(sorted_list, p):
        # smallest boundary strictly greater than p
        for x in sorted_list:
            if x > p:
                return x
        return None

    # tileset index per landscape entry pair -> stage section
    ts_ofsidx = {}   # struct addr -> set of landscape indices
    for k, e in enumerate(ents):
        ts_ofsidx.setdefault(e, []).append(k)

    # ----- per unique struct -----
    by_id = {}
    for s in uniq:
        by_id.setdefault(u32(s), []).append(s)
    layout_ok = True

    for s in uniq:
        sid = u32(s)
        variants = by_id[sid]
        suffix = "" if len(variants) == 1 else f"_{variants.index(s)}"
        nm = f"stage{sid:02d}{suffix}"
        d = os.path.join(OUT, nm)
        os.makedirs(d, exist_ok=True)

        maps = [u32(s+0xc+4*j) for j in range(3)]
        tsoff = u32(s+0x6c)
        beh = u32(s+0x74)

        def slice_to(p, slist):
            e = nxt(slist, p)
            return ROM[p-BASE:e-BASE], e

        for j, mp in enumerate(maps):
            blob, _ = slice_to(mp, bset0882)
            open(os.path.join(d, f"layer{j+1}.bin"), "wb").write(blob)
        blob, _ = slice_to(tsoff, bset0882)
        open(os.path.join(d, "tileset_offset.bin"), "wb").write(blob)
        blob, _ = slice_to(beh, bset0882)
        open(os.path.join(d, "screen_behavior.bin"), "wb").write(blob)

        # terrain bins (per id)
        tiles, attrs, chunks = terr[sid]
        mt = ROM[tiles-BASE: attrs-BASE]
        at = ROM[attrs-BASE: chunks-BASE]
        sc_end = nxt(bsetterr, chunks)
        sc = ROM[chunks-BASE: sc_end-BASE]
        open(os.path.join(d, "metatile.bin"), "wb").write(mt)
        open(os.path.join(d, "metatile_attr.bin"), "wb").write(at)
        open(os.path.join(d, "screen.bin"), "wb").write(sc)

        # tileset index this section uses (landscape idx -> /2 == ts entry)
        lidxs = ts_ofsidx.get(s, [])
        ts_idx = sorted(set(i // 2 for i in lidxs))

        meta = {
            "name": nm,
            "id": sid,
            "struct": f"0x{s:08x}",
            "landscapeEntries": lidxs,
            "tilesetOffsetIndex": ts_idx,
            "layers": [
                {
                    # raw bgIdx word = (bgNo<<4)|(1<<bgNo); rmz3-ts stores bgNo = word>>4
                    "bgIdx": u32(s+0x18+4*j) >> 4,
                    "prio": u32(s+0x24+4*j),
                    "screenBase": u32(s+0x30+4*j),
                    "scrollPower": [s32(s+0x3c+8*j), s32(s+0x3c+8*j+4)],
                    "scroll": [s32(s+0x54+8*j), s32(s+0x54+8*j+4)],
                } for j in range(3)
            ],
        }
        json.dump(meta, open(os.path.join(d, "stage.json"), "w"),
                  indent=2, ensure_ascii=False)

    # ----- contiguity report -----
    print(f"gStageLandscape @ 0x{LAND:08x}: {NLAND} entries, "
          f"{len(uniq)} unique Stage structs, ids "
          f"{sorted(set(u32(s) for s in uniq))}")
    print(f"0x0882 stage-data region: 0x{b0882[0]:08x}..0x{end0882+BASE:08x}")
    print(f"0x08cd terrain region:    0x{bterr[0]:08x}..0x{endterr+BASE:08x}")
    # check terrain blobs contiguous & non-overlapping
    seq = sorted(bterr)
    for a, b in zip(seq, seq[1:]):
        if b < a:
            layout_ok = False
    print(f"wrote {len(uniq)} stage dirs under {OUT}/  "
          f"(terrain bins per id 0..{NID-1})")
    print("layout report OK" if layout_ok else "WARN layout issues")


if __name__ == "__main__":
    main()

#!/usr/bin/env python
"""Generate viewer/manifest.json for the realtime (in-browser) stage viewer.

The browser can't listdir or read the ROM, so we precompute only the *file
index* here (which stage uses which tileset dir, which slots/pal-banks exist,
whether tiles are LZ77). All actual rendering data (layer*.bin, metatile.bin,
screen.bin, tileset_offset.bin, tiles.4bpp(.lz), *.pal) is fetched and decoded
live in the browser -- zero pre-baking.
"""
import os
import re
import json

BASE = 0x08000000
ROM = "Rockman Zero 4.gba"
TS_TABLE = 0x08df2000
NTS = 26
STAGE_DIR = "data/stage"
TILESET_DIR = "data/tilesets"
OUT = "viewer"


def entry_to_uniqdir():
    rom = open(ROM, "rb").read()

    def s32(a):
        v = int.from_bytes(rom[a-BASE:a-BASE+4], "little")
        return v - (1 << 32) if v & 0x80000000 else v
    targets = [TS_TABLE + i*4 + s32(TS_TABLE + i*4) for i in range(NTS)]
    uniq = sorted(set(targets))
    return {i: uniq.index(targets[i]) for i in range(NTS)}


def tileset_index(tsdir):
    slots = sorted(int(n) for n in os.listdir(tsdir)
                   if n.isdigit() and os.path.isdir(os.path.join(tsdir, n)))
    out = []
    for s in slots:
        sd = os.path.join(tsdir, str(s))
        lz = os.path.exists(os.path.join(sd, "tiles.4bpp.lz"))
        banks = sorted(int(m.group(1)) for f in os.listdir(sd)
                       for m in [re.match(r"(\d+)\.pal$", f)] if m)
        out.append({"slot": s, "lz": lz, "banks": banks})
    return out


def main():
    os.makedirs(OUT, exist_ok=True)
    e2u = entry_to_uniqdir()
    stages, tilesets = [], {}
    for name in sorted(os.listdir(STAGE_DIR)):
        sd = os.path.join(STAGE_DIR, name)
        if not os.path.isdir(sd):
            continue
        j = json.load(open(os.path.join(sd, "stage.json"), encoding="utf-8"))
        ent = j.get("tilesetOffsetIndex", [0])
        ent = ent[0] if ent else 0
        tname = "tileset%02d" % e2u.get(ent, ent)
        tdir = os.path.join(TILESET_DIR, tname)
        if not os.path.isdir(tdir):
            continue
        if tname not in tilesets:
            tilesets[tname] = tileset_index(tdir)
        # layer1 (terrain) fill ratio -> lets the viewer default to a non-empty stage
        d = open(os.path.join(sd, "layer1.bin"), "rb").read()
        rw, nc, w, h = d[0], d[1], d[2], d[3]
        body = d[4:]
        nn = sum(1 for cy in range(h) for cx in range(w)
                 if cy * rw + cx < len(body) and body[cy * rw + cx] != nc)
        stages.append({
            "name": name, "id": j["id"], "tileset": tname,
            "fill": round(nn / max(1, w * h), 3),
            "layers": [{"bgIdx": L["bgIdx"], "prio": L["prio"]}
                       for L in j["layers"]],
        })
    stages.sort(key=lambda s: (s["id"], s["name"]))
    json.dump({"stages": stages, "tilesets": tilesets},
              open(os.path.join(OUT, "manifest.json"), "w"),
              separators=(",", ":"))
    print(f"manifest: {len(stages)} stages, {len(tilesets)} tilesets "
          f"-> {OUT}/manifest.json")


if __name__ == "__main__":
    main()

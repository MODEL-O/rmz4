#!/usr/bin/env python
"""Export rmz4 stage tilesets in the rmz3 data/tilesets layout.

Source table (see reference_rmz4_tilesets):
  gStageTilesetOffsets @ 0x08df2000 = 26 self-relative .word, one per stage,
  each -> array of ColorGraphic[20] tile chunks; 25 unique tilesets, data
  inlined right after each descriptor array; region 0x08df2000..0x08fdf634.

Mirrors rmz3-dev/data/tilesets/<name>/:
  header.inc                  ColorGraphic descriptors + .incbin data
  <chunk>/tiles.4bpp[.lz]     exact ROM gfx slice (compressed kept as .lz)
  <chunk>/NN.pal              palette split into 32B(16-color) chunks by dst
  <chunk>/preview.png         decoded preview (LZ77->4bpp->BGR555)
And src/data/tilesets.s = .equiv flags + offset table + per-tileset .include.

Byte-verified: assembling src/data/tilesets.s reproduces ROM 0x08df2000 region.
"""
import os
import numpy as np
from PIL import Image
import lz77

BASE = 0x08000000
ROM = open("Rockman Zero 4.gba", "rb").read()
N = len(ROM)
TABLE = 0x08df2000
NENT = 26
MAP2D, LZ77, NO_PAL, BPP4 = 1, 2, 4, 0x20
TS_DIR = "data/tilesets"
DOTS = "@" + ";" + "@" * 36


def u16(o):
    return ROM[o] | (ROM[o+1] << 8)


def u32(o):
    return int.from_bytes(ROM[o:o+4], "little")


def props_expr(p):
    flags = [(BPP4, "BPP4"), (LZ77, "LZ77"), (MAP2D, "MAP2D"), (NO_PAL, "NO_PAL")]
    parts, left = [], p
    for bit, name in flags:
        if p & bit:
            parts.append(name)
            left &= ~bit
    if left:
        parts.append(f"0x{left:x}")
    return " | ".join(parts) if parts else "0"


def pal_rgba(off, ncol):
    out = []
    for i in range(ncol):
        c = ROM[off+i*2] | (ROM[off+i*2+1] << 8)
        r = (c & 31) << 3; g = ((c >> 5) & 31) << 3; b = ((c >> 10) & 31) << 3
        r |= r >> 5; g |= g >> 5; b |= b >> 5
        out.append((r, g, b, 0 if i == 0 else 255))
    return out


def gray():
    return [(0, 0, 0, 0)] + [(i*17, i*17, i*17, 255) for i in range(1, 16)]


def decode_png(raw, rowsize, pal, path):
    ntiles = len(raw) // 32
    if ntiles == 0:
        return
    tw = rowsize // 32 if 32 <= rowsize <= 64*32 else 16
    tw = max(tw, 1)
    th = (ntiles + tw - 1) // tw
    a = np.zeros(ntiles * 32, dtype=np.uint8)
    a[:ntiles*32] = np.frombuffer(raw[:ntiles*32], dtype=np.uint8)
    a = a.reshape(ntiles, 8, 4)
    px = np.empty((ntiles, 8, 8), dtype=np.uint8)
    px[:, :, 0::2] = a & 0xF
    px[:, :, 1::2] = a >> 4
    grid = np.zeros((th * 8, tw * 8), dtype=np.uint8)
    for t in range(ntiles):
        ty, tx = (t // tw) * 8, (t % tw) * 8
        grid[ty:ty+8, tx:tx+8] = px[t]
    lut = np.array(pal, dtype=np.uint8)
    img = lut[np.clip(grid, 0, len(pal)-1)]
    Image.fromarray(img, "RGBA").save(path)


def main():
    t0 = TABLE - BASE
    ents = [u32(t0 + 4*k) for k in range(NENT)]
    targets = [t0 + 4*k + ents[k] for k in range(NENT)]   # file offsets
    uniq = sorted(set(targets))
    name = {s: f"tileset{i:02d}" for i, s in enumerate(uniq)}
    sym = {s: f"gTileset{i:02d}Graphics" for i, s in enumerate(uniq)}

    def count(s):
        return u32(s) // 20

    for s in uniq:
        c = count(s)
        nm, sm = name[s], sym[s]
        d = os.path.join(TS_DIR, nm)
        os.makedirs(d, exist_ok=True)
        H = [".section .rodata", ".balign 4, 0", "",
             f".global {sm}", f"{sm}:"]
        data = []
        for k in range(c):
            o = s + k*20
            src = u32(o); sizeOfs = u32(o+4)
            row = u16(o+8); pr = u16(o+10)
            psrc = u32(o+12); psz = u16(o+16)
            plz = ROM[o+18]; pdst = ROM[o+19]
            size = sizeOfs & 0x3FFFFF
            dst = sizeOfs >> 22
            gfx = o + src
            pal = o + 12 + psrc
            ck = os.path.join(d, str(k))
            os.makedirs(ck, exist_ok=True)
            # ---- gfx slice (compressed kept as-is) ----
            blob = ROM[gfx:gfx+size]
            gext = "tiles.4bpp.lz" if (pr & LZ77) else "tiles.4bpp"
            open(os.path.join(ck, gext), "wb").write(blob)
            # decode for preview
            if pr & LZ77:
                try:
                    raw, _ = lz77.decode(blob, 0)
                except Exception:
                    raw = b""
            else:
                raw = blob
            # ---- palettes ----
            pal_files = []
            if not (pr & NO_PAL) and psz > 0 and not plz:
                for j in range(psz // 32):
                    slot = pdst + j
                    pf = f"{slot:02d}.pal"
                    open(os.path.join(ck, pf), "wb").write(
                        ROM[pal + j*32: pal + (j+1)*32])
                    pal_files.append(pf)
                ppal = pal_rgba(pal, 16)
            elif not (pr & NO_PAL) and psz > 0 and plz:
                open(os.path.join(ck, "palette.lz"), "wb").write(ROM[pal:pal+psz])
                pal_files.append("palette.lz")
                ppal = gray()
            else:
                ppal = gray()
            # ---- preview ----
            if raw:
                decode_png(raw, row, ppal,
                           os.path.join(ck, "preview.png"))
            # ---- descriptor lines ----
            H.append(f"\t@ Graphic {k}")
            H.append(f"\t.4byte {sm}_{k}-. @ src offset")
            H.append(f"\t.4byte ({dst} << 22) | {size} \t@ size, dst=VRAM+{dst}")
            H.append(f"\t.2byte {row}, ({props_expr(pr)}) \t@ rowsize, props")
            H.append(f"\t\t@ Palette")
            H.append(f"\t\t.4byte {sm}_{k}_Palettes-. @ src offset")
            H.append(f"\t\t.2byte {psz} @ bytesize")
            H.append(f"\t\t.byte {plz}, {pdst} @ lz77, dst=PaletteID")
            # ---- data section (chunk order: gfx then pals) ----
            data.append(f"{sm}_{k}:")
            data.append(f"\t.incbin \"{TS_DIR}/{nm}/{k}/{gext}\"")
            data.append(f"\t{sm}_{k}_Palettes:")
            for pf in pal_files:
                data.append(f"\t.incbin \"{TS_DIR}/{nm}/{k}/{pf}\"")
        H.append("")
        H.append(DOTS)
        H.append("")
        H.extend(data)
        H.append("")
        open(os.path.join(d, "header.inc"), "w", encoding="utf-8").write(
            "\n".join(H))

    # ---- src/data/tilesets.s ----
    S = [".equiv MAP2D,  (1 << 0)",
         ".equiv LZ77,   (1 << 1)",
         ".equiv NO_PAL, (1 << 2)",
         ".equiv BPP4,   (1 << 5)", "",
         ".section .rodata", ".balign 4, 0", "",
         "@ rmz4 stage tilesets (mirror of rmz3 src/data/tilesets.s)",
         f"@ gStageTilesetOffsets @ 0x{TABLE:08x}, {NENT} stage entries"
         f"; loader UpdateStageTileset @ 0x08006e80..0x0800797c", "",
         ".global gStageTilesetOffsets", "gStageTilesetOffsets:"]
    for k in range(NENT):
        tgt = targets[k]
        shared = " @ shared" if targets.count(tgt) > 1 else ""
        S.append(f"\t.word {sym[tgt]}-.  @ stage {k:2}{shared}")
    S.append("")
    for s in uniq:
        S.append(f".include \"{TS_DIR}/{name[s]}/header.inc\"")
    S.append("")
    open("src/data/tilesets.s", "w", encoding="utf-8").write("\n".join(S))

    npng = sum(count(s) for s in uniq)
    print(f"wrote {len(uniq)} tilesets / {npng} chunks; "
          f"src/data/tilesets.s + {TS_DIR}/tilesetNN/")


if __name__ == "__main__":
    main()

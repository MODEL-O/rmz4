#!/usr/bin/env python
"""Render rmz4 stages to PNG + an interactive HTML gallery (level viewer).

Faithful to rmz3-ts src/stage/Stage.ts software compositor:
  - 3 stage layers (terrain/foreground/background) share one chunk pool +
    metatile table + tileset slots.
  - layer grid = fill nullMeta, then overlay each chunk's 15x10 metatile IDs.
  - draw order = prio descending (larger at bottom), tie-break bgIdx descending.
  - per metatile: 4 sub-tiles (2x2 of 8x8). entry e (u16):
      tIdx=e&0x3ff, hf=(e>>10)&1, vf=(e>>11)&1, pb=(e>>12)&0xf
      tileset slot = s0 if tIdx<512 else s1; local = tIdx if <512 else tIdx-512
      palette bank = livePal[pb<=8 ? s0 : s1][pb]; 4bpp, color index 0 = clear.
  - tileset slots s0/s1 come from tileset_offset.bin per chunk region
    (high nibble s0, low nibble s1). For a whole-map view we use the PER-CHUNK
    region (not the single camera gate chunk the runtime uses).

Data (from export_stages.py / export_tilesets.py, both byte-verified):
  data/stage/<name>/{layer1,2,3.bin, tileset_offset.bin, metatile.bin,
                     metatile_attr.bin, screen.bin, stage.json}
  data/tilesets/tileset<NN>/<slot>/{tiles.4bpp, <bank>.pal}
  stage.json.tilesetOffsetIndex -> gStageTilesetOffsets ENTRY index, mapped to
  the unique tileset dir index (export_tilesets names by sorted-unique order).
"""
import os
import re
import json
import struct
import numpy as np
from PIL import Image

BASE = 0x08000000
ROM = "Rockman Zero 4.gba"
TS_TABLE = 0x08df2000
NTS = 26
STAGE_DIR = "data/stage"
TILESET_DIR = "data/tilesets"
OUT = "viewer"
CW, CH = 15, 10           # metatiles per chunk (1 chunk = 1 screen 240x160)


def gba_lz77(data):
    n = data[1] | (data[2] << 8) | (data[3] << 16)
    out = bytearray()
    p = 4
    while len(out) < n:
        flags = data[p]; p += 1
        for bit in range(8):
            if len(out) >= n:
                break
            if flags & (0x80 >> bit):
                b0, b1 = data[p], data[p + 1]; p += 2
                ln = (b0 >> 4) + 3
                disp = (((b0 & 0xf) << 8) | b1) + 1
                st = len(out) - disp
                for i in range(ln):
                    out.append(out[st + i])
            else:
                out.append(data[p]); p += 1
    return bytes(out[:n])


def bgr555(c):
    r = (c & 0x1f) << 3
    g = ((c >> 5) & 0x1f) << 3
    b = ((c >> 10) & 0x1f) << 3
    return r | (r >> 5), g | (g >> 5), b | (b >> 5)


def entry_to_uniqdir():
    """gStageTilesetOffsets entry index -> unique tileset dir index
    (export_tilesets.py: name = sorted-unique target order)."""
    rom = open(ROM, "rb").read()

    def s32(a):
        v = int.from_bytes(rom[a-BASE:a-BASE+4], "little")
        return v - (1 << 32) if v & 0x80000000 else v
    targets = [TS_TABLE + i*4 + s32(TS_TABLE + i*4) for i in range(NTS)]
    uniq = sorted(set(targets))
    return {i: uniq.index(targets[i]) for i in range(NTS)}


def read_chunkmap(path):
    d = open(path, "rb").read()
    rw, nc, w, h = d[0], d[1], d[2], d[3]
    body = d[4:]
    return rw, nc, w, h, body


def grid_from_chunkmap(path, gridW, gridH, nullID):
    rw, nc, w, h, body = read_chunkmap(path)
    out = [nullID] * (gridW * gridH)
    for cy in range(gridH):
        for cx in range(gridW):
            if cy < h and cx < w:
                idx = cy * rw + cx
                out[cy * gridW + cx] = body[idx] if idx < len(body) else nullID
    return out


def read_hdr_u8(path):
    d = open(path, "rb").read()
    shift, mask, w, h = d[0], d[1], d[2], d[3]
    return shift, w, h, list(d[4:])


def destride(shift, w, h, body, gridW, gridH, default=0):
    out = [default] * (gridW * gridH)
    for cy in range(gridH):
        for cx in range(gridW):
            if cy < h and cx < w:
                idx = (cy << shift) + cx
                out[cy * gridW + cx] = body[idx] if idx < len(body) else default
    return out


def load_tileset(tsdir):
    """Return (slots_tiles, slots_pal) where slots_tiles[slot] = uint8 4bpp
    bytes, slots_pal[slot] = {bank: np.uint8[16,3]}."""
    slots = sorted(int(n) for n in os.listdir(tsdir)
                   if n.isdigit() and os.path.isdir(os.path.join(tsdir, n)))
    tiles, pals = [], []
    for s in slots:
        sd = os.path.join(tsdir, str(s))
        raw_lz = os.path.join(sd, "tiles.4bpp.lz")
        raw = os.path.join(sd, "tiles.4bpp")
        if os.path.exists(raw):
            tb = open(raw, "rb").read()
        elif os.path.exists(raw_lz):
            tb = gba_lz77(open(raw_lz, "rb").read())
        else:
            tb = b""
        tiles.append(np.frombuffer(tb, dtype=np.uint8))
        banks = {}
        for f in os.listdir(sd):
            m = re.match(r"(\d+)\.pal$", f)
            if not m:
                continue
            raw = open(os.path.join(sd, f), "rb").read()[:32]
            cols = struct.unpack("<16H", raw)
            banks[int(m.group(1))] = np.array([bgr555(c) for c in cols],
                                              dtype=np.uint8)
        pals.append(banks)
    return tiles, pals


def decode_tile(tdata, local):
    """4bpp tile (local index) -> uint8[8,8] palette indices (0=clear)."""
    base = local * 32
    if base + 32 > len(tdata):
        return None
    raw = tdata[base:base + 32].reshape(8, 4)
    out = np.empty((8, 8), dtype=np.uint8)
    out[:, 0::2] = raw & 0x0f
    out[:, 1::2] = raw >> 4
    return out


def render_layer(grid, meta, tsoff, slots_tiles, slots_pals, nslots,
                 gridW, gridH, metaW, metaH):
    """One layer -> RGBA uint8[H,W,4]. Per-chunk tileset slots."""
    img = np.zeros((metaH * 16, metaW * 16, 4), dtype=np.uint8)
    nmeta = len(meta) // 4

    def clamp(v):
        return v if v < nslots else 0

    tile_cache = {}
    for lmy in range(metaH):
        cy = lmy // CH
        for lmx in range(metaW):
            cx = lmx // CW
            region = cy * gridW + cx
            tv = tsoff[region] if region < len(tsoff) else 0
            s0, s1 = clamp(tv >> 4), clamp(tv & 0xf)
            mid = grid[lmy * metaW + lmx]
            if mid >= nmeta:
                continue
            for si in range(4):
                e = meta[mid * 4 + si]
                tIdx = e & 0x3ff
                hf, vf, pb = (e >> 10) & 1, (e >> 11) & 1, (e >> 12) & 0xf
                ts = s0 if tIdx < 512 else s1
                local = tIdx if tIdx < 512 else tIdx - 512
                pslot = s0 if pb <= 8 else s1
                pal = slots_pals[pslot].get(pb) if pslot < nslots else None
                if pal is None:
                    continue
                key = (ts, local)
                px = tile_cache.get(key)
                if px is None:
                    px = decode_tile(slots_tiles[ts], local)
                    tile_cache[key] = px
                if px is None:
                    continue
                t = px
                if hf:
                    t = t[:, ::-1]
                if vf:
                    t = t[::-1, :]
                dy = lmy * 16 + (si >> 1) * 8
                dx = lmx * 16 + (si & 1) * 8
                mask = t != 0
                if not mask.any():
                    continue
                rgb = pal[t]                       # (8,8,3)
                dst = img[dy:dy+8, dx:dx+8]
                dst[..., :3][mask] = rgb[mask]
                dst[..., 3][mask] = 255
    return img


def render_stage(name, e2u):
    sd = os.path.join(STAGE_DIR, name)
    j = json.load(open(os.path.join(sd, "stage.json"), encoding="utf-8"))
    rw, nullID, w, h = read_chunkmap(os.path.join(sd, "layer1.bin"))[:4]
    gridW, gridH = w, h
    metaW, metaH = gridW * CW, gridH * CH

    meta = list(struct.unpack(
        "<%dH" % (os.path.getsize(os.path.join(sd, "metatile.bin")) // 2),
        open(os.path.join(sd, "metatile.bin"), "rb").read()))
    screen = list(struct.unpack(
        "<%dH" % (os.path.getsize(os.path.join(sd, "screen.bin")) // 2),
        open(os.path.join(sd, "screen.bin"), "rb").read()))
    csz = CW * CH
    nullMeta = screen[nullID * csz] if nullID * csz < len(screen) else 0

    sh, tw, th, body = read_hdr_u8(os.path.join(sd, "tileset_offset.bin"))
    tsoff = destride(sh, tw, th, body, gridW, gridH, 0)

    # tileset dir for this stage
    ent = j.get("tilesetOffsetIndex", [0])
    ent = ent[0] if ent else 0
    tsdir = os.path.join(TILESET_DIR, "tileset%02d" % e2u.get(ent, ent))
    if not os.path.isdir(tsdir):
        return None
    slots_tiles, slots_pals = load_tileset(tsdir)
    nslots = len(slots_tiles)

    # build per-layer grids (fill nullMeta, overlay chunks)
    layers_meta = j["layers"]
    order = sorted(range(3), key=lambda i: (-layers_meta[i]["prio"],
                                            -layers_meta[i]["bgIdx"]))
    layer_imgs = []
    for li in range(3):
        cmap = grid_from_chunkmap(os.path.join(sd, "layer%d.bin" % (li + 1)),
                                  gridW, gridH, nullID)
        grid = [nullMeta] * (metaW * metaH)
        for cy in range(gridH):
            for cx in range(gridW):
                cid = cmap[cy * gridW + cx]
                if cid == nullID:
                    continue
                cbase = cid * csz
                for ly in range(CH):
                    for lx in range(CW):
                        sidx = cbase + ly * CW + lx
                        grid[(cy*CH+ly)*metaW + (cx*CW+lx)] = (
                            screen[sidx] if sidx < len(screen) else nullMeta)
        layer_imgs.append(render_layer(grid, meta, tsoff, slots_tiles,
                                       slots_pals, nslots, gridW, gridH,
                                       metaW, metaH))

    # composite in draw order over black backdrop
    comp = np.zeros((metaH*16, metaW*16, 4), dtype=np.uint8)
    comp[..., 3] = 255
    for li in order:
        a = layer_imgs[li][..., 3:4] > 0
        comp[..., :3] = np.where(a, layer_imgs[li][..., :3], comp[..., :3])

    od = os.path.join(OUT, name)
    os.makedirs(od, exist_ok=True)
    Image.fromarray(comp, "RGBA").convert("RGB").save(
        os.path.join(od, "composite.png"))
    for li in range(3):
        Image.fromarray(layer_imgs[li], "RGBA").save(
            os.path.join(od, "layer%d.png" % (li + 1)))
    return {
        "name": name, "id": j["id"],
        "tileset": "tileset%02d" % e2u.get(ent, ent),
        "w": metaW * 16, "h": metaH * 16,
        "gridW": gridW, "gridH": gridH,
        "layers": [{"bgIdx": L["bgIdx"], "prio": L["prio"]} for L in layers_meta],
        "drawOrder": order,
    }


def write_html(records):
    cards = []
    for r in records:
        layers = "".join(
            f'<label><input type=checkbox checked data-l="{i+1}">L{i+1}'
            f'(bg{r["layers"][i]["bgIdx"]} p{r["layers"][i]["prio"]})</label>'
            for i in range(3))
        cards.append(f'''
<div class="card" id="card-{r['name']}">
  <h3>{r['name']} <span>id {r['id']} · {r['tileset']} · {r['w']}x{r['h']} · {r['gridW']}x{r['gridH']} chunks</span></h3>
  <div class="ctl">{layers}
    <label><input type=checkbox class="comp" checked>composite</label>
    <button data-zin>+</button><button data-zout>-</button><button data-zfit>fit</button>
  </div>
  <div class="stage" data-w="{r['w']}" data-h="{r['h']}">
    <img class="comp" src="{r['name']}/composite.png">
    <img class="lay" data-l="1" src="{r['name']}/layer1.png">
    <img class="lay" data-l="2" src="{r['name']}/layer2.png">
    <img class="lay" data-l="3" src="{r['name']}/layer3.png">
  </div>
</div>''')
    html = '''<!doctype html><meta charset=utf-8>
<title>rmz4 关卡查看器</title>
<style>
 body{background:#1a1a1a;color:#ddd;font:13px sans-serif;margin:0;padding:12px}
 h1{font-size:18px}
 .nav{position:sticky;top:0;background:#222;padding:8px;z-index:10;border-bottom:1px solid #444}
 .nav a{color:#6cf;margin-right:10px;text-decoration:none}
 .card{margin:18px 0;border:1px solid #333;border-radius:6px;padding:8px;background:#202020}
 h3{margin:4px 0;font-size:15px}h3 span{color:#888;font-weight:normal;font-size:12px}
 .ctl{margin:6px 0;display:flex;gap:10px;flex-wrap:wrap;align-items:center}
 .ctl label{cursor:pointer;user-select:none}
 .ctl button{background:#333;color:#ddd;border:1px solid #555;border-radius:4px;cursor:pointer;width:28px}
 .stage{position:relative;overflow:auto;max-height:80vh;border:1px solid #000;background:
   repeating-conic-gradient(#2a2a2a 0% 25%,#242424 0% 50%) 50%/24px 24px}
 .stage img{position:absolute;top:0;left:0;image-rendering:pixelated;transform-origin:top left}
 .stage img.lay{display:none}
</style>
<div class="nav"><b>rmz4 关卡查看器</b> &nbsp;''' + \
        " ".join(f'<a href="#card-{r["name"]}">{r["name"]}</a>'
                 for r in records) + '</div>' + "".join(cards) + '''
<script>
document.querySelectorAll('.card').forEach(card=>{
  const stage=card.querySelector('.stage');
  let zoom=1;
  const imgs=[...stage.querySelectorAll('img')];
  function applyZoom(){imgs.forEach(i=>i.style.transform='scale('+zoom+')');
    stage.style.height=Math.min(window.innerHeight*0.8,(+stage.dataset.h)*zoom+4)+'px';}
  function fit(){const w=+stage.dataset.w;zoom=Math.min(1,(stage.clientWidth-4)/w);applyZoom();}
  card.querySelector('[data-zin]').onclick=()=>{zoom*=1.5;applyZoom();};
  card.querySelector('[data-zout]').onclick=()=>{zoom/=1.5;applyZoom();};
  card.querySelector('[data-zfit]').onclick=fit;
  // composite toggle
  const compChk=card.querySelector('input.comp');
  const compImg=stage.querySelector('img.comp');
  function refresh(){
    compImg.style.display=compChk.checked?'block':'none';
    card.querySelectorAll('.ctl input[data-l]').forEach(cb=>{
      const im=stage.querySelector('img.lay[data-l="'+cb.dataset.l+'"]');
      im.style.display=(!compChk.checked&&cb.checked)?'block':'none';
    });
  }
  compChk.onchange=refresh;
  card.querySelectorAll('.ctl input[data-l]').forEach(cb=>cb.onchange=refresh);
  applyZoom();
});
</script>'''
    open(os.path.join(OUT, "index.html"), "w", encoding="utf-8").write(html)


def main():
    os.makedirs(OUT, exist_ok=True)
    e2u = entry_to_uniqdir()
    names = sorted(n for n in os.listdir(STAGE_DIR)
                   if os.path.isdir(os.path.join(STAGE_DIR, n)))
    records = []
    for n in names:
        try:
            r = render_stage(n, e2u)
        except Exception as ex:
            print(f"  {n}: ERROR {ex}")
            continue
        if r:
            records.append(r)
            print(f"  {n}: {r['w']}x{r['h']} ({r['tileset']})")
    records.sort(key=lambda r: r["id"])
    write_html(records)
    print(f"wrote {len(records)} stages -> {OUT}/index.html")


if __name__ == "__main__":
    main()

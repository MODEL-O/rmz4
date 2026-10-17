#!/usr/bin/env python3
# 导出 rmz4 的"图形主表", 对齐 rmz3 src/data/graphic_table 的 5 文件语义
# (bg/dialog/elf/sprite_static/sprite_dynamic)。本脚本目前只做已逆向确认的两张:
#   sprite_static  : ColorGraphic[248] @ 0x08C44000 (代码用基址+偏移访问, 60+ xref)
#   sprite_dynamic : gDynamicMotionGraphicOffsets @ 0x088CC000 -> 209 个图形集,
#                    每个集是 GraphicHeader(纯 Graphic12, 无调色板, 内联 4bpp) 或
#                    ColorGraphic 表(Graphic12+Palette8, 内联 gfx+pal)。
#
# 结构(同 rmz3):
#   struct Graphic(12B)      = { src(自相对4), size22|dst10(4), rowsize(2), props(2) }
#   struct Palette(8B)       = { src(自相对4), size(2), lz77(1), dst(1) }
#   struct ColorGraphic(20B) = Graphic + Palette
#   Flags: MAP2D=0x1 LZ77=0x2 NO_PAL=0x4 BPP4=0x20 RLU=0x1000
#
# 产出(参考 z3 放置):
#   <name>.s                              描述符(自相对 ROM 原值 + 注释) + 底部 .incbin
#   sprites/static/<i>/sheet.{lz|4bpp}    精确 ROM 切片(压缩态原样)
#   sprites/static/<i>/sheet.gbapal       调色板(BGR555 原样)
#   sprites/static/<i>/sheet.png          解码后预览(LZ77解压→4bpp→套调色板)
#   sprites/dynamic/<i>/<g>.{lz|4bpp}[.gbapal][.png]
#
# 字节忠实: 每条描述符按 ROM 原字节落地并自校验(struct.pack 重编码 == ROM)。
import os, json, struct, sys
import numpy as np
from PIL import Image

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lz77

ROOT = os.path.dirname(HERE)
ROM  = open(os.path.join(ROOT, "Rockman Zero 4.gba"), "rb").read()
BASE = 0x08000000
N    = len(ROM)
OUT  = os.path.join(ROOT, "src", "data", "graphic_table")
SPR  = os.path.join(OUT, "sprites")

def u16(o): return ROM[o] | (ROM[o+1] << 8)
def u32(o): return int.from_bytes(ROM[o:o+4], "little")
def s32(o):
    v = u32(o); return v - 0x100000000 if v >= 0x80000000 else v

LZ77 = 0x2; NO_PAL = 0x4; BPP4 = 0x20
def prop_str(p):
    f = []
    for bit, nm in ((1,"MAP2D"),(2,"LZ77"),(4,"NO_PAL"),(0x20,"BPP4"),(0x1000,"RLU")):
        if p & bit: f.append(nm)
    return "|".join(f) if f else "0"

# ---------- 调色板 / 4bpp -> PNG ----------
def gba_pal_rgba(o, ncol):
    out = []
    for i in range(ncol):
        c = ROM[o+i*2] | (ROM[o+i*2+1] << 8)
        r = (c & 31) << 3; g = ((c >> 5) & 31) << 3; b = ((c >> 10) & 31) << 3
        r |= r >> 5; g |= g >> 5; b |= b >> 5
        out.append((r, g, b, 0 if i == 0 else 255))   # 0 号色透明
    return out

def gray_rgba():
    return [(0,0,0,0)] + [(i*17, i*17, i*17, 255) for i in range(1, 16)]

# 真实预定义调色板(取自 rmz3-dev/tools/dumper/*.gbapal, 16 色 BGR555)。
# 动态表里无调色板的 GraphicHeader 集 = Zero 身体/武器动作帧, 运行时套玩家调色板;
# 渲染 PNG 用 zero(身体)着色, 武器叠加集可改套 weapon。
PREDEF_PAL = {
    "zero":      bytes.fromhex("494a2821a0348845d26aff7f1b0aff02bf435f5753209a2c5f319f46ab15b11e"),
    "weapon":    bytes.fromhex("0000a0b488c5d26adefbdc829f93ffd38883f2bff5fb8883f243f5fbbfffffff"),
    "grayscale": bytes.fromhex("de7b9c735a6b1863d65a9452524a1042ce398c314a290821c618841042080000"),
}
def pal_rgba_from_bytes(b):
    out = []
    for i in range(len(b)//2):
        c = b[i*2] | (b[i*2+1] << 8)
        r = (c & 31) << 3; g = ((c >> 5) & 31) << 3; bl = ((c >> 10) & 31) << 3
        r |= r >> 5; g |= g >> 5; bl |= bl >> 5
        out.append((r, g, bl, 0 if i == 0 else 255))
    return out
ZERO_RGBA = pal_rgba_from_bytes(PREDEF_PAL["zero"])

def write_predef_palettes():
    os.makedirs(SPR, exist_ok=True)
    for name, raw in PREDEF_PAL.items():
        open(os.path.join(SPR, name + ".gbapal"), "wb").write(raw)

def decode_png(raw, rowsize, pal, path):
    ntiles = len(raw) // 32
    if ntiles == 0: return False
    tw = rowsize // 32 if 32 <= rowsize <= 64*32 else 16
    if tw <= 0: tw = 16
    th = (ntiles + tw - 1) // tw
    a = np.zeros(ntiles * 32, dtype=np.uint8)
    a[:len(raw[:ntiles*32])] = np.frombuffer(raw[:ntiles*32], dtype=np.uint8)
    a = a.reshape(ntiles, 8, 4)
    px = np.empty((ntiles, 8, 8), dtype=np.uint8)
    px[:, :, 0::2] = a & 0xF
    px[:, :, 1::2] = a >> 4
    grid = np.zeros((th * 8, tw * 8), dtype=np.uint8)
    for t in range(ntiles):
        ty, tx = (t // tw) * 8, (t % tw) * 8
        grid[ty:ty+8, tx:tx+8] = px[t]
    lut = np.array(pal, dtype=np.uint8)            # (16,4)
    img = lut[np.clip(grid, 0, len(pal)-1)]
    Image.fromarray(img, "RGBA").save(path)
    return True

def raw_of(addr, size, props):
    blob = ROM[addr - BASE: addr - BASE + size]
    if props & LZ77:
        try:
            raw, _ = lz77.decode(blob, 0)
            return blob, raw
        except Exception:
            return blob, b""
    return blob, blob

# ---------- 描述符解析 ----------
def parse_color(o):
    w = u32(o + 4); psize = u16(o + 0x10)
    return dict(gfx=BASE+o+s32(o), gfx_off=s32(o), size=w & 0x3FFFFF, dst=w >> 22,
                rowsize=u16(o + 8), props=u16(o + 0x0A),
                pal=BASE+o+0x0C+s32(o + 0x0C), pal_off=s32(o + 0x0C),
                psize=psize, plz=ROM[o + 0x12], pdst=ROM[o + 0x13])
def parse_graphic(o):
    w = u32(o + 4)
    return dict(src=BASE+o+s32(o), src_off=s32(o), size=w & 0x3FFFFF, dst=w >> 22,
                rowsize=u16(o + 8), props=u16(o + 0x0A))

def color_rec_ok(o, e):
    rec = struct.pack("<iIHHiHBB", e["gfx_off"], (e["size"] | (e["dst"] << 22)) & 0xFFFFFFFF,
                      e["rowsize"], e["props"], e["pal_off"], e["psize"], e["plz"], e["pdst"])
    return rec == ROM[o:o+20]
def graphic_rec_ok(o, e):
    rec = struct.pack("<iIHH", e["src_off"], (e["size"] | (e["dst"] << 22)) & 0xFFFFFFFF,
                      e["rowsize"], e["props"])
    return rec == ROM[o:o+12]

# ---------- 内联集分类(GraphicHeader vs ColorGraphic), 用数据连续性判别 ----------
def valid_gh(ho, ng):
    if ng <= 0: return False
    cur = BASE + ho + s32(ho)                       # g0 src 应 = hdr + ng*12
    if cur != BASE + ho + ng * 12: return False
    for k in range(ng):
        o = ho + k*12; src = BASE+o+s32(o); sz = u32(o+4) & 0x3FFFFF; pr = u16(o+0x0A)
        if src != cur or sz == 0 or sz > 0x10000 or not (pr & BPP4): return False
        cur = src + sz
    return True
def valid_cg(ho, ng):
    if ng <= 0: return False
    cur = BASE + ho + s32(ho)                        # gfx0 应 = hdr + ng*20
    if cur != BASE + ho + ng * 20: return False
    for k in range(ng):
        o = ho + k*20; e = parse_color(o)
        if e["gfx"] != cur or e["size"] == 0 or e["size"] > 0x10000 or not (e["props"] & BPP4):
            return False
        cur = e["gfx"] + e["size"]
        if not (e["props"] & NO_PAL) and e["psize"] > 0:
            if e["pal"] != cur or e["psize"] > 0x800: return False
            cur = e["pal"] + e["psize"]
    return True
def classify(hdr):
    ho = hdr - BASE
    delta = (BASE + ho + s32(ho)) - hdr
    if delta <= 0: return (None, 0)
    if delta % 12 == 0 and valid_gh(ho, delta // 12): return ("GH", delta // 12)
    if delta % 20 == 0 and valid_cg(ho, delta // 20): return ("CG", delta // 20)
    return (None, 0)

# ---------- 资源写出 ----------
def gext(props): return "lz" if (props & LZ77) else "4bpp"

def _lab(reldir, stem):
    return "g_" + reldir.replace("/", "_") + "_" + stem

def emit_color_entry(o, e, reldir, stem, data_lines, seen, ok):
    """落 ColorGraphic 一条: 描述符行 + 资源(gfx/pal/png) + .incbin。返回描述符文本行列表。"""
    L = []
    glabel = _lab(reldir, stem)
    L.append("\t.4byte 0x%08X \t@ src -> 0x%08X (%s)" % (e["gfx_off"] & 0xFFFFFFFF, e["gfx"], glabel))
    L.append("\t.4byte %d | (%d << 22) \t@ size | dst<<22" % (e["size"], e["dst"]))
    L.append("\t.2byte %d, 0x%04X \t@ rowsize, props {%s}" % (e["rowsize"], e["props"], prop_str(e["props"])))
    plabel = glabel + "_pal"
    note = "NO_PAL" if e["props"] & NO_PAL else (plabel if e["psize"] else "psize 0")
    L.append("\t\t.4byte 0x%08X \t@ palsrc -> 0x%08X (%s)" % (e["pal_off"] & 0xFFFFFFFF, e["pal"], note))
    L.append("\t\t.2byte %d \t@ pal bytesize" % e["psize"])
    L.append("\t\t.byte %d, %d \t@ lz77, pal dst\n" % (e["plz"], e["pdst"]))
    if not color_rec_ok(o, e): ok[0] = False; print("  !! color mismatch", stem)
    if e["size"] == 0: return L
    absdir = os.path.join(SPR, reldir); os.makedirs(absdir, exist_ok=True)
    blob, raw = raw_of(e["gfx"], e["size"], e["props"])
    gname = "%s.%s" % (stem, gext(e["props"]))
    open(os.path.join(absdir, gname), "wb").write(blob)
    pal = gray_rgba()
    if not (e["props"] & NO_PAL) and e["psize"] > 0:
        pblob = ROM[e["pal"]-BASE: e["pal"]-BASE + e["psize"]]
        open(os.path.join(absdir, "%s.gbapal" % stem), "wb").write(pblob)
        pal = gba_pal_rgba(e["pal"]-BASE, min(16, e["psize"]//2))
    if raw: decode_png(raw, e["rowsize"], pal, os.path.join(absdir, "%s.png" % stem))
    if glabel not in seen:
        data_lines.append("%s: .incbin \"sprites/%s/%s\"" % (glabel, reldir, gname)); seen.add(glabel)
        if not (e["props"] & NO_PAL) and e["psize"] > 0:
            data_lines.append("%s: .incbin \"sprites/%s/%s.gbapal\"" % (plabel, reldir, stem))
    return L

def emit_graphic_entry(o, e, reldir, stem, data_lines, seen, ok):
    L = []
    glabel = _lab(reldir, stem)
    L.append("\t.4byte 0x%08X \t@ src -> 0x%08X (%s)" % (e["src_off"] & 0xFFFFFFFF, e["src"], glabel))
    L.append("\t.4byte %d | (%d << 22) \t@ size | dst<<22" % (e["size"], e["dst"]))
    L.append("\t.2byte %d, 0x%04X \t@ rowsize, props {%s}\n" % (e["rowsize"], e["props"], prop_str(e["props"])))
    if not graphic_rec_ok(o, e): ok[0] = False; print("  !! graphic mismatch", stem)
    if e["size"] == 0: return L
    absdir = os.path.join(SPR, reldir); os.makedirs(absdir, exist_ok=True)
    blob, raw = raw_of(e["src"], e["size"], e["props"])
    gname = "%s.%s" % (stem, gext(e["props"]))
    open(os.path.join(absdir, gname), "wb").write(blob)
    # GraphicHeader 无调色板字段 -> 运行时套玩家调色板, 这里用真实 zero.gbapal 着色(身体色)
    if raw: decode_png(raw, e["rowsize"], ZERO_RGBA, os.path.join(absdir, "%s.png" % stem))
    if glabel not in seen:
        data_lines.append("%s: .incbin \"sprites/%s/%s\"" % (glabel, reldir, gname)); seen.add(glabel)
    return L

S_HEAD = """\
@ rmz4 graphic master table: {sym}
@ {desc}
@ Flags: MAP2D=0x1 LZ77=0x2 NO_PAL=0x4 BPP4=0x20 RLU=0x1000.  tools/export_graphic_master.py
.section .rodata
.balign 4, 0

.global {sym}
{sym}:
"""

def export_color_table(ok, sym, base, count, fname, reldir, desc):
    """通用: ColorGraphic[count] @ base, 描述符数组(数据经 gfx/pal 自相对指针, 不一定紧邻)。"""
    lines = [S_HEAD.format(sym=sym, desc=desc)]
    data = ["\n@ ===================== resources =====================\n"]
    seen = set()
    for i in range(count):
        o = base - BASE + i*20; e = parse_color(o)
        empty = e["size"] == 0 and e["props"] == 0
        lines.append("\t@ Graphic %d%s" % (i, "  (empty slot)" if empty else ""))
        lines += emit_color_entry(o, e, "%s/%03d" % (reldir, i), "sheet", data, seen, ok)
    open(os.path.join(OUT, fname), "w", encoding="utf-8").write("\n".join(lines)+"\n".join(data)+"\n")
    return dict(symbol=sym, file=fname, base="0x%08X" % base, count=count, struct="ColorGraphic")

def export_static(ok):
    return export_color_table(ok, "gStaticMotionGraphics", 0x08C44000, 248,
        "sprite_static.s", "static", "struct ColorGraphic[248] @ 0x08C44000 (data via gfx/pal ptr)")

def export_bg(ok):
    # bg = gBackgroundGraphics @ 0x08B6C000, ColorGraphic[174]; entry0=Capcom(2400) entry1=Inti(1260)
    # (对齐 rmz3 bg.c; 数据紧邻于 0x08B6CD98)。props bit3..10=tilesize 字段。
    return export_color_table(ok, "gBackgroundGraphics", 0x08B6C000, 174,
        "bg.s", "bg", "struct ColorGraphic[174] @ 0x08B6C000 (bg.c: Capcom/Inti/title/tilesets)")

def export_dialog(ok):
    # dialog = 对话头像表 @ 0x08BFC000, ColorGraphic[52]; 数据内联紧跟描述符(0x08BFC410..0x08C07D74)
    # 加载器 FUN_0811eb20 / FUN_0810e790: 按角色 id 取 entry[id] 的 gfx + 32B 调色板(对话立绘)
    # entry1=size0 空槽; entry0 总被预载(底图)。对齐 rmz3 src/data/graphic_table/dialog.s
    return export_color_table(ok, "gDialogGraphics", 0x08BFC000, 52,
        "dialog.s", "dialog", "struct ColorGraphic[52] @ 0x08BFC000 (对话头像, 数据内联)")

def export_dynamic(ok):
    sym, base, count = "gDynamicMotionGraphicOffsets", 0x088CC000, 209
    lines = [S_HEAD.format(sym=sym, desc="%d 个图形集(GraphicHeader 或 ColorGraphic, 内联数据)" % count)]
    # 偏移表
    headers = []
    for i in range(count):
        po = base - BASE + i*4; tgt = BASE + po + s32(po); headers.append(tgt)
        lines.append("\t.4byte 0x%08X \t@ [%d] -> 0x%08X" % (u32(po) & 0xFFFFFFFF, i, tgt))
    data = ["\n@ ===================== resources =====================\n"]
    seen = set(); n_gh = n_cg = n_unk = 0
    lines.append("\n@ ===================== sets =====================")
    for i, hdr in enumerate(headers):
        kind, ng = classify(hdr)
        ho = hdr - BASE
        if kind == "GH":
            n_gh += 1
            lines.append("\t@ ---- [%d] 0x%08X GraphicHeader (%d Graphics) ----" % (i, hdr, ng))
            for g in range(ng):
                o = ho + g*12
                lines += emit_graphic_entry(o, parse_graphic(o), "dynamic/%03d" % i, "%d" % g, data, seen, ok)
        elif kind == "CG":
            n_cg += 1
            lines.append("\t@ ---- [%d] 0x%08X ColorGraphic[%d] ----" % (i, hdr, ng))
            for g in range(ng):
                o = ho + g*20
                lines += emit_color_entry(o, parse_color(o), "dynamic/%03d" % i, "%d" % g, data, seen, ok)
        else:
            n_unk += 1
            lines.append("\t@ ---- [%d] 0x%08X UNCLASSIFIED (descriptor-only) ----" % (i, hdr))
    open(os.path.join(OUT, "sprite_dynamic.s"), "w", encoding="utf-8").write("\n".join(lines)+"\n"+"\n".join(data)+"\n")
    print("  sprite_dynamic: %d GraphicHeader + %d ColorGraphic + %d unclassified" % (n_gh, n_cg, n_unk))
    return dict(symbol=sym, file="sprite_dynamic.s", base="0x%08X" % base, count=count,
                struct="GraphicHeader|ColorGraphic", graphicheaders=n_gh, colorgraphic=n_cg, unclassified=n_unk)

def main():
    os.makedirs(SPR, exist_ok=True)
    write_predef_palettes()
    ok = [True]
    manifest = [export_static(ok), export_dynamic(ok), export_bg(ok), export_dialog(ok)]
    json.dump(dict(rom="Rockman Zero 4.gba", tables=manifest),
              open(os.path.join(OUT, "manifest.json"), "w", encoding="utf-8"), indent=1, ensure_ascii=False)
    print("descriptor round-trip:", "OK" if ok[0] else "FAIL")

if __name__ == "__main__":
    main()

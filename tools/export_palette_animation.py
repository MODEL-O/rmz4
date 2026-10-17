#!/usr/bin/env python3
# 导出 rmz4 的"调色板动画表", 对齐 rmz3 src/data/animation/palette.c 语义:
#   gPlttAnimDataOffsets[226] @ 0x08C0C000 : s32 自相对偏移表 -> PlttAnimData (数据紧跟表后内联)
#   gPlttAnimScriptTable[226] @ 0x08C18000 : AnimCmd** 绝对指针表 (AnimCmd 脚本紧跟表后内联)
# 出处: FUN_0800249c = StartPaletteAnimation, 文字池直引这两个基址 + manager@0x020008a0 + buf@0x03002ac0。
#
# 结构(同 rmz3 include/palette_animation.h, animation.h):
#   struct PlttAnimData(4B) = { u8 len, u8 start, u8 end, u8 _ }; 后跟 u16 pltt[]( frame 数 * chunk )
#     chunk = end-start+1 (一帧的颜色数); AnimCmd.param 选第几帧 -> src=(u16*)(pal+1)+param*chunk
#   AnimCmd(2B) = { u8 param, s8 frame }; frame<0: -1 终端 / -2 goto
#
# 字节忠实(全解码, 不再 .incbin):
#   gPlttAnimDataOffsets : 每项 `.4byte <PlttAnimData标签> - .` (自相对偏移, 编时求差, 基址无关)
#   PlttAnimData blob    : `.byte len,start,end,_` + `.2byte BGR555` 逐色
#   gPlttAnimScriptTable : `.word <AnimScript标签>` (去重) 两级, AnimScript[]=`.4byte .±delta` + `.byte param,frame`
#   两子表各自独立 section, 链到各自 ROM 基址后逐区 == ROM。
# 另出可读: 每 anim 一份 data.json(PlttAnimData 头+颜色) + sequence.json(AnimCmd 脚本)。
import os, json
HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
ROM  = open(os.path.join(ROOT, "Rockman Zero 4.gba"), "rb").read()
BASE = 0x08000000
N    = len(ROM)
OUT  = os.path.join(ROOT, "src", "data", "animation")
PAL  = os.path.join(OUT, "palette")          # 每 anim JSON

DATA_OFS_TAB = 0x08C0C000
SCRIPT_TAB   = 0x08C18000
COUNT        = 226

def u16(o): return ROM[o] | (ROM[o+1] << 8)
def u32(o): return int.from_bytes(ROM[o:o+4], "little")
def s32(o):
    v = u32(o); return v - 0x100000000 if v >= 0x80000000 else v
def s8(o):
    v = ROM[o]; return v - 256 if v >= 128 else v

def bgr555(c):
    r = (c & 0x1F) << 3; g = ((c >> 5) & 0x1F) << 3; b = ((c >> 10) & 0x1F) << 3
    return [r, g, b]

# 自相对偏移 -> PlttAnimData 绝对地址
def data_addr(i):
    fld = DATA_OFS_TAB + i * 4
    return fld + s32(fld - BASE)

# ---------- AnimCmd 脚本解码 (两级间接, 同 motion CmdTable) ----------
def parse_one(p, bound):
    sp = p - BASE
    s0 = u32(sp)
    if not (p < s0 <= bound) or (s0 - p) % 4:
        return [], p
    nscript = (s0 - p) // 4
    scripts = []; end = p
    for k in range(nscript):
        ap = u32(sp + k * 4)
        if not (BASE <= ap < bound):
            scripts.append(None); continue
        ao = ap - BASE; cmds = []; j = 0
        while j < 512:
            param = ROM[ao + j*2]; frame = s8(ao + j*2 + 1)
            cmds.append(dict(param=param, frame=frame))
            end = max(end, ap + (j+1)*2)
            if frame < 0: break
            j += 1
        scripts.append(dict(addr="0x%08X" % ap, cmds=cmds))
    return scripts, end

def parse_scripts(tab_abs, cnt, bound):
    anims = []; end = tab_abs
    for i in range(cnt):
        p = u32(tab_abs - BASE + i * 4)
        b = u32(tab_abs - BASE + (i+1) * 4) if i + 1 < cnt else bound
        if not (BASE <= b <= bound): b = bound
        scripts, e = parse_one(p, b)
        end = max(end, e)
        anims.append(dict(addr="0x%08X" % p, scripts=scripts))
    return anims, ((end + 3) & ~3)

# ---------- 标签去重 ----------
def build_labels(addrs, prefix):
    label = {}
    for i, a in enumerate(addrs):
        if a not in label:
            label[a] = "%s_%03d" % (prefix, i)
    uniq = sorted(label)
    span_end = {a: (uniq[j+1] if j+1 < len(uniq) else None) for j, a in enumerate(uniq)}
    return label, uniq, span_end

# ---------- PlttAnimData 解码: .byte 头 + .2byte 颜色 ----------
def emit_pltt_data(L, addr, span_to, label):
    L.append(".global %s" % label[addr]); L.append("%s:" % label[addr])
    do = addr - BASE; span = span_to - addr
    length = ROM[do]; start = ROM[do+1]; end = ROM[do+2]; pad = ROM[do+3]
    chunk = (end - start + 1) if end >= start else 0
    L.append("\t.byte %d, %d, %d, %d \t@ len, start, end, _ (chunk=%d)" % (length, start, end, pad, chunk))
    rest = span - 4
    ncol = rest // 2
    for c in range(ncol):
        co = do + 4 + c*2
        L.append("\t.2byte 0x%04X \t@ %s" % (u16(co), "#%02X%02X%02X" % tuple(bgr555(u16(co)))))
    for t in range(rest - ncol*2):
        L.append("\t.byte %d" % ROM[do + 4 + ncol*2 + t])
    L.append("")

# ---------- AnimCmd 脚本解码(两级): AnimScript[] + AnimCmd 流 ----------
def emit_cmd_data(L, addr, span_to, label):
    L.append(".global %s" % label[addr]); L.append("%s:" % label[addr])
    sp = addr - BASE; span = span_to - addr
    s0 = u32(sp)
    nscript = (s0 - addr) // 4 if (addr < s0 <= span_to and (s0 - addr) % 4 == 0) else 0
    for k in range(nscript):
        field = addr + k*4
        ptr = u32(sp + k*4)
        L.append("\t.4byte .%+d \t@ script %d -> 0x%08X" % (ptr - field, k, ptr))
    o = sp + nscript*4; rest = span - nscript*4
    if nscript: L.append("\t@ -- AnimCmd --")
    npair = rest // 2
    for j in range(npair):
        param = ROM[o + j*2]; frame = s8(o + j*2 + 1)
        L.append("\t.byte %d, %d \t@ param, frame%s" % (param, frame & 0xFF,
                 " (-1 终端)" if frame == -1 else " (-2 goto)" if frame == -2 else ""))
    for t in range(rest - npair*2):
        L.append("\t.byte %d" % ROM[o + npair*2 + t])
    L.append("")

def main():
    os.makedirs(OUT, exist_ok=True)
    os.makedirs(PAL, exist_ok=True)

    # ---- 区域范围 ----
    data_region = (DATA_OFS_TAB, SCRIPT_TAB)         # 偏移表 + PlttAnimData blob 连续
    scripts, script_end = parse_scripts(SCRIPT_TAB, COUNT, BASE + N)
    script_region = (SCRIPT_TAB, script_end)

    L = []
    L.append("@ rmz4 palette animation table (对齐 rmz3 src/data/animation/palette.c)")
    L.append("@ gPlttAnimDataOffsets[%d]@0x%08X (s32 自相对->PlttAnimData, 数据内联)" % (COUNT, DATA_OFS_TAB))
    L.append("@ gPlttAnimScriptTable[%d]@0x%08X (AnimCmd** 绝对, 脚本内联)" % (COUNT, SCRIPT_TAB))
    L.append("@ 出处 FUN_0800249c=StartPaletteAnimation. tools/export_palette_animation.py")
    L.append("@ PlttAnimData(4B)={u8 len,u8 start,u8 end,u8 _}+u16 pltt[]; AnimCmd(2B)={u8 param,s8 frame}")
    L.append("@ 两子表各自独立 section, 真值=各自 ROM 基址链接。")
    L.append("")

    # ==== 数据偏移表 section: gPlttAnimDataOffsets + PlttAnimData blob ====
    data_addrs = [data_addr(i) for i in range(COUNT)]
    dlabel, duniq, dspan = build_labels(data_addrs, "gPlttAnimData")
    L.append('.section .rodata.gPlttAnimDataOffsets, "a"')
    L.append(".balign 4, 0")
    L.append(".global gPlttAnimDataOffsets")
    L.append("gPlttAnimDataOffsets:")
    for i, a in enumerate(data_addrs):
        L.append("\t.4byte %s - . \t@ [%d] 自相对 -> 0x%08X" % (dlabel[a], i, a))
    L.append("")
    table_end = DATA_OFS_TAB + COUNT*4
    if duniq[0] != table_end:
        L.append("@ leading gap 0x%08X..0x%08X" % (table_end, duniq[0]))
        for o in range(table_end - BASE, duniq[0] - BASE):
            L.append("\t.byte %d" % ROM[o])
    L.append("@ ==== PlttAnimData 内联 0x%08X..0x%08X ====" % (duniq[0], data_region[1]))
    for a in duniq:
        to = dspan[a] if dspan[a] is not None else data_region[1]
        emit_pltt_data(L, a, to, dlabel)

    # ==== 脚本表 section: gPlttAnimScriptTable + AnimCmd blob ====
    script_addrs = [u32(SCRIPT_TAB - BASE + i*4) for i in range(COUNT)]
    slabel, suniq, sspan = build_labels(script_addrs, "gPlttAnimScript")
    L.append('.section .rodata.gPlttAnimScriptTable, "a"')
    L.append(".balign 4, 0")
    L.append(".global gPlttAnimScriptTable")
    L.append("gPlttAnimScriptTable:")
    for i, a in enumerate(script_addrs):
        L.append("\t.word %s \t@ [%d] animscript -> 0x%08X" % (slabel[a], i, a))
    L.append("")
    stable_end = SCRIPT_TAB + COUNT*4
    if suniq[0] != stable_end:
        L.append("@ leading gap 0x%08X..0x%08X" % (stable_end, suniq[0]))
        for o in range(stable_end - BASE, suniq[0] - BASE):
            L.append("\t.byte %d" % ROM[o])
    L.append("@ ==== AnimCmd 脚本内联 0x%08X..0x%08X ====" % (suniq[0], script_region[1]))
    for a in suniq:
        to = sspan[a] if sspan[a] is not None else script_region[1]
        emit_cmd_data(L, a, to, slabel)

    open(os.path.join(OUT, "palette.s"), "w", encoding="utf-8").write("\n".join(L) + "\n")

    # ---- 每 anim JSON ----
    for i in range(COUNT):
        da = data_addr(i)
        nxt = data_addr(i+1) if i+1 < COUNT else SCRIPT_TAB
        do = da - BASE
        length = ROM[do]; start = ROM[do+1]; end = ROM[do+2]
        chunk = (end - start + 1) if end >= start else 0
        colors_bytes = nxt - da - 4
        ncolors = colors_bytes // 2 if colors_bytes > 0 else 0
        nframes = (ncolors // chunk) if chunk else 0
        frames = []
        for f in range(nframes):
            cols = []
            for c in range(chunk):
                co = do + 4 + (f*chunk + c)*2
                cols.append("#%02X%02X%02X" % tuple(bgr555(u16(co))))
            frames.append(cols)
        d = os.path.join(PAL, "%03d" % i)
        os.makedirs(d, exist_ok=True)
        json.dump(dict(id=i, addr="0x%08X" % da, len=length, start=start, end=end,
                       chunk=chunk, frameCount=nframes, frames=frames),
                  open(os.path.join(d, "data.json"), "w", encoding="utf-8"), indent=1)
        json.dump(dict(id=i, addr=scripts[i]["addr"], scriptCount=len(scripts[i]["scripts"]),
                       scripts=scripts[i]["scripts"]),
                  open(os.path.join(d, "sequence.json"), "w", encoding="utf-8"), indent=1)

    # ---- 追加进 manifest ----
    mpath = os.path.join(OUT, "manifest.json")
    man = json.load(open(mpath, encoding="utf-8")) if os.path.exists(mpath) else dict(rom="Rockman Zero 4.gba", tables=[])
    man.setdefault("tables", [])
    man = {k: v for k, v in man.items() if k != "palette"}
    man["palette"] = dict(
        dataOffsets=dict(symbol="gPlttAnimDataOffsets", base="0x%08X" % DATA_OFS_TAB, count=COUNT,
                         data_end="0x%08X" % data_region[1]),
        scriptTable=dict(symbol="gPlttAnimScriptTable", base="0x%08X" % SCRIPT_TAB, count=COUNT,
                         data_end="0x%08X" % script_region[1]))
    json.dump(man, open(mpath, "w", encoding="utf-8"), indent=1, ensure_ascii=False)

    print("palette.s: dataOffsets[%d] 0x%08X..0x%08X  scriptTable[%d] 0x%08X..0x%08X" %
          (COUNT, data_region[0], data_region[1], COUNT, script_region[0], script_region[1]))

if __name__ == "__main__":
    main()

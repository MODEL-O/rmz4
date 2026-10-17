#!/usr/bin/env python3
# 扫 rmz4 ROM 定位调色板动画两张表(对齐 rmz3 src/data/animation/palette.c):
#   gPlttAnimDataOffsets[count] : s32 自相对偏移表, offset[0]==count*4 (PlttAnimData blob 紧跟表后),
#                                 SELF_REL_PTR(&tab[i]) = (tab+ i*4) + tab[i] 落在 blob 内。
#   gPlttAnimScriptTable[count] : AnimCmd** 绝对指针表, 紧跟 blob 之后。
# 指纹: 找一段 s32 表使 offset[0]==len*4, 后续全正、有界、近似递增; 再验其后存在等长绝对指针表。
import os
HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
ROM  = open(os.path.join(ROOT, "Rockman Zero 4.gba"), "rb").read()
BASE = 0x08000000
N    = len(ROM)

def u32(o): return int.from_bytes(ROM[o:o+4], "little")
def s32(o):
    v = u32(o); return v - 0x100000000 if v >= 0x80000000 else v

def looks_like_offset_table(o):
    v0 = s32(o)
    if v0 <= 0 or v0 % 4: return None
    count = v0 // 4
    if not (40 <= count <= 800): return None
    # offset[0] 应该 == count*4 (数据紧跟表)
    if v0 != count * 4: return None
    if o + count * 4 > N: return None
    vals = [s32(o + i*4) for i in range(count)]
    # 全部正、有界 (blob 不会超过几百KB)
    if any(v <= 0 or v > 0x80000 for v in vals): return None
    # 近似递增: 至少 70% 相邻递增
    inc = sum(1 for i in range(1, count) if vals[i] >= vals[i-1])
    if inc < (count-1) * 0.70: return None
    blob_max = max(vals)
    return count, vals, blob_max

def check_script_table(o, count, blob_max):
    # blob 末尾 = o + 大致 blob_max + (最后一个 PlttAnimData 的长度). 指针表在 blob 之后, 4 对齐.
    # 在 [o+blob_max, o+blob_max+0x4000] 4 对齐处找等长绝对指针表.
    lo = o + blob_max
    for st in range((lo) & ~3, lo + 0x4000, 4):
        if st + count*4 > N: return None
        ok = True
        ptrs = []
        for i in range(count):
            p = u32(st + i*4)
            if not (BASE <= p < BASE + N):
                ok = False; break
            ptrs.append(p)
        if not ok: continue
        # 指针应指向脚本表之后区域 (AnimCmd 数据), 且大体在脚本表附近
        if all(BASE + st <= p < BASE + N for p in ptrs):
            return st, ptrs
    return None

def main():
    cands = []
    o = 0
    while o + 4 <= N:
        r = looks_like_offset_table(o)
        if r:
            count, vals, blob_max = r
            cands.append((o, count, blob_max))
            o += count * 4
            continue
        o += 4
    print("offset-table candidates: %d" % len(cands))
    for o, count, blob_max in cands:
        st = check_script_table(o, count, blob_max)
        tag = ""
        if st:
            stoff, ptrs = st
            tag = " | scriptTable@0x%08X (gap=0x%X) ptr0=0x%08X" % (BASE+stoff, stoff-(o+blob_max), ptrs[0])
        print("  gPlttAnimDataOffsets? @0x%08X count=%d blob_max=0x%X%s" %
              (BASE+o, count, blob_max, tag))

if __name__ == "__main__":
    main()

#!/usr/bin/env python
# -*- coding: utf-8 -*-
# rmz 纯 Python LZ77 编解码 (GBA BIOS 0x10 格式), 不依赖 gbagfx。
#
# 三个能力:
#   decode(data, off)       解压原 ROM 里的 LZ77 流 -> 原始字节 (精确, 确定性)
#   encode_literal(raw)     把原始字节封成 "全字面量" LZ77 流 (每字节都是字面量,
#                           无回引用)。BIOS LZ77UnCompVram 能正确解出, 与压缩版
#                           等价但更大 (~12.5% 开销)。用于 modern 自由摆放构建,
#                           避免重压缩字节不一致的难题 (用户 2026-06-21 提议)。
#   encode_greedy(raw)      贪心最长匹配压缩, 减小体积; 不保证与原 ROM 字节一致,
#                           仅供需要省空间时用。默认用 encode_literal 更稳。
#
# 验证: decode(encode_literal(X)) == X 已对 ROM 真实 LZ 图形通过。

import struct


def decode(data, off=0):
    """解 GBA BIOS LZ77 (0x10). 返回 (raw_bytes, consumed_len)。"""
    if data[off] != 0x10:
        raise ValueError("not a 0x10 LZ77 stream at off=%d" % off)
    dsize = data[off + 1] | (data[off + 2] << 8) | (data[off + 3] << 16)
    out = bytearray()
    i = off + 4
    while len(out) < dsize:
        flags = data[i]
        i += 1
        for b in range(8):
            if len(out) >= dsize:
                break
            if flags & (0x80 >> b):
                b0 = data[i]
                b1 = data[i + 1]
                i += 2
                cnt = (b0 >> 4) + 3
                disp = ((b0 & 0xF) << 8 | b1) + 1
                for _ in range(cnt):
                    out.append(out[len(out) - disp])
            else:
                out.append(data[i])
                i += 1
    return bytes(out), i - off


def _header(n):
    return bytes([0x10, n & 0xFF, (n >> 8) & 0xFF, (n >> 16) & 0xFF])


def encode_literal(raw, align4=True):
    """全字面量 LZ77 流: 8 字节一组, flag=0x00 (全字面量)。确定性, BIOS 可解。"""
    n = len(raw)
    out = bytearray(_header(n))
    i = 0
    while i < n:
        out.append(0x00)
        out += raw[i:i + 8]
        i += 8
    if align4:
        while len(out) % 4:
            out.append(0)
    return bytes(out)


def encode_greedy(raw, align4=True):
    """贪心最长匹配压缩 (减小体积)。不保证与原 ROM 字节一致。"""
    n = len(raw)
    out = bytearray(_header(n))
    i = 0
    while i < n:
        flag_pos = len(out)
        out.append(0)
        flags = 0
        for b in range(8):
            if i >= n:
                break
            # 找最长匹配 (disp 1..4096, cnt 3..18), 窗口起点 max(0, i-4096)
            best_len = 0
            best_disp = 0
            wstart = max(0, i - 4096)
            maxcnt = min(18, n - i)
            for disp in range(1, i - wstart + 1):
                src = i - disp
                l = 0
                while l < maxcnt and raw[src + l] == raw[i + l]:
                    l += 1
                if l > best_len:
                    best_len = l
                    best_disp = disp
                    if l == maxcnt:
                        break
            if best_len >= 3:
                flags |= (0x80 >> b)
                d = best_disp - 1
                c = best_len - 3
                out.append((c << 4) | (d >> 8))
                out.append(d & 0xFF)
                i += best_len
            else:
                out.append(raw[i])
                i += 1
        out[flag_pos] = flags
    if align4:
        while len(out) % 4:
            out.append(0)
    return bytes(out)


if __name__ == '__main__':
    import sys
    if len(sys.argv) >= 4 and sys.argv[1] == 'decode':
        data = open(sys.argv[2], 'rb').read()
        raw, c = decode(data, 0)
        open(sys.argv[3], 'wb').write(raw)
        print("decoded %d bytes (consumed %d)" % (len(raw), c))
    elif len(sys.argv) >= 4 and sys.argv[1] in ('literal', 'greedy'):
        raw = open(sys.argv[2], 'rb').read()
        enc = encode_literal(raw) if sys.argv[1] == 'literal' else encode_greedy(raw)
        open(sys.argv[3], 'wb').write(enc)
        chk, _ = decode(enc, 0)
        print("encoded %d -> %d bytes, round-trip %s" %
              (len(raw), len(enc), "OK" if chk == raw else "FAIL"))
    else:
        print("用法: lz77.py decode IN.lz OUT.bin | literal IN.bin OUT.lz | greedy IN.bin OUT.lz")

#!/usr/bin/env python
"""Find absolute 32-bit pointer tables to charmap strings (fast, O(1) per word).

Discriminator: a pointer P targets a string start iff (P-BASE==0 or the byte
just before it is 0xFF, i.e. the previous string's terminator) and the byte at
the target is not 0xFF/0x00 (padding). Runs of >=MIN such aligned words are
candidate tables; each is verified by decoding the first few targets.
"""
import sys
from text_lib import decode_string, BASE

ROM = "Rockman Zero 4.gba"
LO = 0x08000000
MIN = 4


def main():
    d = open(ROM, 'rb').read()
    n = len(d)
    HI = LO + n
    mv = memoryview(d)

    def u32(o):
        return d[o] | (d[o + 1] << 8) | (d[o + 2] << 16) | (d[o + 3] << 24)

    def is_str_ptr(w):
        off = w - LO
        if not (0 <= off < n):
            return False
        if d[off] == 0xFF or d[off] == 0x00:
            return False
        return off == 0 or d[off - 1] == 0xFF

    tables = []
    i = 0
    while i + 4 <= n:
        if is_str_ptr(u32(i)):
            j = i
            cnt = 0
            while j + 4 <= n and is_str_ptr(u32(j)):
                cnt += 1
                j += 4
            if cnt >= MIN:
                tables.append((i, cnt))
                i = j
            else:
                i += 4
        else:
            i += 4

    out = []
    for s, c in tables:
        # verify: decode all targets strict-ish; require most are clean
        tgts = [u32(s + 4 * k) for k in range(c)]
        clean = 0
        samples = []
        for k, tg in enumerate(tgts):
            t, l = decode_string(d, tg - LO)
            ok = t is not None and '{?0x' not in t and 0 < l <= 500
            if ok:
                clean += 1
            if k < 4:
                samples.append((t or '?')[:16])
        if clean >= c * 0.85:
            out.append((s, c, clean, min(tgts), max(tgts), samples))

    print(f"{'table':>10} {'N':>4} {'clean':>5} {'tgt_lo':>10} {'tgt_hi':>10}  samples")
    for s, c, clean, tlo, thi, samples in out:
        print(f"0x{s+BASE:08x} {c:4d} {clean:5d} 0x{tlo:08x} 0x{thi:08x}  {samples}")
    print(f"\n{len(out)} verified string-pointer tables")


if __name__ == '__main__':
    main()

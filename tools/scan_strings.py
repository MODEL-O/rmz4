#!/usr/bin/env python
"""Scan the whole Zero4 ROM for contiguous $-terminated charmap string blobs."""
import sys
from text_lib import decode_string, BASE

ROM = "Rockman Zero 4.gba"


def is_clean(t):
    return t is not None and '{?0x' not in t


def has_real_text(t):
    # at least one kana/kanji or a multi-char token -> reduces ascii/control noise
    for ch in t:
        if ch >= '぀':  # hiragana and up
            return True
    return False


def scan(d, min_strings=4, min_bytes=16):
    n = len(d)
    i = 0
    runs = []
    while i < n - 1:
        # quick reject: must start a plausible string (not 0x00 run / not 0xFF)
        b = d[i]
        if b == 0xFF or b == 0x00:
            i += 1
            continue
        # try a run
        o = i
        cnt = 0
        kana = 0
        last = o
        while o < n:
            t, l = decode_string(d, o)
            if not is_clean(t) or l <= 0 or l > 300:
                break
            # reject runs of empty/garbage: empty string only ok occasionally
            o += l
            cnt += 1
            last = o
            if has_real_text(t):
                kana += 1
        if cnt >= min_strings and (last - i) >= min_bytes and kana >= max(2, cnt // 4):
            runs.append((i, last, cnt, kana))
            i = last
        else:
            i += 1
    return runs


def main():
    d = open(ROM, 'rb').read()
    runs = scan(d)
    total = 0
    print(f"{'start':>10} {'end':>10} {'bytes':>7} {'strs':>5} {'kana':>5}")
    for s, e, c, k in runs:
        total += c
        print(f"0x{s+BASE:08x} 0x{e+BASE:08x} {e-s:7d} {c:5d} {k:5d}")
    print(f"\n{len(runs)} blobs, {total} strings total")


if __name__ == '__main__':
    main()

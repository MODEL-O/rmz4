#!/usr/bin/env python
"""Locate ALL rmz4 text banks (fast, sharp discriminators).

Why the naive strict-decode scan fails: 4bpp graphics bytes all fall inside the
charmap range, so they decode as long katakana "strings"; and FF is sparse there
so each decode scans ~256 bytes -> billions of ops + tons of false hits.

Fixes here:
  * Inline decoder capped at MAXLEN bytes (no scanning deep into graphics).
  * A run only counts as text if it is hiragana-DOMINANT (hira > kata) and has a
    short average string length. Real JP game text is hiragana-led and short;
    graphics noise is katakana~=hiragana and long-run.
  * Restart from the terminator chain so we don't re-scan every byte.
"""
import sys
from text_lib import BASE

ROM = "Rockman Zero 4.gba"
DATA_LO = 0x00400000
MAXLEN = 200          # cap a single string; longer => not text
MIN_STR = 4
MIN_BYTES = 24

# byte-class lookup
HIRA = lambda b: 0x25 <= b <= 0x75
KATA = lambda b: 0x76 <= b <= 0xC9
# charmap-valid single bytes (everything decode_string accepts as a glyph)
VALID = set(range(0x00, 0xF0)) | {0xF1, 0xF2, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE}
PREFIX = {0xF0, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7}
TERM = 0xFF


def decode_len(d, off, n):
    """Strict, capped. Returns (length_incl_term, hira, kata, kanji, glyphs) or None."""
    i = off
    hira = kata = kanji = glyphs = 0
    while i < n and (i - off) <= MAXLEN:
        b = d[i]; i += 1
        if b == TERM:
            return (i - off, hira, kata, kanji, glyphs)
        if b in PREFIX:
            if i >= n:
                return None
            arg = d[i]; i += 1
            if b == 0xF0:
                kanji += 1
            glyphs += 1
            continue
        if b not in VALID:
            return None
        if HIRA(b):
            hira += 1
        elif KATA(b):
            kata += 1
        glyphs += 1
    return None


def main():
    d = open(ROM, 'rb').read()
    n = len(d)
    i = DATA_LO
    banks = []
    while i < n - 1:
        b = d[i]
        if b == TERM or b == 0x00:
            i += 1
            continue
        o = i
        cnt = 0
        span = 0
        first_len = 0
        hira = kata = kanji = glyphs = 0
        while True:
            r = decode_len(d, o, n)
            if r is None:
                break
            l, h, k, kj, g = r
            if first_len == 0:
                first_len = l
            o += l
            cnt += 1
            span += l
            hira += h; kata += k; kanji += kj; glyphs += g
        # gates
        if cnt >= MIN_STR and span >= MIN_BYTES and glyphs > 0:
            avglen = span / cnt
            jp = hira + kata + kanji
            if (hira >= kata and                       # hiragana-dominant
                    avglen <= 60 and                   # short strings
                    jp / glyphs >= 0.25):              # real JP density
                banks.append((i, o, cnt, hira, kata, kanji))
                i = o
                continue
        # advance by a whole string, not one byte, so graphics runs aren't
        # re-scanned from every offset (O(n/avglen) instead of O(n*MAXLEN)).
        i += first_len if first_len > 0 else 1
    print(f"{'start':>10} {'end':>10} {'bytes':>7} {'strs':>5} {'hira':>5} {'kata':>5} {'kanji':>5}")
    total = 0
    for s, e, c, h, k, kj in banks:
        total += c
        print(f"0x{s+BASE:08x} 0x{e+BASE:08x} {e-s:7d} {c:5d} {h:5d} {k:5d} {kj:5d}")
    print(f"\n{len(banks)} banks, {total} strings total")


if __name__ == '__main__':
    main()

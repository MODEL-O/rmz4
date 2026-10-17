#!/usr/bin/env python
"""Decode a list of rmz4 text banks into one rmz3-style strings.s.

Reads bank ranges either from argv pairs (start end start end ...) or from a
file of "0xSTART 0xEND" lines (--from banks.txt). Each bank becomes a labelled
section; every string gets an address label. Semantic group labels are applied
later once group boundaries are known.
"""
import sys
from text_lib import decode_string, BASE

ROM = "Rockman Zero 4.gba"


def fmt(text):
    lines = text.split('\n')
    out = []
    for k, line in enumerate(lines):
        line = line.replace('"', '\\"')
        if k != len(lines) - 1:
            out.append(f'\t.string "{line}\\n"')
        else:
            out.append(f'\t.string "{line}$"')
    return '\n'.join(out)


def load_ranges(argv):
    if argv and argv[0] == '--from':
        ranges = []
        for ln in open(argv[1], encoding='utf-8'):
            ln = ln.strip()
            if not ln or ln.startswith('#') or ln.startswith('@'):
                continue
            parts = ln.split()
            if len(parts) >= 2 and parts[0].startswith('0x'):
                ranges.append((int(parts[0], 16), int(parts[1], 16)))
        return ranges
    nums = [int(x, 16) for x in argv]
    return list(zip(nums[0::2], nums[1::2]))


def main():
    ranges = load_ranges(sys.argv[1:])
    if not ranges:
        print(__doc__)
        return
    d = open(ROM, 'rb').read()
    print('.section .rodata')
    print('.balign 4, 0\n')
    print('@ rmz4 text banks (no relative StringOfsTable; absolute pointers).')
    grand = 0
    for (start, end) in ranges:
        o = start - BASE
        print(f'\n@ ===== bank 0x{start:08x}..0x{end:08x} =====')
        idx = 0
        while o + BASE < end:
            addr = o + BASE
            text, length = decode_string(d, o)
            if length < 0 or (text and '{?0x' in text):
                print(f'@ stop @ 0x{addr:08x} byte 0x{d[o]:02x}')
                break
            print(f'str_{addr:08x}::')
            print(fmt(text))
            o += length
            idx += 1
        grand += idx
        print(f'@ bank end @ 0x{o + BASE:08x}, {idx} strings')
    print(f'\n@ grand total {grand} strings in {len(ranges)} banks')


if __name__ == '__main__':
    main()

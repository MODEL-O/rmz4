#!/usr/bin/env python
"""Dump a contiguous rmz4 gStringData blob into rmz3-style .string assembly.

rmz4 differs from rmz3: there is NO relative StringOfsTable. Strings are reached
by absolute 32-bit pointer tables scattered in the ROM/code. This dumper just
decodes a contiguous run of $-terminated strings starting at a base address and
emits rmz3-style `.string` directives (one label per string, address-tagged).

Usage:
  python tools/dump_strings.py <start_addr_hex> [end_addr_hex] > out.s
  e.g. python tools/dump_strings.py 0x0886d6b4 0x08870c61
"""
import sys
from text_lib import decode_string, BASE

ROM = "Rockman Zero 4.gba"


def fmt(text):
    """rmz3 string.ts format(): split on \n, non-final lines keep \\n; final ends $."""
    lines = text.split('\n')
    out = []
    for k, line in enumerate(lines):
        if k != len(lines) - 1:
            out.append(f'\t.string "{line}\\n"')
        else:
            out.append(f'\t.string "{line}$"')
    return '\n'.join(out)


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        return
    start = int(sys.argv[1], 16)
    end = int(sys.argv[2], 16) if len(sys.argv) > 2 else None
    d = open(ROM, 'rb').read()
    o = start - BASE
    print('.section .rodata')
    print('.balign 4, 0\n')
    print(f'@ rmz4 gStringData blob @ 0x{start:08x}')
    print('@ NOTE: rmz4 has no relative StringOfsTable; strings are reached via')
    print('@ absolute 32-bit pointer tables elsewhere in the ROM.\n')
    idx = 0
    while True:
        addr = o + BASE
        if end is not None and addr >= end:
            break
        text, length = decode_string(d, o)
        if length < 0 or (text is not None and '{?0x' in text):
            print(f'@ stopped at 0x{addr:08x} (non-text byte 0x{d[o]:02x})')
            break
        print(f'str_{addr:08x}:: @ 0x{addr:08x}')
        print(fmt(text))
        print()
        o += length
        idx += 1
    print(f'@ total {idx} strings, end @ 0x{o + BASE:08x}')


if __name__ == '__main__':
    main()

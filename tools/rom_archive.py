#!/usr/bin/env python
# -*- coding: utf-8 -*-
# rmz4-dev: 自包含 ROM "解包 / 无损回包" 工具 (改编自 rmz-ceshi, 指向 Rockman Zero 4)。
#   unpack: ROM -> archive/ (code.bin + res/*.bin + manifest.json)
#   repack: 按 manifest 原样压回 -> rebuilt.gba, 与原 ROM 比 sha1
# 容器切片无损可逆: repack 必逐字节还原原 ROM (间隙按字节回写, 数据段按文件回写)。
import os, sys, json, hashlib

HERE     = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ROM_PATH = os.path.join(HERE, 'Rockman Zero 4.gba')
ARC      = os.path.join(HERE, 'archive')
ROM_SIZE = 0x1100000         # 17 MB (Rockman Zero 4, B4ZJ)
CODE_END = 0x12A000          # .text 结束 = 资源区起点 (由 push{lr}/bxlr 密度断崖探测)
FILL     = 0xFF
MINFILL  = 64

try: sys.stdout.reconfigure(encoding='utf-8')
except Exception: pass


def parse_header(rom):
    title  = rom[0xA0:0xAC].decode('ascii', 'replace').rstrip('\0')
    gamecd = rom[0xAC:0xB0].decode('ascii', 'replace')
    maker  = rom[0xB0:0xB2].decode('ascii', 'replace')
    return [
        "ROM header",
        "  title      : %s" % title,
        "  game code  : %s" % gamecd,
        "  maker code : %s" % maker,
        "  size       : %d bytes (0x%X)" % (len(rom), len(rom)),
        "  layout     : code/.text 0x0..0x%X | 资源 0x%X..0x%X" % (CODE_END, CODE_END, ROM_SIZE),
        "  sha1       : %s" % hashlib.sha1(rom).hexdigest(),
    ]


def unpack():
    rom = open(ROM_PATH, 'rb').read()
    if len(rom) != ROM_SIZE:
        raise SystemExit('意外的 ROM 大小: %d (期望 0x%X)' % (len(rom), ROM_SIZE))
    resdir = os.path.join(ARC, 'res')
    os.makedirs(resdir, exist_ok=True)
    for f in os.listdir(resdir):
        os.remove(os.path.join(resdir, f))

    hdr = parse_header(rom)
    open(os.path.join(ARC, 'header.txt'), 'w', encoding='utf-8').write('\n'.join(hdr) + '\n')

    segments = []
    # 1) 代码区整块
    open(os.path.join(ARC, 'code.bin'), 'wb').write(rom[:CODE_END])
    segments.append({'a': 0, 'n': CODE_END, 'k': 'file', 'f': 'code.bin'})

    # 2) 资源区: 按 >=MINFILL 的 0xFF 间隙切成 数据段/填充段 交替
    i = CODE_END
    n_data = 0
    while i < ROM_SIZE:
        if rom[i] == FILL:
            j = i
            while j < ROM_SIZE and rom[j] == FILL:
                j += 1
            if (j - i) >= MINFILL:
                segments.append({'a': i, 'n': j - i, 'k': 'fill', 'b': FILL})
                i = j
                continue
        start = i
        while i < ROM_SIZE:
            if rom[i] == FILL:
                k = i
                while k < ROM_SIZE and rom[k] == FILL:
                    k += 1
                if (k - i) >= MINFILL:
                    break
                i = k
                continue
            i += 1
        data = rom[start:i]
        fname = 'res/%08X.bin' % (0x08000000 + start)
        open(os.path.join(ARC, fname), 'wb').write(data)
        segments.append({'a': start, 'n': len(data), 'k': 'file', 'f': fname})
        n_data += 1

    manifest = {
        'rom': os.path.basename(ROM_PATH),
        'size': ROM_SIZE,
        'sha1': hashlib.sha1(rom).hexdigest(),
        'code_end': CODE_END,
        'minfill': MINFILL,
        'segments': segments,
    }
    json.dump(manifest, open(os.path.join(ARC, 'manifest.json'), 'w'), indent=1)

    fills = sum(1 for s in segments if s['k'] == 'fill')
    fillbytes = sum(s['n'] for s in segments if s['k'] == 'fill')
    print('\n'.join(hdr))
    print('---- unpack ----')
    print('  代码段     : code.bin (0x%X B)' % CODE_END)
    print('  资源数据段 : %d' % n_data)
    print('  填充间隙   : %d 段, 共 %d B (%.1f KB)' % (fills, fillbytes, fillbytes/1024))
    print('  清单       : archive/manifest.json')


def repack():
    man = json.load(open(os.path.join(ARC, 'manifest.json')))
    buf = bytearray()
    for s in man['segments']:
        if s['a'] != len(buf):
            raise SystemExit('段不连续: 期望 0x%X 得到 0x%X' % (len(buf), s['a']))
        if s['k'] == 'fill':
            buf += bytes([s['b']]) * s['n']
        else:
            data = open(os.path.join(ARC, s['f']), 'rb').read()
            if len(data) != s['n']:
                raise SystemExit('%s 长度变了: 期望 %d 得到 %d' % (s['f'], s['n'], len(data)))
            buf += data
    if len(buf) != man['size']:
        raise SystemExit('总大小不符: %d != %d' % (len(buf), man['size']))
    out = os.path.join(HERE, 'rebuilt.gba')
    open(out, 'wb').write(buf)
    got = hashlib.sha1(buf).hexdigest()
    print('---- repack ----')
    print('  重建      : %s (%d B)' % (out, len(buf)))
    print('  期望 sha1 : %s' % man['sha1'])
    print('  实际 sha1 : %s' % got)
    print('  结果      : %s' % ('PASS  逐字节回归原始 ✓' if got == man['sha1'] else 'FAIL  ✗'))
    return got == man['sha1']


def main():
    cmd = sys.argv[1] if len(sys.argv) > 1 else 'unpack'
    if cmd == 'unpack':
        unpack()
    elif cmd == 'repack':
        sys.exit(0 if repack() else 1)
    else:
        raise SystemExit('用法: python rom_archive.py [unpack|repack]')


if __name__ == '__main__':
    main()

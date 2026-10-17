#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 探测 Zero4 .text 结束: 统计每 64KB 块的 Thumb 函数序言 push{...,lr} (0xB5xx, 半字对齐)
# 与 bx lr (0x4770) 密度。代码区高密度, 资源区几乎为 0 -> 密度断崖即代码上界。
import os, sys
sys.stdout.reconfigure(encoding='utf-8')
HERE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ROM = open(os.path.join(HERE, 'Rockman Zero 4.gba'), 'rb').read()
N = len(ROM)
BLK = 0x10000  # 64KB
print('ROM 0x%X, 每块 64KB 的 push{lr}序言 / bxlr 计数:' % N)
last_codey = 0
for b in range(0, min(N, 0x400000), BLK):
    chunk = ROM[b:b+BLK]
    push = bxlr = 0
    for i in range(0, len(chunk)-1, 2):
        hw = chunk[i] | (chunk[i+1] << 8)
        if (hw & 0xFF00) == 0xB500:      # push {..., lr}
            push += 1
        elif hw == 0x4770:               # bx lr
            bxlr += 1
    codey = push > 20 or bxlr > 20
    if codey:
        last_codey = b + BLK
    print('  0x%08X  push=%4d  bxlr=%4d  %s' % (b, push, bxlr, 'CODE' if codey else '.'))
print('\n最后一个 CODE 块结束于 0x%08X' % last_codey)

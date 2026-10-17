#!/usr/bin/env python
"""Harvest readable rmz4 dialogue strings from the absolute-pointer text banks.

rmz4 reaches dialogue via the pointer table at 0x08870c74 (44 entries):
  * indices 0..21  -> 0x0887xxxx conversation blocks (system charmap)
  * indices 22..43 -> 0x0900xxxx blocks (a DIFFERENT font/charmap; not handled)

Each block = [u16 offset/index sub-table(s)][FF-terminated dialogue lines],
possibly several such segments. Rather than fully model the (nested) container,
we harvest: a real text line starts right after a 0xFF terminator, so we only
attempt decodes at FF+1 boundaries (offset-table bytes carry no FF and are
skipped for free), then keep lines that are hiragana/kanji-rich and not
repeated-char padding.

Usage:
  python tools/harvest_text.py            # 0x0887 banks -> stdout
  python tools/harvest_text.py --s        # rmz3-style .string assembly
"""
import sys
from collections import Counter
from text_lib import decode_string, BASE

ROM = "Rockman Zero 4.gba"
PTR_TABLE = 0x08870c74
N_PTRS = 44
MAXLEN = 400


def is_hira(c):
    return 'ぁ' <= c <= 'ん'


def is_jp(c):
    return c >= '぀'


ANCHORS = ('{WINDOW', '{BOTTOM}', '{TOP}', '{RED}', 'オペレーター', 'シエル',
           '「', 'クラフト', 'ネージュ')

# semantic labels for the 22 0x0887 conversation blocks, derived from content
BLOCK_NAMES = {
    0:  'Dialogue_CielBaseMenu',          # データのかんり / 話をする
    1:  'Dialogue_ItemGetMessages',       # サブタンク/EXワザ キャプチャー get-msgs
    2:  'Dialogue_CielConversations',     # エリア・ゼロ / メンテ / エルフ命名
    3:  'Dialogue_MissionCaravanRescue',  # キャラバン救出 (ネージュ trailer)
    4:  'Dialogue_BossGatheringScene',    # 八体集結 / バイル作戦
    5:  'Dialogue_BossHeatGenblem',       # ヒート・ゲンブレム
    6:  'Dialogue_BossTechKraken',        # テック・クラーケン
    7:  'Dialogue_BossPegasoltaEclair',   # ぺガソルタ・エクレール
    8:  'Dialogue_BossNobleMandrago',     # ノービル・マンドラゴ
    9:  'Dialogue_BossSolTitanion',       # ソル・ティターニャン (ケシズミ)
    10: 'Dialogue_BossFenriLunaedge',     # フェンリ・ルナエッジ (ガウ/スピード)
    11: 'Dialogue_BossMinoMagnax',        # ミノ・マグナクス (モオオ)
    12: 'Dialogue_BossPoplaCocapetri',    # プープラ・コカペトリ (ケケーッ)
    13: 'Dialogue_CivilianRescue',        # 集賢 救出 / 子供
    14: 'Dialogue_CraftNeigeScene',       # クラフト & ネージュ
    15: 'Dialogue_BossCraft',             # クラフト戦
    16: 'Dialogue_MissionSwitchPuzzle',   # スイッチ通路
    17: 'Dialogue_ProtectProgramScene',   # プロテクト・プログラム
    18: 'Dialogue_EinherjarRevenge',      # クラフトの仇 (将闘士 rematch)
    19: 'Dialogue_AreaZeroBriefing',      # エリア・ゼロ データ
    20: 'Dialogue_RagnarokEnding',        # ラグナロク 賢下 / ゼロ…！
    21: 'Dialogue_NeigeConversations',    # ネージュ 会話
}


def clean_prefix(t):
    """Strip leading offset-table garbage fused onto the first line of a
    sub-segment. Such lines begin with spaces + repeated single kana/digits;
    real dialogue resumes at a speaker name / window code / opening quote."""
    head = t[:24].replace('\n', '')
    if not head:
        return t
    # signature of fused garbage: head dominated by one char or digits
    digits = sum(1 for c in head if c in '0123456789')
    mc = max((head.count(c) for c in set(head)), default=0)
    if digits < 4 and mc < 6:
        return t  # looks clean already
    best = None
    for a in ANCHORS:
        i = t.find(a)
        if i > 0 and (best is None or i < best):
            best = i
    return t[best:] if best is not None else t


def keep(t):
    if t is None or '{?0x' in t:
        return False
    core = [c for c in t if c != '\n']
    if len(core) < 4:
        return False
    jp = sum(1 for c in core if is_jp(c))
    hira = sum(1 for c in core if is_hira(c))
    if jp / len(core) < 0.30:
        return False
    mc = Counter(core).most_common(1)[0][1]
    if mc / len(core) > 0.45:
        return False
    return hira >= 1 or jp / len(core) >= 0.6


def main():
    emit_s = '--s' in sys.argv
    d = open(ROM, 'rb').read()
    n = len(d)

    def u32(o):
        return d[o] | (d[o+1] << 8) | (d[o+2] << 16) | (d[o+3] << 24)

    ptrs = [u32(PTR_TABLE - BASE + 4*k) for k in range(N_PTRS)]
    ptrs.append(0x09011000)  # rough end sentinel for last 0x0900 block

    # precompute FF terminator positions for fast anchoring
    if emit_s:
        print('.section .rodata')
        print('.balign 4, 0\n')
        print('@ rmz4 dialogue banks via pointer table @ 0x08870c74')
        print('@ harvested readable lines (system charmap; 0x0900 font excluded)\n')

    grand = 0
    for i in range(22):  # only 0x0887xxxx system-charmap blocks
        start, nextp = ptrs[i], ptrs[i+1]
        o = start - BASE
        end = nextp - BASE
        block = []
        # first text line: scan to first FF (skips offset table), start after it
        # then anchor on FF+1
        # find first FF in block
        p = o
        while p < end and d[p] != 0xFF:
            p += 1
        cur = p + 1  # first candidate after a terminator
        last_keep = cur
        while cur < end:
            # text region ended: long stretch with no kept strings -> stop
            if cur - last_keep > 1024:
                break
            # decode capped
            t, l = decode_string(d, cur)
            if 0 < l <= MAXLEN and keep(t):
                block.append((cur + BASE, clean_prefix(t)))
                cur += l
                last_keep = cur
            else:
                # advance to next FF + 1
                q = cur
                while q < end and d[q] != 0xFF:
                    q += 1
                cur = q + 1
        grand += len(block)
        if emit_s:
            label = BLOCK_NAMES.get(i, f'Dialogue_Block_{i}')
            print(f'\n@ ===== conversation block {i} @ 0x{start:08x} ({len(block)} lines) =====')
            print(f'{label}:: @ 0x{start:08x}')
            for addr, t in block:
                lines = t.split('\n')
                for k, ln in enumerate(lines):
                    ln = ln.replace('"', '\\"')
                    term = '$' if k == len(lines)-1 else '\\n'
                    print(f'\t.string "{ln}{term}"')
        else:
            print(f"\n### block {i} @ 0x{start:08x}: {len(block)} lines")
            for addr, t in block[:8]:
                print(f"0x{addr:08x}: {t!r}")
    if not emit_s:
        print(f"\nTOTAL 0x0887 harvested: {grand} lines")


if __name__ == '__main__':
    main()

#!/usr/bin/env bash
# Zero4 code.bin -> Ghidra 真值地图(units.tsv) + 可读反汇编(.asm)。
# 导入 archive/code.bin 为 GBA(ARM v4t, 基址 0x08000000), 激进播种 thumb/arm,
# 导出逐单元清单(供 gen_asm 字节回编)与人读 listing。
set -e
GHIDRA=/e/ghidra_12.1_PUBLIC
HEADLESS="$GHIDRA/support/analyzeHeadless"
SCRIPTS=/e/GameProjects/ghidra_scripts
ROOT="$(cd "$(dirname "$0")/.." && pwd)"

BIN="$ROOT/archive/code.bin"
OUTDIR="$ROOT/archive/code_c"
PROJDIR="$ROOT/archive/ghidra_proj"

[ -f "$BIN" ] || { echo "缺 $BIN, 先跑 rom_archive.py unpack"; exit 1; }
mkdir -p "$OUTDIR" "$PROJDIR"
export DECOMP_OUT_DIR="$OUTDIR"

echo "==> Ghidra 导入+分析 code.bin (ARM:LE:32:v4t @ 0x08000000) ..."
"$HEADLESS" "$PROJDIR" z4code \
  -import "$BIN" \
  -processor ARM:LE:32:v4t \
  -loader BinaryLoader \
  -loader-baseAddr 0x08000000 \
  -scriptPath "$SCRIPTS" \
  -postScript SeedThumbAndArm.java \
  -postScript CodeUnitManifest.java \
  -postScript FunctionManifest.java \
  -postScript DisassembleToFile.java \
  -deleteProject

echo "==> 完成。units: $OUTDIR/code.bin.units.tsv ; asm: $OUTDIR/code.bin.asm"
wc -l "$OUTDIR/code.bin.units.tsv" 2>/dev/null || true

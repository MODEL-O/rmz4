#!/usr/bin/env bash
# 轻量 Ghidra 跑: 只为导出 funcs_index.csv (函数边界), 不做 C 反编译。
set -e
GHIDRA=/e/ghidra_12.1_PUBLIC
HEADLESS="$GHIDRA/support/analyzeHeadless"
SCRIPTS=/e/GameProjects/ghidra_scripts
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BIN="$ROOT/archive/code.bin"
OUTDIR="$ROOT/archive/code_c"
PROJDIR="$ROOT/archive/ghidra_proj"
export DECOMP_OUT_DIR="$OUTDIR"
mkdir -p "$OUTDIR" "$PROJDIR"

"$HEADLESS" "$PROJDIR" z4funcs \
  -import "$BIN" \
  -processor ARM:LE:32:v4t \
  -loader BinaryLoader \
  -loader-baseAddr 0x08000000 \
  -scriptPath "$SCRIPTS" \
  -postScript SeedThumbAndArm.java \
  -postScript FunctionManifest.java \
  -deleteProject

echo "==> funcs_index.csv:"
wc -l "$OUTDIR/funcs_index.csv" 2>/dev/null || true
head -3 "$OUTDIR/funcs_index.csv" 2>/dev/null || true

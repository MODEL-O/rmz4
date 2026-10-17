#!/usr/bin/env bash
# Zero4 code.bin 逐函数反编译成糙 C: archive/code_c/funcs/<shard>/<name>.c (+ .asm + funcs_index.csv)
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

"$HEADLESS" "$PROJDIR" z4decomp \
  -import "$BIN" \
  -processor ARM:LE:32:v4t \
  -loader BinaryLoader \
  -loader-baseAddr 0x08000000 \
  -scriptPath "$SCRIPTS" \
  -postScript SeedThumbAndArm.java \
  -postScript DecompilePerFunction.java \
  -deleteProject

echo "==> 逐函数 C 完成"
find "$OUTDIR/funcs" -name '*.c' | wc -l

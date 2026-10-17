#!/usr/bin/env python3
# 数据驱动的函数分类: 用 categories.tsv 覆盖 funcs_index.csv 的 shard(类别目录) 与 name(改名),
# 然后重跑 split_asm.py —— 由 .org 绝对定位保证字节一致, split_asm 末尾自带 rebuild==code.bin 校验。
#
#   categories.tsv 行格式:  <entry 0x...> \t <category> \t [name]
#   未列出的函数保留其原 seg_ 分桶(从 funcs_index.base.csv 取原值)。
#
# 用法:  python tools/categorize.py
import os, csv, shutil, subprocess, sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
IDX  = os.path.join(ROOT, "archive", "code_c", "funcs_index.csv")
BASE = os.path.join(ROOT, "archive", "code_c", "funcs_index.base.csv")
CATS = os.path.join(HERE, "categories.tsv")
FUNCD= os.path.join(ROOT, "asm", "funcs")

def load_cats():
    m = {}
    with open(CATS, encoding="utf-8") as f:
        for ln in f:
            ln = ln.rstrip("\n")
            if not ln.strip() or ln.lstrip().startswith("#"): continue
            parts = ln.split("\t")
            raw = parts[0].strip()
            hexpart = raw[2:] if raw.lower().startswith("0x") else raw
            entry = "0x" + hexpart.upper()    # match csv form: 0x + uppercase hex
            cat = parts[1].strip() if len(parts) > 1 else ""
            name = parts[2].strip() if len(parts) > 2 and parts[2].strip() else None
            if cat: m[entry] = (cat, name)
    return m

def main():
    # 首跑: 备份原始(含原 name+seg shard)为权威基线
    if not os.path.exists(BASE):
        shutil.copy(IDX, BASE)
        print(f"backed up pristine index -> {BASE}")

    cats = load_cats()
    with open(BASE, newline="") as f:
        rows = list(csv.DictReader(f))
        fields = rows[0].keys() if rows else ["name","entry","size_bytes","c_ok","shard"]

    n_cat = 0; n_ren = 0; cat_count = {}
    seen_names = {}
    for row in rows:
        e = row["entry"].strip()
        key = "0x"+e[2:].upper()
        if key in cats:
            cat, name = cats[key]
            row["shard"] = cat
            n_cat += 1
            cat_count[cat] = cat_count.get(cat,0)+1
            if name:
                row["name"] = name; n_ren += 1
        seen_names[row["name"]] = seen_names.get(row["name"],0)+1

    dups = {k:v for k,v in seen_names.items() if v>1}
    if dups:
        print("ERROR: duplicate function names would collide:", dups); sys.exit(1)

    with open(IDX, "w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=list(fields)); w.writeheader(); w.writerows(rows)

    print(f"applied: {n_cat} categorized, {n_ren} renamed; buckets={cat_count}")

    # 清空 funcs/ 避免改名/迁移产生孤儿 .inc, 由 split_asm 全量重建
    if os.path.isdir(FUNCD):
        shutil.rmtree(FUNCD)
    print("cleared funcs/ ; running split_asm.py (rebuild + byte verify)...")
    r = subprocess.run([sys.executable, os.path.join(HERE,"split_asm.py")], cwd=HERE)
    sys.exit(r.returncode)

if __name__ == "__main__":
    main()

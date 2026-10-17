#!/usr/bin/env python3
# 批量试迁: 对给定函数(或最小的 N 个), 直接拿原始 Ghidra C 过 verify; MATCH 就把该 .c
# 复制进 c_build/src/<shard>/<name>.c(原始即匹配, 无需清理)。不匹配/不编译则跳过。
# 用法: python migrate_try.py [N=最小N个] 或 python migrate_try.py FUN_x FUN_y ...
import os, sys, csv, shutil
import verify_c_func as v

SRC = os.path.join(v.HERE, "src")

def smallest(n):
    rows = []
    with open(v.IDX) as f:
        for row in csv.DictReader(f):
            rows.append((int(row["size_bytes"]), row["name"], row["shard"]))
    rows.sort()
    return [(nm, sh) for _, nm, sh in rows[:n]]

def main():
    args = sys.argv[1:]
    if len(args) == 1 and args[0].isdigit():
        targets = smallest(int(args[0]))
    elif args:
        idx = {}
        with open(v.IDX) as f:
            for row in csv.DictReader(f):
                idx[row["name"]] = row["shard"]
        targets = [(a, idx[a]) for a in args]
    else:
        targets = smallest(40)
    ok = skip = 0
    for name, shard in targets:
        raw = os.path.join(v.ROOT, "archive", "code_c", "funcs", shard, name + ".c")
        if not os.path.exists(raw):
            continue
        passed, msg, _ = v.verify(name, raw, "-O2")
        if passed:
            od = os.path.join(SRC, shard); os.makedirs(od, exist_ok=True)
            dst = os.path.join(od, name + ".c")
            if not os.path.exists(dst):
                shutil.copyfile(raw, dst)
            ok += 1
            print("MATCH ", name)
        else:
            skip += 1
            print("skip  ", name, "|", msg.splitlines()[0])
    print(f"\n== {ok} matched (copied to src), {skip} skipped ==")

if __name__ == "__main__":
    main()

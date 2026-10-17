#!/usr/bin/env python3
# 把字节一致的整程序反汇编拆成"每函数一个 .inc"(objdump 助记符), 仍整体链接字节一致。
#   * 每个函数 -> asm/funcs/seg_080XXX000/FUN_xxxxxxxx.inc
#   * 主文件 asm/code.s 按地址顺序 .include 各函数, 函数之间的数据/孤立字节
#     (ROM 头/字面量池/跳表等)就地内联;
#   * 整个主文件是单一汇编单元 => bl/b 在链接期解析 => 与 code.bin 字节一致。
# 复用 gen_asm 的清单/objdump/汇编链路 与其验证出的 fallback.txt。
import os, subprocess, csv, bisect, hashlib
import gen_asm as g

ROOT   = g.ROOT
ASMD   = os.path.join(ROOT, "asm")              # 项目级 asm/ (对齐 rmz3-dev)
FUNCD  = os.path.join(ASMD, "funcs")            # 每函数 .inc 输出根
MASTER = os.path.join(ASMD, "code.s")
IDXCSV = os.path.join(ROOT, "archive", "code_c", "funcs_index.csv")
MOP    = os.path.join(ASMD, "code.o")
MEP    = os.path.join(ASMD, "code.elf")
MBP    = os.path.join(ASMD, "code.bin")
EXT    = ".inc"

def load_fallback():
    p = os.path.join(g.OUTD, "fallback.txt")
    s = set()
    if os.path.exists(p):
        for line in open(p):
            line=line.strip()
            if line: s.add(int(line,16))
    return s

def load_funcs():
    funcs = []  # (off, size, name, shard)
    with open(IDXCSV) as f:
        r = csv.DictReader(f)
        for row in r:
            entry = int(row["entry"],16) - 0x08000000
            funcs.append((entry, int(row["size_bytes"]), row["name"], row["shard"]))
    funcs.sort()
    # 去重叠: Ghidra 偶有函数体重叠/相邻, 截断到下一个函数入口
    out=[]
    for i,(off,sz,nm,sh) in enumerate(funcs):
        if i+1 < len(funcs):
            nxt = funcs[i+1][0]
            if off+sz > nxt: sz = nxt-off
        if sz>0: out.append((off,sz,nm,sh))
    return out

def unit_line(off, ln, kind, mode, hx, dis, fallback):
    if kind == "I" and not (off in fallback or off not in dis or dis[off][1] != ln):
        return f"\t{dis[off][0]}\t@ {off:08x} {hx}"
    bs = ",".join("0x"+hx[i:i+2] for i in range(0,len(hx),2))
    tagk = "data" if kind!="I" else "(raw)"
    return f"\t.byte {bs}\t@ {off:08x} {tagk}"

def main():
    units = g.load_units()
    fallback = load_fallback()
    funcs = load_funcs()
    starts = [u[0] for u in units]

    # 整程序按 run 一次 objdump, 建全局 off->(text,nbytes) 映射
    blocks = g.build_runs(units)
    dismap = {}
    for kind, mode, run in blocks:
        if kind=="I":
            s=run[0][0]; e=run[-1][0]+run[-1][1]
            dismap.update(g.objdump_run(s,e,mode=="T"))

    fstart=[f[0] for f in funcs]
    def func_at(off):
        i=bisect.bisect_right(fstart,off)-1
        if i>=0:
            fo,sz,nm,sh=funcs[i]
            if fo<=off<fo+sz: return funcs[i]
        return None

    os.makedirs(FUNCD, exist_ok=True)
    written=0
    for fo,sz,nm,sh in funcs:
        d=os.path.join(FUNCD, sh); os.makedirs(d, exist_ok=True)
        lines=[f"@ {nm}  entry 0x{fo+0x08000000:08x}  size {sz}"]
        cur=None
        j=bisect.bisect_left(starts, fo)
        first=True
        while j<len(units) and units[j][0]<fo+sz:
            off,ln,kind,mode,hx=units[j]
            if kind=="I" and mode!=cur:
                lines.append(".arm" if mode=="A" else ".thumb"); cur=mode
            if first:
                lines.append(f".org 0x{off:x}")
                lines.append(f"{nm}:")
                first=False
            else:
                lines.append(f".org 0x{off:x}")
            lines.append(unit_line(off,ln,kind,mode,hx,dismap,fallback))
            j+=1
        open(os.path.join(d, nm+EXT),"w").write("\n".join(lines)+"\n")
        written+=1

    # 主文件: 按地址顺序 include 函数 .inc, 非函数字节就地内联
    M=[".syntax unified","@ split master: include per-function .inc + inline non-func bytes",
       ".section .text,\"ax\",%progbits",".thumb",""]
    cur="T"
    i=0
    while i<len(units):
        off,ln,kind,mode,hx=units[i]
        f=func_at(off)
        if f and f[0]==off:
            fo,sz,nm,sh=f
            M.append(f".org 0x{off:x}")
            M.append(f".include \"funcs/{sh}/{nm}{EXT}\"")
            j=i
            while j<len(units) and units[j][0]<fo+sz: j+=1
            i=j
            cur="?"
            continue
        if kind=="I" and mode!=cur:
            M.append(".arm" if mode=="A" else ".thumb"); cur=mode
        M.append(f".org 0x{off:x}")
        M.append(unit_line(off,ln,kind,mode,hx,dismap,fallback))
        i+=1
    os.makedirs(ASMD, exist_ok=True)
    open(MASTER,"w").write("\n".join(M)+"\n")
    print(f"wrote {written} per-func {EXT} + master {MASTER}")

    # 汇编 + 链接(基址0) + 比对 code.bin
    with open(g.LDS,"w") as fp:
        fp.write("SECTIONS { . = 0x0; .text : { *(.text) } /DISCARD/ : { *(*) } }\n")
    r=subprocess.run([g.AS,"-mcpu=arm7tdmi","-I",ASMD,"-o",MOP,MASTER],capture_output=True,text=True)
    if r.returncode!=0:
        print("AS FAIL:\n"+r.stderr[:4000]); return
    rl=subprocess.run([g.LD,"-T",g.LDS,"-o",MEP,MOP],capture_output=True,text=True)
    if rl.returncode!=0:
        print("LD FAIL:\n"+rl.stderr[:4000]); return
    subprocess.run([g.OBJCOPY,"-O","binary",MEP,MBP],check=True)
    data=open(MBP,"rb").read()
    orig=open(g.BIN,"rb").read()
    data=data[:len(orig)]+b"\x00"*max(0,len(orig)-len(data))
    if data==orig:
        print(f"SPLIT BYTE-EXACT OK  sha1={hashlib.sha1(data).hexdigest()}  funcs={written}")
    else:
        diffs=[k for k in range(len(orig)) if data[k]!=orig[k]]
        print(f"SPLIT MISMATCH diffs={len(diffs)}  first:")
        for dd in diffs[:20]: print(f"  @0x{dd:08x} got {data[dd]:02x} want {orig[dd]:02x}")

if __name__=="__main__":
    main()

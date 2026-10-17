#!/usr/bin/env python3
# Match agbcc libgcc/libc function byte patterns against rmz4 code.bin.
# Reloc'd instructions are wildcarded. Byte search is CPU-mode agnostic.
import re, sys, subprocess, os

TOOLS = os.path.dirname(os.path.abspath(__file__))
ROM_BASE = 0x08000000
CODE_BIN = r'E:\GameProjects\rmz3\rmz4-dev\asm\code.bin'
NM = r'E:\GameProjects\rmz3\toolchain\arm\xpack-arm-none-eabi-gcc-15.2.1-1.1\bin\arm-none-eabi-nm.exe'
LIBS = {
    'libgcc': (r'E:\GameProjects\rmz3\agbcc\libgcc.a', os.path.join(TOOLS, '_libgcc_dr.txt')),
    'libc':   (r'E:\GameProjects\rmz3\agbcc\libc.a',   os.path.join(TOOLS, '_libc_dr.txt')),
}
MIN_BYTES = 16          # ignore tiny patterns (too many false hits)
MAX_WILD_RATIO = 0.34   # skip patterns that are mostly wildcards

def real_names(archive):
    out = subprocess.run([NM, archive], capture_output=True, text=True).stdout
    names = set()
    for ln in out.splitlines():
        m = re.match(r'^[0-9a-f]+ T (\S+)$', ln)
        if m: names.add(m.group(1))
    return names

hdr_re  = re.compile(r'^[0-9a-f]+ <([^>]+)>:\s*$')
insn_re = re.compile(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2,4}\s)+)\s')
reloc_re= re.compile(r'^\s*[0-9a-f]+:\s+R_ARM')

def parse(dump_path, valid):
    """Return list of (name, pattern_bytes, mask) where mask[i]=False means wildcard."""
    funcs = []
    cur_name = None
    cur_bytes = bytearray()
    cur_mask = []
    last_ilen = 0
    def flush():
        if cur_name and cur_bytes:
            funcs.append((cur_name, bytes(cur_bytes), list(cur_mask)))
    for ln in open(dump_path, errors='replace'):
        h = hdr_re.match(ln)
        if h:
            nm = h.group(1)
            if nm in valid:           # real function entry -> new group
                flush()
                cur_name = nm
                cur_bytes = bytearray(); cur_mask = []
            # else: internal label (Lxxx/Overxx) -> continue current func
            continue
        if reloc_re.match(ln) and cur_name and last_ilen:
            for k in range(1, last_ilen+1):   # wildcard the last instruction's bytes
                cur_mask[-k] = False
            continue
        mi = insn_re.match(ln)
        if mi and cur_name is not None:
            hexbytes = mi.group(2).split()
            bs = bytes(int(b,16) for b in hexbytes if len(b)==2) if all(len(b)==2 for b in hexbytes) else None
            if bs is None:
                # 16-bit halfword groups like 'f7ff fffe' -> split into bytes little? objdump prints big-endian halfwords
                bs = bytearray()
                for hw in hexbytes:
                    if len(hw)==4:
                        bs += bytes([int(hw[2:4],16), int(hw[0:2],16)])  # LE store
                    elif len(hw)==2:
                        bs.append(int(hw,16))
                bs = bytes(bs)
            cur_bytes += bs
            cur_mask += [True]*len(bs)
            last_ilen = len(bs)
    flush()
    return funcs

def build_regex(pat, mask):
    out = []
    for b, keep in zip(pat, mask):
        out.append(re.escape(bytes([b])) if keep else b'.')
    return re.compile(b''.join(out), re.DOTALL)

def main():
    code = open(CODE_BIN,'rb').read()
    results = []
    seen = {}
    for lib,(arc,dump) in LIBS.items():
        valid = real_names(arc)
        for name, pat, mask in parse(dump, valid):
            if len(pat) < MIN_BYTES: continue
            wild = mask.count(False)
            if wild/len(pat) > MAX_WILD_RATIO: continue
            rx = build_regex(pat, mask)
            for m in rx.finditer(code):
                off = m.start()
                va = ROM_BASE + off
                results.append((va, name, lib, len(pat), wild))
    results.sort()
    outp = os.path.join(TOOLS, 'lib_function_map.txt')
    with open(outp,'w') as f:
        f.write(f"# agbcc lib byte-match vs code.bin  ({len(results)} hits)\n")
        f.write(f"# VA          name                          lib      bytes wild\n")
        for va,name,lib,ln,wild in results:
            f.write(f"0x{va:08x}  {name:30s} {lib:8s} {ln:5d} {wild}\n")
    print(f"hits={len(results)}  unique_names={len(set(r[1] for r in results))}")
    print(f"written: {outp}")
    for r in results[:60]:
        print(f"0x{r[0]:08x}  {r[1]:28s} {r[2]:7s} {r[3]}b w{r[4]}")

if __name__=='__main__':
    main()

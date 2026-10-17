#!/usr/bin/env python3
# 对原始 Ghidra 糙 C 施加"安全"变换以提升 agbcc 字节匹配率。变换都经字节验证确认安全;
# 任一变换若产生错码只会导致"字节不符"被验证器拒绝, 不会污染结果(batch 取能匹配的版本)。
#
#  1) in_lr 习语: undefined4 F(){...; return in_lr;} 实为 void 函数。改 void 返回。
#       仅当 in_lr 只出现在声明+return 时才动(否则如 CONCAT44(in_lr,..) 保留)。
#  2) *DAT_xxxx 解引用: Ghidra 把"指针型 DAT"写成 *DAT_(星号紧贴, 二元乘法总带空格),
#       extern 声明 DAT 为 unsigned int 不能解引用 -> 显式 *(int *)DAT_。
#  3) 字面量内联(inline_lit=True): 代码区(0x08000000..CODE_END)内的 DAT_/PTR_ 实为
#       函数文字池常量(指针/立即数), Ghidra 误当全局变量读。把它换成该 ROM 地址处的
#       4 字节常量值, 让 agbcc 重新入池, 与原版 ldr rN,[pc,#imm] 字节一致。
#       仅动代码区符号; RAM/IO 区(0x02/03/04..)DAT 是真内存访问, 不动。
import os, re

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
BIN  = os.path.join(ROOT, "archive", "code.bin")
BASE = 0x08000000

_RET_TYPES = (r"undefined4|undefined2|undefined1|undefined|"
              r"uint|int|byte|char|short|ushort|uchar|bool|long|ulong|"
              r"code|void")

_CODE = None
def _codebin():
    global _CODE
    if _CODE is None:
        _CODE = open(BIN, "rb").read()
    return _CODE

def _concat_ret_expr(txt):
    # 定位 "CONCAT44(in_lr," 并平衡括号取出 EXPR 与整段 "return CONCAT44(...);"
    key = "CONCAT44(in_lr,"
    i = txt.find(key)
    if i < 0:
        return None
    j = i + len(key)
    depth = 1
    k = j
    while k < len(txt) and depth:
        c = txt[k]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                break
        k += 1
    if depth != 0:
        return None
    expr = txt[j:k].strip()         # CONCAT44(in_lr, EXPR) 里的 EXPR
    rs = txt.rfind("return", 0, i)  # 该 CONCAT44 所属的 return 起点
    if rs < 0:
        return None
    semi = txt.find(";", k)
    if semi < 0:
        return None
    return rs, semi + 1, expr       # [rs,semi+1) 是整段 "return CONCAT44(in_lr,EXPR);"

def clean_concat_ret(txt, name):
    # undefined8 F(){...; return CONCAT44(in_lr, EXPR);} 实为 32 位返回 EXPR。
    # Ghidra 把"r0 返回值 + r1 残留(in_lr)"误读成 64 位; 保留会逼 agbcc 用 r0:r1 对+r4 入栈。
    if "CONCAT44(in_lr," not in txt:
        return txt
    got = _concat_ret_expr(txt)
    if got is None:
        return txt
    rs, re_end, expr = got
    t = txt[:rs] + "return " + expr + ";" + txt[re_end:]
    # 删 in_lr 声明; 若仍被(声明外)引用则放弃整个变换
    rest = re.sub(r"(?:" + _RET_TYPES + r")\s+in_lr\s*;", "", t)
    if "in_lr" in rest:
        return txt
    t = re.sub(r"[ \t]*(?:" + _RET_TYPES + r")\s+in_lr\s*;\s*\n", "", t)
    # 返回类型 undefined8 -> undefined4 (32 位, 单 r0 返回)
    t = re.sub(r"(?m)^undefined8(\s+" + re.escape(name) + r"\s*\()",
               r"undefined4\1", t, count=1)
    return t

def clean_in_lr(txt, name):
    if "in_lr" not in txt:
        return txt
    t = re.sub(r"return\s+in_lr\s*;", "return;", txt)
    # 若 in_lr 仍被(声明以外)引用, 不能贸然删声明 -> 放弃此变换
    rest = re.sub(r"(?:" + _RET_TYPES + r")\s+in_lr\s*;", "", t)  # 去掉声明再数
    if "in_lr" in rest:
        return txt
    t = re.sub(r"[ \t]*(?:" + _RET_TYPES + r")\s+in_lr\s*;\s*\n", "", t)
    t = re.sub(r"(?m)^(?:" + _RET_TYPES + r")(\s+" + re.escape(name) + r"\s*\()",
               r"void\1", t, count=1)
    return t

# 捕获: 前缀星号(解引用) / 符号 / 地址 / 后随的下标 '['(数组用法)
_SYM = re.compile(r"(\*?)((?:_?DAT_|PTR_)([0-9A-Fa-f]{8}))(\s*\[)?")

def _in_code(addr):
    b = _codebin()
    return BASE <= addr < BASE + len(b)

def _lit(addr):
    b = _codebin()
    o = addr - BASE
    return int.from_bytes(b[o:o+4], "little")

def clean_dat_deref(txt):
    # *DAT_xxxx -> *(int *)DAT_xxxx (仅紧贴星号的解引用)
    return re.sub(r"\*(_?DAT_[0-9A-Fa-f]{8}|PTR_[0-9A-Fa-f]{8})", r"*(int *)\1", txt)

# 从 "TYPE *vN; ... vN = DAT_xxxx;" 推断 DAT 的指针目标类型(决定解引用宽度)。
_TYPETOK = (r"undefined4|undefined2|undefined1|undefined|uint|int|byte|char|"
            r"short|ushort|uchar|sbyte|bool|long|ulong|code")
_DECL = re.compile(r"\b(" + _TYPETOK + r")\s*\*\s*(\w+)\s*;")
_ASSIGN = re.compile(r"\b(\w+)\s*=\s*(?:_?DAT_|PTR_)([0-9A-Fa-f]{8})\s*;")

def _dat_types(txt):
    decl = {m.group(2): m.group(1) for m in _DECL.finditer(txt)}   # var -> type
    out = {}
    for m in _ASSIGN.finditer(txt):
        var, hx = m.group(1), m.group(2).lower()
        if var in decl:
            out[hx] = decl[var]
    return out

def clean_dat_literal(txt):
    types = _dat_types(txt)
    def repl(m):
        star, sym, hx, sub = m.group(1), m.group(2), m.group(3).lower(), m.group(4)
        addr = int(hx, 16)
        if not _in_code(addr):
            return m.group(0)            # RAM/IO: 真内存, 不动
        v = _lit(addr)
        t = types.get(hx, "int")         # 推断不出宽度则默认 int(字)
        if star == "*":                  # 解引用: *(T *)0xLIT
            return f"(*({t} *)0x{v:08x})"
        if sub:                          # 数组下标: ((T *)0xLIT)[
            return f"(({t} *)0x{v:08x})" + sub
        return f"0x{v:08x}"              # 立即数/算术/赋值: 字面量
    return _SYM.sub(repl, txt)

def clean_text(txt, name, inline_lit=False):
    t = clean_concat_ret(txt, name)
    t = clean_in_lr(t, name)
    if inline_lit:
        t = clean_dat_literal(t)
    t = clean_dat_deref(t)               # 收尾: 处理剩余(非代码区)*DAT
    return t

if __name__ == "__main__":
    import sys
    name, src = sys.argv[1], sys.argv[2]
    lit = "--lit" in sys.argv
    print(clean_text(open(src, encoding="utf-8", errors="ignore").read(), name, lit))

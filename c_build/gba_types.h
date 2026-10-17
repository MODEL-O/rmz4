// Ghidra 反编译类型垫片 —— 让 archive/code_c 的原始 C 能过编译。
// 仅做类型别名/占位, 不引入任何业务逻辑。clean-room: 不依赖 rmz/tools。
#ifndef GBA_TYPES_H
#define GBA_TYPES_H

typedef unsigned char   undefined;
typedef unsigned char   undefined1;
typedef unsigned short  undefined2;
typedef unsigned int    undefined3;   // Ghidra 3 字节量, 用 32 位承载
typedef unsigned int    undefined4;
typedef unsigned long long undefined5;
typedef unsigned long long undefined6;
typedef unsigned long long undefined7;
typedef unsigned long long undefined8;

typedef unsigned char   byte;
typedef signed char     sbyte;
typedef unsigned char   uchar;
typedef unsigned short  ushort;
typedef unsigned int    uint;
typedef unsigned long   ulong;

typedef int             code;          // Ghidra "code" 占位; 取地址用

// Ghidra 伪本征(intrinsic): 位拼接。让引用它们的糙 C 能编译/链接,
// 否则 ld 报 "undefined reference to CONCAT44"。语义同 Ghidra 文档。
#define CONCAT44(hi, lo) (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))
#define CONCAT22(hi, lo) (((unsigned int)(unsigned short)(hi) << 16) | (unsigned short)(lo))

#ifndef __cplusplus
typedef unsigned char   bool;
#define true  1
#define false 0
#endif

#endif // GBA_TYPES_H

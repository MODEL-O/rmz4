; undefined FUN_0805bf48(void)
; entry 0x805bf48  size 64 bytes

0805BF48: 00b5         push {lr}
0805BF4A: c26a         ldr r2,[r0,#0x2c]
0805BF4C: c168         ldr r1,[r0,#0xc]
0805BF4E: c96a         ldr r1,[r1,#0x2c]
0805BF50: 4069         ldr r0,[r0,#0x14]
0805BF52: 0123         mov r3,#0x1
0805BF54: 1840         and r0,r3
0805BF56: 0028         cmp r0,#0x0
0805BF58: 14d0         beq 0x0805bf84
0805BF5A: 486d         ldr r0,[r1,#0x54]
0805BF5C: 516d         ldr r1,[r2,#0x54]
0805BF5E: 8842         cmp r0,r1
0805BF60: 04da         bge 0x0805bf6c
0805BF62: 111c         add r1,r2,#0x0
0805BF64: bc31         add r1,#0xbc
0805BF66: 0020         mov r0,#0x0
0805BF68: 0870         strb r0,[r1,#0x0]
0805BF6A: 0be0         b 0x0805bf84
0805BF6C: 8142         cmp r1,r0
0805BF6E: 06db         blt 0x0805bf7e
0805BF70: 0023         mov r3,#0x0
0805BF72: 0548         ldr r0,[0x0805bf88]
0805BF74: 0068         ldr r0,[r0,#0x0]
0805BF76: 406d         ldr r0,[r0,#0x54]
0805BF78: 8142         cmp r1,r0
0805BF7A: 00da         bge 0x0805bf7e
0805BF7C: 0123         mov r3,#0x1
0805BF7E: 101c         add r0,r2,#0x0
0805BF80: bc30         add r0,#0xbc
0805BF82: 0370         strb r3,[r0,#0x0]
0805BF84: 01bc         pop {r0}
0805BF86: 0047         bx r0

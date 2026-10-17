; undefined FUN_0803ae5c(void)
; entry 0x803ae5c  size 46 bytes

0803AE5C: 00b5         push {lr}
0803AE5E: 021c         add r2,r0,#0x0
0803AE60: 0b1c         add r3,r1,#0x0
0803AE62: 917a         ldrb r1,[r2,#0xa]
0803AE64: 2020         mov r0,#0x20
0803AE66: 0840         and r0,r1
0803AE68: 0028         cmp r0,#0x0
0803AE6A: 05d0         beq 0x0803ae78
0803AE6C: 506d         ldr r0,[r2,#0x54]
0803AE6E: 1860         str r0,[r3,#0x0]
0803AE70: 906d         ldr r0,[r2,#0x58]
0803AE72: a021         mov r1,#0xa0
0803AE74: 0901         lsl r1,r1,#0x4
0803AE76: 03e0         b 0x0803ae80
0803AE78: 506d         ldr r0,[r2,#0x54]
0803AE7A: 1860         str r0,[r3,#0x0]
0803AE7C: 906d         ldr r0,[r2,#0x58]
0803AE7E: 0349         ldr r1,[0x0803ae8c]
0803AE80: 4018         add r0,r0,r1
0803AE82: 5860         str r0,[r3,#0x4]
0803AE84: 0120         mov r0,#0x1
0803AE86: 02bc         pop {r1}
0803AE88: 0847         bx r1

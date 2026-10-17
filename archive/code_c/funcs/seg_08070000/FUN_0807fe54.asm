; undefined FUN_0807fe54(void)
; entry 0x807fe54  size 66 bytes

0807FE54: 70b5         push {r4,r5,r6,lr}
0807FE56: 041c         add r4,r0,#0x0
0807FE58: 666d         ldr r6,[r4,#0x54]
0807FE5A: 8020         mov r0,#0x80
0807FE5C: c000         lsl r0,r0,#0x3
0807FE5E: 3218         add r2,r6,r0
0807FE60: a06d         ldr r0,[r4,#0x58]
0807FE62: 8021         mov r1,#0x80
0807FE64: 0901         lsl r1,r1,#0x4
0807FE66: 4518         add r5,r0,r1
0807FE68: 101c         add r0,r2,#0x0
0807FE6A: 291c         add r1,r5,#0x0
0807FE6C: 87f706ff     bl 0x08007c7c
0807FE70: 0004         lsl r0,r0,#0x10
0807FE72: 0028         cmp r0,#0x0
0807FE74: 0cd1         bne 0x0807fe90
0807FE76: 0848         ldr r0,[0x0807fe98]
0807FE78: 3218         add r2,r6,r0
0807FE7A: 101c         add r0,r2,#0x0
0807FE7C: 291c         add r1,r5,#0x0
0807FE7E: 87f7fdfe     bl 0x08007c7c
0807FE82: 0004         lsl r0,r0,#0x10
0807FE84: 010c         lsr r1,r0,#0x10
0807FE86: 0029         cmp r1,#0x0
0807FE88: 02d1         bne 0x0807fe90
0807FE8A: 0120         mov r0,#0x1
0807FE8C: 6073         strb r0,[r4,#0xd]
0807FE8E: a173         strb r1,[r4,#0xe]
0807FE90: 70bc         pop {r4,r5,r6}
0807FE92: 01bc         pop {r0}
0807FE94: 0047         bx r0

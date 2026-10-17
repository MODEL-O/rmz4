; undefined FUN_0809af04(void)
; entry 0x809af04  size 28 bytes

0809AF04: 827a         ldrb r2,[r0,#0xa]
0809AF06: fe21         mov r1,#0xfe
0809AF08: 1140         and r1,r2
0809AF0A: 8172         strb r1,[r0,#0xa]
0809AF0C: 044a         ldr r2,[0x0809af20]
0809AF0E: 417a         ldrb r1,[r0,#0x9]
0809AF10: 8900         lsl r1,r1,#0x2
0809AF12: 8918         add r1,r1,r2
0809AF14: 0422         mov r2,#0x4
0809AF16: c260         str r2,[r0,#0xc]
0809AF18: 0968         ldr r1,[r1,#0x0]
0809AF1A: 0969         ldr r1,[r1,#0x10]
0809AF1C: 4161         str r1,[r0,#0x14]
0809AF1E: 7047         bx lr

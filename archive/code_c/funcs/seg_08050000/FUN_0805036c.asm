; undefined FUN_0805036c(void)
; entry 0x805036c  size 28 bytes

0805036C: 827a         ldrb r2,[r0,#0xa]
0805036E: fe21         mov r1,#0xfe
08050370: 1140         and r1,r2
08050372: 8172         strb r1,[r0,#0xa]
08050374: 044a         ldr r2,[0x08050388]
08050376: 417a         ldrb r1,[r0,#0x9]
08050378: 8900         lsl r1,r1,#0x2
0805037A: 8918         add r1,r1,r2
0805037C: 0422         mov r2,#0x4
0805037E: c260         str r2,[r0,#0xc]
08050380: 0968         ldr r1,[r1,#0x0]
08050382: 0969         ldr r1,[r1,#0x10]
08050384: 4161         str r1,[r0,#0x14]
08050386: 7047         bx lr

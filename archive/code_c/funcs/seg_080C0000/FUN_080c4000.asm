; undefined FUN_080c4000(void)
; entry 0x80c4000  size 20 bytes

080C4000: 00b5         push {lr}
080C4002: 044a         ldr r2,[0x080c4014]
080C4004: 017c         ldrb r1,[r0,#0x10]
080C4006: 8900         lsl r1,r1,#0x2
080C4008: 8918         add r1,r1,r2
080C400A: 0968         ldr r1,[r1,#0x0]
080C400C: 64f0b8ff     bl 0x08128f80
080C4010: 01bc         pop {r0}
080C4012: 0047         bx r0

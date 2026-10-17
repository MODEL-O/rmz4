; undefined FUN_080f3f04(void)
; entry 0x80f3f04  size 20 bytes

080F3F04: 00b5         push {lr}
080F3F06: 044a         ldr r2,[0x080f3f18]
080F3F08: 017c         ldrb r1,[r0,#0x10]
080F3F0A: 8900         lsl r1,r1,#0x2
080F3F0C: 8918         add r1,r1,r2
080F3F0E: 0968         ldr r1,[r1,#0x0]
080F3F10: 35f036f8     bl 0x08128f80
080F3F14: 01bc         pop {r0}
080F3F16: 0047         bx r0

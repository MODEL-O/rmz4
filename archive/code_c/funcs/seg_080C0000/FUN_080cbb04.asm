; undefined FUN_080cbb04(void)
; entry 0x80cbb04  size 20 bytes

080CBB04: 00b5         push {lr}
080CBB06: 044a         ldr r2,[0x080cbb18]
080CBB08: 017c         ldrb r1,[r0,#0x10]
080CBB0A: 8900         lsl r1,r1,#0x2
080CBB0C: 8918         add r1,r1,r2
080CBB0E: 0968         ldr r1,[r1,#0x0]
080CBB10: 5df036fa     bl 0x08128f80
080CBB14: 01bc         pop {r0}
080CBB16: 0047         bx r0

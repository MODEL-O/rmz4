; undefined FUN_080d2a30(void)
; entry 0x80d2a30  size 20 bytes

080D2A30: 00b5         push {lr}
080D2A32: 044a         ldr r2,[0x080d2a44]
080D2A34: 017c         ldrb r1,[r0,#0x10]
080D2A36: 8900         lsl r1,r1,#0x2
080D2A38: 8918         add r1,r1,r2
080D2A3A: 0968         ldr r1,[r1,#0x0]
080D2A3C: 56f0a0fa     bl 0x08128f80
080D2A40: 01bc         pop {r0}
080D2A42: 0047         bx r0

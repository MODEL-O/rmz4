; undefined FUN_080c3a30(void)
; entry 0x80c3a30  size 20 bytes

080C3A30: 00b5         push {lr}
080C3A32: 044a         ldr r2,[0x080c3a44]
080C3A34: 017c         ldrb r1,[r0,#0x10]
080C3A36: 8900         lsl r1,r1,#0x2
080C3A38: 8918         add r1,r1,r2
080C3A3A: 0968         ldr r1,[r1,#0x0]
080C3A3C: 65f0a0fa     bl 0x08128f80
080C3A40: 01bc         pop {r0}
080C3A42: 0047         bx r0

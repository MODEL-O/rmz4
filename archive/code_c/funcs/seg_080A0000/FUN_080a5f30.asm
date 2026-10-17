; undefined FUN_080a5f30(void)
; entry 0x80a5f30  size 20 bytes

080A5F30: 00b5         push {lr}
080A5F32: 044a         ldr r2,[0x080a5f44]
080A5F34: 017c         ldrb r1,[r0,#0x10]
080A5F36: 8900         lsl r1,r1,#0x2
080A5F38: 8918         add r1,r1,r2
080A5F3A: 0968         ldr r1,[r1,#0x0]
080A5F3C: 83f020f8     bl 0x08128f80
080A5F40: 01bc         pop {r0}
080A5F42: 0047         bx r0

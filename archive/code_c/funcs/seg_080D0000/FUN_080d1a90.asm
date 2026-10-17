; undefined FUN_080d1a90(void)
; entry 0x80d1a90  size 20 bytes

080D1A90: 00b5         push {lr}
080D1A92: 044a         ldr r2,[0x080d1aa4]
080D1A94: 017c         ldrb r1,[r0,#0x10]
080D1A96: 8900         lsl r1,r1,#0x2
080D1A98: 8918         add r1,r1,r2
080D1A9A: 0968         ldr r1,[r1,#0x0]
080D1A9C: 57f070fa     bl 0x08128f80
080D1AA0: 01bc         pop {r0}
080D1AA2: 0047         bx r0

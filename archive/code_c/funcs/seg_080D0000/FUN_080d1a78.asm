; undefined FUN_080d1a78(void)
; entry 0x80d1a78  size 20 bytes

080D1A78: 00b5         push {lr}
080D1A7A: 044a         ldr r2,[0x080d1a8c]
080D1A7C: 017c         ldrb r1,[r0,#0x10]
080D1A7E: 8900         lsl r1,r1,#0x2
080D1A80: 8918         add r1,r1,r2
080D1A82: 0968         ldr r1,[r1,#0x0]
080D1A84: 57f07cfa     bl 0x08128f80
080D1A88: 01bc         pop {r0}
080D1A8A: 0047         bx r0

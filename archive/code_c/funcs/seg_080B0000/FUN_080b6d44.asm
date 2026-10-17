; undefined FUN_080b6d44(void)
; entry 0x80b6d44  size 20 bytes

080B6D44: 00b5         push {lr}
080B6D46: 044a         ldr r2,[0x080b6d58]
080B6D48: 017c         ldrb r1,[r0,#0x10]
080B6D4A: 8900         lsl r1,r1,#0x2
080B6D4C: 8918         add r1,r1,r2
080B6D4E: 0968         ldr r1,[r1,#0x0]
080B6D50: 72f016f9     bl 0x08128f80
080B6D54: 01bc         pop {r0}
080B6D56: 0047         bx r0

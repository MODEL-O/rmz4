; undefined FUN_080c1b78(void)
; entry 0x80c1b78  size 20 bytes

080C1B78: 00b5         push {lr}
080C1B7A: 044a         ldr r2,[0x080c1b8c]
080C1B7C: 017c         ldrb r1,[r0,#0x10]
080C1B7E: 8900         lsl r1,r1,#0x2
080C1B80: 8918         add r1,r1,r2
080C1B82: 0968         ldr r1,[r1,#0x0]
080C1B84: 67f0fcf9     bl 0x08128f80
080C1B88: 01bc         pop {r0}
080C1B8A: 0047         bx r0

; undefined FUN_080d2a48(void)
; entry 0x80d2a48  size 20 bytes

080D2A48: 00b5         push {lr}
080D2A4A: 044a         ldr r2,[0x080d2a5c]
080D2A4C: 017c         ldrb r1,[r0,#0x10]
080D2A4E: 8900         lsl r1,r1,#0x2
080D2A50: 8918         add r1,r1,r2
080D2A52: 0968         ldr r1,[r1,#0x0]
080D2A54: 56f094fa     bl 0x08128f80
080D2A58: 01bc         pop {r0}
080D2A5A: 0047         bx r0

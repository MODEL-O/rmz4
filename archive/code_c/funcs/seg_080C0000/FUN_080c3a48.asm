; undefined FUN_080c3a48(void)
; entry 0x80c3a48  size 20 bytes

080C3A48: 00b5         push {lr}
080C3A4A: 044a         ldr r2,[0x080c3a5c]
080C3A4C: 017c         ldrb r1,[r0,#0x10]
080C3A4E: 8900         lsl r1,r1,#0x2
080C3A50: 8918         add r1,r1,r2
080C3A52: 0968         ldr r1,[r1,#0x0]
080C3A54: 65f094fa     bl 0x08128f80
080C3A58: 01bc         pop {r0}
080C3A5A: 0047         bx r0

; undefined FUN_080c3f4c(void)
; entry 0x80c3f4c  size 20 bytes

080C3F4C: 00b5         push {lr}
080C3F4E: 044a         ldr r2,[0x080c3f60]
080C3F50: 017c         ldrb r1,[r0,#0x10]
080C3F52: 8900         lsl r1,r1,#0x2
080C3F54: 8918         add r1,r1,r2
080C3F56: 0968         ldr r1,[r1,#0x0]
080C3F58: 65f012f8     bl 0x08128f80
080C3F5C: 01bc         pop {r0}
080C3F5E: 0047         bx r0

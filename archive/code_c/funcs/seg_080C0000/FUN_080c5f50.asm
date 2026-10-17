; undefined FUN_080c5f50(void)
; entry 0x80c5f50  size 20 bytes

080C5F50: 00b5         push {lr}
080C5F52: 044a         ldr r2,[0x080c5f64]
080C5F54: 017c         ldrb r1,[r0,#0x10]
080C5F56: 8900         lsl r1,r1,#0x2
080C5F58: 8918         add r1,r1,r2
080C5F5A: 0968         ldr r1,[r1,#0x0]
080C5F5C: 63f010f8     bl 0x08128f80
080C5F60: 01bc         pop {r0}
080C5F62: 0047         bx r0

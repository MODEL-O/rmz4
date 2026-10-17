; undefined FUN_080f6f50(void)
; entry 0x80f6f50  size 20 bytes

080F6F50: 00b5         push {lr}
080F6F52: 044a         ldr r2,[0x080f6f64]
080F6F54: 017c         ldrb r1,[r0,#0x10]
080F6F56: 8900         lsl r1,r1,#0x2
080F6F58: 8918         add r1,r1,r2
080F6F5A: 0968         ldr r1,[r1,#0x0]
080F6F5C: 32f010f8     bl 0x08128f80
080F6F60: 01bc         pop {r0}
080F6F62: 0047         bx r0

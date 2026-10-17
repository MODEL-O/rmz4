; undefined FUN_080f3f1c(void)
; entry 0x80f3f1c  size 20 bytes

080F3F1C: 00b5         push {lr}
080F3F1E: 044a         ldr r2,[0x080f3f30]
080F3F20: 017c         ldrb r1,[r0,#0x10]
080F3F22: 8900         lsl r1,r1,#0x2
080F3F24: 8918         add r1,r1,r2
080F3F26: 0968         ldr r1,[r1,#0x0]
080F3F28: 35f02af8     bl 0x08128f80
080F3F2C: 01bc         pop {r0}
080F3F2E: 0047         bx r0

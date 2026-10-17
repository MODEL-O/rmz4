; undefined FUN_080f6e24(void)
; entry 0x80f6e24  size 20 bytes

080F6E24: 00b5         push {lr}
080F6E26: 044a         ldr r2,[0x080f6e38]
080F6E28: 017c         ldrb r1,[r0,#0x10]
080F6E2A: 8900         lsl r1,r1,#0x2
080F6E2C: 8918         add r1,r1,r2
080F6E2E: 0968         ldr r1,[r1,#0x0]
080F6E30: 32f0a6f8     bl 0x08128f80
080F6E34: 01bc         pop {r0}
080F6E36: 0047         bx r0

; undefined FUN_080c0a88(void)
; entry 0x80c0a88  size 20 bytes

080C0A88: 00b5         push {lr}
080C0A8A: 044a         ldr r2,[0x080c0a9c]
080C0A8C: 817b         ldrb r1,[r0,#0xe]
080C0A8E: 8900         lsl r1,r1,#0x2
080C0A90: 8918         add r1,r1,r2
080C0A92: 0968         ldr r1,[r1,#0x0]
080C0A94: 68f074fa     bl 0x08128f80
080C0A98: 01bc         pop {r0}
080C0A9A: 0047         bx r0

; undefined FUN_080c0f20(void)
; entry 0x80c0f20  size 20 bytes

080C0F20: 00b5         push {lr}
080C0F22: 044a         ldr r2,[0x080c0f34]
080C0F24: 017c         ldrb r1,[r0,#0x10]
080C0F26: 8900         lsl r1,r1,#0x2
080C0F28: 8918         add r1,r1,r2
080C0F2A: 0968         ldr r1,[r1,#0x0]
080C0F2C: 68f028f8     bl 0x08128f80
080C0F30: 01bc         pop {r0}
080C0F32: 0047         bx r0

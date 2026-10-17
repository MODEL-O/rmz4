; undefined FUN_080c0c74(void)
; entry 0x80c0c74  size 20 bytes

080C0C74: 00b5         push {lr}
080C0C76: 044a         ldr r2,[0x080c0c88]
080C0C78: 017c         ldrb r1,[r0,#0x10]
080C0C7A: 8900         lsl r1,r1,#0x2
080C0C7C: 8918         add r1,r1,r2
080C0C7E: 0968         ldr r1,[r1,#0x0]
080C0C80: 68f07ef9     bl 0x08128f80
080C0C84: 01bc         pop {r0}
080C0C86: 0047         bx r0

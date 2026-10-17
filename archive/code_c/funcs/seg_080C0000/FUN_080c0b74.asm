; undefined FUN_080c0b74(void)
; entry 0x80c0b74  size 20 bytes

080C0B74: 00b5         push {lr}
080C0B76: 044a         ldr r2,[0x080c0b88]
080C0B78: 817b         ldrb r1,[r0,#0xe]
080C0B7A: 8900         lsl r1,r1,#0x2
080C0B7C: 8918         add r1,r1,r2
080C0B7E: 0968         ldr r1,[r1,#0x0]
080C0B80: 68f0fef9     bl 0x08128f80
080C0B84: 01bc         pop {r0}
080C0B86: 0047         bx r0

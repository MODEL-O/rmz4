; undefined FUN_080d8b74(void)
; entry 0x80d8b74  size 20 bytes

080D8B74: 00b5         push {lr}
080D8B76: 044a         ldr r2,[0x080d8b88]
080D8B78: 417b         ldrb r1,[r0,#0xd]
080D8B7A: 8900         lsl r1,r1,#0x2
080D8B7C: 8918         add r1,r1,r2
080D8B7E: 0968         ldr r1,[r1,#0x0]
080D8B80: 50f0fef9     bl 0x08128f80
080D8B84: 01bc         pop {r0}
080D8B86: 0047         bx r0

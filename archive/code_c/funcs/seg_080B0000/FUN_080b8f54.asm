; undefined FUN_080b8f54(void)
; entry 0x80b8f54  size 20 bytes

080B8F54: 00b5         push {lr}
080B8F56: 044a         ldr r2,[0x080b8f68]
080B8F58: 417b         ldrb r1,[r0,#0xd]
080B8F5A: 8900         lsl r1,r1,#0x2
080B8F5C: 8918         add r1,r1,r2
080B8F5E: 0968         ldr r1,[r1,#0x0]
080B8F60: 70f00ef8     bl 0x08128f80
080B8F64: 01bc         pop {r0}
080B8F66: 0047         bx r0

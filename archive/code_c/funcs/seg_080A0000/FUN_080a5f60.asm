; undefined FUN_080a5f60(void)
; entry 0x80a5f60  size 20 bytes

080A5F60: 00b5         push {lr}
080A5F62: 044a         ldr r2,[0x080a5f74]
080A5F64: 417b         ldrb r1,[r0,#0xd]
080A5F66: 8900         lsl r1,r1,#0x2
080A5F68: 8918         add r1,r1,r2
080A5F6A: 0968         ldr r1,[r1,#0x0]
080A5F6C: 83f008f8     bl 0x08128f80
080A5F70: 01bc         pop {r0}
080A5F72: 0047         bx r0

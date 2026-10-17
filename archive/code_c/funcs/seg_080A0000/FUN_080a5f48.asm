; undefined FUN_080a5f48(void)
; entry 0x80a5f48  size 20 bytes

080A5F48: 00b5         push {lr}
080A5F4A: 044a         ldr r2,[0x080a5f5c]
080A5F4C: 417b         ldrb r1,[r0,#0xd]
080A5F4E: 8900         lsl r1,r1,#0x2
080A5F50: 8918         add r1,r1,r2
080A5F52: 0968         ldr r1,[r1,#0x0]
080A5F54: 83f014f8     bl 0x08128f80
080A5F58: 01bc         pop {r0}
080A5F5A: 0047         bx r0

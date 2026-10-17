; undefined FUN_080a4a30(void)
; entry 0x80a4a30  size 20 bytes

080A4A30: 00b5         push {lr}
080A4A32: 044a         ldr r2,[0x080a4a44]
080A4A34: 417b         ldrb r1,[r0,#0xd]
080A4A36: 8900         lsl r1,r1,#0x2
080A4A38: 8918         add r1,r1,r2
080A4A3A: 0968         ldr r1,[r1,#0x0]
080A4A3C: 84f0a0fa     bl 0x08128f80
080A4A40: 01bc         pop {r0}
080A4A42: 0047         bx r0

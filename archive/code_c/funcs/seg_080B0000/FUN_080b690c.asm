; undefined FUN_080b690c(void)
; entry 0x80b690c  size 20 bytes

080B690C: 00b5         push {lr}
080B690E: 044a         ldr r2,[0x080b6920]
080B6910: 417b         ldrb r1,[r0,#0xd]
080B6912: 8900         lsl r1,r1,#0x2
080B6914: 8918         add r1,r1,r2
080B6916: 0968         ldr r1,[r1,#0x0]
080B6918: 72f032fb     bl 0x08128f80
080B691C: 01bc         pop {r0}
080B691E: 0047         bx r0

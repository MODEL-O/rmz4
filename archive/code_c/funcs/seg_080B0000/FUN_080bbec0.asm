; undefined FUN_080bbec0(void)
; entry 0x80bbec0  size 20 bytes

080BBEC0: 00b5         push {lr}
080BBEC2: 044a         ldr r2,[0x080bbed4]
080BBEC4: 417b         ldrb r1,[r0,#0xd]
080BBEC6: 8900         lsl r1,r1,#0x2
080BBEC8: 8918         add r1,r1,r2
080BBECA: 0968         ldr r1,[r1,#0x0]
080BBECC: 6df058f8     bl 0x08128f80
080BBED0: 01bc         pop {r0}
080BBED2: 0047         bx r0

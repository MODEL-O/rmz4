; undefined FUN_080ae244(void)
; entry 0x80ae244  size 20 bytes

080AE244: 00b5         push {lr}
080AE246: 044a         ldr r2,[0x080ae258]
080AE248: 417b         ldrb r1,[r0,#0xd]
080AE24A: 8900         lsl r1,r1,#0x2
080AE24C: 8918         add r1,r1,r2
080AE24E: 0968         ldr r1,[r1,#0x0]
080AE250: 7af096fe     bl 0x08128f80
080AE254: 01bc         pop {r0}
080AE256: 0047         bx r0

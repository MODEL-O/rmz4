; undefined FUN_0809b454(void)
; entry 0x809b454  size 20 bytes

0809B454: 00b5         push {lr}
0809B456: 044a         ldr r2,[0x0809b468]
0809B458: 417b         ldrb r1,[r0,#0xd]
0809B45A: 8900         lsl r1,r1,#0x2
0809B45C: 8918         add r1,r1,r2
0809B45E: 0968         ldr r1,[r1,#0x0]
0809B460: 8df08efd     bl 0x08128f80
0809B464: 01bc         pop {r0}
0809B466: 0047         bx r0

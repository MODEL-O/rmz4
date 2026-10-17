; undefined FUN_0809bd70(void)
; entry 0x809bd70  size 20 bytes

0809BD70: 00b5         push {lr}
0809BD72: 044a         ldr r2,[0x0809bd84]
0809BD74: 417b         ldrb r1,[r0,#0xd]
0809BD76: 8900         lsl r1,r1,#0x2
0809BD78: 8918         add r1,r1,r2
0809BD7A: 0968         ldr r1,[r1,#0x0]
0809BD7C: 8df000f9     bl 0x08128f80
0809BD80: 01bc         pop {r0}
0809BD82: 0047         bx r0

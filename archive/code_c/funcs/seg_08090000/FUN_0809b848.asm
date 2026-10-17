; undefined FUN_0809b848(void)
; entry 0x809b848  size 20 bytes

0809B848: 00b5         push {lr}
0809B84A: 044a         ldr r2,[0x0809b85c]
0809B84C: 417b         ldrb r1,[r0,#0xd]
0809B84E: 8900         lsl r1,r1,#0x2
0809B850: 8918         add r1,r1,r2
0809B852: 0968         ldr r1,[r1,#0x0]
0809B854: 8df094fb     bl 0x08128f80
0809B858: 01bc         pop {r0}
0809B85A: 0047         bx r0

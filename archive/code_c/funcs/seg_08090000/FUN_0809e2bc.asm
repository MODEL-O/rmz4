; undefined FUN_0809e2bc(void)
; entry 0x809e2bc  size 20 bytes

0809E2BC: 00b5         push {lr}
0809E2BE: 044a         ldr r2,[0x0809e2d0]
0809E2C0: 417b         ldrb r1,[r0,#0xd]
0809E2C2: 8900         lsl r1,r1,#0x2
0809E2C4: 8918         add r1,r1,r2
0809E2C6: 0968         ldr r1,[r1,#0x0]
0809E2C8: 8af05afe     bl 0x08128f80
0809E2CC: 01bc         pop {r0}
0809E2CE: 0047         bx r0

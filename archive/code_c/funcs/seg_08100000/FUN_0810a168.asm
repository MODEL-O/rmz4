; undefined FUN_0810a168(void)
; entry 0x810a168  size 72 bytes

0810A168: 10b5         push {r4,lr}
0810A16A: 041c         add r4,r0,#0x0
0810A16C: 606d         ldr r0,[r4,#0x54]
0810A16E: a16d         ldr r1,[r4,#0x58]
0810A170: fdf684fd     bl 0x08007c7c
0810A174: 0004         lsl r0,r0,#0x10
0810A176: 020c         lsr r2,r0,#0x10
0810A178: 0f21         mov r1,#0xf
0810A17A: 1140         and r1,r2
0810A17C: 0f29         cmp r1,#0xf
0810A17E: 11d0         beq 0x0810a1a4
0810A180: 8020         mov r0,#0x80
0810A182: 0002         lsl r0,r0,#0x8
0810A184: 1040         and r0,r2
0810A186: 0028         cmp r0,#0x0
0810A188: 0cd1         bne 0x0810a1a4
0810A18A: 0029         cmp r1,#0x0
0810A18C: 01d0         beq 0x0810a192
0810A18E: 0120         mov r0,#0x1
0810A190: 0de0         b 0x0810a1ae
0810A192: 0548         ldr r0,[0x0810a1a8]
0810A194: 211c         add r1,r4,#0x0
0810A196: 5431         add r1,#0x54
0810A198: 15f7bcfc     bl 0x0801fb14
0810A19C: 8021         mov r1,#0x80
0810A19E: 4901         lsl r1,r1,#0x5
0810A1A0: 8842         cmp r0,r1
0810A1A2: 03d8         bhi 0x0810a1ac
0810A1A4: 0020         mov r0,#0x0
0810A1A6: 02e0         b 0x0810a1ae
0810A1AC: 0220         mov r0,#0x2
0810A1AE: 10bc         pop {r4}
0810A1B0: 02bc         pop {r1}
0810A1B2: 0847         bx r1

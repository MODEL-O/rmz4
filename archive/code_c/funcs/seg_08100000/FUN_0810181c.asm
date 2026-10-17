; undefined FUN_0810181c(void)
; entry 0x810181c  size 34 bytes

0810181C: f0b5         push {r4,r5,r6,r7,lr}
0810181E: 041c         add r4,r0,#0x0
08101820: 607b         ldrb r0,[r4,#0xd]
08101822: 0428         cmp r0,#0x4
08101824: 00d9         bls 0x08101828
08101826: 97e0         b 0x08101958
08101828: 8000         lsl r0,r0,#0x2
0810182A: 0249         ldr r1,[0x08101834]
0810182C: 4018         add r0,r0,r1
0810182E: 0068         ldr r0,[r0,#0x0]
08101830: 8746         mov pc,r0
08101958: 201c         add r0,r4,#0x0
0810195A: 1bf749fb     bl 0x0801cff0
0810195E: f0bc         pop {r4,r5,r6,r7}
08101960: 01bc         pop {r0}
08101962: 0047         bx r0

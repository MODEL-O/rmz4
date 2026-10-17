; undefined FUN_0806ea80(void)
; entry 0x806ea80  size 70 bytes

0806EA80: 30b5         push {r4,r5,lr}
0806EA82: 041c         add r4,r0,#0x0
0806EA84: e07b         ldrb r0,[r4,#0xf]
0806EA86: 0028         cmp r0,#0x0
0806EA88: 09d1         bne 0x0806ea9e
0806EA8A: 201c         add r0,r4,#0x0
0806EA8C: 7430         add r0,#0x74
0806EA8E: 0e49         ldr r1,[0x0806eac8]
0806EA90: 96f778fe     bl 0x08005784
0806EA94: c020         mov r0,#0xc0
0806EA96: a074         strb r0,[r4,#0x12]
0806EA98: e07b         ldrb r0,[r4,#0xf]
0806EA9A: 0130         add r0,#0x1
0806EA9C: e073         strb r0,[r4,#0xf]
0806EA9E: 7720         mov r0,#0x77
0806EAA0: 93f79afd     bl 0x080025d8
0806EAA4: a07c         ldrb r0,[r4,#0x12]
0806EAA6: 0138         sub r0,#0x1
0806EAA8: a074         strb r0,[r4,#0x12]
0806EAAA: 0006         lsl r0,r0,#0x18
0806EAAC: 050e         lsr r5,r0,#0x18
0806EAAE: 002d         cmp r5,#0x0
0806EAB0: 06d1         bne 0x0806eac0
0806EAB2: 7720         mov r0,#0x77
0806EAB4: 93f7b6fd     bl 0x08002624
0806EAB8: 0120         mov r0,#0x1
0806EABA: 6073         strb r0,[r4,#0xd]
0806EABC: a573         strb r5,[r4,#0xe]
0806EABE: e573         strb r5,[r4,#0xf]
0806EAC0: 30bc         pop {r4,r5}
0806EAC2: 01bc         pop {r0}
0806EAC4: 0047         bx r0

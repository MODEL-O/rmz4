; undefined FUN_0806ec60(void)
; entry 0x806ec60  size 78 bytes

0806EC60: 10b5         push {r4,lr}
0806EC62: 041c         add r4,r0,#0x0
0806EC64: e07b         ldrb r0,[r4,#0xf]
0806EC66: 0028         cmp r0,#0x0
0806EC68: 11d1         bne 0x0806ec8e
0806EC6A: b520         mov r0,#0xb5
0806EC6C: 4000         lsl r0,r0,#0x1
0806EC6E: 93f74fff     bl 0x08002b10
0806EC72: 201c         add r0,r4,#0x0
0806EC74: 7430         add r0,#0x74
0806EC76: 0e49         ldr r1,[0x0806ecb0]
0806EC78: 96f784fd     bl 0x08005784
0806EC7C: 0d49         ldr r1,[0x0806ecb4]
0806EC7E: 201c         add r0,r4,#0x0
0806EC80: aef73ef9     bl 0x0801cf00
0806EC84: 6020         mov r0,#0x60
0806EC86: a074         strb r0,[r4,#0x12]
0806EC88: e07b         ldrb r0,[r4,#0xf]
0806EC8A: 0130         add r0,#0x1
0806EC8C: e073         strb r0,[r4,#0xf]
0806EC8E: 201c         add r0,r4,#0x0
0806EC90: aef7aef9     bl 0x0801cff0
0806EC94: a07c         ldrb r0,[r4,#0x12]
0806EC96: 0138         sub r0,#0x1
0806EC98: a074         strb r0,[r4,#0x12]
0806EC9A: 0006         lsl r0,r0,#0x18
0806EC9C: 010e         lsr r1,r0,#0x18
0806EC9E: 0029         cmp r1,#0x0
0806ECA0: 02d1         bne 0x0806eca8
0806ECA2: 0120         mov r0,#0x1
0806ECA4: a073         strb r0,[r4,#0xe]
0806ECA6: e173         strb r1,[r4,#0xf]
0806ECA8: 10bc         pop {r4}
0806ECAA: 01bc         pop {r0}
0806ECAC: 0047         bx r0

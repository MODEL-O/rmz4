; undefined FUN_080675fc(void)
; entry 0x80675fc  size 62 bytes

080675FC: 10b5         push {r4,lr}
080675FE: 041c         add r4,r0,#0x0
08067600: a07b         ldrb r0,[r4,#0xe]
08067602: 0028         cmp r0,#0x0
08067604: 0bd1         bne 0x0806761e
08067606: 0d49         ldr r1,[0x0806763c]
08067608: 201c         add r0,r4,#0x0
0806760A: b5f779fc     bl 0x0801cf00
0806760E: 201c         add r0,r4,#0x0
08067610: 7430         add r0,#0x74
08067612: 0b49         ldr r1,[0x08067640]
08067614: 9ef7b6f8     bl 0x08005784
08067618: a07b         ldrb r0,[r4,#0xe]
0806761A: 0130         add r0,#0x1
0806761C: a073         strb r0,[r4,#0xe]
0806761E: 201c         add r0,r4,#0x0
08067620: b5f7e6fc     bl 0x0801cff0
08067624: 201c         add r0,r4,#0x0
08067626: 7330         add r0,#0x73
08067628: 0178         ldrb r1,[r0,#0x0]
0806762A: 0329         cmp r1,#0x3
0806762C: 02d1         bne 0x08067634
0806762E: 0020         mov r0,#0x0
08067630: 6173         strb r1,[r4,#0xd]
08067632: a073         strb r0,[r4,#0xe]
08067634: 10bc         pop {r4}
08067636: 01bc         pop {r0}
08067638: 0047         bx r0

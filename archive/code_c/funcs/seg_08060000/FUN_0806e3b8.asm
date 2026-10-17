; undefined FUN_0806e3b8(void)
; entry 0x806e3b8  size 74 bytes

0806E3B8: 10b5         push {r4,lr}
0806E3BA: 041c         add r4,r0,#0x0
0806E3BC: e07b         ldrb r0,[r4,#0xf]
0806E3BE: 0028         cmp r0,#0x0
0806E3C0: 0ed1         bne 0x0806e3e0
0806E3C2: 201c         add r0,r4,#0x0
0806E3C4: 7430         add r0,#0x74
0806E3C6: 0f49         ldr r1,[0x0806e404]
0806E3C8: 97f7dcf9     bl 0x08005784
0806E3CC: ad21         mov r1,#0xad
0806E3CE: 0902         lsl r1,r1,#0x8
0806E3D0: 201c         add r0,r4,#0x0
0806E3D2: aef795fd     bl 0x0801cf00
0806E3D6: 0820         mov r0,#0x8
0806E3D8: a074         strb r0,[r4,#0x12]
0806E3DA: e07b         ldrb r0,[r4,#0xf]
0806E3DC: 0130         add r0,#0x1
0806E3DE: e073         strb r0,[r4,#0xf]
0806E3E0: 201c         add r0,r4,#0x0
0806E3E2: aef705fe     bl 0x0801cff0
0806E3E6: a07c         ldrb r0,[r4,#0x12]
0806E3E8: 0138         sub r0,#0x1
0806E3EA: a074         strb r0,[r4,#0x12]
0806E3EC: 0006         lsl r0,r0,#0x18
0806E3EE: 010e         lsr r1,r0,#0x18
0806E3F0: 0029         cmp r1,#0x0
0806E3F2: 03d1         bne 0x0806e3fc
0806E3F4: 0820         mov r0,#0x8
0806E3F6: 6073         strb r0,[r4,#0xd]
0806E3F8: a173         strb r1,[r4,#0xe]
0806E3FA: e173         strb r1,[r4,#0xf]
0806E3FC: 10bc         pop {r4}
0806E3FE: 01bc         pop {r0}
0806E400: 0047         bx r0

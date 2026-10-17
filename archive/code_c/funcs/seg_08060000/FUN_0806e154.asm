; undefined FUN_0806e154(void)
; entry 0x806e154  size 72 bytes

0806E154: 10b5         push {r4,lr}
0806E156: 041c         add r4,r0,#0x0
0806E158: e07b         ldrb r0,[r4,#0xf]
0806E15A: 0028         cmp r0,#0x0
0806E15C: 0ed1         bne 0x0806e17c
0806E15E: 201c         add r0,r4,#0x0
0806E160: 7430         add r0,#0x74
0806E162: 0e49         ldr r1,[0x0806e19c]
0806E164: 97f70efb     bl 0x08005784
0806E168: ad21         mov r1,#0xad
0806E16A: 0902         lsl r1,r1,#0x8
0806E16C: 201c         add r0,r4,#0x0
0806E16E: aef7c7fe     bl 0x0801cf00
0806E172: 1020         mov r0,#0x10
0806E174: a074         strb r0,[r4,#0x12]
0806E176: e07b         ldrb r0,[r4,#0xf]
0806E178: 0130         add r0,#0x1
0806E17A: e073         strb r0,[r4,#0xf]
0806E17C: 201c         add r0,r4,#0x0
0806E17E: aef737ff     bl 0x0801cff0
0806E182: a07c         ldrb r0,[r4,#0x12]
0806E184: 0138         sub r0,#0x1
0806E186: a074         strb r0,[r4,#0x12]
0806E188: 0006         lsl r0,r0,#0x18
0806E18A: 010e         lsr r1,r0,#0x18
0806E18C: 0029         cmp r1,#0x0
0806E18E: 02d1         bne 0x0806e196
0806E190: 0120         mov r0,#0x1
0806E192: a073         strb r0,[r4,#0xe]
0806E194: e173         strb r1,[r4,#0xf]
0806E196: 10bc         pop {r4}
0806E198: 01bc         pop {r0}
0806E19A: 0047         bx r0

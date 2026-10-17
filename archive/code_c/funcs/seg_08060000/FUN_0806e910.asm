; undefined FUN_0806e910(void)
; entry 0x806e910  size 70 bytes

0806E910: 30b5         push {r4,r5,lr}
0806E912: 041c         add r4,r0,#0x0
0806E914: e07b         ldrb r0,[r4,#0xf]
0806E916: 0028         cmp r0,#0x0
0806E918: 09d1         bne 0x0806e92e
0806E91A: 201c         add r0,r4,#0x0
0806E91C: 7430         add r0,#0x74
0806E91E: 0e49         ldr r1,[0x0806e958]
0806E920: 96f730ff     bl 0x08005784
0806E924: 4020         mov r0,#0x40
0806E926: a074         strb r0,[r4,#0x12]
0806E928: e07b         ldrb r0,[r4,#0xf]
0806E92A: 0130         add r0,#0x1
0806E92C: e073         strb r0,[r4,#0xf]
0806E92E: 7620         mov r0,#0x76
0806E930: 93f752fe     bl 0x080025d8
0806E934: a07c         ldrb r0,[r4,#0x12]
0806E936: 0138         sub r0,#0x1
0806E938: a074         strb r0,[r4,#0x12]
0806E93A: 0006         lsl r0,r0,#0x18
0806E93C: 050e         lsr r5,r0,#0x18
0806E93E: 002d         cmp r5,#0x0
0806E940: 06d1         bne 0x0806e950
0806E942: 7620         mov r0,#0x76
0806E944: 93f76efe     bl 0x08002624
0806E948: 0120         mov r0,#0x1
0806E94A: 6073         strb r0,[r4,#0xd]
0806E94C: a573         strb r5,[r4,#0xe]
0806E94E: e573         strb r5,[r4,#0xf]
0806E950: 30bc         pop {r4,r5}
0806E952: 01bc         pop {r0}
0806E954: 0047         bx r0

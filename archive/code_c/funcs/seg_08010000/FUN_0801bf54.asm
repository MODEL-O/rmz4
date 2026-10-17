; undefined FUN_0801bf54(void)
; entry 0x801bf54  size 44 bytes

0801BF54: 10b5         push {r4,lr}
0801BF56: 041c         add r4,r0,#0x0
0801BF58: 7620         mov r0,#0x76
0801BF5A: e6f7d9fd     bl 0x08002b10
0801BF5E: 0020         mov r0,#0x0
0801BF60: 2082         strh r0,[r4,#0x10]
0801BF62: 0820         mov r0,#0x8
0801BF64: 6082         strh r0,[r4,#0x12]
0801BF66: 0649         ldr r1,[0x0801bf80]
0801BF68: 8020         mov r0,#0x80
0801BF6A: 4001         lsl r0,r0,#0x5
0801BF6C: 4880         strh r0,[r1,#0x2]
0801BF6E: 0549         ldr r1,[0x0801bf84]
0801BF70: 0548         ldr r0,[0x0801bf88]
0801BF72: 0918         add r1,r1,r0
0801BF74: 0878         ldrb r0,[r1,#0x0]
0801BF76: 0130         add r0,#0x1
0801BF78: 0870         strb r0,[r1,#0x0]
0801BF7A: 10bc         pop {r4}
0801BF7C: 01bc         pop {r0}
0801BF7E: 0047         bx r0

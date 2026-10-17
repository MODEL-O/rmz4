; undefined FUN_0807ea4c(void)
; entry 0x807ea4c  size 68 bytes

0807EA4C: 10b5         push {r4,lr}
0807EA4E: 041c         add r4,r0,#0x0
0807EA50: c034         add r4,#0xc0
0807EA52: 00f023f8     bl 0x0807ea9c
0807EA56: 0006         lsl r0,r0,#0x18
0807EA58: 0022         mov r2,#0x0
0807EA5A: 0d49         ldr r1,[0x0807ea90]
0807EA5C: 800d         lsr r0,r0,#0x16
0807EA5E: 4318         add r3,r0,r1
0807EA60: a018         add r0,r4,r2
0807EA62: 1968         ldr r1,[r3,#0x0]
0807EA64: 8918         add r1,r1,r2
0807EA66: 0978         ldrb r1,[r1,#0x0]
0807EA68: 0170         strb r1,[r0,#0x0]
0807EA6A: 0132         add r2,#0x1
0807EA6C: 062a         cmp r2,#0x6
0807EA6E: f7dd         ble 0x0807ea60
0807EA70: 0848         ldr r0,[0x0807ea94]
0807EA72: 0068         ldr r0,[r0,#0x0]
0807EA74: 4078         ldrb r0,[r0,#0x1]
0807EA76: 0428         cmp r0,#0x4
0807EA78: 05d9         bls 0x0807ea86
0807EA7A: 0748         ldr r0,[0x0807ea98]
0807EA7C: 0179         ldrb r1,[r0,#0x4]
0807EA7E: 0420         mov r0,#0x4
0807EA80: 0840         and r0,r1
0807EA82: 0028         cmp r0,#0x0
0807EA84: 01d0         beq 0x0807ea8a
0807EA86: 0020         mov r0,#0x0
0807EA88: a071         strb r0,[r4,#0x6]
0807EA8A: 10bc         pop {r4}
0807EA8C: 01bc         pop {r0}
0807EA8E: 0047         bx r0

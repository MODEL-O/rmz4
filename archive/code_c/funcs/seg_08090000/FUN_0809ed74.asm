; undefined FUN_0809ed74(void)
; entry 0x809ed74  size 56 bytes

0809ED74: 10b5         push {r4,lr}
0809ED76: 041c         add r4,r0,#0x0
0809ED78: e07b         ldrb r0,[r4,#0xf]
0809ED7A: 0028         cmp r0,#0x0
0809ED7C: 06d1         bne 0x0809ed8c
0809ED7E: 0b49         ldr r1,[0x0809edac]
0809ED80: 201c         add r0,r4,#0x0
0809ED82: 7ef7bdf8     bl 0x0801cf00
0809ED86: e07b         ldrb r0,[r4,#0xf]
0809ED88: 0130         add r0,#0x1
0809ED8A: e073         strb r0,[r4,#0xf]
0809ED8C: 201c         add r0,r4,#0x0
0809ED8E: 7ef72ff9     bl 0x0801cff0
0809ED92: 201c         add r0,r4,#0x0
0809ED94: 7330         add r0,#0x73
0809ED96: 0078         ldrb r0,[r0,#0x0]
0809ED98: 0328         cmp r0,#0x3
0809ED9A: 04d1         bne 0x0809eda6
0809ED9C: 0021         mov r1,#0x0
0809ED9E: 0220         mov r0,#0x2
0809EDA0: 6073         strb r0,[r4,#0xd]
0809EDA2: a173         strb r1,[r4,#0xe]
0809EDA4: e173         strb r1,[r4,#0xf]
0809EDA6: 10bc         pop {r4}
0809EDA8: 01bc         pop {r0}
0809EDAA: 0047         bx r0

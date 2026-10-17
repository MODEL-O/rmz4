; undefined FUN_0806ed04(void)
; entry 0x806ed04  size 66 bytes

0806ED04: 10b5         push {r4,lr}
0806ED06: 041c         add r4,r0,#0x0
0806ED08: e07b         ldrb r0,[r4,#0xf]
0806ED0A: 0028         cmp r0,#0x0
0806ED0C: 0cd1         bne 0x0806ed28
0806ED0E: 201c         add r0,r4,#0x0
0806ED10: 7430         add r0,#0x74
0806ED12: 0d49         ldr r1,[0x0806ed48]
0806ED14: 96f736fd     bl 0x08005784
0806ED18: ad21         mov r1,#0xad
0806ED1A: 0902         lsl r1,r1,#0x8
0806ED1C: 201c         add r0,r4,#0x0
0806ED1E: aef7eff8     bl 0x0801cf00
0806ED22: e07b         ldrb r0,[r4,#0xf]
0806ED24: 0130         add r0,#0x1
0806ED26: e073         strb r0,[r4,#0xf]
0806ED28: 201c         add r0,r4,#0x0
0806ED2A: aef761f9     bl 0x0801cff0
0806ED2E: 0748         ldr r0,[0x0806ed4c]
0806ED30: 0189         ldrh r1,[r0,#0x8]
0806ED32: 0820         mov r0,#0x8
0806ED34: 0840         and r0,r1
0806ED36: 0028         cmp r0,#0x0
0806ED38: 02d1         bne 0x0806ed40
0806ED3A: 201c         add r0,r4,#0x0
0806ED3C: 00f0f2f9     bl 0x0806f124
0806ED40: 10bc         pop {r4}
0806ED42: 01bc         pop {r0}
0806ED44: 0047         bx r0

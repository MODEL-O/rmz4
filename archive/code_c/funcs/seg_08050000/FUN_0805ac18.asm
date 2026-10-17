; undefined FUN_0805ac18(void)
; entry 0x805ac18  size 70 bytes

0805AC18: 10b5         push {r4,lr}
0805AC1A: 041c         add r4,r0,#0x0
0805AC1C: e07b         ldrb r0,[r4,#0xf]
0805AC1E: 0028         cmp r0,#0x0
0805AC20: 0fd1         bne 0x0805ac42
0805AC22: 201c         add r0,r4,#0x0
0805AC24: 7430         add r0,#0x74
0805AC26: 0e49         ldr r1,[0x0805ac60]
0805AC28: aaf7acfd     bl 0x08005784
0805AC2C: 0d49         ldr r1,[0x0805ac64]
0805AC2E: 201c         add r0,r4,#0x0
0805AC30: c2f766f9     bl 0x0801cf00
0805AC34: 211c         add r1,r4,#0x0
0805AC36: bd31         add r1,#0xbd
0805AC38: 0120         mov r0,#0x1
0805AC3A: 0870         strb r0,[r1,#0x0]
0805AC3C: e07b         ldrb r0,[r4,#0xf]
0805AC3E: 0130         add r0,#0x1
0805AC40: e073         strb r0,[r4,#0xf]
0805AC42: 201c         add r0,r4,#0x0
0805AC44: c2f7d4f9     bl 0x0801cff0
0805AC48: 201c         add r0,r4,#0x0
0805AC4A: 7330         add r0,#0x73
0805AC4C: 0178         ldrb r1,[r0,#0x0]
0805AC4E: 0329         cmp r1,#0x3
0805AC50: 02d1         bne 0x0805ac58
0805AC52: 0020         mov r0,#0x0
0805AC54: a173         strb r1,[r4,#0xe]
0805AC56: e073         strb r0,[r4,#0xf]
0805AC58: 10bc         pop {r4}
0805AC5A: 01bc         pop {r0}
0805AC5C: 0047         bx r0

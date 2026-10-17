; undefined FUN_0805a9fc(void)
; entry 0x805a9fc  size 70 bytes

0805A9FC: 10b5         push {r4,lr}
0805A9FE: 041c         add r4,r0,#0x0
0805AA00: e07b         ldrb r0,[r4,#0xf]
0805AA02: 0028         cmp r0,#0x0
0805AA04: 0fd1         bne 0x0805aa26
0805AA06: 201c         add r0,r4,#0x0
0805AA08: 7430         add r0,#0x74
0805AA0A: 0e49         ldr r1,[0x0805aa44]
0805AA0C: aaf7bafe     bl 0x08005784
0805AA10: 0d49         ldr r1,[0x0805aa48]
0805AA12: 201c         add r0,r4,#0x0
0805AA14: c2f774fa     bl 0x0801cf00
0805AA18: 211c         add r1,r4,#0x0
0805AA1A: bd31         add r1,#0xbd
0805AA1C: 0120         mov r0,#0x1
0805AA1E: 0870         strb r0,[r1,#0x0]
0805AA20: e07b         ldrb r0,[r4,#0xf]
0805AA22: 0130         add r0,#0x1
0805AA24: e073         strb r0,[r4,#0xf]
0805AA26: 201c         add r0,r4,#0x0
0805AA28: c2f7e2fa     bl 0x0801cff0
0805AA2C: 201c         add r0,r4,#0x0
0805AA2E: 7330         add r0,#0x73
0805AA30: 0178         ldrb r1,[r0,#0x0]
0805AA32: 0329         cmp r1,#0x3
0805AA34: 02d1         bne 0x0805aa3c
0805AA36: 0020         mov r0,#0x0
0805AA38: a173         strb r1,[r4,#0xe]
0805AA3A: e073         strb r0,[r4,#0xf]
0805AA3C: 10bc         pop {r4}
0805AA3E: 01bc         pop {r0}
0805AA40: 0047         bx r0

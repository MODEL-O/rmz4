; undefined FUN_0809de08(void)
; entry 0x809de08  size 62 bytes

0809DE08: 10b5         push {r4,lr}
0809DE0A: 041c         add r4,r0,#0x0
0809DE0C: a07b         ldrb r0,[r4,#0xe]
0809DE0E: 0028         cmp r0,#0x0
0809DE10: 06d1         bne 0x0809de20
0809DE12: 0d49         ldr r1,[0x0809de48]
0809DE14: 201c         add r0,r4,#0x0
0809DE16: 7ff773f8     bl 0x0801cf00
0809DE1A: a07b         ldrb r0,[r4,#0xe]
0809DE1C: 0130         add r0,#0x1
0809DE1E: a073         strb r0,[r4,#0xe]
0809DE20: 201c         add r0,r4,#0x0
0809DE22: 7330         add r0,#0x73
0809DE24: 0078         ldrb r0,[r0,#0x0]
0809DE26: 0328         cmp r0,#0x3
0809DE28: 0ad1         bne 0x0809de40
0809DE2A: 0021         mov r1,#0x0
0809DE2C: 0420         mov r0,#0x4
0809DE2E: 6073         strb r0,[r4,#0xd]
0809DE30: a173         strb r1,[r4,#0xe]
0809DE32: e173         strb r1,[r4,#0xf]
0809DE34: 211c         add r1,r4,#0x0
0809DE36: bd31         add r1,#0xbd
0809DE38: 0120         mov r0,#0x1
0809DE3A: 0870         strb r0,[r1,#0x0]
0809DE3C: b420         mov r0,#0xb4
0809DE3E: a074         strb r0,[r4,#0x12]
0809DE40: 10bc         pop {r4}
0809DE42: 01bc         pop {r0}
0809DE44: 0047         bx r0

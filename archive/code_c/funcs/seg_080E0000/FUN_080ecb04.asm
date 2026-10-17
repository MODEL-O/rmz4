; undefined FUN_080ecb04(void)
; entry 0x80ecb04  size 58 bytes

080ECB04: 10b5         push {r4,lr}
080ECB06: 041c         add r4,r0,#0x0
080ECB08: e07b         ldrb r0,[r4,#0xf]
080ECB0A: 0028         cmp r0,#0x0
080ECB0C: 07d1         bne 0x080ecb1e
080ECB0E: 9c21         mov r1,#0x9c
080ECB10: 8901         lsl r1,r1,#0x6
080ECB12: 201c         add r0,r4,#0x0
080ECB14: 30f7f4f9     bl 0x0801cf00
080ECB18: e07b         ldrb r0,[r4,#0xf]
080ECB1A: 0130         add r0,#0x1
080ECB1C: e073         strb r0,[r4,#0xf]
080ECB1E: 201c         add r0,r4,#0x0
080ECB20: 30f766fa     bl 0x0801cff0
080ECB24: 201c         add r0,r4,#0x0
080ECB26: b430         add r0,#0xb4
080ECB28: 0078         ldrb r0,[r0,#0x0]
080ECB2A: 0028         cmp r0,#0x0
080ECB2C: 04d0         beq 0x080ecb38
080ECB2E: 0021         mov r1,#0x0
080ECB30: 0120         mov r0,#0x1
080ECB32: 6073         strb r0,[r4,#0xd]
080ECB34: a173         strb r1,[r4,#0xe]
080ECB36: e173         strb r1,[r4,#0xf]
080ECB38: 10bc         pop {r4}
080ECB3A: 01bc         pop {r0}
080ECB3C: 0047         bx r0

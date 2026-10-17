; undefined FUN_0809abf8(void)
; entry 0x809abf8  size 68 bytes

0809ABF8: 10b5         push {r4,lr}
0809ABFA: 041c         add r4,r0,#0x0
0809ABFC: 5430         add r0,#0x54
0809ABFE: a27c         ldrb r2,[r4,#0x12]
0809AC00: 0021         mov r1,#0x0
0809AC02: 1023         mov r3,#0x10
0809AC04: 2bf04cfb     bl 0x080c62a0
0809AC08: 201c         add r0,r4,#0x0
0809AC0A: 8c30         add r0,#0x8c
0809AC0C: 0021         mov r1,#0x0
0809AC0E: 0160         str r1,[r0,#0x0]
0809AC10: 0430         add r0,#0x4
0809AC12: 0160         str r1,[r0,#0x0]
0809AC14: 0430         add r0,#0x4
0809AC16: 0170         strb r1,[r0,#0x0]
0809AC18: a17a         ldrb r1,[r4,#0xa]
0809AC1A: fb20         mov r0,#0xfb
0809AC1C: 0840         and r0,r1
0809AC1E: fe21         mov r1,#0xfe
0809AC20: 0840         and r0,r1
0809AC22: a072         strb r0,[r4,#0xa]
0809AC24: 0549         ldr r1,[0x0809ac3c]
0809AC26: 607a         ldrb r0,[r4,#0x9]
0809AC28: 8000         lsl r0,r0,#0x2
0809AC2A: 4018         add r0,r0,r1
0809AC2C: 0421         mov r1,#0x4
0809AC2E: e160         str r1,[r4,#0xc]
0809AC30: 0068         ldr r0,[r0,#0x0]
0809AC32: 0069         ldr r0,[r0,#0x10]
0809AC34: 6061         str r0,[r4,#0x14]
0809AC36: 10bc         pop {r4}
0809AC38: 01bc         pop {r0}
0809AC3A: 0047         bx r0

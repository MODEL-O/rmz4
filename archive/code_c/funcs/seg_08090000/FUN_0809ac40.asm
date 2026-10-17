; undefined FUN_0809ac40(void)
; entry 0x809ac40  size 68 bytes

0809AC40: 10b5         push {r4,lr}
0809AC42: 041c         add r4,r0,#0x0
0809AC44: 5430         add r0,#0x54
0809AC46: 0021         mov r1,#0x0
0809AC48: 0222         mov r2,#0x2
0809AC4A: 1823         mov r3,#0x18
0809AC4C: 2bf028fb     bl 0x080c62a0
0809AC50: 201c         add r0,r4,#0x0
0809AC52: 8c30         add r0,#0x8c
0809AC54: 0021         mov r1,#0x0
0809AC56: 0160         str r1,[r0,#0x0]
0809AC58: 0430         add r0,#0x4
0809AC5A: 0160         str r1,[r0,#0x0]
0809AC5C: 0430         add r0,#0x4
0809AC5E: 0170         strb r1,[r0,#0x0]
0809AC60: a17a         ldrb r1,[r4,#0xa]
0809AC62: fb20         mov r0,#0xfb
0809AC64: 0840         and r0,r1
0809AC66: fe21         mov r1,#0xfe
0809AC68: 0840         and r0,r1
0809AC6A: a072         strb r0,[r4,#0xa]
0809AC6C: 0549         ldr r1,[0x0809ac84]
0809AC6E: 607a         ldrb r0,[r4,#0x9]
0809AC70: 8000         lsl r0,r0,#0x2
0809AC72: 4018         add r0,r0,r1
0809AC74: 0421         mov r1,#0x4
0809AC76: e160         str r1,[r4,#0xc]
0809AC78: 0068         ldr r0,[r0,#0x0]
0809AC7A: 0069         ldr r0,[r0,#0x10]
0809AC7C: 6061         str r0,[r4,#0x14]
0809AC7E: 10bc         pop {r4}
0809AC80: 01bc         pop {r0}
0809AC82: 0047         bx r0

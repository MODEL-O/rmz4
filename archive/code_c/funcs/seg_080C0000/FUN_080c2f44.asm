; undefined FUN_080c2f44(void)
; entry 0x80c2f44  size 64 bytes

080C2F44: 10b5         push {r4,lr}
080C2F46: 041c         add r4,r0,#0x0
080C2F48: 8c30         add r0,#0x8c
080C2F4A: 0021         mov r1,#0x0
080C2F4C: 0160         str r1,[r0,#0x0]
080C2F4E: 0430         add r0,#0x4
080C2F50: 0160         str r1,[r0,#0x0]
080C2F52: 0430         add r0,#0x4
080C2F54: 0170         strb r1,[r0,#0x0]
080C2F56: a17a         ldrb r1,[r4,#0xa]
080C2F58: fb20         mov r0,#0xfb
080C2F5A: 0840         and r0,r1
080C2F5C: fe21         mov r1,#0xfe
080C2F5E: 0840         and r0,r1
080C2F60: a072         strb r0,[r4,#0xa]
080C2F62: 211c         add r1,r4,#0x0
080C2F64: 5431         add r1,#0x54
080C2F66: 0120         mov r0,#0x1
080C2F68: 0df08efe     bl 0x080d0c88
080C2F6C: 0549         ldr r1,[0x080c2f84]
080C2F6E: 607a         ldrb r0,[r4,#0x9]
080C2F70: 8000         lsl r0,r0,#0x2
080C2F72: 4018         add r0,r0,r1
080C2F74: 0421         mov r1,#0x4
080C2F76: e160         str r1,[r4,#0xc]
080C2F78: 0068         ldr r0,[r0,#0x0]
080C2F7A: 0069         ldr r0,[r0,#0x10]
080C2F7C: 6061         str r0,[r4,#0x14]
080C2F7E: 10bc         pop {r4}
080C2F80: 01bc         pop {r0}
080C2F82: 0047         bx r0

; undefined FUN_080c5f04(void)
; entry 0x80c5f04  size 70 bytes

080C5F04: 30b5         push {r4,r5,lr}
080C5F06: 051c         add r5,r0,#0x0
080C5F08: ac6a         ldr r4,[r5,#0x28]
080C5F0A: 00f0bdf8     bl 0x080c6088
080C5F0E: 281c         add r0,r5,#0x0
080C5F10: 8c30         add r0,#0x8c
080C5F12: 0021         mov r1,#0x0
080C5F14: 0160         str r1,[r0,#0x0]
080C5F16: 0430         add r0,#0x4
080C5F18: 0160         str r1,[r0,#0x0]
080C5F1A: 0430         add r0,#0x4
080C5F1C: 0170         strb r1,[r0,#0x0]
080C5F1E: a97a         ldrb r1,[r5,#0xa]
080C5F20: fb20         mov r0,#0xfb
080C5F22: 0840         and r0,r1
080C5F24: fe21         mov r1,#0xfe
080C5F26: 0840         and r0,r1
080C5F28: a872         strb r0,[r5,#0xa]
080C5F2A: b434         add r4,#0xb4
080C5F2C: 2088         ldrh r0,[r4,#0x0]
080C5F2E: 0138         sub r0,#0x1
080C5F30: 2080         strh r0,[r4,#0x0]
080C5F32: 0649         ldr r1,[0x080c5f4c]
080C5F34: 687a         ldrb r0,[r5,#0x9]
080C5F36: 8000         lsl r0,r0,#0x2
080C5F38: 4018         add r0,r0,r1
080C5F3A: 0421         mov r1,#0x4
080C5F3C: e960         str r1,[r5,#0xc]
080C5F3E: 0068         ldr r0,[r0,#0x0]
080C5F40: 0069         ldr r0,[r0,#0x10]
080C5F42: 6861         str r0,[r5,#0x14]
080C5F44: 30bc         pop {r4,r5}
080C5F46: 01bc         pop {r0}
080C5F48: 0047         bx r0

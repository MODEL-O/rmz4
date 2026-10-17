; undefined FUN_080a1ee0(void)
; entry 0x80a1ee0  size 70 bytes

080A1EE0: 10b5         push {r4,lr}
080A1EE2: 041c         add r4,r0,#0x0
080A1EE4: a07b         ldrb r0,[r4,#0xe]
080A1EE6: 0028         cmp r0,#0x0
080A1EE8: 08d1         bne 0x080a1efc
080A1EEA: 0c49         ldr r1,[0x080a1f1c]
080A1EEC: 201c         add r0,r4,#0x0
080A1EEE: 7bf707f8     bl 0x0801cf00
080A1EF2: a020         mov r0,#0xa0
080A1EF4: a074         strb r0,[r4,#0x12]
080A1EF6: a07b         ldrb r0,[r4,#0xe]
080A1EF8: 0130         add r0,#0x1
080A1EFA: a073         strb r0,[r4,#0xe]
080A1EFC: a07c         ldrb r0,[r4,#0x12]
080A1EFE: 021c         add r2,r0,#0x0
080A1F00: 002a         cmp r2,#0x0
080A1F02: 0dd1         bne 0x080a1f20
080A1F04: e07c         ldrb r0,[r4,#0x13]
080A1F06: 0228         cmp r0,#0x2
080A1F08: 04d1         bne 0x080a1f14
080A1F0A: 211c         add r1,r4,#0x0
080A1F0C: b431         add r1,#0xb4
080A1F0E: 0120         mov r0,#0x1
080A1F10: 0870         strb r0,[r1,#0x0]
080A1F12: e274         strb r2,[r4,#0x13]
080A1F14: 0220         mov r0,#0x2
080A1F16: 6073         strb r0,[r4,#0xd]
080A1F18: a273         strb r2,[r4,#0xe]
080A1F1A: 03e0         b 0x080a1f24
080A1F20: 0138         sub r0,#0x1
080A1F22: a074         strb r0,[r4,#0x12]
080A1F24: 10bc         pop {r4}
080A1F26: 01bc         pop {r0}
080A1F28: 0047         bx r0

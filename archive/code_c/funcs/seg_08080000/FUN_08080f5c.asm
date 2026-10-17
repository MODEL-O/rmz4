; undefined FUN_08080f5c(void)
; entry 0x8080f5c  size 64 bytes

08080F5C: 10b5         push {r4,lr}
08080F5E: 041c         add r4,r0,#0x0
08080F60: e07b         ldrb r0,[r4,#0xf]
08080F62: 0028         cmp r0,#0x0
08080F64: 0ad1         bne 0x08080f7c
08080F66: 201c         add r0,r4,#0x0
08080F68: 7430         add r0,#0x74
08080F6A: 0c49         ldr r1,[0x08080f9c]
08080F6C: 0968         ldr r1,[r1,#0x0]
08080F6E: 84f709fc     bl 0x08005784
08080F72: 2020         mov r0,#0x20
08080F74: a074         strb r0,[r4,#0x12]
08080F76: e07b         ldrb r0,[r4,#0xf]
08080F78: 0130         add r0,#0x1
08080F7A: e073         strb r0,[r4,#0xf]
08080F7C: 201c         add r0,r4,#0x0
08080F7E: 9cf739f9     bl 0x0801d1f4
08080F82: a07c         ldrb r0,[r4,#0x12]
08080F84: 0138         sub r0,#0x1
08080F86: a074         strb r0,[r4,#0x12]
08080F88: 0006         lsl r0,r0,#0x18
08080F8A: 0028         cmp r0,#0x0
08080F8C: 03d1         bne 0x08080f96
08080F8E: 211c         add r1,r4,#0x0
08080F90: b431         add r1,#0xb4
08080F92: 0120         mov r0,#0x1
08080F94: 0870         strb r0,[r1,#0x0]
08080F96: 10bc         pop {r4}
08080F98: 01bc         pop {r0}
08080F9A: 0047         bx r0

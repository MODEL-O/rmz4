; undefined FUN_08093f34(void)
; entry 0x8093f34  size 70 bytes

08093F34: 10b5         push {r4,lr}
08093F36: 041c         add r4,r0,#0x0
08093F38: e07b         ldrb r0,[r4,#0xf]
08093F3A: 0028         cmp r0,#0x0
08093F3C: 0bd1         bne 0x08093f56
08093F3E: 201c         add r0,r4,#0x0
08093F40: 7430         add r0,#0x74
08093F42: 0e49         ldr r1,[0x08093f7c]
08093F44: 71f71efc     bl 0x08005784
08093F48: 0d49         ldr r1,[0x08093f80]
08093F4A: 201c         add r0,r4,#0x0
08093F4C: 88f7d8ff     bl 0x0801cf00
08093F50: e07b         ldrb r0,[r4,#0xf]
08093F52: 0130         add r0,#0x1
08093F54: e073         strb r0,[r4,#0xf]
08093F56: 201c         add r0,r4,#0x0
08093F58: 89f74af8     bl 0x0801cff0
08093F5C: 201c         add r0,r4,#0x0
08093F5E: 00f06bfd     bl 0x08094a38
08093F62: 201c         add r0,r4,#0x0
08093F64: 7330         add r0,#0x73
08093F66: 0078         ldrb r0,[r0,#0x0]
08093F68: 0328         cmp r0,#0x3
08093F6A: 03d1         bne 0x08093f74
08093F6C: 0020         mov r0,#0x0
08093F6E: 6073         strb r0,[r4,#0xd]
08093F70: a073         strb r0,[r4,#0xe]
08093F72: e073         strb r0,[r4,#0xf]
08093F74: 10bc         pop {r4}
08093F76: 01bc         pop {r0}
08093F78: 0047         bx r0

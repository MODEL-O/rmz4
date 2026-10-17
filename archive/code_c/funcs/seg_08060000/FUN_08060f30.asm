; undefined FUN_08060f30(void)
; entry 0x8060f30  size 52 bytes

08060F30: 10b5         push {r4,lr}
08060F32: 041c         add r4,r0,#0x0
08060F34: a07b         ldrb r0,[r4,#0xe]
08060F36: 0028         cmp r0,#0x0
08060F38: 06d1         bne 0x08060f48
08060F3A: 0a49         ldr r1,[0x08060f64]
08060F3C: 201c         add r0,r4,#0x0
08060F3E: bbf7dfff     bl 0x0801cf00
08060F42: a07b         ldrb r0,[r4,#0xe]
08060F44: 0130         add r0,#0x1
08060F46: a073         strb r0,[r4,#0xe]
08060F48: 201c         add r0,r4,#0x0
08060F4A: bcf751f8     bl 0x0801cff0
08060F4E: 201c         add r0,r4,#0x0
08060F50: 7330         add r0,#0x73
08060F52: 0178         ldrb r1,[r0,#0x0]
08060F54: 0329         cmp r1,#0x3
08060F56: 02d1         bne 0x08060f5e
08060F58: 0020         mov r0,#0x0
08060F5A: 6173         strb r1,[r4,#0xd]
08060F5C: a073         strb r0,[r4,#0xe]
08060F5E: 10bc         pop {r4}
08060F60: 01bc         pop {r0}
08060F62: 0047         bx r0

; undefined FUN_08060b48(void)
; entry 0x8060b48  size 56 bytes

08060B48: 10b5         push {r4,lr}
08060B4A: 041c         add r4,r0,#0x0
08060B4C: a07b         ldrb r0,[r4,#0xe]
08060B4E: 0028         cmp r0,#0x0
08060B50: 08d1         bne 0x08060b64
08060B52: 0b49         ldr r1,[0x08060b80]
08060B54: 201c         add r0,r4,#0x0
08060B56: bcf7d3f9     bl 0x0801cf00
08060B5A: 2020         mov r0,#0x20
08060B5C: a074         strb r0,[r4,#0x12]
08060B5E: a07b         ldrb r0,[r4,#0xe]
08060B60: 0130         add r0,#0x1
08060B62: a073         strb r0,[r4,#0xe]
08060B64: 201c         add r0,r4,#0x0
08060B66: bcf743fa     bl 0x0801cff0
08060B6A: 201c         add r0,r4,#0x0
08060B6C: 7330         add r0,#0x73
08060B6E: 0178         ldrb r1,[r0,#0x0]
08060B70: 0329         cmp r1,#0x3
08060B72: 02d1         bne 0x08060b7a
08060B74: 0020         mov r0,#0x0
08060B76: 6173         strb r1,[r4,#0xd]
08060B78: a073         strb r0,[r4,#0xe]
08060B7A: 10bc         pop {r4}
08060B7C: 01bc         pop {r0}
08060B7E: 0047         bx r0

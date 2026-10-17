; undefined FUN_08067a90(void)
; entry 0x8067a90  size 72 bytes

08067A90: 10b5         push {r4,lr}
08067A92: 041c         add r4,r0,#0x0
08067A94: a07b         ldrb r0,[r4,#0xe]
08067A96: 0028         cmp r0,#0x0
08067A98: 13d1         bne 0x08067ac2
08067A9A: 201c         add r0,r4,#0x0
08067A9C: dd30         add r0,#0xdd
08067A9E: 0078         ldrb r0,[r0,#0x0]
08067AA0: 0028         cmp r0,#0x0
08067AA2: 07d0         beq 0x08067ab4
08067AA4: 0249         ldr r1,[0x08067ab0]
08067AA6: 201c         add r0,r4,#0x0
08067AA8: b5f72afa     bl 0x0801cf00
08067AAC: 06e0         b 0x08067abc
08067AB4: 0a49         ldr r1,[0x08067ae0]
08067AB6: 201c         add r0,r4,#0x0
08067AB8: b5f722fa     bl 0x0801cf00
08067ABC: a07b         ldrb r0,[r4,#0xe]
08067ABE: 0130         add r0,#0x1
08067AC0: a073         strb r0,[r4,#0xe]
08067AC2: 201c         add r0,r4,#0x0
08067AC4: b5f794fa     bl 0x0801cff0
08067AC8: 201c         add r0,r4,#0x0
08067ACA: 7330         add r0,#0x73
08067ACC: 0178         ldrb r1,[r0,#0x0]
08067ACE: 0329         cmp r1,#0x3
08067AD0: 02d1         bne 0x08067ad8
08067AD2: 0020         mov r0,#0x0
08067AD4: 6173         strb r1,[r4,#0xd]
08067AD6: a073         strb r0,[r4,#0xe]
08067AD8: 10bc         pop {r4}
08067ADA: 01bc         pop {r0}
08067ADC: 0047         bx r0

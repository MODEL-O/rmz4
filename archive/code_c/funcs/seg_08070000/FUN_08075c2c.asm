; undefined FUN_08075c2c(void)
; entry 0x8075c2c  size 54 bytes

08075C2C: 10b5         push {r4,lr}
08075C2E: 041c         add r4,r0,#0x0
08075C30: a07b         ldrb r0,[r4,#0xe]
08075C32: 0028         cmp r0,#0x0
08075C34: 06d1         bne 0x08075c44
08075C36: 0b49         ldr r1,[0x08075c64]
08075C38: 201c         add r0,r4,#0x0
08075C3A: a7f761f9     bl 0x0801cf00
08075C3E: a07b         ldrb r0,[r4,#0xe]
08075C40: 0130         add r0,#0x1
08075C42: a073         strb r0,[r4,#0xe]
08075C44: 201c         add r0,r4,#0x0
08075C46: a7f7d3f9     bl 0x0801cff0
08075C4A: 201c         add r0,r4,#0x0
08075C4C: 7330         add r0,#0x73
08075C4E: 0078         ldrb r0,[r0,#0x0]
08075C50: 0328         cmp r0,#0x3
08075C52: 03d1         bne 0x08075c5c
08075C54: 0021         mov r1,#0x0
08075C56: 0220         mov r0,#0x2
08075C58: 6073         strb r0,[r4,#0xd]
08075C5A: a173         strb r1,[r4,#0xe]
08075C5C: 10bc         pop {r4}
08075C5E: 01bc         pop {r0}
08075C60: 0047         bx r0

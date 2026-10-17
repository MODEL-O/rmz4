; undefined FUN_080e0b24(void)
; entry 0x80e0b24  size 74 bytes

080E0B24: 10b5         push {r4,lr}
080E0B26: 041c         add r4,r0,#0x0
080E0B28: a07b         ldrb r0,[r4,#0xe]
080E0B2A: 0128         cmp r0,#0x1
080E0B2C: 0cd1         bne 0x080e0b48
080E0B2E: 1049         ldr r1,[0x080e0b70]
080E0B30: 201c         add r0,r4,#0x0
080E0B32: 3cf7e5f9     bl 0x0801cf00
080E0B36: 0a20         mov r0,#0xa
080E0B38: a074         strb r0,[r4,#0x12]
080E0B3A: 211c         add r1,r4,#0x0
080E0B3C: 2531         add r1,#0x25
080E0B3E: 1820         mov r0,#0x18
080E0B40: 0870         strb r0,[r1,#0x0]
080E0B42: a07b         ldrb r0,[r4,#0xe]
080E0B44: 0130         add r0,#0x1
080E0B46: a073         strb r0,[r4,#0xe]
080E0B48: 201c         add r0,r4,#0x0
080E0B4A: 00f0c3f8     bl 0x080e0cd4
080E0B4E: 0006         lsl r0,r0,#0x18
080E0B50: 000e         lsr r0,r0,#0x18
080E0B52: 0128         cmp r0,#0x1
080E0B54: 08d1         bne 0x080e0b68
080E0B56: 0749         ldr r1,[0x080e0b74]
080E0B58: 607a         ldrb r0,[r4,#0x9]
080E0B5A: 8000         lsl r0,r0,#0x2
080E0B5C: 4018         add r0,r0,r1
080E0B5E: 0221         mov r1,#0x2
080E0B60: e160         str r1,[r4,#0xc]
080E0B62: 0068         ldr r0,[r0,#0x0]
080E0B64: 8068         ldr r0,[r0,#0x8]
080E0B66: 6061         str r0,[r4,#0x14]
080E0B68: 10bc         pop {r4}
080E0B6A: 01bc         pop {r0}
080E0B6C: 0047         bx r0

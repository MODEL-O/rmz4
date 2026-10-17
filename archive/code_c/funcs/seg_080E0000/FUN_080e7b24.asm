; undefined FUN_080e7b24(void)
; entry 0x80e7b24  size 32 bytes

080E7B24: 10b5         push {r4,lr}
080E7B26: 041c         add r4,r0,#0x0
080E7B28: 0649         ldr r1,[0x080e7b44]
080E7B2A: 607b         ldrb r0,[r4,#0xd]
080E7B2C: 8000         lsl r0,r0,#0x2
080E7B2E: 4018         add r0,r0,r1
080E7B30: 0168         ldr r1,[r0,#0x0]
080E7B32: 201c         add r0,r4,#0x0
080E7B34: 41f024fa     bl 0x08128f80
080E7B38: 201c         add r0,r4,#0x0
080E7B3A: 35f759fa     bl 0x0801cff0
080E7B3E: 10bc         pop {r4}
080E7B40: 01bc         pop {r0}
080E7B42: 0047         bx r0

; undefined FUN_08091af8(void)
; entry 0x8091af8  size 76 bytes

08091AF8: 30b5         push {r4,r5,lr}
08091AFA: 041c         add r4,r0,#0x0
08091AFC: a57b         ldrb r5,[r4,#0xe]
08091AFE: 002d         cmp r5,#0x0
08091B00: 0fd1         bne 0x08091b22
08091B02: 1049         ldr r1,[0x08091b44]
08091B04: 8bf7fcf9     bl 0x0801cf00
08091B08: 201c         add r0,r4,#0x0
08091B0A: 7430         add r0,#0x74
08091B0C: 0e49         ldr r1,[0x08091b48]
08091B0E: 73f739fe     bl 0x08005784
08091B12: 2020         mov r0,#0x20
08091B14: a074         strb r0,[r4,#0x12]
08091B16: 201c         add r0,r4,#0x0
08091B18: c130         add r0,#0xc1
08091B1A: 0570         strb r5,[r0,#0x0]
08091B1C: a07b         ldrb r0,[r4,#0xe]
08091B1E: 0130         add r0,#0x1
08091B20: a073         strb r0,[r4,#0xe]
08091B22: 201c         add r0,r4,#0x0
08091B24: 8bf764fa     bl 0x0801cff0
08091B28: a07c         ldrb r0,[r4,#0x12]
08091B2A: 0138         sub r0,#0x1
08091B2C: a074         strb r0,[r4,#0x12]
08091B2E: 0006         lsl r0,r0,#0x18
08091B30: 000e         lsr r0,r0,#0x18
08091B32: ff28         cmp r0,#0xff
08091B34: 03d1         bne 0x08091b3e
08091B36: 0320         mov r0,#0x3
08091B38: 6073         strb r0,[r4,#0xd]
08091B3A: 0020         mov r0,#0x0
08091B3C: a073         strb r0,[r4,#0xe]
08091B3E: 30bc         pop {r4,r5}
08091B40: 01bc         pop {r0}
08091B42: 0047         bx r0

; undefined FUN_080c5d24(void)
; entry 0x80c5d24  size 72 bytes

080C5D24: 10b5         push {r4,lr}
080C5D26: 041c         add r4,r0,#0x0
080C5D28: e07b         ldrb r0,[r4,#0xf]
080C5D2A: 0028         cmp r0,#0x0
080C5D2C: 0dd1         bne 0x080c5d4a
080C5D2E: 201c         add r0,r4,#0x0
080C5D30: 7430         add r0,#0x74
080C5D32: 0e49         ldr r1,[0x080c5d6c]
080C5D34: 3ff726fd     bl 0x08005784
080C5D38: a17a         ldrb r1,[r4,#0xa]
080C5D3A: 0120         mov r0,#0x1
080C5D3C: 0843         orr r0,r1
080C5D3E: a072         strb r0,[r4,#0xa]
080C5D40: 2020         mov r0,#0x20
080C5D42: a074         strb r0,[r4,#0x12]
080C5D44: e07b         ldrb r0,[r4,#0xf]
080C5D46: 0130         add r0,#0x1
080C5D48: e073         strb r0,[r4,#0xf]
080C5D4A: 201c         add r0,r4,#0x0
080C5D4C: 57f750f9     bl 0x0801cff0
080C5D50: a07c         ldrb r0,[r4,#0x12]
080C5D52: 0138         sub r0,#0x1
080C5D54: a074         strb r0,[r4,#0x12]
080C5D56: 0006         lsl r0,r0,#0x18
080C5D58: 010e         lsr r1,r0,#0x18
080C5D5A: 0029         cmp r1,#0x0
080C5D5C: 03d1         bne 0x080c5d66
080C5D5E: 0220         mov r0,#0x2
080C5D60: 6073         strb r0,[r4,#0xd]
080C5D62: a173         strb r1,[r4,#0xe]
080C5D64: e173         strb r1,[r4,#0xf]
080C5D66: 10bc         pop {r4}
080C5D68: 01bc         pop {r0}
080C5D6A: 0047         bx r0

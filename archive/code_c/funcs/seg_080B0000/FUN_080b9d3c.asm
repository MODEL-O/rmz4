; undefined FUN_080b9d3c(void)
; entry 0x80b9d3c  size 48 bytes

080B9D3C: 00b5         push {lr}
080B9D3E: 021c         add r2,r0,#0x0
080B9D40: 907c         ldrb r0,[r2,#0x12]
080B9D42: 3c28         cmp r0,#0x3c
080B9D44: 01d1         bne 0x080b9d4a
080B9D46: 0020         mov r0,#0x0
080B9D48: 9074         strb r0,[r2,#0x12]
080B9D4A: 917c         ldrb r1,[r2,#0x12]
080B9D4C: 081c         add r0,r1,#0x0
080B9D4E: 0f38         sub r0,#0xf
080B9D50: 0006         lsl r0,r0,#0x18
080B9D52: 000e         lsr r0,r0,#0x18
080B9D54: 1e28         cmp r0,#0x1e
080B9D56: 02d9         bls 0x080b9d5e
080B9D58: 906d         ldr r0,[r2,#0x58]
080B9D5A: 4030         add r0,#0x40
080B9D5C: 01e0         b 0x080b9d62
080B9D5E: 906d         ldr r0,[r2,#0x58]
080B9D60: 4038         sub r0,#0x40
080B9D62: 9065         str r0,[r2,#0x58]
080B9D64: 481c         add r0,r1,#0x1
080B9D66: 9074         strb r0,[r2,#0x12]
080B9D68: 01bc         pop {r0}
080B9D6A: 0047         bx r0

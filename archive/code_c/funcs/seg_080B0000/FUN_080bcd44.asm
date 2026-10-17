; undefined FUN_080bcd44(void)
; entry 0x80bcd44  size 48 bytes

080BCD44: 00b5         push {lr}
080BCD46: 021c         add r2,r0,#0x0
080BCD48: 907c         ldrb r0,[r2,#0x12]
080BCD4A: 3c28         cmp r0,#0x3c
080BCD4C: 01d1         bne 0x080bcd52
080BCD4E: 0020         mov r0,#0x0
080BCD50: 9074         strb r0,[r2,#0x12]
080BCD52: 917c         ldrb r1,[r2,#0x12]
080BCD54: 081c         add r0,r1,#0x0
080BCD56: 0f38         sub r0,#0xf
080BCD58: 0006         lsl r0,r0,#0x18
080BCD5A: 000e         lsr r0,r0,#0x18
080BCD5C: 1e28         cmp r0,#0x1e
080BCD5E: 02d9         bls 0x080bcd66
080BCD60: 906d         ldr r0,[r2,#0x58]
080BCD62: 8030         add r0,#0x80
080BCD64: 01e0         b 0x080bcd6a
080BCD66: 906d         ldr r0,[r2,#0x58]
080BCD68: 8038         sub r0,#0x80
080BCD6A: 9065         str r0,[r2,#0x58]
080BCD6C: 481c         add r0,r1,#0x1
080BCD6E: 9074         strb r0,[r2,#0x12]
080BCD70: 01bc         pop {r0}
080BCD72: 0047         bx r0

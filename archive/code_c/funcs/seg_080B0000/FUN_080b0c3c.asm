; undefined FUN_080b0c3c(void)
; entry 0x80b0c3c  size 58 bytes

080B0C3C: 10b5         push {r4,lr}
080B0C3E: 031c         add r3,r0,#0x0
080B0C40: 1a1c         add r2,r3,#0x0
080B0C42: b432         add r2,#0xb4
080B0C44: 1078         ldrb r0,[r2,#0x0]
080B0C46: 0028         cmp r0,#0x0
080B0C48: 08d1         bne 0x080b0c5c
080B0C4A: 181c         add r0,r3,#0x0
080B0C4C: b830         add r0,#0xb8
080B0C4E: 0168         ldr r1,[r0,#0x0]
080B0C50: a024         mov r4,#0xa0
080B0C52: 2401         lsl r4,r4,#0x4
080B0C54: 0919         add r1,r1,r4
080B0C56: 0160         str r1,[r0,#0x0]
080B0C58: 0120         mov r0,#0x1
080B0C5A: 06e0         b 0x080b0c6a
080B0C5C: 181c         add r0,r3,#0x0
080B0C5E: b830         add r0,#0xb8
080B0C60: 0168         ldr r1,[r0,#0x0]
080B0C62: 054c         ldr r4,[0x080b0c78]
080B0C64: 0919         add r1,r1,r4
080B0C66: 0160         str r1,[r0,#0x0]
080B0C68: 0020         mov r0,#0x0
080B0C6A: 1070         strb r0,[r2,#0x0]
080B0C6C: ff20         mov r0,#0xff
080B0C6E: d874         strb r0,[r3,#0x13]
080B0C70: 10bc         pop {r4}
080B0C72: 01bc         pop {r0}
080B0C74: 0047         bx r0

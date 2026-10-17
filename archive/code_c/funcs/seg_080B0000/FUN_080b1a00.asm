; undefined FUN_080b1a00(void)
; entry 0x80b1a00  size 72 bytes

080B1A00: 30b5         push {r4,r5,lr}
080B1A02: 041c         add r4,r0,#0x0
080B1A04: 251c         add r5,r4,#0x0
080B1A06: c035         add r5,#0xc0
080B1A08: 2b68         ldr r3,[r5,#0x0]
080B1A0A: 002b         cmp r3,#0x0
080B1A0C: 19d1         bne 0x080b1a42
080B1A0E: 8c30         add r0,#0x8c
080B1A10: 0068         ldr r0,[r0,#0x0]
080B1A12: 0121         mov r1,#0x1
080B1A14: 0840         and r0,r1
080B1A16: 0028         cmp r0,#0x0
080B1A18: 13d0         beq 0x080b1a42
080B1A1A: 0b4a         ldr r2,[0x080b1a48]
080B1A1C: 1360         str r3,[r2,#0x0]
080B1A1E: 0b48         ldr r0,[0x080b1a4c]
080B1A20: 5060         str r0,[r2,#0x4]
080B1A22: 0020         mov r0,#0x0
080B1A24: 211c         add r1,r4,#0x0
080B1A26: 79f7c1f9     bl 0x0802adac
080B1A2A: 2860         str r0,[r5,#0x0]
080B1A2C: 0028         cmp r0,#0x0
080B1A2E: 08d0         beq 0x080b1a42
080B1A30: 201c         add r0,r4,#0x0
080B1A32: 7430         add r0,#0x74
080B1A34: 0649         ldr r1,[0x080b1a50]
080B1A36: 53f7a5fe     bl 0x08005784
080B1A3A: 0649         ldr r1,[0x080b1a54]
080B1A3C: 201c         add r0,r4,#0x0
080B1A3E: 6bf75ffa     bl 0x0801cf00
080B1A42: 30bc         pop {r4,r5}
080B1A44: 01bc         pop {r0}
080B1A46: 0047         bx r0

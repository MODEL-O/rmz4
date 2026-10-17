; undefined FUN_081009f8(void)
; entry 0x81009f8  size 42 bytes

081009F8: 00b5         push {lr}
081009FA: 021c         add r2,r0,#0x0
081009FC: 5069         ldr r0,[r2,#0x14]
081009FE: 0421         mov r1,#0x4
08100A00: 0840         and r0,r1
08100A02: 0028         cmp r0,#0x0
08100A04: 0bd0         beq 0x08100a1e
08100A06: d068         ldr r0,[r2,#0xc]
08100A08: c16a         ldr r1,[r0,#0x2c]
08100A0A: d26a         ldr r2,[r2,#0x2c]
08100A0C: 0820         mov r0,#0x8
08100A0E: 0856         ldrsb r0,[r1,r0]
08100A10: 0028         cmp r0,#0x0
08100A12: 04d1         bne 0x08100a1e
08100A14: 487a         ldrb r0,[r1,#0x9]
08100A16: 0028         cmp r0,#0x0
08100A18: 01d1         bne 0x08100a1e
08100A1A: 0120         mov r0,#0x1
08100A1C: 5073         strb r0,[r2,#0xd]
08100A1E: 01bc         pop {r0}
08100A20: 0047         bx r0

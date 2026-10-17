; undefined FUN_080069f4(void)
; entry 0x80069f4  size 50 bytes

080069F4: 10b5         push {r4,lr}
080069F6: 0004         lsl r0,r0,#0x10
080069F8: 000c         lsr r0,r0,#0x10
080069FA: 0b4c         ldr r4,[0x08006a28]
080069FC: 2118         add r1,r4,r0
080069FE: 0b1c         add r3,r1,#0x0
08006A00: e03b         sub r3,#0xe0
08006A02: 1a78         ldrb r2,[r3,#0x0]
08006A04: 0949         ldr r1,[0x08006a2c]
08006A06: 1830         add r0,#0x18
08006A08: 0006         lsl r0,r0,#0x18
08006A0A: c00d         lsr r0,r0,#0x17
08006A0C: 4018         add r0,r0,r1
08006A0E: 0188         ldrh r1,[r0,#0x0]
08006A10: 0078         ldrb r0,[r0,#0x0]
08006A12: 8242         cmp r2,r0
08006A14: 04d0         beq 0x08006a20
08006A16: 1970         strb r1,[r3,#0x0]
08006A18: 211c         add r1,r4,#0x0
08006A1A: 3831         add r1,#0x38
08006A1C: 0120         mov r0,#0x1
08006A1E: 0870         strb r0,[r1,#0x0]
08006A20: 10bc         pop {r4}
08006A22: 01bc         pop {r0}
08006A24: 0047         bx r0

; undefined FUN_08006a30(void)
; entry 0x8006a30  size 50 bytes

08006A30: 10b5         push {r4,lr}
08006A32: 0004         lsl r0,r0,#0x10
08006A34: 000c         lsr r0,r0,#0x10
08006A36: 0b4c         ldr r4,[0x08006a64]
08006A38: 2118         add r1,r4,r0
08006A3A: 0b1c         add r3,r1,#0x0
08006A3C: e03b         sub r3,#0xe0
08006A3E: 1a78         ldrb r2,[r3,#0x0]
08006A40: 0949         ldr r1,[0x08006a68]
08006A42: 1830         add r0,#0x18
08006A44: 0006         lsl r0,r0,#0x18
08006A46: c00d         lsr r0,r0,#0x17
08006A48: 4018         add r0,r0,r1
08006A4A: 0078         ldrb r0,[r0,#0x0]
08006A4C: 8242         cmp r2,r0
08006A4E: 05d1         bne 0x08006a5c
08006A50: 0020         mov r0,#0x0
08006A52: 1870         strb r0,[r3,#0x0]
08006A54: 211c         add r1,r4,#0x0
08006A56: 3831         add r1,#0x38
08006A58: 0120         mov r0,#0x1
08006A5A: 0870         strb r0,[r1,#0x0]
08006A5C: 10bc         pop {r4}
08006A5E: 01bc         pop {r0}
08006A60: 0047         bx r0

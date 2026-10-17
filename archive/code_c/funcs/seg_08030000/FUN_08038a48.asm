; undefined FUN_08038a48(void)
; entry 0x8038a48  size 46 bytes

08038A48: 00b5         push {lr}
08038A4A: 011c         add r1,r0,#0x0
08038A4C: b430         add r0,#0xb4
08038A4E: c07c         ldrb r0,[r0,#0x13]
08038A50: 0328         cmp r0,#0x3
08038A52: 06d0         beq 0x08038a62
08038A54: 0228         cmp r0,#0x2
08038A56: 06d1         bne 0x08038a66
08038A58: 081c         add r0,r1,#0x0
08038A5A: f230         add r0,#0xf2
08038A5C: 0078         ldrb r0,[r0,#0x0]
08038A5E: 0528         cmp r0,#0x5
08038A60: 06d9         bls 0x08038a70
08038A62: 0120         mov r0,#0x1
08038A64: 05e0         b 0x08038a72
08038A66: 081c         add r0,r1,#0x0
08038A68: f230         add r0,#0xf2
08038A6A: 0078         ldrb r0,[r0,#0x0]
08038A6C: 0628         cmp r0,#0x6
08038A6E: f8d0         beq 0x08038a62
08038A70: 0020         mov r0,#0x0
08038A72: 02bc         pop {r1}
08038A74: 0847         bx r1

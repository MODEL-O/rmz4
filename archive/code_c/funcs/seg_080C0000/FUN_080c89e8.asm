; undefined FUN_080c89e8(void)
; entry 0x80c89e8  size 70 bytes

080C89E8: 70b5         push {r4,r5,r6,lr}
080C89EA: 041c         add r4,r0,#0x0
080C89EC: a17a         ldrb r1,[r4,#0xa]
080C89EE: 0220         mov r0,#0x2
080C89F0: 0026         mov r6,#0x0
080C89F2: 0843         orr r0,r1
080C89F4: 0421         mov r1,#0x4
080C89F6: 0843         orr r0,r1
080C89F8: a072         strb r0,[r4,#0xa]
080C89FA: 251c         add r5,r4,#0x0
080C89FC: 7435         add r5,#0x74
080C89FE: 0c49         ldr r1,[0x080c8a30]
080C8A00: 221c         add r2,r4,#0x0
080C8A02: 5432         add r2,#0x54
080C8A04: 281c         add r0,r5,#0x0
080C8A06: 0823         mov r3,#0x8
080C8A08: 3cf7aafe     bl 0x08005760
080C8A0C: ec62         str r4,[r5,#0x2c]
080C8A0E: 6e62         str r6,[r5,#0x24]
080C8A10: 0849         ldr r1,[0x080c8a34]
080C8A12: 607a         ldrb r0,[r4,#0x9]
080C8A14: 8000         lsl r0,r0,#0x2
080C8A16: 4018         add r0,r0,r1
080C8A18: 0121         mov r1,#0x1
080C8A1A: e160         str r1,[r4,#0xc]
080C8A1C: 0068         ldr r0,[r0,#0x0]
080C8A1E: 4068         ldr r0,[r0,#0x4]
080C8A20: 6061         str r0,[r4,#0x14]
080C8A22: 201c         add r0,r4,#0x0
080C8A24: fff73eff     bl 0x080c88a4
080C8A28: 70bc         pop {r4,r5,r6}
080C8A2A: 01bc         pop {r0}
080C8A2C: 0047         bx r0

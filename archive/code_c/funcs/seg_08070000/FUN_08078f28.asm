; undefined FUN_08078f28(void)
; entry 0x8078f28  size 58 bytes

08078F28: 30b5         push {r4,r5,lr}
08078F2A: 041c         add r4,r0,#0x0
08078F2C: 251c         add r5,r4,#0x0
08078F2E: d435         add r5,#0xd4
08078F30: 2888         ldrh r0,[r5,#0x0]
08078F32: 0130         add r0,#0x1
08078F34: 2880         strh r0,[r5,#0x0]
08078F36: 0004         lsl r0,r0,#0x10
08078F38: 000c         lsr r0,r0,#0x10
08078F3A: 0e28         cmp r0,#0xe
08078F3C: 04d8         bhi 0x08078f48
08078F3E: 201c         add r0,r4,#0x0
08078F40: d630         add r0,#0xd6
08078F42: 0078         ldrb r0,[r0,#0x0]
08078F44: 0128         cmp r0,#0x1
08078F46: 09d0         beq 0x08078f5c
08078F48: c720         mov r0,#0xc7
08078F4A: 4000         lsl r0,r0,#0x1
08078F4C: 89f7e0fd     bl 0x08002b10
08078F50: 211c         add r1,r4,#0x0
08078F52: d631         add r1,#0xd6
08078F54: 0120         mov r0,#0x1
08078F56: 0870         strb r0,[r1,#0x0]
08078F58: 0020         mov r0,#0x0
08078F5A: 2880         strh r0,[r5,#0x0]
08078F5C: 30bc         pop {r4,r5}
08078F5E: 01bc         pop {r0}
08078F60: 0047         bx r0

; undefined FUN_08078f64(void)
; entry 0x8078f64  size 56 bytes

08078F64: 30b5         push {r4,r5,lr}
08078F66: 041c         add r4,r0,#0x0
08078F68: 251c         add r5,r4,#0x0
08078F6A: d435         add r5,#0xd4
08078F6C: 2888         ldrh r0,[r5,#0x0]
08078F6E: 0130         add r0,#0x1
08078F70: 2880         strh r0,[r5,#0x0]
08078F72: 0004         lsl r0,r0,#0x10
08078F74: 000c         lsr r0,r0,#0x10
08078F76: 0e28         cmp r0,#0xe
08078F78: 04d8         bhi 0x08078f84
08078F7A: 201c         add r0,r4,#0x0
08078F7C: d630         add r0,#0xd6
08078F7E: 0078         ldrb r0,[r0,#0x0]
08078F80: 0228         cmp r0,#0x2
08078F82: 08d0         beq 0x08078f96
08078F84: 0548         ldr r0,[0x08078f9c]
08078F86: 89f7c3fd     bl 0x08002b10
08078F8A: 211c         add r1,r4,#0x0
08078F8C: d631         add r1,#0xd6
08078F8E: 0220         mov r0,#0x2
08078F90: 0870         strb r0,[r1,#0x0]
08078F92: 0020         mov r0,#0x0
08078F94: 2880         strh r0,[r5,#0x0]
08078F96: 30bc         pop {r4,r5}
08078F98: 01bc         pop {r0}
08078F9A: 0047         bx r0

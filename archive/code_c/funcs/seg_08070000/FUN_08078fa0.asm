; undefined FUN_08078fa0(void)
; entry 0x8078fa0  size 58 bytes

08078FA0: 30b5         push {r4,r5,lr}
08078FA2: 041c         add r4,r0,#0x0
08078FA4: 251c         add r5,r4,#0x0
08078FA6: d435         add r5,#0xd4
08078FA8: 2888         ldrh r0,[r5,#0x0]
08078FAA: 0130         add r0,#0x1
08078FAC: 2880         strh r0,[r5,#0x0]
08078FAE: 0004         lsl r0,r0,#0x10
08078FB0: 000c         lsr r0,r0,#0x10
08078FB2: 6828         cmp r0,#0x68
08078FB4: 04d8         bhi 0x08078fc0
08078FB6: 201c         add r0,r4,#0x0
08078FB8: d630         add r0,#0xd6
08078FBA: 0078         ldrb r0,[r0,#0x0]
08078FBC: 0328         cmp r0,#0x3
08078FBE: 09d0         beq 0x08078fd4
08078FC0: c820         mov r0,#0xc8
08078FC2: 4000         lsl r0,r0,#0x1
08078FC4: 89f7a4fd     bl 0x08002b10
08078FC8: 211c         add r1,r4,#0x0
08078FCA: d631         add r1,#0xd6
08078FCC: 0320         mov r0,#0x3
08078FCE: 0870         strb r0,[r1,#0x0]
08078FD0: 0020         mov r0,#0x0
08078FD2: 2880         strh r0,[r5,#0x0]
08078FD4: 30bc         pop {r4,r5}
08078FD6: 01bc         pop {r0}
08078FD8: 0047         bx r0

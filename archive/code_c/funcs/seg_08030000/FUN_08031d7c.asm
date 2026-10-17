; undefined FUN_08031d7c(void)
; entry 0x8031d7c  size 62 bytes

08031D7C: 10b5         push {r4,lr}
08031D7E: 041c         add r4,r0,#0x0
08031D80: a021         mov r1,#0xa0
08031D82: c900         lsl r1,r1,#0x3
08031D84: ebf7bcf8     bl 0x0801cf00
08031D88: 231c         add r3,r4,#0x0
08031D8A: b433         add r3,#0xb4
08031D8C: 5a6d         ldr r2,[r3,#0x54]
08031D8E: 002a         cmp r2,#0x0
08031D90: 03d0         beq 0x08031d9a
08031D92: 0021         mov r1,#0x0
08031D94: 0120         mov r0,#0x1
08031D96: 5074         strb r0,[r2,#0x11]
08031D98: 5965         str r1,[r3,#0x54]
08031D9A: 0020         mov r0,#0x0
08031D9C: e065         str r0,[r4,#0x5c]
08031D9E: 2066         str r0,[r4,#0x60]
08031DA0: 8620         mov r0,#0x86
08031DA2: 4000         lsl r0,r0,#0x1
08031DA4: 2118         add r1,r4,r0
08031DA6: 0820         mov r0,#0x8
08031DA8: 0870         strb r0,[r1,#0x0]
08031DAA: 0120         mov r0,#0x1
08031DAC: a073         strb r0,[r4,#0xe]
08031DAE: 201c         add r0,r4,#0x0
08031DB0: 00f004f8     bl 0x08031dbc
08031DB4: 10bc         pop {r4}
08031DB6: 01bc         pop {r0}
08031DB8: 0047         bx r0

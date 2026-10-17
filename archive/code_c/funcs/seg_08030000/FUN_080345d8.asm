; undefined FUN_080345d8(void)
; entry 0x80345d8  size 64 bytes

080345D8: 30b5         push {r4,r5,lr}
080345DA: 051c         add r5,r0,#0x0
080345DC: 0e4c         ldr r4,[0x08034618]
080345DE: 211c         add r1,r4,#0x0
080345E0: 05f0e6fe     bl 0x0803a3b0
080345E4: 281c         add r0,r5,#0x0
080345E6: 211c         add r1,r4,#0x0
080345E8: 05f002ff     bl 0x0803a3f0
080345EC: 281c         add r0,r5,#0x0
080345EE: 7330         add r0,#0x73
080345F0: 0078         ldrb r0,[r0,#0x0]
080345F2: 0328         cmp r0,#0x3
080345F4: 0dd1         bne 0x08034612
080345F6: 8020         mov r0,#0x80
080345F8: 4000         lsl r0,r0,#0x1
080345FA: 2918         add r1,r5,r0
080345FC: 0020         mov r0,#0x0
080345FE: 0870         strb r0,[r1,#0x0]
08034600: 281c         add r0,r5,#0x0
08034602: f7f7e9f8     bl 0x0802b7d8
08034606: 011c         add r1,r0,#0x0
08034608: 0904         lsl r1,r1,#0x10
0803460A: 090c         lsr r1,r1,#0x10
0803460C: 281c         add r0,r5,#0x0
0803460E: e8f777fc     bl 0x0801cf00
08034612: 30bc         pop {r4,r5}
08034614: 01bc         pop {r0}
08034616: 0047         bx r0

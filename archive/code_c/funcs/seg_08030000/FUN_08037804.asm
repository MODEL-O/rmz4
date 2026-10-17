; undefined FUN_08037804(void)
; entry 0x8037804  size 62 bytes

08037804: 30b5         push {r4,r5,lr}
08037806: 051c         add r5,r0,#0x0
08037808: 9024         mov r4,#0x90
0803780A: a401         lsl r4,r4,#0x6
0803780C: 211c         add r1,r4,#0x0
0803780E: 02f0cffd     bl 0x0803a3b0
08037812: 281c         add r0,r5,#0x0
08037814: 211c         add r1,r4,#0x0
08037816: 02f0ebfd     bl 0x0803a3f0
0803781A: 281c         add r0,r5,#0x0
0803781C: 7330         add r0,#0x73
0803781E: 0078         ldrb r0,[r0,#0x0]
08037820: 0328         cmp r0,#0x3
08037822: 0bd1         bne 0x0803783c
08037824: a021         mov r1,#0xa0
08037826: c900         lsl r1,r1,#0x3
08037828: 281c         add r0,r5,#0x0
0803782A: 0422         mov r2,#0x4
0803782C: 0123         mov r3,#0x1
0803782E: e5f7cbfb     bl 0x0801cfc8
08037832: 8020         mov r0,#0x80
08037834: 4000         lsl r0,r0,#0x1
08037836: 2918         add r1,r5,r0
08037838: 0020         mov r0,#0x0
0803783A: 0870         strb r0,[r1,#0x0]
0803783C: 30bc         pop {r4,r5}
0803783E: 01bc         pop {r0}
08037840: 0047         bx r0

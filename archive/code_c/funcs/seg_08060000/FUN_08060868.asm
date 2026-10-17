; undefined FUN_08060868(void)
; entry 0x8060868  size 52 bytes

08060868: 10b5         push {r4,lr}
0806086A: 041c         add r4,r0,#0x0
0806086C: a07b         ldrb r0,[r4,#0xe]
0806086E: 0028         cmp r0,#0x0
08060870: 06d1         bne 0x08060880
08060872: 0a49         ldr r1,[0x0806089c]
08060874: 201c         add r0,r4,#0x0
08060876: bcf743fb     bl 0x0801cf00
0806087A: a07b         ldrb r0,[r4,#0xe]
0806087C: 0130         add r0,#0x1
0806087E: a073         strb r0,[r4,#0xe]
08060880: 201c         add r0,r4,#0x0
08060882: bcf7b5fb     bl 0x0801cff0
08060886: 201c         add r0,r4,#0x0
08060888: 7330         add r0,#0x73
0806088A: 0178         ldrb r1,[r0,#0x0]
0806088C: 0329         cmp r1,#0x3
0806088E: 02d1         bne 0x08060896
08060890: 0020         mov r0,#0x0
08060892: 6173         strb r1,[r4,#0xd]
08060894: a073         strb r0,[r4,#0xe]
08060896: 10bc         pop {r4}
08060898: 01bc         pop {r0}
0806089A: 0047         bx r0

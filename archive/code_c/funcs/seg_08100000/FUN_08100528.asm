; undefined FUN_08100528(void)
; entry 0x8100528  size 66 bytes

08100528: 10b5         push {r4,lr}
0810052A: 041c         add r4,r0,#0x0
0810052C: a07b         ldrb r0,[r4,#0xe]
0810052E: 0028         cmp r0,#0x0
08100530: 0ed1         bne 0x08100550
08100532: 201c         add r0,r4,#0x0
08100534: b430         add r0,#0xb4
08100536: 0178         ldrb r1,[r0,#0x0]
08100538: be22         mov r2,#0xbe
0810053A: 1202         lsl r2,r2,#0x8
0810053C: 101c         add r0,r2,#0x0
0810053E: 0143         orr r1,r0
08100540: 201c         add r0,r4,#0x0
08100542: 1cf7ddfc     bl 0x0801cf00
08100546: 2020         mov r0,#0x20
08100548: a074         strb r0,[r4,#0x12]
0810054A: a07b         ldrb r0,[r4,#0xe]
0810054C: 0130         add r0,#0x1
0810054E: a073         strb r0,[r4,#0xe]
08100550: 201c         add r0,r4,#0x0
08100552: fff7ddff     bl 0x08100510
08100556: 0006         lsl r0,r0,#0x18
08100558: 0028         cmp r0,#0x0
0810055A: 03d0         beq 0x08100564
0810055C: 0021         mov r1,#0x0
0810055E: 0120         mov r0,#0x1
08100560: 6073         strb r0,[r4,#0xd]
08100562: a173         strb r1,[r4,#0xe]
08100564: 10bc         pop {r4}
08100566: 01bc         pop {r0}
08100568: 0047         bx r0

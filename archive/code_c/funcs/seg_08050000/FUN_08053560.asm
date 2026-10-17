; undefined FUN_08053560(void)
; entry 0x8053560  size 60 bytes

08053560: 10b5         push {r4,lr}
08053562: 041c         add r4,r0,#0x0
08053564: e07b         ldrb r0,[r4,#0xf]
08053566: 0028         cmp r0,#0x0
08053568: 08d1         bne 0x0805357c
0805356A: 0c49         ldr r1,[0x0805359c]
0805356C: 201c         add r0,r4,#0x0
0805356E: c9f7c7fc     bl 0x0801cf00
08053572: 3020         mov r0,#0x30
08053574: a074         strb r0,[r4,#0x12]
08053576: e07b         ldrb r0,[r4,#0xf]
08053578: 0130         add r0,#0x1
0805357A: e073         strb r0,[r4,#0xf]
0805357C: 201c         add r0,r4,#0x0
0805357E: c9f737fd     bl 0x0801cff0
08053582: a07c         ldrb r0,[r4,#0x12]
08053584: 0138         sub r0,#0x1
08053586: a074         strb r0,[r4,#0x12]
08053588: 0006         lsl r0,r0,#0x18
0805358A: 010e         lsr r1,r0,#0x18
0805358C: 0029         cmp r1,#0x0
0805358E: 02d1         bne 0x08053596
08053590: 0220         mov r0,#0x2
08053592: a073         strb r0,[r4,#0xe]
08053594: e173         strb r1,[r4,#0xf]
08053596: 10bc         pop {r4}
08053598: 01bc         pop {r0}
0805359A: 0047         bx r0

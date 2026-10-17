; undefined FUN_080523fc(void)
; entry 0x80523fc  size 54 bytes

080523FC: 10b5         push {r4,lr}
080523FE: 041c         add r4,r0,#0x0
08052400: a07b         ldrb r0,[r4,#0xe]
08052402: 0028         cmp r0,#0x0
08052404: 06d1         bne 0x08052414
08052406: 0b49         ldr r1,[0x08052434]
08052408: 201c         add r0,r4,#0x0
0805240A: caf779fd     bl 0x0801cf00
0805240E: a07b         ldrb r0,[r4,#0xe]
08052410: 0130         add r0,#0x1
08052412: a073         strb r0,[r4,#0xe]
08052414: 201c         add r0,r4,#0x0
08052416: caf7ebfd     bl 0x0801cff0
0805241A: 201c         add r0,r4,#0x0
0805241C: 7330         add r0,#0x73
0805241E: 0078         ldrb r0,[r0,#0x0]
08052420: 0328         cmp r0,#0x3
08052422: 03d1         bne 0x0805242c
08052424: 0021         mov r1,#0x0
08052426: 1720         mov r0,#0x17
08052428: 6073         strb r0,[r4,#0xd]
0805242A: a173         strb r1,[r4,#0xe]
0805242C: 10bc         pop {r4}
0805242E: 01bc         pop {r0}
08052430: 0047         bx r0

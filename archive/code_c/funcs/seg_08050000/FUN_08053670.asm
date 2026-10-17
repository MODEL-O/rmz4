; undefined FUN_08053670(void)
; entry 0x8053670  size 54 bytes

08053670: 10b5         push {r4,lr}
08053672: 041c         add r4,r0,#0x0
08053674: e07b         ldrb r0,[r4,#0xf]
08053676: 0028         cmp r0,#0x0
08053678: 06d1         bne 0x08053688
0805367A: 0b49         ldr r1,[0x080536a8]
0805367C: 201c         add r0,r4,#0x0
0805367E: c9f73ffc     bl 0x0801cf00
08053682: e07b         ldrb r0,[r4,#0xf]
08053684: 0130         add r0,#0x1
08053686: e073         strb r0,[r4,#0xf]
08053688: 201c         add r0,r4,#0x0
0805368A: c9f7b1fc     bl 0x0801cff0
0805368E: 201c         add r0,r4,#0x0
08053690: 7330         add r0,#0x73
08053692: 0078         ldrb r0,[r0,#0x0]
08053694: 0328         cmp r0,#0x3
08053696: 03d1         bne 0x080536a0
08053698: 0020         mov r0,#0x0
0805369A: 6073         strb r0,[r4,#0xd]
0805369C: a073         strb r0,[r4,#0xe]
0805369E: e073         strb r0,[r4,#0xf]
080536A0: 10bc         pop {r4}
080536A2: 01bc         pop {r0}
080536A4: 0047         bx r0

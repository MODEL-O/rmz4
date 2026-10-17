; undefined FUN_080a14e0(void)
; entry 0x80a14e0  size 74 bytes

080A14E0: 10b5         push {r4,lr}
080A14E2: 041c         add r4,r0,#0x0
080A14E4: e07b         ldrb r0,[r4,#0xf]
080A14E6: 0028         cmp r0,#0x0
080A14E8: 0fd1         bne 0x080a150a
080A14EA: 211c         add r1,r4,#0x0
080A14EC: 2531         add r1,#0x25
080A14EE: 1820         mov r0,#0x18
080A14F0: 0870         strb r0,[r1,#0x0]
080A14F2: 201c         add r0,r4,#0x0
080A14F4: 7430         add r0,#0x74
080A14F6: 0d49         ldr r1,[0x080a152c]
080A14F8: 64f744f9     bl 0x08005784
080A14FC: 0c49         ldr r1,[0x080a1530]
080A14FE: 201c         add r0,r4,#0x0
080A1500: 7bf7fefc     bl 0x0801cf00
080A1504: e07b         ldrb r0,[r4,#0xf]
080A1506: 0130         add r0,#0x1
080A1508: e073         strb r0,[r4,#0xf]
080A150A: 201c         add r0,r4,#0x0
080A150C: 7bf770fd     bl 0x0801cff0
080A1510: 201c         add r0,r4,#0x0
080A1512: 7330         add r0,#0x73
080A1514: 0078         ldrb r0,[r0,#0x0]
080A1516: 0428         cmp r0,#0x4
080A1518: 04d1         bne 0x080a1524
080A151A: 0021         mov r1,#0x0
080A151C: 0220         mov r0,#0x2
080A151E: 6073         strb r0,[r4,#0xd]
080A1520: a173         strb r1,[r4,#0xe]
080A1522: e173         strb r1,[r4,#0xf]
080A1524: 10bc         pop {r4}
080A1526: 01bc         pop {r0}
080A1528: 0047         bx r0

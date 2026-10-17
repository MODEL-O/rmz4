; undefined FUN_080b157c(void)
; entry 0x80b157c  size 56 bytes

080B157C: 70b5         push {r4,r5,r6,lr}
080B157E: 041c         add r4,r0,#0x0
080B1580: a07c         ldrb r0,[r4,#0x12]
080B1582: 061c         add r6,r0,#0x0
080B1584: 002e         cmp r6,#0x0
080B1586: 13d1         bne 0x080b15b0
080B1588: b921         mov r1,#0xb9
080B158A: 0902         lsl r1,r1,#0x8
080B158C: 201c         add r0,r4,#0x0
080B158E: 6bf7b7fc     bl 0x0801cf00
080B1592: 251c         add r5,r4,#0x0
080B1594: c235         add r5,#0xc2
080B1596: 2878         ldrb r0,[r5,#0x0]
080B1598: 0f28         cmp r0,#0xf
080B159A: 04d1         bne 0x080b15a6
080B159C: 201c         add r0,r4,#0x0
080B159E: 7430         add r0,#0x74
080B15A0: 0249         ldr r1,[0x080b15ac]
080B15A2: 54f7eff8     bl 0x08005784
080B15A6: 2e70         strb r6,[r5,#0x0]
080B15A8: 04e0         b 0x080b15b4
080B15B0: 0138         sub r0,#0x1
080B15B2: a074         strb r0,[r4,#0x12]
080B15B4: 70bc         pop {r4,r5,r6}
080B15B6: 01bc         pop {r0}
080B15B8: 0047         bx r0

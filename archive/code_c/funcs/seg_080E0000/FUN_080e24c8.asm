; undefined FUN_080e24c8(void)
; entry 0x80e24c8  size 52 bytes

080E24C8: 30b5         push {r4,r5,lr}
080E24CA: 041c         add r4,r0,#0x0
080E24CC: 00f046f8     bl 0x080e255c
080E24D0: 251c         add r5,r4,#0x0
080E24D2: 5435         add r5,#0x54
080E24D4: 0120         mov r0,#0x1
080E24D6: 291c         add r1,r5,#0x0
080E24D8: eef7d6fb     bl 0x080d0c88
080E24DC: 201c         add r0,r4,#0x0
080E24DE: 00f063f8     bl 0x080e25a8
080E24E2: 0020         mov r0,#0x0
080E24E4: 6074         strb r0,[r4,#0x11]
080E24E6: 0549         ldr r1,[0x080e24fc]
080E24E8: a27a         ldrb r2,[r4,#0xa]
080E24EA: 1209         lsr r2,r2,#0x4
080E24EC: 0120         mov r0,#0x1
080E24EE: 0240         and r2,r0
080E24F0: 281c         add r0,r5,#0x0
080E24F2: fff749fe     bl 0x080e2188
080E24F6: 30bc         pop {r4,r5}
080E24F8: 01bc         pop {r0}
080E24FA: 0047         bx r0

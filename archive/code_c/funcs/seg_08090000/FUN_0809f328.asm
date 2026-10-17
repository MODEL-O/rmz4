; undefined FUN_0809f328(void)
; entry 0x809f328  size 70 bytes

0809F328: 30b5         push {r4,r5,lr}
0809F32A: 041c         add r4,r0,#0x0
0809F32C: 251c         add r5,r4,#0x0
0809F32E: c035         add r5,#0xc0
0809F330: 2868         ldr r0,[r5,#0x0]
0809F332: 0028         cmp r0,#0x0
0809F334: 18d1         bne 0x0809f368
0809F336: 201c         add r0,r4,#0x0
0809F338: 8c30         add r0,#0x8c
0809F33A: 0068         ldr r0,[r0,#0x0]
0809F33C: 0121         mov r1,#0x1
0809F33E: 0840         and r0,r1
0809F340: 0028         cmp r0,#0x0
0809F342: 11d0         beq 0x0809f368
0809F344: 0a4a         ldr r2,[0x0809f370]
0809F346: 0020         mov r0,#0x0
0809F348: 211c         add r1,r4,#0x0
0809F34A: 8bf72ffd     bl 0x0802adac
0809F34E: 2860         str r0,[r5,#0x0]
0809F350: 0028         cmp r0,#0x0
0809F352: 09d0         beq 0x0809f368
0809F354: 201c         add r0,r4,#0x0
0809F356: 7430         add r0,#0x74
0809F358: 0649         ldr r1,[0x0809f374]
0809F35A: 66f713fa     bl 0x08005784
0809F35E: ea21         mov r1,#0xea
0809F360: c901         lsl r1,r1,#0x7
0809F362: 201c         add r0,r4,#0x0
0809F364: 7df7ccfd     bl 0x0801cf00
0809F368: 30bc         pop {r4,r5}
0809F36A: 01bc         pop {r0}
0809F36C: 0047         bx r0

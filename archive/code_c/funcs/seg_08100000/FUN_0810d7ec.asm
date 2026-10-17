; undefined FUN_0810d7ec(void)
; entry 0x810d7ec  size 68 bytes

0810D7EC: 70b5         push {r4,r5,r6,lr}
0810D7EE: 041c         add r4,r0,#0x0
0810D7F0: 0025         mov r5,#0x0
0810D7F2: 2078         ldrb r0,[r4,#0x0]
0810D7F4: fc28         cmp r0,#0xfc
0810D7F6: 16d8         bhi 0x0810d826
0810D7F8: 0d4e         ldr r6,[0x0810d830]
0810D7FA: f928         cmp r0,#0xf9
0810D7FC: 07d1         bne 0x0810d80e
0810D7FE: 3068         ldr r0,[r6,#0x0]
0810D800: fff7f4ff     bl 0x0810d7ec
0810D804: 2904         lsl r1,r5,#0x10
0810D806: 0914         asr r1,r1,#0x10
0810D808: 0918         add r1,r1,r0
0810D80A: 0904         lsl r1,r1,#0x10
0810D80C: 0d0c         lsr r5,r1,#0x10
0810D80E: 2078         ldrb r0,[r4,#0x0]
0810D810: ef28         cmp r0,#0xef
0810D812: 04d8         bhi 0x0810d81e
0810D814: 2804         lsl r0,r5,#0x10
0810D816: 8021         mov r1,#0x80
0810D818: 4902         lsl r1,r1,#0x9
0810D81A: 4018         add r0,r0,r1
0810D81C: 050c         lsr r5,r0,#0x10
0810D81E: 0134         add r4,#0x1
0810D820: 2078         ldrb r0,[r4,#0x0]
0810D822: fc28         cmp r0,#0xfc
0810D824: e9d9         bls 0x0810d7fa
0810D826: 2804         lsl r0,r5,#0x10
0810D828: 0014         asr r0,r0,#0x10
0810D82A: 70bc         pop {r4,r5,r6}
0810D82C: 02bc         pop {r1}
0810D82E: 0847         bx r1

; undefined FUN_08093360(void)
; entry 0x8093360  size 32 bytes

08093360: 10b5         push {r4,lr}
08093362: 041c         add r4,r0,#0x0
08093364: 616d         ldr r1,[r4,#0x54]
08093366: a26d         ldr r2,[r4,#0x58]
08093368: 01f024fa     bl 0x080947b4
0809336C: 011c         add r1,r0,#0x0
0809336E: 0029         cmp r1,#0x0
08093370: 03d1         bne 0x0809337a
08093372: 0820         mov r0,#0x8
08093374: 6073         strb r0,[r4,#0xd]
08093376: a173         strb r1,[r4,#0xe]
08093378: e173         strb r1,[r4,#0xf]
0809337A: 10bc         pop {r4}
0809337C: 01bc         pop {r0}
0809337E: 0047         bx r0

; undefined FUN_08093380(void)
; entry 0x8093380  size 32 bytes

08093380: 10b5         push {r4,lr}
08093382: 041c         add r4,r0,#0x0
08093384: 616d         ldr r1,[r4,#0x54]
08093386: a26d         ldr r2,[r4,#0x58]
08093388: 01f014fa     bl 0x080947b4
0809338C: 011c         add r1,r0,#0x0
0809338E: 0029         cmp r1,#0x0
08093390: 03d1         bne 0x0809339a
08093392: 0820         mov r0,#0x8
08093394: 6073         strb r0,[r4,#0xd]
08093396: a173         strb r1,[r4,#0xe]
08093398: e173         strb r1,[r4,#0xf]
0809339A: 10bc         pop {r4}
0809339C: 01bc         pop {r0}
0809339E: 0047         bx r0

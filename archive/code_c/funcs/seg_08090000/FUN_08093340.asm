; undefined FUN_08093340(void)
; entry 0x8093340  size 32 bytes

08093340: 10b5         push {r4,lr}
08093342: 041c         add r4,r0,#0x0
08093344: 616d         ldr r1,[r4,#0x54]
08093346: a26d         ldr r2,[r4,#0x58]
08093348: 01f034fa     bl 0x080947b4
0809334C: 011c         add r1,r0,#0x0
0809334E: 0029         cmp r1,#0x0
08093350: 03d1         bne 0x0809335a
08093352: 0820         mov r0,#0x8
08093354: 6073         strb r0,[r4,#0xd]
08093356: a173         strb r1,[r4,#0xe]
08093358: e173         strb r1,[r4,#0xf]
0809335A: 10bc         pop {r4}
0809335C: 01bc         pop {r0}
0809335E: 0047         bx r0

; undefined FUN_0809330c(void)
; entry 0x809330c  size 52 bytes

0809330C: 10b5         push {r4,lr}
0809330E: 041c         add r4,r0,#0x0
08093310: 01f012fe     bl 0x08094f38
08093314: 0028         cmp r0,#0x0
08093316: 04d0         beq 0x08093322
08093318: 0021         mov r1,#0x0
0809331A: 0320         mov r0,#0x3
0809331C: 6073         strb r0,[r4,#0xd]
0809331E: a173         strb r1,[r4,#0xe]
08093320: e173         strb r1,[r4,#0xf]
08093322: 616d         ldr r1,[r4,#0x54]
08093324: a26d         ldr r2,[r4,#0x58]
08093326: 201c         add r0,r4,#0x0
08093328: 01f044fa     bl 0x080947b4
0809332C: 011c         add r1,r0,#0x0
0809332E: 0029         cmp r1,#0x0
08093330: 03d1         bne 0x0809333a
08093332: 0820         mov r0,#0x8
08093334: 6073         strb r0,[r4,#0xd]
08093336: a173         strb r1,[r4,#0xe]
08093338: e173         strb r1,[r4,#0xf]
0809333A: 10bc         pop {r4}
0809333C: 01bc         pop {r0}
0809333E: 0047         bx r0

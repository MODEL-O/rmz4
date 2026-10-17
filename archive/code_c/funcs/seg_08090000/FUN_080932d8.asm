; undefined FUN_080932d8(void)
; entry 0x80932d8  size 52 bytes

080932D8: 10b5         push {r4,lr}
080932DA: 041c         add r4,r0,#0x0
080932DC: 01f02cfe     bl 0x08094f38
080932E0: 0028         cmp r0,#0x0
080932E2: 04d0         beq 0x080932ee
080932E4: 0021         mov r1,#0x0
080932E6: 0320         mov r0,#0x3
080932E8: 6073         strb r0,[r4,#0xd]
080932EA: a173         strb r1,[r4,#0xe]
080932EC: e173         strb r1,[r4,#0xf]
080932EE: 616d         ldr r1,[r4,#0x54]
080932F0: a26d         ldr r2,[r4,#0x58]
080932F2: 201c         add r0,r4,#0x0
080932F4: 01f05efa     bl 0x080947b4
080932F8: 011c         add r1,r0,#0x0
080932FA: 0029         cmp r1,#0x0
080932FC: 03d1         bne 0x08093306
080932FE: 0820         mov r0,#0x8
08093300: 6073         strb r0,[r4,#0xd]
08093302: a173         strb r1,[r4,#0xe]
08093304: e173         strb r1,[r4,#0xf]
08093306: 10bc         pop {r4}
08093308: 01bc         pop {r0}
0809330A: 0047         bx r0

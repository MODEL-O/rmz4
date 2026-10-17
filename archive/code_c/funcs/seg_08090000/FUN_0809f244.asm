; undefined FUN_0809f244(void)
; entry 0x809f244  size 48 bytes

0809F244: 10b5         push {r4,lr}
0809F246: 041c         add r4,r0,#0x0
0809F248: a07b         ldrb r0,[r4,#0xe]
0809F24A: 0028         cmp r0,#0x0
0809F24C: 06d1         bne 0x0809f25c
0809F24E: 0949         ldr r1,[0x0809f274]
0809F250: 201c         add r0,r4,#0x0
0809F252: 7df755fe     bl 0x0801cf00
0809F256: a07b         ldrb r0,[r4,#0xe]
0809F258: 0130         add r0,#0x1
0809F25A: a073         strb r0,[r4,#0xe]
0809F25C: a27c         ldrb r2,[r4,#0x12]
0809F25E: 111c         add r1,r2,#0x0
0809F260: 0029         cmp r1,#0x0
0809F262: 02d1         bne 0x0809f26a
0809F264: 0120         mov r0,#0x1
0809F266: 6073         strb r0,[r4,#0xd]
0809F268: a173         strb r1,[r4,#0xe]
0809F26A: 501e         sub r0,r2,#0x1
0809F26C: a074         strb r0,[r4,#0x12]
0809F26E: 10bc         pop {r4}
0809F270: 01bc         pop {r0}
0809F272: 0047         bx r0

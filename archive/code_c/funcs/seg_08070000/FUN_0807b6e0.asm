; undefined FUN_0807b6e0(void)
; entry 0x807b6e0  size 50 bytes

0807B6E0: 10b5         push {r4,lr}
0807B6E2: 041c         add r4,r0,#0x0
0807B6E4: 606d         ldr r0,[r4,#0x54]
0807B6E6: a16d         ldr r1,[r4,#0x58]
0807B6E8: 8cf724ff     bl 0x08008534
0807B6EC: 0949         ldr r1,[0x0807b714]
0807B6EE: 4018         add r0,r0,r1
0807B6F0: a065         str r0,[r4,#0x58]
0807B6F2: a07b         ldrb r0,[r4,#0xe]
0807B6F4: 0130         add r0,#0x1
0807B6F6: 0021         mov r1,#0x0
0807B6F8: a073         strb r0,[r4,#0xe]
0807B6FA: e173         strb r1,[r4,#0xf]
0807B6FC: 0649         ldr r1,[0x0807b718]
0807B6FE: 607b         ldrb r0,[r4,#0xd]
0807B700: 8000         lsl r0,r0,#0x2
0807B702: 4018         add r0,r0,r1
0807B704: 0168         ldr r1,[r0,#0x0]
0807B706: 201c         add r0,r4,#0x0
0807B708: adf03afc     bl 0x08128f80
0807B70C: 10bc         pop {r4}
0807B70E: 01bc         pop {r0}
0807B710: 0047         bx r0

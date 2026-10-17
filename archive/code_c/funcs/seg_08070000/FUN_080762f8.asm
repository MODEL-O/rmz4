; undefined FUN_080762f8(void)
; entry 0x80762f8  size 62 bytes

080762F8: 10b5         push {r4,lr}
080762FA: 041c         add r4,r0,#0x0
080762FC: a07b         ldrb r0,[r4,#0xe]
080762FE: 0028         cmp r0,#0x0
08076300: 0bd1         bne 0x0807631a
08076302: 0d49         ldr r1,[0x08076338]
08076304: 201c         add r0,r4,#0x0
08076306: a6f7fbfd     bl 0x0801cf00
0807630A: 201c         add r0,r4,#0x0
0807630C: 7430         add r0,#0x74
0807630E: 0b49         ldr r1,[0x0807633c]
08076310: 8ff738fa     bl 0x08005784
08076314: a07b         ldrb r0,[r4,#0xe]
08076316: 0130         add r0,#0x1
08076318: a073         strb r0,[r4,#0xe]
0807631A: 201c         add r0,r4,#0x0
0807631C: a6f768fe     bl 0x0801cff0
08076320: 201c         add r0,r4,#0x0
08076322: 7330         add r0,#0x73
08076324: 0178         ldrb r1,[r0,#0x0]
08076326: 0329         cmp r1,#0x3
08076328: 02d1         bne 0x08076330
0807632A: 0020         mov r0,#0x0
0807632C: 6173         strb r1,[r4,#0xd]
0807632E: a073         strb r0,[r4,#0xe]
08076330: 10bc         pop {r4}
08076332: 01bc         pop {r0}
08076334: 0047         bx r0

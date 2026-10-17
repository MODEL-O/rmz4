@ FUN_080118a4  entry 0x080118a4  size 94
.thumb
.org 0x118a4
FUN_080118a4:
	push {r4, r5, r6, lr}	@ 000118a4 70b5
.org 0x118a6
	adds r5, r0, #0	@ 000118a6 051c
.org 0x118a8
	ldr r3, [pc, #88]	@ 000118a8 164b
.org 0x118aa
	ldr r1, [pc, #92]	@ 000118aa 1749
.org 0x118ac
	ldr r0, [pc, #92]	@ 000118ac 1748
.org 0x118ae
	adds r1, r1, r0	@ 000118ae 0918
.org 0x118b0
	ldr r2, [r1, #0]	@ 000118b0 0a68
.org 0x118b2
	ldr r0, [pc, #92]	@ 000118b2 1748
.org 0x118b4
	muls r0, r2	@ 000118b4 5043
.org 0x118b6
	ldr r2, [pc, #92]	@ 000118b6 174a
.org 0x118b8
	adds r0, r0, r2	@ 000118b8 8018
.org 0x118ba
	str r0, [r1, #0]	@ 000118ba 0860
.org 0x118bc
	lsrs r0, r0, #16	@ 000118bc 000c
.org 0x118be
	movs r1, #31	@ 000118be 1f21
.org 0x118c0
	ands r0, r1	@ 000118c0 0840
.org 0x118c2
	lsls r0, r0, #1	@ 000118c2 4000
.org 0x118c4
	adds r0, r0, r3	@ 000118c4 c018
.org 0x118c6
	ldrh r1, [r0, #0]	@ 000118c6 0188
.org 0x118c8
	adds r0, r5, #0	@ 000118c8 281c
.org 0x118ca
	adds r0, #104	@ 000118ca 6830
.org 0x118cc
	movs r6, #0	@ 000118cc 0026
.org 0x118ce
	strh r1, [r0, #0]	@ 000118ce 0180
.org 0x118d0
	ldr r4, [pc, #68]	@ 000118d0 114c
.org 0x118d2
	ldr r0, [r4, #0]	@ 000118d2 2068
.org 0x118d4
	ldr r1, [pc, #68]	@ 000118d4 1149
.org 0x118d6
	adds r0, r0, r1	@ 000118d6 4018
.org 0x118d8
	movs r1, #128	@ 000118d8 8021
.org 0x118da
	lsls r1, r1, #7	@ 000118da c901
.org 0x118dc
	bl 0x1ea4	@ 000118dc f0f7e2fa
.org 0x118e0
	ldr r0, [r4, #0]	@ 000118e0 2068
.org 0x118e2
	ldr r2, [pc, #60]	@ 000118e2 0f4a
.org 0x118e4
	adds r0, r0, r2	@ 000118e4 8018
.org 0x118e6
	movs r1, #0	@ 000118e6 0021
.org 0x118e8
	bl 0x2208	@ 000118e8 f0f78efc
.org 0x118ec
	adds r5, #106	@ 000118ec 6a35
.org 0x118ee
	strh r6, [r5, #0]	@ 000118ee 2e80
.org 0x118f0
	ldr r1, [pc, #48]	@ 000118f0 0c49
.org 0x118f2
	ldr r0, [pc, #52]	@ 000118f2 0d48
.org 0x118f4
	adds r1, r1, r0	@ 000118f4 0918
.org 0x118f6
	ldrb r0, [r1, #0]	@ 000118f6 0878
.org 0x118f8
	adds r0, #1	@ 000118f8 0130
.org 0x118fa
	strb r0, [r1, #0]	@ 000118fa 0870
.org 0x118fc
	pop {r4, r5, r6}	@ 000118fc 70bc
.org 0x118fe
	pop {r0}	@ 000118fe 01bc
.org 0x11900
	bx r0	@ 00011900 0047

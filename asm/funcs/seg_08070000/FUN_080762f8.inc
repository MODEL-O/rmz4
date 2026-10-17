@ FUN_080762f8  entry 0x080762f8  size 62
.thumb
.org 0x762f8
FUN_080762f8:
	push {r4, lr}	@ 000762f8 10b5
.org 0x762fa
	adds r4, r0, #0	@ 000762fa 041c
.org 0x762fc
	ldrb r0, [r4, #14]	@ 000762fc a07b
.org 0x762fe
	cmp r0, #0	@ 000762fe 0028
.org 0x76300
	bne.n 0x7631a	@ 00076300 0bd1
.org 0x76302
	ldr r1, [pc, #52]	@ 00076302 0d49
.org 0x76304
	adds r0, r4, #0	@ 00076304 201c
.org 0x76306
	bl 0x1cf00	@ 00076306 a6f7fbfd
.org 0x7630a
	adds r0, r4, #0	@ 0007630a 201c
.org 0x7630c
	adds r0, #116	@ 0007630c 7430
.org 0x7630e
	ldr r1, [pc, #44]	@ 0007630e 0b49
.org 0x76310
	bl 0x5784	@ 00076310 8ff738fa
.org 0x76314
	ldrb r0, [r4, #14]	@ 00076314 a07b
.org 0x76316
	adds r0, #1	@ 00076316 0130
.org 0x76318
	strb r0, [r4, #14]	@ 00076318 a073
.org 0x7631a
	adds r0, r4, #0	@ 0007631a 201c
.org 0x7631c
	bl 0x1cff0	@ 0007631c a6f768fe
.org 0x76320
	adds r0, r4, #0	@ 00076320 201c
.org 0x76322
	adds r0, #115	@ 00076322 7330
.org 0x76324
	ldrb r1, [r0, #0]	@ 00076324 0178
.org 0x76326
	cmp r1, #3	@ 00076326 0329
.org 0x76328
	bne.n 0x76330	@ 00076328 02d1
.org 0x7632a
	movs r0, #0	@ 0007632a 0020
.org 0x7632c
	strb r1, [r4, #13]	@ 0007632c 6173
.org 0x7632e
	strb r0, [r4, #14]	@ 0007632e a073
.org 0x76330
	pop {r4}	@ 00076330 10bc
.org 0x76332
	pop {r0}	@ 00076332 01bc
.org 0x76334
	bx r0	@ 00076334 0047

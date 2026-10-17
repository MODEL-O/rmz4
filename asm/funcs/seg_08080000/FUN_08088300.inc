@ FUN_08088300  entry 0x08088300  size 118
.thumb
.org 0x88300
FUN_08088300:
	push {r4, lr}	@ 00088300 10b5
.org 0x88302
	adds r4, r0, #0	@ 00088302 041c
.org 0x88304
	ldrb r0, [r4, #15]	@ 00088304 e07b
.org 0x88306
	cmp r0, #0	@ 00088306 0028
.org 0x88308
	bne.n 0x88360	@ 00088308 2ad1
.org 0x8830a
	adds r0, r4, #0	@ 0008830a 201c
.org 0x8830c
	adds r0, #116	@ 0008830c 7430
.org 0x8830e
	ldr r1, [pc, #32]	@ 0008830e 0849
.org 0x88310
	bl 0x5784	@ 00088310 7df738fa
.org 0x88314
	ldr r1, [pc, #28]	@ 00088314 0749
.org 0x88316
	adds r0, r4, #0	@ 00088316 201c
.org 0x88318
	bl 0x1cf00	@ 00088318 94f7f2fd
.org 0x8831c
	ldrb r2, [r4, #10]	@ 0008831c a27a
.org 0x8831e
	lsrs r0, r2, #4	@ 0008831e 1009
.org 0x88320
	movs r1, #1	@ 00088320 0121
.org 0x88322
	bics r1, r0	@ 00088322 8143
.org 0x88324
	cmp r1, #0	@ 00088324 0029
.org 0x88326
	beq.n 0x88338	@ 00088326 07d0
.org 0x88328
	movs r0, #16	@ 00088328 1020
.org 0x8832a
	orrs r0, r2	@ 0008832a 1043
.org 0x8832c
	b.n 0x8833c	@ 0008832c 06e0
.org 0x8832e
	.byte 0x00	@ 0008832e data
.org 0x8832f
	.byte 0x00	@ 0008832f data
.org 0x88330
	.byte 0x34,0xf0,0x85,0x08	@ 00088330 data
.org 0x88334
	.byte 0x0e,0x1d,0x00,0x00	@ 00088334 data
.org 0x88338
	movs r0, #239	@ 00088338 ef20
.org 0x8833a
	ands r0, r2	@ 0008833a 1040
.org 0x8833c
	strb r0, [r4, #10]	@ 0008833c a072
.org 0x8833e
	adds r0, r4, #0	@ 0008833e 201c
.org 0x88340
	adds r0, #76	@ 00088340 4c30
.org 0x88342
	strb r1, [r0, #0]	@ 00088342 0170
.org 0x88344
	adds r3, r4, #0	@ 00088344 231c
.org 0x88346
	adds r3, #74	@ 00088346 4a33
.org 0x88348
	lsls r1, r1, #4	@ 00088348 0901
.org 0x8834a
	ldrb r2, [r3, #0]	@ 0008834a 1a78
.org 0x8834c
	movs r0, #17	@ 0008834c 1120
.org 0x8834e
	negs r0, r0	@ 0008834e 4042
.org 0x88350
	ands r0, r2	@ 00088350 1040
.org 0x88352
	orrs r0, r1	@ 00088352 0843
.org 0x88354
	strb r0, [r3, #0]	@ 00088354 1870
.org 0x88356
	movs r0, #8	@ 00088356 0820
.org 0x88358
	strb r0, [r4, #18]	@ 00088358 a074
.org 0x8835a
	ldrb r0, [r4, #15]	@ 0008835a e07b
.org 0x8835c
	adds r0, #1	@ 0008835c 0130
.org 0x8835e
	strb r0, [r4, #15]	@ 0008835e e073
.org 0x88360
	adds r0, r4, #0	@ 00088360 201c
.org 0x88362
	bl 0x1cff0	@ 00088362 94f745fe
.org 0x88366
	ldrb r0, [r4, #18]	@ 00088366 a07c
.org 0x88368
	subs r0, #1	@ 00088368 0138
.org 0x8836a
	strb r0, [r4, #18]	@ 0008836a a074
.org 0x8836c
	lsls r0, r0, #24	@ 0008836c 0006
.org 0x8836e
	lsrs r1, r0, #24	@ 0008836e 010e
.org 0x88370
	cmp r1, #0	@ 00088370 0029
.org 0x88372
	bne.n 0x8837a	@ 00088372 02d1
.org 0x88374
	movs r0, #1	@ 00088374 0120

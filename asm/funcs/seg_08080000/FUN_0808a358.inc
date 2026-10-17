@ FUN_0808a358  entry 0x0808a358  size 210
.thumb
.org 0x8a358
FUN_0808a358:
	push {r4, r5, r6, lr}	@ 0008a358 70b5
.org 0x8a35a
	adds r4, r0, #0	@ 0008a35a 041c
.org 0x8a35c
	ldrb r0, [r4, #10]	@ 0008a35c a07a
.org 0x8a35e
	lsrs r6, r0, #4	@ 0008a35e 0609
.org 0x8a360
	movs r0, #1	@ 0008a360 0120
.org 0x8a362
	ands r6, r0	@ 0008a362 0640
.org 0x8a364
	ldrb r5, [r4, #14]	@ 0008a364 a57b
.org 0x8a366
	cmp r5, #1	@ 0008a366 012d
.org 0x8a368
	beq.n 0x8a3a6	@ 0008a368 1dd0
.org 0x8a36a
	cmp r5, #1	@ 0008a36a 012d
.org 0x8a36c
	bgt.n 0x8a374	@ 0008a36c 02dc
.org 0x8a36e
	cmp r5, #0	@ 0008a36e 002d
.org 0x8a370
	beq.n 0x8a37e	@ 0008a370 05d0
.org 0x8a372
	b.n 0x8a436	@ 0008a372 60e0
.org 0x8a374
	cmp r5, #2	@ 0008a374 022d
.org 0x8a376
	beq.n 0x8a3d0	@ 0008a376 2bd0
.org 0x8a378
	cmp r5, #3	@ 0008a378 032d
.org 0x8a37a
	beq.n 0x8a418	@ 0008a37a 4dd0
.org 0x8a37c
	b.n 0x8a436	@ 0008a37c 5be0
.org 0x8a37e
	ldr r1, [pc, #68]	@ 0008a37e 1149
.org 0x8a380
	adds r0, r4, #0	@ 0008a380 201c
.org 0x8a382
	bl 0x1cf00	@ 0008a382 92f7bdfd
.org 0x8a386
	adds r0, r4, #0	@ 0008a386 201c
.org 0x8a388
	adds r0, #116	@ 0008a388 7430
.org 0x8a38a
	ldr r1, [pc, #60]	@ 0008a38a 0f49
.org 0x8a38c
	ldrb r2, [r1, #2]	@ 0008a38c 8a78
.org 0x8a38e
	lsls r1, r2, #1	@ 0008a38e 5100
.org 0x8a390
	adds r1, r1, r2	@ 0008a390 8918
.org 0x8a392
	lsls r1, r1, #3	@ 0008a392 c900
.org 0x8a394
	ldr r2, [pc, #52]	@ 0008a394 0d4a
.org 0x8a396
	adds r1, r1, r2	@ 0008a396 8918
.org 0x8a398
	bl 0x5784	@ 0008a398 7bf7f4f9
.org 0x8a39c
	str r5, [r4, #96]	@ 0008a39c 2566
.org 0x8a39e
	str r5, [r4, #92]	@ 0008a39e e565
.org 0x8a3a0
	ldrb r0, [r4, #14]	@ 0008a3a0 a07b
.org 0x8a3a2
	adds r0, #1	@ 0008a3a2 0130
.org 0x8a3a4
	strb r0, [r4, #14]	@ 0008a3a4 a073
.org 0x8a3a6
	adds r0, r4, #0	@ 0008a3a6 201c
.org 0x8a3a8
	bl 0x1cff0	@ 0008a3a8 92f722fe
.org 0x8a3ac
	adds r0, r4, #0	@ 0008a3ac 201c
.org 0x8a3ae
	bl 0x8b1a4	@ 0008a3ae 00f0f9fe
.org 0x8a3b2
	adds r0, r4, #0	@ 0008a3b2 201c
.org 0x8a3b4
	adds r0, #115	@ 0008a3b4 7330
.org 0x8a3b6
	ldrb r0, [r0, #0]	@ 0008a3b6 0078
.org 0x8a3b8
	cmp r0, #3	@ 0008a3b8 0328
.org 0x8a3ba
	bne.n 0x8a436	@ 0008a3ba 3cd1
.org 0x8a3bc
	ldrb r0, [r4, #14]	@ 0008a3bc a07b
.org 0x8a3be
	adds r0, #1	@ 0008a3be 0130
.org 0x8a3c0
	strb r0, [r4, #14]	@ 0008a3c0 a073
.org 0x8a3c2
	b.n 0x8a436	@ 0008a3c2 38e0
.org 0x8a3c4
	.byte 0x02,0x20,0x00,0x00	@ 0008a3c4 data
.org 0x8a3c8
	.byte 0x1c,0xf5,0x85,0x08	@ 0008a3c8 data
.org 0x8a3cc
	.byte 0xcc,0xf3,0x85,0x08	@ 0008a3cc data
.org 0x8a3d0
	ldr r1, [pc, #24]	@ 0008a3d0 0649
.org 0x8a3d2
	adds r0, r4, #0	@ 0008a3d2 201c
.org 0x8a3d4
	bl 0x1cf00	@ 0008a3d4 92f794fd
.org 0x8a3d8
	movs r0, #1	@ 0008a3d8 0120
.org 0x8a3da
	adds r2, r0, #0	@ 0008a3da 021c
.org 0x8a3dc
	eors r2, r6	@ 0008a3dc 7240
.org 0x8a3de
	cmp r2, #0	@ 0008a3de 002a
.org 0x8a3e0
	beq.n 0x8a3f0	@ 0008a3e0 06d0
.org 0x8a3e2
	ldrb r1, [r4, #10]	@ 0008a3e2 a17a
.org 0x8a3e4
	movs r0, #16	@ 0008a3e4 1020
.org 0x8a3e6
	orrs r0, r1	@ 0008a3e6 0843
.org 0x8a3e8
	b.n 0x8a3f6	@ 0008a3e8 05e0
.org 0x8a3ea
	.byte 0x00	@ 0008a3ea data
.org 0x8a3eb
	.byte 0x00	@ 0008a3eb data
.org 0x8a3ec
	.byte 0x03,0x20,0x00,0x00	@ 0008a3ec data
.org 0x8a3f0
	ldrb r1, [r4, #10]	@ 0008a3f0 a17a
.org 0x8a3f2
	movs r0, #239	@ 0008a3f2 ef20
.org 0x8a3f4
	ands r0, r1	@ 0008a3f4 0840
.org 0x8a3f6
	strb r0, [r4, #10]	@ 0008a3f6 a072
.org 0x8a3f8
	adds r1, r2, #0	@ 0008a3f8 111c
.org 0x8a3fa
	adds r0, r4, #0	@ 0008a3fa 201c
.org 0x8a3fc
	adds r0, #76	@ 0008a3fc 4c30
.org 0x8a3fe
	strb r1, [r0, #0]	@ 0008a3fe 0170
.org 0x8a400
	adds r3, r4, #0	@ 0008a400 231c
.org 0x8a402
	adds r3, #74	@ 0008a402 4a33
.org 0x8a404
	lsls r1, r1, #4	@ 0008a404 0901
.org 0x8a406
	ldrb r2, [r3, #0]	@ 0008a406 1a78
.org 0x8a408
	movs r0, #17	@ 0008a408 1120
.org 0x8a40a
	negs r0, r0	@ 0008a40a 4042
.org 0x8a40c
	ands r0, r2	@ 0008a40c 1040
.org 0x8a40e
	orrs r0, r1	@ 0008a40e 0843
.org 0x8a410
	strb r0, [r3, #0]	@ 0008a410 1870
.org 0x8a412
	ldrb r0, [r4, #14]	@ 0008a412 a07b
.org 0x8a414
	adds r0, #1	@ 0008a414 0130
.org 0x8a416
	strb r0, [r4, #14]	@ 0008a416 a073
.org 0x8a418
	adds r0, r4, #0	@ 0008a418 201c
.org 0x8a41a
	bl 0x1cff0	@ 0008a41a 92f7e9fd
.org 0x8a41e
	adds r0, r4, #0	@ 0008a41e 201c
.org 0x8a420
	bl 0x8b1a4	@ 0008a420 00f0c0fe
.org 0x8a424
	adds r0, r4, #0	@ 0008a424 201c
.org 0x8a426
	adds r0, #115	@ 0008a426 7330
.org 0x8a428
	ldrb r0, [r0, #0]	@ 0008a428 0078

@ FUN_080da29c  entry 0x080da29c  size 394
.thumb
.org 0xda29c
FUN_080da29c:
	push {r4, r5, r6, r7, lr}	@ 000da29c f0b5
.org 0xda29e
	mov r7, r8	@ 000da29e 4746
.org 0xda2a0
	push {r7}	@ 000da2a0 80b4
.org 0xda2a2
	adds r7, r0, #0	@ 000da2a2 071c
.org 0xda2a4
	ldrb r0, [r7, #18]	@ 000da2a4 b87c
.org 0xda2a6
	subs r0, #1	@ 000da2a6 0138
.org 0xda2a8
	strb r0, [r7, #18]	@ 000da2a8 b874
.org 0xda2aa
	lsls r0, r0, #24	@ 000da2aa 0006
.org 0xda2ac
	cmp r0, #0	@ 000da2ac 0028
.org 0xda2ae
	beq.n 0xda2d0	@ 000da2ae 0fd0
.org 0xda2b0
	ldr r0, [r7, #84]	@ 000da2b0 786d
.org 0xda2b2
	ldr r1, [r7, #88]	@ 000da2b2 b96d
.org 0xda2b4
	bl 0x7c7c	@ 000da2b4 2df7e2fc
.org 0xda2b8
	lsls r0, r0, #16	@ 000da2b8 0004
.org 0xda2ba
	lsrs r1, r0, #16	@ 000da2ba 010c
.org 0xda2bc
	cmp r1, #0	@ 000da2bc 0029
.org 0xda2be
	beq.n 0xda2f4	@ 000da2be 19d0
.org 0xda2c0
	movs r0, #128	@ 000da2c0 8020
.org 0xda2c2
	lsls r0, r0, #8	@ 000da2c2 0002
.org 0xda2c4
	ands r0, r1	@ 000da2c4 0840
.org 0xda2c6
	cmp r0, #0	@ 000da2c6 0028
.org 0xda2c8
	bne.n 0xda2f4	@ 000da2c8 14d1
.org 0xda2ca
	ldr r0, [r7, #96]	@ 000da2ca 386e
.org 0xda2cc
	cmp r0, #0	@ 000da2cc 0028
.org 0xda2ce
	ble.n 0xda2f4	@ 000da2ce 11dd
.org 0xda2d0
	adds r1, r7, #0	@ 000da2d0 391c
.org 0xda2d2
	adds r1, #84	@ 000da2d2 5431
.org 0xda2d4
	movs r0, #2	@ 000da2d4 0220
.org 0xda2d6
	bl 0xd0c88	@ 000da2d6 f6f7d7fc
.org 0xda2da
	ldr r1, [pc, #20]	@ 000da2da 0549
.org 0xda2dc
	ldrb r0, [r7, #9]	@ 000da2dc 787a
.org 0xda2de
	lsls r0, r0, #2	@ 000da2de 8000
.org 0xda2e0
	adds r0, r0, r1	@ 000da2e0 4018
.org 0xda2e2
	movs r1, #2	@ 000da2e2 0221
.org 0xda2e4
	str r1, [r7, #12]	@ 000da2e4 f960
.org 0xda2e6
	ldr r0, [r0, #0]	@ 000da2e6 0068
.org 0xda2e8
	ldr r0, [r0, #8]	@ 000da2e8 8068
.org 0xda2ea
	str r0, [r7, #20]	@ 000da2ea 7861
.org 0xda2ec
	b.n 0xda446	@ 000da2ec abe0
.org 0xda2ee
	.byte 0x00	@ 000da2ee data
.org 0xda2ef
	.byte 0x00	@ 000da2ef data
.org 0xda2f0
	.byte 0x64,0x6f,0x86,0x08	@ 000da2f0 data
.org 0xda2f4
	ldrb r0, [r7, #14]	@ 000da2f4 b87b
.org 0xda2f6
	cmp r0, #0	@ 000da2f6 0028
.org 0xda2f8
	beq.n 0xda300	@ 000da2f8 02d0
.org 0xda2fa
	cmp r0, #1	@ 000da2fa 0128
.org 0xda2fc
	beq.n 0xda3ee	@ 000da2fc 77d0
.org 0xda2fe
	b.n 0xda446	@ 000da2fe a2e0
.org 0xda300
	ldrb r0, [r7, #16]	@ 000da300 387c
.org 0xda302
	cmp r0, #0	@ 000da302 0028
.org 0xda304
	beq.n 0xda382	@ 000da304 3dd0
.org 0xda306
	ldr r4, [pc, #100]	@ 000da306 194c
.org 0xda308
	ldr r0, [r7, #116]	@ 000da308 786f
.org 0xda30a
	mov r8, r0	@ 000da30a 8046
.org 0xda30c
	movs r1, #3	@ 000da30c 0321
.org 0xda30e
	bl 0x129050	@ 000da30e 4ef09ffe
.org 0xda312
	lsls r0, r0, #2	@ 000da312 8000
.org 0xda314
	adds r0, r0, r4	@ 000da314 0019
.org 0xda316
	ldr r0, [r0, #0]	@ 000da316 0068
.org 0xda318
	ldr r2, [r7, #120]	@ 000da318 ba6f
.org 0xda31a
	lsls r2, r2, #3	@ 000da31a d200
.org 0xda31c
	adds r2, r2, r0	@ 000da31c 1218
.org 0xda31e
	ldr r1, [pc, #80]	@ 000da31e 1449
.org 0xda320
	ldr r0, [r1, #0]	@ 000da320 0868
.org 0xda322
	ldr r3, [pc, #80]	@ 000da322 144b
.org 0xda324
	mov ip, r3	@ 000da324 9c46
.org 0xda326
	mov r1, ip	@ 000da326 6146
.org 0xda328
	muls r1, r0	@ 000da328 4143
.org 0xda32a
	ldr r5, [pc, #76]	@ 000da32a 134d
.org 0xda32c
	adds r1, r1, r5	@ 000da32c 4919
.org 0xda32e
	lsls r1, r1, #1	@ 000da32e 4900
.org 0xda330
	lsrs r4, r1, #1	@ 000da330 4c08
.org 0xda332
	ldr r0, [pc, #60]	@ 000da332 0f48
.org 0xda334
	str r4, [r0, #0]	@ 000da334 0460
.org 0xda336
	lsrs r1, r1, #17	@ 000da336 490c
.org 0xda338
	movs r0, #31	@ 000da338 1f20
.org 0xda33a
	ands r1, r0	@ 000da33a 0140
.org 0xda33c
	ldr r0, [r2, #4]	@ 000da33c 5068
.org 0xda33e
	adds r0, r0, r1	@ 000da33e 4018
.org 0xda340
	str r0, [r7, #96]	@ 000da340 3866
.org 0xda342
	ldr r6, [r2, #0]	@ 000da342 1668
.org 0xda344
	mov r0, ip	@ 000da344 6046
.org 0xda346
	muls r0, r4	@ 000da346 6043
.org 0xda348
	adds r0, r0, r5	@ 000da348 4019
.org 0xda34a
	lsls r0, r0, #1	@ 000da34a 4000
.org 0xda34c
	lsrs r1, r0, #1	@ 000da34c 4108
.org 0xda34e
	ldr r2, [pc, #32]	@ 000da34e 084a
.org 0xda350
	str r1, [r2, #0]	@ 000da350 1160
.org 0xda352
	lsrs r2, r0, #17	@ 000da352 420c
.org 0xda354
	movs r0, #63	@ 000da354 3f20
.org 0xda356
	ands r2, r0	@ 000da356 0240
.org 0xda358
	ldrb r1, [r7, #10]	@ 000da358 b97a
.org 0xda35a
	movs r0, #16	@ 000da35a 1020
.org 0xda35c
	ands r0, r1	@ 000da35c 0840
.org 0xda35e
	mov r1, r8	@ 000da35e 4146
.org 0xda360
	cmp r0, #0	@ 000da360 0028
.org 0xda362
	bne.n 0xda37c	@ 000da362 0bd1
.org 0xda364
	negs r0, r6	@ 000da364 7042
.org 0xda366
	subs r0, r0, r2	@ 000da366 801a
.org 0xda368
	b.n 0xda37e	@ 000da368 09e0
.org 0xda36a
	.byte 0x00	@ 000da36a data
.org 0xda36b
	.byte 0x00	@ 000da36b data
.org 0xda36c
	.byte 0x6c,0x84,0x86,0x08	@ 000da36c data
.org 0xda370
	.byte 0x38,0xdc,0x02,0x02	@ 000da370 data
.org 0xda374
	.byte 0xfd,0x43,0x03,0x00	@ 000da374 data
.org 0xda378
	.byte 0xc3,0x9e,0x26,0x00	@ 000da378 data
.org 0xda37c
	subs r0, r6, r2	@ 000da37c b01a
.org 0xda37e
	str r0, [r7, #92]	@ 000da37e f865
.org 0xda380
	b.n 0xda3da	@ 000da380 2be0
.org 0xda382
	ldr r4, [pc, #132]	@ 000da382 214c
.org 0xda384
	ldr r3, [r7, #116]	@ 000da384 7b6f
.org 0xda386
	mov r8, r3	@ 000da386 9846
.org 0xda388
	mov r0, r8	@ 000da388 4046
.org 0xda38a
	movs r1, #3	@ 000da38a 0321
.org 0xda38c
	bl 0x129050	@ 000da38c 4ef060fe
.org 0xda390
	lsls r0, r0, #2	@ 000da390 8000
.org 0xda392
	adds r0, r0, r4	@ 000da392 0019
.org 0xda394
	ldr r0, [r0, #0]	@ 000da394 0068
.org 0xda396
	ldr r2, [r7, #120]	@ 000da396 ba6f
.org 0xda398
	lsls r2, r2, #3	@ 000da398 d200
.org 0xda39a
	adds r2, r2, r0	@ 000da39a 1218
.org 0xda39c
	ldr r1, [pc, #108]	@ 000da39c 1b49
.org 0xda39e
	ldr r0, [r1, #0]	@ 000da39e 0868
.org 0xda3a0
	ldr r3, [pc, #108]	@ 000da3a0 1b4b
.org 0xda3a2
	adds r1, r0, #0	@ 000da3a2 011c
.org 0xda3a4
	muls r1, r3	@ 000da3a4 5943
.org 0xda3a6
	ldr r5, [pc, #108]	@ 000da3a6 1b4d
.org 0xda3a8
	adds r1, r1, r5	@ 000da3a8 4919
.org 0xda3aa
	lsls r1, r1, #1	@ 000da3aa 4900
.org 0xda3ac
	lsrs r4, r1, #1	@ 000da3ac 4c08
.org 0xda3ae
	ldr r0, [pc, #92]	@ 000da3ae 1748
.org 0xda3b0
	str r4, [r0, #0]	@ 000da3b0 0460
.org 0xda3b2
	lsrs r1, r1, #17	@ 000da3b2 490c
.org 0xda3b4
	movs r0, #31	@ 000da3b4 1f20
.org 0xda3b6
	ands r1, r0	@ 000da3b6 0140
.org 0xda3b8
	ldr r0, [r2, #4]	@ 000da3b8 5068
.org 0xda3ba
	adds r0, r0, r1	@ 000da3ba 4018
.org 0xda3bc
	str r0, [r7, #96]	@ 000da3bc 3866
.org 0xda3be
	adds r1, r4, #0	@ 000da3be 211c
.org 0xda3c0
	muls r1, r3	@ 000da3c0 5943
.org 0xda3c2
	adds r1, r1, r5	@ 000da3c2 4919
.org 0xda3c4
	lsls r1, r1, #1	@ 000da3c4 4900
.org 0xda3c6
	lsrs r0, r1, #1	@ 000da3c6 4808
.org 0xda3c8
	ldr r3, [pc, #64]	@ 000da3c8 104b
.org 0xda3ca
	str r0, [r3, #0]	@ 000da3ca 1860
.org 0xda3cc
	lsrs r1, r1, #17	@ 000da3cc 490c
.org 0xda3ce
	movs r0, #63	@ 000da3ce 3f20
.org 0xda3d0
	ands r1, r0	@ 000da3d0 0140
.org 0xda3d2
	ldr r0, [r2, #0]	@ 000da3d2 1068
.org 0xda3d4
	subs r0, r0, r1	@ 000da3d4 401a
.org 0xda3d6
	str r0, [r7, #92]	@ 000da3d6 f865
.org 0xda3d8
	mov r1, r8	@ 000da3d8 4146
.org 0xda3da
	lsls r1, r1, #16	@ 000da3da 0904
.org 0xda3dc
	lsrs r1, r1, #16	@ 000da3dc 090c
.org 0xda3de
	adds r0, r7, #0	@ 000da3de 381c
.org 0xda3e0
	bl 0x1cf00	@ 000da3e0 42f78efd
.org 0xda3e4
	movs r0, #0	@ 000da3e4 0020
.org 0xda3e6
	strb r0, [r7, #19]	@ 000da3e6 f874
.org 0xda3e8
	ldrb r0, [r7, #14]	@ 000da3e8 b87b
.org 0xda3ea
	adds r0, #1	@ 000da3ea 0130
.org 0xda3ec
	strb r0, [r7, #14]	@ 000da3ec b873
.org 0xda3ee
	ldrb r0, [r7, #19]	@ 000da3ee f87c
.org 0xda3f0
	adds r0, #1	@ 000da3f0 0130
.org 0xda3f2
	strb r0, [r7, #19]	@ 000da3f2 f874
.org 0xda3f4
	movs r1, #255	@ 000da3f4 ff21
.org 0xda3f6
	ands r0, r1	@ 000da3f6 0840
.org 0xda3f8
	movs r1, #1	@ 000da3f8 0121
.org 0xda3fa
	ands r0, r1	@ 000da3fa 0840
.org 0xda3fc
	cmp r0, #0	@ 000da3fc 0028
.org 0xda3fe
	beq.n 0xda418	@ 000da3fe 0bd0
.org 0xda400
	ldrb r0, [r7, #10]	@ 000da400 b87a
.org 0xda402
	orrs r0, r1	@ 000da402 0843
.org 0xda404
	b.n 0xda41e	@ 000da404 0be0
.org 0xda406
	.byte 0x00	@ 000da406 data
.org 0xda407
	.byte 0x00	@ 000da407 data
.org 0xda408
	.byte 0x00,0x84,0x86,0x08	@ 000da408 data
.org 0xda40c
	.byte 0x38,0xdc,0x02,0x02	@ 000da40c data
.org 0xda410
	.byte 0xfd,0x43,0x03,0x00	@ 000da410 data
.org 0xda414
	.byte 0xc3,0x9e,0x26,0x00	@ 000da414 data
.org 0xda418
	ldrb r1, [r7, #10]	@ 000da418 b97a
.org 0xda41a
	movs r0, #254	@ 000da41a fe20
.org 0xda41c
	ands r0, r1	@ 000da41c 0840
.org 0xda41e
	strb r0, [r7, #10]	@ 000da41e b872
.org 0xda420
	ldr r0, [r7, #96]	@ 000da420 386e
.org 0xda422
	adds r0, #32	@ 000da422 2030
.org 0xda424
	str r0, [r7, #96]	@ 000da424 3866

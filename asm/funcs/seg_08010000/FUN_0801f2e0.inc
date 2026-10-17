@ FUN_0801f2e0  entry 0x0801f2e0  size 340
.thumb
.org 0x1f2e0
FUN_0801f2e0:
	push {r4, r5, r6, r7, lr}	@ 0001f2e0 f0b5
.org 0x1f2e2
	mov r7, sl	@ 0001f2e2 5746
.org 0x1f2e4
	mov r6, r9	@ 0001f2e4 4e46
.org 0x1f2e6
	mov r5, r8	@ 0001f2e6 4546
.org 0x1f2e8
	push {r5, r6, r7}	@ 0001f2e8 e0b4
.org 0x1f2ea
	sub sp, #8	@ 0001f2ea 82b0
.org 0x1f2ec
	lsls r0, r0, #24	@ 0001f2ec 0006
.org 0x1f2ee
	lsrs r0, r0, #24	@ 0001f2ee 000e
.org 0x1f2f0
	str r0, [sp, #0]	@ 0001f2f0 0090
.org 0x1f2f2
	movs r7, #0	@ 0001f2f2 0027
.org 0x1f2f4
	movs r0, #0	@ 0001f2f4 0020
.org 0x1f2f6
	mov r8, r0	@ 0001f2f6 8046
.org 0x1f2f8
	ldr r1, [sp, #0]	@ 0001f2f8 0099
.org 0x1f2fa
	cmp r1, #0	@ 0001f2fa 0029
.org 0x1f2fc
	beq.n 0x1f300	@ 0001f2fc 00d0
.org 0x1f2fe
	b.n 0x1f43c	@ 0001f2fe 9de0
.org 0x1f300
	ldr r2, [pc, #60]	@ 0001f300 0f4a
.org 0x1f302
	ldr r0, [r2, #12]	@ 0001f302 d068
.org 0x1f304
	adds r0, #1	@ 0001f304 0130
.org 0x1f306
	str r0, [r2, #12]	@ 0001f306 d060
.org 0x1f308
	adds r0, r2, #0	@ 0001f308 101c
.org 0x1f30a
	adds r0, #232	@ 0001f30a e830
.org 0x1f30c
	movs r1, #24	@ 0001f30c 1821
.org 0x1f30e
	ldrsb r1, [r0, r1]	@ 0001f30e 4156
.org 0x1f310
	negs r0, r1	@ 0001f310 4842
.org 0x1f312
	orrs r0, r1	@ 0001f312 0843
.org 0x1f314
	lsrs r0, r0, #31	@ 0001f314 c00f
.org 0x1f316
	str r0, [sp, #4]	@ 0001f316 0190
.org 0x1f318
	adds r6, r2, #0	@ 0001f318 161c
.org 0x1f31a
	adds r0, r6, #0	@ 0001f31a 301c
.org 0x1f31c
	bl 0x1f748	@ 0001f31c 00f014fa
.org 0x1f320
	cmp r0, #0	@ 0001f320 0028
.org 0x1f322
	bne.n 0x1f368	@ 0001f322 21d1
.org 0x1f324
	ldrb r1, [r6, #18]	@ 0001f324 b17c
.org 0x1f326
	movs r0, #1	@ 0001f326 0120
.org 0x1f328
	ands r0, r1	@ 0001f328 0840
.org 0x1f32a
	cmp r0, #0	@ 0001f32a 0028
.org 0x1f32c
	bne.n 0x1f364	@ 0001f32c 1ad1
.org 0x1f32e
	ldr r0, [pc, #20]	@ 0001f32e 0548
.org 0x1f330
	ldrb r1, [r0, #4]	@ 0001f330 0179
.org 0x1f332
	movs r0, #32	@ 0001f332 2020
.org 0x1f334
	ands r0, r1	@ 0001f334 0840
.org 0x1f336
	cmp r0, #0	@ 0001f336 0028
.org 0x1f338
	beq.n 0x1f34c	@ 0001f338 08d0
.org 0x1f33a
	ldr r0, [pc, #12]	@ 0001f33a 0348
.org 0x1f33c
	b.n 0x1f34e	@ 0001f33c 07e0
.org 0x1f33e
	.byte 0x00	@ 0001f33e data
.org 0x1f33f
	.byte 0x00	@ 0001f33f data
.org 0x1f340
	.byte 0x10,0xe9,0x02,0x02	@ 0001f340 data
.org 0x1f344
	.byte 0xb0,0xe8,0x02,0x02	@ 0001f344 data
.org 0x1f348
	.byte 0x90,0x2b,0x84,0x08	@ 0001f348 data
.org 0x1f34c
	ldr r0, [pc, #16]	@ 0001f34c 0448
.org 0x1f34e
	ldrh r1, [r6, #0]	@ 0001f34e 3188
.org 0x1f350
	lsls r1, r1, #2	@ 0001f350 8900
.org 0x1f352
	adds r1, r1, r0	@ 0001f352 0918
.org 0x1f354
	ldr r1, [r1, #0]	@ 0001f354 0968
.org 0x1f356
	adds r0, r6, #0	@ 0001f356 301c
.org 0x1f358
	bl 0x128f80	@ 0001f358 09f112fe
.org 0x1f35c
	b.n 0x1f368	@ 0001f35c 04e0
.org 0x1f35e
	.byte 0x00	@ 0001f35e data
.org 0x1f35f
	.byte 0x00	@ 0001f35f data
.org 0x1f360
	.byte 0x44,0x2b,0x84,0x08	@ 0001f360 data
.org 0x1f364
	movs r3, #1	@ 0001f364 0123
.org 0x1f366
	mov r8, r3	@ 0001f366 9846
.org 0x1f368
	ldr r4, [pc, #36]	@ 0001f368 094c
.org 0x1f36a
	ldrb r1, [r4, #18]	@ 0001f36a a17c
.org 0x1f36c
	movs r5, #1	@ 0001f36c 0125
.org 0x1f36e
	adds r0, r5, #0	@ 0001f36e 281c
.org 0x1f370
	ands r0, r1	@ 0001f370 0840
.org 0x1f372
	cmp r0, #0	@ 0001f372 0028
.org 0x1f374
	bne.n 0x1f37c	@ 0001f374 02d1
.org 0x1f376
	ldrh r0, [r4, #8]	@ 0001f376 2089
.org 0x1f378
	adds r7, r5, #0	@ 0001f378 2f1c
.org 0x1f37a
	bics r7, r0	@ 0001f37a 8743
.org 0x1f37c
	adds r0, r4, #0	@ 0001f37c 201c
.org 0x1f37e
	adds r0, #16	@ 0001f37e 1030
.org 0x1f380
	bl 0x27634	@ 0001f380 08f058f9
.org 0x1f384
	cmp r0, #0	@ 0001f384 0028
.org 0x1f386
	beq.n 0x1f394	@ 0001f386 05d0
.org 0x1f388
	ldrh r0, [r4, #8]	@ 0001f388 2089
.org 0x1f38a
	adds r7, r5, #0	@ 0001f38a 2f1c
.org 0x1f38c
	bics r7, r0	@ 0001f38c 8743
.org 0x1f38e
	b.n 0x1f39e	@ 0001f38e 06e0
.org 0x1f390
	.byte 0x10,0xe9,0x02,0x02	@ 0001f390 data
.org 0x1f394
	movs r0, #0	@ 0001f394 0020
.org 0x1f396
	mov r8, r0	@ 0001f396 8046
.org 0x1f398
	adds r0, r4, #0	@ 0001f398 201c
.org 0x1f39a
	bl 0x1f80c	@ 0001f39a 00f037fa
.org 0x1f39e
	mov r1, r8	@ 0001f39e 4146
.org 0x1f3a0
	cmp r1, #0	@ 0001f3a0 0029
.org 0x1f3a2
	bne.n 0x1f31a	@ 0001f3a2 bad1
.org 0x1f3a4
	ldr r3, [sp, #0]	@ 0001f3a4 009b
.org 0x1f3a6
	cmp r3, #0	@ 0001f3a6 002b
.org 0x1f3a8
	bne.n 0x1f414	@ 0001f3a8 34d1
.org 0x1f3aa
	ldr r0, [pc, #160]	@ 0001f3aa 2848
.org 0x1f3ac
	mov sl, r0	@ 0001f3ac 8246
.org 0x1f3ae
	bl 0x1f8c0	@ 0001f3ae 00f087fa
.org 0x1f3b2
	ldr r6, [pc, #156]	@ 0001f3b2 274e
.org 0x1f3b4
	subs r1, r6, #2	@ 0001f3b4 b11e
.org 0x1f3b6
	mov r9, r1	@ 0001f3b6 8946
.org 0x1f3b8
	ldrb r0, [r1, #0]	@ 0001f3b8 0878
.org 0x1f3ba
	lsls r4, r0, #1	@ 0001f3ba 4400
.org 0x1f3bc
	adds r4, r4, r0	@ 0001f3bc 2418
.org 0x1f3be
	lsls r4, r4, #3	@ 0001f3be e400
.org 0x1f3c0
	movs r5, #32	@ 0001f3c0 2025
.org 0x1f3c2
	negs r5, r5	@ 0001f3c2 6d42
.org 0x1f3c4
	ands r5, r4	@ 0001f3c4 2540
.org 0x1f3c6
	ldr r3, [pc, #140]	@ 0001f3c6 234b
.org 0x1f3c8
	mov r8, r3	@ 0001f3c8 9846
.org 0x1f3ca
	lsrs r2, r5, #2	@ 0001f3ca aa08
.org 0x1f3cc
	adds r0, r6, #0	@ 0001f3cc 301c
.org 0x1f3ce
	ldr r1, [pc, #136]	@ 0001f3ce 2249
.org 0x1f3d0
	bl 0x128be0	@ 0001f3d0 09f106fc
.org 0x1f3d4
	movs r2, #31	@ 0001f3d4 1f22
.org 0x1f3d6
	ands r2, r4	@ 0001f3d6 2240
.org 0x1f3d8
	cmp r2, #0	@ 0001f3d8 002a
.org 0x1f3da
	beq.n 0x1f3f2	@ 0001f3da 0ad0
.org 0x1f3dc
	adds r0, r5, r6	@ 0001f3dc a819
.org 0x1f3de
	ldr r3, [pc, #120]	@ 0001f3de 1e4b
.org 0x1f3e0
	adds r1, r5, r3	@ 0001f3e0 e918
.org 0x1f3e2
	lsrs r2, r2, #2	@ 0001f3e2 9208
.org 0x1f3e4
	mov r3, r8	@ 0001f3e4 4346
.org 0x1f3e6
	ands r2, r3	@ 0001f3e6 1a40
.org 0x1f3e8
	movs r3, #128	@ 0001f3e8 8023
.org 0x1f3ea
	lsls r3, r3, #19	@ 0001f3ea db04
.org 0x1f3ec
	orrs r2, r3	@ 0001f3ec 1a43
.org 0x1f3ee
	bl 0x128be4	@ 0001f3ee 09f1f9fb
.org 0x1f3f2
	mov r1, r9	@ 0001f3f2 4946
.org 0x1f3f4
	ldrb r0, [r1, #0]	@ 0001f3f4 0878
.org 0x1f3f6
	subs r1, r6, #1	@ 0001f3f6 711e
.org 0x1f3f8
	strb r0, [r1, #0]	@ 0001f3f8 0870
.org 0x1f3fa
	mov r3, sp	@ 0001f3fa 6b46
.org 0x1f3fc
	ldrb r0, [r3, #0]	@ 0001f3fc 1878
.org 0x1f3fe
	mov r3, r9	@ 0001f3fe 4b46
.org 0x1f400
	strb r0, [r3, #0]	@ 0001f400 1870
.org 0x1f402
	mov r1, sl	@ 0001f402 5146
.org 0x1f404
	movs r0, #24	@ 0001f404 1820
.org 0x1f406
	ldrsb r0, [r1, r0]	@ 0001f406 0856
.org 0x1f408
	cmp r0, #0	@ 0001f408 0028
.org 0x1f40a
	beq.n 0x1f414	@ 0001f40a 03d0
.org 0x1f40c
	mov r0, sl	@ 0001f40c 5046
.org 0x1f40e
	adds r0, #56	@ 0001f40e 3830
.org 0x1f410
	bl 0x6c58	@ 0001f410 e7f722fc
.org 0x1f414
	ldr r4, [pc, #68]	@ 0001f414 114c
.org 0x1f416
	adds r0, r4, #0	@ 0001f416 201c
.org 0x1f418
	bl 0x1f698	@ 0001f418 00f03ef9
.org 0x1f41c
	ldr r3, [sp, #4]	@ 0001f41c 019b
.org 0x1f41e
	cmp r3, #0	@ 0001f41e 002b
.org 0x1f420
	beq.n 0x1f43a	@ 0001f420 0bd0
.org 0x1f422
	adds r0, r4, #0	@ 0001f422 201c
.org 0x1f424
	adds r0, #232	@ 0001f424 e830
.org 0x1f426
	ldrb r0, [r0, #24]	@ 0001f426 007e
.org 0x1f428
	lsls r0, r0, #24	@ 0001f428 0006
.org 0x1f42a
	asrs r0, r0, #24	@ 0001f42a 0016
.org 0x1f42c
	cmp r0, #0	@ 0001f42c 0028
.org 0x1f42e
	beq.n 0x1f43a	@ 0001f42e 04d0
.org 0x1f430
	movs r1, #144	@ 0001f430 9021
.org 0x1f432
	lsls r1, r1, #1	@ 0001f432 4900

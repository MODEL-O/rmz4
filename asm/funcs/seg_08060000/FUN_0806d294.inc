@ FUN_0806d294  entry 0x0806d294  size 800
.thumb
.org 0x6d294
FUN_0806d294:
	push {r4, r5, r6, r7, lr}	@ 0006d294 f0b5
.org 0x6d296
	mov r7, sl	@ 0006d296 5746
.org 0x6d298
	mov r6, r9	@ 0006d298 4e46
.org 0x6d29a
	mov r5, r8	@ 0006d29a 4546
.org 0x6d29c
	push {r5, r6, r7}	@ 0006d29c e0b4
.org 0x6d29e
	sub sp, #24	@ 0006d29e 86b0
.org 0x6d2a0
	adds r7, r0, #0	@ 0006d2a0 071c
.org 0x6d2a2
	ldrb r4, [r7, #14]	@ 0006d2a2 bc7b
.org 0x6d2a4
	cmp r4, #0	@ 0006d2a4 002c
.org 0x6d2a6
	bne.n 0x6d2f2	@ 0006d2a6 24d1
.org 0x6d2a8
	movs r0, #76	@ 0006d2a8 4c20
.org 0x6d2aa
	bl 0x6984	@ 0006d2aa 99f76bfb
.org 0x6d2ae
	adds r0, r7, #0	@ 0006d2ae 381c
.org 0x6d2b0
	adds r0, #140	@ 0006d2b0 8c30
.org 0x6d2b2
	str r4, [r0, #0]	@ 0006d2b2 0460
.org 0x6d2b4
	adds r0, #4	@ 0006d2b4 0430
.org 0x6d2b6
	str r4, [r0, #0]	@ 0006d2b6 0460
.org 0x6d2b8
	adds r0, #4	@ 0006d2b8 0430
.org 0x6d2ba
	strb r4, [r0, #0]	@ 0006d2ba 0470
.org 0x6d2bc
	ldrb r1, [r7, #10]	@ 0006d2bc b97a
.org 0x6d2be
	movs r0, #251	@ 0006d2be fb20
.org 0x6d2c0
	ands r0, r1	@ 0006d2c0 0840
.org 0x6d2c2
	strb r0, [r7, #10]	@ 0006d2c2 b872
.org 0x6d2c4
	ldr r3, [pc, #132]	@ 0006d2c4 214b
.org 0x6d2c6
	ldrh r2, [r3, #8]	@ 0006d2c6 1a89
.org 0x6d2c8
	movs r4, #1	@ 0006d2c8 0124
.org 0x6d2ca
	adds r0, r4, #0	@ 0006d2ca 201c
.org 0x6d2cc
	ands r0, r2	@ 0006d2cc 1040
.org 0x6d2ce
	cmp r0, #0	@ 0006d2ce 0028
.org 0x6d2d0
	beq.n 0x6d2e6	@ 0006d2d0 09d0
.org 0x6d2d2
	ldrb r1, [r3, #18]	@ 0006d2d2 997c
.org 0x6d2d4
	adds r0, r4, #0	@ 0006d2d4 201c
.org 0x6d2d6
	ands r0, r1	@ 0006d2d6 0840
.org 0x6d2d8
	cmp r0, #0	@ 0006d2d8 0028
.org 0x6d2da
	bne.n 0x6d2e6	@ 0006d2da 04d1
.org 0x6d2dc
	ldr r0, [pc, #112]	@ 0006d2dc 1c48
.org 0x6d2de
	ands r0, r2	@ 0006d2de 1040
.org 0x6d2e0
	movs r1, #16	@ 0006d2e0 1021
.org 0x6d2e2
	orrs r0, r1	@ 0006d2e2 0843
.org 0x6d2e4
	strh r0, [r3, #8]	@ 0006d2e4 1881
.org 0x6d2e6
	movs r0, #16	@ 0006d2e6 1020
.org 0x6d2e8
	strb r0, [r7, #18]	@ 0006d2e8 b874
.org 0x6d2ea
	strb r0, [r7, #19]	@ 0006d2ea f874
.org 0x6d2ec
	ldrb r0, [r7, #14]	@ 0006d2ec b87b
.org 0x6d2ee
	adds r0, #1	@ 0006d2ee 0130
.org 0x6d2f0
	strb r0, [r7, #14]	@ 0006d2f0 b873
.org 0x6d2f2
	adds r0, r7, #0	@ 0006d2f2 381c
.org 0x6d2f4
	bl 0x1cff0	@ 0006d2f4 aff77cfe
.org 0x6d2f8
	ldrb r4, [r7, #13]	@ 0006d2f8 7c7b
.org 0x6d2fa
	cmp r4, #0	@ 0006d2fa 002c
.org 0x6d2fc
	bne.n 0x6d36e	@ 0006d2fc 37d1
.org 0x6d2fe
	adds r6, r7, #0	@ 0006d2fe 3e1c
.org 0x6d300
	adds r6, #140	@ 0006d300 8c36
.org 0x6d302
	ldr r0, [r6, #0]	@ 0006d302 3068
.org 0x6d304
	movs r1, #2	@ 0006d304 0221
.org 0x6d306
	negs r1, r1	@ 0006d306 4942
.org 0x6d308
	ands r0, r1	@ 0006d308 0840
.org 0x6d30a
	str r0, [r6, #0]	@ 0006d30a 3060
.org 0x6d30c
	adds r5, r7, #0	@ 0006d30c 3d1c
.org 0x6d30e
	adds r5, #144	@ 0006d30e 9035
.org 0x6d310
	ldr r0, [r5, #0]	@ 0006d310 2868
.org 0x6d312
	ands r0, r1	@ 0006d312 0840
.org 0x6d314
	str r0, [r5, #0]	@ 0006d314 2860
.org 0x6d316
	adds r0, r7, #0	@ 0006d316 381c
.org 0x6d318
	bl 0x1d330	@ 0006d318 b0f70af8
.org 0x6d31c
	ldrb r0, [r7, #19]	@ 0006d31c f87c
.org 0x6d31e
	subs r0, #1	@ 0006d31e 0138
.org 0x6d320
	strb r0, [r7, #19]	@ 0006d320 f874
.org 0x6d322
	movs r1, #255	@ 0006d322 ff21
.org 0x6d324
	lsls r0, r0, #24	@ 0006d324 0006
.org 0x6d326
	lsrs r0, r0, #24	@ 0006d326 000e
.org 0x6d328
	cmp r0, #255	@ 0006d328 ff28
.org 0x6d32a
	beq.n 0x6d32e	@ 0006d32a 00d0
.org 0x6d32c
	b.n 0x6d5ae	@ 0006d32c 3fe1
.org 0x6d32e
	ldrb r0, [r7, #18]	@ 0006d32e b87c
.org 0x6d330
	subs r0, #1	@ 0006d330 0138
.org 0x6d332
	strb r0, [r7, #18]	@ 0006d332 b874
.org 0x6d334
	ands r0, r1	@ 0006d334 0840
.org 0x6d336
	cmp r0, #0	@ 0006d336 0028
.org 0x6d338
	bne.n 0x6d354	@ 0006d338 0cd1
.org 0x6d33a
	movs r0, #180	@ 0006d33a b420
.org 0x6d33c
	strb r0, [r7, #18]	@ 0006d33c b874
.org 0x6d33e
	strb r4, [r7, #19]	@ 0006d33e fc74
.org 0x6d340
	adds r1, r7, #0	@ 0006d340 391c
.org 0x6d342
	adds r1, #180	@ 0006d342 b431
.org 0x6d344
	movs r0, #16	@ 0006d344 1020
.org 0x6d346
	strh r0, [r1, #40]	@ 0006d346 0885
.org 0x6d348
	b.n 0x6d5a8	@ 0006d348 2ee1
.org 0x6d34a
	.byte 0x00	@ 0006d34a data
.org 0x6d34b
	.byte 0x00	@ 0006d34b data
.org 0x6d34c
	.byte 0x10,0xe9,0x02,0x02	@ 0006d34c data
.org 0x6d350
	.byte 0xfe,0xff,0x00,0x00	@ 0006d350 data
.org 0x6d354
	ldr r0, [r6, #0]	@ 0006d354 3068
.org 0x6d356
	movs r1, #1	@ 0006d356 0121
.org 0x6d358
	orrs r0, r1	@ 0006d358 0843
.org 0x6d35a
	str r0, [r6, #0]	@ 0006d35a 3060
.org 0x6d35c
	ldr r0, [r5, #0]	@ 0006d35c 2868
.org 0x6d35e
	orrs r0, r1	@ 0006d35e 0843
.org 0x6d360
	str r0, [r5, #0]	@ 0006d360 2860
.org 0x6d362
	adds r0, r7, #0	@ 0006d362 381c
.org 0x6d364
	bl 0x1d3fc	@ 0006d364 b0f74af8
.org 0x6d368
	ldrb r0, [r7, #18]	@ 0006d368 b87c
.org 0x6d36a
	strb r0, [r7, #19]	@ 0006d36a f874
.org 0x6d36c
	b.n 0x6d5ae	@ 0006d36c 1fe1
.org 0x6d36e
	cmp r4, #1	@ 0006d36e 012c
.org 0x6d370
	beq.n 0x6d374	@ 0006d370 00d0
.org 0x6d372
	b.n 0x6d5ae	@ 0006d372 1ce1
.org 0x6d374
	ldrb r1, [r7, #18]	@ 0006d374 b97c
.org 0x6d376
	cmp r1, #119	@ 0006d376 7729
.org 0x6d378
	bhi.n 0x6d3c6	@ 0006d378 25d8
.org 0x6d37a
	adds r2, r7, #0	@ 0006d37a 3a1c
.org 0x6d37c
	adds r2, #180	@ 0006d37c b432
.org 0x6d37e
	movs r0, #8	@ 0006d37e 0820
.org 0x6d380
	strh r0, [r2, #40]	@ 0006d380 1085
.org 0x6d382
	ldrb r1, [r7, #18]	@ 0006d382 b97c
.org 0x6d384
	adds r0, r4, #0	@ 0006d384 201c
.org 0x6d386
	ands r0, r1	@ 0006d386 0840
.org 0x6d388
	mov sl, r2	@ 0006d388 9246
.org 0x6d38a
	cmp r0, #0	@ 0006d38a 0028
.org 0x6d38c
	beq.n 0x6d3ac	@ 0006d38c 0ed0
.org 0x6d38e
	adds r1, r7, #0	@ 0006d38e 391c
.org 0x6d390
	adds r1, #140	@ 0006d390 8c31
.org 0x6d392
	ldr r0, [r1, #0]	@ 0006d392 0868
.org 0x6d394
	movs r2, #2	@ 0006d394 0222
.org 0x6d396
	negs r2, r2	@ 0006d396 5242
.org 0x6d398
	ands r0, r2	@ 0006d398 1040
.org 0x6d39a
	str r0, [r1, #0]	@ 0006d39a 0860
.org 0x6d39c
	adds r1, #4	@ 0006d39c 0431
.org 0x6d39e
	ldr r0, [r1, #0]	@ 0006d39e 0868
.org 0x6d3a0
	ands r0, r2	@ 0006d3a0 1040
.org 0x6d3a2
	str r0, [r1, #0]	@ 0006d3a2 0860
.org 0x6d3a4
	adds r0, r7, #0	@ 0006d3a4 381c
.org 0x6d3a6
	bl 0x1d330	@ 0006d3a6 aff7c3ff
.org 0x6d3aa
	b.n 0x6d410	@ 0006d3aa 31e0
.org 0x6d3ac
	adds r1, r7, #0	@ 0006d3ac 391c
.org 0x6d3ae
	adds r1, #140	@ 0006d3ae 8c31
.org 0x6d3b0
	ldr r0, [r1, #0]	@ 0006d3b0 0868
.org 0x6d3b2
	orrs r0, r4	@ 0006d3b2 2043
.org 0x6d3b4
	str r0, [r1, #0]	@ 0006d3b4 0860
.org 0x6d3b6
	adds r1, #4	@ 0006d3b6 0431
.org 0x6d3b8
	ldr r0, [r1, #0]	@ 0006d3b8 0868
.org 0x6d3ba
	orrs r0, r4	@ 0006d3ba 2043
.org 0x6d3bc
	str r0, [r1, #0]	@ 0006d3bc 0860
.org 0x6d3be
	adds r0, r7, #0	@ 0006d3be 381c
.org 0x6d3c0
	bl 0x1d3fc	@ 0006d3c0 b0f71cf8
.org 0x6d3c4
	b.n 0x6d410	@ 0006d3c4 24e0
.org 0x6d3c6
	movs r0, #3	@ 0006d3c6 0320
.org 0x6d3c8
	ands r0, r1	@ 0006d3c8 0840
.org 0x6d3ca
	cmp r0, #0	@ 0006d3ca 0028
.org 0x6d3cc
	beq.n 0x6d3f2	@ 0006d3cc 11d0
.org 0x6d3ce
	adds r1, r7, #0	@ 0006d3ce 391c
.org 0x6d3d0
	adds r1, #140	@ 0006d3d0 8c31
.org 0x6d3d2
	ldr r0, [r1, #0]	@ 0006d3d2 0868
.org 0x6d3d4
	movs r2, #2	@ 0006d3d4 0222
.org 0x6d3d6
	negs r2, r2	@ 0006d3d6 5242
.org 0x6d3d8
	ands r0, r2	@ 0006d3d8 1040
.org 0x6d3da
	str r0, [r1, #0]	@ 0006d3da 0860
.org 0x6d3dc
	adds r1, #4	@ 0006d3dc 0431
.org 0x6d3de
	ldr r0, [r1, #0]	@ 0006d3de 0868
.org 0x6d3e0
	ands r0, r2	@ 0006d3e0 1040
.org 0x6d3e2
	str r0, [r1, #0]	@ 0006d3e2 0860
.org 0x6d3e4
	adds r0, r7, #0	@ 0006d3e4 381c
.org 0x6d3e6
	bl 0x1d330	@ 0006d3e6 aff7a3ff
.org 0x6d3ea
	movs r0, #180	@ 0006d3ea b420
.org 0x6d3ec
	adds r0, r0, r7	@ 0006d3ec c019
.org 0x6d3ee
	mov sl, r0	@ 0006d3ee 8246
.org 0x6d3f0
	b.n 0x6d410	@ 0006d3f0 0ee0
.org 0x6d3f2
	adds r1, r7, #0	@ 0006d3f2 391c
.org 0x6d3f4
	adds r1, #140	@ 0006d3f4 8c31
.org 0x6d3f6
	ldr r0, [r1, #0]	@ 0006d3f6 0868
.org 0x6d3f8
	orrs r0, r4	@ 0006d3f8 2043
.org 0x6d3fa
	str r0, [r1, #0]	@ 0006d3fa 0860
.org 0x6d3fc
	adds r1, #4	@ 0006d3fc 0431
.org 0x6d3fe
	ldr r0, [r1, #0]	@ 0006d3fe 0868
.org 0x6d400
	orrs r0, r4	@ 0006d400 2043
.org 0x6d402
	str r0, [r1, #0]	@ 0006d402 0860
.org 0x6d404
	adds r0, r7, #0	@ 0006d404 381c
.org 0x6d406
	bl 0x1d3fc	@ 0006d406 aff7f9ff
.org 0x6d40a
	movs r1, #180	@ 0006d40a b421
.org 0x6d40c
	adds r1, r1, r7	@ 0006d40c c919
.org 0x6d40e
	mov sl, r1	@ 0006d40e 8a46
.org 0x6d410
	ldrb r0, [r7, #18]	@ 0006d410 b87c
.org 0x6d412
	mov r2, sl	@ 0006d412 5246
.org 0x6d414
	ldrh r1, [r2, #40]	@ 0006d414 118d
.org 0x6d416
	bl 0x129050	@ 0006d416 bbf01bfe
.org 0x6d41a
	cmp r0, #0	@ 0006d41a 0028
.org 0x6d41c
	bne.n 0x6d4a0	@ 0006d41c 40d1
.org 0x6d41e
	ldr r5, [pc, #416]	@ 0006d41e 684d
.org 0x6d420
	ldr r0, [r5, #0]	@ 0006d420 2868
.org 0x6d422
	ldr r1, [pc, #416]	@ 0006d422 6849
.org 0x6d424
	mov r9, r1	@ 0006d424 8946
.org 0x6d426
	mov r2, r9	@ 0006d426 4a46
.org 0x6d428
	muls r2, r0	@ 0006d428 4243
.org 0x6d42a
	adds r0, r2, #0	@ 0006d42a 101c
.org 0x6d42c
	ldr r6, [pc, #408]	@ 0006d42c 664e
.org 0x6d42e
	adds r0, r0, r6	@ 0006d42e 8019
.org 0x6d430
	lsls r0, r0, #1	@ 0006d430 4000
.org 0x6d432
	lsrs r1, r0, #1	@ 0006d432 4108
.org 0x6d434
	mov r8, r1	@ 0006d434 8846
.org 0x6d436
	str r1, [r5, #0]	@ 0006d436 2960
.org 0x6d438
	lsrs r0, r0, #17	@ 0006d438 400c
.org 0x6d43a
	movs r1, #48	@ 0006d43a 3021
.org 0x6d43c
	bl 0x129198	@ 0006d43c bbf0acfe
.org 0x6d440
	movs r4, #24	@ 0006d440 1824
.org 0x6d442
	subs r0, r4, r0	@ 0006d442 201a
.org 0x6d444
	lsls r0, r0, #8	@ 0006d444 0002
.org 0x6d446
	ldr r1, [r7, #84]	@ 0006d446 796d
.org 0x6d448
	adds r1, r1, r0	@ 0006d448 0918
.org 0x6d44a
	str r1, [sp, #0]	@ 0006d44a 0091
.org 0x6d44c
	mov r2, r9	@ 0006d44c 4a46
.org 0x6d44e
	mov r0, r8	@ 0006d44e 4046
.org 0x6d450
	muls r0, r2	@ 0006d450 5043
.org 0x6d452
	adds r0, r0, r6	@ 0006d452 8019
.org 0x6d454
	lsls r0, r0, #1	@ 0006d454 4000
.org 0x6d456
	lsrs r1, r0, #1	@ 0006d456 4108
.org 0x6d458
	mov r8, r1	@ 0006d458 8846
.org 0x6d45a
	str r1, [r5, #0]	@ 0006d45a 2960
.org 0x6d45c
	lsrs r0, r0, #17	@ 0006d45c 400c
.org 0x6d45e
	movs r1, #48	@ 0006d45e 3021
.org 0x6d460
	bl 0x129198	@ 0006d460 bbf09afe
.org 0x6d464
	subs r4, r4, r0	@ 0006d464 241a
.org 0x6d466
	lsls r4, r4, #8	@ 0006d466 2402
.org 0x6d468
	ldr r0, [r7, #88]	@ 0006d468 b86d
.org 0x6d46a
	adds r0, r0, r4	@ 0006d46a 0019
.org 0x6d46c
	str r0, [sp, #4]	@ 0006d46c 0190
.org 0x6d46e
	mov r2, r9	@ 0006d46e 4a46
.org 0x6d470
	mov r1, r8	@ 0006d470 4146
.org 0x6d472
	muls r1, r2	@ 0006d472 5143
.org 0x6d474
	adds r1, r1, r6	@ 0006d474 8919
.org 0x6d476
	lsls r1, r1, #1	@ 0006d476 4900
.org 0x6d478
	lsrs r0, r1, #1	@ 0006d478 4808
.org 0x6d47a
	str r0, [r5, #0]	@ 0006d47a 2860
.org 0x6d47c
	lsrs r1, r1, #17	@ 0006d47c 490c
.org 0x6d47e
	movs r0, #63	@ 0006d47e 3f20
.org 0x6d480
	ands r1, r0	@ 0006d480 0140
.org 0x6d482
	ldrb r0, [r7, #19]	@ 0006d482 f87c
.org 0x6d484
	adds r1, r1, r0	@ 0006d484 0918
.org 0x6d486
	lsls r1, r1, #24	@ 0006d486 0906
.org 0x6d488
	lsrs r1, r1, #24	@ 0006d488 090e
.org 0x6d48a
	movs r2, #224	@ 0006d48a e022
.org 0x6d48c
	lsls r2, r2, #1	@ 0006d48c 5200
.org 0x6d48e
	mov r0, sp	@ 0006d48e 6846
.org 0x6d490
	bl 0xe1b14	@ 0006d490 74f040fb
.org 0x6d494
	movs r0, #53	@ 0006d494 3520
.org 0x6d496
	bl 0x2b10	@ 0006d496 95f73bfb
.org 0x6d49a
	ldrb r0, [r7, #19]	@ 0006d49a f87c
.org 0x6d49c
	adds r0, #64	@ 0006d49c 4030
.org 0x6d49e
	strb r0, [r7, #19]	@ 0006d49e f874
.org 0x6d4a0
	ldrb r0, [r7, #18]	@ 0006d4a0 b87c
.org 0x6d4a2
	mov r1, sl	@ 0006d4a2 5146
.org 0x6d4a4
	ldrh r4, [r1, #40]	@ 0006d4a4 0c8d
.org 0x6d4a6
	adds r1, r4, #0	@ 0006d4a6 211c
.org 0x6d4a8
	bl 0x129050	@ 0006d4a8 bbf0d2fd
.org 0x6d4ac
	lsrs r4, r4, #1	@ 0006d4ac 6408
.org 0x6d4ae
	cmp r0, r4	@ 0006d4ae a042
.org 0x6d4b0
	bne.n 0x6d512	@ 0006d4b0 2fd1
.org 0x6d4b2
	ldr r5, [pc, #268]	@ 0006d4b2 434d
.org 0x6d4b4
	ldr r0, [r5, #0]	@ 0006d4b4 2868
.org 0x6d4b6
	ldr r2, [pc, #268]	@ 0006d4b6 434a
.org 0x6d4b8
	mov r9, r2	@ 0006d4b8 9146
.org 0x6d4ba
	mov r1, r9	@ 0006d4ba 4946
.org 0x6d4bc
	muls r1, r0	@ 0006d4bc 4143
.org 0x6d4be
	adds r0, r1, #0	@ 0006d4be 081c
.org 0x6d4c0
	ldr r2, [pc, #260]	@ 0006d4c0 414a
.org 0x6d4c2
	mov r8, r2	@ 0006d4c2 9046
.org 0x6d4c4
	add r0, r8	@ 0006d4c4 4044
.org 0x6d4c6
	lsls r0, r0, #1	@ 0006d4c6 4000
.org 0x6d4c8
	lsrs r6, r0, #1	@ 0006d4c8 4608
.org 0x6d4ca
	str r6, [r5, #0]	@ 0006d4ca 2e60
.org 0x6d4cc
	lsrs r0, r0, #17	@ 0006d4cc 400c
.org 0x6d4ce
	movs r1, #48	@ 0006d4ce 3021
.org 0x6d4d0
	bl 0x129198	@ 0006d4d0 bbf062fe
.org 0x6d4d4
	movs r4, #24	@ 0006d4d4 1824
.org 0x6d4d6
	subs r0, r4, r0	@ 0006d4d6 201a
.org 0x6d4d8
	lsls r0, r0, #8	@ 0006d4d8 0002
.org 0x6d4da
	ldr r1, [r7, #84]	@ 0006d4da 796d
.org 0x6d4dc
	adds r1, r1, r0	@ 0006d4dc 0918
.org 0x6d4de
	str r1, [sp, #8]	@ 0006d4de 0291
.org 0x6d4e0
	mov r0, r9	@ 0006d4e0 4846
.org 0x6d4e2
	muls r0, r6	@ 0006d4e2 7043
.org 0x6d4e4
	add r0, r8	@ 0006d4e4 4044
.org 0x6d4e6
	lsls r0, r0, #1	@ 0006d4e6 4000
.org 0x6d4e8
	lsrs r1, r0, #1	@ 0006d4e8 4108
.org 0x6d4ea
	str r1, [r5, #0]	@ 0006d4ea 2960
.org 0x6d4ec
	lsrs r0, r0, #17	@ 0006d4ec 400c
.org 0x6d4ee
	movs r1, #48	@ 0006d4ee 3021
.org 0x6d4f0
	bl 0x129198	@ 0006d4f0 bbf052fe
.org 0x6d4f4
	subs r4, r4, r0	@ 0006d4f4 241a
.org 0x6d4f6
	lsls r4, r4, #8	@ 0006d4f6 2402
.org 0x6d4f8
	ldr r0, [r7, #88]	@ 0006d4f8 b86d
.org 0x6d4fa
	adds r0, r0, r4	@ 0006d4fa 0019
.org 0x6d4fc
	add r1, sp, #8	@ 0006d4fc 02a9
.org 0x6d4fe
	str r0, [r1, #4]	@ 0006d4fe 4860
.org 0x6d500
	movs r0, #1	@ 0006d500 0120
.org 0x6d502
	bl 0xd0c88	@ 0006d502 63f0c1fb
.org 0x6d506
	ldrb r0, [r7, #18]	@ 0006d506 b87c
.org 0x6d508
	cmp r0, #111	@ 0006d508 6f28
.org 0x6d50a
	bhi.n 0x6d512	@ 0006d50a 02d8
.org 0x6d50c
	movs r0, #53	@ 0006d50c 3520
.org 0x6d50e
	bl 0x2b10	@ 0006d50e 95f7fffa
.org 0x6d512
	ldrb r0, [r7, #18]	@ 0006d512 b87c
.org 0x6d514
	mov r1, sl	@ 0006d514 5146
.org 0x6d516
	ldrh r4, [r1, #40]	@ 0006d516 0c8d
.org 0x6d518
	adds r1, r4, #0	@ 0006d518 211c
.org 0x6d51a
	bl 0x129050	@ 0006d51a bbf099fd
.org 0x6d51e
	adds r1, r0, #0	@ 0006d51e 011c
.org 0x6d520
	lsrs r2, r4, #2	@ 0006d520 a208
.org 0x6d522
	cmp r1, r2	@ 0006d522 9142
.org 0x6d524
	beq.n 0x6d52e	@ 0006d524 03d0
.org 0x6d526
	lsls r0, r2, #1	@ 0006d526 5000
.org 0x6d528
	adds r0, r0, r2	@ 0006d528 8018
.org 0x6d52a
	cmp r1, r0	@ 0006d52a 8142
.org 0x6d52c
	bne.n 0x6d582	@ 0006d52c 29d1
.org 0x6d52e
	ldr r5, [pc, #144]	@ 0006d52e 244d
.org 0x6d530
	ldr r0, [r5, #0]	@ 0006d530 2868
.org 0x6d532
	ldr r2, [pc, #144]	@ 0006d532 244a
.org 0x6d534
	mov r9, r2	@ 0006d534 9146
.org 0x6d536
	mov r1, r9	@ 0006d536 4946
.org 0x6d538
	muls r1, r0	@ 0006d538 4143
.org 0x6d53a
	adds r0, r1, #0	@ 0006d53a 081c
.org 0x6d53c
	ldr r2, [pc, #136]	@ 0006d53c 224a
.org 0x6d53e
	mov r8, r2	@ 0006d53e 9046
.org 0x6d540
	add r0, r8	@ 0006d540 4044
.org 0x6d542
	lsls r0, r0, #1	@ 0006d542 4000
.org 0x6d544
	lsrs r6, r0, #1	@ 0006d544 4608
.org 0x6d546
	str r6, [r5, #0]	@ 0006d546 2e60
.org 0x6d548
	lsrs r0, r0, #17	@ 0006d548 400c
.org 0x6d54a
	movs r1, #48	@ 0006d54a 3021
.org 0x6d54c
	bl 0x129198	@ 0006d54c bbf024fe
.org 0x6d550
	movs r4, #24	@ 0006d550 1824
.org 0x6d552
	subs r0, r4, r0	@ 0006d552 201a
.org 0x6d554
	lsls r0, r0, #8	@ 0006d554 0002
.org 0x6d556
	ldr r1, [r7, #84]	@ 0006d556 796d
.org 0x6d558
	adds r1, r1, r0	@ 0006d558 0918
.org 0x6d55a
	str r1, [sp, #16]	@ 0006d55a 0491
.org 0x6d55c
	mov r0, r9	@ 0006d55c 4846
.org 0x6d55e
	muls r0, r6	@ 0006d55e 7043
.org 0x6d560
	add r0, r8	@ 0006d560 4044
.org 0x6d562
	lsls r0, r0, #1	@ 0006d562 4000
.org 0x6d564
	lsrs r1, r0, #1	@ 0006d564 4108
.org 0x6d566
	str r1, [r5, #0]	@ 0006d566 2960
.org 0x6d568
	lsrs r0, r0, #17	@ 0006d568 400c
.org 0x6d56a
	movs r1, #48	@ 0006d56a 3021
.org 0x6d56c
	bl 0x129198	@ 0006d56c bbf014fe
.org 0x6d570
	subs r4, r4, r0	@ 0006d570 241a
.org 0x6d572
	lsls r4, r4, #8	@ 0006d572 2402
.org 0x6d574
	ldr r0, [r7, #88]	@ 0006d574 b86d
.org 0x6d576
	adds r0, r0, r4	@ 0006d576 0019
.org 0x6d578
	add r1, sp, #16	@ 0006d578 04a9
.org 0x6d57a
	str r0, [r1, #4]	@ 0006d57a 4860
.org 0x6d57c
	movs r0, #2	@ 0006d57c 0220
.org 0x6d57e
	bl 0xd0c88	@ 0006d57e 63f083fb
.org 0x6d582
	ldrb r0, [r7, #18]	@ 0006d582 b87c
.org 0x6d584
	subs r0, #1	@ 0006d584 0138
.org 0x6d586
	strb r0, [r7, #18]	@ 0006d586 b874
.org 0x6d588
	lsls r0, r0, #24	@ 0006d588 0006
.org 0x6d58a
	lsrs r0, r0, #24	@ 0006d58a 000e
.org 0x6d58c
	cmp r0, #255	@ 0006d58c ff28
.org 0x6d58e
	bne.n 0x6d5ae	@ 0006d58e 0ed1
.org 0x6d590
	movs r0, #42	@ 0006d590 2a20
.org 0x6d592
	bl 0x2b10	@ 0006d592 95f7bdfa
.org 0x6d596
	ldrb r1, [r7, #10]	@ 0006d596 b97a
.org 0x6d598
	movs r0, #254	@ 0006d598 fe20
.org 0x6d59a
	ands r0, r1	@ 0006d59a 0840
.org 0x6d59c
	strb r0, [r7, #10]	@ 0006d59c b872
.org 0x6d59e
	ldr r2, [pc, #44]	@ 0006d59e 0b4a
.org 0x6d5a0
	ldrb r0, [r2, #18]	@ 0006d5a0 907c
.org 0x6d5a2
	movs r1, #2	@ 0006d5a2 0221
.org 0x6d5a4
	orrs r0, r1	@ 0006d5a4 0843
.org 0x6d5a6
	strb r0, [r2, #18]	@ 0006d5a6 9074
.org 0x6d5a8
	ldrb r0, [r7, #13]	@ 0006d5a8 787b
.org 0x6d5aa
	adds r0, #1	@ 0006d5aa 0130
.org 0x6d5ac
	strb r0, [r7, #13]	@ 0006d5ac 7873
.org 0x6d5ae
	add sp, #24	@ 0006d5ae 06b0
.org 0x6d5b0
	pop {r3, r4, r5}	@ 0006d5b0 38bc
.org 0x6d5b2
	mov r8, r3	@ 0006d5b2 9846

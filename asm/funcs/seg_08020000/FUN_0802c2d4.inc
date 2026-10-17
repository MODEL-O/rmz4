@ FUN_0802c2d4  entry 0x0802c2d4  size 530
.thumb
.org 0x2c2d4
FUN_0802c2d4:
	push {r4, r5, r6, r7, lr}	@ 0002c2d4 f0b5
.org 0x2c2d6
	mov r7, r8	@ 0002c2d6 4746
.org 0x2c2d8
	push {r7}	@ 0002c2d8 80b4
.org 0x2c2da
	sub sp, #12	@ 0002c2da 83b0
.org 0x2c2dc
	adds r6, r0, #0	@ 0002c2dc 061c
.org 0x2c2de
	adds r3, r1, #0	@ 0002c2de 0b1c
.org 0x2c2e0
	lsls r2, r2, #24	@ 0002c2e0 1206
.org 0x2c2e2
	movs r1, #2	@ 0002c2e2 0221
.org 0x2c2e4
	ldrsh r0, [r3, r1]	@ 0002c2e4 585e
.org 0x2c2e6
	ldr r1, [r6, #88]	@ 0002c2e6 b16d
.org 0x2c2e8
	adds r1, r1, r0	@ 0002c2e8 0918
.org 0x2c2ea
	ldrh r0, [r3, #6]	@ 0002c2ea d888
.org 0x2c2ec
	lsls r0, r0, #16	@ 0002c2ec 0004
.org 0x2c2ee
	asrs r0, r0, #17	@ 0002c2ee 4014
.org 0x2c2f0
	adds r1, r1, r0	@ 0002c2f0 0918
.org 0x2c2f2
	adds r7, r1, #1	@ 0002c2f2 4f1c
.org 0x2c2f4
	cmp r2, #0	@ 0002c2f4 002a
.org 0x2c2f6
	beq.n 0x2c31c	@ 0002c2f6 11d0
.org 0x2c2f8
	ldr r0, [r6, #84]	@ 0002c2f8 706d
.org 0x2c2fa
	adds r1, r7, #0	@ 0002c2fa 391c
.org 0x2c2fc
	bl 0x7d28	@ 0002c2fc dbf714fd
.org 0x2c300
	lsls r0, r0, #16	@ 0002c300 0004
.org 0x2c302
	lsrs r5, r0, #16	@ 0002c302 050c
.org 0x2c304
	movs r0, #128	@ 0002c304 8020
.org 0x2c306
	lsls r0, r0, #8	@ 0002c306 0002
.org 0x2c308
	ands r0, r5	@ 0002c308 2840
.org 0x2c30a
	cmp r0, #0	@ 0002c30a 0028
.org 0x2c30c
	beq.n 0x2c310	@ 0002c30c 00d0
.org 0x2c30e
	b.n 0x2c4ea	@ 0002c30e ece0
.org 0x2c310
	movs r0, #15	@ 0002c310 0f20
.org 0x2c312
	ands r0, r5	@ 0002c312 2840
.org 0x2c314
	cmp r0, #15	@ 0002c314 0f28
.org 0x2c316
	bne.n 0x2c31a	@ 0002c316 00d1
.org 0x2c318
	b.n 0x2c4ea	@ 0002c318 e7e0
.org 0x2c31a
	b.n 0x2c43e	@ 0002c31a 90e0
.org 0x2c31c
	ldrb r1, [r6, #10]	@ 0002c31c b17a
.org 0x2c31e
	movs r0, #16	@ 0002c31e 1020
.org 0x2c320
	ands r0, r1	@ 0002c320 0840
.org 0x2c322
	cmp r0, #0	@ 0002c322 0028
.org 0x2c324
	beq.n 0x2c340	@ 0002c324 0cd0
.org 0x2c326
	movs r2, #0	@ 0002c326 0022
.org 0x2c328
	ldrsh r0, [r3, r2]	@ 0002c328 985e
.org 0x2c32a
	ldr r2, [r6, #84]	@ 0002c32a 726d
.org 0x2c32c
	subs r0, r2, r0	@ 0002c32c 101a
.org 0x2c32e
	ldrh r1, [r3, #4]	@ 0002c32e 9988
.org 0x2c330
	lsls r1, r1, #16	@ 0002c330 0904
.org 0x2c332
	asrs r1, r1, #17	@ 0002c332 4914
.org 0x2c334
	subs r0, r0, r1	@ 0002c334 401a
.org 0x2c336
	str r0, [sp, #0]	@ 0002c336 0090
.org 0x2c338
	movs r4, #0	@ 0002c338 0024
.org 0x2c33a
	ldrsh r0, [r3, r4]	@ 0002c33a 185f
.org 0x2c33c
	subs r0, r2, r0	@ 0002c33c 101a
.org 0x2c33e
	b.n 0x2c358	@ 0002c33e 0be0
.org 0x2c340
	movs r1, #0	@ 0002c340 0021
.org 0x2c342
	ldrsh r0, [r3, r1]	@ 0002c342 585e
.org 0x2c344
	ldr r2, [r6, #84]	@ 0002c344 726d
.org 0x2c346
	adds r0, r2, r0	@ 0002c346 1018
.org 0x2c348
	ldrh r1, [r3, #4]	@ 0002c348 9988
.org 0x2c34a
	lsls r1, r1, #16	@ 0002c34a 0904
.org 0x2c34c
	asrs r1, r1, #17	@ 0002c34c 4914
.org 0x2c34e
	subs r0, r0, r1	@ 0002c34e 401a
.org 0x2c350
	str r0, [sp, #0]	@ 0002c350 0090
.org 0x2c352
	movs r4, #0	@ 0002c352 0024
.org 0x2c354
	ldrsh r0, [r3, r4]	@ 0002c354 185f
.org 0x2c356
	adds r0, r2, r0	@ 0002c356 1018
.org 0x2c358
	adds r0, r0, r1	@ 0002c358 4018
.org 0x2c35a
	str r0, [sp, #4]	@ 0002c35a 0190
.org 0x2c35c
	str r2, [sp, #8]	@ 0002c35c 0292
.org 0x2c35e
	movs r1, #220	@ 0002c35e dc21
.org 0x2c360
	lsls r1, r1, #1	@ 0002c360 4900
.org 0x2c362
	adds r0, r6, r1	@ 0002c362 7018
.org 0x2c364
	ldrb r0, [r0, #0]	@ 0002c364 0078
.org 0x2c366
	cmp r0, #0	@ 0002c366 0028
.org 0x2c368
	beq.n 0x2c394	@ 0002c368 14d0
.org 0x2c36a
	movs r4, #0	@ 0002c36a 0024
.org 0x2c36c
	lsls r0, r4, #2	@ 0002c36c a000
.org 0x2c36e
	add r0, sp	@ 0002c36e 6844
.org 0x2c370
	ldr r1, [r0, #0]	@ 0002c370 0168
.org 0x2c372
	adds r0, r6, #0	@ 0002c372 301c
.org 0x2c374
	adds r2, r7, #0	@ 0002c374 3a1c
.org 0x2c376
	bl 0x2e058	@ 0002c376 01f06ffe
.org 0x2c37a
	lsls r0, r0, #16	@ 0002c37a 0004
.org 0x2c37c
	lsrs r5, r0, #16	@ 0002c37c 050c
.org 0x2c37e
	cmp r5, #0	@ 0002c37e 002d
.org 0x2c380
	beq.n 0x2c38a	@ 0002c380 03d0
.org 0x2c382
	movs r0, #15	@ 0002c382 0f20
.org 0x2c384
	ands r0, r5	@ 0002c384 2840
.org 0x2c386
	cmp r0, #15	@ 0002c386 0f28
.org 0x2c388
	bne.n 0x2c43e	@ 0002c388 59d1
.org 0x2c38a
	adds r0, r4, #1	@ 0002c38a 601c
.org 0x2c38c
	lsls r0, r0, #24	@ 0002c38c 0006
.org 0x2c38e
	lsrs r4, r0, #24	@ 0002c38e 040e
.org 0x2c390
	cmp r4, #2	@ 0002c390 022c
.org 0x2c392
	bls.n 0x2c36c	@ 0002c392 ebd9
.org 0x2c394
	movs r4, #0	@ 0002c394 0024
.org 0x2c396
	subs r6, r7, #1	@ 0002c396 7e1e
.org 0x2c398
	movs r2, #128	@ 0002c398 8022
.org 0x2c39a
	lsls r2, r2, #3	@ 0002c39a d200
.org 0x2c39c
	mov r8, r2	@ 0002c39c 9046
.org 0x2c39e
	lsls r0, r4, #2	@ 0002c39e a000
.org 0x2c3a0
	add r0, sp	@ 0002c3a0 6844
.org 0x2c3a2
	ldr r0, [r0, #0]	@ 0002c3a2 0068
.org 0x2c3a4
	adds r1, r6, #0	@ 0002c3a4 311c
.org 0x2c3a6
	bl 0x7d28	@ 0002c3a6 dbf7bffc
.org 0x2c3aa
	lsls r0, r0, #16	@ 0002c3aa 0004
.org 0x2c3ac
	lsrs r5, r0, #16	@ 0002c3ac 050c
.org 0x2c3ae
	adds r0, r5, #0	@ 0002c3ae 281c
.org 0x2c3b0
	mov r1, r8	@ 0002c3b0 4146
.org 0x2c3b2
	ands r0, r1	@ 0002c3b2 0840
.org 0x2c3b4
	cmp r0, #0	@ 0002c3b4 0028
.org 0x2c3b6
	bne.n 0x2c43e	@ 0002c3b6 42d1
.org 0x2c3b8
	adds r0, r4, #1	@ 0002c3b8 601c
.org 0x2c3ba
	lsls r0, r0, #24	@ 0002c3ba 0006
.org 0x2c3bc
	lsrs r4, r0, #24	@ 0002c3bc 040e
.org 0x2c3be
	cmp r4, #1	@ 0002c3be 012c
.org 0x2c3c0
	bls.n 0x2c39e	@ 0002c3c0 edd9
.org 0x2c3c2
	ldr r0, [sp, #8]	@ 0002c3c2 0298
.org 0x2c3c4
	adds r1, r7, #0	@ 0002c3c4 391c
.org 0x2c3c6
	bl 0x7e98	@ 0002c3c6 dbf767fd
.org 0x2c3ca
	cmp r0, #0	@ 0002c3ca 0028
.org 0x2c3cc
	bge.n 0x2c3e6	@ 0002c3cc 0bda
.org 0x2c3ce
	ldr r0, [sp, #8]	@ 0002c3ce 0298
.org 0x2c3d0
	adds r1, r7, #0	@ 0002c3d0 391c
.org 0x2c3d2
	bl 0x7d28	@ 0002c3d2 dbf7a9fc
.org 0x2c3d6
	lsls r0, r0, #16	@ 0002c3d6 0004
.org 0x2c3d8
	lsrs r5, r0, #16	@ 0002c3d8 050c
.org 0x2c3da
	movs r0, #15	@ 0002c3da 0f20
.org 0x2c3dc
	ands r0, r5	@ 0002c3dc 2840
.org 0x2c3de
	cmp r0, #15	@ 0002c3de 0f28
.org 0x2c3e0
	bne.n 0x2c3e4	@ 0002c3e0 00d1
.org 0x2c3e2
	b.n 0x2c4ea	@ 0002c3e2 82e0
.org 0x2c3e4
	b.n 0x2c43e	@ 0002c3e4 2be0
.org 0x2c3e6
	ldr r0, [sp, #0]	@ 0002c3e6 0098
.org 0x2c3e8
	adds r1, r7, #0	@ 0002c3e8 391c
.org 0x2c3ea
	bl 0x7020	@ 0002c3ea daf719fe
.org 0x2c3ee
	lsls r0, r0, #16	@ 0002c3ee 0004
.org 0x2c3f0
	lsrs r5, r0, #16	@ 0002c3f0 050c
.org 0x2c3f2
	cmp r5, #0	@ 0002c3f2 002d
.org 0x2c3f4
	beq.n 0x2c470	@ 0002c3f4 3cd0
.org 0x2c3f6
	movs r4, #15	@ 0002c3f6 0f24
.org 0x2c3f8
	ands r4, r5	@ 0002c3f8 2c40
.org 0x2c3fa
	cmp r4, #1	@ 0002c3fa 012c
.org 0x2c3fc
	beq.n 0x2c43e	@ 0002c3fc 1fd0
.org 0x2c3fe
	ldr r0, [sp, #8]	@ 0002c3fe 0298
.org 0x2c400
	adds r1, r7, #0	@ 0002c400 391c
.org 0x2c402
	bl 0x7d28	@ 0002c402 dbf791fc
.org 0x2c406
	lsls r0, r0, #16	@ 0002c406 0004
.org 0x2c408
	cmp r0, #0	@ 0002c408 0028
.org 0x2c40a
	bne.n 0x2c470	@ 0002c40a 31d1
.org 0x2c40c
	subs r0, r4, #2	@ 0002c40c a01e
.org 0x2c40e
	lsls r0, r0, #16	@ 0002c40e 0004
.org 0x2c410
	lsrs r0, r0, #16	@ 0002c410 000c
.org 0x2c412
	cmp r0, #5	@ 0002c412 0528
.org 0x2c414
	bhi.n 0x2c44c	@ 0002c414 1ad8
.org 0x2c416
	ldr r0, [sp, #0]	@ 0002c416 0098
.org 0x2c418
	movs r2, #128	@ 0002c418 8022
.org 0x2c41a
	lsls r2, r2, #5	@ 0002c41a 5201
.org 0x2c41c
	adds r0, r0, r2	@ 0002c41c 8018
.org 0x2c41e
	adds r1, r7, #0	@ 0002c41e 391c
.org 0x2c420
	bl 0x7020	@ 0002c420 daf7fefd
.org 0x2c424
	lsls r0, r0, #16	@ 0002c424 0004
.org 0x2c426
	cmp r0, #0	@ 0002c426 0028
.org 0x2c428
	bne.n 0x2c470	@ 0002c428 22d1
.org 0x2c42a
	ldr r0, [sp, #0]	@ 0002c42a 0098
.org 0x2c42c
	ldr r1, [pc, #20]	@ 0002c42c 0549
.org 0x2c42e
	ands r0, r1	@ 0002c42e 0840
.org 0x2c430
	ldr r1, [pc, #20]	@ 0002c430 0549
.org 0x2c432
	adds r0, r0, r1	@ 0002c432 4018
.org 0x2c434
	adds r1, r7, #0	@ 0002c434 391c
.org 0x2c436
	bl 0x7e98	@ 0002c436 dbf72ffd
.org 0x2c43a
	cmp r0, #0	@ 0002c43a 0028
.org 0x2c43c
	bgt.n 0x2c470	@ 0002c43c 18dc
.org 0x2c43e
	adds r0, r5, #0	@ 0002c43e 281c
.org 0x2c440
	b.n 0x2c4ec	@ 0002c440 54e0
.org 0x2c442
	.byte 0x00	@ 0002c442 data
.org 0x2c443
	.byte 0x00	@ 0002c443 data
.org 0x2c444
	.byte 0x00,0xf0,0xff,0xff	@ 0002c444 data
.org 0x2c448
	.byte 0xff,0x0f,0x00,0x00	@ 0002c448 data
.org 0x2c44c
	adds r0, r4, #0	@ 0002c44c 201c
.org 0x2c44e
	subs r0, #8	@ 0002c44e 0838
.org 0x2c450
	lsls r0, r0, #16	@ 0002c450 0004
.org 0x2c452
	lsrs r0, r0, #16	@ 0002c452 000c
.org 0x2c454
	cmp r0, #5	@ 0002c454 0528
.org 0x2c456
	bhi.n 0x2c470	@ 0002c456 0bd8
.org 0x2c458
	ldr r0, [sp, #0]	@ 0002c458 0098
.org 0x2c45a
	ldr r1, [pc, #104]	@ 0002c45a 1a49
.org 0x2c45c
	ands r0, r1	@ 0002c45c 0840
.org 0x2c45e
	ldr r1, [pc, #104]	@ 0002c45e 1a49
.org 0x2c460
	adds r0, r0, r1	@ 0002c460 4018
.org 0x2c462
	movs r4, #160	@ 0002c462 a024
.org 0x2c464
	lsls r4, r4, #3	@ 0002c464 e400
.org 0x2c466
	adds r1, r7, r4	@ 0002c466 3919
.org 0x2c468
	bl 0x7e98	@ 0002c468 dbf716fd
.org 0x2c46c
	cmp r0, #0	@ 0002c46c 0028
.org 0x2c46e
	blt.n 0x2c43e	@ 0002c46e e6db
.org 0x2c470
	ldr r0, [sp, #4]	@ 0002c470 0198
.org 0x2c472
	adds r1, r7, #0	@ 0002c472 391c
.org 0x2c474
	bl 0x7020	@ 0002c474 daf7d4fd
.org 0x2c478
	lsls r0, r0, #16	@ 0002c478 0004
.org 0x2c47a
	lsrs r5, r0, #16	@ 0002c47a 050c
.org 0x2c47c
	cmp r5, #0	@ 0002c47c 002d
.org 0x2c47e
	beq.n 0x2c4ea	@ 0002c47e 34d0
.org 0x2c480
	movs r4, #15	@ 0002c480 0f24
.org 0x2c482
	ands r4, r5	@ 0002c482 2c40
.org 0x2c484
	cmp r4, #1	@ 0002c484 012c
.org 0x2c486
	beq.n 0x2c43e	@ 0002c486 dad0
.org 0x2c488
	ldr r0, [sp, #8]	@ 0002c488 0298
.org 0x2c48a
	adds r1, r7, #0	@ 0002c48a 391c
.org 0x2c48c
	bl 0x7d28	@ 0002c48c dbf74cfc
.org 0x2c490
	lsls r0, r0, #16	@ 0002c490 0004
.org 0x2c492
	cmp r0, #0	@ 0002c492 0028
.org 0x2c494
	bne.n 0x2c4ea	@ 0002c494 29d1
.org 0x2c496
	adds r0, r4, #0	@ 0002c496 201c
.org 0x2c498
	subs r0, #8	@ 0002c498 0838
.org 0x2c49a
	lsls r0, r0, #16	@ 0002c49a 0004
.org 0x2c49c
	lsrs r0, r0, #16	@ 0002c49c 000c
.org 0x2c49e
	cmp r0, #5	@ 0002c49e 0528
.org 0x2c4a0
	bhi.n 0x2c4cc	@ 0002c4a0 14d8
.org 0x2c4a2
	ldr r0, [sp, #4]	@ 0002c4a2 0198
.org 0x2c4a4
	ldr r4, [pc, #28]	@ 0002c4a4 074c
.org 0x2c4a6
	adds r0, r0, r4	@ 0002c4a6 0019
.org 0x2c4a8
	adds r1, r7, #0	@ 0002c4a8 391c
.org 0x2c4aa
	bl 0x7020	@ 0002c4aa daf7b9fd
.org 0x2c4ae
	lsls r0, r0, #16	@ 0002c4ae 0004
.org 0x2c4b0
	cmp r0, #0	@ 0002c4b0 0028
.org 0x2c4b2
	bne.n 0x2c4ea	@ 0002c4b2 1ad1
.org 0x2c4b4
	ldr r0, [sp, #4]	@ 0002c4b4 0198
.org 0x2c4b6
	ands r0, r4	@ 0002c4b6 2040
.org 0x2c4b8
	adds r1, r7, #0	@ 0002c4b8 391c
.org 0x2c4ba
	bl 0x7e98	@ 0002c4ba dbf7edfc
.org 0x2c4be
	cmp r0, #0	@ 0002c4be 0028
.org 0x2c4c0
	bgt.n 0x2c4ea	@ 0002c4c0 13dc
.org 0x2c4c2
	b.n 0x2c43e	@ 0002c4c2 bce7
.org 0x2c4c4
	.byte 0x00,0xf0,0xff,0xff	@ 0002c4c4 data
.org 0x2c4c8
	.byte 0xff,0x0f,0x00,0x00	@ 0002c4c8 data
.org 0x2c4cc
	subs r0, r4, #2	@ 0002c4cc a01e
.org 0x2c4ce
	lsls r0, r0, #16	@ 0002c4ce 0004
.org 0x2c4d0
	lsrs r0, r0, #16	@ 0002c4d0 000c
.org 0x2c4d2
	cmp r0, #5	@ 0002c4d2 0528
.org 0x2c4d4
	bhi.n 0x2c4ea	@ 0002c4d4 09d8
.org 0x2c4d6
	ldr r0, [sp, #4]	@ 0002c4d6 0198
.org 0x2c4d8
	ldr r1, [pc, #28]	@ 0002c4d8 0749
.org 0x2c4da
	ands r0, r1	@ 0002c4da 0840
.org 0x2c4dc
	movs r2, #160	@ 0002c4dc a022
.org 0x2c4de
	lsls r2, r2, #3	@ 0002c4de d200
.org 0x2c4e0
	adds r1, r7, r2	@ 0002c4e0 b918
.org 0x2c4e2
	bl 0x7e98	@ 0002c4e2 dbf7d9fc

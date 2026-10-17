@ FUN_0809a334  entry 0x0809a334  size 414
.thumb
.org 0x9a334
FUN_0809a334:
	push {r4, r5, r6, lr}	@ 0009a334 70b5
.org 0x9a336
	adds r4, r0, #0	@ 0009a336 041c
.org 0x9a338
	ldr r5, [r4, #40]	@ 0009a338 a56a
.org 0x9a33a
	bl 0x1cc9c	@ 0009a33a 82f7affc
.org 0x9a33e
	ldrb r1, [r4, #10]	@ 0009a33e a17a
.org 0x9a340
	movs r0, #1	@ 0009a340 0120
.org 0x9a342
	movs r6, #0	@ 0009a342 0026
.org 0x9a344
	orrs r0, r1	@ 0009a344 0843
.org 0x9a346
	movs r1, #2	@ 0009a346 0221
.org 0x9a348
	orrs r0, r1	@ 0009a348 0843
.org 0x9a34a
	strb r0, [r4, #10]	@ 0009a34a a072
.org 0x9a34c
	movs r1, #194	@ 0009a34c c221
.org 0x9a34e
	lsls r1, r1, #7	@ 0009a34e c901
.org 0x9a350
	adds r0, r4, #0	@ 0009a350 201c
.org 0x9a352
	bl 0x1cf00	@ 0009a352 82f7d5fd
.org 0x9a356
	ldrb r0, [r4, #17]	@ 0009a356 607c
.org 0x9a358
	movs r2, #1	@ 0009a358 0122
.org 0x9a35a
	ands r2, r0	@ 0009a35a 0240
.org 0x9a35c
	cmp r2, #0	@ 0009a35c 002a
.org 0x9a35e
	beq.n 0x9a368	@ 0009a35e 03d0
.org 0x9a360
	ldrb r0, [r4, #10]	@ 0009a360 a07a
.org 0x9a362
	movs r1, #16	@ 0009a362 1021
.org 0x9a364
	orrs r0, r1	@ 0009a364 0843
.org 0x9a366
	b.n 0x9a36e	@ 0009a366 02e0
.org 0x9a368
	ldrb r1, [r4, #10]	@ 0009a368 a17a
.org 0x9a36a
	movs r0, #239	@ 0009a36a ef20
.org 0x9a36c
	ands r0, r1	@ 0009a36c 0840
.org 0x9a36e
	strb r0, [r4, #10]	@ 0009a36e a072
.org 0x9a370
	movs r3, #1	@ 0009a370 0123
.org 0x9a372
	adds r1, r3, #0	@ 0009a372 191c
.org 0x9a374
	ands r1, r2	@ 0009a374 1140
.org 0x9a376
	adds r0, r4, #0	@ 0009a376 201c
.org 0x9a378
	adds r0, #76	@ 0009a378 4c30
.org 0x9a37a
	strb r1, [r0, #0]	@ 0009a37a 0170
.org 0x9a37c
	movs r0, #74	@ 0009a37c 4a20
.org 0x9a37e
	adds r0, r0, r4	@ 0009a37e 0019
.org 0x9a380
	mov ip, r0	@ 0009a380 8446
.org 0x9a382
	lsls r1, r1, #4	@ 0009a382 0901
.org 0x9a384
	ldrb r2, [r0, #0]	@ 0009a384 0278
.org 0x9a386
	movs r0, #17	@ 0009a386 1120
.org 0x9a388
	negs r0, r0	@ 0009a388 4042
.org 0x9a38a
	ands r0, r2	@ 0009a38a 1040
.org 0x9a38c
	orrs r0, r1	@ 0009a38c 0843
.org 0x9a38e
	mov r1, ip	@ 0009a38e 6146
.org 0x9a390
	strb r0, [r1, #0]	@ 0009a390 0870
.org 0x9a392
	ldrb r1, [r4, #10]	@ 0009a392 a17a
.org 0x9a394
	movs r0, #32	@ 0009a394 2020
.org 0x9a396
	orrs r0, r1	@ 0009a396 0843
.org 0x9a398
	strb r0, [r4, #10]	@ 0009a398 a072
.org 0x9a39a
	adds r0, r4, #0	@ 0009a39a 201c
.org 0x9a39c
	adds r0, #77	@ 0009a39c 4d30
.org 0x9a39e
	movs r6, #0	@ 0009a39e 0026
.org 0x9a3a0
	strb r3, [r0, #0]	@ 0009a3a0 0370
.org 0x9a3a2
	movs r2, #32	@ 0009a3a2 2022
.org 0x9a3a4
	mov r0, ip	@ 0009a3a4 6046
.org 0x9a3a6
	ldrb r1, [r0, #0]	@ 0009a3a6 0178
.org 0x9a3a8
	movs r0, #33	@ 0009a3a8 2120
.org 0x9a3aa
	negs r0, r0	@ 0009a3aa 4042
.org 0x9a3ac
	ands r0, r1	@ 0009a3ac 0840
.org 0x9a3ae
	orrs r0, r2	@ 0009a3ae 1043
.org 0x9a3b0
	mov r1, ip	@ 0009a3b0 6146
.org 0x9a3b2
	strb r0, [r1, #0]	@ 0009a3b2 0870
.org 0x9a3b4
	ldrb r3, [r4, #17]	@ 0009a3b4 637c
.org 0x9a3b6
	adds r0, r3, #0	@ 0009a3b6 181c
.org 0x9a3b8
	cmp r0, #15	@ 0009a3b8 0f28
.org 0x9a3ba
	bls.n 0x9a40c	@ 0009a3ba 27d9
.org 0x9a3bc
	strb r2, [r4, #19]	@ 0009a3bc e274
.org 0x9a3be
	str r6, [r4, #92]	@ 0009a3be e665
.org 0x9a3c0
	ldrb r1, [r4, #10]	@ 0009a3c0 a17a
.org 0x9a3c2
	movs r2, #16	@ 0009a3c2 1022
.org 0x9a3c4
	adds r0, r2, #0	@ 0009a3c4 101c
.org 0x9a3c6
	ands r0, r1	@ 0009a3c6 0840
.org 0x9a3c8
	cmp r0, #0	@ 0009a3c8 0028
.org 0x9a3ca
	beq.n 0x9a3ec	@ 0009a3ca 0fd0
.org 0x9a3cc
	ldrb r1, [r5, #10]	@ 0009a3cc a97a
.org 0x9a3ce
	adds r0, r2, #0	@ 0009a3ce 101c
.org 0x9a3d0
	ands r0, r1	@ 0009a3d0 0840
.org 0x9a3d2
	cmp r0, #0	@ 0009a3d2 0028
.org 0x9a3d4
	beq.n 0x9a3e2	@ 0009a3d4 05d0
.org 0x9a3d6
	movs r0, #7	@ 0009a3d6 0720
.org 0x9a3d8
	ands r0, r3	@ 0009a3d8 1840
.org 0x9a3da
	lsrs r0, r0, #1	@ 0009a3da 4008
.org 0x9a3dc
	negs r0, r0	@ 0009a3dc 4042
.org 0x9a3de
	lsls r0, r0, #3	@ 0009a3de c000
.org 0x9a3e0
	b.n 0x9a4b6	@ 0009a3e0 69e0
.org 0x9a3e2
	movs r0, #7	@ 0009a3e2 0720
.org 0x9a3e4
	ands r0, r3	@ 0009a3e4 1840
.org 0x9a3e6
	lsrs r0, r0, #1	@ 0009a3e6 4008
.org 0x9a3e8
	lsls r0, r0, #3	@ 0009a3e8 c000
.org 0x9a3ea
	b.n 0x9a4b6	@ 0009a3ea 64e0
.org 0x9a3ec
	ldrb r1, [r5, #10]	@ 0009a3ec a97a
.org 0x9a3ee
	adds r0, r2, #0	@ 0009a3ee 101c
.org 0x9a3f0
	ands r0, r1	@ 0009a3f0 0840
.org 0x9a3f2
	cmp r0, #0	@ 0009a3f2 0028
.org 0x9a3f4
	beq.n 0x9a400	@ 0009a3f4 04d0
.org 0x9a3f6
	movs r0, #7	@ 0009a3f6 0720
.org 0x9a3f8
	ands r0, r3	@ 0009a3f8 1840
.org 0x9a3fa
	lsrs r0, r0, #1	@ 0009a3fa 4008
.org 0x9a3fc
	lsls r0, r0, #3	@ 0009a3fc c000
.org 0x9a3fe
	b.n 0x9a4b6	@ 0009a3fe 5ae0
.org 0x9a400
	movs r0, #7	@ 0009a400 0720
.org 0x9a402
	ands r0, r3	@ 0009a402 1840
.org 0x9a404
	lsrs r0, r0, #1	@ 0009a404 4008
.org 0x9a406
	negs r0, r0	@ 0009a406 4042
.org 0x9a408
	lsls r0, r0, #3	@ 0009a408 c000
.org 0x9a40a
	b.n 0x9a4b6	@ 0009a40a 54e0
.org 0x9a40c
	cmp r0, #7	@ 0009a40c 0728
.org 0x9a40e
	bls.n 0x9a470	@ 0009a40e 2fd9
.org 0x9a410
	adds r1, r4, #0	@ 0009a410 211c
.org 0x9a412
	adds r1, #37	@ 0009a412 2531
.org 0x9a414
	movs r0, #23	@ 0009a414 1720
.org 0x9a416
	strb r0, [r1, #0]	@ 0009a416 0870
.org 0x9a418
	strb r2, [r4, #19]	@ 0009a418 e274
.org 0x9a41a
	str r6, [r4, #92]	@ 0009a41a e665
.org 0x9a41c
	ldrb r1, [r4, #10]	@ 0009a41c a17a
.org 0x9a41e
	movs r2, #16	@ 0009a41e 1022
.org 0x9a420
	adds r0, r2, #0	@ 0009a420 101c
.org 0x9a422
	ands r0, r1	@ 0009a422 0840
.org 0x9a424
	cmp r0, #0	@ 0009a424 0028
.org 0x9a426
	beq.n 0x9a44c	@ 0009a426 11d0
.org 0x9a428
	ldrb r1, [r5, #10]	@ 0009a428 a97a
.org 0x9a42a
	adds r0, r2, #0	@ 0009a42a 101c
.org 0x9a42c
	ands r0, r1	@ 0009a42c 0840
.org 0x9a42e
	cmp r0, #0	@ 0009a42e 0028
.org 0x9a430
	beq.n 0x9a440	@ 0009a430 06d0
.org 0x9a432
	ldrb r1, [r4, #17]	@ 0009a432 617c
.org 0x9a434
	movs r0, #7	@ 0009a434 0720
.org 0x9a436
	ands r0, r1	@ 0009a436 0840
.org 0x9a438
	lsrs r0, r0, #1	@ 0009a438 4008
.org 0x9a43a
	negs r0, r0	@ 0009a43a 4042
.org 0x9a43c
	lsls r0, r0, #3	@ 0009a43c c000
.org 0x9a43e
	b.n 0x9a4b6	@ 0009a43e 3ae0
.org 0x9a440
	ldrb r1, [r4, #17]	@ 0009a440 617c
.org 0x9a442
	movs r0, #7	@ 0009a442 0720
.org 0x9a444
	ands r0, r1	@ 0009a444 0840
.org 0x9a446
	lsrs r0, r0, #1	@ 0009a446 4008
.org 0x9a448
	lsls r0, r0, #3	@ 0009a448 c000
.org 0x9a44a
	b.n 0x9a4b6	@ 0009a44a 34e0
.org 0x9a44c
	ldrb r1, [r5, #10]	@ 0009a44c a97a
.org 0x9a44e
	adds r0, r2, #0	@ 0009a44e 101c
.org 0x9a450
	ands r0, r1	@ 0009a450 0840
.org 0x9a452
	cmp r0, #0	@ 0009a452 0028
.org 0x9a454
	beq.n 0x9a462	@ 0009a454 05d0
.org 0x9a456
	ldrb r1, [r4, #17]	@ 0009a456 617c
.org 0x9a458
	movs r0, #7	@ 0009a458 0720
.org 0x9a45a
	ands r0, r1	@ 0009a45a 0840
.org 0x9a45c
	lsrs r0, r0, #1	@ 0009a45c 4008
.org 0x9a45e
	lsls r0, r0, #3	@ 0009a45e c000
.org 0x9a460
	b.n 0x9a4b6	@ 0009a460 29e0
.org 0x9a462
	ldrb r1, [r4, #17]	@ 0009a462 617c
.org 0x9a464
	movs r0, #7	@ 0009a464 0720
.org 0x9a466
	ands r0, r1	@ 0009a466 0840
.org 0x9a468
	lsrs r0, r0, #1	@ 0009a468 4008
.org 0x9a46a
	negs r0, r0	@ 0009a46a 4042
.org 0x9a46c
	lsls r0, r0, #3	@ 0009a46c c000
.org 0x9a46e
	b.n 0x9a4b6	@ 0009a46e 22e0
.org 0x9a470
	adds r1, r4, #0	@ 0009a470 211c
.org 0x9a472
	adds r1, #37	@ 0009a472 2531
.org 0x9a474
	movs r0, #22	@ 0009a474 1620
.org 0x9a476
	strb r0, [r1, #0]	@ 0009a476 0870
.org 0x9a478
	ldrb r0, [r4, #17]	@ 0009a478 607c
.org 0x9a47a
	lsrs r2, r0, #1	@ 0009a47a 4208
.org 0x9a47c
	lsls r0, r2, #2	@ 0009a47c 9000
.org 0x9a47e
	strb r0, [r4, #19]	@ 0009a47e e074
.org 0x9a480
	str r6, [r4, #92]	@ 0009a480 e665
.org 0x9a482
	ldrb r1, [r4, #10]	@ 0009a482 a17a
.org 0x9a484
	movs r3, #16	@ 0009a484 1023
.org 0x9a486
	adds r0, r3, #0	@ 0009a486 181c
.org 0x9a488
	ands r0, r1	@ 0009a488 0840
.org 0x9a48a
	cmp r0, #0	@ 0009a48a 0028
.org 0x9a48c
	beq.n 0x9a49e	@ 0009a48c 07d0
.org 0x9a48e
	ldrb r1, [r5, #10]	@ 0009a48e a97a
.org 0x9a490
	adds r0, r3, #0	@ 0009a490 181c
.org 0x9a492
	ands r0, r1	@ 0009a492 0840
.org 0x9a494
	cmp r0, #0	@ 0009a494 0028
.org 0x9a496
	bne.n 0x9a4ae	@ 0009a496 0ad1
.org 0x9a498
	lsls r0, r2, #1	@ 0009a498 5000
.org 0x9a49a
	adds r0, r0, r2	@ 0009a49a 8018
.org 0x9a49c
	b.n 0x9a4b4	@ 0009a49c 0ae0
.org 0x9a49e
	ldrb r1, [r5, #10]	@ 0009a49e a97a
.org 0x9a4a0
	adds r0, r3, #0	@ 0009a4a0 181c
.org 0x9a4a2
	ands r0, r1	@ 0009a4a2 0840
.org 0x9a4a4
	cmp r0, #0	@ 0009a4a4 0028
.org 0x9a4a6
	beq.n 0x9a4ae	@ 0009a4a6 02d0
.org 0x9a4a8
	lsls r0, r2, #1	@ 0009a4a8 5000
.org 0x9a4aa
	adds r0, r0, r2	@ 0009a4aa 8018
.org 0x9a4ac
	b.n 0x9a4b4	@ 0009a4ac 02e0
.org 0x9a4ae
	negs r1, r2	@ 0009a4ae 5142
.org 0x9a4b0
	lsls r0, r1, #1	@ 0009a4b0 4800
.org 0x9a4b2
	adds r0, r0, r1	@ 0009a4b2 4018
.org 0x9a4b4
	lsls r0, r0, #1	@ 0009a4b4 4000
.org 0x9a4b6
	str r0, [r4, #100]	@ 0009a4b6 6066
.org 0x9a4b8
	movs r0, #128	@ 0009a4b8 8020
.org 0x9a4ba
	lsls r0, r0, #1	@ 0009a4ba 4000
.org 0x9a4bc
	str r0, [r4, #96]	@ 0009a4bc 2066
.org 0x9a4be
	movs r1, #32	@ 0009a4be 2021
.org 0x9a4c0
	str r1, [r4, #104]	@ 0009a4c0 a166
.org 0x9a4c2
	adds r2, r4, #0	@ 0009a4c2 221c
.org 0x9a4c4
	adds r2, #190	@ 0009a4c4 be32
.org 0x9a4c6
	movs r0, #0	@ 0009a4c6 0020
.org 0x9a4c8
	strh r1, [r2, #0]	@ 0009a4c8 1180
.org 0x9a4ca
	strb r0, [r4, #18]	@ 0009a4ca a074
.org 0x9a4cc
	pop {r4, r5, r6}	@ 0009a4cc 70bc
.org 0x9a4ce
	pop {r0}	@ 0009a4ce 01bc
.org 0x9a4d0
	bx r0	@ 0009a4d0 0047

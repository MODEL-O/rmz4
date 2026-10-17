@ FUN_0800e33c  entry 0x0800e33c  size 790
.thumb
.org 0xe33c
FUN_0800e33c:
	push {r4, r5, r6, r7, lr}	@ 0000e33c f0b5
.org 0xe33e
	mov r7, sl	@ 0000e33e 5746
.org 0xe340
	mov r6, r9	@ 0000e340 4e46
.org 0xe342
	mov r5, r8	@ 0000e342 4546
.org 0xe344
	push {r5, r6, r7}	@ 0000e344 e0b4
.org 0xe346
	sub sp, #16	@ 0000e346 84b0
.org 0xe348
	adds r7, r0, #0	@ 0000e348 071c
.org 0xe34a
	ldr r0, [r7, #92]	@ 0000e34a f86d
.org 0xe34c
	lsls r5, r0, #16	@ 0000e34c 0504
.org 0xe34e
	lsrs r0, r5, #16	@ 0000e34e 280c
.org 0xe350
	mov sl, r0	@ 0000e350 8246
.org 0xe352
	ldr r0, [pc, #32]	@ 0000e352 0848
.org 0xe354
	ldr r1, [pc, #32]	@ 0000e354 0849
.org 0xe356
	adds r0, r0, r1	@ 0000e356 4018
.org 0xe358
	ldrh r0, [r0, #0]	@ 0000e358 0088
.org 0xe35a
	cmp r0, #0	@ 0000e35a 0028
.org 0xe35c
	bne.n 0xe360	@ 0000e35c 00d1
.org 0xe35e
	b.n 0xe588	@ 0000e35e 13e1
.org 0xe360
	adds r0, r7, #0	@ 0000e360 381c
.org 0xe362
	adds r0, #112	@ 0000e362 7030
.org 0xe364
	ldrh r6, [r0, #0]	@ 0000e364 0688
.org 0xe366
	cmp r6, #1	@ 0000e366 012e
.org 0xe368
	beq.n 0xe3fc	@ 0000e368 48d0
.org 0xe36a
	cmp r6, #1	@ 0000e36a 012e
.org 0xe36c
	bgt.n 0xe37c	@ 0000e36c 06dc
.org 0xe36e
	cmp r6, #0	@ 0000e36e 002e
.org 0xe370
	beq.n 0xe38a	@ 0000e370 0bd0
.org 0xe372
	b.n 0xe588	@ 0000e372 09e1
.org 0xe374
	.byte 0xb0,0x0a,0x00,0x02	@ 0000e374 data
.org 0xe378
	.byte 0x02,0xc0,0x02,0x00	@ 0000e378 data
.org 0xe37c
	cmp r6, #2	@ 0000e37c 022e
.org 0xe37e
	bne.n 0xe382	@ 0000e37e 00d1
.org 0xe380
	b.n 0xe48c	@ 0000e380 84e0
.org 0xe382
	cmp r6, #3	@ 0000e382 032e
.org 0xe384
	bne.n 0xe388	@ 0000e384 00d1
.org 0xe386
	b.n 0xe52c	@ 0000e386 d1e0
.org 0xe388
	b.n 0xe588	@ 0000e388 fee0
.org 0xe38a
	lsrs r5, r5, #20	@ 0000e38a 2d0d
.org 0xe38c
	lsls r5, r5, #1	@ 0000e38c 6d00
.org 0xe38e
	ldr r0, [pc, #80]	@ 0000e38e 1448
.org 0xe390
	adds r5, r5, r0	@ 0000e390 2d18
.org 0xe392
	ldrh r0, [r5, #0]	@ 0000e392 2888
.org 0xe394
	movs r4, #248	@ 0000e394 f824
.org 0xe396
	lsls r4, r4, #5	@ 0000e396 6401
.org 0xe398
	adds r1, r4, #0	@ 0000e398 211c
.org 0xe39a
	ands r1, r0	@ 0000e39a 0140
.org 0xe39c
	lsls r1, r1, #3	@ 0000e39c c900
.org 0xe39e
	movs r0, #192	@ 0000e39e c020
.org 0xe3a0
	lsls r0, r0, #19	@ 0000e3a0 c004
.org 0xe3a2
	adds r1, r1, r0	@ 0000e3a2 0918
.org 0xe3a4
	str r6, [sp, #0]	@ 0000e3a4 0096
.org 0xe3a6
	ldr r2, [pc, #60]	@ 0000e3a6 0f4a
.org 0xe3a8
	mov r0, sp	@ 0000e3a8 6846
.org 0xe3aa
	bl 0x128be0	@ 0000e3aa 1af119fc
.org 0xe3ae
	ldr r0, [pc, #56]	@ 0000e3ae 0e48
.org 0xe3b0
	ldr r0, [r0, #0]	@ 0000e3b0 0068
.org 0xe3b2
	ldr r2, [pc, #56]	@ 0000e3b2 0e4a
.org 0xe3b4
	adds r0, r0, r2	@ 0000e3b4 8018
.org 0xe3b6
	ldrh r2, [r5, #0]	@ 0000e3b6 2a88
.org 0xe3b8
	adds r1, r4, #0	@ 0000e3b8 211c
.org 0xe3ba
	ands r1, r2	@ 0000e3ba 1140
.org 0xe3bc
	lsls r1, r1, #3	@ 0000e3bc c900
.org 0xe3be
	ldr r3, [pc, #48]	@ 0000e3be 0c4b
.org 0xe3c0
	adds r1, r1, r3	@ 0000e3c0 c918
.org 0xe3c2
	movs r2, #160	@ 0000e3c2 a022
.org 0xe3c4
	bl 0x128be0	@ 0000e3c4 1af10cfc
.org 0xe3c8
	ldrh r0, [r5, #0]	@ 0000e3c8 2888
.org 0xe3ca
	ands r4, r0	@ 0000e3ca 0440
.org 0xe3cc
	lsls r4, r4, #3	@ 0000e3cc e400
.org 0xe3ce
	ldr r0, [pc, #36]	@ 0000e3ce 0948
.org 0xe3d0
	adds r4, r4, r0	@ 0000e3d0 2418
.org 0xe3d2
	str r6, [sp, #4]	@ 0000e3d2 0196
.org 0xe3d4
	add r0, sp, #4	@ 0000e3d4 01a8
.org 0xe3d6
	ldr r2, [pc, #32]	@ 0000e3d6 084a
.org 0xe3d8
	adds r1, r4, #0	@ 0000e3d8 211c
.org 0xe3da
	bl 0x128be0	@ 0000e3da 1af101fc
.org 0xe3de
	b.n 0xe588	@ 0000e3de d3e0
.org 0xe3e0
	.byte 0x04,0x0a,0x00,0x02	@ 0000e3e0 data
.org 0xe3e4
	.byte 0x00,0x02,0x00,0x01	@ 0000e3e4 data
.org 0xe3e8
	.byte 0xd8,0xc0,0xb2,0x08	@ 0000e3e8 data
.org 0xe3ec
	.byte 0xe0,0xc0,0xb2,0x08	@ 0000e3ec data
.org 0xe3f0
	.byte 0x00,0x08,0x00,0x06	@ 0000e3f0 data
.org 0xe3f4
	.byte 0x80,0x0a,0x00,0x06	@ 0000e3f4 data
.org 0xe3f8
	.byte 0x60,0x01,0x00,0x01	@ 0000e3f8 data
.org 0xe3fc
	ldr r0, [pc, #104]	@ 0000e3fc 1a48
.org 0xe3fe
	ldr r0, [r0, #0]	@ 0000e3fe 0068
.org 0xe400
	ldr r1, [pc, #104]	@ 0000e400 1a49
.org 0xe402
	adds r0, r0, r1	@ 0000e402 4018
.org 0xe404
	lsrs r5, r5, #20	@ 0000e404 2d0d
.org 0xe406
	lsls r5, r5, #1	@ 0000e406 6d00
.org 0xe408
	ldr r1, [pc, #100]	@ 0000e408 1949
.org 0xe40a
	adds r5, r5, r1	@ 0000e40a 6d18
.org 0xe40c
	ldrh r2, [r5, #0]	@ 0000e40c 2a88
.org 0xe40e
	movs r4, #248	@ 0000e40e f824
.org 0xe410
	lsls r4, r4, #5	@ 0000e410 6401
.org 0xe412
	adds r1, r4, #0	@ 0000e412 211c
.org 0xe414
	ands r1, r2	@ 0000e414 1140
.org 0xe416
	lsls r1, r1, #3	@ 0000e416 c900
.org 0xe418
	ldr r2, [pc, #88]	@ 0000e418 164a
.org 0xe41a
	adds r1, r1, r2	@ 0000e41a 8918
.org 0xe41c
	movs r2, #160	@ 0000e41c a022
.org 0xe41e
	bl 0x128be0	@ 0000e41e 1af1dffb
.org 0xe422
	movs r3, #0	@ 0000e422 0023
.org 0xe424
	mov r9, r3	@ 0000e424 9946
.org 0xe426
	ldrh r0, [r5, #0]	@ 0000e426 2888
.org 0xe428
	adds r1, r4, #0	@ 0000e428 211c
.org 0xe42a
	ands r1, r0	@ 0000e42a 0140
.org 0xe42c
	lsls r1, r1, #3	@ 0000e42c c900
.org 0xe42e
	ldr r0, [pc, #72]	@ 0000e42e 1248
.org 0xe430
	adds r1, r1, r0	@ 0000e430 0918
.org 0xe432
	str r3, [sp, #4]	@ 0000e432 0193
.org 0xe434
	add r6, sp, #4	@ 0000e434 01ae
.org 0xe436
	ldr r2, [pc, #68]	@ 0000e436 114a
.org 0xe438
	mov r8, r2	@ 0000e438 9046
.org 0xe43a
	adds r0, r6, #0	@ 0000e43a 301c
.org 0xe43c
	bl 0x128be0	@ 0000e43c 1af1d0fb
.org 0xe440
	ldr r0, [pc, #60]	@ 0000e440 0f48
.org 0xe442
	ldr r0, [r0, #0]	@ 0000e442 0068
.org 0xe444
	ldr r3, [pc, #60]	@ 0000e444 0f4b
.org 0xe446
	adds r0, r0, r3	@ 0000e446 c018
.org 0xe448
	ldrh r2, [r5, #0]	@ 0000e448 2a88
.org 0xe44a
	adds r1, r4, #0	@ 0000e44a 211c
.org 0xe44c
	ands r1, r2	@ 0000e44c 1140
.org 0xe44e
	lsls r1, r1, #3	@ 0000e44e c900
.org 0xe450
	movs r2, #192	@ 0000e450 c022
.org 0xe452
	lsls r2, r2, #19	@ 0000e452 d204
.org 0xe454
	adds r1, r1, r2	@ 0000e454 8918
.org 0xe456
	movs r2, #160	@ 0000e456 a022
.org 0xe458
	bl 0x128be0	@ 0000e458 1af1c2fb
.org 0xe45c
	ldrh r0, [r5, #0]	@ 0000e45c 2888
.org 0xe45e
	ands r4, r0	@ 0000e45e 0440
.org 0xe460
	lsls r4, r4, #3	@ 0000e460 e400
.org 0xe462
	ldr r0, [pc, #36]	@ 0000e462 0948
.org 0xe464
	adds r4, r4, r0	@ 0000e464 2418
.org 0xe466
	b.n 0xe4f8	@ 0000e466 47e0
.org 0xe468
	.byte 0xd8,0xc0,0xb2,0x08	@ 0000e468 data
.org 0xe46c
	.byte 0xe0,0xc0,0xb2,0x08	@ 0000e46c data
.org 0xe470
	.byte 0x04,0x0a,0x00,0x02	@ 0000e470 data
.org 0xe474
	.byte 0x00,0x08,0x00,0x06	@ 0000e474 data
.org 0xe478
	.byte 0x80,0x0a,0x00,0x06	@ 0000e478 data
.org 0xe47c
	.byte 0x60,0x01,0x00,0x01	@ 0000e47c data
.org 0xe480
	.byte 0xfc,0xc0,0xb2,0x08	@ 0000e480 data
.org 0xe484
	.byte 0x04,0xc1,0xb2,0x08	@ 0000e484 data
.org 0xe488
	.byte 0x80,0x02,0x00,0x06	@ 0000e488 data
.org 0xe48c
	ldr r0, [pc, #120]	@ 0000e48c 1e48
.org 0xe48e
	ldr r0, [r0, #0]	@ 0000e48e 0068
.org 0xe490
	ldr r1, [pc, #120]	@ 0000e490 1e49
.org 0xe492
	adds r0, r0, r1	@ 0000e492 4018
.org 0xe494
	lsrs r5, r5, #20	@ 0000e494 2d0d
.org 0xe496
	lsls r5, r5, #1	@ 0000e496 6d00
.org 0xe498
	ldr r1, [pc, #116]	@ 0000e498 1d49
.org 0xe49a
	adds r5, r5, r1	@ 0000e49a 6d18
.org 0xe49c
	ldrh r2, [r5, #0]	@ 0000e49c 2a88
.org 0xe49e
	movs r4, #248	@ 0000e49e f824
.org 0xe4a0
	lsls r4, r4, #5	@ 0000e4a0 6401
.org 0xe4a2
	adds r1, r4, #0	@ 0000e4a2 211c
.org 0xe4a4
	ands r1, r2	@ 0000e4a4 1140
.org 0xe4a6
	lsls r1, r1, #3	@ 0000e4a6 c900
.org 0xe4a8
	movs r2, #192	@ 0000e4a8 c022
.org 0xe4aa
	lsls r2, r2, #19	@ 0000e4aa d204
.org 0xe4ac
	adds r1, r1, r2	@ 0000e4ac 8918
.org 0xe4ae
	movs r2, #160	@ 0000e4ae a022
.org 0xe4b0
	bl 0x128be0	@ 0000e4b0 1af196fb
.org 0xe4b4
	movs r2, #0	@ 0000e4b4 0022
.org 0xe4b6
	mov r9, r2	@ 0000e4b6 9146
.org 0xe4b8
	ldrh r0, [r5, #0]	@ 0000e4b8 2888
.org 0xe4ba
	adds r1, r4, #0	@ 0000e4ba 211c
.org 0xe4bc
	ands r1, r0	@ 0000e4bc 0140
.org 0xe4be
	lsls r1, r1, #3	@ 0000e4be c900
.org 0xe4c0
	ldr r0, [pc, #80]	@ 0000e4c0 1448
.org 0xe4c2
	adds r1, r1, r0	@ 0000e4c2 0918
.org 0xe4c4
	str r2, [sp, #4]	@ 0000e4c4 0192
.org 0xe4c6
	add r6, sp, #4	@ 0000e4c6 01ae
.org 0xe4c8
	ldr r3, [pc, #76]	@ 0000e4c8 134b
.org 0xe4ca
	mov r8, r3	@ 0000e4ca 9846
.org 0xe4cc
	adds r0, r6, #0	@ 0000e4cc 301c
.org 0xe4ce
	mov r2, r8	@ 0000e4ce 4246
.org 0xe4d0
	bl 0x128be0	@ 0000e4d0 1af186fb
.org 0xe4d4
	ldr r0, [pc, #68]	@ 0000e4d4 1148
.org 0xe4d6
	ldr r0, [r0, #0]	@ 0000e4d6 0068
.org 0xe4d8
	ldr r1, [pc, #68]	@ 0000e4d8 1149
.org 0xe4da
	adds r0, r0, r1	@ 0000e4da 4018
.org 0xe4dc
	ldrh r2, [r5, #0]	@ 0000e4dc 2a88
.org 0xe4de
	adds r1, r4, #0	@ 0000e4de 211c
.org 0xe4e0
	ands r1, r2	@ 0000e4e0 1140
.org 0xe4e2
	lsls r1, r1, #3	@ 0000e4e2 c900
.org 0xe4e4
	ldr r2, [pc, #60]	@ 0000e4e4 0f4a
.org 0xe4e6
	adds r1, r1, r2	@ 0000e4e6 8918
.org 0xe4e8
	movs r2, #160	@ 0000e4e8 a022
.org 0xe4ea
	bl 0x128be0	@ 0000e4ea 1af179fb
.org 0xe4ee
	ldrh r0, [r5, #0]	@ 0000e4ee 2888
.org 0xe4f0
	ands r4, r0	@ 0000e4f0 0440
.org 0xe4f2
	lsls r4, r4, #3	@ 0000e4f2 e400
.org 0xe4f4
	ldr r3, [pc, #48]	@ 0000e4f4 0c4b
.org 0xe4f6
	adds r4, r4, r3	@ 0000e4f6 e418
.org 0xe4f8
	mov r0, r9	@ 0000e4f8 4846
.org 0xe4fa
	str r0, [sp, #4]	@ 0000e4fa 0190
.org 0xe4fc
	adds r0, r6, #0	@ 0000e4fc 301c
.org 0xe4fe
	adds r1, r4, #0	@ 0000e4fe 211c
.org 0xe500
	mov r2, r8	@ 0000e500 4246
.org 0xe502
	bl 0x128be0	@ 0000e502 1af16dfb
.org 0xe506
	b.n 0xe588	@ 0000e506 3fe0
.org 0xe508
	.byte 0xfc,0xc0,0xb2,0x08	@ 0000e508 data
.org 0xe50c
	.byte 0x04,0xc1,0xb2,0x08	@ 0000e50c data
.org 0xe510
	.byte 0x04,0x0a,0x00,0x02	@ 0000e510 data
.org 0xe514
	.byte 0x80,0x02,0x00,0x06	@ 0000e514 data
.org 0xe518
	.byte 0x60,0x01,0x00,0x01	@ 0000e518 data
.org 0xe51c
	.byte 0x00,0xc1,0xb2,0x08	@ 0000e51c data
.org 0xe520
	.byte 0x08,0xc1,0xb2,0x08	@ 0000e520 data
.org 0xe524
	.byte 0x00,0x08,0x00,0x06	@ 0000e524 data
.org 0xe528
	.byte 0x80,0x0a,0x00,0x06	@ 0000e528 data
.org 0xe52c
	ldr r0, [pc, #124]	@ 0000e52c 1f48
.org 0xe52e
	ldr r0, [r0, #0]	@ 0000e52e 0068
.org 0xe530
	ldr r1, [pc, #124]	@ 0000e530 1f49
.org 0xe532
	adds r0, r0, r1	@ 0000e532 4018
.org 0xe534
	lsrs r5, r5, #20	@ 0000e534 2d0d
.org 0xe536
	lsls r5, r5, #1	@ 0000e536 6d00
.org 0xe538
	ldr r1, [pc, #120]	@ 0000e538 1e49
.org 0xe53a
	adds r5, r5, r1	@ 0000e53a 6d18
.org 0xe53c
	ldrh r2, [r5, #0]	@ 0000e53c 2a88
.org 0xe53e
	movs r4, #248	@ 0000e53e f824
.org 0xe540
	lsls r4, r4, #5	@ 0000e540 6401
.org 0xe542
	adds r1, r4, #0	@ 0000e542 211c
.org 0xe544
	ands r1, r2	@ 0000e544 1140
.org 0xe546
	lsls r1, r1, #3	@ 0000e546 c900
.org 0xe548
	ldr r2, [pc, #108]	@ 0000e548 1b4a
.org 0xe54a
	adds r1, r1, r2	@ 0000e54a 8918
.org 0xe54c
	movs r2, #160	@ 0000e54c a022
.org 0xe54e
	bl 0x128be0	@ 0000e54e 1af147fb
.org 0xe552
	movs r3, #0	@ 0000e552 0023
.org 0xe554
	mov r8, r3	@ 0000e554 9846
.org 0xe556
	ldrh r0, [r5, #0]	@ 0000e556 2888
.org 0xe558
	adds r1, r4, #0	@ 0000e558 211c
.org 0xe55a
	ands r1, r0	@ 0000e55a 0140
.org 0xe55c
	lsls r1, r1, #3	@ 0000e55c c900
.org 0xe55e
	ldr r0, [pc, #92]	@ 0000e55e 1748
.org 0xe560
	adds r1, r1, r0	@ 0000e560 0918
.org 0xe562
	str r3, [sp, #4]	@ 0000e562 0193
.org 0xe564
	add r6, sp, #4	@ 0000e564 01ae
.org 0xe566
	ldr r2, [pc, #88]	@ 0000e566 164a
.org 0xe568
	adds r0, r6, #0	@ 0000e568 301c
.org 0xe56a
	bl 0x128be0	@ 0000e56a 1af139fb
.org 0xe56e
	ldrh r0, [r5, #0]	@ 0000e56e 2888
.org 0xe570
	ands r4, r0	@ 0000e570 0440
.org 0xe572
	lsls r4, r4, #3	@ 0000e572 e400
.org 0xe574
	movs r0, #192	@ 0000e574 c020
.org 0xe576
	lsls r0, r0, #19	@ 0000e576 c004
.org 0xe578
	adds r4, r4, r0	@ 0000e578 2418
.org 0xe57a
	mov r1, r8	@ 0000e57a 4146
.org 0xe57c
	str r1, [sp, #4]	@ 0000e57c 0191
.org 0xe57e
	ldr r2, [pc, #68]	@ 0000e57e 114a
.org 0xe580
	adds r0, r6, #0	@ 0000e580 301c
.org 0xe582
	adds r1, r4, #0	@ 0000e582 211c
.org 0xe584
	bl 0x128be0	@ 0000e584 1af12cfb
.org 0xe588
	ldr r1, [r7, #56]	@ 0000e588 b96b
.org 0xe58a
	ldr r0, [pc, #60]	@ 0000e58a 0f48
.org 0xe58c
	cmp r1, r0	@ 0000e58c 8142
.org 0xe58e
	bgt.n 0xe5cc	@ 0000e58e 1ddc
.org 0xe590
	adds r0, r7, #0	@ 0000e590 381c
.org 0xe592
	adds r0, #104	@ 0000e592 6830
.org 0xe594
	ldrh r0, [r0, #0]	@ 0000e594 0088
.org 0xe596
	lsls r0, r0, #16	@ 0000e596 0004
.org 0xe598
	cmp r0, #0	@ 0000e598 0028
.org 0xe59a
	beq.n 0xe5cc	@ 0000e59a 17d0
.org 0xe59c
	lsrs r0, r0, #20	@ 0000e59c 000d
.org 0xe59e
	ldr r1, [r7, #108]	@ 0000e59e f96e
.org 0xe5a0
	ldr r2, [r7, #52]	@ 0000e5a0 7a6b
.org 0xe5a2
	subs r1, r1, r2	@ 0000e5a2 891a
.org 0xe5a4
	subs r0, r0, r1	@ 0000e5a4 401a
.org 0xe5a6
	mov r8, r0	@ 0000e5a6 8046
.org 0xe5a8
	b.n 0xe5d0	@ 0000e5a8 12e0
.org 0xe5aa
	.byte 0x00	@ 0000e5aa data
.org 0xe5ab
	.byte 0x00	@ 0000e5ab data
.org 0xe5ac
	.byte 0x00,0xc1,0xb2,0x08	@ 0000e5ac data
.org 0xe5b0
	.byte 0x08,0xc1,0xb2,0x08	@ 0000e5b0 data
.org 0xe5b4
	.byte 0x04,0x0a,0x00,0x02	@ 0000e5b4 data
.org 0xe5b8
	.byte 0x00,0x08,0x00,0x06	@ 0000e5b8 data
.org 0xe5bc
	.byte 0x80,0x0a,0x00,0x06	@ 0000e5bc data
.org 0xe5c0
	.byte 0x60,0x01,0x00,0x01	@ 0000e5c0 data
.org 0xe5c4
	.byte 0x00,0x02,0x00,0x01	@ 0000e5c4 data
.org 0xe5c8
	.byte 0x2f,0x03,0x00,0x00	@ 0000e5c8 data
.org 0xe5cc
	movs r2, #0	@ 0000e5cc 0022
.org 0xe5ce
	mov r8, r2	@ 0000e5ce 9046
.org 0xe5d0
	adds r2, r7, #0	@ 0000e5d0 3a1c
.org 0xe5d2
	adds r2, #112	@ 0000e5d2 7032
.org 0xe5d4
	ldrh r0, [r2, #0]	@ 0000e5d4 1088
.org 0xe5d6
	adds r0, #1	@ 0000e5d6 0130
.org 0xe5d8
	lsls r0, r0, #8	@ 0000e5d8 0002
.org 0xe5da
	adds r0, #16	@ 0000e5da 1030
.org 0xe5dc
	mov r3, sl	@ 0000e5dc 5346
.org 0xe5de
	lsrs r6, r3, #4	@ 0000e5de 1e09
.org 0xe5e0
	cmp r8, r0	@ 0000e5e0 8045
.org 0xe5e2
	bge.n 0xe5e6	@ 0000e5e2 00da
.org 0xe5e4
	b.n 0xe6e6	@ 0000e5e4 7fe0
.org 0xe5e6
	ldr r0, [r7, #52]	@ 0000e5e6 786b
.org 0xe5e8
	lsls r0, r0, #8	@ 0000e5e8 0002
.org 0xe5ea
	movs r1, #176	@ 0000e5ea b021
.org 0xe5ec
	lsls r1, r1, #9	@ 0000e5ec 4902
.org 0xe5ee
	adds r0, r0, r1	@ 0000e5ee 4018
.org 0xe5f0
	str r0, [sp, #8]	@ 0000e5f0 0290
.org 0xe5f2
	movs r0, #190	@ 0000e5f2 be20
.org 0xe5f4
	lsls r0, r0, #10	@ 0000e5f4 8002
.org 0xe5f6
	add r1, sp, #8	@ 0000e5f6 02a9
.org 0xe5f8
	str r0, [r1, #4]	@ 0000e5f8 4860
.org 0xe5fa
	ldrh r0, [r2, #0]	@ 0000e5fa 1088
.org 0xe5fc
	adds r0, #1	@ 0000e5fc 0130
.org 0xe5fe
	movs r3, #0	@ 0000e5fe 0023
.org 0xe600
	mov r9, r3	@ 0000e600 9946
.org 0xe602
	strh r0, [r2, #0]	@ 0000e602 1080
.org 0xe604
	lsls r0, r0, #16	@ 0000e604 0004
.org 0xe606
	lsrs r0, r0, #16	@ 0000e606 000c
.org 0xe608
	cmp r0, #1	@ 0000e608 0128
.org 0xe60a
	bne.n 0xe65c	@ 0000e60a 27d1
.org 0xe60c
	adds r0, r1, #0	@ 0000e60c 081c
.org 0xe60e
	movs r1, #0	@ 0000e60e 0021
.org 0xe610
	bl 0xf20c4	@ 0000e610 e3f058fd
.org 0xe614
	ldr r0, [pc, #52]	@ 0000e614 0d48
.org 0xe616
	ldr r0, [r0, #0]	@ 0000e616 0068
.org 0xe618
	ldr r1, [pc, #52]	@ 0000e618 0d49
.org 0xe61a
	adds r0, r0, r1	@ 0000e61a 4018
.org 0xe61c
	lsls r5, r6, #1	@ 0000e61c 7500
.org 0xe61e
	ldr r1, [pc, #52]	@ 0000e61e 0d49
.org 0xe620
	adds r5, r5, r1	@ 0000e620 6d18
.org 0xe622
	ldrh r2, [r5, #0]	@ 0000e622 2a88
.org 0xe624
	movs r4, #248	@ 0000e624 f824
.org 0xe626
	lsls r4, r4, #5	@ 0000e626 6401
.org 0xe628
	adds r1, r4, #0	@ 0000e628 211c
.org 0xe62a
	ands r1, r2	@ 0000e62a 1140
.org 0xe62c
	lsls r1, r1, #3	@ 0000e62c c900
.org 0xe62e
	movs r2, #192	@ 0000e62e c022
.org 0xe630
	lsls r2, r2, #19	@ 0000e630 d204
.org 0xe632
	adds r1, r1, r2	@ 0000e632 8918
.org 0xe634
	movs r2, #160	@ 0000e634 a022
.org 0xe636
	bl 0x128be0	@ 0000e636 1af1d3fa
.org 0xe63a
	ldrh r0, [r5, #0]	@ 0000e63a 2888
.org 0xe63c
	ands r4, r0	@ 0000e63c 0440
.org 0xe63e
	lsls r4, r4, #3	@ 0000e63e e400
.org 0xe640
	ldr r0, [pc, #20]	@ 0000e640 0548
.org 0xe642
	adds r4, r4, r0	@ 0000e642 2418
.org 0xe644
	mov r2, r9	@ 0000e644 4a46
.org 0xe646
	str r2, [sp, #4]	@ 0000e646 0192
.org 0xe648
	b.n 0xe69a	@ 0000e648 27e0
.org 0xe64a
	.byte 0x00	@ 0000e64a data
.org 0xe64b
	.byte 0x00	@ 0000e64b data
.org 0xe64c
	.byte 0xfc,0xc0,0xb2,0x08	@ 0000e64c data
.org 0xe650
	.byte 0x04,0xc1,0xb2,0x08	@ 0000e650 data

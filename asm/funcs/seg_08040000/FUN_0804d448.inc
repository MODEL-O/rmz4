@ FUN_0804d448  entry 0x0804d448  size 398
.thumb
.org 0x4d448
FUN_0804d448:
	push {r4, r5, r6, lr}	@ 0004d448 70b5
.org 0x4d44a
	adds r5, r0, #0	@ 0004d44a 051c
.org 0x4d44c
	ldr r6, [r5, #40]	@ 0004d44c ae6a
.org 0x4d44e
	movs r1, #168	@ 0004d44e a821
.org 0x4d450
	lsls r1, r1, #1	@ 0004d450 4900
.org 0x4d452
	adds r0, r6, r1	@ 0004d452 7018
.org 0x4d454
	ldrb r0, [r0, #0]	@ 0004d454 0078
.org 0x4d456
	cmp r0, #255	@ 0004d456 ff28
.org 0x4d458
	bne.n 0x4d4a8	@ 0004d458 26d1
.org 0x4d45a
	ldr r0, [pc, #68]	@ 0004d45a 1148
.org 0x4d45c
	adds r2, r6, r0	@ 0004d45c 3218
.org 0x4d45e
	ldrb r0, [r2, #0]	@ 0004d45e 1078
.org 0x4d460
	movs r1, #64	@ 0004d460 4021
.org 0x4d462
	orrs r0, r1	@ 0004d462 0843
.org 0x4d464
	strb r0, [r2, #0]	@ 0004d464 1070
.org 0x4d466
	ldrb r1, [r5, #10]	@ 0004d466 a97a
.org 0x4d468
	movs r0, #254	@ 0004d468 fe20
.org 0x4d46a
	ands r0, r1	@ 0004d46a 0840
.org 0x4d46c
	movs r2, #0	@ 0004d46c 0022
.org 0x4d46e
	movs r1, #253	@ 0004d46e fd21
.org 0x4d470
	ands r0, r1	@ 0004d470 0840
.org 0x4d472
	strb r0, [r5, #10]	@ 0004d472 a872
.org 0x4d474
	adds r0, r5, #0	@ 0004d474 281c
.org 0x4d476
	adds r0, #140	@ 0004d476 8c30
.org 0x4d478
	str r2, [r0, #0]	@ 0004d478 0260
.org 0x4d47a
	adds r0, #4	@ 0004d47a 0430
.org 0x4d47c
	str r2, [r0, #0]	@ 0004d47c 0260
.org 0x4d47e
	adds r0, #4	@ 0004d47e 0430
.org 0x4d480
	strb r2, [r0, #0]	@ 0004d480 0270
.org 0x4d482
	ldrb r1, [r5, #10]	@ 0004d482 a97a
.org 0x4d484
	movs r0, #251	@ 0004d484 fb20
.org 0x4d486
	ands r0, r1	@ 0004d486 0840
.org 0x4d488
	strb r0, [r5, #10]	@ 0004d488 a872
.org 0x4d48a
	ldr r1, [pc, #24]	@ 0004d48a 0649
.org 0x4d48c
	ldrb r0, [r5, #9]	@ 0004d48c 687a
.org 0x4d48e
	lsls r0, r0, #2	@ 0004d48e 8000
.org 0x4d490
	adds r0, r0, r1	@ 0004d490 4018
.org 0x4d492
	movs r1, #3	@ 0004d492 0321
.org 0x4d494
	str r1, [r5, #12]	@ 0004d494 e960
.org 0x4d496
	ldr r0, [r0, #0]	@ 0004d496 0068
.org 0x4d498
	ldr r0, [r0, #12]	@ 0004d498 c068
.org 0x4d49a
	str r0, [r5, #20]	@ 0004d49a 6861
.org 0x4d49c
	b.n 0x4d5ea	@ 0004d49c a5e0
.org 0x4d49e
	.byte 0x00	@ 0004d49e data
.org 0x4d49f
	.byte 0x00	@ 0004d49f data
.org 0x4d4a0
	.byte 0x53,0x01,0x00,0x00	@ 0004d4a0 data
.org 0x4d4a4
	.byte 0xf8,0x39,0x85,0x08	@ 0004d4a4 data
.org 0x4d4a8
	adds r0, r5, #0	@ 0004d4a8 281c
.org 0x4d4aa
	bl 0x1cff0	@ 0004d4aa cff7a1fd
.org 0x4d4ae
	ldrb r0, [r5, #14]	@ 0004d4ae a87b
.org 0x4d4b0
	cmp r0, #0	@ 0004d4b0 0028
.org 0x4d4b2
	bne.n 0x4d4ee	@ 0004d4b2 1cd1
.org 0x4d4b4
	adds r0, r5, #0	@ 0004d4b4 281c
.org 0x4d4b6
	adds r0, #140	@ 0004d4b6 8c30
.org 0x4d4b8
	ldr r0, [r0, #0]	@ 0004d4b8 0068
.org 0x4d4ba
	movs r1, #4	@ 0004d4ba 0421
.org 0x4d4bc
	ands r0, r1	@ 0004d4bc 0840
.org 0x4d4be
	cmp r0, #0	@ 0004d4be 0028
.org 0x4d4c0
	beq.n 0x4d4ee	@ 0004d4c0 15d0
.org 0x4d4c2
	adds r0, r6, #0	@ 0004d4c2 301c
.org 0x4d4c4
	bl 0x3aabc	@ 0004d4c4 edf7fafa
.org 0x4d4c8
	lsls r0, r0, #24	@ 0004d4c8 0006
.org 0x4d4ca
	cmp r0, #0	@ 0004d4ca 0028
.org 0x4d4cc
	beq.n 0x4d4e8	@ 0004d4cc 0cd0
.org 0x4d4ce
	adds r1, r5, #0	@ 0004d4ce 291c
.org 0x4d4d0
	adds r1, #84	@ 0004d4d0 5431
.org 0x4d4d2
	movs r0, #1	@ 0004d4d2 0120
.org 0x4d4d4
	bl 0xd0c88	@ 0004d4d4 83f0d8fb
.org 0x4d4d8
	movs r0, #42	@ 0004d4d8 2a20
.org 0x4d4da
	bl 0x2b10	@ 0004d4da b5f719fb
.org 0x4d4de
	ldr r1, [pc, #4]	@ 0004d4de 0149
.org 0x4d4e0
	adds r2, r6, r1	@ 0004d4e0 7218
.org 0x4d4e2
	b.n 0x4d508	@ 0004d4e2 11e0
.org 0x4d4e4
	.byte 0x53,0x01,0x00,0x00	@ 0004d4e4 data
.org 0x4d4e8
	ldrb r0, [r5, #14]	@ 0004d4e8 a87b
.org 0x4d4ea
	adds r0, #1	@ 0004d4ea 0130
.org 0x4d4ec
	strb r0, [r5, #14]	@ 0004d4ec a873
.org 0x4d4ee
	ldrb r3, [r5, #13]	@ 0004d4ee 6b7b
.org 0x4d4f0
	adds r2, r3, #0	@ 0004d4f0 1a1c
.org 0x4d4f2
	cmp r2, #0	@ 0004d4f2 002a
.org 0x4d4f4
	beq.n 0x4d52c	@ 0004d4f4 1ad0
.org 0x4d4f6
	ldrb r0, [r5, #18]	@ 0004d4f6 a87c
.org 0x4d4f8
	adds r1, r0, #1	@ 0004d4f8 411c
.org 0x4d4fa
	strb r1, [r5, #18]	@ 0004d4fa a974
.org 0x4d4fc
	lsls r0, r0, #24	@ 0004d4fc 0006
.org 0x4d4fe
	lsrs r0, r0, #24	@ 0004d4fe 000e
.org 0x4d500
	cmp r0, #3	@ 0004d500 0328
.org 0x4d502
	bls.n 0x4d540	@ 0004d502 1dd9
.org 0x4d504
	ldr r0, [pc, #28]	@ 0004d504 0748
.org 0x4d506
	adds r2, r6, r0	@ 0004d506 3218
.org 0x4d508
	ldrb r0, [r2, #0]	@ 0004d508 1078
.org 0x4d50a
	movs r1, #64	@ 0004d50a 4021
.org 0x4d50c
	orrs r0, r1	@ 0004d50c 0843
.org 0x4d50e
	strb r0, [r2, #0]	@ 0004d50e 1070
.org 0x4d510
	ldr r1, [pc, #20]	@ 0004d510 0549
.org 0x4d512
	ldrb r0, [r5, #9]	@ 0004d512 687a
.org 0x4d514
	lsls r0, r0, #2	@ 0004d514 8000
.org 0x4d516
	adds r0, r0, r1	@ 0004d516 4018
.org 0x4d518
	movs r1, #2	@ 0004d518 0221
.org 0x4d51a
	str r1, [r5, #12]	@ 0004d51a e960
.org 0x4d51c
	ldr r0, [r0, #0]	@ 0004d51c 0068
.org 0x4d51e
	ldr r0, [r0, #8]	@ 0004d51e 8068
.org 0x4d520
	str r0, [r5, #20]	@ 0004d520 6861
.org 0x4d522
	b.n 0x4d5ea	@ 0004d522 62e0
.org 0x4d524
	.byte 0x53,0x01,0x00,0x00	@ 0004d524 data
.org 0x4d528
	.byte 0xf8,0x39,0x85,0x08	@ 0004d528 data
.org 0x4d52c
	ldrb r0, [r5, #18]	@ 0004d52c a87c
.org 0x4d52e
	adds r1, r0, #1	@ 0004d52e 411c
.org 0x4d530
	strb r1, [r5, #18]	@ 0004d530 a974
.org 0x4d532
	lsls r0, r0, #24	@ 0004d532 0006
.org 0x4d534
	lsrs r0, r0, #24	@ 0004d534 000e
.org 0x4d536
	cmp r0, #3	@ 0004d536 0328
.org 0x4d538
	bls.n 0x4d540	@ 0004d538 02d9
.org 0x4d53a
	strb r2, [r5, #18]	@ 0004d53a aa74
.org 0x4d53c
	adds r0, r3, #1	@ 0004d53c 581c
.org 0x4d53e
	strb r0, [r5, #13]	@ 0004d53e 6873
.org 0x4d540
	ldrb r0, [r6, #10]	@ 0004d540 b07a
.org 0x4d542
	lsrs r2, r0, #4	@ 0004d542 0209
.org 0x4d544
	movs r0, #1	@ 0004d544 0120
.org 0x4d546
	ands r2, r0	@ 0004d546 0240
.org 0x4d548
	cmp r2, #0	@ 0004d548 002a
.org 0x4d54a
	beq.n 0x4d554	@ 0004d54a 03d0
.org 0x4d54c
	ldrb r1, [r5, #10]	@ 0004d54c a97a
.org 0x4d54e
	movs r0, #16	@ 0004d54e 1020
.org 0x4d550
	orrs r0, r1	@ 0004d550 0843
.org 0x4d552
	b.n 0x4d55a	@ 0004d552 02e0
.org 0x4d554
	ldrb r1, [r5, #10]	@ 0004d554 a97a
.org 0x4d556
	movs r0, #239	@ 0004d556 ef20
.org 0x4d558
	ands r0, r1	@ 0004d558 0840
.org 0x4d55a
	strb r0, [r5, #10]	@ 0004d55a a872
.org 0x4d55c
	adds r1, r2, #0	@ 0004d55c 111c
.org 0x4d55e
	adds r0, r5, #0	@ 0004d55e 281c
.org 0x4d560
	adds r0, #76	@ 0004d560 4c30
.org 0x4d562
	strb r1, [r0, #0]	@ 0004d562 0170
.org 0x4d564
	adds r3, r5, #0	@ 0004d564 2b1c
.org 0x4d566
	adds r3, #74	@ 0004d566 4a33
.org 0x4d568
	lsls r1, r1, #4	@ 0004d568 0901
.org 0x4d56a
	ldrb r2, [r3, #0]	@ 0004d56a 1a78
.org 0x4d56c
	movs r0, #17	@ 0004d56c 1120
.org 0x4d56e
	negs r0, r0	@ 0004d56e 4042
.org 0x4d570
	ands r0, r2	@ 0004d570 1040
.org 0x4d572
	orrs r0, r1	@ 0004d572 0843
.org 0x4d574
	strb r0, [r3, #0]	@ 0004d574 1870
.org 0x4d576
	adds r0, r6, #0	@ 0004d576 301c
.org 0x4d578
	adds r0, #113	@ 0004d578 7130
.org 0x4d57a
	ldrb r0, [r0, #0]	@ 0004d57a 0078
.org 0x4d57c
	lsls r0, r0, #24	@ 0004d57c 0006
.org 0x4d57e
	asrs r0, r0, #24	@ 0004d57e 0016
.org 0x4d580
	movs r4, #0	@ 0004d580 0024
.org 0x4d582
	cmp r0, #3	@ 0004d582 0328
.org 0x4d584
	bne.n 0x4d588	@ 0004d584 00d1
.org 0x4d586
	movs r4, #1	@ 0004d586 0124
.org 0x4d588
	ldrb r1, [r5, #10]	@ 0004d588 a97a
.org 0x4d58a
	movs r0, #16	@ 0004d58a 1020
.org 0x4d58c
	ands r0, r1	@ 0004d58c 0840
.org 0x4d58e
	cmp r0, #0	@ 0004d58e 0028
.org 0x4d590
	beq.n 0x4d5b0	@ 0004d590 0ed0
.org 0x4d592
	ldr r3, [pc, #24]	@ 0004d592 064b
.org 0x4d594
	lsls r4, r4, #3	@ 0004d594 e400
.org 0x4d596
	movs r1, #168	@ 0004d596 a821
.org 0x4d598
	lsls r1, r1, #1	@ 0004d598 4900
.org 0x4d59a
	adds r2, r6, r1	@ 0004d59a 7218
.org 0x4d59c
	ldrb r0, [r2, #0]	@ 0004d59c 1078
.org 0x4d59e
	lsls r0, r0, #4	@ 0004d59e 0001
.org 0x4d5a0
	adds r0, r4, r0	@ 0004d5a0 2018
.org 0x4d5a2
	adds r0, r0, r3	@ 0004d5a2 c018
.org 0x4d5a4
	ldr r1, [r6, #84]	@ 0004d5a4 716d
.org 0x4d5a6
	ldr r0, [r0, #0]	@ 0004d5a6 0068
.org 0x4d5a8
	subs r1, r1, r0	@ 0004d5a8 091a
.org 0x4d5aa
	b.n 0x4d5c8	@ 0004d5aa 0de0
.org 0x4d5ac
	.byte 0x4c,0x35,0x85,0x08	@ 0004d5ac data
.org 0x4d5b0
	ldr r3, [pc, #60]	@ 0004d5b0 0f4b
.org 0x4d5b2
	lsls r4, r4, #3	@ 0004d5b2 e400
.org 0x4d5b4
	movs r0, #168	@ 0004d5b4 a820
.org 0x4d5b6
	lsls r0, r0, #1	@ 0004d5b6 4000
.org 0x4d5b8
	adds r2, r6, r0	@ 0004d5b8 3218
.org 0x4d5ba
	ldrb r0, [r2, #0]	@ 0004d5ba 1078
.org 0x4d5bc
	lsls r0, r0, #4	@ 0004d5bc 0001
.org 0x4d5be
	adds r0, r4, r0	@ 0004d5be 2018
.org 0x4d5c0
	adds r0, r0, r3	@ 0004d5c0 c018
.org 0x4d5c2
	ldr r1, [r6, #84]	@ 0004d5c2 716d
.org 0x4d5c4
	ldr r0, [r0, #0]	@ 0004d5c4 0068
.org 0x4d5c6
	adds r1, r1, r0	@ 0004d5c6 0918
.org 0x4d5c8
	str r1, [r5, #84]	@ 0004d5c8 6965
.org 0x4d5ca
	ldrb r0, [r2, #0]	@ 0004d5ca 1078
.org 0x4d5cc
	lsls r0, r0, #4	@ 0004d5cc 0001
.org 0x4d5ce
	adds r0, r4, r0	@ 0004d5ce 2018
.org 0x4d5d0
	adds r1, r3, #4	@ 0004d5d0 191d
.org 0x4d5d2
	adds r0, r0, r1	@ 0004d5d2 4018
.org 0x4d5d4
	ldr r1, [r6, #88]	@ 0004d5d4 b16d

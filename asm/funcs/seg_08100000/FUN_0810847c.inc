@ FUN_0810847c  entry 0x0810847c  size 254
.thumb
.org 0x10847c
FUN_0810847c:
	push {r4, r5, r6, lr}	@ 0010847c 70b5
.org 0x10847e
	adds r5, r0, #0	@ 0010847e 051c
.org 0x108480
	ldrb r1, [r5, #16]	@ 00108480 297c
.org 0x108482
	subs r0, r1, #7	@ 00108482 c81f
.org 0x108484
	lsls r0, r0, #24	@ 00108484 0006
.org 0x108486
	lsrs r0, r0, #24	@ 00108486 000e
.org 0x108488
	cmp r0, #1	@ 00108488 0128
.org 0x10848a
	bhi.n 0x1084e4	@ 0010848a 2bd8
.org 0x10848c
	ldr r0, [pc, #76]	@ 0010848c 1348
.org 0x10848e
	ldr r0, [r0, #0]	@ 0010848e 0068
.org 0x108490
	movs r2, #0	@ 00108490 0022
.org 0x108492
	cmp r1, #8	@ 00108492 0829
.org 0x108494
	bne.n 0x108498	@ 00108494 00d1
.org 0x108496
	movs r2, #1	@ 00108496 0122
.org 0x108498
	adds r0, #188	@ 00108498 bc30
.org 0x10849a
	adds r0, r0, r2	@ 0010849a 8018
.org 0x10849c
	ldrb r0, [r0, #0]	@ 0010849c 0078
.org 0x10849e
	cmp r0, #255	@ 0010849e ff28
.org 0x1084a0
	beq.n 0x1084e4	@ 001084a0 20d0
.org 0x1084a2
	ldrb r1, [r5, #10]	@ 001084a2 a97a
.org 0x1084a4
	movs r0, #254	@ 001084a4 fe20
.org 0x1084a6
	ands r0, r1	@ 001084a6 0840
.org 0x1084a8
	movs r2, #0	@ 001084a8 0022
.org 0x1084aa
	movs r1, #253	@ 001084aa fd21
.org 0x1084ac
	ands r0, r1	@ 001084ac 0840
.org 0x1084ae
	strb r0, [r5, #10]	@ 001084ae a872
.org 0x1084b0
	adds r0, r5, #0	@ 001084b0 281c
.org 0x1084b2
	adds r0, #140	@ 001084b2 8c30
.org 0x1084b4
	str r2, [r0, #0]	@ 001084b4 0260
.org 0x1084b6
	adds r0, #4	@ 001084b6 0430
.org 0x1084b8
	str r2, [r0, #0]	@ 001084b8 0260
.org 0x1084ba
	adds r0, #4	@ 001084ba 0430
.org 0x1084bc
	strb r2, [r0, #0]	@ 001084bc 0270
.org 0x1084be
	ldrb r1, [r5, #10]	@ 001084be a97a
.org 0x1084c0
	movs r0, #251	@ 001084c0 fb20
.org 0x1084c2
	ands r0, r1	@ 001084c2 0840
.org 0x1084c4
	strb r0, [r5, #10]	@ 001084c4 a872
.org 0x1084c6
	ldr r1, [pc, #24]	@ 001084c6 0649
.org 0x1084c8
	ldrb r0, [r5, #9]	@ 001084c8 687a
.org 0x1084ca
	lsls r0, r0, #2	@ 001084ca 8000
.org 0x1084cc
	adds r0, r0, r1	@ 001084cc 4018
.org 0x1084ce
	movs r1, #3	@ 001084ce 0321
.org 0x1084d0
	str r1, [r5, #12]	@ 001084d0 e960
.org 0x1084d2
	ldr r0, [r0, #0]	@ 001084d2 0068
.org 0x1084d4
	ldr r0, [r0, #12]	@ 001084d4 c068
.org 0x1084d6
	str r0, [r5, #20]	@ 001084d6 6861
.org 0x1084d8
	b.n 0x108590	@ 001084d8 5ae0
.org 0x1084da
	.byte 0x00	@ 001084da data
.org 0x1084db
	.byte 0x00	@ 001084db data
.org 0x1084dc
	.byte 0xf0,0xdb,0x02,0x02	@ 001084dc data
.org 0x1084e0
	.byte 0x8c,0xc4,0x86,0x08	@ 001084e0 data
.org 0x1084e4
	ldr r0, [pc, #120]	@ 001084e4 1e48
.org 0x1084e6
	ldrb r1, [r0, #4]	@ 001084e6 0179
.org 0x1084e8
	movs r0, #4	@ 001084e8 0420
.org 0x1084ea
	ands r0, r1	@ 001084ea 0840
.org 0x1084ec
	cmp r0, #0	@ 001084ec 0028
.org 0x1084ee
	beq.n 0x108504	@ 001084ee 09d0
.org 0x1084f0
	ldrb r0, [r5, #16]	@ 001084f0 287c
.org 0x1084f2
	cmp r0, #3	@ 001084f2 0328
.org 0x1084f4
	bne.n 0x1084fa	@ 001084f4 01d1
.org 0x1084f6
	movs r0, #0	@ 001084f6 0020
.org 0x1084f8
	strb r0, [r5, #16]	@ 001084f8 2874
.org 0x1084fa
	ldrb r0, [r5, #16]	@ 001084fa 287c
.org 0x1084fc
	cmp r0, #4	@ 001084fc 0428
.org 0x1084fe
	bne.n 0x108504	@ 001084fe 01d1
.org 0x108500
	movs r0, #1	@ 00108500 0120
.org 0x108502
	strb r0, [r5, #16]	@ 00108502 2874
.org 0x108504
	ldr r1, [pc, #92]	@ 00108504 1749
.org 0x108506
	ldrb r0, [r5, #16]	@ 00108506 287c
.org 0x108508
	lsls r0, r0, #1	@ 00108508 4000
.org 0x10850a
	adds r0, r0, r1	@ 0010850a 4018
.org 0x10850c
	ldrh r4, [r0, #0]	@ 0010850c 0488
.org 0x10850e
	adds r0, r5, #0	@ 0010850e 281c
.org 0x108510
	bl 0x1cc9c	@ 00108510 14f7c4fb
.org 0x108514
	adds r0, r5, #0	@ 00108514 281c
.org 0x108516
	adds r1, r4, #0	@ 00108516 211c
.org 0x108518
	bl 0x1cf00	@ 00108518 14f7f2fc
.org 0x10851c
	ldrb r1, [r5, #10]	@ 0010851c a97a
.org 0x10851e
	movs r0, #1	@ 0010851e 0120
.org 0x108520
	movs r6, #0	@ 00108520 0026
.org 0x108522
	orrs r0, r1	@ 00108522 0843
.org 0x108524
	movs r1, #2	@ 00108524 0221
.org 0x108526
	orrs r0, r1	@ 00108526 0843
.org 0x108528
	movs r1, #4	@ 00108528 0421
.org 0x10852a
	orrs r0, r1	@ 0010852a 0843
.org 0x10852c
	strb r0, [r5, #10]	@ 0010852c a872
.org 0x10852e
	adds r4, r5, #0	@ 0010852e 2c1c
.org 0x108530
	adds r4, #116	@ 00108530 7434
.org 0x108532
	ldr r1, [pc, #52]	@ 00108532 0d49
.org 0x108534
	adds r2, r5, #0	@ 00108534 2a1c
.org 0x108536
	adds r2, #84	@ 00108536 5432
.org 0x108538
	adds r0, r4, #0	@ 00108538 201c
.org 0x10853a
	movs r3, #64	@ 0010853a 4023
.org 0x10853c
	bl 0x5760	@ 0010853c fdf610f9
.org 0x108540
	str r5, [r4, #44]	@ 00108540 e562
.org 0x108542
	ldr r0, [pc, #40]	@ 00108542 0a48
.org 0x108544
	str r0, [r4, #36]	@ 00108544 6062
.org 0x108546
	adds r1, r5, #0	@ 00108546 291c
.org 0x108548
	adds r1, #180	@ 00108548 b431
.org 0x10854a
	ldr r0, [r5, #88]	@ 0010854a a86d
.org 0x10854c
	str r0, [r1, #0]	@ 0010854c 0860
.org 0x10854e
	adds r0, r5, #0	@ 0010854e 281c
.org 0x108550
	adds r0, #184	@ 00108550 b830
.org 0x108552
	str r6, [r0, #0]	@ 00108552 0660
.org 0x108554
	ldrb r0, [r5, #17]	@ 00108554 687c
.org 0x108556
	cmp r0, #1	@ 00108556 0128
.org 0x108558
	bls.n 0x108570	@ 00108558 0ad9
.org 0x10855a
	str r6, [r5, #96]	@ 0010855a 2e66
.org 0x10855c
	b.n 0x108574	@ 0010855c 0ae0
.org 0x10855e
	.byte 0x00	@ 0010855e data
.org 0x10855f
	.byte 0x00	@ 0010855f data
.org 0x108560
	.byte 0xb0,0xe8,0x02,0x02	@ 00108560 data
.org 0x108564
	.byte 0xa8,0xc4,0x86,0x08	@ 00108564 data
.org 0x108568
	.byte 0xbc,0xc4,0x86,0x08	@ 00108568 data
.org 0x10856c
	.byte 0xd9,0x88,0x10,0x08	@ 0010856c data
.org 0x108570
	ldr r0, [pc, #36]	@ 00108570 0948
.org 0x108572
	str r0, [r5, #96]	@ 00108572 2866
.org 0x108574
	movs r0, #240	@ 00108574 f020
.org 0x108576
	strb r0, [r5, #18]	@ 00108576 a874
.org 0x108578
	ldr r1, [pc, #32]	@ 00108578 0849

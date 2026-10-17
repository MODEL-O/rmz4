@ FUN_080893f8  entry 0x080893f8  size 152
.thumb
.org 0x893f8
FUN_080893f8:
	push {r4, r5, lr}	@ 000893f8 30b5
.org 0x893fa
	adds r5, r0, #0	@ 000893fa 051c
.org 0x893fc
	ldrb r0, [r5, #14]	@ 000893fc a87b
.org 0x893fe
	cmp r0, #0	@ 000893fe 0028
.org 0x89400
	beq.n 0x89408	@ 00089400 02d0
.org 0x89402
	cmp r0, #1	@ 00089402 0128
.org 0x89404
	beq.n 0x89478	@ 00089404 38d0
.org 0x89406
	b.n 0x89492	@ 00089406 44e0
.org 0x89408
	adds r0, r5, #0	@ 00089408 281c
.org 0x8940a
	adds r0, #116	@ 0008940a 7430
.org 0x8940c
	ldr r2, [pc, #56]	@ 0008940c 0e4a
.org 0x8940e
	adds r4, r5, #0	@ 0008940e 2c1c
.org 0x89410
	adds r4, #192	@ 00089410 c034
.org 0x89412
	ldrb r1, [r4, #0]	@ 00089412 2178
.org 0x89414
	adds r1, r1, r2	@ 00089414 8918
.org 0x89416
	ldrb r2, [r1, #0]	@ 00089416 0a78
.org 0x89418
	lsls r1, r2, #1	@ 00089418 5100
.org 0x8941a
	adds r1, r1, r2	@ 0008941a 8918
.org 0x8941c
	lsls r1, r1, #3	@ 0008941c c900
.org 0x8941e
	ldr r2, [pc, #44]	@ 0008941e 0b4a
.org 0x89420
	adds r1, r1, r2	@ 00089420 8918
.org 0x89422
	bl 0x5784	@ 00089422 7cf7aff9
.org 0x89426
	ldrb r1, [r4, #0]	@ 00089426 2178
.org 0x89428
	movs r2, #248	@ 00089428 f822
.org 0x8942a
	lsls r2, r2, #5	@ 0008942a 5201
.org 0x8942c
	adds r0, r2, #0	@ 0008942c 101c
.org 0x8942e
	orrs r1, r0	@ 0008942e 0143
.org 0x89430
	adds r0, r5, #0	@ 00089430 281c
.org 0x89432
	bl 0x1cf00	@ 00089432 93f765fd
.org 0x89436
	ldrb r2, [r5, #10]	@ 00089436 aa7a
.org 0x89438
	lsrs r1, r2, #4	@ 00089438 1109
.org 0x8943a
	movs r0, #1	@ 0008943a 0120
.org 0x8943c
	ands r1, r0	@ 0008943c 0140
.org 0x8943e
	cmp r1, #0	@ 0008943e 0029
.org 0x89440
	beq.n 0x89450	@ 00089440 06d0
.org 0x89442
	movs r0, #16	@ 00089442 1020
.org 0x89444
	orrs r0, r2	@ 00089444 1043
.org 0x89446
	b.n 0x89454	@ 00089446 05e0
.org 0x89448
	.byte 0xac,0xf2,0x85,0x08	@ 00089448 data
.org 0x8944c
	.byte 0x44,0xf1,0x85,0x08	@ 0008944c data
.org 0x89450
	movs r0, #239	@ 00089450 ef20
.org 0x89452
	ands r0, r2	@ 00089452 1040
.org 0x89454
	strb r0, [r5, #10]	@ 00089454 a872
.org 0x89456
	adds r0, r5, #0	@ 00089456 281c
.org 0x89458
	adds r0, #76	@ 00089458 4c30
.org 0x8945a
	strb r1, [r0, #0]	@ 0008945a 0170
.org 0x8945c
	adds r3, r5, #0	@ 0008945c 2b1c
.org 0x8945e
	adds r3, #74	@ 0008945e 4a33
.org 0x89460
	lsls r1, r1, #4	@ 00089460 0901
.org 0x89462
	ldrb r2, [r3, #0]	@ 00089462 1a78
.org 0x89464
	movs r0, #17	@ 00089464 1120
.org 0x89466
	negs r0, r0	@ 00089466 4042
.org 0x89468
	ands r0, r2	@ 00089468 1040
.org 0x8946a
	orrs r0, r1	@ 0008946a 0843
.org 0x8946c
	strb r0, [r3, #0]	@ 0008946c 1870
.org 0x8946e
	movs r0, #24	@ 0008946e 1820
.org 0x89470
	strb r0, [r5, #18]	@ 00089470 a874
.org 0x89472
	ldrb r0, [r5, #14]	@ 00089472 a87b
.org 0x89474
	adds r0, #1	@ 00089474 0130
.org 0x89476
	strb r0, [r5, #14]	@ 00089476 a873
.org 0x89478
	adds r0, r5, #0	@ 00089478 281c
.org 0x8947a
	bl 0x1cff0	@ 0008947a 93f7b9fd
.org 0x8947e
	ldrb r0, [r5, #18]	@ 0008947e a87c
.org 0x89480
	adds r1, r0, #0	@ 00089480 011c
.org 0x89482
	cmp r1, #0	@ 00089482 0029
.org 0x89484
	beq.n 0x8948c	@ 00089484 02d0
.org 0x89486
	subs r0, #1	@ 00089486 0138
.org 0x89488
	strb r0, [r5, #18]	@ 00089488 a874
.org 0x8948a
	b.n 0x89492	@ 0008948a 02e0
.org 0x8948c
	movs r0, #2	@ 0008948c 0220
.org 0x8948e
	strb r0, [r5, #13]	@ 0008948e 6873

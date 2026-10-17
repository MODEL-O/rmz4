@ FUN_0803a428  entry 0x0803a428  size 110
.thumb
.org 0x3a428
FUN_0803a428:
	push {lr}	@ 0003a428 00b5
.org 0x3a42a
	lsls r1, r1, #24	@ 0003a42a 0906
.org 0x3a42c
	cmp r1, #0	@ 0003a42c 0029
.org 0x3a42e
	bne.n 0x3a440	@ 0003a42e 07d1
.org 0x3a430
	adds r2, r0, #0	@ 0003a430 021c
.org 0x3a432
	adds r2, #180	@ 0003a432 b432
.org 0x3a434
	movs r1, #165	@ 0003a434 a521
.org 0x3a436
	lsls r1, r1, #1	@ 0003a436 4900
.org 0x3a438
	adds r0, r0, r1	@ 0003a438 4018
.org 0x3a43a
	ldrb r3, [r0, #0]	@ 0003a43a 0378
.org 0x3a43c
	ldrb r1, [r2, #12]	@ 0003a43c 117b
.org 0x3a43e
	b.n 0x3a44c	@ 0003a43e 05e0
.org 0x3a440
	adds r2, r0, #0	@ 0003a440 021c
.org 0x3a442
	adds r2, #180	@ 0003a442 b432
.org 0x3a444
	ldr r1, [pc, #32]	@ 0003a444 0849
.org 0x3a446
	adds r0, r0, r1	@ 0003a446 4018
.org 0x3a448
	ldrb r3, [r0, #0]	@ 0003a448 0378
.org 0x3a44a
	ldrb r1, [r2, #13]	@ 0003a44a 517b
.org 0x3a44c
	movs r0, #4	@ 0003a44c 0420
.org 0x3a44e
	eors r1, r0	@ 0003a44e 4140
.org 0x3a450
	negs r0, r1	@ 0003a450 4842
.org 0x3a452
	orrs r0, r1	@ 0003a452 0843
.org 0x3a454
	lsrs r0, r0, #31	@ 0003a454 c00f
.org 0x3a456
	movs r1, #0	@ 0003a456 0021
.org 0x3a458
	cmp r0, #0	@ 0003a458 0028
.org 0x3a45a
	beq.n 0x3a47a	@ 0003a45a 0ed0
.org 0x3a45c
	ldrb r2, [r2, #16]	@ 0003a45c 127c
.org 0x3a45e
	cmp r2, #4	@ 0003a45e 042a
.org 0x3a460
	bne.n 0x3a46c	@ 0003a460 04d1
.org 0x3a462
	movs r1, #1	@ 0003a462 0121
.org 0x3a464
	b.n 0x3a47a	@ 0003a464 09e0
.org 0x3a466
	.byte 0x00	@ 0003a466 data
.org 0x3a467
	.byte 0x00	@ 0003a467 data
.org 0x3a468
	.byte 0x4b,0x01,0x00,0x00	@ 0003a468 data
.org 0x3a46c
	cmp r2, #5	@ 0003a46c 052a
.org 0x3a46e
	bne.n 0x3a474	@ 0003a46e 01d1
.org 0x3a470
	movs r1, #2	@ 0003a470 0221
.org 0x3a472
	b.n 0x3a47a	@ 0003a472 02e0
.org 0x3a474
	cmp r2, #6	@ 0003a474 062a
.org 0x3a476
	bne.n 0x3a47a	@ 0003a476 00d1
.org 0x3a478
	movs r1, #3	@ 0003a478 0321
.org 0x3a47a
	ldr r0, [pc, #12]	@ 0003a47a 0348
.org 0x3a47c
	adds r0, r1, r0	@ 0003a47c 0818
.org 0x3a47e
	ldrb r0, [r0, #0]	@ 0003a47e 0078
.org 0x3a480
	cmp r3, r0	@ 0003a480 8342
.org 0x3a482
	bcc.n 0x3a48c	@ 0003a482 03d3
.org 0x3a484
	movs r0, #2	@ 0003a484 0220
.org 0x3a486
	b.n 0x3a4a2	@ 0003a486 0ce0
.org 0x3a488
	.byte 0xd4,0x36,0x85,0x08	@ 0003a488 data
.org 0x3a48c
	ldr r0, [pc, #12]	@ 0003a48c 0348
.org 0x3a48e
	adds r0, r1, r0	@ 0003a48e 0818
.org 0x3a490
	ldrb r0, [r0, #0]	@ 0003a490 0078
.org 0x3a492
	cmp r3, r0	@ 0003a492 8342
.org 0x3a494
	bcs.n 0x3a4a0	@ 0003a494 04d2

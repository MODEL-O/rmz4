@ FUN_080fe400  entry 0x080fe400  size 180
.thumb
.org 0xfe400
FUN_080fe400:
	push {r4, r5, r6, r7, lr}	@ 000fe400 f0b5
.org 0xfe402
	adds r7, r0, #0	@ 000fe402 071c
.org 0xfe404
	adds r5, r1, #0	@ 000fe404 0d1c
.org 0xfe406
	adds r6, r2, #0	@ 000fe406 161c
.org 0xfe408
	ldr r0, [pc, #92]	@ 000fe408 1748
.org 0xfe40a
	ldr r0, [r0, #0]	@ 000fe40a 0068
.org 0xfe40c
	bl 0x5500	@ 000fe40c 07f778f8
.org 0xfe410
	adds r4, r0, #0	@ 000fe410 041c
.org 0xfe412
	cmp r4, #0	@ 000fe412 002c
.org 0xfe414
	beq.n 0xfe4c6	@ 000fe414 57d0
.org 0xfe416
	adds r1, r4, #0	@ 000fe416 211c
.org 0xfe418
	adds r1, #37	@ 000fe418 2531
.org 0xfe41a
	movs r2, #0	@ 000fe41a 0022
.org 0xfe41c
	movs r0, #30	@ 000fe41c 1e20
.org 0xfe41e
	strb r0, [r1, #0]	@ 000fe41e 0870
.org 0xfe420
	ldr r0, [pc, #72]	@ 000fe420 1248
.org 0xfe422
	movs r1, #47	@ 000fe422 2f21
.org 0xfe424
	strb r1, [r4, #9]	@ 000fe424 6172
.org 0xfe426
	adds r0, #188	@ 000fe426 bc30
.org 0xfe428
	ldr r0, [r0, #0]	@ 000fe428 0068
.org 0xfe42a
	ldr r0, [r0, #0]	@ 000fe42a 0068
.org 0xfe42c
	str r0, [r4, #20]	@ 000fe42c 6061
.org 0xfe42e
	movs r0, #0	@ 000fe42e 0020
.org 0xfe430
	strh r2, [r4, #32]	@ 000fe430 2284
.org 0xfe432
	adds r1, r4, #0	@ 000fe432 211c
.org 0xfe434
	adds r1, #34	@ 000fe434 2231
.org 0xfe436
	strb r0, [r1, #0]	@ 000fe436 0870
.org 0xfe438
	ldrb r1, [r4, #11]	@ 000fe438 e17a
.org 0xfe43a
	movs r0, #16	@ 000fe43a 1020
.org 0xfe43c
	orrs r0, r1	@ 000fe43c 0843
.org 0xfe43e
	strb r0, [r4, #11]	@ 000fe43e e072
.org 0xfe440
	ldrb r0, [r4, #28]	@ 000fe440 207f
.org 0xfe442
	strb r0, [r4, #29]	@ 000fe442 6077
.org 0xfe444
	adds r0, r5, #0	@ 000fe444 281c
.org 0xfe446
	adds r1, r6, #0	@ 000fe446 311c
.org 0xfe448
	bl 0x146bc	@ 000fe448 16f738f9
.org 0xfe44c
	ldr r1, [pc, #32]	@ 000fe44c 0849
.org 0xfe44e
	lsls r2, r0, #16	@ 000fe44e 0204
.org 0xfe450
	lsrs r2, r2, #16	@ 000fe450 120c
.org 0xfe452
	ldr r3, [pc, #32]	@ 000fe452 084b
.org 0xfe454
	adds r1, r1, r3	@ 000fe454 c918
.org 0xfe456
	strh r0, [r1, #0]	@ 000fe456 0880
.org 0xfe458
	cmp r2, #215	@ 000fe458 d72a
.org 0xfe45a
	bne.n 0xfe47c	@ 000fe45a 0fd1
.org 0xfe45c
	ldr r0, [pc, #24]	@ 000fe45c 0648
.org 0xfe45e
	ands r0, r5	@ 000fe45e 2840
.org 0xfe460
	movs r1, #128	@ 000fe460 8021
.org 0xfe462
	lsls r1, r1, #5	@ 000fe462 4901
.org 0xfe464
	adds r0, r0, r1	@ 000fe464 4018
.org 0xfe466
	b.n 0xfe49c	@ 000fe466 19e0
.org 0xfe468
	.byte 0xa0,0xed,0x02,0x02	@ 000fe468 data
.org 0xfe46c
	.byte 0xfc,0x92,0x86,0x08	@ 000fe46c data
.org 0xfe470
	.byte 0xb0,0x0a,0x00,0x02	@ 000fe470 data
.org 0xfe474
	.byte 0x50,0xd0,0x02,0x00	@ 000fe474 data
.org 0xfe478
	.byte 0x00,0xf0,0xff,0xff	@ 000fe478 data
.org 0xfe47c
	cmp r2, #216	@ 000fe47c d82a
.org 0xfe47e
	beq.n 0xfe498	@ 000fe47e 0bd0
.org 0xfe480
	movs r0, #1	@ 000fe480 0120
.org 0xfe482
	ands r0, r2	@ 000fe482 1040
.org 0xfe484
	cmp r0, #0	@ 000fe484 0028
.org 0xfe486
	bne.n 0xfe498	@ 000fe486 07d1
.org 0xfe488
	ldr r0, [pc, #8]	@ 000fe488 0248
.org 0xfe48a
	ands r0, r5	@ 000fe48a 2840
.org 0xfe48c
	movs r3, #128	@ 000fe48c 8023
.org 0xfe48e
	lsls r3, r3, #5	@ 000fe48e 5b01
.org 0xfe490
	adds r0, r0, r3	@ 000fe490 c018
.org 0xfe492
	b.n 0xfe49c	@ 000fe492 03e0
.org 0xfe494
	.byte 0x00,0xf0,0xff,0xff	@ 000fe494 data
.org 0xfe498
	ldr r0, [pc, #48]	@ 000fe498 0c48
.org 0xfe49a
	ands r0, r5	@ 000fe49a 2840
.org 0xfe49c
	str r0, [r4, #84]	@ 000fe49c 6065
.org 0xfe49e
	ldr r0, [pc, #44]	@ 000fe49e 0b48
.org 0xfe4a0
	ands r0, r6	@ 000fe4a0 3040
.org 0xfe4a2
	movs r1, #128	@ 000fe4a2 8021
.org 0xfe4a4
	lsls r1, r1, #5	@ 000fe4a4 4901
.org 0xfe4a6
	adds r0, r0, r1	@ 000fe4a6 4018
.org 0xfe4a8
	str r0, [r4, #88]	@ 000fe4a8 a065
.org 0xfe4aa
	movs r0, #1	@ 000fe4aa 0120
.org 0xfe4ac
	strb r0, [r4, #16]	@ 000fe4ac 2074
.org 0xfe4ae
	ldrb r0, [r7, #17]	@ 000fe4ae 787c
.org 0xfe4b0
	adds r0, #1	@ 000fe4b0 0130
.org 0xfe4b2
	strb r0, [r4, #17]	@ 000fe4b2 6074

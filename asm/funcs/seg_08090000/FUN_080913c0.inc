@ FUN_080913c0  entry 0x080913c0  size 406
.thumb
.org 0x913c0
FUN_080913c0:
	push {r4, r5, lr}	@ 000913c0 30b5
.org 0x913c2
	adds r4, r0, #0	@ 000913c2 041c
.org 0x913c4
	ldr r2, [r4, #40]	@ 000913c4 a26a
.org 0x913c6
	ldr r1, [pc, #64]	@ 000913c6 1049
.org 0x913c8
	ldrb r0, [r4, #17]	@ 000913c8 607c
.org 0x913ca
	lsls r0, r0, #2	@ 000913ca 8000
.org 0x913cc
	adds r0, r0, r1	@ 000913cc 4018
.org 0x913ce
	ldr r1, [r2, #84]	@ 000913ce 516d
.org 0x913d0
	ldr r0, [r0, #0]	@ 000913d0 0068
.org 0x913d2
	adds r5, r1, r0	@ 000913d2 0d18
.org 0x913d4
	str r5, [r4, #84]	@ 000913d4 6565
.org 0x913d6
	ldr r1, [pc, #52]	@ 000913d6 0d49
.org 0x913d8
	ldrb r0, [r4, #17]	@ 000913d8 607c
.org 0x913da
	lsls r0, r0, #2	@ 000913da 8000
.org 0x913dc
	adds r0, r0, r1	@ 000913dc 4018
.org 0x913de
	ldr r1, [r2, #88]	@ 000913de 916d
.org 0x913e0
	ldr r0, [r0, #0]	@ 000913e0 0068
.org 0x913e2
	adds r3, r1, r0	@ 000913e2 0b18
.org 0x913e4
	str r3, [r4, #88]	@ 000913e4 a365
.org 0x913e6
	ldrb r0, [r2, #12]	@ 000913e6 107b
.org 0x913e8
	cmp r0, #1	@ 000913e8 0128
.org 0x913ea
	bls.n 0x91414	@ 000913ea 13d9
.org 0x913ec
	ldr r1, [pc, #32]	@ 000913ec 0849
.org 0x913ee
	ldrb r0, [r4, #9]	@ 000913ee 607a
.org 0x913f0
	lsls r0, r0, #2	@ 000913f0 8000
.org 0x913f2
	adds r0, r0, r1	@ 000913f2 4018
.org 0x913f4
	movs r1, #2	@ 000913f4 0221
.org 0x913f6
	str r1, [r4, #12]	@ 000913f6 e160
.org 0x913f8
	ldr r0, [r0, #0]	@ 000913f8 0068
.org 0x913fa
	ldr r0, [r0, #8]	@ 000913fa 8068
.org 0x913fc
	str r0, [r4, #20]	@ 000913fc 6061
.org 0x913fe
	adds r0, r4, #0	@ 000913fe 201c
.org 0x91400
	bl 0x90f70	@ 00091400 fff7b6fd
.org 0x91404
	b.n 0x91572	@ 00091404 b5e0
.org 0x91406
	.byte 0x00	@ 00091406 data
.org 0x91407
	.byte 0x00	@ 00091407 data
.org 0x91408
	.byte 0xd0,0x03,0x86,0x08	@ 00091408 data
.org 0x9140c
	.byte 0xdc,0x03,0x86,0x08	@ 0009140c data
.org 0x91410
	.byte 0x40,0xdb,0x85,0x08	@ 00091410 data
.org 0x91414
	ldrb r0, [r4, #13]	@ 00091414 607b
.org 0x91416
	cmp r0, #1	@ 00091416 0128
.org 0x91418
	bne.n 0x9141c	@ 00091418 00d1
.org 0x9141a
	b.n 0x91520	@ 0009141a 81e0
.org 0x9141c
	cmp r0, #1	@ 0009141c 0128
.org 0x9141e
	bgt.n 0x91426	@ 0009141e 02dc
.org 0x91420
	cmp r0, #0	@ 00091420 0028
.org 0x91422
	beq.n 0x9142e	@ 00091422 04d0
.org 0x91424
	b.n 0x9156c	@ 00091424 a2e0
.org 0x91426
	cmp r0, #2	@ 00091426 0228
.org 0x91428
	bne.n 0x9142c	@ 00091428 00d1
.org 0x9142a
	b.n 0x9154c	@ 0009142a 8fe0
.org 0x9142c
	b.n 0x9156c	@ 0009142c 9ee0
.org 0x9142e
	ldr r0, [pc, #56]	@ 0009142e 0e48
.org 0x91430
	ldr r1, [r0, #0]	@ 00091430 0168
.org 0x91432
	ldr r0, [r1, #84]	@ 00091432 486d
.org 0x91434
	subs r0, r0, r5	@ 00091434 401b
.org 0x91436
	movs r5, #240	@ 00091436 f025
.org 0x91438
	lsls r5, r5, #4	@ 00091438 2d01
.org 0x9143a
	adds r2, r3, r5	@ 0009143a 5a19
.org 0x9143c
	ldr r1, [r1, #88]	@ 0009143c 896d
.org 0x9143e
	subs r1, r1, r2	@ 0009143e 891a
.org 0x91440
	bl 0x10d338	@ 00091440 7bf07aff
.org 0x91444
	adds r0, #128	@ 00091444 8030
.org 0x91446
	lsls r0, r0, #16	@ 00091446 0004
.org 0x91448
	asrs r0, r0, #16	@ 00091448 0014
.org 0x9144a
	adds r2, r0, #0	@ 0009144a 021c
.org 0x9144c
	adds r2, #8	@ 0009144c 0832
.org 0x9144e
	ldr r0, [pc, #28]	@ 0009144e 0748
.org 0x91450
	ands r2, r0	@ 00091450 0240
.org 0x91452
	movs r0, #255	@ 00091452 ff20
.org 0x91454
	ands r2, r0	@ 00091454 0240
.org 0x91456
	ldrb r0, [r4, #17]	@ 00091456 607c
.org 0x91458
	cmp r0, #0	@ 00091458 0028
.org 0x9145a
	bne.n 0x9147a	@ 0009145a 0ed1
.org 0x9145c
	adds r0, r2, #0	@ 0009145c 101c
.org 0x9145e
	cmp r0, #95	@ 0009145e 5f28
.org 0x91460
	bgt.n 0x91470	@ 00091460 06dc
.org 0x91462
	movs r2, #96	@ 00091462 6022
.org 0x91464
	b.n 0x914d4	@ 00091464 36e0
.org 0x91466
	.byte 0x00	@ 00091466 data
.org 0x91467
	.byte 0x00	@ 00091467 data
.org 0x91468
	.byte 0xf0,0xdb,0x02,0x02	@ 00091468 data
.org 0x9146c
	.byte 0xf0,0xff,0x00,0x00	@ 0009146c data
.org 0x91470
	adds r3, r4, #0	@ 00091470 231c
.org 0x91472
	adds r3, #192	@ 00091472 c033
.org 0x91474
	cmp r0, #160	@ 00091474 a028
.org 0x91476
	ble.n 0x914ea	@ 00091476 38dd
.org 0x91478
	b.n 0x914e8	@ 00091478 36e0
.org 0x9147a
	cmp r0, #1	@ 0009147a 0128
.org 0x9147c
	bne.n 0x914c4	@ 0009147c 22d1
.org 0x9147e
	lsls r0, r2, #16	@ 0009147e 1004
.org 0x91480
	asrs r0, r0, #16	@ 00091480 0014
.org 0x91482
	cmp r0, #128	@ 00091482 8028
.org 0x91484
	bgt.n 0x914a4	@ 00091484 0edc
.org 0x91486
	cmp r0, #32	@ 00091486 2028
.org 0x91488
	ble.n 0x9148c	@ 00091488 00dd
.org 0x9148a
	movs r2, #32	@ 0009148a 2022
.org 0x9148c
	adds r0, r4, #0	@ 0009148c 201c
.org 0x9148e
	adds r0, #192	@ 0009148e c030
.org 0x91490
	ldrb r1, [r0, #0]	@ 00091490 0178
.org 0x91492
	adds r3, r0, #0	@ 00091492 031c
.org 0x91494
	cmp r1, #128	@ 00091494 8029
.org 0x91496
	bls.n 0x914ea	@ 00091496 28d9
.org 0x91498
	lsls r0, r2, #16	@ 00091498 1004
.org 0x9149a
	movs r1, #128	@ 0009149a 8021
.org 0x9149c
	lsls r1, r1, #17	@ 0009149c 4904
.org 0x9149e
	adds r0, r0, r1	@ 0009149e 4018
.org 0x914a0
	lsrs r2, r0, #16	@ 000914a0 020c
.org 0x914a2
	b.n 0x914ea	@ 000914a2 22e0
.org 0x914a4
	cmp r0, #223	@ 000914a4 df28
.org 0x914a6
	bgt.n 0x914aa	@ 000914a6 00dc
.org 0x914a8
	movs r2, #224	@ 000914a8 e022
.org 0x914aa
	adds r0, r4, #0	@ 000914aa 201c
.org 0x914ac
	adds r0, #192	@ 000914ac c030
.org 0x914ae
	movs r1, #0	@ 000914ae 0021
.org 0x914b0
	ldrsb r1, [r0, r1]	@ 000914b0 4156
.org 0x914b2
	adds r3, r0, #0	@ 000914b2 031c
.org 0x914b4
	cmp r1, #0	@ 000914b4 0029
.org 0x914b6
	blt.n 0x914ea	@ 000914b6 18db
.org 0x914b8
	lsls r0, r2, #16	@ 000914b8 1004
.org 0x914ba
	movs r5, #255	@ 000914ba ff25
.org 0x914bc
	lsls r5, r5, #24	@ 000914bc 2d06
.org 0x914be
	adds r0, r0, r5	@ 000914be 4019
.org 0x914c0
	lsrs r2, r0, #16	@ 000914c0 020c
.org 0x914c2
	b.n 0x914ea	@ 000914c2 12e0
.org 0x914c4
	lsls r0, r2, #16	@ 000914c4 1004
.org 0x914c6
	asrs r1, r0, #16	@ 000914c6 0114
.org 0x914c8
	ldr r3, [pc, #16]	@ 000914c8 044b
.org 0x914ca
	adds r0, r0, r3	@ 000914ca c018
.org 0x914cc
	lsrs r0, r0, #16	@ 000914cc 000c
.org 0x914ce
	cmp r0, #160	@ 000914ce a028
.org 0x914d0
	bls.n 0x914e0	@ 000914d0 06d9
.org 0x914d2
	movs r2, #224	@ 000914d2 e022
.org 0x914d4
	adds r3, r4, #0	@ 000914d4 231c
.org 0x914d6
	adds r3, #192	@ 000914d6 c033
.org 0x914d8
	b.n 0x914ea	@ 000914d8 07e0
.org 0x914da
	.byte 0x00	@ 000914da data
.org 0x914db
	.byte 0x00	@ 000914db data
.org 0x914dc
	.byte 0x00,0x00,0xc0,0xff	@ 000914dc data
.org 0x914e0
	adds r3, r4, #0	@ 000914e0 231c
.org 0x914e2
	adds r3, #192	@ 000914e2 c033
.org 0x914e4
	cmp r1, #159	@ 000914e4 9f29
.org 0x914e6
	bgt.n 0x914ea	@ 000914e6 00dc
.org 0x914e8
	movs r2, #160	@ 000914e8 a022
.org 0x914ea
	ldrb r1, [r3, #0]	@ 000914ea 1978
.org 0x914ec
	lsls r0, r2, #16	@ 000914ec 1004
.org 0x914ee
	asrs r0, r0, #16	@ 000914ee 0014
.org 0x914f0
	cmp r1, r0	@ 000914f0 8142
.org 0x914f2
	ble.n 0x914f8	@ 000914f2 01dd
.org 0x914f4
	subs r0, r1, #1	@ 000914f4 481e
.org 0x914f6
	b.n 0x914fe	@ 000914f6 02e0
.org 0x914f8
	cmp r1, r0	@ 000914f8 8142
.org 0x914fa
	bge.n 0x91500	@ 000914fa 01da
.org 0x914fc
	adds r0, r1, #1	@ 000914fc 481c
.org 0x914fe
	strb r0, [r3, #0]	@ 000914fe 1870
.org 0x91500
	ldrb r1, [r3, #0]	@ 00091500 1978
.org 0x91502
	adds r0, r4, #0	@ 00091502 201c
.org 0x91504
	adds r0, #36	@ 00091504 2430
.org 0x91506
	strb r1, [r0, #0]	@ 00091506 0170
.org 0x91508
	ldrb r0, [r4, #18]	@ 00091508 a07c
.org 0x9150a
	subs r0, #1	@ 0009150a 0138
.org 0x9150c
	strb r0, [r4, #18]	@ 0009150c a074
.org 0x9150e
	lsls r0, r0, #24	@ 0009150e 0006
.org 0x91510
	lsrs r0, r0, #24	@ 00091510 000e
.org 0x91512
	cmp r0, #255	@ 00091512 ff28
.org 0x91514
	bne.n 0x9156c	@ 00091514 2ad1
.org 0x91516
	movs r0, #3	@ 00091516 0320
.org 0x91518
	strb r0, [r4, #19]	@ 00091518 e074
.org 0x9151a
	ldrb r0, [r4, #13]	@ 0009151a 607b
.org 0x9151c
	adds r0, #1	@ 0009151c 0130
.org 0x9151e
	b.n 0x9156a	@ 0009151e 24e0
.org 0x91520
	ldr r0, [pc, #36]	@ 00091520 0948
.org 0x91522
	ldrh r1, [r0, #8]	@ 00091522 0189
.org 0x91524
	movs r0, #8	@ 00091524 0820
.org 0x91526
	ands r0, r1	@ 00091526 0840
.org 0x91528
	cmp r0, #0	@ 00091528 0028
.org 0x9152a
	bne.n 0x9153e	@ 0009152a 08d1
.org 0x9152c
	adds r0, r4, #0	@ 0009152c 201c
.org 0x9152e
	adds r0, #84	@ 0009152e 5430
.org 0x91530
	movs r1, #192	@ 00091530 c021
.org 0x91532
	lsls r1, r1, #2	@ 00091532 8900
.org 0x91534
	adds r2, r4, #0	@ 00091534 221c
.org 0x91536
	adds r2, #192	@ 00091536 c032
.org 0x91538
	ldrb r2, [r2, #0]	@ 00091538 1278
.org 0x9153a
	bl 0xbd43c	@ 0009153a 2bf07fff
.org 0x9153e
	movs r0, #16	@ 0009153e 1020
.org 0x91540
	strb r0, [r4, #18]	@ 00091540 a074
.org 0x91542
	ldrb r0, [r4, #13]	@ 00091542 607b
.org 0x91544
	adds r0, #1	@ 00091544 0130
.org 0x91546
	b.n 0x9156a	@ 00091546 10e0
.org 0x91548
	.byte 0x10,0xe9,0x02,0x02	@ 00091548 data
.org 0x9154c
	ldrb r0, [r4, #18]	@ 0009154c a07c
.org 0x9154e
	subs r0, #1	@ 0009154e 0138
.org 0x91550
	strb r0, [r4, #18]	@ 00091550 a074
.org 0x91552
	movs r1, #255	@ 00091552 ff21
.org 0x91554
	lsls r0, r0, #24	@ 00091554 0006

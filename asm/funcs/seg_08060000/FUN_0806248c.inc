@ FUN_0806248c  entry 0x0806248c  size 312
.thumb
.org 0x6248c
FUN_0806248c:
	push {r4, r5, r6, r7, lr}	@ 0006248c f0b5
.org 0x6248e
	adds r6, r0, #0	@ 0006248e 061c
.org 0x62490
	ldrb r4, [r6, #15]	@ 00062490 f47b
.org 0x62492
	cmp r4, #0	@ 00062492 002c
.org 0x62494
	bne.n 0x624ca	@ 00062494 19d1
.org 0x62496
	movs r1, #5	@ 00062496 0521
.org 0x62498
	bl 0x65a94	@ 00062498 03f0fcfa
.org 0x6249c
	adds r0, r6, #0	@ 0006249c 301c
.org 0x6249e
	adds r0, #208	@ 0006249e d030
.org 0x624a0
	ldr r0, [r0, #0]	@ 000624a0 0068
.org 0x624a2
	movs r1, #200	@ 000624a2 c821
.org 0x624a4
	lsls r1, r1, #8	@ 000624a4 0902
.org 0x624a6
	adds r0, r0, r1	@ 000624a6 4018
.org 0x624a8
	str r0, [r6, #92]	@ 000624a8 f065
.org 0x624aa
	ldr r1, [r6, #84]	@ 000624aa 716d
.org 0x624ac
	subs r0, r0, r1	@ 000624ac 401a
.org 0x624ae
	str r0, [r6, #100]	@ 000624ae 7066
.org 0x624b0
	str r4, [r6, #96]	@ 000624b0 3466
.org 0x624b2
	movs r0, #8	@ 000624b2 0820
.org 0x624b4
	negs r0, r0	@ 000624b4 4042
.org 0x624b6
	str r0, [r6, #104]	@ 000624b6 b066
.org 0x624b8
	adds r1, r6, #0	@ 000624b8 311c
.org 0x624ba
	adds r1, #220	@ 000624ba dc31
.org 0x624bc
	ldr r0, [r6, #88]	@ 000624bc b06d
.org 0x624be
	str r0, [r1, #0]	@ 000624be 0860
.org 0x624c0
	movs r0, #1	@ 000624c0 0120
.org 0x624c2
	strb r0, [r6, #18]	@ 000624c2 b074
.org 0x624c4
	ldrb r0, [r6, #15]	@ 000624c4 f07b
.org 0x624c6
	adds r0, #1	@ 000624c6 0130
.org 0x624c8
	strb r0, [r6, #15]	@ 000624c8 f073
.org 0x624ca
	adds r0, r6, #0	@ 000624ca 301c
.org 0x624cc
	bl 0x1cff0	@ 000624cc baf790fd
.org 0x624d0
	adds r0, r6, #0	@ 000624d0 301c
.org 0x624d2
	adds r0, #116	@ 000624d2 7430
.org 0x624d4
	ldr r4, [pc, #236]	@ 000624d4 3b4c
.org 0x624d6
	ldr r3, [pc, #240]	@ 000624d6 3c4b
.org 0x624d8
	adds r1, r6, #0	@ 000624d8 311c
.org 0x624da
	adds r1, #180	@ 000624da b431
.org 0x624dc
	ldrb r2, [r1, #0]	@ 000624dc 0a78
.org 0x624de
	lsls r1, r2, #1	@ 000624de 5100
.org 0x624e0
	adds r1, r1, r3	@ 000624e0 c918
.org 0x624e2
	ldrh r1, [r1, #0]	@ 000624e2 0988
.org 0x624e4
	lsls r1, r1, #2	@ 000624e4 8900
.org 0x624e6
	adds r1, r1, r4	@ 000624e6 0919
.org 0x624e8
	adds r3, r6, #0	@ 000624e8 331c
.org 0x624ea
	adds r3, #113	@ 000624ea 7133
.org 0x624ec
	movs r5, #0	@ 000624ec 0025
.org 0x624ee
	ldrsb r5, [r3, r5]	@ 000624ee 5d57
.org 0x624f0
	ldr r1, [r1, #0]	@ 000624f0 0968
.org 0x624f2
	lsls r3, r5, #2	@ 000624f2 ab00
.org 0x624f4
	adds r3, r3, r1	@ 000624f4 5b18
.org 0x624f6
	ldr r4, [pc, #212]	@ 000624f6 354c
.org 0x624f8
	adds r1, r6, #0	@ 000624f8 311c
.org 0x624fa
	adds r1, #181	@ 000624fa b531
.org 0x624fc
	ldrb r1, [r1, #0]	@ 000624fc 0978
.org 0x624fe
	lsls r1, r1, #2	@ 000624fe 8900
.org 0x62500
	adds r1, r1, r4	@ 00062500 0919
.org 0x62502
	ldr r1, [r1, #0]	@ 00062502 0968
.org 0x62504
	lsls r2, r2, #2	@ 00062504 9200
.org 0x62506
	adds r2, r2, r1	@ 00062506 5218
.org 0x62508
	ldr r1, [r2, #0]	@ 00062508 1168
.org 0x6250a
	adds r1, r1, r5	@ 0006250a 4919
.org 0x6250c
	ldrb r1, [r1, #0]	@ 0006250c 0978
.org 0x6250e
	lsls r2, r1, #1	@ 0006250e 4a00
.org 0x62510
	adds r2, r2, r1	@ 00062510 5218
.org 0x62512
	lsls r2, r2, #3	@ 00062512 d200
.org 0x62514
	ldr r1, [r3, #0]	@ 00062514 1968
.org 0x62516
	adds r1, r1, r2	@ 00062516 8918
.org 0x62518
	bl 0x5784	@ 00062518 a3f734f9
.org 0x6251c
	ldrb r0, [r6, #18]	@ 0006251c b07c
.org 0x6251e
	adds r7, r6, #0	@ 0006251e 371c
.org 0x62520
	adds r7, #212	@ 00062520 d437
.org 0x62522
	cmp r0, #0	@ 00062522 0028
.org 0x62524
	beq.n 0x62558	@ 00062524 18d0
.org 0x62526
	ldr r4, [r6, #96]	@ 00062526 346e
.org 0x62528
	negs r0, r4	@ 00062528 6042
.org 0x6252a
	ldr r1, [r6, #104]	@ 0006252a b16e
.org 0x6252c
	negs r5, r1	@ 0006252c 4d42
.org 0x6252e
	adds r1, r5, #0	@ 0006252e 291c
.org 0x62530
	bl 0x128fb8	@ 00062530 c6f042fd
.org 0x62534
	adds r1, r0, #1	@ 00062534 411c
.org 0x62536
	lsls r4, r4, #1	@ 00062536 6400
.org 0x62538
	muls r0, r5	@ 00062538 6843
.org 0x6253a
	adds r4, r4, r0	@ 0006253a 2418
.org 0x6253c
	adds r0, r1, #0	@ 0006253c 081c
.org 0x6253e
	muls r0, r4	@ 0006253e 6043
.org 0x62540
	asrs r0, r0, #1	@ 00062540 4010
.org 0x62542
	ldr r1, [r6, #88]	@ 00062542 b16d
.org 0x62544
	adds r2, r1, r0	@ 00062544 0a18
.org 0x62546
	ldr r0, [r7, #0]	@ 00062546 3868
.org 0x62548
	movs r1, #136	@ 00062548 8821
.org 0x6254a
	lsls r1, r1, #8	@ 0006254a 0902
.org 0x6254c
	adds r0, r0, r1	@ 0006254c 4018
.org 0x6254e
	cmp r2, r0	@ 0006254e 8242
.org 0x62550
	bgt.n 0x62558	@ 00062550 02dc
.org 0x62552
	str r5, [r6, #104]	@ 00062552 b566
.org 0x62554
	movs r0, #0	@ 00062554 0020
.org 0x62556
	strb r0, [r6, #18]	@ 00062556 b074
.org 0x62558
	ldr r0, [r6, #88]	@ 00062558 b06d
.org 0x6255a
	ldr r1, [r6, #96]	@ 0006255a 316e
.org 0x6255c
	adds r0, r0, r1	@ 0006255c 4018
.org 0x6255e
	str r0, [r6, #88]	@ 0006255e b065
.org 0x62560
	ldr r0, [r6, #104]	@ 00062560 b06e
.org 0x62562
	adds r1, r1, r0	@ 00062562 0918
.org 0x62564
	str r1, [r6, #96]	@ 00062564 3166
.org 0x62566
	ldr r0, [pc, #104]	@ 00062566 1a48
.org 0x62568
	cmp r1, r0	@ 00062568 8142
.org 0x6256a
	bge.n 0x6256e	@ 0006256a 00da
.org 0x6256c
	str r0, [r6, #96]	@ 0006256c 3066
.org 0x6256e
	adds r2, r7, #0	@ 0006256e 3a1c
.org 0x62570
	ldr r0, [r2, #0]	@ 00062570 1068
.org 0x62572
	movs r5, #136	@ 00062572 8825
.org 0x62574
	lsls r5, r5, #8	@ 00062574 2d02
.org 0x62576
	adds r1, r0, r5	@ 00062576 4119
.org 0x62578
	ldr r0, [r6, #88]	@ 00062578 b06d
.org 0x6257a
	cmp r0, r1	@ 0006257a 8842
.org 0x6257c
	bgt.n 0x62580	@ 0006257c 00dc
.org 0x6257e
	str r1, [r6, #88]	@ 0006257e b165
.org 0x62580
	adds r0, r6, #0	@ 00062580 301c
.org 0x62582
	adds r0, #220	@ 00062582 dc30
.org 0x62584
	ldr r0, [r0, #0]	@ 00062584 0068
.org 0x62586
	ldr r1, [pc, #76]	@ 00062586 1349
.org 0x62588
	adds r0, r0, r1	@ 00062588 4018
.org 0x6258a
	ldr r3, [r2, #0]	@ 0006258a 1368
.org 0x6258c
	subs r2, r0, r3	@ 0006258c c21a
.org 0x6258e
	cmp r2, #0	@ 0006258e 002a
.org 0x62590
	bne.n 0x62594	@ 00062590 00d1
.org 0x62592
	movs r2, #1	@ 00062592 0122
.org 0x62594
	ldr r4, [r6, #88]	@ 00062594 b46d
.org 0x62596
	ldr r0, [pc, #60]	@ 00062596 0f48
.org 0x62598
	adds r1, r4, r0	@ 00062598 2118
.org 0x6259a
	subs r1, r1, r3	@ 0006259a c91a
.org 0x6259c
	ldr r0, [r6, #100]	@ 0006259c 706e
.org 0x6259e
	negs r0, r0	@ 0006259e 4042
.org 0x625a0
	muls r0, r1	@ 000625a0 4843
.org 0x625a2
	adds r1, r2, #0	@ 000625a2 111c
.org 0x625a4
	bl 0x128fb8	@ 000625a4 c6f008fd
.org 0x625a8
	ldr r1, [r6, #92]	@ 000625a8 f16d
.org 0x625aa
	adds r1, r1, r0	@ 000625aa 0918
.org 0x625ac
	str r1, [r6, #84]	@ 000625ac 7165
.org 0x625ae
	ldr r0, [r7, #0]	@ 000625ae 3868
.org 0x625b0
	adds r0, r0, r5	@ 000625b0 4019
.org 0x625b2
	cmp r4, r0	@ 000625b2 8442
.org 0x625b4
	bne.n 0x625be	@ 000625b4 03d1
.org 0x625b6
	movs r1, #0	@ 000625b6 0021
.org 0x625b8
	movs r0, #3	@ 000625b8 0320
.org 0x625ba
	strb r0, [r6, #14]	@ 000625ba b073
.org 0x625bc
	strb r1, [r6, #15]	@ 000625bc f173
.org 0x625be
	pop {r4, r5, r6, r7}	@ 000625be f0bc
.org 0x625c0
	pop {r0}	@ 000625c0 01bc
.org 0x625c2
	bx r0	@ 000625c2 0047

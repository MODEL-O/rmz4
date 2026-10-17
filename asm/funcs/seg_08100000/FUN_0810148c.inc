@ FUN_0810148c  entry 0x0810148c  size 248
.thumb
.org 0x10148c
FUN_0810148c:
	push {r4, r5, r6, lr}	@ 0010148c 70b5
.org 0x10148e
	adds r6, r0, #0	@ 0010148e 061c
.org 0x101490
	bl 0x1cc9c	@ 00101490 1bf704fc
.org 0x101494
	ldrb r0, [r6, #10]	@ 00101494 b07a
.org 0x101496
	movs r1, #1	@ 00101496 0121
.org 0x101498
	movs r4, #0	@ 00101498 0024
.org 0x10149a
	movs r5, #0	@ 0010149a 0025
.org 0x10149c
	orrs r1, r0	@ 0010149c 0143
.org 0x10149e
	movs r0, #2	@ 0010149e 0220
.org 0x1014a0
	orrs r1, r0	@ 001014a0 0143
.org 0x1014a2
	strb r1, [r6, #10]	@ 001014a2 b172
.org 0x1014a4
	ldrb r0, [r6, #16]	@ 001014a4 307c
.org 0x1014a6
	cmp r0, #1	@ 001014a6 0128
.org 0x1014a8
	beq.n 0x1014ae	@ 001014a8 01d0
.org 0x1014aa
	cmp r0, #3	@ 001014aa 0328
.org 0x1014ac
	bne.n 0x1014e8	@ 001014ac 1cd1
.org 0x1014ae
	ldr r1, [pc, #40]	@ 001014ae 0a49
.org 0x1014b0
	adds r0, r6, #0	@ 001014b0 301c
.org 0x1014b2
	bl 0x1cf00	@ 001014b2 1bf725fd
.org 0x1014b6
	ldrb r0, [r6, #11]	@ 001014b6 f07a
.org 0x1014b8
	movs r1, #8	@ 001014b8 0821
.org 0x1014ba
	orrs r0, r1	@ 001014ba 0843
.org 0x1014bc
	strb r0, [r6, #11]	@ 001014bc f072
.org 0x1014be
	ldr r0, [pc, #28]	@ 001014be 0748
.org 0x1014c0
	str r0, [r6, #48]	@ 001014c0 3063
.org 0x1014c2
	ldr r0, [pc, #28]	@ 001014c2 0748
.org 0x1014c4
	strh r0, [r6, #38]	@ 001014c4 f084
.org 0x1014c6
	ldrb r0, [r6, #10]	@ 001014c6 b07a
.org 0x1014c8
	movs r1, #4	@ 001014c8 0421
.org 0x1014ca
	orrs r0, r1	@ 001014ca 0843
.org 0x1014cc
	strb r0, [r6, #10]	@ 001014cc b072
.org 0x1014ce
	adds r4, r6, #0	@ 001014ce 341c
.org 0x1014d0
	adds r4, #116	@ 001014d0 7434
.org 0x1014d2
	ldr r1, [pc, #16]	@ 001014d2 0449
.org 0x1014d4
	b.n 0x101510	@ 001014d4 1ce0
.org 0x1014d6
	.byte 0x00	@ 001014d6 data
.org 0x1014d7
	.byte 0x00	@ 001014d7 data
.org 0x1014d8
	.byte 0x01,0xc0,0x00,0x00	@ 001014d8 data
.org 0x1014dc
	.byte 0x28,0xba,0x86,0x08	@ 001014dc data
.org 0x1014e0
	.byte 0x01,0x02,0x00,0x00	@ 001014e0 data
.org 0x1014e4
	.byte 0x08,0xba,0x86,0x08	@ 001014e4 data
.org 0x1014e8
	movs r1, #192	@ 001014e8 c021
.org 0x1014ea
	lsls r1, r1, #8	@ 001014ea 0902
.org 0x1014ec
	adds r0, r6, #0	@ 001014ec 301c
.org 0x1014ee
	bl 0x1cf00	@ 001014ee 1bf707fd
.org 0x1014f2
	ldrb r0, [r6, #11]	@ 001014f2 f07a
.org 0x1014f4
	movs r1, #8	@ 001014f4 0821
.org 0x1014f6
	orrs r0, r1	@ 001014f6 0843
.org 0x1014f8
	strb r0, [r6, #11]	@ 001014f8 f072
.org 0x1014fa
	ldr r0, [pc, #156]	@ 001014fa 2748
.org 0x1014fc
	str r0, [r6, #48]	@ 001014fc 3063
.org 0x1014fe
	ldr r0, [pc, #156]	@ 001014fe 2748
.org 0x101500
	strh r0, [r6, #38]	@ 00101500 f084
.org 0x101502
	ldrb r0, [r6, #10]	@ 00101502 b07a
.org 0x101504
	movs r1, #4	@ 00101504 0421
.org 0x101506
	orrs r0, r1	@ 00101506 0843
.org 0x101508
	strb r0, [r6, #10]	@ 00101508 b072
.org 0x10150a
	adds r4, r6, #0	@ 0010150a 341c
.org 0x10150c
	adds r4, #116	@ 0010150c 7434
.org 0x10150e
	ldr r1, [pc, #144]	@ 0010150e 2449
.org 0x101510
	adds r2, r6, #0	@ 00101510 321c
.org 0x101512
	adds r2, #84	@ 00101512 5432
.org 0x101514
	adds r0, r4, #0	@ 00101514 201c
.org 0x101516
	movs r3, #8	@ 00101516 0823
.org 0x101518
	bl 0x5760	@ 00101518 04f722f9
.org 0x10151c
	str r6, [r4, #44]	@ 0010151c e662
.org 0x10151e
	str r5, [r4, #36]	@ 0010151e 6562
.org 0x101520
	adds r0, r6, #0	@ 00101520 301c
.org 0x101522
	bl 0x1cff0	@ 00101522 1bf765fd
.org 0x101526
	ldr r0, [pc, #124]	@ 00101526 1f48
.org 0x101528
	str r0, [r4, #36]	@ 00101528 6062
.org 0x10152a
	movs r4, #0	@ 0010152a 0024
.org 0x10152c
	ldrb r1, [r6, #10]	@ 0010152c b17a
.org 0x10152e
	movs r0, #239	@ 0010152e ef20
.org 0x101530
	ands r0, r1	@ 00101530 0840
.org 0x101532
	strb r0, [r6, #10]	@ 00101532 b072
.org 0x101534
	movs r5, #1	@ 00101534 0125
.org 0x101536
	adds r0, r6, #0	@ 00101536 301c
.org 0x101538
	adds r0, #76	@ 00101538 4c30
.org 0x10153a
	strb r4, [r0, #0]	@ 0010153a 0470
.org 0x10153c
	adds r2, r6, #0	@ 0010153c 321c
.org 0x10153e
	adds r2, #74	@ 0010153e 4a32
.org 0x101540
	ldrb r1, [r2, #0]	@ 00101540 1178
.org 0x101542
	movs r0, #17	@ 00101542 1120
.org 0x101544
	negs r0, r0	@ 00101544 4042
.org 0x101546
	ands r0, r1	@ 00101546 0840
.org 0x101548
	strb r0, [r2, #0]	@ 00101548 1070
.org 0x10154a
	adds r1, r6, #0	@ 0010154a 311c
.org 0x10154c
	adds r1, #37	@ 0010154c 2531
.org 0x10154e
	movs r0, #23	@ 0010154e 1720
.org 0x101550
	strb r0, [r1, #0]	@ 00101550 0870
.org 0x101552
	ldr r0, [pc, #84]	@ 00101552 1548
.org 0x101554
	ldrb r1, [r6, #16]	@ 00101554 317c
.org 0x101556
	lsls r1, r1, #2	@ 00101556 8900
.org 0x101558
	adds r1, r1, r0	@ 00101558 0918
.org 0x10155a
	ldr r0, [r6, #84]	@ 0010155a 706d
.org 0x10155c
	ldr r1, [r1, #0]	@ 0010155c 0968
.org 0x10155e
	adds r0, r0, r1	@ 0010155e 4018
.org 0x101560
	str r0, [r6, #84]	@ 00101560 7065
.org 0x101562
	ldr r1, [r6, #88]	@ 00101562 b16d
.org 0x101564
	bl 0x8534	@ 00101564 06f7e6ff
.org 0x101568
	str r0, [r6, #88]	@ 00101568 b065
.org 0x10156a
	adds r1, r6, #0	@ 0010156a 311c
.org 0x10156c
	adds r1, #180	@ 0010156c b431
.org 0x10156e
	ldr r0, [r6, #84]	@ 0010156e 706d
.org 0x101570
	str r0, [r1, #0]	@ 00101570 0860
.org 0x101572
	adds r1, #4	@ 00101572 0431
.org 0x101574
	ldr r0, [r6, #88]	@ 00101574 b06d
.org 0x101576
	str r0, [r1, #0]	@ 00101576 0860
.org 0x101578
	str r4, [r6, #44]	@ 00101578 f462
.org 0x10157a
	ldr r1, [pc, #48]	@ 0010157a 0c49
.org 0x10157c
	ldrb r0, [r6, #9]	@ 0010157c 707a
.org 0x10157e
	lsls r0, r0, #2	@ 0010157e 8000
.org 0x101580
	adds r0, r0, r1	@ 00101580 4018
.org 0x101582
	str r5, [r6, #12]	@ 00101582 f560

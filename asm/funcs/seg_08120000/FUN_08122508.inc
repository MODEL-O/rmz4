@ FUN_08122508  entry 0x08122508  size 292
.thumb
.org 0x122508
FUN_08122508:
	push {r4, r5, r6, r7, lr}	@ 00122508 f0b5
.org 0x12250a
	adds r5, r0, #0	@ 0012250a 051c
.org 0x12250c
	movs r0, #51	@ 0012250c 3320
.org 0x12250e
	bl 0x2624	@ 0012250e e0f689f8
.org 0x122512
	movs r0, #121	@ 00122512 7920
.org 0x122514
	bl 0x2624	@ 00122514 e0f686f8
.org 0x122518
	ldr r3, [pc, #32]	@ 00122518 084b
.org 0x12251a
	movs r7, #1	@ 0012251a 0127
.org 0x12251c
	str r7, [r3, #12]	@ 0012251c df60
.org 0x12251e
	ldr r0, [pc, #32]	@ 0012251e 0848
.org 0x122520
	adds r4, r5, r0	@ 00122520 2c18
.org 0x122522
	movs r1, #0	@ 00122522 0021
.org 0x122524
	strb r1, [r4, #2]	@ 00122524 a170
.org 0x122526
	ldr r0, [pc, #28]	@ 00122526 0748
.org 0x122528
	strh r1, [r0, #0]	@ 00122528 0180
.org 0x12252a
	ldr r1, [r4, #8]	@ 0012252a a168
.org 0x12252c
	movs r6, #1	@ 0012252c 0126
.org 0x12252e
	negs r6, r6	@ 0012252e 7642
.org 0x122530
	cmp r1, r6	@ 00122530 b142
.org 0x122532
	bne.n 0x122548	@ 00122532 09d1
.org 0x122534
	bl 0x1354	@ 00122534 def60eff
.org 0x122538
	b.n 0x122686	@ 00122538 a5e0
.org 0x12253a
	.byte 0x00	@ 0012253a data
.org 0x12253b
	.byte 0x00	@ 0012253b data
.org 0x12253c
	.byte 0x10,0xf6,0x02,0x02	@ 0012253c data
.org 0x122540
	.byte 0xcc,0x0d,0x00,0x00	@ 00122540 data
.org 0x122544
	.byte 0xc0,0x2a,0x00,0x03	@ 00122544 data
.org 0x122548
	ldr r0, [pc, #8]	@ 00122548 0248
.org 0x12254a
	cmp r1, r0	@ 0012254a 8142
.org 0x12254c
	bne.n 0x122558	@ 0012254c 04d1
.org 0x12254e
	movs r1, #144	@ 0012254e 9021
.org 0x122550
	lsls r1, r1, #4	@ 00122550 0901
.org 0x122552
	b.n 0x12264c	@ 00122552 7be0
.org 0x122554
	.byte 0xff,0xff,0xff,0x0f	@ 00122554 data
.org 0x122558
	cmp r1, #0	@ 00122558 0029
.org 0x12255a
	beq.n 0x12255e	@ 0012255a 00d0
.org 0x12255c
	b.n 0x122658	@ 0012255c 7ce0
.org 0x12255e
	ldr r1, [pc, #64]	@ 0012255e 1049
.org 0x122560
	adds r2, r3, r1	@ 00122560 5a18
.org 0x122562
	ldr r0, [pc, #64]	@ 00122562 1048
.org 0x122564
	adds r1, r3, r0	@ 00122564 1918
.org 0x122566
	ldr r0, [pc, #64]	@ 00122566 1048
.org 0x122568
	str r0, [r1, #0]	@ 00122568 0860
.org 0x12256a
	str r0, [r2, #0]	@ 0012256a 1060
.org 0x12256c
	ldr r0, [pc, #60]	@ 0012256c 0f48
.org 0x12256e
	ldr r0, [r0, #0]	@ 0012256e 0068
.org 0x122570
	ldrb r0, [r0, #20]	@ 00122570 007d
.org 0x122572
	cmp r0, #0	@ 00122572 0028
.org 0x122574
	bne.n 0x122638	@ 00122574 60d1
.org 0x122576
	ldr r0, [pc, #56]	@ 00122576 0e48
.org 0x122578
	adds r1, r3, r0	@ 00122578 1918
.org 0x12257a
	movs r0, #1	@ 0012257a 0120
.org 0x12257c
	bl 0x1e878	@ 0012257c fcf67cf9
.org 0x122580
	ldr r0, [pc, #48]	@ 00122580 0c48
.org 0x122582
	ldrb r1, [r0, #4]	@ 00122582 0179
.org 0x122584
	adds r0, r7, #0	@ 00122584 381c
.org 0x122586
	ands r0, r1	@ 00122586 0840
.org 0x122588
	cmp r0, #0	@ 00122588 0028
.org 0x12258a
	beq.n 0x1225c4	@ 0012258a 1bd0
.org 0x12258c
	ldr r0, [pc, #40]	@ 0012258c 0a48
.org 0x12258e
	ldr r1, [pc, #44]	@ 0012258e 0b49
.org 0x122590
	adds r0, r0, r1	@ 00122590 4018
.org 0x122592
	movs r1, #2	@ 00122592 0221
.org 0x122594
	strb r1, [r0, #0]	@ 00122594 0170
.org 0x122596
	ldr r1, [pc, #40]	@ 00122596 0a49
.org 0x122598
	adds r0, r5, r1	@ 00122598 6818
.org 0x12259a
	strh r7, [r0, #2]	@ 0012259a 4780
.org 0x12259c
	b.n 0x12261c	@ 0012259c 3ee0
.org 0x12259e
	.byte 0x00	@ 0012259e data
.org 0x12259f
	.byte 0x00	@ 0012259f data
.org 0x1225a0
	.byte 0xa8,0x63,0x00,0x00	@ 001225a0 data
.org 0x1225a4
	.byte 0xac,0x63,0x00,0x00	@ 001225a4 data
.org 0x1225a8
	.byte 0x00,0x66,0x03,0x02	@ 001225a8 data
.org 0x1225ac
	.byte 0xe0,0xe8,0x02,0x02	@ 001225ac data
.org 0x1225b0
	.byte 0x70,0x62,0x00,0x00	@ 001225b0 data
.org 0x1225b4
	.byte 0xb0,0xe8,0x02,0x02	@ 001225b4 data
.org 0x1225b8
	.byte 0xb0,0xf3,0x02,0x02	@ 001225b8 data
.org 0x1225bc
	.byte 0x55,0x02,0x00,0x00	@ 001225bc data
.org 0x1225c0
	.byte 0x5c,0x62,0x00,0x00	@ 001225c0 data
.org 0x1225c4
	movs r0, #4	@ 001225c4 0420
.org 0x1225c6
	ands r0, r1	@ 001225c6 0840
.org 0x1225c8
	cmp r0, #0	@ 001225c8 0028
.org 0x1225ca
	beq.n 0x1225ec	@ 001225ca 0fd0
.org 0x1225cc
	ldr r0, [pc, #16]	@ 001225cc 0448
.org 0x1225ce
	ldr r1, [pc, #20]	@ 001225ce 0549
.org 0x1225d0
	adds r0, r0, r1	@ 001225d0 4018
.org 0x1225d2
	movs r1, #0	@ 001225d2 0021
.org 0x1225d4
	strb r1, [r0, #0]	@ 001225d4 0170
.org 0x1225d6
	ldr r0, [pc, #16]	@ 001225d6 0448
.org 0x1225d8
	adds r1, r5, r0	@ 001225d8 2918
.org 0x1225da
	movs r0, #3	@ 001225da 0320
.org 0x1225dc
	strh r0, [r1, #2]	@ 001225dc 4880
.org 0x1225de
	b.n 0x12261c	@ 001225de 1de0
.org 0x1225e0
	.byte 0xb0,0xf3,0x02,0x02	@ 001225e0 data
.org 0x1225e4
	.byte 0x55,0x02,0x00,0x00	@ 001225e4 data
.org 0x1225e8
	.byte 0x5c,0x62,0x00,0x00	@ 001225e8 data
.org 0x1225ec
	movs r2, #2	@ 001225ec 0222
.org 0x1225ee
	adds r0, r2, #0	@ 001225ee 101c
.org 0x1225f0
	ands r0, r1	@ 001225f0 0840
.org 0x1225f2
	cmp r0, #0	@ 001225f2 0028
.org 0x1225f4
	beq.n 0x122614	@ 001225f4 0ed0
.org 0x1225f6
	ldr r0, [pc, #16]	@ 001225f6 0448
.org 0x1225f8
	ldr r1, [pc, #16]	@ 001225f8 0449
.org 0x1225fa
	adds r0, r0, r1	@ 001225fa 4018
.org 0x1225fc
	movs r1, #3	@ 001225fc 0321
.org 0x1225fe
	strb r1, [r0, #0]	@ 001225fe 0170
.org 0x122600
	ldr r1, [pc, #12]	@ 00122600 0349
.org 0x122602
	adds r0, r5, r1	@ 00122602 6818
.org 0x122604
	strh r2, [r0, #2]	@ 00122604 4280
.org 0x122606
	b.n 0x12261c	@ 00122606 09e0
.org 0x122608
	.byte 0xb0,0xf3,0x02,0x02	@ 00122608 data
.org 0x12260c
	.byte 0x55,0x02,0x00,0x00	@ 0012260c data
.org 0x122610
	.byte 0x5c,0x62,0x00,0x00	@ 00122610 data
.org 0x122614
	ldr r0, [pc, #20]	@ 00122614 0548
.org 0x122616
	ldr r1, [pc, #24]	@ 00122616 0649
.org 0x122618
	adds r0, r0, r1	@ 00122618 4018
.org 0x12261a
	strb r7, [r0, #0]	@ 0012261a 0770
.org 0x12261c
	ldr r1, [pc, #20]	@ 0012261c 0549
.org 0x12261e
	adds r0, r5, r1	@ 0012261e 6818
.org 0x122620
	movs r1, #1	@ 00122620 0121
.org 0x122622
	strh r1, [r0, #0]	@ 00122622 0180
.org 0x122624
	movs r0, #1	@ 00122624 0120
.org 0x122626
	bl 0x1f124	@ 00122626 fcf67dfd
.org 0x12262a
	b.n 0x122648	@ 0012262a 0de0

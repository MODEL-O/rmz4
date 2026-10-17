@ FUN_0803152c  entry 0x0803152c  size 534
.thumb
.org 0x3152c
FUN_0803152c:
	push {r4, r5, r6, r7, lr}	@ 0003152c f0b5
.org 0x3152e
	mov r7, r8	@ 0003152e 4746
.org 0x31530
	push {r7}	@ 00031530 80b4
.org 0x31532
	adds r4, r0, #0	@ 00031532 041c
.org 0x31534
	ldrb r1, [r4, #30]	@ 00031534 a17f
.org 0x31536
	lsls r1, r1, #8	@ 00031536 0902
.org 0x31538
	adds r0, #112	@ 00031538 7030
.org 0x3153a
	ldrb r0, [r0, #0]	@ 0003153a 0078
.org 0x3153c
	orrs r0, r1	@ 0003153c 0843
.org 0x3153e
	ldr r1, [pc, #100]	@ 0003153e 1949
.org 0x31540
	cmp r0, r1	@ 00031540 8842
.org 0x31542
	bne.n 0x315e0	@ 00031542 4dd1
.org 0x31544
	adds r0, r4, #0	@ 00031544 201c
.org 0x31546
	adds r0, #113	@ 00031546 7130
.org 0x31548
	movs r5, #0	@ 00031548 0025
.org 0x3154a
	ldrsb r5, [r0, r5]	@ 0003154a 4557
.org 0x3154c
	cmp r5, #0	@ 0003154c 002d
.org 0x3154e
	bne.n 0x315e0	@ 0003154e 47d1
.org 0x31550
	movs r1, #150	@ 00031550 9621
.org 0x31552
	lsls r1, r1, #2	@ 00031552 8900
.org 0x31554
	adds r0, r4, r1	@ 00031554 6018
.org 0x31556
	ldr r0, [r0, #0]	@ 00031556 0068
.org 0x31558
	movs r1, #8	@ 00031558 0821
.org 0x3155a
	ands r0, r1	@ 0003155a 0840
.org 0x3155c
	cmp r0, #0	@ 0003155c 0028
.org 0x3155e
	beq.n 0x315e0	@ 0003155e 3fd0
.org 0x31560
	ldr r1, [pc, #68]	@ 00031560 1149
.org 0x31562
	adds r0, r4, #0	@ 00031562 201c
.org 0x31564
	movs r2, #1	@ 00031564 0122
.org 0x31566
	movs r3, #4	@ 00031566 0423
.org 0x31568
	bl 0x1cfc8	@ 00031568 ebf72efd
.org 0x3156c
	ldrb r1, [r4, #10]	@ 0003156c a17a
.org 0x3156e
	movs r2, #16	@ 0003156e 1022
.org 0x31570
	movs r0, #16	@ 00031570 1020
.org 0x31572
	ands r0, r1	@ 00031572 0840
.org 0x31574
	cmp r0, #0	@ 00031574 0028
.org 0x31576
	beq.n 0x315ac	@ 00031576 19d0
.org 0x31578
	adds r0, r4, #0	@ 00031578 201c
.org 0x3157a
	adds r0, #76	@ 0003157a 4c30
.org 0x3157c
	strb r5, [r0, #0]	@ 0003157c 0570
.org 0x3157e
	adds r2, r4, #0	@ 0003157e 221c
.org 0x31580
	adds r2, #74	@ 00031580 4a32
.org 0x31582
	ldrb r1, [r2, #0]	@ 00031582 1178
.org 0x31584
	movs r0, #17	@ 00031584 1120
.org 0x31586
	negs r0, r0	@ 00031586 4042
.org 0x31588
	ands r0, r1	@ 00031588 0840
.org 0x3158a
	strb r0, [r2, #0]	@ 0003158a 1070
.org 0x3158c
	ldrb r1, [r4, #10]	@ 0003158c a17a
.org 0x3158e
	movs r0, #239	@ 0003158e ef20
.org 0x31590
	ands r0, r1	@ 00031590 0840
.org 0x31592
	strb r0, [r4, #10]	@ 00031592 a072
.org 0x31594
	adds r0, r4, #0	@ 00031594 201c
.org 0x31596
	bl 0x38790	@ 00031596 07f0fbf8
.org 0x3159a
	lsls r0, r0, #16	@ 0003159a 0004
.org 0x3159c
	asrs r0, r0, #16	@ 0003159c 0014
.org 0x3159e
	negs r0, r0	@ 0003159e 4042
.org 0x315a0
	b.n 0x315cc	@ 000315a0 14e0
.org 0x315a2
	.byte 0x00	@ 000315a2 data
.org 0x315a3
	.byte 0x00	@ 000315a3 data
.org 0x315a4
	.byte 0x01,0x05,0x00,0x00	@ 000315a4 data
.org 0x315a8
	.byte 0x01,0x06,0x00,0x00	@ 000315a8 data
.org 0x315ac
	adds r1, r4, #0	@ 000315ac 211c
.org 0x315ae
	adds r1, #76	@ 000315ae 4c31
.org 0x315b0
	movs r0, #1	@ 000315b0 0120
.org 0x315b2
	strb r0, [r1, #0]	@ 000315b2 0870
.org 0x315b4
	subs r1, #2	@ 000315b4 0239
.org 0x315b6
	ldrb r0, [r1, #0]	@ 000315b6 0878
.org 0x315b8
	orrs r0, r2	@ 000315b8 1043
.org 0x315ba
	strb r0, [r1, #0]	@ 000315ba 0870
.org 0x315bc
	ldrb r0, [r4, #10]	@ 000315bc a07a
.org 0x315be
	orrs r0, r2	@ 000315be 1043
.org 0x315c0
	strb r0, [r4, #10]	@ 000315c0 a072
.org 0x315c2
	adds r0, r4, #0	@ 000315c2 201c
.org 0x315c4
	bl 0x38790	@ 000315c4 07f0e4f8
.org 0x315c8
	lsls r0, r0, #16	@ 000315c8 0004
.org 0x315ca
	asrs r0, r0, #16	@ 000315ca 0014
.org 0x315cc
	str r0, [r4, #92]	@ 000315cc e065
.org 0x315ce
	adds r5, r4, #0	@ 000315ce 251c
.org 0x315d0
	adds r5, #180	@ 000315d0 b435
.org 0x315d2
	ldr r0, [r5, #84]	@ 000315d2 686d
.org 0x315d4
	cmp r0, #0	@ 000315d4 0028
.org 0x315d6
	bne.n 0x315e0	@ 000315d6 03d1
.org 0x315d8
	adds r0, r4, #0	@ 000315d8 201c
.org 0x315da
	bl 0xd2690	@ 000315da a1f059f8
.org 0x315de
	str r0, [r5, #84]	@ 000315de 6865
.org 0x315e0
	ldr r0, [pc, #24]	@ 000315e0 0648
.org 0x315e2
	adds r1, r4, r0	@ 000315e2 2118
.org 0x315e4
	ldrb r0, [r1, #0]	@ 000315e4 0878
.org 0x315e6
	adds r2, r0, #0	@ 000315e6 021c
.org 0x315e8
	cmp r2, #0	@ 000315e8 002a
.org 0x315ea
	beq.n 0x31600	@ 000315ea 09d0
.org 0x315ec
	subs r0, #1	@ 000315ec 0138
.org 0x315ee
	strb r0, [r1, #0]	@ 000315ee 0870
.org 0x315f0
	ldr r0, [r4, #92]	@ 000315f0 e06d
.org 0x315f2
	lsls r0, r0, #16	@ 000315f2 0004
.org 0x315f4
	lsrs r5, r0, #16	@ 000315f4 050c
.org 0x315f6
	adds r7, r4, #0	@ 000315f6 271c
.org 0x315f8
	adds r7, #180	@ 000315f8 b437
.org 0x315fa
	b.n 0x316b2	@ 000315fa 5ae0
.org 0x315fc
	.byte 0x3b,0x01,0x00,0x00	@ 000315fc data
.org 0x31600
	ldrb r0, [r4, #10]	@ 00031600 a07a
.org 0x31602
	lsrs r3, r0, #4	@ 00031602 0309
.org 0x31604
	movs r6, #1	@ 00031604 0126
.org 0x31606
	ands r3, r6	@ 00031606 3340
.org 0x31608
	movs r1, #150	@ 00031608 9621
.org 0x3160a
	lsls r1, r1, #2	@ 0003160a 8900
.org 0x3160c
	adds r0, r4, r1	@ 0003160c 6018
.org 0x3160e
	ldr r1, [r0, #0]	@ 0003160e 0168
.org 0x31610
	movs r0, #32	@ 00031610 2020
.org 0x31612
	ands r0, r1	@ 00031612 0840
.org 0x31614
	cmp r0, #0	@ 00031614 0028
.org 0x31616
	beq.n 0x31644	@ 00031616 15d0
.org 0x31618
	ldr r0, [r4, #92]	@ 00031618 e06d
.org 0x3161a
	cmp r0, #0	@ 0003161a 0028
.org 0x3161c
	bge.n 0x31620	@ 0003161c 00da
.org 0x3161e
	negs r0, r0	@ 0003161e 4042
.org 0x31620
	negs r0, r0	@ 00031620 4042
.org 0x31622
	lsls r0, r0, #16	@ 00031622 0004
.org 0x31624
	lsrs r5, r0, #16	@ 00031624 050c
.org 0x31626
	adds r0, r4, #0	@ 00031626 201c
.org 0x31628
	adds r0, #76	@ 00031628 4c30
.org 0x3162a
	strb r2, [r0, #0]	@ 0003162a 0270
.org 0x3162c
	adds r2, r4, #0	@ 0003162c 221c
.org 0x3162e
	adds r2, #74	@ 0003162e 4a32
.org 0x31630
	ldrb r1, [r2, #0]	@ 00031630 1178
.org 0x31632
	movs r0, #17	@ 00031632 1120
.org 0x31634
	negs r0, r0	@ 00031634 4042
.org 0x31636
	ands r0, r1	@ 00031636 0840
.org 0x31638
	strb r0, [r2, #0]	@ 00031638 1070
.org 0x3163a
	ldrb r1, [r4, #10]	@ 0003163a a17a
.org 0x3163c
	movs r0, #239	@ 0003163c ef20
.org 0x3163e
	ands r0, r1	@ 0003163e 0840
.org 0x31640
	strb r0, [r4, #10]	@ 00031640 a072
.org 0x31642
	b.n 0x31674	@ 00031642 17e0
.org 0x31644
	movs r0, #16	@ 00031644 1020
.org 0x31646
	ands r1, r0	@ 00031646 0140
.org 0x31648
	cmp r1, #0	@ 00031648 0029
.org 0x3164a
	beq.n 0x31672	@ 0003164a 12d0
.org 0x3164c
	ldr r0, [r4, #92]	@ 0003164c e06d
.org 0x3164e
	cmp r0, #0	@ 0003164e 0028
.org 0x31650
	bge.n 0x31654	@ 00031650 00da
.org 0x31652
	negs r0, r0	@ 00031652 4042
.org 0x31654
	lsls r0, r0, #16	@ 00031654 0004
.org 0x31656
	lsrs r5, r0, #16	@ 00031656 050c
.org 0x31658
	adds r0, r4, #0	@ 00031658 201c
.org 0x3165a
	adds r0, #76	@ 0003165a 4c30
.org 0x3165c
	strb r6, [r0, #0]	@ 0003165c 0670
.org 0x3165e
	adds r2, r4, #0	@ 0003165e 221c
.org 0x31660
	adds r2, #74	@ 00031660 4a32
.org 0x31662
	ldrb r0, [r2, #0]	@ 00031662 1078
.org 0x31664
	movs r1, #16	@ 00031664 1021
.org 0x31666
	orrs r0, r1	@ 00031666 0843
.org 0x31668
	strb r0, [r2, #0]	@ 00031668 1070
.org 0x3166a
	ldrb r0, [r4, #10]	@ 0003166a a07a
.org 0x3166c
	orrs r1, r0	@ 0003166c 0143
.org 0x3166e
	strb r1, [r4, #10]	@ 0003166e a172
.org 0x31670
	b.n 0x31674	@ 00031670 00e0
.org 0x31672
	movs r5, #0	@ 00031672 0025
.org 0x31674
	adds r0, r4, #0	@ 00031674 201c
.org 0x31676
	adds r0, #180	@ 00031676 b430
.org 0x31678
	ldr r6, [r0, #84]	@ 00031678 466d
.org 0x3167a
	adds r7, r0, #0	@ 0003167a 071c
.org 0x3167c
	cmp r6, #0	@ 0003167c 002e
.org 0x3167e
	bne.n 0x3169c	@ 0003167e 0dd1
.org 0x31680
	ldrb r0, [r4, #10]	@ 00031680 a07a
.org 0x31682
	lsrs r0, r0, #4	@ 00031682 0009
.org 0x31684
	movs r1, #1	@ 00031684 0121
.org 0x31686
	ands r0, r1	@ 00031686 0840
.org 0x31688
	cmp r3, r0	@ 00031688 8342
.org 0x3168a
	beq.n 0x316b2	@ 0003168a 12d0
.org 0x3168c
	ldr r1, [pc, #8]	@ 0003168c 0249
.org 0x3168e
	adds r0, r4, #0	@ 0003168e 201c
.org 0x31690
	bl 0x1cf00	@ 00031690 ebf736fc
.org 0x31694
	strb r6, [r4, #15]	@ 00031694 e673
.org 0x31696
	b.n 0x316b2	@ 00031696 0ce0
.org 0x31698
	.byte 0x02,0x05,0x00,0x00	@ 00031698 data
.org 0x3169c
	lsls r0, r5, #16	@ 0003169c 2804
.org 0x3169e
	asrs r0, r0, #16	@ 0003169e 0014
.org 0x316a0
	ldr r1, [r4, #92]	@ 000316a0 e16d
.org 0x316a2
	cmp r0, r1	@ 000316a2 8842
.org 0x316a4
	beq.n 0x316b2	@ 000316a4 05d0
.org 0x316a6
	ldr r1, [pc, #172]	@ 000316a6 2b49
.org 0x316a8
	adds r0, r4, #0	@ 000316a8 201c
.org 0x316aa
	bl 0x1cf00	@ 000316aa ebf729fc
.org 0x316ae
	movs r0, #0	@ 000316ae 0020
.org 0x316b0
	strb r0, [r4, #15]	@ 000316b0 e073
.org 0x316b2
	lsls r1, r5, #16	@ 000316b2 2904
.org 0x316b4
	asrs r1, r1, #16	@ 000316b4 0914
.org 0x316b6
	ldr r0, [r4, #84]	@ 000316b6 606d
.org 0x316b8
	adds r0, r0, r1	@ 000316b8 4018
.org 0x316ba
	str r0, [r4, #84]	@ 000316ba 6065
.org 0x316bc
	adds r6, r7, #0	@ 000316bc 3e1c
.org 0x316be
	movs r0, #186	@ 000316be ba20
.org 0x316c0
	lsls r0, r0, #1	@ 000316c0 4000
.org 0x316c2
	adds r5, r4, r0	@ 000316c2 2518
.org 0x316c4
	ldrb r1, [r5, #0]	@ 000316c4 2978
.org 0x316c6
	lsls r1, r1, #3	@ 000316c6 c900
.org 0x316c8
	ldr r0, [pc, #140]	@ 000316c8 2348
.org 0x316ca
	mov r8, r0	@ 000316ca 8046
.org 0x316cc
	add r1, r8	@ 000316cc 4144
.org 0x316ce
	adds r0, r4, #0	@ 000316ce 201c
.org 0x316d0
	movs r2, #0	@ 000316d0 0022
.org 0x316d2
	bl 0x2b7f0	@ 000316d2 faf78df8
.org 0x316d6
	lsls r0, r0, #16	@ 000316d6 0004
.org 0x316d8
	cmp r0, #0	@ 000316d8 0028
.org 0x316da
	beq.n 0x316e0	@ 000316da 01d0
.org 0x316dc
	movs r0, #0	@ 000316dc 0020
.org 0x316de
	str r0, [r6, #104]	@ 000316de b066
.org 0x316e0
	ldrb r1, [r5, #0]	@ 000316e0 2978
.org 0x316e2
	lsls r1, r1, #3	@ 000316e2 c900
.org 0x316e4
	add r1, r8	@ 000316e4 4144
.org 0x316e6
	adds r0, r4, #0	@ 000316e6 201c
.org 0x316e8
	movs r2, #1	@ 000316e8 0122
.org 0x316ea
	bl 0x2b7f0	@ 000316ea faf781f8
.org 0x316ee
	lsls r0, r0, #16	@ 000316ee 0004
.org 0x316f0
	cmp r0, #0	@ 000316f0 0028
.org 0x316f2
	beq.n 0x316f8	@ 000316f2 01d0
.org 0x316f4
	movs r0, #0	@ 000316f4 0020
.org 0x316f6
	str r0, [r7, #104]	@ 000316f6 b866
.org 0x316f8
	ldr r0, [r4, #88]	@ 000316f8 a06d
.org 0x316fa
	ldr r1, [r4, #96]	@ 000316fa 216e
.org 0x316fc
	adds r0, r0, r1	@ 000316fc 4018
.org 0x316fe
	str r0, [r4, #88]	@ 000316fe a065
.org 0x31700
	adds r0, r4, #0	@ 00031700 201c
.org 0x31702
	bl 0x3851c	@ 00031702 06f00bff
.org 0x31706
	lsls r0, r0, #16	@ 00031706 0004
.org 0x31708
	asrs r0, r0, #16	@ 00031708 0014
.org 0x3170a
	ldr r1, [r4, #96]	@ 0003170a 216e
.org 0x3170c
	adds r1, r1, r0	@ 0003170c 0918
.org 0x3170e
	str r1, [r4, #96]	@ 0003170e 2166
.org 0x31710
	ldrb r1, [r5, #0]	@ 00031710 2978
.org 0x31712
	lsls r1, r1, #3	@ 00031712 c900
.org 0x31714
	add r1, r8	@ 00031714 4144
.org 0x31716
	adds r0, r4, #0	@ 00031716 201c
.org 0x31718
	movs r2, #0	@ 00031718 0022
.org 0x3171a
	bl 0x2bfe8	@ 0003171a faf765fc
.org 0x3171e
	lsls r0, r0, #16	@ 0003171e 0004
.org 0x31720
	lsrs r1, r0, #16	@ 00031720 010c
.org 0x31722
	cmp r1, #0	@ 00031722 0029
.org 0x31724
	bne.n 0x31738	@ 00031724 08d1
.org 0x31726
	ldrb r1, [r5, #0]	@ 00031726 2978
.org 0x31728
	lsls r1, r1, #3	@ 00031728 c900
.org 0x3172a
	add r1, r8	@ 0003172a 4144
.org 0x3172c
	adds r0, r4, #0	@ 0003172c 201c
.org 0x3172e
	movs r2, #1	@ 0003172e 0122
.org 0x31730
	bl 0x2c2d4	@ 00031730 faf7d0fd
.org 0x31734
	lsls r0, r0, #16	@ 00031734 0004
.org 0x31736
	lsrs r1, r0, #16	@ 00031736 010c
.org 0x31738
	ldr r0, [r4, #96]	@ 00031738 206e
.org 0x3173a
	cmp r0, #0	@ 0003173a 0028
.org 0x3173c
	bgt.n 0x31742	@ 0003173c 01dc
.org 0x3173e
	cmp r1, #0	@ 0003173e 0029
.org 0x31740
	beq.n 0x3174a	@ 00031740 03d0

@ FUN_08022530  entry 0x08022530  size 1048
.thumb
.org 0x22530
FUN_08022530:
	push {r4, r5, r6, r7, lr}	@ 00022530 f0b5
.org 0x22532
	adds r4, r0, #0	@ 00022532 041c
.org 0x22534
	ldr r3, [r4, #32]	@ 00022534 236a
.org 0x22536
	movs r0, #190	@ 00022536 be20
.org 0x22538
	lsls r0, r0, #1	@ 00022538 4000
.org 0x2253a
	adds r6, r4, r0	@ 0002253a 2618
.org 0x2253c
	ldrb r0, [r6, #0]	@ 0002253c 3078
.org 0x2253e
	cmp r0, #0	@ 0002253e 0028
.org 0x22540
	beq.n 0x22544	@ 00022540 00d0
.org 0x22542
	b.n 0x22694	@ 00022542 a7e0
.org 0x22544
	ldr r5, [pc, #64]	@ 00022544 104d
.org 0x22546
	ldrh r0, [r5, #8]	@ 00022546 2889
.org 0x22548
	movs r7, #1	@ 00022548 0127
.org 0x2254a
	movs r3, #0	@ 0002254a 0023
.org 0x2254c
	orrs r0, r7	@ 0002254c 3843
.org 0x2254e
	strh r0, [r5, #8]	@ 0002254e 2881
.org 0x22550
	ldr r2, [pc, #56]	@ 00022550 0e4a
.org 0x22552
	ldrb r1, [r2, #4]	@ 00022552 1179
.org 0x22554
	movs r0, #8	@ 00022554 0820
.org 0x22556
	orrs r0, r1	@ 00022556 0843
.org 0x22558
	strb r0, [r2, #4]	@ 00022558 1071
.org 0x2255a
	ldr r2, [pc, #52]	@ 0002255a 0d4a
.org 0x2255c
	adds r1, r4, r2	@ 0002255c a118
.org 0x2255e
	strb r3, [r1, #0]	@ 0002255e 0b70
.org 0x22560
	movs r1, #64	@ 00022560 4021
.org 0x22562
	ands r0, r1	@ 00022562 0840
.org 0x22564
	cmp r0, #0	@ 00022564 0028
.org 0x22566
	beq.n 0x22598	@ 00022566 17d0
.org 0x22568
	adds r0, r5, #0	@ 00022568 281c
.org 0x2256a
	adds r0, #16	@ 0002256a 1030
.org 0x2256c
	ldr r1, [pc, #36]	@ 0002256c 0949
.org 0x2256e
	ldr r1, [r1, #24]	@ 0002256e 8969
.org 0x22570
	ldr r1, [r1, #64]	@ 00022570 096c
.org 0x22572
	bl 0x275f0	@ 00022572 05f03df8
.org 0x22576
	movs r0, #192	@ 00022576 c020
.org 0x22578
	lsls r0, r0, #1	@ 00022578 4000
.org 0x2257a
	adds r1, r4, r0	@ 0002257a 2118
.org 0x2257c
	movs r0, #225	@ 0002257c e120
.org 0x2257e
	lsls r0, r0, #3	@ 0002257e c000
.org 0x22580
	str r0, [r1, #0]	@ 00022580 0860
.org 0x22582
	movs r0, #20	@ 00022582 1420
.org 0x22584
	b.n 0x22a14	@ 00022584 46e2
.org 0x22586
	.byte 0x00	@ 00022586 data
.org 0x22587
	.byte 0x00	@ 00022587 data
.org 0x22588
	.byte 0x10,0xe9,0x02,0x02	@ 00022588 data
.org 0x2258c
	.byte 0xb0,0xe8,0x02,0x02	@ 0002258c data
.org 0x22590
	.byte 0x7d,0x01,0x00,0x00	@ 00022590 data
.org 0x22594
	.byte 0xf8,0x2c,0x84,0x08	@ 00022594 data
.org 0x22598
	ldrb r4, [r5, #2]	@ 00022598 ac78
.org 0x2259a
	cmp r4, #0	@ 0002259a 002c
.org 0x2259c
	bne.n 0x225bc	@ 0002259c 0ed1
.org 0x2259e
	adds r0, r5, #0	@ 0002259e 281c
.org 0x225a0
	adds r0, #16	@ 000225a0 1030
.org 0x225a2
	ldr r1, [pc, #20]	@ 000225a2 0549
.org 0x225a4
	ldr r1, [r1, #24]	@ 000225a4 8969
.org 0x225a6
	ldr r1, [r1, #0]	@ 000225a6 0968
.org 0x225a8
	bl 0x275f0	@ 000225a8 05f022f8
.org 0x225ac
	movs r0, #1	@ 000225ac 0120
.org 0x225ae
	bl 0x1f63c	@ 000225ae fdf745f8
.org 0x225b2
	strb r7, [r6, #0]	@ 000225b2 3770
.org 0x225b4
	b.n 0x22a16	@ 000225b4 2fe2
.org 0x225b6
	.byte 0x00	@ 000225b6 data
.org 0x225b7
	.byte 0x00	@ 000225b7 data
.org 0x225b8
	.byte 0xf8,0x2c,0x84,0x08	@ 000225b8 data
.org 0x225bc
	cmp r4, #1	@ 000225bc 012c
.org 0x225be
	bne.n 0x225dc	@ 000225be 0dd1
.org 0x225c0
	adds r0, r5, #0	@ 000225c0 281c
.org 0x225c2
	adds r0, #16	@ 000225c2 1030
.org 0x225c4
	ldr r1, [pc, #16]	@ 000225c4 0449
.org 0x225c6
	ldr r1, [r1, #24]	@ 000225c6 8969
.org 0x225c8
	ldr r1, [r1, #4]	@ 000225c8 4968
.org 0x225ca
	bl 0x275f0	@ 000225ca 05f011f8
.org 0x225ce
	movs r0, #2	@ 000225ce 0220
.org 0x225d0
	bl 0x1f63c	@ 000225d0 fdf734f8
.org 0x225d4
	movs r0, #2	@ 000225d4 0220
.org 0x225d6
	b.n 0x22a14	@ 000225d6 1de2
.org 0x225d8
	.byte 0xf8,0x2c,0x84,0x08	@ 000225d8 data
.org 0x225dc
	cmp r4, #2	@ 000225dc 022c
.org 0x225de
	bne.n 0x225f8	@ 000225de 0bd1
.org 0x225e0
	adds r0, r5, #0	@ 000225e0 281c
.org 0x225e2
	adds r0, #16	@ 000225e2 1030
.org 0x225e4
	ldr r1, [pc, #12]	@ 000225e4 0349
.org 0x225e6
	ldr r1, [r1, #24]	@ 000225e6 8969
.org 0x225e8
	ldr r1, [r1, #8]	@ 000225e8 8968
.org 0x225ea
	bl 0x275f0	@ 000225ea 05f001f8
.org 0x225ee
	strb r4, [r6, #0]	@ 000225ee 3470
.org 0x225f0
	b.n 0x22a16	@ 000225f0 11e2
.org 0x225f2
	.byte 0x00	@ 000225f2 data
.org 0x225f3
	.byte 0x00	@ 000225f3 data
.org 0x225f4
	.byte 0xf8,0x2c,0x84,0x08	@ 000225f4 data
.org 0x225f8
	cmp r4, #3	@ 000225f8 032c
.org 0x225fa
	bne.n 0x22614	@ 000225fa 0bd1
.org 0x225fc
	adds r0, r5, #0	@ 000225fc 281c
.org 0x225fe
	adds r0, #16	@ 000225fe 1030
.org 0x22600
	ldr r1, [pc, #12]	@ 00022600 0349
.org 0x22602
	ldr r1, [r1, #24]	@ 00022602 8969
.org 0x22604
	ldr r1, [r1, #16]	@ 00022604 0969
.org 0x22606
	bl 0x275f0	@ 00022606 04f0f3ff
.org 0x2260a
	movs r0, #4	@ 0002260a 0420
.org 0x2260c
	b.n 0x22a14	@ 0002260c 02e2
.org 0x2260e
	.byte 0x00	@ 0002260e data
.org 0x2260f
	.byte 0x00	@ 0002260f data
.org 0x22610
	.byte 0xf8,0x2c,0x84,0x08	@ 00022610 data
.org 0x22614
	cmp r4, #4	@ 00022614 042c
.org 0x22616
	bne.n 0x22630	@ 00022616 0bd1
.org 0x22618
	adds r0, r5, #0	@ 00022618 281c
.org 0x2261a
	adds r0, #16	@ 0002261a 1030
.org 0x2261c
	ldr r1, [pc, #12]	@ 0002261c 0349
.org 0x2261e
	ldr r1, [r1, #24]	@ 0002261e 8969
.org 0x22620
	ldr r1, [r1, #24]	@ 00022620 8969
.org 0x22622
	bl 0x275f0	@ 00022622 04f0e5ff
.org 0x22626
	movs r0, #5	@ 00022626 0520
.org 0x22628
	b.n 0x22a14	@ 00022628 f4e1
.org 0x2262a
	.byte 0x00	@ 0002262a data
.org 0x2262b
	.byte 0x00	@ 0002262b data
.org 0x2262c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002262c data
.org 0x22630
	cmp r4, #5	@ 00022630 052c
.org 0x22632
	bne.n 0x2264c	@ 00022632 0bd1
.org 0x22634
	adds r0, r5, #0	@ 00022634 281c
.org 0x22636
	adds r0, #16	@ 00022636 1030
.org 0x22638
	ldr r1, [pc, #12]	@ 00022638 0349
.org 0x2263a
	ldr r1, [r1, #24]	@ 0002263a 8969
.org 0x2263c
	ldr r1, [r1, #32]	@ 0002263c 096a
.org 0x2263e
	bl 0x275f0	@ 0002263e 04f0d7ff
.org 0x22642
	movs r0, #9	@ 00022642 0920
.org 0x22644
	b.n 0x22a14	@ 00022644 e6e1
.org 0x22646
	.byte 0x00	@ 00022646 data
.org 0x22647
	.byte 0x00	@ 00022647 data
.org 0x22648
	.byte 0xf8,0x2c,0x84,0x08	@ 00022648 data
.org 0x2264c
	cmp r4, #6	@ 0002264c 062c
.org 0x2264e
	bne.n 0x22678	@ 0002264e 13d1
.org 0x22650
	ldr r0, [pc, #28]	@ 00022650 0748
.org 0x22652
	movs r1, #140	@ 00022652 8c21
.org 0x22654
	lsls r1, r1, #3	@ 00022654 c900
.org 0x22656
	adds r0, r0, r1	@ 00022656 4018
.org 0x22658
	movs r1, #158	@ 00022658 9e21
.org 0x2265a
	lsls r1, r1, #11	@ 0002265a c902
.org 0x2265c
	str r1, [r0, #0]	@ 0002265c 0160
.org 0x2265e
	adds r0, r5, #0	@ 0002265e 281c
.org 0x22660
	adds r0, #16	@ 00022660 1030
.org 0x22662
	ldr r1, [pc, #16]	@ 00022662 0449
.org 0x22664
	ldr r1, [r1, #24]	@ 00022664 8969
.org 0x22666
	ldr r1, [r1, #40]	@ 00022666 896a
.org 0x22668
	bl 0x275f0	@ 00022668 04f0c2ff
.org 0x2266c
	movs r0, #11	@ 0002266c 0b20
.org 0x2266e
	b.n 0x22a14	@ 0002266e d1e1
.org 0x22670
	.byte 0x40,0xe4,0x02,0x02	@ 00022670 data
.org 0x22674
	.byte 0xf8,0x2c,0x84,0x08	@ 00022674 data
.org 0x22678
	cmp r4, #7	@ 00022678 072c
.org 0x2267a
	beq.n 0x2267e	@ 0002267a 00d0
.org 0x2267c
	b.n 0x22a16	@ 0002267c cbe1
.org 0x2267e
	adds r0, r5, #0	@ 0002267e 281c
.org 0x22680
	adds r0, #16	@ 00022680 1030
.org 0x22682
	ldr r1, [pc, #12]	@ 00022682 0349
.org 0x22684
	ldr r1, [r1, #24]	@ 00022684 8969
.org 0x22686
	ldr r1, [r1, #48]	@ 00022686 096b
.org 0x22688
	bl 0x275f0	@ 00022688 04f0b2ff
.org 0x2268c
	movs r0, #12	@ 0002268c 0c20
.org 0x2268e
	b.n 0x22a14	@ 0002268e c1e1
.org 0x22690
	.byte 0xf8,0x2c,0x84,0x08	@ 00022690 data
.org 0x22694
	cmp r0, #1	@ 00022694 0128
.org 0x22696
	bne.n 0x226a2	@ 00022696 04d1
.org 0x22698
	movs r0, #2	@ 00022698 0220
.org 0x2269a
	bl 0x1f63c	@ 0002269a fcf7cfff
.org 0x2269e
	movs r0, #2	@ 0002269e 0220
.org 0x226a0
	b.n 0x22a14	@ 000226a0 b8e1
.org 0x226a2
	cmp r0, #2	@ 000226a2 0228
.org 0x226a4
	bne.n 0x226c0	@ 000226a4 0cd1
.org 0x226a6
	ldr r1, [r3, #84]	@ 000226a6 596d
.org 0x226a8
	movs r0, #240	@ 000226a8 f020
.org 0x226aa
	lsls r0, r0, #12	@ 000226aa 0003
.org 0x226ac
	cmp r1, r0	@ 000226ac 8142
.org 0x226ae
	ble.n 0x226c0	@ 000226ae 07dd
.org 0x226b0
	ldr r1, [r3, #88]	@ 000226b0 996d
.org 0x226b2
	ldr r0, [pc, #8]	@ 000226b2 0248
.org 0x226b4
	cmp r1, r0	@ 000226b4 8142
.org 0x226b6
	bgt.n 0x226c0	@ 000226b6 03dc
.org 0x226b8
	movs r0, #3	@ 000226b8 0320
.org 0x226ba
	b.n 0x22a14	@ 000226ba abe1
.org 0x226bc
	.byte 0xff,0x5f,0x04,0x00	@ 000226bc data
.org 0x226c0
	movs r2, #190	@ 000226c0 be22
.org 0x226c2
	lsls r2, r2, #1	@ 000226c2 5200
.org 0x226c4
	adds r5, r4, r2	@ 000226c4 a518
.org 0x226c6
	ldrb r0, [r5, #0]	@ 000226c6 2878
.org 0x226c8
	cmp r0, #3	@ 000226c8 0328
.org 0x226ca
	bne.n 0x226e8	@ 000226ca 0dd1
.org 0x226cc
	ldr r1, [r3, #84]	@ 000226cc 596d
.org 0x226ce
	movs r0, #255	@ 000226ce ff20
.org 0x226d0
	lsls r0, r0, #12	@ 000226d0 0003
.org 0x226d2
	cmp r1, r0	@ 000226d2 8142
.org 0x226d4
	ble.n 0x226e8	@ 000226d4 08dd
.org 0x226d6
	ldr r0, [pc, #8]	@ 000226d6 0248
.org 0x226d8
	ldr r1, [pc, #8]	@ 000226d8 0249
.org 0x226da
	ldr r1, [r1, #24]	@ 000226da 8969
.org 0x226dc
	ldr r1, [r1, #12]	@ 000226dc c968
.org 0x226de
	b.n 0x22706	@ 000226de 12e0
.org 0x226e0
	.byte 0x20,0xe9,0x02,0x02	@ 000226e0 data
.org 0x226e4
	.byte 0xf8,0x2c,0x84,0x08	@ 000226e4 data
.org 0x226e8
	movs r0, #190	@ 000226e8 be20
.org 0x226ea
	lsls r0, r0, #1	@ 000226ea 4000
.org 0x226ec
	adds r5, r4, r0	@ 000226ec 2518
.org 0x226ee
	ldrb r0, [r5, #0]	@ 000226ee 2878
.org 0x226f0
	cmp r0, #4	@ 000226f0 0428
.org 0x226f2
	bne.n 0x2272c	@ 000226f2 1bd1
.org 0x226f4
	ldr r1, [r3, #84]	@ 000226f4 596d
.org 0x226f6
	movs r0, #255	@ 000226f6 ff20
.org 0x226f8
	lsls r0, r0, #12	@ 000226f8 0003
.org 0x226fa
	cmp r1, r0	@ 000226fa 8142
.org 0x226fc
	ble.n 0x2272c	@ 000226fc 16dd
.org 0x226fe
	ldr r0, [pc, #32]	@ 000226fe 0848
.org 0x22700
	ldr r1, [pc, #32]	@ 00022700 0849
.org 0x22702
	ldr r1, [r1, #24]	@ 00022702 8969
.org 0x22704
	ldr r1, [r1, #20]	@ 00022704 4969
.org 0x22706
	bl 0x275f0	@ 00022706 04f073ff
.org 0x2270a
	movs r0, #4	@ 0002270a 0420
.org 0x2270c
	bl 0x1f63c	@ 0002270c fcf796ff
.org 0x22710
	ldr r2, [pc, #20]	@ 00022710 054a
.org 0x22712
	ldrb r1, [r2, #4]	@ 00022712 1179
.org 0x22714
	movs r0, #8	@ 00022714 0820
.org 0x22716
	orrs r0, r1	@ 00022716 0843
.org 0x22718
	strb r0, [r2, #4]	@ 00022718 1071
.org 0x2271a
	movs r0, #5	@ 0002271a 0520
.org 0x2271c
	strb r0, [r5, #0]	@ 0002271c 2870
.org 0x2271e
	b.n 0x22a16	@ 0002271e 7ae1
.org 0x22720
	.byte 0x20,0xe9,0x02,0x02	@ 00022720 data
.org 0x22724
	.byte 0xf8,0x2c,0x84,0x08	@ 00022724 data
.org 0x22728
	.byte 0xb0,0xe8,0x02,0x02	@ 00022728 data
.org 0x2272c
	movs r1, #190	@ 0002272c be21
.org 0x2272e
	lsls r1, r1, #1	@ 0002272e 4900
.org 0x22730
	adds r6, r4, r1	@ 00022730 6618
.org 0x22732
	ldrb r0, [r6, #0]	@ 00022732 3078
.org 0x22734
	cmp r0, #5	@ 00022734 0528
.org 0x22736
	bne.n 0x22742	@ 00022736 04d1
.org 0x22738
	movs r0, #3	@ 00022738 0320
.org 0x2273a
	bl 0x1f63c	@ 0002273a fcf77fff
.org 0x2273e
	movs r0, #6	@ 0002273e 0620
.org 0x22740
	b.n 0x22a14	@ 00022740 68e1
.org 0x22742
	cmp r0, #6	@ 00022742 0628
.org 0x22744
	bne.n 0x227a8	@ 00022744 30d1
.org 0x22746
	ldr r5, [pc, #76]	@ 00022746 134d
.org 0x22748
	ldrh r1, [r5, #8]	@ 00022748 2989
.org 0x2274a
	movs r0, #16	@ 0002274a 1020
.org 0x2274c
	ands r0, r1	@ 0002274c 0840
.org 0x2274e
	cmp r0, #0	@ 0002274e 0028
.org 0x22750
	beq.n 0x227a8	@ 00022750 2ad0
.org 0x22752
	ldr r1, [pc, #68]	@ 00022752 1149
.org 0x22754
	ldrb r2, [r1, #0]	@ 00022754 0a78
.org 0x22756
	movs r0, #128	@ 00022756 8020
.org 0x22758
	orrs r0, r2	@ 00022758 1043
.org 0x2275a
	strb r0, [r1, #0]	@ 0002275a 0870
.org 0x2275c
	ldrb r2, [r1, #1]	@ 0002275c 4a78
.org 0x2275e
	movs r0, #2	@ 0002275e 0220
.org 0x22760
	orrs r0, r2	@ 00022760 1043
.org 0x22762
	strb r0, [r1, #1]	@ 00022762 4870
.org 0x22764
	adds r0, r5, #0	@ 00022764 281c
.org 0x22766
	adds r0, #16	@ 00022766 1030
.org 0x22768
	ldr r1, [pc, #48]	@ 00022768 0c49
.org 0x2276a
	ldr r1, [r1, #24]	@ 0002276a 8969
.org 0x2276c
	ldr r1, [r1, #28]	@ 0002276c c969
.org 0x2276e
	bl 0x275f0	@ 0002276e 04f03fff
.org 0x22772
	ldrh r0, [r5, #8]	@ 00022772 2889
.org 0x22774
	ldr r2, [pc, #40]	@ 00022774 0a4a
.org 0x22776
	ands r2, r0	@ 00022776 0240
.org 0x22778
	ldrb r1, [r5, #18]	@ 00022778 a97c
.org 0x2277a
	movs r0, #253	@ 0002277a fd20
.org 0x2277c
	ands r0, r1	@ 0002277c 0840
.org 0x2277e
	strb r0, [r5, #18]	@ 0002277e a874
.org 0x22780
	ldr r3, [pc, #32]	@ 00022780 084b
.org 0x22782
	ldrb r1, [r3, #4]	@ 00022782 1979
.org 0x22784
	movs r0, #247	@ 00022784 f720
.org 0x22786
	ands r0, r1	@ 00022786 0840
.org 0x22788
	strb r0, [r3, #4]	@ 00022788 1871
.org 0x2278a
	movs r0, #1	@ 0002278a 0120
.org 0x2278c
	orrs r2, r0	@ 0002278c 0243
.org 0x2278e
	strh r2, [r5, #8]	@ 0002278e 2a81
.org 0x22790
	movs r0, #7	@ 00022790 0720
.org 0x22792
	b.n 0x22a14	@ 00022792 3fe1
.org 0x22794
	.byte 0x10,0xe9,0x02,0x02	@ 00022794 data
.org 0x22798
	.byte 0xe0,0x32,0x00,0x03	@ 00022798 data
.org 0x2279c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002279c data
.org 0x227a0
	.byte 0xef,0xff,0x00,0x00	@ 000227a0 data
.org 0x227a4
	.byte 0xb0,0xe8,0x02,0x02	@ 000227a4 data
.org 0x227a8
	movs r2, #190	@ 000227a8 be22
.org 0x227aa
	lsls r2, r2, #1	@ 000227aa 5200
.org 0x227ac
	adds r5, r4, r2	@ 000227ac a518
.org 0x227ae
	ldrb r0, [r5, #0]	@ 000227ae 2878
.org 0x227b0
	cmp r0, #7	@ 000227b0 0728
.org 0x227b2
	bne.n 0x227cc	@ 000227b2 0bd1
.org 0x227b4
	ldr r1, [pc, #16]	@ 000227b4 0449
.org 0x227b6
	ldrb r2, [r1, #0]	@ 000227b6 0a78
.org 0x227b8
	movs r0, #127	@ 000227b8 7f20
.org 0x227ba
	ands r0, r2	@ 000227ba 1040
.org 0x227bc
	movs r2, #0	@ 000227bc 0022
.org 0x227be
	strb r0, [r1, #0]	@ 000227be 0870
.org 0x227c0
	strb r2, [r1, #1]	@ 000227c0 4a70
.org 0x227c2
	movs r0, #8	@ 000227c2 0820
.org 0x227c4
	strb r0, [r5, #0]	@ 000227c4 2870
.org 0x227c6
	b.n 0x22a16	@ 000227c6 26e1
.org 0x227c8
	.byte 0xe0,0x32,0x00,0x03	@ 000227c8 data
.org 0x227cc
	cmp r0, #8	@ 000227cc 0828
.org 0x227ce
	bne.n 0x227f8	@ 000227ce 13d1
.org 0x227d0
	ldr r1, [r3, #84]	@ 000227d0 596d
.org 0x227d2
	ldr r0, [pc, #28]	@ 000227d2 0748
.org 0x227d4
	cmp r1, r0	@ 000227d4 8142
.org 0x227d6
	ble.n 0x227f8	@ 000227d6 0fdd
.org 0x227d8
	movs r0, #5	@ 000227d8 0520
.org 0x227da
	bl 0x1f63c	@ 000227da fcf72fff
.org 0x227de
	ldr r2, [pc, #20]	@ 000227de 054a
.org 0x227e0
	ldrb r1, [r2, #4]	@ 000227e0 1179
.org 0x227e2
	movs r0, #8	@ 000227e2 0820
.org 0x227e4
	orrs r0, r1	@ 000227e4 0843
.org 0x227e6
	strb r0, [r2, #4]	@ 000227e6 1071
.org 0x227e8
	movs r0, #9	@ 000227e8 0920
.org 0x227ea
	strb r0, [r5, #0]	@ 000227ea 2870
.org 0x227ec
	b.n 0x22a16	@ 000227ec 13e1
.org 0x227ee
	.byte 0x00	@ 000227ee data
.org 0x227ef
	.byte 0x00	@ 000227ef data
.org 0x227f0
	.byte 0xff,0xef,0x10,0x00	@ 000227f0 data
.org 0x227f4
	.byte 0xb0,0xe8,0x02,0x02	@ 000227f4 data
.org 0x227f8
	movs r0, #190	@ 000227f8 be20
.org 0x227fa
	lsls r0, r0, #1	@ 000227fa 4000
.org 0x227fc
	adds r5, r4, r0	@ 000227fc 2518
.org 0x227fe
	ldrb r0, [r5, #0]	@ 000227fe 2878
.org 0x22800
	cmp r0, #9	@ 00022800 0928
.org 0x22802
	bne.n 0x228dc	@ 00022802 6bd1
.org 0x22804
	ldr r1, [pc, #56]	@ 00022804 0e49
.org 0x22806
	adds r6, r4, r1	@ 00022806 6618
.org 0x22808
	ldrb r0, [r6, #0]	@ 00022808 3078
.org 0x2280a
	cmp r0, #0	@ 0002280a 0028
.org 0x2280c
	bne.n 0x22850	@ 0002280c 20d1
.org 0x2280e
	ldr r1, [r3, #84]	@ 0002280e 596d
.org 0x22810
	ldr r0, [pc, #48]	@ 00022810 0c48
.org 0x22812
	cmp r1, r0	@ 00022812 8142
.org 0x22814
	ble.n 0x22850	@ 00022814 1cdd
.org 0x22816
	ldr r2, [pc, #48]	@ 00022816 0c4a
.org 0x22818
	ldrb r1, [r2, #1]	@ 00022818 5178
.org 0x2281a
	movs r0, #2	@ 0002281a 0220
.org 0x2281c
	orrs r0, r1	@ 0002281c 0843
.org 0x2281e
	strb r0, [r2, #1]	@ 0002281e 5070
.org 0x22820
	ldr r0, [pc, #40]	@ 00022820 0a48
.org 0x22822
	movs r2, #180	@ 00022822 b422
.org 0x22824
	lsls r2, r2, #1	@ 00022824 5200
.org 0x22826
	adds r5, r0, r2	@ 00022826 8518
.org 0x22828
	ldr r0, [r5, #0]	@ 00022828 2868
.org 0x2282a
	movs r4, #1	@ 0002282a 0124
.org 0x2282c
	negs r4, r4	@ 0002282c 6442
.org 0x2282e
	cmp r0, r4	@ 0002282e a042
.org 0x22830
	beq.n 0x2283c	@ 00022830 04d0
.org 0x22832
	lsls r0, r0, #16	@ 00022832 0004
.org 0x22834
	lsrs r0, r0, #16	@ 00022834 000c
.org 0x22836
	bl 0x2a98	@ 00022836 e0f72ff9
.org 0x2283a
	str r4, [r5, #0]	@ 0002283a 2c60
.org 0x2283c
	movs r0, #1	@ 0002283c 0120
.org 0x2283e
	b.n 0x22a14	@ 0002283e e9e0
.org 0x22840
	.byte 0x7d,0x01,0x00,0x00	@ 00022840 data
.org 0x22844
	.byte 0xff,0xef,0x1d,0x00	@ 00022844 data
.org 0x22848
	.byte 0xe0,0x32,0x00,0x03	@ 00022848 data
.org 0x2284c
	.byte 0x10,0xe9,0x02,0x02	@ 0002284c data
.org 0x22850
	ldr r0, [pc, #20]	@ 00022850 0548
.org 0x22852
	adds r2, r4, r0	@ 00022852 2218
.org 0x22854
	ldrb r0, [r2, #0]	@ 00022854 1078
.org 0x22856
	cmp r0, #1	@ 00022856 0128
.org 0x22858
	bne.n 0x22870	@ 00022858 0ad1
.org 0x2285a
	ldr r0, [pc, #16]	@ 0002285a 0448
.org 0x2285c
	movs r1, #0	@ 0002285c 0021
.org 0x2285e
	strb r1, [r0, #1]	@ 0002285e 4170
.org 0x22860
	movs r0, #2	@ 00022860 0220
.org 0x22862
	strb r0, [r2, #0]	@ 00022862 1070
.org 0x22864
	b.n 0x22a16	@ 00022864 d7e0
.org 0x22866
	.byte 0x00	@ 00022866 data
.org 0x22867
	.byte 0x00	@ 00022867 data
.org 0x22868
	.byte 0x7d,0x01,0x00,0x00	@ 00022868 data
.org 0x2286c
	.byte 0xe0,0x32,0x00,0x03	@ 0002286c data
.org 0x22870
	cmp r0, #2	@ 00022870 0228
.org 0x22872
	beq.n 0x22876	@ 00022872 00d0
.org 0x22874
	b.n 0x22a16	@ 00022874 cfe0
.org 0x22876
	ldr r1, [r3, #84]	@ 00022876 596d
.org 0x22878
	ldr r0, [pc, #80]	@ 00022878 1448
.org 0x2287a
	cmp r1, r0	@ 0002287a 8142
.org 0x2287c
	bgt.n 0x22880	@ 0002287c 00dc
.org 0x2287e
	b.n 0x22a16	@ 0002287e cae0
.org 0x22880
	ldr r1, [pc, #76]	@ 00022880 1349
.org 0x22882
	movs r0, #0	@ 00022882 0020
.org 0x22884
	strb r0, [r1, #1]	@ 00022884 4870
.org 0x22886
	ldr r0, [pc, #76]	@ 00022886 1348
.org 0x22888
	movs r1, #140	@ 00022888 8c21
.org 0x2288a
	lsls r1, r1, #3	@ 0002288a c900
.org 0x2288c
	adds r0, r0, r1	@ 0002288c 4018
.org 0x2288e
	movs r1, #158	@ 0002288e 9e21
.org 0x22890
	lsls r1, r1, #11	@ 00022890 c902
.org 0x22892
	str r1, [r0, #0]	@ 00022892 0160
.org 0x22894
	ldr r0, [pc, #64]	@ 00022894 1048
.org 0x22896
	movs r2, #180	@ 00022896 b422
.org 0x22898
	lsls r2, r2, #1	@ 00022898 5200
.org 0x2289a
	adds r5, r0, r2	@ 0002289a 8518
.org 0x2289c
	ldr r0, [r5, #0]	@ 0002289c 2868
.org 0x2289e
	cmp r0, #155	@ 0002289e 9b28
.org 0x228a0
	beq.n 0x228be	@ 000228a0 0dd0
.org 0x228a2
	movs r6, #1	@ 000228a2 0126
.org 0x228a4
	negs r6, r6	@ 000228a4 7642
.org 0x228a6
	cmp r0, r6	@ 000228a6 b042
.org 0x228a8
	beq.n 0x228b4	@ 000228a8 04d0
.org 0x228aa
	lsls r0, r0, #16	@ 000228aa 0004
.org 0x228ac
	lsrs r0, r0, #16	@ 000228ac 000c
.org 0x228ae
	bl 0x2a98	@ 000228ae e0f7f3f8
.org 0x228b2
	str r6, [r5, #0]	@ 000228b2 2e60
.org 0x228b4
	movs r0, #155	@ 000228b4 9b20
.org 0x228b6
	bl 0x2a88	@ 000228b6 e0f7e7f8
.org 0x228ba
	movs r0, #155	@ 000228ba 9b20
.org 0x228bc
	str r0, [r5, #0]	@ 000228bc 2860
.org 0x228be
	movs r0, #190	@ 000228be be20
.org 0x228c0
	lsls r0, r0, #1	@ 000228c0 4000
.org 0x228c2
	adds r1, r4, r0	@ 000228c2 2118
.org 0x228c4
	movs r0, #10	@ 000228c4 0a20
.org 0x228c6
	strb r0, [r1, #0]	@ 000228c6 0870
.org 0x228c8
	b.n 0x22a16	@ 000228c8 a5e0
.org 0x228ca
	.byte 0x00	@ 000228ca data
.org 0x228cb
	.byte 0x00	@ 000228cb data
.org 0x228cc
	.byte 0xff,0x0f,0x1e,0x00	@ 000228cc data
.org 0x228d0
	.byte 0xe0,0x32,0x00,0x03	@ 000228d0 data
.org 0x228d4
	.byte 0x40,0xe4,0x02,0x02	@ 000228d4 data
.org 0x228d8
	.byte 0x10,0xe9,0x02,0x02	@ 000228d8 data
.org 0x228dc
	cmp r0, #10	@ 000228dc 0a28
.org 0x228de
	bne.n 0x22900	@ 000228de 0fd1
.org 0x228e0
	ldr r1, [r3, #84]	@ 000228e0 596d
.org 0x228e2
	ldr r0, [pc, #16]	@ 000228e2 0448
.org 0x228e4
	cmp r1, r0	@ 000228e4 8142
.org 0x228e6
	ble.n 0x22900	@ 000228e6 0bdd
.org 0x228e8
	ldr r0, [pc, #12]	@ 000228e8 0348
.org 0x228ea
	ldr r1, [pc, #16]	@ 000228ea 0449
.org 0x228ec
	ldr r1, [r1, #24]	@ 000228ec 8969
.org 0x228ee
	ldr r1, [r1, #36]	@ 000228ee 496a
.org 0x228f0
	b.n 0x2291c	@ 000228f0 14e0
.org 0x228f2
	.byte 0x00	@ 000228f2 data
.org 0x228f3
	.byte 0x00	@ 000228f3 data
.org 0x228f4
	.byte 0xff,0xef,0x1e,0x00	@ 000228f4 data
.org 0x228f8
	.byte 0x20,0xe9,0x02,0x02	@ 000228f8 data
.org 0x228fc
	.byte 0xf8,0x2c,0x84,0x08	@ 000228fc data
.org 0x22900
	movs r1, #190	@ 00022900 be21
.org 0x22902
	lsls r1, r1, #1	@ 00022902 4900
.org 0x22904
	adds r5, r4, r1	@ 00022904 6518
.org 0x22906
	ldrb r0, [r5, #0]	@ 00022906 2878
.org 0x22908
	cmp r0, #11	@ 00022908 0b28
.org 0x2290a
	bne.n 0x22938	@ 0002290a 15d1
.org 0x2290c
	ldr r1, [r3, #84]	@ 0002290c 596d
.org 0x2290e
	ldr r0, [pc, #28]	@ 0002290e 0748
.org 0x22910
	cmp r1, r0	@ 00022910 8142
.org 0x22912
	ble.n 0x22938	@ 00022912 11dd
.org 0x22914
	ldr r0, [pc, #24]	@ 00022914 0648
.org 0x22916
	ldr r1, [pc, #28]	@ 00022916 0749
.org 0x22918
	ldr r1, [r1, #24]	@ 00022918 8969
.org 0x2291a
	ldr r1, [r1, #44]	@ 0002291a c96a
.org 0x2291c
	bl 0x275f0	@ 0002291c 04f068fe
.org 0x22920
	movs r0, #7	@ 00022920 0720
.org 0x22922
	bl 0x1f63c	@ 00022922 fcf78bfe
.org 0x22926
	movs r0, #12	@ 00022926 0c20
.org 0x22928
	strb r0, [r5, #0]	@ 00022928 2870
.org 0x2292a
	b.n 0x22a16	@ 0002292a 74e0
.org 0x2292c
	.byte 0xff,0xef,0x1e,0x00	@ 0002292c data
.org 0x22930
	.byte 0x20,0xe9,0x02,0x02	@ 00022930 data
.org 0x22934
	.byte 0xf8,0x2c,0x84,0x08	@ 00022934 data
.org 0x22938
	movs r2, #190	@ 00022938 be22
.org 0x2293a
	lsls r2, r2, #1	@ 0002293a 5200
.org 0x2293c
	adds r6, r4, r2	@ 0002293c a618
.org 0x2293e
	ldrb r0, [r6, #0]	@ 0002293e 3078
.org 0x22940
	cmp r0, #12	@ 00022940 0c28
.org 0x22942
	bne.n 0x2294e	@ 00022942 04d1
.org 0x22944
	movs r0, #6	@ 00022944 0620
.org 0x22946
	bl 0x1f63c	@ 00022946 fcf779fe

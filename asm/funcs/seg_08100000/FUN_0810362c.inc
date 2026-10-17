@ FUN_0810362c  entry 0x0810362c  size 256
.thumb
.org 0x10362c
FUN_0810362c:
	push {r4, r5, r6, lr}	@ 0010362c 70b5
.org 0x10362e
	adds r6, r0, #0	@ 0010362e 061c
.org 0x103630
	bl 0x1cc9c	@ 00103630 19f734fb
.org 0x103634
	ldrb r1, [r6, #10]	@ 00103634 b17a
.org 0x103636
	movs r0, #1	@ 00103636 0120
.org 0x103638
	movs r2, #0	@ 00103638 0022
.org 0x10363a
	orrs r1, r0	@ 0010363a 0143
.org 0x10363c
	movs r0, #2	@ 0010363c 0220
.org 0x10363e
	orrs r1, r0	@ 0010363e 0143
.org 0x103640
	orrs r1, r2	@ 00103640 1143
.org 0x103642
	strb r1, [r6, #10]	@ 00103642 b172
.org 0x103644
	ldrb r4, [r6, #16]	@ 00103644 347c
.org 0x103646
	cmp r4, #0	@ 00103646 002c
.org 0x103648
	beq.n 0x103650	@ 00103648 02d0
.org 0x10364a
	movs r0, #16	@ 0010364a 1020
.org 0x10364c
	orrs r1, r0	@ 0010364c 0143
.org 0x10364e
	b.n 0x103654	@ 0010364e 01e0
.org 0x103650
	movs r0, #239	@ 00103650 ef20
.org 0x103652
	ands r1, r0	@ 00103652 0140
.org 0x103654
	strb r1, [r6, #10]	@ 00103654 b172
.org 0x103656
	movs r3, #1	@ 00103656 0123
.org 0x103658
	adds r1, r3, #0	@ 00103658 191c
.org 0x10365a
	ands r1, r4	@ 0010365a 2140
.org 0x10365c
	adds r0, r6, #0	@ 0010365c 301c
.org 0x10365e
	adds r0, #76	@ 0010365e 4c30
.org 0x103660
	movs r5, #0	@ 00103660 0025
.org 0x103662
	strb r1, [r0, #0]	@ 00103662 0170
.org 0x103664
	adds r4, r6, #0	@ 00103664 341c
.org 0x103666
	adds r4, #74	@ 00103666 4a34
.org 0x103668
	lsls r1, r1, #4	@ 00103668 0901
.org 0x10366a
	ldrb r2, [r4, #0]	@ 0010366a 2278
.org 0x10366c
	movs r0, #17	@ 0010366c 1120
.org 0x10366e
	negs r0, r0	@ 0010366e 4042
.org 0x103670
	ands r0, r2	@ 00103670 1040
.org 0x103672
	orrs r0, r1	@ 00103672 0843
.org 0x103674
	strb r0, [r4, #0]	@ 00103674 2070
.org 0x103676
	ldr r1, [pc, #84]	@ 00103676 1549
.org 0x103678
	ldrb r0, [r6, #9]	@ 00103678 707a
.org 0x10367a
	lsls r0, r0, #2	@ 0010367a 8000
.org 0x10367c
	adds r0, r0, r1	@ 0010367c 4018
.org 0x10367e
	str r3, [r6, #12]	@ 0010367e f360
.org 0x103680
	ldr r0, [r0, #0]	@ 00103680 0068
.org 0x103682
	ldr r0, [r0, #4]	@ 00103682 4068
.org 0x103684
	str r0, [r6, #20]	@ 00103684 7061
.org 0x103686
	ldrb r1, [r6, #10]	@ 00103686 b17a
.org 0x103688
	movs r0, #4	@ 00103688 0420
.org 0x10368a
	orrs r0, r1	@ 0010368a 0843
.org 0x10368c
	strb r0, [r6, #10]	@ 0010368c b072
.org 0x10368e
	adds r4, #42	@ 0010368e 2a34
.org 0x103690
	ldr r1, [pc, #60]	@ 00103690 0f49
.org 0x103692
	adds r2, r6, #0	@ 00103692 321c
.org 0x103694
	adds r2, #84	@ 00103694 5432
.org 0x103696
	adds r0, r4, #0	@ 00103696 201c
.org 0x103698
	movs r3, #128	@ 00103698 8023
.org 0x10369a
	bl 0x5760	@ 0010369a 02f761f8
.org 0x10369e
	str r6, [r4, #44]	@ 0010369e e662
.org 0x1036a0
	ldr r0, [pc, #48]	@ 001036a0 0c48
.org 0x1036a2
	str r0, [r4, #36]	@ 001036a2 6062
.org 0x1036a4
	adds r0, r6, #0	@ 001036a4 301c
.org 0x1036a6
	adds r0, #180	@ 001036a6 b430
.org 0x1036a8
	strb r5, [r0, #0]	@ 001036a8 0570
.org 0x1036aa
	strb r5, [r6, #18]	@ 001036aa b574
.org 0x1036ac
	movs r1, #207	@ 001036ac cf21
.org 0x1036ae
	lsls r1, r1, #8	@ 001036ae 0902
.org 0x1036b0
	adds r0, r6, #0	@ 001036b0 301c
.org 0x1036b2
	bl 0x1cf00	@ 001036b2 19f725fc
.org 0x1036b6
	ldrb r0, [r6, #16]	@ 001036b6 307c
.org 0x1036b8
	cmp r0, #1	@ 001036b8 0128
.org 0x1036ba
	bne.n 0x1036dc	@ 001036ba 0fd1
.org 0x1036bc
	ldr r0, [r6, #84]	@ 001036bc 706d
.org 0x1036be
	ldr r1, [r6, #88]	@ 001036be b16d
.org 0x1036c0
	bl 0x8868	@ 001036c0 05f7d2f8
.org 0x1036c4
	str r0, [r6, #84]	@ 001036c4 7065
.org 0x1036c6
	ldr r0, [pc, #16]	@ 001036c6 0448
.org 0x1036c8
	b.n 0x1036ea	@ 001036c8 0fe0
.org 0x1036ca
	.byte 0x00	@ 001036ca data
.org 0x1036cb
	.byte 0x00	@ 001036cb data
.org 0x1036cc
	.byte 0xfc,0x92,0x86,0x08	@ 001036cc data
.org 0x1036d0
	.byte 0xc4,0xbd,0x86,0x08	@ 001036d0 data
.org 0x1036d4
	.byte 0xa9,0x37,0x10,0x08	@ 001036d4 data
.org 0x1036d8
	.byte 0x00,0xff,0xff,0xff	@ 001036d8 data
.org 0x1036dc
	ldr r0, [r6, #84]	@ 001036dc 706d
.org 0x1036de
	ldr r1, [r6, #88]	@ 001036de b16d
.org 0x1036e0
	bl 0x8988	@ 001036e0 05f752f9
.org 0x1036e4
	str r0, [r6, #84]	@ 001036e4 7065
.org 0x1036e6
	movs r0, #128	@ 001036e6 8020
.org 0x1036e8
	lsls r0, r0, #1	@ 001036e8 4000
.org 0x1036ea
	str r0, [r6, #92]	@ 001036ea f065
.org 0x1036ec
	ldr r1, [pc, #80]	@ 001036ec 1449
.org 0x1036ee
	ldr r2, [pc, #84]	@ 001036ee 154a
.org 0x1036f0
	ldrb r0, [r6, #17]	@ 001036f0 707c
.org 0x1036f2
	adds r0, r0, r2	@ 001036f2 8018
.org 0x1036f4
	ldrb r2, [r0, #0]	@ 001036f4 0278
.org 0x1036f6
	lsrs r0, r2, #3	@ 001036f6 d008
.org 0x1036f8
	adds r1, #4	@ 001036f8 0431
.org 0x1036fa
	adds r0, r0, r1	@ 001036fa 4018
.org 0x1036fc
	ldrb r1, [r0, #0]	@ 001036fc 0178
.org 0x1036fe
	movs r0, #7	@ 001036fe 0720
.org 0x103700
	ands r0, r2	@ 00103700 1040
.org 0x103702
	asrs r1, r0	@ 00103702 0141
.org 0x103704
	movs r0, #1	@ 00103704 0120
.org 0x103706
	ands r1, r0	@ 00103706 0140
.org 0x103708
	cmp r1, #0	@ 00103708 0029
.org 0x10370a
	beq.n 0x103732	@ 0010370a 12d0
.org 0x10370c
	ldr r0, [r6, #92]	@ 0010370c f06d
.org 0x10370e
	lsls r1, r0, #1	@ 0010370e 4100
.org 0x103710
	adds r1, r1, r0	@ 00103710 0918
.org 0x103712
	lsls r1, r1, #2	@ 00103712 8900
.org 0x103714
	ldr r0, [r6, #84]	@ 00103714 706d
.org 0x103716
	adds r0, r0, r1	@ 00103716 4018
.org 0x103718
	str r0, [r6, #84]	@ 00103718 7065
.org 0x10371a
	adds r0, r6, #0	@ 0010371a 301c
.org 0x10371c
	adds r0, #140	@ 0010371c 8c30
.org 0x10371e
	movs r1, #0	@ 0010371e 0021
.org 0x103720
	str r1, [r0, #0]	@ 00103720 0160
.org 0x103722
	adds r0, #4	@ 00103722 0430
.org 0x103724
	str r1, [r0, #0]	@ 00103724 0160
.org 0x103726
	adds r0, #4	@ 00103726 0430
.org 0x103728
	strb r1, [r0, #0]	@ 00103728 0170
.org 0x10372a
	ldrb r1, [r6, #10]	@ 0010372a b17a

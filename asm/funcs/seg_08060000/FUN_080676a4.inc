@ FUN_080676a4  entry 0x080676a4  size 286
.thumb
.org 0x676a4
FUN_080676a4:
	push {r4, lr}	@ 000676a4 10b5
.org 0x676a6
	adds r4, r0, #0	@ 000676a6 041c
.org 0x676a8
	ldrb r0, [r4, #14]	@ 000676a8 a07b
.org 0x676aa
	cmp r0, #0	@ 000676aa 0028
.org 0x676ac
	bne.n 0x676fe	@ 000676ac 27d1
.org 0x676ae
	ldr r1, [pc, #52]	@ 000676ae 0d49
.org 0x676b0
	adds r0, r4, #0	@ 000676b0 201c
.org 0x676b2
	bl 0x1cf00	@ 000676b2 b5f725fc
.org 0x676b6
	ldrb r3, [r4, #10]	@ 000676b6 a37a
.org 0x676b8
	lsrs r3, r3, #4	@ 000676b8 1b09
.org 0x676ba
	movs r0, #1	@ 000676ba 0120
.org 0x676bc
	ands r3, r0	@ 000676bc 0340
.org 0x676be
	adds r0, r4, #0	@ 000676be 201c
.org 0x676c0
	movs r1, #1	@ 000676c0 0121
.org 0x676c2
	movs r2, #0	@ 000676c2 0022
.org 0x676c4
	bl 0xc8830	@ 000676c4 61f0b4f8
.org 0x676c8
	str r0, [r4, #44]	@ 000676c8 e062
.org 0x676ca
	ldrb r1, [r4, #10]	@ 000676ca a17a
.org 0x676cc
	movs r2, #16	@ 000676cc 1022
.org 0x676ce
	adds r0, r2, #0	@ 000676ce 101c
.org 0x676d0
	ands r0, r1	@ 000676d0 0840
.org 0x676d2
	cmp r0, #0	@ 000676d2 0028
.org 0x676d4
	beq.n 0x676e8	@ 000676d4 08d0
.org 0x676d6
	movs r0, #128	@ 000676d6 8020
.org 0x676d8
	lsls r0, r0, #3	@ 000676d8 c000
.org 0x676da
	str r0, [r4, #92]	@ 000676da e065
.org 0x676dc
	movs r0, #16	@ 000676dc 1020
.org 0x676de
	negs r0, r0	@ 000676de 4042
.org 0x676e0
	str r0, [r4, #100]	@ 000676e0 6066
.org 0x676e2
	b.n 0x676ee	@ 000676e2 04e0
.org 0x676e4
	.byte 0x0f,0xa9,0x00,0x00	@ 000676e4 data
.org 0x676e8
	ldr r0, [pc, #60]	@ 000676e8 0f48
.org 0x676ea
	str r0, [r4, #92]	@ 000676ea e065
.org 0x676ec
	str r2, [r4, #100]	@ 000676ec 6266
.org 0x676ee
	movs r0, #0	@ 000676ee 0020
.org 0x676f0
	str r0, [r4, #104]	@ 000676f0 a066
.org 0x676f2
	strb r0, [r4, #18]	@ 000676f2 a074
.org 0x676f4
	strb r0, [r4, #19]	@ 000676f4 e074
.org 0x676f6
	strb r0, [r4, #15]	@ 000676f6 e073
.org 0x676f8
	ldrb r0, [r4, #14]	@ 000676f8 a07b
.org 0x676fa
	adds r0, #1	@ 000676fa 0130
.org 0x676fc
	strb r0, [r4, #14]	@ 000676fc a073
.org 0x676fe
	adds r0, r4, #0	@ 000676fe 201c
.org 0x67700
	bl 0x1cff0	@ 00067700 b5f776fc
.org 0x67704
	ldr r0, [r4, #84]	@ 00067704 606d
.org 0x67706
	ldr r1, [r4, #92]	@ 00067706 e16d
.org 0x67708
	adds r0, r0, r1	@ 00067708 4018
.org 0x6770a
	str r0, [r4, #84]	@ 0006770a 6065
.org 0x6770c
	ldr r0, [r4, #100]	@ 0006770c 606e
.org 0x6770e
	adds r2, r1, r0	@ 0006770e 0a18
.org 0x67710
	str r2, [r4, #92]	@ 00067710 e265
.org 0x67712
	ldrb r1, [r4, #10]	@ 00067712 a17a
.org 0x67714
	movs r0, #16	@ 00067714 1020
.org 0x67716
	ands r0, r1	@ 00067716 0840
.org 0x67718
	cmp r0, #0	@ 00067718 0028
.org 0x6771a
	beq.n 0x67730	@ 0006771a 09d0
.org 0x6771c
	ldr r0, [pc, #12]	@ 0006771c 0348
.org 0x6771e
	cmp r2, r0	@ 0006771e 8242
.org 0x67720
	bgt.n 0x67738	@ 00067720 0adc
.org 0x67722
	adds r0, #1	@ 00067722 0130
.org 0x67724
	b.n 0x67736	@ 00067724 07e0
.org 0x67726
	.byte 0x00	@ 00067726 data
.org 0x67727
	.byte 0x00	@ 00067727 data
.org 0x67728
	.byte 0x00,0xfc,0xff,0xff	@ 00067728 data
.org 0x6772c
	.byte 0xff,0x01,0x00,0x00	@ 0006772c data
.org 0x67730
	ldr r0, [pc, #32]	@ 00067730 0848
.org 0x67732
	cmp r2, r0	@ 00067732 8242
.org 0x67734
	ble.n 0x67738	@ 00067734 00dd
.org 0x67736
	str r0, [r4, #92]	@ 00067736 e065
.org 0x67738
	ldrb r1, [r4, #10]	@ 00067738 a17a
.org 0x6773a
	movs r0, #16	@ 0006773a 1020
.org 0x6773c
	ands r0, r1	@ 0006773c 0840
.org 0x6773e
	cmp r0, #0	@ 0006773e 0028
.org 0x67740
	beq.n 0x6775c	@ 00067740 0cd0
.org 0x67742
	adds r0, r4, #0	@ 00067742 201c
.org 0x67744
	adds r0, #180	@ 00067744 b430
.org 0x67746
	ldr r0, [r0, #12]	@ 00067746 c068
.org 0x67748
	ldr r2, [pc, #12]	@ 00067748 034a
.org 0x6774a
	adds r1, r0, r2	@ 0006774a 8118
.org 0x6774c
	ldr r0, [r4, #84]	@ 0006774c 606d
.org 0x6774e
	cmp r0, r1	@ 0006774e 8842
.org 0x67750
	ble.n 0x67770	@ 00067750 0edd
.org 0x67752
	b.n 0x6776e	@ 00067752 0ce0
.org 0x67754
	.byte 0x00,0xfe,0xff,0xff	@ 00067754 data
.org 0x67758
	.byte 0x00,0xa2,0xff,0xff	@ 00067758 data
.org 0x6775c
	adds r0, r4, #0	@ 0006775c 201c
.org 0x6775e
	adds r0, #180	@ 0006775e b430
.org 0x67760
	ldr r0, [r0, #8]	@ 00067760 8068
.org 0x67762
	movs r2, #188	@ 00067762 bc22
.org 0x67764
	lsls r2, r2, #7	@ 00067764 d201
.org 0x67766
	adds r1, r0, r2	@ 00067766 8118
.org 0x67768
	ldr r0, [r4, #84]	@ 00067768 606d
.org 0x6776a
	cmp r0, r1	@ 0006776a 8842
.org 0x6776c
	bge.n 0x67770	@ 0006776c 00da
.org 0x6776e
	str r1, [r4, #84]	@ 0006776e 6165
.org 0x67770
	ldrb r0, [r4, #15]	@ 00067770 e07b
.org 0x67772
	cmp r0, #0	@ 00067772 0028
.org 0x67774
	bne.n 0x6779c	@ 00067774 12d1
.org 0x67776
	adds r0, r4, #0	@ 00067776 201c
.org 0x67778
	adds r0, #113	@ 00067778 7130
.org 0x6777a
	ldrb r0, [r0, #0]	@ 0006777a 0078
.org 0x6777c
	lsls r0, r0, #24	@ 0006777c 0006
.org 0x6777e
	asrs r0, r0, #24	@ 0006777e 0016
.org 0x67780
	cmp r0, #2	@ 00067780 0228
.org 0x67782
	ble.n 0x677b0	@ 00067782 15dd
.org 0x67784
	adds r0, r4, #0	@ 00067784 201c
.org 0x67786
	adds r0, #116	@ 00067786 7430
.org 0x67788
	ldr r1, [pc, #12]	@ 00067788 0349
.org 0x6778a
	bl 0x5784	@ 0006778a 9df7fbff
.org 0x6778e
	ldrb r0, [r4, #15]	@ 0006778e e07b
.org 0x67790
	adds r0, #1	@ 00067790 0130
.org 0x67792
	strb r0, [r4, #15]	@ 00067792 e073
.org 0x67794
	b.n 0x677b0	@ 00067794 0ce0
.org 0x67796
	.byte 0x00	@ 00067796 data
.org 0x67797
	.byte 0x00	@ 00067797 data
.org 0x67798
	.byte 0x1c,0xb3,0x85,0x08	@ 00067798 data
.org 0x6779c
	ldr r0, [r4, #44]	@ 0006779c e06a
.org 0x6779e
	cmp r0, #0	@ 0006779e 0028
.org 0x677a0
	beq.n 0x677b0	@ 000677a0 06d0
.org 0x677a2
	ldrb r0, [r0, #13]	@ 000677a2 407b
.org 0x677a4
	cmp r0, #0	@ 000677a4 0028
.org 0x677a6
	beq.n 0x677b0	@ 000677a6 03d0
.org 0x677a8
	adds r1, r4, #0	@ 000677a8 211c
.org 0x677aa
	adds r1, #37	@ 000677aa 2531
.org 0x677ac
	movs r0, #15	@ 000677ac 0f20
.org 0x677ae
	strb r0, [r1, #0]	@ 000677ae 0870
.org 0x677b0
	ldrb r0, [r4, #18]	@ 000677b0 a07c
.org 0x677b2
	adds r1, r0, #1	@ 000677b2 411c
.org 0x677b4
	strb r1, [r4, #18]	@ 000677b4 a174
.org 0x677b6
	lsls r0, r0, #24	@ 000677b6 0006
.org 0x677b8
	lsrs r0, r0, #24	@ 000677b8 000e
.org 0x677ba
	cmp r0, #24	@ 000677ba 1828
.org 0x677bc
	bls.n 0x677d8	@ 000677bc 0cd9
.org 0x677be
	ldr r0, [r4, #44]	@ 000677be e06a
.org 0x677c0
	cmp r0, #0	@ 000677c0 0028

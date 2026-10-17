@ FUN_081085a0  entry 0x081085a0  size 700
.thumb
.org 0x1085a0
FUN_081085a0:
	push {r4, r5, r6, lr}	@ 001085a0 70b5
.org 0x1085a2
	adds r4, r0, #0	@ 001085a2 041c
.org 0x1085a4
	bl 0x1cff0	@ 001085a4 14f724fd
.org 0x1085a8
	ldrb r0, [r4, #17]	@ 001085a8 607c
.org 0x1085aa
	cmp r0, #0	@ 001085aa 0028
.org 0x1085ac
	bne.n 0x1085d4	@ 001085ac 12d1
.org 0x1085ae
	ldrb r0, [r4, #18]	@ 001085ae a07c
.org 0x1085b0
	subs r1, r0, #1	@ 001085b0 411e
.org 0x1085b2
	strb r1, [r4, #18]	@ 001085b2 a174
.org 0x1085b4
	lsls r0, r1, #24	@ 001085b4 0806
.org 0x1085b6
	lsrs r0, r0, #24	@ 001085b6 000e
.org 0x1085b8
	cmp r0, #59	@ 001085b8 3b28
.org 0x1085ba
	bhi.n 0x1085d4	@ 001085ba 0bd8
.org 0x1085bc
	movs r0, #2	@ 001085bc 0220
.org 0x1085be
	ands r1, r0	@ 001085be 0140
.org 0x1085c0
	cmp r1, #0	@ 001085c0 0029
.org 0x1085c2
	beq.n 0x1085cc	@ 001085c2 03d0
.org 0x1085c4
	ldrb r0, [r4, #10]	@ 001085c4 a07a
.org 0x1085c6
	movs r1, #1	@ 001085c6 0121
.org 0x1085c8
	orrs r0, r1	@ 001085c8 0843
.org 0x1085ca
	b.n 0x1085d2	@ 001085ca 02e0
.org 0x1085cc
	ldrb r1, [r4, #10]	@ 001085cc a17a
.org 0x1085ce
	movs r0, #254	@ 001085ce fe20
.org 0x1085d0
	ands r0, r1	@ 001085d0 0840
.org 0x1085d2
	strb r0, [r4, #10]	@ 001085d2 a072
.org 0x1085d4
	adds r0, r4, #0	@ 001085d4 201c
.org 0x1085d6
	adds r0, #140	@ 001085d6 8c30
.org 0x1085d8
	ldr r1, [r0, #0]	@ 001085d8 0168
.org 0x1085da
	movs r2, #4	@ 001085da 0422
.org 0x1085dc
	ands r1, r2	@ 001085dc 1140
.org 0x1085de
	adds r5, r0, #0	@ 001085de 051c
.org 0x1085e0
	cmp r1, #0	@ 001085e0 0029
.org 0x1085e2
	bne.n 0x1085e6	@ 001085e2 00d1
.org 0x1085e4
	b.n 0x108750	@ 001085e4 b4e0
.org 0x1085e6
	adds r0, #44	@ 001085e6 2c30
.org 0x1085e8
	ldr r0, [r0, #0]	@ 001085e8 0068
.org 0x1085ea
	cmp r0, #0	@ 001085ea 0028
.org 0x1085ec
	bne.n 0x1085f0	@ 001085ec 00d1
.org 0x1085ee
	b.n 0x108750	@ 001085ee afe0
.org 0x1085f0
	ldrb r0, [r4, #16]	@ 001085f0 207c
.org 0x1085f2
	cmp r0, #0	@ 001085f2 0028
.org 0x1085f4
	bne.n 0x10860c	@ 001085f4 0ad1
.org 0x1085f6
	ldr r0, [pc, #12]	@ 001085f6 0348
.org 0x1085f8
	ldrb r1, [r0, #9]	@ 001085f8 417a
.org 0x1085fa
	movs r0, #8	@ 001085fa 0820
.org 0x1085fc
	ands r0, r1	@ 001085fc 0840
.org 0x1085fe
	ldr r1, [pc, #8]	@ 001085fe 0249
.org 0x108600
	b.n 0x10869a	@ 00108600 4be0
.org 0x108602
	.byte 0x00	@ 00108602 data
.org 0x108603
	.byte 0x00	@ 00108603 data
.org 0x108604
	.byte 0xb0,0xe8,0x02,0x02	@ 00108604 data
.org 0x108608
	.byte 0x30,0xdc,0x02,0x02	@ 00108608 data
.org 0x10860c
	cmp r0, #1	@ 0010860c 0128
.org 0x10860e
	bne.n 0x108634	@ 0010860e 11d1
.org 0x108610
	ldr r0, [pc, #24]	@ 00108610 0648
.org 0x108612
	ldrb r1, [r0, #9]	@ 00108612 417a
.org 0x108614
	movs r0, #8	@ 00108614 0820
.org 0x108616
	ands r0, r1	@ 00108616 0840
.org 0x108618
	ldr r1, [pc, #20]	@ 00108618 0549
.org 0x10861a
	cmp r0, #0	@ 0010861a 0028
.org 0x10861c
	beq.n 0x108624	@ 0010861c 02d0
.org 0x10861e
	ldr r0, [r1, #0]	@ 0010861e 0868
.org 0x108620
	adds r0, #32	@ 00108620 2030
.org 0x108622
	str r0, [r1, #0]	@ 00108622 0860
.org 0x108624
	ldr r0, [r1, #0]	@ 00108624 0868
.org 0x108626
	adds r0, #32	@ 00108626 2030
.org 0x108628
	str r0, [r1, #0]	@ 00108628 0860
.org 0x10862a
	b.n 0x108712	@ 0010862a 72e0
.org 0x10862c
	.byte 0xb0,0xe8,0x02,0x02	@ 0010862c data
.org 0x108630
	.byte 0x30,0xdc,0x02,0x02	@ 00108630 data
.org 0x108634
	cmp r0, #2	@ 00108634 0228
.org 0x108636
	bne.n 0x108664	@ 00108636 15d1
.org 0x108638
	ldr r0, [pc, #32]	@ 00108638 0848
.org 0x10863a
	ldrb r1, [r0, #9]	@ 0010863a 417a
.org 0x10863c
	movs r0, #8	@ 0010863c 0820
.org 0x10863e
	ands r0, r1	@ 0010863e 0840
.org 0x108640
	ldr r1, [pc, #28]	@ 00108640 0749
.org 0x108642
	cmp r0, #0	@ 00108642 0028
.org 0x108644
	beq.n 0x108650	@ 00108644 04d0
.org 0x108646
	ldr r0, [r1, #0]	@ 00108646 0868
.org 0x108648
	movs r2, #128	@ 00108648 8022
.org 0x10864a
	lsls r2, r2, #1	@ 0010864a 5200
.org 0x10864c
	adds r0, r0, r2	@ 0010864c 8018
.org 0x10864e
	str r0, [r1, #0]	@ 0010864e 0860
.org 0x108650
	ldr r0, [r1, #0]	@ 00108650 0868
.org 0x108652
	movs r2, #128	@ 00108652 8022
.org 0x108654
	lsls r2, r2, #1	@ 00108654 5200
.org 0x108656
	adds r0, r0, r2	@ 00108656 8018
.org 0x108658
	str r0, [r1, #0]	@ 00108658 0860
.org 0x10865a
	b.n 0x108712	@ 0010865a 5ae0
.org 0x10865c
	.byte 0xb0,0xe8,0x02,0x02	@ 0010865c data
.org 0x108660
	.byte 0x30,0xdc,0x02,0x02	@ 00108660 data
.org 0x108664
	cmp r0, #3	@ 00108664 0328
.org 0x108666
	bne.n 0x10868c	@ 00108666 11d1
.org 0x108668
	ldr r0, [pc, #24]	@ 00108668 0648
.org 0x10866a
	ldrb r1, [r0, #9]	@ 0010866a 417a
.org 0x10866c
	movs r0, #8	@ 0010866c 0820
.org 0x10866e
	ands r0, r1	@ 0010866e 0840
.org 0x108670
	ldr r1, [pc, #20]	@ 00108670 0549
.org 0x108672
	cmp r0, #0	@ 00108672 0028
.org 0x108674
	beq.n 0x10867c	@ 00108674 02d0
.org 0x108676
	ldr r0, [r1, #0]	@ 00108676 0868
.org 0x108678
	adds r0, #4	@ 00108678 0430
.org 0x10867a
	str r0, [r1, #0]	@ 0010867a 0860
.org 0x10867c
	ldr r0, [r1, #0]	@ 0010867c 0868
.org 0x10867e
	adds r0, #4	@ 0010867e 0430
.org 0x108680
	str r0, [r1, #0]	@ 00108680 0860
.org 0x108682
	b.n 0x108712	@ 00108682 46e0
.org 0x108684
	.byte 0xb0,0xe8,0x02,0x02	@ 00108684 data
.org 0x108688
	.byte 0x0c,0xdc,0x02,0x02	@ 00108688 data
.org 0x10868c
	cmp r0, #4	@ 0010868c 0428
.org 0x10868e
	bne.n 0x1086b4	@ 0010868e 11d1
.org 0x108690
	ldr r0, [pc, #24]	@ 00108690 0648
.org 0x108692
	ldrb r1, [r0, #9]	@ 00108692 417a
.org 0x108694
	movs r0, #8	@ 00108694 0820
.org 0x108696
	ands r0, r1	@ 00108696 0840
.org 0x108698
	ldr r1, [pc, #20]	@ 00108698 0549
.org 0x10869a
	cmp r0, #0	@ 0010869a 0028
.org 0x10869c
	beq.n 0x1086a4	@ 0010869c 02d0
.org 0x10869e
	ldr r0, [r1, #0]	@ 0010869e 0868
.org 0x1086a0
	adds r0, #16	@ 001086a0 1030
.org 0x1086a2
	str r0, [r1, #0]	@ 001086a2 0860
.org 0x1086a4
	ldr r0, [r1, #0]	@ 001086a4 0868
.org 0x1086a6
	adds r0, #16	@ 001086a6 1030
.org 0x1086a8
	str r0, [r1, #0]	@ 001086a8 0860
.org 0x1086aa
	b.n 0x108712	@ 001086aa 32e0
.org 0x1086ac
	.byte 0xb0,0xe8,0x02,0x02	@ 001086ac data
.org 0x1086b0
	.byte 0x0c,0xdc,0x02,0x02	@ 001086b0 data
.org 0x1086b4
	cmp r0, #5	@ 001086b4 0528
.org 0x1086b6
	bne.n 0x1086f0	@ 001086b6 1bd1
.org 0x1086b8
	ldr r0, [pc, #44]	@ 001086b8 0b48
.org 0x1086ba
	ldrb r1, [r0, #9]	@ 001086ba 417a
.org 0x1086bc
	movs r0, #8	@ 001086bc 0820
.org 0x1086be
	ands r0, r1	@ 001086be 0840
.org 0x1086c0
	ldr r2, [pc, #40]	@ 001086c0 0a4a
.org 0x1086c2
	cmp r0, #0	@ 001086c2 0028
.org 0x1086c4
	beq.n 0x1086d2	@ 001086c4 05d0
.org 0x1086c6
	ldr r1, [r2, #0]	@ 001086c6 1168
.org 0x1086c8
	ldrb r0, [r1, #0]	@ 001086c8 0878
.org 0x1086ca
	cmp r0, #8	@ 001086ca 0828
.org 0x1086cc
	bhi.n 0x1086de	@ 001086cc 07d8
.org 0x1086ce
	adds r0, #1	@ 001086ce 0130
.org 0x1086d0
	strb r0, [r1, #0]	@ 001086d0 0870
.org 0x1086d2
	ldr r1, [r2, #0]	@ 001086d2 1168
.org 0x1086d4
	ldrb r0, [r1, #0]	@ 001086d4 0878
.org 0x1086d6
	cmp r0, #8	@ 001086d6 0828
.org 0x1086d8
	bhi.n 0x1086de	@ 001086d8 01d8
.org 0x1086da
	adds r0, #1	@ 001086da 0130
.org 0x1086dc
	strb r0, [r1, #0]	@ 001086dc 0870
.org 0x1086de
	movs r0, #6	@ 001086de 0620
.org 0x1086e0
	bl 0x2b10	@ 001086e0 faf616fa
.org 0x1086e4
	b.n 0x108712	@ 001086e4 15e0
.org 0x1086e6
	.byte 0x00	@ 001086e6 data
.org 0x1086e7
	.byte 0x00	@ 001086e7 data
.org 0x1086e8
	.byte 0xb0,0xe8,0x02,0x02	@ 001086e8 data
.org 0x1086ec
	.byte 0xe0,0xe8,0x02,0x02	@ 001086ec data
.org 0x1086f0
	cmp r0, #7	@ 001086f0 0728
.org 0x1086f2
	bne.n 0x108704	@ 001086f2 07d1
.org 0x1086f4
	ldr r0, [pc, #8]	@ 001086f4 0248
.org 0x1086f6
	ldr r0, [r0, #0]	@ 001086f6 0068
.org 0x1086f8
	adds r0, #180	@ 001086f8 b430
.org 0x1086fa
	movs r1, #0	@ 001086fa 0021
.org 0x1086fc
	strb r1, [r0, #8]	@ 001086fc 0172
.org 0x1086fe
	b.n 0x108712	@ 001086fe 08e0
.org 0x108700
	.byte 0xf0,0xdb,0x02,0x02	@ 00108700 data
.org 0x108704
	cmp r0, #8	@ 00108704 0828
.org 0x108706
	bne.n 0x108712	@ 00108706 04d1
.org 0x108708
	ldr r0, [pc, #60]	@ 00108708 0f48
.org 0x10870a
	ldr r0, [r0, #0]	@ 0010870a 0068
.org 0x10870c
	adds r0, #180	@ 0010870c b430
.org 0x10870e
	movs r1, #0	@ 0010870e 0021
.org 0x108710
	strb r1, [r0, #9]	@ 00108710 4172
.org 0x108712
	ldrb r1, [r4, #10]	@ 00108712 a17a
.org 0x108714
	movs r0, #254	@ 00108714 fe20
.org 0x108716
	ands r0, r1	@ 00108716 0840
.org 0x108718
	movs r2, #0	@ 00108718 0022
.org 0x10871a
	movs r1, #253	@ 0010871a fd21
.org 0x10871c
	ands r0, r1	@ 0010871c 0840
.org 0x10871e
	strb r0, [r4, #10]	@ 0010871e a072
.org 0x108720
	str r2, [r5, #0]	@ 00108720 2a60
.org 0x108722
	adds r0, r4, #0	@ 00108722 201c
.org 0x108724
	adds r0, #144	@ 00108724 9030
.org 0x108726
	str r2, [r0, #0]	@ 00108726 0260
.org 0x108728
	adds r0, #4	@ 00108728 0430
.org 0x10872a
	strb r2, [r0, #0]	@ 0010872a 0270
.org 0x10872c
	ldrb r1, [r4, #10]	@ 0010872c a17a
.org 0x10872e
	movs r0, #251	@ 0010872e fb20
.org 0x108730
	ands r0, r1	@ 00108730 0840
.org 0x108732
	strb r0, [r4, #10]	@ 00108732 a072
.org 0x108734
	ldr r1, [pc, #20]	@ 00108734 0549
.org 0x108736
	ldrb r0, [r4, #9]	@ 00108736 607a
.org 0x108738
	lsls r0, r0, #2	@ 00108738 8000
.org 0x10873a
	adds r0, r0, r1	@ 0010873a 4018
.org 0x10873c
	movs r1, #3	@ 0010873c 0321
.org 0x10873e
	str r1, [r4, #12]	@ 0010873e e160
.org 0x108740
	ldr r0, [r0, #0]	@ 00108740 0068
.org 0x108742
	ldr r0, [r0, #12]	@ 00108742 c068
.org 0x108744
	str r0, [r4, #20]	@ 00108744 6061
.org 0x108746
	b.n 0x1088aa	@ 00108746 b0e0
.org 0x108748
	.byte 0xf0,0xdb,0x02,0x02	@ 00108748 data
.org 0x10874c
	.byte 0x8c,0xc4,0x86,0x08	@ 0010874c data
.org 0x108750
	ldrb r0, [r4, #17]	@ 00108750 607c
.org 0x108752
	cmp r0, #1	@ 00108752 0128
.org 0x108754
	bhi.n 0x10878c	@ 00108754 1ad8
.org 0x108756
	ldrb r0, [r4, #18]	@ 00108756 a07c
.org 0x108758
	cmp r0, #0	@ 00108758 0028
.org 0x10875a
	beq.n 0x10876e	@ 0010875a 08d0
.org 0x10875c
	ldr r0, [pc, #36]	@ 0010875c 0948
.org 0x10875e
	adds r1, r4, #0	@ 0010875e 211c
.org 0x108760
	adds r1, #84	@ 00108760 5431
.org 0x108762
	bl 0x1fb14	@ 00108762 17f7d7f9
.org 0x108766
	movs r1, #128	@ 00108766 8021
.org 0x108768
	lsls r1, r1, #8	@ 00108768 0902
.org 0x10876a
	cmp r0, r1	@ 0010876a 8842
.org 0x10876c
	bls.n 0x10878c	@ 0010876c 0ed9
.org 0x10876e
	ldr r1, [pc, #24]	@ 0010876e 0649
.org 0x108770
	ldrb r0, [r4, #9]	@ 00108770 607a
.org 0x108772
	lsls r0, r0, #2	@ 00108772 8000
.org 0x108774
	adds r0, r0, r1	@ 00108774 4018
.org 0x108776
	movs r1, #2	@ 00108776 0221
.org 0x108778
	str r1, [r4, #12]	@ 00108778 e160
.org 0x10877a
	ldr r0, [r0, #0]	@ 0010877a 0068
.org 0x10877c
	ldr r0, [r0, #8]	@ 0010877c 8068
.org 0x10877e
	str r0, [r4, #20]	@ 0010877e 6061
.org 0x108780
	b.n 0x1088aa	@ 00108780 93e0
.org 0x108782
	.byte 0x00	@ 00108782 data
.org 0x108783
	.byte 0x00	@ 00108783 data
.org 0x108784
	.byte 0xf8,0xe9,0x02,0x02	@ 00108784 data
.org 0x108788
	.byte 0x8c,0xc4,0x86,0x08	@ 00108788 data
.org 0x10878c
	ldrb r6, [r4, #13]	@ 0010878c 667b
.org 0x10878e
	cmp r6, #0	@ 0010878e 002e
.org 0x108790
	bne.n 0x108810	@ 00108790 3ed1
.org 0x108792
	adds r0, r4, #0	@ 00108792 201c
.org 0x108794
	adds r0, #180	@ 00108794 b430
.org 0x108796
	ldr r2, [r4, #88]	@ 00108796 a26d
.org 0x108798
	ldr r1, [r0, #0]	@ 00108798 0168
.org 0x10879a
	adds r5, r0, #0	@ 0010879a 051c
.org 0x10879c
	cmp r2, r1	@ 0010879c 8a42
.org 0x10879e
	blt.n 0x1087c4	@ 0010879e 11db
.org 0x1087a0
	ldr r0, [r4, #84]	@ 001087a0 606d
.org 0x1087a2
	adds r1, r2, #0	@ 001087a2 111c
.org 0x1087a4
	bl 0x1088f4	@ 001087a4 00f0a6f8
.org 0x1087a8
	lsls r0, r0, #16	@ 001087a8 0004
.org 0x1087aa
	cmp r0, #0	@ 001087aa 0028
.org 0x1087ac
	beq.n 0x1087c4	@ 001087ac 0ad0
.org 0x1087ae
	ldr r0, [r4, #84]	@ 001087ae 606d
.org 0x1087b0
	ldr r1, [r4, #88]	@ 001087b0 a16d
.org 0x1087b2
	bl 0x8534	@ 001087b2 fff6bffe
.org 0x1087b6
	adds r1, r0, #0	@ 001087b6 011c
.org 0x1087b8
	str r1, [r4, #88]	@ 001087b8 a165
.org 0x1087ba
	str r6, [r4, #96]	@ 001087ba 2666
.org 0x1087bc
	ldrb r0, [r4, #13]	@ 001087bc 607b
.org 0x1087be
	adds r0, #1	@ 001087be 0130
.org 0x1087c0
	strb r0, [r4, #13]	@ 001087c0 6073
.org 0x1087c2
	b.n 0x1087f0	@ 001087c2 15e0
.org 0x1087c4
	ldr r0, [r4, #84]	@ 001087c4 606d
.org 0x1087c6
	ldr r1, [r5, #0]	@ 001087c6 2968
.org 0x1087c8
	bl 0x1088f4	@ 001087c8 00f094f8
.org 0x1087cc
	lsls r0, r0, #16	@ 001087cc 0004
.org 0x1087ce
	cmp r0, #0	@ 001087ce 0028
.org 0x1087d0
	beq.n 0x1087f0	@ 001087d0 0ed0
.org 0x1087d2
	ldr r0, [r4, #84]	@ 001087d2 606d
.org 0x1087d4
	ldr r1, [r5, #0]	@ 001087d4 2968
.org 0x1087d6
	bl 0x8534	@ 001087d6 fff6adfe
.org 0x1087da
	adds r1, r0, #0	@ 001087da 011c
.org 0x1087dc
	ldr r0, [r4, #88]	@ 001087dc a06d
.org 0x1087de
	ldr r2, [pc, #40]	@ 001087de 0a4a
.org 0x1087e0
	adds r0, r0, r2	@ 001087e0 8018
.org 0x1087e2
	cmp r1, r0	@ 001087e2 8142
.org 0x1087e4
	bge.n 0x1087f0	@ 001087e4 04da
.org 0x1087e6
	ldr r0, [r4, #84]	@ 001087e6 606d
.org 0x1087e8
	ldr r1, [r5, #0]	@ 001087e8 2968
.org 0x1087ea
	bl 0x8748	@ 001087ea fff6adff
.org 0x1087ee
	str r0, [r5, #0]	@ 001087ee 2860
.org 0x1087f0
	ldr r0, [r4, #88]	@ 001087f0 a06d
.org 0x1087f2
	ldr r1, [r4, #96]	@ 001087f2 216e
.org 0x1087f4
	adds r0, r0, r1	@ 001087f4 4018
.org 0x1087f6
	str r0, [r4, #88]	@ 001087f6 a065
.org 0x1087f8
	ldr r0, [pc, #16]	@ 001087f8 0448
.org 0x1087fa
	cmp r1, r0	@ 001087fa 8142
.org 0x1087fc
	bgt.n 0x1088aa	@ 001087fc 55dc
.org 0x1087fe
	adds r0, r1, #0	@ 001087fe 081c
.org 0x108800
	adds r0, #64	@ 00108800 4030
.org 0x108802
	str r0, [r4, #96]	@ 00108802 2066
.org 0x108804
	b.n 0x1088aa	@ 00108804 51e0
.org 0x108806
	.byte 0x00	@ 00108806 data
.org 0x108807
	.byte 0x00	@ 00108807 data
.org 0x108808
	.byte 0x00,0xf9,0xff,0xff	@ 00108808 data
.org 0x10880c
	.byte 0xff,0x06,0x00,0x00	@ 0010880c data
.org 0x108810
	ldr r0, [r4, #84]	@ 00108810 606d
.org 0x108812
	ldr r1, [r4, #88]	@ 00108812 a16d
.org 0x108814
	bl 0x8534	@ 00108814 fff68efe
.org 0x108818
	adds r2, r0, #0	@ 00108818 021c
.org 0x10881a
	ldr r3, [r4, #88]	@ 0010881a a36d
.org 0x10881c
	cmp r2, r3	@ 0010881c 9a42
.org 0x10881e
	bge.n 0x108828	@ 0010881e 03da
.org 0x108820
	str r2, [r4, #88]	@ 00108820 a265
.org 0x108822
	movs r0, #0	@ 00108822 0020
.org 0x108824
	str r0, [r4, #96]	@ 00108824 2066
.org 0x108826
	b.n 0x10885e	@ 00108826 1ae0
.org 0x108828
	cmp r2, r3	@ 00108828 9a42
.org 0x10882a
	ble.n 0x10885e	@ 0010882a 18dd
.org 0x10882c
	ldr r1, [r4, #96]	@ 0010882c 216e
.org 0x10882e
	cmp r1, #0	@ 0010882e 0029
.org 0x108830
	bne.n 0x10884a	@ 00108830 0bd1
.org 0x108832
	movs r1, #224	@ 00108832 e021
.org 0x108834
	lsls r1, r1, #3	@ 00108834 c900
.org 0x108836
	adds r0, r3, r1	@ 00108836 5818
.org 0x108838
	cmp r2, r0	@ 00108838 8242
.org 0x10883a
	ble.n 0x108846	@ 0010883a 04dd
.org 0x10883c
	movs r0, #64	@ 0010883c 4020
.org 0x10883e
	str r0, [r4, #96]	@ 0010883e 2066
.org 0x108840
	adds r0, r3, #0	@ 00108840 181c
.org 0x108842
	adds r0, #64	@ 00108842 4030
.org 0x108844
	b.n 0x10885c	@ 00108844 0ae0
.org 0x108846
	str r2, [r4, #88]	@ 00108846 a265
.org 0x108848
	b.n 0x10885e	@ 00108848 09e0
.org 0x10884a
	ldr r0, [pc, #100]	@ 0010884a 1948
.org 0x10884c
	cmp r1, r0	@ 0010884c 8142
.org 0x10884e
	bgt.n 0x108856	@ 0010884e 02dc
.org 0x108850
	adds r0, r1, #0	@ 00108850 081c
.org 0x108852
	adds r0, #64	@ 00108852 4030
.org 0x108854
	str r0, [r4, #96]	@ 00108854 2066
.org 0x108856
	ldr r0, [r4, #88]	@ 00108856 a06d
.org 0x108858
	ldr r1, [r4, #96]	@ 00108858 216e
.org 0x10885a
	adds r0, r0, r1	@ 0010885a 4018

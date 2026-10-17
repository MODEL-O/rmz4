@ FUN_0804e65c  entry 0x0804e65c  size 452
.thumb
.org 0x4e65c
FUN_0804e65c:
	push {r4, r5, r6, r7, lr}	@ 0004e65c f0b5
.org 0x4e65e
	mov r7, r8	@ 0004e65e 4746
.org 0x4e660
	push {r7}	@ 0004e660 80b4
.org 0x4e662
	adds r5, r0, #0	@ 0004e662 051c
.org 0x4e664
	ldr r7, [r5, #40]	@ 0004e664 af6a
.org 0x4e666
	bl 0x1cff0	@ 0004e666 cef7c3fc
.org 0x4e66a
	ldrb r6, [r5, #13]	@ 0004e66a 6e7b
.org 0x4e66c
	cmp r6, #0	@ 0004e66c 002e
.org 0x4e66e
	beq.n 0x4e672	@ 0004e66e 00d0
.org 0x4e670
	b.n 0x4e7c2	@ 0004e670 a7e0
.org 0x4e672
	ldrb r0, [r5, #18]	@ 0004e672 a87c
.org 0x4e674
	subs r0, #1	@ 0004e674 0138
.org 0x4e676
	movs r1, #0	@ 0004e676 0021
.org 0x4e678
	mov r8, r1	@ 0004e678 8846
.org 0x4e67a
	strb r0, [r5, #18]	@ 0004e67a a874
.org 0x4e67c
	lsls r0, r0, #24	@ 0004e67c 0006
.org 0x4e67e
	lsrs r0, r0, #24	@ 0004e67e 000e
.org 0x4e680
	cmp r0, #255	@ 0004e680 ff28
.org 0x4e682
	beq.n 0x4e686	@ 0004e682 00d0
.org 0x4e684
	b.n 0x4e824	@ 0004e684 cee0
.org 0x4e686
	adds r4, r5, #0	@ 0004e686 2c1c
.org 0x4e688
	adds r4, #84	@ 0004e688 5434
.org 0x4e68a
	adds r0, r7, #0	@ 0004e68a 381c
.org 0x4e68c
	adds r1, r4, #0	@ 0004e68c 211c
.org 0x4e68e
	bl 0x41318	@ 0004e68e f2f743fe
.org 0x4e692
	lsls r0, r0, #24	@ 0004e692 0006
.org 0x4e694
	lsrs r3, r0, #24	@ 0004e694 030e
.org 0x4e696
	mov ip, r4	@ 0004e696 a446
.org 0x4e698
	cmp r3, #0	@ 0004e698 002b
.org 0x4e69a
	beq.n 0x4e6d8	@ 0004e69a 1dd0
.org 0x4e69c
	ldrb r1, [r5, #10]	@ 0004e69c a97a
.org 0x4e69e
	movs r0, #254	@ 0004e69e fe20
.org 0x4e6a0
	ands r0, r1	@ 0004e6a0 0840
.org 0x4e6a2
	movs r1, #253	@ 0004e6a2 fd21
.org 0x4e6a4
	ands r0, r1	@ 0004e6a4 0840
.org 0x4e6a6
	strb r0, [r5, #10]	@ 0004e6a6 a872
.org 0x4e6a8
	adds r0, r5, #0	@ 0004e6a8 281c
.org 0x4e6aa
	adds r0, #140	@ 0004e6aa 8c30
.org 0x4e6ac
	str r6, [r0, #0]	@ 0004e6ac 0660
.org 0x4e6ae
	adds r0, #4	@ 0004e6ae 0430
.org 0x4e6b0
	str r6, [r0, #0]	@ 0004e6b0 0660
.org 0x4e6b2
	adds r0, #4	@ 0004e6b2 0430
.org 0x4e6b4
	strb r6, [r0, #0]	@ 0004e6b4 0670
.org 0x4e6b6
	ldrb r1, [r5, #10]	@ 0004e6b6 a97a
.org 0x4e6b8
	movs r0, #251	@ 0004e6b8 fb20
.org 0x4e6ba
	ands r0, r1	@ 0004e6ba 0840
.org 0x4e6bc
	strb r0, [r5, #10]	@ 0004e6bc a872
.org 0x4e6be
	ldr r1, [pc, #20]	@ 0004e6be 0549
.org 0x4e6c0
	ldrb r0, [r5, #9]	@ 0004e6c0 687a
.org 0x4e6c2
	lsls r0, r0, #2	@ 0004e6c2 8000
.org 0x4e6c4
	adds r0, r0, r1	@ 0004e6c4 4018
.org 0x4e6c6
	movs r1, #3	@ 0004e6c6 0321
.org 0x4e6c8
	str r1, [r5, #12]	@ 0004e6c8 e960
.org 0x4e6ca
	ldr r0, [r0, #0]	@ 0004e6ca 0068
.org 0x4e6cc
	ldr r0, [r0, #12]	@ 0004e6cc c068
.org 0x4e6ce
	str r0, [r5, #20]	@ 0004e6ce 6861
.org 0x4e6d0
	b.n 0x4e824	@ 0004e6d0 a8e0
.org 0x4e6d2
	.byte 0x00	@ 0004e6d2 data
.org 0x4e6d3
	.byte 0x00	@ 0004e6d3 data
.org 0x4e6d4
	.byte 0xf8,0x39,0x85,0x08	@ 0004e6d4 data
.org 0x4e6d8
	ldrb r2, [r5, #16]	@ 0004e6d8 2a7c
.org 0x4e6da
	cmp r2, #0	@ 0004e6da 002a
.org 0x4e6dc
	bne.n 0x4e73c	@ 0004e6dc 2ed1
.org 0x4e6de
	ldr r1, [r5, #84]	@ 0004e6de 696d
.org 0x4e6e0
	ldr r0, [r7, #84]	@ 0004e6e0 786d
.org 0x4e6e2
	cmp r1, r0	@ 0004e6e2 8142
.org 0x4e6e4
	ble.n 0x4e710	@ 0004e6e4 14dd
.org 0x4e6e6
	movs r0, #192	@ 0004e6e6 c020
.org 0x4e6e8
	lsls r0, r0, #1	@ 0004e6e8 4000
.org 0x4e6ea
	str r0, [r5, #92]	@ 0004e6ea e865
.org 0x4e6ec
	movs r2, #1	@ 0004e6ec 0122
.org 0x4e6ee
	ldrb r0, [r5, #10]	@ 0004e6ee a87a
.org 0x4e6f0
	movs r1, #16	@ 0004e6f0 1021
.org 0x4e6f2
	orrs r0, r1	@ 0004e6f2 0843
.org 0x4e6f4
	strb r0, [r5, #10]	@ 0004e6f4 a872
.org 0x4e6f6
	adds r0, r5, #0	@ 0004e6f6 281c
.org 0x4e6f8
	adds r0, #76	@ 0004e6f8 4c30
.org 0x4e6fa
	strb r2, [r0, #0]	@ 0004e6fa 0270
.org 0x4e6fc
	adds r3, r5, #0	@ 0004e6fc 2b1c
.org 0x4e6fe
	adds r3, #74	@ 0004e6fe 4a33
.org 0x4e700
	movs r2, #16	@ 0004e700 1022
.org 0x4e702
	ldrb r1, [r3, #0]	@ 0004e702 1978
.org 0x4e704
	movs r0, #17	@ 0004e704 1120
.org 0x4e706
	negs r0, r0	@ 0004e706 4042
.org 0x4e708
	ands r0, r1	@ 0004e708 0840
.org 0x4e70a
	orrs r0, r2	@ 0004e70a 1043
.org 0x4e70c
	strb r0, [r3, #0]	@ 0004e70c 1870
.org 0x4e70e
	b.n 0x4e730	@ 0004e70e 0fe0
.org 0x4e710
	ldr r0, [pc, #32]	@ 0004e710 0848
.org 0x4e712
	str r0, [r5, #92]	@ 0004e712 e865
.org 0x4e714
	ldrb r1, [r5, #10]	@ 0004e714 a97a
.org 0x4e716
	movs r0, #239	@ 0004e716 ef20
.org 0x4e718
	ands r0, r1	@ 0004e718 0840
.org 0x4e71a
	strb r0, [r5, #10]	@ 0004e71a a872
.org 0x4e71c
	adds r0, r5, #0	@ 0004e71c 281c
.org 0x4e71e
	adds r0, #76	@ 0004e71e 4c30
.org 0x4e720
	strb r2, [r0, #0]	@ 0004e720 0270
.org 0x4e722
	adds r2, r5, #0	@ 0004e722 2a1c
.org 0x4e724
	adds r2, #74	@ 0004e724 4a32
.org 0x4e726
	ldrb r1, [r2, #0]	@ 0004e726 1178
.org 0x4e728
	movs r0, #17	@ 0004e728 1120
.org 0x4e72a
	negs r0, r0	@ 0004e72a 4042
.org 0x4e72c
	ands r0, r1	@ 0004e72c 0840
.org 0x4e72e
	strb r0, [r2, #0]	@ 0004e72e 1070
.org 0x4e730
	ldr r0, [pc, #4]	@ 0004e730 0148
.org 0x4e732
	b.n 0x4e78a	@ 0004e732 2ae0
.org 0x4e734
	.byte 0x80,0xfe,0xff,0xff	@ 0004e734 data
.org 0x4e738
	.byte 0x00,0xfc,0xff,0xff	@ 0004e738 data
.org 0x4e73c
	ldr r1, [r5, #84]	@ 0004e73c 696d
.org 0x4e73e
	ldr r0, [r7, #84]	@ 0004e73e 786d
.org 0x4e740
	cmp r1, r0	@ 0004e740 8142
.org 0x4e742
	ble.n 0x4e768	@ 0004e742 11dd
.org 0x4e744
	movs r2, #1	@ 0004e744 0122
.org 0x4e746
	ldrb r0, [r5, #10]	@ 0004e746 a87a
.org 0x4e748
	movs r1, #16	@ 0004e748 1021
.org 0x4e74a
	orrs r0, r1	@ 0004e74a 0843
.org 0x4e74c
	strb r0, [r5, #10]	@ 0004e74c a872
.org 0x4e74e
	adds r0, r5, #0	@ 0004e74e 281c
.org 0x4e750
	adds r0, #76	@ 0004e750 4c30
.org 0x4e752
	strb r2, [r0, #0]	@ 0004e752 0270
.org 0x4e754
	adds r3, r5, #0	@ 0004e754 2b1c
.org 0x4e756
	adds r3, #74	@ 0004e756 4a33
.org 0x4e758
	movs r2, #16	@ 0004e758 1022
.org 0x4e75a
	ldrb r1, [r3, #0]	@ 0004e75a 1978
.org 0x4e75c
	movs r0, #17	@ 0004e75c 1120
.org 0x4e75e
	negs r0, r0	@ 0004e75e 4042
.org 0x4e760
	ands r0, r1	@ 0004e760 0840
.org 0x4e762
	orrs r0, r2	@ 0004e762 1043
.org 0x4e764
	strb r0, [r3, #0]	@ 0004e764 1870
.org 0x4e766
	b.n 0x4e784	@ 0004e766 0de0
.org 0x4e768
	ldrb r1, [r5, #10]	@ 0004e768 a97a
.org 0x4e76a
	movs r0, #239	@ 0004e76a ef20
.org 0x4e76c
	ands r0, r1	@ 0004e76c 0840
.org 0x4e76e
	strb r0, [r5, #10]	@ 0004e76e a872
.org 0x4e770
	adds r0, r5, #0	@ 0004e770 281c
.org 0x4e772
	adds r0, #76	@ 0004e772 4c30
.org 0x4e774
	strb r3, [r0, #0]	@ 0004e774 0370
.org 0x4e776
	adds r2, r5, #0	@ 0004e776 2a1c
.org 0x4e778
	adds r2, #74	@ 0004e778 4a32
.org 0x4e77a
	ldrb r1, [r2, #0]	@ 0004e77a 1178
.org 0x4e77c
	movs r0, #17	@ 0004e77c 1120
.org 0x4e77e
	negs r0, r0	@ 0004e77e 4042
.org 0x4e780
	ands r0, r1	@ 0004e780 0840
.org 0x4e782
	strb r0, [r2, #0]	@ 0004e782 1070
.org 0x4e784
	movs r0, #0	@ 0004e784 0020
.org 0x4e786
	str r0, [r5, #92]	@ 0004e786 e865
.org 0x4e788
	ldr r0, [pc, #164]	@ 0004e788 2948
.org 0x4e78a
	str r0, [r5, #96]	@ 0004e78a 2866
.org 0x4e78c
	ldrb r1, [r5, #10]	@ 0004e78c a97a
.org 0x4e78e
	movs r0, #4	@ 0004e78e 0420
.org 0x4e790
	orrs r0, r1	@ 0004e790 0843
.org 0x4e792
	strb r0, [r5, #10]	@ 0004e792 a872
.org 0x4e794
	adds r4, r5, #0	@ 0004e794 2c1c
.org 0x4e796
	adds r4, #116	@ 0004e796 7434
.org 0x4e798
	ldr r1, [pc, #152]	@ 0004e798 2649
.org 0x4e79a
	adds r0, r4, #0	@ 0004e79a 201c
.org 0x4e79c
	mov r2, ip	@ 0004e79c 6246
.org 0x4e79e
	movs r3, #8	@ 0004e79e 0823
.org 0x4e7a0
	bl 0x5760	@ 0004e7a0 b6f7deff
.org 0x4e7a4
	str r5, [r4, #44]	@ 0004e7a4 e562
.org 0x4e7a6
	ldr r0, [pc, #144]	@ 0004e7a6 2448
.org 0x4e7a8
	str r0, [r4, #36]	@ 0004e7a8 6062
.org 0x4e7aa
	ldrb r1, [r5, #10]	@ 0004e7aa a97a
.org 0x4e7ac
	movs r0, #1	@ 0004e7ac 0120
.org 0x4e7ae
	orrs r0, r1	@ 0004e7ae 0843
.org 0x4e7b0
	strb r0, [r5, #10]	@ 0004e7b0 a872
.org 0x4e7b2
	adds r0, r7, #0	@ 0004e7b2 381c
.org 0x4e7b4
	bl 0x3aa4c	@ 0004e7b4 ecf74af9
.org 0x4e7b8
	adds r1, r5, #0	@ 0004e7b8 291c
.org 0x4e7ba
	adds r1, #189	@ 0004e7ba bd31
.org 0x4e7bc
	movs r0, #1	@ 0004e7bc 0120
.org 0x4e7be
	strb r0, [r1, #0]	@ 0004e7be 0870
.org 0x4e7c0
	strb r0, [r5, #13]	@ 0004e7c0 6873
.org 0x4e7c2
	ldr r0, [r5, #84]	@ 0004e7c2 686d
.org 0x4e7c4
	ldr r1, [r5, #92]	@ 0004e7c4 e96d
.org 0x4e7c6
	adds r0, r0, r1	@ 0004e7c6 4018
.org 0x4e7c8
	str r0, [r5, #84]	@ 0004e7c8 6865
.org 0x4e7ca
	ldr r0, [r5, #96]	@ 0004e7ca 286e
.org 0x4e7cc
	adds r0, #64	@ 0004e7cc 4030
.org 0x4e7ce
	str r0, [r5, #96]	@ 0004e7ce 2866
.org 0x4e7d0
	movs r1, #224	@ 0004e7d0 e021
.org 0x4e7d2
	lsls r1, r1, #3	@ 0004e7d2 c900
.org 0x4e7d4
	cmp r0, r1	@ 0004e7d4 8842
.org 0x4e7d6
	ble.n 0x4e7da	@ 0004e7d6 00dd
.org 0x4e7d8
	str r1, [r5, #96]	@ 0004e7d8 2966
.org 0x4e7da
	ldr r1, [r5, #88]	@ 0004e7da a96d
.org 0x4e7dc
	ldr r0, [r5, #96]	@ 0004e7dc 286e
.org 0x4e7de
	adds r1, r1, r0	@ 0004e7de 0918
.org 0x4e7e0
	str r1, [r5, #88]	@ 0004e7e0 a965
.org 0x4e7e2
	ldr r0, [r5, #84]	@ 0004e7e2 686d
.org 0x4e7e4
	bl 0x4e8cc	@ 0004e7e4 00f072f8
.org 0x4e7e8
	lsls r0, r0, #16	@ 0004e7e8 0004
.org 0x4e7ea
	cmp r0, #0	@ 0004e7ea 0028
.org 0x4e7ec
	bne.n 0x4e7fc	@ 0004e7ec 06d1
.org 0x4e7ee
	adds r0, r5, #0	@ 0004e7ee 281c
.org 0x4e7f0
	adds r0, #140	@ 0004e7f0 8c30
.org 0x4e7f2
	ldr r0, [r0, #0]	@ 0004e7f2 0068
.org 0x4e7f4
	ldr r1, [pc, #68]	@ 0004e7f4 1149
.org 0x4e7f6
	ands r0, r1	@ 0004e7f6 0840
.org 0x4e7f8
	cmp r0, #0	@ 0004e7f8 0028
.org 0x4e7fa
	beq.n 0x4e824	@ 0004e7fa 13d0
.org 0x4e7fc
	adds r1, r5, #0	@ 0004e7fc 291c
.org 0x4e7fe
	adds r1, #84	@ 0004e7fe 5431
.org 0x4e800
	movs r0, #1	@ 0004e800 0120
.org 0x4e802
	bl 0xd0c88	@ 0004e802 82f041fa
.org 0x4e806
	movs r0, #53	@ 0004e806 3520
.org 0x4e808
	bl 0x2b10	@ 0004e808 b4f782f9
.org 0x4e80c
	ldr r1, [pc, #48]	@ 0004e80c 0c49
.org 0x4e80e
	ldrb r0, [r5, #9]	@ 0004e80e 687a
.org 0x4e810
	lsls r0, r0, #2	@ 0004e810 8000
.org 0x4e812
	adds r0, r0, r1	@ 0004e812 4018
.org 0x4e814
	movs r1, #2	@ 0004e814 0221
.org 0x4e816
	str r1, [r5, #12]	@ 0004e816 e960
.org 0x4e818
	ldr r0, [r0, #0]	@ 0004e818 0068
.org 0x4e81a
	ldr r0, [r0, #8]	@ 0004e81a 8068
.org 0x4e81c
	str r0, [r5, #20]	@ 0004e81c 6861
.org 0x4e81e
	adds r0, r5, #0	@ 0004e81e 281c

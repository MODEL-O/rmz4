@ FUN_0803e710  entry 0x0803e710  size 406
.thumb
.org 0x3e710
FUN_0803e710:
	push {r4, r5, r6, lr}	@ 0003e710 70b5
.org 0x3e712
	sub sp, #16	@ 0003e712 84b0
.org 0x3e714
	adds r4, r0, #0	@ 0003e714 041c
.org 0x3e716
	adds r0, #180	@ 0003e716 b430
.org 0x3e718
	ldr r6, [r0, #0]	@ 0003e718 0668
.org 0x3e71a
	ldrb r0, [r4, #13]	@ 0003e71a 607b
.org 0x3e71c
	cmp r0, #1	@ 0003e71c 0128
.org 0x3e71e
	bne.n 0x3e722	@ 0003e71e 00d1
.org 0x3e720
	b.n 0x3e866	@ 0003e720 a1e0
.org 0x3e722
	cmp r0, #1	@ 0003e722 0128
.org 0x3e724
	bgt.n 0x3e72c	@ 0003e724 02dc
.org 0x3e726
	cmp r0, #0	@ 0003e726 0028
.org 0x3e728
	beq.n 0x3e73a	@ 0003e728 07d0
.org 0x3e72a
	b.n 0x3e8c0	@ 0003e72a c9e0
.org 0x3e72c
	cmp r0, #2	@ 0003e72c 0228
.org 0x3e72e
	bne.n 0x3e732	@ 0003e72e 00d1
.org 0x3e730
	b.n 0x3e888	@ 0003e730 aae0
.org 0x3e732
	cmp r0, #3	@ 0003e732 0328
.org 0x3e734
	bne.n 0x3e738	@ 0003e734 00d1
.org 0x3e736
	b.n 0x3e8a4	@ 0003e736 b5e0
.org 0x3e738
	b.n 0x3e8c0	@ 0003e738 c2e0
.org 0x3e73a
	adds r0, r4, #0	@ 0003e73a 201c
.org 0x3e73c
	movs r1, #0	@ 0003e73c 0021
.org 0x3e73e
	bl 0x3ad84	@ 0003e73e fcf721fb
.org 0x3e742
	lsls r0, r0, #24	@ 0003e742 0006
.org 0x3e744
	lsrs r2, r0, #24	@ 0003e744 020e
.org 0x3e746
	ldrb r1, [r4, #10]	@ 0003e746 a17a
.org 0x3e748
	movs r0, #16	@ 0003e748 1020
.org 0x3e74a
	ands r0, r1	@ 0003e74a 0840
.org 0x3e74c
	cmp r0, #0	@ 0003e74c 0028
.org 0x3e74e
	beq.n 0x3e764	@ 0003e74e 09d0
.org 0x3e750
	adds r0, r2, #0	@ 0003e750 101c
.org 0x3e752
	subs r0, #65	@ 0003e752 4138
.org 0x3e754
	lsls r0, r0, #24	@ 0003e754 0006
.org 0x3e756
	lsrs r0, r0, #24	@ 0003e756 000e
.org 0x3e758
	cmp r0, #126	@ 0003e758 7e28
.org 0x3e75a
	bls.n 0x3e770	@ 0003e75a 09d9
.org 0x3e75c
	adds r2, #64	@ 0003e75c 4032
.org 0x3e75e
	movs r0, #127	@ 0003e75e 7f20
.org 0x3e760
	ands r2, r0	@ 0003e760 0240
.org 0x3e762
	b.n 0x3e788	@ 0003e762 11e0
.org 0x3e764
	adds r0, r2, #0	@ 0003e764 101c
.org 0x3e766
	subs r0, #64	@ 0003e766 4038
.org 0x3e768
	lsls r0, r0, #24	@ 0003e768 0006
.org 0x3e76a
	lsrs r0, r0, #24	@ 0003e76a 000e
.org 0x3e76c
	cmp r0, #128	@ 0003e76c 8028
.org 0x3e76e
	bls.n 0x3e774	@ 0003e76e 01d9
.org 0x3e770
	movs r2, #64	@ 0003e770 4022
.org 0x3e772
	b.n 0x3e788	@ 0003e772 09e0
.org 0x3e774
	adds r0, r2, #0	@ 0003e774 101c
.org 0x3e776
	adds r0, #192	@ 0003e776 c030
.org 0x3e778
	movs r1, #127	@ 0003e778 7f21
.org 0x3e77a
	ands r0, r1	@ 0003e77a 0840
.org 0x3e77c
	movs r2, #128	@ 0003e77c 8022
.org 0x3e77e
	negs r2, r2	@ 0003e77e 5242
.org 0x3e780
	adds r1, r2, #0	@ 0003e780 111c
.org 0x3e782
	subs r1, r1, r0	@ 0003e782 091a
.org 0x3e784
	lsls r1, r1, #24	@ 0003e784 0906
.org 0x3e786
	lsrs r2, r1, #24	@ 0003e786 0a0e
.org 0x3e788
	cmp r2, #30	@ 0003e788 1e2a
.org 0x3e78a
	bhi.n 0x3e7a8	@ 0003e78a 0dd8
.org 0x3e78c
	ldr r1, [pc, #16]	@ 0003e78c 0449
.org 0x3e78e
	adds r0, r4, #0	@ 0003e78e 201c
.org 0x3e790
	bl 0x1cf00	@ 0003e790 def7b6fb
.org 0x3e794
	movs r2, #20	@ 0003e794 1422
.org 0x3e796
	movs r0, #224	@ 0003e796 e020
.org 0x3e798
	lsls r0, r0, #3	@ 0003e798 c000
.org 0x3e79a
	str r0, [r4, #92]	@ 0003e79a e065
.org 0x3e79c
	ldr r0, [pc, #4]	@ 0003e79c 0148
.org 0x3e79e
	b.n 0x3e81c	@ 0003e79e 3de0
.org 0x3e7a0
	.byte 0x17,0x80,0x00,0x00	@ 0003e7a0 data
.org 0x3e7a4
	.byte 0x00,0xf3,0xff,0xff	@ 0003e7a4 data
.org 0x3e7a8
	cmp r2, #52	@ 0003e7a8 342a
.org 0x3e7aa
	bhi.n 0x3e7c8	@ 0003e7aa 0dd8
.org 0x3e7ac
	ldr r1, [pc, #16]	@ 0003e7ac 0449
.org 0x3e7ae
	adds r0, r4, #0	@ 0003e7ae 201c
.org 0x3e7b0
	bl 0x1cf00	@ 0003e7b0 def7a6fb
.org 0x3e7b4
	movs r2, #42	@ 0003e7b4 2a22
.org 0x3e7b6
	movs r0, #192	@ 0003e7b6 c020
.org 0x3e7b8
	lsls r0, r0, #4	@ 0003e7b8 0001
.org 0x3e7ba
	str r0, [r4, #92]	@ 0003e7ba e065
.org 0x3e7bc
	ldr r0, [pc, #4]	@ 0003e7bc 0148
.org 0x3e7be
	b.n 0x3e81c	@ 0003e7be 2de0
.org 0x3e7c0
	.byte 0x18,0x80,0x00,0x00	@ 0003e7c0 data
.org 0x3e7c4
	.byte 0x00,0xf9,0xff,0xff	@ 0003e7c4 data
.org 0x3e7c8
	cmp r2, #74	@ 0003e7c8 4a2a
.org 0x3e7ca
	bhi.n 0x3e7e8	@ 0003e7ca 0dd8
.org 0x3e7cc
	ldr r1, [pc, #20]	@ 0003e7cc 0549
.org 0x3e7ce
	adds r0, r4, #0	@ 0003e7ce 201c
.org 0x3e7d0
	bl 0x1cf00	@ 0003e7d0 def796fb
.org 0x3e7d4
	movs r2, #64	@ 0003e7d4 4022
.org 0x3e7d6
	movs r0, #208	@ 0003e7d6 d020
.org 0x3e7d8
	lsls r0, r0, #4	@ 0003e7d8 0001
.org 0x3e7da
	str r0, [r4, #92]	@ 0003e7da e065
.org 0x3e7dc
	movs r0, #128	@ 0003e7dc 8020
.org 0x3e7de
	lsls r0, r0, #1	@ 0003e7de 4000
.org 0x3e7e0
	b.n 0x3e81c	@ 0003e7e0 1ce0
.org 0x3e7e2
	.byte 0x00	@ 0003e7e2 data
.org 0x3e7e3
	.byte 0x00	@ 0003e7e3 data
.org 0x3e7e4
	.byte 0x19,0x80,0x00,0x00	@ 0003e7e4 data
.org 0x3e7e8
	cmp r2, #96	@ 0003e7e8 602a
.org 0x3e7ea
	bhi.n 0x3e808	@ 0003e7ea 0dd8
.org 0x3e7ec
	ldr r1, [pc, #20]	@ 0003e7ec 0549
.org 0x3e7ee
	adds r0, r4, #0	@ 0003e7ee 201c
.org 0x3e7f0
	bl 0x1cf00	@ 0003e7f0 def786fb
.org 0x3e7f4
	movs r2, #86	@ 0003e7f4 5622
.org 0x3e7f6
	movs r0, #192	@ 0003e7f6 c020
.org 0x3e7f8
	lsls r0, r0, #4	@ 0003e7f8 0001
.org 0x3e7fa
	str r0, [r4, #92]	@ 0003e7fa e065
.org 0x3e7fc
	movs r0, #224	@ 0003e7fc e020
.org 0x3e7fe
	lsls r0, r0, #3	@ 0003e7fe c000
.org 0x3e800
	b.n 0x3e81c	@ 0003e800 0ce0
.org 0x3e802
	.byte 0x00	@ 0003e802 data
.org 0x3e803
	.byte 0x00	@ 0003e803 data
.org 0x3e804
	.byte 0x1a,0x80,0x00,0x00	@ 0003e804 data
.org 0x3e808
	ldr r1, [pc, #120]	@ 0003e808 1e49
.org 0x3e80a
	adds r0, r4, #0	@ 0003e80a 201c
.org 0x3e80c
	bl 0x1cf00	@ 0003e80c def778fb
.org 0x3e810
	movs r2, #108	@ 0003e810 6c22
.org 0x3e812
	movs r0, #224	@ 0003e812 e020
.org 0x3e814
	lsls r0, r0, #3	@ 0003e814 c000
.org 0x3e816
	str r0, [r4, #92]	@ 0003e816 e065
.org 0x3e818
	movs r0, #208	@ 0003e818 d020
.org 0x3e81a
	lsls r0, r0, #4	@ 0003e81a 0001
.org 0x3e81c
	str r0, [r4, #96]	@ 0003e81c 2066
.org 0x3e81e
	adds r5, r6, #0	@ 0003e81e 351c
.org 0x3e820
	adds r5, #180	@ 0003e820 b435
.org 0x3e822
	adds r3, r6, #0	@ 0003e822 331c
.org 0x3e824
	adds r3, #230	@ 0003e824 e633
.org 0x3e826
	ldrb r0, [r3, #0]	@ 0003e826 1878
.org 0x3e828
	adds r1, r0, #0	@ 0003e828 011c
.org 0x3e82a
	cmp r1, #0	@ 0003e82a 0029
.org 0x3e82c
	beq.n 0x3e852	@ 0003e82c 11d0
.org 0x3e82e
	cmp r1, #255	@ 0003e82e ff29
.org 0x3e830
	beq.n 0x3e836	@ 0003e830 01d0
.org 0x3e832
	subs r0, #1	@ 0003e832 0138
.org 0x3e834
	strb r0, [r3, #0]	@ 0003e834 1870
.org 0x3e836
	ldrb r3, [r5, #14]	@ 0003e836 ab7b
.org 0x3e838
	movs r0, #192	@ 0003e838 c020
.org 0x3e83a
	lsls r0, r0, #3	@ 0003e83a c000
.org 0x3e83c
	str r0, [sp, #0]	@ 0003e83c 0090
.org 0x3e83e
	str r2, [sp, #4]	@ 0003e83e 0192
.org 0x3e840
	movs r0, #2	@ 0003e840 0220
.org 0x3e842
	str r0, [sp, #8]	@ 0003e842 0290
.org 0x3e844
	ldrb r0, [r4, #19]	@ 0003e844 e07c
.org 0x3e846
	str r0, [sp, #12]	@ 0003e846 0390
.org 0x3e848
	adds r0, r6, #0	@ 0003e848 301c
.org 0x3e84a
	adds r1, r4, #0	@ 0003e84a 211c
.org 0x3e84c
	movs r2, #0	@ 0003e84c 0022
.org 0x3e84e
	bl 0x3f000	@ 0003e84e 00f0d7fb
.org 0x3e852
	movs r0, #170	@ 0003e852 aa20
.org 0x3e854
	lsls r0, r0, #1	@ 0003e854 4000
.org 0x3e856
	adds r1, r6, r0	@ 0003e856 3118
.org 0x3e858
	movs r0, #0	@ 0003e858 0020
.org 0x3e85a
	strb r0, [r1, #0]	@ 0003e85a 0870
.org 0x3e85c
	movs r0, #2	@ 0003e85c 0220
.org 0x3e85e
	strb r0, [r4, #18]	@ 0003e85e a074
.org 0x3e860
	ldrb r0, [r4, #13]	@ 0003e860 607b
.org 0x3e862
	adds r0, #1	@ 0003e862 0130
.org 0x3e864
	strb r0, [r4, #13]	@ 0003e864 6073
.org 0x3e866
	ldrb r0, [r4, #18]	@ 0003e866 a07c
.org 0x3e868
	subs r0, #1	@ 0003e868 0138
.org 0x3e86a
	strb r0, [r4, #18]	@ 0003e86a a074
.org 0x3e86c
	lsls r0, r0, #24	@ 0003e86c 0006
.org 0x3e86e
	cmp r0, #0	@ 0003e86e 0028
.org 0x3e870
	bne.n 0x3e8c0	@ 0003e870 26d1
.org 0x3e872
	movs r2, #170	@ 0003e872 aa22
.org 0x3e874
	lsls r2, r2, #1	@ 0003e874 5200
.org 0x3e876
	adds r1, r6, r2	@ 0003e876 b118
.org 0x3e878
	movs r0, #1	@ 0003e878 0120
.org 0x3e87a
	strb r0, [r1, #0]	@ 0003e87a 0870
.org 0x3e87c
	movs r0, #4	@ 0003e87c 0420
.org 0x3e87e
	strb r0, [r4, #18]	@ 0003e87e a074
.org 0x3e880
	b.n 0x3e8ba	@ 0003e880 1be0
.org 0x3e882
	.byte 0x00	@ 0003e882 data
.org 0x3e883
	.byte 0x00	@ 0003e883 data
.org 0x3e884
	.byte 0x1b,0x80,0x00,0x00	@ 0003e884 data
.org 0x3e888
	ldrb r0, [r4, #18]	@ 0003e888 a07c
.org 0x3e88a
	subs r0, #1	@ 0003e88a 0138
.org 0x3e88c
	strb r0, [r4, #18]	@ 0003e88c a074
.org 0x3e88e
	lsls r0, r0, #24	@ 0003e88e 0006
.org 0x3e890
	cmp r0, #0	@ 0003e890 0028
.org 0x3e892
	bne.n 0x3e8c0	@ 0003e892 15d1
.org 0x3e894
	movs r0, #170	@ 0003e894 aa20
.org 0x3e896
	lsls r0, r0, #1	@ 0003e896 4000
.org 0x3e898
	adds r1, r6, r0	@ 0003e898 3118
.org 0x3e89a
	movs r0, #3	@ 0003e89a 0320
.org 0x3e89c
	strb r0, [r1, #0]	@ 0003e89c 0870
.org 0x3e89e
	movs r0, #16	@ 0003e89e 1020
.org 0x3e8a0
	strb r0, [r4, #18]	@ 0003e8a0 a074
.org 0x3e8a2
	b.n 0x3e8ba	@ 0003e8a2 0ae0
.org 0x3e8a4
	ldrb r0, [r4, #18]	@ 0003e8a4 a07c

@ FUN_0804f7a8  entry 0x0804f7a8  size 300
.thumb
.org 0x4f7a8
FUN_0804f7a8:
	push {r4, r5, r6, lr}	@ 0004f7a8 70b5
.org 0x4f7aa
	adds r4, r0, #0	@ 0004f7aa 041c
.org 0x4f7ac
	ldr r5, [r4, #40]	@ 0004f7ac a56a
.org 0x4f7ae
	ldrb r0, [r4, #18]	@ 0004f7ae a07c
.org 0x4f7b0
	adds r1, r0, #1	@ 0004f7b0 411c
.org 0x4f7b2
	strb r1, [r4, #18]	@ 0004f7b2 a174
.org 0x4f7b4
	lsls r0, r0, #24	@ 0004f7b4 0006
.org 0x4f7b6
	lsrs r0, r0, #24	@ 0004f7b6 000e
.org 0x4f7b8
	cmp r0, #8	@ 0004f7b8 0828
.org 0x4f7ba
	bhi.n 0x4f7ca	@ 0004f7ba 06d8
.org 0x4f7bc
	movs r1, #168	@ 0004f7bc a821
.org 0x4f7be
	lsls r1, r1, #1	@ 0004f7be 4900
.org 0x4f7c0
	adds r0, r5, r1	@ 0004f7c0 6818
.org 0x4f7c2
	ldrb r1, [r0, #0]	@ 0004f7c2 0178
.org 0x4f7c4
	adds r6, r0, #0	@ 0004f7c4 061c
.org 0x4f7c6
	cmp r1, #255	@ 0004f7c6 ff29
.org 0x4f7c8
	bne.n 0x4f818	@ 0004f7c8 26d1
.org 0x4f7ca
	ldr r0, [pc, #68]	@ 0004f7ca 1148
.org 0x4f7cc
	adds r2, r5, r0	@ 0004f7cc 2a18
.org 0x4f7ce
	ldrb r0, [r2, #0]	@ 0004f7ce 1078
.org 0x4f7d0
	movs r1, #64	@ 0004f7d0 4021
.org 0x4f7d2
	orrs r0, r1	@ 0004f7d2 0843
.org 0x4f7d4
	strb r0, [r2, #0]	@ 0004f7d4 1070
.org 0x4f7d6
	ldrb r1, [r4, #10]	@ 0004f7d6 a17a
.org 0x4f7d8
	movs r0, #254	@ 0004f7d8 fe20
.org 0x4f7da
	ands r0, r1	@ 0004f7da 0840
.org 0x4f7dc
	movs r2, #0	@ 0004f7dc 0022
.org 0x4f7de
	movs r1, #253	@ 0004f7de fd21
.org 0x4f7e0
	ands r0, r1	@ 0004f7e0 0840
.org 0x4f7e2
	strb r0, [r4, #10]	@ 0004f7e2 a072
.org 0x4f7e4
	adds r0, r4, #0	@ 0004f7e4 201c
.org 0x4f7e6
	adds r0, #140	@ 0004f7e6 8c30
.org 0x4f7e8
	str r2, [r0, #0]	@ 0004f7e8 0260
.org 0x4f7ea
	adds r0, #4	@ 0004f7ea 0430
.org 0x4f7ec
	str r2, [r0, #0]	@ 0004f7ec 0260
.org 0x4f7ee
	adds r0, #4	@ 0004f7ee 0430
.org 0x4f7f0
	strb r2, [r0, #0]	@ 0004f7f0 0270
.org 0x4f7f2
	ldrb r1, [r4, #10]	@ 0004f7f2 a17a
.org 0x4f7f4
	movs r0, #251	@ 0004f7f4 fb20
.org 0x4f7f6
	ands r0, r1	@ 0004f7f6 0840
.org 0x4f7f8
	strb r0, [r4, #10]	@ 0004f7f8 a072
.org 0x4f7fa
	ldr r1, [pc, #24]	@ 0004f7fa 0649
.org 0x4f7fc
	ldrb r0, [r4, #9]	@ 0004f7fc 607a
.org 0x4f7fe
	lsls r0, r0, #2	@ 0004f7fe 8000
.org 0x4f800
	adds r0, r0, r1	@ 0004f800 4018
.org 0x4f802
	movs r1, #3	@ 0004f802 0321
.org 0x4f804
	str r1, [r4, #12]	@ 0004f804 e160
.org 0x4f806
	ldr r0, [r0, #0]	@ 0004f806 0068
.org 0x4f808
	ldr r0, [r0, #12]	@ 0004f808 c068
.org 0x4f80a
	str r0, [r4, #20]	@ 0004f80a 6061
.org 0x4f80c
	b.n 0x4f8e6	@ 0004f80c 6be0
.org 0x4f80e
	.byte 0x00	@ 0004f80e data
.org 0x4f80f
	.byte 0x00	@ 0004f80f data
.org 0x4f810
	.byte 0x53,0x01,0x00,0x00	@ 0004f810 data
.org 0x4f814
	.byte 0xf8,0x39,0x85,0x08	@ 0004f814 data
.org 0x4f818
	adds r0, r4, #0	@ 0004f818 201c
.org 0x4f81a
	adds r0, #140	@ 0004f81a 8c30
.org 0x4f81c
	ldr r0, [r0, #0]	@ 0004f81c 0068
.org 0x4f81e
	movs r1, #4	@ 0004f81e 0421
.org 0x4f820
	ands r0, r1	@ 0004f820 0840
.org 0x4f822
	cmp r0, #0	@ 0004f822 0028
.org 0x4f824
	beq.n 0x4f850	@ 0004f824 14d0
.org 0x4f826
	ldr r1, [pc, #32]	@ 0004f826 0849
.org 0x4f828
	adds r2, r5, r1	@ 0004f828 6a18
.org 0x4f82a
	ldrb r0, [r2, #0]	@ 0004f82a 1078
.org 0x4f82c
	movs r1, #64	@ 0004f82c 4021
.org 0x4f82e
	orrs r0, r1	@ 0004f82e 0843
.org 0x4f830
	strb r0, [r2, #0]	@ 0004f830 1070
.org 0x4f832
	ldr r1, [pc, #24]	@ 0004f832 0649
.org 0x4f834
	ldrb r0, [r4, #9]	@ 0004f834 607a
.org 0x4f836
	lsls r0, r0, #2	@ 0004f836 8000
.org 0x4f838
	adds r0, r0, r1	@ 0004f838 4018
.org 0x4f83a
	movs r1, #2	@ 0004f83a 0221
.org 0x4f83c
	str r1, [r4, #12]	@ 0004f83c e160
.org 0x4f83e
	ldr r0, [r0, #0]	@ 0004f83e 0068
.org 0x4f840
	ldr r0, [r0, #8]	@ 0004f840 8068
.org 0x4f842
	str r0, [r4, #20]	@ 0004f842 6061
.org 0x4f844
	b.n 0x4f8e6	@ 0004f844 4fe0
.org 0x4f846
	.byte 0x00	@ 0004f846 data
.org 0x4f847
	.byte 0x00	@ 0004f847 data
.org 0x4f848
	.byte 0x53,0x01,0x00,0x00	@ 0004f848 data
.org 0x4f84c
	.byte 0xf8,0x39,0x85,0x08	@ 0004f84c data
.org 0x4f850
	adds r0, r4, #0	@ 0004f850 201c
.org 0x4f852
	bl 0x1cff0	@ 0004f852 cdf7cdfb
.org 0x4f856
	ldrb r0, [r5, #10]	@ 0004f856 a87a
.org 0x4f858
	lsrs r2, r0, #4	@ 0004f858 0209
.org 0x4f85a
	movs r0, #1	@ 0004f85a 0120
.org 0x4f85c
	ands r2, r0	@ 0004f85c 0240
.org 0x4f85e
	cmp r2, #0	@ 0004f85e 002a
.org 0x4f860
	beq.n 0x4f86a	@ 0004f860 03d0
.org 0x4f862
	ldrb r1, [r4, #10]	@ 0004f862 a17a
.org 0x4f864
	movs r0, #16	@ 0004f864 1020
.org 0x4f866
	orrs r0, r1	@ 0004f866 0843
.org 0x4f868
	b.n 0x4f870	@ 0004f868 02e0
.org 0x4f86a
	ldrb r1, [r4, #10]	@ 0004f86a a17a
.org 0x4f86c
	movs r0, #239	@ 0004f86c ef20
.org 0x4f86e
	ands r0, r1	@ 0004f86e 0840
.org 0x4f870
	strb r0, [r4, #10]	@ 0004f870 a072
.org 0x4f872
	adds r1, r2, #0	@ 0004f872 111c
.org 0x4f874
	adds r0, r4, #0	@ 0004f874 201c
.org 0x4f876
	adds r0, #76	@ 0004f876 4c30
.org 0x4f878
	strb r1, [r0, #0]	@ 0004f878 0170
.org 0x4f87a
	adds r3, r4, #0	@ 0004f87a 231c
.org 0x4f87c
	adds r3, #74	@ 0004f87c 4a33
.org 0x4f87e
	lsls r1, r1, #4	@ 0004f87e 0901
.org 0x4f880
	ldrb r2, [r3, #0]	@ 0004f880 1a78
.org 0x4f882
	movs r0, #17	@ 0004f882 1120
.org 0x4f884
	negs r0, r0	@ 0004f884 4042
.org 0x4f886
	ands r0, r2	@ 0004f886 1040
.org 0x4f888
	orrs r0, r1	@ 0004f888 0843
.org 0x4f88a
	strb r0, [r3, #0]	@ 0004f88a 1870
.org 0x4f88c
	adds r0, r5, #0	@ 0004f88c 281c
.org 0x4f88e
	adds r0, #113	@ 0004f88e 7130
.org 0x4f890
	ldrb r0, [r0, #0]	@ 0004f890 0078
.org 0x4f892
	lsls r0, r0, #24	@ 0004f892 0006
.org 0x4f894
	asrs r0, r0, #24	@ 0004f894 0016
.org 0x4f896
	movs r3, #0	@ 0004f896 0023
.org 0x4f898
	cmp r0, #3	@ 0004f898 0328
.org 0x4f89a
	bne.n 0x4f89e	@ 0004f89a 00d1
.org 0x4f89c
	movs r3, #1	@ 0004f89c 0123
.org 0x4f89e
	ldrb r1, [r4, #10]	@ 0004f89e a17a
.org 0x4f8a0
	movs r0, #16	@ 0004f8a0 1020
.org 0x4f8a2
	ands r0, r1	@ 0004f8a2 0840
.org 0x4f8a4
	cmp r0, #0	@ 0004f8a4 0028
.org 0x4f8a6
	beq.n 0x4f8c0	@ 0004f8a6 0bd0
.org 0x4f8a8
	ldr r2, [pc, #16]	@ 0004f8a8 044a
.org 0x4f8aa
	lsls r3, r3, #3	@ 0004f8aa db00
.org 0x4f8ac
	ldrb r0, [r6, #0]	@ 0004f8ac 3078
.org 0x4f8ae
	lsls r0, r0, #4	@ 0004f8ae 0001
.org 0x4f8b0
	adds r0, r3, r0	@ 0004f8b0 1818
.org 0x4f8b2
	adds r0, r0, r2	@ 0004f8b2 8018
.org 0x4f8b4
	ldr r1, [r5, #84]	@ 0004f8b4 696d
.org 0x4f8b6
	ldr r0, [r0, #0]	@ 0004f8b6 0068
.org 0x4f8b8
	subs r1, r1, r0	@ 0004f8b8 091a
.org 0x4f8ba
	b.n 0x4f8d2	@ 0004f8ba 0ae0
.org 0x4f8bc
	.byte 0x4c,0x35,0x85,0x08	@ 0004f8bc data
.org 0x4f8c0
	ldr r2, [pc, #40]	@ 0004f8c0 0a4a
.org 0x4f8c2
	lsls r3, r3, #3	@ 0004f8c2 db00
.org 0x4f8c4
	ldrb r0, [r6, #0]	@ 0004f8c4 3078
.org 0x4f8c6
	lsls r0, r0, #4	@ 0004f8c6 0001
.org 0x4f8c8
	adds r0, r3, r0	@ 0004f8c8 1818
.org 0x4f8ca
	adds r0, r0, r2	@ 0004f8ca 8018
.org 0x4f8cc
	ldr r1, [r5, #84]	@ 0004f8cc 696d
.org 0x4f8ce
	ldr r0, [r0, #0]	@ 0004f8ce 0068
.org 0x4f8d0
	adds r1, r1, r0	@ 0004f8d0 0918
.org 0x4f8d2
	str r1, [r4, #84]	@ 0004f8d2 6165

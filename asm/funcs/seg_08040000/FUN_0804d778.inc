@ FUN_0804d778  entry 0x0804d778  size 338
.thumb
.org 0x4d778
FUN_0804d778:
	push {r4, r5, r6, lr}	@ 0004d778 70b5
.org 0x4d77a
	adds r5, r0, #0	@ 0004d77a 051c
.org 0x4d77c
	ldr r6, [r5, #40]	@ 0004d77c ae6a
.org 0x4d77e
	movs r1, #168	@ 0004d77e a821
.org 0x4d780
	lsls r1, r1, #1	@ 0004d780 4900
.org 0x4d782
	adds r0, r6, r1	@ 0004d782 7018
.org 0x4d784
	ldrb r0, [r0, #0]	@ 0004d784 0078
.org 0x4d786
	cmp r0, #255	@ 0004d786 ff28
.org 0x4d788
	bne.n 0x4d7d8	@ 0004d788 26d1
.org 0x4d78a
	ldr r0, [pc, #68]	@ 0004d78a 1148
.org 0x4d78c
	adds r2, r6, r0	@ 0004d78c 3218
.org 0x4d78e
	ldrb r0, [r2, #0]	@ 0004d78e 1078
.org 0x4d790
	movs r1, #64	@ 0004d790 4021
.org 0x4d792
	orrs r0, r1	@ 0004d792 0843
.org 0x4d794
	strb r0, [r2, #0]	@ 0004d794 1070
.org 0x4d796
	ldrb r1, [r5, #10]	@ 0004d796 a97a
.org 0x4d798
	movs r0, #254	@ 0004d798 fe20
.org 0x4d79a
	ands r0, r1	@ 0004d79a 0840
.org 0x4d79c
	movs r2, #0	@ 0004d79c 0022
.org 0x4d79e
	movs r1, #253	@ 0004d79e fd21
.org 0x4d7a0
	ands r0, r1	@ 0004d7a0 0840
.org 0x4d7a2
	strb r0, [r5, #10]	@ 0004d7a2 a872
.org 0x4d7a4
	adds r0, r5, #0	@ 0004d7a4 281c
.org 0x4d7a6
	adds r0, #140	@ 0004d7a6 8c30
.org 0x4d7a8
	str r2, [r0, #0]	@ 0004d7a8 0260
.org 0x4d7aa
	adds r0, #4	@ 0004d7aa 0430
.org 0x4d7ac
	str r2, [r0, #0]	@ 0004d7ac 0260
.org 0x4d7ae
	adds r0, #4	@ 0004d7ae 0430
.org 0x4d7b0
	strb r2, [r0, #0]	@ 0004d7b0 0270
.org 0x4d7b2
	ldrb r1, [r5, #10]	@ 0004d7b2 a97a
.org 0x4d7b4
	movs r0, #251	@ 0004d7b4 fb20
.org 0x4d7b6
	ands r0, r1	@ 0004d7b6 0840
.org 0x4d7b8
	strb r0, [r5, #10]	@ 0004d7b8 a872
.org 0x4d7ba
	ldr r1, [pc, #24]	@ 0004d7ba 0649
.org 0x4d7bc
	ldrb r0, [r5, #9]	@ 0004d7bc 687a
.org 0x4d7be
	lsls r0, r0, #2	@ 0004d7be 8000
.org 0x4d7c0
	adds r0, r0, r1	@ 0004d7c0 4018
.org 0x4d7c2
	movs r1, #3	@ 0004d7c2 0321
.org 0x4d7c4
	str r1, [r5, #12]	@ 0004d7c4 e960
.org 0x4d7c6
	ldr r0, [r0, #0]	@ 0004d7c6 0068
.org 0x4d7c8
	ldr r0, [r0, #12]	@ 0004d7c8 c068
.org 0x4d7ca
	str r0, [r5, #20]	@ 0004d7ca 6861
.org 0x4d7cc
	b.n 0x4d8de	@ 0004d7cc 87e0
.org 0x4d7ce
	.byte 0x00	@ 0004d7ce data
.org 0x4d7cf
	.byte 0x00	@ 0004d7cf data
.org 0x4d7d0
	.byte 0x53,0x01,0x00,0x00	@ 0004d7d0 data
.org 0x4d7d4
	.byte 0xf8,0x39,0x85,0x08	@ 0004d7d4 data
.org 0x4d7d8
	ldrb r3, [r5, #13]	@ 0004d7d8 6b7b
.org 0x4d7da
	adds r2, r3, #0	@ 0004d7da 1a1c
.org 0x4d7dc
	cmp r2, #0	@ 0004d7dc 002a
.org 0x4d7de
	beq.n 0x4d818	@ 0004d7de 1bd0
.org 0x4d7e0
	ldrb r0, [r5, #18]	@ 0004d7e0 a87c
.org 0x4d7e2
	adds r1, r0, #1	@ 0004d7e2 411c
.org 0x4d7e4
	strb r1, [r5, #18]	@ 0004d7e4 a974
.org 0x4d7e6
	lsls r0, r0, #24	@ 0004d7e6 0006
.org 0x4d7e8
	lsrs r0, r0, #24	@ 0004d7e8 000e
.org 0x4d7ea
	cmp r0, #3	@ 0004d7ea 0328
.org 0x4d7ec
	bls.n 0x4d82c	@ 0004d7ec 1ed9
.org 0x4d7ee
	ldr r1, [pc, #32]	@ 0004d7ee 0849
.org 0x4d7f0
	adds r2, r6, r1	@ 0004d7f0 7218
.org 0x4d7f2
	ldrb r0, [r2, #0]	@ 0004d7f2 1078
.org 0x4d7f4
	movs r1, #64	@ 0004d7f4 4021
.org 0x4d7f6
	orrs r0, r1	@ 0004d7f6 0843
.org 0x4d7f8
	strb r0, [r2, #0]	@ 0004d7f8 1070
.org 0x4d7fa
	ldr r1, [pc, #24]	@ 0004d7fa 0649
.org 0x4d7fc
	ldrb r0, [r5, #9]	@ 0004d7fc 687a
.org 0x4d7fe
	lsls r0, r0, #2	@ 0004d7fe 8000
.org 0x4d800
	adds r0, r0, r1	@ 0004d800 4018
.org 0x4d802
	movs r1, #2	@ 0004d802 0221
.org 0x4d804
	str r1, [r5, #12]	@ 0004d804 e960
.org 0x4d806
	ldr r0, [r0, #0]	@ 0004d806 0068
.org 0x4d808
	ldr r0, [r0, #8]	@ 0004d808 8068
.org 0x4d80a
	str r0, [r5, #20]	@ 0004d80a 6861
.org 0x4d80c
	b.n 0x4d8de	@ 0004d80c 67e0
.org 0x4d80e
	.byte 0x00	@ 0004d80e data
.org 0x4d80f
	.byte 0x00	@ 0004d80f data
.org 0x4d810
	.byte 0x53,0x01,0x00,0x00	@ 0004d810 data
.org 0x4d814
	.byte 0xf8,0x39,0x85,0x08	@ 0004d814 data
.org 0x4d818
	ldrb r0, [r5, #18]	@ 0004d818 a87c
.org 0x4d81a
	adds r1, r0, #1	@ 0004d81a 411c
.org 0x4d81c
	strb r1, [r5, #18]	@ 0004d81c a974
.org 0x4d81e
	lsls r0, r0, #24	@ 0004d81e 0006
.org 0x4d820
	lsrs r0, r0, #24	@ 0004d820 000e
.org 0x4d822
	cmp r0, #3	@ 0004d822 0328
.org 0x4d824
	bls.n 0x4d82c	@ 0004d824 02d9
.org 0x4d826
	strb r2, [r5, #18]	@ 0004d826 aa74
.org 0x4d828
	adds r0, r3, #1	@ 0004d828 581c
.org 0x4d82a
	strb r0, [r5, #13]	@ 0004d82a 6873
.org 0x4d82c
	adds r0, r5, #0	@ 0004d82c 281c
.org 0x4d82e
	bl 0x1cff0	@ 0004d82e cff7dffb
.org 0x4d832
	ldrb r0, [r6, #10]	@ 0004d832 b07a
.org 0x4d834
	lsrs r2, r0, #4	@ 0004d834 0209
.org 0x4d836
	movs r0, #1	@ 0004d836 0120
.org 0x4d838
	ands r2, r0	@ 0004d838 0240
.org 0x4d83a
	cmp r2, #0	@ 0004d83a 002a
.org 0x4d83c
	beq.n 0x4d846	@ 0004d83c 03d0
.org 0x4d83e
	ldrb r1, [r5, #10]	@ 0004d83e a97a
.org 0x4d840
	movs r0, #16	@ 0004d840 1020
.org 0x4d842
	orrs r0, r1	@ 0004d842 0843
.org 0x4d844
	b.n 0x4d84c	@ 0004d844 02e0
.org 0x4d846
	ldrb r1, [r5, #10]	@ 0004d846 a97a
.org 0x4d848
	movs r0, #239	@ 0004d848 ef20
.org 0x4d84a
	ands r0, r1	@ 0004d84a 0840
.org 0x4d84c
	strb r0, [r5, #10]	@ 0004d84c a872
.org 0x4d84e
	adds r1, r2, #0	@ 0004d84e 111c
.org 0x4d850
	adds r0, r5, #0	@ 0004d850 281c
.org 0x4d852
	adds r0, #76	@ 0004d852 4c30
.org 0x4d854
	strb r1, [r0, #0]	@ 0004d854 0170
.org 0x4d856
	adds r3, r5, #0	@ 0004d856 2b1c
.org 0x4d858
	adds r3, #74	@ 0004d858 4a33
.org 0x4d85a
	lsls r1, r1, #4	@ 0004d85a 0901
.org 0x4d85c
	ldrb r2, [r3, #0]	@ 0004d85c 1a78
.org 0x4d85e
	movs r0, #17	@ 0004d85e 1120
.org 0x4d860
	negs r0, r0	@ 0004d860 4042
.org 0x4d862
	ands r0, r2	@ 0004d862 1040
.org 0x4d864
	orrs r0, r1	@ 0004d864 0843
.org 0x4d866
	strb r0, [r3, #0]	@ 0004d866 1870
.org 0x4d868
	adds r0, r6, #0	@ 0004d868 301c
.org 0x4d86a
	adds r0, #113	@ 0004d86a 7130
.org 0x4d86c
	ldrb r0, [r0, #0]	@ 0004d86c 0078
.org 0x4d86e
	lsls r0, r0, #24	@ 0004d86e 0006
.org 0x4d870
	asrs r0, r0, #24	@ 0004d870 0016
.org 0x4d872
	movs r4, #0	@ 0004d872 0024
.org 0x4d874
	cmp r0, #3	@ 0004d874 0328
.org 0x4d876
	bne.n 0x4d87a	@ 0004d876 00d1
.org 0x4d878
	movs r4, #1	@ 0004d878 0124
.org 0x4d87a
	ldrb r1, [r5, #10]	@ 0004d87a a97a
.org 0x4d87c
	movs r0, #16	@ 0004d87c 1020
.org 0x4d87e
	ands r0, r1	@ 0004d87e 0840
.org 0x4d880
	cmp r0, #0	@ 0004d880 0028
.org 0x4d882
	beq.n 0x4d8a4	@ 0004d882 0fd0
.org 0x4d884
	ldr r3, [pc, #24]	@ 0004d884 064b
.org 0x4d886
	lsls r4, r4, #3	@ 0004d886 e400
.org 0x4d888
	movs r0, #168	@ 0004d888 a820
.org 0x4d88a
	lsls r0, r0, #1	@ 0004d88a 4000
.org 0x4d88c
	adds r2, r6, r0	@ 0004d88c 3218
.org 0x4d88e
	ldrb r0, [r2, #0]	@ 0004d88e 1078
.org 0x4d890
	lsls r0, r0, #4	@ 0004d890 0001
.org 0x4d892
	adds r0, r4, r0	@ 0004d892 2018
.org 0x4d894
	adds r0, r0, r3	@ 0004d894 c018
.org 0x4d896
	ldr r1, [r6, #84]	@ 0004d896 716d
.org 0x4d898
	ldr r0, [r0, #0]	@ 0004d898 0068
.org 0x4d89a
	subs r1, r1, r0	@ 0004d89a 091a
.org 0x4d89c
	b.n 0x4d8bc	@ 0004d89c 0ee0
.org 0x4d89e
	.byte 0x00	@ 0004d89e data
.org 0x4d89f
	.byte 0x00	@ 0004d89f data
.org 0x4d8a0
	.byte 0x4c,0x35,0x85,0x08	@ 0004d8a0 data
.org 0x4d8a4
	ldr r3, [pc, #60]	@ 0004d8a4 0f4b
.org 0x4d8a6
	lsls r4, r4, #3	@ 0004d8a6 e400
.org 0x4d8a8
	movs r1, #168	@ 0004d8a8 a821
.org 0x4d8aa
	lsls r1, r1, #1	@ 0004d8aa 4900
.org 0x4d8ac
	adds r2, r6, r1	@ 0004d8ac 7218
.org 0x4d8ae
	ldrb r0, [r2, #0]	@ 0004d8ae 1078
.org 0x4d8b0
	lsls r0, r0, #4	@ 0004d8b0 0001
.org 0x4d8b2
	adds r0, r4, r0	@ 0004d8b2 2018
.org 0x4d8b4
	adds r0, r0, r3	@ 0004d8b4 c018
.org 0x4d8b6
	ldr r1, [r6, #84]	@ 0004d8b6 716d
.org 0x4d8b8
	ldr r0, [r0, #0]	@ 0004d8b8 0068
.org 0x4d8ba
	adds r1, r1, r0	@ 0004d8ba 0918
.org 0x4d8bc
	str r1, [r5, #84]	@ 0004d8bc 6965
.org 0x4d8be
	ldrb r0, [r2, #0]	@ 0004d8be 1078
.org 0x4d8c0
	lsls r0, r0, #4	@ 0004d8c0 0001
.org 0x4d8c2
	adds r0, r4, r0	@ 0004d8c2 2018
.org 0x4d8c4
	adds r1, r3, #4	@ 0004d8c4 191d
.org 0x4d8c6
	adds r0, r0, r1	@ 0004d8c6 4018
.org 0x4d8c8
	ldr r1, [r6, #88]	@ 0004d8c8 b16d

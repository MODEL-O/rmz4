@ FUN_080c4808  entry 0x080c4808  size 202
.thumb
.org 0xc4808
FUN_080c4808:
	push {r4, r5, r6, r7, lr}	@ 000c4808 f0b5
.org 0xc480a
	sub sp, #8	@ 000c480a 82b0
.org 0xc480c
	adds r4, r0, #0	@ 000c480c 041c
.org 0xc480e
	ldrb r0, [r4, #10]	@ 000c480e a07a
.org 0xc4810
	lsrs r5, r0, #4	@ 000c4810 0509
.org 0xc4812
	movs r7, #1	@ 000c4812 0127
.org 0xc4814
	ands r5, r7	@ 000c4814 3d40
.org 0xc4816
	ldrb r6, [r4, #15]	@ 000c4816 e67b
.org 0xc4818
	cmp r6, #0	@ 000c4818 002e
.org 0xc481a
	bne.n 0xc489c	@ 000c481a 3fd1
.org 0xc481c
	ldr r0, [pc, #60]	@ 000c481c 0f48
.org 0xc481e
	bl 0x2b10	@ 000c481e 3ef777f9
.org 0xc4822
	adds r0, r4, #0	@ 000c4822 201c
.org 0xc4824
	adds r0, #184	@ 000c4824 b830
.org 0xc4826
	strb r7, [r0, #0]	@ 000c4826 0770
.org 0xc4828
	ldr r0, [r4, #84]	@ 000c4828 606d
.org 0xc482a
	str r0, [sp, #0]	@ 000c482a 0090
.org 0xc482c
	ldr r0, [r4, #88]	@ 000c482c a06d
.org 0xc482e
	str r0, [sp, #4]	@ 000c482e 0190
.org 0xc4830
	adds r0, r4, #0	@ 000c4830 201c
.org 0xc4832
	mov r1, sp	@ 000c4832 6946
.org 0xc4834
	bl 0xc44dc	@ 000c4834 fff752fe
.org 0xc4838
	adds r0, r4, #0	@ 000c4838 201c
.org 0xc483a
	bl 0x1ce54	@ 000c483a 58f70bfb
.org 0xc483e
	adds r0, r4, #0	@ 000c483e 201c
.org 0xc4840
	adds r0, #80	@ 000c4840 5030
.org 0xc4842
	strh r6, [r0, #0]	@ 000c4842 0680
.org 0xc4844
	adds r1, r4, #0	@ 000c4844 211c
.org 0xc4846
	adds r1, #82	@ 000c4846 5231
.org 0xc4848
	movs r0, #128	@ 000c4848 8020
.org 0xc484a
	lsls r0, r0, #1	@ 000c484a 4000
.org 0xc484c
	strh r0, [r1, #0]	@ 000c484c 0880
.org 0xc484e
	adds r2, r5, #0	@ 000c484e 2a1c
.org 0xc4850
	cmp r2, #0	@ 000c4850 002a
.org 0xc4852
	beq.n 0xc4860	@ 000c4852 05d0
.org 0xc4854
	ldrb r0, [r4, #10]	@ 000c4854 a07a
.org 0xc4856
	movs r1, #16	@ 000c4856 1021
.org 0xc4858
	orrs r0, r1	@ 000c4858 0843
.org 0xc485a
	b.n 0xc4866	@ 000c485a 04e0
.org 0xc485c
	.byte 0x8b,0x01,0x00,0x00	@ 000c485c data
.org 0xc4860
	ldrb r1, [r4, #10]	@ 000c4860 a17a
.org 0xc4862
	movs r0, #239	@ 000c4862 ef20
.org 0xc4864
	ands r0, r1	@ 000c4864 0840
.org 0xc4866
	strb r0, [r4, #10]	@ 000c4866 a072
.org 0xc4868
	adds r1, r2, #0	@ 000c4868 111c
.org 0xc486a
	adds r0, r4, #0	@ 000c486a 201c
.org 0xc486c
	adds r0, #76	@ 000c486c 4c30
.org 0xc486e
	strb r1, [r0, #0]	@ 000c486e 0170
.org 0xc4870
	adds r3, r4, #0	@ 000c4870 231c
.org 0xc4872
	adds r3, #74	@ 000c4872 4a33
.org 0xc4874
	lsls r1, r1, #4	@ 000c4874 0901
.org 0xc4876
	ldrb r2, [r3, #0]	@ 000c4876 1a78
.org 0xc4878
	movs r0, #17	@ 000c4878 1120
.org 0xc487a
	negs r0, r0	@ 000c487a 4042
.org 0xc487c
	ands r0, r2	@ 000c487c 1040
.org 0xc487e
	orrs r0, r1	@ 000c487e 0843
.org 0xc4880
	strb r0, [r3, #0]	@ 000c4880 1870
.org 0xc4882
	ldr r1, [pc, #84]	@ 000c4882 1549
.org 0xc4884
	adds r0, r4, #0	@ 000c4884 201c
.org 0xc4886
	bl 0x1cf00	@ 000c4886 58f73bfb
.org 0xc488a
	ldr r0, [r4, #88]	@ 000c488a a06d
.org 0xc488c
	ldr r1, [pc, #76]	@ 000c488c 1349
.org 0xc488e
	adds r0, r0, r1	@ 000c488e 4018
.org 0xc4890
	str r0, [r4, #88]	@ 000c4890 a065
.org 0xc4892
	movs r0, #16	@ 000c4892 1020
.org 0xc4894
	strb r0, [r4, #18]	@ 000c4894 a074
.org 0xc4896
	ldrb r0, [r4, #15]	@ 000c4896 e07b
.org 0xc4898
	adds r0, #1	@ 000c4898 0130
.org 0xc489a
	strb r0, [r4, #15]	@ 000c489a e073
.org 0xc489c
	adds r0, r4, #0	@ 000c489c 201c
.org 0xc489e
	bl 0x1cff0	@ 000c489e 58f7a7fb
.org 0xc48a2
	ldrb r0, [r4, #18]	@ 000c48a2 a07c
.org 0xc48a4
	cmp r0, #0	@ 000c48a4 0028
.org 0xc48a6
	beq.n 0xc48ac	@ 000c48a6 01d0
.org 0xc48a8
	subs r0, #1	@ 000c48a8 0138
.org 0xc48aa
	strb r0, [r4, #18]	@ 000c48aa a074
.org 0xc48ac
	ldrb r1, [r4, #18]	@ 000c48ac a17c
.org 0xc48ae
	movs r0, #16	@ 000c48ae 1020
.org 0xc48b0
	subs r0, r0, r1	@ 000c48b0 401a
.org 0xc48b2
	lsls r1, r0, #3	@ 000c48b2 c100
.org 0xc48b4
	subs r1, r1, r0	@ 000c48b4 091a
.org 0xc48b6
	lsls r1, r1, #1	@ 000c48b6 4900
.org 0xc48b8
	adds r0, r4, #0	@ 000c48b8 201c
.org 0xc48ba
	adds r0, #80	@ 000c48ba 5030
.org 0xc48bc
	movs r2, #0	@ 000c48bc 0022
.org 0xc48be
	strh r1, [r0, #0]	@ 000c48be 0180
.org 0xc48c0
	ldrb r0, [r4, #18]	@ 000c48c0 a07c
.org 0xc48c2
	cmp r0, #0	@ 000c48c2 0028
.org 0xc48c4
	bne.n 0xc48ce	@ 000c48c4 03d1
.org 0xc48c6
	movs r0, #3	@ 000c48c6 0320
.org 0xc48c8
	strb r0, [r4, #13]	@ 000c48c8 6073
.org 0xc48ca
	strb r2, [r4, #14]	@ 000c48ca a273
.org 0xc48cc
	strb r2, [r4, #15]	@ 000c48cc e273
.org 0xc48ce
	add sp, #8	@ 000c48ce 02b0
.org 0xc48d0
	pop {r4, r5, r6, r7}	@ 000c48d0 f0bc

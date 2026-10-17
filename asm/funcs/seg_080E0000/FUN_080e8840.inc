@ FUN_080e8840  entry 0x080e8840  size 142
.thumb
.org 0xe8840
FUN_080e8840:
	push {r4, r5, r6, r7, lr}	@ 000e8840 f0b5
.org 0xe8842
	adds r7, r0, #0	@ 000e8842 071c
.org 0xe8844
	lsls r1, r1, #24	@ 000e8844 0906
.org 0xe8846
	lsrs r5, r1, #24	@ 000e8846 0d0e
.org 0xe8848
	lsls r2, r2, #16	@ 000e8848 1204
.org 0xe884a
	lsrs r6, r2, #16	@ 000e884a 160c
.org 0xe884c
	ldr r0, [pc, #128]	@ 000e884c 2048
.org 0xe884e
	ldr r0, [r0, #0]	@ 000e884e 0068
.org 0xe8850
	bl 0x5500	@ 000e8850 1cf756fe
.org 0xe8854
	adds r4, r0, #0	@ 000e8854 041c
.org 0xe8856
	cmp r4, #0	@ 000e8856 002c
.org 0xe8858
	beq.n 0xe88c8	@ 000e8858 36d0
.org 0xe885a
	adds r1, r4, #0	@ 000e885a 211c
.org 0xe885c
	adds r1, #37	@ 000e885c 2531
.org 0xe885e
	movs r3, #0	@ 000e885e 0023
.org 0xe8860
	movs r0, #1	@ 000e8860 0120
.org 0xe8862
	strb r0, [r1, #0]	@ 000e8862 0870
.org 0xe8864
	ldr r0, [pc, #108]	@ 000e8864 1b48
.org 0xe8866
	movs r1, #89	@ 000e8866 5921
.org 0xe8868
	strb r1, [r4, #9]	@ 000e8868 6172
.org 0xe886a
	movs r1, #178	@ 000e886a b221
.org 0xe886c
	lsls r1, r1, #1	@ 000e886c 4900
.org 0xe886e
	adds r0, r0, r1	@ 000e886e 4018
.org 0xe8870
	ldr r0, [r0, #0]	@ 000e8870 0068
.org 0xe8872
	ldr r0, [r0, #0]	@ 000e8872 0068
.org 0xe8874
	str r0, [r4, #20]	@ 000e8874 6061
.org 0xe8876
	movs r2, #0	@ 000e8876 0022
.org 0xe8878
	strh r3, [r4, #32]	@ 000e8878 2384
.org 0xe887a
	adds r0, r4, #0	@ 000e887a 201c
.org 0xe887c
	adds r0, #34	@ 000e887c 2230
.org 0xe887e
	strb r2, [r0, #0]	@ 000e887e 0270
.org 0xe8880
	ldr r0, [r7, #0]	@ 000e8880 3868
.org 0xe8882
	ldr r1, [r7, #4]	@ 000e8882 7968
.org 0xe8884
	str r0, [r4, #84]	@ 000e8884 6065
.org 0xe8886
	str r1, [r4, #88]	@ 000e8886 a165
.org 0xe8888
	strb r2, [r4, #16]	@ 000e8888 2274
.org 0xe888a
	strb r2, [r4, #17]	@ 000e888a 6274
.org 0xe888c
	ldr r2, [pc, #72]	@ 000e888c 124a
.org 0xe888e
	adds r0, r5, #0	@ 000e888e 281c
.org 0xe8890
	adds r0, #64	@ 000e8890 4030
.org 0xe8892
	lsls r0, r0, #24	@ 000e8892 0006
.org 0xe8894
	lsrs r0, r0, #23	@ 000e8894 c00d
.org 0xe8896
	adds r0, r0, r2	@ 000e8896 8018
.org 0xe8898
	movs r1, #0	@ 000e8898 0021
.org 0xe889a
	ldrsh r0, [r0, r1]	@ 000e889a 405e
.org 0xe889c
	adds r1, r0, #0	@ 000e889c 011c
.org 0xe889e
	muls r1, r6	@ 000e889e 7143
.org 0xe88a0
	asrs r1, r1, #8	@ 000e88a0 0912
.org 0xe88a2
	str r1, [r4, #92]	@ 000e88a2 e165
.org 0xe88a4
	lsls r0, r5, #1	@ 000e88a4 6800
.org 0xe88a6
	adds r0, r0, r2	@ 000e88a6 8018
.org 0xe88a8
	movs r2, #0	@ 000e88a8 0022
.org 0xe88aa
	ldrsh r0, [r0, r2]	@ 000e88aa 805e
.org 0xe88ac
	muls r0, r6	@ 000e88ac 7043
.org 0xe88ae
	asrs r2, r0, #8	@ 000e88ae 0212
.org 0xe88b0
	str r2, [r4, #96]	@ 000e88b0 2266
.org 0xe88b2
	cmp r1, #0	@ 000e88b2 0029
.org 0xe88b4
	bge.n 0xe88b8	@ 000e88b4 00da
.org 0xe88b6
	adds r1, #15	@ 000e88b6 0f31
.org 0xe88b8
	asrs r0, r1, #4	@ 000e88b8 0811
.org 0xe88ba
	str r0, [r4, #100]	@ 000e88ba 6066
.org 0xe88bc
	adds r0, r2, #0	@ 000e88bc 101c
.org 0xe88be
	cmp r0, #0	@ 000e88be 0028
.org 0xe88c0
	bge.n 0xe88c4	@ 000e88c0 00da
.org 0xe88c2
	adds r0, #15	@ 000e88c2 0f30
.org 0xe88c4
	asrs r0, r0, #4	@ 000e88c4 0011
.org 0xe88c6
	str r0, [r4, #104]	@ 000e88c6 a066
.org 0xe88c8
	pop {r4, r5, r6, r7}	@ 000e88c8 f0bc
.org 0xe88ca
	pop {r0}	@ 000e88ca 01bc
.org 0xe88cc
	bx r0	@ 000e88cc 0047

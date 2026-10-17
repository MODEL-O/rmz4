@ FUN_08059844  entry 0x08059844  size 160
.thumb
.org 0x59844
FUN_08059844:
	push {r4, r5, r6, r7, lr}	@ 00059844 f0b5
.org 0x59846
	mov r7, sl	@ 00059846 5746
.org 0x59848
	mov r6, r9	@ 00059848 4e46
.org 0x5984a
	mov r5, r8	@ 0005984a 4546
.org 0x5984c
	push {r5, r6, r7}	@ 0005984c e0b4
.org 0x5984e
	sub sp, #24	@ 0005984e 86b0
.org 0x59850
	mov r8, r0	@ 00059850 8046
.org 0x59852
	mov r1, sp	@ 00059852 6946
.org 0x59854
	ldr r0, [pc, #124]	@ 00059854 1f48
.org 0x59856
	ldmia r0!, {r2, r3, r4}	@ 00059856 1cc8
.org 0x59858
	stmia r1!, {r2, r3, r4}	@ 00059858 1cc1
.org 0x5985a
	ldr r0, [r0, #0]	@ 0005985a 0068
.org 0x5985c
	str r0, [r1, #0]	@ 0005985c 0860
.org 0x5985e
	add r4, sp, #16	@ 0005985e 04ac
.org 0x59860
	ldr r1, [pc, #116]	@ 00059860 1d49
.org 0x59862
	adds r0, r4, #0	@ 00059862 201c
.org 0x59864
	movs r2, #4	@ 00059864 0422
.org 0x59866
	bl 0x129258	@ 00059866 cff0f7fc
.org 0x5986a
	ldr r0, [pc, #112]	@ 0005986a 1c48
.org 0x5986c
	ldr r2, [r0, #0]	@ 0005986c 0268
.org 0x5986e
	ldrb r0, [r2, #10]	@ 0005986e 907a
.org 0x59870
	lsrs r0, r0, #4	@ 00059870 0009
.org 0x59872
	movs r1, #1	@ 00059872 0121
.org 0x59874
	ands r0, r1	@ 00059874 0840
.org 0x59876
	ldr r7, [r2, #84]	@ 00059876 576d
.org 0x59878
	movs r6, #0	@ 00059878 0026
.org 0x5987a
	mov r9, r4	@ 0005987a a146
.org 0x5987c
	lsls r0, r0, #1	@ 0005987c 4000
.org 0x5987e
	subs r1, r0, #1	@ 0005987e 411e
.org 0x59880
	mov sl, r1	@ 00059880 8a46
.org 0x59882
	str r0, [sp, #20]	@ 00059882 0590
.org 0x59884
	mov r5, sp	@ 00059884 6d46
.org 0x59886
	ldr r0, [r5, #0]	@ 00059886 2868
.org 0x59888
	mov r2, sl	@ 00059888 5246
.org 0x5988a
	muls r2, r0	@ 0005988a 4243
.org 0x5988c
	adds r0, r2, #0	@ 0005988c 101c
.org 0x5988e
	adds r4, r7, r0	@ 0005988e 3c18
.org 0x59890
	mov r0, r8	@ 00059890 4046
.org 0x59892
	bl 0x59be8	@ 00059892 00f0a9f9
.org 0x59896
	cmp r4, r0	@ 00059896 8442
.org 0x59898
	blt.n 0x598a4	@ 00059898 04db
.org 0x5989a
	mov r0, r8	@ 0005989a 4046
.org 0x5989c
	bl 0x59bf4	@ 0005989c 00f0aaf9
.org 0x598a0
	cmp r4, r0	@ 000598a0 8442
.org 0x598a2
	ble.n 0x598ac	@ 000598a2 03dd
.org 0x598a4
	mov r3, r9	@ 000598a4 4b46
.org 0x598a6
	adds r1, r3, r6	@ 000598a6 9919
.org 0x598a8
	movs r0, #0	@ 000598a8 0020
.org 0x598aa
	strb r0, [r1, #0]	@ 000598aa 0870
.org 0x598ac
	adds r5, #4	@ 000598ac 0435
.org 0x598ae
	adds r6, #1	@ 000598ae 0136
.org 0x598b0
	cmp r6, #3	@ 000598b0 032e
.org 0x598b2
	ble.n 0x59886	@ 000598b2 e8dd
.org 0x598b4
	mov r0, r9	@ 000598b4 4846
.org 0x598b6
	movs r1, #4	@ 000598b6 0421
.org 0x598b8
	bl 0x59b68	@ 000598b8 00f056f9
.org 0x598bc
	cmp r0, #0	@ 000598bc 0028
.org 0x598be
	blt.n 0x598e0	@ 000598be 0fdb
.org 0x598c0
	lsls r0, r0, #2	@ 000598c0 8000
.org 0x598c2
	add r0, sp	@ 000598c2 6844
.org 0x598c4
	ldr r1, [sp, #20]	@ 000598c4 0599
.org 0x598c6
	subs r1, #1	@ 000598c6 0139
.org 0x598c8
	ldr r0, [r0, #0]	@ 000598c8 0068
.org 0x598ca
	muls r0, r1	@ 000598ca 4843
.org 0x598cc
	adds r4, r7, r0	@ 000598cc 3c18
.org 0x598ce
	adds r0, r4, #0	@ 000598ce 201c
.org 0x598d0
	b.n 0x598e2	@ 000598d0 07e0
.org 0x598d2
	.byte 0x00	@ 000598d2 data
.org 0x598d3
	.byte 0x00	@ 000598d3 data
.org 0x598d4
	.byte 0x88,0x96,0x12,0x08	@ 000598d4 data
.org 0x598d8
	.byte 0x98,0x96,0x12,0x08	@ 000598d8 data
.org 0x598dc
	.byte 0xf0,0xdb,0x02,0x02	@ 000598dc data
.org 0x598e0
	adds r0, r7, #0	@ 000598e0 381c
.org 0x598e2
	add sp, #24	@ 000598e2 06b0

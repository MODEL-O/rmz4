@ FUN_0805d7a8  entry 0x0805d7a8  size 374
.thumb
.org 0x5d7a8
FUN_0805d7a8:
	push {r4, r5, r6, r7, lr}	@ 0005d7a8 f0b5
.org 0x5d7aa
	mov r7, sl	@ 0005d7aa 5746
.org 0x5d7ac
	mov r6, r9	@ 0005d7ac 4e46
.org 0x5d7ae
	mov r5, r8	@ 0005d7ae 4546
.org 0x5d7b0
	push {r5, r6, r7}	@ 0005d7b0 e0b4
.org 0x5d7b2
	sub sp, #20	@ 0005d7b2 85b0
.org 0x5d7b4
	adds r6, r0, #0	@ 0005d7b4 061c
.org 0x5d7b6
	ldr r1, [pc, #360]	@ 0005d7b6 5a49
.org 0x5d7b8
	mov r0, sp	@ 0005d7b8 6846
.org 0x5d7ba
	movs r2, #6	@ 0005d7ba 0622
.org 0x5d7bc
	bl 0x129258	@ 0005d7bc cbf04cfd
.org 0x5d7c0
	add r5, sp, #8	@ 0005d7c0 02ad
.org 0x5d7c2
	ldr r1, [pc, #352]	@ 0005d7c2 5849
.org 0x5d7c4
	adds r0, r5, #0	@ 0005d7c4 281c
.org 0x5d7c6
	movs r2, #6	@ 0005d7c6 0622
.org 0x5d7c8
	bl 0x129258	@ 0005d7c8 cbf046fd
.org 0x5d7cc
	add r4, sp, #16	@ 0005d7cc 04ac
.org 0x5d7ce
	adds r0, r4, #0	@ 0005d7ce 201c
.org 0x5d7d0
	movs r1, #0	@ 0005d7d0 0021
.org 0x5d7d2
	movs r2, #3	@ 0005d7d2 0322
.org 0x5d7d4
	bl 0x1292b8	@ 0005d7d4 cbf070fd
.org 0x5d7d8
	ldrb r0, [r6, #16]	@ 0005d7d8 307c
.org 0x5d7da
	mov r8, r0	@ 0005d7da 8046
.org 0x5d7dc
	ldrb r0, [r6, #15]	@ 0005d7dc f07b
.org 0x5d7de
	mov r9, r5	@ 0005d7de a946
.org 0x5d7e0
	mov sl, r4	@ 0005d7e0 a246
.org 0x5d7e2
	cmp r0, #0	@ 0005d7e2 0028
.org 0x5d7e4
	bne.n 0x5d86e	@ 0005d7e4 43d1
.org 0x5d7e6
	adds r1, r6, #0	@ 0005d7e6 311c
.org 0x5d7e8
	adds r1, #37	@ 0005d7e8 2531
.org 0x5d7ea
	movs r0, #24	@ 0005d7ea 1820
.org 0x5d7ec
	strb r0, [r1, #0]	@ 0005d7ec 0870
.org 0x5d7ee
	mov r1, r8	@ 0005d7ee 4146
.org 0x5d7f0
	lsls r0, r1, #1	@ 0005d7f0 4800
.org 0x5d7f2
	add r0, sp	@ 0005d7f2 6844
.org 0x5d7f4
	ldrb r1, [r0, #0]	@ 0005d7f4 0178
.org 0x5d7f6
	adds r0, r6, #0	@ 0005d7f6 301c
.org 0x5d7f8
	bl 0x5ee6c	@ 0005d7f8 01f038fb
.org 0x5d7fc
	adds r0, r6, #0	@ 0005d7fc 301c
.org 0x5d7fe
	adds r0, #212	@ 0005d7fe d430
.org 0x5d800
	ldr r0, [r0, #0]	@ 0005d800 0068
.org 0x5d802
	str r0, [r6, #100]	@ 0005d802 7066
.org 0x5d804
	adds r0, r6, #0	@ 0005d804 301c
.org 0x5d806
	adds r0, #180	@ 0005d806 b430
.org 0x5d808
	ldr r0, [r0, #0]	@ 0005d808 0068
.org 0x5d80a
	ldr r2, [pc, #284]	@ 0005d80a 474a
.org 0x5d80c
	adds r0, r0, r2	@ 0005d80c 8018
.org 0x5d80e
	str r0, [r6, #104]	@ 0005d80e b066
.org 0x5d810
	adds r0, r6, #0	@ 0005d810 301c
.org 0x5d812
	adds r0, #84	@ 0005d812 5430
.org 0x5d814
	adds r1, r6, #0	@ 0005d814 311c
.org 0x5d816
	adds r1, #100	@ 0005d816 6431
.org 0x5d818
	bl 0x10d3ac	@ 0005d818 aff0c8fd
.org 0x5d81c
	adds r5, r0, #0	@ 0005d81c 051c
.org 0x5d81e
	ldr r1, [pc, #268]	@ 0005d81e 4349
.org 0x5d820
	adds r0, #64	@ 0005d820 4030
.org 0x5d822
	lsls r0, r0, #24	@ 0005d822 0006
.org 0x5d824
	lsrs r0, r0, #23	@ 0005d824 c00d
.org 0x5d826
	adds r0, r0, r1	@ 0005d826 4018
.org 0x5d828
	movs r2, #0	@ 0005d828 0022
.org 0x5d82a
	ldrsh r0, [r0, r2]	@ 0005d82a 805e
.org 0x5d82c
	lsls r4, r0, #1	@ 0005d82c 4400
.org 0x5d82e
	adds r4, r4, r0	@ 0005d82e 2418
.org 0x5d830
	str r4, [r6, #92]	@ 0005d830 f465
.org 0x5d832
	lsls r0, r5, #24	@ 0005d832 2806
.org 0x5d834
	lsrs r0, r0, #23	@ 0005d834 c00d
.org 0x5d836
	adds r0, r0, r1	@ 0005d836 4018
.org 0x5d838
	movs r2, #0	@ 0005d838 0022
.org 0x5d83a
	ldrsh r1, [r0, r2]	@ 0005d83a 815e
.org 0x5d83c
	lsls r0, r1, #1	@ 0005d83c 4800
.org 0x5d83e
	adds r0, r0, r1	@ 0005d83e 4018
.org 0x5d840
	str r0, [r6, #96]	@ 0005d840 3066
.org 0x5d842
	ldr r1, [r6, #100]	@ 0005d842 716e
.org 0x5d844
	ldr r0, [r6, #84]	@ 0005d844 706d
.org 0x5d846
	subs r5, r1, r0	@ 0005d846 0d1a
.org 0x5d848
	adds r0, r5, #0	@ 0005d848 281c
.org 0x5d84a
	adds r1, r4, #0	@ 0005d84a 211c
.org 0x5d84c
	bl 0x128fb8	@ 0005d84c cbf0b4fb
.org 0x5d850
	adds r7, r0, #0	@ 0005d850 071c
.org 0x5d852
	strb r7, [r6, #18]	@ 0005d852 b774
.org 0x5d854
	adds r0, r5, #0	@ 0005d854 281c
.org 0x5d856
	adds r1, r4, #0	@ 0005d856 211c
.org 0x5d858
	bl 0x129050	@ 0005d858 cbf0fafb
.org 0x5d85c
	cmp r0, #0	@ 0005d85c 0028
.org 0x5d85e
	beq.n 0x5d864	@ 0005d85e 01d0
.org 0x5d860
	adds r0, r7, #1	@ 0005d860 781c
.org 0x5d862
	strb r0, [r6, #18]	@ 0005d862 b074
.org 0x5d864
	movs r0, #1	@ 0005d864 0120
.org 0x5d866
	strb r0, [r6, #19]	@ 0005d866 f074
.org 0x5d868
	ldrb r0, [r6, #15]	@ 0005d868 f07b
.org 0x5d86a
	adds r0, #1	@ 0005d86a 0130
.org 0x5d86c
	strb r0, [r6, #15]	@ 0005d86c f073
.org 0x5d86e
	ldrb r0, [r6, #19]	@ 0005d86e f07c
.org 0x5d870
	cmp r0, #0	@ 0005d870 0028
.org 0x5d872
	beq.n 0x5d890	@ 0005d872 0dd0
.org 0x5d874
	adds r0, r6, #0	@ 0005d874 301c
.org 0x5d876
	adds r0, #115	@ 0005d876 7330
.org 0x5d878
	ldrb r0, [r0, #0]	@ 0005d878 0078
.org 0x5d87a
	cmp r0, #3	@ 0005d87a 0328
.org 0x5d87c
	bne.n 0x5d890	@ 0005d87c 08d1
.org 0x5d87e
	mov r1, r8	@ 0005d87e 4146
.org 0x5d880
	lsls r0, r1, #1	@ 0005d880 4800
.org 0x5d882
	add r0, r9	@ 0005d882 4844
.org 0x5d884
	ldrb r1, [r0, #0]	@ 0005d884 0178
.org 0x5d886
	adds r0, r6, #0	@ 0005d886 301c
.org 0x5d888
	bl 0x5ee6c	@ 0005d888 01f0f0fa
.org 0x5d88c
	movs r0, #0	@ 0005d88c 0020
.org 0x5d88e
	strb r0, [r6, #19]	@ 0005d88e f074
.org 0x5d890
	adds r0, r6, #0	@ 0005d890 301c
.org 0x5d892
	bl 0x1cff0	@ 0005d892 bff7adfb
.org 0x5d896
	adds r0, r6, #0	@ 0005d896 301c
.org 0x5d898
	adds r0, #116	@ 0005d898 7430
.org 0x5d89a
	ldr r4, [pc, #148]	@ 0005d89a 254c
.org 0x5d89c
	ldr r3, [pc, #148]	@ 0005d89c 254b
.org 0x5d89e
	adds r1, r6, #0	@ 0005d89e 311c
.org 0x5d8a0
	adds r1, #184	@ 0005d8a0 b831
.org 0x5d8a2
	ldrb r2, [r1, #0]	@ 0005d8a2 0a78
.org 0x5d8a4
	lsls r1, r2, #1	@ 0005d8a4 5100
.org 0x5d8a6
	adds r1, r1, r3	@ 0005d8a6 c918
.org 0x5d8a8
	ldrh r1, [r1, #0]	@ 0005d8a8 0988
.org 0x5d8aa
	lsls r1, r1, #2	@ 0005d8aa 8900
.org 0x5d8ac
	adds r1, r1, r4	@ 0005d8ac 0919
.org 0x5d8ae
	adds r3, r6, #0	@ 0005d8ae 331c
.org 0x5d8b0
	adds r3, #113	@ 0005d8b0 7133
.org 0x5d8b2
	movs r4, #0	@ 0005d8b2 0024
.org 0x5d8b4
	ldrsb r4, [r3, r4]	@ 0005d8b4 1c57
.org 0x5d8b6
	ldr r1, [r1, #0]	@ 0005d8b6 0968
.org 0x5d8b8
	lsls r3, r4, #2	@ 0005d8b8 a300
.org 0x5d8ba
	adds r3, r3, r1	@ 0005d8ba 5b18
.org 0x5d8bc
	ldr r1, [pc, #120]	@ 0005d8bc 1e49
.org 0x5d8be
	lsls r2, r2, #2	@ 0005d8be 9200
.org 0x5d8c0
	adds r2, r2, r1	@ 0005d8c0 5218
.org 0x5d8c2
	ldr r1, [r2, #0]	@ 0005d8c2 1168
.org 0x5d8c4
	adds r1, r1, r4	@ 0005d8c4 0919
.org 0x5d8c6
	ldrb r1, [r1, #0]	@ 0005d8c6 0978
.org 0x5d8c8
	lsls r2, r1, #1	@ 0005d8c8 4a00
.org 0x5d8ca
	adds r2, r2, r1	@ 0005d8ca 5218
.org 0x5d8cc
	lsls r2, r2, #3	@ 0005d8cc d200
.org 0x5d8ce
	ldr r1, [r3, #0]	@ 0005d8ce 1968
.org 0x5d8d0
	adds r1, r1, r2	@ 0005d8d0 8918
.org 0x5d8d2
	bl 0x5784	@ 0005d8d2 a7f757ff
.org 0x5d8d6
	ldrb r0, [r6, #18]	@ 0005d8d6 b07c
.org 0x5d8d8
	cmp r0, #0	@ 0005d8d8 0028
.org 0x5d8da
	beq.n 0x5d8e0	@ 0005d8da 01d0
.org 0x5d8dc
	subs r0, #1	@ 0005d8dc 0138
.org 0x5d8de
	strb r0, [r6, #18]	@ 0005d8de b074
.org 0x5d8e0
	ldr r0, [r6, #92]	@ 0005d8e0 f06d
.org 0x5d8e2
	negs r0, r0	@ 0005d8e2 4042
.org 0x5d8e4
	ldrb r1, [r6, #18]	@ 0005d8e4 b17c
.org 0x5d8e6
	muls r1, r0	@ 0005d8e6 4143
.org 0x5d8e8
	ldr r0, [r6, #100]	@ 0005d8e8 706e
.org 0x5d8ea
	adds r0, r0, r1	@ 0005d8ea 4018
.org 0x5d8ec
	str r0, [r6, #84]	@ 0005d8ec 7065
.org 0x5d8ee
	ldr r0, [r6, #96]	@ 0005d8ee 306e
.org 0x5d8f0
	negs r0, r0	@ 0005d8f0 4042
.org 0x5d8f2
	ldrb r1, [r6, #18]	@ 0005d8f2 b17c
.org 0x5d8f4
	muls r1, r0	@ 0005d8f4 4143
.org 0x5d8f6
	ldr r0, [r6, #104]	@ 0005d8f6 b06e
.org 0x5d8f8
	adds r0, r0, r1	@ 0005d8f8 4018
.org 0x5d8fa
	str r0, [r6, #88]	@ 0005d8fa b065
.org 0x5d8fc
	ldrb r1, [r6, #18]	@ 0005d8fc b17c
.org 0x5d8fe
	cmp r1, #0	@ 0005d8fe 0029
.org 0x5d900
	bne.n 0x5d90e	@ 0005d900 05d1
.org 0x5d902
	mov r0, sl	@ 0005d902 5046
.org 0x5d904
	add r0, r8	@ 0005d904 4044
.org 0x5d906
	ldrb r0, [r0, #0]	@ 0005d906 0078
.org 0x5d908
	strb r0, [r6, #13]	@ 0005d908 7073
.org 0x5d90a
	strb r1, [r6, #14]	@ 0005d90a b173
.org 0x5d90c
	strb r1, [r6, #15]	@ 0005d90c f173
.org 0x5d90e
	add sp, #20	@ 0005d90e 05b0
.org 0x5d910
	pop {r3, r4, r5}	@ 0005d910 38bc
.org 0x5d912
	mov r8, r3	@ 0005d912 9846
.org 0x5d914
	mov r9, r4	@ 0005d914 a146
.org 0x5d916
	mov sl, r5	@ 0005d916 aa46
.org 0x5d918
	pop {r4, r5, r6, r7}	@ 0005d918 f0bc
.org 0x5d91a
	pop {r0}	@ 0005d91a 01bc
.org 0x5d91c
	bx r0	@ 0005d91c 0047

@ FUN_080e0824  entry 0x080e0824  size 142
.thumb
.org 0xe0824
FUN_080e0824:
	push {r4, r5, r6, r7, lr}	@ 000e0824 f0b5
.org 0xe0826
	mov r7, sl	@ 000e0826 5746
.org 0xe0828
	mov r6, r9	@ 000e0828 4e46
.org 0xe082a
	mov r5, r8	@ 000e082a 4546
.org 0xe082c
	push {r5, r6, r7}	@ 000e082c e0b4
.org 0xe082e
	sub sp, #24	@ 000e082e 86b0
.org 0xe0830
	str r0, [sp, #20]	@ 000e0830 0590
.org 0xe0832
	ldr r1, [pc, #128]	@ 000e0832 2049
.org 0xe0834
	mov r0, sp	@ 000e0834 6846
.org 0xe0836
	movs r2, #8	@ 000e0836 0822
.org 0xe0838
	bl 0x129258	@ 000e0838 48f00efd
.org 0xe083c
	ldr r1, [sp, #20]	@ 000e083c 0599
.org 0xe083e
	ldrb r0, [r1, #10]	@ 000e083e 887a
.org 0xe0840
	lsrs r0, r0, #4	@ 000e0840 0009
.org 0xe0842
	movs r1, #1	@ 000e0842 0121
.org 0xe0844
	ands r0, r1	@ 000e0844 0840
.org 0xe0846
	mov r2, sp	@ 000e0846 6a46
.org 0xe0848
	adds r2, #2	@ 000e0848 0232
.org 0xe084a
	lsls r1, r0, #1	@ 000e084a 4100
.org 0xe084c
	subs r1, #1	@ 000e084c 0139
.org 0xe084e
	str r1, [sp, #16]	@ 000e084e 0491
.org 0xe0850
	add r5, sp, #8	@ 000e0850 02ad
.org 0xe0852
	movs r7, #0	@ 000e0852 0027
.org 0xe0854
	mov r9, r7	@ 000e0854 b946
.org 0xe0856
	mov r8, r2	@ 000e0856 9046
.org 0xe0858
	mov r4, sp	@ 000e0858 6c46
.org 0xe085a
	lsls r1, r0, #4	@ 000e085a 0101
.org 0xe085c
	orrs r0, r1	@ 000e085c 0843
.org 0xe085e
	lsls r0, r0, #24	@ 000e085e 0006
.org 0xe0860
	mov sl, r0	@ 000e0860 8246
.org 0xe0862
	movs r6, #1	@ 000e0862 0126
.org 0xe0864
	movs r1, #0	@ 000e0864 0021
.org 0xe0866
	ldrsh r0, [r4, r1]	@ 000e0866 605e
.org 0xe0868
	ldr r2, [sp, #16]	@ 000e0868 049a
.org 0xe086a
	adds r1, r0, #0	@ 000e086a 011c
.org 0xe086c
	muls r1, r2	@ 000e086c 5143
.org 0xe086e
	ldr r7, [sp, #20]	@ 000e086e 059f
.org 0xe0870
	ldr r0, [r7, #84]	@ 000e0870 786d
.org 0xe0872
	adds r0, r0, r1	@ 000e0872 4018
.org 0xe0874
	str r0, [sp, #8]	@ 000e0874 0290
.org 0xe0876
	mov r0, r8	@ 000e0876 4046
.org 0xe0878
	movs r2, #0	@ 000e0878 0022
.org 0xe087a
	ldrsh r1, [r0, r2]	@ 000e087a 815e
.org 0xe087c
	ldr r0, [r7, #88]	@ 000e087c b86d
.org 0xe087e
	adds r0, r0, r1	@ 000e087e 4018
.org 0xe0880
	str r0, [r5, #4]	@ 000e0880 6860
.org 0xe0882
	ldr r1, [pc, #52]	@ 000e0882 0d49
.org 0xe0884
	add r1, r9	@ 000e0884 4944
.org 0xe0886
	adds r0, r5, #0	@ 000e0886 281c
.org 0xe0888
	movs r2, #0	@ 000e0888 0022
.org 0xe088a
	mov r7, sl	@ 000e088a 5746
.org 0xe088c
	lsrs r3, r7, #24	@ 000e088c 3b0e
.org 0xe088e
	bl 0xd4c8c	@ 000e088e f4f7fdf9
.org 0xe0892
	movs r0, #28	@ 000e0892 1c20
.org 0xe0894
	add r9, r0	@ 000e0894 8144
.org 0xe0896
	movs r1, #4	@ 000e0896 0421
.org 0xe0898
	add r8, r1	@ 000e0898 8844
.org 0xe089a
	adds r4, #4	@ 000e089a 0434
.org 0xe089c
	subs r6, #1	@ 000e089c 013e
.org 0xe089e
	cmp r6, #0	@ 000e089e 002e
.org 0xe08a0
	bge.n 0xe0864	@ 000e08a0 e0da
.org 0xe08a2
	add sp, #24	@ 000e08a2 06b0
.org 0xe08a4
	pop {r3, r4, r5}	@ 000e08a4 38bc
.org 0xe08a6
	mov r8, r3	@ 000e08a6 9846
.org 0xe08a8
	mov r9, r4	@ 000e08a8 a146
.org 0xe08aa
	mov sl, r5	@ 000e08aa aa46
.org 0xe08ac
	pop {r4, r5, r6, r7}	@ 000e08ac f0bc
.org 0xe08ae
	pop {r0}	@ 000e08ae 01bc
.org 0xe08b0
	bx r0	@ 000e08b0 0047

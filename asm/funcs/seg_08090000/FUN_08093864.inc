@ FUN_08093864  entry 0x08093864  size 212
.thumb
.org 0x93864
FUN_08093864:
	push {r4, r5, r6, r7, lr}	@ 00093864 f0b5
.org 0x93866
	mov r7, r8	@ 00093866 4746
.org 0x93868
	push {r7}	@ 00093868 80b4
.org 0x9386a
	sub sp, #36	@ 0009386a 89b0
.org 0x9386c
	adds r5, r0, #0	@ 0009386c 051c
.org 0x9386e
	mov r1, sp	@ 0009386e 6946
.org 0x93870
	ldr r0, [pc, #196]	@ 00093870 3148
.org 0x93872
	ldmia r0!, {r2, r3, r4}	@ 00093872 1cc8
.org 0x93874
	stmia r1!, {r2, r3, r4}	@ 00093874 1cc1
.org 0x93876
	add r7, sp, #12	@ 00093876 03af
.org 0x93878
	ldr r1, [pc, #192]	@ 00093878 3049
.org 0x9387a
	adds r0, r7, #0	@ 0009387a 381c
.org 0x9387c
	movs r2, #12	@ 0009387c 0c22
.org 0x9387e
	bl 0x129258	@ 0009387e 95f0ebfc
.org 0x93882
	add r0, sp, #24	@ 00093882 06a8
.org 0x93884
	mov r8, r0	@ 00093884 8046
.org 0x93886
	ldr r1, [pc, #184]	@ 00093886 2e49
.org 0x93888
	movs r2, #3	@ 00093888 0322
.org 0x9388a
	bl 0x129258	@ 0009388a 95f0e5fc
.org 0x9388e
	ldrb r0, [r5, #10]	@ 0009388e a87a
.org 0x93890
	lsrs r6, r0, #4	@ 00093890 0609
.org 0x93892
	movs r0, #1	@ 00093892 0120
.org 0x93894
	ands r6, r0	@ 00093894 0640
.org 0x93896
	ldrb r0, [r5, #15]	@ 00093896 e87b
.org 0x93898
	cmp r0, #0	@ 00093898 0028
.org 0x9389a
	bne.n 0x93900	@ 0009389a 31d1
.org 0x9389c
	adds r0, r5, #0	@ 0009389c 281c
.org 0x9389e
	adds r0, #184	@ 0009389e b830
.org 0x938a0
	ldrb r2, [r0, #0]	@ 000938a0 0278
.org 0x938a2
	lsls r4, r2, #2	@ 000938a2 9400
.org 0x938a4
	adds r0, r7, r4	@ 000938a4 3819
.org 0x938a6
	movs r3, #0	@ 000938a6 0023
.org 0x938a8
	ldrsh r1, [r0, r3]	@ 000938a8 c15e
.org 0x938aa
	lsls r3, r6, #1	@ 000938aa 7300
.org 0x938ac
	subs r0, r3, #1	@ 000938ac 581e
.org 0x938ae
	muls r1, r0	@ 000938ae 4143
.org 0x938b0
	ldr r0, [r5, #84]	@ 000938b0 686d
.org 0x938b2
	adds r0, r0, r1	@ 000938b2 4018
.org 0x938b4
	str r0, [sp, #28]	@ 000938b4 0790
.org 0x938b6
	mov r0, sp	@ 000938b6 6846
.org 0x938b8
	adds r0, #14	@ 000938b8 0e30
.org 0x938ba
	adds r0, r0, r4	@ 000938ba 0019
.org 0x938bc
	movs r1, #0	@ 000938bc 0021
.org 0x938be
	ldrsh r0, [r0, r1]	@ 000938be 405e
.org 0x938c0
	ldr r1, [r5, #88]	@ 000938c0 a96d
.org 0x938c2
	adds r1, r1, r0	@ 000938c2 0918
.org 0x938c4
	add r0, sp, #28	@ 000938c4 07a8
.org 0x938c6
	str r1, [r0, #4]	@ 000938c6 4160
.org 0x938c8
	add r2, r8	@ 000938c8 4244
.org 0x938ca
	ldrb r1, [r2, #0]	@ 000938ca 1178
.org 0x938cc
	movs r2, #160	@ 000938cc a022
.org 0x938ce
	lsls r2, r2, #1	@ 000938ce 5200
.org 0x938d0
	subs r2, r2, r1	@ 000938d0 521a
.org 0x938d2
	muls r2, r3	@ 000938d2 5a43
.org 0x938d4
	adds r1, r1, r2	@ 000938d4 8918
.org 0x938d6
	lsls r1, r1, #24	@ 000938d6 0906
.org 0x938d8
	lsrs r1, r1, #24	@ 000938d8 090e
.org 0x938da
	adds r2, r6, #0	@ 000938da 321c
.org 0x938dc
	bl 0xa552c	@ 000938dc 11f026fe
.org 0x938e0
	adds r0, r5, #0	@ 000938e0 281c
.org 0x938e2
	adds r0, #116	@ 000938e2 7430
.org 0x938e4
	ldr r1, [pc, #92]	@ 000938e4 1749
.org 0x938e6
	bl 0x5784	@ 000938e6 71f74dff
.org 0x938ea
	mov r2, sp	@ 000938ea 6a46
.org 0x938ec
	adds r0, r2, r4	@ 000938ec 1019
.org 0x938ee
	ldrh r1, [r0, #0]	@ 000938ee 0188
.org 0x938f0
	adds r0, r5, #0	@ 000938f0 281c
.org 0x938f2
	bl 0x1cf00	@ 000938f2 89f705fb
.org 0x938f6
	movs r0, #128	@ 000938f6 8020
.org 0x938f8
	strb r0, [r5, #18]	@ 000938f8 a874
.org 0x938fa
	ldrb r0, [r5, #15]	@ 000938fa e87b
.org 0x938fc
	adds r0, #1	@ 000938fc 0130
.org 0x938fe
	strb r0, [r5, #15]	@ 000938fe e873
.org 0x93900
	adds r0, r5, #0	@ 00093900 281c
.org 0x93902
	bl 0x1cff0	@ 00093902 89f775fb
.org 0x93906
	ldrb r0, [r5, #18]	@ 00093906 a87c
.org 0x93908
	cmp r0, #0	@ 00093908 0028
.org 0x9390a
	beq.n 0x93910	@ 0009390a 01d0
.org 0x9390c
	subs r0, #1	@ 0009390c 0138
.org 0x9390e
	strb r0, [r5, #18]	@ 0009390e a874
.org 0x93910
	adds r0, r5, #0	@ 00093910 281c
.org 0x93912
	bl 0x94a38	@ 00093912 01f091f8
.org 0x93916
	adds r0, r5, #0	@ 00093916 281c
.org 0x93918
	adds r0, #115	@ 00093918 7330
.org 0x9391a
	ldrb r1, [r0, #0]	@ 0009391a 0178
.org 0x9391c
	cmp r1, #3	@ 0009391c 0329
.org 0x9391e
	bne.n 0x9392c	@ 0009391e 05d1
.org 0x93920
	ldrb r0, [r5, #18]	@ 00093920 a87c
.org 0x93922
	cmp r0, #63	@ 00093922 3f28
.org 0x93924
	bhi.n 0x9392c	@ 00093924 02d8
.org 0x93926
	movs r0, #0	@ 00093926 0020
.org 0x93928
	strb r1, [r5, #14]	@ 00093928 a973
.org 0x9392a
	strb r0, [r5, #15]	@ 0009392a e873
.org 0x9392c
	add sp, #36	@ 0009392c 09b0
.org 0x9392e
	pop {r3}	@ 0009392e 08bc
.org 0x93930
	mov r8, r3	@ 00093930 9846
.org 0x93932
	pop {r4, r5, r6, r7}	@ 00093932 f0bc
.org 0x93934
	pop {r0}	@ 00093934 01bc
.org 0x93936
	bx r0	@ 00093936 0047

@ FUN_080d7864  entry 0x080d7864  size 118
.thumb
.org 0xd7864
FUN_080d7864:
	push {r4, r5, r6, r7, lr}	@ 000d7864 f0b5
.org 0xd7866
	mov r7, r8	@ 000d7866 4746
.org 0xd7868
	push {r7}	@ 000d7868 80b4
.org 0xd786a
	adds r6, r0, #0	@ 000d786a 061c
.org 0xd786c
	adds r4, r1, #0	@ 000d786c 0c1c
.org 0xd786e
	adds r5, r2, #0	@ 000d786e 151c
.org 0xd7870
	mov r8, r3	@ 000d7870 9846
.org 0xd7872
	ldr r0, [sp, #28]	@ 000d7872 0798
.org 0xd7874
	lsls r0, r0, #24	@ 000d7874 0006
.org 0xd7876
	lsrs r7, r0, #24	@ 000d7876 070e
.org 0xd7878
	ldr r0, [pc, #96]	@ 000d7878 1848
.org 0xd787a
	ldr r0, [r0, #0]	@ 000d787a 0068
.org 0xd787c
	bl 0x5500	@ 000d787c 2df740fe
.org 0xd7880
	adds r3, r0, #0	@ 000d7880 031c
.org 0xd7882
	cmp r3, #0	@ 000d7882 002b
.org 0xd7884
	beq.n 0xd78d0	@ 000d7884 24d0
.org 0xd7886
	adds r1, r3, #0	@ 000d7886 191c
.org 0xd7888
	adds r1, #37	@ 000d7888 2531
.org 0xd788a
	movs r2, #0	@ 000d788a 0022
.org 0xd788c
	movs r0, #1	@ 000d788c 0120
.org 0xd788e
	strb r0, [r1, #0]	@ 000d788e 0870
.org 0xd7890
	ldr r1, [pc, #76]	@ 000d7890 1349
.org 0xd7892
	movs r0, #23	@ 000d7892 1720
.org 0xd7894
	strb r0, [r3, #9]	@ 000d7894 5872
.org 0xd7896
	ldr r0, [r1, #92]	@ 000d7896 c86d
.org 0xd7898
	ldr r0, [r0, #0]	@ 000d7898 0068
.org 0xd789a
	str r0, [r3, #20]	@ 000d789a 5861
.org 0xd789c
	movs r1, #0	@ 000d789c 0021
.org 0xd789e
	strh r2, [r3, #32]	@ 000d789e 1a84
.org 0xd78a0
	adds r0, r3, #0	@ 000d78a0 181c
.org 0xd78a2
	adds r0, #34	@ 000d78a2 2230
.org 0xd78a4
	strb r1, [r0, #0]	@ 000d78a4 0170
.org 0xd78a6
	movs r0, #4	@ 000d78a6 0420
.org 0xd78a8
	strb r0, [r3, #16]	@ 000d78a8 1874
.org 0xd78aa
	str r6, [r3, #40]	@ 000d78aa 9e62
.org 0xd78ac
	ldr r0, [sp, #24]	@ 000d78ac 0698
.org 0xd78ae
	str r0, [r3, #116]	@ 000d78ae 5867
.org 0xd78b0
	ldr r0, [r4, #0]	@ 000d78b0 2068
.org 0xd78b2
	str r0, [r3, #84]	@ 000d78b2 5865
.org 0xd78b4
	ldr r0, [r4, #4]	@ 000d78b4 6068
.org 0xd78b6
	str r0, [r3, #88]	@ 000d78b6 9865
.org 0xd78b8
	ldr r0, [r5, #0]	@ 000d78b8 2868
.org 0xd78ba
	str r0, [r3, #92]	@ 000d78ba d865
.org 0xd78bc
	ldr r0, [r5, #4]	@ 000d78bc 6868
.org 0xd78be
	str r0, [r3, #96]	@ 000d78be 1866
.org 0xd78c0
	mov r0, r8	@ 000d78c0 4046
.org 0xd78c2
	str r0, [r3, #104]	@ 000d78c2 9866
.org 0xd78c4
	strb r7, [r3, #18]	@ 000d78c4 9f74
.org 0xd78c6
	adds r0, r3, #0	@ 000d78c6 181c
.org 0xd78c8
	adds r0, #120	@ 000d78c8 7830
.org 0xd78ca
	strb r1, [r0, #0]	@ 000d78ca 0170
.org 0xd78cc
	adds r0, #1	@ 000d78cc 0130
.org 0xd78ce
	strb r1, [r0, #0]	@ 000d78ce 0170
.org 0xd78d0
	pop {r3}	@ 000d78d0 08bc
.org 0xd78d2
	mov r8, r3	@ 000d78d2 9846
.org 0xd78d4
	pop {r4, r5, r6, r7}	@ 000d78d4 f0bc
.org 0xd78d6
	pop {r0}	@ 000d78d6 01bc
.org 0xd78d8
	bx r0	@ 000d78d8 0047

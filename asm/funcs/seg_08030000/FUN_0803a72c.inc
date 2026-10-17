@ FUN_0803a72c  entry 0x0803a72c  size 152
.thumb
.org 0x3a72c
FUN_0803a72c:
	push {r4, r5, r6, r7, lr}	@ 0003a72c f0b5
.org 0x3a72e
	mov r7, r9	@ 0003a72e 4f46
.org 0x3a730
	mov r6, r8	@ 0003a730 4646
.org 0x3a732
	push {r6, r7}	@ 0003a732 c0b4
.org 0x3a734
	sub sp, #4	@ 0003a734 81b0
.org 0x3a736
	mov r8, r0	@ 0003a736 8046
.org 0x3a738
	adds r5, r1, #0	@ 0003a738 0d1c
.org 0x3a73a
	lsls r2, r2, #16	@ 0003a73a 1204
.org 0x3a73c
	lsrs r0, r2, #16	@ 0003a73c 100c
.org 0x3a73e
	mov r9, r0	@ 0003a73e 8146
.org 0x3a740
	asrs r4, r2, #16	@ 0003a740 1414
.org 0x3a742
	str r4, [sp, #0]	@ 0003a742 0094
.org 0x3a744
	mov r0, r8	@ 0003a744 4046
.org 0x3a746
	movs r1, #1	@ 0003a746 0121
.org 0x3a748
	adds r2, r5, #0	@ 0003a748 2a1c
.org 0x3a74a
	movs r3, #236	@ 0003a74a ec23
.org 0x3a74c
	bl 0x5440	@ 0003a74c caf778fe
.org 0x3a750
	movs r3, #0	@ 0003a750 0023
.org 0x3a752
	cmp r3, r4	@ 0003a752 a342
.org 0x3a754
	bge.n 0x3a776	@ 0003a754 0fda
.org 0x3a756
	movs r7, #236	@ 0003a756 ec27
.org 0x3a758
	ldr r6, [pc, #104]	@ 0003a758 1a4e
.org 0x3a75a
	lsls r0, r3, #16	@ 0003a75a 1804
.org 0x3a75c
	asrs r0, r0, #16	@ 0003a75c 0014
.org 0x3a75e
	adds r2, r0, #0	@ 0003a75e 021c
.org 0x3a760
	muls r2, r7	@ 0003a760 7a43
.org 0x3a762
	adds r2, r2, r5	@ 0003a762 5219
.org 0x3a764
	ldrb r1, [r6, #0]	@ 0003a764 3178
.org 0x3a766
	adds r1, r1, r3	@ 0003a766 c918
.org 0x3a768
	strb r1, [r2, #28]	@ 0003a768 1177
.org 0x3a76a
	adds r0, #1	@ 0003a76a 0130
.org 0x3a76c
	lsls r0, r0, #16	@ 0003a76c 0004
.org 0x3a76e
	lsrs r3, r0, #16	@ 0003a76e 030c
.org 0x3a770
	asrs r0, r0, #16	@ 0003a770 0014
.org 0x3a772
	cmp r0, r4	@ 0003a772 a042
.org 0x3a774
	blt.n 0x3a75a	@ 0003a774 f1db
.org 0x3a776
	ldr r0, [pc, #76]	@ 0003a776 1348
.org 0x3a778
	ldrb r1, [r0, #0]	@ 0003a778 0178
.org 0x3a77a
	add r1, r9	@ 0003a77a 4944
.org 0x3a77c
	strb r1, [r0, #0]	@ 0003a77c 0170
.org 0x3a77e
	ldr r0, [pc, #72]	@ 0003a77e 1248
.org 0x3a780
	mov r1, r8	@ 0003a780 4146
.org 0x3a782
	str r1, [r0, #0]	@ 0003a782 0160
.org 0x3a784
	movs r3, #0	@ 0003a784 0023
.org 0x3a786
	ldr r0, [pc, #68]	@ 0003a786 1148
.org 0x3a788
	mov r8, r0	@ 0003a788 8046
.org 0x3a78a
	ldr r7, [pc, #68]	@ 0003a78a 114f
.org 0x3a78c
	ldr r1, [pc, #68]	@ 0003a78c 1149
.org 0x3a78e
	adds r4, r1, #0	@ 0003a78e 0c1c
.org 0x3a790
	ldr r6, [pc, #68]	@ 0003a790 114e
.org 0x3a792
	movs r5, #0	@ 0003a792 0025
.org 0x3a794
	lsls r1, r3, #1	@ 0003a794 5900
.org 0x3a796
	mov r0, r8	@ 0003a796 4046
.org 0x3a798
	adds r2, r1, r0	@ 0003a798 0a18
.org 0x3a79a
	adds r1, r1, r7	@ 0003a79a c919
.org 0x3a79c
	ldrh r0, [r1, #0]	@ 0003a79c 0888
.org 0x3a79e
	orrs r0, r4	@ 0003a79e 2043
.org 0x3a7a0
	strh r0, [r1, #0]	@ 0003a7a0 0880
.org 0x3a7a2
	ldrh r0, [r2, #0]	@ 0003a7a2 1088
.org 0x3a7a4
	orrs r0, r4	@ 0003a7a4 2043
.org 0x3a7a6
	strh r0, [r2, #0]	@ 0003a7a6 1080
.org 0x3a7a8
	adds r0, r3, r6	@ 0003a7a8 9819
.org 0x3a7aa
	strb r5, [r0, #0]	@ 0003a7aa 0570
.org 0x3a7ac
	adds r0, r3, #1	@ 0003a7ac 581c
.org 0x3a7ae
	lsls r0, r0, #16	@ 0003a7ae 0004
.org 0x3a7b0
	lsrs r3, r0, #16	@ 0003a7b0 030c
.org 0x3a7b2
	cmp r3, #3	@ 0003a7b2 032b
.org 0x3a7b4
	bls.n 0x3a794	@ 0003a7b4 eed9
.org 0x3a7b6
	add sp, #4	@ 0003a7b6 01b0
.org 0x3a7b8
	pop {r3, r4}	@ 0003a7b8 18bc
.org 0x3a7ba
	mov r8, r3	@ 0003a7ba 9846
.org 0x3a7bc
	mov r9, r4	@ 0003a7bc a146
.org 0x3a7be
	pop {r4, r5, r6, r7}	@ 0003a7be f0bc
.org 0x3a7c0
	pop {r0}	@ 0003a7c0 01bc
.org 0x3a7c2
	bx r0	@ 0003a7c2 0047

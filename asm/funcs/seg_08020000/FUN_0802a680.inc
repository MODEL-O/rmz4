@ FUN_0802a680  entry 0x0802a680  size 212
.thumb
.org 0x2a680
FUN_0802a680:
	push {r4, r5, r6, r7, lr}	@ 0002a680 f0b5
.org 0x2a682
	mov r7, sl	@ 0002a682 5746
.org 0x2a684
	mov r6, r9	@ 0002a684 4e46
.org 0x2a686
	mov r5, r8	@ 0002a686 4546
.org 0x2a688
	push {r5, r6, r7}	@ 0002a688 e0b4
.org 0x2a68a
	sub sp, #16	@ 0002a68a 84b0
.org 0x2a68c
	mov r9, r0	@ 0002a68c 8146
.org 0x2a68e
	lsls r1, r1, #24	@ 0002a68e 0906
.org 0x2a690
	lsrs r1, r1, #24	@ 0002a690 090e
.org 0x2a692
	str r1, [sp, #0]	@ 0002a692 0091
.org 0x2a694
	lsls r2, r2, #24	@ 0002a694 1206
.org 0x2a696
	lsrs r2, r2, #24	@ 0002a696 120e
.org 0x2a698
	str r2, [sp, #4]	@ 0002a698 0192
.org 0x2a69a
	mov r6, r9	@ 0002a69a 4e46
.org 0x2a69c
	cmp r6, #0	@ 0002a69c 002e
.org 0x2a69e
	bge.n 0x2a6a2	@ 0002a69e 00da
.org 0x2a6a0
	negs r6, r6	@ 0002a6a0 7642
.org 0x2a6a2
	movs r1, #1	@ 0002a6a2 0121
.org 0x2a6a4
	movs r4, #10	@ 0002a6a4 0a24
.org 0x2a6a6
	cmp r6, #10	@ 0002a6a6 0a2e
.org 0x2a6a8
	bcc.n 0x2a6ba	@ 0002a6a8 07d3
.org 0x2a6aa
	adds r0, r1, #1	@ 0002a6aa 481c
.org 0x2a6ac
	lsls r0, r0, #16	@ 0002a6ac 0004
.org 0x2a6ae
	lsrs r1, r0, #16	@ 0002a6ae 010c
.org 0x2a6b0
	lsls r0, r4, #2	@ 0002a6b0 a000
.org 0x2a6b2
	adds r0, r0, r4	@ 0002a6b2 0019
.org 0x2a6b4
	lsls r4, r0, #1	@ 0002a6b4 4400
.org 0x2a6b6
	cmp r6, r4	@ 0002a6b6 a642
.org 0x2a6b8
	bcs.n 0x2a6aa	@ 0002a6b8 f7d2
.org 0x2a6ba
	mov r0, r9	@ 0002a6ba 4846
.org 0x2a6bc
	cmp r0, #0	@ 0002a6bc 0028
.org 0x2a6be
	bge.n 0x2a6c8	@ 0002a6be 03da
.org 0x2a6c0
	adds r0, r1, #1	@ 0002a6c0 481c
.org 0x2a6c2
	lsls r0, r0, #16	@ 0002a6c2 0004
.org 0x2a6c4
	lsrs r4, r0, #16	@ 0002a6c4 040c
.org 0x2a6c6
	b.n 0x2a6ca	@ 0002a6c6 00e0
.org 0x2a6c8
	adds r4, r1, #0	@ 0002a6c8 0c1c
.org 0x2a6ca
	lsls r5, r4, #1	@ 0002a6ca 6500
.org 0x2a6cc
	adds r0, r5, #0	@ 0002a6cc 281c
.org 0x2a6ce
	bl 0xa70	@ 0002a6ce d6f7cff9
.org 0x2a6d2
	mov r8, r0	@ 0002a6d2 8046
.org 0x2a6d4
	cmp r0, #0	@ 0002a6d4 0028
.org 0x2a6d6
	beq.n 0x2a744	@ 0002a6d6 35d0
.org 0x2a6d8
	mov sl, r5	@ 0002a6d8 aa46
.org 0x2a6da
	mov r1, r9	@ 0002a6da 4946
.org 0x2a6dc
	lsrs r7, r1, #31	@ 0002a6dc cf0f
.org 0x2a6de
	ldr r2, [sp, #0]	@ 0002a6de 009a
.org 0x2a6e0
	subs r2, r2, r4	@ 0002a6e0 121b
.org 0x2a6e2
	str r2, [sp, #12]	@ 0002a6e2 0392
.org 0x2a6e4
	ldr r0, [sp, #4]	@ 0002a6e4 0198
.org 0x2a6e6
	lsls r0, r0, #5	@ 0002a6e6 4001
.org 0x2a6e8
	str r0, [sp, #8]	@ 0002a6e8 0290
.org 0x2a6ea
	cmp r4, r7	@ 0002a6ea bc42
.org 0x2a6ec
	bls.n 0x2a716	@ 0002a6ec 13d9
.org 0x2a6ee
	mov r0, sl	@ 0002a6ee 5046
.org 0x2a6f0
	subs r0, #2	@ 0002a6f0 0238
.org 0x2a6f2
	mov r1, r8	@ 0002a6f2 4146
.org 0x2a6f4
	adds r5, r0, r1	@ 0002a6f4 4518
.org 0x2a6f6
	adds r0, r6, #0	@ 0002a6f6 301c
.org 0x2a6f8
	movs r1, #10	@ 0002a6f8 0a21
.org 0x2a6fa
	bl 0x129198	@ 0002a6fa fef04dfd
.org 0x2a6fe
	ldr r2, [pc, #84]	@ 0002a6fe 154a
.org 0x2a700
	adds r0, r0, r2	@ 0002a700 8018
.org 0x2a702
	strh r0, [r5, #0]	@ 0002a702 2880
.org 0x2a704
	subs r5, #2	@ 0002a704 023d
.org 0x2a706
	subs r4, #1	@ 0002a706 013c
.org 0x2a708
	adds r0, r6, #0	@ 0002a708 301c
.org 0x2a70a
	movs r1, #10	@ 0002a70a 0a21
.org 0x2a70c
	bl 0x129120	@ 0002a70c fef008fd
.org 0x2a710
	adds r6, r0, #0	@ 0002a710 061c
.org 0x2a712
	cmp r4, r7	@ 0002a712 bc42
.org 0x2a714
	bhi.n 0x2a6f6	@ 0002a714 efd8
.org 0x2a716
	mov r0, r9	@ 0002a716 4846
.org 0x2a718
	cmp r0, #0	@ 0002a718 0028
.org 0x2a71a
	bge.n 0x2a724	@ 0002a71a 03da
.org 0x2a71c
	ldr r1, [pc, #56]	@ 0002a71c 0e49
.org 0x2a71e
	adds r0, r1, #0	@ 0002a71e 081c
.org 0x2a720
	mov r2, r8	@ 0002a720 4246
.org 0x2a722
	strh r0, [r2, #0]	@ 0002a722 1080
.org 0x2a724
	ldr r1, [pc, #52]	@ 0002a724 0d49
.org 0x2a726
	ldrh r0, [r1, #0]	@ 0002a726 0888
.org 0x2a728
	movs r1, #248	@ 0002a728 f821
.org 0x2a72a
	lsls r1, r1, #5	@ 0002a72a 4901
.org 0x2a72c
	ands r1, r0	@ 0002a72c 0140
.org 0x2a72e
	lsls r1, r1, #3	@ 0002a72e c900
.org 0x2a730
	ldr r0, [sp, #8]	@ 0002a730 0298
.org 0x2a732
	adds r0, #1	@ 0002a732 0130
.org 0x2a734
	ldr r2, [sp, #12]	@ 0002a734 039a
.org 0x2a736
	adds r0, r2, r0	@ 0002a736 1018
.org 0x2a738
	lsls r0, r0, #1	@ 0002a738 4000
.org 0x2a73a
	adds r1, r1, r0	@ 0002a73a 0918
.org 0x2a73c
	mov r0, r8	@ 0002a73c 4046
.org 0x2a73e
	mov r2, sl	@ 0002a73e 5246
.org 0x2a740
	bl 0x1f1c	@ 0002a740 d7f7ecfb
.org 0x2a744
	add sp, #16	@ 0002a744 04b0
.org 0x2a746
	pop {r3, r4, r5}	@ 0002a746 38bc
.org 0x2a748
	mov r8, r3	@ 0002a748 9846
.org 0x2a74a
	mov r9, r4	@ 0002a74a a146
.org 0x2a74c
	mov sl, r5	@ 0002a74c aa46
.org 0x2a74e
	pop {r4, r5, r6, r7}	@ 0002a74e f0bc
.org 0x2a750
	pop {r0}	@ 0002a750 01bc
.org 0x2a752
	bx r0	@ 0002a752 0047

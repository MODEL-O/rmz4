@ FUN_0808f768  entry 0x0808f768  size 178
.thumb
.org 0x8f768
FUN_0808f768:
	push {r4, r5, r6, r7, lr}	@ 0008f768 f0b5
.org 0x8f76a
	sub sp, #8	@ 0008f76a 82b0
.org 0x8f76c
	adds r7, r0, #0	@ 0008f76c 071c
.org 0x8f76e
	movs r0, #49	@ 0008f76e 3120
.org 0x8f770
	bl 0x2b10	@ 0008f770 73f7cef9
.org 0x8f774
	ldrb r1, [r7, #10]	@ 0008f774 b97a
.org 0x8f776
	movs r0, #254	@ 0008f776 fe20
.org 0x8f778
	ands r0, r1	@ 0008f778 0840
.org 0x8f77a
	movs r1, #0	@ 0008f77a 0021
.org 0x8f77c
	strb r0, [r7, #10]	@ 0008f77c b872
.org 0x8f77e
	adds r0, r7, #0	@ 0008f77e 381c
.org 0x8f780
	adds r0, #140	@ 0008f780 8c30
.org 0x8f782
	str r1, [r0, #0]	@ 0008f782 0160
.org 0x8f784
	adds r0, #4	@ 0008f784 0430
.org 0x8f786
	str r1, [r0, #0]	@ 0008f786 0160
.org 0x8f788
	adds r0, #4	@ 0008f788 0430
.org 0x8f78a
	strb r1, [r0, #0]	@ 0008f78a 0170
.org 0x8f78c
	ldrb r1, [r7, #10]	@ 0008f78c b97a
.org 0x8f78e
	movs r0, #251	@ 0008f78e fb20
.org 0x8f790
	ands r0, r1	@ 0008f790 0840
.org 0x8f792
	strb r0, [r7, #10]	@ 0008f792 b872
.org 0x8f794
	ldr r6, [pc, #132]	@ 0008f794 214e
.org 0x8f796
	ldr r0, [r6, #0]	@ 0008f796 3068
.org 0x8f798
	ldr r5, [pc, #132]	@ 0008f798 214d
.org 0x8f79a
	muls r0, r5	@ 0008f79a 6843
.org 0x8f79c
	ldr r2, [pc, #132]	@ 0008f79c 214a
.org 0x8f79e
	adds r0, r0, r2	@ 0008f79e 8018
.org 0x8f7a0
	lsls r0, r0, #1	@ 0008f7a0 4000
.org 0x8f7a2
	lsrs r4, r0, #1	@ 0008f7a2 4408
.org 0x8f7a4
	lsrs r0, r0, #17	@ 0008f7a4 400c
.org 0x8f7a6
	movs r3, #7	@ 0008f7a6 0723
.org 0x8f7a8
	ands r0, r3	@ 0008f7a8 1840
.org 0x8f7aa
	subs r0, #3	@ 0008f7aa 0338
.org 0x8f7ac
	lsls r0, r0, #8	@ 0008f7ac 0002
.org 0x8f7ae
	ldr r1, [r7, #84]	@ 0008f7ae 796d
.org 0x8f7b0
	adds r1, r1, r0	@ 0008f7b0 0918
.org 0x8f7b2
	str r1, [sp, #0]	@ 0008f7b2 0091
.org 0x8f7b4
	adds r0, r4, #0	@ 0008f7b4 201c
.org 0x8f7b6
	muls r0, r5	@ 0008f7b6 6843
.org 0x8f7b8
	adds r0, r0, r2	@ 0008f7b8 8018
.org 0x8f7ba
	lsls r0, r0, #1	@ 0008f7ba 4000
.org 0x8f7bc
	lsrs r1, r0, #1	@ 0008f7bc 4108
.org 0x8f7be
	str r1, [r6, #0]	@ 0008f7be 3160
.org 0x8f7c0
	lsrs r0, r0, #17	@ 0008f7c0 400c
.org 0x8f7c2
	ands r0, r3	@ 0008f7c2 1840
.org 0x8f7c4
	subs r0, #3	@ 0008f7c4 0338
.org 0x8f7c6
	lsls r0, r0, #8	@ 0008f7c6 0002
.org 0x8f7c8
	ldr r1, [r7, #88]	@ 0008f7c8 b96d
.org 0x8f7ca
	adds r1, r1, r0	@ 0008f7ca 0918
.org 0x8f7cc
	str r1, [sp, #4]	@ 0008f7cc 0191
.org 0x8f7ce
	movs r0, #1	@ 0008f7ce 0120
.org 0x8f7d0
	mov r1, sp	@ 0008f7d0 6946
.org 0x8f7d2
	bl 0xd0c88	@ 0008f7d2 41f059fa
.org 0x8f7d6
	adds r0, r7, #0	@ 0008f7d6 381c
.org 0x8f7d8
	bl 0x8fb58	@ 0008f7d8 00f0bef9
.org 0x8f7dc
	adds r4, r7, #0	@ 0008f7dc 3c1c
.org 0x8f7de
	adds r4, #84	@ 0008f7de 5434
.org 0x8f7e0
	movs r0, #4	@ 0008f7e0 0420
.org 0x8f7e2
	movs r1, #14	@ 0008f7e2 0e21
.org 0x8f7e4
	adds r2, r4, #0	@ 0008f7e4 221c
.org 0x8f7e6
	bl 0x2ab88	@ 0008f7e6 9bf7cff9
.org 0x8f7ea
	ldr r2, [pc, #60]	@ 0008f7ea 0f4a
.org 0x8f7ec
	ldrh r1, [r2, #12]	@ 0008f7ec 9189
.org 0x8f7ee
	ldr r0, [pc, #60]	@ 0008f7ee 0f48
.org 0x8f7f0
	cmp r1, r0	@ 0008f7f0 8142
.org 0x8f7f2
	bhi.n 0x8f7f8	@ 0008f7f2 01d8
.org 0x8f7f4
	adds r0, r1, #1	@ 0008f7f4 481c
.org 0x8f7f6
	strh r0, [r2, #12]	@ 0008f7f6 9081
.org 0x8f7f8
	adds r0, r7, #0	@ 0008f7f8 381c
.org 0x8f7fa
	adds r1, r4, #0	@ 0008f7fa 211c
.org 0x8f7fc
	bl 0x2abe0	@ 0008f7fc 9bf7f0f9
.org 0x8f800
	ldr r1, [pc, #44]	@ 0008f800 0b49
.org 0x8f802
	ldrb r0, [r7, #9]	@ 0008f802 787a
.org 0x8f804
	lsls r0, r0, #2	@ 0008f804 8000
.org 0x8f806
	adds r0, r0, r1	@ 0008f806 4018
.org 0x8f808
	movs r1, #4	@ 0008f808 0421
.org 0x8f80a
	str r1, [r7, #12]	@ 0008f80a f960
.org 0x8f80c
	ldr r0, [r0, #0]	@ 0008f80c 0068
.org 0x8f80e
	ldr r0, [r0, #16]	@ 0008f80e 0069
.org 0x8f810
	str r0, [r7, #20]	@ 0008f810 7861
.org 0x8f812
	add sp, #8	@ 0008f812 02b0
.org 0x8f814
	pop {r4, r5, r6, r7}	@ 0008f814 f0bc
.org 0x8f816
	pop {r0}	@ 0008f816 01bc
.org 0x8f818
	bx r0	@ 0008f818 0047

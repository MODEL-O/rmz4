@ FUN_0800e788  entry 0x0800e788  size 152
.thumb
.org 0xe788
FUN_0800e788:
	push {r4, lr}	@ 0000e788 10b5
.org 0xe78a
	adds r4, r0, #0	@ 0000e78a 041c
.org 0xe78c
	ldrb r0, [r4, #14]	@ 0000e78c a07b
.org 0xe78e
	cmp r0, #0	@ 0000e78e 0028
.org 0xe790
	bne.n 0xe7dc	@ 0000e790 24d1
.org 0xe792
	ldr r0, [pc, #140]	@ 0000e792 2348
.org 0xe794
	ldrb r1, [r0, #9]	@ 0000e794 417a
.org 0xe796
	movs r0, #32	@ 0000e796 2020
.org 0xe798
	ands r0, r1	@ 0000e798 0840
.org 0xe79a
	lsls r0, r0, #24	@ 0000e79a 0006
.org 0xe79c
	lsrs r0, r0, #24	@ 0000e79c 000e
.org 0xe79e
	cmp r0, #0	@ 0000e79e 0028
.org 0xe7a0
	beq.n 0xe7cc	@ 0000e7a0 14d0
.org 0xe7a2
	movs r0, #2	@ 0000e7a2 0220
.org 0xe7a4
	movs r1, #3	@ 0000e7a4 0321
.org 0xe7a6
	movs r2, #75	@ 0000e7a6 4b22
.org 0xe7a8
	bl 0x74c0	@ 0000e7a8 f8f78afe
.org 0xe7ac
	movs r0, #2	@ 0000e7ac 0220
.org 0xe7ae
	movs r1, #4	@ 0000e7ae 0421
.org 0xe7b0
	movs r2, #91	@ 0000e7b0 5b22
.org 0xe7b2
	bl 0x74c0	@ 0000e7b2 f8f785fe
.org 0xe7b6
	movs r0, #1	@ 0000e7b6 0120
.org 0xe7b8
	movs r1, #3	@ 0000e7b8 0321
.org 0xe7ba
	movs r2, #74	@ 0000e7ba 4a22
.org 0xe7bc
	bl 0x74c0	@ 0000e7bc f8f780fe
.org 0xe7c0
	movs r0, #1	@ 0000e7c0 0120
.org 0xe7c2
	movs r1, #4	@ 0000e7c2 0421
.org 0xe7c4
	movs r2, #90	@ 0000e7c4 5a22
.org 0xe7c6
	bl 0x74c0	@ 0000e7c6 f8f77bfe
.org 0xe7ca
	movs r0, #1	@ 0000e7ca 0120
.org 0xe7cc
	strh r0, [r4, #16]	@ 0000e7cc 2082
.org 0xe7ce
	ldr r1, [pc, #84]	@ 0000e7ce 1549
.org 0xe7d0
	movs r0, #224	@ 0000e7d0 e020
.org 0xe7d2
	lsls r0, r0, #10	@ 0000e7d2 8002
.org 0xe7d4
	str r0, [r1, #0]	@ 0000e7d4 0860
.org 0xe7d6
	ldrb r0, [r4, #14]	@ 0000e7d6 a07b
.org 0xe7d8
	adds r0, #1	@ 0000e7d8 0130
.org 0xe7da
	strb r0, [r4, #14]	@ 0000e7da a073
.org 0xe7dc
	ldrh r0, [r4, #16]	@ 0000e7dc 208a
.org 0xe7de
	cmp r0, #0	@ 0000e7de 0028
.org 0xe7e0
	bne.n 0xe81a	@ 0000e7e0 1bd1
.org 0xe7e2
	ldr r0, [pc, #60]	@ 0000e7e2 0f48
.org 0xe7e4
	ldrb r1, [r0, #9]	@ 0000e7e4 417a
.org 0xe7e6
	movs r0, #32	@ 0000e7e6 2020
.org 0xe7e8
	ands r0, r1	@ 0000e7e8 0840
.org 0xe7ea
	cmp r0, #0	@ 0000e7ea 0028
.org 0xe7ec
	beq.n 0xe81a	@ 0000e7ec 15d0
.org 0xe7ee
	movs r0, #2	@ 0000e7ee 0220
.org 0xe7f0
	movs r1, #3	@ 0000e7f0 0321
.org 0xe7f2
	movs r2, #75	@ 0000e7f2 4b22
.org 0xe7f4
	bl 0x74c0	@ 0000e7f4 f8f764fe
.org 0xe7f8
	movs r0, #2	@ 0000e7f8 0220
.org 0xe7fa
	movs r1, #4	@ 0000e7fa 0421
.org 0xe7fc
	movs r2, #91	@ 0000e7fc 5b22
.org 0xe7fe
	bl 0x74c0	@ 0000e7fe f8f75ffe
.org 0xe802
	movs r0, #1	@ 0000e802 0120
.org 0xe804
	movs r1, #3	@ 0000e804 0321
.org 0xe806
	movs r2, #74	@ 0000e806 4a22
.org 0xe808
	bl 0x74c0	@ 0000e808 f8f75afe
.org 0xe80c
	movs r0, #1	@ 0000e80c 0120
.org 0xe80e
	movs r1, #4	@ 0000e80e 0421
.org 0xe810
	movs r2, #90	@ 0000e810 5a22
.org 0xe812
	bl 0x74c0	@ 0000e812 f8f755fe
.org 0xe816
	movs r0, #1	@ 0000e816 0120
.org 0xe818
	strh r0, [r4, #16]	@ 0000e818 2082
.org 0xe81a
	pop {r4}	@ 0000e81a 10bc
.org 0xe81c
	pop {r0}	@ 0000e81c 01bc
.org 0xe81e
	bx r0	@ 0000e81e 0047

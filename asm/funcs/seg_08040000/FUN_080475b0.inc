@ FUN_080475b0  entry 0x080475b0  size 154
.thumb
.org 0x475b0
FUN_080475b0:
	push {r4, r5, lr}	@ 000475b0 30b5
.org 0x475b2
	sub sp, #8	@ 000475b2 82b0
.org 0x475b4
	adds r4, r0, #0	@ 000475b4 041c
.org 0x475b6
	ldrb r1, [r4, #13]	@ 000475b6 617b
.org 0x475b8
	cmp r1, #0	@ 000475b8 0029
.org 0x475ba
	bne.n 0x475de	@ 000475ba 10d1
.org 0x475bc
	adds r0, #140	@ 000475bc 8c30
.org 0x475be
	str r1, [r0, #0]	@ 000475be 0160
.org 0x475c0
	adds r0, #4	@ 000475c0 0430
.org 0x475c2
	str r1, [r0, #0]	@ 000475c2 0160
.org 0x475c4
	adds r0, #4	@ 000475c4 0430
.org 0x475c6
	strb r1, [r0, #0]	@ 000475c6 0170
.org 0x475c8
	ldrb r1, [r4, #10]	@ 000475c8 a17a
.org 0x475ca
	movs r0, #251	@ 000475ca fb20
.org 0x475cc
	ands r0, r1	@ 000475cc 0840
.org 0x475ce
	movs r1, #254	@ 000475ce fe21
.org 0x475d0
	ands r0, r1	@ 000475d0 0840
.org 0x475d2
	strb r0, [r4, #10]	@ 000475d2 a072
.org 0x475d4
	movs r0, #32	@ 000475d4 2020
.org 0x475d6
	strb r0, [r4, #18]	@ 000475d6 a074
.org 0x475d8
	ldrb r0, [r4, #13]	@ 000475d8 607b
.org 0x475da
	adds r0, #1	@ 000475da 0130
.org 0x475dc
	strb r0, [r4, #13]	@ 000475dc 6073
.org 0x475de
	adds r0, r4, #0	@ 000475de 201c
.org 0x475e0
	bl 0x1cff0	@ 000475e0 d5f706fd
.org 0x475e4
	ldrb r1, [r4, #18]	@ 000475e4 a17c
.org 0x475e6
	movs r0, #3	@ 000475e6 0320
.org 0x475e8
	ands r0, r1	@ 000475e8 0840
.org 0x475ea
	cmp r0, #0	@ 000475ea 0028
.org 0x475ec
	bne.n 0x47622	@ 000475ec 19d1
.org 0x475ee
	ldrb r0, [r4, #18]	@ 000475ee a07c
.org 0x475f0
	lsls r0, r0, #27	@ 000475f0 c006
.org 0x475f2
	ldr r3, [pc, #88]	@ 000475f2 164b
.org 0x475f4
	lsrs r1, r0, #24	@ 000475f4 010e
.org 0x475f6
	movs r2, #128	@ 000475f6 8022
.org 0x475f8
	lsls r2, r2, #23	@ 000475f8 d205
.org 0x475fa
	adds r0, r0, r2	@ 000475fa 8018
.org 0x475fc
	lsrs r0, r0, #23	@ 000475fc c00d
.org 0x475fe
	adds r0, r0, r3	@ 000475fe c018
.org 0x47600
	movs r5, #0	@ 00047600 0025
.org 0x47602
	ldrsh r2, [r0, r5]	@ 00047602 425f
.org 0x47604
	lsls r2, r2, #3	@ 00047604 d200
.org 0x47606
	ldr r0, [r4, #84]	@ 00047606 606d
.org 0x47608
	adds r0, r0, r2	@ 00047608 8018
.org 0x4760a
	str r0, [sp, #0]	@ 0004760a 0090
.org 0x4760c
	lsls r0, r1, #1	@ 0004760c 4800
.org 0x4760e
	adds r0, r0, r3	@ 0004760e c018
.org 0x47610
	movs r3, #0	@ 00047610 0023
.org 0x47612
	ldrsh r2, [r0, r3]	@ 00047612 c25e
.org 0x47614
	lsls r2, r2, #3	@ 00047614 d200
.org 0x47616
	ldr r0, [r4, #88]	@ 00047616 a06d
.org 0x47618
	adds r0, r0, r2	@ 00047618 8018
.org 0x4761a
	str r0, [sp, #4]	@ 0004761a 0190
.org 0x4761c
	mov r0, sp	@ 0004761c 6846
.org 0x4761e
	bl 0x47088	@ 0004761e fff733fd
.org 0x47622
	ldrb r0, [r4, #18]	@ 00047622 a07c
.org 0x47624
	subs r0, #1	@ 00047624 0138
.org 0x47626
	strb r0, [r4, #18]	@ 00047626 a074
.org 0x47628
	lsls r0, r0, #24	@ 00047628 0006
.org 0x4762a
	lsrs r0, r0, #24	@ 0004762a 000e
.org 0x4762c
	cmp r0, #255	@ 0004762c ff28
.org 0x4762e
	bne.n 0x47642	@ 0004762e 08d1
.org 0x47630
	ldr r1, [pc, #28]	@ 00047630 0749
.org 0x47632
	ldrb r0, [r4, #9]	@ 00047632 607a
.org 0x47634
	lsls r0, r0, #2	@ 00047634 8000
.org 0x47636
	adds r0, r0, r1	@ 00047636 4018
.org 0x47638
	movs r1, #4	@ 00047638 0421
.org 0x4763a
	str r1, [r4, #12]	@ 0004763a e160
.org 0x4763c
	ldr r0, [r0, #0]	@ 0004763c 0068
.org 0x4763e
	ldr r0, [r0, #16]	@ 0004763e 0069
.org 0x47640
	str r0, [r4, #20]	@ 00047640 6061
.org 0x47642
	add sp, #8	@ 00047642 02b0
.org 0x47644
	pop {r4, r5}	@ 00047644 30bc
.org 0x47646
	pop {r0}	@ 00047646 01bc
.org 0x47648
	bx r0	@ 00047648 0047

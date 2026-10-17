@ FUN_080c46b4  entry 0x080c46b4  size 202
.thumb
.org 0xc46b4
FUN_080c46b4:
	push {r4, r5, lr}	@ 000c46b4 30b5
.org 0xc46b6
	sub sp, #8	@ 000c46b6 82b0
.org 0xc46b8
	adds r4, r0, #0	@ 000c46b8 041c
.org 0xc46ba
	ldrb r0, [r4, #10]	@ 000c46ba a07a
.org 0xc46bc
	lsrs r5, r0, #4	@ 000c46bc 0509
.org 0xc46be
	movs r0, #1	@ 000c46be 0120
.org 0xc46c0
	ands r5, r0	@ 000c46c0 0540
.org 0xc46c2
	ldrb r0, [r4, #15]	@ 000c46c2 e07b
.org 0xc46c4
	cmp r0, #0	@ 000c46c4 0028
.org 0xc46c6
	bne.n 0xc474a	@ 000c46c6 40d1
.org 0xc46c8
	adds r0, r4, #0	@ 000c46c8 201c
.org 0xc46ca
	adds r0, #116	@ 000c46ca 7430
.org 0xc46cc
	ldr r1, [pc, #176]	@ 000c46cc 2c49
.org 0xc46ce
	bl 0x5784	@ 000c46ce 41f759f8
.org 0xc46d2
	movs r1, #166	@ 000c46d2 a621
.org 0xc46d4
	lsls r1, r1, #7	@ 000c46d4 c901
.org 0xc46d6
	adds r0, r4, #0	@ 000c46d6 201c
.org 0xc46d8
	bl 0x1cf00	@ 000c46d8 58f712fc
.org 0xc46dc
	ldr r0, [pc, #164]	@ 000c46dc 2948
.org 0xc46de
	ldr r0, [r0, #0]	@ 000c46de 0068
.org 0xc46e0
	ldr r0, [r0, #84]	@ 000c46e0 406d
.org 0xc46e2
	str r0, [sp, #0]	@ 000c46e2 0090
.org 0xc46e4
	adds r0, r4, #0	@ 000c46e4 201c
.org 0xc46e6
	adds r0, #180	@ 000c46e6 b430
.org 0xc46e8
	ldr r0, [r0, #0]	@ 000c46e8 0068
.org 0xc46ea
	str r0, [sp, #4]	@ 000c46ea 0190
.org 0xc46ec
	adds r0, r4, #0	@ 000c46ec 201c
.org 0xc46ee
	adds r0, #84	@ 000c46ee 5430
.org 0xc46f0
	mov r1, sp	@ 000c46f0 6946
.org 0xc46f2
	bl 0x10d3ac	@ 000c46f2 48f05bfe
.org 0xc46f6
	lsls r0, r0, #24	@ 000c46f6 0006
.org 0xc46f8
	lsrs r2, r0, #24	@ 000c46f8 020e
.org 0xc46fa
	movs r3, #160	@ 000c46fa a023
.org 0xc46fc
	lsls r3, r3, #1	@ 000c46fc 5b00
.org 0xc46fe
	subs r0, r3, r2	@ 000c46fe 981a
.org 0xc4700
	lsls r1, r5, #1	@ 000c4700 6900
.org 0xc4702
	muls r0, r1	@ 000c4702 4843
.org 0xc4704
	adds r0, r2, r0	@ 000c4704 1018
.org 0xc4706
	lsls r0, r0, #24	@ 000c4706 0006
.org 0xc4708
	lsrs r2, r0, #24	@ 000c4708 020e
.org 0xc470a
	movs r5, #176	@ 000c470a b025
.org 0xc470c
	lsls r5, r5, #24	@ 000c470c 2d06
.org 0xc470e
	adds r0, r0, r5	@ 000c470e 4019
.org 0xc4710
	lsrs r0, r0, #24	@ 000c4710 000e
.org 0xc4712
	cmp r0, #128	@ 000c4712 8028
.org 0xc4714
	bls.n 0xc4718	@ 000c4714 00d9
.org 0xc4716
	movs r2, #80	@ 000c4716 5022
.org 0xc4718
	subs r0, r3, r2	@ 000c4718 981a
.org 0xc471a
	muls r1, r0	@ 000c471a 4143
.org 0xc471c
	adds r1, r2, r1	@ 000c471c 5118
.org 0xc471e
	lsls r1, r1, #24	@ 000c471e 0906
.org 0xc4720
	ldr r3, [pc, #100]	@ 000c4720 194b
.org 0xc4722
	movs r2, #128	@ 000c4722 8022
.org 0xc4724
	lsls r2, r2, #23	@ 000c4724 d205
.org 0xc4726
	adds r0, r1, r2	@ 000c4726 8818
.org 0xc4728
	lsrs r0, r0, #23	@ 000c4728 c00d
.org 0xc472a
	adds r0, r0, r3	@ 000c472a c018
.org 0xc472c
	movs r5, #0	@ 000c472c 0025
.org 0xc472e
	ldrsh r2, [r0, r5]	@ 000c472e 425f
.org 0xc4730
	lsls r0, r2, #1	@ 000c4730 5000
.org 0xc4732
	adds r0, r0, r2	@ 000c4732 8018
.org 0xc4734
	str r0, [r4, #92]	@ 000c4734 e065
.org 0xc4736
	lsrs r1, r1, #23	@ 000c4736 c90d
.org 0xc4738
	adds r1, r1, r3	@ 000c4738 c918
.org 0xc473a
	movs r0, #0	@ 000c473a 0020
.org 0xc473c
	ldrsh r1, [r1, r0]	@ 000c473c 095e
.org 0xc473e
	lsls r0, r1, #1	@ 000c473e 4800
.org 0xc4740
	adds r0, r0, r1	@ 000c4740 4018
.org 0xc4742
	str r0, [r4, #96]	@ 000c4742 2066
.org 0xc4744
	ldrb r0, [r4, #15]	@ 000c4744 e07b
.org 0xc4746
	adds r0, #1	@ 000c4746 0130
.org 0xc4748
	strb r0, [r4, #15]	@ 000c4748 e073
.org 0xc474a
	adds r0, r4, #0	@ 000c474a 201c
.org 0xc474c
	bl 0x1cff0	@ 000c474c 58f750fc
.org 0xc4750
	ldr r0, [r4, #84]	@ 000c4750 606d
.org 0xc4752
	ldr r1, [r4, #92]	@ 000c4752 e16d
.org 0xc4754
	adds r0, r0, r1	@ 000c4754 4018
.org 0xc4756
	str r0, [r4, #84]	@ 000c4756 6065
.org 0xc4758
	ldr r1, [r4, #88]	@ 000c4758 a16d
.org 0xc475a
	ldr r0, [r4, #96]	@ 000c475a 206e
.org 0xc475c
	adds r1, r1, r0	@ 000c475c 0918
.org 0xc475e
	str r1, [r4, #88]	@ 000c475e a165
.org 0xc4760
	adds r0, r4, #0	@ 000c4760 201c
.org 0xc4762
	adds r0, #180	@ 000c4762 b430
.org 0xc4764
	ldr r0, [r0, #0]	@ 000c4764 0068
.org 0xc4766
	cmp r1, r0	@ 000c4766 8142
.org 0xc4768
	blt.n 0xc4776	@ 000c4768 05db
.org 0xc476a
	str r0, [r4, #88]	@ 000c476a a065
.org 0xc476c
	movs r1, #0	@ 000c476c 0021
.org 0xc476e
	movs r0, #2	@ 000c476e 0220
.org 0xc4770
	strb r0, [r4, #13]	@ 000c4770 6073
.org 0xc4772
	strb r1, [r4, #14]	@ 000c4772 a173
.org 0xc4774
	strb r1, [r4, #15]	@ 000c4774 e173
.org 0xc4776
	add sp, #8	@ 000c4776 02b0
.org 0xc4778
	pop {r4, r5}	@ 000c4778 30bc
.org 0xc477a
	pop {r0}	@ 000c477a 01bc
.org 0xc477c
	bx r0	@ 000c477c 0047

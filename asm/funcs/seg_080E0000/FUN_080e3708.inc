@ FUN_080e3708  entry 0x080e3708  size 114
.thumb
.org 0xe3708
FUN_080e3708:
	push {r4, r5, lr}	@ 000e3708 30b5
.org 0xe370a
	adds r5, r0, #0	@ 000e370a 051c
.org 0xe370c
	ldr r4, [r5, #40]	@ 000e370c ac6a
.org 0xe370e
	bl 0x1cff0	@ 000e370e 39f76ffc
.org 0xe3712
	ldrb r0, [r4, #12]	@ 000e3712 207b
.org 0xe3714
	cmp r0, #1	@ 000e3714 0128
.org 0xe3716
	bhi.n 0xe3726	@ 000e3716 06d8
.org 0xe3718
	ldrb r0, [r5, #18]	@ 000e3718 a87c
.org 0xe371a
	subs r1, r0, #1	@ 000e371a 411e
.org 0xe371c
	movs r2, #0	@ 000e371c 0022
.org 0xe371e
	strb r1, [r5, #18]	@ 000e371e a974
.org 0xe3720
	lsls r0, r1, #24	@ 000e3720 0806
.org 0xe3722
	cmp r0, #0	@ 000e3722 0028
.org 0xe3724
	bne.n 0xe3744	@ 000e3724 0ed1
.org 0xe3726
	ldr r1, [pc, #24]	@ 000e3726 0649
.org 0xe3728
	ldrb r0, [r5, #9]	@ 000e3728 687a
.org 0xe372a
	lsls r0, r0, #2	@ 000e372a 8000
.org 0xe372c
	adds r0, r0, r1	@ 000e372c 4018
.org 0xe372e
	movs r1, #2	@ 000e372e 0221
.org 0xe3730
	str r1, [r5, #12]	@ 000e3730 e960
.org 0xe3732
	ldr r0, [r0, #0]	@ 000e3732 0068
.org 0xe3734
	ldr r0, [r0, #8]	@ 000e3734 8068
.org 0xe3736
	str r0, [r5, #20]	@ 000e3736 6861
.org 0xe3738
	adds r0, r5, #0	@ 000e3738 281c
.org 0xe373a
	bl 0xe3780	@ 000e373a 00f021f8
.org 0xe373e
	b.n 0xe3778	@ 000e373e 1be0
.org 0xe3740
	.byte 0x64,0x6f,0x86,0x08	@ 000e3740 data
.org 0xe3744
	lsls r0, r1, #24	@ 000e3744 0806
.org 0xe3746
	lsrs r0, r0, #24	@ 000e3746 000e
.org 0xe3748
	cmp r0, #11	@ 000e3748 0b28
.org 0xe374a
	bhi.n 0xe375c	@ 000e374a 07d8
.org 0xe374c
	movs r0, #1	@ 000e374c 0120
.org 0xe374e
	ands r1, r0	@ 000e374e 0140
.org 0xe3750
	cmp r1, #0	@ 000e3750 0029
.org 0xe3752
	beq.n 0xe3770	@ 000e3752 0dd0
.org 0xe3754
	ldrb r0, [r5, #10]	@ 000e3754 a87a
.org 0xe3756
	movs r1, #1	@ 000e3756 0121
.org 0xe3758
	orrs r0, r1	@ 000e3758 0843
.org 0xe375a
	b.n 0xe3776	@ 000e375a 0ce0
.org 0xe375c
	cmp r0, #24	@ 000e375c 1828
.org 0xe375e
	bhi.n 0xe3778	@ 000e375e 0bd8
.org 0xe3760
	movs r0, #3	@ 000e3760 0320
.org 0xe3762
	ands r1, r0	@ 000e3762 0140
.org 0xe3764
	cmp r1, #0	@ 000e3764 0029
.org 0xe3766
	beq.n 0xe3770	@ 000e3766 03d0
.org 0xe3768
	ldrb r0, [r5, #10]	@ 000e3768 a87a
.org 0xe376a
	movs r1, #1	@ 000e376a 0121
.org 0xe376c
	orrs r0, r1	@ 000e376c 0843
.org 0xe376e
	b.n 0xe3776	@ 000e376e 02e0
.org 0xe3770
	ldrb r1, [r5, #10]	@ 000e3770 a97a
.org 0xe3772
	movs r0, #254	@ 000e3772 fe20
.org 0xe3774
	ands r0, r1	@ 000e3774 0840
.org 0xe3776
	strb r0, [r5, #10]	@ 000e3776 a872
.org 0xe3778
	pop {r4, r5}	@ 000e3778 30bc

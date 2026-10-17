@ FUN_080d36a4  entry 0x080d36a4  size 250
.thumb
.org 0xd36a4
FUN_080d36a4:
	push {r4, r5, lr}	@ 000d36a4 30b5
.org 0xd36a6
	adds r4, r0, #0	@ 000d36a6 041c
.org 0xd36a8
	ldr r5, [r4, #40]	@ 000d36a8 a56a
.org 0xd36aa
	ldrb r0, [r5, #12]	@ 000d36aa 287b
.org 0xd36ac
	cmp r0, #1	@ 000d36ac 0128
.org 0xd36ae
	bls.n 0xd36bc	@ 000d36ae 05d9
.org 0xd36b0
	ldrb r1, [r4, #18]	@ 000d36b0 a17c
.org 0xd36b2
	cmp r1, #15	@ 000d36b2 0f29
.org 0xd36b4
	bls.n 0xd36bc	@ 000d36b4 02d9
.org 0xd36b6
	movs r0, #15	@ 000d36b6 0f20
.org 0xd36b8
	ands r0, r1	@ 000d36b8 0840
.org 0xd36ba
	strb r0, [r4, #18]	@ 000d36ba a074
.org 0xd36bc
	ldrb r0, [r4, #18]	@ 000d36bc a07c
.org 0xd36be
	subs r1, r0, #1	@ 000d36be 411e
.org 0xd36c0
	strb r1, [r4, #18]	@ 000d36c0 a174
.org 0xd36c2
	ldr r0, [pc, #56]	@ 000d36c2 0e48
.org 0xd36c4
	ldrb r0, [r0, #2]	@ 000d36c4 8078
.org 0xd36c6
	cmp r0, #0	@ 000d36c6 0028
.org 0xd36c8
	bne.n 0xd370a	@ 000d36c8 1fd1
.org 0xd36ca
	adds r0, r4, #0	@ 000d36ca 201c
.org 0xd36cc
	adds r0, #124	@ 000d36cc 7c30
.org 0xd36ce
	ldrb r0, [r0, #0]	@ 000d36ce 0078
.org 0xd36d0
	lsls r2, r0, #24	@ 000d36d0 0206
.org 0xd36d2
	lsls r0, r1, #24	@ 000d36d2 0806
.org 0xd36d4
	lsrs r3, r0, #24	@ 000d36d4 030e
.org 0xd36d6
	lsrs r0, r2, #25	@ 000d36d6 500e
.org 0xd36d8
	cmp r3, r0	@ 000d36d8 8342
.org 0xd36da
	bhi.n 0xd36f2	@ 000d36da 0ad8
.org 0xd36dc
	lsrs r0, r2, #26	@ 000d36dc 900e
.org 0xd36de
	cmp r3, r0	@ 000d36de 8342
.org 0xd36e0
	bls.n 0xd36ea	@ 000d36e0 03d9
.org 0xd36e2
	movs r0, #1	@ 000d36e2 0120
.org 0xd36e4
	ands r0, r1	@ 000d36e4 0840
.org 0xd36e6
	cmp r0, #0	@ 000d36e6 0028
.org 0xd36e8
	beq.n 0xd36f2	@ 000d36e8 03d0
.org 0xd36ea
	movs r0, #3	@ 000d36ea 0320
.org 0xd36ec
	ands r1, r0	@ 000d36ec 0140
.org 0xd36ee
	cmp r1, #0	@ 000d36ee 0029
.org 0xd36f0
	bne.n 0xd3700	@ 000d36f0 06d1
.org 0xd36f2
	ldrb r1, [r4, #10]	@ 000d36f2 a17a
.org 0xd36f4
	movs r0, #1	@ 000d36f4 0120
.org 0xd36f6
	orrs r0, r1	@ 000d36f6 0843
.org 0xd36f8
	strb r0, [r4, #10]	@ 000d36f8 a072
.org 0xd36fa
	b.n 0xd372c	@ 000d36fa 17e0
.org 0xd36fc
	.byte 0x50,0xed,0x02,0x02	@ 000d36fc data
.org 0xd3700
	ldrb r1, [r4, #10]	@ 000d3700 a17a
.org 0xd3702
	movs r0, #254	@ 000d3702 fe20
.org 0xd3704
	ands r0, r1	@ 000d3704 0840
.org 0xd3706
	strb r0, [r4, #10]	@ 000d3706 a072
.org 0xd3708
	b.n 0xd372c	@ 000d3708 10e0
.org 0xd370a
	ldrb r1, [r4, #10]	@ 000d370a a17a
.org 0xd370c
	movs r0, #254	@ 000d370c fe20
.org 0xd370e
	ands r0, r1	@ 000d370e 0840
.org 0xd3710
	movs r1, #253	@ 000d3710 fd21
.org 0xd3712
	ands r0, r1	@ 000d3712 0840
.org 0xd3714
	strb r0, [r4, #10]	@ 000d3714 a072
.org 0xd3716
	ldr r1, [pc, #16]	@ 000d3716 0449
.org 0xd3718
	ldrb r0, [r4, #9]	@ 000d3718 607a
.org 0xd371a
	lsls r0, r0, #2	@ 000d371a 8000
.org 0xd371c
	adds r0, r0, r1	@ 000d371c 4018
.org 0xd371e
	movs r1, #3	@ 000d371e 0321
.org 0xd3720
	str r1, [r4, #12]	@ 000d3720 e160
.org 0xd3722
	ldr r0, [r0, #0]	@ 000d3722 0068
.org 0xd3724
	ldr r0, [r0, #12]	@ 000d3724 c068
.org 0xd3726
	b.n 0xd379e	@ 000d3726 3ae0
.org 0xd3728
	.byte 0x64,0x6f,0x86,0x08	@ 000d3728 data
.org 0xd372c
	ldrb r1, [r5, #10]	@ 000d372c a97a
.org 0xd372e
	movs r0, #64	@ 000d372e 4020
.org 0xd3730
	ands r0, r1	@ 000d3730 0840
.org 0xd3732
	cmp r0, #0	@ 000d3732 0028
.org 0xd3734
	beq.n 0xd373e	@ 000d3734 03d0
.org 0xd3736
	ldr r0, [r5, #84]	@ 000d3736 686d
.org 0xd3738
	str r0, [r4, #84]	@ 000d3738 6065
.org 0xd373a
	ldr r0, [r5, #88]	@ 000d373a a86d
.org 0xd373c
	b.n 0xd377a	@ 000d373c 1de0
.org 0xd373e
	movs r0, #48	@ 000d373e 3020
.org 0xd3740
	ands r0, r1	@ 000d3740 0840
.org 0xd3742
	lsrs r0, r0, #4	@ 000d3742 0009
.org 0xd3744
	movs r1, #1	@ 000d3744 0121
.org 0xd3746
	ands r0, r1	@ 000d3746 0840
.org 0xd3748
	cmp r0, #0	@ 000d3748 0028
.org 0xd374a
	beq.n 0xd3754	@ 000d374a 03d0
.org 0xd374c
	ldr r0, [r5, #84]	@ 000d374c 686d
.org 0xd374e
	ldr r1, [r4, #116]	@ 000d374e 616f
.org 0xd3750
	subs r0, r0, r1	@ 000d3750 401a
.org 0xd3752
	b.n 0xd375a	@ 000d3752 02e0
.org 0xd3754
	ldr r0, [r5, #84]	@ 000d3754 686d
.org 0xd3756
	ldr r1, [r4, #116]	@ 000d3756 616f
.org 0xd3758
	adds r0, r0, r1	@ 000d3758 4018
.org 0xd375a
	str r0, [r4, #84]	@ 000d375a 6065
.org 0xd375c
	ldrb r0, [r5, #10]	@ 000d375c a87a
.org 0xd375e
	movs r1, #48	@ 000d375e 3021
.org 0xd3760
	ands r1, r0	@ 000d3760 0140
.org 0xd3762
	lsrs r1, r1, #4	@ 000d3762 0909
.org 0xd3764
	movs r0, #2	@ 000d3764 0220
.org 0xd3766
	ands r1, r0	@ 000d3766 0140
.org 0xd3768
	cmp r1, #0	@ 000d3768 0029
.org 0xd376a
	beq.n 0xd3774	@ 000d376a 03d0
.org 0xd376c
	ldr r0, [r5, #88]	@ 000d376c a86d
.org 0xd376e
	ldr r1, [r4, #120]	@ 000d376e a16f
.org 0xd3770
	subs r0, r0, r1	@ 000d3770 401a
.org 0xd3772
	b.n 0xd377a	@ 000d3772 02e0
.org 0xd3774
	ldr r0, [r5, #88]	@ 000d3774 a86d
.org 0xd3776
	ldr r1, [r4, #120]	@ 000d3776 a16f
.org 0xd3778
	adds r0, r0, r1	@ 000d3778 4018
.org 0xd377a
	str r0, [r4, #88]	@ 000d377a a065
.org 0xd377c
	adds r0, r4, #0	@ 000d377c 201c
.org 0xd377e
	bl 0x1cff0	@ 000d377e 49f737fc
.org 0xd3782
	ldrb r0, [r4, #18]	@ 000d3782 a07c
.org 0xd3784
	cmp r0, #0	@ 000d3784 0028
.org 0xd3786
	beq.n 0xd378e	@ 000d3786 02d0
.org 0xd3788
	ldrb r0, [r5, #12]	@ 000d3788 287b
.org 0xd378a
	cmp r0, #2	@ 000d378a 0228
.org 0xd378c
	bls.n 0xd37a0	@ 000d378c 08d9
.org 0xd378e
	ldr r1, [pc, #24]	@ 000d378e 0649
.org 0xd3790
	ldrb r0, [r4, #9]	@ 000d3790 607a
.org 0xd3792
	lsls r0, r0, #2	@ 000d3792 8000
.org 0xd3794
	adds r0, r0, r1	@ 000d3794 4018
.org 0xd3796
	movs r1, #2	@ 000d3796 0221
.org 0xd3798
	str r1, [r4, #12]	@ 000d3798 e160
.org 0xd379a
	ldr r0, [r0, #0]	@ 000d379a 0068
.org 0xd379c
	ldr r0, [r0, #8]	@ 000d379c 8068

@ FUN_0804a6ec  entry 0x0804a6ec  size 134
.thumb
.org 0x4a6ec
FUN_0804a6ec:
	push {r4, r5, lr}	@ 0004a6ec 30b5
.org 0x4a6ee
	adds r4, r0, #0	@ 0004a6ee 041c
.org 0x4a6f0
	lsls r1, r1, #24	@ 0004a6f0 0906
.org 0x4a6f2
	lsrs r5, r1, #24	@ 0004a6f2 0d0e
.org 0x4a6f4
	ldr r0, [pc, #64]	@ 0004a6f4 1048
.org 0x4a6f6
	ldr r0, [r0, #0]	@ 0004a6f6 0068
.org 0x4a6f8
	bl 0x5500	@ 0004a6f8 baf702ff
.org 0x4a6fc
	adds r2, r0, #0	@ 0004a6fc 021c
.org 0x4a6fe
	cmp r2, #0	@ 0004a6fe 002a
.org 0x4a700
	beq.n 0x4a77c	@ 0004a700 3cd0
.org 0x4a702
	adds r0, r4, #0	@ 0004a702 201c
.org 0x4a704
	adds r0, #248	@ 0004a704 f830
.org 0x4a706
	ldrb r0, [r0, #0]	@ 0004a706 0078
.org 0x4a708
	cmp r0, #2	@ 0004a708 0228
.org 0x4a70a
	bne.n 0x4a748	@ 0004a70a 1dd1
.org 0x4a70c
	ldr r0, [pc, #44]	@ 0004a70c 0b48
.org 0x4a70e
	movs r1, #38	@ 0004a70e 2621
.org 0x4a710
	strb r1, [r2, #9]	@ 0004a710 5172
.org 0x4a712
	adds r0, #152	@ 0004a712 9830
.org 0x4a714
	ldr r0, [r0, #0]	@ 0004a714 0068
.org 0x4a716
	ldr r0, [r0, #0]	@ 0004a716 0068
.org 0x4a718
	str r0, [r2, #20]	@ 0004a718 5061
.org 0x4a71a
	ldrb r1, [r2, #11]	@ 0004a71a d17a
.org 0x4a71c
	movs r0, #191	@ 0004a71c bf20
.org 0x4a71e
	ands r0, r1	@ 0004a71e 0840
.org 0x4a720
	strb r0, [r2, #11]	@ 0004a720 d072
.org 0x4a722
	adds r1, r2, #0	@ 0004a722 111c
.org 0x4a724
	adds r1, #37	@ 0004a724 2531
.org 0x4a726
	movs r0, #16	@ 0004a726 1020
.org 0x4a728
	strb r0, [r1, #0]	@ 0004a728 0870
.org 0x4a72a
	ldr r0, [pc, #20]	@ 0004a72a 0548
.org 0x4a72c
	ldrh r0, [r0, #0]	@ 0004a72c 0088
.org 0x4a72e
	strh r0, [r2, #32]	@ 0004a72e 1084
.org 0x4a730
	ldr r0, [pc, #16]	@ 0004a730 0448
.org 0x4a732
	ldrb r0, [r0, #0]	@ 0004a732 0078
.org 0x4a734
	b.n 0x4a770	@ 0004a734 1ce0
.org 0x4a736
	.byte 0x00	@ 0004a736 data
.org 0x4a737
	.byte 0x00	@ 0004a737 data
.org 0x4a738
	.byte 0x88,0xed,0x02,0x02	@ 0004a738 data
.org 0x4a73c
	.byte 0xf8,0x39,0x85,0x08	@ 0004a73c data
.org 0x4a740
	.byte 0xfc,0x36,0x85,0x08	@ 0004a740 data
.org 0x4a744
	.byte 0x04,0x37,0x85,0x08	@ 0004a744 data
.org 0x4a748
	ldr r0, [pc, #56]	@ 0004a748 0e48
.org 0x4a74a
	movs r1, #38	@ 0004a74a 2621
.org 0x4a74c
	strb r1, [r2, #9]	@ 0004a74c 5172
.org 0x4a74e
	adds r0, #152	@ 0004a74e 9830
.org 0x4a750
	ldr r0, [r0, #0]	@ 0004a750 0068
.org 0x4a752
	ldr r0, [r0, #0]	@ 0004a752 0068
.org 0x4a754
	str r0, [r2, #20]	@ 0004a754 5061
.org 0x4a756
	ldrb r1, [r2, #11]	@ 0004a756 d17a
.org 0x4a758
	movs r0, #191	@ 0004a758 bf20
.org 0x4a75a
	ands r0, r1	@ 0004a75a 0840
.org 0x4a75c
	strb r0, [r2, #11]	@ 0004a75c d072
.org 0x4a75e
	adds r1, r2, #0	@ 0004a75e 111c
.org 0x4a760
	adds r1, #37	@ 0004a760 2531
.org 0x4a762
	movs r0, #16	@ 0004a762 1020
.org 0x4a764
	strb r0, [r1, #0]	@ 0004a764 0870
.org 0x4a766
	ldr r0, [pc, #32]	@ 0004a766 0848
.org 0x4a768
	ldrh r0, [r0, #2]	@ 0004a768 4088
.org 0x4a76a
	strh r0, [r2, #32]	@ 0004a76a 1084
.org 0x4a76c
	ldr r0, [pc, #28]	@ 0004a76c 0748
.org 0x4a76e
	ldrb r0, [r0, #1]	@ 0004a76e 4078
.org 0x4a770
	subs r1, #3	@ 0004a770 0339

@ FUN_0805a688  entry 0x0805a688  size 434
.thumb
.org 0x5a688
FUN_0805a688:
	push {r4, r5, r6, r7, lr}	@ 0005a688 f0b5
.org 0x5a68a
	mov r7, r8	@ 0005a68a 4746
.org 0x5a68c
	push {r7}	@ 0005a68c 80b4
.org 0x5a68e
	adds r6, r0, #0	@ 0005a68e 061c
.org 0x5a690
	ldrb r0, [r6, #10]	@ 0005a690 b07a
.org 0x5a692
	lsrs r0, r0, #4	@ 0005a692 0009
.org 0x5a694
	mov r8, r0	@ 0005a694 8046
.org 0x5a696
	movs r0, #1	@ 0005a696 0120
.org 0x5a698
	mov r1, r8	@ 0005a698 4146
.org 0x5a69a
	ands r1, r0	@ 0005a69a 0140
.org 0x5a69c
	mov r8, r1	@ 0005a69c 8846
.org 0x5a69e
	ldrb r0, [r6, #15]	@ 0005a69e f07b
.org 0x5a6a0
	cmp r0, #1	@ 0005a6a0 0128
.org 0x5a6a2
	bne.n 0x5a6a6	@ 0005a6a2 00d1
.org 0x5a6a4
	b.n 0x5a7e4	@ 0005a6a4 9ee0
.org 0x5a6a6
	cmp r0, #1	@ 0005a6a6 0128
.org 0x5a6a8
	bgt.n 0x5a6b0	@ 0005a6a8 02dc
.org 0x5a6aa
	cmp r0, #0	@ 0005a6aa 0028
.org 0x5a6ac
	beq.n 0x5a6b8	@ 0005a6ac 04d0
.org 0x5a6ae
	b.n 0x5a83e	@ 0005a6ae c6e0
.org 0x5a6b0
	cmp r0, #2	@ 0005a6b0 0228
.org 0x5a6b2
	bne.n 0x5a6b6	@ 0005a6b2 00d1
.org 0x5a6b4
	b.n 0x5a80c	@ 0005a6b4 aae0
.org 0x5a6b6
	b.n 0x5a83e	@ 0005a6b6 c2e0
.org 0x5a6b8
	adds r5, r6, #0	@ 0005a6b8 351c
.org 0x5a6ba
	adds r5, #200	@ 0005a6ba c835
.org 0x5a6bc
	ldr r2, [r5, #0]	@ 0005a6bc 2a68
.org 0x5a6be
	cmp r2, #0	@ 0005a6be 002a
.org 0x5a6c0
	beq.n 0x5a706	@ 0005a6c0 21d0
.org 0x5a6c2
	adds r4, r6, #0	@ 0005a6c2 341c
.org 0x5a6c4
	adds r4, #191	@ 0005a6c4 bf34
.org 0x5a6c6
	ldrb r3, [r4, #0]	@ 0005a6c6 2378
.org 0x5a6c8
	cmp r3, #0	@ 0005a6c8 002b
.org 0x5a6ca
	bne.n 0x5a706	@ 0005a6ca 1cd1
.org 0x5a6cc
	ldrb r1, [r2, #10]	@ 0005a6cc 917a
.org 0x5a6ce
	movs r0, #254	@ 0005a6ce fe20
.org 0x5a6d0
	ands r0, r1	@ 0005a6d0 0840
.org 0x5a6d2
	movs r1, #253	@ 0005a6d2 fd21
.org 0x5a6d4
	ands r0, r1	@ 0005a6d4 0840
.org 0x5a6d6
	strb r0, [r2, #10]	@ 0005a6d6 9072
.org 0x5a6d8
	adds r0, r2, #0	@ 0005a6d8 101c
.org 0x5a6da
	adds r0, #140	@ 0005a6da 8c30
.org 0x5a6dc
	str r3, [r0, #0]	@ 0005a6dc 0360
.org 0x5a6de
	adds r0, #4	@ 0005a6de 0430
.org 0x5a6e0
	str r3, [r0, #0]	@ 0005a6e0 0360
.org 0x5a6e2
	adds r0, #4	@ 0005a6e2 0430
.org 0x5a6e4
	strb r3, [r0, #0]	@ 0005a6e4 0370
.org 0x5a6e6
	ldrb r1, [r2, #10]	@ 0005a6e6 917a
.org 0x5a6e8
	movs r0, #251	@ 0005a6e8 fb20
.org 0x5a6ea
	ands r0, r1	@ 0005a6ea 0840
.org 0x5a6ec
	strb r0, [r2, #10]	@ 0005a6ec 9072
.org 0x5a6ee
	ldr r1, [pc, #120]	@ 0005a6ee 1e49
.org 0x5a6f0
	ldrb r0, [r2, #9]	@ 0005a6f0 507a
.org 0x5a6f2
	lsls r0, r0, #2	@ 0005a6f2 8000
.org 0x5a6f4
	adds r0, r0, r1	@ 0005a6f4 4018
.org 0x5a6f6
	movs r1, #3	@ 0005a6f6 0321
.org 0x5a6f8
	str r1, [r2, #12]	@ 0005a6f8 d160
.org 0x5a6fa
	ldr r0, [r0, #0]	@ 0005a6fa 0068
.org 0x5a6fc
	ldr r0, [r0, #12]	@ 0005a6fc c068
.org 0x5a6fe
	str r0, [r2, #20]	@ 0005a6fe 5061
.org 0x5a700
	str r3, [r5, #0]	@ 0005a700 2b60
.org 0x5a702
	movs r0, #255	@ 0005a702 ff20
.org 0x5a704
	strb r0, [r4, #0]	@ 0005a704 2070
.org 0x5a706
	adds r0, r6, #0	@ 0005a706 301c
.org 0x5a708
	adds r0, #116	@ 0005a708 7430
.org 0x5a70a
	ldr r1, [pc, #96]	@ 0005a70a 1849
.org 0x5a70c
	bl 0x5784	@ 0005a70c abf73af8
.org 0x5a710
	ldrb r0, [r6, #30]	@ 0005a710 b07f
.org 0x5a712
	lsls r0, r0, #8	@ 0005a712 0002
.org 0x5a714
	adds r1, r6, #0	@ 0005a714 311c
.org 0x5a716
	adds r1, #112	@ 0005a716 7031
.org 0x5a718
	ldrb r1, [r1, #0]	@ 0005a718 0978
.org 0x5a71a
	orrs r0, r1	@ 0005a71a 0843
.org 0x5a71c
	ldr r1, [pc, #80]	@ 0005a71c 1449
.org 0x5a71e
	cmp r0, r1	@ 0005a71e 8842
.org 0x5a720
	beq.n 0x5a730	@ 0005a720 06d0
.org 0x5a722
	adds r0, r6, #0	@ 0005a722 301c
.org 0x5a724
	bl 0x1cf00	@ 0005a724 c2f7ecfb
.org 0x5a728
	adds r1, r6, #0	@ 0005a728 311c
.org 0x5a72a
	adds r1, #189	@ 0005a72a bd31
.org 0x5a72c
	movs r0, #1	@ 0005a72c 0120
.org 0x5a72e
	strb r0, [r1, #0]	@ 0005a72e 0870
.org 0x5a730
	movs r0, #1	@ 0005a730 0120
.org 0x5a732
	add r8, r0	@ 0005a732 8044
.org 0x5a734
	mov r1, r8	@ 0005a734 4146
.org 0x5a736
	ands r1, r0	@ 0005a736 0140
.org 0x5a738
	mov r8, r1	@ 0005a738 8846
.org 0x5a73a
	movs r3, #1	@ 0005a73a 0123
.org 0x5a73c
	ands r1, r3	@ 0005a73c 1940
.org 0x5a73e
	adds r0, r6, #0	@ 0005a73e 301c
.org 0x5a740
	adds r0, #76	@ 0005a740 4c30
.org 0x5a742
	strb r1, [r0, #0]	@ 0005a742 0170
.org 0x5a744
	adds r4, r6, #0	@ 0005a744 341c
.org 0x5a746
	adds r4, #74	@ 0005a746 4a34
.org 0x5a748
	lsls r1, r1, #4	@ 0005a748 0901
.org 0x5a74a
	ldrb r2, [r4, #0]	@ 0005a74a 2278
.org 0x5a74c
	movs r0, #17	@ 0005a74c 1120
.org 0x5a74e
	negs r0, r0	@ 0005a74e 4042
.org 0x5a750
	ands r0, r2	@ 0005a750 1040
.org 0x5a752
	orrs r0, r1	@ 0005a752 0843
.org 0x5a754
	strb r0, [r4, #0]	@ 0005a754 2070
.org 0x5a756
	mov r0, r8	@ 0005a756 4046
.org 0x5a758
	ands r0, r3	@ 0005a758 1840
.org 0x5a75a
	cmp r0, #0	@ 0005a75a 0028
.org 0x5a75c
	beq.n 0x5a774	@ 0005a75c 0ad0
.org 0x5a75e
	ldrb r0, [r6, #10]	@ 0005a75e b07a
.org 0x5a760
	movs r1, #16	@ 0005a760 1021
.org 0x5a762
	orrs r0, r1	@ 0005a762 0843
.org 0x5a764
	b.n 0x5a77a	@ 0005a764 09e0
.org 0x5a766
	.byte 0x00	@ 0005a766 data
.org 0x5a767
	.byte 0x00	@ 0005a767 data
.org 0x5a768
	.byte 0xf4,0x49,0x86,0x08	@ 0005a768 data
.org 0x5a76c
	.byte 0xe4,0x88,0x85,0x08	@ 0005a76c data
.org 0x5a770
	.byte 0x01,0xa3,0x00,0x00	@ 0005a770 data
.org 0x5a774
	ldrb r1, [r6, #10]	@ 0005a774 b17a
.org 0x5a776
	movs r0, #239	@ 0005a776 ef20
.org 0x5a778
	ands r0, r1	@ 0005a778 0840
.org 0x5a77a
	strb r0, [r6, #10]	@ 0005a77a b072
.org 0x5a77c
	mov r1, r8	@ 0005a77c 4146
.org 0x5a77e
	lsls r0, r1, #1	@ 0005a77e 4800
.org 0x5a780
	subs r7, r0, #1	@ 0005a780 471e
.org 0x5a782
	lsls r4, r7, #3	@ 0005a782 fc00
.org 0x5a784
	adds r4, r4, r7	@ 0005a784 e419
.org 0x5a786
	lsls r0, r4, #6	@ 0005a786 a001
.org 0x5a788
	str r0, [r6, #92]	@ 0005a788 f065
.org 0x5a78a
	lsls r5, r7, #5	@ 0005a78a 7d01
.org 0x5a78c
	negs r5, r5	@ 0005a78c 6d42
.org 0x5a78e
	str r5, [r6, #100]	@ 0005a78e 7566
.org 0x5a790
	str r7, [r6, #104]	@ 0005a790 b766
.org 0x5a792
	negs r0, r0	@ 0005a792 4042
.org 0x5a794
	adds r1, r5, #0	@ 0005a794 291c
.org 0x5a796
	bl 0x128fb8	@ 0005a796 cef00ffc
.org 0x5a79a
	adds r1, r0, #1	@ 0005a79a 411c
.org 0x5a79c
	lsls r4, r4, #7	@ 0005a79c e401
.org 0x5a79e
	muls r0, r5	@ 0005a79e 6843
.org 0x5a7a0
	adds r4, r4, r0	@ 0005a7a0 2418
.org 0x5a7a2
	adds r0, r1, #0	@ 0005a7a2 081c
.org 0x5a7a4
	muls r0, r4	@ 0005a7a4 6043
.org 0x5a7a6
	asrs r0, r0, #1	@ 0005a7a6 4010
.org 0x5a7a8
	muls r0, r7	@ 0005a7a8 7843
.org 0x5a7aa
	str r0, [r6, #96]	@ 0005a7aa 3066
.org 0x5a7ac
	adds r4, r6, #0	@ 0005a7ac 341c
.org 0x5a7ae
	adds r4, #192	@ 0005a7ae c034
.org 0x5a7b0
	mov r0, r8	@ 0005a7b0 4046
.org 0x5a7b2
	cmp r0, #0	@ 0005a7b2 0028
.org 0x5a7b4
	bne.n 0x5a7c2	@ 0005a7b4 05d1
.org 0x5a7b6
	adds r0, r6, #0	@ 0005a7b6 301c
.org 0x5a7b8
	bl 0x5c3a8	@ 0005a7b8 01f0f6fd
.org 0x5a7bc
	movs r1, #208	@ 0005a7bc d021
.org 0x5a7be
	lsls r1, r1, #8	@ 0005a7be 0902
.org 0x5a7c0
	b.n 0x5a7cc	@ 0005a7c0 04e0
.org 0x5a7c2
	adds r0, r6, #0	@ 0005a7c2 301c
.org 0x5a7c4
	bl 0x5c3a8	@ 0005a7c4 01f0f0fd
.org 0x5a7c8
	movs r1, #128	@ 0005a7c8 8021
.org 0x5a7ca
	lsls r1, r1, #6	@ 0005a7ca 8901
.org 0x5a7cc
	adds r0, r0, r1	@ 0005a7cc 4018
.org 0x5a7ce
	str r0, [r4, #0]	@ 0005a7ce 2060
.org 0x5a7d0
	ldr r0, [r6, #92]	@ 0005a7d0 f06d
.org 0x5a7d2
	negs r0, r0	@ 0005a7d2 4042
.org 0x5a7d4
	ldr r1, [r6, #100]	@ 0005a7d4 716e
.org 0x5a7d6
	bl 0x128fb8	@ 0005a7d6 cef0effb
.org 0x5a7da
	adds r0, #1	@ 0005a7da 0130
.org 0x5a7dc
	strb r0, [r6, #18]	@ 0005a7dc b074
.org 0x5a7de
	ldrb r0, [r6, #15]	@ 0005a7de f07b
.org 0x5a7e0
	adds r0, #1	@ 0005a7e0 0130
.org 0x5a7e2
	strb r0, [r6, #15]	@ 0005a7e2 f073
.org 0x5a7e4
	adds r0, r6, #0	@ 0005a7e4 301c
.org 0x5a7e6
	bl 0x1cff0	@ 0005a7e6 c2f703fc
.org 0x5a7ea
	adds r0, r6, #0	@ 0005a7ea 301c
.org 0x5a7ec
	adds r0, #192	@ 0005a7ec c030
.org 0x5a7ee
	ldr r0, [r0, #0]	@ 0005a7ee 0068
.org 0x5a7f0
	ldr r1, [r6, #84]	@ 0005a7f0 716d
.org 0x5a7f2
	subs r7, r0, r1	@ 0005a7f2 471a
.org 0x5a7f4
	ldr r0, [r6, #104]	@ 0005a7f4 b06e
.org 0x5a7f6
	muls r7, r0	@ 0005a7f6 4743
.org 0x5a7f8
	ldr r0, [r6, #96]	@ 0005a7f8 306e
.org 0x5a7fa
	cmp r7, r0	@ 0005a7fa 8742
.org 0x5a7fc
	ble.n 0x5a806	@ 0005a7fc 03dd
.org 0x5a7fe
	ldr r0, [r6, #92]	@ 0005a7fe f06d
.org 0x5a800
	adds r0, r1, r0	@ 0005a800 0818
.org 0x5a802
	str r0, [r6, #84]	@ 0005a802 7065
.org 0x5a804
	b.n 0x5a83e	@ 0005a804 1be0
.org 0x5a806
	ldrb r0, [r6, #15]	@ 0005a806 f07b
.org 0x5a808
	adds r0, #1	@ 0005a808 0130
.org 0x5a80a
	strb r0, [r6, #15]	@ 0005a80a f073
.org 0x5a80c
	adds r0, r6, #0	@ 0005a80c 301c
.org 0x5a80e
	bl 0x1cff0	@ 0005a80e c2f7effb
.org 0x5a812
	ldr r0, [r6, #84]	@ 0005a812 706d
.org 0x5a814
	ldr r2, [r6, #92]	@ 0005a814 f26d
.org 0x5a816
	adds r0, r0, r2	@ 0005a816 8018
.org 0x5a818
	str r0, [r6, #84]	@ 0005a818 7065
.org 0x5a81a
	ldrb r0, [r6, #18]	@ 0005a81a b07c
.org 0x5a81c
	subs r0, #1	@ 0005a81c 0138
.org 0x5a81e
	strb r0, [r6, #18]	@ 0005a81e b074
.org 0x5a820
	lsls r0, r0, #24	@ 0005a820 0006
.org 0x5a822
	lsrs r1, r0, #24	@ 0005a822 010e
.org 0x5a824
	cmp r1, #0	@ 0005a824 0029
.org 0x5a826
	bne.n 0x5a838	@ 0005a826 07d1
.org 0x5a828
	adds r0, r6, #0	@ 0005a828 301c
.org 0x5a82a
	adds r0, #192	@ 0005a82a c030
.org 0x5a82c
	ldr r0, [r0, #0]	@ 0005a82c 0068
.org 0x5a82e
	str r0, [r6, #84]	@ 0005a82e 7065
.org 0x5a830
	movs r0, #5	@ 0005a830 0520
.org 0x5a832
	strb r0, [r6, #14]	@ 0005a832 b073
.org 0x5a834
	strb r1, [r6, #15]	@ 0005a834 f173
.org 0x5a836
	b.n 0x5a83e	@ 0005a836 02e0
.org 0x5a838
	ldr r0, [r6, #100]	@ 0005a838 706e

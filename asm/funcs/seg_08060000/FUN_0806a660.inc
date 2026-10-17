@ FUN_0806a660  entry 0x0806a660  size 356
.thumb
.org 0x6a660
FUN_0806a660:
	push {r4, r5, r6, r7, lr}	@ 0006a660 f0b5
.org 0x6a662
	mov r7, sl	@ 0006a662 5746
.org 0x6a664
	mov r6, r9	@ 0006a664 4e46
.org 0x6a666
	mov r5, r8	@ 0006a666 4546
.org 0x6a668
	push {r5, r6, r7}	@ 0006a668 e0b4
.org 0x6a66a
	sub sp, #20	@ 0006a66a 85b0
.org 0x6a66c
	adds r2, r0, #0	@ 0006a66c 021c
.org 0x6a66e
	ldrb r0, [r2, #10]	@ 0006a66e 907a
.org 0x6a670
	lsrs r5, r0, #4	@ 0006a670 0509
.org 0x6a672
	movs r0, #1	@ 0006a672 0120
.org 0x6a674
	mov ip, r0	@ 0006a674 8446
.org 0x6a676
	ands r5, r0	@ 0006a676 0540
.org 0x6a678
	mov sl, r5	@ 0006a678 aa46
.org 0x6a67a
	adds r0, r2, #0	@ 0006a67a 101c
.org 0x6a67c
	adds r0, #188	@ 0006a67c bc30
.org 0x6a67e
	ldr r1, [r0, #0]	@ 0006a67e 0168
.org 0x6a680
	adds r0, #4	@ 0006a680 0430
.org 0x6a682
	ldr r0, [r0, #0]	@ 0006a682 0068
.org 0x6a684
	str r0, [sp, #8]	@ 0006a684 0290
.org 0x6a686
	adds r0, r2, #0	@ 0006a686 101c
.org 0x6a688
	adds r0, #164	@ 0006a688 a430
.org 0x6a68a
	movs r3, #0	@ 0006a68a 0023
.org 0x6a68c
	ldrsh r0, [r0, r3]	@ 0006a68c c05e
.org 0x6a68e
	cmp r0, #32	@ 0006a68e 2028
.org 0x6a690
	ble.n 0x6a69c	@ 0006a690 04dd
.org 0x6a692
	adds r1, r2, #0	@ 0006a692 111c
.org 0x6a694
	adds r1, #197	@ 0006a694 c531
.org 0x6a696
	movs r0, #0	@ 0006a696 0020
.org 0x6a698
	strb r0, [r1, #0]	@ 0006a698 0870
.org 0x6a69a
	b.n 0x6a7b8	@ 0006a69a 8de0
.org 0x6a69c
	ldr r6, [r1, #84]	@ 0006a69c 4e6d
.org 0x6a69e
	ldr r7, [r1, #88]	@ 0006a69e 8f6d
.org 0x6a6a0
	adds r0, r1, #0	@ 0006a6a0 081c
.org 0x6a6a2
	adds r0, #180	@ 0006a6a2 b430
.org 0x6a6a4
	ldrb r0, [r0, #0]	@ 0006a6a4 0078
.org 0x6a6a6
	mov r9, r0	@ 0006a6a6 8146
.org 0x6a6a8
	adds r0, r2, #0	@ 0006a6a8 101c
.org 0x6a6aa
	adds r0, #197	@ 0006a6aa c530
.org 0x6a6ac
	ldrb r1, [r0, #0]	@ 0006a6ac 0178
.org 0x6a6ae
	adds r3, r0, #0	@ 0006a6ae 031c
.org 0x6a6b0
	movs r0, #198	@ 0006a6b0 c620
.org 0x6a6b2
	adds r0, r0, r2	@ 0006a6b2 8018
.org 0x6a6b4
	mov r8, r0	@ 0006a6b4 8046
.org 0x6a6b6
	cmp r1, #1	@ 0006a6b6 0129
.org 0x6a6b8
	beq.n 0x6a6cc	@ 0006a6b8 08d0
.org 0x6a6ba
	cmp r1, #1	@ 0006a6ba 0129
.org 0x6a6bc
	bgt.n 0x6a7a4	@ 0006a6bc 72dc
.org 0x6a6be
	cmp r1, #0	@ 0006a6be 0029
.org 0x6a6c0
	bne.n 0x6a7a4	@ 0006a6c0 70d1
.org 0x6a6c2
	movs r0, #24	@ 0006a6c2 1820
.org 0x6a6c4
	mov r1, r8	@ 0006a6c4 4146
.org 0x6a6c6
	strb r0, [r1, #0]	@ 0006a6c6 0870
.org 0x6a6c8
	mov r0, ip	@ 0006a6c8 6046
.org 0x6a6ca
	strb r0, [r3, #0]	@ 0006a6ca 1870
.org 0x6a6cc
	mov r1, r8	@ 0006a6cc 4146
.org 0x6a6ce
	ldrb r4, [r1, #0]	@ 0006a6ce 0c78
.org 0x6a6d0
	subs r4, #1	@ 0006a6d0 013c
.org 0x6a6d2
	cmp r4, #0	@ 0006a6d2 002c
.org 0x6a6d4
	bgt.n 0x6a6e0	@ 0006a6d4 04dc
.org 0x6a6d6
	movs r0, #24	@ 0006a6d6 1820
.org 0x6a6d8
	strb r0, [r1, #0]	@ 0006a6d8 0870
.org 0x6a6da
	movs r0, #2	@ 0006a6da 0220
.org 0x6a6dc
	strb r0, [r3, #0]	@ 0006a6dc 1870
.org 0x6a6de
	b.n 0x6a7b8	@ 0006a6de 6be0
.org 0x6a6e0
	cmp r4, #12	@ 0006a6e0 0c2c
.org 0x6a6e2
	bne.n 0x6a73e	@ 0006a6e2 2cd1
.org 0x6a6e4
	lsls r0, r5, #1	@ 0006a6e4 6800
.org 0x6a6e6
	subs r0, #1	@ 0006a6e6 0138
.org 0x6a6e8
	lsls r0, r0, #12	@ 0006a6e8 0003
.org 0x6a6ea
	negs r3, r0	@ 0006a6ea 4342
.org 0x6a6ec
	adds r0, r5, #1	@ 0006a6ec 681c
.org 0x6a6ee
	mov r5, ip	@ 0006a6ee 6546
.org 0x6a6f0
	ands r0, r5	@ 0006a6f0 2840
.org 0x6a6f2
	lsls r0, r0, #7	@ 0006a6f2 c001
.org 0x6a6f4
	add r0, r9	@ 0006a6f4 4844
.org 0x6a6f6
	lsls r0, r0, #24	@ 0006a6f6 0006
.org 0x6a6f8
	ldr r1, [pc, #164]	@ 0006a6f8 2949
.org 0x6a6fa
	mov ip, r1	@ 0006a6fa 8c46
.org 0x6a6fc
	lsrs r1, r0, #24	@ 0006a6fc 010e
.org 0x6a6fe
	movs r5, #128	@ 0006a6fe 8025
.org 0x6a700
	lsls r5, r5, #23	@ 0006a700 ed05
.org 0x6a702
	adds r0, r0, r5	@ 0006a702 4019
.org 0x6a704
	lsrs r0, r0, #23	@ 0006a704 c00d
.org 0x6a706
	add r0, ip	@ 0006a706 6044
.org 0x6a708
	movs r5, #0	@ 0006a708 0025
.org 0x6a70a
	ldrsh r0, [r0, r5]	@ 0006a70a 405f
.org 0x6a70c
	muls r0, r3	@ 0006a70c 5843
.org 0x6a70e
	cmp r0, #0	@ 0006a70e 0028
.org 0x6a710
	bge.n 0x6a714	@ 0006a710 00da
.org 0x6a712
	adds r0, #255	@ 0006a712 ff30
.org 0x6a714
	asrs r0, r0, #8	@ 0006a714 0012
.org 0x6a716
	lsls r1, r1, #1	@ 0006a716 4900
.org 0x6a718
	add r1, ip	@ 0006a718 6144
.org 0x6a71a
	movs r5, #0	@ 0006a71a 0025
.org 0x6a71c
	ldrsh r1, [r1, r5]	@ 0006a71c 495f
.org 0x6a71e
	adds r0, r0, r6	@ 0006a71e 8019
.org 0x6a720
	str r0, [sp, #0]	@ 0006a720 0090
.org 0x6a722
	adds r0, r3, #0	@ 0006a722 181c
.org 0x6a724
	muls r0, r1	@ 0006a724 4843
.org 0x6a726
	cmp r0, #0	@ 0006a726 0028
.org 0x6a728
	bge.n 0x6a72c	@ 0006a728 00da
.org 0x6a72a
	adds r0, #255	@ 0006a72a ff30
.org 0x6a72c
	asrs r0, r0, #8	@ 0006a72c 0012
.org 0x6a72e
	adds r0, r0, r7	@ 0006a72e c019
.org 0x6a730
	str r0, [sp, #4]	@ 0006a730 0190
.org 0x6a732
	adds r0, r2, #0	@ 0006a732 101c
.org 0x6a734
	mov r1, sp	@ 0006a734 6946
.org 0x6a736
	movs r2, #0	@ 0006a736 0022
.org 0x6a738
	mov r3, sl	@ 0006a738 5346
.org 0x6a73a
	bl 0x9eb70	@ 0006a73a 34f019fa
.org 0x6a73e
	mov r1, r8	@ 0006a73e 4146
.org 0x6a740
	ldrb r0, [r1, #0]	@ 0006a740 0878
.org 0x6a742
	lsls r0, r0, #7	@ 0006a742 c001
.org 0x6a744
	movs r1, #24	@ 0006a744 1821
.org 0x6a746
	bl 0x128fb8	@ 0006a746 bef037fc
.org 0x6a74a
	adds r1, r0, #0	@ 0006a74a 011c
.org 0x6a74c
	ldr r2, [pc, #80]	@ 0006a74c 144a
.org 0x6a74e
	lsls r0, r1, #24	@ 0006a74e 0806
.org 0x6a750
	lsrs r0, r0, #23	@ 0006a750 c00d
.org 0x6a752
	adds r0, r0, r2	@ 0006a752 8018
.org 0x6a754
	movs r3, #0	@ 0006a754 0023
.org 0x6a756
	ldrsh r0, [r0, r3]	@ 0006a756 c05e
.org 0x6a758
	lsls r0, r0, #3	@ 0006a758 c000
.org 0x6a75a
	adds r1, r0, #0	@ 0006a75a 011c
.org 0x6a75c
	mov r0, r9	@ 0006a75c 4846
.org 0x6a75e
	adds r0, #64	@ 0006a75e 4030
.org 0x6a760
	lsls r0, r0, #24	@ 0006a760 0006
.org 0x6a762
	lsrs r0, r0, #23	@ 0006a762 c00d
.org 0x6a764
	adds r0, r0, r2	@ 0006a764 8018
.org 0x6a766
	movs r5, #0	@ 0006a766 0025
.org 0x6a768
	ldrsh r0, [r0, r5]	@ 0006a768 405f
.org 0x6a76a
	muls r0, r1	@ 0006a76a 4843
.org 0x6a76c
	cmp r0, #0	@ 0006a76c 0028
.org 0x6a76e
	bge.n 0x6a772	@ 0006a76e 00da
.org 0x6a770
	adds r0, #255	@ 0006a770 ff30
.org 0x6a772
	asrs r0, r0, #8	@ 0006a772 0012
.org 0x6a774
	adds r0, r6, r0	@ 0006a774 3018
.org 0x6a776
	str r0, [sp, #12]	@ 0006a776 0390
.org 0x6a778
	mov r3, r9	@ 0006a778 4b46
.org 0x6a77a
	lsls r0, r3, #1	@ 0006a77a 5800
.org 0x6a77c
	adds r0, r0, r2	@ 0006a77c 8018
.org 0x6a77e
	movs r5, #0	@ 0006a77e 0025
.org 0x6a780
	ldrsh r0, [r0, r5]	@ 0006a780 405f
.org 0x6a782
	muls r0, r1	@ 0006a782 4843
.org 0x6a784
	cmp r0, #0	@ 0006a784 0028
.org 0x6a786
	bge.n 0x6a78a	@ 0006a786 00da
.org 0x6a788
	adds r0, #255	@ 0006a788 ff30
.org 0x6a78a
	asrs r0, r0, #8	@ 0006a78a 0012
.org 0x6a78c
	adds r6, r7, r0	@ 0006a78c 3e18
.org 0x6a78e
	str r6, [sp, #16]	@ 0006a78e 0496
.org 0x6a790
	ldr r0, [sp, #12]	@ 0006a790 0398
.org 0x6a792
	ldr r1, [sp, #16]	@ 0006a792 0499
.org 0x6a794
	ldr r2, [sp, #8]	@ 0006a794 029a
.org 0x6a796
	str r0, [r2, #84]	@ 0006a796 5065
.org 0x6a798
	str r1, [r2, #88]	@ 0006a798 9165
.org 0x6a79a
	mov r3, r8	@ 0006a79a 4346
.org 0x6a79c
	strb r4, [r3, #0]	@ 0006a79c 1c70
.org 0x6a79e
	b.n 0x6a7b8	@ 0006a79e 0be0
.org 0x6a7a0
	.byte 0x0c,0x93,0x12,0x08	@ 0006a7a0 data
.org 0x6a7a4
	adds r0, r2, #0	@ 0006a7a4 101c
.org 0x6a7a6
	adds r0, #198	@ 0006a7a6 c630
.org 0x6a7a8
	ldrb r4, [r0, #0]	@ 0006a7a8 0478
.org 0x6a7aa
	subs r4, #1	@ 0006a7aa 013c
.org 0x6a7ac
	cmp r4, #0	@ 0006a7ac 002c
.org 0x6a7ae
	bgt.n 0x6a7b6	@ 0006a7ae 02dc
.org 0x6a7b0
	movs r0, #0	@ 0006a7b0 0020
.org 0x6a7b2
	strb r0, [r3, #0]	@ 0006a7b2 1870
.org 0x6a7b4
	b.n 0x6a7b8	@ 0006a7b4 00e0
.org 0x6a7b6
	strb r4, [r0, #0]	@ 0006a7b6 0470
.org 0x6a7b8
	add sp, #20	@ 0006a7b8 05b0
.org 0x6a7ba
	pop {r3, r4, r5}	@ 0006a7ba 38bc
.org 0x6a7bc
	mov r8, r3	@ 0006a7bc 9846
.org 0x6a7be
	mov r9, r4	@ 0006a7be a146
.org 0x6a7c0
	mov sl, r5	@ 0006a7c0 aa46
.org 0x6a7c2
	pop {r4, r5, r6, r7}	@ 0006a7c2 f0bc

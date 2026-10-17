@ FUN_0811a5ec  entry 0x0811a5ec  size 422
.thumb
.org 0x11a5ec
FUN_0811a5ec:
	push {r4, r5, r6, r7, lr}	@ 0011a5ec f0b5
.org 0x11a5ee
	mov r7, r9	@ 0011a5ee 4f46
.org 0x11a5f0
	mov r6, r8	@ 0011a5f0 4646
.org 0x11a5f2
	push {r6, r7}	@ 0011a5f2 c0b4
.org 0x11a5f4
	adds r5, r0, #0	@ 0011a5f4 051c
.org 0x11a5f6
	ldr r1, [pc, #80]	@ 0011a5f6 1449
.org 0x11a5f8
	adds r0, r5, r1	@ 0011a5f8 6818
.org 0x11a5fa
	ldr r7, [r0, #0]	@ 0011a5fa 0768
.org 0x11a5fc
	ldr r2, [pc, #76]	@ 0011a5fc 134a
.org 0x11a5fe
	adds r4, r5, r2	@ 0011a5fe ac18
.org 0x11a600
	ldrb r1, [r4, #0]	@ 0011a600 2178
.org 0x11a602
	cmp r1, #0	@ 0011a602 0029
.org 0x11a604
	bne.n 0x11a616	@ 0011a604 07d1
.org 0x11a606
	movs r3, #221	@ 0011a606 dd23
.org 0x11a608
	lsls r3, r3, #4	@ 0011a608 1b01
.org 0x11a60a
	adds r0, r5, r3	@ 0011a60a e818
.org 0x11a60c
	strb r1, [r0, #3]	@ 0011a60c c170
.org 0x11a60e
	strb r1, [r0, #11]	@ 0011a60e c172
.org 0x11a610
	ldrb r0, [r4, #0]	@ 0011a610 2078
.org 0x11a612
	adds r0, #1	@ 0011a612 0130
.org 0x11a614
	strb r0, [r4, #0]	@ 0011a614 2070
.org 0x11a616
	movs r0, #20	@ 0011a616 1420
.org 0x11a618
	bl 0x25d8	@ 0011a618 e7f6deff
.org 0x11a61c
	adds r0, r5, #0	@ 0011a61c 281c
.org 0x11a61e
	bl 0x11ae68	@ 0011a61e 00f023fc
.org 0x11a622
	ldr r2, [pc, #44]	@ 0011a622 0b4a
.org 0x11a624
	ldrh r1, [r2, #4]	@ 0011a624 9188
.org 0x11a626
	movs r0, #2	@ 0011a626 0220
.org 0x11a628
	mov r8, r0	@ 0011a628 8046
.org 0x11a62a
	movs r0, #2	@ 0011a62a 0220
.org 0x11a62c
	ands r0, r1	@ 0011a62c 0840
.org 0x11a62e
	lsls r0, r0, #16	@ 0011a62e 0004
.org 0x11a630
	lsrs r6, r0, #16	@ 0011a630 060c
.org 0x11a632
	cmp r6, #0	@ 0011a632 002e
.org 0x11a634
	beq.n 0x11a654	@ 0011a634 0ed0
.org 0x11a636
	movs r0, #3	@ 0011a636 0320
.org 0x11a638
	bl 0x2b10	@ 0011a638 e8f66afa
.org 0x11a63c
	movs r0, #0	@ 0011a63c 0020
.org 0x11a63e
	mov r1, r8	@ 0011a63e 4146
.org 0x11a640
	strb r1, [r5, #3]	@ 0011a640 e970
.org 0x11a642
	strb r0, [r4, #0]	@ 0011a642 2070
.org 0x11a644
	b.n 0x11a7be	@ 0011a644 bbe0
.org 0x11a646
	.byte 0x00	@ 0011a646 data
.org 0x11a647
	.byte 0x00	@ 0011a647 data
.org 0x11a648
	.byte 0xa8,0x63,0x00,0x00	@ 0011a648 data
.org 0x11a64c
	.byte 0xf7,0x0d,0x00,0x00	@ 0011a64c data
.org 0x11a650
	.byte 0x60,0x07,0x00,0x02	@ 0011a650 data
.org 0x11a654
	movs r0, #1	@ 0011a654 0120
.org 0x11a656
	ands r0, r1	@ 0011a656 0840
.org 0x11a658
	cmp r0, #0	@ 0011a658 0028
.org 0x11a65a
	beq.n 0x11a682	@ 0011a65a 12d0
.org 0x11a65c
	movs r0, #2	@ 0011a65c 0220
.org 0x11a65e
	bl 0x2b10	@ 0011a65e e8f657fa
.org 0x11a662
	adds r2, r7, #0	@ 0011a662 3a1c
.org 0x11a664
	adds r2, #180	@ 0011a664 b432
.org 0x11a666
	movs r3, #221	@ 0011a666 dd23
.org 0x11a668
	lsls r3, r3, #4	@ 0011a668 1b01
.org 0x11a66a
	adds r0, r5, r3	@ 0011a66a e818
.org 0x11a66c
	ldrb r0, [r0, #3]	@ 0011a66c c078
.org 0x11a66e
	adds r3, #4	@ 0011a66e 0433
.org 0x11a670
	adds r1, r5, r3	@ 0011a670 e918
.org 0x11a672
	adds r0, r1, r0	@ 0011a672 0818
.org 0x11a674
	ldrb r0, [r0, #0]	@ 0011a674 0078
.org 0x11a676
	strb r0, [r2, #16]	@ 0011a676 1074
.org 0x11a678
	mov r0, r8	@ 0011a678 4046
.org 0x11a67a
	strb r0, [r5, #3]	@ 0011a67a e870
.org 0x11a67c
	strb r6, [r4, #0]	@ 0011a67c 2670
.org 0x11a67e
	adds r6, r1, #0	@ 0011a67e 0e1c
.org 0x11a680
	b.n 0x11a70e	@ 0011a680 45e0
.org 0x11a682
	ldrh r1, [r2, #6]	@ 0011a682 d188
.org 0x11a684
	movs r0, #64	@ 0011a684 4020
.org 0x11a686
	ands r0, r1	@ 0011a686 0840
.org 0x11a688
	cmp r0, #0	@ 0011a688 0028
.org 0x11a68a
	beq.n 0x11a6cc	@ 0011a68a 1fd0
.org 0x11a68c
	movs r1, #221	@ 0011a68c dd21
.org 0x11a68e
	lsls r1, r1, #4	@ 0011a68e 0901
.org 0x11a690
	adds r4, r5, r1	@ 0011a690 6c18
.org 0x11a692
	ldrb r0, [r4, #3]	@ 0011a692 e078
.org 0x11a694
	cmp r0, #0	@ 0011a694 0028
.org 0x11a696
	beq.n 0x11a6b0	@ 0011a696 0bd0
.org 0x11a698
	movs r0, #1	@ 0011a698 0120
.org 0x11a69a
	bl 0x2b10	@ 0011a69a e8f639fa
.org 0x11a69e
	ldrb r0, [r4, #3]	@ 0011a69e e078
.org 0x11a6a0
	subs r0, #1	@ 0011a6a0 0138
.org 0x11a6a2
	strb r0, [r4, #3]	@ 0011a6a2 e070
.org 0x11a6a4
	ldr r2, [pc, #4]	@ 0011a6a4 014a
.org 0x11a6a6
	adds r6, r5, r2	@ 0011a6a6 ae18
.org 0x11a6a8
	b.n 0x11a70e	@ 0011a6a8 31e0
.org 0x11a6aa
	.byte 0x00	@ 0011a6aa data
.org 0x11a6ab
	.byte 0x00	@ 0011a6ab data
.org 0x11a6ac
	.byte 0xd4,0x0d,0x00,0x00	@ 0011a6ac data
.org 0x11a6b0
	ldrb r0, [r4, #12]	@ 0011a6b0 207b
.org 0x11a6b2
	ldr r3, [pc, #20]	@ 0011a6b2 054b
.org 0x11a6b4
	adds r6, r5, r3	@ 0011a6b4 ee18
.org 0x11a6b6
	cmp r0, #0	@ 0011a6b6 0028
.org 0x11a6b8
	beq.n 0x11a70e	@ 0011a6b8 29d0
.org 0x11a6ba
	movs r0, #1	@ 0011a6ba 0120
.org 0x11a6bc
	bl 0x2b10	@ 0011a6bc e8f628fa
.org 0x11a6c0
	ldrb r0, [r4, #11]	@ 0011a6c0 e07a
.org 0x11a6c2
	subs r0, #1	@ 0011a6c2 0138
.org 0x11a6c4
	b.n 0x11a70c	@ 0011a6c4 22e0
.org 0x11a6c6
	.byte 0x00	@ 0011a6c6 data
.org 0x11a6c7
	.byte 0x00	@ 0011a6c7 data
.org 0x11a6c8
	.byte 0xd4,0x0d,0x00,0x00	@ 0011a6c8 data
.org 0x11a6cc
	movs r0, #128	@ 0011a6cc 8020
.org 0x11a6ce
	ands r0, r1	@ 0011a6ce 0840
.org 0x11a6d0
	ldr r1, [pc, #36]	@ 0011a6d0 0949
.org 0x11a6d2
	adds r6, r5, r1	@ 0011a6d2 6e18
.org 0x11a6d4
	cmp r0, #0	@ 0011a6d4 0028
.org 0x11a6d6
	beq.n 0x11a70e	@ 0011a6d6 1ad0
.org 0x11a6d8
	movs r2, #221	@ 0011a6d8 dd22
.org 0x11a6da
	lsls r2, r2, #4	@ 0011a6da 1201
.org 0x11a6dc
	adds r4, r5, r2	@ 0011a6dc ac18
.org 0x11a6de
	ldrb r0, [r4, #3]	@ 0011a6de e078
.org 0x11a6e0
	adds r0, #1	@ 0011a6e0 0130
.org 0x11a6e2
	ldrb r3, [r4, #10]	@ 0011a6e2 a37a
.org 0x11a6e4
	cmp r0, r3	@ 0011a6e4 9842
.org 0x11a6e6
	bge.n 0x11a6fc	@ 0011a6e6 09da
.org 0x11a6e8
	movs r0, #1	@ 0011a6e8 0120
.org 0x11a6ea
	bl 0x2b10	@ 0011a6ea e8f611fa
.org 0x11a6ee
	ldrb r0, [r4, #3]	@ 0011a6ee e078
.org 0x11a6f0
	adds r0, #1	@ 0011a6f0 0130
.org 0x11a6f2
	strb r0, [r4, #3]	@ 0011a6f2 e070
.org 0x11a6f4
	b.n 0x11a70e	@ 0011a6f4 0be0
.org 0x11a6f6
	.byte 0x00	@ 0011a6f6 data
.org 0x11a6f7
	.byte 0x00	@ 0011a6f7 data
.org 0x11a6f8
	.byte 0xd4,0x0d,0x00,0x00	@ 0011a6f8 data
.org 0x11a6fc
	ldrb r0, [r4, #13]	@ 0011a6fc 607b
.org 0x11a6fe
	cmp r0, #0	@ 0011a6fe 0028
.org 0x11a700
	beq.n 0x11a70e	@ 0011a700 05d0
.org 0x11a702
	movs r0, #1	@ 0011a702 0120
.org 0x11a704
	bl 0x2b10	@ 0011a704 e8f604fa
.org 0x11a708
	ldrb r0, [r4, #11]	@ 0011a708 e07a
.org 0x11a70a
	adds r0, #1	@ 0011a70a 0130
.org 0x11a70c
	strb r0, [r4, #11]	@ 0011a70c e072
.org 0x11a70e
	adds r0, r5, #0	@ 0011a70e 281c
.org 0x11a710
	bl 0x11ae68	@ 0011a710 00f0aafb
.org 0x11a714
	movs r4, #0	@ 0011a714 0024
.org 0x11a716
	ldr r0, [pc, #16]	@ 0011a716 0448
.org 0x11a718
	mov r8, r0	@ 0011a718 8046
.org 0x11a71a
	movs r1, #235	@ 0011a71a eb21
.org 0x11a71c
	lsls r1, r1, #2	@ 0011a71c 8900
.org 0x11a71e
	add r1, r8	@ 0011a71e 4144
.org 0x11a720
	mov r9, r1	@ 0011a720 8946
.org 0x11a722
	ldr r7, [pc, #8]	@ 0011a722 024f
.org 0x11a724
	b.n 0x11a750	@ 0011a724 14e0
.org 0x11a726
	.byte 0x00	@ 0011a726 data
.org 0x11a727
	.byte 0x00	@ 0011a727 data
.org 0x11a728
	.byte 0xf8,0xcf,0x86,0x08	@ 0011a728 data
.org 0x11a72c
	.byte 0x5f,0x0e,0x01,0x09	@ 0011a72c data
.org 0x11a730
	ldrb r0, [r1, #0]	@ 0011a730 0878
.org 0x11a732
	movs r2, #200	@ 0011a732 c822
.org 0x11a734
	lsls r2, r2, #1	@ 0011a734 5200
.org 0x11a736
	adds r0, r0, r2	@ 0011a736 8018
.org 0x11a738
	lsls r0, r0, #1	@ 0011a738 4000
.org 0x11a73a
	add r0, r8	@ 0011a73a 4044
.org 0x11a73c
	ldrh r0, [r0, #0]	@ 0011a73c 0088
.org 0x11a73e
	adds r0, r0, r7	@ 0011a73e c019
.org 0x11a740
	lsls r2, r4, #1	@ 0011a740 6200
.org 0x11a742
	adds r2, #2	@ 0011a742 0232
.org 0x11a744
	movs r1, #3	@ 0011a744 0321
.org 0x11a746
	bl 0x10d85c	@ 0011a746 f3f789f8
.org 0x11a74a
	adds r0, r4, #1	@ 0011a74a 601c
.org 0x11a74c
	lsls r0, r0, #24	@ 0011a74c 0006
.org 0x11a74e
	lsrs r4, r0, #24	@ 0011a74e 040e
.org 0x11a750
	cmp r4, #5	@ 0011a750 052c
.org 0x11a752
	bhi.n 0x11a770	@ 0011a752 0dd8
.org 0x11a754
	adds r1, r6, r4	@ 0011a754 3119
.org 0x11a756
	ldrb r0, [r1, #0]	@ 0011a756 0878
.org 0x11a758
	cmp r0, #255	@ 0011a758 ff28
.org 0x11a75a
	bne.n 0x11a730	@ 0011a75a e9d1
.org 0x11a75c
	cmp r4, #0	@ 0011a75c 002c
.org 0x11a75e
	bne.n 0x11a770	@ 0011a75e 07d1
.org 0x11a760
	mov r3, r9	@ 0011a760 4b46
.org 0x11a762
	ldrh r0, [r3, #0]	@ 0011a762 1888
.org 0x11a764
	adds r0, r0, r7	@ 0011a764 c019
.org 0x11a766
	movs r1, #3	@ 0011a766 0321
.org 0x11a768
	movs r2, #2	@ 0011a768 0222
.org 0x11a76a
	bl 0x10d85c	@ 0011a76a f3f777f8
.org 0x11a76e
	b.n 0x11a74a	@ 0011a76e ece7
.org 0x11a770
	movs r1, #221	@ 0011a770 dd21
.org 0x11a772
	lsls r1, r1, #4	@ 0011a772 0901
.org 0x11a774
	adds r0, r5, r1	@ 0011a774 6818
.org 0x11a776
	ldrb r0, [r0, #3]	@ 0011a776 c078
.org 0x11a778
	adds r2, r6, r0	@ 0011a778 3218
.org 0x11a77a
	ldrb r0, [r2, #0]	@ 0011a77a 1078
.org 0x11a77c
	cmp r0, #255	@ 0011a77c ff28
.org 0x11a77e
	bne.n 0x11a7a4	@ 0011a77e 11d1
.org 0x11a780
	ldr r0, [pc, #20]	@ 0011a780 0548
.org 0x11a782
	ldr r2, [pc, #24]	@ 0011a782 064a
.org 0x11a784
	adds r0, r0, r2	@ 0011a784 8018
.org 0x11a786
	ldrh r0, [r0, #0]	@ 0011a786 0088
.org 0x11a788
	ldr r1, [pc, #20]	@ 0011a788 0549
.org 0x11a78a
	adds r0, r0, r1	@ 0011a78a 4018
.org 0x11a78c
	movs r1, #1	@ 0011a78c 0121
.org 0x11a78e
	movs r2, #18	@ 0011a78e 1222
.org 0x11a790
	bl 0x10d85c	@ 0011a790 f3f764f8

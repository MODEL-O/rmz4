@ FUN_0801d5e0  entry 0x0801d5e0  size 1794
.thumb
.org 0x1d5e0
FUN_0801d5e0:
	push {r4, r5, r6, r7, lr}	@ 0001d5e0 f0b5
.org 0x1d5e2
	mov r7, sl	@ 0001d5e2 5746
.org 0x1d5e4
	mov r6, r9	@ 0001d5e4 4e46
.org 0x1d5e6
	mov r5, r8	@ 0001d5e6 4546
.org 0x1d5e8
	push {r5, r6, r7}	@ 0001d5e8 e0b4
.org 0x1d5ea
	sub sp, #48	@ 0001d5ea 8cb0
.org 0x1d5ec
	str r0, [sp, #0]	@ 0001d5ec 0090
.org 0x1d5ee
	ldr r4, [pc, #192]	@ 0001d5ee 304c
.org 0x1d5f0
	movs r1, #138	@ 0001d5f0 8a21
.org 0x1d5f2
	lsls r1, r1, #3	@ 0001d5f2 c900
.org 0x1d5f4
	adds r0, r4, r1	@ 0001d5f4 6018
.org 0x1d5f6
	ldrb r0, [r0, #0]	@ 0001d5f6 0078
.org 0x1d5f8
	adds r5, r0, #0	@ 0001d5f8 051c
.org 0x1d5fa
	cmp r5, #4	@ 0001d5fa 042d
.org 0x1d5fc
	beq.n 0x1d600	@ 0001d5fc 00d0
.org 0x1d5fe
	b.n 0x1da38	@ 0001d5fe 1be2
.org 0x1d600
	ldr r7, [pc, #176]	@ 0001d600 2c4f
.org 0x1d602
	ldr r2, [sp, #0]	@ 0001d602 009a
.org 0x1d604
	ldr r0, [r2, #0]	@ 0001d604 1068
.org 0x1d606
	ldr r3, [pc, #176]	@ 0001d606 2c4b
.org 0x1d608
	adds r0, r0, r3	@ 0001d608 c018
.org 0x1d60a
	movs r1, #240	@ 0001d60a f021
.org 0x1d60c
	lsls r1, r1, #10	@ 0001d60c 8902
.org 0x1d60e
	bl 0x128fb8	@ 0001d60e 0bf1d3fc
.org 0x1d612
	lsls r1, r0, #4	@ 0001d612 0101
.org 0x1d614
	subs r1, r1, r0	@ 0001d614 091a
.org 0x1d616
	lsls r1, r1, #14	@ 0001d616 8903
.org 0x1d618
	str r1, [sp, #32]	@ 0001d618 0891
.org 0x1d61a
	ldr r0, [pc, #160]	@ 0001d61a 2848
.org 0x1d61c
	ldr r1, [r0, #16]	@ 0001d61c 0169
.org 0x1d61e
	ldr r0, [sp, #0]	@ 0001d61e 0098
.org 0x1d620
	bl 0x128f80	@ 0001d620 0bf1aefc
.org 0x1d624
	lsls r0, r0, #24	@ 0001d624 0006
.org 0x1d626
	lsrs r1, r0, #24	@ 0001d626 010e
.org 0x1d628
	ldr r2, [pc, #148]	@ 0001d628 254a
.org 0x1d62a
	adds r0, r4, r2	@ 0001d62a a018
.org 0x1d62c
	ldr r0, [r0, #0]	@ 0001d62c 0068
.org 0x1d62e
	str r0, [sp, #4]	@ 0001d62e 0190
.org 0x1d630
	movs r3, #139	@ 0001d630 8b23
.org 0x1d632
	lsls r3, r3, #3	@ 0001d632 db00
.org 0x1d634
	adds r0, r4, r3	@ 0001d634 e018
.org 0x1d636
	ldr r0, [r0, #0]	@ 0001d636 0068
.org 0x1d638
	str r0, [sp, #8]	@ 0001d638 0290
.org 0x1d63a
	movs r4, #1	@ 0001d63a 0124
.org 0x1d63c
	str r4, [sp, #24]	@ 0001d63c 0694
.org 0x1d63e
	ldrh r0, [r0, #20]	@ 0001d63e 808a
.org 0x1d640
	cmp r0, #0	@ 0001d640 0028
.org 0x1d642
	beq.n 0x1d660	@ 0001d642 0dd0
.org 0x1d644
	ldr r0, [sp, #24]	@ 0001d644 0698
.org 0x1d646
	adds r0, #1	@ 0001d646 0130
.org 0x1d648
	lsls r0, r0, #24	@ 0001d648 0006
.org 0x1d64a
	lsrs r0, r0, #24	@ 0001d64a 000e
.org 0x1d64c
	str r0, [sp, #24]	@ 0001d64c 0690
.org 0x1d64e
	lsls r0, r0, #1	@ 0001d64e 4000
.org 0x1d650
	ldr r2, [sp, #24]	@ 0001d650 069a
.org 0x1d652
	adds r0, r0, r2	@ 0001d652 8018
.org 0x1d654
	lsls r0, r0, #2	@ 0001d654 8000
.org 0x1d656
	ldr r3, [sp, #8]	@ 0001d656 029b
.org 0x1d658
	adds r0, r0, r3	@ 0001d658 c018
.org 0x1d65a
	ldrh r0, [r0, #8]	@ 0001d65a 0089
.org 0x1d65c
	cmp r0, #0	@ 0001d65c 0028
.org 0x1d65e
	bne.n 0x1d644	@ 0001d65e f1d1
.org 0x1d660
	ldr r0, [sp, #24]	@ 0001d660 0698
.org 0x1d662
	subs r0, #1	@ 0001d662 0138
.org 0x1d664
	lsls r0, r0, #24	@ 0001d664 0006
.org 0x1d666
	lsrs r0, r0, #24	@ 0001d666 000e
.org 0x1d668
	str r0, [sp, #24]	@ 0001d668 0690
.org 0x1d66a
	ldr r0, [pc, #68]	@ 0001d66a 1148
.org 0x1d66c
	ldr r4, [pc, #84]	@ 0001d66c 154c
.org 0x1d66e
	adds r0, r0, r4	@ 0001d66e 0019
.org 0x1d670
	ldrb r0, [r0, #0]	@ 0001d670 0078
.org 0x1d672
	cmp r0, r1	@ 0001d672 8842
.org 0x1d674
	beq.n 0x1d67c	@ 0001d674 02d0
.org 0x1d676
	adds r0, r5, #0	@ 0001d676 281c
.org 0x1d678
	bl 0x1e25c	@ 0001d678 00f0f0fd
.org 0x1d67c
	ldr r1, [sp, #0]	@ 0001d67c 0099
.org 0x1d67e
	ldr r0, [r1, #0]	@ 0001d67e 0868
.org 0x1d680
	ldr r2, [pc, #68]	@ 0001d680 114a
.org 0x1d682
	adds r2, r2, r0	@ 0001d682 1218
.org 0x1d684
	asrs r2, r2, #8	@ 0001d684 1212
.org 0x1d686
	mov sl, r2	@ 0001d686 9246
.org 0x1d688
	movs r3, #1	@ 0001d688 0123
.org 0x1d68a
	mov r9, r3	@ 0001d68a 9946
.org 0x1d68c
	movs r4, #0	@ 0001d68c 0024
.org 0x1d68e
	str r4, [sp, #20]	@ 0001d68e 0594
.org 0x1d690
	ldr r1, [pc, #36]	@ 0001d690 0949
.org 0x1d692
	adds r0, r0, r1	@ 0001d692 4018
.org 0x1d694
	movs r1, #240	@ 0001d694 f021
.org 0x1d696
	lsls r1, r1, #10	@ 0001d696 8902
.org 0x1d698
	bl 0x129050	@ 0001d698 0bf1dafc
.org 0x1d69c
	movs r2, #240	@ 0001d69c f022
.org 0x1d69e
	lsls r2, r2, #8	@ 0001d69e 1202
.org 0x1d6a0
	adds r1, r0, r2	@ 0001d6a0 8118
.org 0x1d6a2
	ldr r0, [pc, #40]	@ 0001d6a2 0a48
.org 0x1d6a4
	cmp r1, r0	@ 0001d6a4 8142
.org 0x1d6a6
	bgt.n 0x1d6d0	@ 0001d6a6 13dc
.org 0x1d6a8
	movs r3, #255	@ 0001d6a8 ff23
.org 0x1d6aa
	str r3, [sp, #28]	@ 0001d6aa 0793
.org 0x1d6ac
	b.n 0x1d6e0	@ 0001d6ac 18e0
.org 0x1d6ae
	.byte 0x00	@ 0001d6ae data
.org 0x1d6af
	.byte 0x00	@ 0001d6af data
.org 0x1d6b0
	.byte 0x40,0xe4,0x02,0x02	@ 0001d6b0 data
.org 0x1d6b4
	.byte 0xff,0xff,0xff,0x7f	@ 0001d6b4 data
.org 0x1d6b8
	.byte 0x00,0x10,0xff,0xff	@ 0001d6b8 data
.org 0x1d6bc
	.byte 0x80,0xca,0x83,0x08	@ 0001d6bc data
.org 0x1d6c0
	.byte 0x54,0x04,0x00,0x00	@ 0001d6c0 data
.org 0x1d6c4
	.byte 0x51,0x04,0x00,0x00	@ 0001d6c4 data
.org 0x1d6c8
	.byte 0x00,0x40,0xff,0xff	@ 0001d6c8 data
.org 0x1d6cc
	.byte 0xff,0x0f,0x02,0x00	@ 0001d6cc data
.org 0x1d6d0
	movs r0, #228	@ 0001d6d0 e420
.org 0x1d6d2
	lsls r0, r0, #10	@ 0001d6d2 8002
.org 0x1d6d4
	movs r4, #0	@ 0001d6d4 0024
.org 0x1d6d6
	str r4, [sp, #28]	@ 0001d6d6 0794
.org 0x1d6d8
	cmp r1, r0	@ 0001d6d8 8142
.org 0x1d6da
	ble.n 0x1d6e0	@ 0001d6da 01dd
.org 0x1d6dc
	movs r0, #1	@ 0001d6dc 0120
.org 0x1d6de
	str r0, [sp, #28]	@ 0001d6de 0790
.org 0x1d6e0
	movs r3, #1	@ 0001d6e0 0123
.org 0x1d6e2
	ldr r1, [sp, #24]	@ 0001d6e2 0699
.org 0x1d6e4
	cmp r3, r1	@ 0001d6e4 8b42
.org 0x1d6e6
	bhi.n 0x1d75a	@ 0001d6e6 38d8
.org 0x1d6e8
	ldr r2, [sp, #28]	@ 0001d6e8 079a
.org 0x1d6ea
	lsls r0, r2, #24	@ 0001d6ea 1006
.org 0x1d6ec
	asrs r4, r0, #24	@ 0001d6ec 0416
.org 0x1d6ee
	movs r5, #180	@ 0001d6ee b425
.org 0x1d6f0
	lsls r5, r5, #2	@ 0001d6f0 ad00
.org 0x1d6f2
	adds r6, r4, #0	@ 0001d6f2 261c
.org 0x1d6f4
	lsls r1, r3, #1	@ 0001d6f4 5900
.org 0x1d6f6
	adds r0, r1, r3	@ 0001d6f6 c818
.org 0x1d6f8
	lsls r0, r0, #2	@ 0001d6f8 8000
.org 0x1d6fa
	ldr r2, [sp, #8]	@ 0001d6fa 029a
.org 0x1d6fc
	adds r0, r0, r2	@ 0001d6fc 8018
.org 0x1d6fe
	ldr r2, [r0, #0]	@ 0001d6fe 0268
.org 0x1d700
	cmp r4, #0	@ 0001d700 002c
.org 0x1d702
	bge.n 0x1d710	@ 0001d702 05da
.org 0x1d704
	cmp r2, r5	@ 0001d704 aa42
.org 0x1d706
	ble.n 0x1d710	@ 0001d706 03dd
.org 0x1d708
	ldr r0, [pc, #0]	@ 0001d708 0048
.org 0x1d70a
	b.n 0x1d726	@ 0001d70a 0ce0
.org 0x1d70c
	.byte 0x40,0xfc,0xff,0xff	@ 0001d70c data
.org 0x1d710
	cmp r6, #0	@ 0001d710 002e
.org 0x1d712
	ble.n 0x1d728	@ 0001d712 09dd
.org 0x1d714
	adds r0, r1, r3	@ 0001d714 c818
.org 0x1d716
	lsls r0, r0, #2	@ 0001d716 8000
.org 0x1d718
	ldr r1, [sp, #8]	@ 0001d718 0299
.org 0x1d71a
	adds r0, r0, r1	@ 0001d71a 4018
.org 0x1d71c
	ldr r0, [r0, #0]	@ 0001d71c 0068
.org 0x1d71e
	cmp r0, r5	@ 0001d71e a842
.org 0x1d720
	bgt.n 0x1d728	@ 0001d720 02dc
.org 0x1d722
	movs r0, #240	@ 0001d722 f020
.org 0x1d724
	lsls r0, r0, #2	@ 0001d724 8000
.org 0x1d726
	adds r2, r2, r0	@ 0001d726 1218
.org 0x1d728
	ldr r1, [sp, #32]	@ 0001d728 0899
.org 0x1d72a
	asrs r0, r1, #8	@ 0001d72a 0812
.org 0x1d72c
	adds r2, r2, r0	@ 0001d72c 1218
.org 0x1d72e
	mov r0, sl	@ 0001d72e 5046
.org 0x1d730
	subs r1, r2, r0	@ 0001d730 111a
.org 0x1d732
	cmp r1, #0	@ 0001d732 0029
.org 0x1d734
	blt.n 0x1d74e	@ 0001d734 0bdb
.org 0x1d736
	ldr r0, [pc, #104]	@ 0001d736 1a48
.org 0x1d738
	cmp r1, r0	@ 0001d738 8142
.org 0x1d73a
	bgt.n 0x1d746	@ 0001d73a 04dc
.org 0x1d73c
	ldr r0, [sp, #20]	@ 0001d73c 0598
.org 0x1d73e
	adds r0, #1	@ 0001d73e 0130
.org 0x1d740
	lsls r0, r0, #24	@ 0001d740 0006
.org 0x1d742
	lsrs r0, r0, #24	@ 0001d742 000e
.org 0x1d744
	str r0, [sp, #20]	@ 0001d744 0590
.org 0x1d746
	cmp r7, r2	@ 0001d746 9742
.org 0x1d748
	ble.n 0x1d74e	@ 0001d748 01dd
.org 0x1d74a
	adds r7, r2, #0	@ 0001d74a 171c
.org 0x1d74c
	mov r9, r3	@ 0001d74c 9946
.org 0x1d74e
	adds r0, r3, #1	@ 0001d74e 581c
.org 0x1d750
	lsls r0, r0, #24	@ 0001d750 0006
.org 0x1d752
	lsrs r3, r0, #24	@ 0001d752 030e
.org 0x1d754
	ldr r1, [sp, #24]	@ 0001d754 0699
.org 0x1d756
	cmp r3, r1	@ 0001d756 8b42
.org 0x1d758
	bls.n 0x1d6f4	@ 0001d758 ccd9
.org 0x1d75a
	ldr r2, [pc, #72]	@ 0001d75a 124a
.org 0x1d75c
	ldr r3, [pc, #72]	@ 0001d75c 124b
.org 0x1d75e
	adds r0, r2, r3	@ 0001d75e d018
.org 0x1d760
	ldrh r1, [r0, #0]	@ 0001d760 0188
.org 0x1d762
	movs r0, #1	@ 0001d762 0120
.org 0x1d764
	ands r0, r1	@ 0001d764 0840
.org 0x1d766
	cmp r0, #0	@ 0001d766 0028
.org 0x1d768
	beq.n 0x1d76c	@ 0001d768 00d0
.org 0x1d76a
	b.n 0x1dd5c	@ 0001d76a f7e2
.org 0x1d76c
	movs r3, #0	@ 0001d76c 0023
.org 0x1d76e
	ldr r4, [sp, #20]	@ 0001d76e 059c
.org 0x1d770
	cmp r3, r4	@ 0001d770 a342
.org 0x1d772
	bcc.n 0x1d776	@ 0001d772 00d3
.org 0x1d774
	b.n 0x1d8d8	@ 0001d774 b0e0
.org 0x1d776
	ldr r0, [sp, #28]	@ 0001d776 0798
.org 0x1d778
	lsls r0, r0, #24	@ 0001d778 0006
.org 0x1d77a
	str r0, [sp, #36]	@ 0001d77a 0990
.org 0x1d77c
	mov r1, r9	@ 0001d77c 4946
.org 0x1d77e
	lsls r0, r1, #1	@ 0001d77e 4800
.org 0x1d780
	add r0, r9	@ 0001d780 4844
.org 0x1d782
	lsls r0, r0, #2	@ 0001d782 8000
.org 0x1d784
	ldr r4, [sp, #8]	@ 0001d784 029c
.org 0x1d786
	adds r2, r0, r4	@ 0001d786 0219
.org 0x1d788
	ldr r7, [r2, #0]	@ 0001d788 1768
.org 0x1d78a
	ldr r1, [sp, #28]	@ 0001d78a 0799
.org 0x1d78c
	lsls r0, r1, #24	@ 0001d78c 0806
.org 0x1d78e
	cmp r0, #0	@ 0001d78e 0028
.org 0x1d790
	bge.n 0x1d7b0	@ 0001d790 0eda
.org 0x1d792
	movs r0, #180	@ 0001d792 b420
.org 0x1d794
	lsls r0, r0, #2	@ 0001d794 8000
.org 0x1d796
	cmp r7, r0	@ 0001d796 8742
.org 0x1d798
	ble.n 0x1d7b0	@ 0001d798 0add
.org 0x1d79a
	ldr r4, [pc, #16]	@ 0001d79a 044c
.org 0x1d79c
	adds r7, r7, r4	@ 0001d79c 3f19
.org 0x1d79e
	b.n 0x1d7c6	@ 0001d79e 12e0
.org 0x1d7a0
	.byte 0x7f,0x01,0x00,0x00	@ 0001d7a0 data
.org 0x1d7a4
	.byte 0x40,0xe4,0x02,0x02	@ 0001d7a4 data
.org 0x1d7a8
	.byte 0x4e,0x04,0x00,0x00	@ 0001d7a8 data
.org 0x1d7ac
	.byte 0x40,0xfc,0xff,0xff	@ 0001d7ac data
.org 0x1d7b0
	ldr r0, [sp, #36]	@ 0001d7b0 0998
.org 0x1d7b2
	cmp r0, #0	@ 0001d7b2 0028
.org 0x1d7b4
	ble.n 0x1d7c6	@ 0001d7b4 07dd
.org 0x1d7b6
	ldr r1, [r2, #0]	@ 0001d7b6 1168
.org 0x1d7b8
	movs r0, #180	@ 0001d7b8 b420
.org 0x1d7ba
	lsls r0, r0, #2	@ 0001d7ba 8000
.org 0x1d7bc
	cmp r1, r0	@ 0001d7bc 8142
.org 0x1d7be
	bgt.n 0x1d7c6	@ 0001d7be 02dc
.org 0x1d7c0
	movs r1, #240	@ 0001d7c0 f021
.org 0x1d7c2
	lsls r1, r1, #2	@ 0001d7c2 8900
.org 0x1d7c4
	adds r7, r7, r1	@ 0001d7c4 7f18
.org 0x1d7c6
	lsls r0, r7, #8	@ 0001d7c6 3802
.org 0x1d7c8
	ldr r4, [sp, #32]	@ 0001d7c8 089c
.org 0x1d7ca
	adds r7, r0, r4	@ 0001d7ca 0719
.org 0x1d7cc
	ldr r0, [r2, #4]	@ 0001d7cc 5068
.org 0x1d7ce
	lsls r0, r0, #8	@ 0001d7ce 0002
.org 0x1d7d0
	subs r6, r0, #1	@ 0001d7d0 461e
.org 0x1d7d2
	ldr r1, [sp, #0]	@ 0001d7d2 0099
.org 0x1d7d4
	ldr r0, [r1, #4]	@ 0001d7d4 4868
.org 0x1d7d6
	subs r0, r6, r0	@ 0001d7d6 301a
.org 0x1d7d8
	movs r4, #160	@ 0001d7d8 a024
.org 0x1d7da
	lsls r4, r4, #8	@ 0001d7da 2402
.org 0x1d7dc
	adds r0, r0, r4	@ 0001d7dc 0019
.org 0x1d7de
	ldr r1, [pc, #144]	@ 0001d7de 2449
.org 0x1d7e0
	cmp r0, r1	@ 0001d7e0 8842
.org 0x1d7e2
	bhi.n 0x1d8b8	@ 0001d7e2 69d8
.org 0x1d7e4
	ldr r1, [pc, #140]	@ 0001d7e4 2349
.org 0x1d7e6
	mov r4, r9	@ 0001d7e6 4c46
.org 0x1d7e8
	asrs r0, r4, #5	@ 0001d7e8 6011
.org 0x1d7ea
	lsls r0, r0, #2	@ 0001d7ea 8000
.org 0x1d7ec
	adds r0, r0, r1	@ 0001d7ec 4018
.org 0x1d7ee
	mov r8, r0	@ 0001d7ee 8046
.org 0x1d7f0
	movs r0, #31	@ 0001d7f0 1f20
.org 0x1d7f2
	ands r0, r4	@ 0001d7f2 2040
.org 0x1d7f4
	movs r4, #1	@ 0001d7f4 0124
.org 0x1d7f6
	mov sl, r4	@ 0001d7f6 a246
.org 0x1d7f8
	lsls r4, r0	@ 0001d7f8 8440
.org 0x1d7fa
	mov sl, r4	@ 0001d7fa a246
.org 0x1d7fc
	mov r4, r8	@ 0001d7fc 4446
.org 0x1d7fe
	ldr r0, [r4, #0]	@ 0001d7fe 2068
.org 0x1d800
	mov r4, sl	@ 0001d800 5446
.org 0x1d802
	ands r0, r4	@ 0001d802 2040
.org 0x1d804
	cmp r0, #0	@ 0001d804 0028
.org 0x1d806
	beq.n 0x1d8b8	@ 0001d806 57d0
.org 0x1d808
	ldr r4, [pc, #108]	@ 0001d808 1b4c
.org 0x1d80a
	adds r0, r1, r4	@ 0001d80a 0819
.org 0x1d80c
	ldr r0, [r0, #0]	@ 0001d80c 0068
.org 0x1d80e
	cmp r6, r0	@ 0001d80e 8642
.org 0x1d810
	blt.n 0x1d8b8	@ 0001d810 52db
.org 0x1d812
	adds r4, #4	@ 0001d812 0434
.org 0x1d814
	adds r0, r1, r4	@ 0001d814 0819
.org 0x1d816
	ldr r0, [r0, #0]	@ 0001d816 0068
.org 0x1d818
	cmp r6, r0	@ 0001d818 8642
.org 0x1d81a
	bgt.n 0x1d8b8	@ 0001d81a 4ddc
.org 0x1d81c
	subs r4, #20	@ 0001d81c 143c
.org 0x1d81e
	adds r0, r1, r4	@ 0001d81e 0819
.org 0x1d820
	ldrh r0, [r0, #0]	@ 0001d820 0088
.org 0x1d822
	cmp r0, #1	@ 0001d822 0128
.org 0x1d824
	bne.n 0x1d838	@ 0001d824 08d1
.org 0x1d826
	ldrh r0, [r2, #8]	@ 0001d826 1089
.org 0x1d828
	lsls r0, r0, #3	@ 0001d828 c000
.org 0x1d82a
	ldr r1, [sp, #4]	@ 0001d82a 0199
.org 0x1d82c
	adds r0, r0, r1	@ 0001d82c 4018
.org 0x1d82e
	ldrb r1, [r0, #5]	@ 0001d82e 4179
.org 0x1d830
	movs r0, #2	@ 0001d830 0220
.org 0x1d832
	ands r0, r1	@ 0001d832 0840
.org 0x1d834
	cmp r0, #0	@ 0001d834 0028
.org 0x1d836
	bne.n 0x1d8b8	@ 0001d836 3fd1
.org 0x1d838
	str r2, [sp, #40]	@ 0001d838 0a92
.org 0x1d83a
	str r3, [sp, #44]	@ 0001d83a 0b93
.org 0x1d83c
	bl 0x1e1c4	@ 0001d83c 00f0c2fc
.org 0x1d840
	adds r4, r0, #0	@ 0001d840 041c
.org 0x1d842
	ldr r2, [sp, #40]	@ 0001d842 0a9a
.org 0x1d844
	ldr r3, [sp, #44]	@ 0001d844 0b9b
.org 0x1d846
	cmp r4, #0	@ 0001d846 002c
.org 0x1d848
	beq.n 0x1d8b8	@ 0001d848 36d0
.org 0x1d84a
	ldrh r1, [r2, #8]	@ 0001d84a 1189
.org 0x1d84c
	lsls r1, r1, #3	@ 0001d84c c900
.org 0x1d84e
	ldr r0, [sp, #4]	@ 0001d84e 0198
.org 0x1d850
	adds r1, r1, r0	@ 0001d850 0918
.org 0x1d852
	ldrb r0, [r1, #1]	@ 0001d852 4878
.org 0x1d854
	ldrb r1, [r1, #2]	@ 0001d854 8978
.org 0x1d856
	bl 0x1dd7c	@ 0001d856 00f091fa
.org 0x1d85a
	adds r5, r0, #0	@ 0001d85a 051c
.org 0x1d85c
	ldr r2, [sp, #40]	@ 0001d85c 0a9a
.org 0x1d85e
	ldr r3, [sp, #44]	@ 0001d85e 0b9b
.org 0x1d860
	cmp r5, #0	@ 0001d860 002d
.org 0x1d862
	bne.n 0x1d87c	@ 0001d862 0bd1
.org 0x1d864
	adds r0, r4, #0	@ 0001d864 201c
.org 0x1d866
	bl 0x1e204	@ 0001d866 00f0cdfc
.org 0x1d86a
	ldr r2, [sp, #40]	@ 0001d86a 0a9a
.org 0x1d86c
	ldr r3, [sp, #44]	@ 0001d86c 0b9b
.org 0x1d86e
	b.n 0x1d8b8	@ 0001d86e 23e0
.org 0x1d870
	.byte 0xff,0x3f,0x01,0x00	@ 0001d870 data
.org 0x1d874
	.byte 0x40,0xe4,0x02,0x02	@ 0001d874 data
.org 0x1d878
	.byte 0x5c,0x04,0x00,0x00	@ 0001d878 data
.org 0x1d87c
	ldrh r0, [r2, #8]	@ 0001d87c 1089
.org 0x1d87e
	lsls r0, r0, #3	@ 0001d87e c000
.org 0x1d880
	ldr r1, [sp, #4]	@ 0001d880 0199
.org 0x1d882
	adds r0, r0, r1	@ 0001d882 4018
.org 0x1d884
	ldrb r0, [r0, #3]	@ 0001d884 c078
.org 0x1d886
	strb r0, [r5, #16]	@ 0001d886 2874
.org 0x1d888
	ldrh r0, [r2, #8]	@ 0001d888 1089
.org 0x1d88a
	lsls r0, r0, #3	@ 0001d88a c000
.org 0x1d88c
	adds r0, r0, r1	@ 0001d88c 4018
.org 0x1d88e
	ldrb r0, [r0, #4]	@ 0001d88e 0079
.org 0x1d890
	strb r0, [r5, #17]	@ 0001d890 6874
.org 0x1d892
	str r7, [r5, #84]	@ 0001d892 6f65
.org 0x1d894
	str r6, [r5, #88]	@ 0001d894 ae65
.org 0x1d896
	str r5, [r4, #4]	@ 0001d896 6560
.org 0x1d898
	mov r0, r9	@ 0001d898 4846
.org 0x1d89a
	strh r0, [r4, #8]	@ 0001d89a 2081
.org 0x1d89c
	ldrh r0, [r2, #8]	@ 0001d89c 1089
.org 0x1d89e
	lsls r0, r0, #3	@ 0001d89e c000
.org 0x1d8a0
	adds r0, r0, r1	@ 0001d8a0 4018
.org 0x1d8a2
	ldrb r0, [r0, #0]	@ 0001d8a2 0078
.org 0x1d8a4
	strh r0, [r4, #10]	@ 0001d8a4 6081
.org 0x1d8a6
	ldr r0, [r5, #84]	@ 0001d8a6 686d
.org 0x1d8a8
	ldr r1, [r5, #88]	@ 0001d8a8 a96d
.org 0x1d8aa
	str r0, [r4, #12]	@ 0001d8aa e060
.org 0x1d8ac
	str r1, [r4, #16]	@ 0001d8ac 2161
.org 0x1d8ae
	mov r1, r8	@ 0001d8ae 4146
.org 0x1d8b0
	ldr r0, [r1, #0]	@ 0001d8b0 0868
.org 0x1d8b2
	mov r4, sl	@ 0001d8b2 5446
.org 0x1d8b4
	bics r0, r4	@ 0001d8b4 a043
.org 0x1d8b6
	str r0, [r1, #0]	@ 0001d8b6 0860
.org 0x1d8b8
	adds r0, r3, #1	@ 0001d8b8 581c
.org 0x1d8ba
	lsls r0, r0, #24	@ 0001d8ba 0006
.org 0x1d8bc
	lsrs r3, r0, #24	@ 0001d8bc 030e
.org 0x1d8be
	adds r2, #12	@ 0001d8be 0c32
.org 0x1d8c0
	movs r0, #1	@ 0001d8c0 0120
.org 0x1d8c2
	add r9, r0	@ 0001d8c2 8144
.org 0x1d8c4
	ldr r1, [sp, #24]	@ 0001d8c4 0699
.org 0x1d8c6
	cmp r1, r9	@ 0001d8c6 4945
.org 0x1d8c8
	bge.n 0x1d8d0	@ 0001d8c8 02da
.org 0x1d8ca
	ldr r2, [sp, #8]	@ 0001d8ca 029a
.org 0x1d8cc
	adds r2, #12	@ 0001d8cc 0c32
.org 0x1d8ce
	mov r9, r0	@ 0001d8ce 8146
.org 0x1d8d0
	ldr r4, [sp, #20]	@ 0001d8d0 059c
.org 0x1d8d2
	cmp r3, r4	@ 0001d8d2 a342
.org 0x1d8d4
	bcs.n 0x1d8d8	@ 0001d8d4 00d2
.org 0x1d8d6
	b.n 0x1d788	@ 0001d8d6 57e7
.org 0x1d8d8
	ldr r0, [sp, #0]	@ 0001d8d8 0098
.org 0x1d8da
	ldr r0, [r0, #0]	@ 0001d8da 0068
.org 0x1d8dc
	mov sl, r0	@ 0001d8dc 8246
.org 0x1d8de
	ldr r1, [sp, #0]	@ 0001d8de 0099
.org 0x1d8e0
	ldr r1, [r1, #4]	@ 0001d8e0 4968
.org 0x1d8e2
	str r1, [sp, #16]	@ 0001d8e2 0491
.org 0x1d8e4
	ldr r2, [pc, #52]	@ 0001d8e4 0d4a
.org 0x1d8e6
	ldr r3, [pc, #56]	@ 0001d8e6 0e4b
.org 0x1d8e8
	adds r0, r2, r3	@ 0001d8e8 d018
.org 0x1d8ea
	ldr r4, [r0, #0]	@ 0001d8ea 0468
.org 0x1d8ec
	cmp r4, #0	@ 0001d8ec 002c
.org 0x1d8ee
	bne.n 0x1d8f2	@ 0001d8ee 00d1
.org 0x1d8f0
	b.n 0x1dd5c	@ 0001d8f0 34e2
.org 0x1d8f2
	movs r0, #0	@ 0001d8f2 0020
.org 0x1d8f4
	mov r9, r0	@ 0001d8f4 8146
.org 0x1d8f6
	ldr r1, [r4, #0]	@ 0001d8f6 2168
.org 0x1d8f8
	str r1, [sp, #12]	@ 0001d8f8 0391
.org 0x1d8fa
	ldr r5, [r4, #4]	@ 0001d8fa 6568
.org 0x1d8fc
	cmp r5, #0	@ 0001d8fc 002d
.org 0x1d8fe
	beq.n 0x1d9cc	@ 0001d8fe 65d0
.org 0x1d900
	ldrh r1, [r4, #10]	@ 0001d900 6189
.org 0x1d902
	movs r3, #16	@ 0001d902 1023
.org 0x1d904
	movs r0, #16	@ 0001d904 1020
.org 0x1d906
	ands r0, r1	@ 0001d906 0840
.org 0x1d908
	lsls r0, r0, #16	@ 0001d908 0004
.org 0x1d90a
	asrs r2, r0, #16	@ 0001d90a 0214
.org 0x1d90c
	cmp r2, #0	@ 0001d90c 002a
.org 0x1d90e
	beq.n 0x1d924	@ 0001d90e 09d0
.org 0x1d910
	ldrb r0, [r5, #12]	@ 0001d910 287b
.org 0x1d912
	cmp r0, #2	@ 0001d912 0228
.org 0x1d914
	bls.n 0x1d9be	@ 0001d914 53d9
.org 0x1d916
	mov r2, r9	@ 0001d916 4a46
.org 0x1d918
	str r2, [r4, #4]	@ 0001d918 6260
.org 0x1d91a
	b.n 0x1d9be	@ 0001d91a 50e0
.org 0x1d91c
	.byte 0x40,0xe4,0x02,0x02	@ 0001d91c data
.org 0x1d920
	.byte 0x44,0x04,0x00,0x00	@ 0001d920 data
.org 0x1d924
	ldrb r0, [r5, #12]	@ 0001d924 287b
.org 0x1d926
	cmp r0, #2	@ 0001d926 0228
.org 0x1d928
	bls.n 0x1d942	@ 0001d928 0bd9
.org 0x1d92a
	movs r0, #4	@ 0001d92a 0420
.org 0x1d92c
	ands r0, r1	@ 0001d92c 0840
.org 0x1d92e
	cmp r0, #0	@ 0001d92e 0028
.org 0x1d930
	beq.n 0x1d938	@ 0001d930 02d0
.org 0x1d932
	movs r0, #1	@ 0001d932 0120
.org 0x1d934
	orrs r0, r1	@ 0001d934 0843
.org 0x1d936
	strh r0, [r4, #10]	@ 0001d936 6081
.org 0x1d938
	ldrh r0, [r4, #10]	@ 0001d938 6089
.org 0x1d93a
	orrs r0, r3	@ 0001d93a 1843
.org 0x1d93c
	strh r0, [r4, #10]	@ 0001d93c 6081
.org 0x1d93e
	str r2, [r4, #4]	@ 0001d93e 6260
.org 0x1d940
	b.n 0x1d9be	@ 0001d940 3de0
.org 0x1d942
	cmp r0, #1	@ 0001d942 0128
.org 0x1d944
	bls.n 0x1d95c	@ 0001d944 0ad9
.org 0x1d946
	movs r0, #4	@ 0001d946 0420
.org 0x1d948
	ands r0, r1	@ 0001d948 0840
.org 0x1d94a
	cmp r0, #0	@ 0001d94a 0028
.org 0x1d94c
	beq.n 0x1d954	@ 0001d94c 02d0
.org 0x1d94e
	movs r0, #1	@ 0001d94e 0120
.org 0x1d950
	orrs r0, r1	@ 0001d950 0843
.org 0x1d952
	strh r0, [r4, #10]	@ 0001d952 6081
.org 0x1d954
	ldrh r0, [r4, #10]	@ 0001d954 6089
.org 0x1d956
	orrs r0, r3	@ 0001d956 1843
.org 0x1d958
	strh r0, [r4, #10]	@ 0001d958 6081
.org 0x1d95a
	b.n 0x1d9be	@ 0001d95a 30e0
.org 0x1d95c
	movs r3, #12	@ 0001d95c 0c23
.org 0x1d95e
	mov r8, r3	@ 0001d95e 9846
.org 0x1d960
	mov r0, r8	@ 0001d960 4046
.org 0x1d962
	ands r0, r1	@ 0001d962 0840
.org 0x1d964
	mov r8, r0	@ 0001d964 8046
.org 0x1d966
	cmp r0, #0	@ 0001d966 0028
.org 0x1d968
	bne.n 0x1d9be	@ 0001d968 29d1
.org 0x1d96a
	ldr r7, [r5, #84]	@ 0001d96a 6f6d
.org 0x1d96c
	ldr r6, [r5, #88]	@ 0001d96c ae6d
.org 0x1d96e
	mov r1, sl	@ 0001d96e 5146
.org 0x1d970
	subs r0, r7, r1	@ 0001d970 781a
.org 0x1d972
	movs r3, #208	@ 0001d972 d023
.org 0x1d974
	lsls r3, r3, #8	@ 0001d974 1b02
.org 0x1d976
	adds r0, r0, r3	@ 0001d976 c018
.org 0x1d978
	ldr r2, [pc, #172]	@ 0001d978 2b4a
.org 0x1d97a
	cmp r0, r2	@ 0001d97a 9042
.org 0x1d97c
	bhi.n 0x1d98e	@ 0001d97c 07d8
.org 0x1d97e
	ldr r1, [sp, #16]	@ 0001d97e 0499
.org 0x1d980
	subs r0, r6, r1	@ 0001d980 701a
.org 0x1d982
	movs r1, #192	@ 0001d982 c021
.org 0x1d984
	lsls r1, r1, #8	@ 0001d984 0902
.org 0x1d986
	adds r0, r0, r1	@ 0001d986 4018
.org 0x1d988
	ldr r1, [pc, #160]	@ 0001d988 2849
.org 0x1d98a
	cmp r0, r1	@ 0001d98a 8842
.org 0x1d98c
	bls.n 0x1d9be	@ 0001d98c 17d9
.org 0x1d98e
	ldr r7, [r4, #12]	@ 0001d98e e768
.org 0x1d990
	ldr r6, [r4, #16]	@ 0001d990 2669
.org 0x1d992
	mov r1, sl	@ 0001d992 5146
.org 0x1d994
	subs r0, r7, r1	@ 0001d994 781a
.org 0x1d996
	adds r0, r0, r3	@ 0001d996 c018
.org 0x1d998
	cmp r0, r2	@ 0001d998 9042
.org 0x1d99a
	bhi.n 0x1d9ac	@ 0001d99a 07d8
.org 0x1d99c
	ldr r2, [sp, #16]	@ 0001d99c 049a
.org 0x1d99e
	subs r0, r6, r2	@ 0001d99e b01a
.org 0x1d9a0
	movs r3, #192	@ 0001d9a0 c023
.org 0x1d9a2
	lsls r3, r3, #8	@ 0001d9a2 1b02
.org 0x1d9a4
	adds r0, r0, r3	@ 0001d9a4 c018
.org 0x1d9a6
	ldr r1, [pc, #132]	@ 0001d9a6 2149
.org 0x1d9a8
	cmp r0, r1	@ 0001d9a8 8842
.org 0x1d9aa
	bls.n 0x1d9be	@ 0001d9aa 08d9
.org 0x1d9ac
	adds r0, r5, #0	@ 0001d9ac 281c
.org 0x1d9ae
	bl 0x1df34	@ 0001d9ae 00f0c1fa
.org 0x1d9b2
	ldrh r0, [r4, #10]	@ 0001d9b2 6089
.org 0x1d9b4
	movs r1, #17	@ 0001d9b4 1121
.org 0x1d9b6
	orrs r0, r1	@ 0001d9b6 0843
.org 0x1d9b8
	strh r0, [r4, #10]	@ 0001d9b8 6081
.org 0x1d9ba
	mov r0, r8	@ 0001d9ba 4046
.org 0x1d9bc
	str r0, [r4, #4]	@ 0001d9bc 6060
.org 0x1d9be
	cmp r5, #0	@ 0001d9be 002d
.org 0x1d9c0
	beq.n 0x1d9cc	@ 0001d9c0 04d0
.org 0x1d9c2
	ldrh r1, [r4, #10]	@ 0001d9c2 6189
.org 0x1d9c4
	movs r0, #16	@ 0001d9c4 1020
.org 0x1d9c6
	ands r0, r1	@ 0001d9c6 0840
.org 0x1d9c8
	cmp r0, #0	@ 0001d9c8 0028
.org 0x1d9ca
	beq.n 0x1da1c	@ 0001d9ca 27d0
.org 0x1d9cc
	ldr r7, [r4, #12]	@ 0001d9cc e768
.org 0x1d9ce
	ldr r6, [r4, #16]	@ 0001d9ce 2669
.org 0x1d9d0
	mov r1, sl	@ 0001d9d0 5146
.org 0x1d9d2
	subs r0, r7, r1	@ 0001d9d2 781a
.org 0x1d9d4
	movs r2, #192	@ 0001d9d4 c022
.org 0x1d9d6
	lsls r2, r2, #8	@ 0001d9d6 1202
.org 0x1d9d8
	adds r0, r0, r2	@ 0001d9d8 8018
.org 0x1d9da
	ldr r1, [pc, #80]	@ 0001d9da 1449
.org 0x1d9dc
	cmp r0, r1	@ 0001d9dc 8842
.org 0x1d9de
	bhi.n 0x1d9f0	@ 0001d9de 07d8
.org 0x1d9e0
	ldr r3, [sp, #16]	@ 0001d9e0 049b
.org 0x1d9e2
	subs r0, r6, r3	@ 0001d9e2 f01a
.org 0x1d9e4
	movs r1, #160	@ 0001d9e4 a021
.org 0x1d9e6
	lsls r1, r1, #8	@ 0001d9e6 0902
.org 0x1d9e8
	adds r0, r0, r1	@ 0001d9e8 4018
.org 0x1d9ea
	ldr r1, [pc, #68]	@ 0001d9ea 1149
.org 0x1d9ec
	cmp r0, r1	@ 0001d9ec 8842
.org 0x1d9ee
	bls.n 0x1da1c	@ 0001d9ee 15d9
.org 0x1d9f0
	ldrh r1, [r4, #10]	@ 0001d9f0 6189
.org 0x1d9f2
	movs r3, #1	@ 0001d9f2 0123
.org 0x1d9f4
	adds r0, r3, #0	@ 0001d9f4 181c
.org 0x1d9f6
	ands r0, r1	@ 0001d9f6 0840
.org 0x1d9f8
	cmp r0, #0	@ 0001d9f8 0028
.org 0x1d9fa
	beq.n 0x1da16	@ 0001d9fa 0cd0
.org 0x1d9fc
	ldr r0, [pc, #52]	@ 0001d9fc 0d48
.org 0x1d9fe
	ldrh r1, [r4, #8]	@ 0001d9fe 2189
.org 0x1da00
	lsls r2, r1, #16	@ 0001da00 0a04
.org 0x1da02
	asrs r2, r2, #21	@ 0001da02 5215
.org 0x1da04
	lsls r2, r2, #2	@ 0001da04 9200
.org 0x1da06
	adds r2, r2, r0	@ 0001da06 1218
.org 0x1da08
	movs r0, #31	@ 0001da08 1f20
.org 0x1da0a
	ands r0, r1	@ 0001da0a 0840
.org 0x1da0c
	adds r1, r3, #0	@ 0001da0c 191c
.org 0x1da0e
	lsls r1, r0	@ 0001da0e 8140
.org 0x1da10
	ldr r0, [r2, #0]	@ 0001da10 1068
.org 0x1da12
	orrs r0, r1	@ 0001da12 0843
.org 0x1da14
	str r0, [r2, #0]	@ 0001da14 1060
.org 0x1da16
	adds r0, r4, #0	@ 0001da16 201c
.org 0x1da18
	bl 0x1e204	@ 0001da18 00f0f4fb
.org 0x1da1c
	ldr r4, [sp, #12]	@ 0001da1c 039c
.org 0x1da1e
	cmp r4, #0	@ 0001da1e 002c
.org 0x1da20
	beq.n 0x1da24	@ 0001da20 00d0
.org 0x1da22
	b.n 0x1d8f6	@ 0001da22 68e7
.org 0x1da24
	b.n 0x1dd5c	@ 0001da24 9ae1
.org 0x1da26
	.byte 0x00	@ 0001da26 data
.org 0x1da27
	.byte 0x00	@ 0001da27 data
.org 0x1da28
	.byte 0xff,0x9f,0x01,0x00	@ 0001da28 data
.org 0x1da2c
	.byte 0xff,0x7f,0x01,0x00	@ 0001da2c data
.org 0x1da30
	.byte 0xff,0x3f,0x01,0x00	@ 0001da30 data
.org 0x1da34
	.byte 0x40,0xe4,0x02,0x02	@ 0001da34 data
.org 0x1da38
	ldr r1, [pc, #104]	@ 0001da38 1a49
.org 0x1da3a
	lsls r0, r5, #2	@ 0001da3a a800
.org 0x1da3c
	adds r0, r0, r1	@ 0001da3c 4018
.org 0x1da3e
	ldr r1, [r0, #0]	@ 0001da3e 0168
.org 0x1da40
	ldr r0, [sp, #0]	@ 0001da40 0098
.org 0x1da42
	bl 0x128f80	@ 0001da42 0bf19dfa
.org 0x1da46
	lsls r0, r0, #24	@ 0001da46 0006
.org 0x1da48
	lsrs r1, r0, #24	@ 0001da48 010e
.org 0x1da4a
	ldr r2, [pc, #92]	@ 0001da4a 174a
.org 0x1da4c
	adds r0, r4, r2	@ 0001da4c a018
.org 0x1da4e
	ldr r0, [r0, #0]	@ 0001da4e 0068
.org 0x1da50
	str r0, [sp, #4]	@ 0001da50 0190
.org 0x1da52
	movs r3, #139	@ 0001da52 8b23
.org 0x1da54
	lsls r3, r3, #3	@ 0001da54 db00
.org 0x1da56
	adds r0, r4, r3	@ 0001da56 e018
.org 0x1da58
	ldr r0, [r0, #0]	@ 0001da58 0068
.org 0x1da5a
	str r0, [sp, #8]	@ 0001da5a 0290
.org 0x1da5c
	subs r2, #3	@ 0001da5c 033a
.org 0x1da5e
	adds r0, r4, r2	@ 0001da5e a018
.org 0x1da60
	ldrb r0, [r0, #0]	@ 0001da60 0078
.org 0x1da62
	cmp r0, r1	@ 0001da62 8842
.org 0x1da64
	beq.n 0x1da6c	@ 0001da64 02d0
.org 0x1da66
	adds r0, r5, #0	@ 0001da66 281c
.org 0x1da68
	bl 0x1e25c	@ 0001da68 00f0f8fb
.org 0x1da6c
	ldr r3, [sp, #0]	@ 0001da6c 009b
.org 0x1da6e
	ldr r1, [r3, #0]	@ 0001da6e 1968
.org 0x1da70
	ldr r0, [pc, #56]	@ 0001da70 0e48
.org 0x1da72
	adds r0, r0, r1	@ 0001da72 4018
.org 0x1da74
	asrs r0, r0, #8	@ 0001da74 0012
.org 0x1da76
	mov sl, r0	@ 0001da76 8246
.org 0x1da78
	ldr r2, [pc, #52]	@ 0001da78 0d4a
.org 0x1da7a
	adds r0, r4, r2	@ 0001da7a a018
.org 0x1da7c
	ldrh r0, [r0, #0]	@ 0001da7c 0088
.org 0x1da7e
	mov r9, r0	@ 0001da7e 8146
.org 0x1da80
	lsls r0, r0, #1	@ 0001da80 4000
.org 0x1da82
	add r0, r9	@ 0001da82 4844
.org 0x1da84
	lsls r0, r0, #2	@ 0001da84 8000
.org 0x1da86
	ldr r3, [sp, #8]	@ 0001da86 029b
.org 0x1da88
	adds r2, r0, r3	@ 0001da88 c218
.org 0x1da8a
	ldr r0, [r2, #0]	@ 0001da8a 1068
.org 0x1da8c
	adds r3, r1, #0	@ 0001da8c 0b1c
.org 0x1da8e
	cmp sl, r0	@ 0001da8e 8245
.org 0x1da90
	bge.n 0x1dab4	@ 0001da90 10da
.org 0x1da92
	adds r1, r2, #0	@ 0001da92 111c
.org 0x1da94
	subs r1, #12	@ 0001da94 0c39
.org 0x1da96
	movs r4, #1	@ 0001da96 0124
.org 0x1da98
	negs r4, r4	@ 0001da98 6442
.org 0x1da9a
	add r9, r4	@ 0001da9a a144
.org 0x1da9c
	ldr r0, [r1, #0]	@ 0001da9c 0868
.org 0x1da9e
	cmp sl, r0	@ 0001da9e 8245
.org 0x1daa0
	blt.n 0x1da94	@ 0001daa0 f8db
.org 0x1daa2
	b.n 0x1dab8	@ 0001daa2 09e0
.org 0x1daa4
	.byte 0x80,0xca,0x83,0x08	@ 0001daa4 data
.org 0x1daa8
	.byte 0x54,0x04,0x00,0x00	@ 0001daa8 data
.org 0x1daac
	.byte 0x00,0x40,0xff,0xff	@ 0001daac data
.org 0x1dab0
	.byte 0x64,0x04,0x00,0x00	@ 0001dab0 data
.org 0x1dab4
	movs r4, #1	@ 0001dab4 0124
.org 0x1dab6
	add r9, r4	@ 0001dab6 a144
.org 0x1dab8
	mov r1, r9	@ 0001dab8 4946
.org 0x1daba
	lsls r0, r1, #1	@ 0001daba 4800
.org 0x1dabc
	add r0, r9	@ 0001dabc 4844
.org 0x1dabe
	lsls r0, r0, #2	@ 0001dabe 8000
.org 0x1dac0
	ldr r2, [sp, #8]	@ 0001dac0 029a
.org 0x1dac2
	adds r0, r0, r2	@ 0001dac2 8018
.org 0x1dac4
	ldr r0, [r0, #0]	@ 0001dac4 0068
.org 0x1dac6
	cmp sl, r0	@ 0001dac6 8245
.org 0x1dac8
	bge.n 0x1dab4	@ 0001dac8 f4da
.org 0x1daca
	ldr r4, [pc, #212]	@ 0001daca 354c
.org 0x1dacc
	ldr r1, [pc, #212]	@ 0001dacc 3549
.org 0x1dace
	adds r0, r4, r1	@ 0001dace 6018
.org 0x1dad0
	mov r2, r9	@ 0001dad0 4a46
.org 0x1dad2
	strh r2, [r0, #0]	@ 0001dad2 0280
.org 0x1dad4
	subs r1, #22	@ 0001dad4 1639
.org 0x1dad6
	adds r0, r4, r1	@ 0001dad6 6018
.org 0x1dad8
	ldrh r1, [r0, #0]	@ 0001dad8 0188
.org 0x1dada
	movs r0, #1	@ 0001dada 0120
.org 0x1dadc
	ands r0, r1	@ 0001dadc 0840
.org 0x1dade
	cmp r0, #0	@ 0001dade 0028
.org 0x1dae0
	beq.n 0x1dae4	@ 0001dae0 00d0
.org 0x1dae2
	b.n 0x1dd5c	@ 0001dae2 3be1
.org 0x1dae4
	movs r2, #192	@ 0001dae4 c022
.org 0x1dae6
	lsls r2, r2, #8	@ 0001dae6 1202
.org 0x1dae8
	adds r2, r2, r3	@ 0001dae8 d218
.org 0x1daea
	mov sl, r2	@ 0001daea 9246
.org 0x1daec
	ldr r3, [sp, #0]	@ 0001daec 009b
.org 0x1daee
	ldr r3, [r3, #4]	@ 0001daee 5b68
.org 0x1daf0
	str r3, [sp, #16]	@ 0001daf0 0493
.org 0x1daf2
	mov r4, r9	@ 0001daf2 4c46
.org 0x1daf4
	lsls r0, r4, #1	@ 0001daf4 6000
.org 0x1daf6
	add r0, r9	@ 0001daf6 4844
.org 0x1daf8
	lsls r0, r0, #2	@ 0001daf8 8000
.org 0x1dafa
	ldr r2, [sp, #8]	@ 0001dafa 029a
.org 0x1dafc
	adds r1, r0, r2	@ 0001dafc 8118
.org 0x1dafe
	ldr r0, [r1, #0]	@ 0001dafe 0868
.org 0x1db00
	lsls r7, r0, #8	@ 0001db00 0702
.org 0x1db02
	cmp sl, r7	@ 0001db02 ba45
.org 0x1db04
	ble.n 0x1dbf0	@ 0001db04 74dd
.org 0x1db06
	adds r2, r1, #0	@ 0001db06 0a1c
.org 0x1db08
	ldr r0, [r2, #4]	@ 0001db08 5068
.org 0x1db0a
	lsls r0, r0, #8	@ 0001db0a 0002
.org 0x1db0c
	subs r6, r0, #1	@ 0001db0c 461e
.org 0x1db0e
	ldr r3, [sp, #16]	@ 0001db0e 049b
.org 0x1db10
	subs r0, r6, r3	@ 0001db10 f01a
.org 0x1db12
	movs r4, #160	@ 0001db12 a024
.org 0x1db14
	lsls r4, r4, #8	@ 0001db14 2402
.org 0x1db16
	adds r0, r0, r4	@ 0001db16 0019
.org 0x1db18
	ldr r1, [pc, #140]	@ 0001db18 2349
.org 0x1db1a
	cmp r0, r1	@ 0001db1a 8842
.org 0x1db1c
	bhi.n 0x1dbe2	@ 0001db1c 61d8
.org 0x1db1e
	ldr r1, [pc, #128]	@ 0001db1e 2049
.org 0x1db20
	mov r3, r9	@ 0001db20 4b46
.org 0x1db22
	asrs r0, r3, #5	@ 0001db22 5811
.org 0x1db24
	lsls r0, r0, #2	@ 0001db24 8000
.org 0x1db26
	adds r0, r0, r1	@ 0001db26 4018
.org 0x1db28
	mov r8, r0	@ 0001db28 8046
.org 0x1db2a
	movs r0, #31	@ 0001db2a 1f20
.org 0x1db2c
	ands r0, r3	@ 0001db2c 1840
.org 0x1db2e
	movs r3, #1	@ 0001db2e 0123
.org 0x1db30
	lsls r3, r0	@ 0001db30 8340
.org 0x1db32
	mov r4, r8	@ 0001db32 4446
.org 0x1db34
	ldr r0, [r4, #0]	@ 0001db34 2068
.org 0x1db36
	ands r0, r3	@ 0001db36 1840
.org 0x1db38
	cmp r0, #0	@ 0001db38 0028
.org 0x1db3a
	beq.n 0x1dbe2	@ 0001db3a 52d0
.org 0x1db3c
	ldr r4, [pc, #108]	@ 0001db3c 1b4c
.org 0x1db3e
	adds r0, r1, r4	@ 0001db3e 0819
.org 0x1db40
	ldr r0, [r0, #0]	@ 0001db40 0068
.org 0x1db42
	cmp r6, r0	@ 0001db42 8642
.org 0x1db44
	blt.n 0x1dbe2	@ 0001db44 4ddb
.org 0x1db46
	adds r4, #4	@ 0001db46 0434
.org 0x1db48
	adds r0, r1, r4	@ 0001db48 0819
.org 0x1db4a
	ldr r0, [r0, #0]	@ 0001db4a 0068
.org 0x1db4c
	cmp r6, r0	@ 0001db4c 8642
.org 0x1db4e
	bgt.n 0x1dbe2	@ 0001db4e 48dc
.org 0x1db50
	subs r4, #20	@ 0001db50 143c
.org 0x1db52
	adds r0, r1, r4	@ 0001db52 0819
.org 0x1db54
	ldrh r0, [r0, #0]	@ 0001db54 0088
.org 0x1db56
	cmp r0, #1	@ 0001db56 0128
.org 0x1db58
	bne.n 0x1db6c	@ 0001db58 08d1
.org 0x1db5a
	ldrh r0, [r2, #8]	@ 0001db5a 1089
.org 0x1db5c
	lsls r0, r0, #3	@ 0001db5c c000
.org 0x1db5e
	ldr r1, [sp, #4]	@ 0001db5e 0199
.org 0x1db60
	adds r0, r0, r1	@ 0001db60 4018
.org 0x1db62
	ldrb r1, [r0, #5]	@ 0001db62 4179
.org 0x1db64
	movs r0, #2	@ 0001db64 0220
.org 0x1db66
	ands r0, r1	@ 0001db66 0840
.org 0x1db68
	cmp r0, #0	@ 0001db68 0028
.org 0x1db6a
	bne.n 0x1dbe2	@ 0001db6a 3ad1
.org 0x1db6c
	str r2, [sp, #40]	@ 0001db6c 0a92
.org 0x1db6e
	str r3, [sp, #44]	@ 0001db6e 0b93
.org 0x1db70
	bl 0x1e1c4	@ 0001db70 00f028fb
.org 0x1db74
	adds r4, r0, #0	@ 0001db74 041c
.org 0x1db76
	ldr r2, [sp, #40]	@ 0001db76 0a9a
.org 0x1db78
	cmp r4, #0	@ 0001db78 002c
.org 0x1db7a
	beq.n 0x1dbe2	@ 0001db7a 32d0
.org 0x1db7c
	ldrh r1, [r2, #8]	@ 0001db7c 1189
.org 0x1db7e
	lsls r1, r1, #3	@ 0001db7e c900
.org 0x1db80
	ldr r0, [sp, #4]	@ 0001db80 0198
.org 0x1db82
	adds r1, r1, r0	@ 0001db82 0918
.org 0x1db84
	ldrb r0, [r1, #1]	@ 0001db84 4878
.org 0x1db86
	ldrb r1, [r1, #2]	@ 0001db86 8978
.org 0x1db88
	bl 0x1dd7c	@ 0001db88 00f0f8f8
.org 0x1db8c
	adds r5, r0, #0	@ 0001db8c 051c
.org 0x1db8e
	ldr r2, [sp, #40]	@ 0001db8e 0a9a
.org 0x1db90
	ldr r3, [sp, #44]	@ 0001db90 0b9b
.org 0x1db92
	cmp r5, #0	@ 0001db92 002d
.org 0x1db94
	bne.n 0x1dbb0	@ 0001db94 0cd1
.org 0x1db96
	adds r0, r4, #0	@ 0001db96 201c
.org 0x1db98
	bl 0x1e204	@ 0001db98 00f034fb
.org 0x1db9c
	ldr r2, [sp, #40]	@ 0001db9c 0a9a
.org 0x1db9e
	b.n 0x1dbe2	@ 0001db9e 20e0
.org 0x1dba0
	.byte 0x40,0xe4,0x02,0x02	@ 0001dba0 data
.org 0x1dba4
	.byte 0x64,0x04,0x00,0x00	@ 0001dba4 data
.org 0x1dba8
	.byte 0xff,0x3f,0x01,0x00	@ 0001dba8 data
.org 0x1dbac
	.byte 0x5c,0x04,0x00,0x00	@ 0001dbac data
.org 0x1dbb0
	ldrh r0, [r2, #8]	@ 0001dbb0 1089
.org 0x1dbb2
	lsls r0, r0, #3	@ 0001dbb2 c000
.org 0x1dbb4
	ldr r1, [sp, #4]	@ 0001dbb4 0199
.org 0x1dbb6
	adds r0, r0, r1	@ 0001dbb6 4018
.org 0x1dbb8
	ldrb r0, [r0, #3]	@ 0001dbb8 c078
.org 0x1dbba
	strb r0, [r5, #16]	@ 0001dbba 2874
.org 0x1dbbc
	ldrh r0, [r2, #8]	@ 0001dbbc 1089
.org 0x1dbbe
	lsls r0, r0, #3	@ 0001dbbe c000
.org 0x1dbc0
	adds r0, r0, r1	@ 0001dbc0 4018
.org 0x1dbc2
	ldrb r0, [r0, #4]	@ 0001dbc2 0079
.org 0x1dbc4
	strb r0, [r5, #17]	@ 0001dbc4 6874
.org 0x1dbc6
	str r7, [r5, #84]	@ 0001dbc6 6f65
.org 0x1dbc8
	str r6, [r5, #88]	@ 0001dbc8 ae65
.org 0x1dbca
	str r5, [r4, #4]	@ 0001dbca 6560
.org 0x1dbcc
	mov r0, r9	@ 0001dbcc 4846
.org 0x1dbce
	strh r0, [r4, #8]	@ 0001dbce 2081
.org 0x1dbd0
	ldrh r0, [r2, #8]	@ 0001dbd0 1089
.org 0x1dbd2
	lsls r0, r0, #3	@ 0001dbd2 c000
.org 0x1dbd4
	adds r0, r0, r1	@ 0001dbd4 4018
.org 0x1dbd6
	ldrb r0, [r0, #0]	@ 0001dbd6 0078
.org 0x1dbd8
	strh r0, [r4, #10]	@ 0001dbd8 6081
.org 0x1dbda
	mov r1, r8	@ 0001dbda 4146
.org 0x1dbdc
	ldr r0, [r1, #0]	@ 0001dbdc 0868
.org 0x1dbde
	bics r0, r3	@ 0001dbde 9843
.org 0x1dbe0
	str r0, [r1, #0]	@ 0001dbe0 0860
.org 0x1dbe2
	adds r2, #12	@ 0001dbe2 0c32
.org 0x1dbe4
	movs r3, #1	@ 0001dbe4 0123
.org 0x1dbe6
	add r9, r3	@ 0001dbe6 9944
.org 0x1dbe8
	ldr r0, [r2, #0]	@ 0001dbe8 1068
.org 0x1dbea
	lsls r7, r0, #8	@ 0001dbea 0702
.org 0x1dbec
	cmp sl, r7	@ 0001dbec ba45
.org 0x1dbee
	bgt.n 0x1db08	@ 0001dbee 8bdc
.org 0x1dbf0
	ldr r4, [sp, #0]	@ 0001dbf0 009c
.org 0x1dbf2
	ldr r4, [r4, #0]	@ 0001dbf2 2468
.org 0x1dbf4
	mov sl, r4	@ 0001dbf4 a246
.org 0x1dbf6
	ldr r0, [sp, #0]	@ 0001dbf6 0098
.org 0x1dbf8
	ldr r0, [r0, #4]	@ 0001dbf8 4068
.org 0x1dbfa
	str r0, [sp, #16]	@ 0001dbfa 0490
.org 0x1dbfc
	ldr r1, [pc, #56]	@ 0001dbfc 0e49
.org 0x1dbfe
	ldr r2, [pc, #60]	@ 0001dbfe 0f4a
.org 0x1dc00
	adds r0, r1, r2	@ 0001dc00 8818
.org 0x1dc02
	ldr r4, [r0, #0]	@ 0001dc02 0468
.org 0x1dc04
	cmp r4, #0	@ 0001dc04 002c
.org 0x1dc06
	bne.n 0x1dc0a	@ 0001dc06 00d1
.org 0x1dc08
	b.n 0x1dd5c	@ 0001dc08 a8e0
.org 0x1dc0a
	ldr r3, [pc, #52]	@ 0001dc0a 0d4b
.org 0x1dc0c
	adds r1, r1, r3	@ 0001dc0c c918
.org 0x1dc0e
	mov r8, r1	@ 0001dc0e 8846
.org 0x1dc10
	ldr r0, [r4, #0]	@ 0001dc10 2068
.org 0x1dc12
	str r0, [sp, #12]	@ 0001dc12 0390
.org 0x1dc14
	ldr r5, [r4, #4]	@ 0001dc14 6568
.org 0x1dc16
	cmp r5, #0	@ 0001dc16 002d
.org 0x1dc18
	beq.n 0x1dcf8	@ 0001dc18 6ed0
.org 0x1dc1a
	ldrh r1, [r4, #10]	@ 0001dc1a 6189
.org 0x1dc1c
	movs r3, #16	@ 0001dc1c 1023
.org 0x1dc1e
	movs r0, #16	@ 0001dc1e 1020
.org 0x1dc20
	ands r0, r1	@ 0001dc20 0840
.org 0x1dc22
	lsls r0, r0, #16	@ 0001dc22 0004
.org 0x1dc24
	asrs r2, r0, #16	@ 0001dc24 0214
.org 0x1dc26
	cmp r2, #0	@ 0001dc26 002a
.org 0x1dc28
	beq.n 0x1dc44	@ 0001dc28 0cd0
.org 0x1dc2a
	ldrb r0, [r5, #12]	@ 0001dc2a 287b
.org 0x1dc2c
	cmp r0, #2	@ 0001dc2c 0228
.org 0x1dc2e
	bls.n 0x1dcea	@ 0001dc2e 5cd9
.org 0x1dc30
	movs r1, #0	@ 0001dc30 0021
.org 0x1dc32
	str r1, [r4, #4]	@ 0001dc32 6160
.org 0x1dc34
	b.n 0x1dcea	@ 0001dc34 59e0
.org 0x1dc36
	.byte 0x00	@ 0001dc36 data
.org 0x1dc37
	.byte 0x00	@ 0001dc37 data
.org 0x1dc38
	.byte 0x40,0xe4,0x02,0x02	@ 0001dc38 data
.org 0x1dc3c
	.byte 0x44,0x04,0x00,0x00	@ 0001dc3c data
.org 0x1dc40
	.byte 0x64,0x04,0x00,0x00	@ 0001dc40 data
.org 0x1dc44
	ldrb r0, [r5, #12]	@ 0001dc44 287b
.org 0x1dc46
	cmp r0, #2	@ 0001dc46 0228
.org 0x1dc48
	bls.n 0x1dc62	@ 0001dc48 0bd9
.org 0x1dc4a
	movs r0, #4	@ 0001dc4a 0420
.org 0x1dc4c
	ands r0, r1	@ 0001dc4c 0840
.org 0x1dc4e
	cmp r0, #0	@ 0001dc4e 0028
.org 0x1dc50
	beq.n 0x1dc58	@ 0001dc50 02d0
.org 0x1dc52
	movs r0, #1	@ 0001dc52 0120
.org 0x1dc54
	orrs r0, r1	@ 0001dc54 0843
.org 0x1dc56
	strh r0, [r4, #10]	@ 0001dc56 6081
.org 0x1dc58
	ldrh r0, [r4, #10]	@ 0001dc58 6089
.org 0x1dc5a
	orrs r0, r3	@ 0001dc5a 1843
.org 0x1dc5c
	strh r0, [r4, #10]	@ 0001dc5c 6081
.org 0x1dc5e
	str r2, [r4, #4]	@ 0001dc5e 6260
.org 0x1dc60
	b.n 0x1dcea	@ 0001dc60 43e0
.org 0x1dc62
	cmp r0, #1	@ 0001dc62 0128
.org 0x1dc64
	bls.n 0x1dc7c	@ 0001dc64 0ad9
.org 0x1dc66
	movs r0, #4	@ 0001dc66 0420
.org 0x1dc68
	ands r0, r1	@ 0001dc68 0840
.org 0x1dc6a
	cmp r0, #0	@ 0001dc6a 0028
.org 0x1dc6c
	beq.n 0x1dc74	@ 0001dc6c 02d0
.org 0x1dc6e
	movs r0, #1	@ 0001dc6e 0120
.org 0x1dc70
	orrs r0, r1	@ 0001dc70 0843
.org 0x1dc72
	strh r0, [r4, #10]	@ 0001dc72 6081
.org 0x1dc74
	ldrh r0, [r4, #10]	@ 0001dc74 6089
.org 0x1dc76
	orrs r0, r3	@ 0001dc76 1843
.org 0x1dc78
	strh r0, [r4, #10]	@ 0001dc78 6081
.org 0x1dc7a
	b.n 0x1dcea	@ 0001dc7a 36e0
.org 0x1dc7c
	movs r0, #12	@ 0001dc7c 0c20
.org 0x1dc7e
	ands r0, r1	@ 0001dc7e 0840
.org 0x1dc80
	cmp r0, #0	@ 0001dc80 0028
.org 0x1dc82
	bne.n 0x1dcea	@ 0001dc82 32d1
.org 0x1dc84
	ldr r7, [r5, #84]	@ 0001dc84 6f6d
.org 0x1dc86
	ldr r6, [r5, #88]	@ 0001dc86 ae6d
.org 0x1dc88
	mov r2, sl	@ 0001dc88 5246
.org 0x1dc8a
	subs r0, r7, r2	@ 0001dc8a b81a
.org 0x1dc8c
	movs r3, #208	@ 0001dc8c d023
.org 0x1dc8e
	lsls r3, r3, #8	@ 0001dc8e 1b02
.org 0x1dc90
	adds r0, r0, r3	@ 0001dc90 c018
.org 0x1dc92
	ldr r1, [pc, #216]	@ 0001dc92 3649
.org 0x1dc94
	cmp r0, r1	@ 0001dc94 8842
.org 0x1dc96
	bhi.n 0x1dca8	@ 0001dc96 07d8
.org 0x1dc98
	ldr r1, [sp, #16]	@ 0001dc98 0499
.org 0x1dc9a
	subs r0, r6, r1	@ 0001dc9a 701a
.org 0x1dc9c
	movs r2, #192	@ 0001dc9c c022
.org 0x1dc9e
	lsls r2, r2, #8	@ 0001dc9e 1202
.org 0x1dca0
	adds r0, r0, r2	@ 0001dca0 8018
.org 0x1dca2
	ldr r1, [pc, #204]	@ 0001dca2 3349
.org 0x1dca4
	cmp r0, r1	@ 0001dca4 8842
.org 0x1dca6
	bls.n 0x1dcea	@ 0001dca6 20d9
.org 0x1dca8
	movs r3, #8	@ 0001dca8 0823
.org 0x1dcaa
	ldrsh r1, [r4, r3]	@ 0001dcaa e15e
.org 0x1dcac
	lsls r0, r1, #1	@ 0001dcac 4800
.org 0x1dcae
	adds r0, r0, r1	@ 0001dcae 4018
.org 0x1dcb0
	lsls r0, r0, #2	@ 0001dcb0 8000
.org 0x1dcb2
	ldr r2, [sp, #8]	@ 0001dcb2 029a
.org 0x1dcb4
	adds r0, r0, r2	@ 0001dcb4 8018
.org 0x1dcb6
	ldr r0, [r0, #4]	@ 0001dcb6 4068
.org 0x1dcb8
	lsls r0, r0, #8	@ 0001dcb8 0002
.org 0x1dcba
	subs r6, r0, #1	@ 0001dcba 461e
.org 0x1dcbc
	mov r3, r8	@ 0001dcbc 4346
.org 0x1dcbe
	ldrh r3, [r3, #0]	@ 0001dcbe 1b88
.org 0x1dcc0
	cmp r1, r3	@ 0001dcc0 9942
.org 0x1dcc2
	blt.n 0x1dcd8	@ 0001dcc2 09db
.org 0x1dcc4
	cmp r1, r9	@ 0001dcc4 4945
.org 0x1dcc6
	bge.n 0x1dcd8	@ 0001dcc6 07da
.org 0x1dcc8
	ldr r1, [sp, #16]	@ 0001dcc8 0499
.org 0x1dcca
	subs r0, r6, r1	@ 0001dcca 701a
.org 0x1dccc
	movs r2, #192	@ 0001dccc c022
.org 0x1dcce
	lsls r2, r2, #8	@ 0001dcce 1202
.org 0x1dcd0
	adds r0, r0, r2	@ 0001dcd0 8018
.org 0x1dcd2
	ldr r1, [pc, #156]	@ 0001dcd2 2749
.org 0x1dcd4
	cmp r0, r1	@ 0001dcd4 8842
.org 0x1dcd6
	bls.n 0x1dcea	@ 0001dcd6 08d9
.org 0x1dcd8
	adds r0, r5, #0	@ 0001dcd8 281c
.org 0x1dcda
	bl 0x1df34	@ 0001dcda 00f02bf9
.org 0x1dcde
	ldrh r0, [r4, #10]	@ 0001dcde 6089
.org 0x1dce0
	movs r1, #17	@ 0001dce0 1121

@ FUN_080fc5cc  entry 0x080fc5cc  size 448
.thumb
.org 0xfc5cc
FUN_080fc5cc:
	push {r4, r5, r6, r7, lr}	@ 000fc5cc f0b5
.org 0xfc5ce
	mov r7, sl	@ 000fc5ce 5746
.org 0xfc5d0
	mov r6, r9	@ 000fc5d0 4e46
.org 0xfc5d2
	mov r5, r8	@ 000fc5d2 4546
.org 0xfc5d4
	push {r5, r6, r7}	@ 000fc5d4 e0b4
.org 0xfc5d6
	sub sp, #8	@ 000fc5d6 82b0
.org 0xfc5d8
	adds r7, r0, #0	@ 000fc5d8 071c
.org 0xfc5da
	ldrb r0, [r7, #17]	@ 000fc5da 787c
.org 0xfc5dc
	cmp r0, #1	@ 000fc5dc 0128
.org 0xfc5de
	bne.n 0xfc624	@ 000fc5de 21d1
.org 0xfc5e0
	ldr r0, [r7, #40]	@ 000fc5e0 b86a
.org 0xfc5e2
	ldrb r0, [r0, #12]	@ 000fc5e2 007b
.org 0xfc5e4
	cmp r0, #2	@ 000fc5e4 0228
.org 0xfc5e6
	bls.n 0xfc624	@ 000fc5e6 1dd9
.org 0xfc5e8
	ldrb r1, [r7, #10]	@ 000fc5e8 b97a
.org 0xfc5ea
	movs r0, #254	@ 000fc5ea fe20
.org 0xfc5ec
	ands r0, r1	@ 000fc5ec 0840
.org 0xfc5ee
	movs r2, #0	@ 000fc5ee 0022
.org 0xfc5f0
	movs r1, #253	@ 000fc5f0 fd21
.org 0xfc5f2
	ands r0, r1	@ 000fc5f2 0840
.org 0xfc5f4
	strb r0, [r7, #10]	@ 000fc5f4 b872
.org 0xfc5f6
	adds r0, r7, #0	@ 000fc5f6 381c
.org 0xfc5f8
	adds r0, #140	@ 000fc5f8 8c30
.org 0xfc5fa
	str r2, [r0, #0]	@ 000fc5fa 0260
.org 0xfc5fc
	adds r0, #4	@ 000fc5fc 0430
.org 0xfc5fe
	str r2, [r0, #0]	@ 000fc5fe 0260
.org 0xfc600
	adds r0, #4	@ 000fc600 0430
.org 0xfc602
	strb r2, [r0, #0]	@ 000fc602 0270
.org 0xfc604
	ldrb r1, [r7, #10]	@ 000fc604 b97a
.org 0xfc606
	movs r0, #251	@ 000fc606 fb20
.org 0xfc608
	ands r0, r1	@ 000fc608 0840
.org 0xfc60a
	strb r0, [r7, #10]	@ 000fc60a b872
.org 0xfc60c
	ldr r1, [pc, #16]	@ 000fc60c 0449
.org 0xfc60e
	ldrb r0, [r7, #9]	@ 000fc60e 787a
.org 0xfc610
	lsls r0, r0, #2	@ 000fc610 8000
.org 0xfc612
	adds r0, r0, r1	@ 000fc612 4018
.org 0xfc614
	movs r1, #3	@ 000fc614 0321
.org 0xfc616
	str r1, [r7, #12]	@ 000fc616 f960
.org 0xfc618
	ldr r0, [r0, #0]	@ 000fc618 0068
.org 0xfc61a
	ldr r0, [r0, #12]	@ 000fc61a c068
.org 0xfc61c
	str r0, [r7, #20]	@ 000fc61c 7861
.org 0xfc61e
	b.n 0xfc7bc	@ 000fc61e cde0
.org 0xfc620
	.byte 0xfc,0x92,0x86,0x08	@ 000fc620 data
.org 0xfc624
	ldrb r0, [r7, #13]	@ 000fc624 787b
.org 0xfc626
	movs r1, #192	@ 000fc626 c021
.org 0xfc628
	adds r1, r1, r7	@ 000fc628 c919
.org 0xfc62a
	mov sl, r1	@ 000fc62a 8a46
.org 0xfc62c
	cmp r0, #0	@ 000fc62c 0028
.org 0xfc62e
	beq.n 0xfc632	@ 000fc62e 00d0
.org 0xfc630
	b.n 0xfc7b0	@ 000fc630 bee0
.org 0xfc632
	ldr r0, [r1, #0]	@ 000fc632 0868
.org 0xfc634
	cmp r0, #0	@ 000fc634 0028
.org 0xfc636
	bne.n 0xfc63a	@ 000fc636 00d1
.org 0xfc638
	b.n 0xfc7b0	@ 000fc638 bae0
.org 0xfc63a
	adds r4, r0, #0	@ 000fc63a 041c
.org 0xfc63c
	ldrb r0, [r4, #13]	@ 000fc63c 607b
.org 0xfc63e
	cmp r0, #2	@ 000fc63e 0228
.org 0xfc640
	beq.n 0xfc644	@ 000fc640 00d0
.org 0xfc642
	b.n 0xfc7b0	@ 000fc642 b5e0
.org 0xfc644
	ldrb r0, [r4, #14]	@ 000fc644 a07b
.org 0xfc646
	cmp r0, #0	@ 000fc646 0028
.org 0xfc648
	bne.n 0xfc64c	@ 000fc648 00d1
.org 0xfc64a
	b.n 0xfc7b0	@ 000fc64a b1e0
.org 0xfc64c
	adds r0, r4, #0	@ 000fc64c 201c
.org 0xfc64e
	bl 0x38640	@ 000fc64e 3bf7f7ff
.org 0xfc652
	lsls r0, r0, #16	@ 000fc652 0004
.org 0xfc654
	cmp r0, #0	@ 000fc654 0028
.org 0xfc656
	bne.n 0xfc65a	@ 000fc656 00d1
.org 0xfc658
	b.n 0xfc7b0	@ 000fc658 aae0
.org 0xfc65a
	ldrb r1, [r7, #10]	@ 000fc65a b97a
.org 0xfc65c
	movs r0, #16	@ 000fc65c 1020
.org 0xfc65e
	ands r0, r1	@ 000fc65e 0840
.org 0xfc660
	cmp r0, #0	@ 000fc660 0028
.org 0xfc662
	beq.n 0xfc67c	@ 000fc662 0bd0
.org 0xfc664
	ldr r0, [r7, #84]	@ 000fc664 786d
.org 0xfc666
	adds r0, #48	@ 000fc666 3030
.org 0xfc668
	str r0, [r7, #84]	@ 000fc668 7865
.org 0xfc66a
	ldr r1, [pc, #8]	@ 000fc66a 0249
.org 0xfc66c
	ldr r2, [pc, #8]	@ 000fc66c 024a
.org 0xfc66e
	adds r1, r1, r2	@ 000fc66e 8918
.org 0xfc670
	b.n 0xfc688	@ 000fc670 0ae0
.org 0xfc672
	.byte 0x00	@ 000fc672 data
.org 0xfc673
	.byte 0x00	@ 000fc673 data
.org 0xfc674
	.byte 0xb0,0x0a,0x00,0x02	@ 000fc674 data
.org 0xfc678
	.byte 0x36,0xd0,0x02,0x00	@ 000fc678 data
.org 0xfc67c
	ldr r0, [r7, #84]	@ 000fc67c 786d
.org 0xfc67e
	subs r0, #48	@ 000fc67e 3038
.org 0xfc680
	str r0, [r7, #84]	@ 000fc680 7865
.org 0xfc682
	ldr r1, [pc, #32]	@ 000fc682 0849
.org 0xfc684
	ldr r0, [pc, #32]	@ 000fc684 0848
.org 0xfc686
	adds r1, r1, r0	@ 000fc686 0918
.org 0xfc688
	ldrh r0, [r1, #0]	@ 000fc688 0888
.org 0xfc68a
	adds r0, #48	@ 000fc68a 3030
.org 0xfc68c
	strh r0, [r1, #0]	@ 000fc68c 0880
.org 0xfc68e
	adds r0, r7, #0	@ 000fc68e 381c
.org 0xfc690
	adds r0, #180	@ 000fc690 b430
.org 0xfc692
	ldr r1, [r0, #0]	@ 000fc692 0168
.org 0xfc694
	ldr r0, [r7, #84]	@ 000fc694 786d
.org 0xfc696
	subs r2, r1, r0	@ 000fc696 0a1a
.org 0xfc698
	cmp r2, #0	@ 000fc698 002a
.org 0xfc69a
	blt.n 0xfc6b0	@ 000fc69a 09db
.org 0xfc69c
	ldr r1, [pc, #12]	@ 000fc69c 0349
.org 0xfc69e
	adds r0, r2, #0	@ 000fc69e 101c
.org 0xfc6a0
	b.n 0xfc6b4	@ 000fc6a0 08e0
.org 0xfc6a2
	.byte 0x00	@ 000fc6a2 data
.org 0xfc6a3
	.byte 0x00	@ 000fc6a3 data
.org 0xfc6a4
	.byte 0xb0,0x0a,0x00,0x02	@ 000fc6a4 data
.org 0xfc6a8
	.byte 0x34,0xd0,0x02,0x00	@ 000fc6a8 data
.org 0xfc6ac
	.byte 0x55,0x05,0x00,0x00	@ 000fc6ac data
.org 0xfc6b0
	subs r0, r0, r1	@ 000fc6b0 401a
.org 0xfc6b2
	ldr r1, [pc, #56]	@ 000fc6b2 0e49
.org 0xfc6b4
	bl 0x128fb8	@ 000fc6b4 2cf080fc
.org 0xfc6b8
	cmp r0, #2	@ 000fc6b8 0228
.org 0xfc6ba
	bls.n 0xfc6f4	@ 000fc6ba 1bd9
.org 0xfc6bc
	ldr r1, [pc, #48]	@ 000fc6bc 0c49
.org 0xfc6be
	adds r0, r7, #0	@ 000fc6be 381c
.org 0xfc6c0
	bl 0x1cf00	@ 000fc6c0 20f71efc
.org 0xfc6c4
	ldrb r1, [r7, #11]	@ 000fc6c4 f97a
.org 0xfc6c6
	movs r0, #247	@ 000fc6c6 f720
.org 0xfc6c8
	ands r0, r1	@ 000fc6c8 0840
.org 0xfc6ca
	movs r1, #0	@ 000fc6ca 0021
.org 0xfc6cc
	strb r0, [r7, #11]	@ 000fc6cc f872
.org 0xfc6ce
	adds r0, r7, #0	@ 000fc6ce 381c
.org 0xfc6d0
	adds r0, #140	@ 000fc6d0 8c30
.org 0xfc6d2
	str r1, [r0, #0]	@ 000fc6d2 0160
.org 0xfc6d4
	adds r0, #4	@ 000fc6d4 0430
.org 0xfc6d6
	str r1, [r0, #0]	@ 000fc6d6 0160
.org 0xfc6d8
	adds r0, #4	@ 000fc6d8 0430
.org 0xfc6da
	strb r1, [r0, #0]	@ 000fc6da 0170
.org 0xfc6dc
	ldrb r1, [r7, #10]	@ 000fc6dc b97a
.org 0xfc6de
	movs r0, #251	@ 000fc6de fb20
.org 0xfc6e0
	ands r0, r1	@ 000fc6e0 0840
.org 0xfc6e2
	strb r0, [r7, #10]	@ 000fc6e2 b872
.org 0xfc6e4
	ldrb r0, [r7, #13]	@ 000fc6e4 787b
.org 0xfc6e6
	adds r0, #1	@ 000fc6e6 0130
.org 0xfc6e8
	strb r0, [r7, #13]	@ 000fc6e8 7873
.org 0xfc6ea
	b.n 0xfc704	@ 000fc6ea 0be0
.org 0xfc6ec
	.byte 0x55,0x05,0x00,0x00	@ 000fc6ec data
.org 0xfc6f0
	.byte 0x03,0x98,0x00,0x00	@ 000fc6f0 data
.org 0xfc6f4
	movs r2, #152	@ 000fc6f4 9822
.org 0xfc6f6
	lsls r2, r2, #8	@ 000fc6f6 1202
.org 0xfc6f8
	adds r1, r0, r2	@ 000fc6f8 8118
.org 0xfc6fa
	lsls r1, r1, #16	@ 000fc6fa 0904
.org 0xfc6fc
	lsrs r1, r1, #16	@ 000fc6fc 090c
.org 0xfc6fe
	adds r0, r7, #0	@ 000fc6fe 381c
.org 0xfc700
	bl 0x1cf00	@ 000fc700 20f7fefb
.org 0xfc704
	ldrb r1, [r7, #18]	@ 000fc704 b97c
.org 0xfc706
	adds r0, r1, #1	@ 000fc706 481c
.org 0xfc708
	strb r0, [r7, #18]	@ 000fc708 b874
.org 0xfc70a
	movs r0, #3	@ 000fc70a 0320
.org 0xfc70c
	ands r0, r1	@ 000fc70c 0840
.org 0xfc70e
	cmp r0, #0	@ 000fc70e 0028
.org 0xfc710
	bne.n 0xfc7b0	@ 000fc710 4ed1
.org 0xfc712
	ldrb r1, [r7, #10]	@ 000fc712 b97a
.org 0xfc714
	movs r0, #16	@ 000fc714 1020
.org 0xfc716
	ands r0, r1	@ 000fc716 0840
.org 0xfc718
	mov r9, r1	@ 000fc718 8946
.org 0xfc71a
	cmp r0, #0	@ 000fc71a 0028
.org 0xfc71c
	beq.n 0xfc72c	@ 000fc71c 06d0
.org 0xfc71e
	ldr r0, [r7, #84]	@ 000fc71e 786d
.org 0xfc720
	ldr r1, [pc, #4]	@ 000fc720 0149
.org 0xfc722
	adds r0, r0, r1	@ 000fc722 4018
.org 0xfc724
	b.n 0xfc734	@ 000fc724 06e0
.org 0xfc726
	.byte 0x00	@ 000fc726 data
.org 0xfc727
	.byte 0x00	@ 000fc727 data
.org 0xfc728
	.byte 0x00,0xf7,0xff,0xff	@ 000fc728 data
.org 0xfc72c
	ldr r0, [r7, #84]	@ 000fc72c 786d
.org 0xfc72e
	movs r2, #144	@ 000fc72e 9022
.org 0xfc730
	lsls r2, r2, #4	@ 000fc730 1201
.org 0xfc732
	adds r0, r0, r2	@ 000fc732 8018
.org 0xfc734
	str r0, [sp, #0]	@ 000fc734 0090
.org 0xfc736
	ldr r0, [r4, #88]	@ 000fc736 a06d
.org 0xfc738
	ldr r4, [pc, #84]	@ 000fc738 154c
.org 0xfc73a
	adds r0, r0, r4	@ 000fc73a 0019
.org 0xfc73c
	str r0, [sp, #4]	@ 000fc73c 0190
.org 0xfc73e
	ldr r4, [pc, #84]	@ 000fc73e 154c
.org 0xfc740
	ldr r0, [r4, #0]	@ 000fc740 2068
.org 0xfc742
	ldr r1, [pc, #84]	@ 000fc742 1549
.org 0xfc744
	mov r8, r1	@ 000fc744 8846
.org 0xfc746
	mov r2, r8	@ 000fc746 4246
.org 0xfc748
	muls r2, r0	@ 000fc748 4243
.org 0xfc74a
	adds r0, r2, #0	@ 000fc74a 101c
.org 0xfc74c
	ldr r6, [pc, #76]	@ 000fc74c 134e
.org 0xfc74e
	adds r0, r0, r6	@ 000fc74e 8019
.org 0xfc750
	lsls r0, r0, #1	@ 000fc750 4000
.org 0xfc752
	lsrs r5, r0, #1	@ 000fc752 4508
.org 0xfc754
	str r5, [r4, #0]	@ 000fc754 2560
.org 0xfc756
	lsrs r0, r0, #17	@ 000fc756 400c
.org 0xfc758
	movs r1, #3	@ 000fc758 0321
.org 0xfc75a
	bl 0x129198	@ 000fc75a 2cf01dfd
.org 0xfc75e
	lsls r1, r0, #3	@ 000fc75e c100
.org 0xfc760
	subs r1, r1, r0	@ 000fc760 091a
.org 0xfc762
	lsls r1, r1, #2	@ 000fc762 8900
.org 0xfc764
	ldr r0, [pc, #56]	@ 000fc764 0e48
.org 0xfc766
	adds r1, r1, r0	@ 000fc766 0918
.org 0xfc768
	mov ip, r1	@ 000fc768 8c46
.org 0xfc76a
	mov r0, r8	@ 000fc76a 4046
.org 0xfc76c
	muls r0, r5	@ 000fc76c 6843
.org 0xfc76e
	adds r0, r0, r6	@ 000fc76e 8019
.org 0xfc770
	lsls r0, r0, #1	@ 000fc770 4000
.org 0xfc772
	lsrs r1, r0, #1	@ 000fc772 4108
.org 0xfc774
	str r1, [r4, #0]	@ 000fc774 2160
.org 0xfc776
	lsrs r3, r0, #17	@ 000fc776 430c
.org 0xfc778
	movs r2, #1	@ 000fc778 0122
.org 0xfc77a
	ands r3, r2	@ 000fc77a 1340
.org 0xfc77c
	lsls r1, r3, #4	@ 000fc77c 1901
.org 0xfc77e
	movs r0, #16	@ 000fc77e 1020
.org 0xfc780
	mov r4, r9	@ 000fc780 4c46
.org 0xfc782
	ands r0, r4	@ 000fc782 2040
.org 0xfc784
	cmp r0, #0	@ 000fc784 0028
.org 0xfc786
	beq.n 0xfc7a4	@ 000fc786 0dd0
.org 0xfc788
	adds r3, r2, #0	@ 000fc788 131c
.org 0xfc78a
	orrs r3, r1	@ 000fc78a 0b43

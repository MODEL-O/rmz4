@ FUN_080bd610  entry 0x080bd610  size 716
.thumb
.org 0xbd610
FUN_080bd610:
	push {r4, r5, r6, r7, lr}	@ 000bd610 f0b5
.org 0xbd612
	mov r7, sl	@ 000bd612 5746
.org 0xbd614
	mov r6, r9	@ 000bd614 4e46
.org 0xbd616
	mov r5, r8	@ 000bd616 4546
.org 0xbd618
	push {r5, r6, r7}	@ 000bd618 e0b4
.org 0xbd61a
	adds r7, r0, #0	@ 000bd61a 071c
.org 0xbd61c
	ldr r0, [pc, #132]	@ 000bd61c 2148
.org 0xbd61e
	ldr r0, [r0, #0]	@ 000bd61e 0068
.org 0xbd620
	mov r8, r0	@ 000bd620 8046
.org 0xbd622
	adds r0, r7, #0	@ 000bd622 381c
.org 0xbd624
	bl 0x1cff0	@ 000bd624 5ff7e4fc
.org 0xbd628
	ldrb r1, [r7, #15]	@ 000bd628 f97b
.org 0xbd62a
	cmp r1, #0	@ 000bd62a 0029
.org 0xbd62c
	bne.n 0xbd658	@ 000bd62c 14d1
.org 0xbd62e
	ldr r0, [pc, #120]	@ 000bd62e 1e48
.org 0xbd630
	add r0, r8	@ 000bd630 4044
.org 0xbd632
	ldrb r0, [r0, #0]	@ 000bd632 0078
.org 0xbd634
	cmp r0, #0	@ 000bd634 0028
.org 0xbd636
	beq.n 0xbd658	@ 000bd636 0fd0
.org 0xbd638
	adds r0, r7, #0	@ 000bd638 381c
.org 0xbd63a
	adds r0, #140	@ 000bd63a 8c30
.org 0xbd63c
	str r1, [r0, #0]	@ 000bd63c 0160
.org 0xbd63e
	adds r0, #4	@ 000bd63e 0430
.org 0xbd640
	str r1, [r0, #0]	@ 000bd640 0160
.org 0xbd642
	adds r0, #4	@ 000bd642 0430
.org 0xbd644
	strb r1, [r0, #0]	@ 000bd644 0170
.org 0xbd646
	ldrb r1, [r7, #10]	@ 000bd646 b97a
.org 0xbd648
	movs r0, #251	@ 000bd648 fb20
.org 0xbd64a
	ands r0, r1	@ 000bd64a 0840
.org 0xbd64c
	strb r0, [r7, #10]	@ 000bd64c b872
.org 0xbd64e
	movs r0, #16	@ 000bd64e 1020
.org 0xbd650
	strb r0, [r7, #19]	@ 000bd650 f874
.org 0xbd652
	ldrb r0, [r7, #15]	@ 000bd652 f87b
.org 0xbd654
	adds r0, #1	@ 000bd654 0130
.org 0xbd656
	strb r0, [r7, #15]	@ 000bd656 f873
.org 0xbd658
	ldrb r0, [r7, #15]	@ 000bd658 f87b
.org 0xbd65a
	adds r5, r0, #0	@ 000bd65a 051c
.org 0xbd65c
	mov sl, r0	@ 000bd65c 8246
.org 0xbd65e
	cmp r5, #1	@ 000bd65e 012d
.org 0xbd660
	bne.n 0xbd708	@ 000bd660 52d1
.org 0xbd662
	movs r4, #174	@ 000bd662 ae24
.org 0xbd664
	lsls r4, r4, #1	@ 000bd664 6400
.org 0xbd666
	add r4, r8	@ 000bd666 4444
.org 0xbd668
	ldr r0, [r4, #0]	@ 000bd668 2068
.org 0xbd66a
	ldr r1, [r7, #84]	@ 000bd66a 796d
.org 0xbd66c
	mov r9, r1	@ 000bd66c 8946
.org 0xbd66e
	subs r0, r0, r1	@ 000bd66e 401a
.org 0xbd670
	ldrb r1, [r7, #19]	@ 000bd670 f97c
.org 0xbd672
	bl 0x128fb8	@ 000bd672 6bf0a1fc
.org 0xbd676
	adds r6, r0, #0	@ 000bd676 061c
.org 0xbd678
	str r6, [r7, #92]	@ 000bd678 fe65
.org 0xbd67a
	ldr r0, [r4, #4]	@ 000bd67a 6068
.org 0xbd67c
	ldr r4, [r7, #88]	@ 000bd67c bc6d
.org 0xbd67e
	subs r0, r0, r4	@ 000bd67e 001b
.org 0xbd680
	ldrb r1, [r7, #19]	@ 000bd680 f97c
.org 0xbd682
	bl 0x128fb8	@ 000bd682 6bf099fc
.org 0xbd686
	str r0, [r7, #96]	@ 000bd686 3866
.org 0xbd688
	add r6, r9	@ 000bd688 4e44
.org 0xbd68a
	str r6, [r7, #84]	@ 000bd68a 7e65
.org 0xbd68c
	adds r4, r4, r0	@ 000bd68c 2418
.org 0xbd68e
	str r4, [r7, #88]	@ 000bd68e bc65
.org 0xbd690
	ldrb r0, [r7, #19]	@ 000bd690 f87c
.org 0xbd692
	ands r5, r0	@ 000bd692 0540
.org 0xbd694
	adds r2, r0, #0	@ 000bd694 021c
.org 0xbd696
	cmp r5, #0	@ 000bd696 002d
.org 0xbd698
	beq.n 0xbd6ac	@ 000bd698 08d0
.org 0xbd69a
	ldrb r1, [r7, #10]	@ 000bd69a b97a
.org 0xbd69c
	movs r0, #1	@ 000bd69c 0120
.org 0xbd69e
	orrs r0, r1	@ 000bd69e 0843
.org 0xbd6a0
	b.n 0xbd6b2	@ 000bd6a0 07e0
.org 0xbd6a2
	.byte 0x00	@ 000bd6a2 data
.org 0xbd6a3
	.byte 0x00	@ 000bd6a3 data
.org 0xbd6a4
	.byte 0xf0,0xdb,0x02,0x02	@ 000bd6a4 data
.org 0xbd6a8
	.byte 0x65,0x01,0x00,0x00	@ 000bd6a8 data
.org 0xbd6ac
	ldrb r1, [r7, #10]	@ 000bd6ac b97a
.org 0xbd6ae
	movs r0, #254	@ 000bd6ae fe20
.org 0xbd6b0
	ands r0, r1	@ 000bd6b0 0840
.org 0xbd6b2
	strb r0, [r7, #10]	@ 000bd6b2 b872
.org 0xbd6b4
	subs r0, r2, #1	@ 000bd6b4 501e
.org 0xbd6b6
	movs r3, #0	@ 000bd6b6 0023
.org 0xbd6b8
	strb r0, [r7, #19]	@ 000bd6b8 f874
.org 0xbd6ba
	lsls r0, r0, #24	@ 000bd6ba 0006
.org 0xbd6bc
	lsrs r0, r0, #24	@ 000bd6bc 000e
.org 0xbd6be
	cmp r0, #255	@ 000bd6be ff28
.org 0xbd6c0
	bne.n 0xbd6ea	@ 000bd6c0 13d1
.org 0xbd6c2
	movs r1, #178	@ 000bd6c2 b221
.org 0xbd6c4
	lsls r1, r1, #1	@ 000bd6c4 4900
.org 0xbd6c6
	add r1, r8	@ 000bd6c6 4144
.org 0xbd6c8
	ldrb r0, [r1, #0]	@ 000bd6c8 0878
.org 0xbd6ca
	adds r0, #1	@ 000bd6ca 0130
.org 0xbd6cc
	strb r0, [r1, #0]	@ 000bd6cc 0870
.org 0xbd6ce
	ldrb r1, [r7, #10]	@ 000bd6ce b97a
.org 0xbd6d0
	movs r0, #254	@ 000bd6d0 fe20
.org 0xbd6d2
	ands r0, r1	@ 000bd6d2 0840
.org 0xbd6d4
	movs r1, #253	@ 000bd6d4 fd21
.org 0xbd6d6
	ands r0, r1	@ 000bd6d6 0840
.org 0xbd6d8
	strb r0, [r7, #10]	@ 000bd6d8 b872
.org 0xbd6da
	adds r0, r7, #0	@ 000bd6da 381c
.org 0xbd6dc
	adds r0, #140	@ 000bd6dc 8c30
.org 0xbd6de
	str r3, [r0, #0]	@ 000bd6de 0360
.org 0xbd6e0
	adds r0, #4	@ 000bd6e0 0430
.org 0xbd6e2
	str r3, [r0, #0]	@ 000bd6e2 0360
.org 0xbd6e4
	adds r0, #4	@ 000bd6e4 0430
.org 0xbd6e6
	strb r3, [r0, #0]	@ 000bd6e6 0370
.org 0xbd6e8
	b.n 0xbd762	@ 000bd6e8 3be0
.org 0xbd6ea
	ldr r0, [pc, #24]	@ 000bd6ea 0648
.org 0xbd6ec
	add r0, r8	@ 000bd6ec 4044
.org 0xbd6ee
	ldrb r0, [r0, #0]	@ 000bd6ee 0078
.org 0xbd6f0
	cmp r0, #0	@ 000bd6f0 0028
.org 0xbd6f2
	beq.n 0xbd6f6	@ 000bd6f2 00d0
.org 0xbd6f4
	b.n 0xbd8f8	@ 000bd6f4 00e1
.org 0xbd6f6
	adds r0, r2, #0	@ 000bd6f6 101c
.org 0xbd6f8
	adds r0, #15	@ 000bd6f8 0f30
.org 0xbd6fa
	strb r0, [r7, #19]	@ 000bd6fa f874
.org 0xbd6fc
	mov r0, sl	@ 000bd6fc 5046
.org 0xbd6fe
	adds r0, #1	@ 000bd6fe 0130
.org 0xbd700
	strb r0, [r7, #15]	@ 000bd700 f873
.org 0xbd702
	b.n 0xbd8f8	@ 000bd702 f9e0
.org 0xbd704
	.byte 0x65,0x01,0x00,0x00	@ 000bd704 data
.org 0xbd708
	cmp r5, #2	@ 000bd708 022d
.org 0xbd70a
	bne.n 0xbd784	@ 000bd70a 3bd1
.org 0xbd70c
	ldr r0, [r7, #84]	@ 000bd70c 786d
.org 0xbd70e
	ldr r1, [r7, #92]	@ 000bd70e f96d
.org 0xbd710
	adds r0, r0, r1	@ 000bd710 4018
.org 0xbd712
	str r0, [r7, #84]	@ 000bd712 7865
.org 0xbd714
	ldr r0, [r7, #88]	@ 000bd714 b86d
.org 0xbd716
	ldr r1, [r7, #96]	@ 000bd716 396e
.org 0xbd718
	adds r0, r0, r1	@ 000bd718 4018
.org 0xbd71a
	str r0, [r7, #88]	@ 000bd71a b865
.org 0xbd71c
	ldrb r1, [r7, #19]	@ 000bd71c f97c
.org 0xbd71e
	movs r0, #1	@ 000bd71e 0120
.org 0xbd720
	ands r0, r1	@ 000bd720 0840
.org 0xbd722
	adds r2, r1, #0	@ 000bd722 0a1c
.org 0xbd724
	cmp r0, #0	@ 000bd724 0028
.org 0xbd726
	beq.n 0xbd730	@ 000bd726 03d0
.org 0xbd728
	ldrb r1, [r7, #10]	@ 000bd728 b97a
.org 0xbd72a
	movs r0, #1	@ 000bd72a 0120
.org 0xbd72c
	orrs r0, r1	@ 000bd72c 0843
.org 0xbd72e
	b.n 0xbd736	@ 000bd72e 02e0
.org 0xbd730
	ldrb r1, [r7, #10]	@ 000bd730 b97a
.org 0xbd732
	movs r0, #254	@ 000bd732 fe20
.org 0xbd734
	ands r0, r1	@ 000bd734 0840
.org 0xbd736
	strb r0, [r7, #10]	@ 000bd736 b872
.org 0xbd738
	subs r0, r2, #1	@ 000bd738 501e
.org 0xbd73a
	movs r2, #0	@ 000bd73a 0022
.org 0xbd73c
	strb r0, [r7, #19]	@ 000bd73c f874
.org 0xbd73e
	lsls r0, r0, #24	@ 000bd73e 0006
.org 0xbd740
	lsrs r0, r0, #24	@ 000bd740 000e
.org 0xbd742
	cmp r0, #255	@ 000bd742 ff28
.org 0xbd744
	beq.n 0xbd748	@ 000bd744 00d0
.org 0xbd746
	b.n 0xbd8f8	@ 000bd746 d7e0
.org 0xbd748
	ldrb r1, [r7, #10]	@ 000bd748 b97a
.org 0xbd74a
	movs r0, #254	@ 000bd74a fe20
.org 0xbd74c
	ands r0, r1	@ 000bd74c 0840
.org 0xbd74e
	movs r1, #253	@ 000bd74e fd21
.org 0xbd750
	ands r0, r1	@ 000bd750 0840
.org 0xbd752
	strb r0, [r7, #10]	@ 000bd752 b872
.org 0xbd754
	adds r0, r7, #0	@ 000bd754 381c
.org 0xbd756
	adds r0, #140	@ 000bd756 8c30
.org 0xbd758
	str r2, [r0, #0]	@ 000bd758 0260
.org 0xbd75a
	adds r0, #4	@ 000bd75a 0430
.org 0xbd75c
	str r2, [r0, #0]	@ 000bd75c 0260
.org 0xbd75e
	adds r0, #4	@ 000bd75e 0430
.org 0xbd760
	strb r2, [r0, #0]	@ 000bd760 0270
.org 0xbd762
	ldrb r1, [r7, #10]	@ 000bd762 b97a
.org 0xbd764
	movs r0, #251	@ 000bd764 fb20
.org 0xbd766
	ands r0, r1	@ 000bd766 0840
.org 0xbd768
	strb r0, [r7, #10]	@ 000bd768 b872
.org 0xbd76a
	ldr r1, [pc, #20]	@ 000bd76a 0549
.org 0xbd76c
	ldrb r0, [r7, #9]	@ 000bd76c 787a
.org 0xbd76e
	lsls r0, r0, #2	@ 000bd76e 8000
.org 0xbd770
	adds r0, r0, r1	@ 000bd770 4018
.org 0xbd772
	movs r1, #3	@ 000bd772 0321
.org 0xbd774
	str r1, [r7, #12]	@ 000bd774 f960
.org 0xbd776
	ldr r0, [r0, #0]	@ 000bd776 0068
.org 0xbd778
	ldr r0, [r0, #12]	@ 000bd778 c068
.org 0xbd77a
	str r0, [r7, #20]	@ 000bd77a 7861
.org 0xbd77c
	b.n 0xbd8f8	@ 000bd77c bce0
.org 0xbd77e
	.byte 0x00	@ 000bd77e data
.org 0xbd77f
	.byte 0x00	@ 000bd77f data
.org 0xbd780
	.byte 0xf4,0x49,0x86,0x08	@ 000bd780 data
.org 0xbd784
	adds r0, r7, #0	@ 000bd784 381c
.org 0xbd786
	adds r0, #140	@ 000bd786 8c30
.org 0xbd788
	ldr r1, [r0, #0]	@ 000bd788 0168
.org 0xbd78a
	movs r2, #128	@ 000bd78a 8022
.org 0xbd78c
	lsls r2, r2, #5	@ 000bd78c 5201
.org 0xbd78e
	ands r1, r2	@ 000bd78e 1140
.org 0xbd790
	adds r6, r0, #0	@ 000bd790 061c
.org 0xbd792
	cmp r1, #0	@ 000bd792 0029
.org 0xbd794
	beq.n 0xbd804	@ 000bd794 36d0
.org 0xbd796
	ldrb r5, [r7, #13]	@ 000bd796 7d7b
.org 0xbd798
	cmp r5, #0	@ 000bd798 002d
.org 0xbd79a
	bne.n 0xbd7e4	@ 000bd79a 23d1
.org 0xbd79c
	ldrb r1, [r7, #10]	@ 000bd79c b97a
.org 0xbd79e
	movs r0, #4	@ 000bd79e 0420
.org 0xbd7a0
	orrs r0, r1	@ 000bd7a0 0843
.org 0xbd7a2
	strb r0, [r7, #10]	@ 000bd7a2 b872
.org 0xbd7a4
	adds r4, r7, #0	@ 000bd7a4 3c1c
.org 0xbd7a6
	adds r4, #116	@ 000bd7a6 7434
.org 0xbd7a8
	ldr r1, [pc, #52]	@ 000bd7a8 0d49
.org 0xbd7aa
	adds r2, r7, #0	@ 000bd7aa 3a1c
.org 0xbd7ac
	adds r2, #84	@ 000bd7ac 5432
.org 0xbd7ae
	adds r0, r4, #0	@ 000bd7ae 201c
.org 0xbd7b0
	movs r3, #0	@ 000bd7b0 0023
.org 0xbd7b2
	bl 0x5760	@ 000bd7b2 47f7d5ff
.org 0xbd7b6
	str r7, [r4, #44]	@ 000bd7b6 e762
.org 0xbd7b8
	str r5, [r4, #36]	@ 000bd7b8 6562
.org 0xbd7ba
	ldr r1, [r7, #92]	@ 000bd7ba f96d
.org 0xbd7bc
	lsls r0, r1, #1	@ 000bd7bc 4800
.org 0xbd7be
	adds r0, r0, r1	@ 000bd7be 4018
.org 0xbd7c0
	negs r0, r0	@ 000bd7c0 4042
.org 0xbd7c2
	lsrs r1, r0, #31	@ 000bd7c2 c10f
.org 0xbd7c4
	adds r0, r0, r1	@ 000bd7c4 4018
.org 0xbd7c6
	asrs r0, r0, #1	@ 000bd7c6 4010
.org 0xbd7c8
	str r0, [r7, #92]	@ 000bd7c8 f865
.org 0xbd7ca
	ldr r1, [r7, #96]	@ 000bd7ca 396e
.org 0xbd7cc
	lsls r0, r1, #1	@ 000bd7cc 4800
.org 0xbd7ce
	adds r0, r0, r1	@ 000bd7ce 4018
.org 0xbd7d0
	negs r0, r0	@ 000bd7d0 4042
.org 0xbd7d2
	lsrs r1, r0, #31	@ 000bd7d2 c10f
.org 0xbd7d4
	adds r0, r0, r1	@ 000bd7d4 4018
.org 0xbd7d6
	asrs r0, r0, #1	@ 000bd7d6 4010
.org 0xbd7d8
	str r0, [r7, #96]	@ 000bd7d8 3866
.org 0xbd7da
	movs r0, #1	@ 000bd7da 0120
.org 0xbd7dc
	strb r0, [r7, #13]	@ 000bd7dc 7873
.org 0xbd7de
	b.n 0xbd804	@ 000bd7de 11e0
.org 0xbd7e0
	.byte 0x48,0x4b,0x86,0x08	@ 000bd7e0 data
.org 0xbd7e4
	ldr r0, [r7, #96]	@ 000bd7e4 386e
.org 0xbd7e6
	cmp r0, #0	@ 000bd7e6 0028
.org 0xbd7e8
	bge.n 0xbd7f8	@ 000bd7e8 06da
.org 0xbd7ea
	movs r0, #43	@ 000bd7ea 2b20
.org 0xbd7ec
	bl 0x2b10	@ 000bd7ec 45f790f9
.org 0xbd7f0
	ldr r0, [r7, #92]	@ 000bd7f0 f86d
.org 0xbd7f2
	negs r0, r0	@ 000bd7f2 4042
.org 0xbd7f4
	str r0, [r7, #92]	@ 000bd7f4 f865
.org 0xbd7f6
	b.n 0xbd804	@ 000bd7f6 05e0
.org 0xbd7f8
	movs r0, #43	@ 000bd7f8 2b20
.org 0xbd7fa
	bl 0x2b10	@ 000bd7fa 45f789f9
.org 0xbd7fe
	ldr r0, [r7, #96]	@ 000bd7fe 386e
.org 0xbd800
	negs r0, r0	@ 000bd800 4042
.org 0xbd802
	str r0, [r7, #96]	@ 000bd802 3866
.org 0xbd804
	adds r0, r6, #0	@ 000bd804 301c
.org 0xbd806
	ldr r1, [r0, #0]	@ 000bd806 0168
.org 0xbd808
	ldr r2, [pc, #28]	@ 000bd808 074a
.org 0xbd80a
	ands r2, r1	@ 000bd80a 0a40
.org 0xbd80c
	cmp r2, #0	@ 000bd80c 002a
.org 0xbd80e
	beq.n 0xbd82c	@ 000bd80e 0dd0
.org 0xbd810
	movs r1, #0	@ 000bd810 0021
.org 0xbd812
	str r1, [r0, #0]	@ 000bd812 0160
.org 0xbd814
	adds r0, r7, #0	@ 000bd814 381c
.org 0xbd816
	adds r0, #144	@ 000bd816 9030
.org 0xbd818
	str r1, [r0, #0]	@ 000bd818 0160
.org 0xbd81a
	adds r0, #4	@ 000bd81a 0430
.org 0xbd81c
	strb r1, [r0, #0]	@ 000bd81c 0170
.org 0xbd81e
	ldrb r1, [r7, #10]	@ 000bd81e b97a
.org 0xbd820
	movs r0, #251	@ 000bd820 fb20
.org 0xbd822
	ands r0, r1	@ 000bd822 0840
.org 0xbd824
	strb r0, [r7, #10]	@ 000bd824 b872
.org 0xbd826
	b.n 0xbd884	@ 000bd826 2de0
.org 0xbd828
	.byte 0x00,0x01,0x40,0x00	@ 000bd828 data
.org 0xbd82c
	movs r0, #4	@ 000bd82c 0420
.org 0xbd82e
	ands r1, r0	@ 000bd82e 0140
.org 0xbd830
	cmp r1, #0	@ 000bd830 0029
.org 0xbd832
	beq.n 0xbd850	@ 000bd832 0dd0
.org 0xbd834
	str r2, [r6, #0]	@ 000bd834 3260
.org 0xbd836
	adds r0, r7, #0	@ 000bd836 381c
.org 0xbd838
	adds r0, #144	@ 000bd838 9030
.org 0xbd83a
	str r2, [r0, #0]	@ 000bd83a 0260
.org 0xbd83c
	adds r0, #4	@ 000bd83c 0430
.org 0xbd83e
	strb r2, [r0, #0]	@ 000bd83e 0270
.org 0xbd840
	ldrb r1, [r7, #10]	@ 000bd840 b97a
.org 0xbd842
	movs r0, #251	@ 000bd842 fb20
.org 0xbd844
	ands r0, r1	@ 000bd844 0840
.org 0xbd846
	strb r0, [r7, #10]	@ 000bd846 b872
.org 0xbd848
	adds r1, r7, #0	@ 000bd848 391c
.org 0xbd84a
	adds r1, #84	@ 000bd84a 5431
.org 0xbd84c
	movs r0, #2	@ 000bd84c 0220
.org 0xbd84e
	b.n 0xbd88a	@ 000bd84e 1ce0
.org 0xbd850
	ldrb r0, [r7, #18]	@ 000bd850 b87c
.org 0xbd852
	subs r0, #1	@ 000bd852 0138
.org 0xbd854
	strb r0, [r7, #18]	@ 000bd854 b874
.org 0xbd856
	lsls r0, r0, #24	@ 000bd856 0006
.org 0xbd858
	cmp r0, #0	@ 000bd858 0028
.org 0xbd85a
	beq.n 0xbd884	@ 000bd85a 13d0
.org 0xbd85c
	ldrb r0, [r7, #16]	@ 000bd85c 387c
.org 0xbd85e
	cmp r0, #0	@ 000bd85e 0028
.org 0xbd860
	beq.n 0xbd8a8	@ 000bd860 22d0
.org 0xbd862
	ldr r0, [r7, #84]	@ 000bd862 786d
.org 0xbd864
	ldr r1, [r7, #88]	@ 000bd864 b96d
.org 0xbd866
	bl 0x7c7c	@ 000bd866 4af709fa
.org 0xbd86a
	lsls r0, r0, #16	@ 000bd86a 0004
.org 0xbd86c
	lsrs r1, r0, #16	@ 000bd86c 010c
.org 0xbd86e
	cmp r1, #0	@ 000bd86e 0029
.org 0xbd870
	beq.n 0xbd8a8	@ 000bd870 1ad0
.org 0xbd872
	movs r0, #128	@ 000bd872 8020
.org 0xbd874
	lsls r0, r0, #8	@ 000bd874 0002
.org 0xbd876
	ands r0, r1	@ 000bd876 0840
.org 0xbd878
	cmp r0, #0	@ 000bd878 0028
.org 0xbd87a
	bne.n 0xbd8a8	@ 000bd87a 15d1
.org 0xbd87c
	movs r0, #15	@ 000bd87c 0f20
.org 0xbd87e
	ands r0, r1	@ 000bd87e 0840
.org 0xbd880
	cmp r0, #15	@ 000bd880 0f28
.org 0xbd882
	beq.n 0xbd8a8	@ 000bd882 11d0
.org 0xbd884
	adds r1, r7, #0	@ 000bd884 391c
.org 0xbd886
	adds r1, #84	@ 000bd886 5431
.org 0xbd888
	movs r0, #3	@ 000bd888 0320
.org 0xbd88a
	bl 0xd0c88	@ 000bd88a 13f0fdf9
.org 0xbd88e
	ldr r1, [pc, #20]	@ 000bd88e 0549
.org 0xbd890
	ldrb r0, [r7, #9]	@ 000bd890 787a
.org 0xbd892
	lsls r0, r0, #2	@ 000bd892 8000
.org 0xbd894
	adds r0, r0, r1	@ 000bd894 4018
.org 0xbd896
	movs r1, #2	@ 000bd896 0221
.org 0xbd898
	str r1, [r7, #12]	@ 000bd898 f960
.org 0xbd89a
	ldr r0, [r0, #0]	@ 000bd89a 0068
.org 0xbd89c
	ldr r0, [r0, #8]	@ 000bd89c 8068
.org 0xbd89e
	str r0, [r7, #20]	@ 000bd89e 7861
.org 0xbd8a0
	b.n 0xbd8f8	@ 000bd8a0 2ae0
.org 0xbd8a2
	.byte 0x00	@ 000bd8a2 data
.org 0xbd8a3
	.byte 0x00	@ 000bd8a3 data
.org 0xbd8a4
	.byte 0xf4,0x49,0x86,0x08	@ 000bd8a4 data
.org 0xbd8a8
	ldrb r0, [r7, #13]	@ 000bd8a8 787b
.org 0xbd8aa
	cmp r0, #0	@ 000bd8aa 0028
.org 0xbd8ac
	bne.n 0xbd8e8	@ 000bd8ac 1cd1
.org 0xbd8ae
	ldrb r0, [r7, #14]	@ 000bd8ae b87b
.org 0xbd8b0
	cmp r0, #0	@ 000bd8b0 0028
.org 0xbd8b2
	bne.n 0xbd8d4	@ 000bd8b2 0fd1
.org 0xbd8b4
	ldr r0, [pc, #20]	@ 000bd8b4 0548
.org 0xbd8b6
	ldrb r0, [r0, #0]	@ 000bd8b6 0078
.org 0xbd8b8
	cmp r0, #0	@ 000bd8b8 0028
.org 0xbd8ba
	beq.n 0xbd8e8	@ 000bd8ba 15d0
.org 0xbd8bc
	adds r0, r7, #0	@ 000bd8bc 381c
.org 0xbd8be
	adds r0, #116	@ 000bd8be 7430
.org 0xbd8c0
	ldr r1, [pc, #12]	@ 000bd8c0 0349
.org 0xbd8c2
	bl 0x5784	@ 000bd8c2 47f75fff
.org 0xbd8c6
	movs r0, #1	@ 000bd8c6 0120
.org 0xbd8c8
	strb r0, [r7, #14]	@ 000bd8c8 b873
.org 0xbd8ca
	b.n 0xbd8e8	@ 000bd8ca 0de0
.org 0xbd8cc
	.byte 0x98,0xed,0x02,0x02	@ 000bd8cc data
.org 0xbd8d0
	.byte 0x78,0x4b,0x86,0x08	@ 000bd8d0 data
.org 0xbd8d4
	ldr r0, [pc, #48]	@ 000bd8d4 0c48
.org 0xbd8d6
	ldrb r4, [r0, #0]	@ 000bd8d6 0478
.org 0xbd8d8
	cmp r4, #0	@ 000bd8d8 002c
.org 0xbd8da
	bne.n 0xbd8e8	@ 000bd8da 05d1

@ FUN_08085630  entry 0x08085630  size 326
.thumb
.org 0x85630
FUN_08085630:
	push {r4, r5, r6, lr}	@ 00085630 70b5
.org 0x85632
	adds r4, r0, #0	@ 00085632 041c
.org 0x85634
	ldr r0, [pc, #72]	@ 00085634 1248
.org 0x85636
	adds r1, r4, #0	@ 00085636 211c
.org 0x85638
	adds r1, #84	@ 00085638 5431
.org 0x8563a
	bl 0x1fb14	@ 0008563a 9af76bfa
.org 0x8563e
	movs r1, #128	@ 0008563e 8021
.org 0x85640
	lsls r1, r1, #8	@ 00085640 0902
.org 0x85642
	cmp r0, r1	@ 00085642 8842
.org 0x85644
	bls.n 0x85688	@ 00085644 20d9
.org 0x85646
	ldrb r1, [r4, #10]	@ 00085646 a17a
.org 0x85648
	movs r0, #254	@ 00085648 fe20
.org 0x8564a
	ands r0, r1	@ 0008564a 0840
.org 0x8564c
	movs r2, #0	@ 0008564c 0022
.org 0x8564e
	movs r1, #253	@ 0008564e fd21
.org 0x85650
	ands r0, r1	@ 00085650 0840
.org 0x85652
	strb r0, [r4, #10]	@ 00085652 a072
.org 0x85654
	adds r0, r4, #0	@ 00085654 201c
.org 0x85656
	adds r0, #140	@ 00085656 8c30
.org 0x85658
	str r2, [r0, #0]	@ 00085658 0260
.org 0x8565a
	adds r0, #4	@ 0008565a 0430
.org 0x8565c
	str r2, [r0, #0]	@ 0008565c 0260
.org 0x8565e
	adds r0, #4	@ 0008565e 0430
.org 0x85660
	strb r2, [r0, #0]	@ 00085660 0270
.org 0x85662
	ldrb r1, [r4, #10]	@ 00085662 a17a
.org 0x85664
	movs r0, #251	@ 00085664 fb20
.org 0x85666
	ands r0, r1	@ 00085666 0840
.org 0x85668
	strb r0, [r4, #10]	@ 00085668 a072
.org 0x8566a
	ldr r1, [pc, #24]	@ 0008566a 0649
.org 0x8566c
	ldrb r0, [r4, #9]	@ 0008566c 607a
.org 0x8566e
	lsls r0, r0, #2	@ 0008566e 8000
.org 0x85670
	adds r0, r0, r1	@ 00085670 4018
.org 0x85672
	movs r1, #3	@ 00085672 0321
.org 0x85674
	str r1, [r4, #12]	@ 00085674 e160
.org 0x85676
	ldr r0, [r0, #0]	@ 00085676 0068
.org 0x85678
	ldr r0, [r0, #12]	@ 00085678 c068
.org 0x8567a
	str r0, [r4, #20]	@ 0008567a 6061
.org 0x8567c
	b.n 0x85786	@ 0008567c 83e0
.org 0x8567e
	.byte 0x00	@ 0008567e data
.org 0x8567f
	.byte 0x00	@ 0008567f data
.org 0x85680
	.byte 0xf8,0xe9,0x02,0x02	@ 00085680 data
.org 0x85684
	.byte 0x40,0xdb,0x85,0x08	@ 00085684 data
.org 0x85688
	adds r0, r4, #0	@ 00085688 201c
.org 0x8568a
	bl 0x8549c	@ 0008568a fff707ff
.org 0x8568e
	lsls r0, r0, #24	@ 0008568e 0006
.org 0x85690
	cmp r0, #0	@ 00085690 0028
.org 0x85692
	beq.n 0x856b0	@ 00085692 0dd0
.org 0x85694
	ldr r1, [pc, #20]	@ 00085694 0549
.org 0x85696
	ldrb r0, [r4, #9]	@ 00085696 607a
.org 0x85698
	lsls r0, r0, #2	@ 00085698 8000
.org 0x8569a
	adds r0, r0, r1	@ 0008569a 4018
.org 0x8569c
	movs r1, #2	@ 0008569c 0221
.org 0x8569e
	str r1, [r4, #12]	@ 0008569e e160
.org 0x856a0
	ldr r0, [r0, #0]	@ 000856a0 0068
.org 0x856a2
	ldr r0, [r0, #8]	@ 000856a2 8068
.org 0x856a4
	str r0, [r4, #20]	@ 000856a4 6061
.org 0x856a6
	strb r1, [r4, #13]	@ 000856a6 6173
.org 0x856a8
	b.n 0x856e2	@ 000856a8 1be0
.org 0x856aa
	.byte 0x00	@ 000856aa data
.org 0x856ab
	.byte 0x00	@ 000856ab data
.org 0x856ac
	.byte 0x40,0xdb,0x85,0x08	@ 000856ac data
.org 0x856b0
	adds r0, r4, #0	@ 000856b0 201c
.org 0x856b2
	adds r0, #140	@ 000856b2 8c30
.org 0x856b4
	ldr r1, [r0, #0]	@ 000856b4 0168
.org 0x856b6
	movs r2, #128	@ 000856b6 8022
.org 0x856b8
	lsls r2, r2, #2	@ 000856b8 9200
.org 0x856ba
	ands r1, r2	@ 000856ba 1140
.org 0x856bc
	adds r6, r0, #0	@ 000856bc 061c
.org 0x856be
	cmp r1, #0	@ 000856be 0029
.org 0x856c0
	beq.n 0x856f0	@ 000856c0 16d0
.org 0x856c2
	ldr r1, [pc, #40]	@ 000856c2 0a49
.org 0x856c4
	ldrb r0, [r4, #9]	@ 000856c4 607a
.org 0x856c6
	lsls r0, r0, #2	@ 000856c6 8000
.org 0x856c8
	adds r0, r0, r1	@ 000856c8 4018
.org 0x856ca
	movs r1, #2	@ 000856ca 0221
.org 0x856cc
	str r1, [r4, #12]	@ 000856cc e160
.org 0x856ce
	ldr r0, [r0, #0]	@ 000856ce 0068
.org 0x856d0
	ldr r0, [r0, #8]	@ 000856d0 8068
.org 0x856d2
	str r0, [r4, #20]	@ 000856d2 6061
.org 0x856d4
	adds r0, r4, #0	@ 000856d4 201c
.org 0x856d6
	adds r0, #195	@ 000856d6 c330
.org 0x856d8
	ldrb r0, [r0, #0]	@ 000856d8 0078
.org 0x856da
	cmp r0, #0	@ 000856da 0028
.org 0x856dc
	beq.n 0x856e0	@ 000856dc 00d0
.org 0x856de
	movs r0, #1	@ 000856de 0120
.org 0x856e0
	strb r0, [r4, #13]	@ 000856e0 6073
.org 0x856e2
	adds r0, r4, #0	@ 000856e2 201c
.org 0x856e4
	bl 0x85798	@ 000856e4 00f058f8
.org 0x856e8
	b.n 0x85786	@ 000856e8 4de0
.org 0x856ea
	.byte 0x00	@ 000856ea data
.org 0x856eb
	.byte 0x00	@ 000856eb data
.org 0x856ec
	.byte 0x40,0xdb,0x85,0x08	@ 000856ec data
.org 0x856f0
	ldrb r0, [r4, #15]	@ 000856f0 e07b
.org 0x856f2
	cmp r0, #0	@ 000856f2 0028
.org 0x856f4
	bne.n 0x8570a	@ 000856f4 09d1
.org 0x856f6
	adds r0, r4, #0	@ 000856f6 201c
.org 0x856f8
	bl 0x7f90c	@ 000856f8 faf708f9
.org 0x856fc
	cmp r0, #0	@ 000856fc 0028
.org 0x856fe
	beq.n 0x85704	@ 000856fe 01d0
.org 0x85700
	movs r0, #1	@ 00085700 0120
.org 0x85702
	strb r0, [r4, #15]	@ 00085702 e073
.org 0x85704
	ldrb r0, [r4, #15]	@ 00085704 e07b
.org 0x85706
	cmp r0, #0	@ 00085706 0028
.org 0x85708
	beq.n 0x85766	@ 00085708 2dd0
.org 0x8570a
	ldr r0, [r4, #84]	@ 0008570a 606d
.org 0x8570c
	ldr r1, [r4, #88]	@ 0008570c a16d
.org 0x8570e
	movs r5, #128	@ 0008570e 8025
.org 0x85710
	lsls r5, r5, #3	@ 00085710 ed00
.org 0x85712
	adds r1, r1, r5	@ 00085712 4919
.org 0x85714
	bl 0x8aa4	@ 00085714 83f7c6f9
.org 0x85718
	adds r1, r0, #0	@ 00085718 011c
.org 0x8571a
	cmp r1, #0	@ 0008571a 0029
.org 0x8571c
	beq.n 0x85726	@ 0008571c 03d0
.org 0x8571e
	adds r0, r4, #0	@ 0008571e 201c
.org 0x85720
	movs r2, #0	@ 00085720 0022
.org 0x85722
	bl 0x85418	@ 00085722 fff779fe
.org 0x85726
	ldr r0, [r4, #84]	@ 00085726 606d
.org 0x85728
	ldr r1, [r4, #88]	@ 00085728 a16d
.org 0x8572a
	adds r1, r1, r5	@ 0008572a 4919
.org 0x8572c
	bl 0x7c7c	@ 0008572c 82f7a6fa
.org 0x85730
	lsls r0, r0, #16	@ 00085730 0004
.org 0x85732
	cmp r0, #0	@ 00085732 0028
.org 0x85734
	beq.n 0x85740	@ 00085734 04d0
.org 0x85736
	ldr r0, [r4, #84]	@ 00085736 606d
.org 0x85738
	ldr r1, [r4, #88]	@ 00085738 a16d
.org 0x8573a
	bl 0x8534	@ 0008573a 82f7fbfe
.org 0x8573e
	str r0, [r4, #88]	@ 0008573e a065
.org 0x85740
	ldrb r0, [r4, #15]	@ 00085740 e07b
.org 0x85742
	cmp r0, #1	@ 00085742 0128
.org 0x85744
	bne.n 0x85750	@ 00085744 04d1
.org 0x85746
	adds r0, r4, #0	@ 00085746 201c
.org 0x85748
	bl 0x1cff0	@ 00085748 97f752fc
.org 0x8574c
	movs r0, #2	@ 0008574c 0220
.org 0x8574e
	strb r0, [r4, #15]	@ 0008574e e073
.org 0x85750
	adds r0, r4, #0	@ 00085750 201c
.org 0x85752
	bl 0x7f90c	@ 00085752 faf7dbf8
.org 0x85756
	cmp r0, #0	@ 00085756 0028
.org 0x85758
	bne.n 0x8575c	@ 00085758 00d1
.org 0x8575a
	strb r0, [r4, #15]	@ 0008575a e073
.org 0x8575c
	ldr r0, [r6, #0]	@ 0008575c 3068
.org 0x8575e
	ldr r1, [pc, #44]	@ 0008575e 0b49
.org 0x85760
	ands r0, r1	@ 00085760 0840
.org 0x85762
	cmp r0, r1	@ 00085762 8842
.org 0x85764
	bne.n 0x85786	@ 00085764 0fd1
.org 0x85766
	ldr r1, [pc, #40]	@ 00085766 0a49
.org 0x85768
	ldrb r0, [r4, #13]	@ 00085768 607b
.org 0x8576a
	lsls r0, r0, #2	@ 0008576a 8000
.org 0x8576c
	adds r0, r0, r1	@ 0008576c 4018
.org 0x8576e
	ldr r1, [r0, #0]	@ 0008576e 0168
.org 0x85770
	adds r0, r4, #0	@ 00085770 201c
.org 0x85772
	bl 0x128f80	@ 00085772 a3f005fc

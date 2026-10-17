@ FUN_08075644  entry 0x08075644  size 310
.thumb
.org 0x75644
FUN_08075644:
	push {r4, r5, r6, lr}	@ 00075644 70b5
.org 0x75646
	adds r5, r0, #0	@ 00075646 051c
.org 0x75648
	ldrb r0, [r5, #14]	@ 00075648 a87b
.org 0x7564a
	cmp r0, #0	@ 0007564a 0028
.org 0x7564c
	bne.n 0x756ac	@ 0007564c 2ed1
.org 0x7564e
	ldr r2, [pc, #44]	@ 0007564e 0b4a
.org 0x75650
	ldr r1, [r2, #0]	@ 00075650 1168
.org 0x75652
	ldr r0, [pc, #44]	@ 00075652 0b48
.org 0x75654
	muls r0, r1	@ 00075654 4843
.org 0x75656
	ldr r1, [pc, #44]	@ 00075656 0b49
.org 0x75658
	adds r0, r0, r1	@ 00075658 4018
.org 0x7565a
	lsls r0, r0, #1	@ 0007565a 4000
.org 0x7565c
	lsrs r1, r0, #1	@ 0007565c 4108
.org 0x7565e
	str r1, [r2, #0]	@ 0007565e 1160
.org 0x75660
	lsrs r4, r0, #17	@ 00075660 440c
.org 0x75662
	movs r0, #31	@ 00075662 1f20
.org 0x75664
	ands r4, r0	@ 00075664 0440
.org 0x75666
	ldr r1, [pc, #32]	@ 00075666 0849
.org 0x75668
	adds r0, r5, #0	@ 00075668 281c
.org 0x7566a
	bl 0x1cf00	@ 0007566a a7f749fc
.org 0x7566e
	movs r0, #221	@ 0007566e dd20
.org 0x75670
	bl 0x2b10	@ 00075670 8df74efa
.org 0x75674
	cmp r4, #11	@ 00075674 0b2c
.org 0x75676
	bhi.n 0x7568c	@ 00075676 09d8
.org 0x75678
	movs r0, #2	@ 00075678 0220
.org 0x7567a
	b.n 0x75696	@ 0007567a 0ce0
.org 0x7567c
	.byte 0x38,0xdc,0x02,0x02	@ 0007567c data
.org 0x75680
	.byte 0xfd,0x43,0x03,0x00	@ 00075680 data
.org 0x75684
	.byte 0xc3,0x9e,0x26,0x00	@ 00075684 data
.org 0x75688
	.byte 0x02,0xaf,0x00,0x00	@ 00075688 data
.org 0x7568c
	cmp r4, #23	@ 0007568c 172c
.org 0x7568e
	bhi.n 0x75694	@ 0007568e 01d8
.org 0x75690
	movs r0, #3	@ 00075690 0320
.org 0x75692
	b.n 0x75696	@ 00075692 00e0
.org 0x75694
	movs r0, #4	@ 00075694 0420
.org 0x75696
	strb r0, [r5, #18]	@ 00075696 a874
.org 0x75698
	adds r1, r5, #0	@ 00075698 291c
.org 0x7569a
	adds r1, #222	@ 0007569a de31
.org 0x7569c
	movs r0, #1	@ 0007569c 0120
.org 0x7569e
	strb r0, [r1, #0]	@ 0007569e 0870
.org 0x756a0
	ldrb r0, [r5, #14]	@ 000756a0 a87b
.org 0x756a2
	adds r0, #1	@ 000756a2 0130
.org 0x756a4
	strb r0, [r5, #14]	@ 000756a4 a873
.org 0x756a6
	adds r6, r5, #0	@ 000756a6 2e1c
.org 0x756a8
	adds r6, #113	@ 000756a8 7136
.org 0x756aa
	b.n 0x7576c	@ 000756aa 5fe0
.org 0x756ac
	adds r0, r5, #0	@ 000756ac 281c
.org 0x756ae
	adds r0, #114	@ 000756ae 7230
.org 0x756b0
	ldrb r0, [r0, #0]	@ 000756b0 0078
.org 0x756b2
	lsls r0, r0, #24	@ 000756b2 0006
.org 0x756b4
	asrs r0, r0, #24	@ 000756b4 0016
.org 0x756b6
	adds r6, r5, #0	@ 000756b6 2e1c
.org 0x756b8
	adds r6, #113	@ 000756b8 7136
.org 0x756ba
	cmp r0, #1	@ 000756ba 0128
.org 0x756bc
	bgt.n 0x7576c	@ 000756bc 56dc
.org 0x756be
	ldrb r1, [r5, #10]	@ 000756be a97a
.org 0x756c0
	movs r0, #16	@ 000756c0 1020
.org 0x756c2
	ands r0, r1	@ 000756c2 0840
.org 0x756c4
	adds r2, r1, #0	@ 000756c4 0a1c
.org 0x756c6
	cmp r0, #0	@ 000756c6 0028
.org 0x756c8
	beq.n 0x756e0	@ 000756c8 0ad0
.org 0x756ca
	ldr r1, [pc, #16]	@ 000756ca 0449
.org 0x756cc
	movs r0, #0	@ 000756cc 0020
.org 0x756ce
	ldrsb r0, [r6, r0]	@ 000756ce 3056
.org 0x756d0
	lsls r0, r0, #2	@ 000756d0 8000
.org 0x756d2
	adds r0, r0, r1	@ 000756d2 4018
.org 0x756d4
	ldr r1, [r5, #84]	@ 000756d4 696d
.org 0x756d6
	ldr r0, [r0, #0]	@ 000756d6 0068
.org 0x756d8
	subs r1, r1, r0	@ 000756d8 091a
.org 0x756da
	b.n 0x756f0	@ 000756da 09e0
.org 0x756dc
	.byte 0xc8,0xd0,0x85,0x08	@ 000756dc data
.org 0x756e0
	ldr r1, [pc, #48]	@ 000756e0 0c49
.org 0x756e2
	movs r0, #0	@ 000756e2 0020
.org 0x756e4
	ldrsb r0, [r6, r0]	@ 000756e4 3056
.org 0x756e6
	lsls r0, r0, #2	@ 000756e6 8000
.org 0x756e8
	adds r0, r0, r1	@ 000756e8 4018
.org 0x756ea
	ldr r1, [r5, #84]	@ 000756ea 696d
.org 0x756ec
	ldr r0, [r0, #0]	@ 000756ec 0068
.org 0x756ee
	adds r1, r1, r0	@ 000756ee 0918
.org 0x756f0
	str r1, [r5, #84]	@ 000756f0 6965
.org 0x756f2
	movs r0, #0	@ 000756f2 0020
.org 0x756f4
	ldrsb r0, [r6, r0]	@ 000756f4 3056
.org 0x756f6
	cmp r0, #7	@ 000756f6 0728
.org 0x756f8
	bne.n 0x75718	@ 000756f8 0ed1
.org 0x756fa
	ldrb r0, [r5, #18]	@ 000756fa a87c
.org 0x756fc
	subs r0, #1	@ 000756fc 0138
.org 0x756fe
	strb r0, [r5, #18]	@ 000756fe a874
.org 0x75700
	lsls r0, r0, #24	@ 00075700 0006
.org 0x75702
	lsrs r0, r0, #24	@ 00075702 000e
.org 0x75704
	cmp r0, #255	@ 00075704 ff28
.org 0x75706
	bne.n 0x75718	@ 00075706 07d1
.org 0x75708
	movs r0, #3	@ 00075708 0320
.org 0x7570a
	strb r0, [r5, #13]	@ 0007570a 6873
.org 0x7570c
	movs r0, #0	@ 0007570c 0020
.org 0x7570e
	strb r0, [r5, #14]	@ 0007570e a873
.org 0x75710
	b.n 0x75792	@ 00075710 3fe0
.org 0x75712
	.byte 0x00	@ 00075712 data
.org 0x75713
	.byte 0x00	@ 00075713 data
.org 0x75714
	.byte 0xc8,0xd0,0x85,0x08	@ 00075714 data
.org 0x75718
	movs r0, #0	@ 00075718 0020
.org 0x7571a
	ldrsb r0, [r6, r0]	@ 0007571a 3056
.org 0x7571c
	cmp r0, #3	@ 0007571c 0328
.org 0x7571e
	beq.n 0x75724	@ 0007571e 01d0
.org 0x75720
	cmp r0, #7	@ 00075720 0728
.org 0x75722
	bne.n 0x7576c	@ 00075722 23d1
.org 0x75724
	movs r0, #16	@ 00075724 1020
.org 0x75726
	ands r0, r2	@ 00075726 1040
.org 0x75728
	lsls r0, r0, #24	@ 00075728 0006
.org 0x7572a
	lsrs r4, r0, #24	@ 0007572a 040e
.org 0x7572c
	cmp r4, #0	@ 0007572c 002c
.org 0x7572e
	beq.n 0x7574e	@ 0007572e 0ed0
.org 0x75730
	ldr r0, [r5, #84]	@ 00075730 686d
.org 0x75732
	movs r1, #160	@ 00075732 a021
.org 0x75734
	lsls r1, r1, #5	@ 00075734 4901
.org 0x75736
	adds r0, r0, r1	@ 00075736 4018
.org 0x75738
	ldr r1, [r5, #88]	@ 00075738 a96d
.org 0x7573a
	bl 0x7c7c	@ 0007573a 92f79ffa
.org 0x7573e
	lsls r0, r0, #16	@ 0007573e 0004
.org 0x75740
	cmp r0, #0	@ 00075740 0028
.org 0x75742
	beq.n 0x7576c	@ 00075742 13d0
.org 0x75744
	movs r1, #0	@ 00075744 0021
.org 0x75746
	movs r0, #3	@ 00075746 0320
.org 0x75748
	strb r0, [r5, #13]	@ 00075748 6873
.org 0x7574a
	strb r1, [r5, #14]	@ 0007574a a973
.org 0x7574c
	b.n 0x75792	@ 0007574c 21e0
.org 0x7574e
	ldr r0, [r5, #84]	@ 0007574e 686d
.org 0x75750
	ldr r1, [pc, #20]	@ 00075750 0549
.org 0x75752
	adds r0, r0, r1	@ 00075752 4018
.org 0x75754
	ldr r1, [r5, #88]	@ 00075754 a96d
.org 0x75756
	bl 0x7c7c	@ 00075756 92f791fa
.org 0x7575a
	lsls r0, r0, #16	@ 0007575a 0004
.org 0x7575c
	cmp r0, #0	@ 0007575c 0028
.org 0x7575e
	beq.n 0x7576c	@ 0007575e 05d0
.org 0x75760
	movs r0, #3	@ 00075760 0320
.org 0x75762
	strb r0, [r5, #13]	@ 00075762 6873
.org 0x75764
	strb r4, [r5, #14]	@ 00075764 ac73
.org 0x75766
	b.n 0x75792	@ 00075766 14e0
.org 0x75768
	.byte 0x00,0xec,0xff,0xff	@ 00075768 data
.org 0x7576c
	adds r0, r5, #0	@ 0007576c 281c
.org 0x7576e
	bl 0x1cff0	@ 0007576e a7f73ffc
.org 0x75772
	movs r0, #0	@ 00075772 0020
.org 0x75774
	ldrsb r0, [r6, r0]	@ 00075774 3056
.org 0x75776
	cmp r0, #3	@ 00075776 0328
.org 0x75778
	beq.n 0x7577e	@ 00075778 01d0

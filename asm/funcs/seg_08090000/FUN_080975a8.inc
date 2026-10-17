@ FUN_080975a8  entry 0x080975a8  size 476
.thumb
.org 0x975a8
FUN_080975a8:
	push {r4, r5, r6, r7, lr}	@ 000975a8 f0b5
.org 0x975aa
	mov r7, r8	@ 000975aa 4746
.org 0x975ac
	push {r7}	@ 000975ac 80b4
.org 0x975ae
	sub sp, #8	@ 000975ae 82b0
.org 0x975b0
	adds r4, r0, #0	@ 000975b0 041c
.org 0x975b2
	ldrb r5, [r4, #14]	@ 000975b2 a57b
.org 0x975b4
	cmp r5, #0	@ 000975b4 002d
.org 0x975b6
	bne.n 0x975cc	@ 000975b6 09d1
.org 0x975b8
	movs r1, #160	@ 000975b8 a021
.org 0x975ba
	lsls r1, r1, #7	@ 000975ba c901
.org 0x975bc
	bl 0x1cf00	@ 000975bc 85f7a0fc
.org 0x975c0
	movs r0, #16	@ 000975c0 1020
.org 0x975c2
	strb r0, [r4, #18]	@ 000975c2 a074
.org 0x975c4
	strb r5, [r4, #15]	@ 000975c4 e573
.org 0x975c6
	ldrb r0, [r4, #14]	@ 000975c6 a07b
.org 0x975c8
	adds r0, #1	@ 000975c8 0130
.org 0x975ca
	strb r0, [r4, #14]	@ 000975ca a073
.org 0x975cc
	ldrb r0, [r4, #15]	@ 000975cc e07b
.org 0x975ce
	cmp r0, #1	@ 000975ce 0128
.org 0x975d0
	beq.n 0x97604	@ 000975d0 18d0
.org 0x975d2
	cmp r0, #1	@ 000975d2 0128
.org 0x975d4
	bgt.n 0x975dc	@ 000975d4 02dc
.org 0x975d6
	cmp r0, #0	@ 000975d6 0028
.org 0x975d8
	beq.n 0x975e4	@ 000975d8 04d0
.org 0x975da
	b.n 0x977c2	@ 000975da f2e0
.org 0x975dc
	cmp r0, #2	@ 000975dc 0228
.org 0x975de
	bne.n 0x975e2	@ 000975de 00d1
.org 0x975e0
	b.n 0x977ac	@ 000975e0 e4e0
.org 0x975e2
	b.n 0x977c2	@ 000975e2 eee0
.org 0x975e4
	ldrb r0, [r4, #18]	@ 000975e4 a07c
.org 0x975e6
	subs r0, #1	@ 000975e6 0138
.org 0x975e8
	strb r0, [r4, #18]	@ 000975e8 a074
.org 0x975ea
	lsls r0, r0, #24	@ 000975ea 0006
.org 0x975ec
	lsrs r0, r0, #24	@ 000975ec 000e
.org 0x975ee
	cmp r0, #255	@ 000975ee ff28
.org 0x975f0
	beq.n 0x975f4	@ 000975f0 00d0
.org 0x975f2
	b.n 0x977c2	@ 000975f2 e6e0
.org 0x975f4
	ldr r1, [pc, #8]	@ 000975f4 0249
.org 0x975f6
	adds r0, r4, #0	@ 000975f6 201c
.org 0x975f8
	bl 0x1cf00	@ 000975f8 85f782fc
.org 0x975fc
	b.n 0x977a0	@ 000975fc d0e0
.org 0x975fe
	.byte 0x00	@ 000975fe data
.org 0x975ff
	.byte 0x00	@ 000975ff data
.org 0x97600
	.byte 0x02,0x50,0x00,0x00	@ 00097600 data
.org 0x97604
	adds r2, r4, #0	@ 00097604 221c
.org 0x97606
	adds r2, #189	@ 00097606 bd32
.org 0x97608
	ldrb r1, [r4, #18]	@ 00097608 a17c
.org 0x9760a
	lsrs r1, r1, #4	@ 0009760a 0909
.org 0x9760c
	ldrb r0, [r2, #0]	@ 0009760c 1078
.org 0x9760e
	subs r0, r0, r1	@ 0009760e 401a
.org 0x97610
	strb r0, [r2, #0]	@ 00097610 1070
.org 0x97612
	ldrb r0, [r4, #18]	@ 00097612 a07c
.org 0x97614
	adds r0, #16	@ 00097614 1030
.org 0x97616
	strb r0, [r4, #18]	@ 00097616 a074
.org 0x97618
	ldrb r0, [r2, #0]	@ 00097618 1078
.org 0x9761a
	adds r0, #63	@ 0009761a 3f30
.org 0x9761c
	lsls r0, r0, #24	@ 0009761c 0006
.org 0x9761e
	lsrs r0, r0, #24	@ 0009761e 000e
.org 0x97620
	mov r8, r2	@ 00097620 9046
.org 0x97622
	cmp r0, #58	@ 00097622 3a28
.org 0x97624
	bls.n 0x97628	@ 00097624 00d9
.org 0x97626
	b.n 0x977c2	@ 00097626 cce0
.org 0x97628
	ldrb r1, [r4, #10]	@ 00097628 a17a
.org 0x9762a
	movs r0, #16	@ 0009762a 1020
.org 0x9762c
	ands r0, r1	@ 0009762c 0840
.org 0x9762e
	cmp r0, #0	@ 0009762e 0028
.org 0x97630
	beq.n 0x9763a	@ 00097630 03d0
.org 0x97632
	ldr r0, [r4, #84]	@ 00097632 606d
.org 0x97634
	movs r1, #200	@ 00097634 c821
.org 0x97636
	lsls r1, r1, #5	@ 00097636 4901
.org 0x97638
	b.n 0x9763e	@ 00097638 01e0
.org 0x9763a
	ldr r0, [r4, #84]	@ 0009763a 606d
.org 0x9763c
	ldr r1, [pc, #80]	@ 0009763c 1449
.org 0x9763e
	adds r0, r0, r1	@ 0009763e 4018
.org 0x97640
	str r0, [sp, #0]	@ 00097640 0090
.org 0x97642
	ldr r1, [r4, #88]	@ 00097642 a16d
.org 0x97644
	movs r0, #192	@ 00097644 c020
.org 0x97646
	lsls r0, r0, #2	@ 00097646 8000
.org 0x97648
	adds r1, r1, r0	@ 00097648 0918
.org 0x9764a
	str r1, [sp, #4]	@ 0009764a 0191
.org 0x9764c
	ldr r0, [sp, #0]	@ 0009764c 0098
.org 0x9764e
	bl 0x7c7c	@ 0009764e 70f715fb
.org 0x97652
	lsls r0, r0, #16	@ 00097652 0004
.org 0x97654
	cmp r0, #0	@ 00097654 0028
.org 0x97656
	bne.n 0x9765a	@ 00097656 00d1
.org 0x97658
	b.n 0x97794	@ 00097658 9ce0
.org 0x9765a
	adds r1, r4, #0	@ 0009765a 211c
.org 0x9765c
	adds r1, #84	@ 0009765c 5431
.org 0x9765e
	movs r0, #2	@ 0009765e 0220
.org 0x97660
	bl 0x1fe64	@ 00097660 88f700fc
.org 0x97664
	ldr r6, [pc, #44]	@ 00097664 0b4e
.org 0x97666
	ldr r2, [pc, #48]	@ 00097666 0c4a
.org 0x97668
	ldr r1, [r2, #0]	@ 00097668 1168
.org 0x9766a
	ldr r0, [pc, #48]	@ 0009766a 0c48
.org 0x9766c
	muls r0, r1	@ 0009766c 4843
.org 0x9766e
	ldr r1, [pc, #48]	@ 0009766e 0c49
.org 0x97670
	adds r0, r0, r1	@ 00097670 4018
.org 0x97672
	lsls r0, r0, #1	@ 00097672 4000
.org 0x97674
	lsrs r1, r0, #1	@ 00097674 4108
.org 0x97676
	str r1, [r2, #0]	@ 00097676 1160
.org 0x97678
	lsrs r3, r0, #17	@ 00097678 430c
.org 0x9767a
	movs r5, #1	@ 0009767a 0125
.org 0x9767c
	ands r3, r5	@ 0009767c 2b40
.org 0x9767e
	lsls r2, r3, #4	@ 0009767e 1a01
.org 0x97680
	ldrb r1, [r4, #10]	@ 00097680 a17a
.org 0x97682
	movs r0, #16	@ 00097682 1020
.org 0x97684
	ands r0, r1	@ 00097684 0840
.org 0x97686
	cmp r0, #0	@ 00097686 0028
.org 0x97688
	beq.n 0x976a4	@ 00097688 0cd0
.org 0x9768a
	adds r3, r5, #0	@ 0009768a 2b1c
.org 0x9768c
	orrs r3, r2	@ 0009768c 1343
.org 0x9768e
	b.n 0x976a6	@ 0009768e 0ae0
.org 0x97690
	.byte 0x00,0xe7,0xff,0xff	@ 00097690 data
.org 0x97694
	.byte 0x6c,0x0a,0x86,0x08	@ 00097694 data
.org 0x97698
	.byte 0x38,0xdc,0x02,0x02	@ 00097698 data
.org 0x9769c
	.byte 0xfd,0x43,0x03,0x00	@ 0009769c data
.org 0x976a0
	.byte 0xc3,0x9e,0x26,0x00	@ 000976a0 data
.org 0x976a4
	lsls r3, r3, #4	@ 000976a4 1b01
.org 0x976a6
	mov r0, sp	@ 000976a6 6846
.org 0x976a8
	adds r1, r6, #0	@ 000976a8 311c
.org 0x976aa
	movs r2, #0	@ 000976aa 0022
.org 0x976ac
	bl 0xd4c8c	@ 000976ac 3df0eefa
.org 0x976b0
	mov r6, sp	@ 000976b0 6e46
.org 0x976b2
	ldr r7, [pc, #44]	@ 000976b2 0b4f
.org 0x976b4
	ldr r2, [pc, #44]	@ 000976b4 0b4a
.org 0x976b6
	ldr r1, [r2, #0]	@ 000976b6 1168
.org 0x976b8
	ldr r0, [pc, #44]	@ 000976b8 0b48
.org 0x976ba
	muls r0, r1	@ 000976ba 4843
.org 0x976bc
	ldr r1, [pc, #44]	@ 000976bc 0b49
.org 0x976be
	adds r0, r0, r1	@ 000976be 4018
.org 0x976c0
	lsls r0, r0, #1	@ 000976c0 4000
.org 0x976c2
	lsrs r1, r0, #1	@ 000976c2 4108
.org 0x976c4
	str r1, [r2, #0]	@ 000976c4 1160
.org 0x976c6
	lsrs r3, r0, #17	@ 000976c6 430c
.org 0x976c8
	movs r5, #1	@ 000976c8 0125
.org 0x976ca
	ands r3, r5	@ 000976ca 2b40
.org 0x976cc
	lsls r2, r3, #4	@ 000976cc 1a01
.org 0x976ce
	ldrb r1, [r4, #10]	@ 000976ce a17a
.org 0x976d0
	movs r0, #16	@ 000976d0 1020
.org 0x976d2
	ands r0, r1	@ 000976d2 0840
.org 0x976d4
	cmp r0, #0	@ 000976d4 0028
.org 0x976d6
	beq.n 0x976f0	@ 000976d6 0bd0
.org 0x976d8
	adds r3, r5, #0	@ 000976d8 2b1c
.org 0x976da
	orrs r3, r2	@ 000976da 1343
.org 0x976dc
	b.n 0x976f2	@ 000976dc 09e0
.org 0x976de
	.byte 0x00	@ 000976de data
.org 0x976df
	.byte 0x00	@ 000976df data
.org 0x976e0
	.byte 0x6c,0x0a,0x86,0x08	@ 000976e0 data
.org 0x976e4
	.byte 0x38,0xdc,0x02,0x02	@ 000976e4 data
.org 0x976e8
	.byte 0xfd,0x43,0x03,0x00	@ 000976e8 data
.org 0x976ec
	.byte 0xc3,0x9e,0x26,0x00	@ 000976ec data
.org 0x976f0
	lsls r3, r3, #4	@ 000976f0 1b01
.org 0x976f2
	adds r0, r6, #0	@ 000976f2 301c
.org 0x976f4
	adds r1, r7, #0	@ 000976f4 391c
.org 0x976f6
	movs r2, #0	@ 000976f6 0022
.org 0x976f8
	bl 0xd4c8c	@ 000976f8 3df0c8fa
.org 0x976fc
	mov r6, sp	@ 000976fc 6e46
.org 0x976fe
	ldr r7, [pc, #44]	@ 000976fe 0b4f
.org 0x97700
	ldr r2, [pc, #44]	@ 00097700 0b4a
.org 0x97702
	ldr r1, [r2, #0]	@ 00097702 1168
.org 0x97704
	ldr r0, [pc, #44]	@ 00097704 0b48
.org 0x97706
	muls r0, r1	@ 00097706 4843
.org 0x97708
	ldr r1, [pc, #44]	@ 00097708 0b49
.org 0x9770a
	adds r0, r0, r1	@ 0009770a 4018
.org 0x9770c
	lsls r0, r0, #1	@ 0009770c 4000
.org 0x9770e
	lsrs r1, r0, #1	@ 0009770e 4108
.org 0x97710
	str r1, [r2, #0]	@ 00097710 1160
.org 0x97712
	lsrs r3, r0, #17	@ 00097712 430c
.org 0x97714
	movs r5, #1	@ 00097714 0125
.org 0x97716
	ands r3, r5	@ 00097716 2b40
.org 0x97718
	lsls r2, r3, #4	@ 00097718 1a01
.org 0x9771a
	ldrb r1, [r4, #10]	@ 0009771a a17a
.org 0x9771c
	movs r0, #16	@ 0009771c 1020
.org 0x9771e
	ands r0, r1	@ 0009771e 0840
.org 0x97720
	cmp r0, #0	@ 00097720 0028
.org 0x97722
	beq.n 0x9773c	@ 00097722 0bd0
.org 0x97724
	adds r3, r5, #0	@ 00097724 2b1c
.org 0x97726
	orrs r3, r2	@ 00097726 1343
.org 0x97728
	b.n 0x9773e	@ 00097728 09e0
.org 0x9772a
	.byte 0x00	@ 0009772a data
.org 0x9772b
	.byte 0x00	@ 0009772b data
.org 0x9772c
	.byte 0x88,0x0a,0x86,0x08	@ 0009772c data
.org 0x97730
	.byte 0x38,0xdc,0x02,0x02	@ 00097730 data
.org 0x97734
	.byte 0xfd,0x43,0x03,0x00	@ 00097734 data
.org 0x97738
	.byte 0xc3,0x9e,0x26,0x00	@ 00097738 data
.org 0x9773c
	lsls r3, r3, #4	@ 0009773c 1b01
.org 0x9773e
	adds r0, r6, #0	@ 0009773e 301c
.org 0x97740
	adds r1, r7, #0	@ 00097740 391c
.org 0x97742
	movs r2, #0	@ 00097742 0022
.org 0x97744
	bl 0xd4c8c	@ 00097744 3df0a2fa
.org 0x97748
	mov r6, sp	@ 00097748 6e46
.org 0x9774a
	ldr r7, [pc, #44]	@ 0009774a 0b4f
.org 0x9774c
	ldr r2, [pc, #44]	@ 0009774c 0b4a
.org 0x9774e
	ldr r1, [r2, #0]	@ 0009774e 1168
.org 0x97750
	ldr r0, [pc, #44]	@ 00097750 0b48
.org 0x97752
	muls r0, r1	@ 00097752 4843
.org 0x97754
	ldr r1, [pc, #44]	@ 00097754 0b49
.org 0x97756
	adds r0, r0, r1	@ 00097756 4018
.org 0x97758
	lsls r0, r0, #1	@ 00097758 4000
.org 0x9775a
	lsrs r1, r0, #1	@ 0009775a 4108
.org 0x9775c
	str r1, [r2, #0]	@ 0009775c 1160
.org 0x9775e
	lsrs r3, r0, #17	@ 0009775e 430c
.org 0x97760
	movs r5, #1	@ 00097760 0125
.org 0x97762
	ands r3, r5	@ 00097762 2b40
.org 0x97764
	lsls r2, r3, #4	@ 00097764 1a01
.org 0x97766
	ldrb r1, [r4, #10]	@ 00097766 a17a
.org 0x97768
	movs r0, #16	@ 00097768 1020
.org 0x9776a
	ands r0, r1	@ 0009776a 0840
.org 0x9776c
	cmp r0, #0	@ 0009776c 0028
.org 0x9776e
	beq.n 0x97788	@ 0009776e 0bd0
.org 0x97770
	adds r3, r5, #0	@ 00097770 2b1c
.org 0x97772
	orrs r3, r2	@ 00097772 1343
.org 0x97774
	b.n 0x9778a	@ 00097774 09e0
.org 0x97776
	.byte 0x00	@ 00097776 data
.org 0x97777
	.byte 0x00	@ 00097777 data
.org 0x97778
	.byte 0x88,0x0a,0x86,0x08	@ 00097778 data
.org 0x9777c
	.byte 0x38,0xdc,0x02,0x02	@ 0009777c data
.org 0x97780
	.byte 0xfd,0x43,0x03,0x00	@ 00097780 data

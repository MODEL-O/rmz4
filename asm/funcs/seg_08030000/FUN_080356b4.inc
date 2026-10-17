@ FUN_080356b4  entry 0x080356b4  size 286
.thumb
.org 0x356b4
FUN_080356b4:
	push {r4, r5, r6, r7, lr}	@ 000356b4 f0b5
.org 0x356b6
	mov r7, r8	@ 000356b6 4746
.org 0x356b8
	push {r7}	@ 000356b8 80b4
.org 0x356ba
	adds r6, r0, #0	@ 000356ba 061c
.org 0x356bc
	movs r0, #129	@ 000356bc 8120
.org 0x356be
	lsls r0, r0, #1	@ 000356be 4000
.org 0x356c0
	adds r4, r6, r0	@ 000356c0 3418
.org 0x356c2
	ldrb r0, [r4, #0]	@ 000356c2 2078
.org 0x356c4
	cmp r0, #0	@ 000356c4 0028
.org 0x356c6
	bne.n 0x356e8	@ 000356c6 0fd1
.org 0x356c8
	movs r1, #184	@ 000356c8 b821
.org 0x356ca
	lsls r1, r1, #5	@ 000356ca 4901
.org 0x356cc
	adds r0, r6, #0	@ 000356cc 301c
.org 0x356ce
	bl 0x1cf00	@ 000356ce e7f717fc
.org 0x356d2
	ldr r2, [pc, #16]	@ 000356d2 044a
.org 0x356d4
	adds r1, r6, r2	@ 000356d4 b118
.org 0x356d6
	movs r0, #16	@ 000356d6 1020
.org 0x356d8
	strb r0, [r1, #0]	@ 000356d8 0870
.org 0x356da
	ldrb r0, [r4, #0]	@ 000356da 2078
.org 0x356dc
	adds r0, #1	@ 000356dc 0130
.org 0x356de
	strb r0, [r4, #0]	@ 000356de 2070
.org 0x356e0
	mov r8, r1	@ 000356e0 8846
.org 0x356e2
	b.n 0x3574e	@ 000356e2 34e0
.org 0x356e4
	.byte 0x45,0x01,0x00,0x00	@ 000356e4 data
.org 0x356e8
	movs r1, #184	@ 000356e8 b821
.org 0x356ea
	lsls r1, r1, #5	@ 000356ea 4901
.org 0x356ec
	adds r0, r6, #0	@ 000356ec 301c
.org 0x356ee
	bl 0x3a3b0	@ 000356ee 04f05ffe
.org 0x356f2
	ldrb r0, [r4, #0]	@ 000356f2 2078
.org 0x356f4
	cmp r0, #1	@ 000356f4 0128
.org 0x356f6
	bne.n 0x35720	@ 000356f6 13d1
.org 0x356f8
	adds r0, r6, #0	@ 000356f8 301c
.org 0x356fa
	adds r0, #114	@ 000356fa 7230
.org 0x356fc
	ldrb r0, [r0, #0]	@ 000356fc 0078
.org 0x356fe
	lsls r0, r0, #24	@ 000356fe 0006
.org 0x35700
	asrs r0, r0, #24	@ 00035700 0016
.org 0x35702
	ldr r1, [pc, #24]	@ 00035702 0649
.org 0x35704
	adds r1, r1, r6	@ 00035704 8919
.org 0x35706
	mov r8, r1	@ 00035706 8846
.org 0x35708
	cmp r0, #1	@ 00035708 0128
.org 0x3570a
	bgt.n 0x3574e	@ 0003570a 20dc
.org 0x3570c
	adds r0, r6, #0	@ 0003570c 301c
.org 0x3570e
	movs r1, #4	@ 0003570e 0421
.org 0x35710
	bl 0x3c464	@ 00035710 06f0a8fe
.org 0x35714
	ldrb r0, [r4, #0]	@ 00035714 2078
.org 0x35716
	adds r0, #1	@ 00035716 0130
.org 0x35718
	strb r0, [r4, #0]	@ 00035718 2070
.org 0x3571a
	b.n 0x3574e	@ 0003571a 18e0
.org 0x3571c
	.byte 0x45,0x01,0x00,0x00	@ 0003571c data
.org 0x35720
	adds r0, r6, #0	@ 00035720 301c
.org 0x35722
	adds r0, #115	@ 00035722 7330
.org 0x35724
	ldrb r0, [r0, #0]	@ 00035724 0078
.org 0x35726
	ldr r2, [pc, #112]	@ 00035726 1c4a
.org 0x35728
	adds r2, r2, r6	@ 00035728 9219
.org 0x3572a
	mov r8, r2	@ 0003572a 9046
.org 0x3572c
	cmp r0, #3	@ 0003572c 0328
.org 0x3572e
	bne.n 0x3574e	@ 0003572e 0ed1
.org 0x35730
	ldr r0, [pc, #104]	@ 00035730 1a48
.org 0x35732
	adds r2, r6, r0	@ 00035732 3218
.org 0x35734
	ldrb r1, [r2, #0]	@ 00035734 1178
.org 0x35736
	movs r0, #3	@ 00035736 0320
.org 0x35738
	negs r0, r0	@ 00035738 4042
.org 0x3573a
	ands r0, r1	@ 0003573a 0840
.org 0x3573c
	strb r0, [r2, #0]	@ 0003573c 1070
.org 0x3573e
	movs r0, #0	@ 0003573e 0020
.org 0x35740
	strb r0, [r6, #13]	@ 00035740 7073
.org 0x35742
	strb r0, [r6, #14]	@ 00035742 b073
.org 0x35744
	strb r0, [r6, #15]	@ 00035744 f073
.org 0x35746
	movs r2, #128	@ 00035746 8022
.org 0x35748
	lsls r2, r2, #1	@ 00035748 5200
.org 0x3574a
	adds r1, r6, r2	@ 0003574a b118
.org 0x3574c
	strb r0, [r1, #0]	@ 0003574c 0870
.org 0x3574e
	mov r7, r8	@ 0003574e 4746
.org 0x35750
	ldrb r0, [r7, #0]	@ 00035750 3878
.org 0x35752
	cmp r0, #0	@ 00035752 0028
.org 0x35754
	beq.n 0x357d8	@ 00035754 40d0
.org 0x35756
	subs r0, #1	@ 00035756 0138
.org 0x35758
	strb r0, [r7, #0]	@ 00035758 3870
.org 0x3575a
	ldrb r1, [r6, #10]	@ 0003575a b17a
.org 0x3575c
	movs r0, #16	@ 0003575c 1020
.org 0x3575e
	ands r0, r1	@ 0003575e 0840
.org 0x35760
	cmp r0, #0	@ 00035760 0028
.org 0x35762
	beq.n 0x357a0	@ 00035762 1dd0
.org 0x35764
	adds r0, r6, #0	@ 00035764 301c
.org 0x35766
	bl 0x386d4	@ 00035766 02f0b5ff
.org 0x3576a
	adds r5, r0, #0	@ 0003576a 051c
.org 0x3576c
	adds r0, r6, #0	@ 0003576c 301c
.org 0x3576e
	bl 0x38790	@ 0003576e 03f00ff8
.org 0x35772
	adds r4, r0, #0	@ 00035772 041c
.org 0x35774
	adds r0, r6, #0	@ 00035774 301c
.org 0x35776
	bl 0x386d4	@ 00035776 02f0adff
.org 0x3577a
	lsls r5, r5, #16	@ 0003577a 2d04
.org 0x3577c
	asrs r5, r5, #16	@ 0003577c 2d14
.org 0x3577e
	lsls r4, r4, #16	@ 0003577e 2404
.org 0x35780
	asrs r4, r4, #16	@ 00035780 2414
.org 0x35782
	lsls r0, r0, #16	@ 00035782 0004
.org 0x35784
	asrs r0, r0, #16	@ 00035784 0014
.org 0x35786
	subs r4, r4, r0	@ 00035786 241a
.org 0x35788
	ldrb r0, [r7, #0]	@ 00035788 3878
.org 0x3578a
	muls r0, r4	@ 0003578a 6043
.org 0x3578c
	cmp r0, #0	@ 0003578c 0028
.org 0x3578e
	bge.n 0x35792	@ 0003578e 00da
.org 0x35790
	adds r0, #15	@ 00035790 0f30
.org 0x35792
	asrs r0, r0, #4	@ 00035792 0011
.org 0x35794
	adds r0, r5, r0	@ 00035794 2818
.org 0x35796
	b.n 0x357d6	@ 00035796 1ee0
.org 0x35798
	.byte 0x45,0x01,0x00,0x00	@ 00035798 data
.org 0x3579c
	.byte 0x53,0x01,0x00,0x00	@ 0003579c data
.org 0x357a0
	adds r0, r6, #0	@ 000357a0 301c
.org 0x357a2
	bl 0x386d4	@ 000357a2 02f097ff
.org 0x357a6
	adds r5, r0, #0	@ 000357a6 051c
.org 0x357a8
	adds r0, r6, #0	@ 000357a8 301c
.org 0x357aa
	bl 0x38790	@ 000357aa 02f0f1ff
.org 0x357ae
	adds r4, r0, #0	@ 000357ae 041c
.org 0x357b0
	adds r0, r6, #0	@ 000357b0 301c
.org 0x357b2
	bl 0x386d4	@ 000357b2 02f08fff
.org 0x357b6
	lsls r5, r5, #16	@ 000357b6 2d04
.org 0x357b8
	asrs r5, r5, #16	@ 000357b8 2d14
.org 0x357ba
	negs r5, r5	@ 000357ba 6d42
.org 0x357bc
	lsls r4, r4, #16	@ 000357bc 2404
.org 0x357be
	asrs r4, r4, #16	@ 000357be 2414
.org 0x357c0
	lsls r0, r0, #16	@ 000357c0 0004
.org 0x357c2
	asrs r0, r0, #16	@ 000357c2 0014
.org 0x357c4
	subs r4, r4, r0	@ 000357c4 241a
.org 0x357c6
	mov r1, r8	@ 000357c6 4146
.org 0x357c8
	ldrb r0, [r1, #0]	@ 000357c8 0878
.org 0x357ca
	muls r0, r4	@ 000357ca 6043
.org 0x357cc
	cmp r0, #0	@ 000357cc 0028
.org 0x357ce
	bge.n 0x357d2	@ 000357ce 00da
.org 0x357d0
	adds r0, #15	@ 000357d0 0f30

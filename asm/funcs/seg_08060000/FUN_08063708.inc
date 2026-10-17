@ FUN_08063708  entry 0x08063708  size 300
.thumb
.org 0x63708
FUN_08063708:
	push {r4, r5, r6, r7, lr}	@ 00063708 f0b5
.org 0x6370a
	sub sp, #16	@ 0006370a 84b0
.org 0x6370c
	adds r6, r0, #0	@ 0006370c 061c
.org 0x6370e
	ldrb r0, [r6, #10]	@ 0006370e b07a
.org 0x63710
	lsrs r7, r0, #4	@ 00063710 0709
.org 0x63712
	movs r4, #1	@ 00063712 0124
.org 0x63714
	ands r7, r4	@ 00063714 2740
.org 0x63716
	ldrb r0, [r6, #15]	@ 00063716 f07b
.org 0x63718
	cmp r0, #0	@ 00063718 0028
.org 0x6371a
	bne.n 0x637aa	@ 0006371a 46d1
.org 0x6371c
	adds r0, r6, #0	@ 0006371c 301c
.org 0x6371e
	bl 0x66190	@ 0006371e 02f037fd
.org 0x63722
	adds r2, r0, #0	@ 00063722 021c
.org 0x63724
	mov r0, sp	@ 00063724 6846
.org 0x63726
	adds r1, r6, #0	@ 00063726 311c
.org 0x63728
	bl 0x661b8	@ 00063728 02f046fd
.org 0x6372c
	ldr r0, [sp, #0]	@ 0006372c 0098
.org 0x6372e
	ldr r1, [sp, #4]	@ 0006372e 0199
.org 0x63730
	str r0, [sp, #8]	@ 00063730 0290
.org 0x63732
	str r1, [sp, #12]	@ 00063732 0391
.org 0x63734
	ldr r2, [pc, #80]	@ 00063734 144a
.org 0x63736
	ldr r1, [r2, #0]	@ 00063736 1168
.org 0x63738
	ldr r0, [pc, #80]	@ 00063738 1448
.org 0x6373a
	muls r0, r1	@ 0006373a 4843
.org 0x6373c
	ldr r1, [pc, #80]	@ 0006373c 1449
.org 0x6373e
	adds r0, r0, r1	@ 0006373e 4018
.org 0x63740
	lsls r0, r0, #1	@ 00063740 4000
.org 0x63742
	lsrs r1, r0, #1	@ 00063742 4108
.org 0x63744
	str r1, [r2, #0]	@ 00063744 1160
.org 0x63746
	lsrs r7, r0, #17	@ 00063746 470c
.org 0x63748
	movs r0, #1	@ 00063748 0120
.org 0x6374a
	ands r7, r0	@ 0006374a 0740
.org 0x6374c
	adds r0, r6, #0	@ 0006374c 301c
.org 0x6374e
	movs r1, #25	@ 0006374e 1921
.org 0x63750
	bl 0x65a94	@ 00063750 02f0a0f9
.org 0x63754
	ldr r0, [sp, #8]	@ 00063754 0298
.org 0x63756
	ldr r1, [sp, #12]	@ 00063756 0399
.org 0x63758
	str r0, [r6, #84]	@ 00063758 7065
.org 0x6375a
	str r1, [r6, #88]	@ 0006375a b165
.org 0x6375c
	adds r1, r7, #0	@ 0006375c 391c
.org 0x6375e
	ands r1, r4	@ 0006375e 2140
.org 0x63760
	adds r0, r6, #0	@ 00063760 301c
.org 0x63762
	adds r0, #76	@ 00063762 4c30
.org 0x63764
	strb r1, [r0, #0]	@ 00063764 0170
.org 0x63766
	adds r3, r6, #0	@ 00063766 331c
.org 0x63768
	adds r3, #74	@ 00063768 4a33
.org 0x6376a
	lsls r1, r1, #4	@ 0006376a 0901
.org 0x6376c
	ldrb r2, [r3, #0]	@ 0006376c 1a78
.org 0x6376e
	movs r0, #17	@ 0006376e 1120
.org 0x63770
	negs r0, r0	@ 00063770 4042
.org 0x63772
	ands r0, r2	@ 00063772 1040
.org 0x63774
	orrs r0, r1	@ 00063774 0843
.org 0x63776
	strb r0, [r3, #0]	@ 00063776 1870
.org 0x63778
	adds r0, r7, #0	@ 00063778 381c
.org 0x6377a
	ands r0, r4	@ 0006377a 2040
.org 0x6377c
	cmp r0, #0	@ 0006377c 0028
.org 0x6377e
	beq.n 0x63794	@ 0006377e 09d0
.org 0x63780
	ldrb r0, [r6, #10]	@ 00063780 b07a
.org 0x63782
	movs r1, #16	@ 00063782 1021
.org 0x63784
	orrs r0, r1	@ 00063784 0843
.org 0x63786
	b.n 0x6379a	@ 00063786 08e0
.org 0x63788
	.byte 0x38,0xdc,0x02,0x02	@ 00063788 data
.org 0x6378c
	.byte 0xfd,0x43,0x03,0x00	@ 0006378c data
.org 0x63790
	.byte 0xc3,0x9e,0x26,0x00	@ 00063790 data
.org 0x63794
	ldrb r1, [r6, #10]	@ 00063794 b17a
.org 0x63796
	movs r0, #239	@ 00063796 ef20
.org 0x63798
	ands r0, r1	@ 00063798 0840
.org 0x6379a
	strb r0, [r6, #10]	@ 0006379a b072
.org 0x6379c
	movs r0, #48	@ 0006379c 3020
.org 0x6379e
	strb r0, [r6, #18]	@ 0006379e b074
.org 0x637a0
	movs r0, #1	@ 000637a0 0120
.org 0x637a2
	strb r0, [r6, #19]	@ 000637a2 f074
.org 0x637a4
	ldrb r0, [r6, #15]	@ 000637a4 f07b
.org 0x637a6
	adds r0, #1	@ 000637a6 0130
.org 0x637a8
	strb r0, [r6, #15]	@ 000637a8 f073
.org 0x637aa
	adds r0, r6, #0	@ 000637aa 301c
.org 0x637ac
	bl 0x1cff0	@ 000637ac b9f720fc
.org 0x637b0
	adds r0, r6, #0	@ 000637b0 301c
.org 0x637b2
	adds r0, #116	@ 000637b2 7430
.org 0x637b4
	ldr r4, [pc, #136]	@ 000637b4 224c
.org 0x637b6
	ldr r3, [pc, #140]	@ 000637b6 234b
.org 0x637b8
	adds r1, r6, #0	@ 000637b8 311c
.org 0x637ba
	adds r1, #180	@ 000637ba b431
.org 0x637bc
	ldrb r2, [r1, #0]	@ 000637bc 0a78
.org 0x637be
	lsls r1, r2, #1	@ 000637be 5100
.org 0x637c0
	adds r1, r1, r3	@ 000637c0 c918
.org 0x637c2
	ldrh r1, [r1, #0]	@ 000637c2 0988
.org 0x637c4
	lsls r1, r1, #2	@ 000637c4 8900
.org 0x637c6
	adds r1, r1, r4	@ 000637c6 0919
.org 0x637c8
	adds r3, r6, #0	@ 000637c8 331c
.org 0x637ca
	adds r3, #113	@ 000637ca 7133
.org 0x637cc
	movs r5, #0	@ 000637cc 0025
.org 0x637ce
	ldrsb r5, [r3, r5]	@ 000637ce 5d57
.org 0x637d0
	ldr r1, [r1, #0]	@ 000637d0 0968
.org 0x637d2
	lsls r3, r5, #2	@ 000637d2 ab00
.org 0x637d4
	adds r3, r3, r1	@ 000637d4 5b18
.org 0x637d6
	ldr r4, [pc, #112]	@ 000637d6 1c4c
.org 0x637d8
	adds r1, r6, #0	@ 000637d8 311c
.org 0x637da
	adds r1, #181	@ 000637da b531
.org 0x637dc
	ldrb r1, [r1, #0]	@ 000637dc 0978
.org 0x637de
	lsls r1, r1, #2	@ 000637de 8900
.org 0x637e0
	adds r1, r1, r4	@ 000637e0 0919
.org 0x637e2
	ldr r1, [r1, #0]	@ 000637e2 0968
.org 0x637e4
	lsls r2, r2, #2	@ 000637e4 9200
.org 0x637e6
	adds r2, r2, r1	@ 000637e6 5218
.org 0x637e8
	ldr r1, [r2, #0]	@ 000637e8 1168
.org 0x637ea
	adds r1, r1, r5	@ 000637ea 4919
.org 0x637ec
	ldrb r1, [r1, #0]	@ 000637ec 0978
.org 0x637ee
	lsls r2, r1, #1	@ 000637ee 4a00
.org 0x637f0
	adds r2, r2, r1	@ 000637f0 5218
.org 0x637f2
	lsls r2, r2, #3	@ 000637f2 d200
.org 0x637f4
	ldr r1, [r3, #0]	@ 000637f4 1968
.org 0x637f6
	adds r1, r1, r2	@ 000637f6 8918
.org 0x637f8
	bl 0x5784	@ 000637f8 a1f7c4ff
.org 0x637fc
	ldrb r0, [r6, #19]	@ 000637fc f07c
.org 0x637fe
	cmp r0, #0	@ 000637fe 0028
.org 0x63800
	beq.n 0x63824	@ 00063800 10d0
.org 0x63802
	ldr r0, [r6, #84]	@ 00063802 706d
.org 0x63804
	str r0, [sp, #8]	@ 00063804 0290
.org 0x63806
	ldr r0, [r6, #88]	@ 00063806 b06d
.org 0x63808
	add r1, sp, #8	@ 00063808 02a9
.org 0x6380a
	str r0, [r1, #4]	@ 0006380a 4860
.org 0x6380c
	adds r0, r6, #0	@ 0006380c 301c
.org 0x6380e
	movs r2, #0	@ 0006380e 0022
.org 0x63810
	adds r3, r7, #0	@ 00063810 3b1c
.org 0x63812
	bl 0x9b734	@ 00063812 37f08fff
.org 0x63816
	adds r1, r6, #0	@ 00063816 311c
.org 0x63818
	adds r1, #196	@ 00063818 c431
.org 0x6381a
	str r0, [r1, #0]	@ 0006381a 0860
.org 0x6381c
	cmp r0, #0	@ 0006381c 0028
.org 0x6381e
	beq.n 0x63838	@ 0006381e 0bd0
.org 0x63820
	movs r0, #0	@ 00063820 0020
.org 0x63822
	strb r0, [r6, #19]	@ 00063822 f074
.org 0x63824
	ldrb r0, [r6, #18]	@ 00063824 b07c
.org 0x63826
	subs r0, #1	@ 00063826 0138
.org 0x63828
	strb r0, [r6, #18]	@ 00063828 b074
.org 0x6382a
	lsls r0, r0, #24	@ 0006382a 0006
.org 0x6382c
	lsrs r1, r0, #24	@ 0006382c 010e
.org 0x6382e
	cmp r1, #0	@ 0006382e 0029
.org 0x63830
	bne.n 0x63838	@ 00063830 02d1
.org 0x63832
	movs r0, #2	@ 00063832 0220

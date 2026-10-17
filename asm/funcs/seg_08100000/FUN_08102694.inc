@ FUN_08102694  entry 0x08102694  size 214
.thumb
.org 0x102694
FUN_08102694:
	push {r4, r5, r6, lr}	@ 00102694 70b5
.org 0x102696
	adds r6, r0, #0	@ 00102696 061c
.org 0x102698
	ldr r0, [pc, #208]	@ 00102698 3448
.org 0x10269a
	ldrb r1, [r0, #6]	@ 0010269a 8179
.org 0x10269c
	movs r0, #192	@ 0010269c c020
.org 0x10269e
	ands r0, r1	@ 0010269e 0840
.org 0x1026a0
	cmp r0, #64	@ 001026a0 4028
.org 0x1026a2
	bne.n 0x1026da	@ 001026a2 1ad1
.org 0x1026a4
	ldrb r1, [r6, #10]	@ 001026a4 b17a
.org 0x1026a6
	movs r0, #254	@ 001026a6 fe20
.org 0x1026a8
	ands r0, r1	@ 001026a8 0840
.org 0x1026aa
	movs r2, #0	@ 001026aa 0022
.org 0x1026ac
	movs r1, #253	@ 001026ac fd21
.org 0x1026ae
	ands r0, r1	@ 001026ae 0840
.org 0x1026b0
	strb r0, [r6, #10]	@ 001026b0 b072
.org 0x1026b2
	adds r0, r6, #0	@ 001026b2 301c
.org 0x1026b4
	adds r0, #140	@ 001026b4 8c30
.org 0x1026b6
	str r2, [r0, #0]	@ 001026b6 0260
.org 0x1026b8
	adds r0, #4	@ 001026b8 0430
.org 0x1026ba
	str r2, [r0, #0]	@ 001026ba 0260
.org 0x1026bc
	adds r0, #4	@ 001026bc 0430
.org 0x1026be
	strb r2, [r0, #0]	@ 001026be 0270
.org 0x1026c0
	ldrb r1, [r6, #10]	@ 001026c0 b17a
.org 0x1026c2
	movs r0, #251	@ 001026c2 fb20
.org 0x1026c4
	ands r0, r1	@ 001026c4 0840
.org 0x1026c6
	strb r0, [r6, #10]	@ 001026c6 b072
.org 0x1026c8
	ldr r1, [pc, #164]	@ 001026c8 2949
.org 0x1026ca
	ldrb r0, [r6, #9]	@ 001026ca 707a
.org 0x1026cc
	lsls r0, r0, #2	@ 001026cc 8000
.org 0x1026ce
	adds r0, r0, r1	@ 001026ce 4018
.org 0x1026d0
	movs r1, #3	@ 001026d0 0321
.org 0x1026d2
	str r1, [r6, #12]	@ 001026d2 f160
.org 0x1026d4
	ldr r0, [r0, #0]	@ 001026d4 0068
.org 0x1026d6
	ldr r0, [r0, #12]	@ 001026d6 c068
.org 0x1026d8
	str r0, [r6, #20]	@ 001026d8 7061
.org 0x1026da
	ldr r1, [pc, #152]	@ 001026da 2649
.org 0x1026dc
	movs r2, #195	@ 001026dc c322
.org 0x1026de
	lsls r2, r2, #1	@ 001026de 5200
.org 0x1026e0
	adds r1, r1, r2	@ 001026e0 8918
.org 0x1026e2
	movs r5, #0	@ 001026e2 0025
.org 0x1026e4
	movs r0, #128	@ 001026e4 8020
.org 0x1026e6
	lsls r0, r0, #2	@ 001026e6 8000
.org 0x1026e8
	strh r0, [r1, #0]	@ 001026e8 0880
.org 0x1026ea
	ldr r0, [pc, #140]	@ 001026ea 2348
.org 0x1026ec
	adds r0, r0, r2	@ 001026ec 8018
.org 0x1026ee
	movs r1, #4	@ 001026ee 0421
.org 0x1026f0
	strh r1, [r0, #0]	@ 001026f0 0180
.org 0x1026f2
	adds r0, r6, #0	@ 001026f2 301c
.org 0x1026f4
	bl 0x1ceec	@ 001026f4 1af7fafb
.org 0x1026f8
	adds r0, r6, #0	@ 001026f8 301c
.org 0x1026fa
	adds r0, #190	@ 001026fa be30
.org 0x1026fc
	movs r2, #195	@ 001026fc c322
.org 0x1026fe
	lsls r2, r2, #8	@ 001026fe 1202
.org 0x102700
	strh r2, [r0, #0]	@ 00102700 0280
.org 0x102702
	adds r1, r6, #0	@ 00102702 311c
.org 0x102704
	adds r1, #192	@ 00102704 c031
.org 0x102706
	ldr r0, [pc, #116]	@ 00102706 1d48
.org 0x102708
	strh r0, [r1, #0]	@ 00102708 0880
.org 0x10270a
	adds r0, r6, #0	@ 0010270a 301c
.org 0x10270c
	adds r0, #194	@ 0010270c c230
.org 0x10270e
	strh r2, [r0, #0]	@ 0010270e 0280
.org 0x102710
	ldrb r1, [r6, #10]	@ 00102710 b17a
.org 0x102712
	movs r0, #4	@ 00102712 0420
.org 0x102714
	orrs r0, r1	@ 00102714 0843
.org 0x102716
	strb r0, [r6, #10]	@ 00102716 b072
.org 0x102718
	adds r4, r6, #0	@ 00102718 341c
.org 0x10271a
	adds r4, #116	@ 0010271a 7434
.org 0x10271c
	ldr r1, [pc, #96]	@ 0010271c 1849
.org 0x10271e
	adds r2, r6, #0	@ 0010271e 321c
.org 0x102720
	adds r2, #84	@ 00102720 5432
.org 0x102722
	adds r0, r4, #0	@ 00102722 201c
.org 0x102724
	movs r3, #1	@ 00102724 0123
.org 0x102726
	bl 0x5760	@ 00102726 03f71bf8
.org 0x10272a
	str r6, [r4, #44]	@ 0010272a e662
.org 0x10272c
	str r5, [r4, #36]	@ 0010272c 6562
.org 0x10272e
	movs r0, #128	@ 0010272e 8020
.org 0x102730
	lsls r0, r0, #1	@ 00102730 4000
.org 0x102732
	str r0, [r6, #92]	@ 00102732 f065
.org 0x102734
	adds r1, r6, #0	@ 00102734 311c
.org 0x102736
	adds r1, #185	@ 00102736 b931
.org 0x102738
	movs r0, #1	@ 00102738 0120
.org 0x10273a
	strb r0, [r1, #0]	@ 0010273a 0870
.org 0x10273c
	subs r1, #1	@ 0010273c 0139
.org 0x10273e
	movs r0, #48	@ 0010273e 3020
.org 0x102740
	strb r0, [r1, #0]	@ 00102740 0870
.org 0x102742
	ldrb r1, [r6, #10]	@ 00102742 b17a
.org 0x102744
	movs r0, #16	@ 00102744 1020
.org 0x102746
	ands r0, r1	@ 00102746 0840
.org 0x102748
	cmp r0, #0	@ 00102748 0028
.org 0x10274a
	bne.n 0x10275c	@ 0010274a 07d1
.org 0x10274c
	ldr r0, [r6, #92]	@ 0010274c f06d
.org 0x10274e
	lsls r0, r0, #8	@ 0010274e 0002
.org 0x102750
	negs r0, r0	@ 00102750 4042
.org 0x102752
	cmp r0, #0	@ 00102752 0028
.org 0x102754
	bge.n 0x102758	@ 00102754 00da
.org 0x102756
	adds r0, #255	@ 00102756 ff30
.org 0x102758
	asrs r0, r0, #8	@ 00102758 0012
.org 0x10275a
	str r0, [r6, #92]	@ 0010275a f065
.org 0x10275c
	movs r1, #0	@ 0010275c 0021
.org 0x10275e
	movs r0, #1	@ 0010275e 0120
.org 0x102760
	strb r0, [r6, #13]	@ 00102760 7073
.org 0x102762
	strb r1, [r6, #14]	@ 00102762 b173
.org 0x102764
	pop {r4, r5, r6}	@ 00102764 70bc
.org 0x102766
	pop {r0}	@ 00102766 01bc
.org 0x102768
	bx r0	@ 00102768 0047

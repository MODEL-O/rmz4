@ FUN_08043680  entry 0x08043680  size 346
.thumb
.org 0x43680
FUN_08043680:
	push {r4, r5, r6, lr}	@ 00043680 70b5
.org 0x43682
	adds r5, r0, #0	@ 00043682 051c
.org 0x43684
	ldr r6, [r5, #40]	@ 00043684 ae6a
.org 0x43686
	movs r1, #168	@ 00043686 a821
.org 0x43688
	lsls r1, r1, #1	@ 00043688 4900
.org 0x4368a
	adds r0, r6, r1	@ 0004368a 7018
.org 0x4368c
	ldrb r0, [r0, #0]	@ 0004368c 0078
.org 0x4368e
	cmp r0, #255	@ 0004368e ff28
.org 0x43690
	bne.n 0x436e0	@ 00043690 26d1
.org 0x43692
	ldr r0, [pc, #68]	@ 00043692 1148
.org 0x43694
	adds r2, r6, r0	@ 00043694 3218
.org 0x43696
	ldrb r0, [r2, #0]	@ 00043696 1078
.org 0x43698
	movs r1, #64	@ 00043698 4021
.org 0x4369a
	orrs r0, r1	@ 0004369a 0843
.org 0x4369c
	strb r0, [r2, #0]	@ 0004369c 1070
.org 0x4369e
	ldrb r1, [r5, #10]	@ 0004369e a97a
.org 0x436a0
	movs r0, #254	@ 000436a0 fe20
.org 0x436a2
	ands r0, r1	@ 000436a2 0840
.org 0x436a4
	movs r2, #0	@ 000436a4 0022
.org 0x436a6
	movs r1, #253	@ 000436a6 fd21
.org 0x436a8
	ands r0, r1	@ 000436a8 0840
.org 0x436aa
	strb r0, [r5, #10]	@ 000436aa a872
.org 0x436ac
	adds r0, r5, #0	@ 000436ac 281c
.org 0x436ae
	adds r0, #140	@ 000436ae 8c30
.org 0x436b0
	str r2, [r0, #0]	@ 000436b0 0260
.org 0x436b2
	adds r0, #4	@ 000436b2 0430
.org 0x436b4
	str r2, [r0, #0]	@ 000436b4 0260
.org 0x436b6
	adds r0, #4	@ 000436b6 0430
.org 0x436b8
	strb r2, [r0, #0]	@ 000436b8 0270
.org 0x436ba
	ldrb r1, [r5, #10]	@ 000436ba a97a
.org 0x436bc
	movs r0, #251	@ 000436bc fb20
.org 0x436be
	ands r0, r1	@ 000436be 0840
.org 0x436c0
	strb r0, [r5, #10]	@ 000436c0 a872
.org 0x436c2
	ldr r1, [pc, #24]	@ 000436c2 0649
.org 0x436c4
	ldrb r0, [r5, #9]	@ 000436c4 687a
.org 0x436c6
	lsls r0, r0, #2	@ 000436c6 8000
.org 0x436c8
	adds r0, r0, r1	@ 000436c8 4018
.org 0x436ca
	movs r1, #3	@ 000436ca 0321
.org 0x436cc
	str r1, [r5, #12]	@ 000436cc e960
.org 0x436ce
	ldr r0, [r0, #0]	@ 000436ce 0068
.org 0x436d0
	ldr r0, [r0, #12]	@ 000436d0 c068
.org 0x436d2
	str r0, [r5, #20]	@ 000436d2 6861
.org 0x436d4
	b.n 0x437ee	@ 000436d4 8be0
.org 0x436d6
	.byte 0x00	@ 000436d6 data
.org 0x436d7
	.byte 0x00	@ 000436d7 data
.org 0x436d8
	.byte 0x53,0x01,0x00,0x00	@ 000436d8 data
.org 0x436dc
	.byte 0xf8,0x39,0x85,0x08	@ 000436dc data
.org 0x436e0
	ldrb r4, [r5, #13]	@ 000436e0 6c7b
.org 0x436e2
	cmp r4, #0	@ 000436e2 002c
.org 0x436e4
	beq.n 0x4371c	@ 000436e4 1ad0
.org 0x436e6
	ldrb r0, [r5, #18]	@ 000436e6 a87c
.org 0x436e8
	adds r1, r0, #1	@ 000436e8 411c
.org 0x436ea
	strb r1, [r5, #18]	@ 000436ea a974
.org 0x436ec
	lsls r0, r0, #24	@ 000436ec 0006
.org 0x436ee
	lsrs r0, r0, #24	@ 000436ee 000e
.org 0x436f0
	cmp r0, #3	@ 000436f0 0328
.org 0x436f2
	bls.n 0x4373a	@ 000436f2 22d9
.org 0x436f4
	ldr r1, [pc, #28]	@ 000436f4 0749
.org 0x436f6
	adds r2, r6, r1	@ 000436f6 7218
.org 0x436f8
	ldrb r0, [r2, #0]	@ 000436f8 1078
.org 0x436fa
	movs r1, #64	@ 000436fa 4021
.org 0x436fc
	orrs r0, r1	@ 000436fc 0843
.org 0x436fe
	strb r0, [r2, #0]	@ 000436fe 1070
.org 0x43700
	ldr r1, [pc, #20]	@ 00043700 0549
.org 0x43702
	ldrb r0, [r5, #9]	@ 00043702 687a
.org 0x43704
	lsls r0, r0, #2	@ 00043704 8000
.org 0x43706
	adds r0, r0, r1	@ 00043706 4018
.org 0x43708
	movs r1, #2	@ 00043708 0221
.org 0x4370a
	str r1, [r5, #12]	@ 0004370a e960
.org 0x4370c
	ldr r0, [r0, #0]	@ 0004370c 0068
.org 0x4370e
	ldr r0, [r0, #8]	@ 0004370e 8068
.org 0x43710
	str r0, [r5, #20]	@ 00043710 6861
.org 0x43712
	b.n 0x437ee	@ 00043712 6ce0
.org 0x43714
	.byte 0x53,0x01,0x00,0x00	@ 00043714 data
.org 0x43718
	.byte 0xf8,0x39,0x85,0x08	@ 00043718 data
.org 0x4371c
	ldrb r0, [r5, #18]	@ 0004371c a87c
.org 0x4371e
	adds r1, r0, #1	@ 0004371e 411c
.org 0x43720
	strb r1, [r5, #18]	@ 00043720 a974
.org 0x43722
	lsls r0, r0, #24	@ 00043722 0006
.org 0x43724
	lsrs r0, r0, #24	@ 00043724 000e
.org 0x43726
	cmp r0, #3	@ 00043726 0328
.org 0x43728
	bls.n 0x4373a	@ 00043728 07d9
.org 0x4372a
	ldr r1, [pc, #40]	@ 0004372a 0a49
.org 0x4372c
	adds r0, r5, #0	@ 0004372c 281c
.org 0x4372e
	bl 0x1cf00	@ 0004372e d9f7e7fb
.org 0x43732
	strb r4, [r5, #18]	@ 00043732 ac74
.org 0x43734
	ldrb r0, [r5, #13]	@ 00043734 687b
.org 0x43736
	adds r0, #1	@ 00043736 0130
.org 0x43738
	strb r0, [r5, #13]	@ 00043738 6873
.org 0x4373a
	adds r0, r5, #0	@ 0004373a 281c
.org 0x4373c
	bl 0x1cff0	@ 0004373c d9f758fc
.org 0x43740
	ldrb r0, [r6, #10]	@ 00043740 b07a
.org 0x43742
	lsrs r2, r0, #4	@ 00043742 0209
.org 0x43744
	movs r0, #1	@ 00043744 0120
.org 0x43746
	ands r2, r0	@ 00043746 0240
.org 0x43748
	cmp r2, #0	@ 00043748 002a
.org 0x4374a
	beq.n 0x43758	@ 0004374a 05d0
.org 0x4374c
	ldrb r1, [r5, #10]	@ 0004374c a97a
.org 0x4374e
	movs r0, #16	@ 0004374e 1020
.org 0x43750
	orrs r0, r1	@ 00043750 0843
.org 0x43752
	b.n 0x4375e	@ 00043752 04e0
.org 0x43754
	.byte 0x2e,0x80,0x00,0x00	@ 00043754 data
.org 0x43758
	ldrb r1, [r5, #10]	@ 00043758 a97a
.org 0x4375a
	movs r0, #239	@ 0004375a ef20
.org 0x4375c
	ands r0, r1	@ 0004375c 0840
.org 0x4375e
	strb r0, [r5, #10]	@ 0004375e a872
.org 0x43760
	adds r1, r2, #0	@ 00043760 111c
.org 0x43762
	adds r0, r5, #0	@ 00043762 281c
.org 0x43764
	adds r0, #76	@ 00043764 4c30
.org 0x43766
	strb r1, [r0, #0]	@ 00043766 0170
.org 0x43768
	adds r3, r5, #0	@ 00043768 2b1c
.org 0x4376a
	adds r3, #74	@ 0004376a 4a33
.org 0x4376c
	lsls r1, r1, #4	@ 0004376c 0901
.org 0x4376e
	ldrb r2, [r3, #0]	@ 0004376e 1a78
.org 0x43770
	movs r0, #17	@ 00043770 1120
.org 0x43772
	negs r0, r0	@ 00043772 4042
.org 0x43774
	ands r0, r2	@ 00043774 1040
.org 0x43776
	orrs r0, r1	@ 00043776 0843
.org 0x43778
	strb r0, [r3, #0]	@ 00043778 1870
.org 0x4377a
	adds r0, r6, #0	@ 0004377a 301c
.org 0x4377c
	adds r0, #113	@ 0004377c 7130
.org 0x4377e
	ldrb r0, [r0, #0]	@ 0004377e 0078
.org 0x43780
	lsls r0, r0, #24	@ 00043780 0006
.org 0x43782
	asrs r0, r0, #24	@ 00043782 0016
.org 0x43784
	movs r4, #0	@ 00043784 0024
.org 0x43786
	cmp r0, #3	@ 00043786 0328
.org 0x43788
	bne.n 0x4378c	@ 00043788 00d1
.org 0x4378a
	movs r4, #1	@ 0004378a 0124
.org 0x4378c
	ldrb r1, [r5, #10]	@ 0004378c a97a
.org 0x4378e
	movs r0, #16	@ 0004378e 1020
.org 0x43790
	ands r0, r1	@ 00043790 0840
.org 0x43792
	cmp r0, #0	@ 00043792 0028
.org 0x43794
	beq.n 0x437b4	@ 00043794 0ed0
.org 0x43796
	ldr r3, [pc, #24]	@ 00043796 064b
.org 0x43798
	lsls r4, r4, #3	@ 00043798 e400
.org 0x4379a
	movs r0, #168	@ 0004379a a820
.org 0x4379c
	lsls r0, r0, #1	@ 0004379c 4000
.org 0x4379e
	adds r2, r6, r0	@ 0004379e 3218
.org 0x437a0
	ldrb r0, [r2, #0]	@ 000437a0 1078
.org 0x437a2
	lsls r0, r0, #4	@ 000437a2 0001
.org 0x437a4
	adds r0, r4, r0	@ 000437a4 2018
.org 0x437a6
	adds r0, r0, r3	@ 000437a6 c018
.org 0x437a8
	ldr r1, [r6, #84]	@ 000437a8 716d
.org 0x437aa
	ldr r0, [r0, #0]	@ 000437aa 0068
.org 0x437ac
	subs r1, r1, r0	@ 000437ac 091a
.org 0x437ae
	b.n 0x437cc	@ 000437ae 0de0
.org 0x437b0
	.byte 0x4c,0x35,0x85,0x08	@ 000437b0 data
.org 0x437b4
	ldr r3, [pc, #60]	@ 000437b4 0f4b
.org 0x437b6
	lsls r4, r4, #3	@ 000437b6 e400
.org 0x437b8
	movs r1, #168	@ 000437b8 a821
.org 0x437ba
	lsls r1, r1, #1	@ 000437ba 4900
.org 0x437bc
	adds r2, r6, r1	@ 000437bc 7218
.org 0x437be
	ldrb r0, [r2, #0]	@ 000437be 1078
.org 0x437c0
	lsls r0, r0, #4	@ 000437c0 0001
.org 0x437c2
	adds r0, r4, r0	@ 000437c2 2018
.org 0x437c4
	adds r0, r0, r3	@ 000437c4 c018
.org 0x437c6
	ldr r1, [r6, #84]	@ 000437c6 716d
.org 0x437c8
	ldr r0, [r0, #0]	@ 000437c8 0068
.org 0x437ca
	adds r1, r1, r0	@ 000437ca 0918
.org 0x437cc
	str r1, [r5, #84]	@ 000437cc 6965
.org 0x437ce
	ldrb r0, [r2, #0]	@ 000437ce 1078
.org 0x437d0
	lsls r0, r0, #4	@ 000437d0 0001
.org 0x437d2
	adds r0, r4, r0	@ 000437d2 2018
.org 0x437d4
	adds r1, r3, #4	@ 000437d4 191d
.org 0x437d6
	adds r0, r0, r1	@ 000437d6 4018
.org 0x437d8
	ldr r1, [r6, #88]	@ 000437d8 b16d

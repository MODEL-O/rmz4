@ FUN_08090678  entry 0x08090678  size 238
.thumb
.org 0x90678
FUN_08090678:
	push {r4, r5, r6, r7, lr}	@ 00090678 f0b5
.org 0x9067a
	adds r7, r0, #0	@ 0009067a 071c
.org 0x9067c
	ldr r0, [pc, #80]	@ 0009067c 1448
.org 0x9067e
	ldrh r0, [r0, #0]	@ 0009067e 0088
.org 0x90680
	cmp r0, #8	@ 00090680 0828
.org 0x90682
	bne.n 0x906e0	@ 00090682 2dd1
.org 0x90684
	ldr r0, [pc, #76]	@ 00090684 1348
.org 0x90686
	ldr r1, [pc, #80]	@ 00090686 1449
.org 0x90688
	adds r0, r0, r1	@ 00090688 4018
.org 0x9068a
	ldrb r1, [r0, #0]	@ 0009068a 0178
.org 0x9068c
	movs r0, #16	@ 0009068c 1020
.org 0x9068e
	ands r0, r1	@ 0009068e 0840
.org 0x90690
	lsls r0, r0, #24	@ 00090690 0006
.org 0x90692
	lsrs r2, r0, #24	@ 00090692 020e
.org 0x90694
	cmp r2, #0	@ 00090694 002a
.org 0x90696
	bne.n 0x906e0	@ 00090696 23d1
.org 0x90698
	ldrb r1, [r7, #10]	@ 00090698 b97a
.org 0x9069a
	movs r0, #254	@ 0009069a fe20
.org 0x9069c
	ands r0, r1	@ 0009069c 0840
.org 0x9069e
	movs r1, #253	@ 0009069e fd21
.org 0x906a0
	ands r0, r1	@ 000906a0 0840
.org 0x906a2
	strb r0, [r7, #10]	@ 000906a2 b872
.org 0x906a4
	adds r0, r7, #0	@ 000906a4 381c
.org 0x906a6
	adds r0, #140	@ 000906a6 8c30
.org 0x906a8
	str r2, [r0, #0]	@ 000906a8 0260
.org 0x906aa
	adds r0, #4	@ 000906aa 0430
.org 0x906ac
	str r2, [r0, #0]	@ 000906ac 0260
.org 0x906ae
	adds r0, #4	@ 000906ae 0430
.org 0x906b0
	strb r2, [r0, #0]	@ 000906b0 0270
.org 0x906b2
	ldrb r1, [r7, #10]	@ 000906b2 b97a
.org 0x906b4
	movs r0, #251	@ 000906b4 fb20
.org 0x906b6
	ands r0, r1	@ 000906b6 0840
.org 0x906b8
	strb r0, [r7, #10]	@ 000906b8 b872
.org 0x906ba
	ldr r1, [pc, #32]	@ 000906ba 0849
.org 0x906bc
	ldrb r0, [r7, #9]	@ 000906bc 787a
.org 0x906be
	lsls r0, r0, #2	@ 000906be 8000
.org 0x906c0
	adds r0, r0, r1	@ 000906c0 4018
.org 0x906c2
	movs r1, #3	@ 000906c2 0321
.org 0x906c4
	str r1, [r7, #12]	@ 000906c4 f960
.org 0x906c6
	ldr r0, [r0, #0]	@ 000906c6 0068
.org 0x906c8
	ldr r0, [r0, #12]	@ 000906c8 c068
.org 0x906ca
	str r0, [r7, #20]	@ 000906ca 7861
.org 0x906cc
	b.n 0x90772	@ 000906cc 51e0
.org 0x906ce
	.byte 0x00	@ 000906ce data
.org 0x906cf
	.byte 0x00	@ 000906cf data
.org 0x906d0
	.byte 0x10,0xe9,0x02,0x02	@ 000906d0 data
.org 0x906d4
	.byte 0xb0,0x0a,0x00,0x02	@ 000906d4 data
.org 0x906d8
	.byte 0x10,0xc0,0x02,0x00	@ 000906d8 data
.org 0x906dc
	.byte 0x40,0xdb,0x85,0x08	@ 000906dc data
.org 0x906e0
	adds r0, r7, #0	@ 000906e0 381c
.org 0x906e2
	bl 0x1cc9c	@ 000906e2 8cf7dbfa
.org 0x906e6
	ldrb r1, [r7, #10]	@ 000906e6 b97a
.org 0x906e8
	movs r0, #1	@ 000906e8 0120
.org 0x906ea
	orrs r0, r1	@ 000906ea 0843
.org 0x906ec
	movs r1, #2	@ 000906ec 0221
.org 0x906ee
	orrs r0, r1	@ 000906ee 0843
.org 0x906f0
	strb r0, [r7, #10]	@ 000906f0 b872
.org 0x906f2
	movs r1, #232	@ 000906f2 e821
.org 0x906f4
	lsls r1, r1, #7	@ 000906f4 c901
.org 0x906f6
	adds r0, r7, #0	@ 000906f6 381c
.org 0x906f8
	bl 0x1cf00	@ 000906f8 8cf702fc
.org 0x906fc
	adds r0, r7, #0	@ 000906fc 381c
.org 0x906fe
	bl 0x1cff0	@ 000906fe 8cf777fc
.org 0x90702
	movs r5, #0	@ 00090702 0025
.org 0x90704
	ldrb r1, [r7, #10]	@ 00090704 b97a
.org 0x90706
	movs r0, #239	@ 00090706 ef20
.org 0x90708
	ands r0, r1	@ 00090708 0840
.org 0x9070a
	strb r0, [r7, #10]	@ 0009070a b872
.org 0x9070c
	movs r6, #1	@ 0009070c 0126
.org 0x9070e
	adds r0, r7, #0	@ 0009070e 381c
.org 0x90710
	adds r0, #76	@ 00090710 4c30
.org 0x90712
	strb r5, [r0, #0]	@ 00090712 0570
.org 0x90714
	adds r2, r7, #0	@ 00090714 3a1c
.org 0x90716
	adds r2, #74	@ 00090716 4a32
.org 0x90718
	ldrb r1, [r2, #0]	@ 00090718 1178
.org 0x9071a
	movs r0, #17	@ 0009071a 1120
.org 0x9071c
	negs r0, r0	@ 0009071c 4042
.org 0x9071e
	ands r0, r1	@ 0009071e 0840
.org 0x90720
	strb r0, [r2, #0]	@ 00090720 1070
.org 0x90722
	ldrb r1, [r7, #10]	@ 00090722 b97a
.org 0x90724
	movs r0, #4	@ 00090724 0420
.org 0x90726
	orrs r0, r1	@ 00090726 0843
.org 0x90728
	strb r0, [r7, #10]	@ 00090728 b872
.org 0x9072a
	adds r4, r7, #0	@ 0009072a 3c1c
.org 0x9072c
	adds r4, #116	@ 0009072c 7434
.org 0x9072e
	ldr r1, [pc, #72]	@ 0009072e 1249
.org 0x90730
	adds r2, #10	@ 00090730 0a32
.org 0x90732
	adds r0, r4, #0	@ 00090732 201c
.org 0x90734
	movs r3, #6	@ 00090734 0623
.org 0x90736
	bl 0x5760	@ 00090736 75f713f8
.org 0x9073a
	str r7, [r4, #44]	@ 0009073a e762
.org 0x9073c
	str r5, [r4, #36]	@ 0009073c 6562
.org 0x9073e
	adds r0, r7, #0	@ 0009073e 381c
.org 0x90740
	adds r0, #189	@ 00090740 bd30
.org 0x90742
	strb r5, [r0, #0]	@ 00090742 0570
.org 0x90744
	ldr r0, [r7, #84]	@ 00090744 786d
.org 0x90746
	ldr r1, [r7, #88]	@ 00090746 b96d
.org 0x90748
	bl 0x8748	@ 00090748 77f7feff
.org 0x9074c
	str r0, [r7, #88]	@ 0009074c b865
.org 0x9074e
	adds r1, r7, #0	@ 0009074e 391c
.org 0x90750
	adds r1, #180	@ 00090750 b431
.org 0x90752
	ldr r0, [r7, #84]	@ 00090752 786d
.org 0x90754
	str r0, [r1, #0]	@ 00090754 0860
.org 0x90756
	adds r1, #4	@ 00090756 0431
.org 0x90758
	ldr r0, [r7, #88]	@ 00090758 b86d
.org 0x9075a
	str r0, [r1, #0]	@ 0009075a 0860
.org 0x9075c
	ldr r1, [pc, #28]	@ 0009075c 0749
.org 0x9075e
	ldrb r0, [r7, #9]	@ 0009075e 787a
.org 0x90760
	lsls r0, r0, #2	@ 00090760 8000
.org 0x90762
	adds r0, r0, r1	@ 00090762 4018
.org 0x90764
	str r6, [r7, #12]	@ 00090764 fe60

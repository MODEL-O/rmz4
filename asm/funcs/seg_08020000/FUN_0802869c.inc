@ FUN_0802869c  entry 0x0802869c  size 192
.thumb
.org 0x2869c
FUN_0802869c:
	push {r4, lr}	@ 0002869c 10b5
.org 0x2869e
	adds r4, r0, #0	@ 0002869e 041c
.org 0x286a0
	ldr r3, [r4, #12]	@ 000286a0 e368
.org 0x286a2
	ldr r1, [r3, #4]	@ 000286a2 5968
.org 0x286a4
	movs r0, #2	@ 000286a4 0220
.org 0x286a6
	ands r0, r1	@ 000286a6 0840
.org 0x286a8
	cmp r0, #0	@ 000286a8 0028
.org 0x286aa
	beq.n 0x28720	@ 000286aa 39d0
.org 0x286ac
	movs r0, #4	@ 000286ac 0420
.org 0x286ae
	ands r0, r1	@ 000286ae 0840
.org 0x286b0
	cmp r0, #0	@ 000286b0 0028
.org 0x286b2
	beq.n 0x286d8	@ 000286b2 11d0
.org 0x286b4
	ldr r1, [pc, #28]	@ 000286b4 0749
.org 0x286b6
	ldrh r2, [r3, #2]	@ 000286b6 5a88
.org 0x286b8
	lsls r0, r2, #16	@ 000286b8 1004
.org 0x286ba
	asrs r0, r0, #19	@ 000286ba c014
.org 0x286bc
	adds r1, #4	@ 000286bc 0431
.org 0x286be
	adds r0, r0, r1	@ 000286be 4018
.org 0x286c0
	ldrb r1, [r0, #0]	@ 000286c0 0178
.org 0x286c2
	movs r0, #7	@ 000286c2 0720
.org 0x286c4
	ands r0, r2	@ 000286c4 1040
.org 0x286c6
	asrs r1, r0	@ 000286c6 0141
.org 0x286c8
	movs r0, #1	@ 000286c8 0120
.org 0x286ca
	ands r1, r0	@ 000286ca 0140
.org 0x286cc
	cmp r1, #0	@ 000286cc 0029
.org 0x286ce
	bne.n 0x28764	@ 000286ce 49d1
.org 0x286d0
	b.n 0x28742	@ 000286d0 37e0
.org 0x286d2
	.byte 0x00	@ 000286d2 data
.org 0x286d3
	.byte 0x00	@ 000286d3 data
.org 0x286d4
	.byte 0xb0,0xe8,0x02,0x02	@ 000286d4 data
.org 0x286d8
	movs r4, #1	@ 000286d8 0124
.org 0x286da
	ands r1, r4	@ 000286da 2140
.org 0x286dc
	cmp r1, #0	@ 000286dc 0029
.org 0x286de
	beq.n 0x28700	@ 000286de 0fd0
.org 0x286e0
	ldr r0, [pc, #24]	@ 000286e0 0648
.org 0x286e2
	ldrh r3, [r3, #2]	@ 000286e2 5b88
.org 0x286e4
	lsls r2, r3, #16	@ 000286e4 1a04
.org 0x286e6
	asrs r2, r2, #19	@ 000286e6 d214
.org 0x286e8
	adds r0, #4	@ 000286e8 0430
.org 0x286ea
	adds r2, r2, r0	@ 000286ea 1218
.org 0x286ec
	movs r1, #7	@ 000286ec 0721
.org 0x286ee
	ands r1, r3	@ 000286ee 1940
.org 0x286f0
	adds r0, r4, #0	@ 000286f0 201c
.org 0x286f2
	lsls r0, r1	@ 000286f2 8840
.org 0x286f4
	ldrb r1, [r2, #0]	@ 000286f4 1178
.org 0x286f6
	orrs r0, r1	@ 000286f6 0843
.org 0x286f8
	b.n 0x28718	@ 000286f8 0ee0
.org 0x286fa
	.byte 0x00	@ 000286fa data
.org 0x286fb
	.byte 0x00	@ 000286fb data
.org 0x286fc
	.byte 0xb0,0xe8,0x02,0x02	@ 000286fc data
.org 0x28700
	ldr r0, [pc, #24]	@ 00028700 0648
.org 0x28702
	ldrh r1, [r3, #2]	@ 00028702 5988
.org 0x28704
	lsls r2, r1, #16	@ 00028704 0a04
.org 0x28706
	asrs r2, r2, #19	@ 00028706 d214
.org 0x28708
	adds r0, #4	@ 00028708 0430
.org 0x2870a
	adds r2, r2, r0	@ 0002870a 1218
.org 0x2870c
	movs r0, #7	@ 0002870c 0720
.org 0x2870e
	ands r0, r1	@ 0002870e 0840
.org 0x28710
	adds r1, r4, #0	@ 00028710 211c
.org 0x28712
	lsls r1, r0	@ 00028712 8140
.org 0x28714
	ldrb r0, [r2, #0]	@ 00028714 1078
.org 0x28716
	bics r0, r1	@ 00028716 8843
.org 0x28718
	strb r0, [r2, #0]	@ 00028718 1070
.org 0x2871a
	b.n 0x28764	@ 0002871a 23e0
.org 0x2871c
	.byte 0xb0,0xe8,0x02,0x02	@ 0002871c data
.org 0x28720
	ldrb r0, [r3, #1]	@ 00028720 5878
.org 0x28722
	lsls r2, r0, #4	@ 00028722 0201
.org 0x28724
	adds r0, r4, #0	@ 00028724 201c
.org 0x28726
	adds r0, #16	@ 00028726 1030
.org 0x28728
	adds r0, r0, r2	@ 00028728 8018
.org 0x2872a
	ldr r0, [r0, #0]	@ 0002872a 0068
.org 0x2872c
	cmp r0, #0	@ 0002872c 0028
.org 0x2872e
	beq.n 0x28764	@ 0002872e 19d0
.org 0x28730
	cmp r1, #4	@ 00028730 0429
.org 0x28732
	bne.n 0x2874c	@ 00028732 0bd1
.org 0x28734
	adds r0, r4, r2	@ 00028734 a018
.org 0x28736
	ldrb r0, [r0, #25]	@ 00028736 407e
.org 0x28738
	movs r2, #2	@ 00028738 0222
.org 0x2873a
	ldrsh r1, [r3, r2]	@ 0002873a 995e
.org 0x2873c
	ands r0, r1	@ 0002873c 0840
.org 0x2873e
	cmp r0, #0	@ 0002873e 0028
.org 0x28740
	bne.n 0x28748	@ 00028740 02d1
.org 0x28742
	adds r0, r3, #0	@ 00028742 181c
.org 0x28744
	subs r0, #8	@ 00028744 0838
.org 0x28746
	str r0, [r4, #12]	@ 00028746 e060
.org 0x28748
	movs r0, #1	@ 00028748 0120
.org 0x2874a
	b.n 0x28766	@ 0002874a 0ce0
.org 0x2874c
	cmp r1, #0	@ 0002874c 0029
.org 0x2874e
	beq.n 0x2875a	@ 0002874e 04d0
.org 0x28750
	adds r2, r4, r2	@ 00028750 a218
.org 0x28752
	ldrb r1, [r3, #2]	@ 00028752 9978
.org 0x28754
	ldrb r0, [r2, #25]	@ 00028754 507e
.org 0x28756
	orrs r0, r1	@ 00028756 0843
.org 0x28758
	b.n 0x28762	@ 00028758 03e0
.org 0x2875a
	adds r2, r4, r2	@ 0002875a a218

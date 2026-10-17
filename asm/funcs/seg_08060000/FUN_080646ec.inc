@ FUN_080646ec  entry 0x080646ec  size 192
.thumb
.org 0x646ec
FUN_080646ec:
	push {r4, r5, r6, lr}	@ 000646ec 70b5
.org 0x646ee
	adds r6, r0, #0	@ 000646ee 061c
.org 0x646f0
	ldrb r0, [r6, #10]	@ 000646f0 b07a
.org 0x646f2
	lsrs r4, r0, #4	@ 000646f2 0409
.org 0x646f4
	movs r5, #1	@ 000646f4 0125
.org 0x646f6
	ands r4, r5	@ 000646f6 2c40
.org 0x646f8
	ldrb r0, [r6, #15]	@ 000646f8 f07b
.org 0x646fa
	cmp r0, #0	@ 000646fa 0028
.org 0x646fc
	bne.n 0x64744	@ 000646fc 22d1
.org 0x646fe
	adds r0, r6, #0	@ 000646fe 301c
.org 0x64700
	movs r1, #20	@ 00064700 1421
.org 0x64702
	bl 0x65a94	@ 00064702 01f0c7f9
.org 0x64706
	adds r3, r4, #1	@ 00064706 631c
.org 0x64708
	movs r0, #1	@ 00064708 0120
.org 0x6470a
	ands r3, r0	@ 0006470a 0340
.org 0x6470c
	adds r1, r3, #0	@ 0006470c 191c
.org 0x6470e
	ands r1, r5	@ 0006470e 2940
.org 0x64710
	adds r0, r6, #0	@ 00064710 301c
.org 0x64712
	adds r0, #76	@ 00064712 4c30
.org 0x64714
	strb r1, [r0, #0]	@ 00064714 0170
.org 0x64716
	adds r4, r6, #0	@ 00064716 341c
.org 0x64718
	adds r4, #74	@ 00064718 4a34
.org 0x6471a
	lsls r1, r1, #4	@ 0006471a 0901
.org 0x6471c
	ldrb r2, [r4, #0]	@ 0006471c 2278
.org 0x6471e
	movs r0, #17	@ 0006471e 1120
.org 0x64720
	negs r0, r0	@ 00064720 4042
.org 0x64722
	ands r0, r2	@ 00064722 1040
.org 0x64724
	orrs r0, r1	@ 00064724 0843
.org 0x64726
	strb r0, [r4, #0]	@ 00064726 2070
.org 0x64728
	ands r3, r5	@ 00064728 2b40
.org 0x6472a
	cmp r3, #0	@ 0006472a 002b
.org 0x6472c
	beq.n 0x64736	@ 0006472c 03d0
.org 0x6472e
	ldrb r0, [r6, #10]	@ 0006472e b07a
.org 0x64730
	movs r1, #16	@ 00064730 1021
.org 0x64732
	orrs r0, r1	@ 00064732 0843
.org 0x64734
	b.n 0x6473c	@ 00064734 02e0
.org 0x64736
	ldrb r1, [r6, #10]	@ 00064736 b17a
.org 0x64738
	movs r0, #239	@ 00064738 ef20
.org 0x6473a
	ands r0, r1	@ 0006473a 0840
.org 0x6473c
	strb r0, [r6, #10]	@ 0006473c b072
.org 0x6473e
	ldrb r0, [r6, #15]	@ 0006473e f07b
.org 0x64740
	adds r0, #1	@ 00064740 0130
.org 0x64742
	strb r0, [r6, #15]	@ 00064742 f073
.org 0x64744
	adds r0, r6, #0	@ 00064744 301c
.org 0x64746
	bl 0x1cff0	@ 00064746 b8f753fc
.org 0x6474a
	adds r0, r6, #0	@ 0006474a 301c
.org 0x6474c
	adds r0, #116	@ 0006474c 7430
.org 0x6474e
	ldr r4, [pc, #92]	@ 0006474e 174c
.org 0x64750
	ldr r3, [pc, #92]	@ 00064750 174b
.org 0x64752
	adds r1, r6, #0	@ 00064752 311c
.org 0x64754
	adds r1, #180	@ 00064754 b431
.org 0x64756
	ldrb r2, [r1, #0]	@ 00064756 0a78
.org 0x64758
	lsls r1, r2, #1	@ 00064758 5100
.org 0x6475a
	adds r1, r1, r3	@ 0006475a c918
.org 0x6475c
	ldrh r1, [r1, #0]	@ 0006475c 0988
.org 0x6475e
	lsls r1, r1, #2	@ 0006475e 8900
.org 0x64760
	adds r1, r1, r4	@ 00064760 0919
.org 0x64762
	adds r3, r6, #0	@ 00064762 331c
.org 0x64764
	adds r3, #113	@ 00064764 7133
.org 0x64766
	movs r5, #0	@ 00064766 0025
.org 0x64768
	ldrsb r5, [r3, r5]	@ 00064768 5d57
.org 0x6476a
	ldr r1, [r1, #0]	@ 0006476a 0968
.org 0x6476c
	lsls r3, r5, #2	@ 0006476c ab00
.org 0x6476e
	adds r3, r3, r1	@ 0006476e 5b18
.org 0x64770
	ldr r4, [pc, #64]	@ 00064770 104c
.org 0x64772
	adds r1, r6, #0	@ 00064772 311c
.org 0x64774
	adds r1, #181	@ 00064774 b531
.org 0x64776
	ldrb r1, [r1, #0]	@ 00064776 0978
.org 0x64778
	lsls r1, r1, #2	@ 00064778 8900
.org 0x6477a
	adds r1, r1, r4	@ 0006477a 0919
.org 0x6477c
	ldr r1, [r1, #0]	@ 0006477c 0968
.org 0x6477e
	lsls r2, r2, #2	@ 0006477e 9200
.org 0x64780
	adds r2, r2, r1	@ 00064780 5218
.org 0x64782
	ldr r1, [r2, #0]	@ 00064782 1168
.org 0x64784
	adds r1, r1, r5	@ 00064784 4919
.org 0x64786
	ldrb r1, [r1, #0]	@ 00064786 0978
.org 0x64788
	lsls r2, r1, #1	@ 00064788 4a00
.org 0x6478a
	adds r2, r2, r1	@ 0006478a 5218
.org 0x6478c
	lsls r2, r2, #3	@ 0006478c d200
.org 0x6478e
	ldr r1, [r3, #0]	@ 0006478e 1968
.org 0x64790
	adds r1, r1, r2	@ 00064790 8918
.org 0x64792
	bl 0x5784	@ 00064792 a0f7f7ff
.org 0x64796
	adds r0, r6, #0	@ 00064796 301c
.org 0x64798
	adds r0, #115	@ 00064798 7330
.org 0x6479a
	ldrb r1, [r0, #0]	@ 0006479a 0178
.org 0x6479c
	cmp r1, #3	@ 0006479c 0329
.org 0x6479e
	bne.n 0x647a6	@ 0006479e 02d1
.org 0x647a0
	movs r0, #0	@ 000647a0 0020
.org 0x647a2
	strb r1, [r6, #14]	@ 000647a2 b173
.org 0x647a4
	strb r0, [r6, #15]	@ 000647a4 f073
.org 0x647a6
	pop {r4, r5, r6}	@ 000647a6 70bc
.org 0x647a8
	pop {r0}	@ 000647a8 01bc
.org 0x647aa
	bx r0	@ 000647aa 0047

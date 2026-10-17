@ FUN_08014720  entry 0x08014720  size 188
.thumb
.org 0x14720
FUN_08014720:
	push {r4, r5, r6, r7, lr}	@ 00014720 f0b5
.org 0x14722
	adds r5, r0, #0	@ 00014722 051c
.org 0x14724
	adds r4, r1, #0	@ 00014724 0c1c
.org 0x14726
	ldr r0, [pc, #92]	@ 00014726 1748
.org 0x14728
	cmp r5, r0	@ 00014728 8542
.org 0x1472a
	bgt.n 0x147fa	@ 0001472a 66dc
.org 0x1472c
	ldr r0, [pc, #88]	@ 0001472c 1648
.org 0x1472e
	adds r1, r4, r0	@ 0001472e 2118
.org 0x14730
	ldr r0, [pc, #88]	@ 00014730 1648
.org 0x14732
	cmp r1, r0	@ 00014732 8142
.org 0x14734
	bls.n 0x14740	@ 00014734 04d9
.org 0x14736
	ldr r2, [pc, #88]	@ 00014736 164a
.org 0x14738
	adds r1, r4, r2	@ 00014738 a118
.org 0x1473a
	ldr r0, [pc, #88]	@ 0001473a 1648
.org 0x1473c
	cmp r1, r0	@ 0001473c 8142
.org 0x1473e
	bhi.n 0x147fa	@ 0001473e 5cd8
.org 0x14740
	ldr r2, [pc, #84]	@ 00014740 154a
.org 0x14742
	movs r7, #176	@ 00014742 b027
.org 0x14744
	lsls r7, r7, #10	@ 00014744 bf02
.org 0x14746
	adds r0, r2, r7	@ 00014746 d019
.org 0x14748
	ldrh r6, [r0, #0]	@ 00014748 0688
.org 0x1474a
	movs r0, #252	@ 0001474a fc20
.org 0x1474c
	lsls r0, r0, #3	@ 0001474c c000
.org 0x1474e
	adds r3, r2, r0	@ 0001474e 1318
.org 0x14750
	ldrh r1, [r3, #0]	@ 00014750 1988
.org 0x14752
	movs r7, #200	@ 00014752 c827
.org 0x14754
	lsls r7, r7, #11	@ 00014754 ff02
.org 0x14756
	adds r0, r4, r7	@ 00014756 e019
.org 0x14758
	asrs r0, r0, #12	@ 00014758 0013
.org 0x1475a
	muls r0, r1	@ 0001475a 4843
.org 0x1475c
	asrs r1, r5, #12	@ 0001475c 2913
.org 0x1475e
	adds r0, r0, r1	@ 0001475e 4018
.org 0x14760
	adds r0, #2	@ 00014760 0230
.org 0x14762
	lsls r0, r0, #1	@ 00014762 4000
.org 0x14764
	adds r0, r0, r3	@ 00014764 c018
.org 0x14766
	ldrh r1, [r0, #0]	@ 00014766 0188
.org 0x14768
	ldr r0, [pc, #48]	@ 00014768 0c48
.org 0x1476a
	adds r2, r2, r0	@ 0001476a 1218
.org 0x1476c
	strh r1, [r2, #0]	@ 0001476c 1180
.org 0x1476e
	cmp r1, #215	@ 0001476e d729
.org 0x14770
	bne.n 0x147a0	@ 00014770 16d1
.org 0x14772
	adds r0, r5, #0	@ 00014772 281c
.org 0x14774
	adds r1, r4, #0	@ 00014774 211c
.org 0x14776
	bl 0x1480c	@ 00014776 00f049f8
.org 0x1477a
	movs r1, #128	@ 0001477a 8021
.org 0x1477c
	lsls r1, r1, #5	@ 0001477c 4901
.org 0x1477e
	adds r0, r5, r1	@ 0001477e 6818
.org 0x14780
	b.n 0x147ce	@ 00014780 25e0
.org 0x14782
	.byte 0x00	@ 00014782 data
.org 0x14783
	.byte 0x00	@ 00014783 data
.org 0x14784
	.byte 0xff,0x8f,0x06,0x00	@ 00014784 data
.org 0x14788
	.byte 0xff,0x1f,0xfe,0xff	@ 00014788 data
.org 0x1478c
	.byte 0xfe,0x9f,0x00,0x00	@ 0001478c data
.org 0x14790
	.byte 0xff,0xdf,0xfc,0xff	@ 00014790 data
.org 0x14794
	.byte 0xfe,0x3f,0x01,0x00	@ 00014794 data
.org 0x14798
	.byte 0xb0,0x0a,0x00,0x02	@ 00014798 data
.org 0x1479c
	.byte 0x50,0xd0,0x02,0x00	@ 0001479c data
.org 0x147a0
	cmp r1, #216	@ 000147a0 d829
.org 0x147a2
	bne.n 0x147b8	@ 000147a2 09d1
.org 0x147a4
	ldr r2, [pc, #12]	@ 000147a4 034a
.org 0x147a6
	adds r0, r5, r2	@ 000147a6 a818
.org 0x147a8
	adds r1, r4, #0	@ 000147a8 211c
.org 0x147aa
	bl 0x1480c	@ 000147aa 00f02ff8
.org 0x147ae
	adds r0, r5, #0	@ 000147ae 281c
.org 0x147b0
	b.n 0x147ce	@ 000147b0 0de0
.org 0x147b2
	.byte 0x00	@ 000147b2 data
.org 0x147b3
	.byte 0x00	@ 000147b3 data
.org 0x147b4
	.byte 0x00,0xf0,0xff,0xff	@ 000147b4 data
.org 0x147b8
	movs r0, #1	@ 000147b8 0120
.org 0x147ba
	ands r1, r0	@ 000147ba 0140
.org 0x147bc
	cmp r1, #0	@ 000147bc 0029
.org 0x147be
	bne.n 0x147d6	@ 000147be 0ad1
.org 0x147c0
	adds r0, r5, #0	@ 000147c0 281c
.org 0x147c2
	adds r1, r4, #0	@ 000147c2 211c
.org 0x147c4
	bl 0x1480c	@ 000147c4 00f022f8
.org 0x147c8
	movs r7, #128	@ 000147c8 8027
.org 0x147ca
	lsls r7, r7, #5	@ 000147ca 7f01
.org 0x147cc
	adds r0, r5, r7	@ 000147cc e819
.org 0x147ce
	adds r1, r4, #0	@ 000147ce 211c
.org 0x147d0
	bl 0x1480c	@ 000147d0 00f01cf8
.org 0x147d4
	b.n 0x147e8	@ 000147d4 08e0
.org 0x147d6
	ldr r1, [pc, #40]	@ 000147d6 0a49
.org 0x147d8
	adds r0, r5, r1	@ 000147d8 6818
.org 0x147da
	adds r1, r4, #0	@ 000147da 211c

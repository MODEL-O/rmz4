@ FUN_080966c0  entry 0x080966c0  size 284
.thumb
.org 0x966c0
FUN_080966c0:
	push {r4, r5, r6, lr}	@ 000966c0 70b5
.org 0x966c2
	adds r5, r0, #0	@ 000966c2 051c
.org 0x966c4
	ldrb r6, [r5, #17]	@ 000966c4 6e7c
.org 0x966c6
	cmp r6, #0	@ 000966c6 002e
.org 0x966c8
	bne.n 0x966fc	@ 000966c8 18d1
.org 0x966ca
	bl 0x1cd28	@ 000966ca 86f72dfb
.org 0x966ce
	movs r1, #136	@ 000966ce 8821
.org 0x966d0
	lsls r1, r1, #7	@ 000966d0 c901
.org 0x966d2
	adds r0, r5, #0	@ 000966d2 281c
.org 0x966d4
	bl 0x1cf00	@ 000966d4 86f714fc
.org 0x966d8
	ldrb r1, [r5, #10]	@ 000966d8 a97a
.org 0x966da
	movs r0, #4	@ 000966da 0420
.org 0x966dc
	orrs r0, r1	@ 000966dc 0843
.org 0x966de
	strb r0, [r5, #10]	@ 000966de a872
.org 0x966e0
	adds r4, r5, #0	@ 000966e0 2c1c
.org 0x966e2
	adds r4, #116	@ 000966e2 7434
.org 0x966e4
	ldr r1, [pc, #16]	@ 000966e4 0449
.org 0x966e6
	adds r2, r5, #0	@ 000966e6 2a1c
.org 0x966e8
	adds r2, #84	@ 000966e8 5432
.org 0x966ea
	adds r0, r4, #0	@ 000966ea 201c
.org 0x966ec
	movs r3, #10	@ 000966ec 0a23
.org 0x966ee
	bl 0x5760	@ 000966ee 6ff737f8
.org 0x966f2
	str r5, [r4, #44]	@ 000966f2 e562
.org 0x966f4
	str r6, [r4, #36]	@ 000966f4 6662
.org 0x966f6
	b.n 0x9672a	@ 000966f6 18e0
.org 0x966f8
	.byte 0xdc,0x08,0x86,0x08	@ 000966f8 data
.org 0x966fc
	adds r0, r5, #0	@ 000966fc 281c
.org 0x966fe
	bl 0x1cc9c	@ 000966fe 86f7cdfa
.org 0x96702
	ldr r1, [pc, #116]	@ 00096702 1d49
.org 0x96704
	adds r0, r5, #0	@ 00096704 281c
.org 0x96706
	bl 0x1cf00	@ 00096706 86f7fbfb
.org 0x9670a
	ldrb r1, [r5, #10]	@ 0009670a a97a
.org 0x9670c
	movs r0, #4	@ 0009670c 0420
.org 0x9670e
	orrs r0, r1	@ 0009670e 0843
.org 0x96710
	strb r0, [r5, #10]	@ 00096710 a872
.org 0x96712
	adds r4, r5, #0	@ 00096712 2c1c
.org 0x96714
	adds r4, #116	@ 00096714 7434
.org 0x96716
	ldr r1, [pc, #100]	@ 00096716 1949
.org 0x96718
	adds r2, r5, #0	@ 00096718 2a1c
.org 0x9671a
	adds r2, #84	@ 0009671a 5432
.org 0x9671c
	adds r0, r4, #0	@ 0009671c 201c
.org 0x9671e
	movs r3, #10	@ 0009671e 0a23
.org 0x96720
	bl 0x5760	@ 00096720 6ff71ef8
.org 0x96724
	str r5, [r4, #44]	@ 00096724 e562
.org 0x96726
	ldr r0, [pc, #88]	@ 00096726 1648
.org 0x96728
	str r0, [r4, #36]	@ 00096728 6062
.org 0x9672a
	ldrb r1, [r5, #10]	@ 0009672a a97a
.org 0x9672c
	movs r0, #1	@ 0009672c 0120
.org 0x9672e
	orrs r0, r1	@ 0009672e 0843
.org 0x96730
	movs r1, #2	@ 00096730 0221
.org 0x96732
	orrs r0, r1	@ 00096732 0843
.org 0x96734
	strb r0, [r5, #10]	@ 00096734 a872
.org 0x96736
	adds r0, r5, #0	@ 00096736 281c
.org 0x96738
	bl 0x1cff0	@ 00096738 86f75afc
.org 0x9673c
	movs r3, #0	@ 0009673c 0023
.org 0x9673e
	ldrb r1, [r5, #10]	@ 0009673e a97a
.org 0x96740
	movs r0, #239	@ 00096740 ef20
.org 0x96742
	ands r0, r1	@ 00096742 0840
.org 0x96744
	strb r0, [r5, #10]	@ 00096744 a872
.org 0x96746
	adds r0, r5, #0	@ 00096746 281c
.org 0x96748
	adds r0, #76	@ 00096748 4c30
.org 0x9674a
	strb r3, [r0, #0]	@ 0009674a 0370
.org 0x9674c
	adds r2, r5, #0	@ 0009674c 2a1c
.org 0x9674e
	adds r2, #74	@ 0009674e 4a32
.org 0x96750
	ldrb r1, [r2, #0]	@ 00096750 1178
.org 0x96752
	movs r0, #17	@ 00096752 1120
.org 0x96754
	negs r0, r0	@ 00096754 4042
.org 0x96756
	ands r0, r1	@ 00096756 0840
.org 0x96758
	strb r0, [r2, #0]	@ 00096758 1070
.org 0x9675a
	ldrb r0, [r5, #17]	@ 0009675a 687c
.org 0x9675c
	adds r0, #20	@ 0009675c 1430
.org 0x9675e
	adds r1, r5, #0	@ 0009675e 291c
.org 0x96760
	adds r1, #37	@ 00096760 2531
.org 0x96762
	strb r0, [r1, #0]	@ 00096762 0870
.org 0x96764
	ldr r0, [pc, #28]	@ 00096764 0748
.org 0x96766
	ldr r0, [r0, #0]	@ 00096766 0068
.org 0x96768
	ldr r1, [r5, #84]	@ 00096768 696d
.org 0x9676a
	ldr r0, [r0, #84]	@ 0009676a 406d
.org 0x9676c
	cmp r1, r0	@ 0009676c 8142
.org 0x9676e
	ble.n 0x96788	@ 0009676e 0bdd
.org 0x96770
	adds r0, r5, #0	@ 00096770 281c
.org 0x96772
	adds r0, #180	@ 00096772 b430
.org 0x96774
	strb r3, [r0, #0]	@ 00096774 0370
.org 0x96776
	b.n 0x96790	@ 00096776 0be0
.org 0x96778
	.byte 0x02,0x44,0x00,0x00	@ 00096778 data
.org 0x9677c
	.byte 0x0c,0x09,0x86,0x08	@ 0009677c data
.org 0x96780
	.byte 0x3d,0x6d,0x09,0x08	@ 00096780 data
.org 0x96784
	.byte 0xf0,0xdb,0x02,0x02	@ 00096784 data
.org 0x96788
	adds r1, r5, #0	@ 00096788 291c
.org 0x9678a
	adds r1, #180	@ 0009678a b431
.org 0x9678c
	movs r0, #128	@ 0009678c 8020
.org 0x9678e
	strb r0, [r1, #0]	@ 0009678e 0870
.org 0x96790
	movs r4, #0	@ 00096790 0024
.org 0x96792
	str r4, [r5, #92]	@ 00096792 ec65
.org 0x96794
	strb r4, [r5, #19]	@ 00096794 ec74
.org 0x96796
	str r4, [r5, #96]	@ 00096796 2c66
.org 0x96798
	str r4, [r5, #100]	@ 00096798 6c66
.org 0x9679a
	ldr r2, [pc, #84]	@ 0009679a 154a
.org 0x9679c
	ldr r1, [r2, #0]	@ 0009679c 1168
.org 0x9679e
	ldr r0, [pc, #84]	@ 0009679e 1548
.org 0x967a0
	muls r0, r1	@ 000967a0 4843
.org 0x967a2
	ldr r1, [pc, #84]	@ 000967a2 1549
.org 0x967a4
	adds r0, r0, r1	@ 000967a4 4018
.org 0x967a6
	lsls r0, r0, #1	@ 000967a6 4000
.org 0x967a8
	lsrs r1, r0, #1	@ 000967a8 4108
.org 0x967aa
	str r1, [r2, #0]	@ 000967aa 1160
.org 0x967ac
	lsrs r0, r0, #17	@ 000967ac 400c
.org 0x967ae
	movs r6, #1	@ 000967ae 0126
.org 0x967b0
	ands r0, r6	@ 000967b0 3040
.org 0x967b2
	lsls r0, r0, #1	@ 000967b2 4000
.org 0x967b4
	subs r0, #1	@ 000967b4 0138
.org 0x967b6
	str r0, [r5, #104]	@ 000967b6 a866
.org 0x967b8
	strb r4, [r5, #18]	@ 000967b8 ac74
.org 0x967ba
	ldrb r2, [r5, #17]	@ 000967ba 6a7c
.org 0x967bc
	ldrb r1, [r5, #16]	@ 000967bc 297c
.org 0x967be
	adds r0, r1, #1	@ 000967be 481c
.org 0x967c0
	lsls r0, r0, #2	@ 000967c0 8000
.org 0x967c2
	cmp r2, r0	@ 000967c2 8242
.org 0x967c4
	bge.n 0x967d2	@ 000967c4 05da
.org 0x967c6
	adds r2, #1	@ 000967c6 0132
.org 0x967c8
	lsls r2, r2, #24	@ 000967c8 1206
.org 0x967ca
	lsrs r2, r2, #24	@ 000967ca 120e
.org 0x967cc
	adds r0, r5, #0	@ 000967cc 281c
.org 0x967ce
	bl 0x9665c	@ 000967ce fff745ff
.org 0x967d2
	str r4, [r5, #44]	@ 000967d2 ec62
.org 0x967d4
	ldr r1, [pc, #36]	@ 000967d4 0949
.org 0x967d6
	ldrb r0, [r5, #9]	@ 000967d6 687a
.org 0x967d8
	lsls r0, r0, #2	@ 000967d8 8000
.org 0x967da
	adds r0, r0, r1	@ 000967da 4018

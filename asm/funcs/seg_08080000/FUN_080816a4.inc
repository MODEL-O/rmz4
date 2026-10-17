@ FUN_080816a4  entry 0x080816a4  size 394
.thumb
.org 0x816a4
FUN_080816a4:
	push {r4, r5, r6, r7, lr}	@ 000816a4 f0b5
.org 0x816a6
	mov r7, sl	@ 000816a6 5746
.org 0x816a8
	mov r6, r9	@ 000816a8 4e46
.org 0x816aa
	mov r5, r8	@ 000816aa 4546
.org 0x816ac
	push {r5, r6, r7}	@ 000816ac e0b4
.org 0x816ae
	sub sp, #52	@ 000816ae 8db0
.org 0x816b0
	adds r5, r0, #0	@ 000816b0 051c
.org 0x816b2
	ldrb r4, [r5, #15]	@ 000816b2 ec7b
.org 0x816b4
	cmp r4, #0	@ 000816b4 002c
.org 0x816b6
	bne.n 0x816de	@ 000816b6 12d1
.org 0x816b8
	mov r1, sp	@ 000816b8 6946
.org 0x816ba
	ldr r0, [pc, #104]	@ 000816ba 1a48
.org 0x816bc
	ldmia r0!, {r2, r3, r6}	@ 000816bc 4cc8
.org 0x816be
	stmia r1!, {r2, r3, r6}	@ 000816be 4cc1
.org 0x816c0
	ldr r0, [r0, #0]	@ 000816c0 0068
.org 0x816c2
	str r0, [r1, #0]	@ 000816c2 0860
.org 0x816c4
	adds r0, r5, #0	@ 000816c4 281c
.org 0x816c6
	adds r0, #180	@ 000816c6 b430
.org 0x816c8
	ldrb r0, [r0, #0]	@ 000816c8 0078
.org 0x816ca
	lsls r0, r0, #2	@ 000816ca 8000
.org 0x816cc
	add r0, sp	@ 000816cc 6844
.org 0x816ce
	ldrh r1, [r0, #0]	@ 000816ce 0188
.org 0x816d0
	adds r0, r5, #0	@ 000816d0 281c
.org 0x816d2
	bl 0x1cf00	@ 000816d2 9bf715fc
.org 0x816d6
	strb r4, [r5, #18]	@ 000816d6 ac74
.org 0x816d8
	ldrb r0, [r5, #15]	@ 000816d8 e87b
.org 0x816da
	adds r0, #1	@ 000816da 0130
.org 0x816dc
	strb r0, [r5, #15]	@ 000816dc e873
.org 0x816de
	adds r0, r5, #0	@ 000816de 281c
.org 0x816e0
	bl 0x1cff0	@ 000816e0 9bf786fc
.org 0x816e4
	ldrb r0, [r5, #13]	@ 000816e4 687b
.org 0x816e6
	cmp r0, #0	@ 000816e6 0028
.org 0x816e8
	beq.n 0x81730	@ 000816e8 22d0
.org 0x816ea
	adds r0, r5, #0	@ 000816ea 281c
.org 0x816ec
	adds r0, #116	@ 000816ec 7430
.org 0x816ee
	ldr r4, [pc, #56]	@ 000816ee 0e4c
.org 0x816f0
	adds r1, r5, #0	@ 000816f0 291c
.org 0x816f2
	adds r1, #181	@ 000816f2 b531
.org 0x816f4
	ldrb r3, [r1, #0]	@ 000816f4 0b78
.org 0x816f6
	lsls r3, r3, #2	@ 000816f6 9b00
.org 0x816f8
	ldrb r1, [r5, #30]	@ 000816f8 a97f
.org 0x816fa
	lsls r1, r1, #8	@ 000816fa 0902
.org 0x816fc
	adds r2, r5, #0	@ 000816fc 2a1c
.org 0x816fe
	adds r2, #112	@ 000816fe 7032
.org 0x81700
	ldrb r2, [r2, #0]	@ 00081700 1278
.org 0x81702
	orrs r1, r2	@ 00081702 1143
.org 0x81704
	ldr r7, [pc, #36]	@ 00081704 094f
.org 0x81706
	adds r1, r1, r7	@ 00081706 c919
.org 0x81708
	lsls r1, r1, #3	@ 00081708 c900
.org 0x8170a
	adds r3, r3, r1	@ 0008170a 5b18
.org 0x8170c
	adds r3, r3, r4	@ 0008170c 1b19
.org 0x8170e
	adds r4, r5, #0	@ 0008170e 2c1c
.org 0x81710
	adds r4, #113	@ 00081710 7134
.org 0x81712
	movs r1, #0	@ 00081712 0021
.org 0x81714
	ldrsb r1, [r4, r1]	@ 00081714 6156
.org 0x81716
	ldr r2, [r3, #0]	@ 00081716 1a68
.org 0x81718
	lsls r1, r1, #2	@ 00081718 8900
.org 0x8171a
	adds r1, r1, r2	@ 0008171a 8918
.org 0x8171c
	ldr r1, [r1, #0]	@ 0008171c 0968
.org 0x8171e
	bl 0x5784	@ 0008171e 84f731f8
.org 0x81722
	b.n 0x8173e	@ 00081722 0ce0
.org 0x81724
	.byte 0xa4,0x9a,0x12,0x08	@ 00081724 data
.org 0x81728
	.byte 0x1c,0xe7,0x85,0x08	@ 00081728 data
.org 0x8172c
	.byte 0x00,0xe9,0xff,0xff	@ 0008172c data
.org 0x81730
	adds r0, r5, #0	@ 00081730 281c
.org 0x81732
	adds r0, #116	@ 00081732 7430
.org 0x81734
	ldr r1, [pc, #260]	@ 00081734 4149
.org 0x81736
	bl 0x5784	@ 00081736 84f725f8
.org 0x8173a
	adds r4, r5, #0	@ 0008173a 2c1c
.org 0x8173c
	adds r4, #113	@ 0008173c 7134
.org 0x8173e
	movs r6, #0	@ 0008173e 0026
.org 0x81740
	ldrsb r6, [r4, r6]	@ 00081740 a657
.org 0x81742
	adds r0, r5, #0	@ 00081742 281c
.org 0x81744
	adds r0, #115	@ 00081744 7330
.org 0x81746
	str r0, [sp, #44]	@ 00081746 0b90
.org 0x81748
	cmp r6, #1	@ 00081748 012e
.org 0x8174a
	bne.n 0x8181a	@ 0008174a 66d1
.org 0x8174c
	ldrb r0, [r5, #18]	@ 0008174c a87c
.org 0x8174e
	cmp r0, #0	@ 0008174e 0028
.org 0x81750
	bne.n 0x8181a	@ 00081750 63d1
.org 0x81752
	ldr r1, [pc, #236]	@ 00081752 3b49
.org 0x81754
	mov r0, sp	@ 00081754 6846
.org 0x81756
	movs r2, #16	@ 00081756 1022
.org 0x81758
	bl 0x129258	@ 00081758 a7f07efd
.org 0x8175c
	add r4, sp, #16	@ 0008175c 04ac
.org 0x8175e
	ldr r1, [pc, #228]	@ 0008175e 3949
.org 0x81760
	adds r0, r4, #0	@ 00081760 201c
.org 0x81762
	movs r2, #16	@ 00081762 1022
.org 0x81764
	bl 0x129258	@ 00081764 a7f078fd
.org 0x81768
	adds r0, r5, #0	@ 00081768 281c
.org 0x8176a
	adds r0, #180	@ 0008176a b430
.org 0x8176c
	ldrb r3, [r0, #0]	@ 0008176c 0378
.org 0x8176e
	ldr r2, [pc, #216]	@ 0008176e 364a
.org 0x81770
	ldr r0, [r2, #0]	@ 00081770 1068
.org 0x81772
	ldr r1, [pc, #216]	@ 00081772 3649
.org 0x81774
	mov r8, r1	@ 00081774 8846
.org 0x81776
	mov r7, r8	@ 00081776 4746
.org 0x81778
	muls r7, r0	@ 00081778 4743
.org 0x8177a
	adds r0, r7, #0	@ 0008177a 381c
.org 0x8177c
	ldr r7, [pc, #208]	@ 0008177c 344f
.org 0x8177e
	adds r0, r0, r7	@ 0008177e c019
.org 0x81780
	lsls r0, r0, #1	@ 00081780 4000
.org 0x81782
	lsrs r1, r0, #1	@ 00081782 4108
.org 0x81784
	str r1, [r2, #0]	@ 00081784 1160
.org 0x81786
	lsrs r0, r0, #17	@ 00081786 400c
.org 0x81788
	ands r0, r6	@ 00081788 3040
.org 0x8178a
	adds r6, r0, #2	@ 0008178a 861c
.org 0x8178c
	cmp r6, #0	@ 0008178c 002e
.org 0x8178e
	beq.n 0x81816	@ 0008178e 42d0
.org 0x81790
	lsls r4, r3, #2	@ 00081790 9c00
.org 0x81792
	mov sl, r2	@ 00081792 9246
.org 0x81794
	mov r9, r8	@ 00081794 c146
.org 0x81796
	mov r8, r7	@ 00081796 b846
.org 0x81798
	mov r0, sp	@ 00081798 6846
.org 0x8179a
	adds r0, #2	@ 0008179a 0230
.org 0x8179c
	adds r0, r0, r4	@ 0008179c 0019
.org 0x8179e
	str r0, [sp, #40]	@ 0008179e 0a90
.org 0x817a0
	mov r0, sp	@ 000817a0 6846
.org 0x817a2
	adds r0, #32	@ 000817a2 2030
.org 0x817a4
	str r0, [sp, #48]	@ 000817a4 0c90
.org 0x817a6
	mov r1, sp	@ 000817a6 6946
.org 0x817a8
	adds r0, r1, r4	@ 000817a8 0819
.org 0x817aa
	movs r3, #0	@ 000817aa 0023
.org 0x817ac
	ldrsh r2, [r0, r3]	@ 000817ac c25e
.org 0x817ae
	str r2, [sp, #32]	@ 000817ae 0892
.org 0x817b0
	mov r7, sl	@ 000817b0 5746
.org 0x817b2
	ldr r0, [r7, #0]	@ 000817b2 3868
.org 0x817b4
	mov r1, r9	@ 000817b4 4946
.org 0x817b6
	muls r1, r0	@ 000817b6 4143
.org 0x817b8
	adds r0, r1, #0	@ 000817b8 081c
.org 0x817ba
	add r0, r8	@ 000817ba 4044
.org 0x817bc
	lsls r0, r0, #1	@ 000817bc 4000
.org 0x817be
	lsrs r3, r0, #1	@ 000817be 4308
.org 0x817c0
	lsrs r0, r0, #17	@ 000817c0 400c
.org 0x817c2
	mov r1, sp	@ 000817c2 6946
.org 0x817c4
	adds r1, r1, r4	@ 000817c4 0919
.org 0x817c6
	adds r1, #16	@ 000817c6 1031
.org 0x817c8
	movs r7, #0	@ 000817c8 0027
.org 0x817ca
	ldrsh r1, [r1, r7]	@ 000817ca c95f
.org 0x817cc
	ands r0, r1	@ 000817cc 0840
.org 0x817ce
	adds r0, r0, r2	@ 000817ce 8018
.org 0x817d0
	str r0, [sp, #32]	@ 000817d0 0890
.org 0x817d2
	ldr r0, [sp, #40]	@ 000817d2 0a98
.org 0x817d4
	movs r1, #0	@ 000817d4 0021
.org 0x817d6
	ldrsh r2, [r0, r1]	@ 000817d6 425e
.org 0x817d8
	ldr r7, [sp, #48]	@ 000817d8 0c9f
.org 0x817da
	str r2, [r7, #4]	@ 000817da 7a60
.org 0x817dc
	mov r1, r9	@ 000817dc 4946
.org 0x817de
	muls r1, r3	@ 000817de 5943
.org 0x817e0
	add r1, r8	@ 000817e0 4144
.org 0x817e2
	lsls r1, r1, #1	@ 000817e2 4900
.org 0x817e4
	lsrs r0, r1, #1	@ 000817e4 4808
.org 0x817e6
	mov r3, sl	@ 000817e6 5346
.org 0x817e8
	str r0, [r3, #0]	@ 000817e8 1860
.org 0x817ea
	lsrs r1, r1, #17	@ 000817ea 490c
.org 0x817ec
	mov r0, sp	@ 000817ec 6846
.org 0x817ee
	adds r0, #18	@ 000817ee 1230
.org 0x817f0
	adds r0, r0, r4	@ 000817f0 0019
.org 0x817f2
	movs r7, #0	@ 000817f2 0027
.org 0x817f4
	ldrsh r0, [r0, r7]	@ 000817f4 c05f
.org 0x817f6
	ands r1, r0	@ 000817f6 0140
.org 0x817f8
	adds r1, r1, r2	@ 000817f8 8918
.org 0x817fa
	ldr r0, [sp, #48]	@ 000817fa 0c98
.org 0x817fc
	str r1, [r0, #4]	@ 000817fc 4160
.org 0x817fe
	movs r0, #1	@ 000817fe 0120
.org 0x81800
	adds r3, r6, #0	@ 00081800 331c
.org 0x81802
	ands r3, r0	@ 00081802 0340
.org 0x81804
	adds r0, r5, #0	@ 00081804 281c
.org 0x81806
	adds r0, #84	@ 00081806 5430
.org 0x81808
	ldr r1, [sp, #48]	@ 00081808 0c99
.org 0x8180a
	movs r2, #0	@ 0008180a 0022
.org 0x8180c
	bl 0xd8124	@ 0008180c 56f08afc
.org 0x81810
	subs r6, #1	@ 00081810 013e
.org 0x81812
	cmp r6, #0	@ 00081812 002e
.org 0x81814
	bne.n 0x817a6	@ 00081814 c7d1
.org 0x81816
	movs r0, #1	@ 00081816 0120
.org 0x81818
	strb r0, [r5, #18]	@ 00081818 a874
.org 0x8181a
	ldr r1, [sp, #44]	@ 0008181a 0b99
.org 0x8181c
	ldrb r0, [r1, #0]	@ 0008181c 0878
.org 0x8181e
	cmp r0, #3	@ 0008181e 0328
.org 0x81820
	bne.n 0x8182a	@ 00081820 03d1
.org 0x81822
	movs r1, #0	@ 00081822 0021
.org 0x81824
	movs r0, #2	@ 00081824 0220
.org 0x81826
	strb r0, [r5, #14]	@ 00081826 a873
.org 0x81828
	strb r1, [r5, #15]	@ 00081828 e973
.org 0x8182a
	add sp, #52	@ 0008182a 0db0
.org 0x8182c
	pop {r3, r4, r5}	@ 0008182c 38bc

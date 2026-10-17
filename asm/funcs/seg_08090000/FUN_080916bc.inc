@ FUN_080916bc  entry 0x080916bc  size 528
.thumb
.org 0x916bc
FUN_080916bc:
	push {r4, r5, r6, r7, lr}	@ 000916bc f0b5
.org 0x916be
	mov r7, sl	@ 000916be 5746
.org 0x916c0
	mov r6, r9	@ 000916c0 4e46
.org 0x916c2
	mov r5, r8	@ 000916c2 4546
.org 0x916c4
	push {r5, r6, r7}	@ 000916c4 e0b4
.org 0x916c6
	sub sp, #8	@ 000916c6 82b0
.org 0x916c8
	adds r7, r0, #0	@ 000916c8 071c
.org 0x916ca
	bl 0x1cff0	@ 000916ca 8bf791fc
.org 0x916ce
	adds r0, r7, #0	@ 000916ce 381c
.org 0x916d0
	adds r0, #189	@ 000916d0 bd30
.org 0x916d2
	ldrb r1, [r0, #0]	@ 000916d2 0178
.org 0x916d4
	cmp r1, #0	@ 000916d4 0029
.org 0x916d6
	bne.n 0x916dc	@ 000916d6 01d1
.org 0x916d8
	movs r0, #9	@ 000916d8 0920
.org 0x916da
	b.n 0x918d8	@ 000916da fde0
.org 0x916dc
	ldr r1, [r7, #88]	@ 000916dc b96d
.org 0x916de
	ldr r0, [r7, #96]	@ 000916de 386e
.org 0x916e0
	adds r1, r1, r0	@ 000916e0 0918
.org 0x916e2
	str r1, [r7, #88]	@ 000916e2 b965
.org 0x916e4
	ldr r0, [r7, #84]	@ 000916e4 786d
.org 0x916e6
	bl 0x7c7c	@ 000916e6 76f7c9fa
.org 0x916ea
	lsls r0, r0, #16	@ 000916ea 0004
.org 0x916ec
	lsrs r0, r0, #16	@ 000916ec 000c
.org 0x916ee
	mov sl, r0	@ 000916ee 8246
.org 0x916f0
	cmp r0, #0	@ 000916f0 0028
.org 0x916f2
	beq.n 0x917ac	@ 000916f2 5bd0
.org 0x916f4
	ldr r0, [r7, #96]	@ 000916f4 386e
.org 0x916f6
	cmp r0, #0	@ 000916f6 0028
.org 0x916f8
	ble.n 0x91714	@ 000916f8 0cdd
.org 0x916fa
	ldr r0, [r7, #84]	@ 000916fa 786d
.org 0x916fc
	ldr r1, [r7, #88]	@ 000916fc b96d
.org 0x916fe
	bl 0x8534	@ 000916fe 76f719ff
.org 0x91702
	str r0, [r7, #88]	@ 00091702 b865
.org 0x91704
	adds r0, r7, #0	@ 00091704 381c
.org 0x91706
	adds r0, #84	@ 00091706 5430
.org 0x91708
	movs r1, #1	@ 00091708 0121
.org 0x9170a
	movs r2, #0	@ 0009170a 0022
.org 0x9170c
	bl 0xdcd68	@ 0009170c 4bf02cfb
.org 0x91710
	movs r0, #1	@ 00091710 0120
.org 0x91712
	b.n 0x9178e	@ 00091712 3ce0
.org 0x91714
	adds r1, r7, #0	@ 00091714 391c
.org 0x91716
	adds r1, #190	@ 00091716 be31
.org 0x91718
	movs r5, #1	@ 00091718 0125
.org 0x9171a
	movs r0, #1	@ 0009171a 0120
.org 0x9171c
	strb r0, [r1, #0]	@ 0009171c 0870
.org 0x9171e
	ldr r0, [r7, #84]	@ 0009171e 786d
.org 0x91720
	ldr r1, [r7, #88]	@ 00091720 b96d
.org 0x91722
	bl 0x8748	@ 00091722 77f711f8
.org 0x91726
	str r0, [r7, #88]	@ 00091726 b865
.org 0x91728
	ldr r0, [r7, #84]	@ 00091728 786d
.org 0x9172a
	ldr r1, [r7, #88]	@ 0009172a b96d
.org 0x9172c
	str r0, [sp, #0]	@ 0009172c 0090
.org 0x9172e
	str r1, [sp, #4]	@ 0009172e 0191
.org 0x91730
	ldr r0, [sp, #0]	@ 00091730 0098
.org 0x91732
	movs r1, #192	@ 00091732 c021
.org 0x91734
	lsls r1, r1, #2	@ 00091734 8900
.org 0x91736
	adds r0, r0, r1	@ 00091736 4018
.org 0x91738
	str r0, [sp, #0]	@ 00091738 0090
.org 0x9173a
	ldr r0, [pc, #92]	@ 0009173a 1748
.org 0x9173c
	mov r9, r0	@ 0009173c 8146
.org 0x9173e
	ldr r4, [pc, #92]	@ 0009173e 174c
.org 0x91740
	ldr r0, [r4, #0]	@ 00091740 2068
.org 0x91742
	ldr r1, [pc, #92]	@ 00091742 1749
.org 0x91744
	mov r8, r1	@ 00091744 8846
.org 0x91746
	mov r3, r8	@ 00091746 4346
.org 0x91748
	muls r3, r0	@ 00091748 4343
.org 0x9174a
	ldr r6, [pc, #88]	@ 0009174a 164e
.org 0x9174c
	adds r3, r3, r6	@ 0009174c 9b19
.org 0x9174e
	lsls r3, r3, #1	@ 0009174e 5b00
.org 0x91750
	lsrs r0, r3, #1	@ 00091750 5808
.org 0x91752
	str r0, [r4, #0]	@ 00091752 2060
.org 0x91754
	lsrs r3, r3, #17	@ 00091754 5b0c
.org 0x91756
	ands r3, r5	@ 00091756 2b40
.org 0x91758
	lsls r3, r3, #4	@ 00091758 1b01
.org 0x9175a
	mov r0, sp	@ 0009175a 6846
.org 0x9175c
	mov r1, r9	@ 0009175c 4946
.org 0x9175e
	movs r2, #0	@ 0009175e 0022
.org 0x91760
	bl 0xd4c8c	@ 00091760 43f094fa
.org 0x91764
	ldr r0, [sp, #0]	@ 00091764 0098
.org 0x91766
	ldr r1, [pc, #64]	@ 00091766 1049
.org 0x91768
	adds r0, r0, r1	@ 00091768 4018
.org 0x9176a
	str r0, [sp, #0]	@ 0009176a 0090
.org 0x9176c
	ldr r0, [r4, #0]	@ 0009176c 2068
.org 0x9176e
	mov r3, r8	@ 0009176e 4346
.org 0x91770
	muls r3, r0	@ 00091770 4343
.org 0x91772
	adds r3, r3, r6	@ 00091772 9b19
.org 0x91774
	lsls r3, r3, #1	@ 00091774 5b00
.org 0x91776
	lsrs r0, r3, #1	@ 00091776 5808
.org 0x91778
	str r0, [r4, #0]	@ 00091778 2060
.org 0x9177a
	lsrs r3, r3, #17	@ 0009177a 5b0c
.org 0x9177c
	ands r3, r5	@ 0009177c 2b40
.org 0x9177e
	lsls r3, r3, #4	@ 0009177e 1b01
.org 0x91780
	orrs r3, r5	@ 00091780 2b43
.org 0x91782
	mov r0, sp	@ 00091782 6846
.org 0x91784
	mov r1, r9	@ 00091784 4946
.org 0x91786
	movs r2, #0	@ 00091786 0022
.org 0x91788
	bl 0xd4c8c	@ 00091788 43f080fa
.org 0x9178c
	movs r0, #6	@ 0009178c 0620
.org 0x9178e
	strb r0, [r7, #13]	@ 0009178e 7873
.org 0x91790
	movs r0, #0	@ 00091790 0020
.org 0x91792
	strb r0, [r7, #14]	@ 00091792 b873
.org 0x91794
	b.n 0x918f6	@ 00091794 afe0
.org 0x91796
	.byte 0x00	@ 00091796 data
.org 0x91797
	.byte 0x00	@ 00091797 data
.org 0x91798
	.byte 0xa4,0x03,0x86,0x08	@ 00091798 data
.org 0x9179c
	.byte 0x38,0xdc,0x02,0x02	@ 0009179c data
.org 0x917a0
	.byte 0xfd,0x43,0x03,0x00	@ 000917a0 data
.org 0x917a4
	.byte 0xc3,0x9e,0x26,0x00	@ 000917a4 data
.org 0x917a8
	.byte 0x00,0xfa,0xff,0xff	@ 000917a8 data
.org 0x917ac
	ldr r0, [r7, #84]	@ 000917ac 786d
.org 0x917ae
	ldr r1, [r7, #92]	@ 000917ae f96d
.org 0x917b0
	adds r0, r0, r1	@ 000917b0 4018
.org 0x917b2
	str r0, [r7, #84]	@ 000917b2 7865
.org 0x917b4
	ldr r1, [r7, #88]	@ 000917b4 b96d
.org 0x917b6
	bl 0x7c7c	@ 000917b6 76f761fa
.org 0x917ba
	lsls r0, r0, #16	@ 000917ba 0004
.org 0x917bc
	cmp r0, #0	@ 000917bc 0028
.org 0x917be
	bne.n 0x917c2	@ 000917be 00d1
.org 0x917c0
	b.n 0x918f0	@ 000917c0 96e0
.org 0x917c2
	adds r0, r7, #0	@ 000917c2 381c
.org 0x917c4
	adds r0, #190	@ 000917c4 be30
.org 0x917c6
	mov r1, sl	@ 000917c6 5146
.org 0x917c8
	strb r1, [r0, #0]	@ 000917c8 0170
.org 0x917ca
	ldr r0, [r7, #92]	@ 000917ca f86d
.org 0x917cc
	cmp r0, #0	@ 000917cc 0028
.org 0x917ce
	ble.n 0x91860	@ 000917ce 47dd
.org 0x917d0
	ldr r0, [r7, #84]	@ 000917d0 786d
.org 0x917d2
	ldr r1, [r7, #88]	@ 000917d2 b96d
.org 0x917d4
	bl 0x8868	@ 000917d4 77f748f8
.org 0x917d8
	str r0, [r7, #84]	@ 000917d8 7865
.org 0x917da
	movs r0, #84	@ 000917da 5420
.org 0x917dc
	adds r0, r0, r7	@ 000917dc c019
.org 0x917de
	mov r9, r0	@ 000917de 8146
.org 0x917e0
	ldr r5, [pc, #108]	@ 000917e0 1b4d
.org 0x917e2
	ldr r0, [r5, #0]	@ 000917e2 2868
.org 0x917e4
	ldr r1, [pc, #108]	@ 000917e4 1b49
.org 0x917e6
	mov r8, r1	@ 000917e6 8846
.org 0x917e8
	mov r3, r8	@ 000917e8 4346
.org 0x917ea
	muls r3, r0	@ 000917ea 4343
.org 0x917ec
	ldr r6, [pc, #104]	@ 000917ec 1a4e
.org 0x917ee
	adds r3, r3, r6	@ 000917ee 9b19
.org 0x917f0
	lsls r3, r3, #1	@ 000917f0 5b00
.org 0x917f2
	lsrs r0, r3, #1	@ 000917f2 5808
.org 0x917f4
	str r0, [r5, #0]	@ 000917f4 2860
.org 0x917f6
	lsrs r3, r3, #17	@ 000917f6 5b0c
.org 0x917f8
	movs r4, #1	@ 000917f8 0124
.org 0x917fa
	ands r3, r4	@ 000917fa 2340
.org 0x917fc
	lsls r3, r3, #4	@ 000917fc 1b01
.org 0x917fe
	orrs r3, r4	@ 000917fe 2343
.org 0x91800
	mov r0, r9	@ 00091800 4846
.org 0x91802
	ldr r1, [pc, #88]	@ 00091802 1649
.org 0x91804
	movs r2, #0	@ 00091804 0022
.org 0x91806
	bl 0xd4c8c	@ 00091806 43f041fa
.org 0x9180a
	ldr r0, [r5, #0]	@ 0009180a 2868
.org 0x9180c
	mov r3, r8	@ 0009180c 4346
.org 0x9180e
	muls r3, r0	@ 0009180e 4343
.org 0x91810
	adds r3, r3, r6	@ 00091810 9b19
.org 0x91812
	lsls r3, r3, #1	@ 00091812 5b00
.org 0x91814
	lsrs r0, r3, #1	@ 00091814 5808
.org 0x91816
	str r0, [r5, #0]	@ 00091816 2860
.org 0x91818
	lsrs r3, r3, #17	@ 00091818 5b0c
.org 0x9181a
	ands r3, r4	@ 0009181a 2340
.org 0x9181c
	lsls r3, r3, #4	@ 0009181c 1b01
.org 0x9181e
	orrs r3, r4	@ 0009181e 2343
.org 0x91820
	mov r0, r9	@ 00091820 4846
.org 0x91822
	ldr r1, [pc, #56]	@ 00091822 0e49
.org 0x91824
	movs r2, #0	@ 00091824 0022
.org 0x91826
	bl 0xd4c8c	@ 00091826 43f031fa
.org 0x9182a
	movs r2, #1	@ 0009182a 0122
.org 0x9182c
	ldrb r0, [r7, #10]	@ 0009182c b87a
.org 0x9182e
	movs r1, #16	@ 0009182e 1021
.org 0x91830
	orrs r0, r1	@ 00091830 0843
.org 0x91832
	strb r0, [r7, #10]	@ 00091832 b872
.org 0x91834
	adds r0, r7, #0	@ 00091834 381c
.org 0x91836
	adds r0, #76	@ 00091836 4c30
.org 0x91838
	strb r2, [r0, #0]	@ 00091838 0270
.org 0x9183a
	adds r3, r7, #0	@ 0009183a 3b1c
.org 0x9183c
	adds r3, #74	@ 0009183c 4a33
.org 0x9183e
	movs r2, #16	@ 0009183e 1022
.org 0x91840
	ldrb r1, [r3, #0]	@ 00091840 1978
.org 0x91842
	movs r0, #17	@ 00091842 1120
.org 0x91844
	negs r0, r0	@ 00091844 4042
.org 0x91846
	ands r0, r1	@ 00091846 0840
.org 0x91848
	orrs r0, r2	@ 00091848 1043
.org 0x9184a
	strb r0, [r3, #0]	@ 0009184a 1870
.org 0x9184c
	b.n 0x918d4	@ 0009184c 42e0
.org 0x9184e
	.byte 0x00	@ 0009184e data
.org 0x9184f
	.byte 0x00	@ 0009184f data
.org 0x91850
	.byte 0x38,0xdc,0x02,0x02	@ 00091850 data
.org 0x91854
	.byte 0xfd,0x43,0x03,0x00	@ 00091854 data
.org 0x91858
	.byte 0xc3,0x9e,0x26,0x00	@ 00091858 data
.org 0x9185c
	.byte 0x88,0x03,0x86,0x08	@ 0009185c data
.org 0x91860
	ldr r0, [r7, #84]	@ 00091860 786d
.org 0x91862
	ldr r1, [r7, #88]	@ 00091862 b96d
.org 0x91864
	bl 0x8988	@ 00091864 77f790f8
.org 0x91868
	str r0, [r7, #84]	@ 00091868 7865
.org 0x9186a
	movs r0, #84	@ 0009186a 5420
.org 0x9186c
	adds r0, r0, r7	@ 0009186c c019
.org 0x9186e
	mov r9, r0	@ 0009186e 8146
.org 0x91870
	ldr r4, [pc, #108]	@ 00091870 1b4c
.org 0x91872
	ldr r0, [r4, #0]	@ 00091872 2068
.org 0x91874
	ldr r1, [pc, #108]	@ 00091874 1b49
.org 0x91876
	mov r8, r1	@ 00091876 8846
.org 0x91878
	mov r3, r8	@ 00091878 4346
.org 0x9187a
	muls r3, r0	@ 0009187a 4343
.org 0x9187c
	ldr r6, [pc, #104]	@ 0009187c 1a4e
.org 0x9187e
	adds r3, r3, r6	@ 0009187e 9b19
.org 0x91880
	lsls r3, r3, #1	@ 00091880 5b00
.org 0x91882
	lsrs r0, r3, #1	@ 00091882 5808
.org 0x91884
	str r0, [r4, #0]	@ 00091884 2060
.org 0x91886
	lsrs r3, r3, #17	@ 00091886 5b0c
.org 0x91888
	movs r5, #1	@ 00091888 0125
.org 0x9188a
	ands r3, r5	@ 0009188a 2b40
.org 0x9188c
	lsls r3, r3, #4	@ 0009188c 1b01
.org 0x9188e
	mov r0, r9	@ 0009188e 4846
.org 0x91890
	ldr r1, [pc, #88]	@ 00091890 1649
.org 0x91892
	movs r2, #0	@ 00091892 0022
.org 0x91894
	bl 0xd4c8c	@ 00091894 43f0faf9
.org 0x91898
	ldr r0, [r4, #0]	@ 00091898 2068
.org 0x9189a
	mov r3, r8	@ 0009189a 4346
.org 0x9189c
	muls r3, r0	@ 0009189c 4343
.org 0x9189e
	adds r3, r3, r6	@ 0009189e 9b19
.org 0x918a0
	lsls r3, r3, #1	@ 000918a0 5b00
.org 0x918a2
	lsrs r0, r3, #1	@ 000918a2 5808
.org 0x918a4
	str r0, [r4, #0]	@ 000918a4 2060
.org 0x918a6
	lsrs r3, r3, #17	@ 000918a6 5b0c
.org 0x918a8
	ands r3, r5	@ 000918a8 2b40
.org 0x918aa
	lsls r3, r3, #4	@ 000918aa 1b01
.org 0x918ac
	mov r0, r9	@ 000918ac 4846
.org 0x918ae
	ldr r1, [pc, #60]	@ 000918ae 0f49
.org 0x918b0
	movs r2, #0	@ 000918b0 0022
.org 0x918b2
	bl 0xd4c8c	@ 000918b2 43f0ebf9
.org 0x918b6
	ldrb r1, [r7, #10]	@ 000918b6 b97a
.org 0x918b8
	movs r0, #239	@ 000918b8 ef20
.org 0x918ba
	ands r0, r1	@ 000918ba 0840
.org 0x918bc
	strb r0, [r7, #10]	@ 000918bc b872
.org 0x918be
	adds r0, r7, #0	@ 000918be 381c
.org 0x918c0
	adds r0, #76	@ 000918c0 4c30
.org 0x918c2
	mov r1, sl	@ 000918c2 5146
.org 0x918c4
	strb r1, [r0, #0]	@ 000918c4 0170
.org 0x918c6
	adds r2, r7, #0	@ 000918c6 3a1c
.org 0x918c8
	adds r2, #74	@ 000918c8 4a32
.org 0x918ca
	ldrb r1, [r2, #0]	@ 000918ca 1178

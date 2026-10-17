@ FUN_081266fc  entry 0x081266fc  size 424
.thumb
.org 0x1266fc
FUN_081266fc:
	push {r4, r5, r6, r7, lr}	@ 001266fc f0b5
.org 0x1266fe
	mov r7, sl	@ 001266fe 5746
.org 0x126700
	mov r6, r9	@ 00126700 4e46
.org 0x126702
	mov r5, r8	@ 00126702 4546
.org 0x126704
	push {r5, r6, r7}	@ 00126704 e0b4
.org 0x126706
	sub sp, #12	@ 00126706 83b0
.org 0x126708
	mov r8, r0	@ 00126708 8046
.org 0x12670a
	ldr r3, [pc, #104]	@ 0012670a 1a4b
.org 0x12670c
	adds r0, r0, r3	@ 0012670c c018
.org 0x12670e
	ldr r1, [r0, #36]	@ 0012670e 416a
.org 0x126710
	cmp r1, #6	@ 00126710 0629
.org 0x126712
	bhi.n 0x1267f2	@ 00126712 6ed8
.org 0x126714
	ldr r2, [pc, #96]	@ 00126714 184a
.org 0x126716
	add r2, r8	@ 00126716 4244
.org 0x126718
	ldr r0, [r2, #0]	@ 00126718 1068
.org 0x12671a
	str r0, [sp, #0]	@ 0012671a 0090
.org 0x12671c
	lsls r1, r1, #11	@ 0012671c c902
.org 0x12671e
	movs r0, #200	@ 0012671e c820
.org 0x126720
	lsls r0, r0, #7	@ 00126720 c001
.org 0x126722
	adds r1, r1, r0	@ 00126722 0918
.org 0x126724
	ldr r0, [r2, #4]	@ 00126724 5068
.org 0x126726
	subs r0, r0, r1	@ 00126726 401a
.org 0x126728
	str r0, [sp, #4]	@ 00126728 0190
.org 0x12672a
	mov sl, sp	@ 0012672a ea46
.org 0x12672c
	adds r1, r3, #0	@ 0012672c 191c
.org 0x12672e
	add r1, r8	@ 0012672e 4144
.org 0x126730
	mov r9, r1	@ 00126730 8946
.org 0x126732
	mov r2, r8	@ 00126732 4246
.org 0x126734
	adds r4, r2, r3	@ 00126734 d418
.org 0x126736
	ldr r1, [r4, #52]	@ 00126736 616b
.org 0x126738
	lsrs r0, r1, #8	@ 00126738 080a
.org 0x12673a
	lsls r0, r0, #24	@ 0012673a 0006
.org 0x12673c
	lsrs r2, r0, #24	@ 0012673c 020e
.org 0x12673e
	adds r7, r2, #0	@ 0012673e 171c
.org 0x126740
	lsls r1, r1, #24	@ 00126740 0906
.org 0x126742
	lsrs r5, r1, #24	@ 00126742 0d0e
.org 0x126744
	ldr r6, [r4, #44]	@ 00126744 e66a
.org 0x126746
	ldr r1, [pc, #52]	@ 00126746 0d49
.org 0x126748
	lsls r0, r7, #2	@ 00126748 b800
.org 0x12674a
	adds r0, r5, r0	@ 0012674a 2818
.org 0x12674c
	adds r0, r0, r1	@ 0012674c 4018
.org 0x12674e
	ldrb r1, [r0, #0]	@ 0012674e 0178
.org 0x126750
	mov r0, sp	@ 00126750 6846
.org 0x126752
	mov r2, r8	@ 00126752 4246
.org 0x126754
	bl 0x1078d0	@ 00126754 e1f7bcf8
.org 0x126758
	str r0, [r4, #44]	@ 00126758 e062
.org 0x12675a
	str r6, [r0, #40]	@ 0012675a 8662
.org 0x12675c
	mov r1, sl	@ 0012675c 5146
.org 0x12675e
	ldr r0, [r1, #4]	@ 0012675e 4868
.org 0x126760
	ldr r2, [pc, #28]	@ 00126760 074a
.org 0x126762
	adds r0, r0, r2	@ 00126762 8018
.org 0x126764
	str r0, [r1, #4]	@ 00126764 4860
.org 0x126766
	cmp r5, #2	@ 00126766 022d
.org 0x126768
	bhi.n 0x126784	@ 00126768 0cd8
.org 0x12676a
	ldr r0, [r4, #52]	@ 0012676a 606b
.org 0x12676c
	adds r0, #1	@ 0012676c 0130
.org 0x12676e
	str r0, [r4, #52]	@ 0012676e 6063
.org 0x126770
	b.n 0x1267e4	@ 00126770 38e0
.org 0x126772
	.byte 0x00	@ 00126772 data
.org 0x126773
	.byte 0x00	@ 00126773 data
.org 0x126774
	.byte 0xcc,0x0d,0x00,0x00	@ 00126774 data
.org 0x126778
	.byte 0xc4,0x0d,0x00,0x00	@ 00126778 data
.org 0x12677c
	.byte 0x24,0x24,0x88,0x08	@ 0012677c data
.org 0x126780
	.byte 0x00,0xe0,0xff,0xff	@ 00126780 data
.org 0x126784
	ldr r0, [pc, #64]	@ 00126784 1048
.org 0x126786
	ldr r1, [pc, #68]	@ 00126786 1149
.org 0x126788
	adds r5, r0, r1	@ 00126788 4518
.org 0x12678a
	ldr r0, [r5, #0]	@ 0012678a 2868
.org 0x12678c
	ldr r3, [pc, #64]	@ 0012678c 104b
.org 0x12678e
	muls r0, r3	@ 0012678e 5843
.org 0x126790
	ldr r6, [pc, #64]	@ 00126790 104e
.org 0x126792
	adds r4, r0, r6	@ 00126792 8419
.org 0x126794
	str r4, [r5, #0]	@ 00126794 2c60
.org 0x126796
	lsrs r0, r4, #16	@ 00126796 200c
.org 0x126798
	movs r1, #5	@ 00126798 0521
.org 0x12679a
	str r3, [sp, #8]	@ 0012679a 0293
.org 0x12679c
	bl 0x129198	@ 0012679c 02f0fcfc
.org 0x1267a0
	lsls r0, r0, #24	@ 001267a0 0006
.org 0x1267a2
	lsrs r2, r0, #24	@ 001267a2 020e
.org 0x1267a4
	ldr r0, [pc, #48]	@ 001267a4 0c48
.org 0x1267a6
	adds r0, r7, r0	@ 001267a6 3818
.org 0x1267a8
	ldrb r0, [r0, #0]	@ 001267a8 0078
.org 0x1267aa
	ldr r3, [sp, #8]	@ 001267aa 029b
.org 0x1267ac
	cmp r2, r0	@ 001267ac 8242
.org 0x1267ae
	bne.n 0x1267de	@ 001267ae 16d1
.org 0x1267b0
	cmp r2, #0	@ 001267b0 002a
.org 0x1267b2
	bne.n 0x1267dc	@ 001267b2 13d1
.org 0x1267b4
	adds r0, r4, #0	@ 001267b4 201c
.org 0x1267b6
	muls r0, r3	@ 001267b6 5843
.org 0x1267b8
	adds r0, r0, r6	@ 001267b8 8019
.org 0x1267ba
	str r0, [r5, #0]	@ 001267ba 2860
.org 0x1267bc
	lsrs r0, r0, #16	@ 001267bc 000c
.org 0x1267be
	movs r1, #3	@ 001267be 0321
.org 0x1267c0
	ands r0, r1	@ 001267c0 0840
.org 0x1267c2
	adds r2, r0, #1	@ 001267c2 421c
.org 0x1267c4
	b.n 0x1267de	@ 001267c4 0be0
.org 0x1267c6
	.byte 0x00	@ 001267c6 data
.org 0x1267c7
	.byte 0x00	@ 001267c7 data
.org 0x1267c8
	.byte 0x10,0xf6,0x02,0x02	@ 001267c8 data
.org 0x1267cc
	.byte 0x6c,0x62,0x00,0x00	@ 001267cc data
.org 0x1267d0
	.byte 0x6d,0x4e,0xc6,0x41	@ 001267d0 data
.org 0x1267d4
	.byte 0x39,0x30,0x00,0x00	@ 001267d4 data
.org 0x1267d8
	.byte 0x38,0x24,0x88,0x08	@ 001267d8 data
.org 0x1267dc
	bics r2, r0	@ 001267dc 8243
.org 0x1267de
	lsls r0, r2, #8	@ 001267de 1002
.org 0x1267e0
	mov r2, r9	@ 001267e0 4a46
.org 0x1267e2
	str r0, [r2, #52]	@ 001267e2 5063
.org 0x1267e4
	mov r1, r9	@ 001267e4 4946
.org 0x1267e6
	ldr r0, [r1, #36]	@ 001267e6 486a
.org 0x1267e8
	adds r0, #1	@ 001267e8 0130
.org 0x1267ea
	str r0, [r1, #36]	@ 001267ea 4862
.org 0x1267ec
	ldr r3, [pc, #116]	@ 001267ec 1d4b
.org 0x1267ee
	cmp r0, #6	@ 001267ee 0628
.org 0x1267f0
	bls.n 0x126732	@ 001267f0 9fd9
.org 0x1267f2
	ldr r3, [pc, #112]	@ 001267f2 1c4b
.org 0x1267f4
	mov r2, r8	@ 001267f4 4246
.org 0x1267f6
	adds r0, r2, r3	@ 001267f6 d018
.org 0x1267f8
	ldr r1, [r0, #40]	@ 001267f8 816a
.org 0x1267fa
	cmp r1, #6	@ 001267fa 0629
.org 0x1267fc
	bhi.n 0x1268e2	@ 001267fc 71d8
.org 0x1267fe
	ldr r2, [pc, #104]	@ 001267fe 1a4a
.org 0x126800
	add r2, r8	@ 00126800 4244
.org 0x126802
	ldr r0, [r2, #0]	@ 00126802 1068
.org 0x126804
	str r0, [sp, #0]	@ 00126804 0090
.org 0x126806
	lsls r1, r1, #11	@ 00126806 c902
.org 0x126808
	movs r0, #200	@ 00126808 c820
.org 0x12680a
	lsls r0, r0, #7	@ 0012680a c001
.org 0x12680c
	adds r1, r1, r0	@ 0012680c 0918
.org 0x12680e
	ldr r0, [r2, #4]	@ 0012680e 5068
.org 0x126810
	subs r0, r0, r1	@ 00126810 401a
.org 0x126812
	str r0, [sp, #4]	@ 00126812 0190
.org 0x126814
	mov sl, sp	@ 00126814 ea46
.org 0x126816
	adds r1, r3, #0	@ 00126816 191c
.org 0x126818
	add r1, r8	@ 00126818 4144
.org 0x12681a
	mov r9, r1	@ 0012681a 8946
.org 0x12681c
	mov r2, r8	@ 0012681c 4246
.org 0x12681e
	adds r4, r2, r3	@ 0012681e d418
.org 0x126820
	ldr r1, [r4, #56]	@ 00126820 a16b
.org 0x126822
	lsrs r0, r1, #8	@ 00126822 080a
.org 0x126824
	lsls r0, r0, #24	@ 00126824 0006
.org 0x126826
	lsrs r2, r0, #24	@ 00126826 020e
.org 0x126828
	adds r7, r2, #0	@ 00126828 171c
.org 0x12682a
	lsls r1, r1, #24	@ 0012682a 0906
.org 0x12682c
	lsrs r5, r1, #24	@ 0012682c 0d0e
.org 0x12682e
	ldr r6, [r4, #48]	@ 0012682e 266b
.org 0x126830
	ldr r1, [pc, #56]	@ 00126830 0e49
.org 0x126832
	lsls r0, r7, #2	@ 00126832 b800
.org 0x126834
	adds r0, r5, r0	@ 00126834 2818
.org 0x126836
	adds r0, r0, r1	@ 00126836 4018
.org 0x126838
	ldrb r1, [r0, #0]	@ 00126838 0178
.org 0x12683a
	movs r2, #128	@ 0012683a 8022
.org 0x12683c
	lsls r2, r2, #1	@ 0012683c 5200
.org 0x12683e
	adds r0, r2, #0	@ 0012683e 101c
.org 0x126840
	orrs r1, r0	@ 00126840 0143
.org 0x126842
	mov r0, sp	@ 00126842 6846
.org 0x126844
	mov r2, r8	@ 00126844 4246
.org 0x126846
	bl 0x1078d0	@ 00126846 e1f743f8
.org 0x12684a
	str r0, [r4, #48]	@ 0012684a 2063
.org 0x12684c
	str r6, [r0, #40]	@ 0012684c 8662
.org 0x12684e
	mov r1, sl	@ 0012684e 5146
.org 0x126850
	ldr r0, [r1, #4]	@ 00126850 4868
.org 0x126852
	ldr r2, [pc, #28]	@ 00126852 074a
.org 0x126854
	adds r0, r0, r2	@ 00126854 8018
.org 0x126856
	str r0, [r1, #4]	@ 00126856 4860
.org 0x126858
	cmp r5, #2	@ 00126858 022d
.org 0x12685a
	bhi.n 0x126874	@ 0012685a 0bd8
.org 0x12685c
	ldr r0, [r4, #56]	@ 0012685c a06b
.org 0x12685e
	adds r0, #1	@ 0012685e 0130
.org 0x126860
	str r0, [r4, #56]	@ 00126860 a063
.org 0x126862
	b.n 0x1268d4	@ 00126862 37e0
.org 0x126864
	.byte 0xcc,0x0d,0x00,0x00	@ 00126864 data
.org 0x126868
	.byte 0xc4,0x0d,0x00,0x00	@ 00126868 data
.org 0x12686c
	.byte 0x24,0x24,0x88,0x08	@ 0012686c data
.org 0x126870
	.byte 0x00,0xe0,0xff,0xff	@ 00126870 data
.org 0x126874
	ldr r0, [pc, #64]	@ 00126874 1048
.org 0x126876
	ldr r1, [pc, #68]	@ 00126876 1149
.org 0x126878
	adds r5, r0, r1	@ 00126878 4518
.org 0x12687a
	ldr r0, [r5, #0]	@ 0012687a 2868
.org 0x12687c
	ldr r3, [pc, #64]	@ 0012687c 104b
.org 0x12687e
	muls r0, r3	@ 0012687e 5843
.org 0x126880
	ldr r6, [pc, #64]	@ 00126880 104e
.org 0x126882
	adds r4, r0, r6	@ 00126882 8419
.org 0x126884
	str r4, [r5, #0]	@ 00126884 2c60
.org 0x126886
	lsrs r0, r4, #16	@ 00126886 200c
.org 0x126888
	movs r1, #5	@ 00126888 0521
.org 0x12688a
	str r3, [sp, #8]	@ 0012688a 0293
.org 0x12688c
	bl 0x129198	@ 0012688c 02f084fc
.org 0x126890
	lsls r0, r0, #24	@ 00126890 0006
.org 0x126892
	lsrs r2, r0, #24	@ 00126892 020e
.org 0x126894
	ldr r0, [pc, #48]	@ 00126894 0c48
.org 0x126896
	adds r0, r7, r0	@ 00126896 3818
.org 0x126898
	ldrb r0, [r0, #0]	@ 00126898 0078
.org 0x12689a
	ldr r3, [sp, #8]	@ 0012689a 029b
.org 0x12689c
	cmp r2, r0	@ 0012689c 8242
.org 0x12689e
	bne.n 0x1268ce	@ 0012689e 16d1
.org 0x1268a0
	cmp r2, #0	@ 001268a0 002a
.org 0x1268a2
	bne.n 0x1268cc	@ 001268a2 13d1

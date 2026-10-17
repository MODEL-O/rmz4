@ FUN_080536c4  entry 0x080536c4  size 168
.thumb
.org 0x536c4
FUN_080536c4:
	push {r4, r5, r6, lr}	@ 000536c4 70b5
.org 0x536c6
	sub sp, #12	@ 000536c6 83b0
.org 0x536c8
	adds r6, r0, #0	@ 000536c8 061c
.org 0x536ca
	ldr r1, [pc, #124]	@ 000536ca 1f49
.org 0x536cc
	mov r0, sp	@ 000536cc 6846
.org 0x536ce
	movs r2, #4	@ 000536ce 0422
.org 0x536d0
	bl 0x129258	@ 000536d0 d5f0c2fd
.org 0x536d4
	ldrb r0, [r6, #15]	@ 000536d4 f07b
.org 0x536d6
	cmp r0, #0	@ 000536d6 0028
.org 0x536d8
	bne.n 0x536f2	@ 000536d8 0bd1
.org 0x536da
	movs r1, #182	@ 000536da b621
.org 0x536dc
	lsls r1, r1, #8	@ 000536dc 0902
.org 0x536de
	adds r0, r6, #0	@ 000536de 301c
.org 0x536e0
	bl 0x1cf00	@ 000536e0 c9f70efc
.org 0x536e4
	adds r1, r6, #0	@ 000536e4 311c
.org 0x536e6
	adds r1, #204	@ 000536e6 cc31
.org 0x536e8
	ldr r0, [pc, #96]	@ 000536e8 1848
.org 0x536ea
	str r0, [r1, #0]	@ 000536ea 0860
.org 0x536ec
	ldrb r0, [r6, #15]	@ 000536ec f07b
.org 0x536ee
	adds r0, #1	@ 000536ee 0130
.org 0x536f0
	strb r0, [r6, #15]	@ 000536f0 f073
.org 0x536f2
	adds r0, r6, #0	@ 000536f2 301c
.org 0x536f4
	bl 0x1cff0	@ 000536f4 c9f77cfc
.org 0x536f8
	adds r4, r6, #0	@ 000536f8 341c
.org 0x536fa
	adds r4, #204	@ 000536fa cc34
.org 0x536fc
	ldr r0, [r4, #0]	@ 000536fc 2068
.org 0x536fe
	subs r5, r0, #1	@ 000536fe 451e
.org 0x53700
	str r5, [r4, #0]	@ 00053700 2560
.org 0x53702
	adds r0, r5, #0	@ 00053702 281c
.org 0x53704
	movs r1, #120	@ 00053704 7821
.org 0x53706
	bl 0x129050	@ 00053706 d5f0a3fc
.org 0x5370a
	cmp r0, #0	@ 0005370a 0028
.org 0x5370c
	bne.n 0x53764	@ 0005370c 2ad1
.org 0x5370e
	adds r0, r5, #0	@ 0005370e 281c
.org 0x53710
	movs r1, #120	@ 00053710 7821
.org 0x53712
	bl 0x128fb8	@ 00053712 d5f051fc
.org 0x53716
	movs r1, #3	@ 00053716 0321
.org 0x53718
	subs r1, r1, r0	@ 00053718 091a
.org 0x5371a
	lsls r1, r1, #24	@ 0005371a 0906
.org 0x5371c
	lsrs r2, r1, #24	@ 0005371c 0a0e
.org 0x5371e
	mov r1, sp	@ 0005371e 6946
.org 0x53720
	adds r0, r1, r2	@ 00053720 8818
.org 0x53722
	ldrb r2, [r0, #0]	@ 00053722 0278
.org 0x53724
	adds r0, r6, #0	@ 00053724 301c
.org 0x53726
	adds r0, #188	@ 00053726 bc30
.org 0x53728
	ldr r0, [r0, #0]	@ 00053728 0068
.org 0x5372a
	movs r1, #160	@ 0005372a a021
.org 0x5372c
	lsls r1, r1, #5	@ 0005372c 4901
.org 0x5372e
	adds r0, r0, r1	@ 0005372e 4018
.org 0x53730
	str r0, [sp, #4]	@ 00053730 0190
.org 0x53732
	cmp r2, #3	@ 00053732 032a
.org 0x53734
	bne.n 0x53754	@ 00053734 0ed1
.org 0x53736
	adds r0, r6, #0	@ 00053736 301c
.org 0x53738
	adds r0, #184	@ 00053738 b830
.org 0x5373a
	ldr r0, [r0, #0]	@ 0005373a 0068
.org 0x5373c
	ldr r1, [pc, #16]	@ 0005373c 0449
.org 0x5373e
	adds r0, r0, r1	@ 0005373e 4018
.org 0x53740
	add r1, sp, #4	@ 00053740 01a9
.org 0x53742
	str r0, [r1, #4]	@ 00053742 4860
.org 0x53744
	adds r0, r1, #0	@ 00053744 081c
.org 0x53746
	b.n 0x5375e	@ 00053746 0ae0
.org 0x53748
	.byte 0x9c,0x95,0x12,0x08	@ 00053748 data
.org 0x5374c
	.byte 0x69,0x01,0x00,0x00	@ 0005374c data
.org 0x53750
	.byte 0x01,0x90,0xff,0xff	@ 00053750 data
.org 0x53754
	adds r0, r6, #0	@ 00053754 301c
.org 0x53756
	adds r0, #184	@ 00053756 b830
.org 0x53758
	ldr r1, [r0, #0]	@ 00053758 0168
.org 0x5375a
	add r0, sp, #4	@ 0005375a 01a8
.org 0x5375c
	str r1, [r0, #4]	@ 0005375c 4160
.org 0x5375e
	movs r1, #0	@ 0005375e 0021
.org 0x53760
	bl 0x89ebc	@ 00053760 36f0acfb
.org 0x53764
	ldr r4, [r4, #0]	@ 00053764 2468
.org 0x53766
	cmp r4, #0	@ 00053766 002c
.org 0x53768
	bne.n 0x53770	@ 00053768 02d1
.org 0x5376a
	movs r0, #1	@ 0005376a 0120

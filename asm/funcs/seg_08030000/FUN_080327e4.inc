@ FUN_080327e4  entry 0x080327e4  size 296
.thumb
.org 0x327e4
FUN_080327e4:
	push {r4, r5, lr}	@ 000327e4 30b5
.org 0x327e6
	adds r4, r0, #0	@ 000327e6 041c
.org 0x327e8
	ldr r1, [pc, #36]	@ 000327e8 0949
.org 0x327ea
	adds r0, r4, r1	@ 000327ea 6018
.org 0x327ec
	ldrb r0, [r0, #0]	@ 000327ec 0078
.org 0x327ee
	cmp r0, #0	@ 000327ee 0028
.org 0x327f0
	beq.n 0x32830	@ 000327f0 1ed0
.org 0x327f2
	movs r2, #185	@ 000327f2 b922
.org 0x327f4
	lsls r2, r2, #1	@ 000327f4 5200
.org 0x327f6
	adds r0, r4, r2	@ 000327f6 a018
.org 0x327f8
	ldrb r0, [r0, #0]	@ 000327f8 0078
.org 0x327fa
	cmp r0, #0	@ 000327fa 0028
.org 0x327fc
	bne.n 0x32814	@ 000327fc 0ad1
.org 0x327fe
	movs r1, #150	@ 000327fe 9621
.org 0x32800
	lsls r1, r1, #7	@ 00032800 c901
.org 0x32802
	adds r0, r4, #0	@ 00032802 201c
.org 0x32804
	movs r2, #3	@ 00032804 0322
.org 0x32806
	movs r3, #4	@ 00032806 0423
.org 0x32808
	bl 0x1cfc8	@ 00032808 eaf7defb
.org 0x3280c
	b.n 0x32822	@ 0003280c 09e0
.org 0x3280e
	.byte 0x00	@ 0003280e data
.org 0x3280f
	.byte 0x00	@ 0003280f data
.org 0x32810
	.byte 0x71,0x01,0x00,0x00	@ 00032810 data
.org 0x32814
	movs r1, #148	@ 00032814 9421
.org 0x32816
	lsls r1, r1, #7	@ 00032816 c901
.org 0x32818
	adds r0, r4, #0	@ 00032818 201c
.org 0x3281a
	movs r2, #3	@ 0003281a 0322
.org 0x3281c
	movs r3, #4	@ 0003281c 0423
.org 0x3281e
	bl 0x1cfc8	@ 0003281e eaf7d3fb
.org 0x32822
	ldr r0, [pc, #8]	@ 00032822 0248
.org 0x32824
	adds r1, r4, r0	@ 00032824 2118
.org 0x32826
	movs r0, #0	@ 00032826 0020
.org 0x32828
	strb r0, [r1, #0]	@ 00032828 0870
.org 0x3282a
	b.n 0x32866	@ 0003282a 1ce0
.org 0x3282c
	.byte 0x71,0x01,0x00,0x00	@ 0003282c data
.org 0x32830
	ldrb r1, [r4, #10]	@ 00032830 a17a
.org 0x32832
	lsrs r1, r1, #4	@ 00032832 0909
.org 0x32834
	movs r0, #1	@ 00032834 0120
.org 0x32836
	ands r1, r0	@ 00032836 0140
.org 0x32838
	movs r2, #161	@ 00032838 a122
.org 0x3283a
	lsls r2, r2, #1	@ 0003283a 5200
.org 0x3283c
	adds r0, r4, r2	@ 0003283c a018
.org 0x3283e
	ldrb r0, [r0, #0]	@ 0003283e 0078
.org 0x32840
	lsls r0, r0, #31	@ 00032840 c007
.org 0x32842
	lsrs r0, r0, #31	@ 00032842 c00f
.org 0x32844
	cmp r1, r0	@ 00032844 8142
.org 0x32846
	beq.n 0x32858	@ 00032846 07d0
.org 0x32848
	movs r1, #150	@ 00032848 9621
.org 0x3284a
	lsls r1, r1, #7	@ 0003284a c901
.org 0x3284c
	adds r0, r4, #0	@ 0003284c 201c
.org 0x3284e
	movs r2, #3	@ 0003284e 0322
.org 0x32850
	movs r3, #4	@ 00032850 0423
.org 0x32852
	bl 0x1cfc8	@ 00032852 eaf7b9fb
.org 0x32856
	b.n 0x32866	@ 00032856 06e0
.org 0x32858
	movs r1, #148	@ 00032858 9421
.org 0x3285a
	lsls r1, r1, #7	@ 0003285a c901
.org 0x3285c
	adds r0, r4, #0	@ 0003285c 201c
.org 0x3285e
	movs r2, #3	@ 0003285e 0322
.org 0x32860
	movs r3, #4	@ 00032860 0423
.org 0x32862
	bl 0x1cfc8	@ 00032862 eaf7b1fb
.org 0x32866
	adds r3, r4, #0	@ 00032866 231c
.org 0x32868
	adds r3, #180	@ 00032868 b433
.org 0x3286a
	ldr r2, [r3, #84]	@ 0003286a 5a6d
.org 0x3286c
	cmp r2, #0	@ 0003286c 002a
.org 0x3286e
	beq.n 0x32878	@ 0003286e 03d0
.org 0x32870
	movs r1, #0	@ 00032870 0021
.org 0x32872
	movs r0, #1	@ 00032872 0120
.org 0x32874
	strb r0, [r2, #17]	@ 00032874 5074
.org 0x32876
	str r1, [r3, #84]	@ 00032876 5965
.org 0x32878
	movs r0, #128	@ 00032878 8020
.org 0x3287a
	lsls r0, r0, #1	@ 0003287a 4000
.org 0x3287c
	adds r1, r4, r0	@ 0003287c 2118
.org 0x3287e
	movs r0, #0	@ 0003287e 0020
.org 0x32880
	strb r0, [r1, #0]	@ 00032880 0870
.org 0x32882
	ldr r2, [pc, #40]	@ 00032882 0a4a
.org 0x32884
	adds r1, r4, r2	@ 00032884 a118
.org 0x32886
	movs r0, #255	@ 00032886 ff20
.org 0x32888
	strb r0, [r1, #0]	@ 00032888 0870
.org 0x3288a
	adds r0, #79	@ 0003288a 4f30
.org 0x3288c
	adds r1, r4, r0	@ 0003288c 2118
.org 0x3288e
	movs r0, #1	@ 0003288e 0120
.org 0x32890
	negs r0, r0	@ 00032890 4042
.org 0x32892
	strb r0, [r1, #0]	@ 00032892 0870
.org 0x32894
	adds r2, r4, #0	@ 00032894 221c
.org 0x32896
	adds r2, #250	@ 00032896 fa32
.org 0x32898
	ldrb r1, [r2, #0]	@ 00032898 1178
.org 0x3289a
	adds r0, r1, #0	@ 0003289a 081c
.org 0x3289c
	cmp r0, #2	@ 0003289c 0228
.org 0x3289e
	beq.n 0x328d4	@ 0003289e 19d0
.org 0x328a0
	cmp r0, #8	@ 000328a0 0828
.org 0x328a2
	bne.n 0x328b0	@ 000328a2 05d1
.org 0x328a4
	movs r0, #2	@ 000328a4 0220
.org 0x328a6
	strb r0, [r2, #0]	@ 000328a6 1070
.org 0x328a8
	b.n 0x328d4	@ 000328a8 14e0
.org 0x328aa
	.byte 0x00	@ 000328aa data
.org 0x328ab
	.byte 0x00	@ 000328ab data
.org 0x328ac
	.byte 0x49,0x01,0x00,0x00	@ 000328ac data
.org 0x328b0
	ldrb r0, [r3, #12]	@ 000328b0 187b
.org 0x328b2
	cmp r0, #2	@ 000328b2 0228
.org 0x328b4
	beq.n 0x328c0	@ 000328b4 04d0
.org 0x328b6
	ldrb r0, [r3, #13]	@ 000328b6 587b
.org 0x328b8
	cmp r0, #2	@ 000328b8 0228
.org 0x328ba
	bne.n 0x328d4	@ 000328ba 0bd1
.org 0x328bc
	strb r1, [r3, #13]	@ 000328bc 5973
.org 0x328be
	b.n 0x328c2	@ 000328be 00e0
.org 0x328c0
	strb r1, [r3, #12]	@ 000328c0 1973
.org 0x328c2
	adds r1, r4, #0	@ 000328c2 211c
.org 0x328c4
	adds r1, #248	@ 000328c4 f831
.org 0x328c6
	ldrb r0, [r1, #0]	@ 000328c6 0878
.org 0x328c8
	cmp r0, #2	@ 000328c8 0228
.org 0x328ca
	beq.n 0x328d2	@ 000328ca 02d0
.org 0x328cc
	adds r1, r4, #0	@ 000328cc 211c
.org 0x328ce
	adds r1, #249	@ 000328ce f931
.org 0x328d0
	movs r0, #2	@ 000328d0 0220
.org 0x328d2
	strb r0, [r1, #0]	@ 000328d2 0870
.org 0x328d4
	movs r5, #0	@ 000328d4 0025
.org 0x328d6
	str r5, [r4, #96]	@ 000328d6 2566
.org 0x328d8
	str r5, [r4, #92]	@ 000328d8 e565
.org 0x328da
	movs r1, #186	@ 000328da ba21
.org 0x328dc
	lsls r1, r1, #1	@ 000328dc 4900
.org 0x328de
	adds r0, r4, r1	@ 000328de 6018
.org 0x328e0
	ldrb r1, [r0, #0]	@ 000328e0 0178
.org 0x328e2
	lsls r1, r1, #3	@ 000328e2 c900
.org 0x328e4
	ldr r0, [pc, #36]	@ 000328e4 0948
.org 0x328e6
	adds r1, r1, r0	@ 000328e6 0918
.org 0x328e8
	adds r0, r4, #0	@ 000328e8 201c
.org 0x328ea
	movs r2, #0	@ 000328ea 0022
.org 0x328ec
	bl 0x2c2d4	@ 000328ec f9f7f2fc
.org 0x328f0
	lsls r0, r0, #16	@ 000328f0 0004
.org 0x328f2
	movs r1, #240	@ 000328f2 f021
.org 0x328f4
	lsls r1, r1, #12	@ 000328f4 0903
.org 0x328f6
	ands r1, r0	@ 000328f6 0140
.org 0x328f8
	cmp r1, #0	@ 000328f8 0029
.org 0x328fa
	bne.n 0x32910	@ 000328fa 09d1
.org 0x328fc
	movs r0, #2	@ 000328fc 0220
.org 0x328fe
	strb r0, [r4, #14]	@ 000328fe a073
.org 0x32900
	strb r5, [r4, #15]	@ 00032900 e573
.org 0x32902
	adds r0, r4, #0	@ 00032902 201c
.org 0x32904
	bl 0x32a70	@ 00032904 00f0b4f8
.org 0x32908
	b.n 0x3291c	@ 00032908 08e0
.org 0x3290a
	.byte 0x00	@ 0003290a data
.org 0x3290b
	.byte 0x00	@ 0003290b data

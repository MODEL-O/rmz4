@ FUN_08072784  entry 0x08072784  size 306
.thumb
.org 0x72784
FUN_08072784:
	push {r4, r5, r6, r7, lr}	@ 00072784 f0b5
.org 0x72786
	sub sp, #12	@ 00072786 83b0
.org 0x72788
	adds r6, r0, #0	@ 00072788 061c
.org 0x7278a
	ldr r1, [pc, #180]	@ 0007278a 2d49
.org 0x7278c
	mov r0, sp	@ 0007278c 6846
.org 0x7278e
	movs r2, #3	@ 0007278e 0322
.org 0x72790
	bl 0x129258	@ 00072790 b6f062fd
.org 0x72794
	ldrb r0, [r6, #10]	@ 00072794 b07a
.org 0x72796
	lsrs r7, r0, #4	@ 00072796 0709
.org 0x72798
	movs r4, #1	@ 00072798 0124
.org 0x7279a
	ands r7, r4	@ 0007279a 2740
.org 0x7279c
	ldrb r0, [r6, #15]	@ 0007279c f07b
.org 0x7279e
	cmp r0, #0	@ 0007279e 0028
.org 0x727a0
	bne.n 0x727be	@ 000727a0 0dd1
.org 0x727a2
	movs r0, #149	@ 000727a2 9520
.org 0x727a4
	lsls r0, r0, #1	@ 000727a4 4000
.org 0x727a6
	bl 0x2b10	@ 000727a6 90f7b3f9
.org 0x727aa
	adds r0, r6, #0	@ 000727aa 301c
.org 0x727ac
	movs r1, #19	@ 000727ac 1321
.org 0x727ae
	bl 0x736c4	@ 000727ae 00f089ff
.org 0x727b2
	movs r0, #24	@ 000727b2 1820
.org 0x727b4
	strb r0, [r6, #18]	@ 000727b4 b074
.org 0x727b6
	strb r4, [r6, #19]	@ 000727b6 f474
.org 0x727b8
	ldrb r0, [r6, #15]	@ 000727b8 f07b
.org 0x727ba
	adds r0, #1	@ 000727ba 0130
.org 0x727bc
	strb r0, [r6, #15]	@ 000727bc f073
.org 0x727be
	adds r0, r6, #0	@ 000727be 301c
.org 0x727c0
	bl 0x1cff0	@ 000727c0 aaf716fc
.org 0x727c4
	adds r0, r6, #0	@ 000727c4 301c
.org 0x727c6
	adds r0, #116	@ 000727c6 7430
.org 0x727c8
	ldr r4, [pc, #120]	@ 000727c8 1e4c
.org 0x727ca
	ldr r3, [pc, #124]	@ 000727ca 1f4b
.org 0x727cc
	adds r1, r6, #0	@ 000727cc 311c
.org 0x727ce
	adds r1, #184	@ 000727ce b831
.org 0x727d0
	ldrb r2, [r1, #0]	@ 000727d0 0a78
.org 0x727d2
	lsls r1, r2, #1	@ 000727d2 5100
.org 0x727d4
	adds r1, r1, r3	@ 000727d4 c918
.org 0x727d6
	ldrh r1, [r1, #0]	@ 000727d6 0988
.org 0x727d8
	lsls r1, r1, #2	@ 000727d8 8900
.org 0x727da
	adds r1, r1, r4	@ 000727da 0919
.org 0x727dc
	adds r3, r6, #0	@ 000727dc 331c
.org 0x727de
	adds r3, #113	@ 000727de 7133
.org 0x727e0
	movs r5, #0	@ 000727e0 0025
.org 0x727e2
	ldrsb r5, [r3, r5]	@ 000727e2 5d57
.org 0x727e4
	ldr r1, [r1, #0]	@ 000727e4 0968
.org 0x727e6
	lsls r3, r5, #2	@ 000727e6 ab00
.org 0x727e8
	adds r3, r3, r1	@ 000727e8 5b18
.org 0x727ea
	ldr r4, [pc, #96]	@ 000727ea 184c
.org 0x727ec
	adds r1, r6, #0	@ 000727ec 311c
.org 0x727ee
	adds r1, #185	@ 000727ee b931
.org 0x727f0
	ldrb r1, [r1, #0]	@ 000727f0 0978
.org 0x727f2
	lsls r1, r1, #2	@ 000727f2 8900
.org 0x727f4
	adds r1, r1, r4	@ 000727f4 0919
.org 0x727f6
	ldr r1, [r1, #0]	@ 000727f6 0968
.org 0x727f8
	lsls r2, r2, #2	@ 000727f8 9200
.org 0x727fa
	adds r2, r2, r1	@ 000727fa 5218
.org 0x727fc
	ldr r1, [r2, #0]	@ 000727fc 1168
.org 0x727fe
	adds r1, r1, r5	@ 000727fe 4919
.org 0x72800
	ldrb r1, [r1, #0]	@ 00072800 0978
.org 0x72802
	lsls r2, r1, #1	@ 00072802 4a00
.org 0x72804
	adds r2, r2, r1	@ 00072804 5218
.org 0x72806
	lsls r2, r2, #3	@ 00072806 d200
.org 0x72808
	ldr r1, [r3, #0]	@ 00072808 1968
.org 0x7280a
	adds r1, r1, r2	@ 0007280a 8918
.org 0x7280c
	bl 0x5784	@ 0007280c 92f7baff
.org 0x72810
	ldrb r0, [r6, #18]	@ 00072810 b07c
.org 0x72812
	cmp r0, #0	@ 00072812 0028
.org 0x72814
	beq.n 0x7281a	@ 00072814 01d0
.org 0x72816
	subs r0, #1	@ 00072816 0138
.org 0x72818
	strb r0, [r6, #18]	@ 00072818 b074
.org 0x7281a
	ldrb r0, [r6, #19]	@ 0007281a f07c
.org 0x7281c
	cmp r0, #0	@ 0007281c 0028
.org 0x7281e
	beq.n 0x7286c	@ 0007281e 25d0
.org 0x72820
	ldr r0, [r6, #88]	@ 00072820 b06d
.org 0x72822
	ldr r1, [r6, #96]	@ 00072822 316e
.org 0x72824
	adds r0, r0, r1	@ 00072824 4018
.org 0x72826
	str r0, [r6, #88]	@ 00072826 b065
.org 0x72828
	adds r0, r6, #0	@ 00072828 301c
.org 0x7282a
	bl 0x737e8	@ 0007282a 00f0ddff
.org 0x7282e
	cmp r0, #0	@ 0007282e 0028
.org 0x72830
	beq.n 0x72850	@ 00072830 0ed0
.org 0x72832
	adds r0, r6, #0	@ 00072832 301c
.org 0x72834
	bl 0x739cc	@ 00072834 01f0caf8
.org 0x72838
	movs r0, #0	@ 00072838 0020
.org 0x7283a
	str r0, [r6, #96]	@ 0007283a 3066
.org 0x7283c
	b.n 0x72862	@ 0007283c 11e0
.org 0x7283e
	.byte 0x00	@ 0007283e data
.org 0x7283f
	.byte 0x00	@ 0007283f data
.org 0x72840
	.byte 0x71,0x99,0x12,0x08	@ 00072840 data
.org 0x72844
	.byte 0x08,0xcb,0x85,0x08	@ 00072844 data
.org 0x72848
	.byte 0x04,0xcc,0x85,0x08	@ 00072848 data
.org 0x7284c
	.byte 0xfc,0xcb,0x85,0x08	@ 0007284c data
.org 0x72850
	ldr r0, [r6, #96]	@ 00072850 306e
.org 0x72852
	ldr r1, [r6, #104]	@ 00072852 b16e
.org 0x72854
	adds r0, r0, r1	@ 00072854 4018
.org 0x72856
	str r0, [r6, #96]	@ 00072856 3066
.org 0x72858
	movs r1, #224	@ 00072858 e021
.org 0x7285a
	lsls r1, r1, #3	@ 0007285a c900
.org 0x7285c
	cmp r0, r1	@ 0007285c 8842
.org 0x7285e
	ble.n 0x72862	@ 0007285e 00dd
.org 0x72860
	str r1, [r6, #96]	@ 00072860 3166
.org 0x72862
	ldr r0, [r6, #96]	@ 00072862 306e
.org 0x72864
	cmp r0, #0	@ 00072864 0028
.org 0x72866
	blt.n 0x7286c	@ 00072866 01db
.org 0x72868
	movs r0, #0	@ 00072868 0020
.org 0x7286a
	strb r0, [r6, #19]	@ 0007286a f074
.org 0x7286c
	adds r0, r6, #0	@ 0007286c 301c
.org 0x7286e
	adds r0, #115	@ 0007286e 7330
.org 0x72870
	ldrb r0, [r0, #0]	@ 00072870 0078
.org 0x72872
	cmp r0, #3	@ 00072872 0328
.org 0x72874
	bne.n 0x728c0	@ 00072874 24d1
.org 0x72876
	ldrh r0, [r6, #18]	@ 00072876 708a
.org 0x72878
	cmp r0, #0	@ 00072878 0028
.org 0x7287a
	bne.n 0x728c0	@ 0007287a 21d1
.org 0x7287c
	lsls r2, r7, #1	@ 0007287c 7a00
.org 0x7287e
	subs r1, r2, #1	@ 0007287e 511e
.org 0x72880
	lsls r1, r1, #12	@ 00072880 0903
.org 0x72882
	ldr r0, [r6, #84]	@ 00072882 706d
.org 0x72884
	adds r0, r0, r1	@ 00072884 4018
.org 0x72886
	str r0, [sp, #4]	@ 00072886 0190
.org 0x72888
	ldr r0, [r6, #88]	@ 00072888 b06d
.org 0x7288a
	add r1, sp, #4	@ 0007288a 01a9
.org 0x7288c
	str r0, [r1, #4]	@ 0007288c 4860
.org 0x7288e
	movs r4, #0	@ 0007288e 0024
.org 0x72890
	adds r5, r2, #0	@ 00072890 151c
.org 0x72892
	adds r7, r1, #0	@ 00072892 0f1c
.org 0x72894
	mov r1, sp	@ 00072894 6946
.org 0x72896
	adds r0, r1, r4	@ 00072896 0819
.org 0x72898
	ldrb r2, [r0, #0]	@ 00072898 0278
.org 0x7289a
	movs r0, #160	@ 0007289a a020
.org 0x7289c
	lsls r0, r0, #1	@ 0007289c 4000
.org 0x7289e
	subs r0, r0, r2	@ 0007289e 801a
.org 0x728a0
	muls r0, r5	@ 000728a0 6843
.org 0x728a2
	adds r2, r2, r0	@ 000728a2 1218
.org 0x728a4
	lsls r2, r2, #24	@ 000728a4 1206
.org 0x728a6
	lsrs r2, r2, #24	@ 000728a6 120e
.org 0x728a8
	adds r0, r6, #0	@ 000728a8 301c
.org 0x728aa
	adds r1, r7, #0	@ 000728aa 391c
.org 0x728ac
	bl 0xcb8ec	@ 000728ac 59f01ef8
.org 0x728b0
	adds r4, #1	@ 000728b0 0134
.org 0x728b2
	cmp r4, #2	@ 000728b2 022c
.org 0x728b4
	ble.n 0x72894	@ 000728b4 eedd

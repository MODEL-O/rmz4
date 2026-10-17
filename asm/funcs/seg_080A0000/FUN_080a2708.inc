@ FUN_080a2708  entry 0x080a2708  size 306
.thumb
.org 0xa2708
FUN_080a2708:
	push {r4, r5, r6, lr}	@ 000a2708 70b5
.org 0xa270a
	adds r4, r0, #0	@ 000a270a 041c
.org 0xa270c
	adds r5, r4, #0	@ 000a270c 251c
.org 0xa270e
	adds r5, #140	@ 000a270e 8c35
.org 0xa2710
	ldr r0, [r5, #0]	@ 000a2710 2868
.org 0xa2712
	movs r6, #1	@ 000a2712 0126
.org 0xa2714
	ands r0, r6	@ 000a2714 3040
.org 0xa2716
	cmp r0, #0	@ 000a2716 0028
.org 0xa2718
	beq.n 0xa2720	@ 000a2718 02d0
.org 0xa271a
	movs r0, #39	@ 000a271a 2720
.org 0xa271c
	bl 0x6984	@ 000a271c 64f732f9
.org 0xa2720
	ldr r0, [pc, #68]	@ 000a2720 1148
.org 0xa2722
	adds r1, r4, #0	@ 000a2722 211c
.org 0xa2724
	adds r1, #84	@ 000a2724 5431
.org 0xa2726
	bl 0x1fb14	@ 000a2726 7df7f5f9
.org 0xa272a
	movs r1, #128	@ 000a272a 8021
.org 0xa272c
	lsls r1, r1, #8	@ 000a272c 0902
.org 0xa272e
	cmp r0, r1	@ 000a272e 8842
.org 0xa2730
	bls.n 0xa2770	@ 000a2730 1ed9
.org 0xa2732
	ldrb r1, [r4, #10]	@ 000a2732 a17a
.org 0xa2734
	movs r0, #254	@ 000a2734 fe20
.org 0xa2736
	ands r0, r1	@ 000a2736 0840
.org 0xa2738
	movs r2, #0	@ 000a2738 0022
.org 0xa273a
	movs r1, #253	@ 000a273a fd21
.org 0xa273c
	ands r0, r1	@ 000a273c 0840
.org 0xa273e
	strb r0, [r4, #10]	@ 000a273e a072
.org 0xa2740
	str r2, [r5, #0]	@ 000a2740 2a60
.org 0xa2742
	adds r0, r4, #0	@ 000a2742 201c
.org 0xa2744
	adds r0, #144	@ 000a2744 9030
.org 0xa2746
	str r2, [r0, #0]	@ 000a2746 0260
.org 0xa2748
	adds r0, #4	@ 000a2748 0430
.org 0xa274a
	strb r2, [r0, #0]	@ 000a274a 0270
.org 0xa274c
	ldrb r1, [r4, #10]	@ 000a274c a17a
.org 0xa274e
	movs r0, #251	@ 000a274e fb20
.org 0xa2750
	ands r0, r1	@ 000a2750 0840
.org 0xa2752
	strb r0, [r4, #10]	@ 000a2752 a072
.org 0xa2754
	ldr r1, [pc, #20]	@ 000a2754 0549
.org 0xa2756
	ldrb r0, [r4, #9]	@ 000a2756 607a
.org 0xa2758
	lsls r0, r0, #2	@ 000a2758 8000
.org 0xa275a
	adds r0, r0, r1	@ 000a275a 4018
.org 0xa275c
	movs r1, #3	@ 000a275c 0321
.org 0xa275e
	str r1, [r4, #12]	@ 000a275e e160
.org 0xa2760
	ldr r0, [r0, #0]	@ 000a2760 0068
.org 0xa2762
	ldr r0, [r0, #12]	@ 000a2762 c068
.org 0xa2764
	str r0, [r4, #20]	@ 000a2764 6061
.org 0xa2766
	b.n 0xa2854	@ 000a2766 75e0
.org 0xa2768
	.byte 0xf8,0xe9,0x02,0x02	@ 000a2768 data
.org 0xa276c
	.byte 0x40,0xdb,0x85,0x08	@ 000a276c data
.org 0xa2770
	ldr r1, [r5, #0]	@ 000a2770 2968
.org 0xa2772
	movs r0, #128	@ 000a2772 8020
.org 0xa2774
	lsls r0, r0, #2	@ 000a2774 8000
.org 0xa2776
	ands r0, r1	@ 000a2776 0840
.org 0xa2778
	cmp r0, #0	@ 000a2778 0028
.org 0xa277a
	beq.n 0xa27ac	@ 000a277a 17d0
.org 0xa277c
	ldr r1, [pc, #32]	@ 000a277c 0849
.org 0xa277e
	ldrb r0, [r4, #9]	@ 000a277e 607a
.org 0xa2780
	lsls r0, r0, #2	@ 000a2780 8000
.org 0xa2782
	adds r0, r0, r1	@ 000a2782 4018
.org 0xa2784
	movs r1, #2	@ 000a2784 0221
.org 0xa2786
	str r1, [r4, #12]	@ 000a2786 e160
.org 0xa2788
	ldr r0, [r0, #0]	@ 000a2788 0068
.org 0xa278a
	ldr r0, [r0, #8]	@ 000a278a 8068
.org 0xa278c
	str r0, [r4, #20]	@ 000a278c 6061
.org 0xa278e
	adds r0, r4, #0	@ 000a278e 201c
.org 0xa2790
	adds r0, #184	@ 000a2790 b830
.org 0xa2792
	ldrb r0, [r0, #0]	@ 000a2792 0078
.org 0xa2794
	cmp r0, #0	@ 000a2794 0028
.org 0xa2796
	beq.n 0xa27a4	@ 000a2796 05d0
.org 0xa2798
	movs r0, #0	@ 000a2798 0020
.org 0xa279a
	strb r6, [r4, #13]	@ 000a279a 6673
.org 0xa279c
	b.n 0xa27a6	@ 000a279c 03e0
.org 0xa279e
	.byte 0x00	@ 000a279e data
.org 0xa279f
	.byte 0x00	@ 000a279f data
.org 0xa27a0
	.byte 0x40,0xdb,0x85,0x08	@ 000a27a0 data
.org 0xa27a4
	strb r0, [r4, #13]	@ 000a27a4 6073
.org 0xa27a6
	strb r0, [r4, #14]	@ 000a27a6 a073
.org 0xa27a8
	strb r0, [r4, #15]	@ 000a27a8 e073
.org 0xa27aa
	b.n 0xa282a	@ 000a27aa 3ee0
.org 0xa27ac
	ands r1, r6	@ 000a27ac 3140
.org 0xa27ae
	cmp r1, #0	@ 000a27ae 0029
.org 0xa27b0
	beq.n 0xa27d8	@ 000a27b0 12d0
.org 0xa27b2
	ldr r0, [r4, #44]	@ 000a27b2 e06a
.org 0xa27b4
	cmp r0, #0	@ 000a27b4 0028
.org 0xa27b6
	bne.n 0xa27de	@ 000a27b6 12d1
.org 0xa27b8
	ldr r2, [pc, #120]	@ 000a27b8 1e4a
.org 0xa27ba
	movs r0, #0	@ 000a27ba 0020
.org 0xa27bc
	adds r1, r4, #0	@ 000a27bc 211c
.org 0xa27be
	bl 0x2adac	@ 000a27be 88f7f5fa
.org 0xa27c2
	str r0, [r4, #44]	@ 000a27c2 e062
.org 0xa27c4
	cmp r0, #0	@ 000a27c4 0028
.org 0xa27c6
	beq.n 0xa27fa	@ 000a27c6 18d0
.org 0xa27c8
	ldrb r0, [r4, #13]	@ 000a27c8 607b
.org 0xa27ca
	cmp r0, #0	@ 000a27ca 0028
.org 0xa27cc
	beq.n 0xa27d8	@ 000a27cc 04d0
.org 0xa27ce
	adds r0, r4, #0	@ 000a27ce 201c
.org 0xa27d0
	adds r0, #116	@ 000a27d0 7430
.org 0xa27d2
	ldr r1, [pc, #100]	@ 000a27d2 1949
.org 0xa27d4
	bl 0x5784	@ 000a27d4 62f7d6ff
.org 0xa27d8
	ldr r0, [r4, #44]	@ 000a27d8 e06a
.org 0xa27da
	cmp r0, #0	@ 000a27da 0028
.org 0xa27dc
	beq.n 0xa27fa	@ 000a27dc 0dd0
.org 0xa27de
	bl 0x2b3e4	@ 000a27de 88f701fe
.org 0xa27e2
	cmp r0, #0	@ 000a27e2 0028
.org 0xa27e4
	beq.n 0xa2854	@ 000a27e4 36d0
.org 0xa27e6
	movs r0, #0	@ 000a27e6 0020
.org 0xa27e8
	str r0, [r4, #44]	@ 000a27e8 e062
.org 0xa27ea
	ldrb r0, [r4, #13]	@ 000a27ea 607b
.org 0xa27ec
	cmp r0, #0	@ 000a27ec 0028
.org 0xa27ee
	beq.n 0xa27fa	@ 000a27ee 04d0
.org 0xa27f0
	adds r0, r4, #0	@ 000a27f0 201c
.org 0xa27f2
	adds r0, #116	@ 000a27f2 7430
.org 0xa27f4
	ldr r1, [pc, #68]	@ 000a27f4 1149
.org 0xa27f6
	bl 0x5784	@ 000a27f6 62f7c5ff
.org 0xa27fa
	ldrb r0, [r4, #13]	@ 000a27fa 607b
.org 0xa27fc
	cmp r0, #1	@ 000a27fc 0128
.org 0xa27fe
	bls.n 0xa2844	@ 000a27fe 21d9
.org 0xa2800
	adds r1, r4, #0	@ 000a2800 211c
.org 0xa2802
	adds r1, #180	@ 000a2802 b431
.org 0xa2804
	ldr r0, [r1, #0]	@ 000a2804 0868
.org 0xa2806
	cmp r0, #0	@ 000a2806 0028
.org 0xa2808
	beq.n 0xa2844	@ 000a2808 1cd0
.org 0xa280a
	subs r2, r0, #1	@ 000a280a 421e
.org 0xa280c
	str r2, [r1, #0]	@ 000a280c 0a60
.org 0xa280e
	cmp r2, #0	@ 000a280e 002a
.org 0xa2810
	bne.n 0xa2844	@ 000a2810 18d1
.org 0xa2812
	ldr r1, [pc, #44]	@ 000a2812 0b49
.org 0xa2814
	ldrb r0, [r4, #9]	@ 000a2814 607a
.org 0xa2816
	lsls r0, r0, #2	@ 000a2816 8000
.org 0xa2818
	adds r0, r0, r1	@ 000a2818 4018
.org 0xa281a
	movs r1, #2	@ 000a281a 0221
.org 0xa281c
	str r1, [r4, #12]	@ 000a281c e160
.org 0xa281e
	ldr r0, [r0, #0]	@ 000a281e 0068
.org 0xa2820
	ldr r0, [r0, #8]	@ 000a2820 8068
.org 0xa2822
	str r0, [r4, #20]	@ 000a2822 6061
.org 0xa2824
	strb r1, [r4, #13]	@ 000a2824 6173
.org 0xa2826
	strb r2, [r4, #14]	@ 000a2826 a273
.org 0xa2828
	strb r2, [r4, #15]	@ 000a2828 e273
.org 0xa282a
	adds r0, r4, #0	@ 000a282a 201c
.org 0xa282c
	bl 0xa2ac4	@ 000a282c 00f04af9
.org 0xa2830
	b.n 0xa2854	@ 000a2830 10e0
.org 0xa2832
	.byte 0x00	@ 000a2832 data
.org 0xa2833
	.byte 0x00	@ 000a2833 data
.org 0xa2834
	.byte 0x40,0x1d,0x86,0x08	@ 000a2834 data
.org 0xa2838
	.byte 0x10,0x1d,0x86,0x08	@ 000a2838 data

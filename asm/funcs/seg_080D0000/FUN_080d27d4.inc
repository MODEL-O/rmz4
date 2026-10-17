@ FUN_080d27d4  entry 0x080d27d4  size 360
.thumb
.org 0xd27d4
FUN_080d27d4:
	push {r4, r5, r6, r7, lr}	@ 000d27d4 f0b5
.org 0xd27d6
	mov r7, sl	@ 000d27d6 5746
.org 0xd27d8
	mov r6, r9	@ 000d27d8 4e46
.org 0xd27da
	mov r5, r8	@ 000d27da 4546
.org 0xd27dc
	push {r5, r6, r7}	@ 000d27dc e0b4
.org 0xd27de
	sub sp, #4	@ 000d27de 81b0
.org 0xd27e0
	adds r3, r0, #0	@ 000d27e0 031c
.org 0xd27e2
	ldr r5, [r3, #40]	@ 000d27e2 9d6a
.org 0xd27e4
	ldr r0, [r3, #44]	@ 000d27e4 d86a
.org 0xd27e6
	mov ip, r0	@ 000d27e6 8446
.org 0xd27e8
	adds r2, r3, #0	@ 000d27e8 1a1c
.org 0xd27ea
	adds r2, #116	@ 000d27ea 7432
.org 0xd27ec
	adds r4, r3, #0	@ 000d27ec 1c1c
.org 0xd27ee
	adds r4, #84	@ 000d27ee 5434
.org 0xd27f0
	ldr r1, [r3, #84]	@ 000d27f0 596d
.org 0xd27f2
	ldr r0, [r5, #84]	@ 000d27f2 686d
.org 0xd27f4
	cmp r1, r0	@ 000d27f4 8142
.org 0xd27f6
	bne.n 0xd2808	@ 000d27f6 07d1
.org 0xd27f8
	ldr r1, [r3, #88]	@ 000d27f8 996d
.org 0xd27fa
	ldr r0, [r5, #88]	@ 000d27fa a86d
.org 0xd27fc
	cmp r1, r0	@ 000d27fc 8142
.org 0xd27fe
	bne.n 0xd2808	@ 000d27fe 03d1
.org 0xd2800
	ldrb r1, [r3, #10]	@ 000d2800 997a
.org 0xd2802
	movs r0, #254	@ 000d2802 fe20
.org 0xd2804
	ands r0, r1	@ 000d2804 0840
.org 0xd2806
	b.n 0xd280e	@ 000d2806 02e0
.org 0xd2808
	ldrb r1, [r3, #10]	@ 000d2808 997a
.org 0xd280a
	movs r0, #1	@ 000d280a 0120
.org 0xd280c
	orrs r0, r1	@ 000d280c 0843
.org 0xd280e
	strb r0, [r3, #10]	@ 000d280e 9872
.org 0xd2810
	ldr r0, [r4, #0]	@ 000d2810 2068
.org 0xd2812
	str r0, [r2, #0]	@ 000d2812 1060
.org 0xd2814
	ldr r0, [r4, #4]	@ 000d2814 6068
.org 0xd2816
	str r0, [r2, #4]	@ 000d2816 5060
.org 0xd2818
	mov r7, ip	@ 000d2818 6746
.org 0xd281a
	adds r7, #72	@ 000d281a 4837
.org 0xd281c
	adds r6, r3, #0	@ 000d281c 1e1c
.org 0xd281e
	adds r6, #72	@ 000d281e 4836
.org 0xd2820
	movs r1, #78	@ 000d2820 4e21
.org 0xd2822
	add r1, ip	@ 000d2822 6144
.org 0xd2824
	mov r8, r1	@ 000d2824 8846
.org 0xd2826
	movs r0, #78	@ 000d2826 4e20
.org 0xd2828
	adds r0, r0, r3	@ 000d2828 c018
.org 0xd282a
	mov r9, r0	@ 000d282a 8146
.org 0xd282c
	adds r1, r3, #0	@ 000d282c 191c
.org 0xd282e
	adds r1, #76	@ 000d282e 4c31
.org 0xd2830
	str r1, [sp, #0]	@ 000d2830 0091
.org 0xd2832
	movs r0, #74	@ 000d2832 4a20
.org 0xd2834
	adds r0, r0, r3	@ 000d2834 c018
.org 0xd2836
	mov sl, r0	@ 000d2836 8246
.org 0xd2838
	adds r2, r4, #0	@ 000d2838 221c
.org 0xd283a
	movs r1, #1	@ 000d283a 0121
.org 0xd283c
	ldr r0, [r2, #8]	@ 000d283c 9068
.org 0xd283e
	str r0, [r2, #0]	@ 000d283e 1060
.org 0xd2840
	ldr r0, [r2, #12]	@ 000d2840 d068
.org 0xd2842
	str r0, [r2, #4]	@ 000d2842 5060
.org 0xd2844
	adds r2, #8	@ 000d2844 0832
.org 0xd2846
	subs r1, #1	@ 000d2846 0139
.org 0xd2848
	cmp r1, #0	@ 000d2848 0029
.org 0xd284a
	bge.n 0xd283c	@ 000d284a f7da
.org 0xd284c
	ldrb r0, [r3, #16]	@ 000d284c 187c
.org 0xd284e
	cmp r0, #0	@ 000d284e 0028
.org 0xd2850
	bne.n 0xd285a	@ 000d2850 03d1
.org 0xd2852
	ldr r0, [r5, #84]	@ 000d2852 686d
.org 0xd2854
	str r0, [r4, #16]	@ 000d2854 2061
.org 0xd2856
	ldr r0, [r5, #88]	@ 000d2856 a86d
.org 0xd2858
	b.n 0xd2860	@ 000d2858 02e0
.org 0xd285a
	ldr r0, [r5, #116]	@ 000d285a 686f
.org 0xd285c
	str r0, [r4, #16]	@ 000d285c 2061
.org 0xd285e
	ldr r0, [r5, #120]	@ 000d285e a86f
.org 0xd2860
	str r0, [r4, #20]	@ 000d2860 6061
.org 0xd2862
	ldrh r1, [r7, #0]	@ 000d2862 3988
.org 0xd2864
	lsls r1, r1, #22	@ 000d2864 8905
.org 0xd2866
	lsrs r1, r1, #22	@ 000d2866 890d
.org 0xd2868
	ldrh r2, [r6, #0]	@ 000d2868 3288
.org 0xd286a
	ldr r0, [pc, #44]	@ 000d286a 0b48
.org 0xd286c
	ands r0, r2	@ 000d286c 1040
.org 0xd286e
	orrs r0, r1	@ 000d286e 0843
.org 0xd2870
	strh r0, [r6, #0]	@ 000d2870 3080
.org 0xd2872
	mov r1, ip	@ 000d2872 6146
.org 0xd2874
	ldr r0, [r1, #60]	@ 000d2874 c86b
.org 0xd2876
	str r0, [r3, #60]	@ 000d2876 d863
.org 0xd2878
	mov r1, r8	@ 000d2878 4146
.org 0xd287a
	ldrb r0, [r1, #0]	@ 000d287a 0878
.org 0xd287c
	mov r1, r9	@ 000d287c 4946
.org 0xd287e
	strb r0, [r1, #0]	@ 000d287e 0870
.org 0xd2880
	mov r1, ip	@ 000d2880 6146
.org 0xd2882
	ldrb r0, [r1, #10]	@ 000d2882 887a
.org 0xd2884
	lsrs r2, r0, #4	@ 000d2884 0209
.org 0xd2886
	movs r0, #1	@ 000d2886 0120
.org 0xd2888
	ands r2, r0	@ 000d2888 0240
.org 0xd288a
	cmp r2, #0	@ 000d288a 002a
.org 0xd288c
	beq.n 0xd289c	@ 000d288c 06d0
.org 0xd288e
	ldrb r0, [r3, #10]	@ 000d288e 987a
.org 0xd2890
	movs r1, #16	@ 000d2890 1021
.org 0xd2892
	orrs r0, r1	@ 000d2892 0843
.org 0xd2894
	b.n 0xd28a2	@ 000d2894 05e0
.org 0xd2896
	.byte 0x00	@ 000d2896 data
.org 0xd2897
	.byte 0x00	@ 000d2897 data
.org 0xd2898
	.byte 0x00,0xfc,0xff,0xff	@ 000d2898 data
.org 0xd289c
	ldrb r1, [r3, #10]	@ 000d289c 997a
.org 0xd289e
	movs r0, #239	@ 000d289e ef20
.org 0xd28a0
	ands r0, r1	@ 000d28a0 0840
.org 0xd28a2
	strb r0, [r3, #10]	@ 000d28a2 9872
.org 0xd28a4
	movs r4, #1	@ 000d28a4 0124
.org 0xd28a6
	adds r1, r4, #0	@ 000d28a6 211c
.org 0xd28a8
	ands r1, r2	@ 000d28a8 1140
.org 0xd28aa
	ldr r0, [sp, #0]	@ 000d28aa 0098
.org 0xd28ac
	strb r1, [r0, #0]	@ 000d28ac 0170
.org 0xd28ae
	lsls r1, r1, #4	@ 000d28ae 0901
.org 0xd28b0
	mov r0, sl	@ 000d28b0 5046
.org 0xd28b2
	ldrb r2, [r0, #0]	@ 000d28b2 0278
.org 0xd28b4
	movs r0, #17	@ 000d28b4 1120
.org 0xd28b6
	negs r0, r0	@ 000d28b6 4042
.org 0xd28b8
	ands r0, r2	@ 000d28b8 1040
.org 0xd28ba
	orrs r0, r1	@ 000d28ba 0843
.org 0xd28bc
	mov r1, sl	@ 000d28bc 5146
.org 0xd28be
	strb r0, [r1, #0]	@ 000d28be 0870
.org 0xd28c0
	ldrb r0, [r5, #12]	@ 000d28c0 287b
.org 0xd28c2
	cmp r0, #1	@ 000d28c2 0128
.org 0xd28c4
	bhi.n 0xd28d2	@ 000d28c4 05d8
.org 0xd28c6
	mov r0, ip	@ 000d28c6 6046
.org 0xd28c8
	ldrb r1, [r0, #10]	@ 000d28c8 817a
.org 0xd28ca
	adds r0, r4, #0	@ 000d28ca 201c
.org 0xd28cc
	ands r0, r1	@ 000d28cc 0840
.org 0xd28ce
	cmp r0, #0	@ 000d28ce 0028
.org 0xd28d0
	bne.n 0xd28e2	@ 000d28d0 07d1
.org 0xd28d2
	ldrb r0, [r3, #16]	@ 000d28d2 187c
.org 0xd28d4
	cmp r0, #0	@ 000d28d4 0028
.org 0xd28d6
	bne.n 0xd28dc	@ 000d28d6 01d1
.org 0xd28d8
	movs r0, #2	@ 000d28d8 0220
.org 0xd28da
	b.n 0xd28de	@ 000d28da 00e0
.org 0xd28dc
	ldrb r0, [r5, #17]	@ 000d28dc 687c
.org 0xd28de
	strb r0, [r3, #17]	@ 000d28de 5874
.org 0xd28e0
	str r3, [r3, #40]	@ 000d28e0 9b62
.org 0xd28e2
	ldrb r0, [r3, #17]	@ 000d28e2 587c
.org 0xd28e4
	cmp r0, #2	@ 000d28e4 0228
.org 0xd28e6
	bne.n 0xd290c	@ 000d28e6 11d1
.org 0xd28e8
	ldrb r1, [r3, #10]	@ 000d28e8 997a
.org 0xd28ea
	movs r0, #254	@ 000d28ea fe20
.org 0xd28ec
	ands r0, r1	@ 000d28ec 0840
.org 0xd28ee
	movs r1, #253	@ 000d28ee fd21
.org 0xd28f0
	ands r0, r1	@ 000d28f0 0840
.org 0xd28f2
	strb r0, [r3, #10]	@ 000d28f2 9872
.org 0xd28f4
	ldr r1, [pc, #16]	@ 000d28f4 0449
.org 0xd28f6
	ldrb r0, [r3, #9]	@ 000d28f6 587a
.org 0xd28f8
	lsls r0, r0, #2	@ 000d28f8 8000
.org 0xd28fa
	adds r0, r0, r1	@ 000d28fa 4018
.org 0xd28fc
	movs r1, #3	@ 000d28fc 0321
.org 0xd28fe
	str r1, [r3, #12]	@ 000d28fe d960
.org 0xd2900
	ldr r0, [r0, #0]	@ 000d2900 0068
.org 0xd2902
	ldr r0, [r0, #12]	@ 000d2902 c068
.org 0xd2904
	str r0, [r3, #20]	@ 000d2904 5861
.org 0xd2906
	b.n 0xd2936	@ 000d2906 16e0
.org 0xd2908
	.byte 0x64,0x6f,0x86,0x08	@ 000d2908 data
.org 0xd290c
	cmp r0, #0	@ 000d290c 0028
.org 0xd290e
	beq.n 0xd2936	@ 000d290e 12d0
.org 0xd2910
	ldrb r0, [r3, #18]	@ 000d2910 987c
.org 0xd2912
	subs r0, #1	@ 000d2912 0138
.org 0xd2914
	strb r0, [r3, #18]	@ 000d2914 9874
.org 0xd2916
	lsls r0, r0, #24	@ 000d2916 0006
.org 0xd2918
	lsrs r0, r0, #24	@ 000d2918 000e
.org 0xd291a
	cmp r0, #255	@ 000d291a ff28
.org 0xd291c
	bne.n 0xd2936	@ 000d291c 0bd1
.org 0xd291e
	ldr r1, [pc, #40]	@ 000d291e 0a49
.org 0xd2920
	ldrb r0, [r3, #9]	@ 000d2920 587a
.org 0xd2922
	lsls r0, r0, #2	@ 000d2922 8000
.org 0xd2924
	adds r0, r0, r1	@ 000d2924 4018
.org 0xd2926
	movs r1, #2	@ 000d2926 0221
.org 0xd2928
	str r1, [r3, #12]	@ 000d2928 d960
.org 0xd292a
	ldr r0, [r0, #0]	@ 000d292a 0068
.org 0xd292c
	ldr r0, [r0, #8]	@ 000d292c 8068
.org 0xd292e
	str r0, [r3, #20]	@ 000d292e 5861
.org 0xd2930
	adds r0, r3, #0	@ 000d2930 181c
.org 0xd2932
	bl 0xd294c	@ 000d2932 00f00bf8
.org 0xd2936
	add sp, #4	@ 000d2936 01b0
.org 0xd2938
	pop {r3, r4, r5}	@ 000d2938 38bc
.org 0xd293a
	mov r8, r3	@ 000d293a 9846

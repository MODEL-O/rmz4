@ FUN_080e2804  entry 0x080e2804  size 140
.thumb
.org 0xe2804
FUN_080e2804:
	push {r4, r5, r6, lr}	@ 000e2804 70b5
.org 0xe2806
	adds r5, r0, #0	@ 000e2806 051c
.org 0xe2808
	ldrb r4, [r5, #17]	@ 000e2808 6c7c
.org 0xe280a
	ldr r1, [pc, #72]	@ 000e280a 1249
.org 0xe280c
	ldrb r0, [r5, #9]	@ 000e280c 687a
.org 0xe280e
	lsls r0, r0, #2	@ 000e280e 8000
.org 0xe2810
	adds r0, r0, r1	@ 000e2810 4018
.org 0xe2812
	movs r1, #1	@ 000e2812 0121
.org 0xe2814
	str r1, [r5, #12]	@ 000e2814 e960
.org 0xe2816
	ldr r0, [r0, #0]	@ 000e2816 0068
.org 0xe2818
	ldr r0, [r0, #4]	@ 000e2818 4068
.org 0xe281a
	str r0, [r5, #20]	@ 000e281a 6861
.org 0xe281c
	ldrb r1, [r5, #10]	@ 000e281c a97a
.org 0xe281e
	movs r0, #1	@ 000e281e 0120
.org 0xe2820
	movs r6, #0	@ 000e2820 0026
.org 0xe2822
	orrs r0, r1	@ 000e2822 0843
.org 0xe2824
	movs r1, #2	@ 000e2824 0221
.org 0xe2826
	orrs r0, r1	@ 000e2826 0843
.org 0xe2828
	strb r0, [r5, #10]	@ 000e2828 a872
.org 0xe282a
	movs r0, #16	@ 000e282a 1020
.org 0xe282c
	strb r0, [r5, #18]	@ 000e282c a874
.org 0xe282e
	adds r0, r5, #0	@ 000e282e 281c
.org 0xe2830
	bl 0x1cc9c	@ 000e2830 3af734fa
.org 0xe2834
	adds r2, r5, #0	@ 000e2834 2a1c
.org 0xe2836
	adds r2, #69	@ 000e2836 4532
.org 0xe2838
	ldrb r1, [r2, #0]	@ 000e2838 1178
.org 0xe283a
	movs r0, #13	@ 000e283a 0d20
.org 0xe283c
	negs r0, r0	@ 000e283c 4042
.org 0xe283e
	ands r0, r1	@ 000e283e 0840
.org 0xe2840
	movs r1, #8	@ 000e2840 0821
.org 0xe2842
	orrs r0, r1	@ 000e2842 0843
.org 0xe2844
	strb r0, [r2, #0]	@ 000e2844 1070
.org 0xe2846
	cmp r4, #0	@ 000e2846 002c
.org 0xe2848
	beq.n 0xe2858	@ 000e2848 06d0
.org 0xe284a
	ldrb r0, [r5, #10]	@ 000e284a a87a
.org 0xe284c
	movs r1, #16	@ 000e284c 1021
.org 0xe284e
	orrs r0, r1	@ 000e284e 0843
.org 0xe2850
	b.n 0xe285e	@ 000e2850 05e0
.org 0xe2852
	.byte 0x00	@ 000e2852 data
.org 0xe2853
	.byte 0x00	@ 000e2853 data
.org 0xe2854
	.byte 0x64,0x6f,0x86,0x08	@ 000e2854 data
.org 0xe2858
	ldrb r1, [r5, #10]	@ 000e2858 a97a
.org 0xe285a
	movs r0, #239	@ 000e285a ef20
.org 0xe285c
	ands r0, r1	@ 000e285c 0840
.org 0xe285e
	strb r0, [r5, #10]	@ 000e285e a872
.org 0xe2860
	movs r1, #1	@ 000e2860 0121
.org 0xe2862
	ands r1, r4	@ 000e2862 2140
.org 0xe2864
	adds r0, r5, #0	@ 000e2864 281c
.org 0xe2866
	adds r0, #76	@ 000e2866 4c30
.org 0xe2868
	strb r1, [r0, #0]	@ 000e2868 0170
.org 0xe286a
	adds r3, r5, #0	@ 000e286a 2b1c
.org 0xe286c
	adds r3, #74	@ 000e286c 4a33
.org 0xe286e
	lsls r1, r1, #4	@ 000e286e 0901
.org 0xe2870
	ldrb r2, [r3, #0]	@ 000e2870 1a78
.org 0xe2872
	movs r0, #17	@ 000e2872 1120
.org 0xe2874
	negs r0, r0	@ 000e2874 4042
.org 0xe2876
	ands r0, r2	@ 000e2876 1040
.org 0xe2878
	orrs r0, r1	@ 000e2878 0843
.org 0xe287a
	strb r0, [r3, #0]	@ 000e287a 1870
.org 0xe287c
	movs r1, #145	@ 000e287c 9121
.org 0xe287e
	lsls r1, r1, #8	@ 000e287e 0902
.org 0xe2880
	adds r0, r5, #0	@ 000e2880 281c
.org 0xe2882
	movs r2, #6	@ 000e2882 0622
.org 0xe2884
	movs r3, #2	@ 000e2884 0223
.org 0xe2886
	bl 0x1cfc8	@ 000e2886 3af79ffb
.org 0xe288a
	adds r0, r5, #0	@ 000e288a 281c
.org 0xe288c
	bl 0xe2898	@ 000e288c 00f004f8

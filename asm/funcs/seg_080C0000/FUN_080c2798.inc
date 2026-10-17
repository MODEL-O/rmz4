@ FUN_080c2798  entry 0x080c2798  size 234
.thumb
.org 0xc2798
FUN_080c2798:
	push {r4, r5, r6, r7, lr}	@ 000c2798 f0b5
.org 0xc279a
	mov r7, sl	@ 000c279a 5746
.org 0xc279c
	mov r6, r9	@ 000c279c 4e46
.org 0xc279e
	mov r5, r8	@ 000c279e 4546
.org 0xc27a0
	push {r5, r6, r7}	@ 000c27a0 e0b4
.org 0xc27a2
	sub sp, #16	@ 000c27a2 84b0
.org 0xc27a4
	adds r5, r0, #0	@ 000c27a4 051c
.org 0xc27a6
	ldr r0, [r5, #40]	@ 000c27a6 a86a
.org 0xc27a8
	mov r8, r0	@ 000c27a8 8046
.org 0xc27aa
	ldr r1, [r0, #40]	@ 000c27aa 816a
.org 0xc27ac
	mov r9, r1	@ 000c27ac 8946
.org 0xc27ae
	ldrb r0, [r5, #10]	@ 000c27ae a87a
.org 0xc27b0
	lsrs r0, r0, #4	@ 000c27b0 0009
.org 0xc27b2
	mov sl, r0	@ 000c27b2 8246
.org 0xc27b4
	movs r0, #1	@ 000c27b4 0120
.org 0xc27b6
	mov r4, sl	@ 000c27b6 5446
.org 0xc27b8
	ands r4, r0	@ 000c27b8 0440
.org 0xc27ba
	mov sl, r4	@ 000c27ba a246
.org 0xc27bc
	mov r1, r8	@ 000c27bc 4146
.org 0xc27be
	ldrb r0, [r1, #12]	@ 000c27be 087b
.org 0xc27c0
	cmp r0, #1	@ 000c27c0 0128
.org 0xc27c2
	bhi.n 0xc283a	@ 000c27c2 3ad8
.org 0xc27c4
	adds r0, r5, #0	@ 000c27c4 281c
.org 0xc27c6
	str r2, [sp, #8]	@ 000c27c6 0292
.org 0xc27c8
	str r3, [sp, #12]	@ 000c27c8 0393
.org 0xc27ca
	bl 0x1cff0	@ 000c27ca 5af711fc
.org 0xc27ce
	mov r0, r8	@ 000c27ce 4046
.org 0xc27d0
	adds r0, #190	@ 000c27d0 be30
.org 0xc27d2
	ldrb r0, [r0, #0]	@ 000c27d2 0078
.org 0xc27d4
	cmp r0, #0	@ 000c27d4 0028
.org 0xc27d6
	beq.n 0xc27e6	@ 000c27d6 06d0
.org 0xc27d8
	adds r1, r5, #0	@ 000c27d8 291c
.org 0xc27da
	adds r1, #180	@ 000c27da b431
.org 0xc27dc
	ldr r0, [r1, #0]	@ 000c27dc 0868
.org 0xc27de
	movs r4, #128	@ 000c27de 8024
.org 0xc27e0
	lsls r4, r4, #1	@ 000c27e0 6400
.org 0xc27e2
	adds r0, r0, r4	@ 000c27e2 0019
.org 0xc27e4
	b.n 0xc27ee	@ 000c27e4 03e0
.org 0xc27e6
	adds r1, r5, #0	@ 000c27e6 291c
.org 0xc27e8
	adds r1, #180	@ 000c27e8 b431
.org 0xc27ea
	ldr r0, [r1, #0]	@ 000c27ea 0868
.org 0xc27ec
	adds r0, #128	@ 000c27ec 8030
.org 0xc27ee
	str r0, [r1, #0]	@ 000c27ee 0860
.org 0xc27f0
	ldr r1, [r1, #0]	@ 000c27f0 0968
.org 0xc27f2
	mov ip, r1	@ 000c27f2 8c46
.org 0xc27f4
	mov r0, r9	@ 000c27f4 4846
.org 0xc27f6
	ldr r4, [r0, #84]	@ 000c27f6 446d
.org 0xc27f8
	ldrb r1, [r0, #10]	@ 000c27f8 817a
.org 0xc27fa
	movs r0, #16	@ 000c27fa 1020
.org 0xc27fc
	ands r0, r1	@ 000c27fc 0840
.org 0xc27fe
	cmp r0, #0	@ 000c27fe 0028
.org 0xc2800
	beq.n 0xc2808	@ 000c2800 02d0
.org 0xc2802
	movs r1, #192	@ 000c2802 c021
.org 0xc2804
	lsls r1, r1, #4	@ 000c2804 0901
.org 0xc2806
	b.n 0xc280a	@ 000c2806 00e0
.org 0xc2808
	ldr r1, [pc, #72]	@ 000c2808 1249
.org 0xc280a
	adds r0, r4, r1	@ 000c280a 6018
.org 0xc280c
	adds r6, r0, #0	@ 000c280c 061c
.org 0xc280e
	mov r4, r9	@ 000c280e 4c46
.org 0xc2810
	ldr r0, [r4, #88]	@ 000c2810 a06d
.org 0xc2812
	ldr r1, [pc, #68]	@ 000c2812 1149
.org 0xc2814
	adds r7, r0, r1	@ 000c2814 4718
.org 0xc2816
	mov r0, r8	@ 000c2816 4046
.org 0xc2818
	adds r0, #180	@ 000c2818 b430
.org 0xc281a
	adds r0, #4	@ 000c281a 0430
.org 0xc281c
	ldr r3, [r0, #0]	@ 000c281c 0368
.org 0xc281e
	subs r4, r3, r7	@ 000c281e dc1b
.org 0xc2820
	adds r0, #8	@ 000c2820 0830
.org 0xc2822
	ldr r0, [r0, #0]	@ 000c2822 0068
.org 0xc2824
	mov r8, r0	@ 000c2824 8046
.org 0xc2826
	mov r1, ip	@ 000c2826 6146
.org 0xc2828
	mov r0, r8	@ 000c2828 4046
.org 0xc282a
	muls r0, r1	@ 000c282a 4843
.org 0xc282c
	movs r1, #128	@ 000c282c 8021
.org 0xc282e
	lsls r1, r1, #5	@ 000c282e 4901
.org 0xc2830
	bl 0x128fb8	@ 000c2830 66f0c2fb
.org 0xc2834
	str r0, [sp, #4]	@ 000c2834 0190
.org 0xc2836
	cmp r0, r4	@ 000c2836 a042
.org 0xc2838
	ble.n 0xc2860	@ 000c2838 12dd
.org 0xc283a
	ldr r1, [pc, #32]	@ 000c283a 0849
.org 0xc283c
	ldrb r0, [r5, #9]	@ 000c283c 687a
.org 0xc283e
	lsls r0, r0, #2	@ 000c283e 8000
.org 0xc2840
	adds r0, r0, r1	@ 000c2840 4018
.org 0xc2842
	movs r1, #2	@ 000c2842 0221
.org 0xc2844
	str r1, [r5, #12]	@ 000c2844 e960
.org 0xc2846
	ldr r0, [r0, #0]	@ 000c2846 0068
.org 0xc2848
	ldr r0, [r0, #8]	@ 000c2848 8068
.org 0xc284a
	str r0, [r5, #20]	@ 000c284a 6861
.org 0xc284c
	adds r0, r5, #0	@ 000c284c 281c
.org 0xc284e
	bl 0xc2890	@ 000c284e 00f01ff8
.org 0xc2852
	b.n 0xc287e	@ 000c2852 14e0
.org 0xc2854
	.byte 0x00,0xf4,0xff,0xff	@ 000c2854 data
.org 0xc2858
	.byte 0x00,0xe0,0xff,0xff	@ 000c2858 data
.org 0xc285c
	.byte 0xf4,0x49,0x86,0x08	@ 000c285c data
.org 0xc2860
	lsls r0, r0, #13	@ 000c2860 4003
.org 0xc2862
	mov r1, r8	@ 000c2862 4146
.org 0xc2864
	bl 0x128fb8	@ 000c2864 66f0a8fb
.org 0xc2868
	str r0, [sp, #0]	@ 000c2868 0090
.org 0xc286a
	mov r4, sl	@ 000c286a 5446
.org 0xc286c
	lsls r0, r4, #1	@ 000c286c 6000
.org 0xc286e
	subs r0, #1	@ 000c286e 0138
.org 0xc2870
	ldr r1, [sp, #0]	@ 000c2870 0099
.org 0xc2872
	muls r0, r1	@ 000c2872 4843
.org 0xc2874
	adds r0, r0, r6	@ 000c2874 8019
.org 0xc2876
	str r0, [r5, #84]	@ 000c2876 6865
.org 0xc2878
	ldr r4, [sp, #4]	@ 000c2878 019c
.org 0xc287a
	adds r0, r7, r4	@ 000c287a 3819
.org 0xc287c
	str r0, [r5, #88]	@ 000c287c a865
.org 0xc287e
	add sp, #16	@ 000c287e 04b0
.org 0xc2880
	pop {r3, r4, r5}	@ 000c2880 38bc

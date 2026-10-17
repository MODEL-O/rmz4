@ FUN_080b27d8  entry 0x080b27d8  size 186
.thumb
.org 0xb27d8
FUN_080b27d8:
	push {r4, lr}	@ 000b27d8 10b5
.org 0xb27da
	adds r4, r0, #0	@ 000b27da 041c
.org 0xb27dc
	ldrb r0, [r4, #14]	@ 000b27dc a07b
.org 0xb27de
	cmp r0, #0	@ 000b27de 0028
.org 0xb27e0
	bne.n 0xb2806	@ 000b27e0 11d1
.org 0xb27e2
	movs r2, #128	@ 000b27e2 8022
.org 0xb27e4
	lsls r2, r2, #1	@ 000b27e4 5200
.org 0xb27e6
	str r2, [r4, #92]	@ 000b27e6 e265
.org 0xb27e8
	ldr r0, [pc, #168]	@ 000b27e8 2a48
.org 0xb27ea
	str r0, [r4, #96]	@ 000b27ea 2066
.org 0xb27ec
	ldrb r1, [r4, #10]	@ 000b27ec a17a
.org 0xb27ee
	movs r0, #16	@ 000b27ee 1020
.org 0xb27f0
	ands r0, r1	@ 000b27f0 0840
.org 0xb27f2
	cmp r0, #0	@ 000b27f2 0028
.org 0xb27f4
	bne.n 0xb2800	@ 000b27f4 04d1
.org 0xb27f6
	lsls r0, r2, #8	@ 000b27f6 1002
.org 0xb27f8
	negs r0, r0	@ 000b27f8 4042
.org 0xb27fa
	adds r0, #255	@ 000b27fa ff30
.org 0xb27fc
	asrs r0, r0, #8	@ 000b27fc 0012
.org 0xb27fe
	str r0, [r4, #92]	@ 000b27fe e065
.org 0xb2800
	ldrb r0, [r4, #14]	@ 000b2800 a07b
.org 0xb2802
	adds r0, #1	@ 000b2802 0130
.org 0xb2804
	strb r0, [r4, #14]	@ 000b2804 a073
.org 0xb2806
	ldr r0, [r4, #84]	@ 000b2806 606d
.org 0xb2808
	ldr r1, [r4, #92]	@ 000b2808 e16d
.org 0xb280a
	adds r0, r0, r1	@ 000b280a 4018
.org 0xb280c
	str r0, [r4, #84]	@ 000b280c 6065
.org 0xb280e
	ldr r0, [r4, #88]	@ 000b280e a06d
.org 0xb2810
	ldr r1, [r4, #96]	@ 000b2810 216e
.org 0xb2812
	adds r0, r0, r1	@ 000b2812 4018
.org 0xb2814
	str r0, [r4, #88]	@ 000b2814 a065
.org 0xb2816
	adds r1, #64	@ 000b2816 4031
.org 0xb2818
	str r1, [r4, #96]	@ 000b2818 2166
.org 0xb281a
	adds r0, r4, #0	@ 000b281a 201c
.org 0xb281c
	bl 0xb28a0	@ 000b281c 00f040f8
.org 0xb2820
	lsls r0, r0, #24	@ 000b2820 0006
.org 0xb2822
	cmp r0, #0	@ 000b2822 0028
.org 0xb2824
	beq.n 0xb2844	@ 000b2824 0ed0
.org 0xb2826
	adds r0, r4, #0	@ 000b2826 201c
.org 0xb2828
	bl 0xb29b8	@ 000b2828 00f0c6f8
.org 0xb282c
	movs r0, #53	@ 000b282c 3520
.org 0xb282e
	bl 0x2b10	@ 000b282e 50f76ff9
.org 0xb2832
	ldr r1, [pc, #100]	@ 000b2832 1949
.org 0xb2834
	ldrb r0, [r4, #9]	@ 000b2834 607a
.org 0xb2836
	lsls r0, r0, #2	@ 000b2836 8000
.org 0xb2838
	adds r0, r0, r1	@ 000b2838 4018
.org 0xb283a
	movs r1, #2	@ 000b283a 0221
.org 0xb283c
	str r1, [r4, #12]	@ 000b283c e160
.org 0xb283e
	ldr r0, [r0, #0]	@ 000b283e 0068
.org 0xb2840
	ldr r0, [r0, #8]	@ 000b2840 8068
.org 0xb2842
	str r0, [r4, #20]	@ 000b2842 6061
.org 0xb2844
	ldr r0, [pc, #84]	@ 000b2844 1548
.org 0xb2846
	adds r1, r4, #0	@ 000b2846 211c
.org 0xb2848
	adds r1, #84	@ 000b2848 5431
.org 0xb284a
	bl 0x1fb14	@ 000b284a 6df763f9
.org 0xb284e
	movs r1, #128	@ 000b284e 8021
.org 0xb2850
	lsls r1, r1, #7	@ 000b2850 c901
.org 0xb2852
	cmp r0, r1	@ 000b2852 8842
.org 0xb2854
	bls.n 0xb288c	@ 000b2854 1ad9
.org 0xb2856
	ldrb r1, [r4, #10]	@ 000b2856 a17a
.org 0xb2858
	movs r0, #254	@ 000b2858 fe20
.org 0xb285a
	ands r0, r1	@ 000b285a 0840
.org 0xb285c
	movs r2, #0	@ 000b285c 0022
.org 0xb285e
	movs r1, #253	@ 000b285e fd21
.org 0xb2860
	ands r0, r1	@ 000b2860 0840
.org 0xb2862
	strb r0, [r4, #10]	@ 000b2862 a072
.org 0xb2864
	adds r0, r4, #0	@ 000b2864 201c
.org 0xb2866
	adds r0, #140	@ 000b2866 8c30
.org 0xb2868
	str r2, [r0, #0]	@ 000b2868 0260
.org 0xb286a
	adds r0, #4	@ 000b286a 0430
.org 0xb286c
	str r2, [r0, #0]	@ 000b286c 0260
.org 0xb286e
	adds r0, #4	@ 000b286e 0430
.org 0xb2870
	strb r2, [r0, #0]	@ 000b2870 0270
.org 0xb2872
	ldrb r1, [r4, #10]	@ 000b2872 a17a
.org 0xb2874
	movs r0, #251	@ 000b2874 fb20
.org 0xb2876
	ands r0, r1	@ 000b2876 0840
.org 0xb2878
	strb r0, [r4, #10]	@ 000b2878 a072
.org 0xb287a
	ldr r1, [pc, #28]	@ 000b287a 0749
.org 0xb287c
	ldrb r0, [r4, #9]	@ 000b287c 607a
.org 0xb287e
	lsls r0, r0, #2	@ 000b287e 8000
.org 0xb2880
	adds r0, r0, r1	@ 000b2880 4018
.org 0xb2882
	movs r1, #3	@ 000b2882 0321
.org 0xb2884
	str r1, [r4, #12]	@ 000b2884 e160
.org 0xb2886
	ldr r0, [r0, #0]	@ 000b2886 0068
.org 0xb2888
	ldr r0, [r0, #12]	@ 000b2888 c068
.org 0xb288a
	str r0, [r4, #20]	@ 000b288a 6061
.org 0xb288c
	pop {r4}	@ 000b288c 10bc
.org 0xb288e
	pop {r0}	@ 000b288e 01bc
.org 0xb2890
	bx r0	@ 000b2890 0047

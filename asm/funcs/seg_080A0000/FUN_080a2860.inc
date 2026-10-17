@ FUN_080a2860  entry 0x080a2860  size 168
.thumb
.org 0xa2860
FUN_080a2860:
	push {r4, r5, r6, lr}	@ 000a2860 70b5
.org 0xa2862
	sub sp, #8	@ 000a2862 82b0
.org 0xa2864
	adds r4, r0, #0	@ 000a2864 041c
.org 0xa2866
	ldr r0, [pc, #124]	@ 000a2866 1f48
.org 0xa2868
	ldr r1, [r0, #4]	@ 000a2868 4168
.org 0xa286a
	ldr r0, [r0, #0]	@ 000a286a 0068
.org 0xa286c
	str r0, [sp, #0]	@ 000a286c 0090
.org 0xa286e
	str r1, [sp, #4]	@ 000a286e 0191
.org 0xa2870
	ldr r6, [r4, #40]	@ 000a2870 a66a
.org 0xa2872
	ldrb r5, [r4, #17]	@ 000a2872 657c
.org 0xa2874
	ldrb r0, [r4, #15]	@ 000a2874 e07b
.org 0xa2876
	cmp r0, #0	@ 000a2876 0028
.org 0xa2878
	bne.n 0xa28a4	@ 000a2878 14d1
.org 0xa287a
	adds r1, r4, #0	@ 000a287a 211c
.org 0xa287c
	adds r1, #37	@ 000a287c 2531
.org 0xa287e
	movs r0, #25	@ 000a287e 1920
.org 0xa2880
	strb r0, [r1, #0]	@ 000a2880 0870
.org 0xa2882
	adds r0, r4, #0	@ 000a2882 201c
.org 0xa2884
	adds r0, #116	@ 000a2884 7430
.org 0xa2886
	ldr r1, [pc, #96]	@ 000a2886 1849
.org 0xa2888
	bl 0x5784	@ 000a2888 62f77cff
.org 0xa288c
	movs r1, #132	@ 000a288c 8421
.org 0xa288e
	lsls r1, r1, #8	@ 000a288e 0902
.org 0xa2890
	adds r0, r4, #0	@ 000a2890 201c
.org 0xa2892
	bl 0x1cf00	@ 000a2892 7af735fb
.org 0xa2896
	lsls r0, r5, #2	@ 000a2896 a800
.org 0xa2898
	add r0, sp	@ 000a2898 6844
.org 0xa289a
	ldr r0, [r0, #0]	@ 000a289a 0068
.org 0xa289c
	str r0, [r4, #100]	@ 000a289c 6066
.org 0xa289e
	ldrb r0, [r4, #15]	@ 000a289e e07b
.org 0xa28a0
	adds r0, #1	@ 000a28a0 0130
.org 0xa28a2
	strb r0, [r4, #15]	@ 000a28a2 e073
.org 0xa28a4
	ldrb r0, [r6, #12]	@ 000a28a4 307b
.org 0xa28a6
	cmp r0, #1	@ 000a28a6 0128
.org 0xa28a8
	bls.n 0xa28f0	@ 000a28a8 22d9
.org 0xa28aa
	ldrb r1, [r4, #10]	@ 000a28aa a17a
.org 0xa28ac
	movs r0, #254	@ 000a28ac fe20
.org 0xa28ae
	ands r0, r1	@ 000a28ae 0840
.org 0xa28b0
	movs r2, #0	@ 000a28b0 0022
.org 0xa28b2
	movs r1, #253	@ 000a28b2 fd21
.org 0xa28b4
	ands r0, r1	@ 000a28b4 0840
.org 0xa28b6
	strb r0, [r4, #10]	@ 000a28b6 a072
.org 0xa28b8
	adds r0, r4, #0	@ 000a28b8 201c
.org 0xa28ba
	adds r0, #140	@ 000a28ba 8c30
.org 0xa28bc
	str r2, [r0, #0]	@ 000a28bc 0260
.org 0xa28be
	adds r0, #4	@ 000a28be 0430
.org 0xa28c0
	str r2, [r0, #0]	@ 000a28c0 0260
.org 0xa28c2
	adds r0, #4	@ 000a28c2 0430
.org 0xa28c4
	strb r2, [r0, #0]	@ 000a28c4 0270
.org 0xa28c6
	ldrb r1, [r4, #10]	@ 000a28c6 a17a
.org 0xa28c8
	movs r0, #251	@ 000a28c8 fb20
.org 0xa28ca
	ands r0, r1	@ 000a28ca 0840
.org 0xa28cc
	strb r0, [r4, #10]	@ 000a28cc a072
.org 0xa28ce
	ldr r1, [pc, #28]	@ 000a28ce 0749
.org 0xa28d0
	ldrb r0, [r4, #9]	@ 000a28d0 607a
.org 0xa28d2
	lsls r0, r0, #2	@ 000a28d2 8000
.org 0xa28d4
	adds r0, r0, r1	@ 000a28d4 4018
.org 0xa28d6
	movs r1, #3	@ 000a28d6 0321
.org 0xa28d8
	str r1, [r4, #12]	@ 000a28d8 e160
.org 0xa28da
	ldr r0, [r0, #0]	@ 000a28da 0068
.org 0xa28dc
	ldr r0, [r0, #12]	@ 000a28dc c068
.org 0xa28de
	str r0, [r4, #20]	@ 000a28de 6061
.org 0xa28e0
	b.n 0xa290e	@ 000a28e0 15e0
.org 0xa28e2
	.byte 0x00	@ 000a28e2 data
.org 0xa28e3
	.byte 0x00	@ 000a28e3 data
.org 0xa28e4
	.byte 0x1c,0x9d,0x12,0x08	@ 000a28e4 data
.org 0xa28e8
	.byte 0x28,0x1d,0x86,0x08	@ 000a28e8 data
.org 0xa28ec
	.byte 0x40,0xdb,0x85,0x08	@ 000a28ec data
.org 0xa28f0
	adds r0, r4, #0	@ 000a28f0 201c
.org 0xa28f2
	bl 0x1cff0	@ 000a28f2 7af77dfb
.org 0xa28f6
	ldr r0, [r4, #44]	@ 000a28f6 e06a
.org 0xa28f8
	cmp r0, #0	@ 000a28f8 0028
.org 0xa28fa
	bne.n 0xa290e	@ 000a28fa 08d1
.org 0xa28fc
	ldr r0, [r4, #100]	@ 000a28fc 606e
.org 0xa28fe
	subs r1, r0, #1	@ 000a28fe 411e
.org 0xa2900
	str r1, [r4, #100]	@ 000a2900 6166
.org 0xa2902
	cmp r1, #0	@ 000a2902 0029
.org 0xa2904
	bne.n 0xa290e	@ 000a2904 03d1
.org 0xa2906
	movs r0, #1	@ 000a2906 0120

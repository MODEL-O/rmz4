@ FUN_08030794  entry 0x08030794  size 328
.thumb
.org 0x30794
FUN_08030794:
	push {r4, r5, r6, r7, lr}	@ 00030794 f0b5
.org 0x30796
	adds r6, r0, #0	@ 00030796 061c
.org 0x30798
	ldrb r0, [r6, #14]	@ 00030798 b07b
.org 0x3079a
	cmp r0, #0	@ 0003079a 0028
.org 0x3079c
	bne.n 0x30824	@ 0003079c 42d1
.org 0x3079e
	adds r7, r6, #0	@ 0003079e 371c
.org 0x307a0
	adds r7, #180	@ 000307a0 b437
.org 0x307a2
	adds r0, r6, #0	@ 000307a2 301c
.org 0x307a4
	adds r0, #252	@ 000307a4 fc30
.org 0x307a6
	ldrb r5, [r0, #0]	@ 000307a6 0578
.org 0x307a8
	cmp r5, #0	@ 000307a8 002d
.org 0x307aa
	bne.n 0x30824	@ 000307aa 3bd1
.org 0x307ac
	subs r0, #88	@ 000307ac 5838
.org 0x307ae
	movs r1, #0	@ 000307ae 0021
.org 0x307b0
	ldrsh r4, [r0, r1]	@ 000307b0 445e
.org 0x307b2
	adds r0, r6, #0	@ 000307b2 301c
.org 0x307b4
	bl 0x2b61c	@ 000307b4 faf732ff
.org 0x307b8
	lsls r0, r0, #24	@ 000307b8 0006
.org 0x307ba
	lsrs r0, r0, #24	@ 000307ba 000e
.org 0x307bc
	cmp r4, r0	@ 000307bc 8442
.org 0x307be
	bge.n 0x30824	@ 000307be 31da
.org 0x307c0
	movs r1, #128	@ 000307c0 8021
.org 0x307c2
	lsls r1, r1, #1	@ 000307c2 4900
.org 0x307c4
	adds r0, r6, r1	@ 000307c4 7018
.org 0x307c6
	ldrb r0, [r0, #0]	@ 000307c6 0078
.org 0x307c8
	adds r1, #64	@ 000307c8 4031
.org 0x307ca
	adds r2, r6, r1	@ 000307ca 7218
.org 0x307cc
	cmp r0, #3	@ 000307cc 0328
.org 0x307ce
	bne.n 0x307d2	@ 000307ce 00d1
.org 0x307d0
	strh r5, [r2, #0]	@ 000307d0 1580
.org 0x307d2
	ldr r1, [pc, #36]	@ 000307d2 0949
.org 0x307d4
	adds r0, r6, r1	@ 000307d4 7018
.org 0x307d6
	ldrh r1, [r0, #0]	@ 000307d6 0188
.org 0x307d8
	movs r0, #128	@ 000307d8 8020
.org 0x307da
	lsls r0, r0, #8	@ 000307da 0002
.org 0x307dc
	ands r0, r1	@ 000307dc 0840
.org 0x307de
	cmp r0, #0	@ 000307de 0028
.org 0x307e0
	bne.n 0x307e8	@ 000307e0 02d1
.org 0x307e2
	ldrh r0, [r2, #0]	@ 000307e2 1088
.org 0x307e4
	adds r0, #1	@ 000307e4 0130
.org 0x307e6
	strh r0, [r2, #0]	@ 000307e6 1080
.org 0x307e8
	ldrb r0, [r7, #16]	@ 000307e8 387c
.org 0x307ea
	cmp r0, #1	@ 000307ea 0128
.org 0x307ec
	bne.n 0x307fc	@ 000307ec 06d1
.org 0x307ee
	ldrh r0, [r2, #0]	@ 000307ee 1088
.org 0x307f0
	cmp r0, #210	@ 000307f0 d228
.org 0x307f2
	bls.n 0x3082e	@ 000307f2 1cd9
.org 0x307f4
	b.n 0x30812	@ 000307f4 0de0
.org 0x307f6
	.byte 0x00	@ 000307f6 data
.org 0x307f7
	.byte 0x00	@ 000307f7 data
.org 0x307f8
	.byte 0x52,0x02,0x00,0x00	@ 000307f8 data
.org 0x307fc
	cmp r0, #2	@ 000307fc 0228
.org 0x307fe
	bne.n 0x30808	@ 000307fe 03d1
.org 0x30800
	ldrh r0, [r2, #0]	@ 00030800 1088
.org 0x30802
	cmp r0, #180	@ 00030802 b428
.org 0x30804
	bls.n 0x3082e	@ 00030804 13d9
.org 0x30806
	b.n 0x30812	@ 00030806 04e0
.org 0x30808
	cmp r0, #3	@ 00030808 0328
.org 0x3080a
	bne.n 0x3081a	@ 0003080a 06d1
.org 0x3080c
	ldrh r0, [r2, #0]	@ 0003080c 1088
.org 0x3080e
	cmp r0, #150	@ 0003080e 9628
.org 0x30810
	bls.n 0x3082e	@ 00030810 0dd9
.org 0x30812
	ldr r1, [pc, #12]	@ 00030812 0349
.org 0x30814
	ldr r0, [r1, #0]	@ 00030814 0868
.org 0x30816
	adds r0, #4	@ 00030816 0430
.org 0x30818
	str r0, [r1, #0]	@ 00030818 0860
.org 0x3081a
	strh r5, [r2, #0]	@ 0003081a 1580
.org 0x3081c
	b.n 0x3082e	@ 0003081c 07e0
.org 0x3081e
	.byte 0x00	@ 0003081e data
.org 0x3081f
	.byte 0x00	@ 0003081f data
.org 0x30820
	.byte 0x30,0xdc,0x02,0x02	@ 00030820 data
.org 0x30824
	movs r0, #160	@ 00030824 a020
.org 0x30826
	lsls r0, r0, #1	@ 00030826 4000
.org 0x30828
	adds r1, r6, r0	@ 00030828 3118
.org 0x3082a
	movs r0, #0	@ 0003082a 0020
.org 0x3082c
	strh r0, [r1, #0]	@ 0003082c 0880
.org 0x3082e
	movs r0, #0	@ 0003082e 0020
.org 0x30830
	str r0, [r6, #96]	@ 00030830 3066
.org 0x30832
	movs r1, #161	@ 00030832 a121
.org 0x30834
	lsls r1, r1, #1	@ 00030834 4900
.org 0x30836
	adds r2, r6, r1	@ 00030836 7218
.org 0x30838
	ldrb r1, [r2, #0]	@ 00030838 1178
.org 0x3083a
	subs r0, #3	@ 0003083a 0338
.org 0x3083c
	ands r0, r1	@ 0003083c 0840
.org 0x3083e
	strb r0, [r2, #0]	@ 0003083e 1070
.org 0x30840
	ldr r0, [pc, #132]	@ 00030840 2148
.org 0x30842
	adds r1, r6, r0	@ 00030842 3118
.org 0x30844
	movs r0, #1	@ 00030844 0120
.org 0x30846
	strb r0, [r1, #0]	@ 00030846 0870
.org 0x30848
	ldr r1, [pc, #128]	@ 00030848 2049
.org 0x3084a
	ldrb r0, [r6, #14]	@ 0003084a b07b
.org 0x3084c
	lsls r0, r0, #2	@ 0003084c 8000
.org 0x3084e
	adds r0, r0, r1	@ 0003084e 4018
.org 0x30850
	ldr r1, [r0, #0]	@ 00030850 0168
.org 0x30852
	adds r0, r6, #0	@ 00030852 301c
.org 0x30854
	bl 0x128f80	@ 00030854 f8f094fb
.org 0x30858
	ldr r0, [r6, #84]	@ 00030858 706d
.org 0x3085a
	ldr r1, [r6, #92]	@ 0003085a f16d
.org 0x3085c
	adds r0, r0, r1	@ 0003085c 4018
.org 0x3085e
	str r0, [r6, #84]	@ 0003085e 7065
.org 0x30860
	movs r1, #186	@ 00030860 ba21
.org 0x30862
	lsls r1, r1, #1	@ 00030862 4900
.org 0x30864
	adds r5, r6, r1	@ 00030864 7518
.org 0x30866
	ldrb r1, [r5, #0]	@ 00030866 2978
.org 0x30868
	lsls r1, r1, #3	@ 00030868 c900
.org 0x3086a
	ldr r4, [pc, #100]	@ 0003086a 194c
.org 0x3086c
	adds r1, r1, r4	@ 0003086c 0919
.org 0x3086e
	adds r0, r6, #0	@ 0003086e 301c
.org 0x30870
	movs r2, #0	@ 00030870 0022
.org 0x30872
	bl 0x2b7f0	@ 00030872 faf7bdff
.org 0x30876
	ldrb r1, [r5, #0]	@ 00030876 2978
.org 0x30878
	lsls r1, r1, #3	@ 00030878 c900
.org 0x3087a
	adds r1, r1, r4	@ 0003087a 0919
.org 0x3087c
	adds r0, r6, #0	@ 0003087c 301c
.org 0x3087e
	movs r2, #1	@ 0003087e 0122
.org 0x30880
	bl 0x2b7f0	@ 00030880 faf7b6ff
.org 0x30884
	ldrb r1, [r5, #0]	@ 00030884 2978
.org 0x30886
	lsls r1, r1, #3	@ 00030886 c900
.org 0x30888
	adds r1, r1, r4	@ 00030888 0919
.org 0x3088a
	adds r0, r6, #0	@ 0003088a 301c
.org 0x3088c
	movs r2, #0	@ 0003088c 0022
.org 0x3088e
	bl 0x2baf0	@ 0003088e fbf72ff9
.org 0x30892
	ldrb r1, [r5, #0]	@ 00030892 2978
.org 0x30894
	lsls r1, r1, #3	@ 00030894 c900
.org 0x30896
	adds r1, r1, r4	@ 00030896 0919
.org 0x30898
	adds r0, r6, #0	@ 00030898 301c
.org 0x3089a
	movs r2, #0	@ 0003089a 0022
.org 0x3089c
	bl 0x2c2d4	@ 0003089c fbf71afd
.org 0x308a0
	lsls r0, r0, #16	@ 000308a0 0004
.org 0x308a2
	movs r1, #240	@ 000308a2 f021
.org 0x308a4
	lsls r1, r1, #12	@ 000308a4 0903
.org 0x308a6
	ands r1, r0	@ 000308a6 0140
.org 0x308a8
	cmp r1, #0	@ 000308a8 0029
.org 0x308aa
	bne.n 0x308ee	@ 000308aa 20d1
.org 0x308ac
	ldrb r0, [r6, #14]	@ 000308ac b07b
.org 0x308ae
	cmp r0, #1	@ 000308ae 0128
.org 0x308b0
	bne.n 0x308e2	@ 000308b0 17d1
.org 0x308b2
	ldrb r1, [r6, #10]	@ 000308b2 b17a
.org 0x308b4
	movs r0, #16	@ 000308b4 1020
.org 0x308b6
	ands r0, r1	@ 000308b6 0840
.org 0x308b8
	cmp r0, #0	@ 000308b8 0028
.org 0x308ba
	beq.n 0x308d4	@ 000308ba 0bd0
.org 0x308bc
	adds r0, r6, #0	@ 000308bc 301c
.org 0x308be
	bl 0x386d4	@ 000308be 07f009ff
.org 0x308c2
	lsls r0, r0, #16	@ 000308c2 0004
.org 0x308c4
	asrs r0, r0, #16	@ 000308c4 0014
.org 0x308c6
	b.n 0x308e0	@ 000308c6 0be0
.org 0x308c8
	.byte 0xb9,0x01,0x00,0x00	@ 000308c8 data
.org 0x308cc
	.byte 0xec,0x2e,0x85,0x08	@ 000308cc data
.org 0x308d0
	.byte 0x6c,0x33,0x85,0x08	@ 000308d0 data
.org 0x308d4
	adds r0, r6, #0	@ 000308d4 301c
.org 0x308d6
	bl 0x386d4	@ 000308d6 07f0fdfe
.org 0x308da
	lsls r0, r0, #16	@ 000308da 0004

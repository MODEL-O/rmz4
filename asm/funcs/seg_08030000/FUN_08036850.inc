@ FUN_08036850  entry 0x08036850  size 144
.thumb
.org 0x36850
FUN_08036850:
	push {r4, r5, lr}	@ 00036850 30b5
.org 0x36852
	adds r4, r0, #0	@ 00036852 041c
.org 0x36854
	movs r0, #129	@ 00036854 8120
.org 0x36856
	lsls r0, r0, #1	@ 00036856 4000
.org 0x36858
	adds r5, r4, r0	@ 00036858 2518
.org 0x3685a
	ldrb r0, [r5, #0]	@ 0003685a 2878
.org 0x3685c
	cmp r0, #0	@ 0003685c 0028
.org 0x3685e
	bne.n 0x3686e	@ 0003685e 06d1
.org 0x36860
	ldr r1, [pc, #68]	@ 00036860 1149
.org 0x36862
	adds r0, r4, #0	@ 00036862 201c
.org 0x36864
	bl 0x1cf00	@ 00036864 e6f74cfb
.org 0x36868
	ldrb r0, [r5, #0]	@ 00036868 2878
.org 0x3686a
	adds r0, #1	@ 0003686a 0130
.org 0x3686c
	strb r0, [r5, #0]	@ 0003686c 2870
.org 0x3686e
	ldr r1, [pc, #60]	@ 0003686e 0f49
.org 0x36870
	adds r2, r4, r1	@ 00036870 6218
.org 0x36872
	ldrb r0, [r2, #0]	@ 00036872 1078
.org 0x36874
	movs r1, #8	@ 00036874 0821
.org 0x36876
	orrs r0, r1	@ 00036876 0843
.org 0x36878
	strb r0, [r2, #0]	@ 00036878 1070
.org 0x3687a
	movs r0, #162	@ 0003687a a220
.org 0x3687c
	lsls r0, r0, #1	@ 0003687c 4000
.org 0x3687e
	adds r1, r4, r0	@ 0003687e 2118
.org 0x36880
	adds r0, r4, #0	@ 00036880 201c
.org 0x36882
	bl 0x39fd8	@ 00036882 03f0a9fb
.org 0x36886
	lsls r0, r0, #24	@ 00036886 0006
.org 0x36888
	cmp r0, #0	@ 00036888 0028
.org 0x3688a
	beq.n 0x368b0	@ 0003688a 11d0
.org 0x3688c
	movs r1, #128	@ 0003688c 8021
.org 0x3688e
	lsls r1, r1, #1	@ 0003688e 4900
.org 0x36890
	adds r0, r4, r1	@ 00036890 6018
.org 0x36892
	movs r2, #0	@ 00036892 0022
.org 0x36894
	movs r1, #3	@ 00036894 0321
.org 0x36896
	strb r1, [r0, #0]	@ 00036896 0170
.org 0x36898
	adds r1, #254	@ 00036898 fe31
.org 0x3689a
	adds r0, r4, r1	@ 0003689a 6018
.org 0x3689c
	strb r2, [r0, #0]	@ 0003689c 0270
.org 0x3689e
	adds r0, r4, #0	@ 0003689e 201c
.org 0x368a0
	bl 0x35b7c	@ 000368a0 fff76cf9
.org 0x368a4
	b.n 0x368ea	@ 000368a4 21e0
.org 0x368a6
	.byte 0x00	@ 000368a6 data
.org 0x368a7
	.byte 0x00	@ 000368a7 data
.org 0x368a8
	.byte 0x02,0x21,0x00,0x00	@ 000368a8 data
.org 0x368ac
	.byte 0x53,0x01,0x00,0x00	@ 000368ac data
.org 0x368b0
	adds r0, r4, #0	@ 000368b0 201c
.org 0x368b2
	adds r0, #115	@ 000368b2 7330
.org 0x368b4
	ldrb r0, [r0, #0]	@ 000368b4 0078
.org 0x368b6
	cmp r0, #3	@ 000368b6 0328
.org 0x368b8
	bne.n 0x368ea	@ 000368b8 17d1
.org 0x368ba
	ldrb r0, [r4, #14]	@ 000368ba a07b
.org 0x368bc
	cmp r0, #1	@ 000368bc 0128
.org 0x368be
	bne.n 0x368d4	@ 000368be 09d1
.org 0x368c0
	ldr r1, [pc, #12]	@ 000368c0 0349
.org 0x368c2
	adds r0, r4, #0	@ 000368c2 201c
.org 0x368c4
	movs r2, #2	@ 000368c4 0222
.org 0x368c6
	movs r3, #1	@ 000368c6 0123
.org 0x368c8
	bl 0x1cfc8	@ 000368c8 e6f77efb
.org 0x368cc
	b.n 0x368e0	@ 000368cc 08e0
.org 0x368ce
	.byte 0x00	@ 000368ce data
.org 0x368cf
	.byte 0x00	@ 000368cf data
.org 0x368d0
	.byte 0x03,0x04,0x00,0x00	@ 000368d0 data
.org 0x368d4
	ldr r1, [pc, #24]	@ 000368d4 0649
.org 0x368d6
	adds r0, r4, #0	@ 000368d6 201c
.org 0x368d8
	movs r2, #2	@ 000368d8 0222
.org 0x368da
	movs r3, #1	@ 000368da 0123
.org 0x368dc
	bl 0x1cfc8	@ 000368dc e6f774fb

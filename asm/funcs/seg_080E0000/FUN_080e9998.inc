@ FUN_080e9998  entry 0x080e9998  size 316
.thumb
.org 0xe9998
FUN_080e9998:
	push {r4, r5, r6, lr}	@ 000e9998 70b5
.org 0xe999a
	adds r6, r0, #0	@ 000e999a 061c
.org 0xe999c
	bl 0x1cc9c	@ 000e999c 33f77ef9
.org 0xe99a0
	ldr r0, [pc, #16]	@ 000e99a0 0448
.org 0xe99a2
	ldrb r1, [r0, #20]	@ 000e99a2 017d
.org 0xe99a4
	movs r0, #64	@ 000e99a4 4020
.org 0xe99a6
	ands r0, r1	@ 000e99a6 0840
.org 0xe99a8
	cmp r0, #0	@ 000e99a8 0028
.org 0xe99aa
	bne.n 0xe99b8	@ 000e99aa 05d1
.org 0xe99ac
	adds r1, r6, #0	@ 000e99ac 311c
.org 0xe99ae
	adds r1, #184	@ 000e99ae b831
.org 0xe99b0
	movs r0, #18	@ 000e99b0 1220
.org 0xe99b2
	b.n 0xe99be	@ 000e99b2 04e0
.org 0xe99b4
	.byte 0xb0,0xe8,0x02,0x02	@ 000e99b4 data
.org 0xe99b8
	adds r1, r6, #0	@ 000e99b8 311c
.org 0xe99ba
	adds r1, #184	@ 000e99ba b831
.org 0xe99bc
	movs r0, #19	@ 000e99bc 1320
.org 0xe99be
	strb r0, [r1, #0]	@ 000e99be 0870
.org 0xe99c0
	adds r4, r1, #0	@ 000e99c0 0c1c
.org 0xe99c2
	ldrb r5, [r6, #17]	@ 000e99c2 757c
.org 0xe99c4
	cmp r5, #0	@ 000e99c4 002d
.org 0xe99c6
	bne.n 0xe9a84	@ 000e99c6 5dd1
.org 0xe99c8
	ldr r0, [pc, #156]	@ 000e99c8 2748
.org 0xe99ca
	ldr r0, [r0, #0]	@ 000e99ca 0068
.org 0xe99cc
	bl 0x5500	@ 000e99cc 1bf798fd
.org 0xe99d0
	adds r3, r0, #0	@ 000e99d0 031c
.org 0xe99d2
	cmp r3, #0	@ 000e99d2 002b
.org 0xe99d4
	bne.n 0xe99d8	@ 000e99d4 00d1
.org 0xe99d6
	b.n 0xe9aee	@ 000e99d6 8ae0
.org 0xe99d8
	ldr r0, [r6, #84]	@ 000e99d8 706d
.org 0xe99da
	movs r1, #128	@ 000e99da 8021
.org 0xe99dc
	lsls r1, r1, #4	@ 000e99dc 0901
.org 0xe99de
	adds r0, r0, r1	@ 000e99de 4018
.org 0xe99e0
	str r0, [r6, #84]	@ 000e99e0 7065
.org 0xe99e2
	ldr r0, [r6, #88]	@ 000e99e2 b06d
.org 0xe99e4
	movs r2, #144	@ 000e99e4 9022
.org 0xe99e6
	lsls r2, r2, #4	@ 000e99e6 1201
.org 0xe99e8
	adds r0, r0, r2	@ 000e99e8 8018
.org 0xe99ea
	str r0, [r6, #88]	@ 000e99ea b065
.org 0xe99ec
	adds r1, r3, #0	@ 000e99ec 191c
.org 0xe99ee
	adds r1, #37	@ 000e99ee 2531
.org 0xe99f0
	movs r0, #30	@ 000e99f0 1e20
.org 0xe99f2
	strb r0, [r1, #0]	@ 000e99f2 0870
.org 0xe99f4
	ldr r0, [pc, #116]	@ 000e99f4 1d48
.org 0xe99f6
	movs r2, #1	@ 000e99f6 0122
.org 0xe99f8
	strb r2, [r3, #9]	@ 000e99f8 5a72
.org 0xe99fa
	ldr r0, [r0, #4]	@ 000e99fa 4068
.org 0xe99fc
	ldr r0, [r0, #0]	@ 000e99fc 0068
.org 0xe99fe
	str r0, [r3, #20]	@ 000e99fe 5861
.org 0xe9a00
	movs r0, #0	@ 000e9a00 0020
.org 0xe9a02
	strh r5, [r3, #32]	@ 000e9a02 1d84
.org 0xe9a04
	subs r1, #3	@ 000e9a04 0339
.org 0xe9a06
	strb r0, [r1, #0]	@ 000e9a06 0870
.org 0xe9a08
	ldrb r1, [r3, #11]	@ 000e9a08 d97a
.org 0xe9a0a
	movs r0, #16	@ 000e9a0a 1020
.org 0xe9a0c
	orrs r0, r1	@ 000e9a0c 0843
.org 0xe9a0e
	strb r0, [r3, #11]	@ 000e9a0e d872
.org 0xe9a10
	ldrb r0, [r3, #28]	@ 000e9a10 187f
.org 0xe9a12
	strb r0, [r3, #29]	@ 000e9a12 5877
.org 0xe9a14
	strb r2, [r3, #17]	@ 000e9a14 5a74
.org 0xe9a16
	str r6, [r3, #40]	@ 000e9a16 9e62
.org 0xe9a18
	ldr r0, [r6, #84]	@ 000e9a18 706d
.org 0xe9a1a
	ldr r1, [pc, #84]	@ 000e9a1a 1549
.org 0xe9a1c
	adds r0, r0, r1	@ 000e9a1c 4018
.org 0xe9a1e
	str r0, [r3, #84]	@ 000e9a1e 5865
.org 0xe9a20
	ldr r0, [r6, #88]	@ 000e9a20 b06d
.org 0xe9a22
	str r0, [r3, #88]	@ 000e9a22 9865
.org 0xe9a24
	ldrb r4, [r4, #0]	@ 000e9a24 2478
.org 0xe9a26
	lsls r5, r4, #2	@ 000e9a26 a500
.org 0xe9a28
	adds r5, r5, r4	@ 000e9a28 2d19
.org 0xe9a2a
	lsls r5, r5, #2	@ 000e9a2a ad00
.org 0xe9a2c
	ldr r0, [pc, #68]	@ 000e9a2c 1148
.org 0xe9a2e
	adds r0, r5, r0	@ 000e9a2e 2818
.org 0xe9a30
	ldr r1, [pc, #68]	@ 000e9a30 1149
.org 0xe9a32
	lsls r4, r4, #1	@ 000e9a32 6400
.org 0xe9a34
	adds r1, r4, r1	@ 000e9a34 6118
.org 0xe9a36
	ldrh r1, [r1, #0]	@ 000e9a36 0988
.org 0xe9a38
	ldrh r2, [r0, #6]	@ 000e9a38 c288
.org 0xe9a3a
	lsrs r2, r2, #6	@ 000e9a3a 9209
.org 0xe9a3c
	subs r1, r1, r2	@ 000e9a3c 891a
.org 0xe9a3e
	lsls r1, r1, #5	@ 000e9a3e 4901
.org 0xe9a40
	movs r2, #128	@ 000e9a40 8022
.org 0xe9a42
	lsls r2, r2, #9	@ 000e9a42 5202
.org 0xe9a44
	adds r1, r1, r2	@ 000e9a44 8918
.org 0xe9a46
	bl 0x1d30	@ 000e9a46 18f773f9
.org 0xe9a4a
	ldr r0, [pc, #48]	@ 000e9a4a 0c48
.org 0xe9a4c
	adds r5, r5, r0	@ 000e9a4c 2d18
.org 0xe9a4e
	ldr r0, [pc, #48]	@ 000e9a4e 0c48
.org 0xe9a50
	adds r4, r4, r0	@ 000e9a50 2418
.org 0xe9a52
	ldrh r1, [r4, #0]	@ 000e9a52 2188
.org 0xe9a54
	ldrb r0, [r5, #7]	@ 000e9a54 e879
.org 0xe9a56
	subs r1, r1, r0	@ 000e9a56 091a
.org 0xe9a58
	lsls r1, r1, #5	@ 000e9a58 4901
.org 0xe9a5a
	movs r2, #128	@ 000e9a5a 8022
.org 0xe9a5c
	lsls r2, r2, #2	@ 000e9a5c 9200
.org 0xe9a5e
	adds r1, r1, r2	@ 000e9a5e 8918
.org 0xe9a60
	adds r0, r5, #0	@ 000e9a60 281c
.org 0xe9a62
	bl 0x2208	@ 000e9a62 18f7d1fb
.org 0xe9a66
	b.n 0xe9ab6	@ 000e9a66 26e0
.org 0xe9a68
	.byte 0xa0,0xed,0x02,0x02	@ 000e9a68 data
.org 0xe9a6c
	.byte 0xfc,0x92,0x86,0x08	@ 000e9a6c data
.org 0xe9a70
	.byte 0x00,0xff,0xff,0xff	@ 000e9a70 data
.org 0xe9a74
	.byte 0x00,0x40,0xc4,0x08	@ 000e9a74 data
.org 0xe9a78
	.byte 0x40,0xe0,0x02,0x02	@ 000e9a78 data
.org 0xe9a7c
	.byte 0x0c,0x40,0xc4,0x08	@ 000e9a7c data
.org 0xe9a80
	.byte 0x40,0xde,0x02,0x02	@ 000e9a80 data
.org 0xe9a84
	ldrb r1, [r4, #0]	@ 000e9a84 2178
.org 0xe9a86
	lsls r1, r1, #8	@ 000e9a86 0902
.org 0xe9a88
	adds r0, r6, #0	@ 000e9a88 301c
.org 0xe9a8a
	bl 0x1cf00	@ 000e9a8a 33f739fa
.org 0xe9a8e
	adds r0, r6, #0	@ 000e9a8e 301c
.org 0xe9a90
	bl 0x1cff0	@ 000e9a90 33f7aefa
.org 0xe9a94
	movs r2, #1	@ 000e9a94 0122
.org 0xe9a96
	ldrb r1, [r6, #10]	@ 000e9a96 b17a
.org 0xe9a98
	movs r0, #16	@ 000e9a98 1020
.org 0xe9a9a
	orrs r0, r1	@ 000e9a9a 0843
.org 0xe9a9c
	strb r0, [r6, #10]	@ 000e9a9c b072
.org 0xe9a9e
	adds r0, r6, #0	@ 000e9a9e 301c
.org 0xe9aa0
	adds r0, #76	@ 000e9aa0 4c30
.org 0xe9aa2
	strb r2, [r0, #0]	@ 000e9aa2 0270
.org 0xe9aa4
	adds r3, r6, #0	@ 000e9aa4 331c
.org 0xe9aa6
	adds r3, #74	@ 000e9aa6 4a33
.org 0xe9aa8
	movs r2, #16	@ 000e9aa8 1022
.org 0xe9aaa
	ldrb r1, [r3, #0]	@ 000e9aaa 1978
.org 0xe9aac
	movs r0, #17	@ 000e9aac 1120
.org 0xe9aae
	negs r0, r0	@ 000e9aae 4042
.org 0xe9ab0
	ands r0, r1	@ 000e9ab0 0840
.org 0xe9ab2
	orrs r0, r2	@ 000e9ab2 1043
.org 0xe9ab4
	strb r0, [r3, #0]	@ 000e9ab4 1870
.org 0xe9ab6
	adds r2, r6, #0	@ 000e9ab6 321c
.org 0xe9ab8
	adds r2, #73	@ 000e9ab8 4932
.org 0xe9aba
	ldrb r1, [r2, #0]	@ 000e9aba 1178
.org 0xe9abc
	movs r0, #13	@ 000e9abc 0d20
.org 0xe9abe
	negs r0, r0	@ 000e9abe 4042
.org 0xe9ac0
	ands r0, r1	@ 000e9ac0 0840
.org 0xe9ac2
	movs r1, #4	@ 000e9ac2 0421
.org 0xe9ac4
	orrs r0, r1	@ 000e9ac4 0843
.org 0xe9ac6
	strb r0, [r2, #0]	@ 000e9ac6 1070
.org 0xe9ac8
	ldrb r1, [r6, #10]	@ 000e9ac8 b17a
.org 0xe9aca
	movs r0, #1	@ 000e9aca 0120
.org 0xe9acc
	movs r2, #0	@ 000e9acc 0022
.org 0xe9ace
	orrs r0, r1	@ 000e9ace 0843
.org 0xe9ad0
	strb r0, [r6, #10]	@ 000e9ad0 b072
.org 0xe9ad2
	ldr r1, [pc, #32]	@ 000e9ad2 0849

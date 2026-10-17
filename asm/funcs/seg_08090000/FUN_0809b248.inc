@ FUN_0809b248  entry 0x0809b248  size 186
.thumb
.org 0x9b248
FUN_0809b248:
	push {r4, lr}	@ 0009b248 10b5
.org 0x9b24a
	adds r4, r0, #0	@ 0009b24a 041c
.org 0x9b24c
	ldrb r0, [r4, #15]	@ 0009b24c e07b
.org 0x9b24e
	cmp r0, #0	@ 0009b24e 0028
.org 0x9b250
	bne.n 0x9b282	@ 0009b250 17d1
.org 0x9b252
	adds r1, r4, #0	@ 0009b252 211c
.org 0x9b254
	adds r1, #183	@ 0009b254 b731
.org 0x9b256
	movs r0, #1	@ 0009b256 0120
.org 0x9b258
	strb r0, [r1, #0]	@ 0009b258 0870
.org 0x9b25a
	adds r0, r4, #0	@ 0009b25a 201c
.org 0x9b25c
	adds r0, #116	@ 0009b25c 7430
.org 0x9b25e
	ldr r1, [pc, #76]	@ 0009b25e 1349
.org 0x9b260
	ldr r1, [r1, #4]	@ 0009b260 4968
.org 0x9b262
	bl 0x5784	@ 0009b262 6af78ffa
.org 0x9b266
	ldr r1, [pc, #72]	@ 0009b266 1249
.org 0x9b268
	adds r0, r4, #0	@ 0009b268 201c
.org 0x9b26a
	bl 0x1cf00	@ 0009b26a 81f749fe
.org 0x9b26e
	ldr r0, [r4, #88]	@ 0009b26e a06d
.org 0x9b270
	str r0, [r4, #104]	@ 0009b270 a066
.org 0x9b272
	movs r0, #128	@ 0009b272 8020
.org 0x9b274
	str r0, [r4, #96]	@ 0009b274 2066
.org 0x9b276
	movs r0, #200	@ 0009b276 c820
.org 0x9b278
	lsls r0, r0, #1	@ 0009b278 4000
.org 0x9b27a
	str r0, [r4, #100]	@ 0009b27a 6066
.org 0x9b27c
	ldrb r0, [r4, #15]	@ 0009b27c e07b
.org 0x9b27e
	adds r0, #1	@ 0009b27e 0130
.org 0x9b280
	strb r0, [r4, #15]	@ 0009b280 e073
.org 0x9b282
	adds r0, r4, #0	@ 0009b282 201c
.org 0x9b284
	bl 0x1cff0	@ 0009b284 81f7b4fe
.org 0x9b288
	ldr r0, [r4, #100]	@ 0009b288 606e
.org 0x9b28a
	subs r0, #1	@ 0009b28a 0138
.org 0x9b28c
	str r0, [r4, #100]	@ 0009b28c 6066
.org 0x9b28e
	ldr r0, [r4, #88]	@ 0009b28e a06d
.org 0x9b290
	ldr r3, [r4, #96]	@ 0009b290 236e
.org 0x9b292
	adds r0, r0, r3	@ 0009b292 c018
.org 0x9b294
	str r0, [r4, #88]	@ 0009b294 a065
.org 0x9b296
	ldr r2, [r4, #104]	@ 0009b296 a26e
.org 0x9b298
	subs r0, r2, r0	@ 0009b298 101a
.org 0x9b29a
	ldr r1, [pc, #24]	@ 0009b29a 0649
.org 0x9b29c
	adds r0, r0, r1	@ 0009b29c 4018
.org 0x9b29e
	ldr r1, [pc, #24]	@ 0009b29e 0649
.org 0x9b2a0
	cmp r0, r1	@ 0009b2a0 8842
.org 0x9b2a2
	bls.n 0x9b2ce	@ 0009b2a2 14d9
.org 0x9b2a4
	cmp r3, #0	@ 0009b2a4 002b
.org 0x9b2a6
	bge.n 0x9b2c0	@ 0009b2a6 0bda
.org 0x9b2a8
	ldr r1, [pc, #16]	@ 0009b2a8 0449
.org 0x9b2aa
	b.n 0x9b2c4	@ 0009b2aa 0be0
.org 0x9b2ac
	.byte 0xc4,0x10,0x86,0x08	@ 0009b2ac data
.org 0x9b2b0
	.byte 0x02,0x64,0x00,0x00	@ 0009b2b0 data
.org 0x9b2b4
	.byte 0xff,0x0f,0x00,0x00	@ 0009b2b4 data
.org 0x9b2b8
	.byte 0xfe,0x1f,0x00,0x00	@ 0009b2b8 data
.org 0x9b2bc
	.byte 0x00,0xf0,0xff,0xff	@ 0009b2bc data
.org 0x9b2c0
	movs r1, #128	@ 0009b2c0 8021
.org 0x9b2c2
	lsls r1, r1, #5	@ 0009b2c2 4901
.org 0x9b2c4
	adds r0, r2, r1	@ 0009b2c4 5018
.org 0x9b2c6
	str r0, [r4, #88]	@ 0009b2c6 a065
.org 0x9b2c8
	ldr r0, [r4, #96]	@ 0009b2c8 206e
.org 0x9b2ca
	negs r0, r0	@ 0009b2ca 4042
.org 0x9b2cc
	str r0, [r4, #96]	@ 0009b2cc 2066
.org 0x9b2ce
	ldr r2, [r4, #100]	@ 0009b2ce 626e
.org 0x9b2d0
	cmp r2, #59	@ 0009b2d0 3b2a
.org 0x9b2d2
	bgt.n 0x9b2ec	@ 0009b2d2 0bdc
.org 0x9b2d4
	movs r0, #1	@ 0009b2d4 0120
.org 0x9b2d6
	ands r0, r2	@ 0009b2d6 1040
.org 0x9b2d8
	cmp r0, #0	@ 0009b2d8 0028
.org 0x9b2da
	beq.n 0x9b2e4	@ 0009b2da 03d0
.org 0x9b2dc
	ldrb r1, [r4, #10]	@ 0009b2dc a17a
.org 0x9b2de
	movs r0, #1	@ 0009b2de 0120
.org 0x9b2e0
	orrs r0, r1	@ 0009b2e0 0843
.org 0x9b2e2
	b.n 0x9b2ea	@ 0009b2e2 02e0
.org 0x9b2e4
	ldrb r1, [r4, #10]	@ 0009b2e4 a17a
.org 0x9b2e6
	movs r0, #254	@ 0009b2e6 fe20
.org 0x9b2e8
	ands r0, r1	@ 0009b2e8 0840
.org 0x9b2ea
	strb r0, [r4, #10]	@ 0009b2ea a072
.org 0x9b2ec
	cmp r2, #0	@ 0009b2ec 002a
.org 0x9b2ee
	bne.n 0x9b310	@ 0009b2ee 0fd1
.org 0x9b2f0
	ldr r1, [pc, #36]	@ 0009b2f0 0949
.org 0x9b2f2
	ldrb r0, [r4, #9]	@ 0009b2f2 607a
.org 0x9b2f4
	lsls r0, r0, #2	@ 0009b2f4 8000
.org 0x9b2f6
	adds r0, r0, r1	@ 0009b2f6 4018
.org 0x9b2f8
	movs r1, #2	@ 0009b2f8 0221
.org 0x9b2fa
	str r1, [r4, #12]	@ 0009b2fa e160
.org 0x9b2fc
	ldr r0, [r0, #0]	@ 0009b2fc 0068
.org 0x9b2fe
	ldr r0, [r0, #8]	@ 0009b2fe 8068
.org 0x9b300
	str r0, [r4, #20]	@ 0009b300 6061

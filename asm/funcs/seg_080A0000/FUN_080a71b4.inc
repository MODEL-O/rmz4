@ FUN_080a71b4  entry 0x080a71b4  size 494
.thumb
.org 0xa71b4
FUN_080a71b4:
	push {r4, r5, r6, r7, lr}	@ 000a71b4 f0b5
.org 0xa71b6
	mov r7, r8	@ 000a71b6 4746
.org 0xa71b8
	push {r7}	@ 000a71b8 80b4
.org 0xa71ba
	sub sp, #8	@ 000a71ba 82b0
.org 0xa71bc
	adds r4, r0, #0	@ 000a71bc 041c
.org 0xa71be
	ldrb r5, [r4, #14]	@ 000a71be a57b
.org 0xa71c0
	cmp r5, #0	@ 000a71c0 002d
.org 0xa71c2
	bne.n 0xa71d8	@ 000a71c2 09d1
.org 0xa71c4
	movs r1, #139	@ 000a71c4 8b21
.org 0xa71c6
	lsls r1, r1, #8	@ 000a71c6 0902
.org 0xa71c8
	bl 0x1cf00	@ 000a71c8 75f79afe
.org 0xa71cc
	movs r0, #16	@ 000a71cc 1020
.org 0xa71ce
	strb r0, [r4, #18]	@ 000a71ce a074
.org 0xa71d0
	strb r5, [r4, #15]	@ 000a71d0 e573
.org 0xa71d2
	ldrb r0, [r4, #14]	@ 000a71d2 a07b
.org 0xa71d4
	adds r0, #1	@ 000a71d4 0130
.org 0xa71d6
	strb r0, [r4, #14]	@ 000a71d6 a073
.org 0xa71d8
	ldrb r0, [r4, #15]	@ 000a71d8 e07b
.org 0xa71da
	cmp r0, #1	@ 000a71da 0128
.org 0xa71dc
	beq.n 0xa7210	@ 000a71dc 18d0
.org 0xa71de
	cmp r0, #1	@ 000a71de 0128
.org 0xa71e0
	bgt.n 0xa71e8	@ 000a71e0 02dc
.org 0xa71e2
	cmp r0, #0	@ 000a71e2 0028
.org 0xa71e4
	beq.n 0xa71f0	@ 000a71e4 04d0
.org 0xa71e6
	b.n 0xa73e6	@ 000a71e6 fee0
.org 0xa71e8
	cmp r0, #2	@ 000a71e8 0228
.org 0xa71ea
	bne.n 0xa71ee	@ 000a71ea 00d1
.org 0xa71ec
	b.n 0xa73d0	@ 000a71ec f0e0
.org 0xa71ee
	b.n 0xa73e6	@ 000a71ee fae0
.org 0xa71f0
	ldrb r0, [r4, #18]	@ 000a71f0 a07c
.org 0xa71f2
	subs r0, #1	@ 000a71f2 0138
.org 0xa71f4
	strb r0, [r4, #18]	@ 000a71f4 a074
.org 0xa71f6
	lsls r0, r0, #24	@ 000a71f6 0006
.org 0xa71f8
	lsrs r0, r0, #24	@ 000a71f8 000e
.org 0xa71fa
	cmp r0, #255	@ 000a71fa ff28
.org 0xa71fc
	beq.n 0xa7200	@ 000a71fc 00d0
.org 0xa71fe
	b.n 0xa73e6	@ 000a71fe f2e0
.org 0xa7200
	ldr r1, [pc, #8]	@ 000a7200 0249
.org 0xa7202
	adds r0, r4, #0	@ 000a7202 201c
.org 0xa7204
	bl 0x1cf00	@ 000a7204 75f77cfe
.org 0xa7208
	b.n 0xa73c0	@ 000a7208 dae0
.org 0xa720a
	.byte 0x00	@ 000a720a data
.org 0xa720b
	.byte 0x00	@ 000a720b data
.org 0xa720c
	.byte 0x02,0x8b,0x00,0x00	@ 000a720c data
.org 0xa7210
	ldrb r0, [r4, #17]	@ 000a7210 607c
.org 0xa7212
	cmp r0, #0	@ 000a7212 0028
.org 0xa7214
	beq.n 0xa7222	@ 000a7214 05d0
.org 0xa7216
	adds r0, r4, #0	@ 000a7216 201c
.org 0xa7218
	adds r0, #191	@ 000a7218 bf30
.org 0xa721a
	ldrb r0, [r0, #0]	@ 000a721a 0078
.org 0xa721c
	cmp r0, #0	@ 000a721c 0028
.org 0xa721e
	beq.n 0xa7222	@ 000a721e 00d0
.org 0xa7220
	b.n 0xa73ba	@ 000a7220 cbe0
.org 0xa7222
	adds r2, r4, #0	@ 000a7222 221c
.org 0xa7224
	adds r2, #189	@ 000a7224 bd32
.org 0xa7226
	ldrb r1, [r4, #18]	@ 000a7226 a17c
.org 0xa7228
	lsrs r1, r1, #4	@ 000a7228 0909
.org 0xa722a
	ldrb r0, [r2, #0]	@ 000a722a 1078
.org 0xa722c
	subs r0, r0, r1	@ 000a722c 401a
.org 0xa722e
	strb r0, [r2, #0]	@ 000a722e 1070
.org 0xa7230
	ldrb r0, [r4, #18]	@ 000a7230 a07c
.org 0xa7232
	adds r0, #16	@ 000a7232 1030
.org 0xa7234
	strb r0, [r4, #18]	@ 000a7234 a074
.org 0xa7236
	ldrb r0, [r2, #0]	@ 000a7236 1078
.org 0xa7238
	adds r0, #63	@ 000a7238 3f30
.org 0xa723a
	lsls r0, r0, #24	@ 000a723a 0006
.org 0xa723c
	lsrs r0, r0, #24	@ 000a723c 000e
.org 0xa723e
	mov r8, r2	@ 000a723e 9046
.org 0xa7240
	cmp r0, #58	@ 000a7240 3a28
.org 0xa7242
	bls.n 0xa7246	@ 000a7242 00d9
.org 0xa7244
	b.n 0xa73e6	@ 000a7244 cfe0
.org 0xa7246
	ldrb r1, [r4, #10]	@ 000a7246 a17a
.org 0xa7248
	movs r0, #16	@ 000a7248 1020
.org 0xa724a
	ands r0, r1	@ 000a724a 0840
.org 0xa724c
	cmp r0, #0	@ 000a724c 0028
.org 0xa724e
	beq.n 0xa7258	@ 000a724e 03d0
.org 0xa7250
	ldr r0, [r4, #84]	@ 000a7250 606d
.org 0xa7252
	movs r1, #200	@ 000a7252 c821
.org 0xa7254
	lsls r1, r1, #5	@ 000a7254 4901
.org 0xa7256
	b.n 0xa725c	@ 000a7256 01e0
.org 0xa7258
	ldr r0, [r4, #84]	@ 000a7258 606d
.org 0xa725a
	ldr r1, [pc, #84]	@ 000a725a 1549
.org 0xa725c
	adds r0, r0, r1	@ 000a725c 4018
.org 0xa725e
	str r0, [sp, #0]	@ 000a725e 0090
.org 0xa7260
	ldr r1, [r4, #88]	@ 000a7260 a16d
.org 0xa7262
	movs r0, #192	@ 000a7262 c020
.org 0xa7264
	lsls r0, r0, #2	@ 000a7264 8000
.org 0xa7266
	adds r1, r1, r0	@ 000a7266 0918
.org 0xa7268
	str r1, [sp, #4]	@ 000a7268 0191
.org 0xa726a
	ldr r0, [sp, #0]	@ 000a726a 0098
.org 0xa726c
	bl 0x7c7c	@ 000a726c 60f706fd
.org 0xa7270
	lsls r0, r0, #16	@ 000a7270 0004
.org 0xa7272
	cmp r0, #0	@ 000a7272 0028
.org 0xa7274
	bne.n 0xa7278	@ 000a7274 00d1
.org 0xa7276
	b.n 0xa73b4	@ 000a7276 9de0
.org 0xa7278
	adds r1, r4, #0	@ 000a7278 211c
.org 0xa727a
	adds r1, #84	@ 000a727a 5431
.org 0xa727c
	movs r0, #2	@ 000a727c 0220
.org 0xa727e
	bl 0x1fe64	@ 000a727e 78f7f1fd
.org 0xa7282
	ldr r6, [pc, #48]	@ 000a7282 0c4e
.org 0xa7284
	ldr r2, [pc, #48]	@ 000a7284 0c4a
.org 0xa7286
	ldr r1, [r2, #0]	@ 000a7286 1168
.org 0xa7288
	ldr r0, [pc, #48]	@ 000a7288 0c48
.org 0xa728a
	muls r0, r1	@ 000a728a 4843
.org 0xa728c
	ldr r1, [pc, #48]	@ 000a728c 0c49
.org 0xa728e
	adds r0, r0, r1	@ 000a728e 4018
.org 0xa7290
	lsls r0, r0, #1	@ 000a7290 4000
.org 0xa7292
	lsrs r1, r0, #1	@ 000a7292 4108
.org 0xa7294
	str r1, [r2, #0]	@ 000a7294 1160
.org 0xa7296
	lsrs r3, r0, #17	@ 000a7296 430c
.org 0xa7298
	movs r5, #1	@ 000a7298 0125
.org 0xa729a
	ands r3, r5	@ 000a729a 2b40
.org 0xa729c
	lsls r2, r3, #4	@ 000a729c 1a01
.org 0xa729e
	ldrb r1, [r4, #10]	@ 000a729e a17a
.org 0xa72a0
	movs r0, #16	@ 000a72a0 1020
.org 0xa72a2
	ands r0, r1	@ 000a72a2 0840
.org 0xa72a4
	cmp r0, #0	@ 000a72a4 0028
.org 0xa72a6
	beq.n 0xa72c4	@ 000a72a6 0dd0
.org 0xa72a8
	adds r3, r5, #0	@ 000a72a8 2b1c
.org 0xa72aa
	orrs r3, r2	@ 000a72aa 1343
.org 0xa72ac
	b.n 0xa72c6	@ 000a72ac 0be0
.org 0xa72ae
	.byte 0x00	@ 000a72ae data
.org 0xa72af
	.byte 0x00	@ 000a72af data
.org 0xa72b0
	.byte 0x00,0xe7,0xff,0xff	@ 000a72b0 data
.org 0xa72b4
	.byte 0xdc,0x26,0x86,0x08	@ 000a72b4 data
.org 0xa72b8
	.byte 0x38,0xdc,0x02,0x02	@ 000a72b8 data
.org 0xa72bc
	.byte 0xfd,0x43,0x03,0x00	@ 000a72bc data
.org 0xa72c0
	.byte 0xc3,0x9e,0x26,0x00	@ 000a72c0 data
.org 0xa72c4
	lsls r3, r3, #4	@ 000a72c4 1b01
.org 0xa72c6
	mov r0, sp	@ 000a72c6 6846
.org 0xa72c8
	adds r1, r6, #0	@ 000a72c8 311c
.org 0xa72ca
	movs r2, #0	@ 000a72ca 0022
.org 0xa72cc
	bl 0xd4c8c	@ 000a72cc 2df0defc
.org 0xa72d0
	mov r6, sp	@ 000a72d0 6e46
.org 0xa72d2
	ldr r7, [pc, #44]	@ 000a72d2 0b4f
.org 0xa72d4
	ldr r2, [pc, #44]	@ 000a72d4 0b4a
.org 0xa72d6
	ldr r1, [r2, #0]	@ 000a72d6 1168
.org 0xa72d8
	ldr r0, [pc, #44]	@ 000a72d8 0b48
.org 0xa72da
	muls r0, r1	@ 000a72da 4843
.org 0xa72dc
	ldr r1, [pc, #44]	@ 000a72dc 0b49
.org 0xa72de
	adds r0, r0, r1	@ 000a72de 4018
.org 0xa72e0
	lsls r0, r0, #1	@ 000a72e0 4000
.org 0xa72e2
	lsrs r1, r0, #1	@ 000a72e2 4108
.org 0xa72e4
	str r1, [r2, #0]	@ 000a72e4 1160
.org 0xa72e6
	lsrs r3, r0, #17	@ 000a72e6 430c
.org 0xa72e8
	movs r5, #1	@ 000a72e8 0125
.org 0xa72ea
	ands r3, r5	@ 000a72ea 2b40
.org 0xa72ec
	lsls r2, r3, #4	@ 000a72ec 1a01
.org 0xa72ee
	ldrb r1, [r4, #10]	@ 000a72ee a17a
.org 0xa72f0
	movs r0, #16	@ 000a72f0 1020
.org 0xa72f2
	ands r0, r1	@ 000a72f2 0840
.org 0xa72f4
	cmp r0, #0	@ 000a72f4 0028
.org 0xa72f6
	beq.n 0xa7310	@ 000a72f6 0bd0
.org 0xa72f8
	adds r3, r5, #0	@ 000a72f8 2b1c
.org 0xa72fa
	orrs r3, r2	@ 000a72fa 1343
.org 0xa72fc
	b.n 0xa7312	@ 000a72fc 09e0
.org 0xa72fe
	.byte 0x00	@ 000a72fe data
.org 0xa72ff
	.byte 0x00	@ 000a72ff data
.org 0xa7300
	.byte 0xdc,0x26,0x86,0x08	@ 000a7300 data
.org 0xa7304
	.byte 0x38,0xdc,0x02,0x02	@ 000a7304 data
.org 0xa7308
	.byte 0xfd,0x43,0x03,0x00	@ 000a7308 data
.org 0xa730c
	.byte 0xc3,0x9e,0x26,0x00	@ 000a730c data
.org 0xa7310
	lsls r3, r3, #4	@ 000a7310 1b01
.org 0xa7312
	adds r0, r6, #0	@ 000a7312 301c
.org 0xa7314
	adds r1, r7, #0	@ 000a7314 391c
.org 0xa7316
	movs r2, #0	@ 000a7316 0022
.org 0xa7318
	bl 0xd4c8c	@ 000a7318 2df0b8fc
.org 0xa731c
	mov r6, sp	@ 000a731c 6e46
.org 0xa731e
	ldr r7, [pc, #44]	@ 000a731e 0b4f
.org 0xa7320
	ldr r2, [pc, #44]	@ 000a7320 0b4a
.org 0xa7322
	ldr r1, [r2, #0]	@ 000a7322 1168
.org 0xa7324
	ldr r0, [pc, #44]	@ 000a7324 0b48
.org 0xa7326
	muls r0, r1	@ 000a7326 4843
.org 0xa7328
	ldr r1, [pc, #44]	@ 000a7328 0b49
.org 0xa732a
	adds r0, r0, r1	@ 000a732a 4018
.org 0xa732c
	lsls r0, r0, #1	@ 000a732c 4000
.org 0xa732e
	lsrs r1, r0, #1	@ 000a732e 4108
.org 0xa7330
	str r1, [r2, #0]	@ 000a7330 1160
.org 0xa7332
	lsrs r3, r0, #17	@ 000a7332 430c
.org 0xa7334
	movs r5, #1	@ 000a7334 0125
.org 0xa7336
	ands r3, r5	@ 000a7336 2b40
.org 0xa7338
	lsls r2, r3, #4	@ 000a7338 1a01
.org 0xa733a
	ldrb r1, [r4, #10]	@ 000a733a a17a
.org 0xa733c
	movs r0, #16	@ 000a733c 1020
.org 0xa733e
	ands r0, r1	@ 000a733e 0840
.org 0xa7340
	cmp r0, #0	@ 000a7340 0028
.org 0xa7342
	beq.n 0xa735c	@ 000a7342 0bd0
.org 0xa7344
	adds r3, r5, #0	@ 000a7344 2b1c
.org 0xa7346
	orrs r3, r2	@ 000a7346 1343
.org 0xa7348
	b.n 0xa735e	@ 000a7348 09e0
.org 0xa734a
	.byte 0x00	@ 000a734a data
.org 0xa734b
	.byte 0x00	@ 000a734b data
.org 0xa734c
	.byte 0xf8,0x26,0x86,0x08	@ 000a734c data
.org 0xa7350
	.byte 0x38,0xdc,0x02,0x02	@ 000a7350 data
.org 0xa7354
	.byte 0xfd,0x43,0x03,0x00	@ 000a7354 data
.org 0xa7358
	.byte 0xc3,0x9e,0x26,0x00	@ 000a7358 data
.org 0xa735c
	lsls r3, r3, #4	@ 000a735c 1b01
.org 0xa735e
	adds r0, r6, #0	@ 000a735e 301c
.org 0xa7360
	adds r1, r7, #0	@ 000a7360 391c
.org 0xa7362
	movs r2, #0	@ 000a7362 0022
.org 0xa7364
	bl 0xd4c8c	@ 000a7364 2df092fc
.org 0xa7368
	mov r6, sp	@ 000a7368 6e46
.org 0xa736a
	ldr r7, [pc, #44]	@ 000a736a 0b4f
.org 0xa736c
	ldr r2, [pc, #44]	@ 000a736c 0b4a
.org 0xa736e
	ldr r1, [r2, #0]	@ 000a736e 1168
.org 0xa7370
	ldr r0, [pc, #44]	@ 000a7370 0b48
.org 0xa7372
	muls r0, r1	@ 000a7372 4843
.org 0xa7374
	ldr r1, [pc, #44]	@ 000a7374 0b49
.org 0xa7376
	adds r0, r0, r1	@ 000a7376 4018
.org 0xa7378
	lsls r0, r0, #1	@ 000a7378 4000
.org 0xa737a
	lsrs r1, r0, #1	@ 000a737a 4108
.org 0xa737c
	str r1, [r2, #0]	@ 000a737c 1160
.org 0xa737e
	lsrs r3, r0, #17	@ 000a737e 430c
.org 0xa7380
	movs r5, #1	@ 000a7380 0125
.org 0xa7382
	ands r3, r5	@ 000a7382 2b40
.org 0xa7384
	lsls r2, r3, #4	@ 000a7384 1a01
.org 0xa7386
	ldrb r1, [r4, #10]	@ 000a7386 a17a
.org 0xa7388
	movs r0, #16	@ 000a7388 1020
.org 0xa738a
	ands r0, r1	@ 000a738a 0840
.org 0xa738c
	cmp r0, #0	@ 000a738c 0028
.org 0xa738e
	beq.n 0xa73a8	@ 000a738e 0bd0
.org 0xa7390
	adds r3, r5, #0	@ 000a7390 2b1c
.org 0xa7392
	orrs r3, r2	@ 000a7392 1343
.org 0xa7394
	b.n 0xa73aa	@ 000a7394 09e0
.org 0xa7396
	.byte 0x00	@ 000a7396 data
.org 0xa7397
	.byte 0x00	@ 000a7397 data
.org 0xa7398
	.byte 0xf8,0x26,0x86,0x08	@ 000a7398 data
.org 0xa739c
	.byte 0x38,0xdc,0x02,0x02	@ 000a739c data
.org 0xa73a0
	.byte 0xfd,0x43,0x03,0x00	@ 000a73a0 data

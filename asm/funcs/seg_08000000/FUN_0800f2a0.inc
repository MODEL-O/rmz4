@ FUN_0800f2a0  entry 0x0800f2a0  size 440
.thumb
.org 0xf2a0
FUN_0800f2a0:
	push {r4, r5, r6, lr}	@ 0000f2a0 70b5
.org 0xf2a2
	mov ip, r0	@ 0000f2a2 8446
.org 0xf2a4
	ldr r0, [r0, #92]	@ 0000f2a4 c06d
.org 0xf2a6
	lsls r0, r0, #16	@ 0000f2a6 0004
.org 0xf2a8
	lsrs r4, r0, #16	@ 0000f2a8 040c
.org 0xf2aa
	mov r3, ip	@ 0000f2aa 6346
.org 0xf2ac
	adds r3, #110	@ 0000f2ac 6e33
.org 0xf2ae
	ldrh r0, [r3, #0]	@ 0000f2ae 1888
.org 0xf2b0
	mov r2, ip	@ 0000f2b0 6246
.org 0xf2b2
	adds r2, #108	@ 0000f2b2 6c32
.org 0xf2b4
	strh r0, [r2, #0]	@ 0000f2b4 1080
.org 0xf2b6
	mov r0, ip	@ 0000f2b6 6046
.org 0xf2b8
	ldr r1, [r0, #52]	@ 0000f2b8 416b
.org 0xf2ba
	ldr r0, [r0, #68]	@ 0000f2ba 406c
.org 0xf2bc
	muls r0, r1	@ 0000f2bc 4843
.org 0xf2be
	asrs r0, r0, #8	@ 0000f2be 0012
.org 0xf2c0
	strh r0, [r3, #0]	@ 0000f2c0 1880
.org 0xf2c2
	ldrh r1, [r3, #0]	@ 0000f2c2 1988
.org 0xf2c4
	ldrh r0, [r2, #0]	@ 0000f2c4 1088
.org 0xf2c6
	subs r1, r1, r0	@ 0000f2c6 091a
.org 0xf2c8
	ldr r0, [pc, #12]	@ 0000f2c8 0348
.org 0xf2ca
	cmp r1, r0	@ 0000f2ca 8142
.org 0xf2cc
	bge.n 0xf2dc	@ 0000f2cc 06da
.org 0xf2ce
	mov r1, ip	@ 0000f2ce 6146
.org 0xf2d0
	ldr r0, [r1, #76]	@ 0000f2d0 c86c
.org 0xf2d2
	subs r0, #48	@ 0000f2d2 3038
.org 0xf2d4
	str r0, [r1, #76]	@ 0000f2d4 c864
.org 0xf2d6
	b.n 0xf2ec	@ 0000f2d6 09e0
.org 0xf2d8
	.byte 0x00,0xff,0xff,0xff	@ 0000f2d8 data
.org 0xf2dc
	movs r0, #128	@ 0000f2dc 8020
.org 0xf2de
	lsls r0, r0, #1	@ 0000f2de 4000
.org 0xf2e0
	cmp r1, r0	@ 0000f2e0 8142
.org 0xf2e2
	ble.n 0xf2ec	@ 0000f2e2 03dd
.org 0xf2e4
	mov r2, ip	@ 0000f2e4 6246
.org 0xf2e6
	ldr r0, [r2, #76]	@ 0000f2e6 d06c
.org 0xf2e8
	adds r0, #48	@ 0000f2e8 3030
.org 0xf2ea
	str r0, [r2, #76]	@ 0000f2ea d064
.org 0xf2ec
	lsrs r4, r4, #4	@ 0000f2ec 2409
.org 0xf2ee
	lsls r2, r4, #2	@ 0000f2ee a200
.org 0xf2f0
	ldr r5, [pc, #48]	@ 0000f2f0 0c4d
.org 0xf2f2
	adds r3, r2, r5	@ 0000f2f2 5319
.org 0xf2f4
	mov r0, ip	@ 0000f2f4 6046
.org 0xf2f6
	adds r0, #110	@ 0000f2f6 6e30
.org 0xf2f8
	mov r6, ip	@ 0000f2f8 6646
.org 0xf2fa
	ldr r1, [r6, #76]	@ 0000f2fa f16c
.org 0xf2fc
	ldrh r0, [r0, #0]	@ 0000f2fc 0088
.org 0xf2fe
	adds r0, r0, r1	@ 0000f2fe 4018
.org 0xf300
	strh r0, [r3, #0]	@ 0000f300 1880
.org 0xf302
	adds r0, r5, #2	@ 0000f302 a81c
.org 0xf304
	adds r2, r2, r0	@ 0000f304 1218
.org 0xf306
	ldr r1, [r6, #56]	@ 0000f306 b16b
.org 0xf308
	ldr r0, [r6, #72]	@ 0000f308 b06c
.org 0xf30a
	muls r0, r1	@ 0000f30a 4843
.org 0xf30c
	asrs r0, r0, #8	@ 0000f30c 0012
.org 0xf30e
	strh r0, [r2, #0]	@ 0000f30e 1080
.org 0xf310
	ldrh r1, [r2, #0]	@ 0000f310 1188
.org 0xf312
	adds r6, #104	@ 0000f312 6836
.org 0xf314
	ldrb r0, [r6, #0]	@ 0000f314 3078
.org 0xf316
	cmp r0, #1	@ 0000f316 0128
.org 0xf318
	beq.n 0xf374	@ 0000f318 2cd0
.org 0xf31a
	cmp r0, #1	@ 0000f31a 0128
.org 0xf31c
	bgt.n 0xf328	@ 0000f31c 04dc
.org 0xf31e
	cmp r0, #0	@ 0000f31e 0028
.org 0xf320
	beq.n 0xf334	@ 0000f320 08d0
.org 0xf322
	b.n 0xf496	@ 0000f322 b8e0
.org 0xf324
	.byte 0x0c,0x0a,0x00,0x02	@ 0000f324 data
.org 0xf328
	cmp r0, #2	@ 0000f328 0228
.org 0xf32a
	beq.n 0xf3e8	@ 0000f32a 5dd0
.org 0xf32c
	cmp r0, #3	@ 0000f32c 0328
.org 0xf32e
	bne.n 0xf332	@ 0000f32e 00d1
.org 0xf330
	b.n 0xf464	@ 0000f330 98e0
.org 0xf332
	b.n 0xf496	@ 0000f332 b0e0
.org 0xf334
	movs r0, #194	@ 0000f334 c220
.org 0xf336
	lsls r0, r0, #2	@ 0000f336 8000
.org 0xf338
	cmp r1, r0	@ 0000f338 8142
.org 0xf33a
	bhi.n 0xf33e	@ 0000f33a 00d8
.org 0xf33c
	b.n 0xf496	@ 0000f33c abe0
.org 0xf33e
	ldr r0, [pc, #44]	@ 0000f33e 0b48
.org 0xf340
	ldr r0, [r0, #0]	@ 0000f340 0068
.org 0xf342
	ldr r1, [pc, #44]	@ 0000f342 0b49
.org 0xf344
	adds r0, r0, r1	@ 0000f344 4018
.org 0xf346
	lsls r1, r4, #1	@ 0000f346 6100
.org 0xf348
	adds r2, r5, #0	@ 0000f348 2a1c
.org 0xf34a
	subs r2, #8	@ 0000f34a 083a
.org 0xf34c
	adds r1, r1, r2	@ 0000f34c 8918
.org 0xf34e
	ldrh r2, [r1, #0]	@ 0000f34e 0a88
.org 0xf350
	movs r1, #248	@ 0000f350 f821
.org 0xf352
	lsls r1, r1, #5	@ 0000f352 4901
.org 0xf354
	ands r1, r2	@ 0000f354 1140
.org 0xf356
	lsls r1, r1, #3	@ 0000f356 c900
.org 0xf358
	movs r2, #192	@ 0000f358 c022
.org 0xf35a
	lsls r2, r2, #19	@ 0000f35a d204
.org 0xf35c
	adds r1, r1, r2	@ 0000f35c 8918
.org 0xf35e
	movs r2, #128	@ 0000f35e 8022
.org 0xf360
	lsls r2, r2, #2	@ 0000f360 9200
.org 0xf362
	bl 0x128be0	@ 0000f362 19f13dfc
.org 0xf366
	movs r0, #1	@ 0000f366 0120
.org 0xf368
	b.n 0xf494	@ 0000f368 94e0
.org 0xf36a
	.byte 0x00	@ 0000f36a data
.org 0xf36b
	.byte 0x00	@ 0000f36b data
.org 0xf36c
	.byte 0x38,0xc1,0xb2,0x08	@ 0000f36c data
.org 0xf370
	.byte 0x40,0xc1,0xb2,0x08	@ 0000f370 data
.org 0xf374
	ldr r0, [pc, #48]	@ 0000f374 0c48
.org 0xf376
	cmp r1, r0	@ 0000f376 8142
.org 0xf378
	bhi.n 0xf3b4	@ 0000f378 1cd8
.org 0xf37a
	ldr r0, [pc, #48]	@ 0000f37a 0c48
.org 0xf37c
	ldr r0, [r0, #0]	@ 0000f37c 0068
.org 0xf37e
	ldr r2, [pc, #48]	@ 0000f37e 0c4a
.org 0xf380
	adds r0, r0, r2	@ 0000f380 8018
.org 0xf382
	lsls r1, r4, #1	@ 0000f382 6100
.org 0xf384
	adds r2, r5, #0	@ 0000f384 2a1c
.org 0xf386
	subs r2, #8	@ 0000f386 083a
.org 0xf388
	adds r1, r1, r2	@ 0000f388 8918
.org 0xf38a
	ldrh r2, [r1, #0]	@ 0000f38a 0a88
.org 0xf38c
	movs r1, #248	@ 0000f38c f821
.org 0xf38e
	lsls r1, r1, #5	@ 0000f38e 4901
.org 0xf390
	ands r1, r2	@ 0000f390 1140
.org 0xf392
	lsls r1, r1, #3	@ 0000f392 c900
.org 0xf394
	movs r2, #192	@ 0000f394 c022
.org 0xf396
	lsls r2, r2, #19	@ 0000f396 d204
.org 0xf398
	adds r1, r1, r2	@ 0000f398 8918
.org 0xf39a
	movs r2, #128	@ 0000f39a 8022
.org 0xf39c
	lsls r2, r2, #2	@ 0000f39c 9200
.org 0xf39e
	bl 0x128be0	@ 0000f39e 19f11ffc
.org 0xf3a2
	movs r0, #0	@ 0000f3a2 0020
.org 0xf3a4
	b.n 0xf494	@ 0000f3a4 76e0
.org 0xf3a6
	.byte 0x00	@ 0000f3a6 data
.org 0xf3a7
	.byte 0x00	@ 0000f3a7 data
.org 0xf3a8
	.byte 0x03,0x03,0x00,0x00	@ 0000f3a8 data
.org 0xf3ac
	.byte 0x44,0xc1,0xb2,0x08	@ 0000f3ac data
.org 0xf3b0
	.byte 0x4c,0xc1,0xb2,0x08	@ 0000f3b0 data
.org 0xf3b4
	movs r0, #129	@ 0000f3b4 8120
.org 0xf3b6
	lsls r0, r0, #3	@ 0000f3b6 c000
.org 0xf3b8
	cmp r1, r0	@ 0000f3b8 8142
.org 0xf3ba
	bls.n 0xf496	@ 0000f3ba 6cd9
.org 0xf3bc
	ldr r0, [pc, #28]	@ 0000f3bc 0748
.org 0xf3be
	ldr r0, [r0, #0]	@ 0000f3be 0068
.org 0xf3c0
	ldr r3, [pc, #28]	@ 0000f3c0 074b
.org 0xf3c2
	adds r0, r0, r3	@ 0000f3c2 c018
.org 0xf3c4
	lsls r1, r4, #1	@ 0000f3c4 6100
.org 0xf3c6
	adds r2, r5, #0	@ 0000f3c6 2a1c
.org 0xf3c8
	subs r2, #8	@ 0000f3c8 083a
.org 0xf3ca
	adds r1, r1, r2	@ 0000f3ca 8918
.org 0xf3cc
	ldrh r2, [r1, #0]	@ 0000f3cc 0a88
.org 0xf3ce
	movs r1, #248	@ 0000f3ce f821
.org 0xf3d0
	lsls r1, r1, #5	@ 0000f3d0 4901
.org 0xf3d2
	ands r1, r2	@ 0000f3d2 1140
.org 0xf3d4
	lsls r1, r1, #3	@ 0000f3d4 c900
.org 0xf3d6
	ldr r5, [pc, #12]	@ 0000f3d6 034d
.org 0xf3d8
	adds r1, r1, r5	@ 0000f3d8 4919
.org 0xf3da
	b.n 0xf48a	@ 0000f3da 56e0
.org 0xf3dc
	.byte 0x3c,0xc1,0xb2,0x08	@ 0000f3dc data
.org 0xf3e0
	.byte 0x44,0xc1,0xb2,0x08	@ 0000f3e0 data
.org 0xf3e4
	.byte 0x00,0x08,0x00,0x06	@ 0000f3e4 data
.org 0xf3e8
	ldr r0, [pc, #44]	@ 0000f3e8 0b48
.org 0xf3ea
	cmp r1, r0	@ 0000f3ea 8142
.org 0xf3ec
	bhi.n 0xf428	@ 0000f3ec 1cd8
.org 0xf3ee
	ldr r0, [pc, #44]	@ 0000f3ee 0b48
.org 0xf3f0
	ldr r0, [r0, #0]	@ 0000f3f0 0068
.org 0xf3f2
	ldr r1, [pc, #44]	@ 0000f3f2 0b49
.org 0xf3f4
	adds r0, r0, r1	@ 0000f3f4 4018
.org 0xf3f6
	lsls r1, r4, #1	@ 0000f3f6 6100
.org 0xf3f8
	adds r2, r5, #0	@ 0000f3f8 2a1c
.org 0xf3fa
	subs r2, #8	@ 0000f3fa 083a
.org 0xf3fc
	adds r1, r1, r2	@ 0000f3fc 8918
.org 0xf3fe
	ldrh r2, [r1, #0]	@ 0000f3fe 0a88
.org 0xf400
	movs r1, #248	@ 0000f400 f821
.org 0xf402
	lsls r1, r1, #5	@ 0000f402 4901
.org 0xf404
	ands r1, r2	@ 0000f404 1140
.org 0xf406
	lsls r1, r1, #3	@ 0000f406 c900
.org 0xf408
	ldr r2, [pc, #24]	@ 0000f408 064a
.org 0xf40a
	adds r1, r1, r2	@ 0000f40a 8918
.org 0xf40c
	movs r2, #128	@ 0000f40c 8022
.org 0xf40e
	lsls r2, r2, #2	@ 0000f40e 9200
.org 0xf410
	bl 0x128be0	@ 0000f410 19f1e6fb
.org 0xf414
	movs r0, #1	@ 0000f414 0120
.org 0xf416
	b.n 0xf494	@ 0000f416 3de0
.org 0xf418
	.byte 0x03,0x04,0x00,0x00	@ 0000f418 data
.org 0xf41c
	.byte 0x38,0xc1,0xb2,0x08	@ 0000f41c data
.org 0xf420
	.byte 0x40,0xc1,0xb2,0x08	@ 0000f420 data
.org 0xf424
	.byte 0x00,0x08,0x00,0x06	@ 0000f424 data
.org 0xf428
	movs r0, #161	@ 0000f428 a120
.org 0xf42a
	lsls r0, r0, #3	@ 0000f42a c000
.org 0xf42c
	cmp r1, r0	@ 0000f42c 8142
.org 0xf42e
	bls.n 0xf496	@ 0000f42e 32d9
.org 0xf430
	ldr r0, [pc, #40]	@ 0000f430 0a48
.org 0xf432
	ldr r0, [r0, #0]	@ 0000f432 0068
.org 0xf434
	ldr r3, [pc, #40]	@ 0000f434 0a4b
.org 0xf436
	adds r0, r0, r3	@ 0000f436 c018
.org 0xf438
	lsls r1, r4, #1	@ 0000f438 6100
.org 0xf43a
	adds r2, r5, #0	@ 0000f43a 2a1c
.org 0xf43c
	subs r2, #8	@ 0000f43c 083a
.org 0xf43e
	adds r1, r1, r2	@ 0000f43e 8918
.org 0xf440
	ldrh r2, [r1, #0]	@ 0000f440 0a88
.org 0xf442
	movs r1, #248	@ 0000f442 f821
.org 0xf444
	lsls r1, r1, #5	@ 0000f444 4901
.org 0xf446
	ands r1, r2	@ 0000f446 1140
.org 0xf448
	lsls r1, r1, #3	@ 0000f448 c900
.org 0xf44a
	movs r2, #192	@ 0000f44a c022
.org 0xf44c
	lsls r2, r2, #19	@ 0000f44c d204
.org 0xf44e
	adds r1, r1, r2	@ 0000f44e 8918
.org 0xf450
	movs r2, #128	@ 0000f450 8022
.org 0xf452
	lsls r2, r2, #2	@ 0000f452 9200
.org 0xf454
	bl 0x128be0	@ 0000f454 19f1c4fb

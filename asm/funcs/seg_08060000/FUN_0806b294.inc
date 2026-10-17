@ FUN_0806b294  entry 0x0806b294  size 552
.thumb
.org 0x6b294
FUN_0806b294:
	push {r4, r5, r6, r7, lr}	@ 0006b294 f0b5
.org 0x6b296
	mov r7, r9	@ 0006b296 4f46
.org 0x6b298
	mov r6, r8	@ 0006b298 4646
.org 0x6b29a
	push {r6, r7}	@ 0006b29a c0b4
.org 0x6b29c
	adds r4, r0, #0	@ 0006b29c 041c
.org 0x6b29e
	ldrb r0, [r4, #30]	@ 0006b29e a07f
.org 0x6b2a0
	lsls r0, r0, #8	@ 0006b2a0 0002
.org 0x6b2a2
	adds r1, r4, #0	@ 0006b2a2 211c
.org 0x6b2a4
	adds r1, #112	@ 0006b2a4 7031
.org 0x6b2a6
	ldrb r1, [r1, #0]	@ 0006b2a6 0978
.org 0x6b2a8
	orrs r0, r1	@ 0006b2a8 0843
.org 0x6b2aa
	ldr r1, [pc, #72]	@ 0006b2aa 1249
.org 0x6b2ac
	cmp r0, r1	@ 0006b2ac 8842
.org 0x6b2ae
	beq.n 0x6b2b6	@ 0006b2ae 02d0
.org 0x6b2b0
	adds r0, r4, #0	@ 0006b2b0 201c
.org 0x6b2b2
	bl 0x1cf00	@ 0006b2b2 b1f725fe
.org 0x6b2b6
	adds r0, r4, #0	@ 0006b2b6 201c
.org 0x6b2b8
	bl 0x1cff0	@ 0006b2b8 b1f79afe
.org 0x6b2bc
	ldr r0, [pc, #56]	@ 0006b2bc 0e48
.org 0x6b2be
	ldrh r1, [r0, #8]	@ 0006b2be 0189
.org 0x6b2c0
	movs r0, #8	@ 0006b2c0 0820
.org 0x6b2c2
	ands r0, r1	@ 0006b2c2 0840
.org 0x6b2c4
	lsls r0, r0, #16	@ 0006b2c4 0004
.org 0x6b2c6
	lsrs r6, r0, #16	@ 0006b2c6 060c
.org 0x6b2c8
	cmp r6, #0	@ 0006b2c8 002e
.org 0x6b2ca
	beq.n 0x6b2ce	@ 0006b2ca 00d0
.org 0x6b2cc
	b.n 0x6b4ee	@ 0006b2cc 0fe1
.org 0x6b2ce
	ldrb r0, [r4, #10]	@ 0006b2ce a07a
.org 0x6b2d0
	lsrs r2, r0, #4	@ 0006b2d0 0209
.org 0x6b2d2
	movs r0, #1	@ 0006b2d2 0120
.org 0x6b2d4
	ands r2, r0	@ 0006b2d4 0240
.org 0x6b2d6
	movs r5, #0	@ 0006b2d6 0025
.org 0x6b2d8
	ldr r1, [pc, #32]	@ 0006b2d8 0849
.org 0x6b2da
	ldr r0, [r1, #0]	@ 0006b2da 0868
.org 0x6b2dc
	ldr r0, [r0, #84]	@ 0006b2dc 406d
.org 0x6b2de
	adds r7, r1, #0	@ 0006b2de 0f1c
.org 0x6b2e0
	ldr r3, [r4, #84]	@ 0006b2e0 636d
.org 0x6b2e2
	cmp r3, r0	@ 0006b2e2 8342
.org 0x6b2e4
	bge.n 0x6b2e8	@ 0006b2e4 00da
.org 0x6b2e6
	movs r5, #1	@ 0006b2e6 0125
.org 0x6b2e8
	cmp r2, r5	@ 0006b2e8 aa42
.org 0x6b2ea
	beq.n 0x6b300	@ 0006b2ea 09d0
.org 0x6b2ec
	movs r0, #4	@ 0006b2ec 0420
.org 0x6b2ee
	strb r0, [r4, #13]	@ 0006b2ee 6073
.org 0x6b2f0
	strb r6, [r4, #14]	@ 0006b2f0 a673
.org 0x6b2f2
	b.n 0x6b4ee	@ 0006b2f2 fce0
.org 0x6b2f4
	.byte 0x01,0xaa,0x00,0x00	@ 0006b2f4 data
.org 0x6b2f8
	.byte 0x10,0xe9,0x02,0x02	@ 0006b2f8 data
.org 0x6b2fc
	.byte 0xf0,0xdb,0x02,0x02	@ 0006b2fc data
.org 0x6b300
	subs r1, r3, r0	@ 0006b300 191a
.org 0x6b302
	cmp r1, #0	@ 0006b302 0029
.org 0x6b304
	blt.n 0x6b314	@ 0006b304 06db
.org 0x6b306
	ldr r0, [pc, #8]	@ 0006b306 0248
.org 0x6b308
	cmp r1, r0	@ 0006b308 8142
.org 0x6b30a
	ble.n 0x6b31c	@ 0006b30a 07dd
.org 0x6b30c
	b.n 0x6b324	@ 0006b30c 0ae0
.org 0x6b30e
	.byte 0x00	@ 0006b30e data
.org 0x6b30f
	.byte 0x00	@ 0006b30f data
.org 0x6b310
	.byte 0xff,0x4e,0x00,0x00	@ 0006b310 data
.org 0x6b314
	subs r1, r0, r3	@ 0006b314 c11a
.org 0x6b316
	ldr r0, [pc, #8]	@ 0006b316 0248
.org 0x6b318
	cmp r1, r0	@ 0006b318 8142
.org 0x6b31a
	bgt.n 0x6b324	@ 0006b31a 03dc
.org 0x6b31c
	movs r6, #0	@ 0006b31c 0026
.org 0x6b31e
	b.n 0x6b34e	@ 0006b31e 16e0
.org 0x6b320
	.byte 0xff,0x4e,0x00,0x00	@ 0006b320 data
.org 0x6b324
	ldr r0, [r7, #0]	@ 0006b324 3868
.org 0x6b326
	ldr r0, [r0, #84]	@ 0006b326 406d
.org 0x6b328
	subs r1, r3, r0	@ 0006b328 191a
.org 0x6b32a
	cmp r1, #0	@ 0006b32a 0029
.org 0x6b32c
	blt.n 0x6b33c	@ 0006b32c 06db
.org 0x6b32e
	ldr r0, [pc, #8]	@ 0006b32e 0248
.org 0x6b330
	cmp r1, r0	@ 0006b330 8142
.org 0x6b332
	ble.n 0x6b344	@ 0006b332 07dd
.org 0x6b334
	b.n 0x6b34c	@ 0006b334 0ae0
.org 0x6b336
	.byte 0x00	@ 0006b336 data
.org 0x6b337
	.byte 0x00	@ 0006b337 data
.org 0x6b338
	.byte 0xff,0x8e,0x00,0x00	@ 0006b338 data
.org 0x6b33c
	subs r1, r0, r3	@ 0006b33c c11a
.org 0x6b33e
	ldr r0, [pc, #8]	@ 0006b33e 0248
.org 0x6b340
	cmp r1, r0	@ 0006b340 8142
.org 0x6b342
	bgt.n 0x6b34c	@ 0006b342 03dc
.org 0x6b344
	movs r6, #1	@ 0006b344 0126
.org 0x6b346
	b.n 0x6b34e	@ 0006b346 02e0
.org 0x6b348
	.byte 0xff,0x8e,0x00,0x00	@ 0006b348 data
.org 0x6b34c
	movs r6, #2	@ 0006b34c 0226
.org 0x6b34e
	adds r0, r4, #0	@ 0006b34e 201c
.org 0x6b350
	adds r0, #164	@ 0006b350 a430
.org 0x6b352
	movs r1, #0	@ 0006b352 0021
.org 0x6b354
	ldrsh r0, [r0, r1]	@ 0006b354 405e
.org 0x6b356
	movs r3, #2	@ 0006b356 0223
.org 0x6b358
	cmp r0, #15	@ 0006b358 0f28
.org 0x6b35a
	ble.n 0x6b364	@ 0006b35a 03dd
.org 0x6b35c
	movs r3, #0	@ 0006b35c 0023
.org 0x6b35e
	cmp r0, #31	@ 0006b35e 1f28
.org 0x6b360
	bgt.n 0x6b364	@ 0006b360 00dc
.org 0x6b362
	movs r3, #1	@ 0006b362 0123
.org 0x6b364
	ldr r2, [pc, #64]	@ 0006b364 104a
.org 0x6b366
	mov ip, r2	@ 0006b366 9446
.org 0x6b368
	ldr r7, [pc, #64]	@ 0006b368 104f
.org 0x6b36a
	mov r8, r7	@ 0006b36a b846
.org 0x6b36c
	adds r5, r4, #0	@ 0006b36c 251c
.org 0x6b36e
	adds r5, #222	@ 0006b36e de35
.org 0x6b370
	ldr r0, [pc, #60]	@ 0006b370 0f48
.org 0x6b372
	mov r9, r0	@ 0006b372 8146
.org 0x6b374
	mov r2, r9	@ 0006b374 4a46
.org 0x6b376
	ldr r1, [r2, #0]	@ 0006b376 1168
.org 0x6b378
	ldr r0, [pc, #56]	@ 0006b378 0e48
.org 0x6b37a
	muls r0, r1	@ 0006b37a 4843
.org 0x6b37c
	ldr r7, [pc, #56]	@ 0006b37c 0e4f
.org 0x6b37e
	adds r0, r0, r7	@ 0006b37e c019
.org 0x6b380
	lsls r0, r0, #1	@ 0006b380 4000
.org 0x6b382
	lsrs r1, r0, #1	@ 0006b382 4108
.org 0x6b384
	str r1, [r2, #0]	@ 0006b384 1160
.org 0x6b386
	lsrs r1, r0, #17	@ 0006b386 410c
.org 0x6b388
	movs r0, #31	@ 0006b388 1f20
.org 0x6b38a
	ands r1, r0	@ 0006b38a 0140
.org 0x6b38c
	adds r0, r1, #0	@ 0006b38c 081c
.org 0x6b38e
	movs r2, #0	@ 0006b38e 0022
.org 0x6b390
	cmp r6, #0	@ 0006b390 002e
.org 0x6b392
	bne.n 0x6b3fc	@ 0006b392 33d1
.org 0x6b394
	cmp r3, #0	@ 0006b394 002b
.org 0x6b396
	bne.n 0x6b3bc	@ 0006b396 11d1
.org 0x6b398
	cmp r1, #7	@ 0006b398 0729
.org 0x6b39a
	bhi.n 0x6b39e	@ 0006b39a 00d8
.org 0x6b39c
	b.n 0x6b4aa	@ 0006b39c 85e0
.org 0x6b39e
	movs r2, #1	@ 0006b39e 0122
.org 0x6b3a0
	cmp r1, #17	@ 0006b3a0 1129
.org 0x6b3a2
	bhi.n 0x6b3a6	@ 0006b3a2 00d8
.org 0x6b3a4
	b.n 0x6b4aa	@ 0006b3a4 81e0
.org 0x6b3a6
	b.n 0x6b40e	@ 0006b3a6 32e0
.org 0x6b3a8
	.byte 0xb0,0x0a,0x00,0x02	@ 0006b3a8 data
.org 0x6b3ac
	.byte 0xe4,0xc4,0x85,0x08	@ 0006b3ac data
.org 0x6b3b0
	.byte 0x38,0xdc,0x02,0x02	@ 0006b3b0 data
.org 0x6b3b4
	.byte 0xfd,0x43,0x03,0x00	@ 0006b3b4 data
.org 0x6b3b8
	.byte 0xc3,0x9e,0x26,0x00	@ 0006b3b8 data
.org 0x6b3bc
	cmp r3, #1	@ 0006b3bc 012b
.org 0x6b3be
	bne.n 0x6b3de	@ 0006b3be 0ed1
.org 0x6b3c0
	cmp r1, #5	@ 0006b3c0 0529
.org 0x6b3c2
	bls.n 0x6b4aa	@ 0006b3c2 72d9
.org 0x6b3c4
	movs r2, #1	@ 0006b3c4 0122
.org 0x6b3c6
	cmp r1, #13	@ 0006b3c6 0d29
.org 0x6b3c8
	bls.n 0x6b4aa	@ 0006b3c8 6fd9
.org 0x6b3ca
	movs r2, #2	@ 0006b3ca 0222
.org 0x6b3cc
	cmp r1, #19	@ 0006b3cc 1329
.org 0x6b3ce
	bls.n 0x6b4aa	@ 0006b3ce 6cd9
.org 0x6b3d0
	movs r2, #3	@ 0006b3d0 0322
.org 0x6b3d2
	cmp r1, #22	@ 0006b3d2 1629
.org 0x6b3d4
	bls.n 0x6b4aa	@ 0006b3d4 69d9
.org 0x6b3d6
	movs r2, #5	@ 0006b3d6 0522
.org 0x6b3d8
	cmp r1, #26	@ 0006b3d8 1a29
.org 0x6b3da
	bhi.n 0x6b4aa	@ 0006b3da 66d8
.org 0x6b3dc
	b.n 0x6b4a8	@ 0006b3dc 64e0
.org 0x6b3de
	cmp r1, #4	@ 0006b3de 0429
.org 0x6b3e0
	bls.n 0x6b4aa	@ 0006b3e0 63d9
.org 0x6b3e2
	movs r2, #1	@ 0006b3e2 0122
.org 0x6b3e4
	cmp r1, #12	@ 0006b3e4 0c29
.org 0x6b3e6
	bls.n 0x6b4aa	@ 0006b3e6 60d9
.org 0x6b3e8
	movs r2, #2	@ 0006b3e8 0222
.org 0x6b3ea
	cmp r1, #17	@ 0006b3ea 1129
.org 0x6b3ec
	bls.n 0x6b4aa	@ 0006b3ec 5dd9
.org 0x6b3ee
	movs r2, #3	@ 0006b3ee 0322
.org 0x6b3f0
	cmp r1, #21	@ 0006b3f0 1529
.org 0x6b3f2
	bls.n 0x6b4aa	@ 0006b3f2 5ad9
.org 0x6b3f4
	movs r2, #5	@ 0006b3f4 0522
.org 0x6b3f6
	cmp r1, #24	@ 0006b3f6 1829
.org 0x6b3f8
	bhi.n 0x6b4aa	@ 0006b3f8 57d8
.org 0x6b3fa
	b.n 0x6b4a8	@ 0006b3fa 55e0
.org 0x6b3fc
	cmp r6, #1	@ 0006b3fc 012e
.org 0x6b3fe
	bne.n 0x6b45e	@ 0006b3fe 2ed1
.org 0x6b400
	cmp r3, #0	@ 0006b400 002b
.org 0x6b402
	bne.n 0x6b41e	@ 0006b402 0cd1
.org 0x6b404
	cmp r1, #9	@ 0006b404 0929
.org 0x6b406
	bls.n 0x6b4aa	@ 0006b406 50d9
.org 0x6b408
	movs r2, #1	@ 0006b408 0122
.org 0x6b40a
	cmp r1, #15	@ 0006b40a 0f29
.org 0x6b40c
	bls.n 0x6b4aa	@ 0006b40c 4dd9
.org 0x6b40e
	movs r2, #2	@ 0006b40e 0222
.org 0x6b410
	cmp r1, #23	@ 0006b410 1729
.org 0x6b412
	bls.n 0x6b4aa	@ 0006b412 4ad9
.org 0x6b414
	movs r2, #4	@ 0006b414 0422
.org 0x6b416
	cmp r1, #27	@ 0006b416 1b29
.org 0x6b418
	bhi.n 0x6b4aa	@ 0006b418 47d8
.org 0x6b41a
	movs r2, #3	@ 0006b41a 0322
.org 0x6b41c
	b.n 0x6b4aa	@ 0006b41c 45e0
.org 0x6b41e
	cmp r3, #1	@ 0006b41e 012b
.org 0x6b420
	bne.n 0x6b440	@ 0006b420 0ed1
.org 0x6b422
	cmp r1, #5	@ 0006b422 0529
.org 0x6b424
	bls.n 0x6b4aa	@ 0006b424 41d9
.org 0x6b426
	movs r2, #1	@ 0006b426 0122
.org 0x6b428
	cmp r1, #10	@ 0006b428 0a29
.org 0x6b42a
	bls.n 0x6b4aa	@ 0006b42a 3ed9
.org 0x6b42c
	movs r2, #2	@ 0006b42c 0222
.org 0x6b42e
	cmp r1, #17	@ 0006b42e 1129
.org 0x6b430
	bls.n 0x6b4aa	@ 0006b430 3bd9
.org 0x6b432
	movs r2, #3	@ 0006b432 0322
.org 0x6b434
	cmp r1, #21	@ 0006b434 1529
.org 0x6b436
	bls.n 0x6b4aa	@ 0006b436 38d9
.org 0x6b438
	movs r2, #5	@ 0006b438 0522
.org 0x6b43a
	cmp r1, #25	@ 0006b43a 1929
.org 0x6b43c
	bhi.n 0x6b4aa	@ 0006b43c 35d8
.org 0x6b43e
	b.n 0x6b4a8	@ 0006b43e 33e0
.org 0x6b440
	cmp r1, #4	@ 0006b440 0429
.org 0x6b442
	bls.n 0x6b4aa	@ 0006b442 32d9
.org 0x6b444
	movs r2, #1	@ 0006b444 0122
.org 0x6b446
	cmp r1, #9	@ 0006b446 0929
.org 0x6b448
	bls.n 0x6b4aa	@ 0006b448 2fd9
.org 0x6b44a
	movs r2, #2	@ 0006b44a 0222
.org 0x6b44c
	cmp r1, #15	@ 0006b44c 0f29
.org 0x6b44e
	bls.n 0x6b4aa	@ 0006b44e 2cd9
.org 0x6b450
	movs r2, #3	@ 0006b450 0322
.org 0x6b452
	cmp r1, #19	@ 0006b452 1329
.org 0x6b454
	bls.n 0x6b4aa	@ 0006b454 29d9
.org 0x6b456
	movs r2, #5	@ 0006b456 0522
.org 0x6b458
	cmp r1, #23	@ 0006b458 1729
.org 0x6b45a
	bhi.n 0x6b4aa	@ 0006b45a 26d8
.org 0x6b45c
	b.n 0x6b4a8	@ 0006b45c 24e0
.org 0x6b45e
	cmp r3, #0	@ 0006b45e 002b
.org 0x6b460
	bne.n 0x6b476	@ 0006b460 09d1
.org 0x6b462
	cmp r1, #11	@ 0006b462 0b29
.org 0x6b464
	bls.n 0x6b4aa	@ 0006b464 21d9
.org 0x6b466
	movs r2, #2	@ 0006b466 0222
.org 0x6b468
	cmp r1, #21	@ 0006b468 1529
.org 0x6b46a
	bls.n 0x6b4aa	@ 0006b46a 1ed9
.org 0x6b46c
	movs r2, #4	@ 0006b46c 0422
.org 0x6b46e
	cmp r1, #26	@ 0006b46e 1a29
.org 0x6b470
	bhi.n 0x6b4aa	@ 0006b470 1bd8
.org 0x6b472
	movs r2, #3	@ 0006b472 0322
.org 0x6b474
	b.n 0x6b4aa	@ 0006b474 19e0
.org 0x6b476
	cmp r3, #1	@ 0006b476 012b
.org 0x6b478
	bne.n 0x6b492	@ 0006b478 0bd1
.org 0x6b47a
	cmp r1, #6	@ 0006b47a 0629
.org 0x6b47c
	bls.n 0x6b4aa	@ 0006b47c 15d9
.org 0x6b47e
	movs r2, #2	@ 0006b47e 0222
.org 0x6b480
	cmp r1, #15	@ 0006b480 0f29
.org 0x6b482
	bls.n 0x6b4aa	@ 0006b482 12d9
.org 0x6b484
	movs r2, #3	@ 0006b484 0322
.org 0x6b486
	cmp r1, #20	@ 0006b486 1429
.org 0x6b488
	bls.n 0x6b4aa	@ 0006b488 0fd9
.org 0x6b48a
	movs r2, #5	@ 0006b48a 0522
.org 0x6b48c
	cmp r1, #25	@ 0006b48c 1929
.org 0x6b48e
	bhi.n 0x6b4aa	@ 0006b48e 0cd8
.org 0x6b490
	b.n 0x6b4a8	@ 0006b490 0ae0
.org 0x6b492
	cmp r0, #5	@ 0006b492 0528
.org 0x6b494
	bls.n 0x6b4aa	@ 0006b494 09d9
.org 0x6b496
	movs r2, #2	@ 0006b496 0222
.org 0x6b498
	cmp r0, #13	@ 0006b498 0d28
.org 0x6b49a
	bls.n 0x6b4aa	@ 0006b49a 06d9
.org 0x6b49c
	movs r2, #3	@ 0006b49c 0322
.org 0x6b49e
	cmp r0, #18	@ 0006b49e 1228
.org 0x6b4a0
	bls.n 0x6b4aa	@ 0006b4a0 03d9
.org 0x6b4a2
	movs r2, #5	@ 0006b4a2 0522
.org 0x6b4a4
	cmp r0, #23	@ 0006b4a4 1728
.org 0x6b4a6
	bhi.n 0x6b4aa	@ 0006b4a6 00d8
.org 0x6b4a8
	movs r2, #4	@ 0006b4a8 0422
.org 0x6b4aa
	ldr r0, [pc, #56]	@ 0006b4aa 0e48
.org 0x6b4ac
	add r0, ip	@ 0006b4ac 6044
.org 0x6b4ae
	ldrb r1, [r0, #0]	@ 0006b4ae 0178
.org 0x6b4b0
	movs r0, #16	@ 0006b4b0 1020
.org 0x6b4b2
	ands r0, r1	@ 0006b4b2 0840
.org 0x6b4b4
	cmp r0, #0	@ 0006b4b4 0028
.org 0x6b4b6
	beq.n 0x6b4c4	@ 0006b4b6 05d0
.org 0x6b4b8
	ldr r0, [pc, #44]	@ 0006b4b8 0b48
.org 0x6b4ba
	ldrb r1, [r0, #4]	@ 0006b4ba 0179

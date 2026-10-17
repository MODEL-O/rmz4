@ FUN_0808b368  entry 0x0808b368  size 264
.thumb
.org 0x8b368
FUN_0808b368:
	push {r4, r5, r6, lr}	@ 0008b368 70b5
.org 0x8b36a
	adds r4, r0, #0	@ 0008b36a 041c
.org 0x8b36c
	adds r5, r4, #0	@ 0008b36c 251c
.org 0x8b36e
	adds r5, #140	@ 0008b36e 8c35
.org 0x8b370
	ldr r0, [r5, #0]	@ 0008b370 2868
.org 0x8b372
	movs r6, #1	@ 0008b372 0126
.org 0x8b374
	ands r0, r6	@ 0008b374 3040
.org 0x8b376
	cmp r0, #0	@ 0008b376 0028
.org 0x8b378
	beq.n 0x8b380	@ 0008b378 02d0
.org 0x8b37a
	movs r0, #12	@ 0008b37a 0c20
.org 0x8b37c
	bl 0x6984	@ 0008b37c 7bf702fb
.org 0x8b380
	ldr r1, [r5, #0]	@ 0008b380 2968
.org 0x8b382
	movs r0, #128	@ 0008b382 8020
.org 0x8b384
	lsls r0, r0, #2	@ 0008b384 8000
.org 0x8b386
	ands r0, r1	@ 0008b386 0840
.org 0x8b388
	cmp r0, #0	@ 0008b388 0028
.org 0x8b38a
	beq.n 0x8b3da	@ 0008b38a 26d0
.org 0x8b38c
	ldr r1, [pc, #36]	@ 0008b38c 0949
.org 0x8b38e
	ldrb r0, [r4, #9]	@ 0008b38e 607a
.org 0x8b390
	lsls r0, r0, #2	@ 0008b390 8000
.org 0x8b392
	adds r0, r0, r1	@ 0008b392 4018
.org 0x8b394
	movs r1, #2	@ 0008b394 0221
.org 0x8b396
	str r1, [r4, #12]	@ 0008b396 e160
.org 0x8b398
	ldr r0, [r0, #0]	@ 0008b398 0068
.org 0x8b39a
	ldr r0, [r0, #8]	@ 0008b39a 8068
.org 0x8b39c
	str r0, [r4, #20]	@ 0008b39c 6061
.org 0x8b39e
	adds r0, r4, #0	@ 0008b39e 201c
.org 0x8b3a0
	adds r0, #188	@ 0008b3a0 bc30
.org 0x8b3a2
	ldrb r2, [r0, #0]	@ 0008b3a2 0278
.org 0x8b3a4
	cmp r2, #0	@ 0008b3a4 002a
.org 0x8b3a6
	beq.n 0x8b3b8	@ 0008b3a6 07d0
.org 0x8b3a8
	movs r0, #0	@ 0008b3a8 0020
.org 0x8b3aa
	strb r1, [r4, #13]	@ 0008b3aa 6173
.org 0x8b3ac
	strb r0, [r4, #14]	@ 0008b3ac a073
.org 0x8b3ae
	strb r0, [r4, #15]	@ 0008b3ae e073
.org 0x8b3b0
	b.n 0x8b3d2	@ 0008b3b0 0fe0
.org 0x8b3b2
	.byte 0x00	@ 0008b3b2 data
.org 0x8b3b3
	.byte 0x00	@ 0008b3b3 data
.org 0x8b3b4
	.byte 0x40,0xdb,0x85,0x08	@ 0008b3b4 data
.org 0x8b3b8
	ldr r1, [r5, #0]	@ 0008b3b8 2968
.org 0x8b3ba
	movs r0, #128	@ 0008b3ba 8020
.org 0x8b3bc
	lsls r0, r0, #9	@ 0008b3bc 4002
.org 0x8b3be
	ands r1, r0	@ 0008b3be 0140
.org 0x8b3c0
	cmp r1, #0	@ 0008b3c0 0029
.org 0x8b3c2
	beq.n 0x8b3cc	@ 0008b3c2 03d0
.org 0x8b3c4
	strb r6, [r4, #13]	@ 0008b3c4 6673
.org 0x8b3c6
	strb r2, [r4, #14]	@ 0008b3c6 a273
.org 0x8b3c8
	strb r2, [r4, #15]	@ 0008b3c8 e273
.org 0x8b3ca
	b.n 0x8b3d2	@ 0008b3ca 02e0
.org 0x8b3cc
	strb r1, [r4, #13]	@ 0008b3cc 6173
.org 0x8b3ce
	strb r1, [r4, #14]	@ 0008b3ce a173
.org 0x8b3d0
	strb r1, [r4, #15]	@ 0008b3d0 e173
.org 0x8b3d2
	adds r0, r4, #0	@ 0008b3d2 201c
.org 0x8b3d4
	bl 0x8b844	@ 0008b3d4 00f036fa
.org 0x8b3d8
	b.n 0x8b480	@ 0008b3d8 52e0
.org 0x8b3da
	ands r1, r6	@ 0008b3da 3140
.org 0x8b3dc
	cmp r1, #0	@ 0008b3dc 0029
.org 0x8b3de
	beq.n 0x8b3f2	@ 0008b3de 08d0
.org 0x8b3e0
	ldr r0, [r4, #44]	@ 0008b3e0 e06a
.org 0x8b3e2
	cmp r0, #0	@ 0008b3e2 0028
.org 0x8b3e4
	bne.n 0x8b3f8	@ 0008b3e4 08d1
.org 0x8b3e6
	ldr r2, [pc, #104]	@ 0008b3e6 1a4a
.org 0x8b3e8
	movs r0, #0	@ 0008b3e8 0020
.org 0x8b3ea
	adds r1, r4, #0	@ 0008b3ea 211c
.org 0x8b3ec
	bl 0x2adac	@ 0008b3ec 9ff7defc
.org 0x8b3f0
	str r0, [r4, #44]	@ 0008b3f0 e062
.org 0x8b3f2
	ldr r0, [r4, #44]	@ 0008b3f2 e06a
.org 0x8b3f4
	cmp r0, #0	@ 0008b3f4 0028
.org 0x8b3f6
	beq.n 0x8b460	@ 0008b3f6 33d0
.org 0x8b3f8
	ldr r0, [r4, #44]	@ 0008b3f8 e06a
.org 0x8b3fa
	bl 0x2b3e4	@ 0008b3fa 9ff7f3ff
.org 0x8b3fe
	cmp r0, #0	@ 0008b3fe 0028
.org 0x8b400
	beq.n 0x8b406	@ 0008b400 01d0
.org 0x8b402
	movs r0, #0	@ 0008b402 0020
.org 0x8b404
	str r0, [r4, #44]	@ 0008b404 e062
.org 0x8b406
	ldr r0, [r4, #44]	@ 0008b406 e06a
.org 0x8b408
	cmp r0, #0	@ 0008b408 0028
.org 0x8b40a
	beq.n 0x8b460	@ 0008b40a 29d0
.org 0x8b40c
	adds r0, r4, #0	@ 0008b40c 201c
.org 0x8b40e
	bl 0x1d1f4	@ 0008b40e 91f7f1fe
.org 0x8b412
	adds r0, r4, #0	@ 0008b412 201c
.org 0x8b414
	adds r0, #116	@ 0008b414 7430
.org 0x8b416
	ldr r3, [pc, #60]	@ 0008b416 0f4b
.org 0x8b418
	ldrb r1, [r4, #30]	@ 0008b418 a17f
.org 0x8b41a
	lsls r1, r1, #8	@ 0008b41a 0902
.org 0x8b41c
	adds r2, r4, #0	@ 0008b41c 221c
.org 0x8b41e
	adds r2, #112	@ 0008b41e 7032
.org 0x8b420
	ldrb r2, [r2, #0]	@ 0008b420 1278
.org 0x8b422
	orrs r1, r2	@ 0008b422 1143
.org 0x8b424
	ldr r2, [pc, #48]	@ 0008b424 0c4a
.org 0x8b426
	adds r1, r1, r2	@ 0008b426 8918
.org 0x8b428
	lsls r1, r1, #2	@ 0008b428 8900
.org 0x8b42a
	adds r1, r1, r3	@ 0008b42a c918
.org 0x8b42c
	adds r2, r4, #0	@ 0008b42c 221c
.org 0x8b42e
	adds r2, #113	@ 0008b42e 7132
.org 0x8b430
	ldrb r2, [r2, #0]	@ 0008b430 1278
.org 0x8b432
	lsls r2, r2, #24	@ 0008b432 1206
.org 0x8b434
	asrs r2, r2, #24	@ 0008b434 1216
.org 0x8b436
	ldr r1, [r1, #0]	@ 0008b436 0968
.org 0x8b438
	lsls r2, r2, #2	@ 0008b438 9200
.org 0x8b43a
	adds r2, r2, r1	@ 0008b43a 5218
.org 0x8b43c
	ldr r1, [r2, #0]	@ 0008b43c 1168
.org 0x8b43e
	ldrb r2, [r1, #1]	@ 0008b43e 4a78
.org 0x8b440
	lsls r1, r2, #1	@ 0008b440 5100
.org 0x8b442
	adds r1, r1, r2	@ 0008b442 8918
.org 0x8b444
	lsls r1, r1, #3	@ 0008b444 c900
.org 0x8b446
	ldr r2, [pc, #20]	@ 0008b446 054a
.org 0x8b448
	adds r1, r1, r2	@ 0008b448 8918
.org 0x8b44a
	bl 0x5784	@ 0008b44a 7af79bf9
.org 0x8b44e
	b.n 0x8b480	@ 0008b44e 17e0
.org 0x8b450
	.byte 0x24,0xf7,0x85,0x08	@ 0008b450 data
.org 0x8b454
	.byte 0xec,0xf6,0x85,0x08	@ 0008b454 data
.org 0x8b458
	.byte 0x00,0xdf,0xff,0xff	@ 0008b458 data
.org 0x8b45c
	.byte 0x84,0xf5,0x85,0x08	@ 0008b45c data
.org 0x8b460
	ldr r1, [pc, #36]	@ 0008b460 0949
.org 0x8b462
	ldrb r0, [r4, #13]	@ 0008b462 607b
.org 0x8b464
	lsls r0, r0, #2	@ 0008b464 8000
.org 0x8b466
	adds r0, r0, r1	@ 0008b466 4018
.org 0x8b468
	ldr r1, [r0, #0]	@ 0008b468 0168
.org 0x8b46a
	adds r0, r4, #0	@ 0008b46a 201c
.org 0x8b46c
	bl 0x128f80	@ 0008b46c 9df088fd

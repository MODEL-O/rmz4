@ FUN_0807e2c8  entry 0x0807e2c8  size 376
.thumb
.org 0x7e2c8
FUN_0807e2c8:
	push {r4, r5, lr}	@ 0007e2c8 30b5
.org 0x7e2ca
	sub sp, #8	@ 0007e2ca 82b0
.org 0x7e2cc
	adds r5, r0, #0	@ 0007e2cc 051c
.org 0x7e2ce
	ldr r1, [pc, #132]	@ 0007e2ce 2149
.org 0x7e2d0
	mov r0, sp	@ 0007e2d0 6846
.org 0x7e2d2
	movs r2, #2	@ 0007e2d2 0222
.org 0x7e2d4
	bl 0x129258	@ 0007e2d4 aaf0c0ff
.org 0x7e2d8
	add r4, sp, #4	@ 0007e2d8 01ac
.org 0x7e2da
	ldr r1, [pc, #124]	@ 0007e2da 1f49
.org 0x7e2dc
	adds r0, r4, #0	@ 0007e2dc 201c
.org 0x7e2de
	movs r2, #2	@ 0007e2de 0222
.org 0x7e2e0
	bl 0x129258	@ 0007e2e0 aaf0baff
.org 0x7e2e4
	ldrb r1, [r5, #15]	@ 0007e2e4 e97b
.org 0x7e2e6
	cmp r1, #0	@ 0007e2e6 0029
.org 0x7e2e8
	bne.n 0x7e3c8	@ 0007e2e8 6ed1
.org 0x7e2ea
	ldr r0, [pc, #112]	@ 0007e2ea 1c48
.org 0x7e2ec
	movs r3, #0	@ 0007e2ec 0023
.org 0x7e2ee
	strh r1, [r0, #0]	@ 0007e2ee 0180
.org 0x7e2f0
	adds r2, r5, #0	@ 0007e2f0 2a1c
.org 0x7e2f2
	adds r2, #69	@ 0007e2f2 4532
.org 0x7e2f4
	ldrb r1, [r2, #0]	@ 0007e2f4 1178
.org 0x7e2f6
	movs r0, #13	@ 0007e2f6 0d20
.org 0x7e2f8
	negs r0, r0	@ 0007e2f8 4042
.org 0x7e2fa
	ands r0, r1	@ 0007e2fa 0840
.org 0x7e2fc
	strb r0, [r2, #0]	@ 0007e2fc 1070
.org 0x7e2fe
	adds r0, r5, #0	@ 0007e2fe 281c
.org 0x7e300
	adds r0, #216	@ 0007e300 d830
.org 0x7e302
	ldr r0, [r0, #0]	@ 0007e302 0068
.org 0x7e304
	cmp r0, #0	@ 0007e304 0028
.org 0x7e306
	bne.n 0x7e36c	@ 0007e306 31d1
.org 0x7e308
	adds r0, r5, #0	@ 0007e308 281c
.org 0x7e30a
	adds r0, #184	@ 0007e30a b830
.org 0x7e30c
	ldr r0, [r0, #0]	@ 0007e30c 0068
.org 0x7e30e
	movs r1, #224	@ 0007e30e e021
.org 0x7e310
	lsls r1, r1, #6	@ 0007e310 8901
.org 0x7e312
	adds r0, r0, r1	@ 0007e312 4018
.org 0x7e314
	str r0, [r5, #88]	@ 0007e314 a865
.org 0x7e316
	adds r2, #131	@ 0007e316 8332
.org 0x7e318
	adds r1, r5, #0	@ 0007e318 291c
.org 0x7e31a
	adds r1, #180	@ 0007e31a b431
.org 0x7e31c
	ldr r0, [pc, #64]	@ 0007e31c 1048
.org 0x7e31e
	ldr r0, [r0, #8]	@ 0007e31e 8068
.org 0x7e320
	movs r4, #240	@ 0007e320 f024
.org 0x7e322
	lsls r4, r4, #7	@ 0007e322 e401
.org 0x7e324
	adds r0, r0, r4	@ 0007e324 0019
.org 0x7e326
	ldr r1, [r1, #0]	@ 0007e326 0968
.org 0x7e328
	adds r1, r1, r0	@ 0007e328 0918
.org 0x7e32a
	str r1, [r2, #0]	@ 0007e32a 1160
.org 0x7e32c
	movs r2, #0	@ 0007e32c 0022
.org 0x7e32e
	ldr r0, [pc, #52]	@ 0007e32e 0d48
.org 0x7e330
	ldr r0, [r0, #0]	@ 0007e330 0068
.org 0x7e332
	ldr r0, [r0, #84]	@ 0007e332 406d
.org 0x7e334
	cmp r1, r0	@ 0007e334 8142
.org 0x7e336
	bge.n 0x7e33a	@ 0007e336 00da
.org 0x7e338
	movs r2, #1	@ 0007e338 0122
.org 0x7e33a
	adds r0, r5, #0	@ 0007e33a 281c
.org 0x7e33c
	adds r0, #190	@ 0007e33c be30
.org 0x7e33e
	strb r2, [r0, #0]	@ 0007e33e 0270
.org 0x7e340
	movs r0, #12	@ 0007e340 0c20
.org 0x7e342
	strb r0, [r5, #13]	@ 0007e342 6873
.org 0x7e344
	strb r3, [r5, #14]	@ 0007e344 ab73
.org 0x7e346
	strb r3, [r5, #15]	@ 0007e346 eb73
.org 0x7e348
	ldr r0, [pc, #28]	@ 0007e348 0748
.org 0x7e34a
	ldr r1, [r0, #48]	@ 0007e34a 016b
.org 0x7e34c
	adds r0, r5, #0	@ 0007e34c 281c
.org 0x7e34e
	bl 0x128f80	@ 0007e34e aaf017fe
.org 0x7e352
	b.n 0x7e462	@ 0007e352 86e0
.org 0x7e354
	.byte 0xf5,0x99,0x12,0x08	@ 0007e354 data
.org 0x7e358
	.byte 0x4a,0x9a,0x12,0x08	@ 0007e358 data
.org 0x7e35c
	.byte 0x40,0x0a,0x00,0x02	@ 0007e35c data
.org 0x7e360
	.byte 0x50,0xd8,0x85,0x08	@ 0007e360 data
.org 0x7e364
	.byte 0xf0,0xdb,0x02,0x02	@ 0007e364 data
.org 0x7e368
	.byte 0xa4,0xd4,0x85,0x08	@ 0007e368 data
.org 0x7e36c
	adds r2, r5, #0	@ 0007e36c 2a1c
.org 0x7e36e
	adds r2, #191	@ 0007e36e bf32
.org 0x7e370
	ldrb r1, [r2, #0]	@ 0007e370 1178
.org 0x7e372
	movs r0, #4	@ 0007e372 0420
.org 0x7e374
	orrs r0, r1	@ 0007e374 0843
.org 0x7e376
	strb r0, [r2, #0]	@ 0007e376 1070
.org 0x7e378
	adds r0, r5, #0	@ 0007e378 281c
.org 0x7e37a
	movs r1, #0	@ 0007e37a 0021
.org 0x7e37c
	bl 0x7e8c8	@ 0007e37c 00f0a4fa
.org 0x7e380
	mov r2, sp	@ 0007e380 6a46
.org 0x7e382
	movs r3, #0	@ 0007e382 0023
.org 0x7e384
	ldr r0, [pc, #176]	@ 0007e384 2c48
.org 0x7e386
	ldr r0, [r0, #0]	@ 0007e386 0068
.org 0x7e388
	ldrb r0, [r0, #1]	@ 0007e388 4078
.org 0x7e38a
	cmp r0, #4	@ 0007e38a 0428
.org 0x7e38c
	bls.n 0x7e39c	@ 0007e38c 06d9
.org 0x7e38e
	ldr r0, [pc, #172]	@ 0007e38e 2b48
.org 0x7e390
	ldrb r1, [r0, #4]	@ 0007e390 0179
.org 0x7e392
	movs r0, #4	@ 0007e392 0420
.org 0x7e394
	ands r0, r1	@ 0007e394 0840
.org 0x7e396
	cmp r0, #0	@ 0007e396 0028
.org 0x7e398
	bne.n 0x7e39c	@ 0007e398 00d1
.org 0x7e39a
	movs r3, #1	@ 0007e39a 0123
.org 0x7e39c
	adds r0, r2, r3	@ 0007e39c d018
.org 0x7e39e
	ldrb r0, [r0, #0]	@ 0007e39e 0078
.org 0x7e3a0
	strb r0, [r5, #18]	@ 0007e3a0 a874
.org 0x7e3a2
	movs r2, #0	@ 0007e3a2 0022
.org 0x7e3a4
	ldr r0, [pc, #144]	@ 0007e3a4 2448
.org 0x7e3a6
	ldr r0, [r0, #0]	@ 0007e3a6 0068
.org 0x7e3a8
	ldrb r0, [r0, #1]	@ 0007e3a8 4078
.org 0x7e3aa
	cmp r0, #4	@ 0007e3aa 0428
.org 0x7e3ac
	bls.n 0x7e3bc	@ 0007e3ac 06d9
.org 0x7e3ae
	ldr r0, [pc, #140]	@ 0007e3ae 2348
.org 0x7e3b0
	ldrb r1, [r0, #4]	@ 0007e3b0 0179
.org 0x7e3b2
	movs r0, #4	@ 0007e3b2 0420
.org 0x7e3b4
	ands r0, r1	@ 0007e3b4 0840
.org 0x7e3b6
	cmp r0, #0	@ 0007e3b6 0028
.org 0x7e3b8
	bne.n 0x7e3bc	@ 0007e3b8 00d1
.org 0x7e3ba
	movs r2, #1	@ 0007e3ba 0122
.org 0x7e3bc
	adds r0, r4, r2	@ 0007e3bc a018
.org 0x7e3be
	ldrb r0, [r0, #0]	@ 0007e3be 0078
.org 0x7e3c0
	strb r0, [r5, #19]	@ 0007e3c0 e874
.org 0x7e3c2
	ldrb r0, [r5, #15]	@ 0007e3c2 e87b
.org 0x7e3c4
	adds r0, #1	@ 0007e3c4 0130
.org 0x7e3c6
	strb r0, [r5, #15]	@ 0007e3c6 e873
.org 0x7e3c8
	adds r4, r5, #0	@ 0007e3c8 2c1c
.org 0x7e3ca
	adds r4, #188	@ 0007e3ca bc34
.org 0x7e3cc
	ldrb r0, [r4, #0]	@ 0007e3cc 2078
.org 0x7e3ce
	cmp r0, #0	@ 0007e3ce 0028
.org 0x7e3d0
	beq.n 0x7e3d8	@ 0007e3d0 02d0
.org 0x7e3d2
	adds r0, r5, #0	@ 0007e3d2 281c
.org 0x7e3d4
	bl 0x1cff0	@ 0007e3d4 9ef70cfe
.org 0x7e3d8
	adds r0, r5, #0	@ 0007e3d8 281c
.org 0x7e3da
	adds r0, #116	@ 0007e3da 7430
.org 0x7e3dc
	ldr r3, [pc, #96]	@ 0007e3dc 184b
.org 0x7e3de
	ldr r2, [pc, #100]	@ 0007e3de 194a
.org 0x7e3e0
	ldrb r1, [r4, #0]	@ 0007e3e0 2178
.org 0x7e3e2
	lsls r1, r1, #1	@ 0007e3e2 4900
.org 0x7e3e4
	adds r1, r1, r2	@ 0007e3e4 8918
.org 0x7e3e6
	ldrh r2, [r1, #0]	@ 0007e3e6 0a88
.org 0x7e3e8
	lsls r2, r2, #2	@ 0007e3e8 9200
.org 0x7e3ea
	adds r2, r2, r3	@ 0007e3ea d218
.org 0x7e3ec
	adds r1, r5, #0	@ 0007e3ec 291c
.org 0x7e3ee
	adds r1, #113	@ 0007e3ee 7131
.org 0x7e3f0
	ldrb r1, [r1, #0]	@ 0007e3f0 0978
.org 0x7e3f2
	lsls r1, r1, #24	@ 0007e3f2 0906
.org 0x7e3f4
	asrs r1, r1, #24	@ 0007e3f4 0916
.org 0x7e3f6
	ldr r2, [r2, #0]	@ 0007e3f6 1268
.org 0x7e3f8
	lsls r1, r1, #2	@ 0007e3f8 8900
.org 0x7e3fa
	adds r1, r1, r2	@ 0007e3fa 8918
.org 0x7e3fc
	ldr r1, [r1, #0]	@ 0007e3fc 0968
.org 0x7e3fe
	bl 0x5784	@ 0007e3fe 87f7c1f9
.org 0x7e402
	adds r0, r5, #0	@ 0007e402 281c
.org 0x7e404
	adds r0, #216	@ 0007e404 d830
.org 0x7e406
	ldr r2, [r0, #0]	@ 0007e406 0268
.org 0x7e408
	adds r0, r2, #0	@ 0007e408 101c
.org 0x7e40a
	adds r0, #181	@ 0007e40a b530
.org 0x7e40c
	ldrb r0, [r0, #0]	@ 0007e40c 0078
.org 0x7e40e
	cmp r0, #0	@ 0007e40e 0028
.org 0x7e410
	beq.n 0x7e462	@ 0007e410 27d0
.org 0x7e412
	adds r0, r5, #0	@ 0007e412 281c
.org 0x7e414
	adds r0, #191	@ 0007e414 bf30
.org 0x7e416
	ldrb r0, [r0, #0]	@ 0007e416 0078
.org 0x7e418
	lsrs r0, r0, #2	@ 0007e418 8008
.org 0x7e41a
	movs r1, #1	@ 0007e41a 0121
.org 0x7e41c
	ands r0, r1	@ 0007e41c 0840
.org 0x7e41e
	cmp r0, #0	@ 0007e41e 0028
.org 0x7e420
	beq.n 0x7e462	@ 0007e420 1fd0
.org 0x7e422
	ldrb r0, [r5, #18]	@ 0007e422 a87c
.org 0x7e424
	ldrb r1, [r5, #19]	@ 0007e424 e97c
.org 0x7e426
	cmp r0, r1	@ 0007e426 8842
.org 0x7e428
	bcc.n 0x7e448	@ 0007e428 0ed3
.org 0x7e42a
	ldrb r0, [r5, #14]	@ 0007e42a a87b
.org 0x7e42c
	adds r0, #1	@ 0007e42c 0130
.org 0x7e42e
	movs r1, #0	@ 0007e42e 0021
.org 0x7e430
	strb r0, [r5, #14]	@ 0007e430 a873
.org 0x7e432
	strb r1, [r5, #15]	@ 0007e432 e973
.org 0x7e434
	b.n 0x7e462	@ 0007e434 15e0
.org 0x7e436
	.byte 0x00	@ 0007e436 data
.org 0x7e437
	.byte 0x00	@ 0007e437 data
.org 0x7e438
	.byte 0xe0,0xe8,0x02,0x02	@ 0007e438 data
.org 0x7e43c
	.byte 0xb0,0xe8,0x02,0x02	@ 0007e43c data

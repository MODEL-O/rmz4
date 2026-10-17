@ FUN_080d52c4  entry 0x080d52c4  size 1182
.thumb
.org 0xd52c4
FUN_080d52c4:
	.byte 0xf0,0xb5	@ 000d52c4 (raw)
.org 0xd52c6
	mov r7, sl	@ 000d52c6 5746
.org 0xd52c8
	mov r6, r9	@ 000d52c8 4e46
.org 0xd52ca
	mov r5, r8	@ 000d52ca 4546
.org 0xd52cc
	push {r5, r6, r7}	@ 000d52cc e0b4
.org 0xd52ce
	sub sp, #40	@ 000d52ce 8ab0
.org 0xd52d0
	ldr r0, [r0, #8]	@ 000d52d0 8068
.org 0xd52d2
	str r0, [sp, #0]	@ 000d52d2 0090
.org 0xd52d4
	ldr r0, [r0, #120]	@ 000d52d4 806f
.org 0xd52d6
	asrs r0, r0, #8	@ 000d52d6 0012
.org 0xd52d8
	str r0, [sp, #4]	@ 000d52d8 0190
.org 0xd52da
	ldr r2, [sp, #0]	@ 000d52da 009a
.org 0xd52dc
	ldr r0, [r2, #84]	@ 000d52dc 506d
.org 0xd52de
	ldr r2, [r1, #8]	@ 000d52de 8a68
.org 0xd52e0
	subs r0, r0, r2	@ 000d52e0 801a
.org 0xd52e2
	lsls r0, r0, #8	@ 000d52e2 0002
.org 0xd52e4
	lsrs r0, r0, #16	@ 000d52e4 000c
.org 0xd52e6
	str r0, [sp, #8]	@ 000d52e6 0290
.org 0xd52e8
	ldr r3, [sp, #0]	@ 000d52e8 009b
.org 0xd52ea
	ldr r2, [r3, #88]	@ 000d52ea 9a6d
.org 0xd52ec
	ldr r0, [r1, #12]	@ 000d52ec c868
.org 0xd52ee
	subs r2, r2, r0	@ 000d52ee 121a
.org 0xd52f0
	lsls r2, r2, #8	@ 000d52f0 1202
.org 0xd52f2
	ldr r3, [pc, #76]	@ 000d52f2 134b
.org 0xd52f4
	ldr r0, [sp, #0]	@ 000d52f4 0098
.org 0xd52f6
	adds r0, #118	@ 000d52f6 7630
.org 0xd52f8
	ldrb r1, [r0, #0]	@ 000d52f8 0178
.org 0xd52fa
	lsls r1, r1, #10	@ 000d52fa 8902
.org 0xd52fc
	ldr r0, [sp, #0]	@ 000d52fc 0098
.org 0xd52fe
	adds r0, #117	@ 000d52fe 7530
.org 0xd5300
	ldrb r0, [r0, #0]	@ 000d5300 0078
.org 0xd5302
	lsls r0, r0, #5	@ 000d5302 4001
.org 0xd5304
	orrs r1, r0	@ 000d5304 0143
.org 0xd5306
	ldr r0, [sp, #0]	@ 000d5306 0098
.org 0xd5308
	adds r0, #116	@ 000d5308 7430
.org 0xd530a
	ldrb r0, [r0, #0]	@ 000d530a 0078
.org 0xd530c
	orrs r0, r1	@ 000d530c 0843
.org 0xd530e
	strh r0, [r3, #0]	@ 000d530e 1880
.org 0xd5310
	lsrs r4, r2, #16	@ 000d5310 140c
.org 0xd5312
	str r4, [sp, #12]	@ 000d5312 0394
.org 0xd5314
	asrs r2, r2, #16	@ 000d5314 1214
.org 0xd5316
	negs r5, r2	@ 000d5316 5542
.org 0xd5318
	str r5, [sp, #24]	@ 000d5318 0695
.org 0xd531a
	cmp r2, #0	@ 000d531a 002a
.org 0xd531c
	blt.n 0xd532a	@ 000d531c 05db
.org 0xd531e
	movs r7, #0	@ 000d531e 0027
.org 0xd5320
	str r7, [sp, #24]	@ 000d5320 0697
.org 0xd5322
	cmp r2, #159	@ 000d5322 9f2a
.org 0xd5324
	ble.n 0xd532a	@ 000d5324 01dd
.org 0xd5326
	subs r2, #160	@ 000d5326 a03a
.org 0xd5328
	str r2, [sp, #24]	@ 000d5328 0692
.org 0xd532a
	ldr r0, [sp, #4]	@ 000d532a 0198
.org 0xd532c
	cmp r0, #0	@ 000d532c 0028
.org 0xd532e
	ble.n 0xd5336	@ 000d532e 02dd
.org 0xd5330
	ldr r1, [sp, #24]	@ 000d5330 0699
.org 0xd5332
	cmp r0, r1	@ 000d5332 8842
.org 0xd5334
	bgt.n 0xd5348	@ 000d5334 08dc
.org 0xd5336
	ldr r1, [pc, #12]	@ 000d5336 0349
.org 0xd5338
	movs r0, #0	@ 000d5338 0020
.org 0xd533a
	strh r0, [r1, #6]	@ 000d533a c880
.org 0xd533c
	b.n 0xd575a	@ 000d533c 0de2
.org 0xd533e
	.byte 0x00	@ 000d533e data
.org 0xd533f
	.byte 0x00	@ 000d533f data
.org 0xd5340
	.byte 0xc0,0x2a,0x00,0x03	@ 000d5340 data
.org 0xd5344
	.byte 0x50,0x0a,0x00,0x02	@ 000d5344 data
.org 0xd5348
	ldr r2, [sp, #4]	@ 000d5348 019a
.org 0xd534a
	ldr r3, [sp, #24]	@ 000d534a 069b
.org 0xd534c
	subs r7, r2, r3	@ 000d534c d71a
.org 0xd534e
	cmp r7, #160	@ 000d534e a02f
.org 0xd5350
	ble.n 0xd5354	@ 000d5350 00dd
.org 0xd5352
	movs r7, #160	@ 000d5352 a027
.org 0xd5354
	ldr r4, [sp, #4]	@ 000d5354 019c
.org 0xd5356
	asrs r0, r4, #5	@ 000d5356 6011
.org 0xd5358
	cmp r0, #4	@ 000d5358 0428
.org 0xd535a
	ble.n 0xd5362	@ 000d535a 02dd
.org 0xd535c
	movs r5, #4	@ 000d535c 0425
.org 0xd535e
	str r5, [sp, #16]	@ 000d535e 0495
.org 0xd5360
	b.n 0xd5368	@ 000d5360 02e0
.org 0xd5362
	lsls r0, r0, #24	@ 000d5362 0006
.org 0xd5364
	lsrs r0, r0, #24	@ 000d5364 000e
.org 0xd5366
	str r0, [sp, #16]	@ 000d5366 0490
.org 0xd5368
	adds r0, r7, #1	@ 000d5368 781c
.org 0xd536a
	lsls r4, r0, #1	@ 000d536a 4400
.org 0xd536c
	adds r0, r4, #0	@ 000d536c 201c
.org 0xd536e
	bl 0xa70	@ 000d536e 2bf77ffb
.org 0xd5372
	mov sl, r0	@ 000d5372 8246
.org 0xd5374
	cmp r0, #0	@ 000d5374 0028
.org 0xd5376
	bne.n 0xd537a	@ 000d5376 00d1
.org 0xd5378
	b.n 0xd575c	@ 000d5378 f0e1
.org 0xd537a
	movs r0, #0	@ 000d537a 0020
.org 0xd537c
	mov r1, sl	@ 000d537c 5146
.org 0xd537e
	adds r2, r4, #0	@ 000d537e 221c
.org 0xd5380
	bl 0xab4	@ 000d5380 2bf798fb
.org 0xd5384
	ldr r0, [sp, #24]	@ 000d5384 0698
.org 0xd5386
	cmp r0, #0	@ 000d5386 0028
.org 0xd5388
	beq.n 0xd53a2	@ 000d5388 0bd0
.org 0xd538a
	ldr r1, [sp, #4]	@ 000d538a 0199
.org 0xd538c
	adds r0, r1, #0	@ 000d538c 081c
.org 0xd538e
	muls r0, r1	@ 000d538e 4843
.org 0xd5390
	ldr r2, [sp, #24]	@ 000d5390 069a
.org 0xd5392
	adds r1, r2, #0	@ 000d5392 111c
.org 0xd5394
	muls r1, r2	@ 000d5394 5143
.org 0xd5396
	subs r0, r0, r1	@ 000d5396 401a
.org 0xd5398
	bl 0x128bf4	@ 000d5398 53f02cfc
.org 0xd539c
	mov r3, sl	@ 000d539c 5346
.org 0xd539e
	strh r0, [r3, #0]	@ 000d539e 1880
.org 0xd53a0
	b.n 0xd53aa	@ 000d53a0 03e0
.org 0xd53a2
	mov r4, sp	@ 000d53a2 6c46
.org 0xd53a4
	ldrh r5, [r4, #4]	@ 000d53a4 a588
.org 0xd53a6
	mov r4, sl	@ 000d53a6 5446
.org 0xd53a8
	strh r5, [r4, #0]	@ 000d53a8 2580
.org 0xd53aa
	movs r0, #0	@ 000d53aa 0020
.org 0xd53ac
	mov r8, r0	@ 000d53ac 8046
.org 0xd53ae
	movs r6, #0	@ 000d53ae 0026
.org 0xd53b0
	movs r1, #0	@ 000d53b0 0021
.org 0xd53b2
	movs r0, #1	@ 000d53b2 0120
.org 0xd53b4
	ldr r2, [sp, #16]	@ 000d53b4 049a
.org 0xd53b6
	lsls r0, r2	@ 000d53b6 9040
.org 0xd53b8
	cmp r7, r0	@ 000d53b8 8742
.org 0xd53ba
	ble.n 0xd53be	@ 000d53ba 00dd
.org 0xd53bc
	movs r1, #1	@ 000d53bc 0121
.org 0xd53be
	str r1, [sp, #20]	@ 000d53be 0591
.org 0xd53c0
	cmp r1, #0	@ 000d53c0 0029
.org 0xd53c2
	beq.n 0xd5434	@ 000d53c2 37d0
.org 0xd53c4
	cmp r8, r7	@ 000d53c4 b845
.org 0xd53c6
	bhi.n 0xd5424	@ 000d53c6 2dd8
.org 0xd53c8
	mov r9, r0	@ 000d53c8 8146
.org 0xd53ca
	mov r5, sl	@ 000d53ca 5546
.org 0xd53cc
	lsls r0, r0, #1	@ 000d53cc 4000
.org 0xd53ce
	adds r4, r0, r5	@ 000d53ce 4419
.org 0xd53d0
	ldr r0, [sp, #4]	@ 000d53d0 0198
.org 0xd53d2
	adds r3, r0, #0	@ 000d53d2 031c
.org 0xd53d4
	muls r3, r0	@ 000d53d4 4343
.org 0xd53d6
	str r3, [sp, #28]	@ 000d53d6 0793
.org 0xd53d8
	adds r1, r6, #0	@ 000d53d8 311c
.org 0xd53da
	add r1, r9	@ 000d53da 4944
.org 0xd53dc
	mov r8, r1	@ 000d53dc 8846
.org 0xd53de
	ldr r0, [sp, #24]	@ 000d53de 0698
.org 0xd53e0
	add r0, r8	@ 000d53e0 4044
.org 0xd53e2
	adds r2, r0, #0	@ 000d53e2 021c
.org 0xd53e4
	muls r2, r0	@ 000d53e4 4243
.org 0xd53e6
	adds r0, r2, #0	@ 000d53e6 101c
.org 0xd53e8
	ldr r3, [sp, #28]	@ 000d53e8 079b
.org 0xd53ea
	subs r0, r3, r0	@ 000d53ea 181a
.org 0xd53ec
	bl 0x128bf4	@ 000d53ec 53f002fc
.org 0xd53f0
	strh r0, [r4, #0]	@ 000d53f0 2080
.org 0xd53f2
	ldrh r1, [r5, #0]	@ 000d53f2 2988
.org 0xd53f4
	ldrh r0, [r4, #0]	@ 000d53f4 2088
.org 0xd53f6
	subs r0, r1, r0	@ 000d53f6 081a
.org 0xd53f8
	lsls r3, r0, #16	@ 000d53f8 0304
.org 0xd53fa
	ldr r0, [sp, #16]	@ 000d53fa 0498
.org 0xd53fc
	asrs r3, r0	@ 000d53fc 0341
.org 0xd53fe
	lsls r1, r1, #16	@ 000d53fe 0904
.org 0xd5400
	adds r5, #2	@ 000d5400 0235
.org 0xd5402
	adds r4, #2	@ 000d5402 0234
.org 0xd5404
	adds r6, #1	@ 000d5404 0136
.org 0xd5406
	cmp r6, r8	@ 000d5406 4645
.org 0xd5408
	bcs.n 0xd5420	@ 000d5408 0ad2
.org 0xd540a
	lsls r2, r6, #1	@ 000d540a 7200
.org 0xd540c
	add r2, sl	@ 000d540c 5244
.org 0xd540e
	subs r1, r1, r3	@ 000d540e c91a
.org 0xd5410
	lsrs r0, r1, #16	@ 000d5410 080c
.org 0xd5412
	strh r0, [r2, #0]	@ 000d5412 1080
.org 0xd5414
	adds r2, #2	@ 000d5414 0232
.org 0xd5416
	adds r5, #2	@ 000d5416 0235
.org 0xd5418
	adds r4, #2	@ 000d5418 0234
.org 0xd541a
	adds r6, #1	@ 000d541a 0136
.org 0xd541c
	cmp r6, r8	@ 000d541c 4645
.org 0xd541e
	bcc.n 0xd540e	@ 000d541e f6d3
.org 0xd5420
	cmp r6, r7	@ 000d5420 be42
.org 0xd5422
	bls.n 0xd53d8	@ 000d5422 d9d9
.org 0xd5424
	ldr r1, [sp, #20]	@ 000d5424 0599
.org 0xd5426
	cmp r1, #0	@ 000d5426 0029
.org 0xd5428
	beq.n 0xd5434	@ 000d5428 04d0
.org 0xd542a
	movs r0, #1	@ 000d542a 0120
.org 0xd542c
	ldr r2, [sp, #16]	@ 000d542c 049a
.org 0xd542e
	lsls r0, r2	@ 000d542e 9040
.org 0xd5430
	subs r6, r7, r0	@ 000d5430 3e1a
.org 0xd5432
	b.n 0xd5436	@ 000d5432 00e0
.org 0xd5434
	movs r6, #0	@ 000d5434 0026
.org 0xd5436
	cmp r6, r7	@ 000d5436 be42
.org 0xd5438
	bhi.n 0xd5460	@ 000d5438 12d8
.org 0xd543a
	ldr r3, [sp, #4]	@ 000d543a 019b
.org 0xd543c
	adds r5, r3, #0	@ 000d543c 1d1c
.org 0xd543e
	muls r5, r3	@ 000d543e 5d43
.org 0xd5440
	lsls r0, r6, #1	@ 000d5440 7000
.org 0xd5442
	mov r1, sl	@ 000d5442 5146
.org 0xd5444
	adds r4, r0, r1	@ 000d5444 4418
.org 0xd5446
	ldr r2, [sp, #24]	@ 000d5446 069a
.org 0xd5448
	adds r0, r6, r2	@ 000d5448 b018
.org 0xd544a
	adds r3, r0, #0	@ 000d544a 031c
.org 0xd544c
	muls r3, r0	@ 000d544c 4343
.org 0xd544e
	adds r0, r3, #0	@ 000d544e 181c
.org 0xd5450
	subs r0, r5, r0	@ 000d5450 281a
.org 0xd5452
	bl 0x128bf4	@ 000d5452 53f0cffb
.org 0xd5456
	strh r0, [r4, #0]	@ 000d5456 2080
.org 0xd5458
	adds r4, #2	@ 000d5458 0234
.org 0xd545a
	adds r6, #1	@ 000d545a 0136
.org 0xd545c
	cmp r6, r7	@ 000d545c be42
.org 0xd545e
	bls.n 0xd5446	@ 000d545e f2d9
.org 0xd5460
	movs r0, #2	@ 000d5460 0220
.org 0xd5462
	ldr r4, [sp, #16]	@ 000d5462 049c
.org 0xd5464
	lsls r0, r4	@ 000d5464 a040
.org 0xd5466
	movs r6, #0	@ 000d5466 0026
.org 0xd5468
	cmp r8, r0	@ 000d5468 8045
.org 0xd546a
	bls.n 0xd5470	@ 000d546a 01d9
.org 0xd546c
	mov r5, r8	@ 000d546c 4546
.org 0xd546e
	subs r6, r5, r0	@ 000d546e 2e1a
.org 0xd5470
	ldr r0, [sp, #20]	@ 000d5470 0598
.org 0xd5472
	cmp r0, #0	@ 000d5472 0028
.org 0xd5474
	beq.n 0xd5482	@ 000d5474 05d0
.org 0xd5476
	movs r0, #1	@ 000d5476 0120
.org 0xd5478
	ldr r1, [sp, #16]	@ 000d5478 0499
.org 0xd547a
	lsls r0, r1	@ 000d547a 8840
.org 0xd547c
	subs r0, r7, r0	@ 000d547c 381a
.org 0xd547e
	mov r8, r0	@ 000d547e 8046
.org 0xd5480
	b.n 0xd5486	@ 000d5480 01e0
.org 0xd5482
	movs r2, #0	@ 000d5482 0022
.org 0xd5484
	mov r8, r2	@ 000d5484 9046
.org 0xd5486
	cmp r6, r8	@ 000d5486 4645
.org 0xd5488
	beq.n 0xd54c0	@ 000d5488 1ad0
.org 0xd548a
	lsls r0, r6, #1	@ 000d548a 7000
.org 0xd548c
	add r0, sl	@ 000d548c 5044
.org 0xd548e
	ldrh r4, [r0, #0]	@ 000d548e 0488
.org 0xd5490
	mov r3, r8	@ 000d5490 4346
.org 0xd5492
	lsls r0, r3, #1	@ 000d5492 5800
.org 0xd5494
	add r0, sl	@ 000d5494 5044
.org 0xd5496
	ldrh r0, [r0, #0]	@ 000d5496 0088
.org 0xd5498
	subs r0, r4, r0	@ 000d5498 201a
.org 0xd549a
	lsls r0, r0, #16	@ 000d549a 0004
.org 0xd549c
	subs r1, r3, r6	@ 000d549c 991b
.org 0xd549e
	bl 0x129120	@ 000d549e 53f03ffe
.org 0xd54a2
	adds r3, r0, #0	@ 000d54a2 031c
.org 0xd54a4
	lsls r1, r4, #16	@ 000d54a4 2104
.org 0xd54a6
	adds r6, #1	@ 000d54a6 0136
.org 0xd54a8
	cmp r6, r8	@ 000d54a8 4645
.org 0xd54aa
	bcs.n 0xd54c0	@ 000d54aa 09d2
.org 0xd54ac
	lsls r0, r6, #1	@ 000d54ac 7000
.org 0xd54ae
	mov r4, sl	@ 000d54ae 5446
.org 0xd54b0
	adds r2, r0, r4	@ 000d54b0 0219
.org 0xd54b2
	subs r1, r1, r3	@ 000d54b2 c91a
.org 0xd54b4
	lsrs r0, r1, #16	@ 000d54b4 080c
.org 0xd54b6
	strh r0, [r2, #0]	@ 000d54b6 1080
.org 0xd54b8
	adds r2, #2	@ 000d54b8 0232
.org 0xd54ba
	adds r6, #1	@ 000d54ba 0136
.org 0xd54bc
	cmp r6, r8	@ 000d54bc 4645
.org 0xd54be
	bcc.n 0xd54b2	@ 000d54be f8d3
.org 0xd54c0
	movs r4, #160	@ 000d54c0 a024
.org 0xd54c2
	lsls r4, r4, #1	@ 000d54c2 6400
.org 0xd54c4
	adds r0, r4, #0	@ 000d54c4 201c
.org 0xd54c6
	bl 0xa70	@ 000d54c6 2bf7d3fa
.org 0xd54ca
	mov r9, r0	@ 000d54ca 8146
.org 0xd54cc
	cmp r0, #0	@ 000d54cc 0028
.org 0xd54ce
	bne.n 0xd54d2	@ 000d54ce 00d1
.org 0xd54d0
	b.n 0xd5756	@ 000d54d0 41e1
.org 0xd54d2
	movs r0, #0	@ 000d54d2 0020
.org 0xd54d4
	mov r1, r9	@ 000d54d4 4946
.org 0xd54d6
	adds r2, r4, #0	@ 000d54d6 221c
.org 0xd54d8
	bl 0xab4	@ 000d54d8 2bf7ecfa
.org 0xd54dc
	ldr r5, [sp, #12]	@ 000d54dc 039d
.org 0xd54de
	lsls r0, r5, #16	@ 000d54de 2804
.org 0xd54e0
	lsrs r1, r0, #16	@ 000d54e0 010c
.org 0xd54e2
	mov ip, r0	@ 000d54e2 8446
.org 0xd54e4
	cmp r1, #159	@ 000d54e4 9f29
.org 0xd54e6
	bhi.n 0xd552e	@ 000d54e6 22d8
.org 0xd54e8
	mov r7, sl	@ 000d54e8 5746
.org 0xd54ea
	ldrh r2, [r7, #2]	@ 000d54ea 7a88
.org 0xd54ec
	ldr r1, [sp, #8]	@ 000d54ec 0299
.org 0xd54ee
	subs r0, r1, r2	@ 000d54ee 881a
.org 0xd54f0
	lsls r0, r0, #16	@ 000d54f0 0004
.org 0xd54f2
	lsrs r1, r0, #16	@ 000d54f2 010c
.org 0xd54f4
	cmp r0, #0	@ 000d54f4 0028
.org 0xd54f6
	bge.n 0xd54fa	@ 000d54f6 00da
.org 0xd54f8
	movs r1, #0	@ 000d54f8 0021
.org 0xd54fa
	lsls r0, r1, #16	@ 000d54fa 0804
.org 0xd54fc
	asrs r0, r0, #16	@ 000d54fc 0014
.org 0xd54fe
	cmp r0, #240	@ 000d54fe f028
.org 0xd5500
	ble.n 0xd5504	@ 000d5500 00dd
.org 0xd5502
	movs r1, #240	@ 000d5502 f021
.org 0xd5504
	ldr r3, [sp, #8]	@ 000d5504 029b
.org 0xd5506
	adds r0, r2, r3	@ 000d5506 d018
.org 0xd5508
	lsls r0, r0, #16	@ 000d5508 0004
.org 0xd550a
	lsrs r3, r0, #16	@ 000d550a 030c
.org 0xd550c
	cmp r0, #0	@ 000d550c 0028
.org 0xd550e
	bge.n 0xd5512	@ 000d550e 00da
.org 0xd5510
	movs r3, #0	@ 000d5510 0023
.org 0xd5512
	lsls r0, r3, #16	@ 000d5512 1804
.org 0xd5514
	asrs r0, r0, #16	@ 000d5514 0014
.org 0xd5516
	cmp r0, #240	@ 000d5516 f028
.org 0xd5518
	ble.n 0xd551c	@ 000d5518 00dd
.org 0xd551a
	movs r3, #240	@ 000d551a f023
.org 0xd551c
	mov r4, ip	@ 000d551c 6446
.org 0xd551e
	asrs r2, r4, #15	@ 000d551e e213
.org 0xd5520
	add r2, r9	@ 000d5520 4a44
.org 0xd5522
	lsls r1, r1, #16	@ 000d5522 0904
.org 0xd5524
	asrs r1, r1, #8	@ 000d5524 0912
.org 0xd5526
	lsls r0, r3, #16	@ 000d5526 1804
.org 0xd5528
	asrs r0, r0, #16	@ 000d5528 0014
.org 0xd552a
	orrs r0, r1	@ 000d552a 0843
.org 0xd552c
	strh r0, [r2, #0]	@ 000d552c 1080
.org 0xd552e
	mov r5, ip	@ 000d552e 6546
.org 0xd5530
	asrs r1, r5, #16	@ 000d5530 2914
.org 0xd5532
	ldr r7, [sp, #4]	@ 000d5532 019f
.org 0xd5534
	negs r7, r7	@ 000d5534 7f42
.org 0xd5536
	str r7, [sp, #32]	@ 000d5536 0897
.org 0xd5538
	cmp r1, #0	@ 000d5538 0029
.org 0xd553a
	blt.n 0xd5632	@ 000d553a 7adb
.org 0xd553c
	ldr r0, [sp, #4]	@ 000d553c 0198
.org 0xd553e
	adds r0, #160	@ 000d553e a030
.org 0xd5540
	cmp r1, r0	@ 000d5540 8142
.org 0xd5542
	bge.n 0xd5632	@ 000d5542 76da
.org 0xd5544
	adds r6, r1, #0	@ 000d5544 0e1c
.org 0xd5546
	subs r6, #160	@ 000d5546 a03e
.org 0xd5548
	cmp r1, #159	@ 000d5548 9f29
.org 0xd554a
	bgt.n 0xd554e	@ 000d554a 00dc
.org 0xd554c
	movs r6, #1	@ 000d554c 0126
.org 0xd554e
	ldr r2, [sp, #4]	@ 000d554e 019a
.org 0xd5550
	subs r0, r1, r2	@ 000d5550 881a
.org 0xd5552
	mov r8, r2	@ 000d5552 9046
.org 0xd5554
	cmp r0, #0	@ 000d5554 0028
.org 0xd5556
	bge.n 0xd555c	@ 000d5556 01da
.org 0xd5558
	adds r3, r1, #1	@ 000d5558 4b1c
.org 0xd555a
	mov r8, r3	@ 000d555a 9846
.org 0xd555c
	ldr r4, [sp, #0]	@ 000d555c 009c
.org 0xd555e
	ldr r4, [r4, #96]	@ 000d555e 246e
.org 0xd5560
	str r4, [sp, #36]	@ 000d5560 0994
.org 0xd5562
	cmp r4, #0	@ 000d5562 002c
.org 0xd5564
	beq.n 0xd55d4	@ 000d5564 36d0
.org 0xd5566
	cmp r6, r8	@ 000d5566 4645
.org 0xd5568
	bcs.n 0xd5632	@ 000d5568 63d2
.org 0xd556a
	lsls r0, r6, #1	@ 000d556a 7000
.org 0xd556c
	lsls r1, r1, #1	@ 000d556c 4900
.org 0xd556e
	add r1, r9	@ 000d556e 4944
.org 0xd5570
	subs r5, r1, r0	@ 000d5570 0d1a
.org 0xd5572
	ldr r7, [sp, #24]	@ 000d5572 069f
.org 0xd5574
	lsls r1, r7, #1	@ 000d5574 7900
.org 0xd5576
	mov r2, sl	@ 000d5576 5246
.org 0xd5578
	subs r1, r2, r1	@ 000d5578 511a
.org 0xd557a
	adds r4, r0, r1	@ 000d557a 4418
.org 0xd557c
	ldrh r3, [r4, #0]	@ 000d557c 2388
.org 0xd557e
	ldr r7, [sp, #8]	@ 000d557e 029f
.org 0xd5580
	subs r0, r7, r3	@ 000d5580 f81a
.org 0xd5582
	ldr r2, [sp, #24]	@ 000d5582 069a
.org 0xd5584
	adds r1, r2, r6	@ 000d5584 9119
.org 0xd5586
	ldr r7, [sp, #36]	@ 000d5586 099f
.org 0xd5588
	muls r1, r7	@ 000d5588 7943
.org 0xd558a
	lsrs r2, r1, #8	@ 000d558a 0a0a
.org 0xd558c
	adds r0, r0, r2	@ 000d558c 8018
.org 0xd558e
	lsls r0, r0, #16	@ 000d558e 0004
.org 0xd5590
	lsrs r1, r0, #16	@ 000d5590 010c
.org 0xd5592
	cmp r0, #0	@ 000d5592 0028
.org 0xd5594
	bge.n 0xd5598	@ 000d5594 00da
.org 0xd5596
	movs r1, #0	@ 000d5596 0021
.org 0xd5598
	lsls r0, r1, #16	@ 000d5598 0804
.org 0xd559a
	asrs r0, r0, #16	@ 000d559a 0014
.org 0xd559c
	cmp r0, #240	@ 000d559c f028
.org 0xd559e
	ble.n 0xd55a2	@ 000d559e 00dd
.org 0xd55a0
	movs r1, #240	@ 000d55a0 f021
.org 0xd55a2
	ldr r7, [sp, #8]	@ 000d55a2 029f
.org 0xd55a4
	adds r0, r3, r7	@ 000d55a4 d819
.org 0xd55a6
	adds r0, r0, r2	@ 000d55a6 8018
.org 0xd55a8
	lsls r0, r0, #16	@ 000d55a8 0004
.org 0xd55aa
	lsrs r3, r0, #16	@ 000d55aa 030c
.org 0xd55ac
	cmp r0, #0	@ 000d55ac 0028
.org 0xd55ae
	bge.n 0xd55b2	@ 000d55ae 00da
.org 0xd55b0
	movs r3, #0	@ 000d55b0 0023
.org 0xd55b2
	lsls r0, r3, #16	@ 000d55b2 1804
.org 0xd55b4
	asrs r0, r0, #16	@ 000d55b4 0014
.org 0xd55b6
	cmp r0, #240	@ 000d55b6 f028
.org 0xd55b8
	ble.n 0xd55bc	@ 000d55b8 00dd
.org 0xd55ba
	movs r3, #240	@ 000d55ba f023
.org 0xd55bc
	lsls r1, r1, #16	@ 000d55bc 0904
.org 0xd55be
	asrs r1, r1, #8	@ 000d55be 0912
.org 0xd55c0
	lsls r0, r3, #16	@ 000d55c0 1804
.org 0xd55c2
	asrs r0, r0, #16	@ 000d55c2 0014
.org 0xd55c4
	orrs r0, r1	@ 000d55c4 0843
.org 0xd55c6
	strh r0, [r5, #0]	@ 000d55c6 2880
.org 0xd55c8
	subs r5, #2	@ 000d55c8 023d
.org 0xd55ca
	adds r4, #2	@ 000d55ca 0234
.org 0xd55cc
	adds r6, #1	@ 000d55cc 0136
.org 0xd55ce
	cmp r6, r8	@ 000d55ce 4645
.org 0xd55d0
	bcc.n 0xd557c	@ 000d55d0 d4d3
.org 0xd55d2
	b.n 0xd5632	@ 000d55d2 2ee0
.org 0xd55d4
	cmp r6, r8	@ 000d55d4 4645
.org 0xd55d6
	bcs.n 0xd5632	@ 000d55d6 2cd2
.org 0xd55d8
	lsls r0, r6, #1	@ 000d55d8 7000
.org 0xd55da
	lsls r1, r1, #1	@ 000d55da 4900
.org 0xd55dc
	add r1, r9	@ 000d55dc 4944
.org 0xd55de
	subs r5, r1, r0	@ 000d55de 0d1a
.org 0xd55e0
	ldr r2, [sp, #24]	@ 000d55e0 069a
.org 0xd55e2
	lsls r1, r2, #1	@ 000d55e2 5100
.org 0xd55e4
	mov r3, sl	@ 000d55e4 5346
.org 0xd55e6
	subs r1, r3, r1	@ 000d55e6 591a
.org 0xd55e8
	adds r4, r0, r1	@ 000d55e8 4418
.org 0xd55ea
	ldrh r2, [r4, #0]	@ 000d55ea 2288
.org 0xd55ec
	ldr r7, [sp, #8]	@ 000d55ec 029f
.org 0xd55ee
	subs r0, r7, r2	@ 000d55ee b81a
.org 0xd55f0
	lsls r0, r0, #16	@ 000d55f0 0004
.org 0xd55f2
	lsrs r1, r0, #16	@ 000d55f2 010c
.org 0xd55f4
	cmp r0, #0	@ 000d55f4 0028
.org 0xd55f6
	bge.n 0xd55fa	@ 000d55f6 00da
.org 0xd55f8
	movs r1, #0	@ 000d55f8 0021
.org 0xd55fa
	lsls r0, r1, #16	@ 000d55fa 0804
.org 0xd55fc
	asrs r0, r0, #16	@ 000d55fc 0014
.org 0xd55fe
	cmp r0, #240	@ 000d55fe f028
.org 0xd5600
	ble.n 0xd5604	@ 000d5600 00dd
.org 0xd5602
	movs r1, #240	@ 000d5602 f021
.org 0xd5604
	ldr r3, [sp, #8]	@ 000d5604 029b
.org 0xd5606
	adds r0, r2, r3	@ 000d5606 d018
.org 0xd5608
	lsls r0, r0, #16	@ 000d5608 0004
.org 0xd560a
	lsrs r3, r0, #16	@ 000d560a 030c
.org 0xd560c
	cmp r0, #0	@ 000d560c 0028
.org 0xd560e
	bge.n 0xd5612	@ 000d560e 00da
.org 0xd5610
	movs r3, #0	@ 000d5610 0023
.org 0xd5612
	lsls r0, r3, #16	@ 000d5612 1804
.org 0xd5614
	asrs r0, r0, #16	@ 000d5614 0014
.org 0xd5616
	cmp r0, #240	@ 000d5616 f028
.org 0xd5618
	ble.n 0xd561c	@ 000d5618 00dd
.org 0xd561a
	movs r3, #240	@ 000d561a f023
.org 0xd561c
	lsls r1, r1, #16	@ 000d561c 0904
.org 0xd561e
	asrs r1, r1, #8	@ 000d561e 0912
.org 0xd5620
	lsls r0, r3, #16	@ 000d5620 1804
.org 0xd5622
	asrs r0, r0, #16	@ 000d5622 0014
.org 0xd5624
	orrs r0, r1	@ 000d5624 0843
.org 0xd5626
	strh r0, [r5, #0]	@ 000d5626 2880
.org 0xd5628
	subs r5, #2	@ 000d5628 023d
.org 0xd562a
	adds r4, #2	@ 000d562a 0234
.org 0xd562c
	adds r6, #1	@ 000d562c 0136
.org 0xd562e
	cmp r6, r8	@ 000d562e 4645
.org 0xd5630
	bcc.n 0xd55ea	@ 000d5630 dbd3
.org 0xd5632
	mov r4, ip	@ 000d5632 6446
.org 0xd5634
	asrs r1, r4, #16	@ 000d5634 2114
.org 0xd5636
	ldr r5, [sp, #32]	@ 000d5636 089d
.org 0xd5638
	cmp r1, r5	@ 000d5638 a942
.org 0xd563a
	blt.n 0xd5734	@ 000d563a 7bdb
.org 0xd563c
	cmp r1, #159	@ 000d563c 9f29
.org 0xd563e
	bgt.n 0xd5734	@ 000d563e 79dc
.org 0xd5640
	negs r6, r1	@ 000d5640 4e42
.org 0xd5642
	cmp r1, #0	@ 000d5642 0029
.org 0xd5644
	blt.n 0xd5648	@ 000d5644 00db
.org 0xd5646
	movs r6, #1	@ 000d5646 0126
.org 0xd5648
	ldr r7, [sp, #4]	@ 000d5648 019f
.org 0xd564a
	adds r0, r1, r7	@ 000d564a c819
.org 0xd564c
	cmp r0, #159	@ 000d564c 9f28
.org 0xd564e
	ble.n 0xd5656	@ 000d564e 02dd
.org 0xd5650
	movs r0, #160	@ 000d5650 a020
.org 0xd5652
	subs r0, r0, r1	@ 000d5652 401a
.org 0xd5654
	b.n 0xd5658	@ 000d5654 00e0
.org 0xd5656
	ldr r0, [sp, #4]	@ 000d5656 0198
.org 0xd5658
	mov r8, r0	@ 000d5658 8046
.org 0xd565a
	ldr r1, [sp, #0]	@ 000d565a 0099
.org 0xd565c
	ldr r1, [r1, #96]	@ 000d565c 096e
.org 0xd565e
	str r1, [sp, #36]	@ 000d565e 0991
.org 0xd5660
	cmp r1, #0	@ 000d5660 0029
.org 0xd5662
	beq.n 0xd56d4	@ 000d5662 37d0
.org 0xd5664
	cmp r6, r8	@ 000d5664 4645
.org 0xd5666
	bcs.n 0xd5734	@ 000d5666 65d2
.org 0xd5668
	lsls r0, r6, #1	@ 000d5668 7000
.org 0xd566a
	mov r2, ip	@ 000d566a 6246
.org 0xd566c
	asrs r1, r2, #15	@ 000d566c d113
.org 0xd566e
	add r1, r9	@ 000d566e 4944
.org 0xd5670
	adds r2, r0, r1	@ 000d5670 4218
.org 0xd5672
	ldr r3, [sp, #24]	@ 000d5672 069b
.org 0xd5674
	lsls r1, r3, #1	@ 000d5674 5900
.org 0xd5676
	mov r4, sl	@ 000d5676 5446
.org 0xd5678
	subs r1, r4, r1	@ 000d5678 611a
.org 0xd567a
	adds r5, r0, r1	@ 000d567a 4518
.org 0xd567c
	ldrh r4, [r5, #0]	@ 000d567c 2c88
.org 0xd567e
	ldr r7, [sp, #8]	@ 000d567e 029f
.org 0xd5680
	subs r0, r7, r4	@ 000d5680 381b
.org 0xd5682
	ldr r3, [sp, #24]	@ 000d5682 069b
.org 0xd5684
	adds r1, r3, r6	@ 000d5684 9919
.org 0xd5686
	ldr r7, [sp, #36]	@ 000d5686 099f
.org 0xd5688
	muls r1, r7	@ 000d5688 7943
.org 0xd568a
	lsrs r3, r1, #8	@ 000d568a 0b0a
.org 0xd568c
	subs r0, r0, r3	@ 000d568c c01a
.org 0xd568e
	lsls r0, r0, #16	@ 000d568e 0004
.org 0xd5690
	lsrs r1, r0, #16	@ 000d5690 010c
.org 0xd5692
	cmp r0, #0	@ 000d5692 0028
.org 0xd5694
	bge.n 0xd5698	@ 000d5694 00da
.org 0xd5696
	movs r1, #0	@ 000d5696 0021
.org 0xd5698
	lsls r0, r1, #16	@ 000d5698 0804
.org 0xd569a
	asrs r0, r0, #16	@ 000d569a 0014
.org 0xd569c
	cmp r0, #240	@ 000d569c f028
.org 0xd569e
	ble.n 0xd56a2	@ 000d569e 00dd
.org 0xd56a0
	movs r1, #240	@ 000d56a0 f021
.org 0xd56a2
	ldr r7, [sp, #8]	@ 000d56a2 029f
.org 0xd56a4
	adds r0, r4, r7	@ 000d56a4 e019
.org 0xd56a6
	subs r0, r0, r3	@ 000d56a6 c01a
.org 0xd56a8
	lsls r0, r0, #16	@ 000d56a8 0004
.org 0xd56aa
	lsrs r3, r0, #16	@ 000d56aa 030c
.org 0xd56ac
	cmp r0, #0	@ 000d56ac 0028
.org 0xd56ae
	bge.n 0xd56b2	@ 000d56ae 00da
.org 0xd56b0
	movs r3, #0	@ 000d56b0 0023
.org 0xd56b2
	lsls r0, r3, #16	@ 000d56b2 1804
.org 0xd56b4
	asrs r0, r0, #16	@ 000d56b4 0014
.org 0xd56b6
	cmp r0, #240	@ 000d56b6 f028
.org 0xd56b8
	ble.n 0xd56bc	@ 000d56b8 00dd
.org 0xd56ba
	movs r3, #240	@ 000d56ba f023
.org 0xd56bc
	lsls r1, r1, #16	@ 000d56bc 0904
.org 0xd56be
	asrs r1, r1, #8	@ 000d56be 0912
.org 0xd56c0
	lsls r0, r3, #16	@ 000d56c0 1804
.org 0xd56c2
	asrs r0, r0, #16	@ 000d56c2 0014
.org 0xd56c4
	orrs r0, r1	@ 000d56c4 0843
.org 0xd56c6
	strh r0, [r2, #0]	@ 000d56c6 1080
.org 0xd56c8
	adds r2, #2	@ 000d56c8 0232
.org 0xd56ca
	adds r5, #2	@ 000d56ca 0235
.org 0xd56cc
	adds r6, #1	@ 000d56cc 0136
.org 0xd56ce
	cmp r6, r8	@ 000d56ce 4645
.org 0xd56d0
	bcc.n 0xd567c	@ 000d56d0 d4d3
.org 0xd56d2
	b.n 0xd5734	@ 000d56d2 2fe0
.org 0xd56d4
	cmp r6, r8	@ 000d56d4 4645
.org 0xd56d6
	bcs.n 0xd5734	@ 000d56d6 2dd2
.org 0xd56d8
	lsls r0, r6, #1	@ 000d56d8 7000
.org 0xd56da
	mov r2, ip	@ 000d56da 6246
.org 0xd56dc
	asrs r1, r2, #15	@ 000d56dc d113
.org 0xd56de
	add r1, r9	@ 000d56de 4944
.org 0xd56e0
	adds r2, r0, r1	@ 000d56e0 4218
.org 0xd56e2
	ldr r3, [sp, #24]	@ 000d56e2 069b
.org 0xd56e4
	lsls r1, r3, #1	@ 000d56e4 5900
.org 0xd56e6
	mov r4, sl	@ 000d56e6 5446
.org 0xd56e8
	subs r1, r4, r1	@ 000d56e8 611a
.org 0xd56ea
	adds r4, r0, r1	@ 000d56ea 4418
.org 0xd56ec
	ldrh r3, [r4, #0]	@ 000d56ec 2388
.org 0xd56ee
	ldr r5, [sp, #8]	@ 000d56ee 029d
.org 0xd56f0
	subs r0, r5, r3	@ 000d56f0 e81a
.org 0xd56f2
	lsls r0, r0, #16	@ 000d56f2 0004
.org 0xd56f4
	lsrs r1, r0, #16	@ 000d56f4 010c
.org 0xd56f6
	cmp r0, #0	@ 000d56f6 0028
.org 0xd56f8
	bge.n 0xd56fc	@ 000d56f8 00da
.org 0xd56fa
	movs r1, #0	@ 000d56fa 0021
.org 0xd56fc
	lsls r0, r1, #16	@ 000d56fc 0804
.org 0xd56fe
	asrs r0, r0, #16	@ 000d56fe 0014
.org 0xd5700
	cmp r0, #240	@ 000d5700 f028
.org 0xd5702
	ble.n 0xd5706	@ 000d5702 00dd
.org 0xd5704
	movs r1, #240	@ 000d5704 f021
.org 0xd5706
	ldr r7, [sp, #8]	@ 000d5706 029f
.org 0xd5708
	adds r0, r3, r7	@ 000d5708 d819
.org 0xd570a
	lsls r0, r0, #16	@ 000d570a 0004
.org 0xd570c
	lsrs r3, r0, #16	@ 000d570c 030c
.org 0xd570e
	cmp r0, #0	@ 000d570e 0028
.org 0xd5710
	bge.n 0xd5714	@ 000d5710 00da
.org 0xd5712
	movs r3, #0	@ 000d5712 0023
.org 0xd5714
	lsls r0, r3, #16	@ 000d5714 1804
.org 0xd5716
	asrs r0, r0, #16	@ 000d5716 0014
.org 0xd5718
	cmp r0, #240	@ 000d5718 f028
.org 0xd571a
	ble.n 0xd571e	@ 000d571a 00dd
.org 0xd571c
	movs r3, #240	@ 000d571c f023
.org 0xd571e
	lsls r1, r1, #16	@ 000d571e 0904
.org 0xd5720
	asrs r1, r1, #8	@ 000d5720 0912
.org 0xd5722
	lsls r0, r3, #16	@ 000d5722 1804
.org 0xd5724
	asrs r0, r0, #16	@ 000d5724 0014
.org 0xd5726
	orrs r0, r1	@ 000d5726 0843
.org 0xd5728
	strh r0, [r2, #0]	@ 000d5728 1080
.org 0xd572a
	adds r2, #2	@ 000d572a 0232
.org 0xd572c
	adds r4, #2	@ 000d572c 0234
.org 0xd572e
	adds r6, #1	@ 000d572e 0136
.org 0xd5730
	cmp r6, r8	@ 000d5730 4645
.org 0xd5732
	bcc.n 0xd56ec	@ 000d5732 dbd3
.org 0xd5734
	ldr r1, [pc, #52]	@ 000d5734 0d49
.org 0xd5736
	movs r2, #186	@ 000d5736 ba22
.org 0xd5738
	lsls r2, r2, #1	@ 000d5738 5200
.org 0xd573a
	adds r0, r1, r2	@ 000d573a 8818
.org 0xd573c
	mov r3, r9	@ 000d573c 4b46
.org 0xd573e
	str r3, [r0, #0]	@ 000d573e 0360
.org 0xd5740
	movs r4, #188	@ 000d5740 bc24
.org 0xd5742
	lsls r4, r4, #1	@ 000d5742 6400
.org 0xd5744
	adds r1, r1, r4	@ 000d5744 0919
.org 0xd5746
	ldr r0, [pc, #40]	@ 000d5746 0a48
.org 0xd5748
	str r0, [r1, #0]	@ 000d5748 0860
.org 0xd574a
	ldr r5, [pc, #32]	@ 000d574a 084d
.org 0xd574c
	movs r7, #190	@ 000d574c be27
.org 0xd574e
	lsls r7, r7, #1	@ 000d574e 7f00
.org 0xd5750
	adds r1, r5, r7	@ 000d5750 e919
.org 0xd5752
	ldr r0, [pc, #32]	@ 000d5752 0848
.org 0xd5754
	str r0, [r1, #0]	@ 000d5754 0860
.org 0xd5756
	ldr r1, [pc, #32]	@ 000d5756 0849
.org 0xd5758
	movs r0, #160	@ 000d5758 a020
.org 0xd575a
	strh r0, [r1, #10]	@ 000d575a 4881
.org 0xd575c
	add sp, #40	@ 000d575c 0ab0
.org 0xd575e
	pop {r3, r4, r5}	@ 000d575e 38bc
.org 0xd5760
	mov r8, r3	@ 000d5760 9846

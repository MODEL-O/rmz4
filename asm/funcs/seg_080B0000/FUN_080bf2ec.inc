@ FUN_080bf2ec  entry 0x080bf2ec  size 400
.thumb
.org 0xbf2ec
FUN_080bf2ec:
	push {r4, r5, lr}	@ 000bf2ec 30b5
.org 0xbf2ee
	adds r4, r0, #0	@ 000bf2ee 041c
.org 0xbf2f0
	adds r0, #180	@ 000bf2f0 b430
.org 0xbf2f2
	ldrb r0, [r0, #0]	@ 000bf2f2 0078
.org 0xbf2f4
	cmp r0, #1	@ 000bf2f4 0128
.org 0xbf2f6
	beq.n 0xbf368	@ 000bf2f6 37d0
.org 0xbf2f8
	cmp r0, #1	@ 000bf2f8 0128
.org 0xbf2fa
	bgt.n 0xbf302	@ 000bf2fa 02dc
.org 0xbf2fc
	cmp r0, #0	@ 000bf2fc 0028
.org 0xbf2fe
	beq.n 0xbf30e	@ 000bf2fe 06d0
.org 0xbf300
	b.n 0xbf484	@ 000bf300 c0e0
.org 0xbf302
	cmp r0, #2	@ 000bf302 0228
.org 0xbf304
	beq.n 0xbf3d8	@ 000bf304 68d0
.org 0xbf306
	cmp r0, #3	@ 000bf306 0328
.org 0xbf308
	bne.n 0xbf30c	@ 000bf308 00d1
.org 0xbf30a
	b.n 0xbf414	@ 000bf30a 83e0
.org 0xbf30c
	b.n 0xbf484	@ 000bf30c bae0
.org 0xbf30e
	ldr r0, [r4, #84]	@ 000bf30e 606d
.org 0xbf310
	ldr r1, [r4, #88]	@ 000bf310 a16d
.org 0xbf312
	ldr r2, [r4, #104]	@ 000bf312 a26e
.org 0xbf314
	adds r1, r1, r2	@ 000bf314 8918
.org 0xbf316
	bl 0x7f8c	@ 000bf316 48f739fe
.org 0xbf31a
	adds r5, r0, #0	@ 000bf31a 051c
.org 0xbf31c
	ldr r1, [r4, #100]	@ 000bf31c 616e
.org 0xbf31e
	cmp r1, #0	@ 000bf31e 0029
.org 0xbf320
	bge.n 0xbf338	@ 000bf320 0ada
.org 0xbf322
	ldr r0, [r4, #84]	@ 000bf322 606d
.org 0xbf324
	adds r0, r0, r1	@ 000bf324 4018
.org 0xbf326
	ldr r1, [r4, #88]	@ 000bf326 a16d
.org 0xbf328
	ldr r2, [pc, #8]	@ 000bf328 024a
.org 0xbf32a
	adds r1, r1, r2	@ 000bf32a 8918
.org 0xbf32c
	bl 0x816c	@ 000bf32c 48f71eff
.org 0xbf330
	b.n 0xbf346	@ 000bf330 09e0
.org 0xbf332
	.byte 0x00	@ 000bf332 data
.org 0xbf333
	.byte 0x00	@ 000bf333 data
.org 0xbf334
	.byte 0x00,0xf8,0xff,0xff	@ 000bf334 data
.org 0xbf338
	ldr r0, [r4, #84]	@ 000bf338 606d
.org 0xbf33a
	adds r0, r0, r1	@ 000bf33a 4018
.org 0xbf33c
	ldr r1, [r4, #88]	@ 000bf33c a16d
.org 0xbf33e
	ldr r2, [pc, #36]	@ 000bf33e 094a
.org 0xbf340
	adds r1, r1, r2	@ 000bf340 8918
.org 0xbf342
	bl 0x834c	@ 000bf342 49f703f8
.org 0xbf346
	cmp r5, #0	@ 000bf346 002d
.org 0xbf348
	beq.n 0xbf3a2	@ 000bf348 2bd0
.org 0xbf34a
	cmp r0, #0	@ 000bf34a 0028
.org 0xbf34c
	bne.n 0xbf350	@ 000bf34c 00d1
.org 0xbf34e
	b.n 0xbf484	@ 000bf34e 99e0
.org 0xbf350
	ldr r0, [r4, #100]	@ 000bf350 606e
.org 0xbf352
	movs r1, #3	@ 000bf352 0321
.org 0xbf354
	cmp r0, #0	@ 000bf354 0028
.org 0xbf356
	bge.n 0xbf35a	@ 000bf356 00da
.org 0xbf358
	movs r1, #2	@ 000bf358 0221
.org 0xbf35a
	adds r0, r4, #0	@ 000bf35a 201c
.org 0xbf35c
	adds r0, #180	@ 000bf35c b430
.org 0xbf35e
	strb r1, [r0, #0]	@ 000bf35e 0170
.org 0xbf360
	b.n 0xbf462	@ 000bf360 7fe0
.org 0xbf362
	.byte 0x00	@ 000bf362 data
.org 0xbf363
	.byte 0x00	@ 000bf363 data
.org 0xbf364
	.byte 0x00,0xf8,0xff,0xff	@ 000bf364 data
.org 0xbf368
	ldr r0, [r4, #84]	@ 000bf368 606d
.org 0xbf36a
	ldr r1, [r4, #88]	@ 000bf36a a16d
.org 0xbf36c
	ldr r2, [r4, #104]	@ 000bf36c a26e
.org 0xbf36e
	adds r1, r1, r2	@ 000bf36e 8918
.org 0xbf370
	bl 0x7db4	@ 000bf370 48f720fd
.org 0xbf374
	adds r5, r0, #0	@ 000bf374 051c
.org 0xbf376
	ldr r1, [r4, #100]	@ 000bf376 616e
.org 0xbf378
	cmp r1, #0	@ 000bf378 0029
.org 0xbf37a
	bge.n 0xbf38e	@ 000bf37a 08da
.org 0xbf37c
	ldr r0, [r4, #84]	@ 000bf37c 606d
.org 0xbf37e
	adds r0, r0, r1	@ 000bf37e 4018
.org 0xbf380
	ldr r1, [r4, #88]	@ 000bf380 a16d
.org 0xbf382
	movs r2, #128	@ 000bf382 8022
.org 0xbf384
	lsls r2, r2, #4	@ 000bf384 1201
.org 0xbf386
	adds r1, r1, r2	@ 000bf386 8918
.org 0xbf388
	bl 0x816c	@ 000bf388 48f7f0fe
.org 0xbf38c
	b.n 0xbf39e	@ 000bf38c 07e0
.org 0xbf38e
	ldr r0, [r4, #84]	@ 000bf38e 606d
.org 0xbf390
	adds r0, r0, r1	@ 000bf390 4018
.org 0xbf392
	ldr r1, [r4, #88]	@ 000bf392 a16d
.org 0xbf394
	movs r2, #128	@ 000bf394 8022
.org 0xbf396
	lsls r2, r2, #4	@ 000bf396 1201
.org 0xbf398
	adds r1, r1, r2	@ 000bf398 8918
.org 0xbf39a
	bl 0x834c	@ 000bf39a 48f7d7ff
.org 0xbf39e
	cmp r5, #0	@ 000bf39e 002d
.org 0xbf3a0
	bne.n 0xbf3c2	@ 000bf3a0 0fd1
.org 0xbf3a2
	ldr r0, [r4, #100]	@ 000bf3a2 606e
.org 0xbf3a4
	movs r1, #2	@ 000bf3a4 0221
.org 0xbf3a6
	cmp r0, #0	@ 000bf3a6 0028
.org 0xbf3a8
	bge.n 0xbf3ac	@ 000bf3a8 00da
.org 0xbf3aa
	movs r1, #3	@ 000bf3aa 0321
.org 0xbf3ac
	adds r0, r4, #0	@ 000bf3ac 201c
.org 0xbf3ae
	adds r0, #180	@ 000bf3ae b430
.org 0xbf3b0
	strb r1, [r0, #0]	@ 000bf3b0 0170
.org 0xbf3b2
	ldr r0, [r4, #84]	@ 000bf3b2 606d
.org 0xbf3b4
	ldr r1, [r4, #92]	@ 000bf3b4 e16d
.org 0xbf3b6
	adds r0, r0, r1	@ 000bf3b6 4018
.org 0xbf3b8
	str r0, [r4, #84]	@ 000bf3b8 6065
.org 0xbf3ba
	ldr r0, [r4, #100]	@ 000bf3ba 606e
.org 0xbf3bc
	negs r0, r0	@ 000bf3bc 4042
.org 0xbf3be
	str r0, [r4, #100]	@ 000bf3be 6066
.org 0xbf3c0
	b.n 0xbf484	@ 000bf3c0 60e0
.org 0xbf3c2
	cmp r0, #0	@ 000bf3c2 0028
.org 0xbf3c4
	beq.n 0xbf484	@ 000bf3c4 5ed0
.org 0xbf3c6
	ldr r0, [r4, #100]	@ 000bf3c6 606e
.org 0xbf3c8
	movs r1, #3	@ 000bf3c8 0321
.org 0xbf3ca
	cmp r0, #0	@ 000bf3ca 0028
.org 0xbf3cc
	bge.n 0xbf3d0	@ 000bf3cc 00da
.org 0xbf3ce
	movs r1, #2	@ 000bf3ce 0221
.org 0xbf3d0
	adds r0, r4, #0	@ 000bf3d0 201c
.org 0xbf3d2
	adds r0, #180	@ 000bf3d2 b430
.org 0xbf3d4
	strb r1, [r0, #0]	@ 000bf3d4 0170
.org 0xbf3d6
	b.n 0xbf462	@ 000bf3d6 44e0
.org 0xbf3d8
	ldr r0, [r4, #84]	@ 000bf3d8 606d
.org 0xbf3da
	ldr r1, [r4, #100]	@ 000bf3da 616e
.org 0xbf3dc
	adds r0, r0, r1	@ 000bf3dc 4018
.org 0xbf3de
	ldr r1, [r4, #88]	@ 000bf3de a16d
.org 0xbf3e0
	bl 0x816c	@ 000bf3e0 48f7c4fe
.org 0xbf3e4
	adds r5, r0, #0	@ 000bf3e4 051c
.org 0xbf3e6
	ldr r2, [r4, #104]	@ 000bf3e6 a26e
.org 0xbf3e8
	cmp r2, #0	@ 000bf3e8 002a
.org 0xbf3ea
	bge.n 0xbf3fe	@ 000bf3ea 08da
.org 0xbf3ec
	ldr r0, [r4, #84]	@ 000bf3ec 606d
.org 0xbf3ee
	movs r1, #128	@ 000bf3ee 8021
.org 0xbf3f0
	lsls r1, r1, #4	@ 000bf3f0 0901
.org 0xbf3f2
	adds r0, r0, r1	@ 000bf3f2 4018
.org 0xbf3f4
	ldr r1, [r4, #88]	@ 000bf3f4 a16d
.org 0xbf3f6
	adds r1, r1, r2	@ 000bf3f6 8918
.org 0xbf3f8
	bl 0x7db4	@ 000bf3f8 48f7dcfc
.org 0xbf3fc
	b.n 0xbf40e	@ 000bf3fc 07e0
.org 0xbf3fe
	ldr r0, [r4, #84]	@ 000bf3fe 606d
.org 0xbf400
	movs r1, #128	@ 000bf400 8021
.org 0xbf402
	lsls r1, r1, #4	@ 000bf402 0901
.org 0xbf404
	adds r0, r0, r1	@ 000bf404 4018
.org 0xbf406
	ldr r1, [r4, #88]	@ 000bf406 a16d
.org 0xbf408
	adds r1, r1, r2	@ 000bf408 8918
.org 0xbf40a
	bl 0x7f8c	@ 000bf40a 48f7bffd
.org 0xbf40e
	cmp r5, #0	@ 000bf40e 002d
.org 0xbf410
	beq.n 0xbf44e	@ 000bf410 1dd0
.org 0xbf412
	b.n 0xbf470	@ 000bf412 2de0
.org 0xbf414
	ldr r0, [r4, #84]	@ 000bf414 606d
.org 0xbf416
	ldr r1, [r4, #100]	@ 000bf416 616e
.org 0xbf418
	adds r0, r0, r1	@ 000bf418 4018
.org 0xbf41a
	ldr r1, [r4, #88]	@ 000bf41a a16d
.org 0xbf41c
	bl 0x834c	@ 000bf41c 48f796ff
.org 0xbf420
	adds r5, r0, #0	@ 000bf420 051c
.org 0xbf422
	ldr r2, [r4, #104]	@ 000bf422 a26e
.org 0xbf424
	cmp r2, #0	@ 000bf424 002a
.org 0xbf426
	bge.n 0xbf43c	@ 000bf426 09da
.org 0xbf428
	ldr r0, [r4, #84]	@ 000bf428 606d
.org 0xbf42a
	ldr r1, [pc, #12]	@ 000bf42a 0349
.org 0xbf42c
	adds r0, r0, r1	@ 000bf42c 4018
.org 0xbf42e
	ldr r1, [r4, #88]	@ 000bf42e a16d
.org 0xbf430
	adds r1, r1, r2	@ 000bf430 8918
.org 0xbf432
	bl 0x7db4	@ 000bf432 48f7bffc
.org 0xbf436
	b.n 0xbf44a	@ 000bf436 08e0
.org 0xbf438
	.byte 0x00,0xf8,0xff,0xff	@ 000bf438 data
.org 0xbf43c
	ldr r0, [r4, #84]	@ 000bf43c 606d
.org 0xbf43e
	ldr r1, [pc, #44]	@ 000bf43e 0b49
.org 0xbf440
	adds r0, r0, r1	@ 000bf440 4018
.org 0xbf442
	ldr r1, [r4, #88]	@ 000bf442 a16d
.org 0xbf444
	adds r1, r1, r2	@ 000bf444 8918
.org 0xbf446
	bl 0x7f8c	@ 000bf446 48f7a1fd
.org 0xbf44a
	cmp r5, #0	@ 000bf44a 002d
.org 0xbf44c
	bne.n 0xbf470	@ 000bf44c 10d1
.org 0xbf44e
	ldr r0, [r4, #104]	@ 000bf44e a06e
.org 0xbf450
	mvns r0, r0	@ 000bf450 c043
.org 0xbf452
	lsrs r0, r0, #31	@ 000bf452 c00f
.org 0xbf454
	adds r1, r4, #0	@ 000bf454 211c
.org 0xbf456
	adds r1, #180	@ 000bf456 b431
.org 0xbf458
	strb r0, [r1, #0]	@ 000bf458 0870
.org 0xbf45a
	ldr r0, [r4, #88]	@ 000bf45a a06d
.org 0xbf45c
	ldr r1, [r4, #96]	@ 000bf45c 216e
.org 0xbf45e
	adds r0, r0, r1	@ 000bf45e 4018
.org 0xbf460
	str r0, [r4, #88]	@ 000bf460 a065
.org 0xbf462
	ldr r0, [r4, #104]	@ 000bf462 a06e
.org 0xbf464
	negs r0, r0	@ 000bf464 4042
.org 0xbf466
	str r0, [r4, #104]	@ 000bf466 a066
.org 0xbf468
	b.n 0xbf484	@ 000bf468 0ce0
.org 0xbf46a
	.byte 0x00	@ 000bf46a data
.org 0xbf46b
	.byte 0x00	@ 000bf46b data
.org 0xbf46c
	.byte 0x00,0xf8,0xff,0xff	@ 000bf46c data
.org 0xbf470
	cmp r0, #0	@ 000bf470 0028
.org 0xbf472
	beq.n 0xbf484	@ 000bf472 07d0
.org 0xbf474
	ldr r0, [r4, #100]	@ 000bf474 606e
.org 0xbf476
	negs r0, r0	@ 000bf476 4042
.org 0xbf478
	str r0, [r4, #100]	@ 000bf478 6066
.org 0xbf47a
	ldr r0, [r4, #104]	@ 000bf47a a06e

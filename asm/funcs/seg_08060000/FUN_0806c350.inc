@ FUN_0806c350  entry 0x0806c350  size 376
.thumb
.org 0x6c350
FUN_0806c350:
	push {r4, r5, lr}	@ 0006c350 30b5
.org 0x6c352
	adds r4, r0, #0	@ 0006c352 041c
.org 0x6c354
	ldrb r5, [r4, #14]	@ 0006c354 a57b
.org 0x6c356
	cmp r5, #0	@ 0006c356 002d
.org 0x6c358
	bne.n 0x6c3a0	@ 0006c358 22d1
.org 0x6c35a
	ldr r1, [pc, #164]	@ 0006c35a 2949
.org 0x6c35c
	bl 0x1cf00	@ 0006c35c b0f7d0fd
.org 0x6c360
	movs r0, #198	@ 0006c360 c620
.org 0x6c362
	bl 0x2b10	@ 0006c362 96f7d5fb
.org 0x6c366
	ldr r0, [pc, #156]	@ 0006c366 2748
.org 0x6c368
	ldr r1, [pc, #156]	@ 0006c368 2749
.org 0x6c36a
	adds r1, #250	@ 0006c36a fa31
.org 0x6c36c
	ldrh r1, [r1, #0]	@ 0006c36c 0988
.org 0x6c36e
	ldrh r2, [r0, #6]	@ 0006c36e c288
.org 0x6c370
	lsrs r2, r2, #6	@ 0006c370 9209
.org 0x6c372
	subs r1, r1, r2	@ 0006c372 891a
.org 0x6c374
	lsls r1, r1, #5	@ 0006c374 4901
.org 0x6c376
	movs r2, #128	@ 0006c376 8022
.org 0x6c378
	lsls r2, r2, #9	@ 0006c378 5202
.org 0x6c37a
	adds r1, r1, r2	@ 0006c37a 8918
.org 0x6c37c
	bl 0x1d30	@ 0006c37c 95f7d8fc
.org 0x6c380
	ldr r0, [pc, #136]	@ 0006c380 2248
.org 0x6c382
	ldr r1, [pc, #140]	@ 0006c382 2349
.org 0x6c384
	adds r1, #250	@ 0006c384 fa31
.org 0x6c386
	ldrh r1, [r1, #0]	@ 0006c386 0988
.org 0x6c388
	ldrb r2, [r0, #7]	@ 0006c388 c279
.org 0x6c38a
	subs r1, r1, r2	@ 0006c38a 891a
.org 0x6c38c
	lsls r1, r1, #5	@ 0006c38c 4901
.org 0x6c38e
	movs r2, #128	@ 0006c38e 8022
.org 0x6c390
	lsls r2, r2, #2	@ 0006c390 9200
.org 0x6c392
	adds r1, r1, r2	@ 0006c392 8918
.org 0x6c394
	bl 0x2208	@ 0006c394 95f738ff
.org 0x6c398
	strb r5, [r4, #15]	@ 0006c398 e573
.org 0x6c39a
	ldrb r0, [r4, #14]	@ 0006c39a a07b
.org 0x6c39c
	adds r0, #1	@ 0006c39c 0130
.org 0x6c39e
	strb r0, [r4, #14]	@ 0006c39e a073
.org 0x6c3a0
	adds r0, r4, #0	@ 0006c3a0 201c
.org 0x6c3a2
	bl 0x1cff0	@ 0006c3a2 b0f725fe
.org 0x6c3a6
	ldrb r5, [r4, #15]	@ 0006c3a6 e57b
.org 0x6c3a8
	cmp r5, #0	@ 0006c3a8 002d
.org 0x6c3aa
	bne.n 0x6c45c	@ 0006c3aa 57d1
.org 0x6c3ac
	adds r0, r4, #0	@ 0006c3ac 201c
.org 0x6c3ae
	adds r0, #113	@ 0006c3ae 7130
.org 0x6c3b0
	ldrb r0, [r0, #0]	@ 0006c3b0 0078
.org 0x6c3b2
	lsls r0, r0, #24	@ 0006c3b2 0006
.org 0x6c3b4
	asrs r0, r0, #24	@ 0006c3b4 0016
.org 0x6c3b6
	cmp r0, #1	@ 0006c3b6 0128
.org 0x6c3b8
	bgt.n 0x6c3bc	@ 0006c3b8 00dc
.org 0x6c3ba
	b.n 0x6c4f2	@ 0006c3ba 9ae0
.org 0x6c3bc
	adds r0, r4, #0	@ 0006c3bc 201c
.org 0x6c3be
	adds r0, #116	@ 0006c3be 7430
.org 0x6c3c0
	ldr r1, [pc, #80]	@ 0006c3c0 1449
.org 0x6c3c2
	bl 0x5784	@ 0006c3c2 99f7dff9
.org 0x6c3c6
	adds r2, r4, #0	@ 0006c3c6 221c
.org 0x6c3c8
	adds r2, #180	@ 0006c3c8 b432
.org 0x6c3ca
	ldr r0, [pc, #76]	@ 0006c3ca 1348
.org 0x6c3cc
	ldr r0, [r0, #0]	@ 0006c3cc 0068
.org 0x6c3ce
	ldr r1, [r2, #16]	@ 0006c3ce 1169
.org 0x6c3d0
	ldr r0, [r0, #84]	@ 0006c3d0 406d
.org 0x6c3d2
	cmp r1, r0	@ 0006c3d2 8142
.org 0x6c3d4
	ble.n 0x6c41c	@ 0006c3d4 22dd
.org 0x6c3d6
	ldr r1, [r4, #84]	@ 0006c3d6 616d
.org 0x6c3d8
	movs r0, #128	@ 0006c3d8 8020
.org 0x6c3da
	lsls r0, r0, #6	@ 0006c3da 8001
.org 0x6c3dc
	adds r1, r1, r0	@ 0006c3dc 0918
.org 0x6c3de
	ldr r0, [r2, #24]	@ 0006c3de 9069
.org 0x6c3e0
	subs r0, r0, r1	@ 0006c3e0 401a
.org 0x6c3e2
	str r0, [r4, #92]	@ 0006c3e2 e065
.org 0x6c3e4
	adds r0, r4, #0	@ 0006c3e4 201c
.org 0x6c3e6
	adds r0, #76	@ 0006c3e6 4c30
.org 0x6c3e8
	strb r5, [r0, #0]	@ 0006c3e8 0570
.org 0x6c3ea
	subs r2, #106	@ 0006c3ea 6a3a
.org 0x6c3ec
	ldrb r1, [r2, #0]	@ 0006c3ec 1178
.org 0x6c3ee
	movs r0, #17	@ 0006c3ee 1120
.org 0x6c3f0
	negs r0, r0	@ 0006c3f0 4042
.org 0x6c3f2
	ands r0, r1	@ 0006c3f2 0840
.org 0x6c3f4
	strb r0, [r2, #0]	@ 0006c3f4 1070
.org 0x6c3f6
	ldrb r1, [r4, #10]	@ 0006c3f6 a17a
.org 0x6c3f8
	movs r0, #239	@ 0006c3f8 ef20
.org 0x6c3fa
	ands r0, r1	@ 0006c3fa 0840
.org 0x6c3fc
	strb r0, [r4, #10]	@ 0006c3fc a072
.org 0x6c3fe
	b.n 0x6c442	@ 0006c3fe 20e0
.org 0x6c400
	.byte 0x03,0xaa,0x00,0x00	@ 0006c400 data
.org 0x6c404
	.byte 0xc4,0x49,0xc4,0x08	@ 0006c404 data
.org 0x6c408
	.byte 0x40,0xe0,0x02,0x02	@ 0006c408 data
.org 0x6c40c
	.byte 0xd0,0x49,0xc4,0x08	@ 0006c40c data
.org 0x6c410
	.byte 0x40,0xde,0x02,0x02	@ 0006c410 data
.org 0x6c414
	.byte 0xdc,0xc1,0x85,0x08	@ 0006c414 data
.org 0x6c418
	.byte 0xf0,0xdb,0x02,0x02	@ 0006c418 data
.org 0x6c41c
	ldr r1, [r4, #84]	@ 0006c41c 616d
.org 0x6c41e
	ldr r0, [pc, #52]	@ 0006c41e 0d48
.org 0x6c420
	adds r1, r1, r0	@ 0006c420 0918
.org 0x6c422
	ldr r0, [r2, #20]	@ 0006c422 5069
.org 0x6c424
	subs r0, r0, r1	@ 0006c424 401a
.org 0x6c426
	str r0, [r4, #92]	@ 0006c426 e065
.org 0x6c428
	adds r1, r4, #0	@ 0006c428 211c
.org 0x6c42a
	adds r1, #76	@ 0006c42a 4c31
.org 0x6c42c
	movs r0, #1	@ 0006c42c 0120
.org 0x6c42e
	strb r0, [r1, #0]	@ 0006c42e 0870
.org 0x6c430
	adds r2, r4, #0	@ 0006c430 221c
.org 0x6c432
	adds r2, #74	@ 0006c432 4a32
.org 0x6c434
	ldrb r0, [r2, #0]	@ 0006c434 1078
.org 0x6c436
	movs r1, #16	@ 0006c436 1021
.org 0x6c438
	orrs r0, r1	@ 0006c438 0843
.org 0x6c43a
	strb r0, [r2, #0]	@ 0006c43a 1070
.org 0x6c43c
	ldrb r0, [r4, #10]	@ 0006c43c a07a
.org 0x6c43e
	orrs r1, r0	@ 0006c43e 0143
.org 0x6c440
	strb r1, [r4, #10]	@ 0006c440 a172
.org 0x6c442
	ldr r0, [r4, #92]	@ 0006c442 e06d
.org 0x6c444
	asrs r0, r0, #1	@ 0006c444 4010
.org 0x6c446
	movs r1, #24	@ 0006c446 1821
.org 0x6c448
	bl 0x128fb8	@ 0006c448 bcf0b6fd
.org 0x6c44c
	str r0, [r4, #92]	@ 0006c44c e065
.org 0x6c44e
	ldr r0, [pc, #8]	@ 0006c44e 0248
.org 0x6c450
	str r0, [r4, #96]	@ 0006c450 2066
.org 0x6c452
	b.n 0x6c4d0	@ 0006c452 3de0
.org 0x6c454
	.byte 0x00,0xe0,0xff,0xff	@ 0006c454 data
.org 0x6c458
	.byte 0x00,0xfa,0xff,0xff	@ 0006c458 data
.org 0x6c45c
	cmp r5, #1	@ 0006c45c 012d
.org 0x6c45e
	bne.n 0x6c48c	@ 0006c45e 15d1
.org 0x6c460
	ldr r0, [r4, #84]	@ 0006c460 606d
.org 0x6c462
	ldr r1, [r4, #92]	@ 0006c462 e16d
.org 0x6c464
	adds r0, r0, r1	@ 0006c464 4018
.org 0x6c466
	str r0, [r4, #84]	@ 0006c466 6065
.org 0x6c468
	ldr r0, [r4, #88]	@ 0006c468 a06d
.org 0x6c46a
	ldr r1, [r4, #96]	@ 0006c46a 216e
.org 0x6c46c
	adds r0, r0, r1	@ 0006c46c 4018
.org 0x6c46e
	str r0, [r4, #88]	@ 0006c46e a065
.org 0x6c470
	adds r1, #64	@ 0006c470 4031
.org 0x6c472
	str r1, [r4, #96]	@ 0006c472 2166
.org 0x6c474
	cmp r1, #0	@ 0006c474 0029
.org 0x6c476
	ble.n 0x6c4f2	@ 0006c476 3cdd
.org 0x6c478
	ldr r1, [pc, #12]	@ 0006c478 0349
.org 0x6c47a
	adds r0, r4, #0	@ 0006c47a 201c
.org 0x6c47c
	bl 0x1cf00	@ 0006c47c b0f740fd
.org 0x6c480
	adds r0, r4, #0	@ 0006c480 201c
.org 0x6c482
	bl 0x1cff0	@ 0006c482 b0f7b5fd
.org 0x6c486
	b.n 0x6c4d0	@ 0006c486 23e0
.org 0x6c488
	.byte 0x04,0xaa,0x00,0x00	@ 0006c488 data
.org 0x6c48c
	cmp r5, #2	@ 0006c48c 022d
.org 0x6c48e
	bne.n 0x6c4e0	@ 0006c48e 27d1
.org 0x6c490
	ldr r0, [r4, #84]	@ 0006c490 606d
.org 0x6c492
	ldr r1, [r4, #92]	@ 0006c492 e16d
.org 0x6c494
	adds r0, r0, r1	@ 0006c494 4018
.org 0x6c496
	str r0, [r4, #84]	@ 0006c496 6065
.org 0x6c498
	ldr r1, [r4, #88]	@ 0006c498 a16d
.org 0x6c49a
	ldr r0, [r4, #96]	@ 0006c49a 206e
.org 0x6c49c
	adds r1, r1, r0	@ 0006c49c 0918
.org 0x6c49e
	str r1, [r4, #88]	@ 0006c49e a165
.org 0x6c4a0
	adds r0, #64	@ 0006c4a0 4030
.org 0x6c4a2
	str r0, [r4, #96]	@ 0006c4a2 2066
.org 0x6c4a4
	adds r5, r4, #0	@ 0006c4a4 251c
.org 0x6c4a6
	adds r5, #180	@ 0006c4a6 b435
.org 0x6c4a8
	ldr r0, [r5, #4]	@ 0006c4a8 6868
.org 0x6c4aa
	cmp r1, r0	@ 0006c4aa 8142
.org 0x6c4ac
	ble.n 0x6c4f2	@ 0006c4ac 21dd
.org 0x6c4ae
	ldr r1, [pc, #40]	@ 0006c4ae 0a49
.org 0x6c4b0
	adds r0, r4, #0	@ 0006c4b0 201c
.org 0x6c4b2
	bl 0x1cf00	@ 0006c4b2 b0f725fd
.org 0x6c4b6
	movs r0, #211	@ 0006c4b6 d320
.org 0x6c4b8
	bl 0x2b10	@ 0006c4b8 96f72afb
.org 0x6c4bc
	adds r0, r4, #0	@ 0006c4bc 201c
.org 0x6c4be
	bl 0x1cff0	@ 0006c4be b0f797fd
.org 0x6c4c2
	adds r0, r4, #0	@ 0006c4c2 201c
.org 0x6c4c4
	adds r0, #116	@ 0006c4c4 7430
.org 0x6c4c6
	ldr r1, [pc, #20]	@ 0006c4c6 0549

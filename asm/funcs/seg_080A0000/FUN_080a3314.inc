@ FUN_080a3314  entry 0x080a3314  size 264
.thumb
.org 0xa3314
FUN_080a3314:
	push {r4, r5, r6, lr}	@ 000a3314 70b5
.org 0xa3316
	adds r5, r0, #0	@ 000a3316 051c
.org 0xa3318
	bl 0x1cc9c	@ 000a3318 79f7c0fc
.org 0xa331c
	ldrb r1, [r5, #10]	@ 000a331c a97a
.org 0xa331e
	movs r0, #1	@ 000a331e 0120
.org 0xa3320
	orrs r0, r1	@ 000a3320 0843
.org 0xa3322
	movs r1, #2	@ 000a3322 0221
.org 0xa3324
	orrs r0, r1	@ 000a3324 0843
.org 0xa3326
	strb r0, [r5, #10]	@ 000a3326 a872
.org 0xa3328
	ldrb r1, [r5, #17]	@ 000a3328 697c
.org 0xa332a
	lsls r1, r1, #17	@ 000a332a 4904
.org 0xa332c
	ldr r0, [pc, #108]	@ 000a332c 1b48
.org 0xa332e
	adds r1, r1, r0	@ 000a332e 0918
.org 0xa3330
	lsrs r1, r1, #16	@ 000a3330 090c
.org 0xa3332
	adds r0, r5, #0	@ 000a3332 281c
.org 0xa3334
	bl 0x1cf00	@ 000a3334 79f7e4fd
.org 0xa3338
	adds r0, r5, #0	@ 000a3338 281c
.org 0xa333a
	bl 0x1cff0	@ 000a333a 79f759fe
.org 0xa333e
	ldrb r1, [r5, #10]	@ 000a333e a97a
.org 0xa3340
	movs r0, #239	@ 000a3340 ef20
.org 0xa3342
	ands r0, r1	@ 000a3342 0840
.org 0xa3344
	movs r6, #0	@ 000a3344 0026
.org 0xa3346
	strb r0, [r5, #10]	@ 000a3346 a872
.org 0xa3348
	adds r0, r5, #0	@ 000a3348 281c
.org 0xa334a
	adds r0, #76	@ 000a334a 4c30
.org 0xa334c
	strb r6, [r0, #0]	@ 000a334c 0670
.org 0xa334e
	adds r2, r5, #0	@ 000a334e 2a1c
.org 0xa3350
	adds r2, #74	@ 000a3350 4a32
.org 0xa3352
	ldrb r1, [r2, #0]	@ 000a3352 1178
.org 0xa3354
	movs r0, #17	@ 000a3354 1120
.org 0xa3356
	negs r0, r0	@ 000a3356 4042
.org 0xa3358
	ands r0, r1	@ 000a3358 0840
.org 0xa335a
	strb r0, [r2, #0]	@ 000a335a 1070
.org 0xa335c
	ldrb r1, [r5, #10]	@ 000a335c a97a
.org 0xa335e
	movs r0, #4	@ 000a335e 0420
.org 0xa3360
	orrs r0, r1	@ 000a3360 0843
.org 0xa3362
	strb r0, [r5, #10]	@ 000a3362 a872
.org 0xa3364
	adds r4, r5, #0	@ 000a3364 2c1c
.org 0xa3366
	adds r4, #116	@ 000a3366 7434
.org 0xa3368
	ldrb r0, [r5, #17]	@ 000a3368 687c
.org 0xa336a
	lsls r1, r0, #1	@ 000a336a 4100
.org 0xa336c
	adds r1, r1, r0	@ 000a336c 0918
.org 0xa336e
	lsls r1, r1, #4	@ 000a336e 0901
.org 0xa3370
	ldr r0, [pc, #44]	@ 000a3370 0b48
.org 0xa3372
	adds r1, r1, r0	@ 000a3372 0918
.org 0xa3374
	adds r2, #10	@ 000a3374 0a32
.org 0xa3376
	adds r0, r4, #0	@ 000a3376 201c
.org 0xa3378
	movs r3, #64	@ 000a3378 4023
.org 0xa337a
	bl 0x5760	@ 000a337a 62f7f1f9
.org 0xa337e
	str r5, [r4, #44]	@ 000a337e e562
.org 0xa3380
	ldr r0, [pc, #32]	@ 000a3380 0848
.org 0xa3382
	str r0, [r4, #36]	@ 000a3382 6062
.org 0xa3384
	adds r1, r5, #0	@ 000a3384 291c
.org 0xa3386
	adds r1, #37	@ 000a3386 2531
.org 0xa3388
	movs r0, #25	@ 000a3388 1920
.org 0xa338a
	strb r0, [r1, #0]	@ 000a338a 0870
.org 0xa338c
	ldrb r0, [r5, #17]	@ 000a338c 687c
.org 0xa338e
	cmp r0, #1	@ 000a338e 0128
.org 0xa3390
	beq.n 0xa33c8	@ 000a3390 1ad0
.org 0xa3392
	cmp r0, #1	@ 000a3392 0128
.org 0xa3394
	bgt.n 0xa33a8	@ 000a3394 08dc
.org 0xa3396
	cmp r0, #0	@ 000a3396 0028
.org 0xa3398
	beq.n 0xa33b2	@ 000a3398 0bd0
.org 0xa339a
	b.n 0xa3406	@ 000a339a 34e0
.org 0xa339c
	.byte 0x00,0x00,0x01,0x87	@ 000a339c data
.org 0xa33a0
	.byte 0x30,0x1e,0x86,0x08	@ 000a33a0 data
.org 0xa33a4
	.byte 0x5d,0x3a,0x0a,0x08	@ 000a33a4 data
.org 0xa33a8
	cmp r0, #2	@ 000a33a8 0228
.org 0xa33aa
	beq.n 0xa33e0	@ 000a33aa 19d0
.org 0xa33ac
	cmp r0, #3	@ 000a33ac 0328
.org 0xa33ae
	beq.n 0xa33f2	@ 000a33ae 20d0
.org 0xa33b0
	b.n 0xa3406	@ 000a33b0 29e0
.org 0xa33b2
	ldr r0, [r5, #88]	@ 000a33b2 a86d
.org 0xa33b4
	ldr r1, [pc, #8]	@ 000a33b4 0249
.org 0xa33b6
	adds r0, r0, r1	@ 000a33b6 4018
.org 0xa33b8
	str r0, [r5, #88]	@ 000a33b8 a865
.org 0xa33ba
	str r6, [r5, #92]	@ 000a33ba ee65
.org 0xa33bc
	ldr r0, [pc, #4]	@ 000a33bc 0148
.org 0xa33be
	b.n 0xa3404	@ 000a33be 21e0
.org 0xa33c0
	.byte 0x00,0xec,0xff,0xff	@ 000a33c0 data
.org 0xa33c4
	.byte 0x00,0xff,0xff,0xff	@ 000a33c4 data
.org 0xa33c8
	ldr r0, [r5, #84]	@ 000a33c8 686d
.org 0xa33ca
	ldr r1, [pc, #12]	@ 000a33ca 0349
.org 0xa33cc
	adds r0, r0, r1	@ 000a33cc 4018
.org 0xa33ce
	str r0, [r5, #84]	@ 000a33ce 6865
.org 0xa33d0
	ldr r0, [pc, #8]	@ 000a33d0 0248
.org 0xa33d2
	str r0, [r5, #92]	@ 000a33d2 e865
.org 0xa33d4
	str r6, [r5, #96]	@ 000a33d4 2e66
.org 0xa33d6
	b.n 0xa3406	@ 000a33d6 16e0
.org 0xa33d8
	.byte 0x00,0xec,0xff,0xff	@ 000a33d8 data
.org 0xa33dc
	.byte 0x00,0xff,0xff,0xff	@ 000a33dc data
.org 0xa33e0
	ldr r0, [r5, #88]	@ 000a33e0 a86d
.org 0xa33e2
	movs r1, #160	@ 000a33e2 a021
.org 0xa33e4
	lsls r1, r1, #5	@ 000a33e4 4901
.org 0xa33e6
	adds r0, r0, r1	@ 000a33e6 4018
.org 0xa33e8
	str r0, [r5, #88]	@ 000a33e8 a865
.org 0xa33ea
	str r6, [r5, #92]	@ 000a33ea ee65
.org 0xa33ec
	movs r0, #128	@ 000a33ec 8020
.org 0xa33ee
	lsls r0, r0, #1	@ 000a33ee 4000
.org 0xa33f0
	b.n 0xa3404	@ 000a33f0 08e0
.org 0xa33f2
	ldr r0, [r5, #84]	@ 000a33f2 686d
.org 0xa33f4
	movs r1, #160	@ 000a33f4 a021
.org 0xa33f6
	lsls r1, r1, #5	@ 000a33f6 4901
.org 0xa33f8
	adds r0, r0, r1	@ 000a33f8 4018
.org 0xa33fa
	str r0, [r5, #84]	@ 000a33fa 6865
.org 0xa33fc
	movs r0, #128	@ 000a33fc 8020
.org 0xa33fe
	lsls r0, r0, #1	@ 000a33fe 4000
.org 0xa3400
	str r0, [r5, #92]	@ 000a3400 e865
.org 0xa3402
	movs r0, #0	@ 000a3402 0020
.org 0xa3404
	str r0, [r5, #96]	@ 000a3404 2866
.org 0xa3406
	adds r1, r5, #0	@ 000a3406 291c
.org 0xa3408
	adds r1, #180	@ 000a3408 b431
.org 0xa340a
	ldr r0, [r5, #84]	@ 000a340a 686d
.org 0xa340c
	str r0, [r1, #0]	@ 000a340c 0860
.org 0xa340e
	adds r1, #4	@ 000a340e 0431
.org 0xa3410
	ldr r0, [r5, #88]	@ 000a3410 a86d
.org 0xa3412
	str r0, [r1, #0]	@ 000a3412 0860
.org 0xa3414
	adds r1, #8	@ 000a3414 0831
.org 0xa3416
	movs r0, #0	@ 000a3416 0020
.org 0xa3418
	str r0, [r1, #0]	@ 000a3418 0860
.org 0xa341a
	ldr r1, [pc, #28]	@ 000a341a 0749

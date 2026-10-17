@ FUN_080b32d0  entry 0x080b32d0  size 348
.thumb
.org 0xb32d0
FUN_080b32d0:
	push {r4, r5, r6, r7, lr}	@ 000b32d0 f0b5
.org 0xb32d2
	mov r7, r9	@ 000b32d2 4f46
.org 0xb32d4
	mov r6, r8	@ 000b32d4 4646
.org 0xb32d6
	push {r6, r7}	@ 000b32d6 c0b4
.org 0xb32d8
	adds r4, r0, #0	@ 000b32d8 041c
.org 0xb32da
	ldrb r5, [r4, #14]	@ 000b32da a57b
.org 0xb32dc
	cmp r5, #0	@ 000b32dc 002d
.org 0xb32de
	bne.n 0xb332c	@ 000b32de 25d1
.org 0xb32e0
	adds r0, #192	@ 000b32e0 c030
.org 0xb32e2
	ldr r0, [r0, #0]	@ 000b32e2 0068
.org 0xb32e4
	ldr r1, [r4, #84]	@ 000b32e4 616d
.org 0xb32e6
	subs r0, r0, r1	@ 000b32e6 401a
.org 0xb32e8
	adds r1, r4, #0	@ 000b32e8 211c
.org 0xb32ea
	adds r1, #188	@ 000b32ea bc31
.org 0xb32ec
	ldr r1, [r1, #0]	@ 000b32ec 0968
.org 0xb32ee
	ldr r2, [r4, #88]	@ 000b32ee a26d
.org 0xb32f0
	subs r1, r1, r2	@ 000b32f0 891a
.org 0xb32f2
	lsls r0, r0, #8	@ 000b32f2 0002
.org 0xb32f4
	asrs r0, r0, #16	@ 000b32f4 0014
.org 0xb32f6
	lsls r1, r1, #8	@ 000b32f6 0902
.org 0xb32f8
	asrs r1, r1, #16	@ 000b32f8 0914
.org 0xb32fa
	bl 0x128bdc	@ 000b32fa 75f06ffc
.org 0xb32fe
	lsls r0, r0, #16	@ 000b32fe 0004
.org 0xb3300
	lsrs r2, r0, #24	@ 000b3300 020e
.org 0xb3302
	ldr r1, [pc, #188]	@ 000b3302 2f49
.org 0xb3304
	adds r0, r2, #0	@ 000b3304 101c
.org 0xb3306
	adds r0, #64	@ 000b3306 4030
.org 0xb3308
	lsls r0, r0, #24	@ 000b3308 0006
.org 0xb330a
	lsrs r0, r0, #23	@ 000b330a c00d
.org 0xb330c
	adds r0, r0, r1	@ 000b330c 4018
.org 0xb330e
	movs r3, #0	@ 000b330e 0023
.org 0xb3310
	ldrsh r0, [r0, r3]	@ 000b3310 c05e
.org 0xb3312
	str r0, [r4, #92]	@ 000b3312 e065
.org 0xb3314
	lsls r0, r2, #1	@ 000b3314 5000
.org 0xb3316
	adds r0, r0, r1	@ 000b3316 4018
.org 0xb3318
	movs r1, #0	@ 000b3318 0021
.org 0xb331a
	ldrsh r0, [r0, r1]	@ 000b331a 405e
.org 0xb331c
	str r0, [r4, #96]	@ 000b331c 2066
.org 0xb331e
	adds r0, r4, #0	@ 000b331e 201c
.org 0xb3320
	adds r0, #180	@ 000b3320 b430
.org 0xb3322
	strb r5, [r0, #0]	@ 000b3322 0570
.org 0xb3324
	strb r5, [r4, #18]	@ 000b3324 a574
.org 0xb3326
	ldrb r0, [r4, #14]	@ 000b3326 a07b
.org 0xb3328
	adds r0, #1	@ 000b3328 0130
.org 0xb332a
	strb r0, [r4, #14]	@ 000b332a a073
.org 0xb332c
	ldr r1, [r4, #84]	@ 000b332c 616d
.org 0xb332e
	ldr r0, [r4, #92]	@ 000b332e e06d
.org 0xb3330
	adds r2, r1, r0	@ 000b3330 0a18
.org 0xb3332
	str r2, [r4, #84]	@ 000b3332 6265
.org 0xb3334
	ldr r1, [r4, #88]	@ 000b3334 a16d
.org 0xb3336
	ldr r0, [r4, #96]	@ 000b3336 206e
.org 0xb3338
	adds r1, r1, r0	@ 000b3338 0918
.org 0xb333a
	str r1, [r4, #88]	@ 000b333a a165
.org 0xb333c
	adds r0, r4, #0	@ 000b333c 201c
.org 0xb333e
	adds r0, #180	@ 000b333e b430
.org 0xb3340
	ldrb r3, [r0, #0]	@ 000b3340 0378
.org 0xb3342
	mov r8, r3	@ 000b3342 9846
.org 0xb3344
	adds r6, r4, #0	@ 000b3344 261c
.org 0xb3346
	adds r6, #192	@ 000b3346 c036
.org 0xb3348
	adds r7, r0, #0	@ 000b3348 071c
.org 0xb334a
	cmp r3, #0	@ 000b334a 002b
.org 0xb334c
	bne.n 0xb33d0	@ 000b334c 40d1
.org 0xb334e
	ldr r0, [r6, #0]	@ 000b334e 3068
.org 0xb3350
	subs r0, r2, r0	@ 000b3350 101a
.org 0xb3352
	asrs r0, r0, #8	@ 000b3352 0012
.org 0xb3354
	cmp r0, #0	@ 000b3354 0028
.org 0xb3356
	bge.n 0xb335a	@ 000b3356 00da
.org 0xb3358
	negs r0, r0	@ 000b3358 4042
.org 0xb335a
	cmp r0, #15	@ 000b335a 0f28
.org 0xb335c
	bgt.n 0xb33ca	@ 000b335c 35dc
.org 0xb335e
	adds r5, r4, #0	@ 000b335e 251c
.org 0xb3360
	adds r5, #188	@ 000b3360 bc35
.org 0xb3362
	ldr r0, [r5, #0]	@ 000b3362 2868
.org 0xb3364
	subs r0, r1, r0	@ 000b3364 081a
.org 0xb3366
	asrs r0, r0, #8	@ 000b3366 0012
.org 0xb3368
	cmp r0, #0	@ 000b3368 0028
.org 0xb336a
	bge.n 0xb336e	@ 000b336a 00da
.org 0xb336c
	negs r0, r0	@ 000b336c 4042
.org 0xb336e
	cmp r0, #15	@ 000b336e 0f28
.org 0xb3370
	bgt.n 0xb33ca	@ 000b3370 2bdc
.org 0xb3372
	movs r0, #1	@ 000b3372 0120
.org 0xb3374
	mov r9, r0	@ 000b3374 8146
.org 0xb3376
	mov r1, r9	@ 000b3376 4946
.org 0xb3378
	strb r1, [r7, #0]	@ 000b3378 3970
.org 0xb337a
	ldr r0, [r6, #0]	@ 000b337a 3068
.org 0xb337c
	ldr r1, [r4, #84]	@ 000b337c 616d
.org 0xb337e
	subs r0, r0, r1	@ 000b337e 401a
.org 0xb3380
	ldr r1, [r5, #0]	@ 000b3380 2968
.org 0xb3382
	ldr r2, [r4, #88]	@ 000b3382 a26d
.org 0xb3384
	subs r1, r1, r2	@ 000b3384 891a
.org 0xb3386
	lsls r0, r0, #8	@ 000b3386 0002
.org 0xb3388
	asrs r0, r0, #16	@ 000b3388 0014
.org 0xb338a
	lsls r1, r1, #8	@ 000b338a 0902
.org 0xb338c
	asrs r1, r1, #16	@ 000b338c 0914
.org 0xb338e
	bl 0x128bdc	@ 000b338e 75f025fc
.org 0xb3392
	lsls r0, r0, #16	@ 000b3392 0004
.org 0xb3394
	lsrs r2, r0, #24	@ 000b3394 020e
.org 0xb3396
	ldr r1, [pc, #40]	@ 000b3396 0a49
.org 0xb3398
	adds r0, r2, #0	@ 000b3398 101c
.org 0xb339a
	adds r0, #64	@ 000b339a 4030
.org 0xb339c
	lsls r0, r0, #24	@ 000b339c 0006
.org 0xb339e
	lsrs r0, r0, #23	@ 000b339e c00d
.org 0xb33a0
	adds r0, r0, r1	@ 000b33a0 4018
.org 0xb33a2
	movs r3, #0	@ 000b33a2 0023
.org 0xb33a4
	ldrsh r0, [r0, r3]	@ 000b33a4 c05e
.org 0xb33a6
	str r0, [r4, #92]	@ 000b33a6 e065
.org 0xb33a8
	lsls r0, r2, #1	@ 000b33a8 5000
.org 0xb33aa
	adds r0, r0, r1	@ 000b33aa 4018
.org 0xb33ac
	movs r1, #0	@ 000b33ac 0021
.org 0xb33ae
	ldrsh r0, [r0, r1]	@ 000b33ae 405e
.org 0xb33b0
	str r0, [r4, #96]	@ 000b33b0 2066
.org 0xb33b2
	ldr r1, [r4, #88]	@ 000b33b2 a16d
.org 0xb33b4
	ldr r0, [r5, #0]	@ 000b33b4 2868
.org 0xb33b6
	cmp r1, r0	@ 000b33b6 8142
.org 0xb33b8
	ble.n 0xb33c4	@ 000b33b8 04dd
.org 0xb33ba
	mov r3, r8	@ 000b33ba 4346
.org 0xb33bc
	strb r3, [r4, #15]	@ 000b33bc e373
.org 0xb33be
	b.n 0xb33d0	@ 000b33be 07e0
.org 0xb33c0
	.byte 0x0c,0x93,0x12,0x08	@ 000b33c0 data
.org 0xb33c4
	mov r0, r9	@ 000b33c4 4846
.org 0xb33c6
	strb r0, [r4, #15]	@ 000b33c6 e073
.org 0xb33c8
	b.n 0xb33d0	@ 000b33c8 02e0
.org 0xb33ca
	adds r0, r4, #0	@ 000b33ca 201c
.org 0xb33cc
	bl 0xb3700	@ 000b33cc 00f098f9
.org 0xb33d0
	ldr r0, [r4, #84]	@ 000b33d0 606d
.org 0xb33d2
	ldr r1, [r6, #0]	@ 000b33d2 3168
.org 0xb33d4
	subs r2, r0, r1	@ 000b33d4 421a
.org 0xb33d6
	adds r3, r0, #0	@ 000b33d6 031c
.org 0xb33d8
	cmp r2, #0	@ 000b33d8 002a
.org 0xb33da
	blt.n 0xb33e8	@ 000b33da 05db
.org 0xb33dc
	ldr r0, [pc, #4]	@ 000b33dc 0148
.org 0xb33de
	cmp r2, r0	@ 000b33de 8242
.org 0xb33e0
	ble.n 0xb33f0	@ 000b33e0 06dd
.org 0xb33e2
	b.n 0xb3434	@ 000b33e2 27e0
.org 0xb33e4
	.byte 0xff,0x01,0x00,0x00	@ 000b33e4 data
.org 0xb33e8
	subs r1, r1, r3	@ 000b33e8 c91a
.org 0xb33ea
	ldr r0, [pc, #28]	@ 000b33ea 0748
.org 0xb33ec
	cmp r1, r0	@ 000b33ec 8142
.org 0xb33ee
	bgt.n 0xb3434	@ 000b33ee 21dc
.org 0xb33f0
	adds r0, r4, #0	@ 000b33f0 201c
.org 0xb33f2
	adds r0, #188	@ 000b33f2 bc30
.org 0xb33f4
	ldr r1, [r4, #88]	@ 000b33f4 a16d
.org 0xb33f6
	ldr r0, [r0, #0]	@ 000b33f6 0068
.org 0xb33f8
	subs r2, r1, r0	@ 000b33f8 0a1a
.org 0xb33fa
	cmp r2, #0	@ 000b33fa 002a
.org 0xb33fc
	blt.n 0xb340c	@ 000b33fc 06db
.org 0xb33fe
	ldr r0, [pc, #8]	@ 000b33fe 0248
.org 0xb3400
	cmp r2, r0	@ 000b3400 8242
.org 0xb3402
	ble.n 0xb3414	@ 000b3402 07dd
.org 0xb3404
	b.n 0xb3434	@ 000b3404 16e0
.org 0xb3406
	.byte 0x00	@ 000b3406 data
.org 0xb3407
	.byte 0x00	@ 000b3407 data
.org 0xb3408
	.byte 0xff,0x01,0x00,0x00	@ 000b3408 data
.org 0xb340c
	subs r1, r0, r1	@ 000b340c 411a
.org 0xb340e
	ldr r0, [pc, #16]	@ 000b340e 0448
.org 0xb3410
	cmp r1, r0	@ 000b3410 8142
.org 0xb3412
	bgt.n 0xb3434	@ 000b3412 0fdc
.org 0xb3414
	ldr r0, [r6, #0]	@ 000b3414 3068
.org 0xb3416
	cmp r3, r0	@ 000b3416 8342
.org 0xb3418
	bge.n 0xb3424	@ 000b3418 04da
.org 0xb341a
	movs r0, #0	@ 000b341a 0020
.org 0xb341c
	b.n 0xb3426	@ 000b341c 03e0
.org 0xb341e
	.byte 0x00	@ 000b341e data
.org 0xb341f
	.byte 0x00	@ 000b341f data
.org 0xb3420
	.byte 0xff,0x01,0x00,0x00	@ 000b3420 data
.org 0xb3424
	movs r0, #1	@ 000b3424 0120
.org 0xb3426
	strb r0, [r7, #0]	@ 000b3426 3870
.org 0xb3428
	movs r0, #0	@ 000b3428 0020
.org 0xb342a
	strb r0, [r4, #13]	@ 000b342a 6073

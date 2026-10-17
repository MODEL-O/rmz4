@ FUN_080c3318  entry 0x080c3318  size 138
.thumb
.org 0xc3318
FUN_080c3318:
	push {r4, r5, r6, lr}	@ 000c3318 70b5
.org 0xc331a
	adds r4, r0, #0	@ 000c331a 041c
.org 0xc331c
	ldr r5, [r4, #40]	@ 000c331c a56a
.org 0xc331e
	ldrb r0, [r5, #12]	@ 000c331e 287b
.org 0xc3320
	cmp r0, #1	@ 000c3320 0128
.org 0xc3322
	bls.n 0xc3360	@ 000c3322 1dd9
.org 0xc3324
	ldrb r1, [r4, #10]	@ 000c3324 a17a
.org 0xc3326
	movs r0, #254	@ 000c3326 fe20
.org 0xc3328
	ands r0, r1	@ 000c3328 0840
.org 0xc332a
	movs r2, #0	@ 000c332a 0022
.org 0xc332c
	movs r1, #253	@ 000c332c fd21
.org 0xc332e
	ands r0, r1	@ 000c332e 0840
.org 0xc3330
	strb r0, [r4, #10]	@ 000c3330 a072
.org 0xc3332
	adds r0, r4, #0	@ 000c3332 201c
.org 0xc3334
	adds r0, #140	@ 000c3334 8c30
.org 0xc3336
	str r2, [r0, #0]	@ 000c3336 0260
.org 0xc3338
	adds r0, #4	@ 000c3338 0430
.org 0xc333a
	str r2, [r0, #0]	@ 000c333a 0260
.org 0xc333c
	adds r0, #4	@ 000c333c 0430
.org 0xc333e
	strb r2, [r0, #0]	@ 000c333e 0270
.org 0xc3340
	ldrb r1, [r4, #10]	@ 000c3340 a17a
.org 0xc3342
	movs r0, #251	@ 000c3342 fb20
.org 0xc3344
	ands r0, r1	@ 000c3344 0840
.org 0xc3346
	strb r0, [r4, #10]	@ 000c3346 a072
.org 0xc3348
	ldr r1, [pc, #16]	@ 000c3348 0449
.org 0xc334a
	ldrb r0, [r4, #9]	@ 000c334a 607a
.org 0xc334c
	lsls r0, r0, #2	@ 000c334c 8000
.org 0xc334e
	adds r0, r0, r1	@ 000c334e 4018
.org 0xc3350
	movs r1, #3	@ 000c3350 0321
.org 0xc3352
	str r1, [r4, #12]	@ 000c3352 e160
.org 0xc3354
	ldr r0, [r0, #0]	@ 000c3354 0068
.org 0xc3356
	ldr r0, [r0, #12]	@ 000c3356 c068
.org 0xc3358
	str r0, [r4, #20]	@ 000c3358 6061
.org 0xc335a
	b.n 0xc33a0	@ 000c335a 21e0
.org 0xc335c
	.byte 0xf4,0x49,0x86,0x08	@ 000c335c data
.org 0xc3360
	adds r0, r4, #0	@ 000c3360 201c
.org 0xc3362
	bl 0x1cff0	@ 000c3362 59f745fe
.org 0xc3366
	adds r3, r4, #0	@ 000c3366 231c
.org 0xc3368
	adds r3, #184	@ 000c3368 b833
.org 0xc336a
	ldr r6, [r5, #84]	@ 000c336a 6e6d
.org 0xc336c
	ldr r0, [r3, #0]	@ 000c336c 1868
.org 0xc336e
	subs r0, r6, r0	@ 000c336e 301a
.org 0xc3370
	ldr r2, [r5, #88]	@ 000c3370 aa6d
.org 0xc3372
	ldr r1, [r3, #4]	@ 000c3372 5968
.org 0xc3374
	subs r2, r2, r1	@ 000c3374 521a
.org 0xc3376
	lsls r0, r0, #9	@ 000c3376 4002
.org 0xc3378
	negs r0, r0	@ 000c3378 4042
.org 0xc337a
	cmp r0, #0	@ 000c337a 0028
.org 0xc337c
	bge.n 0xc3380	@ 000c337c 00da
.org 0xc337e
	adds r0, #255	@ 000c337e ff30
.org 0xc3380
	asrs r0, r0, #8	@ 000c3380 0012
.org 0xc3382
	adds r0, r6, r0	@ 000c3382 3018
.org 0xc3384
	str r0, [r4, #84]	@ 000c3384 6065
.org 0xc3386
	lsls r0, r2, #9	@ 000c3386 5002
.org 0xc3388
	negs r0, r0	@ 000c3388 4042
.org 0xc338a
	cmp r0, #0	@ 000c338a 0028
.org 0xc338c
	bge.n 0xc3390	@ 000c338c 00da
.org 0xc338e
	adds r0, #255	@ 000c338e ff30
.org 0xc3390
	asrs r0, r0, #8	@ 000c3390 0012
.org 0xc3392
	ldr r1, [r5, #88]	@ 000c3392 a96d
.org 0xc3394
	adds r1, r1, r0	@ 000c3394 0918
.org 0xc3396
	str r1, [r4, #88]	@ 000c3396 a165
.org 0xc3398
	ldr r0, [r5, #84]	@ 000c3398 686d
.org 0xc339a
	ldr r1, [r5, #88]	@ 000c339a a96d
.org 0xc339c
	str r0, [r3, #0]	@ 000c339c 1860
.org 0xc339e
	str r1, [r3, #4]	@ 000c339e 5960
.org 0xc33a0
	pop {r4, r5, r6}	@ 000c33a0 70bc

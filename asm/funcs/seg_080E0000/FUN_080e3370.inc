@ FUN_080e3370  entry 0x080e3370  size 334
.thumb
.org 0xe3370
FUN_080e3370:
	push {r4, r5, r6, r7, lr}	@ 000e3370 f0b5
.org 0xe3372
	mov r7, r8	@ 000e3372 4746
.org 0xe3374
	push {r7}	@ 000e3374 80b4
.org 0xe3376
	sub sp, #8	@ 000e3376 82b0
.org 0xe3378
	adds r5, r0, #0	@ 000e3378 051c
.org 0xe337a
	ldrb r0, [r5, #17]	@ 000e337a 687c
.org 0xe337c
	cmp r0, #0	@ 000e337c 0028
.org 0xe337e
	bne.n 0xe33c6	@ 000e337e 22d1
.org 0xe3380
	ldr r0, [r5, #84]	@ 000e3380 686d
.org 0xe3382
	str r0, [sp, #0]	@ 000e3382 0090
.org 0xe3384
	ldr r0, [r5, #88]	@ 000e3384 a86d
.org 0xe3386
	ldr r1, [pc, #280]	@ 000e3386 4649
.org 0xe3388
	adds r0, r0, r1	@ 000e3388 4018
.org 0xe338a
	str r0, [sp, #4]	@ 000e338a 0190
.org 0xe338c
	movs r0, #1	@ 000e338c 0120
.org 0xe338e
	mov r1, sp	@ 000e338e 6946
.org 0xe3390
	bl 0xd0c88	@ 000e3390 edf77afc
.org 0xe3394
	ldr r0, [r5, #88]	@ 000e3394 a86d
.org 0xe3396
	ldr r2, [pc, #268]	@ 000e3396 434a
.org 0xe3398
	adds r0, r0, r2	@ 000e3398 8018
.org 0xe339a
	str r0, [sp, #4]	@ 000e339a 0190
.org 0xe339c
	movs r0, #1	@ 000e339c 0120
.org 0xe339e
	mov r1, sp	@ 000e339e 6946
.org 0xe33a0
	bl 0xd0c88	@ 000e33a0 edf772fc
.org 0xe33a4
	adds r4, r5, #0	@ 000e33a4 2c1c
.org 0xe33a6
	adds r4, #84	@ 000e33a6 5434
.org 0xe33a8
	adds r0, r4, #0	@ 000e33a8 201c
.org 0xe33aa
	movs r1, #1	@ 000e33aa 0121
.org 0xe33ac
	movs r2, #3	@ 000e33ac 0322
.org 0xe33ae
	bl 0xe3110	@ 000e33ae fff7affe
.org 0xe33b2
	adds r0, r4, #0	@ 000e33b2 201c
.org 0xe33b4
	movs r1, #1	@ 000e33b4 0121
.org 0xe33b6
	movs r2, #4	@ 000e33b6 0422
.org 0xe33b8
	bl 0xe3110	@ 000e33b8 fff7aafe
.org 0xe33bc
	movs r0, #2	@ 000e33bc 0220
.org 0xe33be
	strb r0, [r5, #17]	@ 000e33be 6874
.org 0xe33c0
	movs r0, #42	@ 000e33c0 2a20
.org 0xe33c2
	bl 0x2b10	@ 000e33c2 1ff7a5fb
.org 0xe33c6
	ldr r0, [pc, #224]	@ 000e33c6 3848
.org 0xe33c8
	mov r8, r0	@ 000e33c8 8046
.org 0xe33ca
	ldrb r0, [r5, #17]	@ 000e33ca 687c
.org 0xe33cc
	subs r0, #2	@ 000e33cc 0238
.org 0xe33ce
	lsls r0, r0, #3	@ 000e33ce c000
.org 0xe33d0
	mov r1, r8	@ 000e33d0 4146
.org 0xe33d2
	adds r1, #4	@ 000e33d2 0431
.org 0xe33d4
	adds r0, r0, r1	@ 000e33d4 4018
.org 0xe33d6
	ldr r1, [r0, #0]	@ 000e33d6 0168
.org 0xe33d8
	lsls r1, r1, #8	@ 000e33d8 0902
.org 0xe33da
	ldr r0, [r5, #88]	@ 000e33da a86d
.org 0xe33dc
	adds r0, r0, r1	@ 000e33dc 4018
.org 0xe33de
	str r0, [r5, #88]	@ 000e33de a865
.org 0xe33e0
	ldr r0, [pc, #200]	@ 000e33e0 3248
.org 0xe33e2
	ldrb r1, [r5, #17]	@ 000e33e2 697c
.org 0xe33e4
	subs r1, #2	@ 000e33e4 0239
.org 0xe33e6
	lsls r1, r1, #2	@ 000e33e6 8900
.org 0xe33e8
	adds r1, r1, r0	@ 000e33e8 0918
.org 0xe33ea
	ldr r3, [pc, #196]	@ 000e33ea 314b
.org 0xe33ec
	ldr r0, [r3, #0]	@ 000e33ec 1868
.org 0xe33ee
	ldr r2, [pc, #196]	@ 000e33ee 314a
.org 0xe33f0
	mov ip, r2	@ 000e33f0 9446
.org 0xe33f2
	mov r2, ip	@ 000e33f2 6246
.org 0xe33f4
	muls r2, r0	@ 000e33f4 4243
.org 0xe33f6
	adds r0, r2, #0	@ 000e33f6 101c
.org 0xe33f8
	ldr r7, [pc, #188]	@ 000e33f8 2f4f
.org 0xe33fa
	adds r0, r0, r7	@ 000e33fa c019
.org 0xe33fc
	lsls r0, r0, #1	@ 000e33fc 4000
.org 0xe33fe
	lsrs r2, r0, #1	@ 000e33fe 4208
.org 0xe3400
	str r2, [r3, #0]	@ 000e3400 1a60
.org 0xe3402
	lsrs r0, r0, #17	@ 000e3402 400c
.org 0xe3404
	movs r6, #255	@ 000e3404 ff26
.org 0xe3406
	ands r0, r6	@ 000e3406 3040
.org 0xe3408
	movs r4, #128	@ 000e3408 8024
.org 0xe340a
	lsls r4, r4, #1	@ 000e340a 6400
.org 0xe340c
	adds r0, r0, r4	@ 000e340c 0019
.org 0xe340e
	ldr r1, [r1, #0]	@ 000e340e 0968
.org 0xe3410
	muls r0, r1	@ 000e3410 4843
.org 0xe3412
	cmp r0, #0	@ 000e3412 0028
.org 0xe3414
	bge.n 0xe3418	@ 000e3414 00da
.org 0xe3416
	adds r0, #255	@ 000e3416 ff30
.org 0xe3418
	asrs r0, r0, #8	@ 000e3418 0012
.org 0xe341a
	str r0, [r5, #92]	@ 000e341a e865
.org 0xe341c
	mov r0, ip	@ 000e341c 6046
.org 0xe341e
	muls r0, r2	@ 000e341e 5043
.org 0xe3420
	adds r0, r0, r7	@ 000e3420 c019
.org 0xe3422
	lsls r0, r0, #1	@ 000e3422 4000
.org 0xe3424
	lsrs r1, r0, #1	@ 000e3424 4108
.org 0xe3426
	str r1, [r3, #0]	@ 000e3426 1960
.org 0xe3428
	lsrs r0, r0, #17	@ 000e3428 400c
.org 0xe342a
	ands r0, r6	@ 000e342a 3040
.org 0xe342c
	adds r0, r0, r4	@ 000e342c 0019
.org 0xe342e
	lsls r0, r0, #8	@ 000e342e 0002
.org 0xe3430
	negs r0, r0	@ 000e3430 4042
.org 0xe3432
	cmp r0, #0	@ 000e3432 0028
.org 0xe3434
	bge.n 0xe3438	@ 000e3434 00da
.org 0xe3436
	adds r0, #255	@ 000e3436 ff30
.org 0xe3438
	asrs r0, r0, #8	@ 000e3438 0012
.org 0xe343a
	str r0, [r5, #96]	@ 000e343a 2866
.org 0xe343c
	ldr r1, [pc, #124]	@ 000e343c 1f49
.org 0xe343e
	ldrb r0, [r5, #17]	@ 000e343e 687c
.org 0xe3440
	subs r0, #2	@ 000e3440 0238
.org 0xe3442
	lsls r0, r0, #1	@ 000e3442 4000
.org 0xe3444
	adds r0, r0, r1	@ 000e3444 4018
.org 0xe3446
	ldrh r1, [r0, #0]	@ 000e3446 0188
.org 0xe3448
	adds r0, r5, #0	@ 000e3448 281c
.org 0xe344a
	bl 0x1cf00	@ 000e344a 39f759fd
.org 0xe344e
	ldr r0, [pc, #112]	@ 000e344e 1c48
.org 0xe3450
	ldr r0, [r0, #0]	@ 000e3450 0068
.org 0xe3452
	ldr r0, [r0, #84]	@ 000e3452 406d
.org 0xe3454
	ldr r1, [r5, #84]	@ 000e3454 696d
.org 0xe3456
	cmp r0, r1	@ 000e3456 8842
.org 0xe3458
	ble.n 0xe34c4	@ 000e3458 34dd
.org 0xe345a
	ldr r0, [r5, #92]	@ 000e345a e86d
.org 0xe345c
	lsls r0, r0, #8	@ 000e345c 0002
.org 0xe345e
	negs r0, r0	@ 000e345e 4042
.org 0xe3460
	cmp r0, #0	@ 000e3460 0028
.org 0xe3462
	bge.n 0xe3466	@ 000e3462 00da
.org 0xe3464
	adds r0, #255	@ 000e3464 ff30
.org 0xe3466
	asrs r0, r0, #8	@ 000e3466 0012
.org 0xe3468
	str r0, [r5, #92]	@ 000e3468 e865
.org 0xe346a
	ldrb r0, [r5, #17]	@ 000e346a 687c
.org 0xe346c
	subs r0, #2	@ 000e346c 0238
.org 0xe346e
	lsls r0, r0, #3	@ 000e346e c000
.org 0xe3470
	add r0, r8	@ 000e3470 4044
.org 0xe3472
	ldr r0, [r0, #0]	@ 000e3472 0068
.org 0xe3474
	lsls r0, r0, #8	@ 000e3474 0002
.org 0xe3476
	subs r0, r1, r0	@ 000e3476 081a
.org 0xe3478
	str r0, [r5, #84]	@ 000e3478 6865
.org 0xe347a
	movs r2, #1	@ 000e347a 0122
.org 0xe347c
	ldrb r1, [r5, #10]	@ 000e347c a97a
.org 0xe347e
	movs r0, #16	@ 000e347e 1020
.org 0xe3480
	orrs r0, r1	@ 000e3480 0843
.org 0xe3482
	strb r0, [r5, #10]	@ 000e3482 a872
.org 0xe3484
	adds r0, r5, #0	@ 000e3484 281c
.org 0xe3486
	adds r0, #76	@ 000e3486 4c30
.org 0xe3488
	strb r2, [r0, #0]	@ 000e3488 0270
.org 0xe348a
	adds r3, r5, #0	@ 000e348a 2b1c
.org 0xe348c
	adds r3, #74	@ 000e348c 4a33
.org 0xe348e
	movs r2, #16	@ 000e348e 1022
.org 0xe3490
	ldrb r1, [r3, #0]	@ 000e3490 1978
.org 0xe3492
	movs r0, #17	@ 000e3492 1120
.org 0xe3494
	negs r0, r0	@ 000e3494 4042
.org 0xe3496
	ands r0, r1	@ 000e3496 0840
.org 0xe3498
	orrs r0, r2	@ 000e3498 1043
.org 0xe349a
	strb r0, [r3, #0]	@ 000e349a 1870
.org 0xe349c
	b.n 0xe34d4	@ 000e349c 1ae0
.org 0xe349e
	.byte 0x00	@ 000e349e data
.org 0xe349f
	.byte 0x00	@ 000e349f data
.org 0xe34a0
	.byte 0x00,0xe4,0xff,0xff	@ 000e34a0 data
.org 0xe34a4
	.byte 0x00,0xf9,0xff,0xff	@ 000e34a4 data
.org 0xe34a8
	.byte 0x70,0x8c,0x86,0x08	@ 000e34a8 data
.org 0xe34ac
	.byte 0x88,0x8c,0x86,0x08	@ 000e34ac data
.org 0xe34b0
	.byte 0x38,0xdc,0x02,0x02	@ 000e34b0 data
.org 0xe34b4
	.byte 0xfd,0x43,0x03,0x00	@ 000e34b4 data
.org 0xe34b8
	.byte 0xc3,0x9e,0x26,0x00	@ 000e34b8 data
.org 0xe34bc
	.byte 0x94,0x8c,0x86,0x08	@ 000e34bc data

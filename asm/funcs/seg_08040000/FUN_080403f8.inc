@ FUN_080403f8  entry 0x080403f8  size 268
.thumb
.org 0x403f8
FUN_080403f8:
	push {r4, r5, r6, lr}	@ 000403f8 70b5
.org 0x403fa
	adds r5, r0, #0	@ 000403fa 051c
.org 0x403fc
	ldr r6, [r5, #44]	@ 000403fc ee6a
.org 0x403fe
	adds r0, r6, #0	@ 000403fe 301c
.org 0x40400
	adds r0, #250	@ 00040400 fa30
.org 0x40402
	ldrb r0, [r0, #0]	@ 00040402 0078
.org 0x40404
	cmp r0, #2	@ 00040404 0228
.org 0x40406
	bne.n 0x40444	@ 00040406 1dd1
.org 0x40408
	ldrb r1, [r5, #10]	@ 00040408 a97a
.org 0x4040a
	movs r0, #254	@ 0004040a fe20
.org 0x4040c
	ands r0, r1	@ 0004040c 0840
.org 0x4040e
	movs r2, #0	@ 0004040e 0022
.org 0x40410
	movs r1, #253	@ 00040410 fd21
.org 0x40412
	ands r0, r1	@ 00040412 0840
.org 0x40414
	strb r0, [r5, #10]	@ 00040414 a872
.org 0x40416
	adds r0, r5, #0	@ 00040416 281c
.org 0x40418
	adds r0, #140	@ 00040418 8c30
.org 0x4041a
	str r2, [r0, #0]	@ 0004041a 0260
.org 0x4041c
	adds r0, #4	@ 0004041c 0430
.org 0x4041e
	str r2, [r0, #0]	@ 0004041e 0260
.org 0x40420
	adds r0, #4	@ 00040420 0430
.org 0x40422
	strb r2, [r0, #0]	@ 00040422 0270
.org 0x40424
	ldrb r1, [r5, #10]	@ 00040424 a97a
.org 0x40426
	movs r0, #251	@ 00040426 fb20
.org 0x40428
	ands r0, r1	@ 00040428 0840
.org 0x4042a
	strb r0, [r5, #10]	@ 0004042a a872
.org 0x4042c
	ldr r1, [pc, #16]	@ 0004042c 0449
.org 0x4042e
	ldrb r0, [r5, #9]	@ 0004042e 687a
.org 0x40430
	lsls r0, r0, #2	@ 00040430 8000
.org 0x40432
	adds r0, r0, r1	@ 00040432 4018
.org 0x40434
	movs r1, #3	@ 00040434 0321
.org 0x40436
	str r1, [r5, #12]	@ 00040436 e960
.org 0x40438
	ldr r0, [r0, #0]	@ 00040438 0068
.org 0x4043a
	ldr r0, [r0, #12]	@ 0004043a c068
.org 0x4043c
	b.n 0x40502	@ 0004043c 61e0
.org 0x4043e
	.byte 0x00	@ 0004043e data
.org 0x4043f
	.byte 0x00	@ 0004043f data
.org 0x40440
	.byte 0xf8,0x39,0x85,0x08	@ 00040440 data
.org 0x40444
	adds r0, r5, #0	@ 00040444 281c
.org 0x40446
	bl 0x1cff0	@ 00040446 dcf7d3fd
.org 0x4044a
	ldr r0, [r5, #84]	@ 0004044a 686d
.org 0x4044c
	ldr r1, [r5, #92]	@ 0004044c e96d
.org 0x4044e
	adds r0, r0, r1	@ 0004044e 4018
.org 0x40450
	str r0, [r5, #84]	@ 00040450 6865
.org 0x40452
	ldr r0, [r5, #88]	@ 00040452 a86d
.org 0x40454
	ldr r1, [r5, #96]	@ 00040454 296e
.org 0x40456
	adds r0, r0, r1	@ 00040456 4018
.org 0x40458
	str r0, [r5, #88]	@ 00040458 a865
.org 0x4045a
	ldr r0, [r5, #104]	@ 0004045a a86e
.org 0x4045c
	adds r1, r1, r0	@ 0004045c 0918
.org 0x4045e
	str r1, [r5, #96]	@ 0004045e 2966
.org 0x40460
	ldrb r0, [r5, #18]	@ 00040460 a87c
.org 0x40462
	adds r1, r0, #1	@ 00040462 411c
.org 0x40464
	strb r1, [r5, #18]	@ 00040464 a974
.org 0x40466
	lsls r0, r0, #24	@ 00040466 0006
.org 0x40468
	lsrs r0, r0, #24	@ 00040468 000e
.org 0x4046a
	cmp r0, #1	@ 0004046a 0128
.org 0x4046c
	bls.n 0x4047e	@ 0004046c 07d9
.org 0x4046e
	adds r0, r5, #0	@ 0004046e 281c
.org 0x40470
	adds r1, r6, #0	@ 00040470 311c
.org 0x40472
	movs r2, #1	@ 00040472 0122
.org 0x40474
	movs r3, #0	@ 00040474 0023
.org 0x40476
	bl 0x40034	@ 00040476 fff7ddfd
.org 0x4047a
	movs r0, #0	@ 0004047a 0020
.org 0x4047c
	strb r0, [r5, #18]	@ 0004047c a874
.org 0x4047e
	adds r0, r5, #0	@ 0004047e 281c
.org 0x40480
	movs r1, #1	@ 00040480 0121
.org 0x40482
	bl 0x3a99c	@ 00040482 faf78bfa
.org 0x40486
	lsls r0, r0, #24	@ 00040486 0006
.org 0x40488
	lsrs r2, r0, #24	@ 00040488 020e
.org 0x4048a
	cmp r2, #0	@ 0004048a 002a
.org 0x4048c
	bne.n 0x4049c	@ 0004048c 06d1
.org 0x4048e
	adds r0, r5, #0	@ 0004048e 281c
.org 0x40490
	adds r0, #140	@ 00040490 8c30
.org 0x40492
	ldr r0, [r0, #0]	@ 00040492 0068
.org 0x40494
	movs r1, #4	@ 00040494 0421
.org 0x40496
	ands r0, r1	@ 00040496 0840
.org 0x40498
	cmp r0, #0	@ 00040498 0028
.org 0x4049a
	beq.n 0x40504	@ 0004049a 33d0
.org 0x4049c
	cmp r2, #255	@ 0004049c ff2a
.org 0x4049e
	beq.n 0x404f2	@ 0004049e 28d0
.org 0x404a0
	movs r0, #63	@ 000404a0 3f20
.org 0x404a2
	bl 0x2b10	@ 000404a2 c2f735fb
.org 0x404a6
	ldr r2, [pc, #100]	@ 000404a6 194a
.org 0x404a8
	ldr r1, [r2, #0]	@ 000404a8 1168
.org 0x404aa
	ldr r0, [pc, #100]	@ 000404aa 1948
.org 0x404ac
	muls r0, r1	@ 000404ac 4843
.org 0x404ae
	ldr r1, [pc, #100]	@ 000404ae 1949
.org 0x404b0
	adds r0, r0, r1	@ 000404b0 4018
.org 0x404b2
	lsls r0, r0, #1	@ 000404b2 4000
.org 0x404b4
	lsrs r1, r0, #1	@ 000404b4 4108
.org 0x404b6
	str r1, [r2, #0]	@ 000404b6 1160
.org 0x404b8
	lsrs r0, r0, #17	@ 000404b8 400c
.org 0x404ba
	movs r1, #6	@ 000404ba 0621
.org 0x404bc
	bl 0x129198	@ 000404bc e8f06cfe
.org 0x404c0
	adds r4, r0, #0	@ 000404c0 041c
.org 0x404c2
	lsls r4, r4, #24	@ 000404c2 2406
.org 0x404c4
	lsrs r4, r4, #24	@ 000404c4 240e
.org 0x404c6
	adds r0, r5, #0	@ 000404c6 281c
.org 0x404c8
	adds r1, r6, #0	@ 000404c8 311c
.org 0x404ca
	movs r2, #3	@ 000404ca 0322
.org 0x404cc
	adds r3, r4, #0	@ 000404cc 231c
.org 0x404ce
	bl 0x40034	@ 000404ce fff7b1fd
.org 0x404d2
	movs r0, #16	@ 000404d2 1020
.org 0x404d4
	adds r3, r4, #0	@ 000404d4 231c
.org 0x404d6
	orrs r3, r0	@ 000404d6 0343
.org 0x404d8
	adds r0, r5, #0	@ 000404d8 281c
.org 0x404da
	adds r1, r6, #0	@ 000404da 311c
.org 0x404dc
	movs r2, #3	@ 000404dc 0322
.org 0x404de
	bl 0x40034	@ 000404de fff7a9fd
.org 0x404e2
	movs r0, #32	@ 000404e2 2020
.org 0x404e4
	orrs r4, r0	@ 000404e4 0443
.org 0x404e6
	adds r0, r5, #0	@ 000404e6 281c
.org 0x404e8
	adds r1, r6, #0	@ 000404e8 311c
.org 0x404ea
	movs r2, #3	@ 000404ea 0322
.org 0x404ec
	adds r3, r4, #0	@ 000404ec 231c
.org 0x404ee
	bl 0x40034	@ 000404ee fff7a1fd
.org 0x404f2
	ldr r1, [pc, #36]	@ 000404f2 0949
.org 0x404f4
	ldrb r0, [r5, #9]	@ 000404f4 687a
.org 0x404f6
	lsls r0, r0, #2	@ 000404f6 8000
.org 0x404f8
	adds r0, r0, r1	@ 000404f8 4018
.org 0x404fa
	movs r1, #2	@ 000404fa 0221
.org 0x404fc
	str r1, [r5, #12]	@ 000404fc e960
.org 0x404fe
	ldr r0, [r0, #0]	@ 000404fe 0068
.org 0x40500
	ldr r0, [r0, #8]	@ 00040500 8068
.org 0x40502
	str r0, [r5, #20]	@ 00040502 6861

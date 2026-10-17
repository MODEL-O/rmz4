@ FUN_080f9318  entry 0x080f9318  size 332
.thumb
.org 0xf9318
FUN_080f9318:
	push {r4, r5, r6, r7, lr}	@ 000f9318 f0b5
.org 0xf931a
	sub sp, #4	@ 000f931a 81b0
.org 0xf931c
	adds r5, r0, #0	@ 000f931c 051c
.org 0xf931e
	ldr r1, [pc, #88]	@ 000f931e 1649
.org 0xf9320
	mov r0, sp	@ 000f9320 6846
.org 0xf9322
	movs r2, #3	@ 000f9322 0322
.org 0xf9324
	bl 0x129258	@ 000f9324 2ff098ff
.org 0xf9328
	ldrb r4, [r5, #16]	@ 000f9328 2c7c
.org 0xf932a
	adds r6, r4, #0	@ 000f932a 261c
.org 0xf932c
	ldrb r7, [r5, #17]	@ 000f932c 6f7c
.org 0xf932e
	ldr r1, [pc, #76]	@ 000f932e 1349
.org 0xf9330
	adds r1, #38	@ 000f9330 2631
.org 0xf9332
	ldrb r0, [r1, #0]	@ 000f9332 0878
.org 0xf9334
	adds r0, #1	@ 000f9334 0130
.org 0xf9336
	movs r2, #0	@ 000f9336 0022
.org 0xf9338
	strb r0, [r1, #0]	@ 000f9338 0870
.org 0xf933a
	lsls r0, r0, #24	@ 000f933a 0006
.org 0xf933c
	lsrs r0, r0, #24	@ 000f933c 000e
.org 0xf933e
	cmp r0, #1	@ 000f933e 0128
.org 0xf9340
	bls.n 0xf9384	@ 000f9340 20d9
.org 0xf9342
	ldrb r1, [r5, #10]	@ 000f9342 a97a
.org 0xf9344
	movs r0, #254	@ 000f9344 fe20
.org 0xf9346
	ands r0, r1	@ 000f9346 0840
.org 0xf9348
	movs r1, #253	@ 000f9348 fd21
.org 0xf934a
	ands r0, r1	@ 000f934a 0840
.org 0xf934c
	strb r0, [r5, #10]	@ 000f934c a872
.org 0xf934e
	adds r0, r5, #0	@ 000f934e 281c
.org 0xf9350
	adds r0, #140	@ 000f9350 8c30
.org 0xf9352
	str r2, [r0, #0]	@ 000f9352 0260
.org 0xf9354
	adds r0, #4	@ 000f9354 0430
.org 0xf9356
	str r2, [r0, #0]	@ 000f9356 0260
.org 0xf9358
	adds r0, #4	@ 000f9358 0430
.org 0xf935a
	strb r2, [r0, #0]	@ 000f935a 0270
.org 0xf935c
	ldrb r1, [r5, #10]	@ 000f935c a97a
.org 0xf935e
	movs r0, #251	@ 000f935e fb20
.org 0xf9360
	ands r0, r1	@ 000f9360 0840
.org 0xf9362
	strb r0, [r5, #10]	@ 000f9362 a872
.org 0xf9364
	ldr r1, [pc, #24]	@ 000f9364 0649
.org 0xf9366
	ldrb r0, [r5, #9]	@ 000f9366 687a
.org 0xf9368
	lsls r0, r0, #2	@ 000f9368 8000
.org 0xf936a
	adds r0, r0, r1	@ 000f936a 4018
.org 0xf936c
	movs r1, #3	@ 000f936c 0321
.org 0xf936e
	str r1, [r5, #12]	@ 000f936e e960
.org 0xf9370
	ldr r0, [r0, #0]	@ 000f9370 0068
.org 0xf9372
	ldr r0, [r0, #12]	@ 000f9372 c068
.org 0xf9374
	str r0, [r5, #20]	@ 000f9374 6861
.org 0xf9376
	b.n 0xf947a	@ 000f9376 80e0
.org 0xf9378
	.byte 0x68,0xa4,0x12,0x08	@ 000f9378 data
.org 0xf937c
	.byte 0xb0,0xe8,0x02,0x02	@ 000f937c data
.org 0xf9380
	.byte 0xfc,0x92,0x86,0x08	@ 000f9380 data
.org 0xf9384
	ldr r1, [pc, #76]	@ 000f9384 1349
.org 0xf9386
	ldrb r0, [r5, #9]	@ 000f9386 687a
.org 0xf9388
	lsls r0, r0, #2	@ 000f9388 8000
.org 0xf938a
	adds r0, r0, r1	@ 000f938a 4018
.org 0xf938c
	movs r1, #1	@ 000f938c 0121
.org 0xf938e
	str r1, [r5, #12]	@ 000f938e e960
.org 0xf9390
	ldr r0, [r0, #0]	@ 000f9390 0068
.org 0xf9392
	ldr r0, [r0, #4]	@ 000f9392 4068
.org 0xf9394
	str r0, [r5, #20]	@ 000f9394 6861
.org 0xf9396
	strb r2, [r5, #13]	@ 000f9396 6a73
.org 0xf9398
	strb r2, [r5, #14]	@ 000f9398 aa73
.org 0xf939a
	strb r2, [r5, #15]	@ 000f939a ea73
.org 0xf939c
	ldrb r0, [r5, #10]	@ 000f939c a87a
.org 0xf939e
	orrs r0, r1	@ 000f939e 0843
.org 0xf93a0
	movs r1, #2	@ 000f93a0 0221
.org 0xf93a2
	orrs r0, r1	@ 000f93a2 0843
.org 0xf93a4
	strb r0, [r5, #10]	@ 000f93a4 a872
.org 0xf93a6
	ldr r0, [r5, #84]	@ 000f93a6 686d
.org 0xf93a8
	ldr r1, [r5, #88]	@ 000f93a8 a96d
.org 0xf93aa
	bl 0x8534	@ 000f93aa 0ff7c3f8
.org 0xf93ae
	str r0, [r5, #88]	@ 000f93ae a865
.org 0xf93b0
	cmp r4, #3	@ 000f93b0 032c
.org 0xf93b2
	bne.n 0xf93e4	@ 000f93b2 17d1
.org 0xf93b4
	ldr r2, [pc, #32]	@ 000f93b4 084a
.org 0xf93b6
	ldr r1, [r2, #0]	@ 000f93b6 1168
.org 0xf93b8
	ldr r0, [pc, #32]	@ 000f93b8 0848
.org 0xf93ba
	muls r0, r1	@ 000f93ba 4843
.org 0xf93bc
	ldr r1, [pc, #32]	@ 000f93bc 0849
.org 0xf93be
	adds r0, r0, r1	@ 000f93be 4018
.org 0xf93c0
	lsls r0, r0, #1	@ 000f93c0 4000
.org 0xf93c2
	lsrs r1, r0, #1	@ 000f93c2 4108
.org 0xf93c4
	str r1, [r2, #0]	@ 000f93c4 1160
.org 0xf93c6
	lsrs r0, r0, #17	@ 000f93c6 400c
.org 0xf93c8
	movs r1, #3	@ 000f93c8 0321
.org 0xf93ca
	bl 0x129198	@ 000f93ca 2ff0e5fe
.org 0xf93ce
	add r0, sp	@ 000f93ce 6844
.org 0xf93d0
	b.n 0xf93e8	@ 000f93d0 0ae0
.org 0xf93d2
	.byte 0x00	@ 000f93d2 data
.org 0xf93d3
	.byte 0x00	@ 000f93d3 data
.org 0xf93d4
	.byte 0xfc,0x92,0x86,0x08	@ 000f93d4 data
.org 0xf93d8
	.byte 0x38,0xdc,0x02,0x02	@ 000f93d8 data
.org 0xf93dc
	.byte 0xfd,0x43,0x03,0x00	@ 000f93dc data
.org 0xf93e0
	.byte 0xc3,0x9e,0x26,0x00	@ 000f93e0 data
.org 0xf93e4
	mov r1, sp	@ 000f93e4 6946
.org 0xf93e6
	adds r0, r1, r6	@ 000f93e6 8819
.org 0xf93e8
	ldrb r1, [r0, #0]	@ 000f93e8 0178
.org 0xf93ea
	adds r0, r5, #0	@ 000f93ea 281c
.org 0xf93ec
	adds r0, #180	@ 000f93ec b430
.org 0xf93ee
	strb r1, [r0, #0]	@ 000f93ee 0170
.org 0xf93f0
	adds r1, r5, #0	@ 000f93f0 291c
.org 0xf93f2
	adds r1, #182	@ 000f93f2 b631
.org 0xf93f4
	movs r0, #0	@ 000f93f4 0020
.org 0xf93f6
	strb r0, [r1, #0]	@ 000f93f6 0870
.org 0xf93f8
	str r0, [r5, #44]	@ 000f93f8 e862
.org 0xf93fa
	adds r0, r5, #0	@ 000f93fa 281c
.org 0xf93fc
	bl 0x1cc9c	@ 000f93fc 23f74efc
.org 0xf9400
	adds r1, r5, #0	@ 000f9400 291c
.org 0xf9402
	adds r1, #37	@ 000f9402 2531
.org 0xf9404
	movs r0, #24	@ 000f9404 1820
.org 0xf9406
	strb r0, [r1, #0]	@ 000f9406 0870
.org 0xf9408
	adds r2, r7, #0	@ 000f9408 3a1c
.org 0xf940a
	cmp r2, #0	@ 000f940a 002a
.org 0xf940c
	beq.n 0xf9416	@ 000f940c 03d0
.org 0xf940e
	ldrb r0, [r5, #10]	@ 000f940e a87a
.org 0xf9410
	movs r1, #16	@ 000f9410 1021
.org 0xf9412
	orrs r0, r1	@ 000f9412 0843
.org 0xf9414
	b.n 0xf941c	@ 000f9414 02e0
.org 0xf9416
	ldrb r1, [r5, #10]	@ 000f9416 a97a
.org 0xf9418
	movs r0, #239	@ 000f9418 ef20
.org 0xf941a
	ands r0, r1	@ 000f941a 0840
.org 0xf941c
	strb r0, [r5, #10]	@ 000f941c a872
.org 0xf941e
	movs r1, #1	@ 000f941e 0121
.org 0xf9420
	ands r1, r2	@ 000f9420 1140
.org 0xf9422
	adds r0, r5, #0	@ 000f9422 281c
.org 0xf9424
	adds r0, #76	@ 000f9424 4c30
.org 0xf9426
	strb r1, [r0, #0]	@ 000f9426 0170
.org 0xf9428
	adds r3, r5, #0	@ 000f9428 2b1c
.org 0xf942a
	adds r3, #74	@ 000f942a 4a33
.org 0xf942c
	lsls r1, r1, #4	@ 000f942c 0901
.org 0xf942e
	ldrb r2, [r3, #0]	@ 000f942e 1a78
.org 0xf9430
	movs r0, #17	@ 000f9430 1120
.org 0xf9432
	negs r0, r0	@ 000f9432 4042
.org 0xf9434
	ands r0, r2	@ 000f9434 1040
.org 0xf9436
	orrs r0, r1	@ 000f9436 0843
.org 0xf9438
	strb r0, [r3, #0]	@ 000f9438 1870
.org 0xf943a
	movs r1, #129	@ 000f943a 8121
.org 0xf943c
	lsls r1, r1, #8	@ 000f943c 0902
.org 0xf943e
	adds r0, r5, #0	@ 000f943e 281c
.org 0xf9440
	bl 0x1cf00	@ 000f9440 23f75efd
.org 0xf9444
	adds r0, r5, #0	@ 000f9444 281c
.org 0xf9446
	bl 0x1cff0	@ 000f9446 23f7d3fd
.org 0xf944a
	ldrb r1, [r5, #10]	@ 000f944a a97a
.org 0xf944c
	movs r0, #4	@ 000f944c 0420
.org 0xf944e
	orrs r0, r1	@ 000f944e 0843
.org 0xf9450
	strb r0, [r5, #10]	@ 000f9450 a872
.org 0xf9452
	adds r4, r5, #0	@ 000f9452 2c1c
.org 0xf9454
	adds r4, #116	@ 000f9454 7434
.org 0xf9456
	ldr r0, [pc, #44]	@ 000f9456 0b48
.org 0xf9458
	ldr r0, [r0, #0]	@ 000f9458 0068
.org 0xf945a
	ldr r1, [r0, #0]	@ 000f945a 0168
.org 0xf945c
	adds r2, r5, #0	@ 000f945c 2a1c
.org 0xf945e
	adds r2, #84	@ 000f945e 5432
.org 0xf9460
	adds r0, r4, #0	@ 000f9460 201c
.org 0xf9462
	movs r3, #32	@ 000f9462 2023

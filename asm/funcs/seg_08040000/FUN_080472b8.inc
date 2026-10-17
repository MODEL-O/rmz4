@ FUN_080472b8  entry 0x080472b8  size 608
.thumb
.org 0x472b8
FUN_080472b8:
	push {r4, r5, r6, r7, lr}	@ 000472b8 f0b5
.org 0x472ba
	mov r7, r8	@ 000472ba 4746
.org 0x472bc
	push {r7}	@ 000472bc 80b4
.org 0x472be
	adds r5, r0, #0	@ 000472be 051c
.org 0x472c0
	ldr r7, [r5, #40]	@ 000472c0 af6a
.org 0x472c2
	ldrb r6, [r5, #13]	@ 000472c2 6e7b
.org 0x472c4
	cmp r6, #0	@ 000472c4 002e
.org 0x472c6
	beq.n 0x472ca	@ 000472c6 00d0
.org 0x472c8
	b.n 0x473d0	@ 000472c8 82e0
.org 0x472ca
	ldrb r0, [r5, #18]	@ 000472ca a87c
.org 0x472cc
	subs r0, #1	@ 000472cc 0138
.org 0x472ce
	movs r1, #0	@ 000472ce 0021
.org 0x472d0
	mov r8, r1	@ 000472d0 8846
.org 0x472d2
	strb r0, [r5, #18]	@ 000472d2 a874
.org 0x472d4
	lsls r0, r0, #24	@ 000472d4 0006
.org 0x472d6
	lsrs r0, r0, #24	@ 000472d6 000e
.org 0x472d8
	cmp r0, #255	@ 000472d8 ff28
.org 0x472da
	beq.n 0x472de	@ 000472da 00d0
.org 0x472dc
	b.n 0x47524	@ 000472dc 22e1
.org 0x472de
	adds r4, r5, #0	@ 000472de 2c1c
.org 0x472e0
	adds r4, #84	@ 000472e0 5434
.org 0x472e2
	adds r0, r7, #0	@ 000472e2 381c
.org 0x472e4
	adds r1, r4, #0	@ 000472e4 211c
.org 0x472e6
	bl 0x41318	@ 000472e6 faf717f8
.org 0x472ea
	lsls r0, r0, #24	@ 000472ea 0006
.org 0x472ec
	lsrs r2, r0, #24	@ 000472ec 020e
.org 0x472ee
	mov ip, r4	@ 000472ee a446
.org 0x472f0
	cmp r2, #0	@ 000472f0 002a
.org 0x472f2
	beq.n 0x4732c	@ 000472f2 1bd0
.org 0x472f4
	ldrb r1, [r5, #10]	@ 000472f4 a97a
.org 0x472f6
	movs r0, #254	@ 000472f6 fe20
.org 0x472f8
	ands r0, r1	@ 000472f8 0840
.org 0x472fa
	movs r1, #253	@ 000472fa fd21
.org 0x472fc
	ands r0, r1	@ 000472fc 0840
.org 0x472fe
	strb r0, [r5, #10]	@ 000472fe a872
.org 0x47300
	adds r0, r5, #0	@ 00047300 281c
.org 0x47302
	adds r0, #140	@ 00047302 8c30
.org 0x47304
	str r6, [r0, #0]	@ 00047304 0660
.org 0x47306
	adds r0, #4	@ 00047306 0430
.org 0x47308
	str r6, [r0, #0]	@ 00047308 0660
.org 0x4730a
	adds r0, #4	@ 0004730a 0430
.org 0x4730c
	strb r6, [r0, #0]	@ 0004730c 0670
.org 0x4730e
	ldrb r1, [r5, #10]	@ 0004730e a97a
.org 0x47310
	movs r0, #251	@ 00047310 fb20
.org 0x47312
	ands r0, r1	@ 00047312 0840
.org 0x47314
	strb r0, [r5, #10]	@ 00047314 a872
.org 0x47316
	ldr r1, [pc, #16]	@ 00047316 0449
.org 0x47318
	ldrb r0, [r5, #9]	@ 00047318 687a
.org 0x4731a
	lsls r0, r0, #2	@ 0004731a 8000
.org 0x4731c
	adds r0, r0, r1	@ 0004731c 4018
.org 0x4731e
	movs r1, #3	@ 0004731e 0321
.org 0x47320
	str r1, [r5, #12]	@ 00047320 e960
.org 0x47322
	ldr r0, [r0, #0]	@ 00047322 0068
.org 0x47324
	ldr r0, [r0, #12]	@ 00047324 c068
.org 0x47326
	b.n 0x47522	@ 00047326 fce0
.org 0x47328
	.byte 0xf8,0x39,0x85,0x08	@ 00047328 data
.org 0x4732c
	ldrb r0, [r5, #17]	@ 0004732c 687c
.org 0x4732e
	cmp r0, #0	@ 0004732e 0028
.org 0x47330
	bne.n 0x4734c	@ 00047330 0cd1
.org 0x47332
	ldr r1, [r5, #84]	@ 00047332 696d
.org 0x47334
	ldr r0, [r7, #84]	@ 00047334 786d
.org 0x47336
	cmp r1, r0	@ 00047336 8142
.org 0x47338
	ble.n 0x47342	@ 00047338 03dd
.org 0x4733a
	movs r0, #192	@ 0004733a c020
.org 0x4733c
	lsls r0, r0, #1	@ 0004733c 4000
.org 0x4733e
	str r0, [r5, #92]	@ 0004733e e865
.org 0x47340
	b.n 0x47356	@ 00047340 09e0
.org 0x47342
	ldr r0, [pc, #4]	@ 00047342 0148
.org 0x47344
	str r0, [r5, #92]	@ 00047344 e865
.org 0x47346
	b.n 0x4737a	@ 00047346 18e0
.org 0x47348
	.byte 0x80,0xfe,0xff,0xff	@ 00047348 data
.org 0x4734c
	str r2, [r5, #92]	@ 0004734c ea65
.org 0x4734e
	ldr r1, [r5, #84]	@ 0004734e 696d
.org 0x47350
	ldr r0, [r7, #84]	@ 00047350 786d
.org 0x47352
	cmp r1, r0	@ 00047352 8142
.org 0x47354
	ble.n 0x4737a	@ 00047354 11dd
.org 0x47356
	movs r2, #1	@ 00047356 0122
.org 0x47358
	ldrb r0, [r5, #10]	@ 00047358 a87a
.org 0x4735a
	movs r1, #16	@ 0004735a 1021
.org 0x4735c
	orrs r0, r1	@ 0004735c 0843
.org 0x4735e
	strb r0, [r5, #10]	@ 0004735e a872
.org 0x47360
	adds r0, r5, #0	@ 00047360 281c
.org 0x47362
	adds r0, #76	@ 00047362 4c30
.org 0x47364
	strb r2, [r0, #0]	@ 00047364 0270
.org 0x47366
	adds r3, r5, #0	@ 00047366 2b1c
.org 0x47368
	adds r3, #74	@ 00047368 4a33
.org 0x4736a
	movs r2, #16	@ 0004736a 1022
.org 0x4736c
	ldrb r1, [r3, #0]	@ 0004736c 1978
.org 0x4736e
	movs r0, #17	@ 0004736e 1120
.org 0x47370
	negs r0, r0	@ 00047370 4042
.org 0x47372
	ands r0, r1	@ 00047372 0840
.org 0x47374
	orrs r0, r2	@ 00047374 1043
.org 0x47376
	strb r0, [r3, #0]	@ 00047376 1870
.org 0x47378
	b.n 0x47396	@ 00047378 0de0
.org 0x4737a
	ldrb r1, [r5, #10]	@ 0004737a a97a
.org 0x4737c
	movs r0, #239	@ 0004737c ef20
.org 0x4737e
	ands r0, r1	@ 0004737e 0840
.org 0x47380
	strb r0, [r5, #10]	@ 00047380 a872
.org 0x47382
	adds r0, r5, #0	@ 00047382 281c
.org 0x47384
	adds r0, #76	@ 00047384 4c30
.org 0x47386
	strb r2, [r0, #0]	@ 00047386 0270
.org 0x47388
	adds r2, r5, #0	@ 00047388 2a1c
.org 0x4738a
	adds r2, #74	@ 0004738a 4a32
.org 0x4738c
	ldrb r1, [r2, #0]	@ 0004738c 1178
.org 0x4738e
	movs r0, #17	@ 0004738e 1120
.org 0x47390
	negs r0, r0	@ 00047390 4042
.org 0x47392
	ands r0, r1	@ 00047392 0840
.org 0x47394
	strb r0, [r2, #0]	@ 00047394 1070
.org 0x47396
	ldr r0, [pc, #124]	@ 00047396 1f48
.org 0x47398
	str r0, [r5, #96]	@ 00047398 2866
.org 0x4739a
	ldrb r1, [r5, #10]	@ 0004739a a97a
.org 0x4739c
	movs r0, #4	@ 0004739c 0420
.org 0x4739e
	orrs r0, r1	@ 0004739e 0843
.org 0x473a0
	strb r0, [r5, #10]	@ 000473a0 a872
.org 0x473a2
	adds r4, r5, #0	@ 000473a2 2c1c
.org 0x473a4
	adds r4, #116	@ 000473a4 7434
.org 0x473a6
	ldr r1, [pc, #112]	@ 000473a6 1c49
.org 0x473a8
	adds r0, r4, #0	@ 000473a8 201c
.org 0x473aa
	mov r2, ip	@ 000473aa 6246
.org 0x473ac
	movs r3, #8	@ 000473ac 0823
.org 0x473ae
	bl 0x5760	@ 000473ae bef7d7f9
.org 0x473b2
	str r5, [r4, #44]	@ 000473b2 e562
.org 0x473b4
	ldr r0, [pc, #100]	@ 000473b4 1948
.org 0x473b6
	str r0, [r4, #36]	@ 000473b6 6062
.org 0x473b8
	ldrb r1, [r5, #10]	@ 000473b8 a97a
.org 0x473ba
	movs r0, #1	@ 000473ba 0120
.org 0x473bc
	orrs r0, r1	@ 000473bc 0843
.org 0x473be
	strb r0, [r5, #10]	@ 000473be a872
.org 0x473c0
	adds r0, r7, #0	@ 000473c0 381c
.org 0x473c2
	bl 0x3aa4c	@ 000473c2 f3f743fb
.org 0x473c6
	adds r1, r5, #0	@ 000473c6 291c
.org 0x473c8
	adds r1, #189	@ 000473c8 bd31
.org 0x473ca
	movs r0, #1	@ 000473ca 0120
.org 0x473cc
	strb r0, [r1, #0]	@ 000473cc 0870
.org 0x473ce
	strb r0, [r5, #13]	@ 000473ce 6873
.org 0x473d0
	ldr r1, [r5, #84]	@ 000473d0 696d
.org 0x473d2
	ldr r0, [r5, #92]	@ 000473d2 e86d
.org 0x473d4
	adds r2, r1, r0	@ 000473d4 0a18
.org 0x473d6
	str r2, [r5, #84]	@ 000473d6 6a65
.org 0x473d8
	ldrb r1, [r5, #10]	@ 000473d8 a97a
.org 0x473da
	movs r0, #16	@ 000473da 1020
.org 0x473dc
	ands r0, r1	@ 000473dc 0840
.org 0x473de
	lsls r0, r0, #24	@ 000473de 0006
.org 0x473e0
	lsrs r4, r0, #24	@ 000473e0 040e
.org 0x473e2
	cmp r4, #0	@ 000473e2 002c
.org 0x473e4
	beq.n 0x47420	@ 000473e4 1cd0
.org 0x473e6
	movs r1, #128	@ 000473e6 8021
.org 0x473e8
	lsls r1, r1, #3	@ 000473e8 c900
.org 0x473ea
	adds r0, r2, r1	@ 000473ea 5018
.org 0x473ec
	ldr r1, [r5, #88]	@ 000473ec a96d
.org 0x473ee
	bl 0x47688	@ 000473ee 00f04bf9
.org 0x473f2
	lsls r0, r0, #16	@ 000473f2 0004
.org 0x473f4
	cmp r0, #0	@ 000473f4 0028
.org 0x473f6
	beq.n 0x47444	@ 000473f6 25d0
.org 0x473f8
	ldr r0, [r5, #84]	@ 000473f8 686d
.org 0x473fa
	movs r2, #128	@ 000473fa 8022
.org 0x473fc
	lsls r2, r2, #3	@ 000473fc d200
.org 0x473fe
	adds r0, r0, r2	@ 000473fe 8018
.org 0x47400
	ldr r1, [r5, #88]	@ 00047400 a96d
.org 0x47402
	bl 0x816c	@ 00047402 c0f7b3fe
.org 0x47406
	ldr r1, [r5, #84]	@ 00047406 696d
.org 0x47408
	adds r1, r1, r0	@ 00047408 0918
.org 0x4740a
	str r1, [r5, #84]	@ 0004740a 6965
.org 0x4740c
	movs r0, #0	@ 0004740c 0020
.org 0x4740e
	str r0, [r5, #92]	@ 0004740e e865
.org 0x47410
	b.n 0x47444	@ 00047410 18e0
.org 0x47412
	.byte 0x00	@ 00047412 data
.org 0x47413
	.byte 0x00	@ 00047413 data
.org 0x47414
	.byte 0x00,0xfc,0xff,0xff	@ 00047414 data
.org 0x47418
	.byte 0x0c,0x6e,0x85,0x08	@ 00047418 data
.org 0x4741c
	.byte 0xb1,0x76,0x04,0x08	@ 0004741c data
.org 0x47420
	ldr r1, [pc, #268]	@ 00047420 4349
.org 0x47422
	adds r0, r2, r1	@ 00047422 5018
.org 0x47424
	ldr r1, [r5, #88]	@ 00047424 a96d
.org 0x47426
	bl 0x47688	@ 00047426 00f02ff9
.org 0x4742a
	lsls r0, r0, #16	@ 0004742a 0004
.org 0x4742c
	cmp r0, #0	@ 0004742c 0028
.org 0x4742e
	beq.n 0x47444	@ 0004742e 09d0
.org 0x47430
	ldr r0, [r5, #84]	@ 00047430 686d
.org 0x47432
	ldr r2, [pc, #252]	@ 00047432 3f4a
.org 0x47434
	adds r0, r0, r2	@ 00047434 8018
.org 0x47436
	ldr r1, [r5, #88]	@ 00047436 a96d
.org 0x47438
	bl 0x834c	@ 00047438 c0f788ff
.org 0x4743c
	ldr r1, [r5, #84]	@ 0004743c 696d
.org 0x4743e
	adds r1, r1, r0	@ 0004743e 0918
.org 0x47440
	str r1, [r5, #84]	@ 00047440 6965
.org 0x47442
	str r4, [r5, #92]	@ 00047442 ec65
.org 0x47444
	ldr r0, [r5, #96]	@ 00047444 286e
.org 0x47446
	adds r0, #64	@ 00047446 4030
.org 0x47448
	str r0, [r5, #96]	@ 00047448 2866
.org 0x4744a
	movs r1, #224	@ 0004744a e021
.org 0x4744c
	lsls r1, r1, #3	@ 0004744c c900
.org 0x4744e
	cmp r0, r1	@ 0004744e 8842
.org 0x47450
	ble.n 0x47454	@ 00047450 00dd
.org 0x47452
	str r1, [r5, #96]	@ 00047452 2966
.org 0x47454
	ldr r1, [r5, #88]	@ 00047454 a96d
.org 0x47456
	ldr r0, [r5, #96]	@ 00047456 286e
.org 0x47458
	adds r1, r1, r0	@ 00047458 0918
.org 0x4745a
	str r1, [r5, #88]	@ 0004745a a965
.org 0x4745c
	ldr r0, [r5, #84]	@ 0004745c 686d
.org 0x4745e
	movs r2, #128	@ 0004745e 8022
.org 0x47460
	lsls r2, r2, #3	@ 00047460 d200
.org 0x47462
	adds r1, r1, r2	@ 00047462 8918
.org 0x47464
	bl 0x47688	@ 00047464 00f010f9
.org 0x47468
	lsls r0, r0, #16	@ 00047468 0004
.org 0x4746a
	cmp r0, #0	@ 0004746a 0028
.org 0x4746c
	beq.n 0x47488	@ 0004746c 0cd0
.org 0x4746e
	ldr r0, [r5, #84]	@ 0004746e 686d
.org 0x47470
	ldr r1, [r5, #88]	@ 00047470 a96d
.org 0x47472
	movs r2, #128	@ 00047472 8022
.org 0x47474
	lsls r2, r2, #3	@ 00047474 d200
.org 0x47476
	adds r1, r1, r2	@ 00047476 8918
.org 0x47478
	bl 0x7db4	@ 00047478 c0f79cfc
.org 0x4747c
	ldr r1, [r5, #88]	@ 0004747c a96d
.org 0x4747e
	adds r1, r1, r0	@ 0004747e 0918
.org 0x47480
	str r1, [r5, #88]	@ 00047480 a965
.org 0x47482
	movs r0, #0	@ 00047482 0020
.org 0x47484
	str r0, [r5, #96]	@ 00047484 2866
.org 0x47486
	str r0, [r5, #92]	@ 00047486 e865
.org 0x47488
	ldr r0, [r5, #84]	@ 00047488 686d
.org 0x4748a
	ldr r1, [r5, #88]	@ 0004748a a96d
.org 0x4748c
	ldr r2, [pc, #160]	@ 0004748c 284a
.org 0x4748e
	adds r1, r1, r2	@ 0004748e 8918
.org 0x47490
	bl 0x47688	@ 00047490 00f0faf8
.org 0x47494
	lsls r0, r0, #16	@ 00047494 0004
.org 0x47496
	cmp r0, #0	@ 00047496 0028
.org 0x47498
	beq.n 0x474b2	@ 00047498 0bd0
.org 0x4749a
	ldr r0, [r5, #84]	@ 0004749a 686d
.org 0x4749c
	ldr r1, [r5, #88]	@ 0004749c a96d
.org 0x4749e
	ldr r2, [pc, #144]	@ 0004749e 244a
.org 0x474a0
	adds r1, r1, r2	@ 000474a0 8918
.org 0x474a2
	bl 0x7f8c	@ 000474a2 c0f773fd
.org 0x474a6
	ldr r1, [r5, #88]	@ 000474a6 a96d
.org 0x474a8
	adds r1, r1, r0	@ 000474a8 0918
.org 0x474aa
	str r1, [r5, #88]	@ 000474aa a965
.org 0x474ac
	movs r0, #0	@ 000474ac 0020
.org 0x474ae
	str r0, [r5, #96]	@ 000474ae 2866
.org 0x474b0
	str r0, [r5, #92]	@ 000474b0 e865
.org 0x474b2
	ldr r0, [r5, #92]	@ 000474b2 e86d
.org 0x474b4
	cmp r0, #0	@ 000474b4 0028
.org 0x474b6
	bne.n 0x474d8	@ 000474b6 0fd1
.org 0x474b8
	ldr r0, [r5, #96]	@ 000474b8 286e
.org 0x474ba
	cmp r0, #0	@ 000474ba 0028
.org 0x474bc
	bne.n 0x474d8	@ 000474bc 0cd1
.org 0x474be
	ldrb r1, [r5, #30]	@ 000474be a97f
.org 0x474c0
	lsls r1, r1, #8	@ 000474c0 0902
.org 0x474c2
	adds r0, r5, #0	@ 000474c2 281c
.org 0x474c4
	adds r0, #112	@ 000474c4 7030
.org 0x474c6
	ldrb r0, [r0, #0]	@ 000474c6 0078
.org 0x474c8
	orrs r0, r1	@ 000474c8 0843
.org 0x474ca
	ldr r1, [pc, #104]	@ 000474ca 1a49
.org 0x474cc
	cmp r0, r1	@ 000474cc 8842
.org 0x474ce
	bne.n 0x474d8	@ 000474ce 03d1
.org 0x474d0
	adds r1, #1	@ 000474d0 0131
.org 0x474d2
	adds r0, r5, #0	@ 000474d2 281c
.org 0x474d4
	bl 0x1cf00	@ 000474d4 d5f714fd
.org 0x474d8
	ldrb r0, [r5, #19]	@ 000474d8 e87c
.org 0x474da
	cmp r0, #24	@ 000474da 1828
.org 0x474dc
	bhi.n 0x474ea	@ 000474dc 05d8
.org 0x474de
	cmp r0, #24	@ 000474de 1828
.org 0x474e0
	bne.n 0x474ea	@ 000474e0 03d1
.org 0x474e2
	ldr r1, [pc, #84]	@ 000474e2 1549
.org 0x474e4
	adds r0, r5, #0	@ 000474e4 281c
.org 0x474e6
	bl 0x1cf00	@ 000474e6 d5f70bfd
.org 0x474ea
	adds r0, r5, #0	@ 000474ea 281c
.org 0x474ec
	bl 0x1cff0	@ 000474ec d5f780fd
.org 0x474f0
	ldrb r0, [r5, #19]	@ 000474f0 e87c
.org 0x474f2
	subs r0, #1	@ 000474f2 0138
.org 0x474f4
	strb r0, [r5, #19]	@ 000474f4 e874
.org 0x474f6
	lsls r0, r0, #24	@ 000474f6 0006
.org 0x474f8
	lsrs r0, r0, #24	@ 000474f8 000e
.org 0x474fa
	cmp r0, #255	@ 000474fa ff28
.org 0x474fc
	beq.n 0x4750c	@ 000474fc 06d0
.org 0x474fe
	adds r0, r5, #0	@ 000474fe 281c
.org 0x47500
	adds r0, #140	@ 00047500 8c30
.org 0x47502
	ldr r0, [r0, #0]	@ 00047502 0068
.org 0x47504
	ldr r1, [pc, #52]	@ 00047504 0d49
.org 0x47506
	ands r0, r1	@ 00047506 0840
.org 0x47508
	cmp r0, #0	@ 00047508 0028
.org 0x4750a
	beq.n 0x47524	@ 0004750a 0bd0
.org 0x4750c
	movs r0, #111	@ 0004750c 6f20
.org 0x4750e
	bl 0x2b10	@ 0004750e bbf7fffa
.org 0x47512
	ldr r1, [pc, #44]	@ 00047512 0b49
.org 0x47514
	ldrb r0, [r5, #9]	@ 00047514 687a
.org 0x47516
	lsls r0, r0, #2	@ 00047516 8000

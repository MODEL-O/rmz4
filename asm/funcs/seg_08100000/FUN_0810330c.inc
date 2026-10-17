@ FUN_0810330c  entry 0x0810330c  size 452
.thumb
.org 0x10330c
FUN_0810330c:
	push {r4, r5, r6, r7, lr}	@ 0010330c f0b5
.org 0x10330e
	mov r7, r8	@ 0010330e 4746
.org 0x103310
	push {r7}	@ 00103310 80b4
.org 0x103312
	adds r5, r0, #0	@ 00103312 051c
.org 0x103314
	adds r0, #181	@ 00103314 b530
.org 0x103316
	ldrb r0, [r0, #0]	@ 00103316 0078
.org 0x103318
	movs r1, #24	@ 00103318 1821
.org 0x10331a
	bl 0x129120	@ 0010331a 25f001ff
.org 0x10331e
	lsls r0, r0, #24	@ 0010331e 0006
.org 0x103320
	lsrs r2, r0, #24	@ 00103320 020e
.org 0x103322
	ldrb r0, [r5, #16]	@ 00103322 287c
.org 0x103324
	cmp r0, #0	@ 00103324 0028
.org 0x103326
	bne.n 0x103332	@ 00103326 04d1
.org 0x103328
	adds r1, r5, #0	@ 00103328 291c
.org 0x10332a
	adds r1, #180	@ 0010332a b431
.org 0x10332c
	ldrb r0, [r1, #0]	@ 0010332c 0878
.org 0x10332e
	adds r0, r0, r2	@ 0010332e 8018
.org 0x103330
	b.n 0x10333e	@ 00103330 05e0
.org 0x103332
	adds r1, r5, #0	@ 00103332 291c
.org 0x103334
	adds r1, #180	@ 00103334 b431
.org 0x103336
	ldrb r0, [r1, #0]	@ 00103336 0878
.org 0x103338
	subs r0, r0, r2	@ 00103338 801a
.org 0x10333a
	lsls r0, r0, #16	@ 0010333a 0004
.org 0x10333c
	lsrs r0, r0, #16	@ 0010333c 000c
.org 0x10333e
	adds r7, r1, #0	@ 0010333e 0f1c
.org 0x103340
	ldr r2, [pc, #92]	@ 00103340 174a
.org 0x103342
	lsls r0, r0, #16	@ 00103342 0004
.org 0x103344
	asrs r1, r0, #16	@ 00103344 0114
.org 0x103346
	cmp r1, #0	@ 00103346 0029
.org 0x103348
	bge.n 0x10334c	@ 00103348 00da
.org 0x10334a
	negs r1, r1	@ 0010334a 4942
.org 0x10334c
	adds r0, r1, #0	@ 0010334c 081c
.org 0x10334e
	cmp r1, #0	@ 0010334e 0029
.org 0x103350
	bge.n 0x103354	@ 00103350 00da
.org 0x103352
	adds r0, r1, #3	@ 00103352 c81c
.org 0x103354
	asrs r0, r0, #2	@ 00103354 8010
.org 0x103356
	lsls r0, r0, #2	@ 00103356 8000
.org 0x103358
	subs r0, r1, r0	@ 00103358 081a
.org 0x10335a
	ldrb r1, [r5, #16]	@ 0010335a 297c
.org 0x10335c
	lsls r1, r1, #2	@ 0010335c 8900
.org 0x10335e
	adds r0, r0, r1	@ 0010335e 4018
.org 0x103360
	adds r0, r0, r2	@ 00103360 8018
.org 0x103362
	ldrb r0, [r0, #0]	@ 00103362 0078
.org 0x103364
	adds r6, r7, #0	@ 00103364 3e1c
.org 0x103366
	strb r0, [r6, #0]	@ 00103366 3070
.org 0x103368
	adds r4, r5, #0	@ 00103368 2c1c
.org 0x10336a
	adds r4, #181	@ 0010336a b534
.org 0x10336c
	ldrb r0, [r4, #0]	@ 0010336c 2078
.org 0x10336e
	movs r1, #24	@ 0010336e 1821
.org 0x103370
	bl 0x129198	@ 00103370 25f012ff
.org 0x103374
	adds r1, r0, #0	@ 00103374 011c
.org 0x103376
	strb r1, [r4, #0]	@ 00103376 2170
.org 0x103378
	lsls r0, r1, #24	@ 00103378 0806
.org 0x10337a
	lsrs r0, r0, #24	@ 0010337a 000e
.org 0x10337c
	mov r8, r4	@ 0010337c a046
.org 0x10337e
	cmp r0, #3	@ 0010337e 0328
.org 0x103380
	bhi.n 0x1033cc	@ 00103380 24d8
.org 0x103382
	cmp r0, #1	@ 00103382 0128
.org 0x103384
	bhi.n 0x1033a8	@ 00103384 10d8
.org 0x103386
	ldr r1, [pc, #28]	@ 00103386 0749
.org 0x103388
	ldrb r0, [r6, #0]	@ 00103388 3078
.org 0x10338a
	lsls r0, r0, #2	@ 0010338a 8000
.org 0x10338c
	adds r0, r0, r1	@ 0010338c 4018
.org 0x10338e
	ldrh r1, [r0, #0]	@ 0010338e 0188
.org 0x103390
	ldrb r3, [r4, #0]	@ 00103390 2378
.org 0x103392
	adds r3, #1	@ 00103392 0133
.org 0x103394
	adds r0, r5, #0	@ 00103394 281c
.org 0x103396
	movs r2, #0	@ 00103396 0022
.org 0x103398
	bl 0x1cfc8	@ 00103398 19f716fe
.org 0x10339c
	b.n 0x1033c4	@ 0010339c 12e0
.org 0x10339e
	.byte 0x00	@ 0010339e data
.org 0x10339f
	.byte 0x00	@ 0010339f data
.org 0x1033a0
	.byte 0x70,0xbd,0x86,0x08	@ 001033a0 data
.org 0x1033a4
	.byte 0xf8,0xbc,0x86,0x08	@ 001033a4 data
.org 0x1033a8
	ldr r1, [pc, #28]	@ 001033a8 0749
.org 0x1033aa
	ldrb r0, [r6, #0]	@ 001033aa 3078
.org 0x1033ac
	lsls r0, r0, #2	@ 001033ac 8000
.org 0x1033ae
	adds r0, r0, r1	@ 001033ae 4018
.org 0x1033b0
	ldrh r1, [r0, #0]	@ 001033b0 0188
.org 0x1033b2
	mov r0, r8	@ 001033b2 4046
.org 0x1033b4
	ldrb r3, [r0, #0]	@ 001033b4 0378
.org 0x1033b6
	subs r3, #1	@ 001033b6 013b
.org 0x1033b8
	lsls r3, r3, #16	@ 001033b8 1b04
.org 0x1033ba
	lsrs r3, r3, #16	@ 001033ba 1b0c
.org 0x1033bc
	adds r0, r5, #0	@ 001033bc 281c
.org 0x1033be
	movs r2, #1	@ 001033be 0122
.org 0x1033c0
	bl 0x1cfc8	@ 001033c0 19f702fe
.org 0x1033c4
	movs r0, #1	@ 001033c4 0120
.org 0x1033c6
	b.n 0x1034d8	@ 001033c6 87e0
.org 0x1033c8
	.byte 0xf8,0xbc,0x86,0x08	@ 001033c8 data
.org 0x1033cc
	cmp r0, #20	@ 001033cc 1428
.org 0x1033ce
	bhi.n 0x103474	@ 001033ce 51d8
.org 0x1033d0
	subs r0, r1, #4	@ 001033d0 081f
.org 0x1033d2
	mov r1, r8	@ 001033d2 4146
.org 0x1033d4
	strb r0, [r1, #0]	@ 001033d4 0870
.org 0x1033d6
	ldrb r3, [r1, #0]	@ 001033d6 0b78
.org 0x1033d8
	lsrs r2, r3, #1	@ 001033d8 5a08
.org 0x1033da
	cmp r2, #3	@ 001033da 032a
.org 0x1033dc
	bls.n 0x1033e2	@ 001033dc 01d9
.org 0x1033de
	movs r0, #3	@ 001033de 0320
.org 0x1033e0
	ands r2, r0	@ 001033e0 0240
.org 0x1033e2
	ldr r7, [pc, #136]	@ 001033e2 224f
.org 0x1033e4
	ldrb r0, [r6, #0]	@ 001033e4 3078
.org 0x1033e6
	lsls r0, r0, #2	@ 001033e6 8000
.org 0x1033e8
	adds r0, r0, r7	@ 001033e8 c019
.org 0x1033ea
	ldrh r1, [r0, #0]	@ 001033ea 0188
.org 0x1033ec
	adds r2, #2	@ 001033ec 0232
.org 0x1033ee
	movs r0, #1	@ 001033ee 0120
.org 0x1033f0
	ands r3, r0	@ 001033f0 0340
.org 0x1033f2
	adds r3, #1	@ 001033f2 0133
.org 0x1033f4
	adds r0, r5, #0	@ 001033f4 281c
.org 0x1033f6
	bl 0x1cfc8	@ 001033f6 19f7e7fd
.org 0x1033fa
	mov r0, r8	@ 001033fa 4046
.org 0x1033fc
	ldrb r1, [r0, #0]	@ 001033fc 0178
.org 0x1033fe
	movs r0, #17	@ 001033fe 1120
.org 0x103400
	subs r0, r0, r1	@ 00103400 401a
.org 0x103402
	strb r0, [r5, #18]	@ 00103402 a874
.org 0x103404
	ldrb r0, [r5, #10]	@ 00103404 a87a
.org 0x103406
	movs r1, #4	@ 00103406 0421
.org 0x103408
	orrs r0, r1	@ 00103408 0843
.org 0x10340a
	strb r0, [r5, #10]	@ 0010340a a872
.org 0x10340c
	adds r4, r5, #0	@ 0010340c 2c1c
.org 0x10340e
	adds r4, #116	@ 0010340e 7434
.org 0x103410
	ldrb r0, [r6, #0]	@ 00103410 3078
.org 0x103412
	lsls r1, r0, #1	@ 00103412 4100
.org 0x103414
	adds r1, r1, r0	@ 00103414 0918
.org 0x103416
	lsls r1, r1, #3	@ 00103416 c900
.org 0x103418
	ldr r0, [pc, #84]	@ 00103418 1548
.org 0x10341a
	adds r1, r1, r0	@ 0010341a 0918
.org 0x10341c
	adds r2, r5, #0	@ 0010341c 2a1c
.org 0x10341e
	adds r2, #84	@ 0010341e 5432
.org 0x103420
	adds r0, r4, #0	@ 00103420 201c
.org 0x103422
	movs r3, #128	@ 00103422 8023
.org 0x103424
	bl 0x5760	@ 00103424 02f79cf9
.org 0x103428
	str r5, [r4, #44]	@ 00103428 e562
.org 0x10342a
	movs r0, #0	@ 0010342a 0020
.org 0x10342c
	str r0, [r4, #36]	@ 0010342c 6062
.org 0x10342e
	movs r0, #2	@ 0010342e 0220
.org 0x103430
	strb r0, [r5, #14]	@ 00103430 a873
.org 0x103432
	ldrb r4, [r5, #18]	@ 00103432 ac7c
.org 0x103434
	cmp r4, #0	@ 00103434 002c
.org 0x103436
	bne.n 0x1034da	@ 00103436 50d1
.org 0x103438
	ldrb r0, [r6, #0]	@ 00103438 3078
.org 0x10343a
	lsls r0, r0, #2	@ 0010343a 8000
.org 0x10343c
	adds r1, r7, #2	@ 0010343c b91c
.org 0x10343e
	adds r0, r0, r1	@ 0010343e 4018
.org 0x103440
	ldrh r1, [r0, #0]	@ 00103440 0188
.org 0x103442
	adds r0, r5, #0	@ 00103442 281c
.org 0x103444
	bl 0x1cf00	@ 00103444 19f75cfd
.org 0x103448
	adds r0, r5, #0	@ 00103448 281c
.org 0x10344a
	adds r0, #140	@ 0010344a 8c30
.org 0x10344c
	str r4, [r0, #0]	@ 0010344c 0460
.org 0x10344e
	adds r0, #4	@ 0010344e 0430
.org 0x103450
	str r4, [r0, #0]	@ 00103450 0460
.org 0x103452
	adds r0, #4	@ 00103452 0430
.org 0x103454
	strb r4, [r0, #0]	@ 00103454 0470
.org 0x103456
	ldrb r1, [r5, #10]	@ 00103456 a97a
.org 0x103458
	movs r0, #251	@ 00103458 fb20
.org 0x10345a
	ands r0, r1	@ 0010345a 0840
.org 0x10345c
	strb r0, [r5, #10]	@ 0010345c a872
.org 0x10345e
	ldrb r0, [r5, #18]	@ 0010345e a87c
.org 0x103460
	movs r1, #255	@ 00103460 ff21
.org 0x103462
	orrs r0, r1	@ 00103462 0843
.org 0x103464
	strb r0, [r5, #18]	@ 00103464 a874
.org 0x103466
	ldrb r0, [r5, #14]	@ 00103466 a87b
.org 0x103468
	adds r0, #1	@ 00103468 0130
.org 0x10346a
	b.n 0x1034d8	@ 0010346a 35e0
.org 0x10346c
	.byte 0xf8,0xbc,0x86,0x08	@ 0010346c data
.org 0x103470
	.byte 0x08,0xbd,0x86,0x08	@ 00103470 data
.org 0x103474
	adds r0, r1, #0	@ 00103474 081c
.org 0x103476
	subs r0, #21	@ 00103476 1538
.org 0x103478
	mov r1, r8	@ 00103478 4146
.org 0x10347a
	strb r0, [r1, #0]	@ 0010347a 0870
.org 0x10347c
	lsls r0, r0, #24	@ 0010347c 0006
.org 0x10347e
	lsrs r0, r0, #24	@ 0010347e 000e
.org 0x103480
	cmp r0, #1	@ 00103480 0128
.org 0x103482
	bhi.n 0x1034a4	@ 00103482 0fd8
.org 0x103484
	ldr r1, [pc, #24]	@ 00103484 0649
.org 0x103486
	ldrb r0, [r6, #0]	@ 00103486 3078
.org 0x103488
	lsls r0, r0, #2	@ 00103488 8000
.org 0x10348a
	adds r1, #2	@ 0010348a 0231
.org 0x10348c
	adds r0, r0, r1	@ 0010348c 4018
.org 0x10348e
	ldrh r1, [r0, #0]	@ 0010348e 0188
.org 0x103490
	mov r0, r8	@ 00103490 4046
.org 0x103492
	ldrb r3, [r0, #0]	@ 00103492 0378
.org 0x103494
	adds r3, #1	@ 00103494 0133
.org 0x103496
	adds r0, r5, #0	@ 00103496 281c
.org 0x103498
	movs r2, #0	@ 00103498 0022
.org 0x10349a
	bl 0x1cfc8	@ 0010349a 19f795fd
.org 0x10349e
	b.n 0x1034ba	@ 0010349e 0ce0
.org 0x1034a0
	.byte 0xf8,0xbc,0x86,0x08	@ 001034a0 data
.org 0x1034a4
	ldr r0, [pc, #68]	@ 001034a4 1148
.org 0x1034a6
	ldrb r1, [r7, #0]	@ 001034a6 3978
.org 0x1034a8
	lsls r1, r1, #2	@ 001034a8 8900
.org 0x1034aa
	adds r0, #2	@ 001034aa 0230
.org 0x1034ac
	adds r1, r1, r0	@ 001034ac 0918
.org 0x1034ae
	ldrh r1, [r1, #0]	@ 001034ae 0988
.org 0x1034b0
	adds r0, r5, #0	@ 001034b0 281c
.org 0x1034b2
	movs r2, #0	@ 001034b2 0022
.org 0x1034b4
	movs r3, #1	@ 001034b4 0123
.org 0x1034b6
	bl 0x1cfc8	@ 001034b6 19f787fd
.org 0x1034ba
	adds r0, r5, #0	@ 001034ba 281c
.org 0x1034bc
	adds r0, #140	@ 001034bc 8c30
.org 0x1034be
	movs r1, #0	@ 001034be 0021
.org 0x1034c0
	str r1, [r0, #0]	@ 001034c0 0160
.org 0x1034c2
	adds r0, #4	@ 001034c2 0430
.org 0x1034c4
	str r1, [r0, #0]	@ 001034c4 0160
.org 0x1034c6
	adds r0, #4	@ 001034c6 0430
.org 0x1034c8
	strb r1, [r0, #0]	@ 001034c8 0170
.org 0x1034ca
	ldrb r1, [r5, #10]	@ 001034ca a97a
.org 0x1034cc
	movs r0, #251	@ 001034cc fb20
.org 0x1034ce
	ands r0, r1	@ 001034ce 0840

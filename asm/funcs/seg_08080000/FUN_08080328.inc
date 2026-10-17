@ FUN_08080328  entry 0x08080328  size 334
.thumb
.org 0x80328
FUN_08080328:
	push {r4, r5, lr}	@ 00080328 30b5
.org 0x8032a
	sub sp, #8	@ 0008032a 82b0
.org 0x8032c
	adds r4, r0, #0	@ 0008032c 041c
.org 0x8032e
	ldrb r0, [r4, #15]	@ 0008032e e07b
.org 0x80330
	cmp r0, #0	@ 00080330 0028
.org 0x80332
	bne.n 0x803b8	@ 00080332 41d1
.org 0x80334
	ldr r0, [r4, #84]	@ 00080334 606d
.org 0x80336
	ldr r1, [r4, #92]	@ 00080336 e16d
.org 0x80338
	adds r0, r0, r1	@ 00080338 4018
.org 0x8033a
	str r0, [r4, #84]	@ 0008033a 6065
.org 0x8033c
	movs r0, #250	@ 0008033c fa20
.org 0x8033e
	muls r0, r1	@ 0008033e 4843
.org 0x80340
	cmp r0, #0	@ 00080340 0028
.org 0x80342
	bge.n 0x80346	@ 00080342 00da
.org 0x80344
	adds r0, #255	@ 00080344 ff30
.org 0x80346
	asrs r0, r0, #8	@ 00080346 0012
.org 0x80348
	str r0, [r4, #92]	@ 00080348 e065
.org 0x8034a
	ldr r0, [r4, #88]	@ 0008034a a06d
.org 0x8034c
	ldr r1, [r4, #96]	@ 0008034c 216e
.org 0x8034e
	adds r0, r0, r1	@ 0008034e 4018
.org 0x80350
	str r0, [r4, #88]	@ 00080350 a065
.org 0x80352
	adds r1, #64	@ 00080352 4031
.org 0x80354
	str r1, [r4, #96]	@ 00080354 2166
.org 0x80356
	adds r0, r4, #0	@ 00080356 201c
.org 0x80358
	bl 0x806b0	@ 00080358 00f0aaf9
.org 0x8035c
	ldrb r0, [r4, #18]	@ 0008035c a07c
.org 0x8035e
	movs r1, #6	@ 0008035e 0621
.org 0x80360
	bl 0x129198	@ 00080360 a8f01aff
.org 0x80364
	lsls r0, r0, #24	@ 00080364 0006
.org 0x80366
	cmp r0, #0	@ 00080366 0028
.org 0x80368
	bne.n 0x80384	@ 00080368 0cd1
.org 0x8036a
	ldr r0, [r4, #92]	@ 0008036a e06d
.org 0x8036c
	movs r1, #160	@ 0008036c a021
.org 0x8036e
	lsls r1, r1, #1	@ 0008036e 4900
.org 0x80370
	adds r0, r0, r1	@ 00080370 4018
.org 0x80372
	movs r1, #160	@ 00080372 a021
.org 0x80374
	lsls r1, r1, #2	@ 00080374 8900
.org 0x80376
	cmp r0, r1	@ 00080376 8842
.org 0x80378
	bls.n 0x80384	@ 00080378 04d9
.org 0x8037a
	adds r1, r4, #0	@ 0008037a 211c
.org 0x8037c
	adds r1, #84	@ 0008037c 5431
.org 0x8037e
	movs r0, #3	@ 0008037e 0320
.org 0x80380
	bl 0xd0c88	@ 00080380 50f082fc
.org 0x80384
	ldrb r1, [r4, #18]	@ 00080384 a17c
.org 0x80386
	movs r0, #2	@ 00080386 0220
.org 0x80388
	ands r0, r1	@ 00080388 0840
.org 0x8038a
	adds r2, r1, #0	@ 0008038a 0a1c
.org 0x8038c
	cmp r0, #0	@ 0008038c 0028
.org 0x8038e
	beq.n 0x80398	@ 0008038e 03d0
.org 0x80390
	ldrb r1, [r4, #10]	@ 00080390 a17a
.org 0x80392
	movs r0, #1	@ 00080392 0120
.org 0x80394
	orrs r0, r1	@ 00080394 0843
.org 0x80396
	b.n 0x8039e	@ 00080396 02e0
.org 0x80398
	ldrb r1, [r4, #10]	@ 00080398 a17a
.org 0x8039a
	movs r0, #254	@ 0008039a fe20
.org 0x8039c
	ands r0, r1	@ 0008039c 0840
.org 0x8039e
	strb r0, [r4, #10]	@ 0008039e a072
.org 0x803a0
	subs r0, r2, #1	@ 000803a0 501e
.org 0x803a2
	strb r0, [r4, #18]	@ 000803a2 a074
.org 0x803a4
	lsls r0, r0, #24	@ 000803a4 0006
.org 0x803a6
	lsrs r0, r0, #24	@ 000803a6 000e
.org 0x803a8
	cmp r0, #255	@ 000803a8 ff28
.org 0x803aa
	bne.n 0x80468	@ 000803aa 5dd1
.org 0x803ac
	movs r0, #1	@ 000803ac 0120
.org 0x803ae
	strb r0, [r4, #18]	@ 000803ae a074
.org 0x803b0
	ldrb r0, [r4, #15]	@ 000803b0 e07b
.org 0x803b2
	adds r0, #1	@ 000803b2 0130
.org 0x803b4
	strb r0, [r4, #15]	@ 000803b4 e073
.org 0x803b6
	b.n 0x80468	@ 000803b6 57e0
.org 0x803b8
	ldr r0, [r4, #84]	@ 000803b8 606d
.org 0x803ba
	ldr r1, [r4, #92]	@ 000803ba e16d
.org 0x803bc
	adds r0, r0, r1	@ 000803bc 4018
.org 0x803be
	str r0, [r4, #84]	@ 000803be 6065
.org 0x803c0
	movs r0, #250	@ 000803c0 fa20
.org 0x803c2
	muls r0, r1	@ 000803c2 4843
.org 0x803c4
	cmp r0, #0	@ 000803c4 0028
.org 0x803c6
	bge.n 0x803ca	@ 000803c6 00da
.org 0x803c8
	adds r0, #255	@ 000803c8 ff30
.org 0x803ca
	asrs r0, r0, #8	@ 000803ca 0012
.org 0x803cc
	str r0, [r4, #92]	@ 000803cc e065
.org 0x803ce
	ldr r0, [r4, #88]	@ 000803ce a06d
.org 0x803d0
	ldr r1, [r4, #96]	@ 000803d0 216e
.org 0x803d2
	adds r0, r0, r1	@ 000803d2 4018
.org 0x803d4
	str r0, [r4, #88]	@ 000803d4 a065
.org 0x803d6
	adds r1, #32	@ 000803d6 2031
.org 0x803d8
	str r1, [r4, #96]	@ 000803d8 2166
.org 0x803da
	adds r0, r4, #0	@ 000803da 201c
.org 0x803dc
	bl 0x806b0	@ 000803dc 00f068f9
.org 0x803e0
	ldrb r1, [r4, #18]	@ 000803e0 a17c
.org 0x803e2
	movs r0, #2	@ 000803e2 0220
.org 0x803e4
	ands r0, r1	@ 000803e4 0840
.org 0x803e6
	cmp r0, #0	@ 000803e6 0028
.org 0x803e8
	beq.n 0x803f2	@ 000803e8 03d0
.org 0x803ea
	ldrb r1, [r4, #10]	@ 000803ea a17a
.org 0x803ec
	movs r0, #1	@ 000803ec 0120
.org 0x803ee
	orrs r0, r1	@ 000803ee 0843
.org 0x803f0
	b.n 0x803f8	@ 000803f0 02e0
.org 0x803f2
	ldrb r1, [r4, #10]	@ 000803f2 a17a
.org 0x803f4
	movs r0, #254	@ 000803f4 fe20
.org 0x803f6
	ands r0, r1	@ 000803f6 0840
.org 0x803f8
	strb r0, [r4, #10]	@ 000803f8 a072
.org 0x803fa
	ldrb r0, [r4, #18]	@ 000803fa a07c
.org 0x803fc
	subs r0, #1	@ 000803fc 0138
.org 0x803fe
	strb r0, [r4, #18]	@ 000803fe a074
.org 0x80400
	lsls r0, r0, #24	@ 00080400 0006
.org 0x80402
	lsrs r0, r0, #24	@ 00080402 000e
.org 0x80404
	cmp r0, #255	@ 00080404 ff28
.org 0x80406
	bne.n 0x80468	@ 00080406 2fd1
.org 0x80408
	ldr r0, [r4, #84]	@ 00080408 606d
.org 0x8040a
	str r0, [sp, #0]	@ 0008040a 0090
.org 0x8040c
	ldr r0, [r4, #88]	@ 0008040c a06d
.org 0x8040e
	ldr r1, [pc, #104]	@ 0008040e 1a49
.org 0x80410
	adds r0, r0, r1	@ 00080410 4018
.org 0x80412
	str r0, [sp, #4]	@ 00080412 0190
.org 0x80414
	movs r0, #1	@ 00080414 0120
.org 0x80416
	mov r1, sp	@ 00080416 6946
.org 0x80418
	bl 0xd0c88	@ 00080418 50f036fc
.org 0x8041c
	adds r5, r4, #0	@ 0008041c 251c
.org 0x8041e
	adds r5, #84	@ 0008041e 5435
.org 0x80420
	adds r0, r4, #0	@ 00080420 201c
.org 0x80422
	adds r1, r5, #0	@ 00080422 291c
.org 0x80424
	bl 0xd67cc	@ 00080424 56f0d2f9
.org 0x80428
	movs r0, #42	@ 00080428 2a20
.org 0x8042a
	bl 0x2b10	@ 0008042a 82f771fb
.org 0x8042e
	movs r0, #3	@ 0008042e 0320
.org 0x80430
	movs r1, #13	@ 00080430 0d21
.org 0x80432
	adds r2, r5, #0	@ 00080432 2a1c
.org 0x80434
	bl 0x2ab88	@ 00080434 aaf7a8fb
.org 0x80438
	ldr r2, [pc, #64]	@ 00080438 104a
.org 0x8043a
	ldrh r1, [r2, #12]	@ 0008043a 9189
.org 0x8043c
	ldr r0, [pc, #64]	@ 0008043c 1048
.org 0x8043e
	cmp r1, r0	@ 0008043e 8142
.org 0x80440
	bhi.n 0x80446	@ 00080440 01d8
.org 0x80442
	adds r0, r1, #1	@ 00080442 481c
.org 0x80444
	strh r0, [r2, #12]	@ 00080444 9081
.org 0x80446
	adds r0, r4, #0	@ 00080446 201c
.org 0x80448
	adds r1, r5, #0	@ 00080448 291c
.org 0x8044a
	bl 0x2abe0	@ 0008044a aaf7c9fb
.org 0x8044e
	ldrb r1, [r4, #10]	@ 0008044e a17a
.org 0x80450
	movs r0, #254	@ 00080450 fe20
.org 0x80452
	ands r0, r1	@ 00080452 0840
.org 0x80454
	strb r0, [r4, #10]	@ 00080454 a072
.org 0x80456
	ldr r1, [pc, #44]	@ 00080456 0b49
.org 0x80458
	ldrb r0, [r4, #9]	@ 00080458 607a
.org 0x8045a
	lsls r0, r0, #2	@ 0008045a 8000
.org 0x8045c
	adds r0, r0, r1	@ 0008045c 4018
.org 0x8045e
	movs r1, #4	@ 0008045e 0421
.org 0x80460
	str r1, [r4, #12]	@ 00080460 e160
.org 0x80462
	ldr r0, [r0, #0]	@ 00080462 0068
.org 0x80464
	ldr r0, [r0, #16]	@ 00080464 0069
.org 0x80466
	str r0, [r4, #20]	@ 00080466 6061
.org 0x80468
	adds r0, r4, #0	@ 00080468 201c
.org 0x8046a
	bl 0x1cff0	@ 0008046a 9cf7c1fd
.org 0x8046e
	add sp, #8	@ 0008046e 02b0
.org 0x80470
	pop {r4, r5}	@ 00080470 30bc
.org 0x80472
	pop {r0}	@ 00080472 01bc
.org 0x80474
	bx r0	@ 00080474 0047

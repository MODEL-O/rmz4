@ FUN_080aa318  entry 0x080aa318  size 150
.thumb
.org 0xaa318
FUN_080aa318:
	push {r4, r5, r6, r7, lr}	@ 000aa318 f0b5
.org 0xaa31a
	adds r7, r0, #0	@ 000aa31a 071c
.org 0xaa31c
	bl 0x1cc9c	@ 000aa31c 72f7befc
.org 0xaa320
	ldrb r1, [r7, #10]	@ 000aa320 b97a
.org 0xaa322
	movs r0, #1	@ 000aa322 0120
.org 0xaa324
	orrs r0, r1	@ 000aa324 0843
.org 0xaa326
	movs r1, #2	@ 000aa326 0221
.org 0xaa328
	orrs r0, r1	@ 000aa328 0843
.org 0xaa32a
	movs r5, #0	@ 000aa32a 0025
.org 0xaa32c
	movs r1, #239	@ 000aa32c ef21
.org 0xaa32e
	ands r0, r1	@ 000aa32e 0840
.org 0xaa330
	strb r0, [r7, #10]	@ 000aa330 b872
.org 0xaa332
	movs r6, #1	@ 000aa332 0126
.org 0xaa334
	adds r0, r7, #0	@ 000aa334 381c
.org 0xaa336
	adds r0, #76	@ 000aa336 4c30
.org 0xaa338
	strb r5, [r0, #0]	@ 000aa338 0570
.org 0xaa33a
	adds r2, r7, #0	@ 000aa33a 3a1c
.org 0xaa33c
	adds r2, #74	@ 000aa33c 4a32
.org 0xaa33e
	ldrb r1, [r2, #0]	@ 000aa33e 1178
.org 0xaa340
	movs r0, #17	@ 000aa340 1120
.org 0xaa342
	negs r0, r0	@ 000aa342 4042
.org 0xaa344
	ands r0, r1	@ 000aa344 0840
.org 0xaa346
	strb r0, [r2, #0]	@ 000aa346 1070
.org 0xaa348
	ldrb r1, [r7, #10]	@ 000aa348 b97a
.org 0xaa34a
	movs r0, #4	@ 000aa34a 0420
.org 0xaa34c
	orrs r0, r1	@ 000aa34c 0843
.org 0xaa34e
	strb r0, [r7, #10]	@ 000aa34e b872
.org 0xaa350
	adds r4, r7, #0	@ 000aa350 3c1c
.org 0xaa352
	adds r4, #116	@ 000aa352 7434
.org 0xaa354
	ldr r1, [pc, #88]	@ 000aa354 1649
.org 0xaa356
	adds r2, #10	@ 000aa356 0a32
.org 0xaa358
	adds r0, r4, #0	@ 000aa358 201c
.org 0xaa35a
	movs r3, #14	@ 000aa35a 0e23
.org 0xaa35c
	bl 0x5760	@ 000aa35c 5bf700fa
.org 0xaa360
	str r7, [r4, #44]	@ 000aa360 e762
.org 0xaa362
	ldr r0, [pc, #80]	@ 000aa362 1448
.org 0xaa364
	str r0, [r4, #36]	@ 000aa364 6062
.org 0xaa366
	adds r0, r7, #0	@ 000aa366 381c
.org 0xaa368
	adds r0, #180	@ 000aa368 b430
.org 0xaa36a
	strb r5, [r0, #0]	@ 000aa36a 0570
.org 0xaa36c
	adds r0, #1	@ 000aa36c 0130
.org 0xaa36e
	strb r5, [r0, #0]	@ 000aa36e 0570
.org 0xaa370
	adds r0, #11	@ 000aa370 0b30
.org 0xaa372
	str r5, [r0, #0]	@ 000aa372 0560
.org 0xaa374
	strb r5, [r7, #14]	@ 000aa374 bd73
.org 0xaa376
	strb r5, [r7, #18]	@ 000aa376 bd74
.org 0xaa378
	strb r5, [r7, #19]	@ 000aa378 fd74
.org 0xaa37a
	str r5, [r7, #44]	@ 000aa37a fd62
.org 0xaa37c
	ldr r0, [r7, #84]	@ 000aa37c 786d
.org 0xaa37e
	ldr r1, [r7, #88]	@ 000aa37e b96d
.org 0xaa380
	bl 0x8534	@ 000aa380 5ef7d8f8
.org 0xaa384
	str r0, [r7, #88]	@ 000aa384 b865
.org 0xaa386
	ldr r0, [pc, #48]	@ 000aa386 0c48
.org 0xaa388
	str r0, [r7, #92]	@ 000aa388 f865
.org 0xaa38a
	movs r0, #160	@ 000aa38a a020
.org 0xaa38c
	lsls r0, r0, #1	@ 000aa38c 4000
.org 0xaa38e
	str r0, [r7, #96]	@ 000aa38e 3866
.org 0xaa390
	ldr r1, [pc, #40]	@ 000aa390 0a49
.org 0xaa392
	ldrb r0, [r7, #9]	@ 000aa392 787a
.org 0xaa394
	lsls r0, r0, #2	@ 000aa394 8000
.org 0xaa396
	adds r0, r0, r1	@ 000aa396 4018
.org 0xaa398
	str r6, [r7, #12]	@ 000aa398 fe60
.org 0xaa39a
	ldr r0, [r0, #0]	@ 000aa39a 0068
.org 0xaa39c
	ldr r0, [r0, #4]	@ 000aa39c 4068
.org 0xaa39e
	str r0, [r7, #20]	@ 000aa39e 7861
.org 0xaa3a0
	strb r5, [r7, #13]	@ 000aa3a0 7d73
.org 0xaa3a2
	adds r0, r7, #0	@ 000aa3a2 381c
.org 0xaa3a4
	bl 0xaa3c0	@ 000aa3a4 00f00cf8
.org 0xaa3a8
	pop {r4, r5, r6, r7}	@ 000aa3a8 f0bc
.org 0xaa3aa
	pop {r0}	@ 000aa3aa 01bc
.org 0xaa3ac
	bx r0	@ 000aa3ac 0047

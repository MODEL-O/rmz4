@ FUN_080e4318  entry 0x080e4318  size 170
.thumb
.org 0xe4318
FUN_080e4318:
	push {r4, r5, lr}	@ 000e4318 30b5
.org 0xe431a
	adds r4, r0, #0	@ 000e431a 041c
.org 0xe431c
	bl 0x1cc9c	@ 000e431c 38f7befc
.org 0xe4320
	ldrb r1, [r4, #10]	@ 000e4320 a17a
.org 0xe4322
	movs r0, #1	@ 000e4322 0120
.org 0xe4324
	orrs r0, r1	@ 000e4324 0843
.org 0xe4326
	movs r1, #2	@ 000e4326 0221
.org 0xe4328
	orrs r0, r1	@ 000e4328 0843
.org 0xe432a
	strb r0, [r4, #10]	@ 000e432a a072
.org 0xe432c
	movs r1, #212	@ 000e432c d421
.org 0xe432e
	lsls r1, r1, #8	@ 000e432e 0902
.org 0xe4330
	adds r0, r4, #0	@ 000e4330 201c
.org 0xe4332
	bl 0x1cf00	@ 000e4332 38f7e5fd
.org 0xe4336
	adds r0, r4, #0	@ 000e4336 201c
.org 0xe4338
	bl 0x1cff0	@ 000e4338 38f75afe
.org 0xe433c
	movs r2, #0	@ 000e433c 0022
.org 0xe433e
	ldrb r1, [r4, #10]	@ 000e433e a17a
.org 0xe4340
	movs r0, #239	@ 000e4340 ef20
.org 0xe4342
	ands r0, r1	@ 000e4342 0840
.org 0xe4344
	strb r0, [r4, #10]	@ 000e4344 a072
.org 0xe4346
	movs r5, #1	@ 000e4346 0125
.org 0xe4348
	adds r0, r4, #0	@ 000e4348 201c
.org 0xe434a
	adds r0, #76	@ 000e434a 4c30
.org 0xe434c
	strb r2, [r0, #0]	@ 000e434c 0270
.org 0xe434e
	adds r2, r4, #0	@ 000e434e 221c
.org 0xe4350
	adds r2, #74	@ 000e4350 4a32
.org 0xe4352
	ldrb r1, [r2, #0]	@ 000e4352 1178
.org 0xe4354
	movs r0, #17	@ 000e4354 1120
.org 0xe4356
	negs r0, r0	@ 000e4356 4042
.org 0xe4358
	ands r0, r1	@ 000e4358 0840
.org 0xe435a
	strb r0, [r2, #0]	@ 000e435a 1070
.org 0xe435c
	movs r0, #35	@ 000e435c 2320
.org 0xe435e
	strb r0, [r4, #18]	@ 000e435e a074
.org 0xe4360
	ldr r2, [pc, #96]	@ 000e4360 184a
.org 0xe4362
	ldr r1, [r2, #0]	@ 000e4362 1168
.org 0xe4364
	ldr r0, [pc, #96]	@ 000e4364 1848
.org 0xe4366
	muls r1, r0	@ 000e4366 4143
.org 0xe4368
	ldr r0, [pc, #96]	@ 000e4368 1848
.org 0xe436a
	adds r1, r1, r0	@ 000e436a 0918
.org 0xe436c
	lsls r1, r1, #1	@ 000e436c 4900
.org 0xe436e
	lsrs r0, r1, #1	@ 000e436e 4808
.org 0xe4370
	str r0, [r2, #0]	@ 000e4370 1060
.org 0xe4372
	lsrs r1, r1, #17	@ 000e4372 490c
.org 0xe4374
	movs r0, #7	@ 000e4374 0720
.org 0xe4376
	ands r1, r0	@ 000e4376 0140
.org 0xe4378
	adds r1, #64	@ 000e4378 4031
.org 0xe437a
	ldr r3, [pc, #84]	@ 000e437a 154b
.org 0xe437c
	ldrb r0, [r4, #17]	@ 000e437c 607c
.org 0xe437e
	adds r0, #64	@ 000e437e 4030
.org 0xe4380
	lsls r0, r0, #24	@ 000e4380 0006
.org 0xe4382
	lsrs r0, r0, #23	@ 000e4382 c00d
.org 0xe4384
	adds r0, r0, r3	@ 000e4384 c018
.org 0xe4386
	movs r2, #0	@ 000e4386 0022
.org 0xe4388
	ldrsh r0, [r0, r2]	@ 000e4388 805e
.org 0xe438a
	adds r2, r0, #0	@ 000e438a 021c
.org 0xe438c
	muls r2, r1	@ 000e438c 4a43
.org 0xe438e
	ldr r0, [r4, #84]	@ 000e438e 606d
.org 0xe4390
	adds r0, r0, r2	@ 000e4390 8018
.org 0xe4392
	str r0, [r4, #84]	@ 000e4392 6065
.org 0xe4394
	ldrb r0, [r4, #17]	@ 000e4394 607c
.org 0xe4396
	lsls r0, r0, #1	@ 000e4396 4000
.org 0xe4398
	adds r0, r0, r3	@ 000e4398 c018
.org 0xe439a
	movs r2, #0	@ 000e439a 0022
.org 0xe439c
	ldrsh r0, [r0, r2]	@ 000e439c 805e
.org 0xe439e
	muls r1, r0	@ 000e439e 4143
.org 0xe43a0
	ldr r0, [r4, #88]	@ 000e43a0 a06d
.org 0xe43a2
	adds r0, r0, r1	@ 000e43a2 4018
.org 0xe43a4
	str r0, [r4, #88]	@ 000e43a4 a065
.org 0xe43a6
	ldr r1, [pc, #44]	@ 000e43a6 0b49
.org 0xe43a8
	ldrb r0, [r4, #9]	@ 000e43a8 607a
.org 0xe43aa
	lsls r0, r0, #2	@ 000e43aa 8000
.org 0xe43ac
	adds r0, r0, r1	@ 000e43ac 4018
.org 0xe43ae
	str r5, [r4, #12]	@ 000e43ae e560
.org 0xe43b0
	ldr r0, [r0, #0]	@ 000e43b0 0068
.org 0xe43b2
	ldr r0, [r0, #4]	@ 000e43b2 4068
.org 0xe43b4
	str r0, [r4, #20]	@ 000e43b4 6061
.org 0xe43b6
	adds r0, r4, #0	@ 000e43b6 201c
.org 0xe43b8
	bl 0xe4284	@ 000e43b8 fff764ff
.org 0xe43bc
	pop {r4, r5}	@ 000e43bc 30bc
.org 0xe43be
	pop {r0}	@ 000e43be 01bc
.org 0xe43c0
	bx r0	@ 000e43c0 0047

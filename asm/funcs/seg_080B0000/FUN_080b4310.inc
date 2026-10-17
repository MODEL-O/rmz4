@ FUN_080b4310  entry 0x080b4310  size 608
.thumb
.org 0xb4310
FUN_080b4310:
	push {r4, r5, r6, lr}	@ 000b4310 70b5
.org 0xb4312
	adds r4, r0, #0	@ 000b4312 041c
.org 0xb4314
	ldrb r0, [r4, #14]	@ 000b4314 a07b
.org 0xb4316
	cmp r0, #0	@ 000b4316 0028
.org 0xb4318
	bne.n 0xb438c	@ 000b4318 38d1
.org 0xb431a
	ldrb r0, [r4, #16]	@ 000b431a 207c
.org 0xb431c
	lsls r1, r0, #3	@ 000b431c c100
.org 0xb431e
	adds r1, r1, r0	@ 000b431e 0918
.org 0xb4320
	ldr r0, [pc, #56]	@ 000b4320 0e48
.org 0xb4322
	adds r1, r1, r0	@ 000b4322 0918
.org 0xb4324
	lsls r1, r1, #16	@ 000b4324 0904
.org 0xb4326
	lsrs r1, r1, #16	@ 000b4326 090c
.org 0xb4328
	adds r0, r4, #0	@ 000b4328 201c
.org 0xb432a
	bl 0x1cf00	@ 000b432a 68f7e9fd
.org 0xb432e
	ldrb r2, [r4, #16]	@ 000b432e 227c
.org 0xb4330
	cmp r2, #0	@ 000b4330 002a
.org 0xb4332
	beq.n 0xb4360	@ 000b4332 15d0
.org 0xb4334
	movs r2, #1	@ 000b4334 0122
.org 0xb4336
	ldrb r1, [r4, #10]	@ 000b4336 a17a
.org 0xb4338
	movs r0, #16	@ 000b4338 1020
.org 0xb433a
	orrs r0, r1	@ 000b433a 0843
.org 0xb433c
	strb r0, [r4, #10]	@ 000b433c a072
.org 0xb433e
	adds r0, r4, #0	@ 000b433e 201c
.org 0xb4340
	adds r0, #76	@ 000b4340 4c30
.org 0xb4342
	strb r2, [r0, #0]	@ 000b4342 0270
.org 0xb4344
	adds r3, r4, #0	@ 000b4344 231c
.org 0xb4346
	adds r3, #74	@ 000b4346 4a33
.org 0xb4348
	movs r2, #16	@ 000b4348 1022
.org 0xb434a
	ldrb r1, [r3, #0]	@ 000b434a 1978
.org 0xb434c
	movs r0, #17	@ 000b434c 1120
.org 0xb434e
	negs r0, r0	@ 000b434e 4042
.org 0xb4350
	ands r0, r1	@ 000b4350 0840
.org 0xb4352
	orrs r0, r2	@ 000b4352 1043
.org 0xb4354
	strb r0, [r3, #0]	@ 000b4354 1870
.org 0xb4356
	movs r0, #128	@ 000b4356 8020
.org 0xb4358
	lsls r0, r0, #2	@ 000b4358 8000
.org 0xb435a
	b.n 0xb437e	@ 000b435a 10e0
.org 0xb435c
	.byte 0x01,0xc9,0xff,0xff	@ 000b435c data
.org 0xb4360
	ldrb r1, [r4, #10]	@ 000b4360 a17a
.org 0xb4362
	movs r0, #239	@ 000b4362 ef20
.org 0xb4364
	ands r0, r1	@ 000b4364 0840
.org 0xb4366
	strb r0, [r4, #10]	@ 000b4366 a072
.org 0xb4368
	adds r0, r4, #0	@ 000b4368 201c
.org 0xb436a
	adds r0, #76	@ 000b436a 4c30
.org 0xb436c
	strb r2, [r0, #0]	@ 000b436c 0270
.org 0xb436e
	adds r2, r4, #0	@ 000b436e 221c
.org 0xb4370
	adds r2, #74	@ 000b4370 4a32
.org 0xb4372
	ldrb r1, [r2, #0]	@ 000b4372 1178
.org 0xb4374
	movs r0, #17	@ 000b4374 1120
.org 0xb4376
	negs r0, r0	@ 000b4376 4042
.org 0xb4378
	ands r0, r1	@ 000b4378 0840
.org 0xb437a
	strb r0, [r2, #0]	@ 000b437a 1070
.org 0xb437c
	ldr r0, [pc, #132]	@ 000b437c 2148
.org 0xb437e
	str r0, [r4, #92]	@ 000b437e e065
.org 0xb4380
	movs r0, #0	@ 000b4380 0020
.org 0xb4382
	str r0, [r4, #96]	@ 000b4382 2066
.org 0xb4384
	strb r0, [r4, #15]	@ 000b4384 e073
.org 0xb4386
	ldrb r0, [r4, #14]	@ 000b4386 a07b
.org 0xb4388
	adds r0, #1	@ 000b4388 0130
.org 0xb438a
	strb r0, [r4, #14]	@ 000b438a a073
.org 0xb438c
	ldrb r5, [r4, #15]	@ 000b438c e57b
.org 0xb438e
	cmp r5, #0	@ 000b438e 002d
.org 0xb4390
	beq.n 0xb4394	@ 000b4390 00d0
.org 0xb4392
	b.n 0xb44b4	@ 000b4392 8fe0
.org 0xb4394
	ldr r0, [r4, #84]	@ 000b4394 606d
.org 0xb4396
	ldr r1, [r4, #88]	@ 000b4396 a16d
.org 0xb4398
	bl 0x8534	@ 000b4398 54f7ccf8
.org 0xb439c
	adds r3, r0, #0	@ 000b439c 031c
.org 0xb439e
	str r3, [r4, #88]	@ 000b439e a365
.org 0xb43a0
	ldr r1, [r4, #84]	@ 000b43a0 616d
.org 0xb43a2
	ldr r0, [r4, #92]	@ 000b43a2 e06d
.org 0xb43a4
	adds r2, r1, r0	@ 000b43a4 0a18
.org 0xb43a6
	str r2, [r4, #84]	@ 000b43a6 6265
.org 0xb43a8
	ldrb r1, [r4, #10]	@ 000b43a8 a17a
.org 0xb43aa
	movs r6, #16	@ 000b43aa 1026
.org 0xb43ac
	adds r0, r6, #0	@ 000b43ac 301c
.org 0xb43ae
	ands r0, r1	@ 000b43ae 0840
.org 0xb43b0
	cmp r0, #0	@ 000b43b0 0028
.org 0xb43b2
	beq.n 0xb4434	@ 000b43b2 3fd0
.org 0xb43b4
	movs r1, #192	@ 000b43b4 c021
.org 0xb43b6
	lsls r1, r1, #4	@ 000b43b6 0901
.org 0xb43b8
	adds r0, r2, r1	@ 000b43b8 5018
.org 0xb43ba
	ldr r2, [pc, #76]	@ 000b43ba 134a
.org 0xb43bc
	adds r1, r3, r2	@ 000b43bc 9918
.org 0xb43be
	bl 0x7c7c	@ 000b43be 53f75dfc
.org 0xb43c2
	lsls r0, r0, #16	@ 000b43c2 0004
.org 0xb43c4
	cmp r0, #0	@ 000b43c4 0028
.org 0xb43c6
	beq.n 0xb4410	@ 000b43c6 23d0
.org 0xb43c8
	ldrb r0, [r4, #16]	@ 000b43c8 207c
.org 0xb43ca
	lsls r1, r0, #3	@ 000b43ca c100
.org 0xb43cc
	adds r1, r1, r0	@ 000b43cc 0918
.org 0xb43ce
	ldr r0, [pc, #60]	@ 000b43ce 0f48
.org 0xb43d0
	adds r1, r1, r0	@ 000b43d0 0918
.org 0xb43d2
	lsls r1, r1, #16	@ 000b43d2 0904
.org 0xb43d4
	lsrs r1, r1, #16	@ 000b43d4 090c
.org 0xb43d6
	adds r0, r4, #0	@ 000b43d6 201c
.org 0xb43d8
	bl 0x1cf00	@ 000b43d8 68f792fd
.org 0xb43dc
	ldrb r1, [r4, #10]	@ 000b43dc a17a
.org 0xb43de
	movs r0, #239	@ 000b43de ef20
.org 0xb43e0
	ands r0, r1	@ 000b43e0 0840
.org 0xb43e2
	strb r0, [r4, #10]	@ 000b43e2 a072
.org 0xb43e4
	adds r0, r4, #0	@ 000b43e4 201c
.org 0xb43e6
	adds r0, #76	@ 000b43e6 4c30
.org 0xb43e8
	strb r5, [r0, #0]	@ 000b43e8 0570
.org 0xb43ea
	adds r2, r4, #0	@ 000b43ea 221c
.org 0xb43ec
	adds r2, #74	@ 000b43ec 4a32
.org 0xb43ee
	ldrb r1, [r2, #0]	@ 000b43ee 1178
.org 0xb43f0
	movs r0, #17	@ 000b43f0 1120
.org 0xb43f2
	negs r0, r0	@ 000b43f2 4042
.org 0xb43f4
	ands r0, r1	@ 000b43f4 0840
.org 0xb43f6
	strb r0, [r2, #0]	@ 000b43f6 1070
.org 0xb43f8
	ldr r0, [r4, #92]	@ 000b43f8 e06d
.org 0xb43fa
	negs r0, r0	@ 000b43fa 4042
.org 0xb43fc
	str r0, [r4, #92]	@ 000b43fc e065
.org 0xb43fe
	strb r6, [r4, #18]	@ 000b43fe a674
.org 0xb4400
	movs r0, #2	@ 000b4400 0220
.org 0xb4402
	b.n 0xb4596	@ 000b4402 c8e0
.org 0xb4404
	.byte 0x00,0xfe,0xff,0xff	@ 000b4404 data
.org 0xb4408
	.byte 0x00,0xff,0xff,0xff	@ 000b4408 data
.org 0xb440c
	.byte 0x00,0xc9,0xff,0xff	@ 000b440c data
.org 0xb4410
	ldr r0, [r4, #84]	@ 000b4410 606d
.org 0xb4412
	ldr r1, [r4, #88]	@ 000b4412 a16d
.org 0xb4414
	movs r2, #128	@ 000b4414 8022
.org 0xb4416
	lsls r2, r2, #1	@ 000b4416 5200
.org 0xb4418
	adds r1, r1, r2	@ 000b4418 8918
.org 0xb441a
	bl 0x7c7c	@ 000b441a 53f72ffc
.org 0xb441e
	lsls r0, r0, #16	@ 000b441e 0004
.org 0xb4420
	cmp r0, #0	@ 000b4420 0028
.org 0xb4422
	beq.n 0xb4426	@ 000b4422 00d0
.org 0xb4424
	b.n 0xb4598	@ 000b4424 b8e0
.org 0xb4426
	ldr r0, [pc, #8]	@ 000b4426 0248
.org 0xb4428
	str r0, [r4, #96]	@ 000b4428 2066
.org 0xb442a
	movs r0, #1	@ 000b442a 0120
.org 0xb442c
	b.n 0xb4596	@ 000b442c b3e0
.org 0xb442e
	.byte 0x00	@ 000b442e data
.org 0xb442f
	.byte 0x00	@ 000b442f data
.org 0xb4430
	.byte 0x00,0xfe,0xff,0xff	@ 000b4430 data
.org 0xb4434
	ldr r1, [pc, #80]	@ 000b4434 1449
.org 0xb4436
	adds r0, r2, r1	@ 000b4436 5018
.org 0xb4438
	ldr r2, [pc, #80]	@ 000b4438 144a
.org 0xb443a
	adds r1, r3, r2	@ 000b443a 9918
.org 0xb443c
	bl 0x7c7c	@ 000b443c 53f71efc
.org 0xb4440
	lsls r0, r0, #16	@ 000b4440 0004
.org 0xb4442
	cmp r0, #0	@ 000b4442 0028
.org 0xb4444
	beq.n 0xb4494	@ 000b4444 26d0
.org 0xb4446
	ldrb r0, [r4, #16]	@ 000b4446 207c
.org 0xb4448
	lsls r1, r0, #3	@ 000b4448 c100
.org 0xb444a
	adds r1, r1, r0	@ 000b444a 0918
.org 0xb444c
	ldr r0, [pc, #64]	@ 000b444c 1048
.org 0xb444e
	adds r1, r1, r0	@ 000b444e 0918
.org 0xb4450
	lsls r1, r1, #16	@ 000b4450 0904
.org 0xb4452
	lsrs r1, r1, #16	@ 000b4452 090c
.org 0xb4454
	adds r0, r4, #0	@ 000b4454 201c
.org 0xb4456
	bl 0x1cf00	@ 000b4456 68f753fd
.org 0xb445a
	movs r2, #1	@ 000b445a 0122
.org 0xb445c
	ldrb r0, [r4, #10]	@ 000b445c a07a
.org 0xb445e
	movs r1, #16	@ 000b445e 1021
.org 0xb4460
	orrs r0, r1	@ 000b4460 0843
.org 0xb4462
	strb r0, [r4, #10]	@ 000b4462 a072
.org 0xb4464
	adds r0, r4, #0	@ 000b4464 201c
.org 0xb4466
	adds r0, #76	@ 000b4466 4c30
.org 0xb4468
	strb r2, [r0, #0]	@ 000b4468 0270
.org 0xb446a
	adds r2, r4, #0	@ 000b446a 221c
.org 0xb446c
	adds r2, #74	@ 000b446c 4a32
.org 0xb446e
	ldrb r1, [r2, #0]	@ 000b446e 1178
.org 0xb4470
	movs r0, #17	@ 000b4470 1120
.org 0xb4472
	negs r0, r0	@ 000b4472 4042
.org 0xb4474
	ands r0, r1	@ 000b4474 0840
.org 0xb4476
	orrs r0, r6	@ 000b4476 3043
.org 0xb4478
	strb r0, [r2, #0]	@ 000b4478 1070
.org 0xb447a
	ldr r0, [r4, #92]	@ 000b447a e06d
.org 0xb447c
	negs r0, r0	@ 000b447c 4042
.org 0xb447e
	str r0, [r4, #92]	@ 000b447e e065
.org 0xb4480
	strb r6, [r4, #18]	@ 000b4480 a674
.org 0xb4482
	movs r0, #2	@ 000b4482 0220
.org 0xb4484
	b.n 0xb4596	@ 000b4484 87e0
.org 0xb4486
	.byte 0x00	@ 000b4486 data
.org 0xb4487
	.byte 0x00	@ 000b4487 data
.org 0xb4488
	.byte 0x00,0xf4,0xff,0xff	@ 000b4488 data
.org 0xb448c
	.byte 0x00,0xff,0xff,0xff	@ 000b448c data
.org 0xb4490
	.byte 0x00,0xc9,0xff,0xff	@ 000b4490 data
.org 0xb4494
	ldr r0, [r4, #84]	@ 000b4494 606d
.org 0xb4496
	ldr r1, [r4, #88]	@ 000b4496 a16d
.org 0xb4498
	movs r2, #128	@ 000b4498 8022
.org 0xb449a
	lsls r2, r2, #1	@ 000b449a 5200
.org 0xb449c
	adds r1, r1, r2	@ 000b449c 8918
.org 0xb449e
	bl 0x7c7c	@ 000b449e 53f7edfb
.org 0xb44a2
	lsls r0, r0, #16	@ 000b44a2 0004
.org 0xb44a4
	cmp r0, #0	@ 000b44a4 0028
.org 0xb44a6
	bne.n 0xb4598	@ 000b44a6 77d1
.org 0xb44a8
	ldr r0, [pc, #4]	@ 000b44a8 0148
.org 0xb44aa
	str r0, [r4, #96]	@ 000b44aa 2066
.org 0xb44ac
	movs r0, #1	@ 000b44ac 0120
.org 0xb44ae
	b.n 0xb4596	@ 000b44ae 72e0
.org 0xb44b0
	.byte 0x00,0xfe,0xff,0xff	@ 000b44b0 data
.org 0xb44b4
	cmp r5, #1	@ 000b44b4 012d
.org 0xb44b6
	bne.n 0xb4568	@ 000b44b6 57d1
.org 0xb44b8
	ldr r1, [r4, #84]	@ 000b44b8 616d
.org 0xb44ba
	ldr r0, [r4, #92]	@ 000b44ba e06d
.org 0xb44bc
	adds r2, r1, r0	@ 000b44bc 0a18
.org 0xb44be
	str r2, [r4, #84]	@ 000b44be 6265
.org 0xb44c0
	ldrb r1, [r4, #10]	@ 000b44c0 a17a
.org 0xb44c2
	movs r6, #16	@ 000b44c2 1026
.org 0xb44c4
	adds r0, r6, #0	@ 000b44c4 301c
.org 0xb44c6
	ands r0, r1	@ 000b44c6 0840
.org 0xb44c8
	cmp r0, #0	@ 000b44c8 0028
.org 0xb44ca
	beq.n 0xb4504	@ 000b44ca 1bd0
.org 0xb44cc
	movs r1, #192	@ 000b44cc c021
.org 0xb44ce
	lsls r1, r1, #4	@ 000b44ce 0901
.org 0xb44d0
	adds r0, r2, r1	@ 000b44d0 5018
.org 0xb44d2
	ldr r1, [r4, #88]	@ 000b44d2 a16d
.org 0xb44d4
	ldr r2, [pc, #40]	@ 000b44d4 0a4a
.org 0xb44d6
	adds r1, r1, r2	@ 000b44d6 8918
.org 0xb44d8
	bl 0x7c7c	@ 000b44d8 53f7d0fb
.org 0xb44dc
	lsls r0, r0, #16	@ 000b44dc 0004
.org 0xb44de
	cmp r0, #0	@ 000b44de 0028
.org 0xb44e0
	beq.n 0xb453c	@ 000b44e0 2cd0
.org 0xb44e2
	movs r2, #0	@ 000b44e2 0022
.org 0xb44e4
	ldrb r1, [r4, #10]	@ 000b44e4 a17a
.org 0xb44e6
	movs r0, #239	@ 000b44e6 ef20
.org 0xb44e8
	ands r0, r1	@ 000b44e8 0840
.org 0xb44ea
	strb r0, [r4, #10]	@ 000b44ea a072
.org 0xb44ec
	adds r0, r4, #0	@ 000b44ec 201c
.org 0xb44ee
	adds r0, #76	@ 000b44ee 4c30
.org 0xb44f0
	strb r2, [r0, #0]	@ 000b44f0 0270
.org 0xb44f2
	adds r2, r4, #0	@ 000b44f2 221c
.org 0xb44f4
	adds r2, #74	@ 000b44f4 4a32
.org 0xb44f6
	ldrb r1, [r2, #0]	@ 000b44f6 1178
.org 0xb44f8
	movs r0, #17	@ 000b44f8 1120
.org 0xb44fa
	negs r0, r0	@ 000b44fa 4042
.org 0xb44fc
	ands r0, r1	@ 000b44fc 0840
.org 0xb44fe
	b.n 0xb4534	@ 000b44fe 19e0
.org 0xb4500
	.byte 0x00,0xff,0xff,0xff	@ 000b4500 data
.org 0xb4504
	ldr r1, [pc, #88]	@ 000b4504 1649
.org 0xb4506
	adds r0, r2, r1	@ 000b4506 5018
.org 0xb4508
	ldr r1, [r4, #88]	@ 000b4508 a16d
.org 0xb450a
	ldr r2, [pc, #88]	@ 000b450a 164a
.org 0xb450c
	adds r1, r1, r2	@ 000b450c 8918
.org 0xb450e
	bl 0x7c7c	@ 000b450e 53f7b5fb
.org 0xb4512
	lsls r0, r0, #16	@ 000b4512 0004
.org 0xb4514
	cmp r0, #0	@ 000b4514 0028
.org 0xb4516
	beq.n 0xb453c	@ 000b4516 11d0
.org 0xb4518
	ldrb r0, [r4, #10]	@ 000b4518 a07a
.org 0xb451a
	movs r1, #16	@ 000b451a 1021
.org 0xb451c
	orrs r0, r1	@ 000b451c 0843
.org 0xb451e
	strb r0, [r4, #10]	@ 000b451e a072
.org 0xb4520
	adds r0, r4, #0	@ 000b4520 201c
.org 0xb4522
	adds r0, #76	@ 000b4522 4c30
.org 0xb4524
	strb r5, [r0, #0]	@ 000b4524 0570
.org 0xb4526
	adds r2, r4, #0	@ 000b4526 221c
.org 0xb4528
	adds r2, #74	@ 000b4528 4a32
.org 0xb452a
	ldrb r1, [r2, #0]	@ 000b452a 1178
.org 0xb452c
	movs r0, #17	@ 000b452c 1120
.org 0xb452e
	negs r0, r0	@ 000b452e 4042
.org 0xb4530
	ands r0, r1	@ 000b4530 0840
.org 0xb4532
	orrs r0, r6	@ 000b4532 3043
.org 0xb4534
	strb r0, [r2, #0]	@ 000b4534 1070
.org 0xb4536
	ldr r0, [r4, #92]	@ 000b4536 e06d
.org 0xb4538
	negs r0, r0	@ 000b4538 4042
.org 0xb453a
	str r0, [r4, #92]	@ 000b453a e065
.org 0xb453c
	ldr r1, [r4, #88]	@ 000b453c a16d
.org 0xb453e
	ldr r0, [r4, #96]	@ 000b453e 206e
.org 0xb4540
	adds r1, r1, r0	@ 000b4540 0918
.org 0xb4542
	str r1, [r4, #88]	@ 000b4542 a165
.org 0xb4544
	adds r0, #64	@ 000b4544 4030
.org 0xb4546
	str r0, [r4, #96]	@ 000b4546 2066
.org 0xb4548
	ldr r0, [r4, #84]	@ 000b4548 606d
.org 0xb454a
	bl 0x7c7c	@ 000b454a 53f797fb
.org 0xb454e
	lsls r0, r0, #16	@ 000b454e 0004
.org 0xb4550
	cmp r0, #0	@ 000b4550 0028
.org 0xb4552
	beq.n 0xb4598	@ 000b4552 21d0
.org 0xb4554
	ldr r0, [r4, #84]	@ 000b4554 606d
.org 0xb4556
	ldr r1, [r4, #88]	@ 000b4556 a16d
.org 0xb4558
	bl 0x8534	@ 000b4558 53f7ecff
.org 0xb455c
	str r0, [r4, #88]	@ 000b455c a065
.org 0xb455e
	b.n 0xb4594	@ 000b455e 19e0
.org 0xb4560
	.byte 0x00,0xf4,0xff,0xff	@ 000b4560 data
.org 0xb4564
	.byte 0x00,0xff,0xff,0xff	@ 000b4564 data
.org 0xb4568
	ldr r0, [r4, #84]	@ 000b4568 606d
.org 0xb456a
	ldr r1, [r4, #88]	@ 000b456a a16d
.org 0xb456c
	bl 0x8534	@ 000b456c 53f7e2ff

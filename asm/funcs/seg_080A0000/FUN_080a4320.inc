@ FUN_080a4320  entry 0x080a4320  size 394
.thumb
.org 0xa4320
FUN_080a4320:
	push {r4, r5, r6, r7, lr}	@ 000a4320 f0b5
.org 0xa4322
	mov r7, r9	@ 000a4322 4f46
.org 0xa4324
	mov r6, r8	@ 000a4324 4646
.org 0xa4326
	push {r6, r7}	@ 000a4326 c0b4
.org 0xa4328
	sub sp, #12	@ 000a4328 83b0
.org 0xa432a
	adds r7, r0, #0	@ 000a432a 071c
.org 0xa432c
	ldrb r0, [r7, #15]	@ 000a432c f87b
.org 0xa432e
	cmp r0, #0	@ 000a432e 0028
.org 0xa4330
	bne.n 0xa43aa	@ 000a4330 3bd1
.org 0xa4332
	ldr r1, [pc, #44]	@ 000a4332 0b49
.org 0xa4334
	adds r0, r7, #0	@ 000a4334 381c
.org 0xa4336
	bl 0x1cf00	@ 000a4336 78f7e3fd
.org 0xa433a
	ldr r0, [r7, #84]	@ 000a433a 786d
.org 0xa433c
	ldr r1, [r7, #88]	@ 000a433c b96d
.org 0xa433e
	ldr r2, [pc, #36]	@ 000a433e 094a
.org 0xa4340
	adds r1, r1, r2	@ 000a4340 8918
.org 0xa4342
	bl 0x7c7c	@ 000a4342 63f79bfc
.org 0xa4346
	lsls r0, r0, #16	@ 000a4346 0004
.org 0xa4348
	lsrs r0, r0, #16	@ 000a4348 000c
.org 0xa434a
	cmp r0, #0	@ 000a434a 0028
.org 0xa434c
	beq.n 0xa437a	@ 000a434c 15d0
.org 0xa434e
	adds r0, r7, #0	@ 000a434e 381c
.org 0xa4350
	adds r0, #188	@ 000a4350 bc30
.org 0xa4352
	ldrb r1, [r0, #0]	@ 000a4352 0178
.org 0xa4354
	adds r4, r0, #0	@ 000a4354 041c
.org 0xa4356
	cmp r1, #0	@ 000a4356 0029
.org 0xa4358
	beq.n 0xa4368	@ 000a4358 06d0
.org 0xa435a
	movs r0, #16	@ 000a435a 1020
.org 0xa435c
	b.n 0xa436c	@ 000a435c 06e0
.org 0xa435e
	.byte 0x00	@ 000a435e data
.org 0xa435f
	.byte 0x00	@ 000a435f data
.org 0xa4360
	.byte 0x18,0x87,0x00,0x00	@ 000a4360 data
.org 0xa4364
	.byte 0x01,0x0d,0x00,0x00	@ 000a4364 data
.org 0xa4368
	movs r0, #16	@ 000a4368 1020
.org 0xa436a
	negs r0, r0	@ 000a436a 4042
.org 0xa436c
	str r0, [r7, #100]	@ 000a436c 7866
.org 0xa436e
	ldr r0, [r7, #100]	@ 000a436e 786e
.org 0xa4370
	lsls r0, r0, #4	@ 000a4370 0001
.org 0xa4372
	str r0, [r7, #92]	@ 000a4372 f865
.org 0xa4374
	movs r0, #1	@ 000a4374 0120
.org 0xa4376
	strb r0, [r7, #15]	@ 000a4376 f873
.org 0xa4378
	b.n 0xa4384	@ 000a4378 04e0
.org 0xa437a
	str r0, [r7, #96]	@ 000a437a 3866
.org 0xa437c
	movs r0, #2	@ 000a437c 0220
.org 0xa437e
	strb r0, [r7, #15]	@ 000a437e f873
.org 0xa4380
	adds r4, r7, #0	@ 000a4380 3c1c
.org 0xa4382
	adds r4, #188	@ 000a4382 bc34
.org 0xa4384
	adds r0, r7, #0	@ 000a4384 381c
.org 0xa4386
	adds r0, #84	@ 000a4386 5430
.org 0xa4388
	ldrb r1, [r7, #15]	@ 000a4388 f97b
.org 0xa438a
	subs r1, #1	@ 000a438a 0139
.org 0xa438c
	lsls r1, r1, #24	@ 000a438c 0906
.org 0xa438e
	lsrs r1, r1, #24	@ 000a438e 090e
.org 0xa4390
	ldrb r2, [r7, #10]	@ 000a4390 ba7a
.org 0xa4392
	lsrs r2, r2, #4	@ 000a4392 1209
.org 0xa4394
	movs r3, #1	@ 000a4394 0123
.org 0xa4396
	ands r2, r3	@ 000a4396 1a40
.org 0xa4398
	ldrb r3, [r4, #0]	@ 000a4398 2378
.org 0xa439a
	adds r4, r7, #0	@ 000a439a 3c1c
.org 0xa439c
	adds r4, #37	@ 000a439c 2534
.org 0xa439e
	ldrb r4, [r4, #0]	@ 000a439e 2478
.org 0xa43a0
	str r4, [sp, #0]	@ 000a43a0 0094
.org 0xa43a2
	bl 0xe1cc4	@ 000a43a2 3df08ffc
.org 0xa43a6
	movs r0, #16	@ 000a43a6 1020
.org 0xa43a8
	strb r0, [r7, #18]	@ 000a43a8 b874
.org 0xa43aa
	adds r0, r7, #0	@ 000a43aa 381c
.org 0xa43ac
	bl 0x1cff0	@ 000a43ac 78f720fe
.org 0xa43b0
	movs r4, #0	@ 000a43b0 0024
.org 0xa43b2
	ldrb r0, [r7, #15]	@ 000a43b2 f87b
.org 0xa43b4
	cmp r0, #1	@ 000a43b4 0128
.org 0xa43b6
	bne.n 0xa43d6	@ 000a43b6 0ed1
.org 0xa43b8
	ldr r0, [r7, #84]	@ 000a43b8 786d
.org 0xa43ba
	ldr r1, [r7, #92]	@ 000a43ba f96d
.org 0xa43bc
	adds r0, r0, r1	@ 000a43bc 4018
.org 0xa43be
	str r0, [r7, #84]	@ 000a43be 7865
.org 0xa43c0
	ldr r0, [r7, #100]	@ 000a43c0 786e
.org 0xa43c2
	subs r1, r1, r0	@ 000a43c2 091a
.org 0xa43c4
	str r1, [r7, #92]	@ 000a43c4 f965
.org 0xa43c6
	ldrb r0, [r7, #18]	@ 000a43c6 b87c
.org 0xa43c8
	subs r0, #1	@ 000a43c8 0138
.org 0xa43ca
	strb r0, [r7, #18]	@ 000a43ca b874
.org 0xa43cc
	lsls r0, r0, #24	@ 000a43cc 0006
.org 0xa43ce
	lsrs r0, r0, #24	@ 000a43ce 000e
.org 0xa43d0
	cmp r0, #255	@ 000a43d0 ff28
.org 0xa43d2
	bne.n 0xa43f6	@ 000a43d2 10d1
.org 0xa43d4
	b.n 0xa43fa	@ 000a43d4 11e0
.org 0xa43d6
	ldr r1, [r7, #88]	@ 000a43d6 b96d
.org 0xa43d8
	ldr r0, [r7, #96]	@ 000a43d8 386e
.org 0xa43da
	adds r1, r1, r0	@ 000a43da 0918
.org 0xa43dc
	str r1, [r7, #88]	@ 000a43dc b965
.org 0xa43de
	adds r0, #64	@ 000a43de 4030
.org 0xa43e0
	str r0, [r7, #96]	@ 000a43e0 3866
.org 0xa43e2
	ldr r0, [r7, #84]	@ 000a43e2 786d
.org 0xa43e4
	movs r3, #208	@ 000a43e4 d023
.org 0xa43e6
	lsls r3, r3, #4	@ 000a43e6 1b01
.org 0xa43e8
	adds r1, r1, r3	@ 000a43e8 c918
.org 0xa43ea
	bl 0x7c7c	@ 000a43ea 63f747fc
.org 0xa43ee
	lsls r0, r0, #16	@ 000a43ee 0004
.org 0xa43f0
	cmp r0, #0	@ 000a43f0 0028
.org 0xa43f2
	beq.n 0xa43f6	@ 000a43f2 00d0
.org 0xa43f4
	movs r4, #1	@ 000a43f4 0124
.org 0xa43f6
	cmp r4, #0	@ 000a43f6 002c
.org 0xa43f8
	beq.n 0xa44ac	@ 000a43f8 58d0
.org 0xa43fa
	adds r4, r7, #0	@ 000a43fa 3c1c
.org 0xa43fc
	adds r4, #84	@ 000a43fc 5434
.org 0xa43fe
	movs r0, #0	@ 000a43fe 0020
.org 0xa4400
	movs r1, #15	@ 000a4400 0f21
.org 0xa4402
	adds r2, r4, #0	@ 000a4402 221c
.org 0xa4404
	bl 0x2ab88	@ 000a4404 86f7c0fb
.org 0xa4408
	ldr r5, [pc, #24]	@ 000a4408 064d
.org 0xa440a
	adds r0, r7, #0	@ 000a440a 381c
.org 0xa440c
	adds r0, #188	@ 000a440c bc30
.org 0xa440e
	ldrb r2, [r0, #0]	@ 000a440e 0278
.org 0xa4410
	ldrb r1, [r7, #10]	@ 000a4410 b97a
.org 0xa4412
	movs r3, #16	@ 000a4412 1023
.org 0xa4414
	adds r0, r3, #0	@ 000a4414 181c
.org 0xa4416
	ands r0, r1	@ 000a4416 0840
.org 0xa4418
	mov r9, r4	@ 000a4418 a146
.org 0xa441a
	cmp r0, #0	@ 000a441a 0028
.org 0xa441c
	beq.n 0xa4428	@ 000a441c 04d0
.org 0xa441e
	orrs r3, r2	@ 000a441e 1343
.org 0xa4420
	b.n 0xa442a	@ 000a4420 03e0
.org 0xa4422
	.byte 0x00	@ 000a4422 data
.org 0xa4423
	.byte 0x00	@ 000a4423 data
.org 0xa4424
	.byte 0xa4,0x1f,0x86,0x08	@ 000a4424 data
.org 0xa4428
	adds r3, r2, #0	@ 000a4428 131c
.org 0xa442a
	adds r0, r4, #0	@ 000a442a 201c
.org 0xa442c
	adds r1, r5, #0	@ 000a442c 291c
.org 0xa442e
	movs r2, #0	@ 000a442e 0022
.org 0xa4430
	bl 0xd4c8c	@ 000a4430 30f02cfc
.org 0xa4434
	ldr r0, [pc, #132]	@ 000a4434 2148
.org 0xa4436
	mov r8, r0	@ 000a4436 8046
.org 0xa4438
	ldr r0, [r0, #0]	@ 000a4438 0068
.org 0xa443a
	ldr r5, [pc, #132]	@ 000a443a 214d
.org 0xa443c
	adds r1, r0, #0	@ 000a443c 011c
.org 0xa443e
	muls r1, r5	@ 000a443e 6943
.org 0xa4440
	ldr r3, [pc, #128]	@ 000a4440 204b
.org 0xa4442
	adds r1, r1, r3	@ 000a4442 c918
.org 0xa4444
	lsls r1, r1, #1	@ 000a4444 4900
.org 0xa4446
	lsrs r6, r1, #1	@ 000a4446 4e08
.org 0xa4448
	lsrs r1, r1, #17	@ 000a4448 490c
.org 0xa444a
	movs r4, #15	@ 000a444a 0f24
.org 0xa444c
	ands r1, r4	@ 000a444c 2140
.org 0xa444e
	movs r2, #8	@ 000a444e 0822
.org 0xa4450
	subs r1, r2, r1	@ 000a4450 511a
.org 0xa4452
	lsls r1, r1, #8	@ 000a4452 0902
.org 0xa4454
	ldr r0, [r7, #84]	@ 000a4454 786d
.org 0xa4456
	adds r0, r0, r1	@ 000a4456 4018
.org 0xa4458
	str r0, [sp, #4]	@ 000a4458 0190
.org 0xa445a
	adds r0, r6, #0	@ 000a445a 301c
.org 0xa445c
	muls r0, r5	@ 000a445c 6843
.org 0xa445e
	adds r0, r0, r3	@ 000a445e c018
.org 0xa4460
	lsls r0, r0, #1	@ 000a4460 4000
.org 0xa4462
	lsrs r1, r0, #1	@ 000a4462 4108
.org 0xa4464
	mov r3, r8	@ 000a4464 4346
.org 0xa4466
	str r1, [r3, #0]	@ 000a4466 1960
.org 0xa4468
	lsrs r0, r0, #17	@ 000a4468 400c
.org 0xa446a
	ands r0, r4	@ 000a446a 2040
.org 0xa446c
	subs r2, r2, r0	@ 000a446c 121a
.org 0xa446e
	lsls r2, r2, #8	@ 000a446e 1202
.org 0xa4470
	ldr r0, [r7, #88]	@ 000a4470 b86d
.org 0xa4472
	adds r0, r0, r2	@ 000a4472 8018
.org 0xa4474
	str r0, [sp, #8]	@ 000a4474 0290
.org 0xa4476
	movs r0, #1	@ 000a4476 0120
.org 0xa4478
	add r1, sp, #4	@ 000a4478 01a9
.org 0xa447a
	bl 0xd0c88	@ 000a447a 2cf005fc
.org 0xa447e
	movs r0, #42	@ 000a447e 2a20
.org 0xa4480
	bl 0x2b10	@ 000a4480 5ef746fb
.org 0xa4484
	ldr r2, [pc, #64]	@ 000a4484 104a
.org 0xa4486
	ldrh r1, [r2, #12]	@ 000a4486 9189
.org 0xa4488
	ldr r0, [pc, #64]	@ 000a4488 1048
.org 0xa448a
	cmp r1, r0	@ 000a448a 8142
.org 0xa448c
	bhi.n 0xa4492	@ 000a448c 01d8
.org 0xa448e
	adds r0, r1, #1	@ 000a448e 481c
.org 0xa4490
	strh r0, [r2, #12]	@ 000a4490 9081
.org 0xa4492
	adds r0, r7, #0	@ 000a4492 381c
.org 0xa4494
	mov r1, r9	@ 000a4494 4946
.org 0xa4496
	bl 0x2abe0	@ 000a4496 86f7a3fb
.org 0xa449a
	ldr r1, [pc, #52]	@ 000a449a 0d49
.org 0xa449c
	ldrb r0, [r7, #9]	@ 000a449c 787a
.org 0xa449e
	lsls r0, r0, #2	@ 000a449e 8000
.org 0xa44a0
	adds r0, r0, r1	@ 000a44a0 4018
.org 0xa44a2
	movs r1, #4	@ 000a44a2 0421
.org 0xa44a4
	str r1, [r7, #12]	@ 000a44a4 f960
.org 0xa44a6
	ldr r0, [r0, #0]	@ 000a44a6 0068
.org 0xa44a8
	ldr r0, [r0, #16]	@ 000a44a8 0069

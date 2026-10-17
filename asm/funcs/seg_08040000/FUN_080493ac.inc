@ FUN_080493ac  entry 0x080493ac  size 304
.thumb
.org 0x493ac
FUN_080493ac:
	push {r4, r5, lr}	@ 000493ac 30b5
.org 0x493ae
	adds r5, r0, #0	@ 000493ae 051c
.org 0x493b0
	ldr r1, [pc, #56]	@ 000493b0 0e49
.org 0x493b2
	ldrb r0, [r5, #9]	@ 000493b2 687a
.org 0x493b4
	lsls r0, r0, #2	@ 000493b4 8000
.org 0x493b6
	adds r0, r0, r1	@ 000493b6 4018
.org 0x493b8
	movs r1, #1	@ 000493b8 0121
.org 0x493ba
	str r1, [r5, #12]	@ 000493ba e960
.org 0x493bc
	ldr r0, [r0, #0]	@ 000493bc 0068
.org 0x493be
	ldr r0, [r0, #4]	@ 000493be 4068
.org 0x493c0
	str r0, [r5, #20]	@ 000493c0 6861
.org 0x493c2
	adds r0, r5, #0	@ 000493c2 281c
.org 0x493c4
	bl 0x1cc9c	@ 000493c4 d3f76afc
.org 0x493c8
	adds r0, r5, #0	@ 000493c8 281c
.org 0x493ca
	bl 0x1ceec	@ 000493ca d3f78ffd
.org 0x493ce
	ldrb r1, [r5, #10]	@ 000493ce a97a
.org 0x493d0
	movs r0, #1	@ 000493d0 0120
.org 0x493d2
	orrs r0, r1	@ 000493d2 0843
.org 0x493d4
	movs r1, #2	@ 000493d4 0221
.org 0x493d6
	orrs r0, r1	@ 000493d6 0843
.org 0x493d8
	strb r0, [r5, #10]	@ 000493d8 a872
.org 0x493da
	ldrb r0, [r5, #16]	@ 000493da 287c
.org 0x493dc
	cmp r0, #0	@ 000493dc 0028
.org 0x493de
	bne.n 0x493f4	@ 000493de 09d1
.org 0x493e0
	ldr r1, [pc, #12]	@ 000493e0 0349
.org 0x493e2
	adds r0, r5, #0	@ 000493e2 281c
.org 0x493e4
	bl 0x1cf00	@ 000493e4 d3f78cfd
.org 0x493e8
	b.n 0x49410	@ 000493e8 12e0
.org 0x493ea
	.byte 0x00	@ 000493ea data
.org 0x493eb
	.byte 0x00	@ 000493eb data
.org 0x493ec
	.byte 0xf8,0x39,0x85,0x08	@ 000493ec data
.org 0x493f0
	.byte 0x38,0x80,0x00,0x00	@ 000493f0 data
.org 0x493f4
	ldrb r1, [r5, #11]	@ 000493f4 e97a
.org 0x493f6
	movs r0, #251	@ 000493f6 fb20
.org 0x493f8
	ands r0, r1	@ 000493f8 0840
.org 0x493fa
	strb r0, [r5, #11]	@ 000493fa e872
.org 0x493fc
	movs r1, #0	@ 000493fc 0021
.org 0x493fe
	movs r0, #0	@ 000493fe 0020
.org 0x49400
	strh r0, [r5, #32]	@ 00049400 2884
.org 0x49402
	adds r0, r5, #0	@ 00049402 281c
.org 0x49404
	adds r0, #34	@ 00049404 2230
.org 0x49406
	strb r1, [r0, #0]	@ 00049406 0170
.org 0x49408
	ldr r1, [pc, #76]	@ 00049408 1349
.org 0x4940a
	adds r0, r5, #0	@ 0004940a 281c
.org 0x4940c
	bl 0x1cf00	@ 0004940c d3f778fd
.org 0x49410
	adds r0, r5, #0	@ 00049410 281c
.org 0x49412
	bl 0x1cff0	@ 00049412 d3f7edfd
.org 0x49416
	ldrb r1, [r5, #10]	@ 00049416 a97a
.org 0x49418
	movs r0, #4	@ 00049418 0420
.org 0x4941a
	orrs r0, r1	@ 0004941a 0843
.org 0x4941c
	strb r0, [r5, #10]	@ 0004941c a872
.org 0x4941e
	adds r4, r5, #0	@ 0004941e 2c1c
.org 0x49420
	adds r4, #116	@ 00049420 7434
.org 0x49422
	ldr r1, [pc, #56]	@ 00049422 0e49
.org 0x49424
	adds r2, r5, #0	@ 00049424 2a1c
.org 0x49426
	adds r2, #84	@ 00049426 5432
.org 0x49428
	adds r0, r4, #0	@ 00049428 201c
.org 0x4942a
	movs r3, #8	@ 0004942a 0823
.org 0x4942c
	bl 0x5760	@ 0004942c bcf798f9
.org 0x49430
	str r5, [r4, #44]	@ 00049430 e562
.org 0x49432
	ldr r0, [pc, #44]	@ 00049432 0b48
.org 0x49434
	str r0, [r4, #36]	@ 00049434 6062
.org 0x49436
	ldrb r0, [r5, #16]	@ 00049436 287c
.org 0x49438
	cmp r0, #0	@ 00049438 0028
.org 0x4943a
	bne.n 0x49480	@ 0004943a 21d1
.org 0x4943c
	ldrb r1, [r5, #10]	@ 0004943c a97a
.org 0x4943e
	movs r0, #16	@ 0004943e 1020
.org 0x49440
	ands r0, r1	@ 00049440 0840
.org 0x49442
	cmp r0, #0	@ 00049442 0028
.org 0x49444
	beq.n 0x49464	@ 00049444 0ed0
.org 0x49446
	ldrb r0, [r5, #17]	@ 00049446 687c
.org 0x49448
	lsls r1, r0, #1	@ 00049448 4100
.org 0x4944a
	adds r1, r1, r0	@ 0004944a 0918
.org 0x4944c
	lsls r1, r1, #6	@ 0004944c 8901
.org 0x4944e
	movs r0, #176	@ 0004944e b020
.org 0x49450
	lsls r0, r0, #2	@ 00049450 8000
.org 0x49452
	subs r0, r0, r1	@ 00049452 401a
.org 0x49454
	b.n 0x49470	@ 00049454 0ce0
.org 0x49456
	.byte 0x00	@ 00049456 data
.org 0x49457
	.byte 0x00	@ 00049457 data
.org 0x49458
	.byte 0x0a,0x8c,0x00,0x00	@ 00049458 data
.org 0x4945c
	.byte 0xdc,0x71,0x85,0x08	@ 0004945c data
.org 0x49460
	.byte 0x69,0x96,0x04,0x08	@ 00049460 data
.org 0x49464
	ldrb r1, [r5, #17]	@ 00049464 697c
.org 0x49466
	lsls r0, r1, #1	@ 00049466 4800
.org 0x49468
	adds r0, r0, r1	@ 00049468 4018
.org 0x4946a
	lsls r0, r0, #6	@ 0004946a 8001
.org 0x4946c
	ldr r1, [pc, #8]	@ 0004946c 0249
.org 0x4946e
	adds r0, r0, r1	@ 0004946e 4018
.org 0x49470
	str r0, [r5, #92]	@ 00049470 e865
.org 0x49472
	ldr r0, [pc, #8]	@ 00049472 0248
.org 0x49474
	b.n 0x494f4	@ 00049474 3ee0
.org 0x49476
	.byte 0x00	@ 00049476 data
.org 0x49477
	.byte 0x00	@ 00049477 data
.org 0x49478
	.byte 0x40,0xfd,0xff,0xff	@ 00049478 data
.org 0x4947c
	.byte 0x00,0xff,0xff,0xff	@ 0004947c data
.org 0x49480
	ldrb r1, [r5, #10]	@ 00049480 a97a
.org 0x49482
	movs r0, #16	@ 00049482 1020
.org 0x49484
	ands r0, r1	@ 00049484 0840
.org 0x49486
	cmp r0, #0	@ 00049486 0028
.org 0x49488
	beq.n 0x494b8	@ 00049488 16d0
.org 0x4948a
	ldr r2, [pc, #32]	@ 0004948a 084a
.org 0x4948c
	ldr r1, [r2, #0]	@ 0004948c 1168
.org 0x4948e
	ldr r0, [pc, #32]	@ 0004948e 0848
.org 0x49490
	muls r0, r1	@ 00049490 4843
.org 0x49492
	ldr r1, [pc, #32]	@ 00049492 0849
.org 0x49494
	adds r0, r0, r1	@ 00049494 4018
.org 0x49496
	lsls r0, r0, #1	@ 00049496 4000
.org 0x49498
	lsrs r1, r0, #1	@ 00049498 4108
.org 0x4949a
	str r1, [r2, #0]	@ 0004949a 1160
.org 0x4949c
	lsrs r0, r0, #17	@ 0004949c 400c
.org 0x4949e
	movs r1, #3	@ 0004949e 0321
.org 0x494a0
	ands r0, r1	@ 000494a0 0840
.org 0x494a2
	lsls r0, r0, #5	@ 000494a2 4001
.org 0x494a4
	movs r1, #176	@ 000494a4 b021
.org 0x494a6
	lsls r1, r1, #2	@ 000494a6 8900
.org 0x494a8
	adds r0, r0, r1	@ 000494a8 4018
.org 0x494aa
	b.n 0x494d6	@ 000494aa 14e0
.org 0x494ac
	.byte 0x38,0xdc,0x02,0x02	@ 000494ac data
.org 0x494b0
	.byte 0xfd,0x43,0x03,0x00	@ 000494b0 data
.org 0x494b4
	.byte 0xc3,0x9e,0x26,0x00	@ 000494b4 data
.org 0x494b8
	ldr r2, [pc, #80]	@ 000494b8 144a
.org 0x494ba
	ldr r1, [r2, #0]	@ 000494ba 1168
.org 0x494bc
	ldr r0, [pc, #80]	@ 000494bc 1448
.org 0x494be
	muls r1, r0	@ 000494be 4143
.org 0x494c0
	ldr r0, [pc, #80]	@ 000494c0 1448
.org 0x494c2
	adds r1, r1, r0	@ 000494c2 0918
.org 0x494c4
	lsls r1, r1, #1	@ 000494c4 4900
.org 0x494c6
	lsrs r0, r1, #1	@ 000494c6 4808
.org 0x494c8
	str r0, [r2, #0]	@ 000494c8 1060
.org 0x494ca
	lsrs r1, r1, #17	@ 000494ca 490c
.org 0x494cc
	movs r0, #3	@ 000494cc 0320
.org 0x494ce
	ands r1, r0	@ 000494ce 0140
.org 0x494d0
	lsls r1, r1, #5	@ 000494d0 4901
.org 0x494d2
	ldr r0, [pc, #68]	@ 000494d2 1148
.org 0x494d4
	subs r0, r0, r1	@ 000494d4 401a
.org 0x494d6
	str r0, [r5, #92]	@ 000494d6 e865
.org 0x494d8
	ldr r1, [r2, #0]	@ 000494d8 1168
.org 0x494da
	ldr r0, [pc, #52]	@ 000494da 0d48

@ FUN_080fc390  entry 0x080fc390  size 484
.thumb
.org 0xfc390
FUN_080fc390:
	push {r4, r5, r6, r7, lr}	@ 000fc390 f0b5
.org 0xfc392
	adds r7, r0, #0	@ 000fc392 071c
.org 0xfc394
	ldr r1, [pc, #64]	@ 000fc394 1049
.org 0xfc396
	ldrb r0, [r7, #9]	@ 000fc396 787a
.org 0xfc398
	lsls r0, r0, #2	@ 000fc398 8000
.org 0xfc39a
	adds r0, r0, r1	@ 000fc39a 4018
.org 0xfc39c
	movs r1, #1	@ 000fc39c 0121
.org 0xfc39e
	str r1, [r7, #12]	@ 000fc39e f960
.org 0xfc3a0
	ldr r0, [r0, #0]	@ 000fc3a0 0068
.org 0xfc3a2
	ldr r0, [r0, #4]	@ 000fc3a2 4068
.org 0xfc3a4
	str r0, [r7, #20]	@ 000fc3a4 7861
.org 0xfc3a6
	adds r0, r7, #0	@ 000fc3a6 381c
.org 0xfc3a8
	bl 0x1cc9c	@ 000fc3a8 20f778fc
.org 0xfc3ac
	ldrb r1, [r7, #10]	@ 000fc3ac b97a
.org 0xfc3ae
	movs r0, #1	@ 000fc3ae 0120
.org 0xfc3b0
	movs r4, #0	@ 000fc3b0 0024
.org 0xfc3b2
	orrs r0, r1	@ 000fc3b2 0843
.org 0xfc3b4
	movs r1, #2	@ 000fc3b4 0221
.org 0xfc3b6
	orrs r0, r1	@ 000fc3b6 0843
.org 0xfc3b8
	strb r0, [r7, #10]	@ 000fc3b8 b872
.org 0xfc3ba
	movs r1, #152	@ 000fc3ba 9821
.org 0xfc3bc
	lsls r1, r1, #8	@ 000fc3bc 0902
.org 0xfc3be
	adds r0, r7, #0	@ 000fc3be 381c
.org 0xfc3c0
	bl 0x1cf00	@ 000fc3c0 20f79efd
.org 0xfc3c4
	adds r0, r7, #0	@ 000fc3c4 381c
.org 0xfc3c6
	bl 0x1cff0	@ 000fc3c6 20f713fe
.org 0xfc3ca
	ldrb r2, [r7, #16]	@ 000fc3ca 3a7c
.org 0xfc3cc
	cmp r2, #0	@ 000fc3cc 002a
.org 0xfc3ce
	beq.n 0xfc3dc	@ 000fc3ce 05d0
.org 0xfc3d0
	ldrb r0, [r7, #10]	@ 000fc3d0 b87a
.org 0xfc3d2
	movs r1, #16	@ 000fc3d2 1021
.org 0xfc3d4
	orrs r0, r1	@ 000fc3d4 0843
.org 0xfc3d6
	b.n 0xfc3e2	@ 000fc3d6 04e0
.org 0xfc3d8
	.byte 0xfc,0x92,0x86,0x08	@ 000fc3d8 data
.org 0xfc3dc
	ldrb r1, [r7, #10]	@ 000fc3dc b97a
.org 0xfc3de
	movs r0, #239	@ 000fc3de ef20
.org 0xfc3e0
	ands r0, r1	@ 000fc3e0 0840
.org 0xfc3e2
	strb r0, [r7, #10]	@ 000fc3e2 b872
.org 0xfc3e4
	movs r6, #1	@ 000fc3e4 0126
.org 0xfc3e6
	adds r1, r6, #0	@ 000fc3e6 311c
.org 0xfc3e8
	ands r1, r2	@ 000fc3e8 1140
.org 0xfc3ea
	adds r0, r7, #0	@ 000fc3ea 381c
.org 0xfc3ec
	adds r0, #76	@ 000fc3ec 4c30
.org 0xfc3ee
	strb r1, [r0, #0]	@ 000fc3ee 0170
.org 0xfc3f0
	adds r3, r7, #0	@ 000fc3f0 3b1c
.org 0xfc3f2
	adds r3, #74	@ 000fc3f2 4a33
.org 0xfc3f4
	lsls r1, r1, #4	@ 000fc3f4 0901
.org 0xfc3f6
	ldrb r2, [r3, #0]	@ 000fc3f6 1a78
.org 0xfc3f8
	movs r0, #17	@ 000fc3f8 1120
.org 0xfc3fa
	negs r0, r0	@ 000fc3fa 4042
.org 0xfc3fc
	ands r0, r2	@ 000fc3fc 1040
.org 0xfc3fe
	orrs r0, r1	@ 000fc3fe 0843
.org 0xfc400
	strb r0, [r3, #0]	@ 000fc400 1870
.org 0xfc402
	ldrb r0, [r7, #10]	@ 000fc402 b87a
.org 0xfc404
	movs r5, #4	@ 000fc404 0425
.org 0xfc406
	orrs r0, r5	@ 000fc406 2843
.org 0xfc408
	strb r0, [r7, #10]	@ 000fc408 b872
.org 0xfc40a
	adds r4, r7, #0	@ 000fc40a 3c1c
.org 0xfc40c
	adds r4, #116	@ 000fc40c 7434
.org 0xfc40e
	ldr r1, [pc, #76]	@ 000fc40e 1349
.org 0xfc410
	adds r2, r7, #0	@ 000fc410 3a1c
.org 0xfc412
	adds r2, #84	@ 000fc412 5432
.org 0xfc414
	adds r0, r4, #0	@ 000fc414 201c
.org 0xfc416
	movs r3, #8	@ 000fc416 0823
.org 0xfc418
	bl 0x5760	@ 000fc418 09f7a2f9
.org 0xfc41c
	str r7, [r4, #44]	@ 000fc41c e762
.org 0xfc41e
	ldr r0, [pc, #64]	@ 000fc41e 1048
.org 0xfc420
	str r0, [r4, #36]	@ 000fc420 6062
.org 0xfc422
	adds r2, r7, #0	@ 000fc422 3a1c
.org 0xfc424
	adds r2, #73	@ 000fc424 4932
.org 0xfc426
	ldrb r1, [r2, #0]	@ 000fc426 1178
.org 0xfc428
	movs r0, #13	@ 000fc428 0d20
.org 0xfc42a
	negs r0, r0	@ 000fc42a 4042
.org 0xfc42c
	ands r0, r1	@ 000fc42c 0840
.org 0xfc42e
	orrs r0, r5	@ 000fc42e 2843
.org 0xfc430
	strb r0, [r2, #0]	@ 000fc430 1070
.org 0xfc432
	ldrb r1, [r7, #11]	@ 000fc432 f97a
.org 0xfc434
	movs r0, #8	@ 000fc434 0820
.org 0xfc436
	orrs r0, r1	@ 000fc436 0843
.org 0xfc438
	strb r0, [r7, #11]	@ 000fc438 f872
.org 0xfc43a
	ldr r0, [pc, #40]	@ 000fc43a 0a48
.org 0xfc43c
	str r0, [r7, #48]	@ 000fc43c 3863
.org 0xfc43e
	strh r6, [r7, #38]	@ 000fc43e fe84
.org 0xfc440
	ldrb r0, [r7, #17]	@ 000fc440 787c
.org 0xfc442
	cmp r0, #1	@ 000fc442 0128
.org 0xfc444
	bne.n 0xfc478	@ 000fc444 18d1
.org 0xfc446
	ldrb r1, [r7, #10]	@ 000fc446 b97a
.org 0xfc448
	movs r0, #16	@ 000fc448 1020
.org 0xfc44a
	ands r0, r1	@ 000fc44a 0840
.org 0xfc44c
	cmp r0, #0	@ 000fc44c 0028
.org 0xfc44e
	beq.n 0xfc468	@ 000fc44e 0bd0
.org 0xfc450
	ldr r0, [r7, #84]	@ 000fc450 786d
.org 0xfc452
	movs r1, #128	@ 000fc452 8021
.org 0xfc454
	lsls r1, r1, #5	@ 000fc454 4901
.org 0xfc456
	adds r0, r0, r1	@ 000fc456 4018
.org 0xfc458
	str r0, [r7, #84]	@ 000fc458 7865
.org 0xfc45a
	b.n 0xfc482	@ 000fc45a 12e0
.org 0xfc45c
	.byte 0x3c,0xae,0x86,0x08	@ 000fc45c data
.org 0xfc460
	.byte 0xe5,0xc7,0x0f,0x08	@ 000fc460 data
.org 0xfc464
	.byte 0x54,0xae,0x86,0x08	@ 000fc464 data
.org 0xfc468
	ldr r0, [r7, #84]	@ 000fc468 786d
.org 0xfc46a
	ldr r2, [pc, #8]	@ 000fc46a 024a
.org 0xfc46c
	adds r0, r0, r2	@ 000fc46c 8018
.org 0xfc46e
	str r0, [r7, #84]	@ 000fc46e 7865
.org 0xfc470
	b.n 0xfc482	@ 000fc470 07e0
.org 0xfc472
	.byte 0x00	@ 000fc472 data
.org 0xfc473
	.byte 0x00	@ 000fc473 data
.org 0xfc474
	.byte 0x00,0xf0,0xff,0xff	@ 000fc474 data
.org 0xfc478
	ldr r0, [r7, #84]	@ 000fc478 786d
.org 0xfc47a
	ldr r1, [r7, #88]	@ 000fc47a b96d
.org 0xfc47c
	bl 0x8534	@ 000fc47c 0cf75af8
.org 0xfc480
	str r0, [r7, #88]	@ 000fc480 b865
.org 0xfc482
	ldr r0, [r7, #84]	@ 000fc482 786d
.org 0xfc484
	ldr r1, [r7, #88]	@ 000fc484 b96d
.org 0xfc486
	str r0, [r7, #100]	@ 000fc486 7866
.org 0xfc488
	str r1, [r7, #104]	@ 000fc488 b966
.org 0xfc48a
	adds r0, r7, #0	@ 000fc48a 381c
.org 0xfc48c
	adds r0, #100	@ 000fc48c 6430
.org 0xfc48e
	str r0, [r7, #64]	@ 000fc48e 3864
.org 0xfc490
	adds r2, r7, #0	@ 000fc490 3a1c
.org 0xfc492
	adds r2, #180	@ 000fc492 b432
.org 0xfc494
	ldr r0, [r7, #84]	@ 000fc494 786d
.org 0xfc496
	str r0, [r2, #0]	@ 000fc496 1060
.org 0xfc498
	adds r1, r7, #0	@ 000fc498 391c
.org 0xfc49a
	adds r1, #184	@ 000fc49a b831
.org 0xfc49c
	ldr r0, [r7, #88]	@ 000fc49c b86d
.org 0xfc49e
	str r0, [r1, #0]	@ 000fc49e 0860
.org 0xfc4a0
	adds r1, #8	@ 000fc4a0 0831
.org 0xfc4a2
	movs r0, #0	@ 000fc4a2 0020
.org 0xfc4a4
	str r0, [r1, #0]	@ 000fc4a4 0860
.org 0xfc4a6
	strb r0, [r7, #18]	@ 000fc4a6 b874
.org 0xfc4a8
	ldrb r0, [r7, #17]	@ 000fc4a8 787c
.org 0xfc4aa
	adds r4, r2, #0	@ 000fc4aa 141c
.org 0xfc4ac
	cmp r0, #0	@ 000fc4ac 0028
.org 0xfc4ae
	bne.n 0xfc4ba	@ 000fc4ae 04d1
.org 0xfc4b0
	ldrb r1, [r7, #16]	@ 000fc4b0 397c
.org 0xfc4b2
	adds r0, r7, #0	@ 000fc4b2 381c
.org 0xfc4b4
	movs r2, #1	@ 000fc4b4 0122
.org 0xfc4b6
	bl 0xfc328	@ 000fc4b6 fff737ff
.org 0xfc4ba
	ldrb r1, [r7, #10]	@ 000fc4ba b97a
.org 0xfc4bc
	movs r0, #16	@ 000fc4bc 1020
.org 0xfc4be
	ands r0, r1	@ 000fc4be 0840
.org 0xfc4c0
	cmp r0, #0	@ 000fc4c0 0028
.org 0xfc4c2
	beq.n 0xfc50c	@ 000fc4c2 23d0
.org 0xfc4c4
	ldrb r0, [r7, #17]	@ 000fc4c4 787c
.org 0xfc4c6
	cmp r0, #0	@ 000fc4c6 0028
.org 0xfc4c8
	bne.n 0xfc4e0	@ 000fc4c8 0ad1
.org 0xfc4ca
	ldr r0, [pc, #12]	@ 000fc4ca 0348
.org 0xfc4cc
	ldr r3, [pc, #12]	@ 000fc4cc 034b
.org 0xfc4ce
	adds r0, r0, r3	@ 000fc4ce c018
.org 0xfc4d0
	ldrh r1, [r0, #0]	@ 000fc4d0 0188
.org 0xfc4d2
	ldr r0, [r7, #84]	@ 000fc4d2 786d
.org 0xfc4d4
	adds r0, r0, r1	@ 000fc4d4 4018
.org 0xfc4d6
	b.n 0xfc546	@ 000fc4d6 36e0
.org 0xfc4d8
	.byte 0xb0,0x0a,0x00,0x02	@ 000fc4d8 data
.org 0xfc4dc
	.byte 0x36,0xd0,0x02,0x00	@ 000fc4dc data
.org 0xfc4e0
	ldr r0, [pc, #24]	@ 000fc4e0 0648
.org 0xfc4e2
	ldr r1, [pc, #28]	@ 000fc4e2 0749
.org 0xfc4e4
	adds r2, r0, r1	@ 000fc4e4 4218
.org 0xfc4e6
	ldrh r1, [r2, #0]	@ 000fc4e6 1188
.org 0xfc4e8
	ldr r0, [pc, #24]	@ 000fc4e8 0648
.org 0xfc4ea
	cmp r1, r0	@ 000fc4ea 8142
.org 0xfc4ec
	bls.n 0xfc548	@ 000fc4ec 2cd9
.org 0xfc4ee
	ldr r0, [r7, #84]	@ 000fc4ee 786d
.org 0xfc4f0
	ldr r3, [pc, #20]	@ 000fc4f0 054b
.org 0xfc4f2
	adds r0, r0, r3	@ 000fc4f2 c018
.org 0xfc4f4
	ldrh r2, [r2, #0]	@ 000fc4f4 1288
.org 0xfc4f6
	adds r0, r0, r2	@ 000fc4f6 8018
.org 0xfc4f8
	b.n 0xfc546	@ 000fc4f8 25e0
.org 0xfc4fa
	.byte 0x00	@ 000fc4fa data
.org 0xfc4fb
	.byte 0x00	@ 000fc4fb data
.org 0xfc4fc
	.byte 0xb0,0x0a,0x00,0x02	@ 000fc4fc data
.org 0xfc500
	.byte 0x36,0xd0,0x02,0x00	@ 000fc500 data
.org 0xfc504
	.byte 0xff,0x0f,0x00,0x00	@ 000fc504 data
.org 0xfc508
	.byte 0x00,0xf0,0xff,0xff	@ 000fc508 data
.org 0xfc50c
	ldrb r0, [r7, #17]	@ 000fc50c 787c
.org 0xfc50e
	cmp r0, #0	@ 000fc50e 0028
.org 0xfc510
	bne.n 0xfc528	@ 000fc510 0ad1
.org 0xfc512
	ldr r0, [pc, #12]	@ 000fc512 0348
.org 0xfc514
	ldr r1, [pc, #12]	@ 000fc514 0349
.org 0xfc516
	adds r0, r0, r1	@ 000fc516 4018
.org 0xfc518
	ldrh r1, [r0, #0]	@ 000fc518 0188
.org 0xfc51a
	ldr r0, [r7, #84]	@ 000fc51a 786d
.org 0xfc51c
	b.n 0xfc544	@ 000fc51c 12e0
.org 0xfc51e
	.byte 0x00	@ 000fc51e data
.org 0xfc51f
	.byte 0x00	@ 000fc51f data
.org 0xfc520
	.byte 0xb0,0x0a,0x00,0x02	@ 000fc520 data
.org 0xfc524
	.byte 0x34,0xd0,0x02,0x00	@ 000fc524 data
.org 0xfc528
	ldr r2, [pc, #44]	@ 000fc528 0b4a
.org 0xfc52a
	ldr r3, [pc, #48]	@ 000fc52a 0c4b
.org 0xfc52c
	adds r0, r2, r3	@ 000fc52c d018
.org 0xfc52e
	ldrh r1, [r0, #0]	@ 000fc52e 0188
.org 0xfc530
	ldr r0, [pc, #44]	@ 000fc530 0b48
.org 0xfc532
	cmp r1, r0	@ 000fc532 8142
.org 0xfc534
	bls.n 0xfc548	@ 000fc534 08d9
.org 0xfc536
	ldr r0, [r7, #84]	@ 000fc536 786d
.org 0xfc538
	movs r1, #128	@ 000fc538 8021
.org 0xfc53a
	lsls r1, r1, #5	@ 000fc53a 4901
.org 0xfc53c
	adds r0, r0, r1	@ 000fc53c 4018
.org 0xfc53e
	subs r3, #2	@ 000fc53e 023b
.org 0xfc540
	adds r1, r2, r3	@ 000fc540 d118
.org 0xfc542
	ldrh r1, [r1, #0]	@ 000fc542 0988
.org 0xfc544
	subs r0, r0, r1	@ 000fc544 401a
.org 0xfc546
	str r0, [r7, #84]	@ 000fc546 7865
.org 0xfc548
	ldr r2, [r4, #0]	@ 000fc548 2268
.org 0xfc54a
	ldr r0, [r7, #84]	@ 000fc54a 786d
.org 0xfc54c
	subs r3, r2, r0	@ 000fc54c 131a
.org 0xfc54e
	cmp r3, #0	@ 000fc54e 002b
.org 0xfc550
	blt.n 0xfc568	@ 000fc550 0adb
.org 0xfc552
	ldr r1, [pc, #16]	@ 000fc552 0449
.org 0xfc554
	adds r0, r3, #0	@ 000fc554 181c
.org 0xfc556
	b.n 0xfc56c	@ 000fc556 09e0
.org 0xfc558
	.byte 0xb0,0x0a,0x00,0x02	@ 000fc558 data
.org 0xfc55c
	.byte 0x36,0xd0,0x02,0x00	@ 000fc55c data
.org 0xfc560
	.byte 0xff,0x0f,0x00,0x00	@ 000fc560 data
.org 0xfc564
	.byte 0x55,0x05,0x00,0x00	@ 000fc564 data
.org 0xfc568
	subs r0, r0, r2	@ 000fc568 801a
.org 0xfc56a
	ldr r1, [pc, #56]	@ 000fc56a 0e49
.org 0xfc56c
	bl 0x128fb8	@ 000fc56c 2cf024fd
.org 0xfc570
	cmp r0, #2	@ 000fc570 0228
.org 0xfc572
	ble.n 0xfc5ac	@ 000fc572 1bdd

@ FUN_0811f394  entry 0x0811f394  size 512
.thumb
.org 0x11f394
FUN_0811f394:
	push {r4, r5, r6, r7, lr}	@ 0011f394 f0b5
.org 0x11f396
	mov r7, sl	@ 0011f396 5746
.org 0x11f398
	mov r6, r9	@ 0011f398 4e46
.org 0x11f39a
	mov r5, r8	@ 0011f39a 4546
.org 0x11f39c
	push {r5, r6, r7}	@ 0011f39c e0b4
.org 0x11f39e
	sub sp, #4	@ 0011f39e 81b0
.org 0x11f3a0
	adds r5, r0, #0	@ 0011f3a0 051c
.org 0x11f3a2
	ldr r1, [pc, #64]	@ 0011f3a2 1049
.org 0x11f3a4
	adds r0, r5, r1	@ 0011f3a4 6818
.org 0x11f3a6
	ldr r0, [r0, #0]	@ 0011f3a6 0068
.org 0x11f3a8
	mov sl, r0	@ 0011f3a8 8246
.org 0x11f3aa
	adds r0, #180	@ 0011f3aa b430
.org 0x11f3ac
	ldrb r0, [r0, #19]	@ 0011f3ac c07c
.org 0x11f3ae
	movs r2, #5	@ 0011f3ae 0522
.org 0x11f3b0
	mov r9, r2	@ 0011f3b0 9146
.org 0x11f3b2
	cmp r0, #3	@ 0011f3b2 0328
.org 0x11f3b4
	beq.n 0x11f3c2	@ 0011f3b4 05d0
.org 0x11f3b6
	movs r1, #7	@ 0011f3b6 0721
.org 0x11f3b8
	mov r9, r1	@ 0011f3b8 8946
.org 0x11f3ba
	cmp r0, #1	@ 0011f3ba 0128
.org 0x11f3bc
	bne.n 0x11f3c2	@ 0011f3bc 01d1
.org 0x11f3be
	movs r2, #0	@ 0011f3be 0022
.org 0x11f3c0
	mov r9, r2	@ 0011f3c0 9146
.org 0x11f3c2
	ldrb r0, [r5, #3]	@ 0011f3c2 e878
.org 0x11f3c4
	movs r1, #180	@ 0011f3c4 b421
.org 0x11f3c6
	add r1, sl	@ 0011f3c6 5144
.org 0x11f3c8
	mov r8, r1	@ 0011f3c8 8846
.org 0x11f3ca
	mov r6, sl	@ 0011f3ca 5646
.org 0x11f3cc
	adds r6, #240	@ 0011f3cc f036
.org 0x11f3ce
	cmp r0, #0	@ 0011f3ce 0028
.org 0x11f3d0
	bne.n 0x11f40c	@ 0011f3d0 1cd1
.org 0x11f3d2
	ldrb r0, [r6, #0]	@ 0011f3d2 3078
.org 0x11f3d4
	cmp r0, r9	@ 0011f3d4 4845
.org 0x11f3d6
	bcc.n 0x11f3e8	@ 0011f3d6 07d3
.org 0x11f3d8
	movs r0, #4	@ 0011f3d8 0420
.org 0x11f3da
	bl 0x2b10	@ 0011f3da e3f699fb
.org 0x11f3de
	movs r0, #1	@ 0011f3de 0120
.org 0x11f3e0
	b.n 0x11f40a	@ 0011f3e0 13e0
.org 0x11f3e2
	.byte 0x00	@ 0011f3e2 data
.org 0x11f3e3
	.byte 0x00	@ 0011f3e3 data
.org 0x11f3e4
	.byte 0xa8,0x63,0x00,0x00	@ 0011f3e4 data
.org 0x11f3e8
	ldr r0, [pc, #24]	@ 0011f3e8 0648
.org 0x11f3ea
	ldrb r1, [r6, #0]	@ 0011f3ea 3178
.org 0x11f3ec
	lsls r1, r1, #1	@ 0011f3ec 4900
.org 0x11f3ee
	adds r1, r1, r0	@ 0011f3ee 0918
.org 0x11f3f0
	mov r2, r8	@ 0011f3f0 4246
.org 0x11f3f2
	ldrh r0, [r2, #6]	@ 0011f3f2 d088
.org 0x11f3f4
	ldrh r1, [r1, #0]	@ 0011f3f4 0988
.org 0x11f3f6
	cmp r0, r1	@ 0011f3f6 8842
.org 0x11f3f8
	bcs.n 0x11f408	@ 0011f3f8 06d2
.org 0x11f3fa
	movs r0, #4	@ 0011f3fa 0420
.org 0x11f3fc
	bl 0x2b10	@ 0011f3fc e3f688fb
.org 0x11f400
	movs r0, #1	@ 0011f400 0120
.org 0x11f402
	b.n 0x11f40a	@ 0011f402 02e0
.org 0x11f404
	.byte 0xc8,0x1f,0x88,0x08	@ 0011f404 data
.org 0x11f408
	movs r0, #2	@ 0011f408 0220
.org 0x11f40a
	strb r0, [r5, #3]	@ 0011f40a e870
.org 0x11f40c
	mov r7, r8	@ 0011f40c 4746
.org 0x11f40e
	adds r4, r6, #0	@ 0011f40e 341c
.org 0x11f410
	ldrb r0, [r4, #0]	@ 0011f410 2078
.org 0x11f412
	cmp r0, r9	@ 0011f412 4845
.org 0x11f414
	bcs.n 0x11f430	@ 0011f414 0cd2
.org 0x11f416
	ldr r1, [pc, #60]	@ 0011f416 0f49
.org 0x11f418
	lsls r0, r0, #1	@ 0011f418 4000
.org 0x11f41a
	adds r0, r0, r1	@ 0011f41a 4018
.org 0x11f41c
	ldrh r0, [r0, #0]	@ 0011f41c 0088
.org 0x11f41e
	movs r1, #28	@ 0011f41e 1c21
.org 0x11f420
	movs r2, #13	@ 0011f420 0d22
.org 0x11f422
	bl 0x118348	@ 0011f422 f8f791ff
.org 0x11f426
	ldrh r0, [r7, #6]	@ 0011f426 f888
.org 0x11f428
	movs r1, #28	@ 0011f428 1c21
.org 0x11f42a
	movs r2, #15	@ 0011f42a 0f22
.org 0x11f42c
	bl 0x118348	@ 0011f42c f8f78cff
.org 0x11f430
	ldrb r2, [r5, #3]	@ 0011f430 ea78
.org 0x11f432
	cmp r2, #1	@ 0011f432 012a
.org 0x11f434
	bne.n 0x11f494	@ 0011f434 2ed1
.org 0x11f436
	ldrb r0, [r4, #0]	@ 0011f436 2078
.org 0x11f438
	cmp r0, r9	@ 0011f438 4845
.org 0x11f43a
	bcc.n 0x11f460	@ 0011f43a 11d3
.org 0x11f43c
	ldr r0, [pc, #24]	@ 0011f43c 0648
.org 0x11f43e
	movs r1, #173	@ 0011f43e ad21
.org 0x11f440
	lsls r1, r1, #1	@ 0011f440 4900
.org 0x11f442
	adds r0, r0, r1	@ 0011f442 4018
.org 0x11f444
	ldrh r0, [r0, #0]	@ 0011f444 0088
.org 0x11f446
	ldr r1, [pc, #20]	@ 0011f446 0549
.org 0x11f448
	adds r0, r0, r1	@ 0011f448 4018
.org 0x11f44a
	movs r1, #17	@ 0011f44a 1121
.org 0x11f44c
	movs r2, #7	@ 0011f44c 0722
.org 0x11f44e
	bl 0x10d85c	@ 0011f44e eef705fa
.org 0x11f452
	b.n 0x11f476	@ 0011f452 10e0
.org 0x11f454
	.byte 0xc8,0x1f,0x88,0x08	@ 0011f454 data
.org 0x11f458
	.byte 0xf8,0xcf,0x86,0x08	@ 0011f458 data
.org 0x11f45c
	.byte 0x5f,0x0e,0x01,0x09	@ 0011f45c data
.org 0x11f460
	ldr r0, [pc, #36]	@ 0011f460 0948
.org 0x11f462
	movs r2, #172	@ 0011f462 ac22
.org 0x11f464
	lsls r2, r2, #1	@ 0011f464 5200
.org 0x11f466
	adds r0, r0, r2	@ 0011f466 8018
.org 0x11f468
	ldrh r0, [r0, #0]	@ 0011f468 0088
.org 0x11f46a
	ldr r1, [pc, #32]	@ 0011f46a 0849
.org 0x11f46c
	adds r0, r0, r1	@ 0011f46c 4018
.org 0x11f46e
	movs r1, #17	@ 0011f46e 1121
.org 0x11f470
	movs r2, #7	@ 0011f470 0722
.org 0x11f472
	bl 0x10d85c	@ 0011f472 eef7f3f9
.org 0x11f476
	ldr r0, [pc, #24]	@ 0011f476 0648
.org 0x11f478
	ldrh r1, [r0, #4]	@ 0011f478 8188
.org 0x11f47a
	movs r0, #3	@ 0011f47a 0320
.org 0x11f47c
	ands r0, r1	@ 0011f47c 0840
.org 0x11f47e
	cmp r0, #0	@ 0011f47e 0028
.org 0x11f480
	bne.n 0x11f484	@ 0011f480 00d1
.org 0x11f482
	b.n 0x11f5ac	@ 0011f482 93e0
.org 0x11f484
	b.n 0x11f536	@ 0011f484 57e0
.org 0x11f486
	.byte 0x00	@ 0011f486 data
.org 0x11f487
	.byte 0x00	@ 0011f487 data
.org 0x11f488
	.byte 0xf8,0xcf,0x86,0x08	@ 0011f488 data
.org 0x11f48c
	.byte 0x5f,0x0e,0x01,0x09	@ 0011f48c data
.org 0x11f490
	.byte 0x60,0x07,0x00,0x02	@ 0011f490 data
.org 0x11f494
	ldr r3, [pc, #20]	@ 0011f494 054b
.org 0x11f496
	ldrh r1, [r3, #4]	@ 0011f496 9988
.org 0x11f498
	movs r4, #1	@ 0011f498 0124
.org 0x11f49a
	ands r4, r1	@ 0011f49a 0c40
.org 0x11f49c
	cmp r4, #0	@ 0011f49c 002c
.org 0x11f49e
	beq.n 0x11f554	@ 0011f49e 59d0
.org 0x11f4a0
	cmp r2, #3	@ 0011f4a0 032a
.org 0x11f4a2
	bne.n 0x11f4b0	@ 0011f4a2 05d1
.org 0x11f4a4
	movs r0, #3	@ 0011f4a4 0320
.org 0x11f4a6
	bl 0x2b10	@ 0011f4a6 e3f633fb
.org 0x11f4aa
	b.n 0x11f536	@ 0011f4aa 44e0
.org 0x11f4ac
	.byte 0x60,0x07,0x00,0x02	@ 0011f4ac data
.org 0x11f4b0
	movs r0, #221	@ 0011f4b0 dd20
.org 0x11f4b2
	lsls r0, r0, #4	@ 0011f4b2 0001
.org 0x11f4b4
	adds r4, r5, r0	@ 0011f4b4 2c18
.org 0x11f4b6
	ldrb r3, [r6, #0]	@ 0011f4b6 3378
.org 0x11f4b8
	adds r0, r5, #0	@ 0011f4b8 281c
.org 0x11f4ba
	adds r1, r4, #0	@ 0011f4ba 211c
.org 0x11f4bc
	movs r2, #1	@ 0011f4bc 0122
.org 0x11f4be
	bl 0x10b708	@ 0011f4be ecf723f9
.org 0x11f4c2
	ldrb r0, [r6, #0]	@ 0011f4c2 3078
.org 0x11f4c4
	movs r3, #16	@ 0011f4c4 1023
.org 0x11f4c6
	orrs r3, r0	@ 0011f4c6 0343
.org 0x11f4c8
	adds r0, r5, #0	@ 0011f4c8 281c
.org 0x11f4ca
	adds r1, r4, #0	@ 0011f4ca 211c
.org 0x11f4cc
	movs r2, #1	@ 0011f4cc 0122
.org 0x11f4ce
	bl 0x10b708	@ 0011f4ce ecf71bf9
.org 0x11f4d2
	ldrb r0, [r6, #0]	@ 0011f4d2 3078
.org 0x11f4d4
	movs r3, #32	@ 0011f4d4 2023
.org 0x11f4d6
	orrs r3, r0	@ 0011f4d6 0343
.org 0x11f4d8
	adds r0, r5, #0	@ 0011f4d8 281c
.org 0x11f4da
	adds r1, r4, #0	@ 0011f4da 211c
.org 0x11f4dc
	movs r2, #1	@ 0011f4dc 0122
.org 0x11f4de
	bl 0x10b708	@ 0011f4de ecf713f9
.org 0x11f4e2
	ldr r1, [pc, #92]	@ 0011f4e2 1749
.org 0x11f4e4
	ldrb r0, [r6, #0]	@ 0011f4e4 3078
.org 0x11f4e6
	lsls r0, r0, #1	@ 0011f4e6 4000
.org 0x11f4e8
	adds r0, r0, r1	@ 0011f4e8 4018
.org 0x11f4ea
	mov r2, r8	@ 0011f4ea 4246
.org 0x11f4ec
	ldrh r1, [r2, #6]	@ 0011f4ec d188
.org 0x11f4ee
	ldrh r0, [r0, #0]	@ 0011f4ee 0088
.org 0x11f4f0
	subs r1, r1, r0	@ 0011f4f0 091a
.org 0x11f4f2
	movs r3, #0	@ 0011f4f2 0023
.org 0x11f4f4
	strh r1, [r2, #6]	@ 0011f4f4 d180
.org 0x11f4f6
	ldrb r0, [r6, #0]	@ 0011f4f6 3078
.org 0x11f4f8
	adds r0, #1	@ 0011f4f8 0130
.org 0x11f4fa
	strb r0, [r6, #0]	@ 0011f4fa 3070
.org 0x11f4fc
	mov r1, sl	@ 0011f4fc 5146
.org 0x11f4fe
	adds r1, #246	@ 0011f4fe f631
.org 0x11f500
	movs r0, #2	@ 0011f500 0220
.org 0x11f502
	strb r0, [r1, #0]	@ 0011f502 0870
.org 0x11f504
	ldr r1, [pc, #60]	@ 0011f504 0f49
.org 0x11f506
	adds r0, r5, r1	@ 0011f506 6818
.org 0x11f508
	ldr r1, [pc, #60]	@ 0011f508 0f49
.org 0x11f50a
	ldrb r2, [r6, #0]	@ 0011f50a 3278
.org 0x11f50c
	adds r2, #104	@ 0011f50c 6832
.org 0x11f50e
	lsls r2, r2, #24	@ 0011f50e 1206
.org 0x11f510
	lsrs r2, r2, #24	@ 0011f510 120e
.org 0x11f512
	str r3, [sp, #0]	@ 0011f512 0093
.org 0x11f514
	bl 0x27b8	@ 0011f514 e3f650f9
.org 0x11f518
	ldr r2, [pc, #48]	@ 0011f518 0c4a
.org 0x11f51a
	adds r0, r5, r2	@ 0011f51a a818
.org 0x11f51c
	ldr r1, [pc, #48]	@ 0011f51c 0c49
.org 0x11f51e
	ldrh r2, [r1, #0]	@ 0011f51e 0a88
.org 0x11f520
	movs r1, #248	@ 0011f520 f821
.org 0x11f522
	lsls r1, r1, #5	@ 0011f522 4901
.org 0x11f524
	ands r1, r2	@ 0011f524 1140
.org 0x11f526
	lsls r1, r1, #3	@ 0011f526 c900
.org 0x11f528
	movs r2, #128	@ 0011f528 8022
.org 0x11f52a
	lsls r2, r2, #5	@ 0011f52a 5201
.org 0x11f52c
	bl 0x1f1c	@ 0011f52c e2f6f6fc
.org 0x11f530
	movs r0, #40	@ 0011f530 2820
.org 0x11f532
	bl 0x2b10	@ 0011f532 e3f6edfa
.org 0x11f536
	movs r0, #0	@ 0011f536 0020
.org 0x11f538
	strb r0, [r5, #2]	@ 0011f538 a870
.org 0x11f53a
	strb r0, [r5, #3]	@ 0011f53a e870
.org 0x11f53c
	b.n 0x11f5c2	@ 0011f53c 41e0
.org 0x11f53e
	.byte 0x00	@ 0011f53e data
.org 0x11f53f
	.byte 0x00	@ 0011f53f data
.org 0x11f540
	.byte 0xc8,0x1f,0x88,0x08	@ 0011f540 data
.org 0x11f544
	.byte 0xd8,0x16,0x00,0x00	@ 0011f544 data
.org 0x11f548
	.byte 0x00,0xc0,0xb2,0x08	@ 0011f548 data
.org 0x11f54c
	.byte 0xd8,0x0e,0x00,0x00	@ 0011f54c data
.org 0x11f550
	.byte 0x06,0x0a,0x00,0x02	@ 0011f550 data
.org 0x11f554
	movs r0, #2	@ 0011f554 0220
.org 0x11f556
	ands r0, r1	@ 0011f556 0840
.org 0x11f558
	cmp r0, #0	@ 0011f558 0028
.org 0x11f55a
	beq.n 0x11f568	@ 0011f55a 05d0
.org 0x11f55c
	movs r0, #3	@ 0011f55c 0320
.org 0x11f55e
	bl 0x2b10	@ 0011f55e e3f6d7fa
.org 0x11f562
	strb r4, [r5, #2]	@ 0011f562 ac70
.org 0x11f564
	strb r4, [r5, #3]	@ 0011f564 ec70
.org 0x11f566
	b.n 0x11f5c2	@ 0011f566 2ce0
.org 0x11f568
	ldrh r1, [r3, #6]	@ 0011f568 d988
.org 0x11f56a
	movs r0, #128	@ 0011f56a 8020
.org 0x11f56c
	ands r0, r1	@ 0011f56c 0840
.org 0x11f56e
	cmp r0, #0	@ 0011f56e 0028
.org 0x11f570
	beq.n 0x11f580	@ 0011f570 06d0
.org 0x11f572
	cmp r2, #2	@ 0011f572 022a
.org 0x11f574
	bne.n 0x11f596	@ 0011f574 0fd1
.org 0x11f576
	movs r0, #1	@ 0011f576 0120
.org 0x11f578
	bl 0x2b10	@ 0011f578 e3f6cafa
.org 0x11f57c
	movs r0, #3	@ 0011f57c 0320
.org 0x11f57e
	b.n 0x11f594	@ 0011f57e 09e0
.org 0x11f580
	movs r0, #64	@ 0011f580 4020
.org 0x11f582
	ands r0, r1	@ 0011f582 0840
.org 0x11f584
	cmp r0, #0	@ 0011f584 0028
.org 0x11f586
	beq.n 0x11f596	@ 0011f586 06d0
.org 0x11f588
	cmp r2, #3	@ 0011f588 032a
.org 0x11f58a
	bne.n 0x11f596	@ 0011f58a 04d1
.org 0x11f58c
	movs r0, #1	@ 0011f58c 0120
.org 0x11f58e
	bl 0x2b10	@ 0011f58e e3f6bffa
.org 0x11f592
	movs r0, #2	@ 0011f592 0220

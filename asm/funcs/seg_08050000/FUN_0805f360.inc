@ FUN_0805f360  entry 0x0805f360  size 692
.thumb
.org 0x5f360
FUN_0805f360:
	push {r4, r5, lr}	@ 0005f360 30b5
.org 0x5f362
	sub sp, #8	@ 0005f362 82b0
.org 0x5f364
	adds r4, r0, #0	@ 0005f364 041c
.org 0x5f366
	ldr r0, [pc, #104]	@ 0005f366 1a48
.org 0x5f368
	ldrh r0, [r0, #0]	@ 0005f368 0088
.org 0x5f36a
	cmp r0, #11	@ 0005f36a 0b28
.org 0x5f36c
	beq.n 0x5f370	@ 0005f36c 00d0
.org 0x5f36e
	b.n 0x5f4ec	@ 0005f36e bde0
.org 0x5f370
	ldrb r2, [r4, #14]	@ 0005f370 a27b
.org 0x5f372
	cmp r2, #0	@ 0005f372 002a
.org 0x5f374
	bne.n 0x5f466	@ 0005f374 77d1
.org 0x5f376
	adds r0, r4, #0	@ 0005f376 201c
.org 0x5f378
	adds r0, #180	@ 0005f378 b430
.org 0x5f37a
	ldr r1, [r0, #12]	@ 0005f37a c168
.org 0x5f37c
	adds r5, r0, #0	@ 0005f37c 051c
.org 0x5f37e
	cmp r1, #0	@ 0005f37e 0029
.org 0x5f380
	beq.n 0x5f38a	@ 0005f380 03d0
.org 0x5f382
	adds r1, #119	@ 0005f382 7731
.org 0x5f384
	movs r0, #1	@ 0005f384 0120
.org 0x5f386
	strb r0, [r1, #0]	@ 0005f386 0870
.org 0x5f388
	str r2, [r5, #12]	@ 0005f388 ea60
.org 0x5f38a
	movs r3, #0	@ 0005f38a 0023
.org 0x5f38c
	ldr r0, [pc, #68]	@ 0005f38c 1148
.org 0x5f38e
	ldr r2, [r0, #0]	@ 0005f38e 0268
.org 0x5f390
	ldr r1, [r4, #84]	@ 0005f390 616d
.org 0x5f392
	ldr r0, [r2, #84]	@ 0005f392 506d
.org 0x5f394
	cmp r1, r0	@ 0005f394 8142
.org 0x5f396
	bge.n 0x5f39a	@ 0005f396 00da
.org 0x5f398
	movs r3, #1	@ 0005f398 0123
.org 0x5f39a
	adds r0, r4, #0	@ 0005f39a 201c
.org 0x5f39c
	adds r0, #76	@ 0005f39c 4c30
.org 0x5f39e
	strb r3, [r0, #0]	@ 0005f39e 0370
.org 0x5f3a0
	movs r3, #0	@ 0005f3a0 0023
.org 0x5f3a2
	ldr r1, [r4, #84]	@ 0005f3a2 616d
.org 0x5f3a4
	ldr r0, [r2, #84]	@ 0005f3a4 506d
.org 0x5f3a6
	cmp r1, r0	@ 0005f3a6 8142
.org 0x5f3a8
	bge.n 0x5f3ac	@ 0005f3a8 00da
.org 0x5f3aa
	movs r3, #1	@ 0005f3aa 0123
.org 0x5f3ac
	movs r0, #74	@ 0005f3ac 4a20
.org 0x5f3ae
	adds r0, r0, r4	@ 0005f3ae 0019
.org 0x5f3b0
	mov ip, r0	@ 0005f3b0 8446
.org 0x5f3b2
	lsls r2, r3, #4	@ 0005f3b2 1a01
.org 0x5f3b4
	ldrb r1, [r0, #0]	@ 0005f3b4 0178
.org 0x5f3b6
	movs r0, #17	@ 0005f3b6 1120
.org 0x5f3b8
	negs r0, r0	@ 0005f3b8 4042
.org 0x5f3ba
	ands r0, r1	@ 0005f3ba 0840
.org 0x5f3bc
	orrs r0, r2	@ 0005f3bc 1043
.org 0x5f3be
	mov r1, ip	@ 0005f3be 6146
.org 0x5f3c0
	strb r0, [r1, #0]	@ 0005f3c0 0870
.org 0x5f3c2
	cmp r3, #0	@ 0005f3c2 002b
.org 0x5f3c4
	beq.n 0x5f3d8	@ 0005f3c4 08d0
.org 0x5f3c6
	ldrb r0, [r4, #10]	@ 0005f3c6 a07a
.org 0x5f3c8
	movs r1, #16	@ 0005f3c8 1021
.org 0x5f3ca
	orrs r0, r1	@ 0005f3ca 0843
.org 0x5f3cc
	b.n 0x5f3de	@ 0005f3cc 07e0
.org 0x5f3ce
	.byte 0x00	@ 0005f3ce data
.org 0x5f3cf
	.byte 0x00	@ 0005f3cf data
.org 0x5f3d0
	.byte 0x10,0xe9,0x02,0x02	@ 0005f3d0 data
.org 0x5f3d4
	.byte 0xf0,0xdb,0x02,0x02	@ 0005f3d4 data
.org 0x5f3d8
	ldrb r1, [r4, #10]	@ 0005f3d8 a17a
.org 0x5f3da
	movs r0, #239	@ 0005f3da ef20
.org 0x5f3dc
	ands r0, r1	@ 0005f3dc 0840
.org 0x5f3de
	strb r0, [r4, #10]	@ 0005f3de a072
.org 0x5f3e0
	ldrb r1, [r4, #10]	@ 0005f3e0 a17a
.org 0x5f3e2
	movs r0, #16	@ 0005f3e2 1020
.org 0x5f3e4
	ands r0, r1	@ 0005f3e4 0840
.org 0x5f3e6
	cmp r0, #0	@ 0005f3e6 0028
.org 0x5f3e8
	beq.n 0x5f3f4	@ 0005f3e8 04d0
.org 0x5f3ea
	ldr r0, [pc, #4]	@ 0005f3ea 0148
.org 0x5f3ec
	b.n 0x5f3f8	@ 0005f3ec 04e0
.org 0x5f3ee
	.byte 0x00	@ 0005f3ee data
.org 0x5f3ef
	.byte 0x00	@ 0005f3ef data
.org 0x5f3f0
	.byte 0x40,0xfe,0xff,0xff	@ 0005f3f0 data
.org 0x5f3f4
	movs r0, #224	@ 0005f3f4 e020
.org 0x5f3f6
	lsls r0, r0, #1	@ 0005f3f6 4000
.org 0x5f3f8
	str r0, [r4, #92]	@ 0005f3f8 e065
.org 0x5f3fa
	ldr r0, [pc, #176]	@ 0005f3fa 2c48
.org 0x5f3fc
	str r0, [r4, #96]	@ 0005f3fc 2066
.org 0x5f3fe
	ldr r1, [pc, #176]	@ 0005f3fe 2c49
.org 0x5f400
	adds r0, r4, #0	@ 0005f400 201c
.org 0x5f402
	bl 0x1cf00	@ 0005f402 bdf77dfd
.org 0x5f406
	movs r0, #145	@ 0005f406 9120
.org 0x5f408
	lsls r0, r0, #1	@ 0005f408 4000
.org 0x5f40a
	bl 0x2b10	@ 0005f40a a3f781fb
.org 0x5f40e
	ldrh r0, [r5, #22]	@ 0005f40e e88a
.org 0x5f410
	cmp r0, #0	@ 0005f410 0028
.org 0x5f412
	beq.n 0x5f41e	@ 0005f412 04d0
.org 0x5f414
	movs r0, #93	@ 0005f414 5d20
.org 0x5f416
	bl 0x2b5c	@ 0005f416 a3f7a1fb
.org 0x5f41a
	movs r0, #0	@ 0005f41a 0020
.org 0x5f41c
	strh r0, [r5, #22]	@ 0005f41c e882
.org 0x5f41e
	ldrb r2, [r4, #10]	@ 0005f41e a27a
.org 0x5f420
	movs r0, #1	@ 0005f420 0120
.org 0x5f422
	movs r1, #0	@ 0005f422 0021
.org 0x5f424
	orrs r0, r2	@ 0005f424 1043
.org 0x5f426
	strb r0, [r4, #10]	@ 0005f426 a072
.org 0x5f428
	adds r0, r4, #0	@ 0005f428 201c
.org 0x5f42a
	adds r0, #140	@ 0005f42a 8c30
.org 0x5f42c
	str r1, [r0, #0]	@ 0005f42c 0160
.org 0x5f42e
	adds r0, #4	@ 0005f42e 0430
.org 0x5f430
	str r1, [r0, #0]	@ 0005f430 0160
.org 0x5f432
	adds r0, #4	@ 0005f432 0430
.org 0x5f434
	strb r1, [r0, #0]	@ 0005f434 0170
.org 0x5f436
	ldrb r1, [r4, #10]	@ 0005f436 a17a
.org 0x5f438
	movs r0, #251	@ 0005f438 fb20
.org 0x5f43a
	ands r0, r1	@ 0005f43a 0840
.org 0x5f43c
	strb r0, [r4, #10]	@ 0005f43c a072
.org 0x5f43e
	ldr r3, [pc, #116]	@ 0005f43e 1d4b
.org 0x5f440
	ldrh r2, [r3, #8]	@ 0005f440 1a89
.org 0x5f442
	movs r5, #1	@ 0005f442 0125
.org 0x5f444
	adds r0, r5, #0	@ 0005f444 281c
.org 0x5f446
	ands r0, r2	@ 0005f446 1040
.org 0x5f448
	cmp r0, #0	@ 0005f448 0028
.org 0x5f44a
	beq.n 0x5f460	@ 0005f44a 09d0
.org 0x5f44c
	ldrb r1, [r3, #18]	@ 0005f44c 997c
.org 0x5f44e
	adds r0, r5, #0	@ 0005f44e 281c
.org 0x5f450
	ands r0, r1	@ 0005f450 0840
.org 0x5f452
	cmp r0, #0	@ 0005f452 0028
.org 0x5f454
	bne.n 0x5f460	@ 0005f454 04d1
.org 0x5f456
	ldr r0, [pc, #96]	@ 0005f456 1848
.org 0x5f458
	ands r0, r2	@ 0005f458 1040
.org 0x5f45a
	movs r1, #16	@ 0005f45a 1021
.org 0x5f45c
	orrs r0, r1	@ 0005f45c 0843
.org 0x5f45e
	strh r0, [r3, #8]	@ 0005f45e 1881
.org 0x5f460
	ldrb r0, [r4, #14]	@ 0005f460 a07b
.org 0x5f462
	adds r0, #1	@ 0005f462 0130
.org 0x5f464
	strb r0, [r4, #14]	@ 0005f464 a073
.org 0x5f466
	adds r0, r4, #0	@ 0005f466 201c
.org 0x5f468
	bl 0x1cff0	@ 0005f468 bdf7c2fd
.org 0x5f46c
	ldrb r0, [r4, #13]	@ 0005f46c 607b
.org 0x5f46e
	cmp r0, #0	@ 0005f46e 0028
.org 0x5f470
	bne.n 0x5f4c0	@ 0005f470 26d1
.org 0x5f472
	ldr r0, [r4, #84]	@ 0005f472 606d
.org 0x5f474
	ldr r1, [r4, #92]	@ 0005f474 e16d
.org 0x5f476
	adds r0, r0, r1	@ 0005f476 4018
.org 0x5f478
	str r0, [r4, #84]	@ 0005f478 6065
.org 0x5f47a
	ldr r1, [r4, #88]	@ 0005f47a a16d
.org 0x5f47c
	ldr r0, [r4, #96]	@ 0005f47c 206e
.org 0x5f47e
	adds r1, r1, r0	@ 0005f47e 0918
.org 0x5f480
	str r1, [r4, #88]	@ 0005f480 a165
.org 0x5f482
	adds r0, #64	@ 0005f482 4030
.org 0x5f484
	str r0, [r4, #96]	@ 0005f484 2066
.org 0x5f486
	adds r5, r4, #0	@ 0005f486 251c
.org 0x5f488
	adds r5, #180	@ 0005f488 b435
.org 0x5f48a
	ldr r0, [r5, #4]	@ 0005f48a 6868
.org 0x5f48c
	cmp r1, r0	@ 0005f48c 8142
.org 0x5f48e
	bgt.n 0x5f492	@ 0005f48e 00dc
.org 0x5f490
	b.n 0x5f636	@ 0005f490 d1e0
.org 0x5f492
	ldr r1, [pc, #40]	@ 0005f492 0a49
.org 0x5f494
	adds r0, r4, #0	@ 0005f494 201c
.org 0x5f496
	bl 0x1cf00	@ 0005f496 bdf733fd
.org 0x5f49a
	adds r0, r4, #0	@ 0005f49a 201c
.org 0x5f49c
	bl 0x1cff0	@ 0005f49c bdf7a8fd
.org 0x5f4a0
	ldr r0, [r5, #4]	@ 0005f4a0 6868
.org 0x5f4a2
	str r0, [r4, #88]	@ 0005f4a2 a065
.org 0x5f4a4
	movs r0, #128	@ 0005f4a4 8020
.org 0x5f4a6
	strb r0, [r4, #18]	@ 0005f4a6 a074
.org 0x5f4a8
	b.n 0x5f5ee	@ 0005f4a8 a1e0
.org 0x5f4aa
	.byte 0x00	@ 0005f4aa data
.org 0x5f4ab
	.byte 0x00	@ 0005f4ab data
.org 0x5f4ac
	.byte 0x00,0xfd,0xff,0xff	@ 0005f4ac data
.org 0x5f4b0
	.byte 0x1c,0xa5,0x00,0x00	@ 0005f4b0 data
.org 0x5f4b4
	.byte 0x10,0xe9,0x02,0x02	@ 0005f4b4 data
.org 0x5f4b8
	.byte 0xfe,0xff,0x00,0x00	@ 0005f4b8 data
.org 0x5f4bc
	.byte 0x1d,0xa5,0x00,0x00	@ 0005f4bc data
.org 0x5f4c0
	cmp r0, #1	@ 0005f4c0 0128
.org 0x5f4c2
	beq.n 0x5f4c6	@ 0005f4c2 00d0
.org 0x5f4c4
	b.n 0x5f636	@ 0005f4c4 b7e0
.org 0x5f4c6
	ldrb r0, [r4, #18]	@ 0005f4c6 a07c
.org 0x5f4c8
	subs r0, #1	@ 0005f4c8 0138
.org 0x5f4ca
	strb r0, [r4, #18]	@ 0005f4ca a074
.org 0x5f4cc
	lsls r0, r0, #24	@ 0005f4cc 0006
.org 0x5f4ce
	lsrs r0, r0, #24	@ 0005f4ce 000e
.org 0x5f4d0
	cmp r0, #255	@ 0005f4d0 ff28
.org 0x5f4d2
	beq.n 0x5f4d6	@ 0005f4d2 00d0
.org 0x5f4d4
	b.n 0x5f636	@ 0005f4d4 afe0
.org 0x5f4d6
	ldr r2, [pc, #16]	@ 0005f4d6 044a
.org 0x5f4d8
	ldrb r0, [r2, #18]	@ 0005f4d8 907c
.org 0x5f4da
	movs r1, #2	@ 0005f4da 0221
.org 0x5f4dc
	orrs r0, r1	@ 0005f4dc 0843
.org 0x5f4de
	strb r0, [r2, #18]	@ 0005f4de 9074
.org 0x5f4e0
	movs r0, #2	@ 0005f4e0 0220
.org 0x5f4e2
	strb r0, [r4, #13]	@ 0005f4e2 6073
.org 0x5f4e4
	b.n 0x5f636	@ 0005f4e4 a7e0
.org 0x5f4e6
	.byte 0x00	@ 0005f4e6 data
.org 0x5f4e7
	.byte 0x00	@ 0005f4e7 data
.org 0x5f4e8
	.byte 0x10,0xe9,0x02,0x02	@ 0005f4e8 data
.org 0x5f4ec
	ldrb r2, [r4, #14]	@ 0005f4ec a27b
.org 0x5f4ee
	cmp r2, #0	@ 0005f4ee 002a
.org 0x5f4f0
	bne.n 0x5f5c2	@ 0005f4f0 67d1
.org 0x5f4f2
	adds r0, r4, #0	@ 0005f4f2 201c
.org 0x5f4f4
	adds r0, #180	@ 0005f4f4 b430
.org 0x5f4f6
	ldr r1, [r0, #12]	@ 0005f4f6 c168
.org 0x5f4f8
	adds r5, r0, #0	@ 0005f4f8 051c
.org 0x5f4fa
	cmp r1, #0	@ 0005f4fa 0029
.org 0x5f4fc
	beq.n 0x5f506	@ 0005f4fc 03d0
.org 0x5f4fe
	adds r1, #119	@ 0005f4fe 7731
.org 0x5f500
	movs r0, #1	@ 0005f500 0120
.org 0x5f502
	strb r0, [r1, #0]	@ 0005f502 0870
.org 0x5f504
	str r2, [r5, #12]	@ 0005f504 ea60
.org 0x5f506
	movs r3, #0	@ 0005f506 0023
.org 0x5f508
	ldr r0, [pc, #64]	@ 0005f508 1048
.org 0x5f50a
	ldr r2, [r0, #0]	@ 0005f50a 0268
.org 0x5f50c
	ldr r1, [r4, #84]	@ 0005f50c 616d
.org 0x5f50e
	ldr r0, [r2, #84]	@ 0005f50e 506d
.org 0x5f510
	cmp r1, r0	@ 0005f510 8142
.org 0x5f512
	bge.n 0x5f516	@ 0005f512 00da
.org 0x5f514
	movs r3, #1	@ 0005f514 0123
.org 0x5f516
	adds r0, r4, #0	@ 0005f516 201c
.org 0x5f518
	adds r0, #76	@ 0005f518 4c30
.org 0x5f51a
	strb r3, [r0, #0]	@ 0005f51a 0370
.org 0x5f51c
	movs r3, #0	@ 0005f51c 0023
.org 0x5f51e
	ldr r1, [r4, #84]	@ 0005f51e 616d
.org 0x5f520
	ldr r0, [r2, #84]	@ 0005f520 506d
.org 0x5f522
	cmp r1, r0	@ 0005f522 8142
.org 0x5f524
	bge.n 0x5f528	@ 0005f524 00da
.org 0x5f526
	movs r3, #1	@ 0005f526 0123
.org 0x5f528
	movs r2, #74	@ 0005f528 4a22
.org 0x5f52a
	adds r2, r2, r4	@ 0005f52a 1219
.org 0x5f52c
	mov ip, r2	@ 0005f52c 9446
.org 0x5f52e
	lsls r2, r3, #4	@ 0005f52e 1a01
.org 0x5f530
	mov r0, ip	@ 0005f530 6046
.org 0x5f532
	ldrb r1, [r0, #0]	@ 0005f532 0178
.org 0x5f534
	movs r0, #17	@ 0005f534 1120
.org 0x5f536
	negs r0, r0	@ 0005f536 4042
.org 0x5f538
	ands r0, r1	@ 0005f538 0840
.org 0x5f53a
	orrs r0, r2	@ 0005f53a 1043
.org 0x5f53c
	mov r1, ip	@ 0005f53c 6146
.org 0x5f53e
	strb r0, [r1, #0]	@ 0005f53e 0870
.org 0x5f540
	cmp r3, #0	@ 0005f540 002b
.org 0x5f542
	beq.n 0x5f550	@ 0005f542 05d0
.org 0x5f544
	ldrb r0, [r4, #10]	@ 0005f544 a07a
.org 0x5f546
	movs r1, #16	@ 0005f546 1021
.org 0x5f548
	orrs r0, r1	@ 0005f548 0843
.org 0x5f54a
	b.n 0x5f556	@ 0005f54a 04e0
.org 0x5f54c
	.byte 0xf0,0xdb,0x02,0x02	@ 0005f54c data
.org 0x5f550
	ldrb r1, [r4, #10]	@ 0005f550 a17a
.org 0x5f552
	movs r0, #239	@ 0005f552 ef20
.org 0x5f554
	ands r0, r1	@ 0005f554 0840
.org 0x5f556
	strb r0, [r4, #10]	@ 0005f556 a072
.org 0x5f558
	ldr r1, [pc, #152]	@ 0005f558 2649
.org 0x5f55a
	adds r0, r4, #0	@ 0005f55a 201c
.org 0x5f55c
	bl 0x1cf00	@ 0005f55c bdf7d0fc
.org 0x5f560
	ldr r0, [pc, #148]	@ 0005f560 2548
.org 0x5f562
	bl 0x2b10	@ 0005f562 a3f7d5fa
.org 0x5f566
	ldrh r0, [r5, #22]	@ 0005f566 e88a
.org 0x5f568
	cmp r0, #0	@ 0005f568 0028
.org 0x5f56a
	beq.n 0x5f576	@ 0005f56a 04d0
.org 0x5f56c
	movs r0, #93	@ 0005f56c 5d20
.org 0x5f56e
	bl 0x2b5c	@ 0005f56e a3f7f5fa
.org 0x5f572
	movs r0, #0	@ 0005f572 0020
.org 0x5f574
	strh r0, [r5, #22]	@ 0005f574 e882
.org 0x5f576
	movs r2, #0	@ 0005f576 0022
.org 0x5f578
	movs r0, #64	@ 0005f578 4020
.org 0x5f57a
	strb r0, [r4, #18]	@ 0005f57a a074
.org 0x5f57c
	ldrb r1, [r4, #10]	@ 0005f57c a17a
.org 0x5f57e
	movs r0, #1	@ 0005f57e 0120
.org 0x5f580
	orrs r0, r1	@ 0005f580 0843
.org 0x5f582
	strb r0, [r4, #10]	@ 0005f582 a072
.org 0x5f584
	adds r0, r4, #0	@ 0005f584 201c
.org 0x5f586
	adds r0, #140	@ 0005f586 8c30
.org 0x5f588
	str r2, [r0, #0]	@ 0005f588 0260
.org 0x5f58a
	adds r0, #4	@ 0005f58a 0430
.org 0x5f58c
	str r2, [r0, #0]	@ 0005f58c 0260
.org 0x5f58e
	adds r0, #4	@ 0005f58e 0430
.org 0x5f590
	strb r2, [r0, #0]	@ 0005f590 0270
.org 0x5f592
	ldrb r1, [r4, #10]	@ 0005f592 a17a
.org 0x5f594
	movs r0, #251	@ 0005f594 fb20
.org 0x5f596
	ands r0, r1	@ 0005f596 0840
.org 0x5f598
	strb r0, [r4, #10]	@ 0005f598 a072
.org 0x5f59a
	ldr r3, [pc, #96]	@ 0005f59a 184b
.org 0x5f59c
	ldrh r2, [r3, #8]	@ 0005f59c 1a89
.org 0x5f59e
	movs r5, #1	@ 0005f59e 0125
.org 0x5f5a0
	adds r0, r5, #0	@ 0005f5a0 281c
.org 0x5f5a2
	ands r0, r2	@ 0005f5a2 1040
.org 0x5f5a4
	cmp r0, #0	@ 0005f5a4 0028
.org 0x5f5a6
	beq.n 0x5f5bc	@ 0005f5a6 09d0
.org 0x5f5a8
	ldrb r1, [r3, #18]	@ 0005f5a8 997c
.org 0x5f5aa
	adds r0, r5, #0	@ 0005f5aa 281c
.org 0x5f5ac
	ands r0, r1	@ 0005f5ac 0840
.org 0x5f5ae
	cmp r0, #0	@ 0005f5ae 0028
.org 0x5f5b0
	bne.n 0x5f5bc	@ 0005f5b0 04d1
.org 0x5f5b2
	ldr r0, [pc, #76]	@ 0005f5b2 1348
.org 0x5f5b4
	ands r0, r2	@ 0005f5b4 1040
.org 0x5f5b6
	movs r1, #16	@ 0005f5b6 1021
.org 0x5f5b8
	orrs r0, r1	@ 0005f5b8 0843
.org 0x5f5ba
	strh r0, [r3, #8]	@ 0005f5ba 1881
.org 0x5f5bc
	ldrb r0, [r4, #14]	@ 0005f5bc a07b
.org 0x5f5be
	adds r0, #1	@ 0005f5be 0130
.org 0x5f5c0
	strb r0, [r4, #14]	@ 0005f5c0 a073
.org 0x5f5c2
	adds r0, r4, #0	@ 0005f5c2 201c
.org 0x5f5c4
	bl 0x1cff0	@ 0005f5c4 bdf714fd
.org 0x5f5c8
	ldrb r0, [r4, #13]	@ 0005f5c8 607b
.org 0x5f5ca
	cmp r0, #0	@ 0005f5ca 0028
.org 0x5f5cc
	bne.n 0x5f608	@ 0005f5cc 1cd1
.org 0x5f5ce
	ldr r0, [r4, #24]	@ 0005f5ce a069
.org 0x5f5d0
	ldrb r1, [r0, #9]	@ 0005f5d0 417a
.org 0x5f5d2
	movs r0, #128	@ 0005f5d2 8020
.org 0x5f5d4
	ands r0, r1	@ 0005f5d4 0840
.org 0x5f5d6
	cmp r0, #0	@ 0005f5d6 0028
.org 0x5f5d8
	beq.n 0x5f636	@ 0005f5d8 2dd0
.org 0x5f5da
	movs r0, #192	@ 0005f5da c020
.org 0x5f5dc
	lsls r0, r0, #3	@ 0005f5dc c000
.org 0x5f5de
	str r0, [sp, #0]	@ 0005f5de 0090
.org 0x5f5e0
	ldr r0, [pc, #32]	@ 0005f5e0 0848
.org 0x5f5e2
	str r0, [sp, #4]	@ 0005f5e2 0190
.org 0x5f5e4
	adds r0, r4, #0	@ 0005f5e4 201c
.org 0x5f5e6
	mov r1, sp	@ 0005f5e6 6946
.org 0x5f5e8
	bl 0xd296c	@ 0005f5e8 73f0c0f9
.org 0x5f5ec
	str r0, [r4, #44]	@ 0005f5ec e062
.org 0x5f5ee
	movs r0, #1	@ 0005f5ee 0120
.org 0x5f5f0
	strb r0, [r4, #13]	@ 0005f5f0 6073
.org 0x5f5f2
	b.n 0x5f636	@ 0005f5f2 20e0
.org 0x5f5f4
	.byte 0x1c,0xa5,0x00,0x00	@ 0005f5f4 data
.org 0x5f5f8
	.byte 0x23,0x01,0x00,0x00	@ 0005f5f8 data
.org 0x5f5fc
	.byte 0x10,0xe9,0x02,0x02	@ 0005f5fc data
.org 0x5f600
	.byte 0xfe,0xff,0x00,0x00	@ 0005f600 data
.org 0x5f604
	.byte 0x00,0xe1,0xff,0xff	@ 0005f604 data
.org 0x5f608
	cmp r0, #1	@ 0005f608 0128
.org 0x5f60a
	bne.n 0x5f628	@ 0005f60a 0dd1
.org 0x5f60c
	ldr r0, [r4, #44]	@ 0005f60c e06a
.org 0x5f60e
	ldrb r0, [r0, #12]	@ 0005f60e 007b
.org 0x5f610
	cmp r0, #1	@ 0005f610 0128
.org 0x5f612
	bls.n 0x5f636	@ 0005f612 10d9

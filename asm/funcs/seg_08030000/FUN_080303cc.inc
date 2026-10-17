@ FUN_080303cc  entry 0x080303cc  size 436
.thumb
.org 0x303cc
FUN_080303cc:
	push {r4, r5, r6, r7, lr}	@ 000303cc f0b5
.org 0x303ce
	mov r7, r8	@ 000303ce 4746
.org 0x303d0
	push {r7}	@ 000303d0 80b4
.org 0x303d2
	adds r4, r0, #0	@ 000303d2 041c
.org 0x303d4
	adds r5, r4, #0	@ 000303d4 251c
.org 0x303d6
	adds r5, #180	@ 000303d6 b435
.org 0x303d8
	ldr r1, [pc, #12]	@ 000303d8 0349
.org 0x303da
	adds r0, r4, r1	@ 000303da 6018
.org 0x303dc
	ldrb r7, [r0, #0]	@ 000303dc 0778
.org 0x303de
	cmp r7, #0	@ 000303de 002f
.org 0x303e0
	beq.n 0x303ec	@ 000303e0 04d0
.org 0x303e2
	movs r1, #0	@ 000303e2 0021
.org 0x303e4
	movs r0, #7	@ 000303e4 0720
.org 0x303e6
	b.n 0x3058e	@ 000303e6 d2e0
.org 0x303e8
	.byte 0x43,0x01,0x00,0x00	@ 000303e8 data
.org 0x303ec
	ldrh r1, [r4, #14]	@ 000303ec e189
.org 0x303ee
	ldr r0, [pc, #112]	@ 000303ee 1c48
.org 0x303f0
	cmp r1, r0	@ 000303f0 8142
.org 0x303f2
	bne.n 0x303f6	@ 000303f2 00d1
.org 0x303f4
	b.n 0x30594	@ 000303f4 cee0
.org 0x303f6
	subs r0, #170	@ 000303f6 aa38
.org 0x303f8
	adds r1, r4, r0	@ 000303f8 2118
.org 0x303fa
	ldr r0, [r1, #0]	@ 000303fa 0868
.org 0x303fc
	movs r6, #1	@ 000303fc 0126
.org 0x303fe
	ands r0, r6	@ 000303fe 3040
.org 0x30400
	mov r8, r1	@ 00030400 8846
.org 0x30402
	cmp r0, #0	@ 00030402 0028
.org 0x30404
	bne.n 0x30408	@ 00030404 00d1
.org 0x30406
	b.n 0x30514	@ 00030406 85e0
.org 0x30408
	ldrb r0, [r4, #15]	@ 00030408 e07b
.org 0x3040a
	cmp r0, #3	@ 0003040a 0328
.org 0x3040c
	bhi.n 0x304b4	@ 0003040c 52d8
.org 0x3040e
	movs r1, #186	@ 0003040e ba21
.org 0x30410
	lsls r1, r1, #1	@ 00030410 4900
.org 0x30412
	adds r0, r4, r1	@ 00030412 6018
.org 0x30414
	ldrb r1, [r0, #0]	@ 00030414 0178
.org 0x30416
	lsls r1, r1, #3	@ 00030416 c900
.org 0x30418
	ldr r0, [pc, #72]	@ 00030418 1248
.org 0x3041a
	adds r1, r1, r0	@ 0003041a 0918
.org 0x3041c
	adds r0, r4, #0	@ 0003041c 201c
.org 0x3041e
	movs r2, #0	@ 0003041e 0022
.org 0x30420
	bl 0x2c7b4	@ 00030420 fcf7c8f9
.org 0x30424
	lsls r0, r0, #24	@ 00030424 0006
.org 0x30426
	lsrs r0, r0, #24	@ 00030426 000e
.org 0x30428
	cmp r0, #0	@ 00030428 0028
.org 0x3042a
	beq.n 0x3047c	@ 0003042a 27d0
.org 0x3042c
	ldr r2, [r5, #84]	@ 0003042c 6a6d
.org 0x3042e
	cmp r2, #0	@ 0003042e 002a
.org 0x30430
	beq.n 0x30436	@ 00030430 01d0
.org 0x30432
	strb r6, [r2, #17]	@ 00030432 5674
.org 0x30434
	str r7, [r5, #84]	@ 00030434 6f65
.org 0x30436
	subs r1, r0, #1	@ 00030436 411e
.org 0x30438
	movs r0, #1	@ 00030438 0120
.org 0x3043a
	ands r1, r0	@ 0003043a 0140
.org 0x3043c
	adds r0, r4, #0	@ 0003043c 201c
.org 0x3043e
	adds r0, #76	@ 0003043e 4c30
.org 0x30440
	strb r1, [r0, #0]	@ 00030440 0170
.org 0x30442
	adds r5, r4, #0	@ 00030442 251c
.org 0x30444
	adds r5, #74	@ 00030444 4a35
.org 0x30446
	lsls r3, r1, #4	@ 00030446 0b01
.org 0x30448
	ldrb r2, [r5, #0]	@ 00030448 2a78
.org 0x3044a
	movs r0, #17	@ 0003044a 1120
.org 0x3044c
	negs r0, r0	@ 0003044c 4042
.org 0x3044e
	ands r0, r2	@ 0003044e 1040
.org 0x30450
	orrs r0, r3	@ 00030450 1843
.org 0x30452
	strb r0, [r5, #0]	@ 00030452 2870
.org 0x30454
	cmp r1, #0	@ 00030454 0029
.org 0x30456
	beq.n 0x30468	@ 00030456 07d0
.org 0x30458
	ldrb r0, [r4, #10]	@ 00030458 a07a
.org 0x3045a
	movs r1, #16	@ 0003045a 1021
.org 0x3045c
	orrs r0, r1	@ 0003045c 0843
.org 0x3045e
	b.n 0x3046e	@ 0003045e 06e0
.org 0x30460
	.byte 0x02,0x03,0x00,0x00	@ 00030460 data
.org 0x30464
	.byte 0x6c,0x33,0x85,0x08	@ 00030464 data
.org 0x30468
	ldrb r1, [r4, #10]	@ 00030468 a17a
.org 0x3046a
	movs r0, #239	@ 0003046a ef20
.org 0x3046c
	ands r0, r1	@ 0003046c 0840
.org 0x3046e
	strb r0, [r4, #10]	@ 0003046e a072
.org 0x30470
	movs r0, #0	@ 00030470 0020
.org 0x30472
	movs r1, #1	@ 00030472 0121
.org 0x30474
	strb r1, [r4, #13]	@ 00030474 6173
.org 0x30476
	strb r0, [r4, #14]	@ 00030476 a073
.org 0x30478
	movs r0, #3	@ 00030478 0320
.org 0x3047a
	b.n 0x30504	@ 0003047a 43e0
.org 0x3047c
	ldrb r0, [r5, #18]	@ 0003047c a87c
.org 0x3047e
	cmp r0, #22	@ 0003047e 1628
.org 0x30480
	bne.n 0x304b4	@ 00030480 18d1
.org 0x30482
	ldr r1, [pc, #44]	@ 00030482 0b49
.org 0x30484
	adds r0, r4, r1	@ 00030484 6018
.org 0x30486
	ldrh r1, [r0, #0]	@ 00030486 0188
.org 0x30488
	movs r0, #128	@ 00030488 8020
.org 0x3048a
	lsls r0, r0, #8	@ 0003048a 0002
.org 0x3048c
	ands r0, r1	@ 0003048c 0840
.org 0x3048e
	lsls r0, r0, #16	@ 0003048e 0004
.org 0x30490
	lsrs r2, r0, #16	@ 00030490 020c
.org 0x30492
	cmp r2, #0	@ 00030492 002a
.org 0x30494
	bne.n 0x304b4	@ 00030494 0ed1
.org 0x30496
	movs r1, #161	@ 00030496 a121
.org 0x30498
	lsls r1, r1, #1	@ 00030498 4900
.org 0x3049a
	adds r0, r4, r1	@ 0003049a 6018
.org 0x3049c
	ldrb r1, [r0, #0]	@ 0003049c 0178
.org 0x3049e
	movs r0, #8	@ 0003049e 0820
.org 0x304a0
	ands r0, r1	@ 000304a0 0840
.org 0x304a2
	cmp r0, #0	@ 000304a2 0028
.org 0x304a4
	beq.n 0x304b4	@ 000304a4 06d0
.org 0x304a6
	strb r6, [r4, #13]	@ 000304a6 6673
.org 0x304a8
	strb r2, [r4, #14]	@ 000304a8 a273
.org 0x304aa
	strb r2, [r4, #15]	@ 000304aa e273
.org 0x304ac
	b.n 0x30506	@ 000304ac 2be0
.org 0x304ae
	.byte 0x00	@ 000304ae data
.org 0x304af
	.byte 0x00	@ 000304af data
.org 0x304b0
	.byte 0x52,0x02,0x00,0x00	@ 000304b0 data
.org 0x304b4
	ldrb r1, [r4, #14]	@ 000304b4 a17b
.org 0x304b6
	cmp r1, #1	@ 000304b6 0129
.org 0x304b8
	bne.n 0x304c0	@ 000304b8 02d1
.org 0x304ba
	ldrb r0, [r4, #15]	@ 000304ba e07b
.org 0x304bc
	cmp r0, #4	@ 000304bc 0428
.org 0x304be
	bls.n 0x304ca	@ 000304be 04d9
.org 0x304c0
	cmp r1, #2	@ 000304c0 0229
.org 0x304c2
	bne.n 0x30514	@ 000304c2 27d1
.org 0x304c4
	ldrb r0, [r4, #15]	@ 000304c4 e07b
.org 0x304c6
	cmp r0, #1	@ 000304c6 0128
.org 0x304c8
	bhi.n 0x30514	@ 000304c8 24d8
.org 0x304ca
	adds r2, r4, #0	@ 000304ca 221c
.org 0x304cc
	adds r2, #180	@ 000304cc b432
.org 0x304ce
	ldr r1, [pc, #64]	@ 000304ce 1049
.org 0x304d0
	adds r0, r4, r1	@ 000304d0 6018
.org 0x304d2
	ldrh r1, [r0, #0]	@ 000304d2 0188
.org 0x304d4
	movs r0, #128	@ 000304d4 8020
.org 0x304d6
	lsls r0, r0, #8	@ 000304d6 0002
.org 0x304d8
	ands r0, r1	@ 000304d8 0840
.org 0x304da
	cmp r0, #0	@ 000304da 0028
.org 0x304dc
	bne.n 0x30514	@ 000304dc 1ad1
.org 0x304de
	ldrb r0, [r2, #18]	@ 000304de 907c
.org 0x304e0
	cmp r0, #21	@ 000304e0 1528
.org 0x304e2
	bne.n 0x30514	@ 000304e2 17d1
.org 0x304e4
	movs r0, #161	@ 000304e4 a120
.org 0x304e6
	lsls r0, r0, #1	@ 000304e6 4000
.org 0x304e8
	adds r3, r4, r0	@ 000304e8 2318
.org 0x304ea
	ldrb r2, [r3, #0]	@ 000304ea 1a78
.org 0x304ec
	movs r0, #2	@ 000304ec 0220
.org 0x304ee
	ands r0, r2	@ 000304ee 1040
.org 0x304f0
	lsls r0, r0, #24	@ 000304f0 0006
.org 0x304f2
	lsrs r1, r0, #24	@ 000304f2 010e
.org 0x304f4
	cmp r1, #0	@ 000304f4 0029
.org 0x304f6
	bne.n 0x30514	@ 000304f6 0dd1
.org 0x304f8
	movs r0, #2	@ 000304f8 0220
.org 0x304fa
	orrs r0, r2	@ 000304fa 1043
.org 0x304fc
	strb r0, [r3, #0]	@ 000304fc 1870
.org 0x304fe
	movs r0, #1	@ 000304fe 0120
.org 0x30500
	strb r0, [r4, #13]	@ 00030500 6073
.org 0x30502
	strb r1, [r4, #14]	@ 00030502 a173
.org 0x30504
	strb r0, [r4, #15]	@ 00030504 e073
.org 0x30506
	adds r0, r4, #0	@ 00030506 201c
.org 0x30508
	bl 0x383f0	@ 00030508 07f072ff
.org 0x3050c
	b.n 0x30594	@ 0003050c 42e0
.org 0x3050e
	.byte 0x00	@ 0003050e data
.org 0x3050f
	.byte 0x00	@ 0003050f data
.org 0x30510
	.byte 0x52,0x02,0x00,0x00	@ 00030510 data
.org 0x30514
	ldrb r5, [r4, #14]	@ 00030514 a57b
.org 0x30516
	cmp r5, #1	@ 00030516 012d
.org 0x30518
	bne.n 0x30536	@ 00030518 0dd1
.org 0x3051a
	ldrb r0, [r4, #15]	@ 0003051a e07b
.org 0x3051c
	cmp r0, #4	@ 0003051c 0428
.org 0x3051e
	bhi.n 0x30564	@ 0003051e 21d8
.org 0x30520
	cmp r0, #2	@ 00030520 0228
.org 0x30522
	beq.n 0x30564	@ 00030522 1fd0
.org 0x30524
	mov r1, r8	@ 00030524 4146
.org 0x30526
	ldr r0, [r1, #0]	@ 00030526 0868
.org 0x30528
	movs r1, #2	@ 00030528 0221
.org 0x3052a
	ands r0, r1	@ 0003052a 0840
.org 0x3052c
	cmp r0, #0	@ 0003052c 0028
.org 0x3052e
	bne.n 0x30564	@ 0003052e 19d1
.org 0x30530
	strb r1, [r4, #14]	@ 00030530 a173
.org 0x30532
	strb r0, [r4, #15]	@ 00030532 e073
.org 0x30534
	b.n 0x30594	@ 00030534 2ee0
.org 0x30536
	cmp r5, #2	@ 00030536 022d
.org 0x30538
	bne.n 0x30564	@ 00030538 14d1
.org 0x3053a
	movs r1, #186	@ 0003053a ba21
.org 0x3053c
	lsls r1, r1, #1	@ 0003053c 4900
.org 0x3053e
	adds r0, r4, r1	@ 0003053e 6018
.org 0x30540
	ldrb r1, [r0, #0]	@ 00030540 0178
.org 0x30542
	lsls r1, r1, #3	@ 00030542 c900
.org 0x30544
	ldr r0, [pc, #24]	@ 00030544 0648
.org 0x30546
	adds r1, r1, r0	@ 00030546 0918
.org 0x30548
	adds r0, r4, #0	@ 00030548 201c
.org 0x3054a
	movs r2, #0	@ 0003054a 0022
.org 0x3054c
	bl 0x2c5f8	@ 0003054c fcf754f8
.org 0x30550
	lsls r0, r0, #24	@ 00030550 0006
.org 0x30552
	cmp r0, #0	@ 00030552 0028
.org 0x30554
	beq.n 0x30564	@ 00030554 06d0
.org 0x30556
	movs r0, #0	@ 00030556 0020
.org 0x30558
	strb r5, [r4, #13]	@ 00030558 6573
.org 0x3055a
	strb r0, [r4, #14]	@ 0003055a a073
.org 0x3055c
	b.n 0x30594	@ 0003055c 1ae0
.org 0x3055e
	.byte 0x00	@ 0003055e data
.org 0x3055f
	.byte 0x00	@ 0003055f data
.org 0x30560
	.byte 0x6c,0x33,0x85,0x08	@ 00030560 data
.org 0x30564
	ldrb r0, [r4, #14]	@ 00030564 a07b
.org 0x30566
	cmp r0, #1	@ 00030566 0128
.org 0x30568
	bne.n 0x30570	@ 00030568 02d1
.org 0x3056a
	ldrb r0, [r4, #15]	@ 0003056a e07b
.org 0x3056c
	cmp r0, #3	@ 0003056c 0328
.org 0x3056e
	bhi.n 0x30594	@ 0003056e 11d8
.org 0x30570
	mov r1, r8	@ 00030570 4146
.org 0x30572
	ldr r0, [r1, #0]	@ 00030572 0868
.org 0x30574
	movs r1, #64	@ 00030574 4021
.org 0x30576
	ands r0, r1	@ 00030576 0840
.org 0x30578
	cmp r0, #0	@ 00030578 0028
.org 0x3057a
	beq.n 0x30594	@ 0003057a 0bd0
.org 0x3057c
	adds r0, r4, #0	@ 0003057c 201c
.org 0x3057e
	movs r1, #0	@ 0003057e 0021

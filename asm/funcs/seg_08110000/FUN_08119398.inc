@ FUN_08119398  entry 0x08119398  size 480
.thumb
.org 0x119398
FUN_08119398:
	push {r4, r5, r6, r7, lr}	@ 00119398 f0b5
.org 0x11939a
	mov r7, r8	@ 0011939a 4746
.org 0x11939c
	push {r7}	@ 0011939c 80b4
.org 0x11939e
	mov r8, r0	@ 0011939e 8046
.org 0x1193a0
	ldr r0, [pc, #52]	@ 001193a0 0d48
.org 0x1193a2
	add r0, r8	@ 001193a2 4044
.org 0x1193a4
	ldr r5, [r0, #0]	@ 001193a4 0568
.org 0x1193a6
	ldr r2, [pc, #52]	@ 001193a6 0d4a
.org 0x1193a8
	add r2, r8	@ 001193a8 4244
.org 0x1193aa
	ldr r1, [pc, #52]	@ 001193aa 0d49
.org 0x1193ac
	add r1, r8	@ 001193ac 4144
.org 0x1193ae
	ldrb r0, [r1, #0]	@ 001193ae 0878
.org 0x1193b0
	cmp r0, #0	@ 001193b0 0028
.org 0x1193b2
	bne.n 0x1193bc	@ 001193b2 03d1
.org 0x1193b4
	strb r0, [r2, #1]	@ 001193b4 5070
.org 0x1193b6
	ldrb r0, [r1, #0]	@ 001193b6 0878
.org 0x1193b8
	adds r0, #1	@ 001193b8 0130
.org 0x1193ba
	strb r0, [r1, #0]	@ 001193ba 0870
.org 0x1193bc
	ldrb r3, [r2, #1]	@ 001193bc 5378
.org 0x1193be
	ldr r0, [pc, #36]	@ 001193be 0948
.org 0x1193c0
	ldrh r1, [r0, #6]	@ 001193c0 c188
.org 0x1193c2
	movs r0, #16	@ 001193c2 1020
.org 0x1193c4
	ands r0, r1	@ 001193c4 0840
.org 0x1193c6
	cmp r0, #0	@ 001193c6 0028
.org 0x1193c8
	beq.n 0x1193e8	@ 001193c8 0ed0
.org 0x1193ca
	movs r0, #3	@ 001193ca 0320
.org 0x1193cc
	ands r0, r3	@ 001193cc 1840
.org 0x1193ce
	cmp r0, #3	@ 001193ce 0328
.org 0x1193d0
	beq.n 0x1193fc	@ 001193d0 14d0
.org 0x1193d2
	adds r0, r3, #1	@ 001193d2 581c
.org 0x1193d4
	b.n 0x1193fa	@ 001193d4 11e0
.org 0x1193d6
	.byte 0x00	@ 001193d6 data
.org 0x1193d7
	.byte 0x00	@ 001193d7 data
.org 0x1193d8
	.byte 0xa8,0x63,0x00,0x00	@ 001193d8 data
.org 0x1193dc
	.byte 0xcc,0x0d,0x00,0x00	@ 001193dc data
.org 0x1193e0
	.byte 0xf7,0x0d,0x00,0x00	@ 001193e0 data
.org 0x1193e4
	.byte 0x60,0x07,0x00,0x02	@ 001193e4 data
.org 0x1193e8
	movs r0, #32	@ 001193e8 2020
.org 0x1193ea
	ands r0, r1	@ 001193ea 0840
.org 0x1193ec
	cmp r0, #0	@ 001193ec 0028
.org 0x1193ee
	beq.n 0x1193fc	@ 001193ee 05d0
.org 0x1193f0
	movs r0, #3	@ 001193f0 0320
.org 0x1193f2
	ands r0, r3	@ 001193f2 1840
.org 0x1193f4
	cmp r0, #0	@ 001193f4 0028
.org 0x1193f6
	beq.n 0x1193fc	@ 001193f6 01d0
.org 0x1193f8
	subs r0, r3, #1	@ 001193f8 581e
.org 0x1193fa
	strb r0, [r2, #1]	@ 001193fa 5070
.org 0x1193fc
	ldr r0, [pc, #24]	@ 001193fc 0648
.org 0x1193fe
	ldrh r1, [r0, #6]	@ 001193fe c188
.org 0x119400
	movs r0, #128	@ 00119400 8020
.org 0x119402
	ands r0, r1	@ 00119402 0840
.org 0x119404
	cmp r0, #0	@ 00119404 0028
.org 0x119406
	beq.n 0x119420	@ 00119406 0bd0
.org 0x119408
	ldr r1, [pc, #16]	@ 00119408 0449
.org 0x11940a
	add r1, r8	@ 0011940a 4144
.org 0x11940c
	ldrb r0, [r1, #1]	@ 0011940c 4878
.org 0x11940e
	cmp r0, #3	@ 0011940e 0328
.org 0x119410
	bhi.n 0x119436	@ 00119410 11d8
.org 0x119412
	adds r0, #4	@ 00119412 0430
.org 0x119414
	b.n 0x119434	@ 00119414 0ee0
.org 0x119416
	.byte 0x00	@ 00119416 data
.org 0x119417
	.byte 0x00	@ 00119417 data
.org 0x119418
	.byte 0x60,0x07,0x00,0x02	@ 00119418 data
.org 0x11941c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011941c data
.org 0x119420
	movs r0, #64	@ 00119420 4020
.org 0x119422
	ands r0, r1	@ 00119422 0840
.org 0x119424
	cmp r0, #0	@ 00119424 0028
.org 0x119426
	beq.n 0x119436	@ 00119426 06d0
.org 0x119428
	ldr r1, [pc, #64]	@ 00119428 1049
.org 0x11942a
	add r1, r8	@ 0011942a 4144
.org 0x11942c
	ldrb r0, [r1, #1]	@ 0011942c 4878
.org 0x11942e
	cmp r0, #3	@ 0011942e 0328
.org 0x119430
	bls.n 0x119436	@ 00119430 01d9
.org 0x119432
	subs r0, #4	@ 00119432 0438
.org 0x119434
	strb r0, [r1, #1]	@ 00119434 4870
.org 0x119436
	ldr r4, [pc, #52]	@ 00119436 0d4c
.org 0x119438
	add r4, r8	@ 00119438 4444
.org 0x11943a
	ldrb r0, [r4, #1]	@ 0011943a 6078
.org 0x11943c
	cmp r3, r0	@ 0011943c 8342
.org 0x11943e
	beq.n 0x119446	@ 0011943e 02d0
.org 0x119440
	movs r0, #1	@ 00119440 0120
.org 0x119442
	bl 0x2b10	@ 00119442 e9f665fb
.org 0x119446
	ldr r2, [r4, #32]	@ 00119446 226a
.org 0x119448
	ldrb r0, [r4, #1]	@ 00119448 6078
.org 0x11944a
	movs r1, #3	@ 0011944a 0321
.org 0x11944c
	ands r1, r0	@ 0011944c 0140
.org 0x11944e
	lsls r0, r1, #1	@ 0011944e 4800
.org 0x119450
	adds r0, r0, r1	@ 00119450 4018
.org 0x119452
	lsls r0, r0, #3	@ 00119452 c000
.org 0x119454
	adds r0, #128	@ 00119454 8030
.org 0x119456
	lsls r0, r0, #8	@ 00119456 0002
.org 0x119458
	str r0, [r2, #116]	@ 00119458 5067
.org 0x11945a
	ldrb r1, [r4, #1]	@ 0011945a 6178
.org 0x11945c
	movs r0, #1	@ 0011945c 0120
.org 0x11945e
	ands r0, r1	@ 0011945e 0840
.org 0x119460
	cmp r0, #0	@ 00119460 0028
.org 0x119462
	beq.n 0x119470	@ 00119462 05d0
.org 0x119464
	movs r0, #192	@ 00119464 c020
.org 0x119466
	lsls r0, r0, #6	@ 00119466 8001
.org 0x119468
	b.n 0x119474	@ 00119468 04e0
.org 0x11946a
	.byte 0x00	@ 0011946a data
.org 0x11946b
	.byte 0x00	@ 0011946b data
.org 0x11946c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011946c data
.org 0x119470
	movs r0, #224	@ 00119470 e020
.org 0x119472
	lsls r0, r0, #6	@ 00119472 8001
.org 0x119474
	str r0, [r2, #120]	@ 00119474 9067
.org 0x119476
	ldr r6, [pc, #88]	@ 00119476 164e
.org 0x119478
	add r6, r8	@ 00119478 4644
.org 0x11947a
	ldrb r0, [r6, #1]	@ 0011947a 7078
.org 0x11947c
	cmp r0, #3	@ 0011947c 0328
.org 0x11947e
	bls.n 0x11948c	@ 0011947e 05d9
.org 0x119480
	ldr r1, [r6, #32]	@ 00119480 316a
.org 0x119482
	ldr r0, [r1, #120]	@ 00119482 886f
.org 0x119484
	movs r2, #128	@ 00119484 8022
.org 0x119486
	lsls r2, r2, #5	@ 00119486 5201
.org 0x119488
	adds r0, r0, r2	@ 00119488 8018
.org 0x11948a
	str r0, [r1, #120]	@ 0011948a 8867
.org 0x11948c
	ldr r0, [pc, #68]	@ 0011948c 1148
.org 0x11948e
	ldrh r1, [r0, #4]	@ 0011948e 8188
.org 0x119490
	movs r7, #1	@ 00119490 0127
.org 0x119492
	adds r4, r7, #0	@ 00119492 3c1c
.org 0x119494
	ands r4, r1	@ 00119494 0c40
.org 0x119496
	cmp r4, #0	@ 00119496 002c
.org 0x119498
	beq.n 0x11954c	@ 00119498 58d0
.org 0x11949a
	adds r3, r5, #0	@ 0011949a 2b1c
.org 0x11949c
	adds r3, #180	@ 0011949c b433
.org 0x11949e
	ldrh r1, [r3, #22]	@ 0011949e d98a
.org 0x1194a0
	ldrb r2, [r6, #1]	@ 001194a0 7278
.org 0x1194a2
	adds r0, r7, #0	@ 001194a2 381c
.org 0x1194a4
	lsls r0, r2	@ 001194a4 9040
.org 0x1194a6
	ands r1, r0	@ 001194a6 0140
.org 0x1194a8
	asrs r1, r2	@ 001194a8 1141
.org 0x1194aa
	adds r5, r3, #0	@ 001194aa 1d1c
.org 0x1194ac
	cmp r1, #0	@ 001194ac 0029
.org 0x1194ae
	beq.n 0x119544	@ 001194ae 49d0
.org 0x1194b0
	movs r0, #2	@ 001194b0 0220
.org 0x1194b2
	bl 0x2b10	@ 001194b2 e9f62dfb
.org 0x1194b6
	ldrh r1, [r5, #20]	@ 001194b6 a98a
.org 0x1194b8
	ldrb r3, [r6, #1]	@ 001194b8 7378
.org 0x1194ba
	adds r2, r7, #0	@ 001194ba 3a1c
.org 0x1194bc
	lsls r2, r3	@ 001194bc 9a40
.org 0x1194be
	adds r0, r1, #0	@ 001194be 081c
.org 0x1194c0
	ands r0, r2	@ 001194c0 1040
.org 0x1194c2
	asrs r0, r3	@ 001194c2 1841
.org 0x1194c4
	cmp r0, #0	@ 001194c4 0028
.org 0x1194c6
	beq.n 0x1194d8	@ 001194c6 07d0
.org 0x1194c8
	bics r1, r2	@ 001194c8 9143
.org 0x1194ca
	strh r1, [r5, #20]	@ 001194ca a982
.org 0x1194cc
	b.n 0x11956c	@ 001194cc 4ee0
.org 0x1194ce
	.byte 0x00	@ 001194ce data
.org 0x1194cf
	.byte 0x00	@ 001194cf data
.org 0x1194d0
	.byte 0xcc,0x0d,0x00,0x00	@ 001194d0 data
.org 0x1194d4
	.byte 0x60,0x07,0x00,0x02	@ 001194d4 data
.org 0x1194d8
	adds r0, r3, #0	@ 001194d8 181c
.org 0x1194da
	cmp r0, #0	@ 001194da 0028
.org 0x1194dc
	bne.n 0x1194f0	@ 001194dc 08d1
.org 0x1194de
	ldr r0, [pc, #12]	@ 001194de 0348
.org 0x1194e0
	ands r1, r0	@ 001194e0 0140
.org 0x1194e2
	subs r0, #2	@ 001194e2 0238
.org 0x1194e4
	ands r1, r0	@ 001194e4 0140
.org 0x1194e6
	subs r0, #4	@ 001194e6 0438
.org 0x1194e8
	b.n 0x119526	@ 001194e8 1de0
.org 0x1194ea
	.byte 0x00	@ 001194ea data
.org 0x1194eb
	.byte 0x00	@ 001194eb data
.org 0x1194ec
	.byte 0xfd,0xff,0x00,0x00	@ 001194ec data
.org 0x1194f0
	cmp r0, #1	@ 001194f0 0128
.org 0x1194f2
	bne.n 0x119504	@ 001194f2 07d1
.org 0x1194f4
	ldr r0, [pc, #8]	@ 001194f4 0248
.org 0x1194f6
	ands r1, r0	@ 001194f6 0140
.org 0x1194f8
	subs r0, #3	@ 001194f8 0338
.org 0x1194fa
	ands r1, r0	@ 001194fa 0140
.org 0x1194fc
	subs r0, #4	@ 001194fc 0438
.org 0x1194fe
	b.n 0x119526	@ 001194fe 12e0
.org 0x119500
	.byte 0xfe,0xff,0x00,0x00	@ 00119500 data
.org 0x119504
	cmp r0, #2	@ 00119504 0228
.org 0x119506
	bne.n 0x119518	@ 00119506 07d1
.org 0x119508
	ldr r0, [pc, #8]	@ 00119508 0248
.org 0x11950a
	ands r1, r0	@ 0011950a 0140
.org 0x11950c
	subs r0, #1	@ 0011950c 0138
.org 0x11950e
	ands r1, r0	@ 0011950e 0140
.org 0x119510
	subs r0, #6	@ 00119510 0638
.org 0x119512
	b.n 0x119526	@ 00119512 08e0
.org 0x119514
	.byte 0xfe,0xff,0x00,0x00	@ 00119514 data
.org 0x119518
	cmp r0, #3	@ 00119518 0328
.org 0x11951a
	bne.n 0x11952a	@ 0011951a 06d1
.org 0x11951c
	ldr r0, [pc, #28]	@ 0011951c 0748
.org 0x11951e
	ands r1, r0	@ 0011951e 0140
.org 0x119520
	subs r0, #1	@ 00119520 0138
.org 0x119522
	ands r1, r0	@ 00119522 0140
.org 0x119524
	subs r0, #2	@ 00119524 0238
.org 0x119526
	ands r1, r0	@ 00119526 0140
.org 0x119528
	strh r1, [r5, #20]	@ 00119528 a982
.org 0x11952a
	ldr r0, [pc, #20]	@ 0011952a 0548
.org 0x11952c
	add r0, r8	@ 0011952c 4044
.org 0x11952e
	movs r1, #1	@ 0011952e 0121
.org 0x119530
	ldrb r0, [r0, #1]	@ 00119530 4078
.org 0x119532
	lsls r1, r0	@ 00119532 8140
.org 0x119534
	ldrh r0, [r5, #20]	@ 00119534 a88a
.org 0x119536
	orrs r1, r0	@ 00119536 0143
.org 0x119538
	strh r1, [r5, #20]	@ 00119538 a982
.org 0x11953a
	b.n 0x11956c	@ 0011953a 17e0
.org 0x11953c
	.byte 0xfe,0xff,0x00,0x00	@ 0011953c data
.org 0x119540
	.byte 0xcc,0x0d,0x00,0x00	@ 00119540 data
.org 0x119544
	movs r0, #4	@ 00119544 0420
.org 0x119546
	bl 0x2b10	@ 00119546 e9f6e3fa
.org 0x11954a
	b.n 0x11956c	@ 0011954a 0fe0
.org 0x11954c
	movs r0, #2	@ 0011954c 0220
.org 0x11954e
	ands r0, r1	@ 0011954e 0840
.org 0x119550
	adds r5, #180	@ 00119550 b435
.org 0x119552
	cmp r0, #0	@ 00119552 0028
.org 0x119554
	beq.n 0x11956c	@ 00119554 0ad0
.org 0x119556
	movs r0, #3	@ 00119556 0320
.org 0x119558
	bl 0x2b10	@ 00119558 e9f6dafa
.org 0x11955c
	ldr r0, [r6, #32]	@ 0011955c 306a
.org 0x11955e
	str r4, [r0, #116]	@ 0011955e 4467
.org 0x119560
	str r4, [r0, #120]	@ 00119560 8467
.org 0x119562
	mov r0, r8	@ 00119562 4046
.org 0x119564
	strb r4, [r0, #3]	@ 00119564 c470
.org 0x119566
	ldr r0, [pc, #52]	@ 00119566 0d48
.org 0x119568
	add r0, r8	@ 00119568 4044
.org 0x11956a
	strb r4, [r0, #0]	@ 0011956a 0470
.org 0x11956c
	ldrh r1, [r5, #22]	@ 0011956c e98a
.org 0x11956e
	ldr r0, [pc, #48]	@ 0011956e 0c48
.org 0x119570
	add r0, r8	@ 00119570 4044
.org 0x119572
	ldrb r2, [r0, #1]	@ 00119572 4278
.org 0x119574
	movs r0, #1	@ 00119574 0120
.org 0x119576
	lsls r0, r2	@ 00119576 9040

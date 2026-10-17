@ FUN_080aa42c  entry 0x080aa42c  size 360
.thumb
.org 0xaa42c
FUN_080aa42c:
	push {r4, r5, r6, lr}	@ 000aa42c 70b5
.org 0xaa42e
	sub sp, #8	@ 000aa42e 82b0
.org 0xaa430
	adds r6, r0, #0	@ 000aa430 061c
.org 0xaa432
	adds r0, #180	@ 000aa432 b430
.org 0xaa434
	movs r1, #0	@ 000aa434 0021
.org 0xaa436
	strb r1, [r0, #0]	@ 000aa436 0170
.org 0xaa438
	adds r0, #1	@ 000aa438 0130
.org 0xaa43a
	ldrb r0, [r0, #0]	@ 000aa43a 0078
.org 0xaa43c
	cmp r0, #0	@ 000aa43c 0028
.org 0xaa43e
	bne.n 0xaa530	@ 000aa43e 77d1
.org 0xaa440
	adds r0, r6, #0	@ 000aa440 301c
.org 0xaa442
	adds r0, #140	@ 000aa442 8c30
.org 0xaa444
	ldr r0, [r0, #0]	@ 000aa444 0068
.org 0xaa446
	movs r1, #128	@ 000aa446 8021
.org 0xaa448
	lsls r1, r1, #9	@ 000aa448 4902
.org 0xaa44a
	ands r0, r1	@ 000aa44a 0840
.org 0xaa44c
	cmp r0, #0	@ 000aa44c 0028
.org 0xaa44e
	beq.n 0xaa4b6	@ 000aa44e 32d0
.org 0xaa450
	ldr r1, [r6, #84]	@ 000aa450 716d
.org 0xaa452
	str r1, [sp, #0]	@ 000aa452 0091
.org 0xaa454
	ldr r0, [r6, #88]	@ 000aa454 b06d
.org 0xaa456
	ldr r2, [pc, #36]	@ 000aa456 094a
.org 0xaa458
	adds r0, r0, r2	@ 000aa458 8018
.org 0xaa45a
	str r0, [sp, #4]	@ 000aa45a 0190
.org 0xaa45c
	ldr r0, [pc, #32]	@ 000aa45c 0848
.org 0xaa45e
	ldr r0, [r0, #0]	@ 000aa45e 0068
.org 0xaa460
	ldr r0, [r0, #84]	@ 000aa460 406d
.org 0xaa462
	subs r0, r0, r1	@ 000aa462 401a
.org 0xaa464
	asrs r0, r0, #8	@ 000aa464 0012
.org 0xaa466
	cmp r0, #0	@ 000aa466 0028
.org 0xaa468
	ble.n 0xaa484	@ 000aa468 0cdd
.org 0xaa46a
	movs r2, #128	@ 000aa46a 8022
.org 0xaa46c
	lsls r2, r2, #2	@ 000aa46c 9200
.org 0xaa46e
	movs r0, #0	@ 000aa46e 0020
.org 0xaa470
	mov r1, sp	@ 000aa470 6946
.org 0xaa472
	movs r3, #1	@ 000aa472 0123
.org 0xaa474
	bl 0xd0dc4	@ 000aa474 26f0a6fc
.org 0xaa478
	b.n 0xaa492	@ 000aa478 0be0
.org 0xaa47a
	.byte 0x00	@ 000aa47a data
.org 0xaa47b
	.byte 0x00	@ 000aa47b data
.org 0xaa47c
	.byte 0x00,0xf2,0xff,0xff	@ 000aa47c data
.org 0xaa480
	.byte 0xf0,0xdb,0x02,0x02	@ 000aa480 data
.org 0xaa484
	movs r2, #128	@ 000aa484 8022
.org 0xaa486
	lsls r2, r2, #2	@ 000aa486 9200
.org 0xaa488
	movs r0, #0	@ 000aa488 0020
.org 0xaa48a
	mov r1, sp	@ 000aa48a 6946
.org 0xaa48c
	movs r3, #0	@ 000aa48c 0023
.org 0xaa48e
	bl 0xd0dc4	@ 000aa48e 26f099fc
.org 0xaa492
	adds r4, r6, #0	@ 000aa492 341c
.org 0xaa494
	adds r4, #84	@ 000aa494 5434
.org 0xaa496
	ldrb r2, [r6, #10]	@ 000aa496 b27a
.org 0xaa498
	lsrs r2, r2, #4	@ 000aa498 1209
.org 0xaa49a
	movs r5, #1	@ 000aa49a 0125
.org 0xaa49c
	ands r2, r5	@ 000aa49c 2a40
.org 0xaa49e
	adds r0, r4, #0	@ 000aa49e 201c
.org 0xaa4a0
	movs r1, #0	@ 000aa4a0 0021
.org 0xaa4a2
	bl 0xe2914	@ 000aa4a2 38f037fa
.org 0xaa4a6
	ldrb r2, [r6, #10]	@ 000aa4a6 b27a
.org 0xaa4a8
	lsrs r2, r2, #4	@ 000aa4a8 1209
.org 0xaa4aa
	ands r2, r5	@ 000aa4aa 2a40
.org 0xaa4ac
	adds r0, r4, #0	@ 000aa4ac 201c
.org 0xaa4ae
	movs r1, #1	@ 000aa4ae 0121
.org 0xaa4b0
	bl 0xe2914	@ 000aa4b0 38f030fa
.org 0xaa4b4
	b.n 0xaa544	@ 000aa4b4 46e0
.org 0xaa4b6
	ldr r0, [r6, #84]	@ 000aa4b6 706d
.org 0xaa4b8
	movs r1, #128	@ 000aa4b8 8021
.org 0xaa4ba
	lsls r1, r1, #4	@ 000aa4ba 0901
.org 0xaa4bc
	adds r0, r0, r1	@ 000aa4bc 4018
.org 0xaa4be
	str r0, [sp, #0]	@ 000aa4be 0090
.org 0xaa4c0
	ldr r0, [r6, #88]	@ 000aa4c0 b06d
.org 0xaa4c2
	ldr r4, [pc, #96]	@ 000aa4c2 184c
.org 0xaa4c4
	adds r0, r0, r4	@ 000aa4c4 0019
.org 0xaa4c6
	str r0, [sp, #4]	@ 000aa4c6 0190
.org 0xaa4c8
	movs r0, #1	@ 000aa4c8 0120
.org 0xaa4ca
	mov r1, sp	@ 000aa4ca 6946
.org 0xaa4cc
	bl 0xd0c88	@ 000aa4cc 26f0dcfb
.org 0xaa4d0
	ldr r0, [r6, #84]	@ 000aa4d0 706d
.org 0xaa4d2
	adds r0, r0, r4	@ 000aa4d2 0019
.org 0xaa4d4
	str r0, [sp, #0]	@ 000aa4d4 0090
.org 0xaa4d6
	ldr r0, [r6, #88]	@ 000aa4d6 b06d
.org 0xaa4d8
	ldr r2, [pc, #76]	@ 000aa4d8 134a
.org 0xaa4da
	adds r0, r0, r2	@ 000aa4da 8018
.org 0xaa4dc
	str r0, [sp, #4]	@ 000aa4dc 0190
.org 0xaa4de
	movs r0, #1	@ 000aa4de 0120
.org 0xaa4e0
	mov r1, sp	@ 000aa4e0 6946
.org 0xaa4e2
	bl 0xd0c88	@ 000aa4e2 26f0d1fb
.org 0xaa4e6
	movs r0, #179	@ 000aa4e6 b320
.org 0xaa4e8
	lsls r0, r0, #1	@ 000aa4e8 4000
.org 0xaa4ea
	bl 0x2b10	@ 000aa4ea 58f711fb
.org 0xaa4ee
	adds r5, r6, #0	@ 000aa4ee 351c
.org 0xaa4f0
	adds r5, #84	@ 000aa4f0 5435
.org 0xaa4f2
	movs r1, #129	@ 000aa4f2 8121
.org 0xaa4f4
	lsls r1, r1, #1	@ 000aa4f4 4900
.org 0xaa4f6
	ldrb r2, [r6, #10]	@ 000aa4f6 b27a
.org 0xaa4f8
	lsrs r2, r2, #4	@ 000aa4f8 1209
.org 0xaa4fa
	movs r4, #1	@ 000aa4fa 0124
.org 0xaa4fc
	ands r2, r4	@ 000aa4fc 2240
.org 0xaa4fe
	adds r0, r5, #0	@ 000aa4fe 281c
.org 0xaa500
	bl 0xe2914	@ 000aa500 38f008fa
.org 0xaa504
	ldr r1, [pc, #36]	@ 000aa504 0949
.org 0xaa506
	ldrb r2, [r6, #10]	@ 000aa506 b27a
.org 0xaa508
	lsrs r2, r2, #4	@ 000aa508 1209
.org 0xaa50a
	ands r2, r4	@ 000aa50a 2240
.org 0xaa50c
	adds r0, r5, #0	@ 000aa50c 281c
.org 0xaa50e
	bl 0xe2914	@ 000aa50e 38f001fa
.org 0xaa512
	movs r1, #130	@ 000aa512 8221
.org 0xaa514
	lsls r1, r1, #1	@ 000aa514 4900
.org 0xaa516
	ldrb r2, [r6, #10]	@ 000aa516 b27a
.org 0xaa518
	lsrs r2, r2, #4	@ 000aa518 1209
.org 0xaa51a
	ands r2, r4	@ 000aa51a 2240
.org 0xaa51c
	adds r0, r5, #0	@ 000aa51c 281c
.org 0xaa51e
	bl 0xe2914	@ 000aa51e 38f0f9f9
.org 0xaa522
	b.n 0xaa546	@ 000aa522 10e0
.org 0xaa524
	.byte 0x00,0xf2,0xff,0xff	@ 000aa524 data
.org 0xaa528
	.byte 0x00,0xef,0xff,0xff	@ 000aa528 data
.org 0xaa52c
	.byte 0x03,0x01,0x00,0x00	@ 000aa52c data
.org 0xaa530
	adds r4, r6, #0	@ 000aa530 341c
.org 0xaa532
	adds r4, #84	@ 000aa532 5434
.org 0xaa534
	ldr r1, [pc, #116]	@ 000aa534 1d49
.org 0xaa536
	ldrb r2, [r6, #10]	@ 000aa536 b27a
.org 0xaa538
	lsrs r2, r2, #4	@ 000aa538 1209
.org 0xaa53a
	movs r0, #1	@ 000aa53a 0120
.org 0xaa53c
	ands r2, r0	@ 000aa53c 0240
.org 0xaa53e
	adds r0, r4, #0	@ 000aa53e 201c
.org 0xaa540
	bl 0xe2914	@ 000aa540 38f0e8f9
.org 0xaa544
	adds r5, r4, #0	@ 000aa544 251c
.org 0xaa546
	ldr r0, [r6, #44]	@ 000aa546 f06a
.org 0xaa548
	cmp r0, #0	@ 000aa548 0028
.org 0xaa54a
	beq.n 0xaa570	@ 000aa54a 11d0
.org 0xaa54c
	ldr r1, [pc, #96]	@ 000aa54c 1849
.org 0xaa54e
	ldrb r2, [r6, #10]	@ 000aa54e b27a
.org 0xaa550
	lsrs r2, r2, #4	@ 000aa550 1209
.org 0xaa552
	movs r4, #1	@ 000aa552 0124
.org 0xaa554
	ands r2, r4	@ 000aa554 2240
.org 0xaa556
	adds r0, r5, #0	@ 000aa556 281c
.org 0xaa558
	bl 0xe2914	@ 000aa558 38f0dcf9
.org 0xaa55c
	movs r1, #131	@ 000aa55c 8321
.org 0xaa55e
	lsls r1, r1, #1	@ 000aa55e 4900
.org 0xaa560
	ldrb r2, [r6, #10]	@ 000aa560 b27a
.org 0xaa562
	lsrs r2, r2, #4	@ 000aa562 1209
.org 0xaa564
	ands r2, r4	@ 000aa564 2240
.org 0xaa566
	adds r0, r5, #0	@ 000aa566 281c
.org 0xaa568
	bl 0xe2914	@ 000aa568 38f0d4f9
.org 0xaa56c
	movs r0, #0	@ 000aa56c 0020
.org 0xaa56e
	str r0, [r6, #44]	@ 000aa56e f062
.org 0xaa570
	ldr r2, [pc, #64]	@ 000aa570 104a
.org 0xaa572
	ldrh r1, [r2, #12]	@ 000aa572 9189
.org 0xaa574
	ldr r0, [pc, #64]	@ 000aa574 1048
.org 0xaa576
	cmp r1, r0	@ 000aa576 8142
.org 0xaa578
	bhi.n 0xaa57e	@ 000aa578 01d8
.org 0xaa57a
	adds r0, r1, #1	@ 000aa57a 481c
.org 0xaa57c
	strh r0, [r2, #12]	@ 000aa57c 9081
.org 0xaa57e
	adds r0, r6, #0	@ 000aa57e 301c
.org 0xaa580
	adds r1, r5, #0	@ 000aa580 291c
.org 0xaa582
	bl 0x2abe0	@ 000aa582 80f72dfb
.org 0xaa586
	movs r0, #4	@ 000aa586 0420
.org 0xaa588
	movs r1, #16	@ 000aa588 1021
.org 0xaa58a
	adds r2, r5, #0	@ 000aa58a 2a1c
.org 0xaa58c
	bl 0x2ab88	@ 000aa58c 80f7fcfa
.org 0xaa590
	ldr r1, [pc, #40]	@ 000aa590 0a49
.org 0xaa592
	ldrb r0, [r6, #9]	@ 000aa592 707a

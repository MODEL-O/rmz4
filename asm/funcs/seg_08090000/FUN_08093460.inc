@ FUN_08093460  entry 0x08093460  size 378
.thumb
.org 0x93460
FUN_08093460:
	push {r4, r5, r6, r7, lr}	@ 00093460 f0b5
.org 0x93462
	mov r7, sl	@ 00093462 5746
.org 0x93464
	mov r6, r9	@ 00093464 4e46
.org 0x93466
	mov r5, r8	@ 00093466 4546
.org 0x93468
	push {r5, r6, r7}	@ 00093468 e0b4
.org 0x9346a
	sub sp, #8	@ 0009346a 82b0
.org 0x9346c
	adds r5, r0, #0	@ 0009346c 051c
.org 0x9346e
	ldrb r0, [r5, #10]	@ 0009346e a87a
.org 0x93470
	lsrs r0, r0, #4	@ 00093470 0009
.org 0x93472
	str r0, [sp, #0]	@ 00093472 0090
.org 0x93474
	movs r0, #1	@ 00093474 0120
.org 0x93476
	ldr r1, [sp, #0]	@ 00093476 0099
.org 0x93478
	ands r1, r0	@ 00093478 0140
.org 0x9347a
	str r1, [sp, #0]	@ 0009347a 0091
.org 0x9347c
	movs r0, #0	@ 0009347c 0020
.org 0x9347e
	str r0, [sp, #4]	@ 0009347e 0190
.org 0x93480
	ldrb r0, [r5, #15]	@ 00093480 e87b
.org 0x93482
	cmp r0, #0	@ 00093482 0028
.org 0x93484
	bne.n 0x934aa	@ 00093484 11d1
.org 0x93486
	adds r0, r5, #0	@ 00093486 281c
.org 0x93488
	adds r0, #116	@ 00093488 7430
.org 0x9348a
	ldr r1, [pc, #276]	@ 0009348a 4549
.org 0x9348c
	bl 0x5784	@ 0009348c 72f77af9
.org 0x93490
	ldr r1, [pc, #272]	@ 00093490 4449
.org 0x93492
	adds r0, r5, #0	@ 00093492 281c
.org 0x93494
	bl 0x1cf00	@ 00093494 89f734fd
.org 0x93498
	ldr r1, [sp, #0]	@ 00093498 0099
.org 0x9349a
	lsls r0, r1, #1	@ 0009349a 4800
.org 0x9349c
	subs r0, #1	@ 0009349c 0138
.org 0x9349e
	str r0, [r5, #100]	@ 0009349e 6866
.org 0x934a0
	lsls r0, r0, #9	@ 000934a0 4002
.org 0x934a2
	str r0, [r5, #92]	@ 000934a2 e865
.org 0x934a4
	ldrb r0, [r5, #15]	@ 000934a4 e87b
.org 0x934a6
	adds r0, #1	@ 000934a6 0130
.org 0x934a8
	strb r0, [r5, #15]	@ 000934a8 e873
.org 0x934aa
	adds r0, r5, #0	@ 000934aa 281c
.org 0x934ac
	bl 0x1cff0	@ 000934ac 89f7a0fd
.org 0x934b0
	adds r0, r5, #0	@ 000934b0 281c
.org 0x934b2
	bl 0x94a38	@ 000934b2 01f0c1fa
.org 0x934b6
	ldr r3, [r5, #84]	@ 000934b6 6b6d
.org 0x934b8
	ldr r0, [r5, #92]	@ 000934b8 e86d
.org 0x934ba
	adds r0, r0, r3	@ 000934ba c018
.org 0x934bc
	mov r9, r0	@ 000934bc 8146
.org 0x934be
	adds r0, r5, #0	@ 000934be 281c
.org 0x934c0
	adds r0, #180	@ 000934c0 b430
.org 0x934c2
	ldr r2, [r0, #0]	@ 000934c2 0268
.org 0x934c4
	mov r1, r9	@ 000934c4 4946
.org 0x934c6
	subs r0, r2, r1	@ 000934c6 501a
.org 0x934c8
	movs r1, #128	@ 000934c8 8021
.org 0x934ca
	lsls r1, r1, #7	@ 000934ca c901
.org 0x934cc
	adds r0, r0, r1	@ 000934cc 4018
.org 0x934ce
	movs r1, #128	@ 000934ce 8021
.org 0x934d0
	lsls r1, r1, #8	@ 000934d0 0902
.org 0x934d2
	cmp r0, r1	@ 000934d2 8842
.org 0x934d4
	bls.n 0x934e8	@ 000934d4 08d9
.org 0x934d6
	movs r0, #0	@ 000934d6 0020
.org 0x934d8
	cmp r3, r2	@ 000934d8 9342
.org 0x934da
	ble.n 0x934de	@ 000934da 00dd
.org 0x934dc
	movs r0, #1	@ 000934dc 0120
.org 0x934de
	ldr r1, [sp, #0]	@ 000934de 0099
.org 0x934e0
	cmp r1, r0	@ 000934e0 8142
.org 0x934e2
	bne.n 0x934e8	@ 000934e2 01d1
.org 0x934e4
	movs r0, #1	@ 000934e4 0120
.org 0x934e6
	str r0, [sp, #4]	@ 000934e6 0190
.org 0x934e8
	ldr r1, [r5, #100]	@ 000934e8 696e
.org 0x934ea
	lsls r0, r1, #3	@ 000934ea c800
.org 0x934ec
	subs r0, r0, r1	@ 000934ec 401a
.org 0x934ee
	lsls r0, r0, #8	@ 000934ee 0002
.org 0x934f0
	add r0, r9	@ 000934f0 4844
.org 0x934f2
	mov r8, r0	@ 000934f2 8046
.org 0x934f4
	mov r6, r8	@ 000934f4 4646
.org 0x934f6
	ldr r0, [r5, #88]	@ 000934f6 a86d
.org 0x934f8
	ldr r1, [pc, #172]	@ 000934f8 2b49
.org 0x934fa
	adds r4, r0, r1	@ 000934fa 4418
.org 0x934fc
	adds r7, r4, #0	@ 000934fc 271c
.org 0x934fe
	mov r0, r8	@ 000934fe 4046
.org 0x93500
	adds r1, r4, #0	@ 00093500 211c
.org 0x93502
	bl 0x7c7c	@ 00093502 74f7bbfb
.org 0x93506
	lsls r0, r0, #16	@ 00093506 0004
.org 0x93508
	cmp r0, #0	@ 00093508 0028
.org 0x9350a
	beq.n 0x9351c	@ 0009350a 07d0
.org 0x9350c
	mov r0, r8	@ 0009350c 4046
.org 0x9350e
	adds r1, r4, #0	@ 0009350e 211c
.org 0x93510
	bl 0x7c7c	@ 00093510 74f7b4fb
.org 0x93514
	movs r1, #15	@ 00093514 0f21
.org 0x93516
	ands r1, r0	@ 00093516 0140
.org 0x93518
	cmp r1, #15	@ 00093518 0f29
.org 0x9351a
	bne.n 0x9358a	@ 0009351a 36d1
.org 0x9351c
	ldr r0, [pc, #140]	@ 0009351c 2348
.org 0x9351e
	ands r4, r0	@ 0009351e 0440
.org 0x93520
	ldr r0, [pc, #140]	@ 00093520 2348
.org 0x93522
	adds r4, r4, r0	@ 00093522 2418
.org 0x93524
	adds r7, r4, #0	@ 00093524 271c
.org 0x93526
	mov r0, r8	@ 00093526 4046
.org 0x93528
	adds r1, r4, #0	@ 00093528 211c
.org 0x9352a
	bl 0x7020	@ 0009352a 73f779fd
.org 0x9352e
	lsls r0, r0, #16	@ 0009352e 0004
.org 0x93530
	lsrs r0, r0, #16	@ 00093530 000c
.org 0x93532
	movs r1, #15	@ 00093532 0f21
.org 0x93534
	mov sl, r1	@ 00093534 8a46
.org 0x93536
	ands r0, r1	@ 00093536 0840
.org 0x93538
	subs r0, #2	@ 00093538 0238
.org 0x9353a
	lsls r0, r0, #16	@ 0009353a 0004
.org 0x9353c
	lsrs r0, r0, #16	@ 0009353c 000c
.org 0x9353e
	cmp r0, #11	@ 0009353e 0b28
.org 0x93540
	bls.n 0x9358a	@ 00093540 23d9
.org 0x93542
	ldr r0, [pc, #112]	@ 00093542 1c48
.org 0x93544
	adds r0, r0, r6	@ 00093544 8019
.org 0x93546
	mov r8, r0	@ 00093546 8046
.org 0x93548
	adds r1, r4, #0	@ 00093548 211c
.org 0x9354a
	bl 0x7c7c	@ 0009354a 74f797fb
.org 0x9354e
	lsls r0, r0, #16	@ 0009354e 0004
.org 0x93550
	cmp r0, #0	@ 00093550 0028
.org 0x93552
	beq.n 0x93586	@ 00093552 18d0
.org 0x93554
	mov r0, r8	@ 00093554 4046
.org 0x93556
	adds r1, r4, #0	@ 00093556 211c
.org 0x93558
	bl 0x7c7c	@ 00093558 74f790fb
.org 0x9355c
	mov r1, sl	@ 0009355c 5146
.org 0x9355e
	ands r1, r0	@ 0009355e 0140
.org 0x93560
	cmp r1, #15	@ 00093560 0f29
.org 0x93562
	beq.n 0x93586	@ 00093562 10d0
.org 0x93564
	ldr r1, [pc, #80]	@ 00093564 1449
.org 0x93566
	adds r6, r6, r1	@ 00093566 7618
.org 0x93568
	adds r0, r6, #0	@ 00093568 301c
.org 0x9356a
	adds r1, r4, #0	@ 0009356a 211c
.org 0x9356c
	bl 0x7c7c	@ 0009356c 74f786fb
.org 0x93570
	lsls r0, r0, #16	@ 00093570 0004
.org 0x93572
	cmp r0, #0	@ 00093572 0028
.org 0x93574
	beq.n 0x93586	@ 00093574 07d0
.org 0x93576
	adds r0, r6, #0	@ 00093576 301c
.org 0x93578
	adds r1, r4, #0	@ 00093578 211c
.org 0x9357a
	bl 0x7c7c	@ 0009357a 74f77ffb
.org 0x9357e
	mov r1, sl	@ 0009357e 5146
.org 0x93580
	ands r1, r0	@ 00093580 0140
.org 0x93582
	cmp r1, #15	@ 00093582 0f29
.org 0x93584
	bne.n 0x9358a	@ 00093584 01d1
.org 0x93586
	movs r0, #1	@ 00093586 0120
.org 0x93588
	str r0, [sp, #4]	@ 00093588 0190
.org 0x9358a
	ldr r1, [sp, #0]	@ 0009358a 0099
.org 0x9358c
	cmp r1, #0	@ 0009358c 0029
.org 0x9358e
	bne.n 0x935bc	@ 0009358e 15d1
.org 0x93590
	adds r0, r5, #0	@ 00093590 281c
.org 0x93592
	mov r1, r9	@ 00093592 4946
.org 0x93594
	bl 0x9482c	@ 00093594 01f04af9
.org 0x93598
	cmp r0, #0	@ 00093598 0028
.org 0x9359a
	beq.n 0x935cc	@ 0009359a 17d0
.org 0x9359c
	b.n 0x935d2	@ 0009359c 19e0
.org 0x9359e
	.byte 0x00	@ 0009359e data
.org 0x9359f
	.byte 0x00	@ 0009359f data
.org 0x935a0
	.byte 0x94,0x05,0x86,0x08	@ 000935a0 data
.org 0x935a4
	.byte 0x03,0x40,0x00,0x00	@ 000935a4 data
.org 0x935a8
	.byte 0xff,0x07,0x00,0x00	@ 000935a8 data
.org 0x935ac
	.byte 0x00,0xf0,0xff,0xff	@ 000935ac data
.org 0x935b0
	.byte 0xff,0x0f,0x00,0x00	@ 000935b0 data
.org 0x935b4
	.byte 0x01,0xfc,0xff,0xff	@ 000935b4 data
.org 0x935b8
	.byte 0xff,0x03,0x00,0x00	@ 000935b8 data
.org 0x935bc
	adds r0, r5, #0	@ 000935bc 281c
.org 0x935be
	mov r1, r9	@ 000935be 4946
.org 0x935c0
	bl 0x94934	@ 000935c0 01f0b8f9
.org 0x935c4
	cmp r0, #0	@ 000935c4 0028
.org 0x935c6
	beq.n 0x935cc	@ 000935c6 01d0
.org 0x935c8
	movs r0, #1	@ 000935c8 0120
.org 0x935ca
	str r0, [sp, #4]	@ 000935ca 0190
.org 0x935cc
	ldr r1, [sp, #4]	@ 000935cc 0199
.org 0x935ce
	cmp r1, #0	@ 000935ce 0029
.org 0x935d0
	beq.n 0x935de	@ 000935d0 05d0
.org 0x935d2
	movs r1, #0	@ 000935d2 0021
.org 0x935d4
	movs r0, #2	@ 000935d4 0220
.org 0x935d6
	strb r0, [r5, #13]	@ 000935d6 6873
.org 0x935d8
	strb r1, [r5, #14]	@ 000935d8 a973

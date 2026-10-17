@ FUN_080233d8  entry 0x080233d8  size 1002
.thumb
.org 0x233d8
FUN_080233d8:
	push {r4, r5, r6, r7, lr}	@ 000233d8 f0b5
.org 0x233da
	mov r7, sl	@ 000233da 5746
.org 0x233dc
	mov r6, r9	@ 000233dc 4e46
.org 0x233de
	mov r5, r8	@ 000233de 4546
.org 0x233e0
	push {r5, r6, r7}	@ 000233e0 e0b4
.org 0x233e2
	adds r6, r0, #0	@ 000233e2 061c
.org 0x233e4
	ldr r2, [r6, #32]	@ 000233e4 326a
.org 0x233e6
	movs r0, #190	@ 000233e6 be20
.org 0x233e8
	lsls r0, r0, #1	@ 000233e8 4000
.org 0x233ea
	adds r7, r6, r0	@ 000233ea 3718
.org 0x233ec
	ldrb r1, [r7, #0]	@ 000233ec 3978
.org 0x233ee
	mov r8, r1	@ 000233ee 8846
.org 0x233f0
	cmp r1, #0	@ 000233f0 0029
.org 0x233f2
	beq.n 0x233f6	@ 000233f2 00d0
.org 0x233f4
	b.n 0x23554	@ 000233f4 aee0
.org 0x233f6
	ldr r5, [pc, #88]	@ 000233f6 164d
.org 0x233f8
	ldrh r0, [r5, #8]	@ 000233f8 2889
.org 0x233fa
	movs r2, #1	@ 000233fa 0122
.org 0x233fc
	mov sl, r2	@ 000233fc 9246
.org 0x233fe
	movs r3, #0	@ 000233fe 0023
.org 0x23400
	mov r1, sl	@ 00023400 5146
.org 0x23402
	orrs r0, r1	@ 00023402 0843
.org 0x23404
	strh r0, [r5, #8]	@ 00023404 2881
.org 0x23406
	ldr r2, [pc, #76]	@ 00023406 134a
.org 0x23408
	ldrb r1, [r2, #4]	@ 00023408 1179
.org 0x2340a
	movs r0, #8	@ 0002340a 0820
.org 0x2340c
	orrs r0, r1	@ 0002340c 0843
.org 0x2340e
	strb r0, [r2, #4]	@ 0002340e 1071
.org 0x23410
	ldr r2, [pc, #68]	@ 00023410 114a
.org 0x23412
	adds r0, r6, r2	@ 00023412 b018
.org 0x23414
	strb r3, [r0, #0]	@ 00023414 0370
.org 0x23416
	ldr r0, [pc, #68]	@ 00023416 1148
.org 0x23418
	ldr r2, [pc, #68]	@ 00023418 114a
.org 0x2341a
	adds r1, r0, r2	@ 0002341a 8118
.org 0x2341c
	strb r3, [r1, #0]	@ 0002341c 0b70
.org 0x2341e
	ldr r1, [pc, #68]	@ 0002341e 1149
.org 0x23420
	adds r0, r0, r1	@ 00023420 4018
.org 0x23422
	movs r2, #12	@ 00023422 0c22
.org 0x23424
	mov r9, r2	@ 00023424 9146
.org 0x23426
	mov r1, r9	@ 00023426 4946
.org 0x23428
	strb r1, [r0, #0]	@ 00023428 0170
.org 0x2342a
	ldrb r4, [r5, #2]	@ 0002342a ac78
.org 0x2342c
	cmp r4, #0	@ 0002342c 002c
.org 0x2342e
	bne.n 0x2346c	@ 0002342e 1dd1
.org 0x23430
	adds r0, r5, #0	@ 00023430 281c
.org 0x23432
	adds r0, #16	@ 00023432 1030
.org 0x23434
	ldr r1, [pc, #48]	@ 00023434 0c49
.org 0x23436
	ldr r1, [r1, #32]	@ 00023436 096a
.org 0x23438
	ldr r1, [r1, #0]	@ 00023438 0968
.org 0x2343a
	bl 0x275f0	@ 0002343a 04f0d9f8
.org 0x2343e
	movs r0, #1	@ 0002343e 0120
.org 0x23440
	bl 0x1f63c	@ 00023440 fcf7fcf8
.org 0x23444
	mov r2, r8	@ 00023444 4246
.org 0x23446
	strh r2, [r5, #10]	@ 00023446 6a81
.org 0x23448
	mov r0, sl	@ 00023448 5046
.org 0x2344a
	strb r0, [r7, #0]	@ 0002344a 3870
.org 0x2344c
	b.n 0x23882	@ 0002344c 19e2
.org 0x2344e
	.byte 0x00	@ 0002344e data
.org 0x2344f
	.byte 0x00	@ 0002344f data
.org 0x23450
	.byte 0x10,0xe9,0x02,0x02	@ 00023450 data
.org 0x23454
	.byte 0xb0,0xe8,0x02,0x02	@ 00023454 data
.org 0x23458
	.byte 0x7d,0x01,0x00,0x00	@ 00023458 data
.org 0x2345c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002345c data
.org 0x23460
	.byte 0x40,0xd0,0x02,0x00	@ 00023460 data
.org 0x23464
	.byte 0x41,0xd0,0x02,0x00	@ 00023464 data
.org 0x23468
	.byte 0xf8,0x2c,0x84,0x08	@ 00023468 data
.org 0x2346c
	cmp r4, #1	@ 0002346c 012c
.org 0x2346e
	bne.n 0x23484	@ 0002346e 09d1
.org 0x23470
	adds r0, r5, #0	@ 00023470 281c
.org 0x23472
	adds r0, #16	@ 00023472 1030
.org 0x23474
	ldr r1, [pc, #8]	@ 00023474 0249
.org 0x23476
	ldr r1, [r1, #32]	@ 00023476 096a
.org 0x23478
	ldr r1, [r1, #4]	@ 00023478 4968
.org 0x2347a
	bl 0x275f0	@ 0002347a 04f0b9f8
.org 0x2347e
	b.n 0x2355a	@ 0002347e 6ce0
.org 0x23480
	.byte 0xf8,0x2c,0x84,0x08	@ 00023480 data
.org 0x23484
	cmp r4, #2	@ 00023484 022c
.org 0x23486
	bne.n 0x234a0	@ 00023486 0bd1
.org 0x23488
	adds r0, r5, #0	@ 00023488 281c
.org 0x2348a
	adds r0, #16	@ 0002348a 1030
.org 0x2348c
	ldr r1, [pc, #12]	@ 0002348c 0349
.org 0x2348e
	ldr r1, [r1, #32]	@ 0002348e 096a
.org 0x23490
	ldr r1, [r1, #8]	@ 00023490 8968
.org 0x23492
	bl 0x275f0	@ 00023492 04f0adf8
.org 0x23496
	strb r4, [r7, #0]	@ 00023496 3c70
.org 0x23498
	b.n 0x23882	@ 00023498 f3e1
.org 0x2349a
	.byte 0x00	@ 0002349a data
.org 0x2349b
	.byte 0x00	@ 0002349b data
.org 0x2349c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002349c data
.org 0x234a0
	cmp r4, #3	@ 000234a0 032c
.org 0x234a2
	bne.n 0x234e0	@ 000234a2 1dd1
.org 0x234a4
	ldrh r0, [r5, #10]	@ 000234a4 6889
.org 0x234a6
	cmp r0, #0	@ 000234a6 0028
.org 0x234a8
	beq.n 0x234c0	@ 000234a8 0ad0
.org 0x234aa
	adds r0, r5, #0	@ 000234aa 281c
.org 0x234ac
	adds r0, #16	@ 000234ac 1030
.org 0x234ae
	ldr r1, [pc, #12]	@ 000234ae 0349
.org 0x234b0
	ldr r1, [r1, #32]	@ 000234b0 096a
.org 0x234b2
	ldr r1, [r1, #16]	@ 000234b2 0969
.org 0x234b4
	bl 0x275f0	@ 000234b4 04f09cf8
.org 0x234b8
	b.n 0x234ce	@ 000234b8 09e0
.org 0x234ba
	.byte 0x00	@ 000234ba data
.org 0x234bb
	.byte 0x00	@ 000234bb data
.org 0x234bc
	.byte 0xf8,0x2c,0x84,0x08	@ 000234bc data
.org 0x234c0
	adds r0, r5, #0	@ 000234c0 281c
.org 0x234c2
	adds r0, #16	@ 000234c2 1030
.org 0x234c4
	ldr r1, [pc, #20]	@ 000234c4 0549
.org 0x234c6
	ldr r1, [r1, #32]	@ 000234c6 096a
.org 0x234c8
	ldr r1, [r1, #64]	@ 000234c8 096c
.org 0x234ca
	bl 0x275f0	@ 000234ca 04f091f8
.org 0x234ce
	movs r2, #190	@ 000234ce be22
.org 0x234d0
	lsls r2, r2, #1	@ 000234d0 5200
.org 0x234d2
	adds r1, r6, r2	@ 000234d2 b118
.org 0x234d4
	movs r0, #4	@ 000234d4 0420
.org 0x234d6
	strb r0, [r1, #0]	@ 000234d6 0870
.org 0x234d8
	b.n 0x23882	@ 000234d8 d3e1
.org 0x234da
	.byte 0x00	@ 000234da data
.org 0x234db
	.byte 0x00	@ 000234db data
.org 0x234dc
	.byte 0xf8,0x2c,0x84,0x08	@ 000234dc data
.org 0x234e0
	cmp r4, #4	@ 000234e0 042c
.org 0x234e2
	bne.n 0x234fc	@ 000234e2 0bd1
.org 0x234e4
	adds r0, r5, #0	@ 000234e4 281c
.org 0x234e6
	adds r0, #16	@ 000234e6 1030
.org 0x234e8
	ldr r1, [pc, #12]	@ 000234e8 0349
.org 0x234ea
	ldr r1, [r1, #32]	@ 000234ea 096a
.org 0x234ec
	ldr r1, [r1, #24]	@ 000234ec 8969
.org 0x234ee
	bl 0x275f0	@ 000234ee 04f07ff8
.org 0x234f2
	movs r0, #5	@ 000234f2 0520
.org 0x234f4
	strb r0, [r7, #0]	@ 000234f4 3870
.org 0x234f6
	b.n 0x23882	@ 000234f6 c4e1
.org 0x234f8
	.byte 0xf8,0x2c,0x84,0x08	@ 000234f8 data
.org 0x234fc
	cmp r4, #5	@ 000234fc 052c
.org 0x234fe
	bne.n 0x23518	@ 000234fe 0bd1
.org 0x23500
	adds r0, r5, #0	@ 00023500 281c
.org 0x23502
	adds r0, #16	@ 00023502 1030
.org 0x23504
	ldr r1, [pc, #12]	@ 00023504 0349
.org 0x23506
	ldr r1, [r1, #32]	@ 00023506 096a
.org 0x23508
	ldr r1, [r1, #32]	@ 00023508 096a
.org 0x2350a
	bl 0x275f0	@ 0002350a 04f071f8
.org 0x2350e
	movs r0, #9	@ 0002350e 0920
.org 0x23510
	strb r0, [r7, #0]	@ 00023510 3870
.org 0x23512
	b.n 0x23882	@ 00023512 b6e1
.org 0x23514
	.byte 0xf8,0x2c,0x84,0x08	@ 00023514 data
.org 0x23518
	cmp r4, #6	@ 00023518 062c
.org 0x2351a
	bne.n 0x23534	@ 0002351a 0bd1
.org 0x2351c
	adds r0, r5, #0	@ 0002351c 281c
.org 0x2351e
	adds r0, #16	@ 0002351e 1030
.org 0x23520
	ldr r1, [pc, #12]	@ 00023520 0349
.org 0x23522
	ldr r1, [r1, #32]	@ 00023522 096a
.org 0x23524
	ldr r1, [r1, #40]	@ 00023524 896a
.org 0x23526
	bl 0x275f0	@ 00023526 04f063f8
.org 0x2352a
	movs r0, #11	@ 0002352a 0b20
.org 0x2352c
	strb r0, [r7, #0]	@ 0002352c 3870
.org 0x2352e
	b.n 0x23882	@ 0002352e a8e1
.org 0x23530
	.byte 0xf8,0x2c,0x84,0x08	@ 00023530 data
.org 0x23534
	cmp r4, #7	@ 00023534 072c
.org 0x23536
	beq.n 0x2353a	@ 00023536 00d0
.org 0x23538
	b.n 0x23882	@ 00023538 a3e1
.org 0x2353a
	adds r0, r5, #0	@ 0002353a 281c
.org 0x2353c
	adds r0, #16	@ 0002353c 1030
.org 0x2353e
	ldr r1, [pc, #16]	@ 0002353e 0449
.org 0x23540
	ldr r1, [r1, #32]	@ 00023540 096a
.org 0x23542
	ldr r1, [r1, #48]	@ 00023542 096b
.org 0x23544
	bl 0x275f0	@ 00023544 04f054f8
.org 0x23548
	mov r0, r9	@ 00023548 4846
.org 0x2354a
	strb r0, [r7, #0]	@ 0002354a 3870
.org 0x2354c
	b.n 0x23882	@ 0002354c 99e1
.org 0x2354e
	.byte 0x00	@ 0002354e data
.org 0x2354f
	.byte 0x00	@ 0002354f data
.org 0x23550
	.byte 0xf8,0x2c,0x84,0x08	@ 00023550 data
.org 0x23554
	mov r1, r8	@ 00023554 4146
.org 0x23556
	cmp r1, #1	@ 00023556 0129
.org 0x23558
	bne.n 0x23566	@ 00023558 05d1
.org 0x2355a
	movs r0, #2	@ 0002355a 0220
.org 0x2355c
	bl 0x1f63c	@ 0002355c fcf76ef8
.org 0x23560
	movs r0, #2	@ 00023560 0220
.org 0x23562
	strb r0, [r7, #0]	@ 00023562 3870
.org 0x23564
	b.n 0x23882	@ 00023564 8de1
.org 0x23566
	mov r0, r8	@ 00023566 4046
.org 0x23568
	cmp r0, #2	@ 00023568 0228
.org 0x2356a
	bne.n 0x235a4	@ 0002356a 1bd1
.org 0x2356c
	ldr r1, [r2, #84]	@ 0002356c 516d
.org 0x2356e
	movs r0, #210	@ 0002356e d220
.org 0x23570
	lsls r0, r0, #11	@ 00023570 c002
.org 0x23572
	cmp r1, r0	@ 00023572 8142
.org 0x23574
	ble.n 0x235a4	@ 00023574 16dd
.org 0x23576
	ldr r1, [r2, #88]	@ 00023576 916d
.org 0x23578
	ldr r0, [pc, #8]	@ 00023578 0248
.org 0x2357a
	cmp r1, r0	@ 0002357a 8142
.org 0x2357c
	bgt.n 0x2358c	@ 0002357c 06dc
.org 0x2357e
	ldr r1, [pc, #8]	@ 0002357e 0249
.org 0x23580
	movs r0, #1	@ 00023580 0120
.org 0x23582
	b.n 0x23590	@ 00023582 05e0
.org 0x23584
	.byte 0xff,0x7f,0x02,0x00	@ 00023584 data
.org 0x23588
	.byte 0x10,0xe9,0x02,0x02	@ 00023588 data
.org 0x2358c
	ldr r1, [pc, #16]	@ 0002358c 0449
.org 0x2358e
	movs r0, #0	@ 0002358e 0020
.org 0x23590
	strh r0, [r1, #10]	@ 00023590 4881
.org 0x23592
	movs r2, #190	@ 00023592 be22
.org 0x23594
	lsls r2, r2, #1	@ 00023594 5200
.org 0x23596
	adds r1, r6, r2	@ 00023596 b118
.org 0x23598
	movs r0, #3	@ 00023598 0320
.org 0x2359a
	strb r0, [r1, #0]	@ 0002359a 0870
.org 0x2359c
	b.n 0x23882	@ 0002359c 71e1
.org 0x2359e
	.byte 0x00	@ 0002359e data
.org 0x2359f
	.byte 0x00	@ 0002359f data
.org 0x235a0
	.byte 0x10,0xe9,0x02,0x02	@ 000235a0 data
.org 0x235a4
	movs r0, #190	@ 000235a4 be20
.org 0x235a6
	lsls r0, r0, #1	@ 000235a6 4000
.org 0x235a8
	adds r4, r6, r0	@ 000235a8 3418
.org 0x235aa
	ldrb r0, [r4, #0]	@ 000235aa 2078
.org 0x235ac
	cmp r0, #3	@ 000235ac 0328
.org 0x235ae
	bne.n 0x235d8	@ 000235ae 13d1
.org 0x235b0
	ldr r1, [r2, #84]	@ 000235b0 516d
.org 0x235b2
	movs r0, #195	@ 000235b2 c320
.org 0x235b4
	lsls r0, r0, #12	@ 000235b4 0003
.org 0x235b6
	cmp r1, r0	@ 000235b6 8142
.org 0x235b8
	ble.n 0x235d8	@ 000235b8 0edd
.org 0x235ba
	ldr r1, [r2, #88]	@ 000235ba 916d
.org 0x235bc
	movs r0, #222	@ 000235bc de20
.org 0x235be
	lsls r0, r0, #11	@ 000235be c002
.org 0x235c0
	cmp r1, r0	@ 000235c0 8142
.org 0x235c2
	ble.n 0x235d8	@ 000235c2 09dd
.org 0x235c4
	ldr r0, [pc, #8]	@ 000235c4 0248
.org 0x235c6
	ldr r1, [pc, #12]	@ 000235c6 0349
.org 0x235c8
	ldr r1, [r1, #32]	@ 000235c8 096a
.org 0x235ca
	ldr r1, [r1, #12]	@ 000235ca c968
.org 0x235cc
	b.n 0x23600	@ 000235cc 18e0
.org 0x235ce
	.byte 0x00	@ 000235ce data
.org 0x235cf
	.byte 0x00	@ 000235cf data
.org 0x235d0
	.byte 0x20,0xe9,0x02,0x02	@ 000235d0 data
.org 0x235d4
	.byte 0xf8,0x2c,0x84,0x08	@ 000235d4 data
.org 0x235d8
	movs r1, #190	@ 000235d8 be21
.org 0x235da
	lsls r1, r1, #1	@ 000235da 4900
.org 0x235dc
	adds r4, r6, r1	@ 000235dc 7418
.org 0x235de
	ldrb r0, [r4, #0]	@ 000235de 2078
.org 0x235e0
	cmp r0, #4	@ 000235e0 0428
.org 0x235e2
	bne.n 0x23628	@ 000235e2 21d1
.org 0x235e4
	ldr r1, [r2, #84]	@ 000235e4 516d
.org 0x235e6
	movs r0, #195	@ 000235e6 c320
.org 0x235e8
	lsls r0, r0, #12	@ 000235e8 0003
.org 0x235ea
	cmp r1, r0	@ 000235ea 8142
.org 0x235ec
	ble.n 0x23628	@ 000235ec 1cdd
.org 0x235ee
	ldr r1, [r2, #88]	@ 000235ee 916d
.org 0x235f0
	movs r0, #222	@ 000235f0 de20
.org 0x235f2
	lsls r0, r0, #11	@ 000235f2 c002
.org 0x235f4
	cmp r1, r0	@ 000235f4 8142
.org 0x235f6
	ble.n 0x23628	@ 000235f6 17dd
.org 0x235f8
	ldr r0, [pc, #32]	@ 000235f8 0848
.org 0x235fa
	ldr r1, [pc, #36]	@ 000235fa 0949
.org 0x235fc
	ldr r1, [r1, #32]	@ 000235fc 096a
.org 0x235fe
	ldr r1, [r1, #20]	@ 000235fe 4969
.org 0x23600
	bl 0x275f0	@ 00023600 03f0f6ff
.org 0x23604
	movs r0, #4	@ 00023604 0420
.org 0x23606
	bl 0x1f63c	@ 00023606 fcf719f8
.org 0x2360a
	ldr r2, [pc, #24]	@ 0002360a 064a
.org 0x2360c
	ldrb r1, [r2, #4]	@ 0002360c 1179
.org 0x2360e
	movs r0, #8	@ 0002360e 0820
.org 0x23610
	orrs r0, r1	@ 00023610 0843
.org 0x23612
	strb r0, [r2, #4]	@ 00023612 1071
.org 0x23614
	movs r0, #5	@ 00023614 0520
.org 0x23616
	strb r0, [r4, #0]	@ 00023616 2070
.org 0x23618
	b.n 0x23882	@ 00023618 33e1
.org 0x2361a
	.byte 0x00	@ 0002361a data
.org 0x2361b
	.byte 0x00	@ 0002361b data
.org 0x2361c
	.byte 0x20,0xe9,0x02,0x02	@ 0002361c data
.org 0x23620
	.byte 0xf8,0x2c,0x84,0x08	@ 00023620 data
.org 0x23624
	.byte 0xb0,0xe8,0x02,0x02	@ 00023624 data
.org 0x23628
	movs r0, #190	@ 00023628 be20
.org 0x2362a
	lsls r0, r0, #1	@ 0002362a 4000
.org 0x2362c
	adds r5, r6, r0	@ 0002362c 3518
.org 0x2362e
	ldrb r0, [r5, #0]	@ 0002362e 2878
.org 0x23630
	cmp r0, #5	@ 00023630 0528
.org 0x23632
	bne.n 0x2363e	@ 00023632 04d1
.org 0x23634
	movs r0, #3	@ 00023634 0320
.org 0x23636
	bl 0x1f63c	@ 00023636 fcf701f8
.org 0x2363a
	movs r0, #6	@ 0002363a 0620
.org 0x2363c
	b.n 0x23880	@ 0002363c 20e1
.org 0x2363e
	cmp r0, #6	@ 0002363e 0628
.org 0x23640
	bne.n 0x236a4	@ 00023640 30d1
.org 0x23642
	ldr r4, [pc, #76]	@ 00023642 134c
.org 0x23644
	ldrh r1, [r4, #8]	@ 00023644 2189
.org 0x23646
	movs r0, #16	@ 00023646 1020
.org 0x23648
	ands r0, r1	@ 00023648 0840
.org 0x2364a
	cmp r0, #0	@ 0002364a 0028
.org 0x2364c
	beq.n 0x236a4	@ 0002364c 2ad0
.org 0x2364e
	ldr r1, [pc, #68]	@ 0002364e 1149
.org 0x23650
	ldrb r2, [r1, #0]	@ 00023650 0a78
.org 0x23652
	movs r0, #128	@ 00023652 8020
.org 0x23654
	orrs r0, r2	@ 00023654 1043
.org 0x23656
	strb r0, [r1, #0]	@ 00023656 0870
.org 0x23658
	ldrb r2, [r1, #1]	@ 00023658 4a78
.org 0x2365a
	movs r0, #2	@ 0002365a 0220
.org 0x2365c
	orrs r0, r2	@ 0002365c 1043
.org 0x2365e
	strb r0, [r1, #1]	@ 0002365e 4870
.org 0x23660
	adds r0, r4, #0	@ 00023660 201c
.org 0x23662
	adds r0, #16	@ 00023662 1030
.org 0x23664
	ldr r1, [pc, #48]	@ 00023664 0c49
.org 0x23666
	ldr r1, [r1, #32]	@ 00023666 096a
.org 0x23668
	ldr r1, [r1, #28]	@ 00023668 c969
.org 0x2366a
	bl 0x275f0	@ 0002366a 03f0c1ff
.org 0x2366e
	ldrh r0, [r4, #8]	@ 0002366e 2089
.org 0x23670
	ldr r2, [pc, #40]	@ 00023670 0a4a
.org 0x23672
	ands r2, r0	@ 00023672 0240
.org 0x23674
	ldrb r1, [r4, #18]	@ 00023674 a17c
.org 0x23676
	movs r0, #253	@ 00023676 fd20
.org 0x23678
	ands r0, r1	@ 00023678 0840
.org 0x2367a
	strb r0, [r4, #18]	@ 0002367a a074
.org 0x2367c
	ldr r3, [pc, #32]	@ 0002367c 084b
.org 0x2367e
	ldrb r1, [r3, #4]	@ 0002367e 1979
.org 0x23680
	movs r0, #247	@ 00023680 f720
.org 0x23682
	ands r0, r1	@ 00023682 0840
.org 0x23684
	strb r0, [r3, #4]	@ 00023684 1871
.org 0x23686
	movs r0, #1	@ 00023686 0120
.org 0x23688
	orrs r2, r0	@ 00023688 0243
.org 0x2368a
	strh r2, [r4, #8]	@ 0002368a 2281
.org 0x2368c
	movs r0, #7	@ 0002368c 0720
.org 0x2368e
	b.n 0x23880	@ 0002368e f7e0
.org 0x23690
	.byte 0x10,0xe9,0x02,0x02	@ 00023690 data
.org 0x23694
	.byte 0xe0,0x32,0x00,0x03	@ 00023694 data
.org 0x23698
	.byte 0xf8,0x2c,0x84,0x08	@ 00023698 data
.org 0x2369c
	.byte 0xef,0xff,0x00,0x00	@ 0002369c data
.org 0x236a0
	.byte 0xb0,0xe8,0x02,0x02	@ 000236a0 data
.org 0x236a4
	movs r1, #190	@ 000236a4 be21
.org 0x236a6
	lsls r1, r1, #1	@ 000236a6 4900
.org 0x236a8
	adds r4, r6, r1	@ 000236a8 7418
.org 0x236aa
	ldrb r0, [r4, #0]	@ 000236aa 2078
.org 0x236ac
	cmp r0, #7	@ 000236ac 0728
.org 0x236ae
	bne.n 0x236c8	@ 000236ae 0bd1
.org 0x236b0
	ldr r1, [pc, #16]	@ 000236b0 0449
.org 0x236b2
	ldrb r2, [r1, #0]	@ 000236b2 0a78
.org 0x236b4
	movs r0, #127	@ 000236b4 7f20
.org 0x236b6
	ands r0, r2	@ 000236b6 1040
.org 0x236b8
	movs r2, #0	@ 000236b8 0022
.org 0x236ba
	strb r0, [r1, #0]	@ 000236ba 0870
.org 0x236bc
	strb r2, [r1, #1]	@ 000236bc 4a70
.org 0x236be
	movs r0, #8	@ 000236be 0820
.org 0x236c0
	strb r0, [r4, #0]	@ 000236c0 2070
.org 0x236c2
	b.n 0x23882	@ 000236c2 dee0
.org 0x236c4
	.byte 0xe0,0x32,0x00,0x03	@ 000236c4 data
.org 0x236c8
	cmp r0, #8	@ 000236c8 0828
.org 0x236ca
	bne.n 0x236f4	@ 000236ca 13d1
.org 0x236cc
	ldr r1, [r2, #84]	@ 000236cc 516d
.org 0x236ce
	ldr r0, [pc, #28]	@ 000236ce 0748
.org 0x236d0
	cmp r1, r0	@ 000236d0 8142
.org 0x236d2
	ble.n 0x236f4	@ 000236d2 0fdd
.org 0x236d4
	movs r0, #5	@ 000236d4 0520
.org 0x236d6
	bl 0x1f63c	@ 000236d6 fbf7b1ff
.org 0x236da
	ldr r2, [pc, #20]	@ 000236da 054a
.org 0x236dc
	ldrb r1, [r2, #4]	@ 000236dc 1179
.org 0x236de
	movs r0, #8	@ 000236de 0820
.org 0x236e0
	orrs r0, r1	@ 000236e0 0843
.org 0x236e2
	strb r0, [r2, #4]	@ 000236e2 1071
.org 0x236e4
	movs r0, #9	@ 000236e4 0920
.org 0x236e6
	strb r0, [r4, #0]	@ 000236e6 2070
.org 0x236e8
	b.n 0x23882	@ 000236e8 cbe0
.org 0x236ea
	.byte 0x00	@ 000236ea data
.org 0x236eb
	.byte 0x00	@ 000236eb data
.org 0x236ec
	.byte 0xff,0x2f,0x0d,0x00	@ 000236ec data
.org 0x236f0
	.byte 0xb0,0xe8,0x02,0x02	@ 000236f0 data
.org 0x236f4
	movs r0, #190	@ 000236f4 be20
.org 0x236f6
	lsls r0, r0, #1	@ 000236f6 4000
.org 0x236f8
	adds r4, r6, r0	@ 000236f8 3418
.org 0x236fa
	ldrb r0, [r4, #0]	@ 000236fa 2078
.org 0x236fc
	cmp r0, #9	@ 000236fc 0928
.org 0x236fe
	bne.n 0x237c8	@ 000236fe 63d1
.org 0x23700
	ldr r1, [pc, #60]	@ 00023700 0f49
.org 0x23702
	adds r7, r6, r1	@ 00023702 7718
.org 0x23704
	ldrb r0, [r7, #0]	@ 00023704 3878
.org 0x23706
	cmp r0, #0	@ 00023706 0028
.org 0x23708
	bne.n 0x23750	@ 00023708 22d1
.org 0x2370a
	ldr r1, [r2, #84]	@ 0002370a 516d
.org 0x2370c
	ldr r0, [pc, #52]	@ 0002370c 0d48
.org 0x2370e
	cmp r1, r0	@ 0002370e 8142
.org 0x23710
	ble.n 0x23750	@ 00023710 1edd
.org 0x23712
	ldr r2, [pc, #52]	@ 00023712 0d4a
.org 0x23714
	ldrb r1, [r2, #1]	@ 00023714 5178
.org 0x23716
	movs r0, #2	@ 00023716 0220
.org 0x23718
	orrs r0, r1	@ 00023718 0843
.org 0x2371a
	strb r0, [r2, #1]	@ 0002371a 5070
.org 0x2371c
	ldr r0, [pc, #44]	@ 0002371c 0b48
.org 0x2371e
	movs r2, #180	@ 0002371e b422
.org 0x23720
	lsls r2, r2, #1	@ 00023720 5200
.org 0x23722
	adds r5, r0, r2	@ 00023722 8518
.org 0x23724
	ldr r0, [r5, #0]	@ 00023724 2868
.org 0x23726
	movs r4, #1	@ 00023726 0124
.org 0x23728
	negs r4, r4	@ 00023728 6442
.org 0x2372a
	cmp r0, r4	@ 0002372a a042
.org 0x2372c
	beq.n 0x23738	@ 0002372c 04d0
.org 0x2372e
	lsls r0, r0, #16	@ 0002372e 0004
.org 0x23730
	lsrs r0, r0, #16	@ 00023730 000c
.org 0x23732
	bl 0x2a98	@ 00023732 dff7b1f9
.org 0x23736
	str r4, [r5, #0]	@ 00023736 2c60
.org 0x23738
	movs r0, #1	@ 00023738 0120
.org 0x2373a
	strb r0, [r7, #0]	@ 0002373a 3870
.org 0x2373c
	b.n 0x23882	@ 0002373c a1e0
.org 0x2373e
	.byte 0x00	@ 0002373e data
.org 0x2373f
	.byte 0x00	@ 0002373f data
.org 0x23740
	.byte 0x7d,0x01,0x00,0x00	@ 00023740 data
.org 0x23744
	.byte 0xff,0x7f,0x15,0x00	@ 00023744 data
.org 0x23748
	.byte 0xe0,0x32,0x00,0x03	@ 00023748 data
.org 0x2374c
	.byte 0x10,0xe9,0x02,0x02	@ 0002374c data
.org 0x23750
	ldr r0, [pc, #20]	@ 00023750 0548
.org 0x23752
	adds r3, r6, r0	@ 00023752 3318
.org 0x23754
	ldrb r0, [r3, #0]	@ 00023754 1878
.org 0x23756
	cmp r0, #1	@ 00023756 0128
.org 0x23758
	bne.n 0x23770	@ 00023758 0ad1
.org 0x2375a
	ldr r0, [pc, #16]	@ 0002375a 0448
.org 0x2375c
	movs r1, #0	@ 0002375c 0021
.org 0x2375e
	strb r1, [r0, #1]	@ 0002375e 4170
.org 0x23760
	movs r0, #2	@ 00023760 0220
.org 0x23762
	strb r0, [r3, #0]	@ 00023762 1870
.org 0x23764
	b.n 0x23882	@ 00023764 8de0
.org 0x23766
	.byte 0x00	@ 00023766 data
.org 0x23767
	.byte 0x00	@ 00023767 data
.org 0x23768
	.byte 0x7d,0x01,0x00,0x00	@ 00023768 data
.org 0x2376c
	.byte 0xe0,0x32,0x00,0x03	@ 0002376c data
.org 0x23770
	cmp r0, #2	@ 00023770 0228
.org 0x23772
	beq.n 0x23776	@ 00023772 00d0
.org 0x23774
	b.n 0x23882	@ 00023774 85e0
.org 0x23776
	ldr r1, [r2, #84]	@ 00023776 516d
.org 0x23778
	ldr r0, [pc, #64]	@ 00023778 1048
.org 0x2377a
	cmp r1, r0	@ 0002377a 8142
.org 0x2377c
	bgt.n 0x23780	@ 0002377c 00dc
.org 0x2377e
	b.n 0x23882	@ 0002377e 80e0
.org 0x23780
	ldr r0, [pc, #60]	@ 00023780 0f48
.org 0x23782
	movs r1, #0	@ 00023782 0021
.org 0x23784
	strb r1, [r0, #1]	@ 00023784 4170
.org 0x23786
	ldr r0, [pc, #60]	@ 00023786 0f48
.org 0x23788
	movs r1, #180	@ 00023788 b421
.org 0x2378a
	lsls r1, r1, #1	@ 0002378a 4900
.org 0x2378c
	adds r4, r0, r1	@ 0002378c 4418
.org 0x2378e
	ldr r0, [r4, #0]	@ 0002378e 2068
.org 0x23790
	cmp r0, #155	@ 00023790 9b28
.org 0x23792
	beq.n 0x237b0	@ 00023792 0dd0
.org 0x23794
	movs r5, #1	@ 00023794 0125
.org 0x23796
	negs r5, r5	@ 00023796 6d42
.org 0x23798
	cmp r0, r5	@ 00023798 a842
.org 0x2379a
	beq.n 0x237a6	@ 0002379a 04d0
.org 0x2379c
	lsls r0, r0, #16	@ 0002379c 0004
.org 0x2379e
	lsrs r0, r0, #16	@ 0002379e 000c
.org 0x237a0
	bl 0x2a98	@ 000237a0 dff77af9
.org 0x237a4
	str r5, [r4, #0]	@ 000237a4 2560
.org 0x237a6
	movs r0, #155	@ 000237a6 9b20
.org 0x237a8
	bl 0x2a88	@ 000237a8 dff76ef9
.org 0x237ac
	movs r0, #155	@ 000237ac 9b20
.org 0x237ae
	str r0, [r4, #0]	@ 000237ae 2060
.org 0x237b0
	movs r2, #190	@ 000237b0 be22
.org 0x237b2
	lsls r2, r2, #1	@ 000237b2 5200
.org 0x237b4
	adds r1, r6, r2	@ 000237b4 b118
.org 0x237b6
	movs r0, #10	@ 000237b6 0a20
.org 0x237b8
	strb r0, [r1, #0]	@ 000237b8 0870
.org 0x237ba
	b.n 0x23882	@ 000237ba 62e0
.org 0x237bc
	.byte 0xff,0x9f,0x15,0x00	@ 000237bc data
.org 0x237c0
	.byte 0xe0,0x32,0x00,0x03	@ 000237c0 data

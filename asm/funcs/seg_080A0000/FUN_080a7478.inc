@ FUN_080a7478  entry 0x080a7478  size 334
.thumb
.org 0xa7478
FUN_080a7478:
	push {r4, r5, lr}	@ 000a7478 30b5
.org 0xa747a
	adds r4, r0, #0	@ 000a747a 041c
.org 0xa747c
	ldrb r0, [r4, #14]	@ 000a747c a07b
.org 0xa747e
	cmp r0, #0	@ 000a747e 0028
.org 0xa7480
	bne.n 0xa74ea	@ 000a7480 33d1
.org 0xa7482
	adds r0, r4, #0	@ 000a7482 201c
.org 0xa7484
	adds r0, #180	@ 000a7484 b430
.org 0xa7486
	ldr r1, [r4, #84]	@ 000a7486 616d
.org 0xa7488
	ldr r0, [r0, #0]	@ 000a7488 0068
.org 0xa748a
	cmp r1, r0	@ 000a748a 8142
.org 0xa748c
	ble.n 0xa74a0	@ 000a748c 08dd
.org 0xa748e
	ldr r0, [pc, #8]	@ 000a748e 0248
.org 0xa7490
	str r0, [r4, #92]	@ 000a7490 e065
.org 0xa7492
	ldr r0, [pc, #8]	@ 000a7492 0248
.org 0xa7494
	b.n 0xa74aa	@ 000a7494 09e0
.org 0xa7496
	.byte 0x00	@ 000a7496 data
.org 0xa7497
	.byte 0x00	@ 000a7497 data
.org 0xa7498
	.byte 0x40,0xfe,0xff,0xff	@ 000a7498 data
.org 0xa749c
	.byte 0x00,0xf0,0xff,0xff	@ 000a749c data
.org 0xa74a0
	movs r0, #224	@ 000a74a0 e020
.org 0xa74a2
	lsls r0, r0, #1	@ 000a74a2 4000
.org 0xa74a4
	str r0, [r4, #92]	@ 000a74a4 e065
.org 0xa74a6
	movs r0, #128	@ 000a74a6 8020
.org 0xa74a8
	lsls r0, r0, #5	@ 000a74a8 4001
.org 0xa74aa
	str r0, [r4, #100]	@ 000a74aa 6066
.org 0xa74ac
	ldrb r1, [r4, #10]	@ 000a74ac a17a
.org 0xa74ae
	movs r0, #16	@ 000a74ae 1020
.org 0xa74b0
	ands r0, r1	@ 000a74b0 0840
.org 0xa74b2
	cmp r0, #0	@ 000a74b2 0028
.org 0xa74b4
	beq.n 0xa74c4	@ 000a74b4 06d0
.org 0xa74b6
	ldr r0, [r4, #92]	@ 000a74b6 e06d
.org 0xa74b8
	cmp r0, #0	@ 000a74b8 0028
.org 0xa74ba
	bgt.n 0xa74ca	@ 000a74ba 06dc
.org 0xa74bc
	ldr r1, [pc, #0]	@ 000a74bc 0049
.org 0xa74be
	b.n 0xa74cc	@ 000a74be 05e0
.org 0xa74c0
	.byte 0x04,0x8b,0x00,0x00	@ 000a74c0 data
.org 0xa74c4
	ldr r0, [r4, #92]	@ 000a74c4 e06d
.org 0xa74c6
	cmp r0, #0	@ 000a74c6 0028
.org 0xa74c8
	bge.n 0xa74d8	@ 000a74c8 06da
.org 0xa74ca
	ldr r1, [pc, #8]	@ 000a74ca 0249
.org 0xa74cc
	adds r0, r4, #0	@ 000a74cc 201c
.org 0xa74ce
	bl 0x1cf00	@ 000a74ce 75f717fd
.org 0xa74d2
	b.n 0xa74e0	@ 000a74d2 05e0
.org 0xa74d4
	.byte 0x03,0x8b,0x00,0x00	@ 000a74d4 data
.org 0xa74d8
	ldr r1, [pc, #80]	@ 000a74d8 1449
.org 0xa74da
	adds r0, r4, #0	@ 000a74da 201c
.org 0xa74dc
	bl 0x1cf00	@ 000a74dc 75f710fd
.org 0xa74e0
	movs r0, #0	@ 000a74e0 0020
.org 0xa74e2
	strb r0, [r4, #18]	@ 000a74e2 a074
.org 0xa74e4
	ldrb r0, [r4, #14]	@ 000a74e4 a07b
.org 0xa74e6
	adds r0, #1	@ 000a74e6 0130
.org 0xa74e8
	strb r0, [r4, #14]	@ 000a74e8 a073
.org 0xa74ea
	adds r0, r4, #0	@ 000a74ea 201c
.org 0xa74ec
	bl 0x1cff0	@ 000a74ec 75f780fd
.org 0xa74f0
	ldrb r0, [r4, #30]	@ 000a74f0 a07f
.org 0xa74f2
	lsls r0, r0, #8	@ 000a74f2 0002
.org 0xa74f4
	adds r1, r4, #0	@ 000a74f4 211c
.org 0xa74f6
	adds r1, #112	@ 000a74f6 7031
.org 0xa74f8
	ldrb r1, [r1, #0]	@ 000a74f8 0978
.org 0xa74fa
	orrs r0, r1	@ 000a74fa 0843
.org 0xa74fc
	ldr r1, [pc, #48]	@ 000a74fc 0c49
.org 0xa74fe
	cmp r0, r1	@ 000a74fe 8842
.org 0xa7500
	bne.n 0xa7538	@ 000a7500 1ad1
.org 0xa7502
	adds r0, r4, #0	@ 000a7502 201c
.org 0xa7504
	adds r0, #113	@ 000a7504 7130
.org 0xa7506
	ldrb r0, [r0, #0]	@ 000a7506 0078
.org 0xa7508
	lsls r0, r0, #24	@ 000a7508 0006
.org 0xa750a
	asrs r0, r0, #24	@ 000a750a 0016
.org 0xa750c
	cmp r0, #2	@ 000a750c 0228
.org 0xa750e
	beq.n 0xa7514	@ 000a750e 01d0
.org 0xa7510
	cmp r0, #6	@ 000a7510 0628
.org 0xa7512
	bne.n 0xa755e	@ 000a7512 24d1
.org 0xa7514
	adds r0, r4, #0	@ 000a7514 201c
.org 0xa7516
	adds r0, #114	@ 000a7516 7230
.org 0xa7518
	ldrb r0, [r0, #0]	@ 000a7518 0078
.org 0xa751a
	lsls r0, r0, #24	@ 000a751a 0006
.org 0xa751c
	asrs r0, r0, #24	@ 000a751c 0016
.org 0xa751e
	cmp r0, #1	@ 000a751e 0128
.org 0xa7520
	bgt.n 0xa755e	@ 000a7520 1ddc
.org 0xa7522
	ldr r0, [pc, #16]	@ 000a7522 0448
.org 0xa7524
	bl 0x2b10	@ 000a7524 5bf7f4fa
.org 0xa7528
	b.n 0xa755e	@ 000a7528 19e0
.org 0xa752a
	.byte 0x00	@ 000a752a data
.org 0xa752b
	.byte 0x00	@ 000a752b data
.org 0xa752c
	.byte 0x04,0x8b,0x00,0x00	@ 000a752c data
.org 0xa7530
	.byte 0x03,0x8b,0x00,0x00	@ 000a7530 data
.org 0xa7534
	.byte 0x37,0x01,0x00,0x00	@ 000a7534 data
.org 0xa7538
	adds r0, r4, #0	@ 000a7538 201c
.org 0xa753a
	adds r0, #113	@ 000a753a 7130
.org 0xa753c
	ldrb r0, [r0, #0]	@ 000a753c 0078
.org 0xa753e
	lsls r0, r0, #24	@ 000a753e 0006
.org 0xa7540
	asrs r0, r0, #24	@ 000a7540 0016
.org 0xa7542
	cmp r0, #3	@ 000a7542 0328
.org 0xa7544
	beq.n 0xa754a	@ 000a7544 01d0
.org 0xa7546
	cmp r0, #7	@ 000a7546 0728
.org 0xa7548
	bne.n 0xa755e	@ 000a7548 09d1
.org 0xa754a
	adds r0, r4, #0	@ 000a754a 201c
.org 0xa754c
	adds r0, #114	@ 000a754c 7230
.org 0xa754e
	ldrb r0, [r0, #0]	@ 000a754e 0078
.org 0xa7550
	lsls r0, r0, #24	@ 000a7550 0006
.org 0xa7552
	asrs r0, r0, #24	@ 000a7552 0016
.org 0xa7554
	cmp r0, #1	@ 000a7554 0128
.org 0xa7556
	bgt.n 0xa755e	@ 000a7556 02dc
.org 0xa7558
	ldr r0, [pc, #84]	@ 000a7558 1548
.org 0xa755a
	bl 0x2b10	@ 000a755a 5bf7d9fa
.org 0xa755e
	ldr r0, [r4, #84]	@ 000a755e 606d
.org 0xa7560
	ldr r1, [r4, #92]	@ 000a7560 e16d
.org 0xa7562
	adds r0, r0, r1	@ 000a7562 4018
.org 0xa7564
	str r0, [r4, #84]	@ 000a7564 6065
.org 0xa7566
	ldr r1, [r4, #88]	@ 000a7566 a16d
.org 0xa7568
	bl 0x8534	@ 000a7568 60f7e4ff
.org 0xa756c
	adds r5, r0, #0	@ 000a756c 051c
.org 0xa756e
	str r5, [r4, #88]	@ 000a756e a565
.org 0xa7570
	ldrb r3, [r4, #17]	@ 000a7570 637c
.org 0xa7572
	cmp r3, #0	@ 000a7572 002b
.org 0xa7574
	bne.n 0xa75b8	@ 000a7574 20d1
.org 0xa7576
	ldrb r0, [r4, #18]	@ 000a7576 a07c
.org 0xa7578
	adds r1, r0, #1	@ 000a7578 411c
.org 0xa757a
	strb r1, [r4, #18]	@ 000a757a a174
.org 0xa757c
	lsls r0, r0, #24	@ 000a757c 0006
.org 0xa757e
	lsrs r0, r0, #24	@ 000a757e 000e
.org 0xa7580
	cmp r0, #32	@ 000a7580 2028
.org 0xa7582
	bls.n 0xa75b8	@ 000a7582 19d9
.org 0xa7584
	ldr r0, [pc, #44]	@ 000a7584 0b48
.org 0xa7586
	ldr r2, [r0, #0]	@ 000a7586 0268
.org 0xa7588
	ldr r0, [r2, #84]	@ 000a7588 506d
.org 0xa758a
	ldr r1, [r4, #84]	@ 000a758a 616d
.org 0xa758c
	subs r0, r0, r1	@ 000a758c 401a
.org 0xa758e
	movs r1, #192	@ 000a758e c021
.org 0xa7590
	lsls r1, r1, #6	@ 000a7590 8901
.org 0xa7592
	adds r0, r0, r1	@ 000a7592 4018
.org 0xa7594
	movs r1, #192	@ 000a7594 c021
.org 0xa7596
	lsls r1, r1, #7	@ 000a7596 c901
.org 0xa7598
	cmp r0, r1	@ 000a7598 8842
.org 0xa759a
	bhi.n 0xa75b8	@ 000a759a 0dd8
.org 0xa759c
	ldr r0, [r2, #88]	@ 000a759c 906d
.org 0xa759e
	subs r0, r0, r5	@ 000a759e 401b
.org 0xa75a0
	movs r2, #192	@ 000a75a0 c022
.org 0xa75a2
	lsls r2, r2, #6	@ 000a75a2 9201
.org 0xa75a4
	adds r0, r0, r2	@ 000a75a4 8018
.org 0xa75a6
	cmp r0, r1	@ 000a75a6 8842
.org 0xa75a8
	bhi.n 0xa75b8	@ 000a75a8 06d8
.org 0xa75aa
	strb r3, [r4, #13]	@ 000a75aa 6373
.org 0xa75ac
	strb r3, [r4, #14]	@ 000a75ac a373
.org 0xa75ae
	b.n 0xa75e8	@ 000a75ae 1be0
.org 0xa75b0
	.byte 0x37,0x01,0x00,0x00	@ 000a75b0 data
.org 0xa75b4
	.byte 0xf0,0xdb,0x02,0x02	@ 000a75b4 data
.org 0xa75b8
	ldr r0, [r4, #92]	@ 000a75b8 e06d
.org 0xa75ba
	cmp r0, #0	@ 000a75ba 0028
.org 0xa75bc
	ble.n 0xa75cc	@ 000a75bc 06dd
.org 0xa75be
	adds r0, r4, #0	@ 000a75be 201c
.org 0xa75c0
	adds r0, #180	@ 000a75c0 b430
.org 0xa75c2
	ldr r1, [r4, #84]	@ 000a75c2 616d
.org 0xa75c4
	ldr r2, [r0, #0]	@ 000a75c4 0268

@ FUN_081273fc  entry 0x081273fc  size 502
.thumb
.org 0x1273fc
FUN_081273fc:
	push {r4, r5, r6, r7, lr}	@ 001273fc f0b5
.org 0x1273fe
	mov r4, r8	@ 001273fe 4446
.org 0x127400
	mov r5, r9	@ 00127400 4d46
.org 0x127402
	mov r6, sl	@ 00127402 5646
.org 0x127404
	mov r7, fp	@ 00127404 5f46
.org 0x127406
	push {r4, r5, r6, r7}	@ 00127406 f0b4
.org 0x127408
	sub sp, #24	@ 00127408 86b0
.org 0x12740a
	str r1, [sp, #0]	@ 0012740a 0091
.org 0x12740c
	adds r5, r2, #0	@ 0012740c 151c
.org 0x12740e
	ldr r1, [pc, #484]	@ 0012740e 7949
.org 0x127410
	ldr r1, [r1, #0]	@ 00127410 0968
.org 0x127412
	str r1, [sp, #4]	@ 00127412 0191
.org 0x127414
	ldr r1, [pc, #480]	@ 00127414 7849
.org 0x127416
	adds r0, r0, r1	@ 00127416 4018
.org 0x127418
	ldrb r0, [r0, #0]	@ 00127418 0078
.org 0x12741a
	strb r0, [r5, #4]	@ 0012741a 2871
.org 0x12741c
	ldr r3, [r5, #64]	@ 0012741c 2b6c
.org 0x12741e
	ldrb r0, [r3, #0]	@ 0012741e 1878
.org 0x127420
	cmp r0, #128	@ 00127420 8028
.org 0x127422
	bcs.n 0x127442	@ 00127422 0ed2
.org 0x127424
	strb r0, [r5, #5]	@ 00127424 6871
.org 0x127426
	adds r3, #1	@ 00127426 0133
.org 0x127428
	ldrb r0, [r3, #0]	@ 00127428 1878
.org 0x12742a
	cmp r0, #128	@ 0012742a 8028
.org 0x12742c
	bcs.n 0x127440	@ 0012742c 08d2
.org 0x12742e
	strb r0, [r5, #6]	@ 0012742e a871
.org 0x127430
	adds r3, #1	@ 00127430 0133
.org 0x127432
	ldrb r0, [r3, #0]	@ 00127432 1878
.org 0x127434
	cmp r0, #128	@ 00127434 8028
.org 0x127436
	bcs.n 0x127440	@ 00127436 03d2
.org 0x127438
	ldrb r1, [r5, #4]	@ 00127438 2979
.org 0x12743a
	adds r1, r1, r0	@ 0012743a 0918
.org 0x12743c
	strb r1, [r5, #4]	@ 0012743c 2971
.org 0x12743e
	adds r3, #1	@ 0012743e 0133
.org 0x127440
	str r3, [r5, #64]	@ 00127440 2b64
.org 0x127442
	movs r0, #0	@ 00127442 0020
.org 0x127444
	str r0, [sp, #20]	@ 00127444 0590
.org 0x127446
	adds r4, r5, #0	@ 00127446 2c1c
.org 0x127448
	adds r4, #36	@ 00127448 2434
.org 0x12744a
	ldrb r2, [r4, #0]	@ 0012744a 2278
.org 0x12744c
	movs r0, #192	@ 0012744c c020
.org 0x12744e
	tst r0, r2	@ 0012744e 1042
.org 0x127450
	beq.n 0x127494	@ 00127450 20d0
.org 0x127452
	ldrb r3, [r5, #5]	@ 00127452 6b79
.org 0x127454
	movs r0, #64	@ 00127454 4020
.org 0x127456
	tst r0, r2	@ 00127456 1042
.org 0x127458
	beq.n 0x127462	@ 00127458 03d0
.org 0x12745a
	ldr r1, [r5, #44]	@ 0012745a e96a
.org 0x12745c
	adds r1, r1, r3	@ 0012745c c918
.org 0x12745e
	ldrb r0, [r1, #0]	@ 0012745e 0878
.org 0x127460
	b.n 0x127464	@ 00127460 00e0
.org 0x127462
	adds r0, r3, #0	@ 00127462 181c
.org 0x127464
	lsls r1, r0, #1	@ 00127464 4100
.org 0x127466
	adds r1, r1, r0	@ 00127466 0918
.org 0x127468
	lsls r1, r1, #2	@ 00127468 8900
.org 0x12746a
	ldr r0, [r5, #40]	@ 0012746a a86a
.org 0x12746c
	adds r1, r1, r0	@ 0012746c 0918
.org 0x12746e
	mov r9, r1	@ 0012746e 8946
.org 0x127470
	mov r6, r9	@ 00127470 4e46
.org 0x127472
	ldrb r1, [r6, #0]	@ 00127472 3178
.org 0x127474
	movs r0, #192	@ 00127474 c020
.org 0x127476
	tst r0, r1	@ 00127476 0842
.org 0x127478
	beq.n 0x12747c	@ 00127478 00d0
.org 0x12747a
	b.n 0x1275e2	@ 0012747a b2e0
.org 0x12747c
	movs r0, #128	@ 0012747c 8020
.org 0x12747e
	tst r0, r2	@ 0012747e 1042
.org 0x127480
	beq.n 0x127498	@ 00127480 0ad0
.org 0x127482
	ldrb r1, [r6, #3]	@ 00127482 f178
.org 0x127484
	movs r0, #128	@ 00127484 8020
.org 0x127486
	tst r0, r1	@ 00127486 0842
.org 0x127488
	beq.n 0x127490	@ 00127488 02d0
.org 0x12748a
	subs r1, #192	@ 0012748a c039
.org 0x12748c
	lsls r1, r1, #1	@ 0012748c 4900
.org 0x12748e
	str r1, [sp, #20]	@ 0012748e 0591
.org 0x127490
	ldrb r3, [r6, #1]	@ 00127490 7378
.org 0x127492
	b.n 0x127498	@ 00127492 01e0
.org 0x127494
	mov r9, r4	@ 00127494 a146
.org 0x127496
	ldrb r3, [r5, #5]	@ 00127496 6b79
.org 0x127498
	str r3, [sp, #8]	@ 00127498 0293
.org 0x12749a
	ldr r6, [sp, #0]	@ 0012749a 009e
.org 0x12749c
	ldrb r1, [r6, #9]	@ 0012749c 717a
.org 0x12749e
	ldrb r0, [r5, #29]	@ 0012749e 687f
.org 0x1274a0
	adds r0, r0, r1	@ 001274a0 4018
.org 0x1274a2
	cmp r0, #255	@ 001274a2 ff28
.org 0x1274a4
	bls.n 0x1274a8	@ 001274a4 00d9
.org 0x1274a6
	movs r0, #255	@ 001274a6 ff20
.org 0x1274a8
	str r0, [sp, #16]	@ 001274a8 0490
.org 0x1274aa
	mov r6, r9	@ 001274aa 4e46
.org 0x1274ac
	ldrb r0, [r6, #0]	@ 001274ac 3078
.org 0x1274ae
	movs r6, #7	@ 001274ae 0726
.org 0x1274b0
	ands r6, r0	@ 001274b0 0640
.org 0x1274b2
	str r6, [sp, #12]	@ 001274b2 0396
.org 0x1274b4
	beq.n 0x1274e8	@ 001274b4 18d0
.org 0x1274b6
	ldr r0, [sp, #4]	@ 001274b6 0198
.org 0x1274b8
	ldr r4, [r0, #28]	@ 001274b8 c469
.org 0x1274ba
	cmp r4, #0	@ 001274ba 002c
.org 0x1274bc
	bne.n 0x1274c0	@ 001274bc 00d1
.org 0x1274be
	b.n 0x1275e2	@ 001274be 90e0
.org 0x1274c0
	subs r6, #1	@ 001274c0 013e
.org 0x1274c2
	lsls r0, r6, #6	@ 001274c2 b001
.org 0x1274c4
	adds r4, r4, r0	@ 001274c4 2418
.org 0x1274c6
	ldrb r1, [r4, #0]	@ 001274c6 2178
.org 0x1274c8
	movs r0, #199	@ 001274c8 c720
.org 0x1274ca
	tst r0, r1	@ 001274ca 0842
.org 0x1274cc
	beq.n 0x12753c	@ 001274cc 36d0
.org 0x1274ce
	movs r0, #64	@ 001274ce 4020
.org 0x1274d0
	tst r0, r1	@ 001274d0 0842
.org 0x1274d2
	bne.n 0x12753c	@ 001274d2 33d1
.org 0x1274d4
	ldrb r1, [r4, #19]	@ 001274d4 e17c
.org 0x1274d6
	ldr r0, [sp, #16]	@ 001274d6 0498
.org 0x1274d8
	cmp r1, r0	@ 001274d8 8142
.org 0x1274da
	bcc.n 0x12753c	@ 001274da 2fd3
.org 0x1274dc
	beq.n 0x1274e0	@ 001274dc 00d0
.org 0x1274de
	b.n 0x1275e2	@ 001274de 80e0
.org 0x1274e0
	ldr r0, [r4, #44]	@ 001274e0 e06a
.org 0x1274e2
	cmp r0, r5	@ 001274e2 a842
.org 0x1274e4
	bcs.n 0x12753c	@ 001274e4 2ad2
.org 0x1274e6
	b.n 0x1275e2	@ 001274e6 7ce0
.org 0x1274e8
	ldr r6, [sp, #16]	@ 001274e8 049e
.org 0x1274ea
	adds r7, r5, #0	@ 001274ea 2f1c
.org 0x1274ec
	movs r2, #0	@ 001274ec 0022
.org 0x1274ee
	mov r8, r2	@ 001274ee 9046
.org 0x1274f0
	ldr r4, [sp, #4]	@ 001274f0 019c
.org 0x1274f2
	ldrb r3, [r4, #6]	@ 001274f2 a379
.org 0x1274f4
	adds r4, #80	@ 001274f4 5034
.org 0x1274f6
	ldrb r1, [r4, #0]	@ 001274f6 2178
.org 0x1274f8
	movs r0, #199	@ 001274f8 c720
.org 0x1274fa
	tst r0, r1	@ 001274fa 0842
.org 0x1274fc
	beq.n 0x12753c	@ 001274fc 1ed0
.org 0x1274fe
	movs r0, #64	@ 001274fe 4020
.org 0x127500
	tst r0, r1	@ 00127500 0842
.org 0x127502
	beq.n 0x127510	@ 00127502 05d0
.org 0x127504
	cmp r2, #0	@ 00127504 002a
.org 0x127506
	bne.n 0x127514	@ 00127506 05d1
.org 0x127508
	adds r2, #1	@ 00127508 0132
.org 0x12750a
	ldrb r6, [r4, #19]	@ 0012750a e67c
.org 0x12750c
	ldr r7, [r4, #44]	@ 0012750c e76a
.org 0x12750e
	b.n 0x12752e	@ 0012750e 0ee0
.org 0x127510
	cmp r2, #0	@ 00127510 002a
.org 0x127512
	bne.n 0x127530	@ 00127512 0dd1
.org 0x127514
	ldrb r0, [r4, #19]	@ 00127514 e07c
.org 0x127516
	cmp r0, r6	@ 00127516 b042
.org 0x127518
	bcs.n 0x127520	@ 00127518 02d2
.org 0x12751a
	adds r6, r0, #0	@ 0012751a 061c
.org 0x12751c
	ldr r7, [r4, #44]	@ 0012751c e76a
.org 0x12751e
	b.n 0x12752e	@ 0012751e 06e0
.org 0x127520
	bhi.n 0x127530	@ 00127520 06d8
.org 0x127522
	ldr r0, [r4, #44]	@ 00127522 e06a
.org 0x127524
	cmp r0, r7	@ 00127524 b842
.org 0x127526
	bls.n 0x12752c	@ 00127526 01d9
.org 0x127528
	adds r7, r0, #0	@ 00127528 071c
.org 0x12752a
	b.n 0x12752e	@ 0012752a 00e0
.org 0x12752c
	bcc.n 0x127530	@ 0012752c 00d3
.org 0x12752e
	mov r8, r4	@ 0012752e a046
.org 0x127530
	adds r4, #64	@ 00127530 4034
.org 0x127532
	subs r3, #1	@ 00127532 013b
.org 0x127534
	bgt.n 0x1274f6	@ 00127534 dfdc
.org 0x127536
	mov r4, r8	@ 00127536 4446
.org 0x127538
	cmp r4, #0	@ 00127538 002c
.org 0x12753a
	beq.n 0x1275e2	@ 0012753a 52d0
.org 0x12753c
	adds r0, r4, #0	@ 0012753c 201c
.org 0x12753e
	bl 0x127b08	@ 0012753e 00f0e3fa
.org 0x127542
	movs r1, #0	@ 00127542 0021
.org 0x127544
	str r1, [r4, #48]	@ 00127544 2163
.org 0x127546
	ldr r3, [r5, #32]	@ 00127546 2b6a
.org 0x127548
	str r3, [r4, #52]	@ 00127548 6363
.org 0x12754a
	cmp r3, #0	@ 0012754a 002b
.org 0x12754c
	beq.n 0x127550	@ 0012754c 00d0
.org 0x12754e
	str r4, [r3, #48]	@ 0012754e 1c63
.org 0x127550
	str r4, [r5, #32]	@ 00127550 2c62
.org 0x127552
	str r5, [r4, #44]	@ 00127552 e562
.org 0x127554
	ldrb r0, [r5, #27]	@ 00127554 e87e
.org 0x127556
	strb r0, [r5, #28]	@ 00127556 2877
.org 0x127558
	cmp r0, r1	@ 00127558 8842
.org 0x12755a
	beq.n 0x127562	@ 0012755a 02d0
.org 0x12755c
	adds r1, r5, #0	@ 0012755c 291c
.org 0x12755e
	bl 0x12763c	@ 0012755e 00f06df8
.org 0x127562
	ldr r0, [sp, #0]	@ 00127562 0098
.org 0x127564
	adds r1, r5, #0	@ 00127564 291c
.org 0x127566
	bl 0x12808c	@ 00127566 00f091fd
.org 0x12756a
	ldr r0, [r5, #4]	@ 0012756a 6868
.org 0x12756c
	str r0, [r4, #16]	@ 0012756c 2061
.org 0x12756e
	ldr r0, [sp, #16]	@ 0012756e 0498
.org 0x127570
	strb r0, [r4, #19]	@ 00127570 e074
.org 0x127572
	ldr r0, [sp, #8]	@ 00127572 0298
.org 0x127574
	strb r0, [r4, #8]	@ 00127574 2072
.org 0x127576
	ldr r0, [sp, #20]	@ 00127576 0598
.org 0x127578
	strb r0, [r4, #20]	@ 00127578 2075
.org 0x12757a
	mov r6, r9	@ 0012757a 4e46
.org 0x12757c
	ldrb r0, [r6, #0]	@ 0012757c 3078
.org 0x12757e
	strb r0, [r4, #1]	@ 0012757e 6070
.org 0x127580
	ldr r7, [r6, #4]	@ 00127580 7768
.org 0x127582
	str r7, [r4, #36]	@ 00127582 6762
.org 0x127584
	ldr r0, [r6, #8]	@ 00127584 b068
.org 0x127586
	str r0, [r4, #4]	@ 00127586 6060
.org 0x127588
	ldrh r0, [r5, #30]	@ 00127588 e88b
.org 0x12758a
	strh r0, [r4, #12]	@ 0012758a a081
.org 0x12758c
	bl 0x1273cc	@ 0012758c fff71eff
.org 0x127590
	ldrb r1, [r4, #8]	@ 00127590 217a
.org 0x127592
	movs r0, #8	@ 00127592 0820
.org 0x127594
	ldrsb r0, [r5, r0]	@ 00127594 2856
.org 0x127596
	adds r3, r1, r0	@ 00127596 0b18
.org 0x127598
	bpl.n 0x12759c	@ 00127598 00d5
.org 0x12759a
	movs r3, #0	@ 0012759a 0023
.org 0x12759c
	ldr r6, [sp, #12]	@ 0012759c 039e
.org 0x12759e
	cmp r6, #0	@ 0012759e 002e
.org 0x1275a0
	beq.n 0x1275ca	@ 001275a0 13d0
.org 0x1275a2
	mov r6, r9	@ 001275a2 4e46
.org 0x1275a4
	ldrb r0, [r6, #2]	@ 001275a4 b078
.org 0x1275a6
	strb r0, [r4, #30]	@ 001275a6 a077
.org 0x1275a8
	ldrb r1, [r6, #3]	@ 001275a8 f178
.org 0x1275aa
	movs r0, #128	@ 001275aa 8020
.org 0x1275ac
	tst r0, r1	@ 001275ac 0842
.org 0x1275ae
	bne.n 0x1275b6	@ 001275ae 02d1
.org 0x1275b0
	movs r0, #112	@ 001275b0 7020
.org 0x1275b2
	tst r0, r1	@ 001275b2 0842
.org 0x1275b4
	bne.n 0x1275b8	@ 001275b4 00d1
.org 0x1275b6
	movs r1, #8	@ 001275b6 0821
.org 0x1275b8
	strb r1, [r4, #31]	@ 001275b8 e177
.org 0x1275ba
	ldrb r2, [r5, #9]	@ 001275ba 6a7a
.org 0x1275bc
	adds r1, r3, #0	@ 001275bc 191c
.org 0x1275be
	ldr r0, [sp, #12]	@ 001275be 0398
.org 0x1275c0
	ldr r3, [sp, #4]	@ 001275c0 019b
.org 0x1275c2
	ldr r3, [r3, #48]	@ 001275c2 1b6b
.org 0x1275c4
	bl 0x127378	@ 001275c4 fff7d8fe
.org 0x1275c8
	b.n 0x1275d4	@ 001275c8 04e0
.org 0x1275ca
	ldrb r2, [r5, #9]	@ 001275ca 6a7a
.org 0x1275cc
	adds r1, r3, #0	@ 001275cc 191c
.org 0x1275ce
	adds r0, r7, #0	@ 001275ce 381c
.org 0x1275d0
	bl 0x12768c	@ 001275d0 00f05cf8
.org 0x1275d4
	str r0, [r4, #32]	@ 001275d4 2062
.org 0x1275d6
	movs r0, #128	@ 001275d6 8020
.org 0x1275d8
	strb r0, [r4, #0]	@ 001275d8 2070
.org 0x1275da
	ldrb r1, [r5, #0]	@ 001275da 2978
.org 0x1275dc
	movs r0, #240	@ 001275dc f020
.org 0x1275de
	ands r0, r1	@ 001275de 0840
.org 0x1275e0
	strb r0, [r5, #0]	@ 001275e0 2870
.org 0x1275e2
	add sp, #24	@ 001275e2 06b0
.org 0x1275e4
	pop {r0, r1, r2, r3, r4, r5, r6, r7}	@ 001275e4 ffbc
.org 0x1275e6
	mov r8, r0	@ 001275e6 8046
.org 0x1275e8
	mov r9, r1	@ 001275e8 8946
.org 0x1275ea
	mov sl, r2	@ 001275ea 9246
.org 0x1275ec
	mov fp, r3	@ 001275ec 9b46
.org 0x1275ee
	pop {r0}	@ 001275ee 01bc
.org 0x1275f0
	bx r0	@ 001275f0 0047

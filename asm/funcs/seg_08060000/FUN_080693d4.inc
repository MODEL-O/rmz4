@ FUN_080693d4  entry 0x080693d4  size 506
.thumb
.org 0x693d4
FUN_080693d4:
	push {r4, r5, r6, r7, lr}	@ 000693d4 f0b5
.org 0x693d6
	mov r7, sl	@ 000693d6 5746
.org 0x693d8
	mov r6, r9	@ 000693d8 4e46
.org 0x693da
	mov r5, r8	@ 000693da 4546
.org 0x693dc
	push {r5, r6, r7}	@ 000693dc e0b4
.org 0x693de
	sub sp, #36	@ 000693de 89b0
.org 0x693e0
	adds r7, r0, #0	@ 000693e0 071c
.org 0x693e2
	adds r0, #180	@ 000693e2 b430
.org 0x693e4
	ldr r0, [r0, #0]	@ 000693e4 0068
.org 0x693e6
	str r0, [sp, #16]	@ 000693e6 0490
.org 0x693e8
	adds r0, r7, #0	@ 000693e8 381c
.org 0x693ea
	adds r0, #184	@ 000693ea b830
.org 0x693ec
	ldr r0, [r0, #0]	@ 000693ec 0068
.org 0x693ee
	mov r8, r0	@ 000693ee 8046
.org 0x693f0
	adds r0, r7, #0	@ 000693f0 381c
.org 0x693f2
	adds r0, #188	@ 000693f2 bc30
.org 0x693f4
	ldr r0, [r0, #0]	@ 000693f4 0068
.org 0x693f6
	str r0, [sp, #20]	@ 000693f6 0590
.org 0x693f8
	adds r0, r7, #0	@ 000693f8 381c
.org 0x693fa
	adds r0, #192	@ 000693fa c030
.org 0x693fc
	ldr r0, [r0, #0]	@ 000693fc 0068
.org 0x693fe
	str r0, [sp, #24]	@ 000693fe 0690
.org 0x69400
	ldrb r0, [r7, #10]	@ 00069400 b87a
.org 0x69402
	lsrs r6, r0, #4	@ 00069402 0609
.org 0x69404
	movs r5, #1	@ 00069404 0125
.org 0x69406
	ands r6, r5	@ 00069406 2e40
.org 0x69408
	ldrb r0, [r7, #15]	@ 00069408 f87b
.org 0x6940a
	cmp r0, #0	@ 0006940a 0028
.org 0x6940c
	beq.n 0x69410	@ 0006940c 00d0
.org 0x6940e
	b.n 0x69592	@ 0006940e c0e0
.org 0x69410
	ldr r0, [sp, #24]	@ 00069410 0698
.org 0x69412
	ldrb r1, [r0, #10]	@ 00069412 817a
.org 0x69414
	movs r0, #254	@ 00069414 fe20
.org 0x69416
	ands r0, r1	@ 00069416 0840
.org 0x69418
	ldr r1, [sp, #24]	@ 00069418 0699
.org 0x6941a
	strb r0, [r1, #10]	@ 0006941a 8872
.org 0x6941c
	ldr r4, [pc, #72]	@ 0006941c 124c
.org 0x6941e
	ldrh r1, [r4, #0]	@ 0006941e 2188
.org 0x69420
	ldr r0, [sp, #16]	@ 00069420 0498
.org 0x69422
	bl 0x1cf00	@ 00069422 b3f76dfd
.org 0x69426
	ldrh r1, [r4, #20]	@ 00069426 a18a
.org 0x69428
	mov r0, r8	@ 00069428 4046
.org 0x6942a
	bl 0x1cf00	@ 0006942a b3f769fd
.org 0x6942e
	ldrh r1, [r4, #36]	@ 0006942e a18c
.org 0x69430
	ldr r0, [sp, #20]	@ 00069430 0598
.org 0x69432
	bl 0x1cf00	@ 00069432 b3f765fd
.org 0x69436
	adds r6, #1	@ 00069436 0136
.org 0x69438
	movs r0, #1	@ 00069438 0120
.org 0x6943a
	ands r6, r0	@ 0006943a 0640
.org 0x6943c
	adds r1, r6, #0	@ 0006943c 311c
.org 0x6943e
	ands r1, r5	@ 0006943e 2940
.org 0x69440
	adds r0, r7, #0	@ 00069440 381c
.org 0x69442
	adds r0, #76	@ 00069442 4c30
.org 0x69444
	strb r1, [r0, #0]	@ 00069444 0170
.org 0x69446
	adds r3, r7, #0	@ 00069446 3b1c
.org 0x69448
	adds r3, #74	@ 00069448 4a33
.org 0x6944a
	lsls r1, r1, #4	@ 0006944a 0901
.org 0x6944c
	ldrb r2, [r3, #0]	@ 0006944c 1a78
.org 0x6944e
	movs r0, #17	@ 0006944e 1120
.org 0x69450
	negs r0, r0	@ 00069450 4042
.org 0x69452
	ands r0, r2	@ 00069452 1040
.org 0x69454
	orrs r0, r1	@ 00069454 0843
.org 0x69456
	strb r0, [r3, #0]	@ 00069456 1870
.org 0x69458
	adds r0, r6, #0	@ 00069458 301c
.org 0x6945a
	ands r0, r5	@ 0006945a 2840
.org 0x6945c
	cmp r0, #0	@ 0006945c 0028
.org 0x6945e
	beq.n 0x6946c	@ 0006945e 05d0
.org 0x69460
	ldrb r0, [r7, #10]	@ 00069460 b87a
.org 0x69462
	movs r1, #16	@ 00069462 1021
.org 0x69464
	orrs r0, r1	@ 00069464 0843
.org 0x69466
	b.n 0x69472	@ 00069466 04e0
.org 0x69468
	.byte 0x58,0xb6,0x85,0x08	@ 00069468 data
.org 0x6946c
	ldrb r1, [r7, #10]	@ 0006946c b97a
.org 0x6946e
	movs r0, #239	@ 0006946e ef20
.org 0x69470
	ands r0, r1	@ 00069470 0840
.org 0x69472
	strb r0, [r7, #10]	@ 00069472 b872
.org 0x69474
	ldr r4, [sp, #20]	@ 00069474 059c
.org 0x69476
	ldr r2, [r4, #84]	@ 00069476 626d
.org 0x69478
	ldr r3, [r4, #88]	@ 00069478 a36d
.org 0x6947a
	str r2, [sp, #8]	@ 0006947a 0292
.org 0x6947c
	str r3, [sp, #12]	@ 0006947c 0393
.org 0x6947e
	mov r5, r8	@ 0006947e 4546
.org 0x69480
	ldr r0, [r5, #84]	@ 00069480 686d
.org 0x69482
	ldr r1, [r5, #88]	@ 00069482 a96d
.org 0x69484
	str r0, [sp, #0]	@ 00069484 0090
.org 0x69486
	str r1, [sp, #4]	@ 00069486 0191
.org 0x69488
	mov r0, r8	@ 00069488 4046
.org 0x6948a
	str r2, [r0, #84]	@ 0006948a 4265
.org 0x6948c
	str r3, [r0, #88]	@ 0006948c 8365
.org 0x6948e
	ldr r0, [sp, #0]	@ 0006948e 0098
.org 0x69490
	ldr r1, [sp, #4]	@ 00069490 0199
.org 0x69492
	ldr r2, [sp, #24]	@ 00069492 069a
.org 0x69494
	str r0, [r2, #84]	@ 00069494 5065
.org 0x69496
	str r1, [r2, #88]	@ 00069496 9165
.org 0x69498
	ldr r3, [sp, #20]	@ 00069498 059b
.org 0x6949a
	str r0, [r3, #84]	@ 0006949a 5865
.org 0x6949c
	str r1, [r3, #88]	@ 0006949c 9965
.org 0x6949e
	adds r3, #180	@ 0006949e b433
.org 0x694a0
	str r3, [sp, #28]	@ 000694a0 0793
.org 0x694a2
	ldrb r4, [r3, #0]	@ 000694a2 1c78
.org 0x694a4
	adds r4, #128	@ 000694a4 8034
.org 0x694a6
	lsls r4, r4, #24	@ 000694a6 2406
.org 0x694a8
	movs r5, #180	@ 000694a8 b425
.org 0x694aa
	add r5, r8	@ 000694aa 4544
.org 0x694ac
	mov r9, r5	@ 000694ac a946
.org 0x694ae
	ldrb r0, [r5, #0]	@ 000694ae 2878
.org 0x694b0
	adds r0, #128	@ 000694b0 8030
.org 0x694b2
	lsls r0, r0, #24	@ 000694b2 0006
.org 0x694b4
	ldr r5, [pc, #284]	@ 000694b4 474d
.org 0x694b6
	lsrs r1, r0, #24	@ 000694b6 010e
.org 0x694b8
	mov sl, r1	@ 000694b8 8a46
.org 0x694ba
	movs r2, #128	@ 000694ba 8022
.org 0x694bc
	lsls r2, r2, #23	@ 000694bc d205
.org 0x694be
	adds r0, r0, r2	@ 000694be 8018
.org 0x694c0
	lsrs r0, r0, #23	@ 000694c0 c00d
.org 0x694c2
	adds r0, r0, r5	@ 000694c2 4019
.org 0x694c4
	movs r3, #0	@ 000694c4 0023
.org 0x694c6
	ldrsh r0, [r0, r3]	@ 000694c6 c05e
.org 0x694c8
	lsls r1, r0, #1	@ 000694c8 4100
.org 0x694ca
	adds r1, r1, r0	@ 000694ca 0918
.org 0x694cc
	lsls r1, r1, #2	@ 000694cc 8900
.org 0x694ce
	ldr r0, [sp, #0]	@ 000694ce 0098
.org 0x694d0
	adds r0, r0, r1	@ 000694d0 4018
.org 0x694d2
	mov r2, sl	@ 000694d2 5246
.org 0x694d4
	lsls r1, r2, #1	@ 000694d4 5100
.org 0x694d6
	adds r1, r1, r5	@ 000694d6 4919
.org 0x694d8
	movs r3, #0	@ 000694d8 0023
.org 0x694da
	ldrsh r1, [r1, r3]	@ 000694da c95e
.org 0x694dc
	lsls r2, r1, #1	@ 000694dc 4a00
.org 0x694de
	adds r2, r2, r1	@ 000694de 5218
.org 0x694e0
	lsls r2, r2, #2	@ 000694e0 9200
.org 0x694e2
	ldr r1, [sp, #4]	@ 000694e2 0199
.org 0x694e4
	adds r1, r1, r2	@ 000694e4 8918
.org 0x694e6
	movs r3, #192	@ 000694e6 c023
.org 0x694e8
	lsls r3, r3, #24	@ 000694e8 1b06
.org 0x694ea
	adds r2, r4, r3	@ 000694ea e218
.org 0x694ec
	lsrs r2, r2, #23	@ 000694ec d20d
.org 0x694ee
	adds r2, r2, r5	@ 000694ee 5219
.org 0x694f0
	movs r3, #0	@ 000694f0 0023
.org 0x694f2
	ldrsh r2, [r2, r3]	@ 000694f2 d25e
.org 0x694f4
	lsls r3, r2, #1	@ 000694f4 5300
.org 0x694f6
	adds r3, r3, r2	@ 000694f6 9b18
.org 0x694f8
	lsls r3, r3, #2	@ 000694f8 9b00
.org 0x694fa
	ldr r2, [sp, #8]	@ 000694fa 029a
.org 0x694fc
	adds r2, r2, r3	@ 000694fc d218
.org 0x694fe
	lsrs r3, r4, #24	@ 000694fe 230e
.org 0x69500
	str r3, [sp, #32]	@ 00069500 0893
.org 0x69502
	movs r3, #128	@ 00069502 8023
.org 0x69504
	lsls r3, r3, #24	@ 00069504 1b06
.org 0x69506
	adds r4, r4, r3	@ 00069506 e418
.org 0x69508
	lsrs r4, r4, #23	@ 00069508 e40d
.org 0x6950a
	adds r4, r4, r5	@ 0006950a 6419
.org 0x6950c
	movs r5, #0	@ 0006950c 0025
.org 0x6950e
	ldrsh r3, [r4, r5]	@ 0006950e 635f
.org 0x69510
	lsls r4, r3, #1	@ 00069510 5c00
.org 0x69512
	adds r4, r4, r3	@ 00069512 e418
.org 0x69514
	lsls r4, r4, #2	@ 00069514 a400
.org 0x69516
	ldr r3, [sp, #12]	@ 00069516 039b
.org 0x69518
	adds r3, r3, r4	@ 00069518 1b19
.org 0x6951a
	bl 0x10d398	@ 0006951a a3f03dff
.org 0x6951e
	adds r4, r0, #0	@ 0006951e 041c
.org 0x69520
	lsls r4, r4, #24	@ 00069520 2406
.org 0x69522
	lsrs r4, r4, #24	@ 00069522 240e
.org 0x69524
	adds r2, r7, #0	@ 00069524 3a1c
.org 0x69526
	adds r2, #196	@ 00069526 c432
.org 0x69528
	ldrb r1, [r2, #0]	@ 00069528 1178
.org 0x6952a
	adds r1, #128	@ 0006952a 8031
.org 0x6952c
	lsls r1, r1, #24	@ 0006952c 0906
.org 0x6952e
	lsrs r1, r1, #24	@ 0006952e 090e
.org 0x69530
	ldr r0, [sp, #16]	@ 00069530 0498
.org 0x69532
	adds r0, #180	@ 00069532 b430
.org 0x69534
	strb r4, [r0, #0]	@ 00069534 0470
.org 0x69536
	add r0, sp, #32	@ 00069536 08a8
.org 0x69538
	ldrb r3, [r0, #0]	@ 00069538 0378
.org 0x6953a
	mov r0, r9	@ 0006953a 4846
.org 0x6953c
	strb r3, [r0, #0]	@ 0006953c 0370
.org 0x6953e
	ldr r0, [sp, #24]	@ 0006953e 0698
.org 0x69540
	adds r0, #180	@ 00069540 b430
.org 0x69542
	mov r3, sl	@ 00069542 5346
.org 0x69544
	strb r3, [r0, #0]	@ 00069544 0370
.org 0x69546
	ldr r5, [sp, #28]	@ 00069546 079d
.org 0x69548
	strb r3, [r5, #0]	@ 00069548 2b70
.org 0x6954a
	strb r1, [r2, #0]	@ 0006954a 1170
.org 0x6954c
	adds r0, r7, #0	@ 0006954c 381c
.org 0x6954e
	adds r2, r6, #0	@ 0006954e 321c
.org 0x69550
	movs r3, #1	@ 00069550 0123
.org 0x69552
	bl 0x6a7fc	@ 00069552 01f053f9
.org 0x69556
	ldr r0, [sp, #16]	@ 00069556 0498
.org 0x69558
	adds r1, r4, #0	@ 00069558 211c
.org 0x6955a
	adds r2, r6, #0	@ 0006955a 321c
.org 0x6955c
	movs r3, #1	@ 0006955c 0123
.org 0x6955e
	bl 0x6aaf8	@ 0006955e 01f0cbfa
.org 0x69562
	mov r0, r8	@ 00069562 4046
.org 0x69564
	ldr r1, [sp, #32]	@ 00069564 0899
.org 0x69566
	adds r2, r6, #0	@ 00069566 321c
.org 0x69568
	movs r3, #1	@ 00069568 0123
.org 0x6956a
	bl 0x6a8c4	@ 0006956a 01f0abf9
.org 0x6956e
	ldr r0, [sp, #20]	@ 0006956e 0598
.org 0x69570
	mov r1, sl	@ 00069570 5146
.org 0x69572
	adds r2, r6, #0	@ 00069572 321c
.org 0x69574
	movs r3, #1	@ 00069574 0123
.org 0x69576
	bl 0x6a8c4	@ 00069576 01f0a5f9
.org 0x6957a
	ldr r0, [sp, #24]	@ 0006957a 0698
.org 0x6957c
	mov r1, sl	@ 0006957c 5146
.org 0x6957e
	adds r2, r6, #0	@ 0006957e 321c
.org 0x69580
	movs r3, #1	@ 00069580 0123
.org 0x69582
	bl 0x6a8c4	@ 00069582 01f09ff9
.org 0x69586
	adds r0, r7, #0	@ 00069586 381c
.org 0x69588
	bl 0x6ad2c	@ 00069588 01f0d0fb
.org 0x6958c
	ldrb r0, [r7, #15]	@ 0006958c f87b
.org 0x6958e
	adds r0, #1	@ 0006958e 0130
.org 0x69590
	strb r0, [r7, #15]	@ 00069590 f873
.org 0x69592
	ldr r0, [sp, #16]	@ 00069592 0498
.org 0x69594
	bl 0x1cff0	@ 00069594 b3f72cfd
.org 0x69598
	mov r0, r8	@ 00069598 4046
.org 0x6959a
	bl 0x1cff0	@ 0006959a b3f729fd
.org 0x6959e
	ldr r0, [sp, #20]	@ 0006959e 0598
.org 0x695a0
	bl 0x1cff0	@ 000695a0 b3f726fd
.org 0x695a4
	mov r0, r8	@ 000695a4 4046
.org 0x695a6
	adds r0, #115	@ 000695a6 7330
.org 0x695a8
	ldrb r0, [r0, #0]	@ 000695a8 0078
.org 0x695aa
	cmp r0, #3	@ 000695aa 0328
.org 0x695ac
	bne.n 0x695c2	@ 000695ac 09d1
.org 0x695ae
	ldr r0, [sp, #20]	@ 000695ae 0598
.org 0x695b0
	adds r0, #115	@ 000695b0 7330
.org 0x695b2
	ldrb r0, [r0, #0]	@ 000695b2 0078
.org 0x695b4
	cmp r0, #3	@ 000695b4 0328
.org 0x695b6
	bne.n 0x695c2	@ 000695b6 04d1
.org 0x695b8
	movs r1, #0	@ 000695b8 0021
.org 0x695ba
	movs r0, #1	@ 000695ba 0120
.org 0x695bc
	strb r0, [r7, #13]	@ 000695bc 7873
.org 0x695be
	strb r1, [r7, #14]	@ 000695be b973
.org 0x695c0
	strb r1, [r7, #15]	@ 000695c0 f973
.org 0x695c2
	add sp, #36	@ 000695c2 09b0
.org 0x695c4
	pop {r3, r4, r5}	@ 000695c4 38bc
.org 0x695c6
	mov r8, r3	@ 000695c6 9846
.org 0x695c8
	mov r9, r4	@ 000695c8 a146
.org 0x695ca
	mov sl, r5	@ 000695ca aa46
.org 0x695cc
	pop {r4, r5, r6, r7}	@ 000695cc f0bc

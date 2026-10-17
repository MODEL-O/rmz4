@ FUN_080ff438  entry 0x080ff438  size 170
.thumb
.org 0xff438
FUN_080ff438:
	push {r2, r4, r6, lr}	@ 000ff438 54b5
.org 0xff43a
	lsrs r6, r0, #2	@ 000ff43a 8608
.org 0xff43c
	.byte 0x89,0xf9	@ 000ff43c (raw)
.org 0xff43e
	.byte 0x0f,0x08	@ 000ff43e (raw)
.org 0xff440
	push {r2, r3, r4, r6, r7, lr}	@ 000ff440 dcb5
.org 0xff442
	lsrs r6, r0, #2	@ 000ff442 8608
.org 0xff444
	str r2, [sp, #1008]	@ 000ff444 fc92
.org 0xff446
	lsrs r6, r0, #2	@ 000ff446 8608
.org 0xff448
	push {r4, lr}	@ 000ff448 10b5
.org 0xff44a
	adds r4, r0, #0	@ 000ff44a 041c
.org 0xff44c
	bl 0x1cc9c	@ 000ff44c 1df726fc
.org 0xff450
	ldrb r1, [r4, #10]	@ 000ff450 a17a
.org 0xff452
	movs r0, #1	@ 000ff452 0120
.org 0xff454
	orrs r0, r1	@ 000ff454 0843
.org 0xff456
	movs r1, #2	@ 000ff456 0221
.org 0xff458
	orrs r0, r1	@ 000ff458 0843
.org 0xff45a
	strb r0, [r4, #10]	@ 000ff45a a072
.org 0xff45c
	ldrb r0, [r4, #17]	@ 000ff45c 607c
.org 0xff45e
	cmp r0, #0	@ 000ff45e 0028
.org 0xff460
	beq.n 0xff476	@ 000ff460 09d0
.org 0xff462
	movs r1, #170	@ 000ff462 aa21
.org 0xff464
	lsls r1, r1, #8	@ 000ff464 0902
.org 0xff466
	adds r0, r4, #0	@ 000ff466 201c
.org 0xff468
	bl 0x1cf00	@ 000ff468 1df74afd
.org 0xff46c
	ldr r0, [r4, #84]	@ 000ff46c 606d
.org 0xff46e
	ldr r1, [r4, #88]	@ 000ff46e a16d
.org 0xff470
	bl 0x8748	@ 000ff470 09f76af9
.org 0xff474
	b.n 0xff486	@ 000ff474 07e0
.org 0xff476
	ldr r1, [pc, #108]	@ 000ff476 1b49
.org 0xff478
	adds r0, r4, #0	@ 000ff478 201c
.org 0xff47a
	bl 0x1cf00	@ 000ff47a 1df741fd
.org 0xff47e
	ldr r0, [r4, #84]	@ 000ff47e 606d
.org 0xff480
	ldr r1, [r4, #88]	@ 000ff480 a16d
.org 0xff482
	bl 0x8534	@ 000ff482 09f757f8
.org 0xff486
	str r0, [r4, #88]	@ 000ff486 a065
.org 0xff488
	adds r0, r4, #0	@ 000ff488 201c
.org 0xff48a
	bl 0x1cff0	@ 000ff48a 1df7b1fd
.org 0xff48e
	movs r2, #0	@ 000ff48e 0022
.org 0xff490
	ldrb r1, [r4, #10]	@ 000ff490 a17a
.org 0xff492
	movs r0, #239	@ 000ff492 ef20
.org 0xff494
	ands r0, r1	@ 000ff494 0840
.org 0xff496
	strb r0, [r4, #10]	@ 000ff496 a072
.org 0xff498
	movs r3, #1	@ 000ff498 0123
.org 0xff49a
	adds r0, r4, #0	@ 000ff49a 201c
.org 0xff49c
	adds r0, #76	@ 000ff49c 4c30
.org 0xff49e
	strb r2, [r0, #0]	@ 000ff49e 0270
.org 0xff4a0
	adds r2, r4, #0	@ 000ff4a0 221c
.org 0xff4a2
	adds r2, #74	@ 000ff4a2 4a32
.org 0xff4a4
	ldrb r1, [r2, #0]	@ 000ff4a4 1178
.org 0xff4a6
	movs r0, #17	@ 000ff4a6 1120
.org 0xff4a8
	negs r0, r0	@ 000ff4a8 4042
.org 0xff4aa
	ands r0, r1	@ 000ff4aa 0840
.org 0xff4ac
	strb r0, [r2, #0]	@ 000ff4ac 1070
.org 0xff4ae
	subs r2, #1	@ 000ff4ae 013a
.org 0xff4b0
	ldrb r1, [r2, #0]	@ 000ff4b0 1178
.org 0xff4b2
	movs r0, #13	@ 000ff4b2 0d20
.org 0xff4b4
	negs r0, r0	@ 000ff4b4 4042
.org 0xff4b6
	ands r0, r1	@ 000ff4b6 0840
.org 0xff4b8
	movs r1, #4	@ 000ff4b8 0421
.org 0xff4ba
	orrs r0, r1	@ 000ff4ba 0843
.org 0xff4bc
	strb r0, [r2, #0]	@ 000ff4bc 1070
.org 0xff4be
	adds r1, r4, #0	@ 000ff4be 211c
.org 0xff4c0
	adds r1, #184	@ 000ff4c0 b831
.org 0xff4c2
	ldr r0, [r4, #88]	@ 000ff4c2 a06d
.org 0xff4c4
	str r0, [r1, #0]	@ 000ff4c4 0860
.org 0xff4c6
	ldr r1, [pc, #32]	@ 000ff4c6 0849
.org 0xff4c8
	ldrb r0, [r4, #9]	@ 000ff4c8 607a
.org 0xff4ca
	lsls r0, r0, #2	@ 000ff4ca 8000
.org 0xff4cc
	adds r0, r0, r1	@ 000ff4cc 4018
.org 0xff4ce
	str r3, [r4, #12]	@ 000ff4ce e360
.org 0xff4d0
	ldr r0, [r0, #0]	@ 000ff4d0 0068
.org 0xff4d2
	ldr r0, [r0, #4]	@ 000ff4d2 4068
.org 0xff4d4
	str r0, [r4, #20]	@ 000ff4d4 6061
.org 0xff4d6
	adds r0, r4, #0	@ 000ff4d6 201c
.org 0xff4d8
	bl 0xff134	@ 000ff4d8 fff72cfe
.org 0xff4dc
	pop {r4}	@ 000ff4dc 10bc
.org 0xff4de
	pop {r0}	@ 000ff4de 01bc
.org 0xff4e0
	bx r0	@ 000ff4e0 0047

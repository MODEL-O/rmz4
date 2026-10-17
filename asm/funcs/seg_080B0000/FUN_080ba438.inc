@ FUN_080ba438  entry 0x080ba438  size 232
.thumb
.org 0xba438
FUN_080ba438:
	.byte 0x30,0xb5	@ 000ba438 (raw)
.org 0xba43a
	.byte 0x05,0x1c	@ 000ba43a (raw)
.org 0xba43c
	ldr r1, [r5, #40]	@ 000ba43c a96a
.org 0xba43e
	ldrb r0, [r5, #15]	@ 000ba43e e87b
.org 0xba440
	cmp r0, #0	@ 000ba440 0028
.org 0xba442
	bne.n 0xba482	@ 000ba442 1ed1
.org 0xba444
	adds r1, #191	@ 000ba444 bf31
.org 0xba446
	ldrb r0, [r1, #0]	@ 000ba446 0878
.org 0xba448
	movs r4, #4	@ 000ba448 0424
.org 0xba44a
	orrs r0, r4	@ 000ba44a 2043
.org 0xba44c
	strb r0, [r1, #0]	@ 000ba44c 0870
.org 0xba44e
	adds r0, r5, #0	@ 000ba44e 281c
.org 0xba450
	adds r0, #116	@ 000ba450 7430
.org 0xba452
	ldr r1, [pc, #204]	@ 000ba452 3349
.org 0xba454
	bl 0x5784	@ 000ba454 4bf796f9
.org 0xba458
	ldr r1, [pc, #200]	@ 000ba458 3249
.org 0xba45a
	ldr r0, [pc, #204]	@ 000ba45a 3348
.org 0xba45c
	strh r0, [r1, #0]	@ 000ba45c 0880
.org 0xba45e
	adds r2, r5, #0	@ 000ba45e 2a1c
.org 0xba460
	adds r2, #69	@ 000ba460 4532
.org 0xba462
	ldrb r1, [r2, #0]	@ 000ba462 1178
.org 0xba464
	movs r0, #13	@ 000ba464 0d20
.org 0xba466
	negs r0, r0	@ 000ba466 4042
.org 0xba468
	ands r0, r1	@ 000ba468 0840
.org 0xba46a
	orrs r0, r4	@ 000ba46a 2043
.org 0xba46c
	strb r0, [r2, #0]	@ 000ba46c 1070
.org 0xba46e
	movs r1, #191	@ 000ba46e bf21
.org 0xba470
	lsls r1, r1, #8	@ 000ba470 0902
.org 0xba472
	adds r0, r5, #0	@ 000ba472 281c
.org 0xba474
	bl 0x1cf00	@ 000ba474 62f744fd
.org 0xba478
	movs r0, #32	@ 000ba478 2020
.org 0xba47a
	strb r0, [r5, #18]	@ 000ba47a a874
.org 0xba47c
	ldrb r0, [r5, #15]	@ 000ba47c e87b
.org 0xba47e
	adds r0, #1	@ 000ba47e 0130
.org 0xba480
	strb r0, [r5, #15]	@ 000ba480 e873
.org 0xba482
	adds r0, r5, #0	@ 000ba482 281c
.org 0xba484
	bl 0x1cff0	@ 000ba484 62f7b4fd
.org 0xba488
	ldrb r0, [r5, #18]	@ 000ba488 a87c
.org 0xba48a
	subs r4, r0, #1	@ 000ba48a 441e
.org 0xba48c
	strb r4, [r5, #18]	@ 000ba48c ac74
.org 0xba48e
	ldrb r0, [r5, #18]	@ 000ba48e a87c
.org 0xba490
	ldr r2, [pc, #152]	@ 000ba490 264a
.org 0xba492
	lsls r0, r0, #25	@ 000ba492 4006
.org 0xba494
	lsrs r0, r0, #23	@ 000ba494 c00d
.org 0xba496
	adds r0, r0, r2	@ 000ba496 8018
.org 0xba498
	movs r1, #0	@ 000ba498 0021
.org 0xba49a
	ldrsh r0, [r0, r1]	@ 000ba49a 405e
.org 0xba49c
	adds r1, r0, #0	@ 000ba49c 011c
.org 0xba49e
	cmp r0, #0	@ 000ba49e 0028
.org 0xba4a0
	bge.n 0xba4a4	@ 000ba4a0 00da
.org 0xba4a2
	adds r1, r0, #3	@ 000ba4a2 c11c
.org 0xba4a4
	asrs r0, r1, #2	@ 000ba4a4 8810
.org 0xba4a6
	lsls r0, r0, #24	@ 000ba4a6 0006
.org 0xba4a8
	lsrs r0, r0, #23	@ 000ba4a8 c00d
.org 0xba4aa
	adds r0, r0, r2	@ 000ba4aa 8018
.org 0xba4ac
	movs r1, #0	@ 000ba4ac 0021
.org 0xba4ae
	ldrsh r0, [r0, r1]	@ 000ba4ae 405e
.org 0xba4b0
	cmp r0, #0	@ 000ba4b0 0028
.org 0xba4b2
	bge.n 0xba4b6	@ 000ba4b2 00da
.org 0xba4b4
	adds r0, #15	@ 000ba4b4 0f30
.org 0xba4b6
	asrs r2, r0, #4	@ 000ba4b6 0211
.org 0xba4b8
	ldr r3, [pc, #104]	@ 000ba4b8 1a4b
.org 0xba4ba
	movs r0, #31	@ 000ba4ba 1f20
.org 0xba4bc
	adds r1, r2, #0	@ 000ba4bc 111c
.org 0xba4be
	ands r1, r0	@ 000ba4be 0140
.org 0xba4c0
	movs r0, #16	@ 000ba4c0 1020
.org 0xba4c2
	subs r0, r0, r2	@ 000ba4c2 801a
.org 0xba4c4
	lsls r0, r0, #8	@ 000ba4c4 0002
.org 0xba4c6
	orrs r1, r0	@ 000ba4c6 0143
.org 0xba4c8
	strh r1, [r3, #2]	@ 000ba4c8 5980
.org 0xba4ca
	lsls r0, r4, #24	@ 000ba4ca 2006
.org 0xba4cc
	lsrs r2, r0, #24	@ 000ba4cc 020e
.org 0xba4ce
	cmp r2, #0	@ 000ba4ce 002a
.org 0xba4d0
	bne.n 0xba51a	@ 000ba4d0 23d1
.org 0xba4d2
	strh r2, [r3, #0]	@ 000ba4d2 1a80
.org 0xba4d4
	adds r3, r5, #0	@ 000ba4d4 2b1c
.org 0xba4d6
	adds r3, #69	@ 000ba4d6 4533
.org 0xba4d8
	ldrb r1, [r3, #0]	@ 000ba4d8 1978
.org 0xba4da
	movs r0, #13	@ 000ba4da 0d20
.org 0xba4dc
	negs r0, r0	@ 000ba4dc 4042
.org 0xba4de
	ands r0, r1	@ 000ba4de 0840
.org 0xba4e0
	strb r0, [r3, #0]	@ 000ba4e0 1870
.org 0xba4e2
	ldrb r1, [r5, #10]	@ 000ba4e2 a97a
.org 0xba4e4
	movs r0, #254	@ 000ba4e4 fe20
.org 0xba4e6
	ands r0, r1	@ 000ba4e6 0840
.org 0xba4e8
	movs r1, #253	@ 000ba4e8 fd21
.org 0xba4ea
	ands r0, r1	@ 000ba4ea 0840
.org 0xba4ec
	strb r0, [r5, #10]	@ 000ba4ec a872
.org 0xba4ee
	adds r0, r5, #0	@ 000ba4ee 281c
.org 0xba4f0
	adds r0, #140	@ 000ba4f0 8c30
.org 0xba4f2
	str r2, [r0, #0]	@ 000ba4f2 0260
.org 0xba4f4
	adds r0, #4	@ 000ba4f4 0430
.org 0xba4f6
	str r2, [r0, #0]	@ 000ba4f6 0260
.org 0xba4f8
	adds r1, r5, #0	@ 000ba4f8 291c
.org 0xba4fa
	adds r1, #148	@ 000ba4fa 9431
.org 0xba4fc
	movs r0, #0	@ 000ba4fc 0020
.org 0xba4fe
	strb r0, [r1, #0]	@ 000ba4fe 0870
.org 0xba500
	ldrb r1, [r5, #10]	@ 000ba500 a97a
.org 0xba502
	movs r0, #251	@ 000ba502 fb20
.org 0xba504
	ands r0, r1	@ 000ba504 0840
.org 0xba506
	strb r0, [r5, #10]	@ 000ba506 a872
.org 0xba508
	ldr r1, [pc, #36]	@ 000ba508 0949
.org 0xba50a
	ldrb r0, [r5, #9]	@ 000ba50a 687a
.org 0xba50c
	lsls r0, r0, #2	@ 000ba50c 8000
.org 0xba50e
	adds r0, r0, r1	@ 000ba50e 4018
.org 0xba510
	movs r1, #3	@ 000ba510 0321
.org 0xba512
	str r1, [r5, #12]	@ 000ba512 e960
.org 0xba514
	ldr r0, [r0, #0]	@ 000ba514 0068
.org 0xba516
	ldr r0, [r0, #12]	@ 000ba516 c068
.org 0xba518
	str r0, [r5, #20]	@ 000ba518 6861
.org 0xba51a
	pop {r4, r5}	@ 000ba51a 30bc
.org 0xba51c
	pop {r0}	@ 000ba51c 01bc
.org 0xba51e
	bx r0	@ 000ba51e 0047

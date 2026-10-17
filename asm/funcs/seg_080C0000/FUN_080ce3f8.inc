@ FUN_080ce3f8  entry 0x080ce3f8  size 164
.thumb
.org 0xce3f8
FUN_080ce3f8:
	push {r4, r5, r6, r7, lr}	@ 000ce3f8 f0b5
.org 0xce3fa
	mov r7, r8	@ 000ce3fa 4746
.org 0xce3fc
	push {r7}	@ 000ce3fc 80b4
.org 0xce3fe
	adds r4, r0, #0	@ 000ce3fe 041c
.org 0xce400
	movs r0, #188	@ 000ce400 bc20
.org 0xce402
	adds r0, r0, r4	@ 000ce402 0019
.org 0xce404
	mov r8, r0	@ 000ce404 8046
.org 0xce406
	ldr r5, [r0, #0]	@ 000ce406 0568
.org 0xce408
	adds r0, r4, #0	@ 000ce408 201c
.org 0xce40a
	adds r0, #180	@ 000ce40a b430
.org 0xce40c
	ldrb r6, [r0, #0]	@ 000ce40c 0678
.org 0xce40e
	adds r7, r6, #0	@ 000ce40e 371c
.org 0xce410
	ldrb r0, [r4, #15]	@ 000ce410 e07b
.org 0xce412
	cmp r0, #0	@ 000ce412 0028
.org 0xce414
	bne.n 0xce438	@ 000ce414 10d1
.org 0xce416
	adds r0, r4, #0	@ 000ce416 201c
.org 0xce418
	adds r0, #116	@ 000ce418 7430
.org 0xce41a
	ldr r1, [pc, #128]	@ 000ce41a 2049
.org 0xce41c
	bl 0x5784	@ 000ce41c 37f7b2f9
.org 0xce420
	ldr r1, [pc, #124]	@ 000ce420 1f49
.org 0xce422
	adds r0, r4, #0	@ 000ce422 201c
.org 0xce424
	bl 0x1cf00	@ 000ce424 4ef76cfd
.org 0xce428
	movs r5, #128	@ 000ce428 8025
.org 0xce42a
	lsls r5, r5, #2	@ 000ce42a ad00
.org 0xce42c
	movs r0, #16	@ 000ce42c 1020
.org 0xce42e
	negs r0, r0	@ 000ce42e 4042
.org 0xce430
	str r0, [r4, #100]	@ 000ce430 6066
.org 0xce432
	ldrb r0, [r4, #15]	@ 000ce432 e07b
.org 0xce434
	adds r0, #1	@ 000ce434 0130
.org 0xce436
	strb r0, [r4, #15]	@ 000ce436 e073
.org 0xce438
	adds r0, r4, #0	@ 000ce438 201c
.org 0xce43a
	bl 0x1cff0	@ 000ce43a 4ef7d9fd
.org 0xce43e
	ldr r2, [pc, #100]	@ 000ce43e 194a
.org 0xce440
	adds r0, r6, #0	@ 000ce440 301c
.org 0xce442
	adds r0, #64	@ 000ce442 4030
.org 0xce444
	lsls r0, r0, #24	@ 000ce444 0006
.org 0xce446
	lsrs r0, r0, #23	@ 000ce446 c00d
.org 0xce448
	adds r0, r0, r2	@ 000ce448 8018
.org 0xce44a
	movs r1, #0	@ 000ce44a 0021
.org 0xce44c
	ldrsh r0, [r0, r1]	@ 000ce44c 405e
.org 0xce44e
	muls r0, r5	@ 000ce44e 6843
.org 0xce450
	cmp r0, #0	@ 000ce450 0028
.org 0xce452
	bge.n 0xce456	@ 000ce452 00da
.org 0xce454
	adds r0, #255	@ 000ce454 ff30
.org 0xce456
	asrs r1, r0, #8	@ 000ce456 0112
.org 0xce458
	ldr r0, [r4, #84]	@ 000ce458 606d
.org 0xce45a
	adds r0, r0, r1	@ 000ce45a 4018
.org 0xce45c
	str r0, [r4, #84]	@ 000ce45c 6065
.org 0xce45e
	lsls r0, r7, #1	@ 000ce45e 7800
.org 0xce460
	adds r0, r0, r2	@ 000ce460 8018
.org 0xce462
	movs r1, #0	@ 000ce462 0021
.org 0xce464
	ldrsh r0, [r0, r1]	@ 000ce464 405e
.org 0xce466
	muls r0, r5	@ 000ce466 6843
.org 0xce468
	cmp r0, #0	@ 000ce468 0028
.org 0xce46a
	bge.n 0xce46e	@ 000ce46a 00da
.org 0xce46c
	adds r0, #255	@ 000ce46c ff30
.org 0xce46e
	asrs r0, r0, #8	@ 000ce46e 0012
.org 0xce470
	ldr r1, [r4, #88]	@ 000ce470 a16d
.org 0xce472
	adds r1, r1, r0	@ 000ce472 0918
.org 0xce474
	str r1, [r4, #88]	@ 000ce474 a165
.org 0xce476
	ldr r0, [r4, #100]	@ 000ce476 606e
.org 0xce478
	adds r5, r5, r0	@ 000ce478 2d18
.org 0xce47a
	cmp r5, #127	@ 000ce47a 7f2d
.org 0xce47c
	bgt.n 0xce480	@ 000ce47c 00dc
.org 0xce47e
	movs r5, #128	@ 000ce47e 8025
.org 0xce480
	mov r0, r8	@ 000ce480 4046
.org 0xce482
	str r5, [r0, #0]	@ 000ce482 0560
.org 0xce484
	cmp r5, #128	@ 000ce484 802d
.org 0xce486
	bne.n 0xce492	@ 000ce486 04d1
.org 0xce488
	movs r1, #0	@ 000ce488 0021
.org 0xce48a
	movs r0, #1	@ 000ce48a 0120
.org 0xce48c
	strb r0, [r4, #13]	@ 000ce48c 6073
.org 0xce48e
	strb r1, [r4, #14]	@ 000ce48e a173
.org 0xce490
	strb r1, [r4, #15]	@ 000ce490 e173
.org 0xce492
	pop {r3}	@ 000ce492 08bc
.org 0xce494
	mov r8, r3	@ 000ce494 9846
.org 0xce496
	pop {r4, r5, r6, r7}	@ 000ce496 f0bc
.org 0xce498
	pop {r0}	@ 000ce498 01bc
.org 0xce49a
	bx r0	@ 000ce49a 0047

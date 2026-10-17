@ FUN_080ab3e4  entry 0x080ab3e4  size 394
.thumb
.org 0xab3e4
FUN_080ab3e4:
	push {r4, r5, r6, r7, lr}	@ 000ab3e4 f0b5
.org 0xab3e6
	mov r7, r9	@ 000ab3e6 4f46
.org 0xab3e8
	mov r6, r8	@ 000ab3e8 4646
.org 0xab3ea
	push {r6, r7}	@ 000ab3ea c0b4
.org 0xab3ec
	adds r6, r0, #0	@ 000ab3ec 061c
.org 0xab3ee
	ldrb r0, [r6, #10]	@ 000ab3ee b07a
.org 0xab3f0
	lsrs r7, r0, #4	@ 000ab3f0 0709
.org 0xab3f2
	movs r0, #1	@ 000ab3f2 0120
.org 0xab3f4
	ands r7, r0	@ 000ab3f4 0740
.org 0xab3f6
	movs r0, #0	@ 000ab3f6 0020
.org 0xab3f8
	mov r9, r0	@ 000ab3f8 8146
.org 0xab3fa
	mov r8, r0	@ 000ab3fa 8046
.org 0xab3fc
	ldrb r0, [r6, #15]	@ 000ab3fc f07b
.org 0xab3fe
	cmp r0, #0	@ 000ab3fe 0028
.org 0xab400
	bne.n 0xab410	@ 000ab400 06d1
.org 0xab402
	ldr r1, [pc, #84]	@ 000ab402 1549
.org 0xab404
	adds r0, r6, #0	@ 000ab404 301c
.org 0xab406
	bl 0x1cf00	@ 000ab406 71f77bfd
.org 0xab40a
	ldrb r0, [r6, #15]	@ 000ab40a f07b
.org 0xab40c
	adds r0, #1	@ 000ab40c 0130
.org 0xab40e
	strb r0, [r6, #15]	@ 000ab40e f073
.org 0xab410
	adds r0, r6, #0	@ 000ab410 301c
.org 0xab412
	bl 0x1cff0	@ 000ab412 71f7edfd
.org 0xab416
	adds r0, r6, #0	@ 000ab416 301c
.org 0xab418
	adds r0, #116	@ 000ab418 7430
.org 0xab41a
	ldr r1, [pc, #64]	@ 000ab41a 1049
.org 0xab41c
	bl 0x5784	@ 000ab41c 5af7b2f9
.org 0xab420
	adds r0, r6, #0	@ 000ab420 301c
.org 0xab422
	adds r0, #180	@ 000ab422 b430
.org 0xab424
	movs r1, #0	@ 000ab424 0021
.org 0xab426
	ldrsh r0, [r0, r1]	@ 000ab426 405e
.org 0xab428
	cmp r0, #0	@ 000ab428 0028
.org 0xab42a
	beq.n 0xab4c0	@ 000ab42a 49d0
.org 0xab42c
	ldr r0, [r6, #88]	@ 000ab42c b06d
.org 0xab42e
	ldr r1, [r6, #96]	@ 000ab42e 316e
.org 0xab430
	adds r0, r0, r1	@ 000ab430 4018
.org 0xab432
	str r0, [r6, #88]	@ 000ab432 b065
.org 0xab434
	ldr r4, [r6, #84]	@ 000ab434 746d
.org 0xab436
	ldr r5, [r6, #88]	@ 000ab436 b56d
.org 0xab438
	adds r0, r4, #0	@ 000ab438 201c
.org 0xab43a
	adds r1, r5, #0	@ 000ab43a 291c
.org 0xab43c
	bl 0x7c7c	@ 000ab43c 5cf71efc
.org 0xab440
	lsls r0, r0, #16	@ 000ab440 0004
.org 0xab442
	cmp r0, #0	@ 000ab442 0028
.org 0xab444
	beq.n 0xab460	@ 000ab444 0cd0
.org 0xab446
	adds r0, r4, #0	@ 000ab446 201c
.org 0xab448
	adds r1, r5, #0	@ 000ab448 291c
.org 0xab44a
	bl 0x8534	@ 000ab44a 5df773f8
.org 0xab44e
	subs r0, #1	@ 000ab44e 0138
.org 0xab450
	str r0, [r6, #88]	@ 000ab450 b065
.org 0xab452
	movs r0, #1	@ 000ab452 0120
.org 0xab454
	mov r9, r0	@ 000ab454 8146
.org 0xab456
	b.n 0xab470	@ 000ab456 0be0
.org 0xab458
	.byte 0x05,0x90,0x00,0x00	@ 000ab458 data
.org 0xab45c
	.byte 0xe4,0x2b,0x86,0x08	@ 000ab45c data
.org 0xab460
	ldr r0, [r6, #96]	@ 000ab460 306e
.org 0xab462
	adds r0, #64	@ 000ab462 4030
.org 0xab464
	str r0, [r6, #96]	@ 000ab464 3066
.org 0xab466
	movs r1, #224	@ 000ab466 e021
.org 0xab468
	lsls r1, r1, #3	@ 000ab468 c900
.org 0xab46a
	cmp r0, r1	@ 000ab46a 8842
.org 0xab46c
	ble.n 0xab470	@ 000ab46c 00dd
.org 0xab46e
	str r1, [r6, #96]	@ 000ab46e 3166
.org 0xab470
	ldr r0, [r6, #84]	@ 000ab470 706d
.org 0xab472
	ldr r1, [r6, #92]	@ 000ab472 f16d
.org 0xab474
	adds r0, r0, r1	@ 000ab474 4018
.org 0xab476
	str r0, [r6, #84]	@ 000ab476 7065
.org 0xab478
	cmp r1, #0	@ 000ab478 0029
.org 0xab47a
	bge.n 0xab49e	@ 000ab47a 10da
.org 0xab47c
	ldr r4, [r6, #84]	@ 000ab47c 746d
.org 0xab47e
	ldr r5, [r6, #88]	@ 000ab47e b56d
.org 0xab480
	adds r0, r4, #0	@ 000ab480 201c
.org 0xab482
	adds r1, r5, #0	@ 000ab482 291c
.org 0xab484
	bl 0x7c7c	@ 000ab484 5cf7fafb
.org 0xab488
	lsls r0, r0, #16	@ 000ab488 0004
.org 0xab48a
	cmp r0, #0	@ 000ab48a 0028
.org 0xab48c
	beq.n 0xab530	@ 000ab48c 50d0
.org 0xab48e
	adds r0, r4, #0	@ 000ab48e 201c
.org 0xab490
	adds r1, r5, #0	@ 000ab490 291c
.org 0xab492
	bl 0x8988	@ 000ab492 5df779fa
.org 0xab496
	str r0, [r6, #84]	@ 000ab496 7065
.org 0xab498
	movs r1, #1	@ 000ab498 0121
.org 0xab49a
	mov r8, r1	@ 000ab49a 8846
.org 0xab49c
	b.n 0xab530	@ 000ab49c 48e0
.org 0xab49e
	ldr r4, [r6, #84]	@ 000ab49e 746d
.org 0xab4a0
	ldr r5, [r6, #88]	@ 000ab4a0 b56d
.org 0xab4a2
	adds r0, r4, #0	@ 000ab4a2 201c
.org 0xab4a4
	adds r1, r5, #0	@ 000ab4a4 291c
.org 0xab4a6
	bl 0x7c7c	@ 000ab4a6 5cf7e9fb
.org 0xab4aa
	lsls r0, r0, #16	@ 000ab4aa 0004
.org 0xab4ac
	cmp r0, #0	@ 000ab4ac 0028
.org 0xab4ae
	beq.n 0xab530	@ 000ab4ae 3fd0
.org 0xab4b0
	adds r0, r4, #0	@ 000ab4b0 201c
.org 0xab4b2
	adds r1, r5, #0	@ 000ab4b2 291c
.org 0xab4b4
	bl 0x8868	@ 000ab4b4 5df7d8f9
.org 0xab4b8
	str r0, [r6, #84]	@ 000ab4b8 7065
.org 0xab4ba
	movs r0, #1	@ 000ab4ba 0120
.org 0xab4bc
	mov r8, r0	@ 000ab4bc 8046
.org 0xab4be
	b.n 0xab530	@ 000ab4be 37e0
.org 0xab4c0
	ldr r0, [r6, #88]	@ 000ab4c0 b06d
.org 0xab4c2
	ldr r2, [r6, #96]	@ 000ab4c2 326e
.org 0xab4c4
	adds r0, r0, r2	@ 000ab4c4 8018
.org 0xab4c6
	str r0, [r6, #88]	@ 000ab4c6 b065
.org 0xab4c8
	ldr r0, [r6, #84]	@ 000ab4c8 706d
.org 0xab4ca
	ldr r1, [r6, #92]	@ 000ab4ca f16d
.org 0xab4cc
	adds r0, r0, r1	@ 000ab4cc 4018
.org 0xab4ce
	str r0, [r6, #84]	@ 000ab4ce 7065
.org 0xab4d0
	adds r2, #64	@ 000ab4d0 4032
.org 0xab4d2
	str r2, [r6, #96]	@ 000ab4d2 3266
.org 0xab4d4
	movs r0, #224	@ 000ab4d4 e020
.org 0xab4d6
	lsls r0, r0, #3	@ 000ab4d6 c000
.org 0xab4d8
	cmp r2, r0	@ 000ab4d8 8242
.org 0xab4da
	ble.n 0xab4de	@ 000ab4da 00dd
.org 0xab4dc
	str r0, [r6, #96]	@ 000ab4dc 3066
.org 0xab4de
	ldr r0, [pc, #72]	@ 000ab4de 1248
.org 0xab4e0
	adds r1, r6, #0	@ 000ab4e0 311c
.org 0xab4e2
	adds r1, #84	@ 000ab4e2 5431
.org 0xab4e4
	bl 0x1fb14	@ 000ab4e4 74f716fb
.org 0xab4e8
	movs r1, #128	@ 000ab4e8 8021
.org 0xab4ea
	lsls r1, r1, #6	@ 000ab4ea 8901
.org 0xab4ec
	cmp r0, r1	@ 000ab4ec 8842
.org 0xab4ee
	bls.n 0xab530	@ 000ab4ee 1fd9
.org 0xab4f0
	ldrb r1, [r6, #10]	@ 000ab4f0 b17a
.org 0xab4f2
	movs r0, #254	@ 000ab4f2 fe20
.org 0xab4f4
	ands r0, r1	@ 000ab4f4 0840
.org 0xab4f6
	movs r1, #253	@ 000ab4f6 fd21
.org 0xab4f8
	ands r0, r1	@ 000ab4f8 0840
.org 0xab4fa
	strb r0, [r6, #10]	@ 000ab4fa b072
.org 0xab4fc
	adds r0, r6, #0	@ 000ab4fc 301c
.org 0xab4fe
	adds r0, #140	@ 000ab4fe 8c30
.org 0xab500
	mov r1, r8	@ 000ab500 4146
.org 0xab502
	str r1, [r0, #0]	@ 000ab502 0160
.org 0xab504
	adds r0, #4	@ 000ab504 0430
.org 0xab506
	str r1, [r0, #0]	@ 000ab506 0160
.org 0xab508
	adds r0, #4	@ 000ab508 0430
.org 0xab50a
	strb r1, [r0, #0]	@ 000ab50a 0170
.org 0xab50c
	ldrb r1, [r6, #10]	@ 000ab50c b17a
.org 0xab50e
	movs r0, #251	@ 000ab50e fb20
.org 0xab510
	ands r0, r1	@ 000ab510 0840
.org 0xab512
	strb r0, [r6, #10]	@ 000ab512 b072
.org 0xab514
	ldr r1, [pc, #20]	@ 000ab514 0549
.org 0xab516
	ldrb r0, [r6, #9]	@ 000ab516 707a
.org 0xab518
	lsls r0, r0, #2	@ 000ab518 8000
.org 0xab51a
	adds r0, r0, r1	@ 000ab51a 4018
.org 0xab51c
	movs r1, #3	@ 000ab51c 0321
.org 0xab51e
	str r1, [r6, #12]	@ 000ab51e f160
.org 0xab520
	ldr r0, [r0, #0]	@ 000ab520 0068
.org 0xab522
	ldr r0, [r0, #12]	@ 000ab522 c068
.org 0xab524
	str r0, [r6, #20]	@ 000ab524 7061
.org 0xab526
	b.n 0xab572	@ 000ab526 24e0
.org 0xab528
	.byte 0xf8,0xe9,0x02,0x02	@ 000ab528 data
.org 0xab52c
	.byte 0x40,0xdb,0x85,0x08	@ 000ab52c data
.org 0xab530
	mov r0, r9	@ 000ab530 4846
.org 0xab532
	cmp r0, #0	@ 000ab532 0028
.org 0xab534
	beq.n 0xab572	@ 000ab534 1dd0
.org 0xab536
	mov r1, r8	@ 000ab536 4146
.org 0xab538
	adds r2, r7, r1	@ 000ab538 7a18
.org 0xab53a
	movs r0, #1	@ 000ab53a 0120
.org 0xab53c
	ands r2, r0	@ 000ab53c 0240
.org 0xab53e
	cmp r2, #0	@ 000ab53e 002a
.org 0xab540
	beq.n 0xab54a	@ 000ab540 03d0
.org 0xab542
	ldrb r1, [r6, #10]	@ 000ab542 b17a
.org 0xab544
	movs r0, #16	@ 000ab544 1020
.org 0xab546
	orrs r0, r1	@ 000ab546 0843
.org 0xab548
	b.n 0xab550	@ 000ab548 02e0
.org 0xab54a
	ldrb r1, [r6, #10]	@ 000ab54a b17a
.org 0xab54c
	movs r0, #239	@ 000ab54c ef20
.org 0xab54e
	ands r0, r1	@ 000ab54e 0840
.org 0xab550
	strb r0, [r6, #10]	@ 000ab550 b072
.org 0xab552
	adds r1, r2, #0	@ 000ab552 111c
.org 0xab554
	adds r0, r6, #0	@ 000ab554 301c
.org 0xab556
	adds r0, #76	@ 000ab556 4c30
.org 0xab558
	strb r1, [r0, #0]	@ 000ab558 0170
.org 0xab55a
	adds r3, r6, #0	@ 000ab55a 331c
.org 0xab55c
	adds r3, #74	@ 000ab55c 4a33
.org 0xab55e
	lsls r1, r1, #4	@ 000ab55e 0901
.org 0xab560
	ldrb r2, [r3, #0]	@ 000ab560 1a78
.org 0xab562
	movs r0, #17	@ 000ab562 1120
.org 0xab564
	negs r0, r0	@ 000ab564 4042
.org 0xab566
	ands r0, r2	@ 000ab566 1040
.org 0xab568
	orrs r0, r1	@ 000ab568 0843
.org 0xab56a
	strb r0, [r3, #0]	@ 000ab56a 1870
.org 0xab56c
	adds r0, r6, #0	@ 000ab56c 301c

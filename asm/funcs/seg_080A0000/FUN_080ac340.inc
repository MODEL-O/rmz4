@ FUN_080ac340  entry 0x080ac340  size 772
.thumb
.org 0xac340
FUN_080ac340:
	push {r4, r5, r6, r7, lr}	@ 000ac340 f0b5
.org 0xac342
	mov r7, sl	@ 000ac342 5746
.org 0xac344
	mov r6, r9	@ 000ac344 4e46
.org 0xac346
	mov r5, r8	@ 000ac346 4546
.org 0xac348
	push {r5, r6, r7}	@ 000ac348 e0b4
.org 0xac34a
	sub sp, #72	@ 000ac34a 92b0
.org 0xac34c
	str r0, [sp, #32]	@ 000ac34c 0890
.org 0xac34e
	mov r8, r1	@ 000ac34e 8846
.org 0xac350
	lsls r2, r2, #24	@ 000ac350 1206
.org 0xac352
	lsrs r6, r2, #24	@ 000ac352 160e
.org 0xac354
	movs r0, #0	@ 000ac354 0020
.org 0xac356
	mov sl, r0	@ 000ac356 8246
.org 0xac358
	movs r7, #1	@ 000ac358 0127
.org 0xac35a
	cmp r7, r6	@ 000ac35a b742
.org 0xac35c
	bge.n 0xac38a	@ 000ac35c 15da
.org 0xac35e
	mov r3, r8	@ 000ac35e 4346
.org 0xac360
	adds r3, #8	@ 000ac360 0833
.org 0xac362
	mov r1, sl	@ 000ac362 5146
.org 0xac364
	lsls r0, r1, #3	@ 000ac364 c800
.org 0xac366
	add r0, r8	@ 000ac366 4044
.org 0xac368
	ldr r2, [r3, #4]	@ 000ac368 5a68
.org 0xac36a
	ldr r1, [r0, #4]	@ 000ac36a 4168
.org 0xac36c
	cmp r2, r1	@ 000ac36c 8a42
.org 0xac36e
	bgt.n 0xac382	@ 000ac36e 08dc
.org 0xac370
	cmp r2, r1	@ 000ac370 8a42
.org 0xac372
	bne.n 0xac37c	@ 000ac372 03d1
.org 0xac374
	ldr r1, [r3, #0]	@ 000ac374 1968
.org 0xac376
	ldr r0, [r0, #0]	@ 000ac376 0068
.org 0xac378
	cmp r1, r0	@ 000ac378 8142
.org 0xac37a
	bgt.n 0xac382	@ 000ac37a 02dc
.org 0xac37c
	lsls r0, r7, #24	@ 000ac37c 3806
.org 0xac37e
	lsrs r0, r0, #24	@ 000ac37e 000e
.org 0xac380
	mov sl, r0	@ 000ac380 8246
.org 0xac382
	adds r3, #8	@ 000ac382 0833
.org 0xac384
	adds r7, #1	@ 000ac384 0137
.org 0xac386
	cmp r7, r6	@ 000ac386 b742
.org 0xac388
	blt.n 0xac362	@ 000ac388 ebdb
.org 0xac38a
	movs r2, #0	@ 000ac38a 0022
.org 0xac38c
	mov r9, r2	@ 000ac38c 9146
.org 0xac38e
	movs r7, #1	@ 000ac38e 0127
.org 0xac390
	cmp r7, r6	@ 000ac390 b742
.org 0xac392
	bge.n 0xac3c0	@ 000ac392 15da
.org 0xac394
	mov r3, r8	@ 000ac394 4346
.org 0xac396
	adds r3, #8	@ 000ac396 0833
.org 0xac398
	mov r1, r9	@ 000ac398 4946
.org 0xac39a
	lsls r0, r1, #3	@ 000ac39a c800
.org 0xac39c
	add r0, r8	@ 000ac39c 4044
.org 0xac39e
	ldr r2, [r3, #4]	@ 000ac39e 5a68
.org 0xac3a0
	ldr r1, [r0, #4]	@ 000ac3a0 4168
.org 0xac3a2
	cmp r2, r1	@ 000ac3a2 8a42
.org 0xac3a4
	blt.n 0xac3b8	@ 000ac3a4 08db
.org 0xac3a6
	cmp r2, r1	@ 000ac3a6 8a42
.org 0xac3a8
	bne.n 0xac3b2	@ 000ac3a8 03d1
.org 0xac3aa
	ldr r1, [r3, #0]	@ 000ac3aa 1968
.org 0xac3ac
	ldr r0, [r0, #0]	@ 000ac3ac 0068
.org 0xac3ae
	cmp r1, r0	@ 000ac3ae 8142
.org 0xac3b0
	blt.n 0xac3b8	@ 000ac3b0 02db
.org 0xac3b2
	lsls r0, r7, #24	@ 000ac3b2 3806
.org 0xac3b4
	lsrs r0, r0, #24	@ 000ac3b4 000e
.org 0xac3b6
	mov r9, r0	@ 000ac3b6 8146
.org 0xac3b8
	adds r3, #8	@ 000ac3b8 0833
.org 0xac3ba
	adds r7, #1	@ 000ac3ba 0137
.org 0xac3bc
	cmp r7, r6	@ 000ac3bc b742
.org 0xac3be
	blt.n 0xac398	@ 000ac3be ebdb
.org 0xac3c0
	mov r2, sl	@ 000ac3c0 5246
.org 0xac3c2
	mov r0, sp	@ 000ac3c2 6846
.org 0xac3c4
	mov r1, sl	@ 000ac3c4 5146
.org 0xac3c6
	strb r1, [r0, #0]	@ 000ac3c6 0170
.org 0xac3c8
	mov r4, sp	@ 000ac3c8 6c46
.org 0xac3ca
	b.n 0xac3ee	@ 000ac3ca 10e0
.org 0xac3cc
	ldrb r0, [r4, #0]	@ 000ac3cc 2078
.org 0xac3ce
	lsls r0, r0, #3	@ 000ac3ce c000
.org 0xac3d0
	mov r1, r8	@ 000ac3d0 4146
.org 0xac3d2
	adds r3, r0, r1	@ 000ac3d2 4318
.org 0xac3d4
	ldr r1, [r3, #4]	@ 000ac3d4 5968
.org 0xac3d6
	lsls r0, r2, #3	@ 000ac3d6 d000
.org 0xac3d8
	add r0, r8	@ 000ac3d8 4044
.org 0xac3da
	ldr r5, [r0, #4]	@ 000ac3da 4568
.org 0xac3dc
	cmp r1, r5	@ 000ac3dc a942
.org 0xac3de
	bne.n 0xac3ea	@ 000ac3de 04d1
.org 0xac3e0
	ldr r1, [r3, #0]	@ 000ac3e0 1968
.org 0xac3e2
	ldr r5, [r0, #0]	@ 000ac3e2 0568
.org 0xac3e4
	cmp r5, r1	@ 000ac3e4 8d42
.org 0xac3e6
	bge.n 0xac3ee	@ 000ac3e6 02da
.org 0xac3e8
	b.n 0xac3ec	@ 000ac3e8 00e0
.org 0xac3ea
	adds r4, #1	@ 000ac3ea 0134
.org 0xac3ec
	strb r2, [r4, #0]	@ 000ac3ec 2270
.org 0xac3ee
	adds r2, #1	@ 000ac3ee 0132
.org 0xac3f0
	adds r0, r2, #0	@ 000ac3f0 101c
.org 0xac3f2
	adds r1, r6, #0	@ 000ac3f2 311c
.org 0xac3f4
	bl 0x129050	@ 000ac3f4 7cf02cfe
.org 0xac3f8
	adds r2, r0, #0	@ 000ac3f8 021c
.org 0xac3fa
	cmp r2, r9	@ 000ac3fa 4a45
.org 0xac3fc
	bne.n 0xac3cc	@ 000ac3fc e6d1
.org 0xac3fe
	mov r2, r9	@ 000ac3fe 4a46
.org 0xac400
	strb r2, [r4, #1]	@ 000ac400 6270
.org 0xac402
	ldr r1, [pc, #4]	@ 000ac402 0149
.org 0xac404
	movs r7, #0	@ 000ac404 0027
.org 0xac406
	b.n 0xac40e	@ 000ac406 02e0
.org 0xac408
	.byte 0xff,0xff,0xff,0x7f	@ 000ac408 data
.org 0xac40c
	adds r7, #1	@ 000ac40c 0137
.org 0xac40e
	mov r2, sp	@ 000ac40e 6a46
.org 0xac410
	adds r0, r2, r7	@ 000ac410 d019
.org 0xac412
	ldrb r2, [r0, #0]	@ 000ac412 0278
.org 0xac414
	lsls r0, r2, #3	@ 000ac414 d000
.org 0xac416
	add r0, r8	@ 000ac416 4044
.org 0xac418
	ldr r0, [r0, #0]	@ 000ac418 0068
.org 0xac41a
	cmp r0, r1	@ 000ac41a 8842
.org 0xac41c
	bge.n 0xac420	@ 000ac41c 00da
.org 0xac41e
	adds r1, r0, #0	@ 000ac41e 011c
.org 0xac420
	cmp r2, r9	@ 000ac420 4a45
.org 0xac422
	bne.n 0xac40c	@ 000ac422 f3d1
.org 0xac424
	cmp r1, #240	@ 000ac424 f029
.org 0xac426
	ble.n 0xac42a	@ 000ac426 00dd
.org 0xac428
	b.n 0xac638	@ 000ac428 06e1
.org 0xac42a
	movs r7, #0	@ 000ac42a 0027
.org 0xac42c
	mov r2, sl	@ 000ac42c 5246
.org 0xac42e
	add r0, sp, #16	@ 000ac42e 04a8
.org 0xac430
	mov r1, sl	@ 000ac430 5146
.org 0xac432
	strb r1, [r0, #0]	@ 000ac432 0170
.org 0xac434
	b.n 0xac466	@ 000ac434 17e0
.org 0xac436
	mov r4, sp	@ 000ac436 6c46
.org 0xac438
	adds r4, r4, r7	@ 000ac438 e419
.org 0xac43a
	adds r4, #16	@ 000ac43a 1034
.org 0xac43c
	ldrb r0, [r4, #0]	@ 000ac43c 2078
.org 0xac43e
	lsls r0, r0, #3	@ 000ac43e c000
.org 0xac440
	mov r1, r8	@ 000ac440 4146
.org 0xac442
	adds r3, r0, r1	@ 000ac442 4318
.org 0xac444
	ldr r1, [r3, #4]	@ 000ac444 5968
.org 0xac446
	lsls r0, r2, #3	@ 000ac446 d000
.org 0xac448
	add r0, r8	@ 000ac448 4044
.org 0xac44a
	ldr r5, [r0, #4]	@ 000ac44a 4568
.org 0xac44c
	cmp r1, r5	@ 000ac44c a942
.org 0xac44e
	bne.n 0xac45c	@ 000ac44e 05d1
.org 0xac450
	ldr r1, [r3, #0]	@ 000ac450 1968
.org 0xac452
	ldr r5, [r0, #0]	@ 000ac452 0568
.org 0xac454
	cmp r5, r1	@ 000ac454 8d42
.org 0xac456
	ble.n 0xac466	@ 000ac456 06dd
.org 0xac458
	strb r2, [r4, #0]	@ 000ac458 2270
.org 0xac45a
	b.n 0xac466	@ 000ac45a 04e0
.org 0xac45c
	adds r7, #1	@ 000ac45c 0137
.org 0xac45e
	mov r0, sp	@ 000ac45e 6846
.org 0xac460
	adds r0, r0, r7	@ 000ac460 c019
.org 0xac462
	adds r0, #16	@ 000ac462 1030
.org 0xac464
	strb r2, [r0, #0]	@ 000ac464 0270
.org 0xac466
	subs r0, r2, #1	@ 000ac466 501e
.org 0xac468
	adds r2, r0, r6	@ 000ac468 8219
.org 0xac46a
	adds r0, r2, #0	@ 000ac46a 101c
.org 0xac46c
	adds r1, r6, #0	@ 000ac46c 311c
.org 0xac46e
	bl 0x129050	@ 000ac46e 7cf0effd
.org 0xac472
	adds r2, r0, #0	@ 000ac472 021c
.org 0xac474
	cmp r2, r9	@ 000ac474 4a45
.org 0xac476
	bne.n 0xac436	@ 000ac476 ded1
.org 0xac478
	adds r7, #1	@ 000ac478 0137
.org 0xac47a
	mov r0, sp	@ 000ac47a 6846
.org 0xac47c
	adds r0, r0, r7	@ 000ac47c c019
.org 0xac47e
	adds r0, #16	@ 000ac47e 1030
.org 0xac480
	mov r2, r9	@ 000ac480 4a46
.org 0xac482
	strb r2, [r0, #0]	@ 000ac482 0270
.org 0xac484
	movs r1, #1	@ 000ac484 0121
.org 0xac486
	negs r1, r1	@ 000ac486 4942
.org 0xac488
	movs r7, #0	@ 000ac488 0027
.org 0xac48a
	add r3, sp, #16	@ 000ac48a 04ab
.org 0xac48c
	b.n 0xac490	@ 000ac48c 00e0
.org 0xac48e
	adds r7, #1	@ 000ac48e 0137
.org 0xac490
	adds r0, r3, r7	@ 000ac490 d819
.org 0xac492
	ldrb r2, [r0, #0]	@ 000ac492 0278
.org 0xac494
	lsls r0, r2, #3	@ 000ac494 d000
.org 0xac496
	add r0, r8	@ 000ac496 4044
.org 0xac498
	ldr r0, [r0, #0]	@ 000ac498 0068
.org 0xac49a
	cmp r0, r1	@ 000ac49a 8842
.org 0xac49c
	ble.n 0xac4a0	@ 000ac49c 00dd
.org 0xac49e
	adds r1, r0, #0	@ 000ac49e 011c
.org 0xac4a0
	cmp r2, r9	@ 000ac4a0 4a45
.org 0xac4a2
	bne.n 0xac48e	@ 000ac4a2 f4d1
.org 0xac4a4
	cmp r1, #0	@ 000ac4a4 0029
.org 0xac4a6
	bge.n 0xac4aa	@ 000ac4a6 00da
.org 0xac4a8
	b.n 0xac638	@ 000ac4a8 c6e0
.org 0xac4aa
	mov r1, sl	@ 000ac4aa 5146
.org 0xac4ac
	lsls r0, r1, #3	@ 000ac4ac c800
.org 0xac4ae
	add r0, r8	@ 000ac4ae 4044
.org 0xac4b0
	ldr r7, [r0, #4]	@ 000ac4b0 4768
.org 0xac4b2
	mov r2, r9	@ 000ac4b2 4a46
.org 0xac4b4
	lsls r0, r2, #3	@ 000ac4b4 d000
.org 0xac4b6
	add r0, r8	@ 000ac4b6 4044
.org 0xac4b8
	ldr r0, [r0, #4]	@ 000ac4b8 4068
.org 0xac4ba
	str r0, [sp, #52]	@ 000ac4ba 0d90
.org 0xac4bc
	cmp r7, #159	@ 000ac4bc 9f2f
.org 0xac4be
	ble.n 0xac4c2	@ 000ac4be 00dd
.org 0xac4c0
	b.n 0xac638	@ 000ac4c0 bae0
.org 0xac4c2
	cmp r0, #0	@ 000ac4c2 0028
.org 0xac4c4
	bgt.n 0xac4c8	@ 000ac4c4 00dc
.org 0xac4c6
	b.n 0xac638	@ 000ac4c6 b7e0
.org 0xac4c8
	cmp r7, #0	@ 000ac4c8 002f
.org 0xac4ca
	bge.n 0xac4ce	@ 000ac4ca 00da
.org 0xac4cc
	movs r7, #0	@ 000ac4cc 0027
.org 0xac4ce
	ldr r0, [sp, #52]	@ 000ac4ce 0d98
.org 0xac4d0
	cmp r0, #160	@ 000ac4d0 a028
.org 0xac4d2
	ble.n 0xac4d8	@ 000ac4d2 01dd
.org 0xac4d4
	movs r1, #160	@ 000ac4d4 a021
.org 0xac4d6
	str r1, [sp, #52]	@ 000ac4d6 0d91
.org 0xac4d8
	movs r2, #1	@ 000ac4d8 0122
.org 0xac4da
	str r2, [sp, #40]	@ 000ac4da 0a92
.org 0xac4dc
	movs r0, #1	@ 000ac4dc 0120
.org 0xac4de
	str r0, [sp, #36]	@ 000ac4de 0990
.org 0xac4e0
	movs r1, #0	@ 000ac4e0 0021
.org 0xac4e2
	str r1, [sp, #48]	@ 000ac4e2 0c91
.org 0xac4e4
	movs r2, #0	@ 000ac4e4 0022
.org 0xac4e6
	str r2, [sp, #44]	@ 000ac4e6 0b92
.org 0xac4e8
	mov r0, sp	@ 000ac4e8 6846
.org 0xac4ea
	ldrb r1, [r0, #0]	@ 000ac4ea 0178
.org 0xac4ec
	adds r0, #1	@ 000ac4ec 0130
.org 0xac4ee
	ldrb r5, [r0, #0]	@ 000ac4ee 0578
.org 0xac4f0
	lsls r2, r5, #3	@ 000ac4f0 ea00
.org 0xac4f2
	add r2, r8	@ 000ac4f2 4244
.org 0xac4f4
	lsls r1, r1, #3	@ 000ac4f4 c900
.org 0xac4f6
	add r1, r8	@ 000ac4f6 4144
.org 0xac4f8
	ldr r3, [r2, #0]	@ 000ac4f8 1368
.org 0xac4fa
	ldr r0, [r1, #0]	@ 000ac4fa 0868
.org 0xac4fc
	subs r3, r3, r0	@ 000ac4fc 1b1a
.org 0xac4fe
	str r3, [sp, #56]	@ 000ac4fe 0e93
.org 0xac500
	ldr r2, [r2, #4]	@ 000ac500 5268
.org 0xac502
	ldr r0, [r1, #4]	@ 000ac502 4868
.org 0xac504
	subs r2, r2, r0	@ 000ac504 121a
.org 0xac506
	mov sl, r2	@ 000ac506 9246
.org 0xac508
	cmp r2, #0	@ 000ac508 002a
.org 0xac50a
	bne.n 0xac510	@ 000ac50a 01d1
.org 0xac50c
	movs r0, #1	@ 000ac50c 0120
.org 0xac50e
	mov sl, r0	@ 000ac50e 8246
.org 0xac510
	mov r2, sp	@ 000ac510 6a46
.org 0xac512
	ldrb r1, [r2, #16]	@ 000ac512 117c
.org 0xac514
	mov r0, sp	@ 000ac514 6846
.org 0xac516
	adds r0, #17	@ 000ac516 1130
.org 0xac518
	ldrb r5, [r0, #0]	@ 000ac518 0578
.org 0xac51a
	lsls r2, r5, #3	@ 000ac51a ea00
.org 0xac51c
	add r2, r8	@ 000ac51c 4244
.org 0xac51e
	lsls r1, r1, #3	@ 000ac51e c900
.org 0xac520
	add r1, r8	@ 000ac520 4144
.org 0xac522
	ldr r3, [r2, #0]	@ 000ac522 1368
.org 0xac524
	ldr r0, [r1, #0]	@ 000ac524 0868
.org 0xac526
	subs r3, r3, r0	@ 000ac526 1b1a
.org 0xac528
	str r3, [sp, #60]	@ 000ac528 0f93
.org 0xac52a
	ldr r2, [r2, #4]	@ 000ac52a 5268
.org 0xac52c
	ldr r0, [r1, #4]	@ 000ac52c 4868
.org 0xac52e
	subs r2, r2, r0	@ 000ac52e 121a
.org 0xac530
	mov r9, r2	@ 000ac530 9146
.org 0xac532
	cmp r2, #0	@ 000ac532 002a
.org 0xac534
	bne.n 0xac53a	@ 000ac534 01d1
.org 0xac536
	movs r0, #1	@ 000ac536 0120
.org 0xac538
	mov r9, r0	@ 000ac538 8146
.org 0xac53a
	ldr r1, [sp, #52]	@ 000ac53a 0d99
.org 0xac53c
	cmp r7, r1	@ 000ac53c 8f42
.org 0xac53e
	bge.n 0xac638	@ 000ac53e 7bda
.org 0xac540
	ldr r0, [sp, #36]	@ 000ac540 0998
.org 0xac542
	add r0, sp	@ 000ac542 6844
.org 0xac544
	ldrb r1, [r0, #0]	@ 000ac544 0178
.org 0xac546
	lsls r0, r1, #3	@ 000ac546 c800
.org 0xac548
	add r0, r8	@ 000ac548 4044
.org 0xac54a
	ldr r0, [r0, #4]	@ 000ac54a 4068
.org 0xac54c
	adds r2, r7, #1	@ 000ac54c 7a1c
.org 0xac54e
	str r2, [sp, #64]	@ 000ac54e 1092
.org 0xac550
	lsls r2, r7, #1	@ 000ac550 7a00
.org 0xac552
	str r2, [sp, #68]	@ 000ac552 1192
.org 0xac554
	cmp r0, r7	@ 000ac554 b842
.org 0xac556
	bge.n 0xac58e	@ 000ac556 1ada
.org 0xac558
	ldr r0, [sp, #36]	@ 000ac558 0998
.org 0xac55a
	str r0, [sp, #44]	@ 000ac55a 0b90
.org 0xac55c
	adds r0, #1	@ 000ac55c 0130
.org 0xac55e
	lsls r0, r0, #24	@ 000ac55e 0006
.org 0xac560
	lsrs r0, r0, #24	@ 000ac560 000e
.org 0xac562
	str r0, [sp, #36]	@ 000ac562 0990
.org 0xac564
	add r0, sp	@ 000ac564 6844
.org 0xac566
	ldrb r5, [r0, #0]	@ 000ac566 0578
.org 0xac568
	lsls r2, r5, #3	@ 000ac568 ea00
.org 0xac56a
	add r2, r8	@ 000ac56a 4244
.org 0xac56c
	lsls r1, r1, #3	@ 000ac56c c900
.org 0xac56e
	add r1, r8	@ 000ac56e 4144
.org 0xac570
	ldr r3, [r2, #0]	@ 000ac570 1368
.org 0xac572
	ldr r0, [r1, #0]	@ 000ac572 0868
.org 0xac574
	subs r3, r3, r0	@ 000ac574 1b1a
.org 0xac576
	str r3, [sp, #56]	@ 000ac576 0e93
.org 0xac578
	ldr r2, [r2, #4]	@ 000ac578 5268
.org 0xac57a
	ldr r0, [r1, #4]	@ 000ac57a 4868
.org 0xac57c
	subs r0, r2, r0	@ 000ac57c 101a
.org 0xac57e
	mov sl, r0	@ 000ac57e 8246
.org 0xac580
	cmp r0, #0	@ 000ac580 0028
.org 0xac582
	bne.n 0xac588	@ 000ac582 01d1
.org 0xac584
	movs r1, #1	@ 000ac584 0121
.org 0xac586
	mov sl, r1	@ 000ac586 8a46
.org 0xac588
	adds r1, r5, #0	@ 000ac588 291c
.org 0xac58a
	cmp r2, r7	@ 000ac58a ba42
.org 0xac58c
	blt.n 0xac558	@ 000ac58c e4db
.org 0xac58e
	ldr r0, [sp, #40]	@ 000ac58e 0a98
.org 0xac590
	add r0, sp	@ 000ac590 6844
.org 0xac592
	adds r0, #16	@ 000ac592 1030
.org 0xac594
	ldrb r1, [r0, #0]	@ 000ac594 0178
.org 0xac596
	lsls r0, r1, #3	@ 000ac596 c800
.org 0xac598
	add r0, r8	@ 000ac598 4044
.org 0xac59a
	ldr r0, [r0, #4]	@ 000ac59a 4068
.org 0xac59c
	ldr r6, [sp, #44]	@ 000ac59c 0b9e
.org 0xac59e
	add r6, sp	@ 000ac59e 6e44
.org 0xac5a0
	cmp r0, r7	@ 000ac5a0 b842
.org 0xac5a2
	bge.n 0xac5de	@ 000ac5a2 1cda
.org 0xac5a4
	add r4, sp, #16	@ 000ac5a4 04ac
.org 0xac5a6
	ldr r2, [sp, #40]	@ 000ac5a6 0a9a
.org 0xac5a8
	str r2, [sp, #48]	@ 000ac5a8 0c92
.org 0xac5aa
	adds r0, r2, #0	@ 000ac5aa 101c
.org 0xac5ac
	adds r0, #1	@ 000ac5ac 0130
.org 0xac5ae
	lsls r0, r0, #24	@ 000ac5ae 0006
.org 0xac5b0
	lsrs r0, r0, #24	@ 000ac5b0 000e
.org 0xac5b2
	str r0, [sp, #40]	@ 000ac5b2 0a90
.org 0xac5b4
	adds r0, r4, r0	@ 000ac5b4 2018
.org 0xac5b6
	ldrb r5, [r0, #0]	@ 000ac5b6 0578
.org 0xac5b8
	lsls r2, r5, #3	@ 000ac5b8 ea00
.org 0xac5ba
	add r2, r8	@ 000ac5ba 4244
.org 0xac5bc
	lsls r1, r1, #3	@ 000ac5bc c900
.org 0xac5be
	add r1, r8	@ 000ac5be 4144
.org 0xac5c0
	ldr r3, [r2, #0]	@ 000ac5c0 1368
.org 0xac5c2
	ldr r0, [r1, #0]	@ 000ac5c2 0868
.org 0xac5c4
	subs r3, r3, r0	@ 000ac5c4 1b1a
.org 0xac5c6
	str r3, [sp, #60]	@ 000ac5c6 0f93
.org 0xac5c8
	ldr r2, [r2, #4]	@ 000ac5c8 5268
.org 0xac5ca
	ldr r0, [r1, #4]	@ 000ac5ca 4868
.org 0xac5cc
	subs r0, r2, r0	@ 000ac5cc 101a
.org 0xac5ce
	mov r9, r0	@ 000ac5ce 8146
.org 0xac5d0
	cmp r0, #0	@ 000ac5d0 0028
.org 0xac5d2
	bne.n 0xac5d8	@ 000ac5d2 01d1
.org 0xac5d4
	movs r0, #1	@ 000ac5d4 0120
.org 0xac5d6
	mov r9, r0	@ 000ac5d6 8146
.org 0xac5d8
	adds r1, r5, #0	@ 000ac5d8 291c
.org 0xac5da
	cmp r2, r7	@ 000ac5da ba42
.org 0xac5dc
	blt.n 0xac5a6	@ 000ac5dc e3db
.org 0xac5de
	ldrb r1, [r6, #0]	@ 000ac5de 3178
.org 0xac5e0
	lsls r4, r1, #3	@ 000ac5e0 cc00
.org 0xac5e2
	add r4, r8	@ 000ac5e2 4444
.org 0xac5e4
	ldr r0, [r4, #4]	@ 000ac5e4 6068
.org 0xac5e6
	subs r5, r7, r0	@ 000ac5e6 3d1a
.org 0xac5e8
	ldr r1, [sp, #56]	@ 000ac5e8 0e99
.org 0xac5ea
	adds r0, r1, #0	@ 000ac5ea 081c
.org 0xac5ec
	muls r0, r5	@ 000ac5ec 6843
.org 0xac5ee
	mov r1, sl	@ 000ac5ee 5146
.org 0xac5f0
	bl 0x128fb8	@ 000ac5f0 7cf0e2fc
.org 0xac5f4
	ldr r1, [r4, #0]	@ 000ac5f4 2168
.org 0xac5f6
	adds r6, r1, r0	@ 000ac5f6 0e18
.org 0xac5f8
	ldr r0, [sp, #48]	@ 000ac5f8 0c98
.org 0xac5fa
	add r0, sp	@ 000ac5fa 6844
.org 0xac5fc
	adds r0, #16	@ 000ac5fc 1030
.org 0xac5fe
	ldrb r1, [r0, #0]	@ 000ac5fe 0178
.org 0xac600
	lsls r4, r1, #3	@ 000ac600 cc00
.org 0xac602
	add r4, r8	@ 000ac602 4444
.org 0xac604
	ldr r0, [r4, #4]	@ 000ac604 6068
.org 0xac606
	subs r5, r7, r0	@ 000ac606 3d1a
.org 0xac608
	ldr r2, [sp, #60]	@ 000ac608 0f9a
.org 0xac60a
	adds r0, r2, #0	@ 000ac60a 101c
.org 0xac60c
	muls r0, r5	@ 000ac60c 6843
.org 0xac60e
	mov r1, r9	@ 000ac60e 4946
.org 0xac610
	bl 0x128fb8	@ 000ac610 7cf0d2fc
.org 0xac614
	ldr r1, [r4, #0]	@ 000ac614 2168
.org 0xac616
	adds r4, r1, r0	@ 000ac616 0c18
.org 0xac618
	cmp r6, #0	@ 000ac618 002e
.org 0xac61a
	bge.n 0xac61e	@ 000ac61a 00da
.org 0xac61c
	movs r6, #0	@ 000ac61c 0026
.org 0xac61e
	cmp r4, #240	@ 000ac61e f02c
.org 0xac620
	ble.n 0xac624	@ 000ac620 00dd
.org 0xac622
	movs r4, #240	@ 000ac622 f024
.org 0xac624
	ldr r0, [sp, #68]	@ 000ac624 1198
.org 0xac626
	ldr r2, [sp, #32]	@ 000ac626 089a
.org 0xac628
	adds r1, r0, r2	@ 000ac628 8118
.org 0xac62a
	lsls r0, r6, #8	@ 000ac62a 3002
.org 0xac62c
	orrs r0, r4	@ 000ac62c 2043
.org 0xac62e
	strh r0, [r1, #0]	@ 000ac62e 0880
.org 0xac630
	ldr r7, [sp, #64]	@ 000ac630 109f
.org 0xac632
	ldr r0, [sp, #52]	@ 000ac632 0d98
.org 0xac634
	cmp r7, r0	@ 000ac634 8742
.org 0xac636
	blt.n 0xac540	@ 000ac636 83db
.org 0xac638
	add sp, #72	@ 000ac638 12b0
.org 0xac63a
	pop {r3, r4, r5}	@ 000ac63a 38bc
.org 0xac63c
	mov r8, r3	@ 000ac63c 9846
.org 0xac63e
	mov r9, r4	@ 000ac63e a146
.org 0xac640
	mov sl, r5	@ 000ac640 aa46
.org 0xac642
	pop {r4, r5, r6, r7}	@ 000ac642 f0bc

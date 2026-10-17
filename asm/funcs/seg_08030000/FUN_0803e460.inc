@ FUN_0803e460  entry 0x0803e460  size 294
.thumb
.org 0x3e460
FUN_0803e460:
	push {r4, r5, r6, lr}	@ 0003e460 70b5
.org 0x3e462
	sub sp, #16	@ 0003e462 84b0
.org 0x3e464
	adds r4, r0, #0	@ 0003e464 041c
.org 0x3e466
	adds r0, #180	@ 0003e466 b430
.org 0x3e468
	ldr r5, [r0, #0]	@ 0003e468 0568
.org 0x3e46a
	ldrb r0, [r4, #13]	@ 0003e46a 607b
.org 0x3e46c
	cmp r0, #1	@ 0003e46c 0128
.org 0x3e46e
	beq.n 0x3e528	@ 0003e46e 5bd0
.org 0x3e470
	cmp r0, #1	@ 0003e470 0128
.org 0x3e472
	bgt.n 0x3e47a	@ 0003e472 02dc
.org 0x3e474
	cmp r0, #0	@ 0003e474 0028
.org 0x3e476
	beq.n 0x3e484	@ 0003e476 05d0
.org 0x3e478
	b.n 0x3e588	@ 0003e478 86e0
.org 0x3e47a
	cmp r0, #2	@ 0003e47a 0228
.org 0x3e47c
	beq.n 0x3e544	@ 0003e47c 62d0
.org 0x3e47e
	cmp r0, #3	@ 0003e47e 0328
.org 0x3e480
	beq.n 0x3e56c	@ 0003e480 74d0
.org 0x3e482
	b.n 0x3e588	@ 0003e482 81e0
.org 0x3e484
	ldr r1, [pc, #48]	@ 0003e484 0c49
.org 0x3e486
	adds r0, r4, #0	@ 0003e486 201c
.org 0x3e488
	bl 0x1cf00	@ 0003e488 def73afd
.org 0x3e48c
	adds r0, r4, #0	@ 0003e48c 201c
.org 0x3e48e
	movs r1, #0	@ 0003e48e 0021
.org 0x3e490
	bl 0x3ad84	@ 0003e490 fcf778fc
.org 0x3e494
	lsls r0, r0, #24	@ 0003e494 0006
.org 0x3e496
	lsrs r2, r0, #24	@ 0003e496 020e
.org 0x3e498
	ldrb r1, [r4, #10]	@ 0003e498 a17a
.org 0x3e49a
	movs r0, #16	@ 0003e49a 1020
.org 0x3e49c
	ands r0, r1	@ 0003e49c 0840
.org 0x3e49e
	cmp r0, #0	@ 0003e49e 0028
.org 0x3e4a0
	beq.n 0x3e4bc	@ 0003e4a0 0cd0
.org 0x3e4a2
	adds r0, r2, #0	@ 0003e4a2 101c
.org 0x3e4a4
	subs r0, #64	@ 0003e4a4 4038
.org 0x3e4a6
	lsls r0, r0, #24	@ 0003e4a6 0006
.org 0x3e4a8
	lsrs r0, r0, #24	@ 0003e4a8 000e
.org 0x3e4aa
	cmp r0, #128	@ 0003e4aa 8028
.org 0x3e4ac
	bls.n 0x3e4c8	@ 0003e4ac 0cd9
.org 0x3e4ae
	adds r2, #64	@ 0003e4ae 4032
.org 0x3e4b0
	movs r0, #127	@ 0003e4b0 7f20
.org 0x3e4b2
	ands r2, r0	@ 0003e4b2 0240
.org 0x3e4b4
	b.n 0x3e4e0	@ 0003e4b4 14e0
.org 0x3e4b6
	.byte 0x00	@ 0003e4b6 data
.org 0x3e4b7
	.byte 0x00	@ 0003e4b7 data
.org 0x3e4b8
	.byte 0x04,0x81,0x00,0x00	@ 0003e4b8 data
.org 0x3e4bc
	adds r0, r2, #0	@ 0003e4bc 101c
.org 0x3e4be
	subs r0, #65	@ 0003e4be 4138
.org 0x3e4c0
	lsls r0, r0, #24	@ 0003e4c0 0006
.org 0x3e4c2
	lsrs r0, r0, #24	@ 0003e4c2 000e
.org 0x3e4c4
	cmp r0, #126	@ 0003e4c4 7e28
.org 0x3e4c6
	bls.n 0x3e4cc	@ 0003e4c6 01d9
.org 0x3e4c8
	movs r2, #64	@ 0003e4c8 4022
.org 0x3e4ca
	b.n 0x3e4e0	@ 0003e4ca 09e0
.org 0x3e4cc
	adds r0, r2, #0	@ 0003e4cc 101c
.org 0x3e4ce
	adds r0, #192	@ 0003e4ce c030
.org 0x3e4d0
	movs r1, #127	@ 0003e4d0 7f21
.org 0x3e4d2
	ands r0, r1	@ 0003e4d2 0840
.org 0x3e4d4
	movs r2, #128	@ 0003e4d4 8022
.org 0x3e4d6
	negs r2, r2	@ 0003e4d6 5242
.org 0x3e4d8
	adds r1, r2, #0	@ 0003e4d8 111c
.org 0x3e4da
	subs r1, r1, r0	@ 0003e4da 091a
.org 0x3e4dc
	lsls r1, r1, #24	@ 0003e4dc 0906
.org 0x3e4de
	lsrs r2, r1, #24	@ 0003e4de 0a0e
.org 0x3e4e0
	adds r6, r5, #0	@ 0003e4e0 2e1c
.org 0x3e4e2
	adds r6, #180	@ 0003e4e2 b436
.org 0x3e4e4
	adds r3, r5, #0	@ 0003e4e4 2b1c
.org 0x3e4e6
	adds r3, #230	@ 0003e4e6 e633
.org 0x3e4e8
	ldrb r0, [r3, #0]	@ 0003e4e8 1878
.org 0x3e4ea
	adds r1, r0, #0	@ 0003e4ea 011c
.org 0x3e4ec
	cmp r1, #0	@ 0003e4ec 0029
.org 0x3e4ee
	beq.n 0x3e514	@ 0003e4ee 11d0
.org 0x3e4f0
	cmp r1, #255	@ 0003e4f0 ff29
.org 0x3e4f2
	beq.n 0x3e4f8	@ 0003e4f2 01d0
.org 0x3e4f4
	subs r0, #1	@ 0003e4f4 0138
.org 0x3e4f6
	strb r0, [r3, #0]	@ 0003e4f6 1870
.org 0x3e4f8
	ldrb r3, [r6, #14]	@ 0003e4f8 b37b
.org 0x3e4fa
	movs r0, #224	@ 0003e4fa e020
.org 0x3e4fc
	lsls r0, r0, #2	@ 0003e4fc 8000
.org 0x3e4fe
	str r0, [sp, #0]	@ 0003e4fe 0090
.org 0x3e500
	str r2, [sp, #4]	@ 0003e500 0192
.org 0x3e502
	movs r0, #2	@ 0003e502 0220
.org 0x3e504
	str r0, [sp, #8]	@ 0003e504 0290
.org 0x3e506
	ldrb r0, [r4, #19]	@ 0003e506 e07c
.org 0x3e508
	str r0, [sp, #12]	@ 0003e508 0390
.org 0x3e50a
	adds r0, r5, #0	@ 0003e50a 281c
.org 0x3e50c
	adds r1, r4, #0	@ 0003e50c 211c
.org 0x3e50e
	movs r2, #0	@ 0003e50e 0022
.org 0x3e510
	bl 0x3f000	@ 0003e510 00f076fd
.org 0x3e514
	movs r0, #170	@ 0003e514 aa20
.org 0x3e516
	lsls r0, r0, #1	@ 0003e516 4000
.org 0x3e518
	adds r1, r5, r0	@ 0003e518 2918
.org 0x3e51a
	movs r0, #0	@ 0003e51a 0020
.org 0x3e51c
	strb r0, [r1, #0]	@ 0003e51c 0870
.org 0x3e51e
	movs r0, #2	@ 0003e51e 0220
.org 0x3e520
	strb r0, [r4, #18]	@ 0003e520 a074
.org 0x3e522
	ldrb r0, [r4, #13]	@ 0003e522 607b
.org 0x3e524
	adds r0, #1	@ 0003e524 0130
.org 0x3e526
	strb r0, [r4, #13]	@ 0003e526 6073
.org 0x3e528
	ldrb r0, [r4, #18]	@ 0003e528 a07c
.org 0x3e52a
	subs r0, #1	@ 0003e52a 0138
.org 0x3e52c
	strb r0, [r4, #18]	@ 0003e52c a074
.org 0x3e52e
	lsls r0, r0, #24	@ 0003e52e 0006
.org 0x3e530
	cmp r0, #0	@ 0003e530 0028
.org 0x3e532
	bne.n 0x3e588	@ 0003e532 29d1
.org 0x3e534
	movs r2, #170	@ 0003e534 aa22
.org 0x3e536
	lsls r2, r2, #1	@ 0003e536 5200
.org 0x3e538
	adds r1, r5, r2	@ 0003e538 a918
.org 0x3e53a
	movs r0, #1	@ 0003e53a 0120
.org 0x3e53c
	strb r0, [r1, #0]	@ 0003e53c 0870
.org 0x3e53e
	movs r0, #4	@ 0003e53e 0420
.org 0x3e540
	strb r0, [r4, #18]	@ 0003e540 a074
.org 0x3e542
	b.n 0x3e582	@ 0003e542 1ee0
.org 0x3e544
	ldrb r0, [r4, #18]	@ 0003e544 a07c
.org 0x3e546
	subs r0, #1	@ 0003e546 0138
.org 0x3e548
	strb r0, [r4, #18]	@ 0003e548 a074
.org 0x3e54a
	lsls r0, r0, #24	@ 0003e54a 0006
.org 0x3e54c
	cmp r0, #0	@ 0003e54c 0028
.org 0x3e54e
	bne.n 0x3e588	@ 0003e54e 1bd1
.org 0x3e550
	ldr r1, [pc, #20]	@ 0003e550 0549
.org 0x3e552
	adds r0, r4, #0	@ 0003e552 201c
.org 0x3e554
	bl 0x1cf00	@ 0003e554 def7d4fc
.org 0x3e558
	movs r0, #170	@ 0003e558 aa20
.org 0x3e55a
	lsls r0, r0, #1	@ 0003e55a 4000
.org 0x3e55c
	adds r1, r5, r0	@ 0003e55c 2918
.org 0x3e55e
	movs r0, #3	@ 0003e55e 0320
.org 0x3e560
	strb r0, [r1, #0]	@ 0003e560 0870
.org 0x3e562
	movs r0, #16	@ 0003e562 1020
.org 0x3e564
	strb r0, [r4, #18]	@ 0003e564 a074
.org 0x3e566
	b.n 0x3e582	@ 0003e566 0ce0
.org 0x3e568
	.byte 0x03,0x81,0x00,0x00	@ 0003e568 data
.org 0x3e56c
	ldrb r0, [r4, #18]	@ 0003e56c a07c
.org 0x3e56e
	subs r0, #1	@ 0003e56e 0138
.org 0x3e570
	strb r0, [r4, #18]	@ 0003e570 a074
.org 0x3e572
	lsls r0, r0, #24	@ 0003e572 0006
.org 0x3e574
	cmp r0, #0	@ 0003e574 0028
.org 0x3e576
	bne.n 0x3e588	@ 0003e576 07d1
.org 0x3e578
	movs r2, #170	@ 0003e578 aa22
.org 0x3e57a
	lsls r2, r2, #1	@ 0003e57a 5200
.org 0x3e57c
	adds r1, r5, r2	@ 0003e57c a918
.org 0x3e57e
	movs r0, #4	@ 0003e57e 0420
.org 0x3e580
	strb r0, [r1, #0]	@ 0003e580 0870
.org 0x3e582
	ldrb r0, [r4, #13]	@ 0003e582 607b
.org 0x3e584
	adds r0, #1	@ 0003e584 0130

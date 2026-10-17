@ FUN_0806e470  entry 0x0806e470  size 408
.thumb
.org 0x6e470
FUN_0806e470:
	push {r4, r5, r6, lr}	@ 0006e470 70b5
.org 0x6e472
	sub sp, #8	@ 0006e472 82b0
.org 0x6e474
	adds r6, r0, #0	@ 0006e474 061c
.org 0x6e476
	ldrb r0, [r6, #15]	@ 0006e476 f07b
.org 0x6e478
	cmp r0, #0	@ 0006e478 0028
.org 0x6e47a
	bne.n 0x6e512	@ 0006e47a 4ad1
.org 0x6e47c
	adds r0, r6, #0	@ 0006e47c 301c
.org 0x6e47e
	adds r0, #116	@ 0006e47e 7430
.org 0x6e480
	ldr r1, [pc, #280]	@ 0006e480 4649
.org 0x6e482
	bl 0x5784	@ 0006e482 97f77ff9
.org 0x6e486
	ldr r0, [r6, #84]	@ 0006e486 706d
.org 0x6e488
	ldr r1, [r6, #88]	@ 0006e488 b16d
.org 0x6e48a
	ldr r5, [pc, #276]	@ 0006e48a 454d
.org 0x6e48c
	ldr r3, [r5, #0]	@ 0006e48c 2b68
.org 0x6e48e
	ldr r2, [r3, #84]	@ 0006e48e 5a6d
.org 0x6e490
	ldr r3, [r3, #88]	@ 0006e490 9b6d
.org 0x6e492
	ldr r4, [pc, #272]	@ 0006e492 444c
.org 0x6e494
	adds r3, r3, r4	@ 0006e494 1b19
.org 0x6e496
	bl 0x10d398	@ 0006e496 9ef07fff
.org 0x6e49a
	adds r1, r6, #0	@ 0006e49a 311c
.org 0x6e49c
	adds r1, #196	@ 0006e49c c431
.org 0x6e49e
	strb r0, [r1, #0]	@ 0006e49e 0870
.org 0x6e4a0
	movs r0, #192	@ 0006e4a0 c020
.org 0x6e4a2
	lsls r0, r0, #2	@ 0006e4a2 8000
.org 0x6e4a4
	str r0, [r6, #100]	@ 0006e4a4 7066
.org 0x6e4a6
	ldr r0, [r6, #84]	@ 0006e4a6 706d
.org 0x6e4a8
	ldr r1, [r6, #88]	@ 0006e4a8 b16d
.org 0x6e4aa
	ldr r3, [r5, #0]	@ 0006e4aa 2b68
.org 0x6e4ac
	ldr r2, [r3, #84]	@ 0006e4ac 5a6d
.org 0x6e4ae
	ldr r3, [r3, #88]	@ 0006e4ae 9b6d
.org 0x6e4b0
	adds r3, r3, r4	@ 0006e4b0 1b19
.org 0x6e4b2
	bl 0x10d398	@ 0006e4b2 9ef071ff
.org 0x6e4b6
	lsls r0, r0, #24	@ 0006e4b6 0006
.org 0x6e4b8
	movs r1, #224	@ 0006e4b8 e021
.org 0x6e4ba
	lsls r1, r1, #24	@ 0006e4ba 0906
.org 0x6e4bc
	adds r0, r0, r1	@ 0006e4bc 4018
.org 0x6e4be
	lsrs r0, r0, #24	@ 0006e4be 000e
.org 0x6e4c0
	adds r1, r0, #0	@ 0006e4c0 011c
.org 0x6e4c2
	adds r1, #32	@ 0006e4c2 2031
.org 0x6e4c4
	asrs r0, r1, #6	@ 0006e4c4 8811
.org 0x6e4c6
	lsls r0, r0, #6	@ 0006e4c6 8001
.org 0x6e4c8
	adds r0, #32	@ 0006e4c8 2030
.org 0x6e4ca
	lsls r0, r0, #24	@ 0006e4ca 0006
.org 0x6e4cc
	movs r2, #128	@ 0006e4cc 8022
.org 0x6e4ce
	lsls r2, r2, #24	@ 0006e4ce 1206
.org 0x6e4d0
	adds r0, r0, r2	@ 0006e4d0 8018
.org 0x6e4d2
	ldr r3, [pc, #212]	@ 0006e4d2 354b
.org 0x6e4d4
	lsrs r2, r0, #24	@ 0006e4d4 020e
.org 0x6e4d6
	movs r1, #128	@ 0006e4d6 8021
.org 0x6e4d8
	lsls r1, r1, #23	@ 0006e4d8 c905
.org 0x6e4da
	adds r0, r0, r1	@ 0006e4da 4018
.org 0x6e4dc
	lsrs r0, r0, #23	@ 0006e4dc c00d
.org 0x6e4de
	adds r0, r0, r3	@ 0006e4de c018
.org 0x6e4e0
	movs r1, #0	@ 0006e4e0 0021
.org 0x6e4e2
	ldrsh r0, [r0, r1]	@ 0006e4e2 405e
.org 0x6e4e4
	ldr r1, [r6, #100]	@ 0006e4e4 716e
.org 0x6e4e6
	muls r0, r1	@ 0006e4e6 4843
.org 0x6e4e8
	cmp r0, #0	@ 0006e4e8 0028
.org 0x6e4ea
	bge.n 0x6e4ee	@ 0006e4ea 00da
.org 0x6e4ec
	adds r0, #255	@ 0006e4ec ff30
.org 0x6e4ee
	asrs r0, r0, #8	@ 0006e4ee 0012
.org 0x6e4f0
	str r0, [r6, #92]	@ 0006e4f0 f065
.org 0x6e4f2
	lsls r0, r2, #1	@ 0006e4f2 5000
.org 0x6e4f4
	adds r0, r0, r3	@ 0006e4f4 c018
.org 0x6e4f6
	movs r3, #0	@ 0006e4f6 0023
.org 0x6e4f8
	ldrsh r0, [r0, r3]	@ 0006e4f8 c05e
.org 0x6e4fa
	muls r0, r1	@ 0006e4fa 4843
.org 0x6e4fc
	cmp r0, #0	@ 0006e4fc 0028
.org 0x6e4fe
	bge.n 0x6e502	@ 0006e4fe 00da
.org 0x6e500
	adds r0, #255	@ 0006e500 ff30
.org 0x6e502
	asrs r0, r0, #8	@ 0006e502 0012
.org 0x6e504
	str r0, [r6, #96]	@ 0006e504 3066
.org 0x6e506
	movs r0, #8	@ 0006e506 0820
.org 0x6e508
	strb r0, [r6, #18]	@ 0006e508 b074
.org 0x6e50a
	strb r2, [r6, #19]	@ 0006e50a f274
.org 0x6e50c
	ldrb r0, [r6, #15]	@ 0006e50c f07b
.org 0x6e50e
	adds r0, #1	@ 0006e50e 0130
.org 0x6e510
	strb r0, [r6, #15]	@ 0006e510 f073
.org 0x6e512
	movs r5, #0	@ 0006e512 0025
.org 0x6e514
	movs r4, #0	@ 0006e514 0024
.org 0x6e516
	ldr r1, [r6, #84]	@ 0006e516 716d
.org 0x6e518
	ldr r0, [r6, #92]	@ 0006e518 f06d
.org 0x6e51a
	adds r0, r1, r0	@ 0006e51a 0818
.org 0x6e51c
	str r0, [sp, #0]	@ 0006e51c 0090
.org 0x6e51e
	ldr r1, [r6, #88]	@ 0006e51e b16d
.org 0x6e520
	ldr r0, [r6, #96]	@ 0006e520 306e
.org 0x6e522
	adds r0, r1, r0	@ 0006e522 0818
.org 0x6e524
	str r0, [sp, #4]	@ 0006e524 0190
.org 0x6e526
	adds r0, r6, #0	@ 0006e526 301c
.org 0x6e528
	adds r0, #188	@ 0006e528 bc30
.org 0x6e52a
	ldr r2, [sp, #0]	@ 0006e52a 009a
.org 0x6e52c
	ldr r3, [pc, #124]	@ 0006e52c 1f4b
.org 0x6e52e
	adds r1, r2, r3	@ 0006e52e d118
.org 0x6e530
	ldr r0, [r0, #0]	@ 0006e530 0068
.org 0x6e532
	subs r0, r0, r1	@ 0006e532 401a
.org 0x6e534
	movs r2, #160	@ 0006e534 a022
.org 0x6e536
	lsls r2, r2, #7	@ 0006e536 d201
.org 0x6e538
	adds r0, r0, r2	@ 0006e538 8018
.org 0x6e53a
	movs r1, #160	@ 0006e53a a021
.org 0x6e53c
	lsls r1, r1, #8	@ 0006e53c 0902
.org 0x6e53e
	cmp r0, r1	@ 0006e53e 8842
.org 0x6e540
	bls.n 0x6e544	@ 0006e540 00d9
.org 0x6e542
	movs r4, #1	@ 0006e542 0124
.org 0x6e544
	adds r0, r6, #0	@ 0006e544 301c
.org 0x6e546
	adds r0, #184	@ 0006e546 b830
.org 0x6e548
	ldr r0, [r0, #0]	@ 0006e548 0068
.org 0x6e54a
	ldr r1, [sp, #4]	@ 0006e54a 0199
.org 0x6e54c
	subs r0, r0, r1	@ 0006e54c 401a
.org 0x6e54e
	ldr r3, [pc, #96]	@ 0006e54e 184b
.org 0x6e550
	adds r0, r0, r3	@ 0006e550 c018
.org 0x6e552
	cmp r0, r2	@ 0006e552 9042
.org 0x6e554
	bls.n 0x6e558	@ 0006e554 00d9
.org 0x6e556
	movs r5, #1	@ 0006e556 0125
.org 0x6e558
	ldr r0, [sp, #0]	@ 0006e558 0098
.org 0x6e55a
	ldr r1, [sp, #4]	@ 0006e55a 0199
.org 0x6e55c
	str r0, [r6, #84]	@ 0006e55c 7065
.org 0x6e55e
	str r1, [r6, #88]	@ 0006e55e b165
.org 0x6e560
	adds r0, r6, #0	@ 0006e560 301c
.org 0x6e562
	bl 0x6f26c	@ 0006e562 00f083fe
.org 0x6e566
	adds r0, r6, #0	@ 0006e566 301c
.org 0x6e568
	adds r0, #140	@ 0006e568 8c30
.org 0x6e56a
	ldr r0, [r0, #0]	@ 0006e56a 0068
.org 0x6e56c
	movs r1, #4	@ 0006e56c 0421
.org 0x6e56e
	ands r0, r1	@ 0006e56e 0840
.org 0x6e570
	cmp r0, #0	@ 0006e570 0028
.org 0x6e572
	beq.n 0x6e57a	@ 0006e572 02d0
.org 0x6e574
	movs r0, #56	@ 0006e574 3820
.org 0x6e576
	bl 0x2b10	@ 0006e576 94f7cbfa
.org 0x6e57a
	cmn r4, r5	@ 0006e57a ec42
.org 0x6e57c
	beq.n 0x6e61a	@ 0006e57c 4dd0
.org 0x6e57e
	movs r0, #56	@ 0006e57e 3820
.org 0x6e580
	bl 0x2b10	@ 0006e580 94f7c6fa
.org 0x6e584
	ldrb r0, [r6, #18]	@ 0006e584 b07c
.org 0x6e586
	subs r0, #1	@ 0006e586 0138
.org 0x6e588
	strb r0, [r6, #18]	@ 0006e588 b074
.org 0x6e58a
	lsls r0, r0, #24	@ 0006e58a 0006
.org 0x6e58c
	lsrs r1, r0, #24	@ 0006e58c 010e
.org 0x6e58e
	cmp r1, #0	@ 0006e58e 0029
.org 0x6e590
	bne.n 0x6e5b4	@ 0006e590 10d1
.org 0x6e592
	movs r0, #2	@ 0006e592 0220
.org 0x6e594
	strb r0, [r6, #14]	@ 0006e594 b073
.org 0x6e596
	strb r1, [r6, #15]	@ 0006e596 f173
.org 0x6e598
	b.n 0x6e61a	@ 0006e598 3fe0
.org 0x6e59a
	.byte 0x00	@ 0006e59a data
.org 0x6e59b
	.byte 0x00	@ 0006e59b data
.org 0x6e59c
	.byte 0xf4,0xc5,0x85,0x08	@ 0006e59c data
.org 0x6e5a0
	.byte 0xf0,0xdb,0x02,0x02	@ 0006e5a0 data
.org 0x6e5a4
	.byte 0x00,0xf0,0xff,0xff	@ 0006e5a4 data
.org 0x6e5a8
	.byte 0x0c,0x93,0x12,0x08	@ 0006e5a8 data
.org 0x6e5ac
	.byte 0x00,0x98,0xff,0xff	@ 0006e5ac data
.org 0x6e5b0
	.byte 0x01,0xe8,0xff,0xff	@ 0006e5b0 data
.org 0x6e5b4
	ldrb r2, [r6, #19]	@ 0006e5b4 f27c
.org 0x6e5b6
	movs r0, #160	@ 0006e5b6 a020
.org 0x6e5b8
	lsls r0, r0, #1	@ 0006e5b8 4000
.org 0x6e5ba
	subs r0, r0, r2	@ 0006e5ba 801a
.org 0x6e5bc
	lsls r1, r4, #1	@ 0006e5bc 6100
.org 0x6e5be
	muls r0, r1	@ 0006e5be 4843
.org 0x6e5c0
	adds r0, r2, r0	@ 0006e5c0 1018
.org 0x6e5c2
	lsls r0, r0, #24	@ 0006e5c2 0006
.org 0x6e5c4
	lsrs r2, r0, #24	@ 0006e5c4 020e
.org 0x6e5c6
	movs r0, #192	@ 0006e5c6 c020
.org 0x6e5c8
	lsls r0, r0, #1	@ 0006e5c8 4000
.org 0x6e5ca
	subs r0, r0, r2	@ 0006e5ca 801a
.org 0x6e5cc
	lsls r1, r5, #1	@ 0006e5cc 6900
.org 0x6e5ce
	muls r0, r1	@ 0006e5ce 4843
.org 0x6e5d0
	adds r0, r2, r0	@ 0006e5d0 1018
.org 0x6e5d2
	lsls r0, r0, #24	@ 0006e5d2 0006
.org 0x6e5d4
	lsrs r2, r0, #24	@ 0006e5d4 020e
.org 0x6e5d6
	ldr r0, [r6, #100]	@ 0006e5d6 706e
.org 0x6e5d8
	adds r0, #64	@ 0006e5d8 4030
.org 0x6e5da
	str r0, [r6, #100]	@ 0006e5da 7066
.org 0x6e5dc
	movs r1, #224	@ 0006e5dc e021
.org 0x6e5de
	lsls r1, r1, #3	@ 0006e5de c900
.org 0x6e5e0
	cmp r0, r1	@ 0006e5e0 8842
.org 0x6e5e2
	ble.n 0x6e5e6	@ 0006e5e2 00dd
.org 0x6e5e4
	str r1, [r6, #100]	@ 0006e5e4 7166
.org 0x6e5e6
	ldr r3, [pc, #60]	@ 0006e5e6 0f4b
.org 0x6e5e8
	adds r0, r2, #0	@ 0006e5e8 101c
.org 0x6e5ea
	adds r0, #64	@ 0006e5ea 4030
.org 0x6e5ec
	lsls r0, r0, #24	@ 0006e5ec 0006
.org 0x6e5ee
	lsrs r0, r0, #23	@ 0006e5ee c00d
.org 0x6e5f0
	adds r0, r0, r3	@ 0006e5f0 c018
.org 0x6e5f2
	movs r1, #0	@ 0006e5f2 0021
.org 0x6e5f4
	ldrsh r0, [r0, r1]	@ 0006e5f4 405e
.org 0x6e5f6
	ldr r1, [r6, #100]	@ 0006e5f6 716e
.org 0x6e5f8
	muls r0, r1	@ 0006e5f8 4843
.org 0x6e5fa
	cmp r0, #0	@ 0006e5fa 0028
.org 0x6e5fc
	bge.n 0x6e600	@ 0006e5fc 00da
.org 0x6e5fe
	adds r0, #255	@ 0006e5fe ff30
.org 0x6e600
	asrs r0, r0, #8	@ 0006e600 0012
.org 0x6e602
	str r0, [r6, #92]	@ 0006e602 f065
.org 0x6e604
	lsls r0, r2, #1	@ 0006e604 5000
.org 0x6e606
	adds r0, r0, r3	@ 0006e606 c018

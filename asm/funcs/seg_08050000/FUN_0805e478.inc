@ FUN_0805e478  entry 0x0805e478  size 262
.thumb
.org 0x5e478
FUN_0805e478:
	push {r4, r5, r6, r7, lr}	@ 0005e478 f0b5
.org 0x5e47a
	adds r5, r0, #0	@ 0005e47a 051c
.org 0x5e47c
	ldrb r4, [r5, #15]	@ 0005e47c ec7b
.org 0x5e47e
	cmp r4, #0	@ 0005e47e 002c
.org 0x5e480
	bne.n 0x5e4b2	@ 0005e480 17d1
.org 0x5e482
	movs r1, #17	@ 0005e482 1121
.org 0x5e484
	bl 0x5ee6c	@ 0005e484 00f0f2fc
.org 0x5e488
	movs r0, #160	@ 0005e488 a020
.org 0x5e48a
	lsls r0, r0, #2	@ 0005e48a 8000
.org 0x5e48c
	str r0, [r5, #96]	@ 0005e48c 2866
.org 0x5e48e
	movs r0, #32	@ 0005e48e 2020
.org 0x5e490
	str r0, [r5, #104]	@ 0005e490 a866
.org 0x5e492
	movs r2, #0	@ 0005e492 0022
.org 0x5e494
	adds r0, r5, #0	@ 0005e494 281c
.org 0x5e496
	adds r0, #180	@ 0005e496 b430
.org 0x5e498
	ldr r0, [r0, #0]	@ 0005e498 0068
.org 0x5e49a
	ldr r1, [pc, #184]	@ 0005e49a 2e49
.org 0x5e49c
	adds r0, r0, r1	@ 0005e49c 4018
.org 0x5e49e
	ldr r1, [r5, #88]	@ 0005e49e a96d
.org 0x5e4a0
	cmp r1, r0	@ 0005e4a0 8142
.org 0x5e4a2
	blt.n 0x5e4a6	@ 0005e4a2 00db
.org 0x5e4a4
	movs r2, #1	@ 0005e4a4 0122
.org 0x5e4a6
	str r2, [r5, #92]	@ 0005e4a6 ea65
.org 0x5e4a8
	str r1, [r5, #100]	@ 0005e4a8 6966
.org 0x5e4aa
	strb r4, [r5, #19]	@ 0005e4aa ec74
.org 0x5e4ac
	ldrb r0, [r5, #15]	@ 0005e4ac e87b
.org 0x5e4ae
	adds r0, #1	@ 0005e4ae 0130
.org 0x5e4b0
	strb r0, [r5, #15]	@ 0005e4b0 e873
.org 0x5e4b2
	adds r0, r5, #0	@ 0005e4b2 281c
.org 0x5e4b4
	bl 0x1cff0	@ 0005e4b4 bef79cfd
.org 0x5e4b8
	adds r0, r5, #0	@ 0005e4b8 281c
.org 0x5e4ba
	adds r0, #116	@ 0005e4ba 7430
.org 0x5e4bc
	ldr r4, [pc, #152]	@ 0005e4bc 264c
.org 0x5e4be
	ldr r3, [pc, #156]	@ 0005e4be 274b
.org 0x5e4c0
	adds r1, r5, #0	@ 0005e4c0 291c
.org 0x5e4c2
	adds r1, #184	@ 0005e4c2 b831
.org 0x5e4c4
	ldrb r2, [r1, #0]	@ 0005e4c4 0a78
.org 0x5e4c6
	lsls r1, r2, #1	@ 0005e4c6 5100
.org 0x5e4c8
	adds r1, r1, r3	@ 0005e4c8 c918
.org 0x5e4ca
	ldrh r1, [r1, #0]	@ 0005e4ca 0988
.org 0x5e4cc
	lsls r1, r1, #2	@ 0005e4cc 8900
.org 0x5e4ce
	adds r1, r1, r4	@ 0005e4ce 0919
.org 0x5e4d0
	adds r3, r5, #0	@ 0005e4d0 2b1c
.org 0x5e4d2
	adds r3, #113	@ 0005e4d2 7133
.org 0x5e4d4
	movs r4, #0	@ 0005e4d4 0024
.org 0x5e4d6
	ldrsb r4, [r3, r4]	@ 0005e4d6 1c57
.org 0x5e4d8
	ldr r1, [r1, #0]	@ 0005e4d8 0968
.org 0x5e4da
	lsls r3, r4, #2	@ 0005e4da a300
.org 0x5e4dc
	adds r3, r3, r1	@ 0005e4dc 5b18
.org 0x5e4de
	ldr r1, [pc, #128]	@ 0005e4de 2049
.org 0x5e4e0
	lsls r2, r2, #2	@ 0005e4e0 9200
.org 0x5e4e2
	adds r2, r2, r1	@ 0005e4e2 5218
.org 0x5e4e4
	ldr r1, [r2, #0]	@ 0005e4e4 1168
.org 0x5e4e6
	adds r1, r1, r4	@ 0005e4e6 0919
.org 0x5e4e8
	ldrb r1, [r1, #0]	@ 0005e4e8 0978
.org 0x5e4ea
	lsls r2, r1, #1	@ 0005e4ea 4a00
.org 0x5e4ec
	adds r2, r2, r1	@ 0005e4ec 5218
.org 0x5e4ee
	lsls r2, r2, #3	@ 0005e4ee d200
.org 0x5e4f0
	ldr r1, [r3, #0]	@ 0005e4f0 1968
.org 0x5e4f2
	adds r1, r1, r2	@ 0005e4f2 8918
.org 0x5e4f4
	bl 0x5784	@ 0005e4f4 a7f746f9
.org 0x5e4f8
	adds r0, r5, #0	@ 0005e4f8 281c
.org 0x5e4fa
	adds r0, #204	@ 0005e4fa cc30
.org 0x5e4fc
	ldr r1, [r0, #0]	@ 0005e4fc 0168
.org 0x5e4fe
	adds r7, r0, #0	@ 0005e4fe 071c
.org 0x5e500
	cmp r1, #0	@ 0005e500 0029
.org 0x5e502
	beq.n 0x5e50e	@ 0005e502 04d0
.org 0x5e504
	ldrb r0, [r1, #12]	@ 0005e504 087b
.org 0x5e506
	cmp r0, #1	@ 0005e506 0128
.org 0x5e508
	bls.n 0x5e50e	@ 0005e508 01d9
.org 0x5e50a
	movs r0, #0	@ 0005e50a 0020
.org 0x5e50c
	str r0, [r7, #0]	@ 0005e50c 3860
.org 0x5e50e
	ldr r2, [r5, #88]	@ 0005e50e aa6d
.org 0x5e510
	ldr r6, [r5, #92]	@ 0005e510 ee6d
.org 0x5e512
	adds r1, r2, r6	@ 0005e512 9119
.org 0x5e514
	ldr r0, [r5, #100]	@ 0005e514 686e
.org 0x5e516
	subs r0, r0, r1	@ 0005e516 401a
.org 0x5e518
	movs r3, #1	@ 0005e518 0123
.org 0x5e51a
	lsrs r0, r0, #31	@ 0005e51a c00f
.org 0x5e51c
	ldrb r1, [r5, #19]	@ 0005e51c e97c
.org 0x5e51e
	adds r4, r0, r1	@ 0005e51e 4418
.org 0x5e520
	ands r4, r3	@ 0005e520 1c40
.org 0x5e522
	lsls r0, r4, #1	@ 0005e522 6000
.org 0x5e524
	subs r0, #1	@ 0005e524 0138
.org 0x5e526
	ldr r3, [r5, #96]	@ 0005e526 2b6e
.org 0x5e528
	muls r0, r3	@ 0005e528 5843
.org 0x5e52a
	adds r2, r2, r0	@ 0005e52a 1218
.org 0x5e52c
	str r2, [r5, #88]	@ 0005e52c aa65
.org 0x5e52e
	lsls r1, r1, #24	@ 0005e52e 0906
.org 0x5e530
	cmp r1, #0	@ 0005e530 0029
.org 0x5e532
	beq.n 0x5e570	@ 0005e532 1dd0
.org 0x5e534
	ldr r0, [r5, #104]	@ 0005e534 a86e
.org 0x5e536
	adds r0, r3, r0	@ 0005e536 1818
.org 0x5e538
	str r0, [r5, #96]	@ 0005e538 2866
.org 0x5e53a
	movs r1, #160	@ 0005e53a a021
.org 0x5e53c
	lsls r1, r1, #2	@ 0005e53c 8900
.org 0x5e53e
	cmp r0, r1	@ 0005e53e 8842
.org 0x5e540
	ble.n 0x5e588	@ 0005e540 22dd
.org 0x5e542
	cmp r4, #0	@ 0005e542 002c
.org 0x5e544
	beq.n 0x5e564	@ 0005e544 0ed0
.org 0x5e546
	ldr r0, [r7, #0]	@ 0005e546 3868
.org 0x5e548
	cmp r0, #0	@ 0005e548 0028
.org 0x5e54a
	bne.n 0x5e564	@ 0005e54a 0bd1
.org 0x5e54c
	strb r0, [r5, #13]	@ 0005e54c 6873
.org 0x5e54e
	strb r0, [r5, #14]	@ 0005e54e a873
.org 0x5e550
	strb r0, [r5, #15]	@ 0005e550 e873
.org 0x5e552
	b.n 0x5e588	@ 0005e552 19e0
.org 0x5e554
	.byte 0x00,0xb0,0xff,0xff	@ 0005e554 data
.org 0x5e558
	.byte 0xa8,0xa7,0x85,0x08	@ 0005e558 data
.org 0x5e55c
	.byte 0x10,0xa9,0x85,0x08	@ 0005e55c data
.org 0x5e560
	.byte 0x44,0xa8,0x85,0x08	@ 0005e560 data
.org 0x5e564
	movs r0, #160	@ 0005e564 a020
.org 0x5e566
	lsls r0, r0, #2	@ 0005e566 8000
.org 0x5e568
	str r0, [r5, #96]	@ 0005e568 2866
.org 0x5e56a
	movs r0, #0	@ 0005e56a 0020
.org 0x5e56c
	strb r0, [r5, #19]	@ 0005e56c e874
.org 0x5e56e
	b.n 0x5e588	@ 0005e56e 0be0
.org 0x5e570
	ldr r0, [r5, #104]	@ 0005e570 a86e
.org 0x5e572
	subs r0, r3, r0	@ 0005e572 181a
.org 0x5e574
	str r0, [r5, #96]	@ 0005e574 2866
.org 0x5e576
	cmp r0, #31	@ 0005e576 1f28
.org 0x5e578
	bgt.n 0x5e588	@ 0005e578 06dc
.org 0x5e57a
	movs r0, #32	@ 0005e57a 2020
.org 0x5e57c
	str r0, [r5, #96]	@ 0005e57c 2866

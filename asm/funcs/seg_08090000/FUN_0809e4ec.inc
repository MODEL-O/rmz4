@ FUN_0809e4ec  entry 0x0809e4ec  size 238
.thumb
.org 0x9e4ec
FUN_0809e4ec:
	push {r4, r5, r6, r7, lr}	@ 0009e4ec f0b5
.org 0x9e4ee
	mov r7, sl	@ 0009e4ee 5746
.org 0x9e4f0
	mov r6, r9	@ 0009e4f0 4e46
.org 0x9e4f2
	mov r5, r8	@ 0009e4f2 4546
.org 0x9e4f4
	push {r5, r6, r7}	@ 0009e4f4 e0b4
.org 0x9e4f6
	sub sp, #16	@ 0009e4f6 84b0
.org 0x9e4f8
	adds r5, r0, #0	@ 0009e4f8 051c
.org 0x9e4fa
	movs r0, #63	@ 0009e4fa 3f20
.org 0x9e4fc
	bl 0x2b10	@ 0009e4fc 64f708fb
.org 0x9e500
	ldrb r0, [r5, #10]	@ 0009e500 a87a
.org 0x9e502
	lsrs r6, r0, #4	@ 0009e502 0609
.org 0x9e504
	movs r2, #1	@ 0009e504 0122
.org 0x9e506
	ands r6, r2	@ 0009e506 1640
.org 0x9e508
	str r6, [sp, #8]	@ 0009e508 0296
.org 0x9e50a
	ldr r3, [pc, #208]	@ 0009e50a 344b
.org 0x9e50c
	ldr r0, [r3, #0]	@ 0009e50c 1868
.org 0x9e50e
	ldr r1, [pc, #208]	@ 0009e50e 3449
.org 0x9e510
	mov r8, r1	@ 0009e510 8846
.org 0x9e512
	mov r1, r8	@ 0009e512 4146
.org 0x9e514
	muls r1, r0	@ 0009e514 4143
.org 0x9e516
	adds r0, r1, #0	@ 0009e516 081c
.org 0x9e518
	ldr r7, [pc, #200]	@ 0009e518 324f
.org 0x9e51a
	adds r0, r0, r7	@ 0009e51a c019
.org 0x9e51c
	lsls r0, r0, #1	@ 0009e51c 4000
.org 0x9e51e
	lsrs r1, r0, #1	@ 0009e51e 4108
.org 0x9e520
	str r1, [r3, #0]	@ 0009e520 1960
.org 0x9e522
	lsrs r0, r0, #17	@ 0009e522 400c
.org 0x9e524
	ands r0, r2	@ 0009e524 1040
.org 0x9e526
	adds r4, r0, #5	@ 0009e526 441d
.org 0x9e528
	cmp r4, #0	@ 0009e528 002c
.org 0x9e52a
	beq.n 0x9e59c	@ 0009e52a 37d0
.org 0x9e52c
	mov sl, r3	@ 0009e52c 9a46
.org 0x9e52e
	mov r9, r8	@ 0009e52e c146
.org 0x9e530
	mov r8, r7	@ 0009e530 b846
.org 0x9e532
	movs r7, #15	@ 0009e532 0f27
.org 0x9e534
	mov r2, sp	@ 0009e534 6a46
.org 0x9e536
	str r2, [sp, #12]	@ 0009e536 0392
.org 0x9e538
	mov r1, sl	@ 0009e538 5146
.org 0x9e53a
	ldr r0, [r1, #0]	@ 0009e53a 0868
.org 0x9e53c
	mov r2, r9	@ 0009e53c 4a46
.org 0x9e53e
	muls r2, r0	@ 0009e53e 4243
.org 0x9e540
	adds r0, r2, #0	@ 0009e540 101c
.org 0x9e542
	add r0, r8	@ 0009e542 4044
.org 0x9e544
	lsls r0, r0, #1	@ 0009e544 4000
.org 0x9e546
	lsrs r2, r0, #1	@ 0009e546 4208
.org 0x9e548
	lsrs r0, r0, #17	@ 0009e548 400c
.org 0x9e54a
	ands r0, r7	@ 0009e54a 3840
.org 0x9e54c
	subs r0, #7	@ 0009e54c 0738
.org 0x9e54e
	lsls r0, r0, #8	@ 0009e54e 0002
.org 0x9e550
	ldr r1, [r5, #84]	@ 0009e550 696d
.org 0x9e552
	adds r1, r1, r0	@ 0009e552 0918
.org 0x9e554
	str r1, [sp, #0]	@ 0009e554 0091
.org 0x9e556
	mov r0, r9	@ 0009e556 4846
.org 0x9e558
	muls r0, r2	@ 0009e558 5043
.org 0x9e55a
	add r0, r8	@ 0009e55a 4044
.org 0x9e55c
	lsls r0, r0, #1	@ 0009e55c 4000
.org 0x9e55e
	lsrs r1, r0, #1	@ 0009e55e 4108
.org 0x9e560
	mov r2, sl	@ 0009e560 5246
.org 0x9e562
	str r1, [r2, #0]	@ 0009e562 1160
.org 0x9e564
	lsrs r0, r0, #17	@ 0009e564 400c
.org 0x9e566
	ands r0, r7	@ 0009e566 3840
.org 0x9e568
	lsls r0, r0, #8	@ 0009e568 0002
.org 0x9e56a
	ldr r1, [pc, #124]	@ 0009e56a 1f49
.org 0x9e56c
	adds r0, r0, r1	@ 0009e56c 4018
.org 0x9e56e
	ldr r1, [r5, #88]	@ 0009e56e a96d
.org 0x9e570
	adds r1, r1, r0	@ 0009e570 0918
.org 0x9e572
	ldr r2, [sp, #12]	@ 0009e572 039a
.org 0x9e574
	str r1, [r2, #4]	@ 0009e574 5160
.org 0x9e576
	movs r0, #3	@ 0009e576 0320
.org 0x9e578
	ands r0, r4	@ 0009e578 2040
.org 0x9e57a
	lsls r1, r0, #3	@ 0009e57a c100
.org 0x9e57c
	subs r1, r1, r0	@ 0009e57c 091a
.org 0x9e57e
	lsls r1, r1, #2	@ 0009e57e 8900
.org 0x9e580
	ldr r0, [pc, #104]	@ 0009e580 1a48
.org 0x9e582
	adds r1, r1, r0	@ 0009e582 0918
.org 0x9e584
	ldr r0, [sp, #8]	@ 0009e584 0298
.org 0x9e586
	lsls r3, r0, #4	@ 0009e586 0301
.org 0x9e588
	orrs r3, r6	@ 0009e588 3343
.org 0x9e58a
	lsls r3, r3, #24	@ 0009e58a 1b06
.org 0x9e58c
	mov r0, sp	@ 0009e58c 6846
.org 0x9e58e
	movs r2, #0	@ 0009e58e 0022
.org 0x9e590
	lsrs r3, r3, #24	@ 0009e590 1b0e
.org 0x9e592
	bl 0xd4c8c	@ 0009e592 36f07bfb
.org 0x9e596
	subs r4, #1	@ 0009e596 013c
.org 0x9e598
	cmp r4, #0	@ 0009e598 002c
.org 0x9e59a
	bne.n 0x9e538	@ 0009e59a cdd1
.org 0x9e59c
	adds r0, r5, #0	@ 0009e59c 281c
.org 0x9e59e
	adds r0, #140	@ 0009e59e 8c30
.org 0x9e5a0
	movs r1, #0	@ 0009e5a0 0021
.org 0x9e5a2
	str r1, [r0, #0]	@ 0009e5a2 0160
.org 0x9e5a4
	adds r0, #4	@ 0009e5a4 0430
.org 0x9e5a6
	str r1, [r0, #0]	@ 0009e5a6 0160
.org 0x9e5a8
	adds r0, #4	@ 0009e5a8 0430
.org 0x9e5aa
	strb r1, [r0, #0]	@ 0009e5aa 0170
.org 0x9e5ac
	ldrb r1, [r5, #10]	@ 0009e5ac a97a
.org 0x9e5ae
	movs r0, #251	@ 0009e5ae fb20
.org 0x9e5b0
	ands r0, r1	@ 0009e5b0 0840
.org 0x9e5b2
	movs r1, #254	@ 0009e5b2 fe21
.org 0x9e5b4
	ands r0, r1	@ 0009e5b4 0840
.org 0x9e5b6
	strb r0, [r5, #10]	@ 0009e5b6 a872
.org 0x9e5b8
	ldr r1, [pc, #52]	@ 0009e5b8 0d49
.org 0x9e5ba
	ldrb r0, [r5, #9]	@ 0009e5ba 687a
.org 0x9e5bc
	lsls r0, r0, #2	@ 0009e5bc 8000
.org 0x9e5be
	adds r0, r0, r1	@ 0009e5be 4018
.org 0x9e5c0
	movs r1, #4	@ 0009e5c0 0421
.org 0x9e5c2
	str r1, [r5, #12]	@ 0009e5c2 e960
.org 0x9e5c4
	ldr r0, [r0, #0]	@ 0009e5c4 0068
.org 0x9e5c6
	ldr r0, [r0, #16]	@ 0009e5c6 0069
.org 0x9e5c8
	str r0, [r5, #20]	@ 0009e5c8 6861
.org 0x9e5ca
	add sp, #16	@ 0009e5ca 04b0
.org 0x9e5cc
	pop {r3, r4, r5}	@ 0009e5cc 38bc
.org 0x9e5ce
	mov r8, r3	@ 0009e5ce 9846
.org 0x9e5d0
	mov r9, r4	@ 0009e5d0 a146
.org 0x9e5d2
	mov sl, r5	@ 0009e5d2 aa46
.org 0x9e5d4
	pop {r4, r5, r6, r7}	@ 0009e5d4 f0bc
.org 0x9e5d6
	pop {r0}	@ 0009e5d6 01bc
.org 0x9e5d8
	bx r0	@ 0009e5d8 0047

@ FUN_0808c514  entry 0x0808c514  size 262
.thumb
.org 0x8c514
FUN_0808c514:
	push {r4, r5, r6, r7, lr}	@ 0008c514 f0b5
.org 0x8c516
	sub sp, #8	@ 0008c516 82b0
.org 0x8c518
	adds r4, r0, #0	@ 0008c518 041c
.org 0x8c51a
	ldr r1, [pc, #80]	@ 0008c51a 1449
.org 0x8c51c
	mov r0, sp	@ 0008c51c 6846
.org 0x8c51e
	movs r2, #8	@ 0008c51e 0822
.org 0x8c520
	bl 0x129258	@ 0008c520 9cf09afe
.org 0x8c524
	ldrb r6, [r4, #17]	@ 0008c524 667c
.org 0x8c526
	adds r5, r4, #0	@ 0008c526 251c
.org 0x8c528
	adds r5, #140	@ 0008c528 8c35
.org 0x8c52a
	ldr r0, [r5, #0]	@ 0008c52a 2868
.org 0x8c52c
	movs r7, #1	@ 0008c52c 0127
.org 0x8c52e
	ands r0, r7	@ 0008c52e 3840
.org 0x8c530
	cmp r0, #0	@ 0008c530 0028
.org 0x8c532
	beq.n 0x8c53a	@ 0008c532 02d0
.org 0x8c534
	movs r0, #4	@ 0008c534 0420
.org 0x8c536
	bl 0x6984	@ 0008c536 7af725fa
.org 0x8c53a
	ldr r1, [r5, #0]	@ 0008c53a 2968
.org 0x8c53c
	movs r0, #128	@ 0008c53c 8020
.org 0x8c53e
	lsls r0, r0, #2	@ 0008c53e 8000
.org 0x8c540
	ands r0, r1	@ 0008c540 0840
.org 0x8c542
	cmp r0, #0	@ 0008c542 0028
.org 0x8c544
	beq.n 0x8c5a2	@ 0008c544 2dd0
.org 0x8c546
	ldr r1, [pc, #40]	@ 0008c546 0a49
.org 0x8c548
	ldrb r0, [r4, #9]	@ 0008c548 607a
.org 0x8c54a
	lsls r0, r0, #2	@ 0008c54a 8000
.org 0x8c54c
	adds r0, r0, r1	@ 0008c54c 4018
.org 0x8c54e
	movs r1, #2	@ 0008c54e 0221
.org 0x8c550
	str r1, [r4, #12]	@ 0008c550 e160
.org 0x8c552
	ldr r0, [r0, #0]	@ 0008c552 0068
.org 0x8c554
	ldr r0, [r0, #8]	@ 0008c554 8068
.org 0x8c556
	str r0, [r4, #20]	@ 0008c556 6061
.org 0x8c558
	adds r0, r4, #0	@ 0008c558 201c
.org 0x8c55a
	adds r0, #184	@ 0008c55a b830
.org 0x8c55c
	ldrb r2, [r0, #0]	@ 0008c55c 0278
.org 0x8c55e
	cmp r2, #0	@ 0008c55e 002a
.org 0x8c560
	beq.n 0x8c574	@ 0008c560 08d0
.org 0x8c562
	movs r0, #0	@ 0008c562 0020
.org 0x8c564
	strb r1, [r4, #13]	@ 0008c564 6173
.org 0x8c566
	strb r0, [r4, #14]	@ 0008c566 a073
.org 0x8c568
	strb r0, [r4, #15]	@ 0008c568 e073
.org 0x8c56a
	b.n 0x8c58e	@ 0008c56a 10e0
.org 0x8c56c
	.byte 0x88,0x9b,0x12,0x08	@ 0008c56c data
.org 0x8c570
	.byte 0x40,0xdb,0x85,0x08	@ 0008c570 data
.org 0x8c574
	ldr r1, [r5, #0]	@ 0008c574 2968
.org 0x8c576
	movs r0, #128	@ 0008c576 8020
.org 0x8c578
	lsls r0, r0, #9	@ 0008c578 4002
.org 0x8c57a
	ands r1, r0	@ 0008c57a 0140
.org 0x8c57c
	cmp r1, #0	@ 0008c57c 0029
.org 0x8c57e
	beq.n 0x8c588	@ 0008c57e 03d0
.org 0x8c580
	strb r7, [r4, #13]	@ 0008c580 6773
.org 0x8c582
	strb r2, [r4, #14]	@ 0008c582 a273
.org 0x8c584
	strb r2, [r4, #15]	@ 0008c584 e273
.org 0x8c586
	b.n 0x8c58e	@ 0008c586 02e0
.org 0x8c588
	strb r1, [r4, #13]	@ 0008c588 6173
.org 0x8c58a
	strb r1, [r4, #14]	@ 0008c58a a173
.org 0x8c58c
	strb r1, [r4, #15]	@ 0008c58c e173
.org 0x8c58e
	adds r0, r4, #0	@ 0008c58e 201c
.org 0x8c590
	adds r0, #180	@ 0008c590 b430
.org 0x8c592
	ldr r0, [r0, #0]	@ 0008c592 0068
.org 0x8c594
	ldrb r1, [r4, #13]	@ 0008c594 617b
.org 0x8c596
	adds r0, #182	@ 0008c596 b630
.org 0x8c598
	strb r1, [r0, #0]	@ 0008c598 0170
.org 0x8c59a
	adds r0, r4, #0	@ 0008c59a 201c
.org 0x8c59c
	bl 0x8c8f8	@ 0008c59c 00f0acf9
.org 0x8c5a0
	b.n 0x8c622	@ 0008c5a0 3fe0
.org 0x8c5a2
	ands r1, r7	@ 0008c5a2 3940
.org 0x8c5a4
	cmp r1, #0	@ 0008c5a4 0029
.org 0x8c5a6
	beq.n 0x8c5be	@ 0008c5a6 0ad0
.org 0x8c5a8
	ldr r0, [r4, #44]	@ 0008c5a8 e06a
.org 0x8c5aa
	cmp r0, #0	@ 0008c5aa 0028
.org 0x8c5ac
	bne.n 0x8c5c4	@ 0008c5ac 0ad1
.org 0x8c5ae
	lsls r2, r6, #3	@ 0008c5ae f200
.org 0x8c5b0
	ldr r0, [pc, #72]	@ 0008c5b0 1248
.org 0x8c5b2
	adds r2, r2, r0	@ 0008c5b2 1218
.org 0x8c5b4
	movs r0, #0	@ 0008c5b4 0020
.org 0x8c5b6
	adds r1, r4, #0	@ 0008c5b6 211c
.org 0x8c5b8
	bl 0x2adac	@ 0008c5b8 9ef7f8fb
.org 0x8c5bc
	str r0, [r4, #44]	@ 0008c5bc e062
.org 0x8c5be
	ldr r0, [r4, #44]	@ 0008c5be e06a
.org 0x8c5c0
	cmp r0, #0	@ 0008c5c0 0028
.org 0x8c5c2
	beq.n 0x8c604	@ 0008c5c2 1fd0
.org 0x8c5c4
	ldr r0, [r4, #44]	@ 0008c5c4 e06a
.org 0x8c5c6
	bl 0x2b3e4	@ 0008c5c6 9ef70dff
.org 0x8c5ca
	cmp r0, #0	@ 0008c5ca 0028
.org 0x8c5cc
	beq.n 0x8c5d2	@ 0008c5cc 01d0
.org 0x8c5ce
	movs r0, #0	@ 0008c5ce 0020
.org 0x8c5d0
	str r0, [r4, #44]	@ 0008c5d0 e062
.org 0x8c5d2
	ldr r0, [r4, #44]	@ 0008c5d2 e06a
.org 0x8c5d4
	cmp r0, #0	@ 0008c5d4 0028
.org 0x8c5d6
	beq.n 0x8c604	@ 0008c5d6 15d0
.org 0x8c5d8
	adds r0, r4, #0	@ 0008c5d8 201c
.org 0x8c5da
	bl 0x1d1f4	@ 0008c5da 90f70bfe
.org 0x8c5de
	adds r0, r4, #0	@ 0008c5de 201c
.org 0x8c5e0
	adds r0, #116	@ 0008c5e0 7430
.org 0x8c5e2
	lsls r2, r6, #1	@ 0008c5e2 7200
.org 0x8c5e4
	mov r1, sp	@ 0008c5e4 6946
.org 0x8c5e6
	adds r1, #1	@ 0008c5e6 0131
.org 0x8c5e8
	adds r1, r1, r2	@ 0008c5e8 8918
.org 0x8c5ea
	ldrb r2, [r1, #0]	@ 0008c5ea 0a78
.org 0x8c5ec
	lsls r1, r2, #1	@ 0008c5ec 5100
.org 0x8c5ee
	adds r1, r1, r2	@ 0008c5ee 8918
.org 0x8c5f0
	lsls r1, r1, #3	@ 0008c5f0 c900
.org 0x8c5f2
	ldr r2, [pc, #12]	@ 0008c5f2 034a
.org 0x8c5f4
	adds r1, r1, r2	@ 0008c5f4 8918
.org 0x8c5f6
	bl 0x5784	@ 0008c5f6 79f7c5f8
.org 0x8c5fa
	b.n 0x8c622	@ 0008c5fa 12e0
.org 0x8c5fc
	.byte 0x4c,0xf8,0x85,0x08	@ 0008c5fc data
.org 0x8c600
	.byte 0xec,0xf7,0x85,0x08	@ 0008c600 data
.org 0x8c604
	adds r0, r4, #0	@ 0008c604 201c
.org 0x8c606
	bl 0x1cff0	@ 0008c606 90f7f3fc
.org 0x8c60a
	adds r0, r4, #0	@ 0008c60a 201c
.org 0x8c60c
	adds r0, #116	@ 0008c60c 7430
.org 0x8c60e
	lsls r1, r6, #1	@ 0008c60e 7100
.org 0x8c610
	add r1, sp	@ 0008c610 6944
.org 0x8c612
	ldrb r2, [r1, #0]	@ 0008c612 0a78
.org 0x8c614
	lsls r1, r2, #1	@ 0008c614 5100
.org 0x8c616
	adds r1, r1, r2	@ 0008c616 8918
.org 0x8c618
	lsls r1, r1, #3	@ 0008c618 c900

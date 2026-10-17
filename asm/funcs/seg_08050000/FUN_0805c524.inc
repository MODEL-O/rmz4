@ FUN_0805c524  entry 0x0805c524  size 250
.thumb
.org 0x5c524
FUN_0805c524:
	push {r4, r5, r6, r7, lr}	@ 0005c524 f0b5
.org 0x5c526
	mov r7, r8	@ 0005c526 4746
.org 0x5c528
	push {r7}	@ 0005c528 80b4
.org 0x5c52a
	sub sp, #12	@ 0005c52a 83b0
.org 0x5c52c
	adds r4, r0, #0	@ 0005c52c 041c
.org 0x5c52e
	mov r0, sp	@ 0005c52e 6846
.org 0x5c530
	ldr r1, [pc, #100]	@ 0005c530 1949
.org 0x5c532
	ldmia r1!, {r2, r3, r5}	@ 0005c532 2cc9
.org 0x5c534
	stmia r0!, {r2, r3, r5}	@ 0005c534 2cc0
.org 0x5c536
	ldrb r5, [r4, #16]	@ 0005c536 257c
.org 0x5c538
	ldrb r7, [r4, #17]	@ 0005c538 677c
.org 0x5c53a
	adds r6, r4, #0	@ 0005c53a 261c
.org 0x5c53c
	adds r6, #140	@ 0005c53c 8c36
.org 0x5c53e
	ldr r0, [r6, #0]	@ 0005c53e 3068
.org 0x5c540
	movs r1, #1	@ 0005c540 0121
.org 0x5c542
	mov r8, r1	@ 0005c542 8846
.org 0x5c544
	ands r0, r1	@ 0005c544 0840
.org 0x5c546
	cmp r0, #0	@ 0005c546 0028
.org 0x5c548
	beq.n 0x5c554	@ 0005c548 04d0
.org 0x5c54a
	lsls r0, r5, #2	@ 0005c54a a800
.org 0x5c54c
	add r0, sp	@ 0005c54c 6844
.org 0x5c54e
	ldrh r0, [r0, #0]	@ 0005c54e 0088
.org 0x5c550
	bl 0x6984	@ 0005c550 aaf718fa
.org 0x5c554
	ldr r0, [r6, #0]	@ 0005c554 3068
.org 0x5c556
	movs r1, #128	@ 0005c556 8021
.org 0x5c558
	lsls r1, r1, #2	@ 0005c558 8900
.org 0x5c55a
	ands r0, r1	@ 0005c55a 0840
.org 0x5c55c
	cmp r0, #0	@ 0005c55c 0028
.org 0x5c55e
	bne.n 0x5c56c	@ 0005c55e 05d1
.org 0x5c560
	adds r0, r4, #0	@ 0005c560 201c
.org 0x5c562
	adds r0, #164	@ 0005c562 a430
.org 0x5c564
	movs r2, #0	@ 0005c564 0022
.org 0x5c566
	ldrsh r0, [r0, r2]	@ 0005c566 805e
.org 0x5c568
	cmp r0, #0	@ 0005c568 0028
.org 0x5c56a
	bne.n 0x5c5b2	@ 0005c56a 22d1
.org 0x5c56c
	ldr r0, [pc, #44]	@ 0005c56c 0b48
.org 0x5c56e
	ldrh r1, [r0, #8]	@ 0005c56e 0189
.org 0x5c570
	movs r0, #8	@ 0005c570 0820
.org 0x5c572
	ands r0, r1	@ 0005c572 0840
.org 0x5c574
	lsls r0, r0, #16	@ 0005c574 0004
.org 0x5c576
	lsrs r2, r0, #16	@ 0005c576 020c
.org 0x5c578
	cmp r2, #0	@ 0005c578 002a
.org 0x5c57a
	bne.n 0x5c5b2	@ 0005c57a 1ad1
.org 0x5c57c
	ldr r1, [pc, #32]	@ 0005c57c 0849
.org 0x5c57e
	ldrb r0, [r4, #9]	@ 0005c57e 607a
.org 0x5c580
	lsls r0, r0, #2	@ 0005c580 8000
.org 0x5c582
	adds r0, r0, r1	@ 0005c582 4018
.org 0x5c584
	movs r1, #2	@ 0005c584 0221
.org 0x5c586
	str r1, [r4, #12]	@ 0005c586 e160
.org 0x5c588
	ldr r0, [r0, #0]	@ 0005c588 0068
.org 0x5c58a
	ldr r0, [r0, #8]	@ 0005c58a 8068
.org 0x5c58c
	str r0, [r4, #20]	@ 0005c58c 6061
.org 0x5c58e
	cmp r7, #2	@ 0005c58e 022f
.org 0x5c590
	bne.n 0x5c5a4	@ 0005c590 08d1
.org 0x5c592
	mov r3, r8	@ 0005c592 4346
.org 0x5c594
	strb r3, [r4, #13]	@ 0005c594 6373
.org 0x5c596
	b.n 0x5c5a6	@ 0005c596 06e0
.org 0x5c598
	.byte 0x20,0x97,0x12,0x08	@ 0005c598 data
.org 0x5c59c
	.byte 0x10,0xe9,0x02,0x02	@ 0005c59c data
.org 0x5c5a0
	.byte 0x70,0x7d,0x85,0x08	@ 0005c5a0 data
.org 0x5c5a4
	strb r2, [r4, #13]	@ 0005c5a4 6273
.org 0x5c5a6
	strb r2, [r4, #14]	@ 0005c5a6 a273
.org 0x5c5a8
	strb r2, [r4, #15]	@ 0005c5a8 e273
.org 0x5c5aa
	adds r0, r4, #0	@ 0005c5aa 201c
.org 0x5c5ac
	bl 0x5ea04	@ 0005c5ac 02f02afa
.org 0x5c5b0
	b.n 0x5c628	@ 0005c5b0 3ae0
.org 0x5c5b2
	adds r0, r4, #0	@ 0005c5b2 201c
.org 0x5c5b4
	adds r0, #140	@ 0005c5b4 8c30
.org 0x5c5b6
	ldr r0, [r0, #0]	@ 0005c5b6 0068
.org 0x5c5b8
	movs r1, #1	@ 0005c5b8 0121
.org 0x5c5ba
	ands r0, r1	@ 0005c5ba 0840
.org 0x5c5bc
	cmp r0, #0	@ 0005c5bc 0028
.org 0x5c5be
	beq.n 0x5c5fc	@ 0005c5be 1dd0
.org 0x5c5c0
	ldr r0, [r4, #44]	@ 0005c5c0 e06a
.org 0x5c5c2
	cmp r0, #0	@ 0005c5c2 0028
.org 0x5c5c4
	bne.n 0x5c602	@ 0005c5c4 1dd1
.org 0x5c5c6
	cmp r5, #1	@ 0005c5c6 012d
.org 0x5c5c8
	beq.n 0x5c5e4	@ 0005c5c8 0cd0
.org 0x5c5ca
	cmp r5, #1	@ 0005c5ca 012d
.org 0x5c5cc
	bgt.n 0x5c5d4	@ 0005c5cc 02dc
.org 0x5c5ce
	cmp r5, #0	@ 0005c5ce 002d
.org 0x5c5d0
	beq.n 0x5c5da	@ 0005c5d0 03d0
.org 0x5c5d2
	b.n 0x5c5fc	@ 0005c5d2 13e0
.org 0x5c5d4
	cmp r5, #2	@ 0005c5d4 022d
.org 0x5c5d6
	beq.n 0x5c5f0	@ 0005c5d6 0bd0
.org 0x5c5d8
	b.n 0x5c5fc	@ 0005c5d8 10e0
.org 0x5c5da
	ldr r2, [pc, #4]	@ 0005c5da 014a
.org 0x5c5dc
	movs r0, #12	@ 0005c5dc 0c20
.org 0x5c5de
	b.n 0x5c5f4	@ 0005c5de 09e0
.org 0x5c5e0
	.byte 0x78,0xa9,0x85,0x08	@ 0005c5e0 data
.org 0x5c5e4
	ldr r2, [pc, #4]	@ 0005c5e4 014a
.org 0x5c5e6
	movs r0, #13	@ 0005c5e6 0d20
.org 0x5c5e8
	b.n 0x5c5f4	@ 0005c5e8 04e0
.org 0x5c5ea
	.byte 0x00	@ 0005c5ea data
.org 0x5c5eb
	.byte 0x00	@ 0005c5eb data
.org 0x5c5ec
	.byte 0x78,0xa9,0x85,0x08	@ 0005c5ec data
.org 0x5c5f0
	ldr r2, [pc, #64]	@ 0005c5f0 104a
.org 0x5c5f2
	movs r0, #14	@ 0005c5f2 0e20
.org 0x5c5f4
	adds r1, r4, #0	@ 0005c5f4 211c
.org 0x5c5f6
	bl 0x2adac	@ 0005c5f6 cef7d9fb
.org 0x5c5fa
	str r0, [r4, #44]	@ 0005c5fa e062
.org 0x5c5fc
	ldr r0, [r4, #44]	@ 0005c5fc e06a
.org 0x5c5fe
	cmp r0, #0	@ 0005c5fe 0028
.org 0x5c600
	beq.n 0x5c60e	@ 0005c600 05d0
.org 0x5c602
	bl 0x2b3e4	@ 0005c602 cef7effe
.org 0x5c606
	cmp r0, #0	@ 0005c606 0028
.org 0x5c608
	beq.n 0x5c60e	@ 0005c608 01d0
.org 0x5c60a
	movs r0, #0	@ 0005c60a 0020
.org 0x5c60c
	str r0, [r4, #44]	@ 0005c60c e062
.org 0x5c60e
	ldr r1, [pc, #40]	@ 0005c60e 0a49
.org 0x5c610
	ldrb r0, [r4, #16]	@ 0005c610 207c
.org 0x5c612
	lsls r0, r0, #2	@ 0005c612 8000
.org 0x5c614
	adds r0, r0, r1	@ 0005c614 4018
.org 0x5c616
	ldr r1, [r0, #0]	@ 0005c616 0168
.org 0x5c618
	adds r0, r4, #0	@ 0005c618 201c
.org 0x5c61a
	bl 0x128f80	@ 0005c61a ccf0b1fc

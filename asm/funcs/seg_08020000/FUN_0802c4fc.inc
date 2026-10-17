@ FUN_0802c4fc  entry 0x0802c4fc  size 250
.thumb
.org 0x2c4fc
FUN_0802c4fc:
	push {r4, r5, r6, r7, lr}	@ 0002c4fc f0b5
.org 0x2c4fe
	mov r7, r9	@ 0002c4fe 4f46
.org 0x2c500
	mov r6, r8	@ 0002c500 4646
.org 0x2c502
	push {r6, r7}	@ 0002c502 c0b4
.org 0x2c504
	sub sp, #12	@ 0002c504 83b0
.org 0x2c506
	adds r6, r0, #0	@ 0002c506 061c
.org 0x2c508
	adds r3, r1, #0	@ 0002c508 0b1c
.org 0x2c50a
	movs r0, #0	@ 0002c50a 0020
.org 0x2c50c
	mov r9, r0	@ 0002c50c 8146
.org 0x2c50e
	ldrb r1, [r6, #10]	@ 0002c50e b17a
.org 0x2c510
	movs r0, #16	@ 0002c510 1020
.org 0x2c512
	ands r0, r1	@ 0002c512 0840
.org 0x2c514
	cmp r0, #0	@ 0002c514 0028
.org 0x2c516
	beq.n 0x2c538	@ 0002c516 0fd0
.org 0x2c518
	movs r1, #0	@ 0002c518 0021
.org 0x2c51a
	ldrsh r0, [r3, r1]	@ 0002c51a 585e
.org 0x2c51c
	ldr r2, [r6, #84]	@ 0002c51c 726d
.org 0x2c51e
	subs r0, r2, r0	@ 0002c51e 101a
.org 0x2c520
	ldrh r1, [r3, #4]	@ 0002c520 9988
.org 0x2c522
	lsls r1, r1, #16	@ 0002c522 0904
.org 0x2c524
	asrs r1, r1, #17	@ 0002c524 4914
.org 0x2c526
	adds r0, r0, r1	@ 0002c526 4018
.org 0x2c528
	str r0, [sp, #0]	@ 0002c528 0090
.org 0x2c52a
	movs r4, #0	@ 0002c52a 0024
.org 0x2c52c
	ldrsh r0, [r3, r4]	@ 0002c52c 185f
.org 0x2c52e
	subs r0, r2, r0	@ 0002c52e 101a
.org 0x2c530
	subs r0, r0, r1	@ 0002c530 401a
.org 0x2c532
	b.n 0x2c552	@ 0002c532 0ee0
.org 0x2c534
	movs r0, #2	@ 0002c534 0220
.org 0x2c536
	b.n 0x2c5e8	@ 0002c536 57e0
.org 0x2c538
	movs r1, #0	@ 0002c538 0021
.org 0x2c53a
	ldrsh r0, [r3, r1]	@ 0002c53a 585e
.org 0x2c53c
	ldr r2, [r6, #84]	@ 0002c53c 726d
.org 0x2c53e
	adds r0, r2, r0	@ 0002c53e 1018
.org 0x2c540
	ldrh r1, [r3, #4]	@ 0002c540 9988
.org 0x2c542
	lsls r1, r1, #16	@ 0002c542 0904
.org 0x2c544
	asrs r1, r1, #17	@ 0002c544 4914
.org 0x2c546
	subs r0, r0, r1	@ 0002c546 401a
.org 0x2c548
	str r0, [sp, #0]	@ 0002c548 0090
.org 0x2c54a
	movs r4, #0	@ 0002c54a 0024
.org 0x2c54c
	ldrsh r0, [r3, r4]	@ 0002c54c 185f
.org 0x2c54e
	adds r0, r2, r0	@ 0002c54e 1018
.org 0x2c550
	adds r0, r0, r1	@ 0002c550 4018
.org 0x2c552
	str r0, [sp, #4]	@ 0002c552 0190
.org 0x2c554
	str r2, [sp, #8]	@ 0002c554 0292
.org 0x2c556
	movs r1, #2	@ 0002c556 0221
.org 0x2c558
	ldrsh r0, [r3, r1]	@ 0002c558 585e
.org 0x2c55a
	ldr r1, [r6, #88]	@ 0002c55a b16d
.org 0x2c55c
	adds r1, r1, r0	@ 0002c55c 0918
.org 0x2c55e
	ldrh r0, [r3, #6]	@ 0002c55e d888
.org 0x2c560
	lsls r0, r0, #16	@ 0002c560 0004
.org 0x2c562
	asrs r0, r0, #17	@ 0002c562 4014
.org 0x2c564
	adds r1, r1, r0	@ 0002c564 0918
.org 0x2c566
	adds r1, #1	@ 0002c566 0131
.org 0x2c568
	mov r8, r1	@ 0002c568 8846
.org 0x2c56a
	movs r5, #0	@ 0002c56a 0025
.org 0x2c56c
	movs r7, #15	@ 0002c56c 0f27
.org 0x2c56e
	mov r4, sp	@ 0002c56e 6c46
.org 0x2c570
	ldr r1, [r4, #0]	@ 0002c570 2168
.org 0x2c572
	adds r0, r6, #0	@ 0002c572 301c
.org 0x2c574
	mov r2, r8	@ 0002c574 4246
.org 0x2c576
	bl 0x2e058	@ 0002c576 01f06ffd
.org 0x2c57a
	lsls r0, r0, #16	@ 0002c57a 0004
.org 0x2c57c
	lsrs r2, r0, #16	@ 0002c57c 020c
.org 0x2c57e
	movs r0, #128	@ 0002c57e 8020
.org 0x2c580
	lsls r0, r0, #8	@ 0002c580 0002
.org 0x2c582
	adds r1, r0, #0	@ 0002c582 011c
.org 0x2c584
	adds r0, r2, #0	@ 0002c584 101c
.org 0x2c586
	ands r0, r1	@ 0002c586 0840
.org 0x2c588
	cmp r0, #0	@ 0002c588 0028
.org 0x2c58a
	beq.n 0x2c598	@ 0002c58a 05d0
.org 0x2c58c
	adds r0, r2, #0	@ 0002c58c 101c
.org 0x2c58e
	ands r0, r7	@ 0002c58e 3840
.org 0x2c590
	cmp r0, #0	@ 0002c590 0028
.org 0x2c592
	beq.n 0x2c59e	@ 0002c592 04d0
.org 0x2c594
	cmp r0, #14	@ 0002c594 0e28
.org 0x2c596
	bls.n 0x2c534	@ 0002c596 cdd9
.org 0x2c598
	ands r2, r7	@ 0002c598 3a40
.org 0x2c59a
	cmp r2, #0	@ 0002c59a 002a
.org 0x2c59c
	bne.n 0x2c5da	@ 0002c59c 1dd1
.org 0x2c59e
	adds r4, #4	@ 0002c59e 0434
.org 0x2c5a0
	adds r5, #1	@ 0002c5a0 0135
.org 0x2c5a2
	cmp r5, #2	@ 0002c5a2 022d
.org 0x2c5a4
	ble.n 0x2c570	@ 0002c5a4 e4dd
.org 0x2c5a6
	movs r5, #0	@ 0002c5a6 0025
.org 0x2c5a8
	mov r4, sp	@ 0002c5a8 6c46
.org 0x2c5aa
	ldr r0, [r4, #0]	@ 0002c5aa 2068
.org 0x2c5ac
	mov r1, r8	@ 0002c5ac 4146
.org 0x2c5ae
	bl 0x7020	@ 0002c5ae daf737fd
.org 0x2c5b2
	lsls r0, r0, #16	@ 0002c5b2 0004
.org 0x2c5b4
	lsrs r2, r0, #16	@ 0002c5b4 020c
.org 0x2c5b6
	cmp r2, #0	@ 0002c5b6 002a
.org 0x2c5b8
	beq.n 0x2c5de	@ 0002c5b8 11d0
.org 0x2c5ba
	movs r0, #128	@ 0002c5ba 8020
.org 0x2c5bc
	lsls r0, r0, #8	@ 0002c5bc 0002
.org 0x2c5be
	adds r1, r0, #0	@ 0002c5be 011c
.org 0x2c5c0
	adds r0, r2, #0	@ 0002c5c0 101c
.org 0x2c5c2
	ands r0, r1	@ 0002c5c2 0840
.org 0x2c5c4
	cmp r0, #0	@ 0002c5c4 0028
.org 0x2c5c6
	beq.n 0x2c5da	@ 0002c5c6 08d0
.org 0x2c5c8
	movs r0, #15	@ 0002c5c8 0f20
.org 0x2c5ca
	ands r0, r2	@ 0002c5ca 1040
.org 0x2c5cc
	cmp r0, #0	@ 0002c5cc 0028
.org 0x2c5ce
	beq.n 0x2c5da	@ 0002c5ce 04d0
.org 0x2c5d0
	cmp r0, #14	@ 0002c5d0 0e28
.org 0x2c5d2
	bhi.n 0x2c5da	@ 0002c5d2 02d8
.org 0x2c5d4
	movs r1, #1	@ 0002c5d4 0121
.org 0x2c5d6
	mov r9, r1	@ 0002c5d6 8946
.org 0x2c5d8
	b.n 0x2c5de	@ 0002c5d8 01e0
.org 0x2c5da
	movs r0, #0	@ 0002c5da 0020
.org 0x2c5dc
	b.n 0x2c5e8	@ 0002c5dc 04e0
.org 0x2c5de
	adds r4, #4	@ 0002c5de 0434
.org 0x2c5e0
	adds r5, #1	@ 0002c5e0 0135
.org 0x2c5e2
	cmp r5, #2	@ 0002c5e2 022d
.org 0x2c5e4
	ble.n 0x2c5aa	@ 0002c5e4 e1dd
.org 0x2c5e6
	mov r0, r9	@ 0002c5e6 4846
.org 0x2c5e8
	add sp, #12	@ 0002c5e8 03b0
.org 0x2c5ea
	pop {r3, r4}	@ 0002c5ea 18bc
.org 0x2c5ec
	mov r8, r3	@ 0002c5ec 9846
.org 0x2c5ee
	mov r9, r4	@ 0002c5ee a146
.org 0x2c5f0
	pop {r4, r5, r6, r7}	@ 0002c5f0 f0bc
.org 0x2c5f2
	pop {r1}	@ 0002c5f2 02bc
.org 0x2c5f4
	bx r1	@ 0002c5f4 0847

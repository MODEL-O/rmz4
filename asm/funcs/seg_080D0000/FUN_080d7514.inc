@ FUN_080d7514  entry 0x080d7514  size 138
.thumb
.org 0xd7514
FUN_080d7514:
	push {r4, r5, r6, r7, lr}	@ 000d7514 f0b5
.org 0xd7516
	mov r7, sl	@ 000d7516 5746
.org 0xd7518
	mov r6, r9	@ 000d7518 4e46
.org 0xd751a
	mov r5, r8	@ 000d751a 4546
.org 0xd751c
	push {r5, r6, r7}	@ 000d751c e0b4
.org 0xd751e
	sub sp, #4	@ 000d751e 81b0
.org 0xd7520
	mov sl, r0	@ 000d7520 8246
.org 0xd7522
	adds r6, r1, #0	@ 000d7522 0e1c
.org 0xd7524
	mov r9, r2	@ 000d7524 9146
.org 0xd7526
	ldr r0, [sp, #36]	@ 000d7526 0998
.org 0xd7528
	lsls r3, r3, #24	@ 000d7528 1b06
.org 0xd752a
	lsrs r7, r3, #24	@ 000d752a 1f0e
.org 0xd752c
	lsls r0, r0, #24	@ 000d752c 0006
.org 0xd752e
	lsrs r0, r0, #24	@ 000d752e 000e
.org 0xd7530
	mov r8, r0	@ 000d7530 8046
.org 0xd7532
	movs r5, #0	@ 000d7532 0025
.org 0xd7534
	cmp r5, r7	@ 000d7534 bd42
.org 0xd7536
	bge.n 0xd758e	@ 000d7536 2ada
.org 0xd7538
	movs r3, #0	@ 000d7538 0023
.org 0xd753a
	movs r4, #1	@ 000d753a 0124
.org 0xd753c
	ldr r0, [pc, #96]	@ 000d753c 1848
.org 0xd753e
	ldr r0, [r0, #0]	@ 000d753e 0068
.org 0xd7540
	str r3, [sp, #0]	@ 000d7540 0093
.org 0xd7542
	bl 0x5500	@ 000d7542 2df7ddff
.org 0xd7546
	adds r1, r0, #0	@ 000d7546 011c
.org 0xd7548
	ldr r3, [sp, #0]	@ 000d7548 009b
.org 0xd754a
	cmp r1, #0	@ 000d754a 0029
.org 0xd754c
	beq.n 0xd7588	@ 000d754c 1cd0
.org 0xd754e
	adds r0, #37	@ 000d754e 2530
.org 0xd7550
	strb r4, [r0, #0]	@ 000d7550 0470
.org 0xd7552
	movs r0, #23	@ 000d7552 1720
.org 0xd7554
	strb r0, [r1, #9]	@ 000d7554 4872
.org 0xd7556
	ldr r2, [pc, #76]	@ 000d7556 134a
.org 0xd7558
	ldr r0, [r2, #92]	@ 000d7558 d06d
.org 0xd755a
	ldr r0, [r0, #0]	@ 000d755a 0068
.org 0xd755c
	str r0, [r1, #20]	@ 000d755c 4861
.org 0xd755e
	strh r3, [r1, #32]	@ 000d755e 0b84
.org 0xd7560
	adds r2, r1, #0	@ 000d7560 0a1c
.org 0xd7562
	adds r2, #34	@ 000d7562 2232
.org 0xd7564
	strb r3, [r2, #0]	@ 000d7564 1370
.org 0xd7566
	strb r4, [r1, #16]	@ 000d7566 0c74
.org 0xd7568
	strb r5, [r1, #17]	@ 000d7568 4d74
.org 0xd756a
	mov r0, sl	@ 000d756a 5046
.org 0xd756c
	str r0, [r1, #40]	@ 000d756c 8862
.org 0xd756e
	mov r0, r9	@ 000d756e 4846
.org 0xd7570
	str r0, [r1, #116]	@ 000d7570 4867
.org 0xd7572
	ldr r0, [r6, #0]	@ 000d7572 3068
.org 0xd7574
	str r0, [r1, #84]	@ 000d7574 4865
.org 0xd7576
	ldr r0, [r6, #4]	@ 000d7576 7068
.org 0xd7578
	str r0, [r1, #88]	@ 000d7578 8865
.org 0xd757a
	adds r0, r1, #0	@ 000d757a 081c
.org 0xd757c
	adds r0, #120	@ 000d757c 7830
.org 0xd757e
	strb r4, [r0, #0]	@ 000d757e 0470
.org 0xd7580
	adds r0, #1	@ 000d7580 0130
.org 0xd7582
	strb r4, [r0, #0]	@ 000d7582 0470
.org 0xd7584
	mov r0, r8	@ 000d7584 4046
.org 0xd7586
	strb r0, [r2, #0]	@ 000d7586 1070
.org 0xd7588
	adds r5, #1	@ 000d7588 0135
.org 0xd758a
	cmp r5, r7	@ 000d758a bd42
.org 0xd758c
	blt.n 0xd753c	@ 000d758c d6db
.org 0xd758e
	add sp, #4	@ 000d758e 01b0
.org 0xd7590
	pop {r3, r4, r5}	@ 000d7590 38bc
.org 0xd7592
	mov r8, r3	@ 000d7592 9846
.org 0xd7594
	mov r9, r4	@ 000d7594 a146
.org 0xd7596
	mov sl, r5	@ 000d7596 aa46
.org 0xd7598
	pop {r4, r5, r6, r7}	@ 000d7598 f0bc
.org 0xd759a
	pop {r0}	@ 000d759a 01bc
.org 0xd759c
	bx r0	@ 000d759c 0047

@ FUN_080de53c  entry 0x080de53c  size 108
.thumb
.org 0xde53c
FUN_080de53c:
	push {r4, lr}	@ 000de53c 10b5
.org 0xde53e
	adds r4, r0, #0	@ 000de53e 041c
.org 0xde540
	bl 0x1cff0	@ 000de540 3ef756fd
.org 0xde544
	ldrb r0, [r4, #18]	@ 000de544 a07c
.org 0xde546
	subs r1, r0, #1	@ 000de546 411e
.org 0xde548
	movs r2, #0	@ 000de548 0022
.org 0xde54a
	strb r1, [r4, #18]	@ 000de54a a174
.org 0xde54c
	lsls r0, r1, #24	@ 000de54c 0806
.org 0xde54e
	cmp r0, #0	@ 000de54e 0028
.org 0xde550
	bne.n 0xde578	@ 000de550 12d1
.org 0xde552
	ldrb r1, [r4, #10]	@ 000de552 a17a
.org 0xde554
	movs r0, #254	@ 000de554 fe20
.org 0xde556
	ands r0, r1	@ 000de556 0840
.org 0xde558
	movs r1, #253	@ 000de558 fd21
.org 0xde55a
	ands r0, r1	@ 000de55a 0840
.org 0xde55c
	strb r0, [r4, #10]	@ 000de55c a072
.org 0xde55e
	ldr r1, [pc, #20]	@ 000de55e 0549
.org 0xde560
	ldrb r0, [r4, #9]	@ 000de560 607a
.org 0xde562
	lsls r0, r0, #2	@ 000de562 8000
.org 0xde564
	adds r0, r0, r1	@ 000de564 4018
.org 0xde566
	movs r1, #3	@ 000de566 0321
.org 0xde568
	str r1, [r4, #12]	@ 000de568 e160
.org 0xde56a
	ldr r0, [r0, #0]	@ 000de56a 0068
.org 0xde56c
	ldr r0, [r0, #12]	@ 000de56c c068
.org 0xde56e
	str r0, [r4, #20]	@ 000de56e 6061
.org 0xde570
	b.n 0xde5a8	@ 000de570 1ae0
.org 0xde572
	.byte 0x00	@ 000de572 data
.org 0xde573
	.byte 0x00	@ 000de573 data
.org 0xde574
	.byte 0x64,0x6f,0x86,0x08	@ 000de574 data
.org 0xde578
	lsls r0, r1, #24	@ 000de578 0806
.org 0xde57a
	lsrs r0, r0, #24	@ 000de57a 000e
.org 0xde57c
	cmp r0, #11	@ 000de57c 0b28
.org 0xde57e
	bhi.n 0xde590	@ 000de57e 07d8
.org 0xde580
	movs r0, #3	@ 000de580 0320
.org 0xde582
	ands r1, r0	@ 000de582 0140
.org 0xde584
	cmp r1, #0	@ 000de584 0029
.org 0xde586
	bne.n 0xde5a0	@ 000de586 0bd1
.org 0xde588
	ldrb r0, [r4, #10]	@ 000de588 a07a
.org 0xde58a
	movs r1, #1	@ 000de58a 0121
.org 0xde58c
	orrs r0, r1	@ 000de58c 0843
.org 0xde58e
	b.n 0xde5a6	@ 000de58e 0ae0
.org 0xde590
	movs r0, #1	@ 000de590 0120
.org 0xde592
	ands r1, r0	@ 000de592 0140
.org 0xde594
	cmp r1, #0	@ 000de594 0029
.org 0xde596
	bne.n 0xde5a0	@ 000de596 03d1
.org 0xde598
	ldrb r0, [r4, #10]	@ 000de598 a07a
.org 0xde59a
	movs r1, #1	@ 000de59a 0121
.org 0xde59c
	orrs r0, r1	@ 000de59c 0843
.org 0xde59e
	b.n 0xde5a6	@ 000de59e 02e0
.org 0xde5a0
	ldrb r1, [r4, #10]	@ 000de5a0 a17a
.org 0xde5a2
	movs r0, #254	@ 000de5a2 fe20
.org 0xde5a4
	ands r0, r1	@ 000de5a4 0840
.org 0xde5a6
	strb r0, [r4, #10]	@ 000de5a6 a072

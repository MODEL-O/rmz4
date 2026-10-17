@ FUN_08003518  entry 0x08003518  size 224
.thumb
.org 0x3518
FUN_08003518:
	push {r4, r5, r6, r7, lr}	@ 00003518 f0b5
.org 0x351a
	adds r2, r0, #0	@ 0000351a 021c
.org 0x351c
	ldrb r0, [r2, #6]	@ 0000351c 9079
.org 0x351e
	subs r0, #1	@ 0000351e 0138
.org 0x3520
	strb r0, [r2, #6]	@ 00003520 9071
.org 0x3522
	lsls r0, r0, #24	@ 00003522 0006
.org 0x3524
	asrs r3, r0, #24	@ 00003524 0316
.org 0x3526
	cmp r3, #0	@ 00003526 002b
.org 0x3528
	bne.n 0x35ba	@ 00003528 47d1
.org 0x352a
	ldrb r5, [r2, #5]	@ 0000352a 5579
.org 0x352c
	adds r0, r5, #1	@ 0000352c 681c
.org 0x352e
	strb r0, [r2, #5]	@ 0000352e 5071
.org 0x3530
	ldrb r0, [r2, #4]	@ 00003530 1079
.org 0x3532
	ldr r7, [r2, #0]	@ 00003532 1768
.org 0x3534
	lsls r0, r0, #2	@ 00003534 8000
.org 0x3536
	adds r6, r0, r7	@ 00003536 c619
.org 0x3538
	movs r0, #5	@ 00003538 0520
.org 0x353a
	ldrsb r0, [r2, r0]	@ 0000353a 1056
.org 0x353c
	ldr r1, [r6, #0]	@ 0000353c 3168
.org 0x353e
	lsls r0, r0, #1	@ 0000353e 4000
.org 0x3540
	adds r4, r0, r1	@ 00003540 4418
.org 0x3542
	movs r1, #1	@ 00003542 0121
.org 0x3544
	ldrsb r1, [r4, r1]	@ 00003544 6156
.org 0x3546
	movs r0, #1	@ 00003546 0120
.org 0x3548
	negs r0, r0	@ 00003548 4042
.org 0x354a
	mov ip, r0	@ 0000354a 8446
.org 0x354c
	cmp r1, ip	@ 0000354c 6145
.org 0x354e
	bne.n 0x355a	@ 0000354e 04d1
.org 0x3550
	strb r5, [r2, #5]	@ 00003550 5571
.org 0x3552
	movs r0, #1	@ 00003552 0120
.org 0x3554
	strb r0, [r2, #6]	@ 00003554 9071
.org 0x3556
	movs r0, #3	@ 00003556 0320
.org 0x3558
	b.n 0x35f0	@ 00003558 4ae0
.org 0x355a
	movs r0, #2	@ 0000355a 0220
.org 0x355c
	negs r0, r0	@ 0000355c 4042
.org 0x355e
	cmp r1, r0	@ 0000355e 8142
.org 0x3560
	bne.n 0x3568	@ 00003560 02d1
.org 0x3562
	ldrb r0, [r4, #0]	@ 00003562 2078
.org 0x3564
	strb r0, [r2, #5]	@ 00003564 5071
.org 0x3566
	strb r3, [r2, #7]	@ 00003566 d371
.org 0x3568
	movs r0, #5	@ 00003568 0520
.org 0x356a
	ldrsb r0, [r2, r0]	@ 0000356a 1056
.org 0x356c
	ldr r1, [r6, #0]	@ 0000356c 3168
.org 0x356e
	lsls r0, r0, #1	@ 0000356e 4000
.org 0x3570
	adds r0, r0, r1	@ 00003570 4018
.org 0x3572
	ldrb r3, [r0, #1]	@ 00003572 4378
.org 0x3574
	strb r3, [r2, #6]	@ 00003574 9371
.org 0x3576
	ldrb r0, [r2, #5]	@ 00003576 5079
.org 0x3578
	adds r0, #1	@ 00003578 0130
.org 0x357a
	strb r0, [r2, #5]	@ 0000357a 5071
.org 0x357c
	ldrb r0, [r2, #4]	@ 0000357c 1079
.org 0x357e
	lsls r0, r0, #2	@ 0000357e 8000
.org 0x3580
	adds r0, r0, r7	@ 00003580 c019
.org 0x3582
	movs r1, #5	@ 00003582 0521
.org 0x3584
	ldrsb r1, [r2, r1]	@ 00003584 5156
.org 0x3586
	ldr r0, [r0, #0]	@ 00003586 0068
.org 0x3588
	lsls r1, r1, #1	@ 00003588 4900
.org 0x358a
	adds r1, r1, r0	@ 0000358a 0918
.org 0x358c
	ldrb r1, [r1, #1]	@ 0000358c 4978
.org 0x358e
	lsls r1, r1, #24	@ 0000358e 0906
.org 0x3590
	asrs r1, r1, #24	@ 00003590 0916
.org 0x3592
	cmp r1, #0	@ 00003592 0029
.org 0x3594
	bge.n 0x35b2	@ 00003594 0dda
.org 0x3596
	lsls r0, r3, #24	@ 00003596 1806
.org 0x3598
	asrs r0, r0, #24	@ 00003598 0016
.org 0x359a
	cmp r0, #2	@ 0000359a 0228
.org 0x359c
	beq.n 0x35b0	@ 0000359c 08d0
.org 0x359e
	cmp r0, #1	@ 0000359e 0128
.org 0x35a0
	bne.n 0x35ae	@ 000035a0 05d1
.org 0x35a2
	cmp r1, ip	@ 000035a2 6145
.org 0x35a4
	bne.n 0x35aa	@ 000035a4 01d1
.org 0x35a6
	movs r0, #3	@ 000035a6 0320
.org 0x35a8
	b.n 0x35b0	@ 000035a8 02e0
.org 0x35aa
	movs r0, #4	@ 000035aa 0420
.org 0x35ac
	b.n 0x35b0	@ 000035ac 00e0
.org 0x35ae
	movs r0, #1	@ 000035ae 0120
.org 0x35b0
	strb r0, [r2, #7]	@ 000035b0 d071
.org 0x35b2
	ldrb r0, [r2, #5]	@ 000035b2 5079
.org 0x35b4
	subs r0, #1	@ 000035b4 0138
.org 0x35b6
	strb r0, [r2, #5]	@ 000035b6 5071
.org 0x35b8
	b.n 0x35f2	@ 000035b8 1be0
.org 0x35ba
	ldrb r0, [r2, #7]	@ 000035ba d079
.org 0x35bc
	cmp r0, #0	@ 000035bc 0028
.org 0x35be
	beq.n 0x35f2	@ 000035be 18d0
.org 0x35c0
	cmp r3, #2	@ 000035c0 022b
.org 0x35c2
	bne.n 0x35c8	@ 000035c2 01d1
.org 0x35c4
	strb r3, [r2, #7]	@ 000035c4 d371
.org 0x35c6
	b.n 0x35f2	@ 000035c6 14e0
.org 0x35c8
	cmp r3, #1	@ 000035c8 012b
.org 0x35ca
	bne.n 0x35f2	@ 000035ca 12d1
.org 0x35cc
	ldrb r1, [r2, #4]	@ 000035cc 1179
.org 0x35ce
	ldr r0, [r2, #0]	@ 000035ce 1068
.org 0x35d0
	lsls r1, r1, #2	@ 000035d0 8900
.org 0x35d2
	adds r1, r1, r0	@ 000035d2 0918
.org 0x35d4
	movs r0, #5	@ 000035d4 0520
.org 0x35d6
	ldrsb r0, [r2, r0]	@ 000035d6 1056
.org 0x35d8
	ldr r1, [r1, #0]	@ 000035d8 0968
.org 0x35da
	lsls r0, r0, #1	@ 000035da 4000
.org 0x35dc
	adds r0, r0, r1	@ 000035dc 4018
.org 0x35de
	movs r1, #3	@ 000035de 0321
.org 0x35e0
	ldrsb r1, [r0, r1]	@ 000035e0 4156
.org 0x35e2
	movs r0, #1	@ 000035e2 0120
.org 0x35e4
	negs r0, r0	@ 000035e4 4042
.org 0x35e6
	cmp r1, r0	@ 000035e6 8142
.org 0x35e8
	bne.n 0x35ee	@ 000035e8 01d1
.org 0x35ea
	movs r0, #3	@ 000035ea 0320
.org 0x35ec
	b.n 0x35f0	@ 000035ec 00e0
.org 0x35ee
	movs r0, #4	@ 000035ee 0420
.org 0x35f0
	strb r0, [r2, #7]	@ 000035f0 d071
.org 0x35f2
	pop {r4, r5, r6, r7}	@ 000035f2 f0bc
.org 0x35f4
	pop {r0}	@ 000035f4 01bc
.org 0x35f6
	bx r0	@ 000035f6 0047

@ FUN_080ed54c  entry 0x080ed54c  size 144
.thumb
.org 0xed54c
FUN_080ed54c:
	push {r4, r5, lr}	@ 000ed54c 30b5
.org 0xed54e
	adds r4, r0, #0	@ 000ed54e 041c
.org 0xed550
	ldr r2, [pc, #136]	@ 000ed550 224a
.org 0xed552
	ldr r1, [r2, #0]	@ 000ed552 1168
.org 0xed554
	ldr r0, [pc, #136]	@ 000ed554 2248
.org 0xed556
	muls r0, r1	@ 000ed556 4843
.org 0xed558
	ldr r1, [pc, #136]	@ 000ed558 2249
.org 0xed55a
	adds r0, r0, r1	@ 000ed55a 4018
.org 0xed55c
	lsls r0, r0, #1	@ 000ed55c 4000
.org 0xed55e
	lsrs r1, r0, #1	@ 000ed55e 4108
.org 0xed560
	str r1, [r2, #0]	@ 000ed560 1160
.org 0xed562
	lsrs r5, r0, #17	@ 000ed562 450c
.org 0xed564
	adds r0, r4, #0	@ 000ed564 201c
.org 0xed566
	bl 0x1cc9c	@ 000ed566 2ff799fb
.org 0xed56a
	ldrb r1, [r4, #10]	@ 000ed56a a17a
.org 0xed56c
	movs r0, #1	@ 000ed56c 0120
.org 0xed56e
	orrs r0, r1	@ 000ed56e 0843
.org 0xed570
	movs r1, #2	@ 000ed570 0221
.org 0xed572
	orrs r0, r1	@ 000ed572 0843
.org 0xed574
	strb r0, [r4, #10]	@ 000ed574 a072
.org 0xed576
	adds r0, r4, #0	@ 000ed576 201c
.org 0xed578
	movs r1, #13	@ 000ed578 0d21
.org 0xed57a
	bl 0x1cf00	@ 000ed57a 2ff7c1fc
.org 0xed57e
	movs r0, #7	@ 000ed57e 0720
.org 0xed580
	ands r0, r5	@ 000ed580 2840
.org 0xed582
	cmp r0, #0	@ 000ed582 0028
.org 0xed584
	bne.n 0xed58e	@ 000ed584 03d1
.org 0xed586
	adds r0, r4, #0	@ 000ed586 201c
.org 0xed588
	movs r1, #12	@ 000ed588 0c21
.org 0xed58a
	bl 0x1cf00	@ 000ed58a 2ff7b9fc
.org 0xed58e
	movs r1, #7	@ 000ed58e 0721
.org 0xed590
	adds r0, r5, #0	@ 000ed590 281c
.org 0xed592
	ands r0, r1	@ 000ed592 0840
.org 0xed594
	adds r0, #24	@ 000ed594 1830
.org 0xed596
	strb r0, [r4, #18]	@ 000ed596 a074
.org 0xed598
	movs r1, #15	@ 000ed598 0f21
.org 0xed59a
	ands r1, r5	@ 000ed59a 2940
.org 0xed59c
	ldr r2, [pc, #72]	@ 000ed59c 124a
.org 0xed59e
	ldrb r0, [r4, #16]	@ 000ed59e 207c
.org 0xed5a0
	adds r0, r0, r2	@ 000ed5a0 8018
.org 0xed5a2
	ldrb r0, [r0, #0]	@ 000ed5a2 0078
.org 0xed5a4
	lsls r0, r0, #24	@ 000ed5a4 0006
.org 0xed5a6
	asrs r0, r0, #24	@ 000ed5a6 0016
.org 0xed5a8
	adds r1, r1, r0	@ 000ed5a8 0918
.org 0xed5aa
	subs r1, #8	@ 000ed5aa 0839
.org 0xed5ac
	lsls r1, r1, #8	@ 000ed5ac 0902
.org 0xed5ae
	ldr r0, [r4, #84]	@ 000ed5ae 606d
.org 0xed5b0
	adds r0, r0, r1	@ 000ed5b0 4018
.org 0xed5b2
	str r0, [r4, #84]	@ 000ed5b2 6065
.org 0xed5b4
	movs r0, #3	@ 000ed5b4 0320
.org 0xed5b6
	ands r5, r0	@ 000ed5b6 0540
.org 0xed5b8
	adds r0, r5, #6	@ 000ed5b8 a81d
.org 0xed5ba
	lsls r0, r0, #6	@ 000ed5ba 8001
.org 0xed5bc
	str r0, [r4, #96]	@ 000ed5bc 2066
.org 0xed5be
	ldr r1, [pc, #44]	@ 000ed5be 0b49
.org 0xed5c0
	ldrb r0, [r4, #9]	@ 000ed5c0 607a
.org 0xed5c2
	lsls r0, r0, #2	@ 000ed5c2 8000
.org 0xed5c4
	adds r0, r0, r1	@ 000ed5c4 4018
.org 0xed5c6
	movs r1, #1	@ 000ed5c6 0121
.org 0xed5c8
	str r1, [r4, #12]	@ 000ed5c8 e160
.org 0xed5ca
	ldr r0, [r0, #0]	@ 000ed5ca 0068
.org 0xed5cc
	ldr r0, [r0, #4]	@ 000ed5cc 4068
.org 0xed5ce
	str r0, [r4, #20]	@ 000ed5ce 6061
.org 0xed5d0
	adds r0, r4, #0	@ 000ed5d0 201c
.org 0xed5d2
	bl 0xed5f0	@ 000ed5d2 00f00df8
.org 0xed5d6
	pop {r4, r5}	@ 000ed5d6 30bc
.org 0xed5d8
	pop {r0}	@ 000ed5d8 01bc
.org 0xed5da
	bx r0	@ 000ed5da 0047

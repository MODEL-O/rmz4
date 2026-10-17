@ FUN_0804951c  entry 0x0804951c  size 196
.thumb
.org 0x4951c
FUN_0804951c:
	push {r4, r5, lr}	@ 0004951c 30b5
.org 0x4951e
	adds r4, r0, #0	@ 0004951e 041c
.org 0x49520
	ldr r5, [r4, #44]	@ 00049520 e56a
.org 0x49522
	bl 0x1cff0	@ 00049522 d3f765fd
.org 0x49526
	ldr r0, [r4, #84]	@ 00049526 606d
.org 0x49528
	ldr r1, [r4, #92]	@ 00049528 e16d
.org 0x4952a
	adds r0, r0, r1	@ 0004952a 4018
.org 0x4952c
	str r0, [r4, #84]	@ 0004952c 6065
.org 0x4952e
	ldr r0, [r4, #88]	@ 0004952e a06d
.org 0x49530
	ldr r1, [r4, #96]	@ 00049530 216e
.org 0x49532
	adds r0, r0, r1	@ 00049532 4018
.org 0x49534
	str r0, [r4, #88]	@ 00049534 a065
.org 0x49536
	ldr r0, [r4, #104]	@ 00049536 a06e
.org 0x49538
	adds r1, r1, r0	@ 00049538 0918
.org 0x4953a
	str r1, [r4, #96]	@ 0004953a 2166
.org 0x4953c
	adds r0, r5, #0	@ 0004953c 281c
.org 0x4953e
	adds r0, #180	@ 0004953e b430
.org 0x49540
	ldrb r0, [r0, #19]	@ 00049540 c07c
.org 0x49542
	cmp r0, #3	@ 00049542 0328
.org 0x49544
	bhi.n 0x4956a	@ 00049544 11d8
.org 0x49546
	adds r0, r4, #0	@ 00049546 201c
.org 0x49548
	movs r1, #1	@ 00049548 0121
.org 0x4954a
	bl 0x3a99c	@ 0004954a f1f727fa
.org 0x4954e
	lsls r0, r0, #24	@ 0004954e 0006
.org 0x49550
	lsrs r3, r0, #24	@ 00049550 030e
.org 0x49552
	ldrb r2, [r4, #16]	@ 00049552 227c
.org 0x49554
	cmp r2, #0	@ 00049554 002a
.org 0x49556
	bne.n 0x4957c	@ 00049556 11d1
.org 0x49558
	adds r0, r5, #0	@ 00049558 281c
.org 0x4955a
	adds r0, #250	@ 0004955a fa30
.org 0x4955c
	ldrb r0, [r0, #0]	@ 0004955c 0078
.org 0x4955e
	cmp r0, #2	@ 0004955e 0228
.org 0x49560
	bne.n 0x4957c	@ 00049560 0cd1
.org 0x49562
	ldrb r1, [r4, #10]	@ 00049562 a17a
.org 0x49564
	movs r0, #254	@ 00049564 fe20
.org 0x49566
	ands r0, r1	@ 00049566 0840
.org 0x49568
	b.n 0x495b0	@ 00049568 22e0
.org 0x4956a
	ldrb r0, [r4, #18]	@ 0004956a a07c
.org 0x4956c
	subs r0, #1	@ 0004956c 0138
.org 0x4956e
	strb r0, [r4, #18]	@ 0004956e a074
.org 0x49570
	lsls r0, r0, #24	@ 00049570 0006
.org 0x49572
	lsrs r0, r0, #24	@ 00049572 000e
.org 0x49574
	movs r3, #0	@ 00049574 0023
.org 0x49576
	cmp r0, #255	@ 00049576 ff28
.org 0x49578
	bne.n 0x4957c	@ 00049578 00d1
.org 0x4957a
	movs r3, #255	@ 0004957a ff23
.org 0x4957c
	cmp r3, #0	@ 0004957c 002b
.org 0x4957e
	bne.n 0x4958e	@ 0004957e 06d1
.org 0x49580
	adds r0, r4, #0	@ 00049580 201c
.org 0x49582
	adds r0, #140	@ 00049582 8c30
.org 0x49584
	ldr r0, [r0, #0]	@ 00049584 0068
.org 0x49586
	movs r1, #4	@ 00049586 0421
.org 0x49588
	ands r0, r1	@ 00049588 0840
.org 0x4958a
	cmp r0, #0	@ 0004958a 0028
.org 0x4958c
	beq.n 0x495de	@ 0004958c 27d0
.org 0x4958e
	cmp r3, #255	@ 0004958e ff2b
.org 0x49590
	beq.n 0x495a8	@ 00049590 0ad0
.org 0x49592
	ldr r1, [pc, #16]	@ 00049592 0449
.org 0x49594
	ldrb r0, [r4, #9]	@ 00049594 607a
.org 0x49596
	lsls r0, r0, #2	@ 00049596 8000
.org 0x49598
	adds r0, r0, r1	@ 00049598 4018
.org 0x4959a
	movs r1, #2	@ 0004959a 0221
.org 0x4959c
	str r1, [r4, #12]	@ 0004959c e160
.org 0x4959e
	ldr r0, [r0, #0]	@ 0004959e 0068
.org 0x495a0
	ldr r0, [r0, #8]	@ 000495a0 8068
.org 0x495a2
	b.n 0x495dc	@ 000495a2 1be0
.org 0x495a4
	.byte 0xf8,0x39,0x85,0x08	@ 000495a4 data
.org 0x495a8
	ldrb r1, [r4, #10]	@ 000495a8 a17a
.org 0x495aa
	movs r0, #254	@ 000495aa fe20
.org 0x495ac
	ands r0, r1	@ 000495ac 0840
.org 0x495ae
	movs r2, #0	@ 000495ae 0022
.org 0x495b0
	movs r1, #253	@ 000495b0 fd21
.org 0x495b2
	ands r0, r1	@ 000495b2 0840
.org 0x495b4
	strb r0, [r4, #10]	@ 000495b4 a072
.org 0x495b6
	adds r0, r4, #0	@ 000495b6 201c
.org 0x495b8
	adds r0, #140	@ 000495b8 8c30
.org 0x495ba
	str r2, [r0, #0]	@ 000495ba 0260
.org 0x495bc
	adds r0, #4	@ 000495bc 0430
.org 0x495be
	str r2, [r0, #0]	@ 000495be 0260
.org 0x495c0
	adds r0, #4	@ 000495c0 0430
.org 0x495c2
	strb r2, [r0, #0]	@ 000495c2 0270
.org 0x495c4
	ldrb r1, [r4, #10]	@ 000495c4 a17a
.org 0x495c6
	movs r0, #251	@ 000495c6 fb20
.org 0x495c8
	ands r0, r1	@ 000495c8 0840
.org 0x495ca
	strb r0, [r4, #10]	@ 000495ca a072
.org 0x495cc
	ldr r1, [pc, #20]	@ 000495cc 0549
.org 0x495ce
	ldrb r0, [r4, #9]	@ 000495ce 607a
.org 0x495d0
	lsls r0, r0, #2	@ 000495d0 8000
.org 0x495d2
	adds r0, r0, r1	@ 000495d2 4018
.org 0x495d4
	movs r1, #3	@ 000495d4 0321
.org 0x495d6
	str r1, [r4, #12]	@ 000495d6 e160
.org 0x495d8
	ldr r0, [r0, #0]	@ 000495d8 0068
.org 0x495da
	ldr r0, [r0, #12]	@ 000495da c068
.org 0x495dc
	str r0, [r4, #20]	@ 000495dc 6061
.org 0x495de
	pop {r4, r5}	@ 000495de 30bc

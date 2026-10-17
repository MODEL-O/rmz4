@ FUN_08075538  entry 0x08075538  size 216
.thumb
.org 0x75538
FUN_08075538:
	push {r4, r5, lr}	@ 00075538 30b5
.org 0x7553a
	adds r4, r0, #0	@ 0007553a 041c
.org 0x7553c
	ldrb r5, [r4, #14]	@ 0007553c a57b
.org 0x7553e
	cmp r5, #0	@ 0007553e 002d
.org 0x75540
	bne.n 0x7561c	@ 00075540 6cd1
.org 0x75542
	ldr r1, [pc, #60]	@ 00075542 0f49
.org 0x75544
	bl 0x1cf00	@ 00075544 a7f7dcfc
.org 0x75548
	adds r1, r4, #0	@ 00075548 211c
.org 0x7554a
	adds r1, #222	@ 0007554a de31
.org 0x7554c
	strb r5, [r1, #0]	@ 0007554c 0d70
.org 0x7554e
	adds r0, r4, #0	@ 0007554e 201c
.org 0x75550
	adds r0, #164	@ 00075550 a430
.org 0x75552
	movs r2, #0	@ 00075552 0022
.org 0x75554
	ldrsh r0, [r0, r2]	@ 00075554 805e
.org 0x75556
	adds r3, r1, #0	@ 00075556 0b1c
.org 0x75558
	cmp r0, #15	@ 00075558 0f28
.org 0x7555a
	bgt.n 0x75590	@ 0007555a 19dc
.org 0x7555c
	ldr r2, [pc, #36]	@ 0007555c 094a
.org 0x7555e
	ldr r1, [r2, #0]	@ 0007555e 1168
.org 0x75560
	ldr r0, [pc, #36]	@ 00075560 0948
.org 0x75562
	muls r0, r1	@ 00075562 4843
.org 0x75564
	ldr r1, [pc, #36]	@ 00075564 0949
.org 0x75566
	adds r0, r0, r1	@ 00075566 4018
.org 0x75568
	lsls r0, r0, #1	@ 00075568 4000
.org 0x7556a
	lsrs r1, r0, #1	@ 0007556a 4108
.org 0x7556c
	str r1, [r2, #0]	@ 0007556c 1160
.org 0x7556e
	lsrs r0, r0, #17	@ 0007556e 400c
.org 0x75570
	movs r1, #31	@ 00075570 1f21
.org 0x75572
	ands r0, r1	@ 00075572 0840
.org 0x75574
	cmp r0, #9	@ 00075574 0928
.org 0x75576
	bhi.n 0x7557c	@ 00075576 01d8
.org 0x75578
	movs r0, #1	@ 00075578 0120
.org 0x7557a
	strb r0, [r3, #0]	@ 0007557a 1870
.org 0x7557c
	movs r0, #32	@ 0007557c 2020
.org 0x7557e
	b.n 0x755e6	@ 0007557e 32e0
.org 0x75580
	.byte 0x01,0xaf,0x00,0x00	@ 00075580 data
.org 0x75584
	.byte 0x38,0xdc,0x02,0x02	@ 00075584 data
.org 0x75588
	.byte 0xfd,0x43,0x03,0x00	@ 00075588 data
.org 0x7558c
	.byte 0xc3,0x9e,0x26,0x00	@ 0007558c data
.org 0x75590
	cmp r0, #31	@ 00075590 1f28
.org 0x75592
	bgt.n 0x755c4	@ 00075592 17dc
.org 0x75594
	ldr r2, [pc, #32]	@ 00075594 084a
.org 0x75596
	ldr r1, [r2, #0]	@ 00075596 1168
.org 0x75598
	ldr r0, [pc, #32]	@ 00075598 0848
.org 0x7559a
	muls r0, r1	@ 0007559a 4843
.org 0x7559c
	ldr r1, [pc, #32]	@ 0007559c 0849
.org 0x7559e
	adds r0, r0, r1	@ 0007559e 4018
.org 0x755a0
	lsls r0, r0, #1	@ 000755a0 4000
.org 0x755a2
	lsrs r1, r0, #1	@ 000755a2 4108
.org 0x755a4
	str r1, [r2, #0]	@ 000755a4 1160
.org 0x755a6
	lsrs r0, r0, #17	@ 000755a6 400c
.org 0x755a8
	movs r1, #31	@ 000755a8 1f21
.org 0x755aa
	ands r0, r1	@ 000755aa 0840
.org 0x755ac
	cmp r0, #11	@ 000755ac 0b28
.org 0x755ae
	bhi.n 0x755b4	@ 000755ae 01d8
.org 0x755b0
	movs r0, #1	@ 000755b0 0120
.org 0x755b2
	strb r0, [r3, #0]	@ 000755b2 1870
.org 0x755b4
	movs r0, #28	@ 000755b4 1c20
.org 0x755b6
	b.n 0x755e6	@ 000755b6 16e0
.org 0x755b8
	.byte 0x38,0xdc,0x02,0x02	@ 000755b8 data
.org 0x755bc
	.byte 0xfd,0x43,0x03,0x00	@ 000755bc data
.org 0x755c0
	.byte 0xc3,0x9e,0x26,0x00	@ 000755c0 data
.org 0x755c4
	ldr r2, [pc, #52]	@ 000755c4 0d4a
.org 0x755c6
	ldr r1, [r2, #0]	@ 000755c6 1168
.org 0x755c8
	ldr r0, [pc, #52]	@ 000755c8 0d48
.org 0x755ca
	muls r0, r1	@ 000755ca 4843
.org 0x755cc
	ldr r1, [pc, #52]	@ 000755cc 0d49
.org 0x755ce
	adds r0, r0, r1	@ 000755ce 4018
.org 0x755d0
	lsls r0, r0, #1	@ 000755d0 4000
.org 0x755d2
	lsrs r1, r0, #1	@ 000755d2 4108
.org 0x755d4
	str r1, [r2, #0]	@ 000755d4 1160
.org 0x755d6
	lsrs r0, r0, #17	@ 000755d6 400c
.org 0x755d8
	movs r1, #31	@ 000755d8 1f21
.org 0x755da
	ands r0, r1	@ 000755da 0840
.org 0x755dc
	cmp r0, #13	@ 000755dc 0d28
.org 0x755de
	bhi.n 0x755e4	@ 000755de 01d8
.org 0x755e0
	movs r0, #1	@ 000755e0 0120
.org 0x755e2
	strb r0, [r3, #0]	@ 000755e2 1870
.org 0x755e4
	movs r0, #24	@ 000755e4 1820
.org 0x755e6
	strb r0, [r4, #18]	@ 000755e6 a074
.org 0x755e8
	ldrb r0, [r3, #0]	@ 000755e8 1878
.org 0x755ea
	cmp r0, #0	@ 000755ea 0028
.org 0x755ec
	beq.n 0x7560c	@ 000755ec 0ed0
.org 0x755ee
	adds r0, r4, #0	@ 000755ee 201c
.org 0x755f0
	adds r0, #116	@ 000755f0 7430
.org 0x755f2
	ldr r1, [pc, #20]	@ 000755f2 0549
.org 0x755f4
	bl 0x5784	@ 000755f4 90f7c6f8
.org 0x755f8
	b.n 0x75616	@ 000755f8 0de0
.org 0x755fa
	.byte 0x00	@ 000755fa data
.org 0x755fb
	.byte 0x00	@ 000755fb data
.org 0x755fc
	.byte 0x38,0xdc,0x02,0x02	@ 000755fc data
.org 0x75600
	.byte 0xfd,0x43,0x03,0x00	@ 00075600 data
.org 0x75604
	.byte 0xc3,0x9e,0x26,0x00	@ 00075604 data
.org 0x75608
	.byte 0x1c,0xce,0x85,0x08	@ 00075608 data
.org 0x7560c
	adds r0, r4, #0	@ 0007560c 201c
.org 0x7560e
	adds r0, #116	@ 0007560e 7430

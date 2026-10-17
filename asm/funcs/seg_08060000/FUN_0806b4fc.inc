@ FUN_0806b4fc  entry 0x0806b4fc  size 204
.thumb
.org 0x6b4fc
FUN_0806b4fc:
	push {r4, lr}	@ 0006b4fc 10b5
.org 0x6b4fe
	adds r4, r0, #0	@ 0006b4fe 041c
.org 0x6b500
	ldrb r0, [r4, #14]	@ 0006b500 a07b
.org 0x6b502
	cmp r0, #0	@ 0006b502 0028
.org 0x6b504
	bne.n 0x6b5d0	@ 0006b504 64d1
.org 0x6b506
	ldrb r0, [r4, #30]	@ 0006b506 a07f
.org 0x6b508
	lsls r0, r0, #8	@ 0006b508 0002
.org 0x6b50a
	adds r1, r4, #0	@ 0006b50a 211c
.org 0x6b50c
	adds r1, #112	@ 0006b50c 7031
.org 0x6b50e
	ldrb r1, [r1, #0]	@ 0006b50e 0978
.org 0x6b510
	orrs r0, r1	@ 0006b510 0843
.org 0x6b512
	ldr r1, [pc, #56]	@ 0006b512 0e49
.org 0x6b514
	cmp r0, r1	@ 0006b514 8842
.org 0x6b516
	beq.n 0x6b51e	@ 0006b516 02d0
.org 0x6b518
	adds r0, r4, #0	@ 0006b518 201c
.org 0x6b51a
	bl 0x1cf00	@ 0006b51a b1f7f1fc
.org 0x6b51e
	adds r0, r4, #0	@ 0006b51e 201c
.org 0x6b520
	adds r0, #164	@ 0006b520 a430
.org 0x6b522
	movs r1, #0	@ 0006b522 0021
.org 0x6b524
	ldrsh r0, [r0, r1]	@ 0006b524 405e
.org 0x6b526
	cmp r0, #15	@ 0006b526 0f28
.org 0x6b528
	bgt.n 0x6b560	@ 0006b528 1adc
.org 0x6b52a
	ldr r2, [pc, #36]	@ 0006b52a 094a
.org 0x6b52c
	ldr r1, [r2, #0]	@ 0006b52c 1168
.org 0x6b52e
	ldr r0, [pc, #36]	@ 0006b52e 0948
.org 0x6b530
	muls r0, r1	@ 0006b530 4843
.org 0x6b532
	ldr r1, [pc, #36]	@ 0006b532 0949
.org 0x6b534
	adds r0, r0, r1	@ 0006b534 4018
.org 0x6b536
	lsls r0, r0, #1	@ 0006b536 4000
.org 0x6b538
	lsrs r1, r0, #1	@ 0006b538 4108
.org 0x6b53a
	str r1, [r2, #0]	@ 0006b53a 1160
.org 0x6b53c
	lsrs r0, r0, #17	@ 0006b53c 400c
.org 0x6b53e
	movs r1, #31	@ 0006b53e 1f21
.org 0x6b540
	ands r0, r1	@ 0006b540 0840
.org 0x6b542
	cmp r0, #19	@ 0006b542 1328
.org 0x6b544
	bhi.n 0x6b55c	@ 0006b544 0ad8
.org 0x6b546
	movs r0, #24	@ 0006b546 1820
.org 0x6b548
	b.n 0x6b5be	@ 0006b548 39e0
.org 0x6b54a
	.byte 0x00	@ 0006b54a data
.org 0x6b54b
	.byte 0x00	@ 0006b54b data
.org 0x6b54c
	.byte 0x01,0xaa,0x00,0x00	@ 0006b54c data
.org 0x6b550
	.byte 0x38,0xdc,0x02,0x02	@ 0006b550 data
.org 0x6b554
	.byte 0xfd,0x43,0x03,0x00	@ 0006b554 data
.org 0x6b558
	.byte 0xc3,0x9e,0x26,0x00	@ 0006b558 data
.org 0x6b55c
	movs r0, #12	@ 0006b55c 0c20
.org 0x6b55e
	b.n 0x6b5be	@ 0006b55e 2ee0
.org 0x6b560
	cmp r0, #31	@ 0006b560 1f28
.org 0x6b562
	bgt.n 0x6b590	@ 0006b562 15dc
.org 0x6b564
	ldr r2, [pc, #28]	@ 0006b564 074a
.org 0x6b566
	ldr r1, [r2, #0]	@ 0006b566 1168
.org 0x6b568
	ldr r0, [pc, #28]	@ 0006b568 0748
.org 0x6b56a
	muls r0, r1	@ 0006b56a 4843
.org 0x6b56c
	ldr r1, [pc, #28]	@ 0006b56c 0749
.org 0x6b56e
	adds r0, r0, r1	@ 0006b56e 4018
.org 0x6b570
	lsls r0, r0, #1	@ 0006b570 4000
.org 0x6b572
	lsrs r1, r0, #1	@ 0006b572 4108
.org 0x6b574
	str r1, [r2, #0]	@ 0006b574 1160
.org 0x6b576
	lsrs r0, r0, #17	@ 0006b576 400c
.org 0x6b578
	movs r1, #31	@ 0006b578 1f21
.org 0x6b57a
	ands r0, r1	@ 0006b57a 0840
.org 0x6b57c
	cmp r0, #19	@ 0006b57c 1328
.org 0x6b57e
	bhi.n 0x6b5bc	@ 0006b57e 1dd8
.org 0x6b580
	movs r0, #30	@ 0006b580 1e20
.org 0x6b582
	b.n 0x6b5be	@ 0006b582 1ce0
.org 0x6b584
	.byte 0x38,0xdc,0x02,0x02	@ 0006b584 data
.org 0x6b588
	.byte 0xfd,0x43,0x03,0x00	@ 0006b588 data
.org 0x6b58c
	.byte 0xc3,0x9e,0x26,0x00	@ 0006b58c data
.org 0x6b590
	ldr r2, [pc, #28]	@ 0006b590 074a
.org 0x6b592
	ldr r1, [r2, #0]	@ 0006b592 1168
.org 0x6b594
	ldr r0, [pc, #28]	@ 0006b594 0748
.org 0x6b596
	muls r0, r1	@ 0006b596 4843
.org 0x6b598
	ldr r1, [pc, #28]	@ 0006b598 0749
.org 0x6b59a
	adds r0, r0, r1	@ 0006b59a 4018
.org 0x6b59c
	lsls r0, r0, #1	@ 0006b59c 4000
.org 0x6b59e
	lsrs r1, r0, #1	@ 0006b59e 4108
.org 0x6b5a0
	str r1, [r2, #0]	@ 0006b5a0 1160
.org 0x6b5a2
	lsrs r0, r0, #17	@ 0006b5a2 400c
.org 0x6b5a4
	movs r1, #31	@ 0006b5a4 1f21
.org 0x6b5a6
	ands r0, r1	@ 0006b5a6 0840
.org 0x6b5a8
	cmp r0, #23	@ 0006b5a8 1728
.org 0x6b5aa
	bhi.n 0x6b5bc	@ 0006b5aa 07d8
.org 0x6b5ac
	movs r0, #40	@ 0006b5ac 2820
.org 0x6b5ae
	b.n 0x6b5be	@ 0006b5ae 06e0
.org 0x6b5b0
	.byte 0x38,0xdc,0x02,0x02	@ 0006b5b0 data
.org 0x6b5b4
	.byte 0xfd,0x43,0x03,0x00	@ 0006b5b4 data
.org 0x6b5b8
	.byte 0xc3,0x9e,0x26,0x00	@ 0006b5b8 data
.org 0x6b5bc
	movs r0, #16	@ 0006b5bc 1020
.org 0x6b5be
	strb r0, [r4, #18]	@ 0006b5be a074
.org 0x6b5c0
	ldrb r0, [r4, #14]	@ 0006b5c0 a07b
.org 0x6b5c2
	adds r0, #1	@ 0006b5c2 0130
.org 0x6b5c4
	strb r0, [r4, #14]	@ 0006b5c4 a073
.org 0x6b5c6
	adds r0, r4, #0	@ 0006b5c6 201c

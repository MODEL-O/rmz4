@ FUN_0808a520  entry 0x0808a520  size 266
.thumb
.org 0x8a520
FUN_0808a520:
	push {r4, r5, lr}	@ 0008a520 30b5
.org 0x8a522
	adds r4, r0, #0	@ 0008a522 041c
.org 0x8a524
	ldrb r5, [r4, #14]	@ 0008a524 a57b
.org 0x8a526
	cmp r5, #0	@ 0008a526 002d
.org 0x8a528
	beq.n 0x8a530	@ 0008a528 02d0
.org 0x8a52a
	cmp r5, #1	@ 0008a52a 012d
.org 0x8a52c
	beq.n 0x8a56c	@ 0008a52c 1ed0
.org 0x8a52e
	b.n 0x8a63c	@ 0008a52e 85e0
.org 0x8a530
	ldr r1, [pc, #172]	@ 0008a530 2b49
.org 0x8a532
	adds r0, r4, #0	@ 0008a532 201c
.org 0x8a534
	bl 0x1cf00	@ 0008a534 92f7e4fc
.org 0x8a538
	adds r0, r4, #0	@ 0008a538 201c
.org 0x8a53a
	adds r0, #181	@ 0008a53a b530
.org 0x8a53c
	strb r5, [r0, #0]	@ 0008a53c 0570
.org 0x8a53e
	subs r0, #65	@ 0008a53e 4138
.org 0x8a540
	ldr r1, [pc, #160]	@ 0008a540 2849
.org 0x8a542
	ldrb r2, [r1, #0]	@ 0008a542 0a78
.org 0x8a544
	lsls r1, r2, #1	@ 0008a544 5100
.org 0x8a546
	adds r1, r1, r2	@ 0008a546 8918
.org 0x8a548
	lsls r1, r1, #3	@ 0008a548 c900
.org 0x8a54a
	ldr r2, [pc, #156]	@ 0008a54a 274a
.org 0x8a54c
	adds r1, r1, r2	@ 0008a54c 8918
.org 0x8a54e
	bl 0x5784	@ 0008a54e 7bf719f9
.org 0x8a552
	ldrb r1, [r4, #10]	@ 0008a552 a17a
.org 0x8a554
	movs r0, #16	@ 0008a554 1020
.org 0x8a556
	ands r0, r1	@ 0008a556 0840
.org 0x8a558
	ldr r1, [pc, #144]	@ 0008a558 2449
.org 0x8a55a
	cmp r0, #0	@ 0008a55a 0028
.org 0x8a55c
	beq.n 0x8a562	@ 0008a55c 01d0
.org 0x8a55e
	movs r1, #128	@ 0008a55e 8021
.org 0x8a560
	lsls r1, r1, #1	@ 0008a560 4900
.org 0x8a562
	str r1, [r4, #92]	@ 0008a562 e165
.org 0x8a564
	str r5, [r4, #96]	@ 0008a564 2566
.org 0x8a566
	ldrb r0, [r4, #14]	@ 0008a566 a07b
.org 0x8a568
	adds r0, #1	@ 0008a568 0130
.org 0x8a56a
	strb r0, [r4, #14]	@ 0008a56a a073
.org 0x8a56c
	adds r0, r4, #0	@ 0008a56c 201c
.org 0x8a56e
	movs r1, #15	@ 0008a56e 0f21
.org 0x8a570
	bl 0x8b210	@ 0008a570 00f04efe
.org 0x8a574
	adds r0, r4, #0	@ 0008a574 201c
.org 0x8a576
	bl 0x1cff0	@ 0008a576 92f73bfd
.org 0x8a57a
	ldr r0, [r4, #84]	@ 0008a57a 606d
.org 0x8a57c
	ldr r1, [r4, #92]	@ 0008a57c e16d
.org 0x8a57e
	adds r0, r0, r1	@ 0008a57e 4018
.org 0x8a580
	str r0, [r4, #84]	@ 0008a580 6065
.org 0x8a582
	adds r0, r4, #0	@ 0008a582 201c
.org 0x8a584
	bl 0x8b1a4	@ 0008a584 00f00efe
.org 0x8a588
	adds r0, r4, #0	@ 0008a588 201c
.org 0x8a58a
	adds r0, #193	@ 0008a58a c130
.org 0x8a58c
	ldrb r5, [r0, #0]	@ 0008a58c 0578
.org 0x8a58e
	cmp r5, #0	@ 0008a58e 002d
.org 0x8a590
	beq.n 0x8a5f8	@ 0008a590 32d0
.org 0x8a592
	ldr r1, [pc, #92]	@ 0008a592 1749
.org 0x8a594
	ldr r0, [r4, #84]	@ 0008a594 606d
.org 0x8a596
	movs r2, #240	@ 0008a596 f022
.org 0x8a598
	lsls r2, r2, #7	@ 0008a598 d201
.org 0x8a59a
	adds r0, r0, r2	@ 0008a59a 8018
.org 0x8a59c
	ldr r1, [r1, #56]	@ 0008a59c 896b
.org 0x8a59e
	subs r1, r1, r0	@ 0008a59e 091a
.org 0x8a5a0
	movs r0, #128	@ 0008a5a0 8020
.org 0x8a5a2
	lsls r0, r0, #6	@ 0008a5a2 8001
.org 0x8a5a4
	cmp r1, r0	@ 0008a5a4 8142
.org 0x8a5a6
	ble.n 0x8a622	@ 0008a5a6 3cdd
.org 0x8a5a8
	ldrb r1, [r4, #10]	@ 0008a5a8 a17a
.org 0x8a5aa
	movs r0, #254	@ 0008a5aa fe20
.org 0x8a5ac
	ands r0, r1	@ 0008a5ac 0840
.org 0x8a5ae
	movs r2, #0	@ 0008a5ae 0022
.org 0x8a5b0
	movs r1, #253	@ 0008a5b0 fd21
.org 0x8a5b2
	ands r0, r1	@ 0008a5b2 0840
.org 0x8a5b4
	strb r0, [r4, #10]	@ 0008a5b4 a072
.org 0x8a5b6
	adds r0, r4, #0	@ 0008a5b6 201c
.org 0x8a5b8
	adds r0, #140	@ 0008a5b8 8c30
.org 0x8a5ba
	str r2, [r0, #0]	@ 0008a5ba 0260
.org 0x8a5bc
	adds r0, #4	@ 0008a5bc 0430
.org 0x8a5be
	str r2, [r0, #0]	@ 0008a5be 0260
.org 0x8a5c0
	adds r0, #4	@ 0008a5c0 0430
.org 0x8a5c2
	strb r2, [r0, #0]	@ 0008a5c2 0270
.org 0x8a5c4
	ldrb r1, [r4, #10]	@ 0008a5c4 a17a
.org 0x8a5c6
	movs r0, #251	@ 0008a5c6 fb20
.org 0x8a5c8
	ands r0, r1	@ 0008a5c8 0840
.org 0x8a5ca
	strb r0, [r4, #10]	@ 0008a5ca a072
.org 0x8a5cc
	ldr r1, [pc, #36]	@ 0008a5cc 0949
.org 0x8a5ce
	ldrb r0, [r4, #9]	@ 0008a5ce 607a
.org 0x8a5d0
	lsls r0, r0, #2	@ 0008a5d0 8000
.org 0x8a5d2
	adds r0, r0, r1	@ 0008a5d2 4018
.org 0x8a5d4
	movs r1, #3	@ 0008a5d4 0321
.org 0x8a5d6
	str r1, [r4, #12]	@ 0008a5d6 e160
.org 0x8a5d8
	ldr r0, [r0, #0]	@ 0008a5d8 0068
.org 0x8a5da
	ldr r0, [r0, #12]	@ 0008a5da c068
.org 0x8a5dc
	str r0, [r4, #20]	@ 0008a5dc 6061
.org 0x8a5de
	b.n 0x8a622	@ 0008a5de 20e0
.org 0x8a5e0
	.byte 0x06,0x20,0x00,0x00	@ 0008a5e0 data
.org 0x8a5e4
	.byte 0x1c,0xf5,0x85,0x08	@ 0008a5e4 data
.org 0x8a5e8
	.byte 0xcc,0xf3,0x85,0x08	@ 0008a5e8 data
.org 0x8a5ec
	.byte 0x00,0xff,0xff,0xff	@ 0008a5ec data
.org 0x8a5f0
	.byte 0xf8,0xe9,0x02,0x02	@ 0008a5f0 data
.org 0x8a5f4
	.byte 0x40,0xdb,0x85,0x08	@ 0008a5f4 data
.org 0x8a5f8
	ldr r2, [pc, #72]	@ 0008a5f8 124a
.org 0x8a5fa
	ldrb r1, [r4, #10]	@ 0008a5fa a17a
.org 0x8a5fc
	movs r0, #16	@ 0008a5fc 1020
.org 0x8a5fe
	ands r0, r1	@ 0008a5fe 0840
.org 0x8a600
	cmp r0, #0	@ 0008a600 0028
.org 0x8a602
	beq.n 0x8a608	@ 0008a602 01d0
.org 0x8a604
	movs r2, #128	@ 0008a604 8022
.org 0x8a606
	lsls r2, r2, #5	@ 0008a606 5201
.org 0x8a608
	ldr r1, [r4, #88]	@ 0008a608 a16d
.org 0x8a60a
	ldr r0, [pc, #60]	@ 0008a60a 0f48
.org 0x8a60c
	adds r1, r1, r0	@ 0008a60c 0918
.org 0x8a60e
	ldr r0, [r4, #84]	@ 0008a60e 606d
.org 0x8a610
	adds r0, r0, r2	@ 0008a610 8018
.org 0x8a612
	bl 0x7c7c	@ 0008a612 7df733fb
.org 0x8a616
	lsls r0, r0, #16	@ 0008a616 0004
.org 0x8a618
	cmp r0, #0	@ 0008a618 0028
.org 0x8a61a
	beq.n 0x8a622	@ 0008a61a 02d0
.org 0x8a61c
	movs r0, #2	@ 0008a61c 0220
.org 0x8a61e
	strb r0, [r4, #13]	@ 0008a61e 6073
.org 0x8a620
	strb r5, [r4, #14]	@ 0008a620 a573
.org 0x8a622
	adds r1, r4, #0	@ 0008a622 211c
.org 0x8a624
	adds r1, #194	@ 0008a624 c231
.org 0x8a626
	ldrb r0, [r1, #0]	@ 0008a626 0878
.org 0x8a628
	adds r0, #1	@ 0008a628 0130

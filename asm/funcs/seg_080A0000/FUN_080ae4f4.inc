@ FUN_080ae4f4  entry 0x080ae4f4  size 158
.thumb
.org 0xae4f4
FUN_080ae4f4:
	push {r4, r5, r6, lr}	@ 000ae4f4 70b5
.org 0xae4f6
	adds r4, r0, #0	@ 000ae4f6 041c
.org 0xae4f8
	ldr r6, [r4, #40]	@ 000ae4f8 a66a
.org 0xae4fa
	ldrb r5, [r4, #14]	@ 000ae4fa a57b
.org 0xae4fc
	cmp r5, #0	@ 000ae4fc 002d
.org 0xae4fe
	bne.n 0xae52c	@ 000ae4fe 15d1
.org 0xae500
	bl 0x1cc9c	@ 000ae500 6ef7ccfb
.org 0xae504
	ldrb r1, [r4, #10]	@ 000ae504 a17a
.org 0xae506
	movs r0, #1	@ 000ae506 0120
.org 0xae508
	orrs r0, r1	@ 000ae508 0843
.org 0xae50a
	strb r0, [r4, #10]	@ 000ae50a a072
.org 0xae50c
	ldr r1, [pc, #92]	@ 000ae50c 1749
.org 0xae50e
	adds r0, r4, #0	@ 000ae50e 201c
.org 0xae510
	bl 0x1cf00	@ 000ae510 6ef7f6fc
.org 0xae514
	adds r0, r4, #0	@ 000ae514 201c
.org 0xae516
	adds r0, #116	@ 000ae516 7430
.org 0xae518
	ldr r1, [pc, #84]	@ 000ae518 1549
.org 0xae51a
	bl 0x5784	@ 000ae51a 57f733f9
.org 0xae51e
	movs r0, #12	@ 000ae51e 0c20
.org 0xae520
	strb r0, [r4, #18]	@ 000ae520 a074
.org 0xae522
	strb r5, [r4, #19]	@ 000ae522 e574
.org 0xae524
	strb r5, [r4, #15]	@ 000ae524 e573
.org 0xae526
	ldrb r0, [r4, #14]	@ 000ae526 a07b
.org 0xae528
	adds r0, #1	@ 000ae528 0130
.org 0xae52a
	strb r0, [r4, #14]	@ 000ae52a a073
.org 0xae52c
	adds r0, r4, #0	@ 000ae52c 201c
.org 0xae52e
	bl 0x1cff0	@ 000ae52e 6ef75ffd
.org 0xae532
	ldr r0, [r6, #84]	@ 000ae532 706d
.org 0xae534
	ldr r1, [pc, #60]	@ 000ae534 0f49
.org 0xae536
	adds r0, r0, r1	@ 000ae536 4018
.org 0xae538
	str r0, [r4, #84]	@ 000ae538 6065
.org 0xae53a
	ldr r0, [r6, #88]	@ 000ae53a b06d
.org 0xae53c
	ldr r1, [pc, #56]	@ 000ae53c 0e49
.org 0xae53e
	adds r0, r0, r1	@ 000ae53e 4018
.org 0xae540
	str r0, [r4, #88]	@ 000ae540 a065
.org 0xae542
	ldrb r0, [r4, #18]	@ 000ae542 a07c
.org 0xae544
	adds r1, r0, #1	@ 000ae544 411c
.org 0xae546
	strb r1, [r4, #18]	@ 000ae546 a174
.org 0xae548
	lsls r0, r0, #24	@ 000ae548 0006
.org 0xae54a
	lsrs r0, r0, #24	@ 000ae54a 000e
.org 0xae54c
	cmp r0, #12	@ 000ae54c 0c28
.org 0xae54e
	bls.n 0xae59e	@ 000ae54e 26d9
.org 0xae550
	ldrb r0, [r4, #19]	@ 000ae550 e07c
.org 0xae552
	cmp r0, #3	@ 000ae552 0328
.org 0xae554
	bls.n 0xae57c	@ 000ae554 12d9
.org 0xae556
	adds r2, r4, #0	@ 000ae556 221c
.org 0xae558
	adds r2, #190	@ 000ae558 be32
.org 0xae55a
	movs r1, #0	@ 000ae55a 0021
.org 0xae55c
	movs r0, #32	@ 000ae55c 2020
.org 0xae55e
	strb r0, [r2, #0]	@ 000ae55e 1070
.org 0xae560
	ldrb r0, [r4, #13]	@ 000ae560 607b
.org 0xae562
	adds r0, #1	@ 000ae562 0130
.org 0xae564
	strb r0, [r4, #13]	@ 000ae564 6073
.org 0xae566
	strb r1, [r4, #14]	@ 000ae566 a173
.org 0xae568
	b.n 0xae598	@ 000ae568 16e0
.org 0xae56a
	.byte 0x00	@ 000ae56a data
.org 0xae56b
	.byte 0x00	@ 000ae56b data
.org 0xae56c
	.byte 0x02,0xa2,0x00,0x00	@ 000ae56c data
.org 0xae570
	.byte 0x00,0x2f,0x86,0x08	@ 000ae570 data
.org 0xae574
	.byte 0x00,0x98,0xff,0xff	@ 000ae574 data
.org 0xae578
	.byte 0x00,0xbe,0xff,0xff	@ 000ae578 data
.org 0xae57c
	ldrb r0, [r4, #19]	@ 000ae57c e07c
.org 0xae57e
	lsls r0, r0, #4	@ 000ae57e 0001
.org 0xae580
	movs r1, #96	@ 000ae580 6021
.org 0xae582
	subs r1, r1, r0	@ 000ae582 091a
.org 0xae584
	lsls r1, r1, #24	@ 000ae584 0906
.org 0xae586
	lsrs r1, r1, #24	@ 000ae586 090e
.org 0xae588
	adds r0, r6, #0	@ 000ae588 301c
.org 0xae58a
	bl 0xae140	@ 000ae58a fff7d9fd
.org 0xae58e
	movs r0, #0	@ 000ae58e 0020
.org 0xae590
	strb r0, [r4, #18]	@ 000ae590 a074

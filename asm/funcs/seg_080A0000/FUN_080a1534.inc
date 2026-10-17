@ FUN_080a1534  entry 0x080a1534  size 132
.thumb
.org 0xa1534
FUN_080a1534:
	push {r4, r5, lr}	@ 000a1534 30b5
.org 0xa1536
	adds r4, r0, #0	@ 000a1536 041c
.org 0xa1538
	ldrb r0, [r4, #10]	@ 000a1538 a07a
.org 0xa153a
	lsrs r5, r0, #4	@ 000a153a 0509
.org 0xa153c
	movs r0, #1	@ 000a153c 0120
.org 0xa153e
	ands r5, r0	@ 000a153e 0540
.org 0xa1540
	ldrb r0, [r4, #15]	@ 000a1540 e07b
.org 0xa1542
	cmp r0, #0	@ 000a1542 0028
.org 0xa1544
	bne.n 0xa1560	@ 000a1544 0cd1
.org 0xa1546
	adds r1, r4, #0	@ 000a1546 211c
.org 0xa1548
	adds r1, #37	@ 000a1548 2531
.org 0xa154a
	movs r0, #24	@ 000a154a 1820
.org 0xa154c
	strb r0, [r1, #0]	@ 000a154c 0870
.org 0xa154e
	ldr r1, [pc, #44]	@ 000a154e 0b49
.org 0xa1550
	adds r0, r4, #0	@ 000a1550 201c
.org 0xa1552
	bl 0x1cf00	@ 000a1552 7bf7d5fc
.org 0xa1556
	movs r0, #96	@ 000a1556 6020
.org 0xa1558
	strb r0, [r4, #18]	@ 000a1558 a074
.org 0xa155a
	ldrb r0, [r4, #15]	@ 000a155a e07b
.org 0xa155c
	adds r0, #1	@ 000a155c 0130
.org 0xa155e
	strb r0, [r4, #15]	@ 000a155e e073
.org 0xa1560
	ldrb r0, [r4, #18]	@ 000a1560 a07c
.org 0xa1562
	subs r0, #1	@ 000a1562 0138
.org 0xa1564
	strb r0, [r4, #18]	@ 000a1564 a074
.org 0xa1566
	lsls r0, r0, #24	@ 000a1566 0006
.org 0xa1568
	lsrs r0, r0, #24	@ 000a1568 000e
.org 0xa156a
	cmp r0, #0	@ 000a156a 0028
.org 0xa156c
	bne.n 0xa1580	@ 000a156c 08d1
.org 0xa156e
	ldr r1, [pc, #12]	@ 000a156e 0349
.org 0xa1570
	adds r0, r4, #0	@ 000a1570 201c
.org 0xa1572
	bl 0x1cf00	@ 000a1572 7bf7c5fc
.org 0xa1576
	movs r0, #96	@ 000a1576 6020
.org 0xa1578
	strb r0, [r4, #18]	@ 000a1578 a074
.org 0xa157a
	b.n 0xa1596	@ 000a157a 0ce0
.org 0xa157c
	.byte 0x02,0x83,0x00,0x00	@ 000a157c data
.org 0xa1580
	cmp r0, #48	@ 000a1580 3028
.org 0xa1582
	bne.n 0xa1596	@ 000a1582 08d1
.org 0xa1584
	ldrb r1, [r4, #16]	@ 000a1584 217c
.org 0xa1586
	adds r0, r4, #0	@ 000a1586 201c
.org 0xa1588
	adds r2, r5, #0	@ 000a1588 2a1c
.org 0xa158a
	bl 0xc83c4	@ 000a158a 26f01bff
.org 0xa158e
	ldr r1, [pc, #44]	@ 000a158e 0b49
.org 0xa1590
	adds r0, r4, #0	@ 000a1590 201c
.org 0xa1592
	bl 0x1cf00	@ 000a1592 7bf7b5fc
.org 0xa1596
	adds r0, r4, #0	@ 000a1596 201c
.org 0xa1598
	bl 0x1cff0	@ 000a1598 7bf72afd
.org 0xa159c
	adds r0, r4, #0	@ 000a159c 201c
.org 0xa159e
	bl 0xa1a74	@ 000a159e 00f069fa
.org 0xa15a2
	adds r0, r4, #0	@ 000a15a2 201c
.org 0xa15a4
	adds r0, #186	@ 000a15a4 ba30
.org 0xa15a6
	ldrb r0, [r0, #0]	@ 000a15a6 0078
.org 0xa15a8
	cmp r0, #3	@ 000a15a8 0328
.org 0xa15aa
	bls.n 0xa15b6	@ 000a15aa 04d9
.org 0xa15ac
	movs r1, #0	@ 000a15ac 0021
.org 0xa15ae
	movs r0, #3	@ 000a15ae 0320
.org 0xa15b0
	strb r0, [r4, #13]	@ 000a15b0 6073
.org 0xa15b2
	strb r1, [r4, #14]	@ 000a15b2 a173
.org 0xa15b4
	strb r1, [r4, #15]	@ 000a15b4 e173
.org 0xa15b6
	pop {r4, r5}	@ 000a15b6 30bc

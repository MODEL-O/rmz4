@ FUN_080c1500  entry 0x080c1500  size 188
.thumb
.org 0xc1500
FUN_080c1500:
	push {r4, lr}	@ 000c1500 10b5
.org 0xc1502
	sub sp, #4	@ 000c1502 81b0
.org 0xc1504
	adds r4, r0, #0	@ 000c1504 041c
.org 0xc1506
	mov r0, sp	@ 000c1506 6846
.org 0xc1508
	movs r1, #0	@ 000c1508 0021
.org 0xc150a
	movs r2, #2	@ 000c150a 0222
.org 0xc150c
	bl 0x1292b8	@ 000c150c 67f0d4fe
.org 0xc1510
	ldr r2, [r4, #40]	@ 000c1510 a26a
.org 0xc1512
	ldrb r0, [r2, #12]	@ 000c1512 107b
.org 0xc1514
	cmp r0, #1	@ 000c1514 0128
.org 0xc1516
	bls.n 0xc1538	@ 000c1516 0fd9
.org 0xc1518
	ldr r1, [pc, #24]	@ 000c1518 0649
.org 0xc151a
	ldrb r0, [r4, #9]	@ 000c151a 607a
.org 0xc151c
	lsls r0, r0, #2	@ 000c151c 8000
.org 0xc151e
	adds r0, r0, r1	@ 000c151e 4018
.org 0xc1520
	movs r1, #2	@ 000c1520 0221
.org 0xc1522
	str r1, [r4, #12]	@ 000c1522 e160
.org 0xc1524
	ldr r0, [r0, #0]	@ 000c1524 0068
.org 0xc1526
	ldr r0, [r0, #8]	@ 000c1526 8068
.org 0xc1528
	str r0, [r4, #20]	@ 000c1528 6061
.org 0xc152a
	adds r0, r4, #0	@ 000c152a 201c
.org 0xc152c
	bl 0xc1934	@ 000c152c 00f002fa
.org 0xc1530
	b.n 0xc15c8	@ 000c1530 4ae0
.org 0xc1532
	.byte 0x00	@ 000c1532 data
.org 0xc1533
	.byte 0x00	@ 000c1533 data
.org 0xc1534
	.byte 0xf4,0x49,0x86,0x08	@ 000c1534 data
.org 0xc1538
	ldr r0, [pc, #68]	@ 000c1538 1148
.org 0xc153a
	ldr r0, [r0, #60]	@ 000c153a c06b
.org 0xc153c
	ldr r1, [pc, #68]	@ 000c153c 1149
.org 0xc153e
	adds r0, r0, r1	@ 000c153e 4018
.org 0xc1540
	ldr r1, [r4, #88]	@ 000c1540 a16d
.org 0xc1542
	cmp r1, r0	@ 000c1542 8142
.org 0xc1544
	ble.n 0xc158c	@ 000c1544 22dd
.org 0xc1546
	ldrb r1, [r4, #10]	@ 000c1546 a17a
.org 0xc1548
	movs r0, #254	@ 000c1548 fe20
.org 0xc154a
	ands r0, r1	@ 000c154a 0840
.org 0xc154c
	movs r2, #0	@ 000c154c 0022
.org 0xc154e
	movs r1, #253	@ 000c154e fd21
.org 0xc1550
	ands r0, r1	@ 000c1550 0840
.org 0xc1552
	strb r0, [r4, #10]	@ 000c1552 a072
.org 0xc1554
	adds r0, r4, #0	@ 000c1554 201c
.org 0xc1556
	adds r0, #140	@ 000c1556 8c30
.org 0xc1558
	str r2, [r0, #0]	@ 000c1558 0260
.org 0xc155a
	adds r0, #4	@ 000c155a 0430
.org 0xc155c
	str r2, [r0, #0]	@ 000c155c 0260
.org 0xc155e
	adds r0, #4	@ 000c155e 0430
.org 0xc1560
	strb r2, [r0, #0]	@ 000c1560 0270
.org 0xc1562
	ldrb r1, [r4, #10]	@ 000c1562 a17a
.org 0xc1564
	movs r0, #251	@ 000c1564 fb20
.org 0xc1566
	ands r0, r1	@ 000c1566 0840
.org 0xc1568
	strb r0, [r4, #10]	@ 000c1568 a072
.org 0xc156a
	ldr r1, [pc, #28]	@ 000c156a 0749
.org 0xc156c
	ldrb r0, [r4, #9]	@ 000c156c 607a
.org 0xc156e
	lsls r0, r0, #2	@ 000c156e 8000
.org 0xc1570
	adds r0, r0, r1	@ 000c1570 4018
.org 0xc1572
	movs r1, #3	@ 000c1572 0321
.org 0xc1574
	str r1, [r4, #12]	@ 000c1574 e160
.org 0xc1576
	ldr r0, [r0, #0]	@ 000c1576 0068
.org 0xc1578
	ldr r0, [r0, #12]	@ 000c1578 c068
.org 0xc157a
	str r0, [r4, #20]	@ 000c157a 6061
.org 0xc157c
	b.n 0xc15c8	@ 000c157c 24e0
.org 0xc157e
	.byte 0x00	@ 000c157e data
.org 0xc157f
	.byte 0x00	@ 000c157f data
.org 0xc1580
	.byte 0xf8,0xe9,0x02,0x02	@ 000c1580 data
.org 0xc1584
	.byte 0xff,0x6f,0x00,0x00	@ 000c1584 data
.org 0xc1588
	.byte 0xf4,0x49,0x86,0x08	@ 000c1588 data
.org 0xc158c
	adds r0, r2, #0	@ 000c158c 101c
.org 0xc158e
	adds r0, #200	@ 000c158e c830
.org 0xc1590
	ldrb r0, [r0, #0]	@ 000c1590 0078
.org 0xc1592
	cmp r0, #0	@ 000c1592 0028
.org 0xc1594
	beq.n 0xc15b8	@ 000c1594 10d0
.org 0xc1596
	adds r0, r4, #0	@ 000c1596 201c
.org 0xc1598
	adds r0, #116	@ 000c1598 7430
.org 0xc159a
	adds r1, r4, #0	@ 000c159a 211c
.org 0xc159c
	adds r1, #180	@ 000c159c b431
.org 0xc159e
	ldrb r1, [r1, #0]	@ 000c159e 0978
.org 0xc15a0
	add r1, sp	@ 000c15a0 6944
.org 0xc15a2
	ldrb r2, [r1, #0]	@ 000c15a2 0a78
.org 0xc15a4
	lsls r1, r2, #1	@ 000c15a4 5100
.org 0xc15a6
	adds r1, r1, r2	@ 000c15a6 8918
.org 0xc15a8
	lsls r1, r1, #3	@ 000c15a8 c900
.org 0xc15aa
	ldr r2, [pc, #36]	@ 000c15aa 094a
.org 0xc15ac
	adds r1, r1, r2	@ 000c15ac 8918
.org 0xc15ae
	bl 0x5784	@ 000c15ae 44f7e9f8
.org 0xc15b2
	ldrb r0, [r4, #13]	@ 000c15b2 607b
.org 0xc15b4
	cmp r0, #3	@ 000c15b4 0328
.org 0xc15b6
	bne.n 0xc15c8	@ 000c15b6 07d1
.org 0xc15b8
	ldr r0, [pc, #24]	@ 000c15b8 0648
.org 0xc15ba
	ldrb r1, [r4, #13]	@ 000c15ba 617b

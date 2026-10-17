@ FUN_080d1558  entry 0x080d1558  size 72
.thumb
.org 0xd1558
FUN_080d1558:
	push {r4, r5, r6, lr}	@ 000d1558 70b5
.org 0xd155a
	adds r5, r0, #0	@ 000d155a 051c
.org 0xd155c
	adds r6, r1, #0	@ 000d155c 0e1c
.org 0xd155e
	lsls r2, r2, #24	@ 000d155e 1206
.org 0xd1560
	lsrs r4, r2, #24	@ 000d1560 140e
.org 0xd1562
	ldr r0, [pc, #60]	@ 000d1562 0f48
.org 0xd1564
	ldr r0, [r0, #0]	@ 000d1564 0068
.org 0xd1566
	bl 0x5500	@ 000d1566 33f7cbff
.org 0xd156a
	adds r3, r0, #0	@ 000d156a 031c
.org 0xd156c
	cmp r3, #0	@ 000d156c 002b
.org 0xd156e
	beq.n 0xd1598	@ 000d156e 13d0
.org 0xd1570
	adds r1, r3, #0	@ 000d1570 191c
.org 0xd1572
	adds r1, #37	@ 000d1572 2531
.org 0xd1574
	movs r2, #0	@ 000d1574 0022
.org 0xd1576
	movs r0, #1	@ 000d1576 0120
.org 0xd1578
	strb r0, [r1, #0]	@ 000d1578 0870
.org 0xd157a
	ldr r1, [pc, #40]	@ 000d157a 0a49
.org 0xd157c
	movs r0, #2	@ 000d157c 0220
.org 0xd157e
	strb r0, [r3, #9]	@ 000d157e 5872
.org 0xd1580
	ldr r0, [r1, #8]	@ 000d1580 8868
.org 0xd1582
	ldr r0, [r0, #0]	@ 000d1582 0068
.org 0xd1584
	str r0, [r3, #20]	@ 000d1584 5861
.org 0xd1586
	movs r0, #0	@ 000d1586 0020
.org 0xd1588
	strh r2, [r3, #32]	@ 000d1588 1a84
.org 0xd158a
	adds r1, r3, #0	@ 000d158a 191c
.org 0xd158c
	adds r1, #34	@ 000d158c 2231
.org 0xd158e
	strb r0, [r1, #0]	@ 000d158e 0870
.org 0xd1590
	str r5, [r3, #40]	@ 000d1590 9d62
.org 0xd1592
	str r6, [r3, #44]	@ 000d1592 de62
.org 0xd1594
	strb r4, [r3, #16]	@ 000d1594 1c74
.org 0xd1596
	strb r0, [r3, #17]	@ 000d1596 5874
.org 0xd1598
	adds r0, r3, #0	@ 000d1598 181c
.org 0xd159a
	pop {r4, r5, r6}	@ 000d159a 70bc
.org 0xd159c
	pop {r1}	@ 000d159c 02bc
.org 0xd159e
	bx r1	@ 000d159e 0847

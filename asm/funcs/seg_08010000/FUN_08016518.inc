@ FUN_08016518  entry 0x08016518  size 116
.thumb
.org 0x16518
FUN_08016518:
	push {r4, r5, lr}	@ 00016518 30b5
.org 0x1651a
	adds r4, r0, #0	@ 0001651a 041c
.org 0x1651c
	ldrb r3, [r4, #14]	@ 0001651c a37b
.org 0x1651e
	cmp r3, #0	@ 0001651e 002b
.org 0x16520
	bne.n 0x1654c	@ 00016520 14d1
.org 0x16522
	ldr r0, [r4, #92]	@ 00016522 e06d
.org 0x16524
	lsls r0, r0, #16	@ 00016524 0004
.org 0x16526
	lsrs r0, r0, #20	@ 00016526 000d
.org 0x16528
	lsls r0, r0, #1	@ 00016528 4000
.org 0x1652a
	ldr r1, [pc, #96]	@ 0001652a 1849
.org 0x1652c
	adds r0, r0, r1	@ 0001652c 4018
.org 0x1652e
	ldrh r2, [r0, #0]	@ 0001652e 0288
.org 0x16530
	ldr r1, [pc, #92]	@ 00016530 1749
.org 0x16532
	ands r1, r2	@ 00016532 1140
.org 0x16534
	movs r2, #3	@ 00016534 0322
.org 0x16536
	orrs r1, r2	@ 00016536 1143
.org 0x16538
	strh r1, [r0, #0]	@ 00016538 0180
.org 0x1653a
	str r3, [r4, #76]	@ 0001653a e364
.org 0x1653c
	str r3, [r4, #80]	@ 0001653c 2365
.org 0x1653e
	movs r0, #128	@ 0001653e 8020
.org 0x16540
	lsls r0, r0, #1	@ 00016540 4000
.org 0x16542
	str r0, [r4, #68]	@ 00016542 6064
.org 0x16544
	str r0, [r4, #72]	@ 00016544 a064
.org 0x16546
	ldrb r0, [r4, #14]	@ 00016546 a07b
.org 0x16548
	adds r0, #1	@ 00016548 0130
.org 0x1654a
	strb r0, [r4, #14]	@ 0001654a a073
.org 0x1654c
	ldr r0, [pc, #68]	@ 0001654c 1148
.org 0x1654e
	ldr r1, [pc, #72]	@ 0001654e 1249
.org 0x16550
	adds r5, r0, r1	@ 00016550 4518
.org 0x16552
	ldrb r1, [r5, #0]	@ 00016552 2978
.org 0x16554
	movs r0, #1	@ 00016554 0120
.org 0x16556
	ands r0, r1	@ 00016556 0840
.org 0x16558
	cmp r0, #0	@ 00016558 0028
.org 0x1655a
	bne.n 0x16578	@ 0001655a 0dd1
.org 0x1655c
	ldr r0, [pc, #60]	@ 0001655c 0f48
.org 0x1655e
	ldr r0, [r0, #0]	@ 0001655e 0068
.org 0x16560
	ldr r1, [r0, #84]	@ 00016560 416d
.org 0x16562
	movs r0, #136	@ 00016562 8820
.org 0x16564
	lsls r0, r0, #4	@ 00016564 0001
.org 0x16566
	cmp r1, r0	@ 00016566 8142
.org 0x16568
	ble.n 0x16578	@ 00016568 06dd
.org 0x1656a
	ldr r0, [pc, #52]	@ 0001656a 0d48
.org 0x1656c
	bl 0x2b10	@ 0001656c ecf7d0fa
.org 0x16570
	ldrb r1, [r5, #0]	@ 00016570 2978
.org 0x16572
	movs r0, #1	@ 00016572 0120
.org 0x16574
	orrs r0, r1	@ 00016574 0843
.org 0x16576
	strb r0, [r5, #0]	@ 00016576 2870
.org 0x16578
	ldr r0, [pc, #24]	@ 00016578 0648
.org 0x1657a
	ldr r1, [pc, #40]	@ 0001657a 0a49
.org 0x1657c
	adds r0, r0, r1	@ 0001657c 4018
.org 0x1657e
	ldrh r0, [r0, #0]	@ 0001657e 0088
.org 0x16580
	lsls r0, r0, #16	@ 00016580 0004
.org 0x16582
	asrs r0, r0, #20	@ 00016582 0015
.org 0x16584
	str r0, [r4, #80]	@ 00016584 2065
.org 0x16586
	pop {r4, r5}	@ 00016586 30bc
.org 0x16588
	pop {r0}	@ 00016588 01bc
.org 0x1658a
	bx r0	@ 0001658a 0047

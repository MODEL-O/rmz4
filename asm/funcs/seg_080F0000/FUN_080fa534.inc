@ FUN_080fa534  entry 0x080fa534  size 92
.thumb
.org 0xfa534
FUN_080fa534:
	push {r4, lr}	@ 000fa534 10b5
.org 0xfa536
	adds r4, r0, #0	@ 000fa536 041c
.org 0xfa538
	ldrb r0, [r4, #14]	@ 000fa538 a07b
.org 0xfa53a
	cmp r0, #0	@ 000fa53a 0028
.org 0xfa53c
	bne.n 0xfa572	@ 000fa53c 19d1
.org 0xfa53e
	ldr r1, [pc, #80]	@ 000fa53e 1449
.org 0xfa540
	adds r0, r4, #0	@ 000fa540 201c
.org 0xfa542
	bl 0x1cf00	@ 000fa542 22f7ddfc
.org 0xfa546
	adds r0, r4, #0	@ 000fa546 201c
.org 0xfa548
	adds r0, #100	@ 000fa548 6430
.org 0xfa54a
	ldrb r2, [r4, #10]	@ 000fa54a a27a
.org 0xfa54c
	lsrs r2, r2, #4	@ 000fa54c 1209
.org 0xfa54e
	movs r1, #1	@ 000fa54e 0121
.org 0xfa550
	ands r2, r1	@ 000fa550 0a40
.org 0xfa552
	movs r1, #0	@ 000fa552 0021
.org 0xfa554
	bl 0xcaeb4	@ 000fa554 d0f7aefc
.org 0xfa558
	adds r1, r4, #0	@ 000fa558 211c
.org 0xfa55a
	adds r1, #184	@ 000fa55a b831
.org 0xfa55c
	ldr r0, [r4, #88]	@ 000fa55c a06d
.org 0xfa55e
	movs r2, #128	@ 000fa55e 8022
.org 0xfa560
	lsls r2, r2, #1	@ 000fa560 5200
.org 0xfa562
	adds r0, r0, r2	@ 000fa562 8018
.org 0xfa564
	str r0, [r1, #0]	@ 000fa564 0860
.org 0xfa566
	ldr r0, [pc, #44]	@ 000fa566 0b48
.org 0xfa568
	bl 0x2b10	@ 000fa568 08f7d2fa
.org 0xfa56c
	ldrb r0, [r4, #14]	@ 000fa56c a07b
.org 0xfa56e
	adds r0, #1	@ 000fa56e 0130
.org 0xfa570
	strb r0, [r4, #14]	@ 000fa570 a073
.org 0xfa572
	adds r0, r4, #0	@ 000fa572 201c
.org 0xfa574
	bl 0x1cff0	@ 000fa574 22f73cfd
.org 0xfa578
	adds r0, r4, #0	@ 000fa578 201c
.org 0xfa57a
	adds r0, #115	@ 000fa57a 7330
.org 0xfa57c
	ldrb r0, [r0, #0]	@ 000fa57c 0078
.org 0xfa57e
	cmp r0, #3	@ 000fa57e 0328
.org 0xfa580
	bne.n 0xfa58a	@ 000fa580 03d1
.org 0xfa582
	movs r1, #0	@ 000fa582 0021
.org 0xfa584
	movs r0, #2	@ 000fa584 0220
.org 0xfa586
	strb r0, [r4, #13]	@ 000fa586 6073
.org 0xfa588
	strb r1, [r4, #14]	@ 000fa588 a173
.org 0xfa58a
	pop {r4}	@ 000fa58a 10bc
.org 0xfa58c
	pop {r0}	@ 000fa58c 01bc
.org 0xfa58e
	bx r0	@ 000fa58e 0047

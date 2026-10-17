@ FUN_08047544  entry 0x08047544  size 102
.thumb
.org 0x47544
FUN_08047544:
	push {r4, lr}	@ 00047544 10b5
.org 0x47546
	adds r4, r0, #0	@ 00047546 041c
.org 0x47548
	bl 0x1cff0	@ 00047548 d5f752fd
.org 0x4754c
	ldr r0, [r4, #84]	@ 0004754c 606d
.org 0x4754e
	ldr r1, [r4, #92]	@ 0004754e e16d
.org 0x47550
	adds r0, r0, r1	@ 00047550 4018
.org 0x47552
	str r0, [r4, #84]	@ 00047552 6065
.org 0x47554
	ldr r0, [r4, #88]	@ 00047554 a06d
.org 0x47556
	ldr r1, [r4, #96]	@ 00047556 216e
.org 0x47558
	adds r0, r0, r1	@ 00047558 4018
.org 0x4755a
	str r0, [r4, #88]	@ 0004755a a065
.org 0x4755c
	adds r0, r4, #0	@ 0004755c 201c
.org 0x4755e
	adds r0, #113	@ 0004755e 7130
.org 0x47560
	ldrb r0, [r0, #0]	@ 00047560 0078
.org 0x47562
	lsls r0, r0, #24	@ 00047562 0006
.org 0x47564
	asrs r0, r0, #24	@ 00047564 0016
.org 0x47566
	cmp r0, #4	@ 00047566 0428
.org 0x47568
	ble.n 0x47582	@ 00047568 0bdd
.org 0x4756a
	adds r0, r4, #0	@ 0004756a 201c
.org 0x4756c
	adds r0, #140	@ 0004756c 8c30
.org 0x4756e
	movs r1, #0	@ 0004756e 0021
.org 0x47570
	str r1, [r0, #0]	@ 00047570 0160
.org 0x47572
	adds r0, #4	@ 00047572 0430
.org 0x47574
	str r1, [r0, #0]	@ 00047574 0160
.org 0x47576
	adds r0, #4	@ 00047576 0430
.org 0x47578
	strb r1, [r0, #0]	@ 00047578 0170
.org 0x4757a
	ldrb r1, [r4, #10]	@ 0004757a a17a
.org 0x4757c
	movs r0, #251	@ 0004757c fb20
.org 0x4757e
	ands r0, r1	@ 0004757e 0840
.org 0x47580
	strb r0, [r4, #10]	@ 00047580 a072
.org 0x47582
	adds r0, r4, #0	@ 00047582 201c
.org 0x47584
	adds r0, #115	@ 00047584 7330
.org 0x47586
	ldrb r0, [r0, #0]	@ 00047586 0078
.org 0x47588
	cmp r0, #3	@ 00047588 0328
.org 0x4758a
	bne.n 0x475a4	@ 0004758a 0bd1
.org 0x4758c
	ldr r1, [pc, #28]	@ 0004758c 0749
.org 0x4758e
	ldrb r0, [r4, #9]	@ 0004758e 607a
.org 0x47590
	lsls r0, r0, #2	@ 00047590 8000
.org 0x47592
	adds r0, r0, r1	@ 00047592 4018
.org 0x47594
	movs r1, #2	@ 00047594 0221
.org 0x47596
	str r1, [r4, #12]	@ 00047596 e160
.org 0x47598
	ldr r0, [r0, #0]	@ 00047598 0068
.org 0x4759a
	ldr r0, [r0, #8]	@ 0004759a 8068
.org 0x4759c
	str r0, [r4, #20]	@ 0004759c 6061
.org 0x4759e
	adds r0, r4, #0	@ 0004759e 201c
.org 0x475a0
	bl 0x47150	@ 000475a0 fff7d6fd
.org 0x475a4
	pop {r4}	@ 000475a4 10bc
.org 0x475a6
	pop {r0}	@ 000475a6 01bc
.org 0x475a8
	bx r0	@ 000475a8 0047

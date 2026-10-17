@ FUN_080b6554  entry 0x080b6554  size 110
.thumb
.org 0xb6554
FUN_080b6554:
	push {r4, r5, r6, r7, lr}	@ 000b6554 f0b5
.org 0xb6556
	adds r4, r0, #0	@ 000b6556 041c
.org 0xb6558
	adds r7, r1, #0	@ 000b6558 0f1c
.org 0xb655a
	lsls r2, r2, #24	@ 000b655a 1206
.org 0xb655c
	lsrs r6, r2, #24	@ 000b655c 160e
.org 0xb655e
	lsls r3, r3, #24	@ 000b655e 1b06
.org 0xb6560
	lsrs r5, r3, #24	@ 000b6560 1d0e
.org 0xb6562
	ldr r0, [pc, #96]	@ 000b6562 1848
.org 0xb6564
	ldr r0, [r0, #0]	@ 000b6564 0068
.org 0xb6566
	bl 0x5500	@ 000b6566 4ef7cbff
.org 0xb656a
	adds r3, r0, #0	@ 000b656a 031c
.org 0xb656c
	cmp r3, #0	@ 000b656c 002b
.org 0xb656e
	beq.n 0xb65ba	@ 000b656e 24d0
.org 0xb6570
	adds r1, r3, #0	@ 000b6570 191c
.org 0xb6572
	adds r1, #37	@ 000b6572 2531
.org 0xb6574
	movs r2, #0	@ 000b6574 0022
.org 0xb6576
	movs r0, #24	@ 000b6576 1820
.org 0xb6578
	strb r0, [r1, #0]	@ 000b6578 0870
.org 0xb657a
	ldr r0, [pc, #76]	@ 000b657a 1348
.org 0xb657c
	movs r1, #99	@ 000b657c 6321
.org 0xb657e
	strb r1, [r3, #9]	@ 000b657e 5972
.org 0xb6580
	movs r1, #198	@ 000b6580 c621
.org 0xb6582
	lsls r1, r1, #1	@ 000b6582 4900
.org 0xb6584
	adds r0, r0, r1	@ 000b6584 4018
.org 0xb6586
	ldr r0, [r0, #0]	@ 000b6586 0068
.org 0xb6588
	ldr r0, [r0, #0]	@ 000b6588 0068
.org 0xb658a
	str r0, [r3, #20]	@ 000b658a 5861
.org 0xb658c
	movs r0, #0	@ 000b658c 0020
.org 0xb658e
	strh r2, [r3, #32]	@ 000b658e 1a84
.org 0xb6590
	adds r1, r3, #0	@ 000b6590 191c
.org 0xb6592
	adds r1, #34	@ 000b6592 2231
.org 0xb6594
	strb r0, [r1, #0]	@ 000b6594 0870
.org 0xb6596
	ldrb r1, [r3, #11]	@ 000b6596 d97a
.org 0xb6598
	movs r0, #16	@ 000b6598 1020
.org 0xb659a
	orrs r0, r1	@ 000b659a 0843
.org 0xb659c
	strb r0, [r3, #11]	@ 000b659c d872
.org 0xb659e
	ldrb r0, [r3, #28]	@ 000b659e 187f
.org 0xb65a0
	strb r0, [r3, #29]	@ 000b65a0 5877
.org 0xb65a2
	str r4, [r3, #40]	@ 000b65a2 9c62
.org 0xb65a4
	ldr r0, [r7, #0]	@ 000b65a4 3868
.org 0xb65a6
	ldr r1, [r7, #4]	@ 000b65a6 7968
.org 0xb65a8
	str r0, [r3, #84]	@ 000b65a8 5865
.org 0xb65aa
	str r1, [r3, #88]	@ 000b65aa 9965
.org 0xb65ac
	strb r6, [r3, #16]	@ 000b65ac 1e74
.org 0xb65ae
	strb r5, [r3, #17]	@ 000b65ae 5d74
.org 0xb65b0
	adds r1, r4, #0	@ 000b65b0 211c
.org 0xb65b2
	adds r1, #204	@ 000b65b2 cc31
.org 0xb65b4
	ldrh r0, [r1, #0]	@ 000b65b4 0888
.org 0xb65b6
	adds r0, #1	@ 000b65b6 0130
.org 0xb65b8
	strh r0, [r1, #0]	@ 000b65b8 0880
.org 0xb65ba
	adds r0, r3, #0	@ 000b65ba 181c
.org 0xb65bc
	pop {r4, r5, r6, r7}	@ 000b65bc f0bc
.org 0xb65be
	pop {r1}	@ 000b65be 02bc
.org 0xb65c0
	bx r1	@ 000b65c0 0847

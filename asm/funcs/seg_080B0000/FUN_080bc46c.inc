@ FUN_080bc46c  entry 0x080bc46c  size 96
.thumb
.org 0xbc46c
FUN_080bc46c:
	push {r4, r5, r6, r7, lr}	@ 000bc46c f0b5
.org 0xbc46e
	adds r5, r0, #0	@ 000bc46e 051c
.org 0xbc470
	adds r7, r2, #0	@ 000bc470 171c
.org 0xbc472
	lsls r4, r1, #16	@ 000bc472 0c04
.org 0xbc474
	lsrs r6, r4, #16	@ 000bc474 260c
.org 0xbc476
	ldr r0, [pc, #84]	@ 000bc476 1548
.org 0xbc478
	ldr r0, [r0, #0]	@ 000bc478 0068
.org 0xbc47a
	bl 0x5500	@ 000bc47a 49f741f8
.org 0xbc47e
	adds r3, r0, #0	@ 000bc47e 031c
.org 0xbc480
	cmp r3, #0	@ 000bc480 002b
.org 0xbc482
	beq.n 0xbc4c6	@ 000bc482 20d0
.org 0xbc484
	adds r1, r3, #0	@ 000bc484 191c
.org 0xbc486
	adds r1, #37	@ 000bc486 2531
.org 0xbc488
	movs r2, #0	@ 000bc488 0022
.org 0xbc48a
	movs r0, #24	@ 000bc48a 1820
.org 0xbc48c
	strb r0, [r1, #0]	@ 000bc48c 0870
.org 0xbc48e
	ldr r0, [pc, #64]	@ 000bc48e 1048
.org 0xbc490
	movs r1, #115	@ 000bc490 7321
.org 0xbc492
	strb r1, [r3, #9]	@ 000bc492 5972
.org 0xbc494
	movs r1, #230	@ 000bc494 e621
.org 0xbc496
	lsls r1, r1, #1	@ 000bc496 4900
.org 0xbc498
	adds r0, r0, r1	@ 000bc498 4018
.org 0xbc49a
	ldr r0, [r0, #0]	@ 000bc49a 0068
.org 0xbc49c
	ldr r0, [r0, #0]	@ 000bc49c 0068
.org 0xbc49e
	str r0, [r3, #20]	@ 000bc49e 5861
.org 0xbc4a0
	movs r0, #0	@ 000bc4a0 0020
.org 0xbc4a2
	strh r2, [r3, #32]	@ 000bc4a2 1a84
.org 0xbc4a4
	adds r1, r3, #0	@ 000bc4a4 191c
.org 0xbc4a6
	adds r1, #34	@ 000bc4a6 2231
.org 0xbc4a8
	strb r0, [r1, #0]	@ 000bc4a8 0870
.org 0xbc4aa
	ldrb r1, [r3, #11]	@ 000bc4aa d97a
.org 0xbc4ac
	movs r0, #16	@ 000bc4ac 1020
.org 0xbc4ae
	orrs r0, r1	@ 000bc4ae 0843
.org 0xbc4b0
	strb r0, [r3, #11]	@ 000bc4b0 d872
.org 0xbc4b2
	ldrb r0, [r3, #28]	@ 000bc4b2 187f
.org 0xbc4b4
	strb r0, [r3, #29]	@ 000bc4b4 5877
.org 0xbc4b6
	ldr r0, [r5, #0]	@ 000bc4b6 2868
.org 0xbc4b8
	ldr r1, [r5, #4]	@ 000bc4b8 6968
.org 0xbc4ba
	str r0, [r3, #84]	@ 000bc4ba 5865
.org 0xbc4bc
	str r1, [r3, #88]	@ 000bc4bc 9965
.org 0xbc4be
	lsrs r0, r4, #24	@ 000bc4be 200e
.org 0xbc4c0
	strb r0, [r3, #16]	@ 000bc4c0 1874
.org 0xbc4c2
	strb r6, [r3, #17]	@ 000bc4c2 5e74
.org 0xbc4c4
	str r7, [r3, #40]	@ 000bc4c4 9f62
.org 0xbc4c6
	pop {r4, r5, r6, r7}	@ 000bc4c6 f0bc
.org 0xbc4c8
	pop {r0}	@ 000bc4c8 01bc
.org 0xbc4ca
	bx r0	@ 000bc4ca 0047

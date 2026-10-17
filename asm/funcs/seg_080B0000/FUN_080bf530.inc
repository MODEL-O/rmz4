@ FUN_080bf530  entry 0x080bf530  size 82
.thumb
.org 0xbf530
FUN_080bf530:
	push {r4, r5, r6, r7, lr}	@ 000bf530 f0b5
.org 0xbf532
	adds r6, r0, #0	@ 000bf532 061c
.org 0xbf534
	adds r7, r1, #0	@ 000bf534 0f1c
.org 0xbf536
	lsls r2, r2, #24	@ 000bf536 1206
.org 0xbf538
	lsrs r5, r2, #24	@ 000bf538 150e
.org 0xbf53a
	lsls r3, r3, #24	@ 000bf53a 1b06
.org 0xbf53c
	lsrs r4, r3, #24	@ 000bf53c 1c0e
.org 0xbf53e
	ldr r0, [pc, #68]	@ 000bf53e 1148
.org 0xbf540
	ldr r0, [r0, #0]	@ 000bf540 0068
.org 0xbf542
	bl 0x5500	@ 000bf542 45f7ddff
.org 0xbf546
	adds r3, r0, #0	@ 000bf546 031c
.org 0xbf548
	cmp r3, #0	@ 000bf548 002b
.org 0xbf54a
	beq.n 0xbf57a	@ 000bf54a 16d0
.org 0xbf54c
	adds r1, r3, #0	@ 000bf54c 191c
.org 0xbf54e
	adds r1, #37	@ 000bf54e 2531
.org 0xbf550
	movs r2, #0	@ 000bf550 0022
.org 0xbf552
	movs r0, #8	@ 000bf552 0820
.org 0xbf554
	strb r0, [r1, #0]	@ 000bf554 0870
.org 0xbf556
	ldr r1, [pc, #48]	@ 000bf556 0c49
.org 0xbf558
	movs r0, #7	@ 000bf558 0720
.org 0xbf55a
	strb r0, [r3, #9]	@ 000bf55a 5872
.org 0xbf55c
	ldr r0, [r1, #28]	@ 000bf55c c869
.org 0xbf55e
	ldr r0, [r0, #0]	@ 000bf55e 0068
.org 0xbf560
	str r0, [r3, #20]	@ 000bf560 5861
.org 0xbf562
	movs r0, #0	@ 000bf562 0020
.org 0xbf564
	strh r2, [r3, #32]	@ 000bf564 1a84
.org 0xbf566
	adds r1, r3, #0	@ 000bf566 191c
.org 0xbf568
	adds r1, #34	@ 000bf568 2231
.org 0xbf56a
	strb r0, [r1, #0]	@ 000bf56a 0870
.org 0xbf56c
	str r6, [r3, #40]	@ 000bf56c 9e62
.org 0xbf56e
	ldr r0, [r7, #0]	@ 000bf56e 3868
.org 0xbf570
	ldr r1, [r7, #4]	@ 000bf570 7968
.org 0xbf572
	str r0, [r3, #84]	@ 000bf572 5865
.org 0xbf574
	str r1, [r3, #88]	@ 000bf574 9965
.org 0xbf576
	strb r5, [r3, #16]	@ 000bf576 1d74
.org 0xbf578
	strb r4, [r3, #17]	@ 000bf578 5c74
.org 0xbf57a
	adds r0, r3, #0	@ 000bf57a 181c
.org 0xbf57c
	pop {r4, r5, r6, r7}	@ 000bf57c f0bc
.org 0xbf57e
	pop {r1}	@ 000bf57e 02bc
.org 0xbf580
	bx r1	@ 000bf580 0847

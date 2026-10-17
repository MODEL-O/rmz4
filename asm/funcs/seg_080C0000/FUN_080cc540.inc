@ FUN_080cc540  entry 0x080cc540  size 90
.thumb
.org 0xcc540
FUN_080cc540:
	push {r4, lr}	@ 000cc540 10b5
.org 0xcc542
	adds r4, r0, #0	@ 000cc542 041c
.org 0xcc544
	bl 0x1cff0	@ 000cc544 50f754fd
.org 0xcc548
	ldrb r1, [r4, #13]	@ 000cc548 617b
.org 0xcc54a
	cmp r1, #0	@ 000cc54a 0029
.org 0xcc54c
	bne.n 0xcc562	@ 000cc54c 09d1
.org 0xcc54e
	ldrb r0, [r4, #18]	@ 000cc54e a07c
.org 0xcc550
	subs r0, #1	@ 000cc550 0138
.org 0xcc552
	strb r0, [r4, #18]	@ 000cc552 a074
.org 0xcc554
	lsls r0, r0, #24	@ 000cc554 0006
.org 0xcc556
	lsrs r0, r0, #24	@ 000cc556 000e
.org 0xcc558
	cmp r0, #255	@ 000cc558 ff28
.org 0xcc55a
	bne.n 0xcc594	@ 000cc55a 1bd1
.org 0xcc55c
	adds r0, r1, #1	@ 000cc55c 481c
.org 0xcc55e
	strb r0, [r4, #13]	@ 000cc55e 6073
.org 0xcc560
	b.n 0xcc594	@ 000cc560 18e0
.org 0xcc562
	ldr r0, [r4, #84]	@ 000cc562 606d
.org 0xcc564
	ldr r1, [r4, #92]	@ 000cc564 e16d
.org 0xcc566
	adds r0, r0, r1	@ 000cc566 4018
.org 0xcc568
	str r0, [r4, #84]	@ 000cc568 6065
.org 0xcc56a
	ldr r1, [r4, #88]	@ 000cc56a a16d
.org 0xcc56c
	ldr r2, [r4, #96]	@ 000cc56c 226e
.org 0xcc56e
	adds r1, r1, r2	@ 000cc56e 8918
.org 0xcc570
	str r1, [r4, #88]	@ 000cc570 a165
.org 0xcc572
	bl 0x7c7c	@ 000cc572 3bf783fb
.org 0xcc576
	lsls r0, r0, #16	@ 000cc576 0004
.org 0xcc578
	cmp r0, #0	@ 000cc578 0028
.org 0xcc57a
	beq.n 0xcc594	@ 000cc57a 0bd0
.org 0xcc57c
	ldr r1, [pc, #28]	@ 000cc57c 0749
.org 0xcc57e
	ldrb r0, [r4, #9]	@ 000cc57e 607a
.org 0xcc580
	lsls r0, r0, #2	@ 000cc580 8000
.org 0xcc582
	adds r0, r0, r1	@ 000cc582 4018
.org 0xcc584
	movs r1, #2	@ 000cc584 0221
.org 0xcc586
	str r1, [r4, #12]	@ 000cc586 e160
.org 0xcc588
	ldr r0, [r0, #0]	@ 000cc588 0068
.org 0xcc58a
	ldr r0, [r0, #8]	@ 000cc58a 8068
.org 0xcc58c
	str r0, [r4, #20]	@ 000cc58c 6061
.org 0xcc58e
	adds r0, r4, #0	@ 000cc58e 201c
.org 0xcc590
	bl 0xcc0bc	@ 000cc590 fff794fd
.org 0xcc594
	pop {r4}	@ 000cc594 10bc
.org 0xcc596
	pop {r0}	@ 000cc596 01bc
.org 0xcc598
	bx r0	@ 000cc598 0047

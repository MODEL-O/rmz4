@ FUN_0803851c  entry 0x0803851c  size 122
.thumb
.org 0x3851c
FUN_0803851c:
	push {r4, r5, r6, lr}	@ 0003851c 70b5
.org 0x3851e
	adds r4, r0, #0	@ 0003851e 041c
.org 0x38520
	ldr r1, [pc, #52]	@ 00038520 0d49
.org 0x38522
	movs r2, #186	@ 00038522 ba22
.org 0x38524
	lsls r2, r2, #1	@ 00038524 5200
.org 0x38526
	adds r0, r4, r2	@ 00038526 a018
.org 0x38528
	ldrb r0, [r0, #0]	@ 00038528 0078
.org 0x3852a
	lsls r0, r0, #3	@ 0003852a c000
.org 0x3852c
	adds r0, r0, r1	@ 0003852c 4018
.org 0x3852e
	ldrh r0, [r0, #6]	@ 0003852e c088
.org 0x38530
	lsls r0, r0, #16	@ 00038530 0004
.org 0x38532
	asrs r0, r0, #17	@ 00038532 4014
.org 0x38534
	ldr r1, [r4, #88]	@ 00038534 a16d
.org 0x38536
	subs r5, r1, r0	@ 00038536 0d1a
.org 0x38538
	ldr r2, [pc, #32]	@ 00038538 084a
.org 0x3853a
	movs r1, #232	@ 0003853a e821
.org 0x3853c
	lsls r1, r1, #1	@ 0003853c 4900
.org 0x3853e
	adds r0, r2, r1	@ 0003853e 5018
.org 0x38540
	ldrh r1, [r0, #0]	@ 00038540 0188
.org 0x38542
	movs r0, #127	@ 00038542 7f20
.org 0x38544
	ands r0, r1	@ 00038544 0840
.org 0x38546
	adds r6, r2, #0	@ 00038546 161c
.org 0x38548
	cmp r0, #2	@ 00038548 0228
.org 0x3854a
	bne.n 0x38560	@ 0003854a 09d1
.org 0x3854c
	adds r0, r4, #0	@ 0003854c 201c
.org 0x3854e
	adds r0, #84	@ 0003854e 5430
.org 0x38550
	bl 0x7b84	@ 00038550 cff718fb
.org 0x38554
	b.n 0x38566	@ 00038554 07e0
.org 0x38556
	.byte 0x00	@ 00038556 data
.org 0x38557
	.byte 0x00	@ 00038557 data
.org 0x38558
	.byte 0x6c,0x33,0x85,0x08	@ 00038558 data
.org 0x3855c
	.byte 0xb0,0x0a,0x00,0x02	@ 0003855c data
.org 0x38560
	ldr r2, [pc, #48]	@ 00038560 0c4a
.org 0x38562
	adds r0, r6, r2	@ 00038562 b018
.org 0x38564
	ldr r0, [r0, #0]	@ 00038564 0068
.org 0x38566
	cmp r5, r0	@ 00038566 8542
.org 0x38568
	bgt.n 0x385d0	@ 00038568 32dc
.org 0x3856a
	movs r1, #232	@ 0003856a e821
.org 0x3856c
	lsls r1, r1, #1	@ 0003856c 4900
.org 0x3856e
	adds r0, r6, r1	@ 0003856e 7018
.org 0x38570
	ldrh r1, [r0, #0]	@ 00038570 0188
.org 0x38572
	movs r0, #127	@ 00038572 7f20
.org 0x38574
	ands r0, r1	@ 00038574 0840
.org 0x38576
	cmp r0, #9	@ 00038576 0928
.org 0x38578
	bne.n 0x385d4	@ 00038578 2cd1
.org 0x3857a
	adds r0, r4, #0	@ 0003857a 201c
.org 0x3857c
	adds r0, #84	@ 0003857c 5430
.org 0x3857e
	bl 0x14948	@ 0003857e dcf7e3f9
.org 0x38582
	lsls r0, r0, #24	@ 00038582 0006
.org 0x38584
	lsrs r0, r0, #24	@ 00038584 000e
.org 0x38586
	cmp r0, #4	@ 00038586 0428
.org 0x38588
	bhi.n 0x385d4	@ 00038588 24d8
.org 0x3858a
	lsls r0, r0, #2	@ 0003858a 8000
.org 0x3858c
	ldr r1, [pc, #8]	@ 0003858c 0249
.org 0x3858e
	adds r0, r0, r1	@ 0003858e 4018
.org 0x38590
	ldr r0, [r0, #0]	@ 00038590 0068
.org 0x38592
	mov pc, r0	@ 00038592 8746
.org 0x38594
	.byte 0x0c,0xc0,0x02,0x00	@ 00038594 data

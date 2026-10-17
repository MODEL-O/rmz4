@ FUN_080cb55c  entry 0x080cb55c  size 64
.thumb
.org 0xcb55c
FUN_080cb55c:
	push {lr}	@ 000cb55c 00b5
.org 0xcb55e
	adds r2, r0, #0	@ 000cb55e 021c
.org 0xcb560
	adds r0, #140	@ 000cb560 8c30
.org 0xcb562
	ldr r0, [r0, #0]	@ 000cb562 0068
.org 0xcb564
	movs r1, #128	@ 000cb564 8021
.org 0xcb566
	lsls r1, r1, #2	@ 000cb566 8900
.org 0xcb568
	ands r0, r1	@ 000cb568 0840
.org 0xcb56a
	cmp r0, #0	@ 000cb56a 0028
.org 0xcb56c
	beq.n 0xcb58c	@ 000cb56c 0ed0
.org 0xcb56e
	ldr r1, [pc, #24]	@ 000cb56e 0649
.org 0xcb570
	ldrb r0, [r2, #9]	@ 000cb570 507a
.org 0xcb572
	lsls r0, r0, #2	@ 000cb572 8000
.org 0xcb574
	adds r0, r0, r1	@ 000cb574 4018
.org 0xcb576
	movs r1, #2	@ 000cb576 0221
.org 0xcb578
	str r1, [r2, #12]	@ 000cb578 d160
.org 0xcb57a
	ldr r0, [r0, #0]	@ 000cb57a 0068
.org 0xcb57c
	ldr r0, [r0, #8]	@ 000cb57c 8068
.org 0xcb57e
	str r0, [r2, #20]	@ 000cb57e 5061
.org 0xcb580
	adds r0, r2, #0	@ 000cb580 101c
.org 0xcb582
	bl 0xcb5a4	@ 000cb582 00f00ff8
.org 0xcb586
	b.n 0xcb59c	@ 000cb586 09e0
.org 0xcb588
	.byte 0xf4,0x49,0x86,0x08	@ 000cb588 data
.org 0xcb58c
	ldr r0, [pc, #16]	@ 000cb58c 0448
.org 0xcb58e
	ldrb r1, [r2, #16]	@ 000cb58e 117c
.org 0xcb590
	lsls r1, r1, #2	@ 000cb590 8900
.org 0xcb592
	adds r1, r1, r0	@ 000cb592 0918
.org 0xcb594
	ldr r1, [r1, #0]	@ 000cb594 0968
.org 0xcb596
	adds r0, r2, #0	@ 000cb596 101c
.org 0xcb598
	bl 0x128f80	@ 000cb598 5df0f2fc

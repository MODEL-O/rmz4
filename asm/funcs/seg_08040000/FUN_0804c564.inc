@ FUN_0804c564  entry 0x0804c564  size 40
.thumb
.org 0x4c564
FUN_0804c564:
	push {lr}	@ 0004c564 00b5
.org 0x4c566
	bl 0x7c7c	@ 0004c566 bbf789fb
.org 0x4c56a
	lsls r0, r0, #16	@ 0004c56a 0004
.org 0x4c56c
	lsrs r0, r0, #16	@ 0004c56c 000c
.org 0x4c56e
	adds r1, r0, #0	@ 0004c56e 011c
.org 0x4c570
	movs r0, #15	@ 0004c570 0f20
.org 0x4c572
	ands r0, r1	@ 0004c572 0840
.org 0x4c574
	cmp r0, #15	@ 0004c574 0f28
.org 0x4c576
	beq.n 0x4c586	@ 0004c576 06d0
.org 0x4c578
	movs r0, #128	@ 0004c578 8020
.org 0x4c57a
	lsls r0, r0, #8	@ 0004c57a 0002
.org 0x4c57c
	ands r0, r1	@ 0004c57c 0840
.org 0x4c57e
	cmp r0, #0	@ 0004c57e 0028
.org 0x4c580
	bne.n 0x4c586	@ 0004c580 01d1
.org 0x4c582
	adds r0, r1, #0	@ 0004c582 081c
.org 0x4c584
	b.n 0x4c588	@ 0004c584 00e0
.org 0x4c586
	movs r0, #0	@ 0004c586 0020
.org 0x4c588
	pop {r1}	@ 0004c588 02bc
.org 0x4c58a
	bx r1	@ 0004c58a 0847

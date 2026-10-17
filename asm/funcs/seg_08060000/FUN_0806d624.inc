@ FUN_0806d624  entry 0x0806d624  size 62
.thumb
.org 0x6d624
FUN_0806d624:
	push {r4, lr}	@ 0006d624 10b5
.org 0x6d626
	adds r4, r0, #0	@ 0006d626 041c
.org 0x6d628
	ldrb r0, [r4, #14]	@ 0006d628 a07b
.org 0x6d62a
	cmp r0, #0	@ 0006d62a 0028
.org 0x6d62c
	bne.n 0x6d632	@ 0006d62c 01d1
.org 0x6d62e
	adds r0, #1	@ 0006d62e 0130
.org 0x6d630
	strb r0, [r4, #14]	@ 0006d630 a073
.org 0x6d632
	adds r0, r4, #0	@ 0006d632 201c
.org 0x6d634
	bl 0x1cff0	@ 0006d634 aff7dcfc
.org 0x6d638
	ldr r0, [pc, #40]	@ 0006d638 0a48
.org 0x6d63a
	ldrh r1, [r0, #8]	@ 0006d63a 0189
.org 0x6d63c
	movs r0, #8	@ 0006d63c 0820
.org 0x6d63e
	ands r0, r1	@ 0006d63e 0840
.org 0x6d640
	lsls r0, r0, #16	@ 0006d640 0004
.org 0x6d642
	lsrs r1, r0, #16	@ 0006d642 010c
.org 0x6d644
	cmp r1, #0	@ 0006d644 0029
.org 0x6d646
	bne.n 0x6d65c	@ 0006d646 09d1
.org 0x6d648
	ldrb r0, [r4, #18]	@ 0006d648 a07c
.org 0x6d64a
	subs r0, #1	@ 0006d64a 0138
.org 0x6d64c
	strb r0, [r4, #18]	@ 0006d64c a074
.org 0x6d64e
	lsls r0, r0, #24	@ 0006d64e 0006
.org 0x6d650
	lsrs r0, r0, #24	@ 0006d650 000e
.org 0x6d652
	cmp r0, #255	@ 0006d652 ff28
.org 0x6d654
	bne.n 0x6d65c	@ 0006d654 02d1
.org 0x6d656
	movs r0, #3	@ 0006d656 0320
.org 0x6d658
	strb r0, [r4, #13]	@ 0006d658 6073
.org 0x6d65a
	strb r1, [r4, #14]	@ 0006d65a a173
.org 0x6d65c
	pop {r4}	@ 0006d65c 10bc
.org 0x6d65e
	pop {r0}	@ 0006d65e 01bc
.org 0x6d660
	bx r0	@ 0006d660 0047

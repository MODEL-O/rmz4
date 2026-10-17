@ FUN_08104704  entry 0x08104704  size 52
.thumb
.org 0x104704
FUN_08104704:
	push {r4, lr}	@ 00104704 10b5
.org 0x104706
	adds r4, r0, #0	@ 00104706 041c
.org 0x104708
	ldr r0, [r4, #88]	@ 00104708 a06d
.org 0x10470a
	ldr r1, [r4, #96]	@ 0010470a 216e
.org 0x10470c
	adds r0, r0, r1	@ 0010470c 4018
.org 0x10470e
	str r0, [r4, #88]	@ 0010470e a065
.org 0x104710
	adds r0, r4, #0	@ 00104710 201c
.org 0x104712
	bl 0x1cff0	@ 00104712 18f76dfc
.org 0x104716
	ldr r1, [pc, #32]	@ 00104716 0849
.org 0x104718
	ldr r0, [r4, #88]	@ 00104718 a06d
.org 0x10471a
	movs r2, #160	@ 0010471a a022
.org 0x10471c
	lsls r2, r2, #7	@ 0010471c d201
.org 0x10471e
	adds r0, r0, r2	@ 0010471e 8018
.org 0x104720
	ldr r1, [r1, #60]	@ 00104720 c96b
.org 0x104722
	subs r1, r1, r0	@ 00104722 091a
.org 0x104724
	movs r0, #128	@ 00104724 8020
.org 0x104726
	lsls r0, r0, #6	@ 00104726 8001
.org 0x104728
	cmp r1, r0	@ 00104728 8142
.org 0x10472a
	ble.n 0x104732	@ 0010472a 02dd
.org 0x10472c
	adds r0, r4, #0	@ 0010472c 201c
.org 0x10472e
	bl 0xe954c	@ 0010472e e4f70dff
.org 0x104732
	pop {r4}	@ 00104732 10bc
.org 0x104734
	pop {r0}	@ 00104734 01bc
.org 0x104736
	bx r0	@ 00104736 0047

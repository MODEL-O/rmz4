@ FUN_08104624  entry 0x08104624  size 52
.thumb
.org 0x104624
FUN_08104624:
	push {r4, lr}	@ 00104624 10b5
.org 0x104626
	adds r4, r0, #0	@ 00104626 041c
.org 0x104628
	ldr r0, [r4, #88]	@ 00104628 a06d
.org 0x10462a
	ldr r1, [r4, #96]	@ 0010462a 216e
.org 0x10462c
	adds r0, r0, r1	@ 0010462c 4018
.org 0x10462e
	str r0, [r4, #88]	@ 0010462e a065
.org 0x104630
	adds r0, r4, #0	@ 00104630 201c
.org 0x104632
	bl 0x1cff0	@ 00104632 18f7ddfc
.org 0x104636
	ldr r1, [pc, #32]	@ 00104636 0849
.org 0x104638
	ldr r0, [r4, #88]	@ 00104638 a06d
.org 0x10463a
	movs r2, #160	@ 0010463a a022
.org 0x10463c
	lsls r2, r2, #7	@ 0010463c d201
.org 0x10463e
	adds r0, r0, r2	@ 0010463e 8018
.org 0x104640
	ldr r1, [r1, #60]	@ 00104640 c96b
.org 0x104642
	subs r1, r1, r0	@ 00104642 091a
.org 0x104644
	movs r0, #128	@ 00104644 8020
.org 0x104646
	lsls r0, r0, #6	@ 00104646 8001
.org 0x104648
	cmp r1, r0	@ 00104648 8142
.org 0x10464a
	ble.n 0x104652	@ 0010464a 02dd
.org 0x10464c
	adds r0, r4, #0	@ 0010464c 201c
.org 0x10464e
	bl 0xe954c	@ 0010464e e4f77dff
.org 0x104652
	pop {r4}	@ 00104652 10bc
.org 0x104654
	pop {r0}	@ 00104654 01bc
.org 0x104656
	bx r0	@ 00104656 0047

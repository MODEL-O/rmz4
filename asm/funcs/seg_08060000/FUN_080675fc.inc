@ FUN_080675fc  entry 0x080675fc  size 62
.thumb
.org 0x675fc
FUN_080675fc:
	push {r4, lr}	@ 000675fc 10b5
.org 0x675fe
	adds r4, r0, #0	@ 000675fe 041c
.org 0x67600
	ldrb r0, [r4, #14]	@ 00067600 a07b
.org 0x67602
	cmp r0, #0	@ 00067602 0028
.org 0x67604
	bne.n 0x6761e	@ 00067604 0bd1
.org 0x67606
	ldr r1, [pc, #52]	@ 00067606 0d49
.org 0x67608
	adds r0, r4, #0	@ 00067608 201c
.org 0x6760a
	bl 0x1cf00	@ 0006760a b5f779fc
.org 0x6760e
	adds r0, r4, #0	@ 0006760e 201c
.org 0x67610
	adds r0, #116	@ 00067610 7430
.org 0x67612
	ldr r1, [pc, #44]	@ 00067612 0b49
.org 0x67614
	bl 0x5784	@ 00067614 9ef7b6f8
.org 0x67618
	ldrb r0, [r4, #14]	@ 00067618 a07b
.org 0x6761a
	adds r0, #1	@ 0006761a 0130
.org 0x6761c
	strb r0, [r4, #14]	@ 0006761c a073
.org 0x6761e
	adds r0, r4, #0	@ 0006761e 201c
.org 0x67620
	bl 0x1cff0	@ 00067620 b5f7e6fc
.org 0x67624
	adds r0, r4, #0	@ 00067624 201c
.org 0x67626
	adds r0, #115	@ 00067626 7330
.org 0x67628
	ldrb r1, [r0, #0]	@ 00067628 0178
.org 0x6762a
	cmp r1, #3	@ 0006762a 0329
.org 0x6762c
	bne.n 0x67634	@ 0006762c 02d1
.org 0x6762e
	movs r0, #0	@ 0006762e 0020
.org 0x67630
	strb r1, [r4, #13]	@ 00067630 6173
.org 0x67632
	strb r0, [r4, #14]	@ 00067632 a073
.org 0x67634
	pop {r4}	@ 00067634 10bc
.org 0x67636
	pop {r0}	@ 00067636 01bc
.org 0x67638
	bx r0	@ 00067638 0047

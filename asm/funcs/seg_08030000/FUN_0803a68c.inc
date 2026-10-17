@ FUN_0803a68c  entry 0x0803a68c  size 38
.thumb
.org 0x3a68c
FUN_0803a68c:
	push {lr}	@ 0003a68c 00b5
.org 0x3a68e
	adds r2, r0, #0	@ 0003a68e 021c
.org 0x3a690
	adds r2, #180	@ 0003a690 b432
.org 0x3a692
	adds r0, #243	@ 0003a692 f330
.org 0x3a694
	ldrb r1, [r0, #0]	@ 0003a694 0178
.org 0x3a696
	cmp r1, #2	@ 0003a696 0229
.org 0x3a698
	beq.n 0x3a6a8	@ 0003a698 06d0
.org 0x3a69a
	cmp r1, #7	@ 0003a69a 0729
.org 0x3a69c
	beq.n 0x3a6a8	@ 0003a69c 04d0
.org 0x3a69e
	ldrb r0, [r2, #19]	@ 0003a69e d07c
.org 0x3a6a0
	cmp r0, #2	@ 0003a6a0 0228
.org 0x3a6a2
	bne.n 0x3a6ac	@ 0003a6a2 03d1
.org 0x3a6a4
	cmp r1, #1	@ 0003a6a4 0129
.org 0x3a6a6
	bls.n 0x3a6ac	@ 0003a6a6 01d9
.org 0x3a6a8
	movs r0, #1	@ 0003a6a8 0120
.org 0x3a6aa
	b.n 0x3a6ae	@ 0003a6aa 00e0
.org 0x3a6ac
	movs r0, #0	@ 0003a6ac 0020
.org 0x3a6ae
	pop {r1}	@ 0003a6ae 02bc
.org 0x3a6b0
	bx r1	@ 0003a6b0 0847

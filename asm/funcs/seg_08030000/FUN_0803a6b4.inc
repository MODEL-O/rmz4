@ FUN_0803a6b4  entry 0x0803a6b4  size 38
.thumb
.org 0x3a6b4
FUN_0803a6b4:
	push {lr}	@ 0003a6b4 00b5
.org 0x3a6b6
	adds r2, r0, #0	@ 0003a6b6 021c
.org 0x3a6b8
	adds r2, #180	@ 0003a6b8 b432
.org 0x3a6ba
	adds r0, #243	@ 0003a6ba f330
.org 0x3a6bc
	ldrb r1, [r0, #0]	@ 0003a6bc 0178
.org 0x3a6be
	cmp r1, #4	@ 0003a6be 0429
.org 0x3a6c0
	beq.n 0x3a6d0	@ 0003a6c0 06d0
.org 0x3a6c2
	cmp r1, #7	@ 0003a6c2 0729
.org 0x3a6c4
	beq.n 0x3a6d0	@ 0003a6c4 04d0
.org 0x3a6c6
	ldrb r0, [r2, #19]	@ 0003a6c6 d07c
.org 0x3a6c8
	cmp r0, #2	@ 0003a6c8 0228
.org 0x3a6ca
	bne.n 0x3a6d4	@ 0003a6ca 03d1
.org 0x3a6cc
	cmp r1, #3	@ 0003a6cc 0329
.org 0x3a6ce
	bls.n 0x3a6d4	@ 0003a6ce 01d9
.org 0x3a6d0
	movs r0, #1	@ 0003a6d0 0120
.org 0x3a6d2
	b.n 0x3a6d6	@ 0003a6d2 00e0
.org 0x3a6d4
	movs r0, #0	@ 0003a6d4 0020
.org 0x3a6d6
	pop {r1}	@ 0003a6d6 02bc
.org 0x3a6d8
	bx r1	@ 0003a6d8 0847

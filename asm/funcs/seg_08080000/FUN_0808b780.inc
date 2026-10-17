@ FUN_0808b780  entry 0x0808b780  size 40
.thumb
.org 0x8b780
FUN_0808b780:
	push {r4, lr}	@ 0008b780 10b5
.org 0x8b782
	adds r4, r0, #0	@ 0008b782 041c
.org 0x8b784
	ldrb r0, [r4, #15]	@ 0008b784 e07b
.org 0x8b786
	cmp r0, #0	@ 0008b786 0028
.org 0x8b788
	bne.n 0x8b78e	@ 0008b788 01d1
.org 0x8b78a
	adds r0, #1	@ 0008b78a 0130
.org 0x8b78c
	strb r0, [r4, #15]	@ 0008b78c e073
.org 0x8b78e
	adds r0, r4, #0	@ 0008b78e 201c
.org 0x8b790
	bl 0x8bcb8	@ 0008b790 00f092fa
.org 0x8b794
	cmp r0, #1	@ 0008b794 0128
.org 0x8b796
	bne.n 0x8b7a2	@ 0008b796 04d1
.org 0x8b798
	movs r1, #0	@ 0008b798 0021
.org 0x8b79a
	movs r0, #2	@ 0008b79a 0220
.org 0x8b79c
	strb r0, [r4, #13]	@ 0008b79c 6073
.org 0x8b79e
	strb r1, [r4, #14]	@ 0008b79e a173
.org 0x8b7a0
	strb r1, [r4, #15]	@ 0008b7a0 e173
.org 0x8b7a2
	pop {r4}	@ 0008b7a2 10bc
.org 0x8b7a4
	pop {r0}	@ 0008b7a4 01bc
.org 0x8b7a6
	bx r0	@ 0008b7a6 0047

@ FUN_0808d628  entry 0x0808d628  size 74
.thumb
.org 0x8d628
FUN_0808d628:
	push {r4, r5, r6, r7, lr}	@ 0008d628 f0b5
.org 0x8d62a
	adds r4, r0, #0	@ 0008d62a 041c
.org 0x8d62c
	adds r6, r4, #0	@ 0008d62c 261c
.org 0x8d62e
	adds r6, #116	@ 0008d62e 7436
.org 0x8d630
	ldr r7, [pc, #52]	@ 0008d630 0d4f
.org 0x8d632
	adds r0, r6, #0	@ 0008d632 301c
.org 0x8d634
	adds r1, r7, #0	@ 0008d634 391c
.org 0x8d636
	bl 0x5784	@ 0008d636 78f7a5f8
.org 0x8d63a
	adds r5, r4, #0	@ 0008d63a 251c
.org 0x8d63c
	adds r5, #188	@ 0008d63c bc35
.org 0x8d63e
	ldr r0, [r5, #0]	@ 0008d63e 2868
.org 0x8d640
	bl 0x2b3e4	@ 0008d640 9df7d0fe
.org 0x8d644
	cmp r0, #0	@ 0008d644 0028
.org 0x8d646
	beq.n 0x8d670	@ 0008d646 13d0
.org 0x8d648
	adds r1, r7, #0	@ 0008d648 391c
.org 0x8d64a
	subs r1, #192	@ 0008d64a c039
.org 0x8d64c
	adds r0, r6, #0	@ 0008d64c 301c
.org 0x8d64e
	bl 0x5784	@ 0008d64e 78f799f8
.org 0x8d652
	movs r1, #0	@ 0008d652 0021
.org 0x8d654
	str r1, [r5, #0]	@ 0008d654 2960
.org 0x8d656
	adds r0, r4, #0	@ 0008d656 201c
.org 0x8d658
	adds r0, #193	@ 0008d658 c130
.org 0x8d65a
	ldrb r0, [r0, #0]	@ 0008d65a 0078
.org 0x8d65c
	cmp r0, #1	@ 0008d65c 0128
.org 0x8d65e
	bne.n 0x8d66c	@ 0008d65e 05d1
.org 0x8d660
	adds r0, r4, #0	@ 0008d660 201c
.org 0x8d662
	bl 0x8db14	@ 0008d662 00f057fa
.org 0x8d666
	b.n 0x8d670	@ 0008d666 03e0
.org 0x8d668
	.byte 0xfc,0xf9,0x85,0x08	@ 0008d668 data
.org 0x8d66c
	strb r1, [r4, #13]	@ 0008d66c 6173
.org 0x8d66e
	strb r1, [r4, #14]	@ 0008d66e a173
.org 0x8d670
	pop {r4, r5, r6, r7}	@ 0008d670 f0bc

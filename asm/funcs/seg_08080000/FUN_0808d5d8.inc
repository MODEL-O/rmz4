@ FUN_0808d5d8  entry 0x0808d5d8  size 74
.thumb
.org 0x8d5d8
FUN_0808d5d8:
	push {r4, r5, r6, r7, lr}	@ 0008d5d8 f0b5
.org 0x8d5da
	adds r4, r0, #0	@ 0008d5da 041c
.org 0x8d5dc
	adds r6, r4, #0	@ 0008d5dc 261c
.org 0x8d5de
	adds r6, #116	@ 0008d5de 7436
.org 0x8d5e0
	ldr r7, [pc, #52]	@ 0008d5e0 0d4f
.org 0x8d5e2
	adds r0, r6, #0	@ 0008d5e2 301c
.org 0x8d5e4
	adds r1, r7, #0	@ 0008d5e4 391c
.org 0x8d5e6
	bl 0x5784	@ 0008d5e6 78f7cdf8
.org 0x8d5ea
	adds r5, r4, #0	@ 0008d5ea 251c
.org 0x8d5ec
	adds r5, #188	@ 0008d5ec bc35
.org 0x8d5ee
	ldr r0, [r5, #0]	@ 0008d5ee 2868
.org 0x8d5f0
	bl 0x2b3e4	@ 0008d5f0 9df7f8fe
.org 0x8d5f4
	cmp r0, #0	@ 0008d5f4 0028
.org 0x8d5f6
	beq.n 0x8d620	@ 0008d5f6 13d0
.org 0x8d5f8
	adds r1, r7, #0	@ 0008d5f8 391c
.org 0x8d5fa
	subs r1, #192	@ 0008d5fa c039
.org 0x8d5fc
	adds r0, r6, #0	@ 0008d5fc 301c
.org 0x8d5fe
	bl 0x5784	@ 0008d5fe 78f7c1f8
.org 0x8d602
	movs r1, #0	@ 0008d602 0021
.org 0x8d604
	str r1, [r5, #0]	@ 0008d604 2960
.org 0x8d606
	adds r0, r4, #0	@ 0008d606 201c
.org 0x8d608
	adds r0, #193	@ 0008d608 c130
.org 0x8d60a
	ldrb r0, [r0, #0]	@ 0008d60a 0078
.org 0x8d60c
	cmp r0, #1	@ 0008d60c 0128
.org 0x8d60e
	bne.n 0x8d61c	@ 0008d60e 05d1
.org 0x8d610
	adds r0, r4, #0	@ 0008d610 201c
.org 0x8d612
	bl 0x8db14	@ 0008d612 00f07ffa
.org 0x8d616
	b.n 0x8d620	@ 0008d616 03e0
.org 0x8d618
	.byte 0xfc,0xf9,0x85,0x08	@ 0008d618 data
.org 0x8d61c
	strb r1, [r4, #13]	@ 0008d61c 6173
.org 0x8d61e
	strb r1, [r4, #14]	@ 0008d61e a173
.org 0x8d620
	pop {r4, r5, r6, r7}	@ 0008d620 f0bc

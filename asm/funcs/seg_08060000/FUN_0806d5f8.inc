@ FUN_0806d5f8  entry 0x0806d5f8  size 40
.thumb
.org 0x6d5f8
FUN_0806d5f8:
	push {lr}	@ 0006d5f8 00b5
.org 0x6d5fa
	adds r2, r0, #0	@ 0006d5fa 021c
.org 0x6d5fc
	ldrb r0, [r2, #14]	@ 0006d5fc 907b
.org 0x6d5fe
	cmp r0, #0	@ 0006d5fe 0028
.org 0x6d600
	bne.n 0x6d606	@ 0006d600 01d1
.org 0x6d602
	adds r0, #1	@ 0006d602 0130
.org 0x6d604
	strb r0, [r2, #14]	@ 0006d604 9073
.org 0x6d606
	ldr r0, [pc, #24]	@ 0006d606 0648
.org 0x6d608
	ldrb r0, [r0, #18]	@ 0006d608 807c
.org 0x6d60a
	movs r1, #1	@ 0006d60a 0121
.org 0x6d60c
	ands r1, r0	@ 0006d60c 0140
.org 0x6d60e
	cmp r1, #0	@ 0006d60e 0029
.org 0x6d610
	bne.n 0x6d61c	@ 0006d610 04d1
.org 0x6d612
	movs r0, #2	@ 0006d612 0220
.org 0x6d614
	strb r0, [r2, #13]	@ 0006d614 5073
.org 0x6d616
	strb r1, [r2, #14]	@ 0006d616 9173
.org 0x6d618
	movs r0, #16	@ 0006d618 1020
.org 0x6d61a
	strb r0, [r2, #18]	@ 0006d61a 9074
.org 0x6d61c
	pop {r0}	@ 0006d61c 01bc
.org 0x6d61e
	bx r0	@ 0006d61e 0047

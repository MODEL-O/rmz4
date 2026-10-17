@ FUN_080ffadc  entry 0x080ffadc  size 40
.thumb
.org 0xffadc
FUN_080ffadc:
	push {r3, r4, r5, r6, r7, lr}	@ 000ffadc f8b5
.org 0xffade
	lsrs r6, r0, #2	@ 000ffade 8608
.org 0xffae0
	ldrb r0, [r4, #18]	@ 000ffae0 a07c
.org 0xffae2
	adds r1, r0, #1	@ 000ffae2 411c
.org 0xffae4
	strb r1, [r4, #18]	@ 000ffae4 a174
.org 0xffae6
	lsls r0, r0, #24	@ 000ffae6 0006
.org 0xffae8
	lsrs r0, r0, #24	@ 000ffae8 000e
.org 0xffaea
	cmp r0, #120	@ 000ffaea 7828
.org 0xffaec
	bls.n 0xffaf8	@ 000ffaec 04d9
.org 0xffaee
	ldr r0, [pc, #20]	@ 000ffaee 0548
.org 0xffaf0
	bl 0x2b10	@ 000ffaf0 03f70ef8
.org 0xffaf4
	movs r0, #0	@ 000ffaf4 0020
.org 0xffaf6
	strb r0, [r4, #18]	@ 000ffaf6 a074
.org 0xffaf8
	adds r0, r4, #0	@ 000ffaf8 201c
.org 0xffafa
	bl 0x1cff0	@ 000ffafa 1df779fa
.org 0xffafe
	pop {r4, r5}	@ 000ffafe 30bc
.org 0xffb00
	pop {r0}	@ 000ffb00 01bc
.org 0xffb02
	bx r0	@ 000ffb02 0047

@ FUN_080b0770  entry 0x080b0770  size 38
.thumb
.org 0xb0770
FUN_080b0770:
	push {lr}	@ 000b0770 00b5
.org 0xb0772
	adds r2, r0, #0	@ 000b0772 021c
.org 0xb0774
	ldr r0, [pc, #32]	@ 000b0774 0848
.org 0xb0776
	ldr r0, [r0, #0]	@ 000b0776 0068
.org 0xb0778
	ldr r0, [r0, #84]	@ 000b0778 406d
.org 0xb077a
	ldr r1, [r2, #84]	@ 000b077a 516d
.org 0xb077c
	subs r0, r0, r1	@ 000b077c 401a
.org 0xb077e
	asrs r0, r0, #8	@ 000b077e 0012
.org 0xb0780
	cmp r0, #0	@ 000b0780 0028
.org 0xb0782
	bge.n 0xb0786	@ 000b0782 00da
.org 0xb0784
	negs r0, r0	@ 000b0784 4042
.org 0xb0786
	cmp r0, #79	@ 000b0786 4f28
.org 0xb0788
	bgt.n 0xb0792	@ 000b0788 03dc
.org 0xb078a
	movs r1, #0	@ 000b078a 0021
.org 0xb078c
	movs r0, #1	@ 000b078c 0120
.org 0xb078e
	strb r0, [r2, #13]	@ 000b078e 5073
.org 0xb0790
	strb r1, [r2, #14]	@ 000b0790 9173
.org 0xb0792
	pop {r0}	@ 000b0792 01bc
.org 0xb0794
	bx r0	@ 000b0794 0047

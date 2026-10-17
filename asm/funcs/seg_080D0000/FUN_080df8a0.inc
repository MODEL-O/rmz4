@ FUN_080df8a0  entry 0x080df8a0  size 44
.thumb
.org 0xdf8a0
FUN_080df8a0:
	push {r4, lr}	@ 000df8a0 10b5
.org 0xdf8a2
	adds r4, r0, #0	@ 000df8a2 041c
.org 0xdf8a4
	ldrb r0, [r4, #13]	@ 000df8a4 607b
.org 0xdf8a6
	cmp r0, #0	@ 000df8a6 0028
.org 0xdf8a8
	bne.n 0xdf8c0	@ 000df8a8 0ad1
.org 0xdf8aa
	ldr r1, [pc, #32]	@ 000df8aa 0849
.org 0xdf8ac
	adds r0, r4, #0	@ 000df8ac 201c
.org 0xdf8ae
	bl 0x1cf00	@ 000df8ae 3df727fb
.org 0xdf8b2
	ldrb r1, [r4, #17]	@ 000df8b2 617c
.org 0xdf8b4
	adds r0, r4, #0	@ 000df8b4 201c
.org 0xdf8b6
	bl 0xdf71c	@ 000df8b6 fff731ff
.org 0xdf8ba
	ldrb r0, [r4, #13]	@ 000df8ba 607b
.org 0xdf8bc
	adds r0, #1	@ 000df8bc 0130
.org 0xdf8be
	strb r0, [r4, #13]	@ 000df8be 6073
.org 0xdf8c0
	adds r0, r4, #0	@ 000df8c0 201c
.org 0xdf8c2
	bl 0xdf7ac	@ 000df8c2 fff773ff
.org 0xdf8c6
	pop {r4}	@ 000df8c6 10bc
.org 0xdf8c8
	pop {r0}	@ 000df8c8 01bc
.org 0xdf8ca
	bx r0	@ 000df8ca 0047

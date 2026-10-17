@ FUN_080877a4  entry 0x080877a4  size 64
.thumb
.org 0x877a4
FUN_080877a4:
	push {r4, lr}	@ 000877a4 10b5
.org 0x877a6
	adds r4, r0, #0	@ 000877a6 041c
.org 0x877a8
	ldrb r0, [r4, #15]	@ 000877a8 e07b
.org 0x877aa
	cmp r0, #0	@ 000877aa 0028
.org 0x877ac
	bne.n 0x877c6	@ 000877ac 0bd1
.org 0x877ae
	adds r0, r4, #0	@ 000877ae 201c
.org 0x877b0
	adds r0, #116	@ 000877b0 7430
.org 0x877b2
	ldr r1, [pc, #48]	@ 000877b2 0c49
.org 0x877b4
	bl 0x5784	@ 000877b4 7df7e6ff
.org 0x877b8
	ldr r1, [pc, #44]	@ 000877b8 0b49
.org 0x877ba
	adds r0, r4, #0	@ 000877ba 201c
.org 0x877bc
	bl 0x1cf00	@ 000877bc 95f7a0fb
.org 0x877c0
	ldrb r0, [r4, #15]	@ 000877c0 e07b
.org 0x877c2
	adds r0, #1	@ 000877c2 0130
.org 0x877c4
	strb r0, [r4, #15]	@ 000877c4 e073
.org 0x877c6
	adds r0, r4, #0	@ 000877c6 201c
.org 0x877c8
	bl 0x1cff0	@ 000877c8 95f712fc
.org 0x877cc
	adds r0, r4, #0	@ 000877cc 201c
.org 0x877ce
	adds r0, #115	@ 000877ce 7330
.org 0x877d0
	ldrb r0, [r0, #0]	@ 000877d0 0078
.org 0x877d2
	cmp r0, #3	@ 000877d2 0328
.org 0x877d4
	bne.n 0x877de	@ 000877d4 03d1
.org 0x877d6
	movs r1, #0	@ 000877d6 0021
.org 0x877d8
	movs r0, #2	@ 000877d8 0220
.org 0x877da
	strb r0, [r4, #14]	@ 000877da a073
.org 0x877dc
	strb r1, [r4, #15]	@ 000877dc e173
.org 0x877de
	pop {r4}	@ 000877de 10bc
.org 0x877e0
	pop {r0}	@ 000877e0 01bc
.org 0x877e2
	bx r0	@ 000877e2 0047

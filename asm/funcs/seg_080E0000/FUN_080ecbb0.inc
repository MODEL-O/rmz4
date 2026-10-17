@ FUN_080ecbb0  entry 0x080ecbb0  size 36
.thumb
.org 0xecbb0
FUN_080ecbb0:
	push {r4, lr}	@ 000ecbb0 10b5
.org 0xecbb2
	adds r4, r0, #0	@ 000ecbb2 041c
.org 0xecbb4
	ldrb r0, [r4, #15]	@ 000ecbb4 e07b
.org 0xecbb6
	cmp r0, #0	@ 000ecbb6 0028
.org 0xecbb8
	bne.n 0xecbc8	@ 000ecbb8 06d1
.org 0xecbba
	ldr r1, [pc, #24]	@ 000ecbba 0649
.org 0xecbbc
	adds r0, r4, #0	@ 000ecbbc 201c
.org 0xecbbe
	bl 0x1cf00	@ 000ecbbe 30f79ff9
.org 0xecbc2
	ldrb r0, [r4, #15]	@ 000ecbc2 e07b
.org 0xecbc4
	adds r0, #1	@ 000ecbc4 0130
.org 0xecbc6
	strb r0, [r4, #15]	@ 000ecbc6 e073
.org 0xecbc8
	adds r0, r4, #0	@ 000ecbc8 201c
.org 0xecbca
	bl 0x1cff0	@ 000ecbca 30f711fa
.org 0xecbce
	pop {r4}	@ 000ecbce 10bc
.org 0xecbd0
	pop {r0}	@ 000ecbd0 01bc
.org 0xecbd2
	bx r0	@ 000ecbd2 0047

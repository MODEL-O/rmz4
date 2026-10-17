@ FUN_080933a0  entry 0x080933a0  size 32
.thumb
.org 0x933a0
FUN_080933a0:
	push {r4, lr}	@ 000933a0 10b5
.org 0x933a2
	adds r4, r0, #0	@ 000933a2 041c
.org 0x933a4
	ldr r1, [r4, #84]	@ 000933a4 616d
.org 0x933a6
	ldr r2, [r4, #88]	@ 000933a6 a26d
.org 0x933a8
	bl 0x947b4	@ 000933a8 01f004fa
.org 0x933ac
	adds r1, r0, #0	@ 000933ac 011c
.org 0x933ae
	cmp r1, #0	@ 000933ae 0029
.org 0x933b0
	bne.n 0x933ba	@ 000933b0 03d1
.org 0x933b2
	movs r0, #8	@ 000933b2 0820
.org 0x933b4
	strb r0, [r4, #13]	@ 000933b4 6073
.org 0x933b6
	strb r1, [r4, #14]	@ 000933b6 a173
.org 0x933b8
	strb r1, [r4, #15]	@ 000933b8 e173
.org 0x933ba
	pop {r4}	@ 000933ba 10bc
.org 0x933bc
	pop {r0}	@ 000933bc 01bc
.org 0x933be
	bx r0	@ 000933be 0047

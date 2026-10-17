@ FUN_0808738c  entry 0x0808738c  size 28
.thumb
.org 0x8738c
FUN_0808738c:
	push {r4, lr}	@ 0008738c 10b5
.org 0x8738e
	adds r4, r0, #0	@ 0008738e 041c
.org 0x87390
	ldr r0, [r4, #44]	@ 00087390 e06a
.org 0x87392
	cmp r0, #0	@ 00087392 0028
.org 0x87394
	beq.n 0x873a2	@ 00087394 05d0
.org 0x87396
	bl 0x2b3e4	@ 00087396 a4f725f8
.org 0x8739a
	cmp r0, #0	@ 0008739a 0028
.org 0x8739c
	beq.n 0x873a2	@ 0008739c 01d0
.org 0x8739e
	movs r0, #0	@ 0008739e 0020
.org 0x873a0
	str r0, [r4, #44]	@ 000873a0 e062
.org 0x873a2
	pop {r4}	@ 000873a2 10bc
.org 0x873a4
	pop {r0}	@ 000873a4 01bc
.org 0x873a6
	bx r0	@ 000873a6 0047

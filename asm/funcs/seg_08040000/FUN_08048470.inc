@ FUN_08048470  entry 0x08048470  size 58
.thumb
.org 0x48470
FUN_08048470:
	push {r4, lr}	@ 00048470 10b5
.org 0x48472
	adds r4, r0, #0	@ 00048472 041c
.org 0x48474
	adds r0, #189	@ 00048474 bd30
.org 0x48476
	ldrb r0, [r0, #0]	@ 00048476 0078
.org 0x48478
	cmp r0, #0	@ 00048478 0028
.org 0x4847a
	beq.n 0x4849e	@ 0004847a 10d0
.org 0x4847c
	ldrb r0, [r4, #16]	@ 0004847c 207c
.org 0x4847e
	cmp r0, #0	@ 0004847e 0028
.org 0x48480
	bne.n 0x48494	@ 00048480 08d1
.org 0x48482
	adds r1, r4, #0	@ 00048482 211c
.org 0x48484
	adds r1, #84	@ 00048484 5431
.org 0x48486
	movs r0, #1	@ 00048486 0120
.org 0x48488
	bl 0xd0c88	@ 00048488 88f0fefb
.org 0x4848c
	movs r0, #53	@ 0004848c 3520
.org 0x4848e
	bl 0x2b10	@ 0004848e baf73ffb
.org 0x48492
	b.n 0x4849e	@ 00048492 04e0
.org 0x48494
	adds r1, r4, #0	@ 00048494 211c
.org 0x48496
	adds r1, #84	@ 00048496 5431
.org 0x48498
	movs r0, #2	@ 00048498 0220
.org 0x4849a
	bl 0xd0c88	@ 0004849a 88f0f5fb
.org 0x4849e
	adds r0, r4, #0	@ 0004849e 201c
.org 0x484a0
	bl 0x3a8b4	@ 000484a0 f2f708fa
.org 0x484a4
	pop {r4}	@ 000484a4 10bc
.org 0x484a6
	pop {r0}	@ 000484a6 01bc
.org 0x484a8
	bx r0	@ 000484a8 0047

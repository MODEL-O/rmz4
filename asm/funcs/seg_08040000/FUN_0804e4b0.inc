@ FUN_0804e4b0  entry 0x0804e4b0  size 40
.thumb
.org 0x4e4b0
FUN_0804e4b0:
	push {r4, lr}	@ 0004e4b0 10b5
.org 0x4e4b2
	adds r4, r0, #0	@ 0004e4b2 041c
.org 0x4e4b4
	adds r0, #189	@ 0004e4b4 bd30
.org 0x4e4b6
	ldrb r0, [r0, #0]	@ 0004e4b6 0078
.org 0x4e4b8
	cmp r0, #0	@ 0004e4b8 0028
.org 0x4e4ba
	beq.n 0x4e4cc	@ 0004e4ba 07d0
.org 0x4e4bc
	adds r1, r4, #0	@ 0004e4bc 211c
.org 0x4e4be
	adds r1, #84	@ 0004e4be 5431
.org 0x4e4c0
	movs r0, #1	@ 0004e4c0 0120
.org 0x4e4c2
	bl 0xd0c88	@ 0004e4c2 82f0e1fb
.org 0x4e4c6
	movs r0, #53	@ 0004e4c6 3520
.org 0x4e4c8
	bl 0x2b10	@ 0004e4c8 b4f722fb
.org 0x4e4cc
	adds r0, r4, #0	@ 0004e4cc 201c
.org 0x4e4ce
	bl 0x3a8b4	@ 0004e4ce ecf7f1f9
.org 0x4e4d2
	pop {r4}	@ 0004e4d2 10bc
.org 0x4e4d4
	pop {r0}	@ 0004e4d4 01bc
.org 0x4e4d6
	bx r0	@ 0004e4d6 0047

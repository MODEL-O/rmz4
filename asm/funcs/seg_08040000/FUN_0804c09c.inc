@ FUN_0804c09c  entry 0x0804c09c  size 46
.thumb
.org 0x4c09c
FUN_0804c09c:
	push {r4, lr}	@ 0004c09c 10b5
.org 0x4c09e
	adds r4, r0, #0	@ 0004c09e 041c
.org 0x4c0a0
	adds r0, #189	@ 0004c0a0 bd30
.org 0x4c0a2
	ldrb r0, [r0, #0]	@ 0004c0a2 0078
.org 0x4c0a4
	cmp r0, #0	@ 0004c0a4 0028
.org 0x4c0a6
	beq.n 0x4c0be	@ 0004c0a6 0ad0
.org 0x4c0a8
	ldrb r0, [r4, #16]	@ 0004c0a8 207c
.org 0x4c0aa
	cmp r0, #0	@ 0004c0aa 0028
.org 0x4c0ac
	bne.n 0x4c0be	@ 0004c0ac 07d1
.org 0x4c0ae
	adds r1, r4, #0	@ 0004c0ae 211c
.org 0x4c0b0
	adds r1, #84	@ 0004c0b0 5431
.org 0x4c0b2
	movs r0, #1	@ 0004c0b2 0120
.org 0x4c0b4
	bl 0xd0c88	@ 0004c0b4 84f0e8fd
.org 0x4c0b8
	movs r0, #53	@ 0004c0b8 3520
.org 0x4c0ba
	bl 0x2b10	@ 0004c0ba b6f729fd
.org 0x4c0be
	adds r0, r4, #0	@ 0004c0be 201c
.org 0x4c0c0
	bl 0x3a8b4	@ 0004c0c0 eef7f8fb
.org 0x4c0c4
	pop {r4}	@ 0004c0c4 10bc
.org 0x4c0c6
	pop {r0}	@ 0004c0c6 01bc
.org 0x4c0c8
	bx r0	@ 0004c0c8 0047

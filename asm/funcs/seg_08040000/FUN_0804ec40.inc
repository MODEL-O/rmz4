@ FUN_0804ec40  entry 0x0804ec40  size 40
.thumb
.org 0x4ec40
FUN_0804ec40:
	push {r4, lr}	@ 0004ec40 10b5
.org 0x4ec42
	adds r4, r0, #0	@ 0004ec42 041c
.org 0x4ec44
	adds r0, #189	@ 0004ec44 bd30
.org 0x4ec46
	ldrb r0, [r0, #0]	@ 0004ec46 0078
.org 0x4ec48
	cmp r0, #0	@ 0004ec48 0028
.org 0x4ec4a
	beq.n 0x4ec5c	@ 0004ec4a 07d0
.org 0x4ec4c
	adds r1, r4, #0	@ 0004ec4c 211c
.org 0x4ec4e
	adds r1, #84	@ 0004ec4e 5431
.org 0x4ec50
	movs r0, #1	@ 0004ec50 0120
.org 0x4ec52
	bl 0xd0c88	@ 0004ec52 82f019f8
.org 0x4ec56
	movs r0, #53	@ 0004ec56 3520
.org 0x4ec58
	bl 0x2b10	@ 0004ec58 b3f75aff
.org 0x4ec5c
	adds r0, r4, #0	@ 0004ec5c 201c
.org 0x4ec5e
	bl 0x3a8b4	@ 0004ec5e ebf729fe
.org 0x4ec62
	pop {r4}	@ 0004ec62 10bc
.org 0x4ec64
	pop {r0}	@ 0004ec64 01bc
.org 0x4ec66
	bx r0	@ 0004ec66 0047

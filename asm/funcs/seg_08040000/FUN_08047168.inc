@ FUN_08047168  entry 0x08047168  size 48
.thumb
.org 0x47168
FUN_08047168:
	push {r4, lr}	@ 00047168 10b5
.org 0x4716a
	adds r4, r0, #0	@ 0004716a 041c
.org 0x4716c
	ldrb r0, [r4, #16]	@ 0004716c 207c
.org 0x4716e
	cmp r0, #0	@ 0004716e 0028
.org 0x47170
	bne.n 0x4718c	@ 00047170 0cd1
.org 0x47172
	adds r0, r4, #0	@ 00047172 201c
.org 0x47174
	adds r0, #189	@ 00047174 bd30
.org 0x47176
	ldrb r0, [r0, #0]	@ 00047176 0078
.org 0x47178
	cmp r0, #0	@ 00047178 0028
.org 0x4717a
	beq.n 0x4718c	@ 0004717a 07d0
.org 0x4717c
	adds r1, r4, #0	@ 0004717c 211c
.org 0x4717e
	adds r1, #84	@ 0004717e 5431
.org 0x47180
	movs r0, #1	@ 00047180 0120
.org 0x47182
	bl 0xd0c88	@ 00047182 89f081fd
.org 0x47186
	movs r0, #53	@ 00047186 3520
.org 0x47188
	bl 0x2b10	@ 00047188 bbf7c2fc
.org 0x4718c
	adds r0, r4, #0	@ 0004718c 201c
.org 0x4718e
	bl 0x3a8b4	@ 0004718e f3f791fb
.org 0x47192
	pop {r4}	@ 00047192 10bc
.org 0x47194
	pop {r0}	@ 00047194 01bc
.org 0x47196
	bx r0	@ 00047196 0047

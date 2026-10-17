@ FUN_0804a210  entry 0x0804a210  size 40
.thumb
.org 0x4a210
FUN_0804a210:
	push {r4, lr}	@ 0004a210 10b5
.org 0x4a212
	adds r4, r0, #0	@ 0004a212 041c
.org 0x4a214
	adds r0, #189	@ 0004a214 bd30
.org 0x4a216
	ldrb r0, [r0, #0]	@ 0004a216 0078
.org 0x4a218
	cmp r0, #0	@ 0004a218 0028
.org 0x4a21a
	beq.n 0x4a22c	@ 0004a21a 07d0
.org 0x4a21c
	adds r1, r4, #0	@ 0004a21c 211c
.org 0x4a21e
	adds r1, #84	@ 0004a21e 5431
.org 0x4a220
	movs r0, #1	@ 0004a220 0120
.org 0x4a222
	bl 0xd0c88	@ 0004a222 86f031fd
.org 0x4a226
	movs r0, #53	@ 0004a226 3520
.org 0x4a228
	bl 0x2b10	@ 0004a228 b8f772fc
.org 0x4a22c
	adds r0, r4, #0	@ 0004a22c 201c
.org 0x4a22e
	bl 0x3a8b4	@ 0004a22e f0f741fb
.org 0x4a232
	pop {r4}	@ 0004a232 10bc
.org 0x4a234
	pop {r0}	@ 0004a234 01bc
.org 0x4a236
	bx r0	@ 0004a236 0047

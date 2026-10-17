@ FUN_0800f6b4  entry 0x0800f6b4  size 20
.thumb
.org 0xf6b4
FUN_0800f6b4:
	push {lr}	@ 0000f6b4 00b5
.org 0xf6b6
	adds r0, #104	@ 0000f6b6 6830
.org 0xf6b8
	ldrh r0, [r0, #0]	@ 0000f6b8 0088
.org 0xf6ba
	cmp r0, #121	@ 0000f6ba 7928
.org 0xf6bc
	bne.n 0xf6c4	@ 0000f6bc 02d1
.org 0xf6be
	movs r0, #121	@ 0000f6be 7920
.org 0xf6c0
	bl 0x2b5c	@ 0000f6c0 f3f74cfa
.org 0xf6c4
	pop {r0}	@ 0000f6c4 01bc
.org 0xf6c6
	bx r0	@ 0000f6c6 0047

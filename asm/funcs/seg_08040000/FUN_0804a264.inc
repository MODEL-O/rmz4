@ FUN_0804a264  entry 0x0804a264  size 40
.thumb
.org 0x4a264
FUN_0804a264:
	push {lr}	@ 0004a264 00b5
.org 0x4a266
	bl 0x7c7c	@ 0004a266 bdf709fd
.org 0x4a26a
	lsls r0, r0, #16	@ 0004a26a 0004
.org 0x4a26c
	lsrs r0, r0, #16	@ 0004a26c 000c
.org 0x4a26e
	adds r1, r0, #0	@ 0004a26e 011c
.org 0x4a270
	movs r0, #15	@ 0004a270 0f20
.org 0x4a272
	ands r0, r1	@ 0004a272 0840
.org 0x4a274
	cmp r0, #15	@ 0004a274 0f28
.org 0x4a276
	beq.n 0x4a286	@ 0004a276 06d0
.org 0x4a278
	movs r0, #128	@ 0004a278 8020
.org 0x4a27a
	lsls r0, r0, #8	@ 0004a27a 0002
.org 0x4a27c
	ands r0, r1	@ 0004a27c 0840
.org 0x4a27e
	cmp r0, #0	@ 0004a27e 0028
.org 0x4a280
	bne.n 0x4a286	@ 0004a280 01d1
.org 0x4a282
	adds r0, r1, #0	@ 0004a282 081c
.org 0x4a284
	b.n 0x4a288	@ 0004a284 00e0
.org 0x4a286
	movs r0, #0	@ 0004a286 0020
.org 0x4a288
	pop {r1}	@ 0004a288 02bc
.org 0x4a28a
	bx r1	@ 0004a28a 0847

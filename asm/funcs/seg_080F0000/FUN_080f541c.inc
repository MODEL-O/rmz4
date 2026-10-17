@ FUN_080f541c  entry 0x080f541c  size 36
.thumb
.org 0xf541c
FUN_080f541c:
	push {r4, r5, lr}	@ 000f541c 30b5
.org 0xf541e
	adds r5, r0, #0	@ 000f541e 051c
.org 0xf5420
	adds r4, r5, #0	@ 000f5420 2c1c
.org 0xf5422
	adds r4, #194	@ 000f5422 c234
.org 0xf5424
	ldrh r0, [r4, #0]	@ 000f5424 2088
.org 0xf5426
	cmp r0, #119	@ 000f5426 7728
.org 0xf5428
	bne.n 0xf5434	@ 000f5428 04d1
.org 0xf542a
	movs r0, #119	@ 000f542a 7720
.org 0xf542c
	bl 0x2b5c	@ 000f542c 0df796fb
.org 0xf5430
	movs r0, #0	@ 000f5430 0020
.org 0xf5432
	strh r0, [r4, #0]	@ 000f5432 2080
.org 0xf5434
	adds r0, r5, #0	@ 000f5434 281c
.org 0xf5436
	bl 0xe954c	@ 000f5436 f4f789f8
.org 0xf543a
	pop {r4, r5}	@ 000f543a 30bc
.org 0xf543c
	pop {r0}	@ 000f543c 01bc
.org 0xf543e
	bx r0	@ 000f543e 0047

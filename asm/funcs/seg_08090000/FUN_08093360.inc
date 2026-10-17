@ FUN_08093360  entry 0x08093360  size 32
.thumb
.org 0x93360
FUN_08093360:
	push {r4, lr}	@ 00093360 10b5
.org 0x93362
	adds r4, r0, #0	@ 00093362 041c
.org 0x93364
	ldr r1, [r4, #84]	@ 00093364 616d
.org 0x93366
	ldr r2, [r4, #88]	@ 00093366 a26d
.org 0x93368
	bl 0x947b4	@ 00093368 01f024fa
.org 0x9336c
	adds r1, r0, #0	@ 0009336c 011c
.org 0x9336e
	cmp r1, #0	@ 0009336e 0029
.org 0x93370
	bne.n 0x9337a	@ 00093370 03d1
.org 0x93372
	movs r0, #8	@ 00093372 0820
.org 0x93374
	strb r0, [r4, #13]	@ 00093374 6073
.org 0x93376
	strb r1, [r4, #14]	@ 00093376 a173
.org 0x93378
	strb r1, [r4, #15]	@ 00093378 e173
.org 0x9337a
	pop {r4}	@ 0009337a 10bc
.org 0x9337c
	pop {r0}	@ 0009337c 01bc
.org 0x9337e
	bx r0	@ 0009337e 0047

@ FUN_08033350  entry 0x08033350  size 54
.thumb
.org 0x33350
FUN_08033350:
	push {r4, r5, lr}	@ 00033350 30b5
.org 0x33352
	adds r5, r0, #0	@ 00033352 051c
.org 0x33354
	adds r3, r5, #0	@ 00033354 2b1c
.org 0x33356
	adds r3, #180	@ 00033356 b433
.org 0x33358
	ldr r2, [r3, #84]	@ 00033358 5a6d
.org 0x3335a
	cmp r2, #0	@ 0003335a 002a
.org 0x3335c
	beq.n 0x33366	@ 0003335c 03d0
.org 0x3335e
	movs r1, #0	@ 0003335e 0021
.org 0x33360
	movs r0, #1	@ 00033360 0120
.org 0x33362
	strb r0, [r2, #17]	@ 00033362 5074
.org 0x33364
	str r1, [r3, #84]	@ 00033364 5965
.org 0x33366
	movs r1, #128	@ 00033366 8021
.org 0x33368
	lsls r1, r1, #1	@ 00033368 4900
.org 0x3336a
	adds r0, r5, r1	@ 0003336a 6818
.org 0x3336c
	movs r4, #0	@ 0003336c 0024
.org 0x3336e
	strb r4, [r0, #0]	@ 0003336e 0470
.org 0x33370
	movs r1, #156	@ 00033370 9c21
.org 0x33372
	lsls r1, r1, #7	@ 00033372 c901
.org 0x33374
	adds r0, r5, #0	@ 00033374 281c
.org 0x33376
	bl 0x1cf00	@ 00033376 e9f7c3fd
.org 0x3337a
	movs r0, #1	@ 0003337a 0120
.org 0x3337c
	strb r0, [r5, #14]	@ 0003337c a873
.org 0x3337e
	strb r4, [r5, #15]	@ 0003337e ec73
.org 0x33380
	pop {r4, r5}	@ 00033380 30bc
.org 0x33382
	pop {r0}	@ 00033382 01bc
.org 0x33384
	bx r0	@ 00033384 0047

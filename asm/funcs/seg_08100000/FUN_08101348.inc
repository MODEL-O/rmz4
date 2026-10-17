@ FUN_08101348  entry 0x08101348  size 94
.thumb
.org 0x101348
FUN_08101348:
	push {r4, lr}	@ 00101348 10b5
.org 0x10134a
	adds r4, r0, #0	@ 0010134a 041c
.org 0x10134c
	bl 0x1cc9c	@ 0010134c 1bf7a6fc
.org 0x101350
	ldrb r1, [r4, #10]	@ 00101350 a17a
.org 0x101352
	movs r0, #1	@ 00101352 0120
.org 0x101354
	orrs r0, r1	@ 00101354 0843
.org 0x101356
	movs r1, #2	@ 00101356 0221
.org 0x101358
	orrs r0, r1	@ 00101358 0843
.org 0x10135a
	movs r2, #0	@ 0010135a 0022
.org 0x10135c
	movs r1, #239	@ 0010135c ef21
.org 0x10135e
	ands r0, r1	@ 0010135e 0840
.org 0x101360
	strb r0, [r4, #10]	@ 00101360 a072
.org 0x101362
	movs r3, #1	@ 00101362 0123
.org 0x101364
	adds r0, r4, #0	@ 00101364 201c
.org 0x101366
	adds r0, #76	@ 00101366 4c30
.org 0x101368
	strb r2, [r0, #0]	@ 00101368 0270
.org 0x10136a
	adds r2, r4, #0	@ 0010136a 221c
.org 0x10136c
	adds r2, #74	@ 0010136c 4a32
.org 0x10136e
	ldrb r1, [r2, #0]	@ 0010136e 1178
.org 0x101370
	movs r0, #17	@ 00101370 1120
.org 0x101372
	negs r0, r0	@ 00101372 4042
.org 0x101374
	ands r0, r1	@ 00101374 0840
.org 0x101376
	strb r0, [r2, #0]	@ 00101376 1070
.org 0x101378
	ldr r1, [pc, #44]	@ 00101378 0b49
.org 0x10137a
	ldrb r0, [r4, #9]	@ 0010137a 607a
.org 0x10137c
	lsls r0, r0, #2	@ 0010137c 8000
.org 0x10137e
	adds r0, r0, r1	@ 0010137e 4018
.org 0x101380
	str r3, [r4, #12]	@ 00101380 e360
.org 0x101382
	ldr r0, [r0, #0]	@ 00101382 0068
.org 0x101384
	ldr r0, [r0, #4]	@ 00101384 4068
.org 0x101386
	str r0, [r4, #20]	@ 00101386 6061
.org 0x101388
	ldr r0, [r4, #84]	@ 00101388 606d
.org 0x10138a
	ldr r1, [r4, #88]	@ 0010138a a16d
.org 0x10138c
	bl 0x8534	@ 0010138c 07f7d2f8
.org 0x101390
	str r0, [r4, #88]	@ 00101390 a065
.org 0x101392
	ldr r1, [pc, #24]	@ 00101392 0649
.org 0x101394
	adds r0, r4, #0	@ 00101394 201c
.org 0x101396
	bl 0x1cf00	@ 00101396 1bf7b3fd
.org 0x10139a
	adds r0, r4, #0	@ 0010139a 201c
.org 0x10139c
	bl 0x1013b0	@ 0010139c 00f008f8
.org 0x1013a0
	pop {r4}	@ 001013a0 10bc
.org 0x1013a2
	pop {r0}	@ 001013a2 01bc
.org 0x1013a4
	bx r0	@ 001013a4 0047

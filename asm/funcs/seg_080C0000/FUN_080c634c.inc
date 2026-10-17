@ FUN_080c634c  entry 0x080c634c  size 72
.thumb
.org 0xc634c
FUN_080c634c:
	push {r4, r5, r6, lr}	@ 000c634c 70b5
.org 0xc634e
	adds r4, r0, #0	@ 000c634e 041c
.org 0xc6350
	adds r5, r1, #0	@ 000c6350 0d1c
.org 0xc6352
	lsls r2, r2, #24	@ 000c6352 1206
.org 0xc6354
	lsrs r6, r2, #24	@ 000c6354 160e
.org 0xc6356
	ldr r0, [pc, #60]	@ 000c6356 0f48
.org 0xc6358
	ldr r0, [r0, #0]	@ 000c6358 0068
.org 0xc635a
	bl 0x5500	@ 000c635a 3ff7d1f8
.org 0xc635e
	adds r3, r0, #0	@ 000c635e 031c
.org 0xc6360
	cmp r3, #0	@ 000c6360 002b
.org 0xc6362
	beq.n 0xc638e	@ 000c6362 14d0
.org 0xc6364
	adds r1, r3, #0	@ 000c6364 191c
.org 0xc6366
	adds r1, #37	@ 000c6366 2531
.org 0xc6368
	movs r2, #0	@ 000c6368 0022
.org 0xc636a
	movs r0, #8	@ 000c636a 0820
.org 0xc636c
	strb r0, [r1, #0]	@ 000c636c 0870
.org 0xc636e
	ldr r1, [pc, #40]	@ 000c636e 0a49
.org 0xc6370
	movs r0, #26	@ 000c6370 1a20
.org 0xc6372
	strb r0, [r3, #9]	@ 000c6372 5872
.org 0xc6374
	ldr r0, [r1, #104]	@ 000c6374 886e
.org 0xc6376
	ldr r0, [r0, #0]	@ 000c6376 0068
.org 0xc6378
	str r0, [r3, #20]	@ 000c6378 5861
.org 0xc637a
	movs r0, #0	@ 000c637a 0020
.org 0xc637c
	strh r2, [r3, #32]	@ 000c637c 1a84
.org 0xc637e
	adds r1, r3, #0	@ 000c637e 191c
.org 0xc6380
	adds r1, #34	@ 000c6380 2231
.org 0xc6382
	strb r0, [r1, #0]	@ 000c6382 0870
.org 0xc6384
	str r4, [r3, #84]	@ 000c6384 5c65
.org 0xc6386
	str r5, [r3, #88]	@ 000c6386 9d65
.org 0xc6388
	movs r0, #2	@ 000c6388 0220
.org 0xc638a
	strb r0, [r3, #16]	@ 000c638a 1874
.org 0xc638c
	strb r6, [r3, #17]	@ 000c638c 5e74
.org 0xc638e
	pop {r4, r5, r6}	@ 000c638e 70bc
.org 0xc6390
	pop {r0}	@ 000c6390 01bc
.org 0xc6392
	bx r0	@ 000c6392 0047

@ FUN_08096340  entry 0x08096340  size 80
.thumb
.org 0x96340
FUN_08096340:
	push {r4, r5, lr}	@ 00096340 30b5
.org 0x96342
	adds r4, r0, #0	@ 00096342 041c
.org 0x96344
	ldr r5, [r4, #40]	@ 00096344 a56a
.org 0x96346
	ldr r1, [pc, #72]	@ 00096346 1249
.org 0x96348
	ldrb r0, [r4, #9]	@ 00096348 607a
.org 0x9634a
	lsls r0, r0, #2	@ 0009634a 8000
.org 0x9634c
	adds r0, r0, r1	@ 0009634c 4018
.org 0x9634e
	movs r1, #1	@ 0009634e 0121
.org 0x96350
	str r1, [r4, #12]	@ 00096350 e160
.org 0x96352
	ldr r0, [r0, #0]	@ 00096352 0068
.org 0x96354
	ldr r0, [r0, #4]	@ 00096354 4068
.org 0x96356
	str r0, [r4, #20]	@ 00096356 6061
.org 0x96358
	ldrb r1, [r4, #10]	@ 00096358 a17a
.org 0x9635a
	movs r0, #1	@ 0009635a 0120
.org 0x9635c
	orrs r0, r1	@ 0009635c 0843
.org 0x9635e
	movs r1, #2	@ 0009635e 0221
.org 0x96360
	orrs r0, r1	@ 00096360 0843
.org 0x96362
	strb r0, [r4, #10]	@ 00096362 a072
.org 0x96364
	adds r0, r4, #0	@ 00096364 201c
.org 0x96366
	bl 0x1cc9c	@ 00096366 86f799fc
.org 0x9636a
	adds r0, r4, #0	@ 0009636a 201c
.org 0x9636c
	bl 0x1ceec	@ 0009636c 86f7befd
.org 0x96370
	adds r1, r4, #0	@ 00096370 211c
.org 0x96372
	adds r1, #37	@ 00096372 2531
.org 0x96374
	movs r0, #25	@ 00096374 1920
.org 0x96376
	strb r0, [r1, #0]	@ 00096376 0870
.org 0x96378
	ldrb r1, [r4, #11]	@ 00096378 e17a
.org 0x9637a
	movs r0, #16	@ 0009637a 1020
.org 0x9637c
	orrs r0, r1	@ 0009637c 0843
.org 0x9637e
	strb r0, [r4, #11]	@ 0009637e e072
.org 0x96380
	ldrb r0, [r5, #28]	@ 00096380 287f
.org 0x96382
	strb r0, [r4, #29]	@ 00096382 6077
.org 0x96384
	adds r0, r4, #0	@ 00096384 201c
.org 0x96386
	bl 0x96394	@ 00096386 00f005f8
.org 0x9638a
	pop {r4, r5}	@ 0009638a 30bc
.org 0x9638c
	pop {r0}	@ 0009638c 01bc
.org 0x9638e
	bx r0	@ 0009638e 0047

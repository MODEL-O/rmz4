@ FUN_080d3330  entry 0x080d3330  size 82
.thumb
.org 0xd3330
FUN_080d3330:
	push {r4, r5, r6, lr}	@ 000d3330 70b5
.org 0xd3332
	adds r6, r0, #0	@ 000d3332 061c
.org 0xd3334
	adds r4, r1, #0	@ 000d3334 0c1c
.org 0xd3336
	lsls r2, r2, #24	@ 000d3336 1206
.org 0xd3338
	lsrs r5, r2, #24	@ 000d3338 150e
.org 0xd333a
	ldr r0, [pc, #72]	@ 000d333a 1248
.org 0xd333c
	ldr r0, [r0, #0]	@ 000d333c 0068
.org 0xd333e
	bl 0x5500	@ 000d333e 32f7dff8
.org 0xd3342
	adds r3, r0, #0	@ 000d3342 031c
.org 0xd3344
	cmp r3, #0	@ 000d3344 002b
.org 0xd3346
	beq.n 0xd337a	@ 000d3346 18d0
.org 0xd3348
	adds r1, r3, #0	@ 000d3348 191c
.org 0xd334a
	adds r1, #37	@ 000d334a 2531
.org 0xd334c
	movs r2, #0	@ 000d334c 0022
.org 0xd334e
	movs r0, #1	@ 000d334e 0120
.org 0xd3350
	strb r0, [r1, #0]	@ 000d3350 0870
.org 0xd3352
	ldr r1, [pc, #52]	@ 000d3352 0d49
.org 0xd3354
	movs r0, #9	@ 000d3354 0920
.org 0xd3356
	strb r0, [r3, #9]	@ 000d3356 5872
.org 0xd3358
	ldr r0, [r1, #36]	@ 000d3358 486a
.org 0xd335a
	ldr r0, [r0, #0]	@ 000d335a 0068
.org 0xd335c
	str r0, [r3, #20]	@ 000d335c 5861
.org 0xd335e
	movs r0, #0	@ 000d335e 0020
.org 0xd3360
	strh r2, [r3, #32]	@ 000d3360 1a84
.org 0xd3362
	adds r1, r3, #0	@ 000d3362 191c
.org 0xd3364
	adds r1, #34	@ 000d3364 2231
.org 0xd3366
	strb r0, [r1, #0]	@ 000d3366 0870
.org 0xd3368
	str r6, [r3, #40]	@ 000d3368 9e62
.org 0xd336a
	ldr r0, [r4, #0]	@ 000d336a 2068
.org 0xd336c
	str r0, [r3, #116]	@ 000d336c 5867
.org 0xd336e
	ldr r0, [r4, #4]	@ 000d336e 6068
.org 0xd3370
	str r0, [r3, #120]	@ 000d3370 9867
.org 0xd3372
	strb r5, [r3, #18]	@ 000d3372 9d74
.org 0xd3374
	adds r0, r3, #0	@ 000d3374 181c
.org 0xd3376
	adds r0, #124	@ 000d3376 7c30
.org 0xd3378
	strb r5, [r0, #0]	@ 000d3378 0570
.org 0xd337a
	adds r0, r3, #0	@ 000d337a 181c
.org 0xd337c
	pop {r4, r5, r6}	@ 000d337c 70bc
.org 0xd337e
	pop {r1}	@ 000d337e 02bc
.org 0xd3380
	bx r1	@ 000d3380 0847

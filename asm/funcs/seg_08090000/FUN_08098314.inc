@ FUN_08098314  entry 0x08098314  size 86
.thumb
.org 0x98314
FUN_08098314:
	push {r4, r5, r6, lr}	@ 00098314 70b5
.org 0x98316
	adds r6, r0, #0	@ 00098316 061c
.org 0x98318
	lsls r1, r1, #24	@ 00098318 0906
.org 0x9831a
	lsrs r5, r1, #24	@ 0009831a 0d0e
.org 0x9831c
	lsls r2, r2, #24	@ 0009831c 1206
.org 0x9831e
	lsrs r4, r2, #24	@ 0009831e 140e
.org 0x98320
	ldr r0, [pc, #72]	@ 00098320 1248
.org 0x98322
	ldr r0, [r0, #0]	@ 00098322 0068
.org 0x98324
	bl 0x5500	@ 00098324 6df7ecf8
.org 0x98328
	adds r3, r0, #0	@ 00098328 031c
.org 0x9832a
	cmp r3, #0	@ 0009832a 002b
.org 0x9832c
	beq.n 0x98362	@ 0009832c 19d0
.org 0x9832e
	adds r1, r3, #0	@ 0009832e 191c
.org 0x98330
	adds r1, #37	@ 00098330 2531
.org 0x98332
	movs r2, #0	@ 00098332 0022
.org 0x98334
	movs r0, #24	@ 00098334 1820
.org 0x98336
	strb r0, [r1, #0]	@ 00098336 0870
.org 0x98338
	ldr r0, [pc, #52]	@ 00098338 0d48
.org 0x9833a
	movs r1, #32	@ 0009833a 2021
.org 0x9833c
	strb r1, [r3, #9]	@ 0009833c 5972
.org 0x9833e
	adds r0, #128	@ 0009833e 8030
.org 0x98340
	ldr r0, [r0, #0]	@ 00098340 0068
.org 0x98342
	ldr r0, [r0, #0]	@ 00098342 0068
.org 0x98344
	str r0, [r3, #20]	@ 00098344 5861
.org 0x98346
	movs r0, #0	@ 00098346 0020
.org 0x98348
	strh r2, [r3, #32]	@ 00098348 1a84
.org 0x9834a
	adds r1, r3, #0	@ 0009834a 191c
.org 0x9834c
	adds r1, #34	@ 0009834c 2231
.org 0x9834e
	strb r0, [r1, #0]	@ 0009834e 0870
.org 0x98350
	ldrb r1, [r3, #11]	@ 00098350 d97a
.org 0x98352
	movs r0, #16	@ 00098352 1020
.org 0x98354
	orrs r0, r1	@ 00098354 0843
.org 0x98356
	strb r0, [r3, #11]	@ 00098356 d872
.org 0x98358
	ldrb r0, [r3, #28]	@ 00098358 187f
.org 0x9835a
	strb r0, [r3, #29]	@ 0009835a 5877
.org 0x9835c
	str r6, [r3, #40]	@ 0009835c 9e62
.org 0x9835e
	strb r5, [r3, #16]	@ 0009835e 1d74
.org 0x98360
	strb r4, [r3, #17]	@ 00098360 5c74
.org 0x98362
	adds r0, r3, #0	@ 00098362 181c
.org 0x98364
	pop {r4, r5, r6}	@ 00098364 70bc
.org 0x98366
	pop {r1}	@ 00098366 02bc
.org 0x98368
	bx r1	@ 00098368 0847

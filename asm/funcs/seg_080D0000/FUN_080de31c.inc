@ FUN_080de31c  entry 0x080de31c  size 90
.thumb
.org 0xde31c
FUN_080de31c:
	push {r4, r5, r6, r7, lr}	@ 000de31c f0b5
.org 0xde31e
	adds r6, r0, #0	@ 000de31e 061c
.org 0xde320
	adds r7, r1, #0	@ 000de320 0f1c
.org 0xde322
	lsls r2, r2, #24	@ 000de322 1206
.org 0xde324
	lsrs r5, r2, #24	@ 000de324 150e
.org 0xde326
	lsls r3, r3, #24	@ 000de326 1b06
.org 0xde328
	lsrs r4, r3, #24	@ 000de328 1c0e
.org 0xde32a
	ldr r0, [pc, #76]	@ 000de32a 1348
.org 0xde32c
	ldr r0, [r0, #0]	@ 000de32c 0068
.org 0xde32e
	bl 0x5500	@ 000de32e 27f7e7f8
.org 0xde332
	adds r3, r0, #0	@ 000de332 031c
.org 0xde334
	cmp r3, #0	@ 000de334 002b
.org 0xde336
	beq.n 0xde36e	@ 000de336 1ad0
.org 0xde338
	adds r1, r3, #0	@ 000de338 191c
.org 0xde33a
	adds r1, #37	@ 000de33a 2531
.org 0xde33c
	movs r2, #0	@ 000de33c 0022
.org 0xde33e
	movs r0, #1	@ 000de33e 0120
.org 0xde340
	strb r0, [r1, #0]	@ 000de340 0870
.org 0xde342
	ldr r0, [pc, #56]	@ 000de342 0e48
.org 0xde344
	movs r1, #46	@ 000de344 2e21
.org 0xde346
	strb r1, [r3, #9]	@ 000de346 5972
.org 0xde348
	adds r0, #184	@ 000de348 b830
.org 0xde34a
	ldr r0, [r0, #0]	@ 000de34a 0068
.org 0xde34c
	ldr r0, [r0, #0]	@ 000de34c 0068
.org 0xde34e
	str r0, [r3, #20]	@ 000de34e 5861
.org 0xde350
	movs r0, #0	@ 000de350 0020
.org 0xde352
	strh r2, [r3, #32]	@ 000de352 1a84
.org 0xde354
	adds r1, r3, #0	@ 000de354 191c
.org 0xde356
	adds r1, #34	@ 000de356 2231
.org 0xde358
	strb r0, [r1, #0]	@ 000de358 0870
.org 0xde35a
	ldr r0, [r6, #0]	@ 000de35a 3068
.org 0xde35c
	ldr r1, [r6, #4]	@ 000de35c 7168
.org 0xde35e
	str r0, [r3, #84]	@ 000de35e 5865
.org 0xde360
	str r1, [r3, #88]	@ 000de360 9965
.org 0xde362
	ldr r0, [r7, #0]	@ 000de362 3868
.org 0xde364
	ldr r1, [r7, #4]	@ 000de364 7968
.org 0xde366
	str r0, [r3, #92]	@ 000de366 d865
.org 0xde368
	str r1, [r3, #96]	@ 000de368 1966
.org 0xde36a
	strb r5, [r3, #16]	@ 000de36a 1d74
.org 0xde36c
	strb r4, [r3, #17]	@ 000de36c 5c74
.org 0xde36e
	adds r0, r3, #0	@ 000de36e 181c
.org 0xde370
	pop {r4, r5, r6, r7}	@ 000de370 f0bc
.org 0xde372
	pop {r1}	@ 000de372 02bc
.org 0xde374
	bx r1	@ 000de374 0847

@ FUN_080e530c  entry 0x080e530c  size 98
.thumb
.org 0xe530c
FUN_080e530c:
	push {r4, r5, lr}	@ 000e530c 30b5
.org 0xe530e
	adds r4, r0, #0	@ 000e530e 041c
.org 0xe5310
	bl 0x1cc9c	@ 000e5310 37f7c4fc
.org 0xe5314
	ldrb r1, [r4, #10]	@ 000e5314 a17a
.org 0xe5316
	movs r0, #1	@ 000e5316 0120
.org 0xe5318
	orrs r0, r1	@ 000e5318 0843
.org 0xe531a
	movs r1, #2	@ 000e531a 0221
.org 0xe531c
	orrs r0, r1	@ 000e531c 0843
.org 0xe531e
	movs r2, #0	@ 000e531e 0022
.org 0xe5320
	movs r1, #239	@ 000e5320 ef21
.org 0xe5322
	ands r0, r1	@ 000e5322 0840
.org 0xe5324
	strb r0, [r4, #10]	@ 000e5324 a072
.org 0xe5326
	movs r5, #1	@ 000e5326 0125
.org 0xe5328
	adds r0, r4, #0	@ 000e5328 201c
.org 0xe532a
	adds r0, #76	@ 000e532a 4c30
.org 0xe532c
	strb r2, [r0, #0]	@ 000e532c 0270
.org 0xe532e
	adds r2, r4, #0	@ 000e532e 221c
.org 0xe5330
	adds r2, #74	@ 000e5330 4a32
.org 0xe5332
	ldrb r1, [r2, #0]	@ 000e5332 1178
.org 0xe5334
	movs r0, #17	@ 000e5334 1120
.org 0xe5336
	negs r0, r0	@ 000e5336 4042
.org 0xe5338
	ands r0, r1	@ 000e5338 0840
.org 0xe533a
	strb r0, [r2, #0]	@ 000e533a 1070
.org 0xe533c
	ldr r1, [pc, #48]	@ 000e533c 0c49
.org 0xe533e
	ldrb r0, [r4, #9]	@ 000e533e 607a
.org 0xe5340
	lsls r0, r0, #2	@ 000e5340 8000
.org 0xe5342
	adds r0, r0, r1	@ 000e5342 4018
.org 0xe5344
	str r5, [r4, #12]	@ 000e5344 e560
.org 0xe5346
	ldr r0, [r0, #0]	@ 000e5346 0068
.org 0xe5348
	ldr r0, [r0, #4]	@ 000e5348 4068
.org 0xe534a
	str r0, [r4, #20]	@ 000e534a 6061
.org 0xe534c
	ldr r1, [pc, #36]	@ 000e534c 0949
.org 0xe534e
	ldrb r0, [r4, #16]	@ 000e534e 207c
.org 0xe5350
	lsls r0, r0, #2	@ 000e5350 8000
.org 0xe5352
	adds r0, r0, r1	@ 000e5352 4018
.org 0xe5354
	ldr r1, [r0, #0]	@ 000e5354 0168
.org 0xe5356
	adds r0, r4, #0	@ 000e5356 201c
.org 0xe5358
	bl 0x128f80	@ 000e5358 43f012fe
.org 0xe535c
	adds r0, r4, #0	@ 000e535c 201c
.org 0xe535e
	adds r0, #116	@ 000e535e 7430
.org 0xe5360
	strb r5, [r0, #0]	@ 000e5360 0570
.org 0xe5362
	adds r0, r4, #0	@ 000e5362 201c
.org 0xe5364
	bl 0xe5378	@ 000e5364 00f008f8
.org 0xe5368
	pop {r4, r5}	@ 000e5368 30bc
.org 0xe536a
	pop {r0}	@ 000e536a 01bc
.org 0xe536c
	bx r0	@ 000e536c 0047

@ FUN_08110328  entry 0x08110328  size 108
.thumb
.org 0x110328
FUN_08110328:
	push {r4, r5, r6, lr}	@ 00110328 70b5
.org 0x11032a
	mov r6, r8	@ 0011032a 4646
.org 0x11032c
	push {r6}	@ 0011032c 40b4
.org 0x11032e
	adds r6, r0, #0	@ 0011032e 061c
.org 0x110330
	bl 0x201c	@ 00110330 f1f674fe
.org 0x110334
	ldr r5, [pc, #92]	@ 00110334 174d
.org 0x110336
	ldr r1, [pc, #96]	@ 00110336 1849
.org 0x110338
	adds r0, r5, r1	@ 00110338 6818
.org 0x11033a
	movs r4, #0	@ 0011033a 0024
.org 0x11033c
	movs r1, #32	@ 0011033c 2021
.org 0x11033e
	strb r1, [r0, #0]	@ 0011033e 0170
.org 0x110340
	ldr r2, [pc, #88]	@ 00110340 164a
.org 0x110342
	adds r0, r5, r2	@ 00110342 a818
.org 0x110344
	strb r1, [r0, #0]	@ 00110344 0170
.org 0x110346
	subs r2, #1	@ 00110346 013a
.org 0x110348
	adds r0, r5, r2	@ 00110348 a818
.org 0x11034a
	strb r1, [r0, #0]	@ 0011034a 0170
.org 0x11034c
	movs r1, #129	@ 0011034c 8121
.org 0x11034e
	lsls r1, r1, #3	@ 0011034e c900
.org 0x110350
	adds r0, r5, r1	@ 00110350 6818
.org 0x110352
	str r4, [r0, #0]	@ 00110352 0460
.org 0x110354
	bl 0x2348	@ 00110354 f1f6f8ff
.org 0x110358
	ldr r0, [pc, #68]	@ 00110358 1148
.org 0x11035a
	movs r2, #0	@ 0011035a 0022
.org 0x11035c
	mov r8, r2	@ 0011035c 9046
.org 0x11035e
	strh r4, [r0, #0]	@ 0011035e 0480
.org 0x110360
	ldr r1, [pc, #64]	@ 00110360 1049
.org 0x110362
	strh r4, [r1, #0]	@ 00110362 0c80
.org 0x110364
	movs r0, #255	@ 00110364 ff20
.org 0x110366
	strb r0, [r1, #14]	@ 00110366 8873
.org 0x110368
	ldr r0, [pc, #60]	@ 00110368 0f48
.org 0x11036a
	strh r4, [r0, #0]	@ 0011036a 0480
.org 0x11036c
	strh r4, [r5, #0]	@ 0011036c 2c80
.org 0x11036e
	bl 0x10d4a8	@ 0011036e fdf79bf8
.org 0x110372
	ldr r2, [pc, #56]	@ 00110372 0e4a
.org 0x110374
	ldrh r1, [r2, #0]	@ 00110374 1188
.org 0x110376
	ldr r0, [pc, #56]	@ 00110376 0e48
.org 0x110378
	ands r0, r1	@ 00110378 0840
.org 0x11037a
	ldr r1, [pc, #56]	@ 0011037a 0e49
.org 0x11037c
	ands r0, r1	@ 0011037c 0840
.org 0x11037e
	strh r0, [r2, #0]	@ 0011037e 1080
.org 0x110380
	movs r0, #1	@ 00110380 0120
.org 0x110382
	strb r0, [r6, #5]	@ 00110382 7071
.org 0x110384
	mov r0, r8	@ 00110384 4046
.org 0x110386
	strb r0, [r6, #6]	@ 00110386 b071
.org 0x110388
	strb r0, [r6, #7]	@ 00110388 f071
.org 0x11038a
	pop {r3}	@ 0011038a 08bc
.org 0x11038c
	mov r8, r3	@ 0011038c 9846
.org 0x11038e
	pop {r4, r5, r6}	@ 0011038e 70bc
.org 0x110390
	pop {r0}	@ 00110390 01bc
.org 0x110392
	bx r0	@ 00110392 0047

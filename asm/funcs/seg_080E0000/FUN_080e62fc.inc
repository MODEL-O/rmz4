@ FUN_080e62fc  entry 0x080e62fc  size 144
.thumb
.org 0xe62fc
FUN_080e62fc:
	push {r4, r5, lr}	@ 000e62fc 30b5
.org 0xe62fe
	adds r4, r0, #0	@ 000e62fe 041c
.org 0xe6300
	bl 0x1cc9c	@ 000e6300 36f7ccfc
.org 0xe6304
	ldrb r1, [r4, #10]	@ 000e6304 a17a
.org 0xe6306
	movs r0, #1	@ 000e6306 0120
.org 0xe6308
	movs r3, #0	@ 000e6308 0023
.org 0xe630a
	adds r2, r0, #0	@ 000e630a 021c
.org 0xe630c
	orrs r2, r1	@ 000e630c 0a43
.org 0xe630e
	movs r0, #2	@ 000e630e 0220
.org 0xe6310
	orrs r2, r0	@ 000e6310 0243
.org 0xe6312
	orrs r2, r3	@ 000e6312 1a43
.org 0xe6314
	strb r2, [r4, #10]	@ 000e6314 a272
.org 0xe6316
	ldr r1, [pc, #60]	@ 000e6316 0f49
.org 0xe6318
	ldrb r0, [r4, #9]	@ 000e6318 607a
.org 0xe631a
	lsls r0, r0, #2	@ 000e631a 8000
.org 0xe631c
	adds r0, r0, r1	@ 000e631c 4018
.org 0xe631e
	movs r5, #1	@ 000e631e 0125
.org 0xe6320
	str r5, [r4, #12]	@ 000e6320 e560
.org 0xe6322
	ldr r0, [r0, #0]	@ 000e6322 0068
.org 0xe6324
	ldr r0, [r0, #4]	@ 000e6324 4068
.org 0xe6326
	str r0, [r4, #20]	@ 000e6326 6061
.org 0xe6328
	ldr r0, [pc, #44]	@ 000e6328 0b48
.org 0xe632a
	ldr r0, [r0, #0]	@ 000e632a 0068
.org 0xe632c
	ldr r1, [r0, #84]	@ 000e632c 416d
.org 0xe632e
	ldr r0, [r4, #84]	@ 000e632e 606d
.org 0xe6330
	cmp r1, r0	@ 000e6330 8142
.org 0xe6332
	ble.n 0xe635c	@ 000e6332 13dd
.org 0xe6334
	movs r0, #16	@ 000e6334 1020
.org 0xe6336
	orrs r2, r0	@ 000e6336 0243
.org 0xe6338
	strb r2, [r4, #10]	@ 000e6338 a272
.org 0xe633a
	adds r0, r4, #0	@ 000e633a 201c
.org 0xe633c
	adds r0, #76	@ 000e633c 4c30
.org 0xe633e
	strb r5, [r0, #0]	@ 000e633e 0570
.org 0xe6340
	adds r3, r4, #0	@ 000e6340 231c
.org 0xe6342
	adds r3, #74	@ 000e6342 4a33
.org 0xe6344
	movs r2, #16	@ 000e6344 1022
.org 0xe6346
	ldrb r1, [r3, #0]	@ 000e6346 1978
.org 0xe6348
	movs r0, #17	@ 000e6348 1120
.org 0xe634a
	negs r0, r0	@ 000e634a 4042
.org 0xe634c
	ands r0, r1	@ 000e634c 0840
.org 0xe634e
	orrs r0, r2	@ 000e634e 1043
.org 0xe6350
	strb r0, [r3, #0]	@ 000e6350 1870
.org 0xe6352
	b.n 0xe6378	@ 000e6352 11e0
.org 0xe6354
	.byte 0x64,0x6f,0x86,0x08	@ 000e6354 data
.org 0xe6358
	.byte 0xf0,0xdb,0x02,0x02	@ 000e6358 data
.org 0xe635c
	movs r1, #0	@ 000e635c 0021
.org 0xe635e
	movs r0, #239	@ 000e635e ef20
.org 0xe6360
	ands r2, r0	@ 000e6360 0240
.org 0xe6362
	strb r2, [r4, #10]	@ 000e6362 a272
.org 0xe6364
	adds r0, r4, #0	@ 000e6364 201c
.org 0xe6366
	adds r0, #76	@ 000e6366 4c30
.org 0xe6368
	strb r1, [r0, #0]	@ 000e6368 0170
.org 0xe636a
	adds r2, r4, #0	@ 000e636a 221c
.org 0xe636c
	adds r2, #74	@ 000e636c 4a32
.org 0xe636e
	ldrb r1, [r2, #0]	@ 000e636e 1178
.org 0xe6370
	movs r0, #17	@ 000e6370 1120
.org 0xe6372
	negs r0, r0	@ 000e6372 4042
.org 0xe6374
	ands r0, r1	@ 000e6374 0840
.org 0xe6376
	strb r0, [r2, #0]	@ 000e6376 1070
.org 0xe6378
	ldr r0, [pc, #24]	@ 000e6378 0648
.org 0xe637a
	ldrb r1, [r4, #16]	@ 000e637a 217c
.org 0xe637c
	lsls r1, r1, #2	@ 000e637c 8900
.org 0xe637e
	adds r1, r1, r0	@ 000e637e 0918
.org 0xe6380
	ldr r1, [r1, #0]	@ 000e6380 0968
.org 0xe6382
	adds r0, r4, #0	@ 000e6382 201c
.org 0xe6384
	bl 0x128f80	@ 000e6384 42f0fcfd
.org 0xe6388
	adds r0, r4, #0	@ 000e6388 201c
.org 0xe638a
	bl 0xe6398	@ 000e638a 00f005f8

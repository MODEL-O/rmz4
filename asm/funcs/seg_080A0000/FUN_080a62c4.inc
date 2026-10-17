@ FUN_080a62c4  entry 0x080a62c4  size 216
.thumb
.org 0xa62c4
FUN_080a62c4:
	push {r4, r5, r6, lr}	@ 000a62c4 70b5
.org 0xa62c6
	adds r4, r0, #0	@ 000a62c6 041c
.org 0xa62c8
	ldrb r5, [r4, #14]	@ 000a62c8 a57b
.org 0xa62ca
	cmp r5, #0	@ 000a62ca 002d
.org 0xa62cc
	bne.n 0xa6324	@ 000a62cc 2ad1
.org 0xa62ce
	ldrb r0, [r4, #19]	@ 000a62ce e07c
.org 0xa62d0
	cmp r0, #0	@ 000a62d0 0028
.org 0xa62d2
	bne.n 0xa62de	@ 000a62d2 04d1
.org 0xa62d4
	adds r0, r4, #0	@ 000a62d4 201c
.org 0xa62d6
	adds r0, #116	@ 000a62d6 7430
.org 0xa62d8
	ldr r1, [pc, #52]	@ 000a62d8 0d49
.org 0xa62da
	bl 0x5784	@ 000a62da 5ff753fa
.org 0xa62de
	str r5, [r4, #92]	@ 000a62de e565
.org 0xa62e0
	str r5, [r4, #96]	@ 000a62e0 2566
.org 0xa62e2
	movs r0, #50	@ 000a62e2 3220
.org 0xa62e4
	strb r0, [r4, #18]	@ 000a62e4 a074
.org 0xa62e6
	ldr r1, [pc, #44]	@ 000a62e6 0b49
.org 0xa62e8
	ldrb r0, [r4, #19]	@ 000a62e8 e07c
.org 0xa62ea
	lsls r0, r0, #1	@ 000a62ea 4000
.org 0xa62ec
	adds r0, r0, r1	@ 000a62ec 4018
.org 0xa62ee
	ldrh r1, [r0, #0]	@ 000a62ee 0188
.org 0xa62f0
	adds r0, r4, #0	@ 000a62f0 201c
.org 0xa62f2
	bl 0x1cf00	@ 000a62f2 76f705fe
.org 0xa62f6
	adds r0, r4, #0	@ 000a62f6 201c
.org 0xa62f8
	bl 0xa66b4	@ 000a62f8 00f0dcf9
.org 0xa62fc
	lsls r0, r0, #24	@ 000a62fc 0006
.org 0xa62fe
	lsrs r1, r0, #24	@ 000a62fe 010e
.org 0xa6300
	cmp r1, #2	@ 000a6300 0229
.org 0xa6302
	bne.n 0xa6318	@ 000a6302 09d1
.org 0xa6304
	movs r0, #30	@ 000a6304 1e20
.org 0xa6306
	strb r0, [r4, #18]	@ 000a6306 a074
.org 0xa6308
	strb r1, [r4, #13]	@ 000a6308 6173
.org 0xa630a
	strb r5, [r4, #14]	@ 000a630a a573
.org 0xa630c
	b.n 0xa63a0	@ 000a630c 48e0
.org 0xa630e
	.byte 0x00	@ 000a630e data
.org 0xa630f
	.byte 0x00	@ 000a630f data
.org 0xa6310
	.byte 0x94,0x24,0x86,0x08	@ 000a6310 data
.org 0xa6314
	.byte 0x54,0x25,0x86,0x08	@ 000a6314 data
.org 0xa6318
	adds r0, r4, #0	@ 000a6318 201c
.org 0xa631a
	bl 0xa67d8	@ 000a631a 00f05dfa
.org 0xa631e
	ldrb r0, [r4, #14]	@ 000a631e a07b
.org 0xa6320
	adds r0, #1	@ 000a6320 0130
.org 0xa6322
	strb r0, [r4, #14]	@ 000a6322 a073
.org 0xa6324
	adds r0, r4, #0	@ 000a6324 201c
.org 0xa6326
	bl 0xa669c	@ 000a6326 00f0b9f9
.org 0xa632a
	lsls r0, r0, #24	@ 000a632a 0006
.org 0xa632c
	cmp r0, #0	@ 000a632c 0028
.org 0xa632e
	beq.n 0xa634a	@ 000a632e 0cd0
.org 0xa6330
	ldrb r0, [r4, #19]	@ 000a6330 e07c
.org 0xa6332
	cmp r0, #2	@ 000a6332 0228
.org 0xa6334
	bne.n 0xa6340	@ 000a6334 04d1
.org 0xa6336
	movs r1, #0	@ 000a6336 0021
.org 0xa6338
	movs r0, #4	@ 000a6338 0420
.org 0xa633a
	strb r0, [r4, #13]	@ 000a633a 6073
.org 0xa633c
	strb r1, [r4, #19]	@ 000a633c e174
.org 0xa633e
	b.n 0xa6344	@ 000a633e 01e0
.org 0xa6340
	movs r0, #3	@ 000a6340 0320
.org 0xa6342
	strb r0, [r4, #13]	@ 000a6342 6073
.org 0xa6344
	movs r0, #0	@ 000a6344 0020
.org 0xa6346
	strb r0, [r4, #14]	@ 000a6346 a073
.org 0xa6348
	b.n 0xa63a0	@ 000a6348 2ae0
.org 0xa634a
	ldr r0, [r4, #84]	@ 000a634a 606d
.org 0xa634c
	ldr r1, [r4, #92]	@ 000a634c e16d
.org 0xa634e
	adds r0, r0, r1	@ 000a634e 4018
.org 0xa6350
	str r0, [r4, #84]	@ 000a6350 6065
.org 0xa6352
	ldr r0, [r4, #88]	@ 000a6352 a06d
.org 0xa6354
	ldr r3, [r4, #96]	@ 000a6354 236e
.org 0xa6356
	adds r2, r0, r3	@ 000a6356 c218
.org 0xa6358
	str r2, [r4, #88]	@ 000a6358 a265
.org 0xa635a
	ldrb r0, [r4, #16]	@ 000a635a 207c
.org 0xa635c
	adds r5, r1, #0	@ 000a635c 0d1c
.org 0xa635e
	cmp r0, #0	@ 000a635e 0028
.org 0xa6360
	bne.n 0xa6380	@ 000a6360 0ed1
.org 0xa6362
	ldr r0, [pc, #68]	@ 000a6362 1148
.org 0xa6364
	ldr r1, [pc, #68]	@ 000a6364 1149
.org 0xa6366
	adds r0, r0, r1	@ 000a6366 4018
.org 0xa6368
	ldr r6, [pc, #68]	@ 000a6368 114e
.org 0xa636a
	adds r1, r2, r6	@ 000a636a 9119
.org 0xa636c
	ldr r0, [r0, #0]	@ 000a636c 0068
.org 0xa636e
	cmp r0, r1	@ 000a636e 8842
.org 0xa6370
	ble.n 0xa6380	@ 000a6370 06dd
.org 0xa6372
	lsls r0, r3, #8	@ 000a6372 1802
.org 0xa6374
	negs r0, r0	@ 000a6374 4042
.org 0xa6376
	cmp r0, #0	@ 000a6376 0028
.org 0xa6378
	bge.n 0xa637c	@ 000a6378 00da
.org 0xa637a
	adds r0, #255	@ 000a637a ff30
.org 0xa637c
	asrs r0, r0, #8	@ 000a637c 0012
.org 0xa637e
	str r0, [r4, #96]	@ 000a637e 2066
.org 0xa6380
	adds r2, r4, #0	@ 000a6380 221c
.org 0xa6382
	adds r2, #192	@ 000a6382 c032
.org 0xa6384
	ldr r1, [r2, #0]	@ 000a6384 1168
.org 0xa6386
	ldr r0, [pc, #44]	@ 000a6386 0b48
.org 0xa6388
	cmp r1, r0	@ 000a6388 8142
.org 0xa638a
	bgt.n 0xa63a0	@ 000a638a 09dc
.org 0xa638c
	ldr r0, [r4, #100]	@ 000a638c 606e
.org 0xa638e
	adds r0, r5, r0	@ 000a638e 2818
.org 0xa6390
	str r0, [r4, #92]	@ 000a6390 e065
.org 0xa6392
	ldr r0, [r4, #96]	@ 000a6392 206e
.org 0xa6394
	ldr r1, [r4, #104]	@ 000a6394 a16e
.org 0xa6396
	adds r0, r0, r1	@ 000a6396 4018
.org 0xa6398
	str r0, [r4, #96]	@ 000a6398 2066
.org 0xa639a
	ldr r0, [r2, #0]	@ 000a639a 1068

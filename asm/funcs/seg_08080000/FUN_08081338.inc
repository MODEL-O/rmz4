@ FUN_08081338  entry 0x08081338  size 146
.thumb
.org 0x81338
FUN_08081338:
	push {r4, r5, lr}	@ 00081338 30b5
.org 0x8133a
	adds r5, r0, #0	@ 0008133a 051c
.org 0x8133c
	movs r4, #0	@ 0008133c 0024
.org 0x8133e
	ldr r1, [pc, #140]	@ 0008133e 2349
.org 0x81340
	ldrb r0, [r5, #9]	@ 00081340 687a
.org 0x81342
	lsls r0, r0, #2	@ 00081342 8000
.org 0x81344
	adds r0, r0, r1	@ 00081344 4018
.org 0x81346
	movs r1, #1	@ 00081346 0121
.org 0x81348
	str r1, [r5, #12]	@ 00081348 e960
.org 0x8134a
	ldr r0, [r0, #0]	@ 0008134a 0068
.org 0x8134c
	ldr r0, [r0, #4]	@ 0008134c 4068
.org 0x8134e
	str r0, [r5, #20]	@ 0008134e 6861
.org 0x81350
	strb r4, [r5, #13]	@ 00081350 6c73
.org 0x81352
	strb r4, [r5, #14]	@ 00081352 ac73
.org 0x81354
	strb r4, [r5, #15]	@ 00081354 ec73
.org 0x81356
	ldrb r1, [r5, #10]	@ 00081356 a97a
.org 0x81358
	movs r0, #254	@ 00081358 fe20
.org 0x8135a
	ands r0, r1	@ 0008135a 0840
.org 0x8135c
	movs r1, #2	@ 0008135c 0221
.org 0x8135e
	orrs r0, r1	@ 0008135e 0843
.org 0x81360
	strb r0, [r5, #10]	@ 00081360 a872
.org 0x81362
	adds r0, r5, #0	@ 00081362 281c
.org 0x81364
	adds r0, #181	@ 00081364 b530
.org 0x81366
	strb r4, [r0, #0]	@ 00081366 0470
.org 0x81368
	adds r1, r5, #0	@ 00081368 291c
.org 0x8136a
	adds r1, #184	@ 0008136a b831
.org 0x8136c
	ldr r0, [r5, #84]	@ 0008136c 686d
.org 0x8136e
	str r0, [r1, #0]	@ 0008136e 0860
.org 0x81370
	adds r1, #4	@ 00081370 0431
.org 0x81372
	ldr r0, [r5, #88]	@ 00081372 a86d
.org 0x81374
	str r0, [r1, #0]	@ 00081374 0860
.org 0x81376
	adds r0, r5, #0	@ 00081376 281c
.org 0x81378
	adds r0, #182	@ 00081378 b630
.org 0x8137a
	strb r4, [r0, #0]	@ 0008137a 0470
.org 0x8137c
	str r4, [r5, #44]	@ 0008137c ec62
.org 0x8137e
	adds r0, r5, #0	@ 0008137e 281c
.org 0x81380
	bl 0x1cc9c	@ 00081380 9bf78cfc
.org 0x81384
	ldrb r1, [r5, #10]	@ 00081384 a97a
.org 0x81386
	movs r0, #239	@ 00081386 ef20
.org 0x81388
	ands r0, r1	@ 00081388 0840
.org 0x8138a
	strb r0, [r5, #10]	@ 0008138a a872
.org 0x8138c
	adds r0, r5, #0	@ 0008138c 281c
.org 0x8138e
	adds r0, #76	@ 0008138e 4c30
.org 0x81390
	strb r4, [r0, #0]	@ 00081390 0470
.org 0x81392
	adds r2, r5, #0	@ 00081392 2a1c
.org 0x81394
	adds r2, #74	@ 00081394 4a32
.org 0x81396
	ldrb r1, [r2, #0]	@ 00081396 1178
.org 0x81398
	movs r0, #17	@ 00081398 1120
.org 0x8139a
	negs r0, r0	@ 0008139a 4042
.org 0x8139c
	ands r0, r1	@ 0008139c 0840
.org 0x8139e
	strb r0, [r2, #0]	@ 0008139e 1070
.org 0x813a0
	ldrb r1, [r5, #10]	@ 000813a0 a97a
.org 0x813a2
	movs r0, #4	@ 000813a2 0420
.org 0x813a4
	orrs r0, r1	@ 000813a4 0843
.org 0x813a6
	strb r0, [r5, #10]	@ 000813a6 a872
.org 0x813a8
	adds r4, r5, #0	@ 000813a8 2c1c
.org 0x813aa
	adds r4, #116	@ 000813aa 7434
.org 0x813ac
	ldr r1, [pc, #32]	@ 000813ac 0849
.org 0x813ae
	adds r2, #10	@ 000813ae 0a32
.org 0x813b0
	adds r0, r4, #0	@ 000813b0 201c
.org 0x813b2
	movs r3, #4	@ 000813b2 0423
.org 0x813b4
	bl 0x5760	@ 000813b4 84f7d4f9
.org 0x813b8
	str r5, [r4, #44]	@ 000813b8 e562
.org 0x813ba
	ldr r0, [pc, #24]	@ 000813ba 0648
.org 0x813bc
	str r0, [r4, #36]	@ 000813bc 6062
.org 0x813be
	adds r0, r5, #0	@ 000813be 281c
.org 0x813c0
	bl 0x813d8	@ 000813c0 00f00af8
.org 0x813c4
	pop {r4, r5}	@ 000813c4 30bc
.org 0x813c6
	pop {r0}	@ 000813c6 01bc
.org 0x813c8
	bx r0	@ 000813c8 0047

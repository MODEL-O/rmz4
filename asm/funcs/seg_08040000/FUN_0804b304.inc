@ FUN_0804b304  entry 0x0804b304  size 118
.thumb
.org 0x4b304
FUN_0804b304:
	push {r4, lr}	@ 0004b304 10b5
.org 0x4b306
	adds r4, r0, #0	@ 0004b306 041c
.org 0x4b308
	bl 0x1cff0	@ 0004b308 d1f772fe
.org 0x4b30c
	ldr r0, [r4, #84]	@ 0004b30c 606d
.org 0x4b30e
	ldr r1, [r4, #92]	@ 0004b30e e16d
.org 0x4b310
	adds r0, r0, r1	@ 0004b310 4018
.org 0x4b312
	str r0, [r4, #84]	@ 0004b312 6065
.org 0x4b314
	ldr r0, [r4, #88]	@ 0004b314 a06d
.org 0x4b316
	ldr r1, [r4, #96]	@ 0004b316 216e
.org 0x4b318
	adds r0, r0, r1	@ 0004b318 4018
.org 0x4b31a
	str r0, [r4, #88]	@ 0004b31a a065
.org 0x4b31c
	adds r1, #64	@ 0004b31c 4031
.org 0x4b31e
	str r1, [r4, #96]	@ 0004b31e 2166
.org 0x4b320
	movs r0, #224	@ 0004b320 e020
.org 0x4b322
	lsls r0, r0, #3	@ 0004b322 c000
.org 0x4b324
	cmp r1, r0	@ 0004b324 8142
.org 0x4b326
	ble.n 0x4b32a	@ 0004b326 00dd
.org 0x4b328
	str r0, [r4, #96]	@ 0004b328 2066
.org 0x4b32a
	ldr r0, [r4, #84]	@ 0004b32a 606d
.org 0x4b32c
	ldr r1, [r4, #88]	@ 0004b32c a16d
.org 0x4b32e
	bl 0x7c7c	@ 0004b32e bcf7a5fc
.org 0x4b332
	lsls r0, r0, #16	@ 0004b332 0004
.org 0x4b334
	lsrs r1, r0, #16	@ 0004b334 010c
.org 0x4b336
	movs r0, #15	@ 0004b336 0f20
.org 0x4b338
	ands r0, r1	@ 0004b338 0840
.org 0x4b33a
	cmp r0, #15	@ 0004b33a 0f28
.org 0x4b33c
	beq.n 0x4b34e	@ 0004b33c 07d0
.org 0x4b33e
	movs r0, #128	@ 0004b33e 8020
.org 0x4b340
	lsls r0, r0, #8	@ 0004b340 0002
.org 0x4b342
	ands r0, r1	@ 0004b342 0840
.org 0x4b344
	cmp r0, #0	@ 0004b344 0028
.org 0x4b346
	beq.n 0x4b34a	@ 0004b346 00d0
.org 0x4b348
	movs r1, #0	@ 0004b348 0021
.org 0x4b34a
	cmp r1, #0	@ 0004b34a 0029
.org 0x4b34c
	bne.n 0x4b35c	@ 0004b34c 06d1
.org 0x4b34e
	adds r0, r4, #0	@ 0004b34e 201c
.org 0x4b350
	adds r0, #140	@ 0004b350 8c30
.org 0x4b352
	ldr r0, [r0, #0]	@ 0004b352 0068
.org 0x4b354
	ldr r1, [pc, #36]	@ 0004b354 0949
.org 0x4b356
	ands r0, r1	@ 0004b356 0840
.org 0x4b358
	cmp r0, #0	@ 0004b358 0028
.org 0x4b35a
	beq.n 0x4b374	@ 0004b35a 0bd0
.org 0x4b35c
	ldr r1, [pc, #32]	@ 0004b35c 0849
.org 0x4b35e
	ldrb r0, [r4, #9]	@ 0004b35e 607a
.org 0x4b360
	lsls r0, r0, #2	@ 0004b360 8000
.org 0x4b362
	adds r0, r0, r1	@ 0004b362 4018
.org 0x4b364
	movs r1, #2	@ 0004b364 0221
.org 0x4b366
	str r1, [r4, #12]	@ 0004b366 e160
.org 0x4b368
	ldr r0, [r0, #0]	@ 0004b368 0068
.org 0x4b36a
	ldr r0, [r0, #8]	@ 0004b36a 8068
.org 0x4b36c
	str r0, [r4, #20]	@ 0004b36c 6061
.org 0x4b36e
	adds r0, r4, #0	@ 0004b36e 201c
.org 0x4b370
	bl 0x4b384	@ 0004b370 00f008f8
.org 0x4b374
	pop {r4}	@ 0004b374 10bc
.org 0x4b376
	pop {r0}	@ 0004b376 01bc
.org 0x4b378
	bx r0	@ 0004b378 0047

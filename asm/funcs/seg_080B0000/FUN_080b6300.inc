@ FUN_080b6300  entry 0x080b6300  size 92
.thumb
.org 0xb6300
FUN_080b6300:
	push {r4, r5, lr}	@ 000b6300 30b5
.org 0xb6302
	adds r4, r0, #0	@ 000b6302 041c
.org 0xb6304
	ldrb r5, [r4, #15]	@ 000b6304 e57b
.org 0xb6306
	cmp r5, #0	@ 000b6306 002d
.org 0xb6308
	bne.n 0xb6318	@ 000b6308 06d1
.org 0xb630a
	ldr r1, [pc, #80]	@ 000b630a 1449
.org 0xb630c
	bl 0x1cf00	@ 000b630c 66f7f8fd
.org 0xb6310
	str r5, [r4, #96]	@ 000b6310 2566
.org 0xb6312
	ldrb r0, [r4, #15]	@ 000b6312 e07b
.org 0xb6314
	adds r0, #1	@ 000b6314 0130
.org 0xb6316
	strb r0, [r4, #15]	@ 000b6316 e073
.org 0xb6318
	adds r0, r4, #0	@ 000b6318 201c
.org 0xb631a
	bl 0x1cff0	@ 000b631a 66f769fe
.org 0xb631e
	ldr r0, [r4, #88]	@ 000b631e a06d
.org 0xb6320
	ldr r1, [r4, #96]	@ 000b6320 216e
.org 0xb6322
	adds r0, r0, r1	@ 000b6322 4018
.org 0xb6324
	str r0, [r4, #88]	@ 000b6324 a065
.org 0xb6326
	adds r1, #64	@ 000b6326 4031
.org 0xb6328
	str r1, [r4, #96]	@ 000b6328 2166
.org 0xb632a
	movs r0, #224	@ 000b632a e020
.org 0xb632c
	lsls r0, r0, #3	@ 000b632c c000
.org 0xb632e
	cmp r1, r0	@ 000b632e 8142
.org 0xb6330
	ble.n 0xb6334	@ 000b6330 00dd
.org 0xb6332
	str r0, [r4, #96]	@ 000b6332 2066
.org 0xb6334
	ldr r0, [r4, #84]	@ 000b6334 606d
.org 0xb6336
	ldr r1, [r4, #88]	@ 000b6336 a16d
.org 0xb6338
	bl 0x7c7c	@ 000b6338 51f7a0fc
.org 0xb633c
	lsls r0, r0, #16	@ 000b633c 0004
.org 0xb633e
	cmp r0, #0	@ 000b633e 0028
.org 0xb6340
	beq.n 0xb6356	@ 000b6340 09d0
.org 0xb6342
	ldr r0, [r4, #84]	@ 000b6342 606d
.org 0xb6344
	ldr r1, [r4, #88]	@ 000b6344 a16d
.org 0xb6346
	bl 0x8534	@ 000b6346 52f7f5f8
.org 0xb634a
	str r0, [r4, #88]	@ 000b634a a065
.org 0xb634c
	movs r1, #0	@ 000b634c 0021
.org 0xb634e
	movs r0, #1	@ 000b634e 0120
.org 0xb6350
	strb r0, [r4, #13]	@ 000b6350 6073
.org 0xb6352
	strb r1, [r4, #14]	@ 000b6352 a173
.org 0xb6354
	strb r1, [r4, #15]	@ 000b6354 e173
.org 0xb6356
	pop {r4, r5}	@ 000b6356 30bc
.org 0xb6358
	pop {r0}	@ 000b6358 01bc
.org 0xb635a
	bx r0	@ 000b635a 0047

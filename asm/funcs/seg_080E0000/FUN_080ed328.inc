@ FUN_080ed328  entry 0x080ed328  size 70
.thumb
.org 0xed328
FUN_080ed328:
	push {r4, lr}	@ 000ed328 10b5
.org 0xed32a
	adds r4, r0, #0	@ 000ed32a 041c
.org 0xed32c
	bl 0x1cc9c	@ 000ed32c 2ff7b6fc
.org 0xed330
	ldrb r1, [r4, #10]	@ 000ed330 a17a
.org 0xed332
	movs r0, #1	@ 000ed332 0120
.org 0xed334
	orrs r0, r1	@ 000ed334 0843
.org 0xed336
	movs r1, #2	@ 000ed336 0221
.org 0xed338
	orrs r0, r1	@ 000ed338 0843
.org 0xed33a
	strb r0, [r4, #10]	@ 000ed33a a072
.org 0xed33c
	movs r1, #224	@ 000ed33c e021
.org 0xed33e
	lsls r1, r1, #6	@ 000ed33e 8901
.org 0xed340
	adds r0, r4, #0	@ 000ed340 201c
.org 0xed342
	bl 0x1cf00	@ 000ed342 2ff7ddfd
.org 0xed346
	adds r1, r4, #0	@ 000ed346 211c
.org 0xed348
	adds r1, #84	@ 000ed348 5431
.org 0xed34a
	adds r0, r4, #0	@ 000ed34a 201c
.org 0xed34c
	bl 0xed3c4	@ 000ed34c 00f03af8
.org 0xed350
	ldr r1, [pc, #28]	@ 000ed350 0749
.org 0xed352
	ldrb r0, [r4, #9]	@ 000ed352 607a
.org 0xed354
	lsls r0, r0, #2	@ 000ed354 8000
.org 0xed356
	adds r0, r0, r1	@ 000ed356 4018
.org 0xed358
	movs r1, #1	@ 000ed358 0121
.org 0xed35a
	str r1, [r4, #12]	@ 000ed35a e160
.org 0xed35c
	ldr r0, [r0, #0]	@ 000ed35c 0068
.org 0xed35e
	ldr r0, [r0, #4]	@ 000ed35e 4068
.org 0xed360
	str r0, [r4, #20]	@ 000ed360 6061
.org 0xed362
	adds r0, r4, #0	@ 000ed362 201c
.org 0xed364
	bl 0xed374	@ 000ed364 00f006f8
.org 0xed368
	pop {r4}	@ 000ed368 10bc
.org 0xed36a
	pop {r0}	@ 000ed36a 01bc
.org 0xed36c
	bx r0	@ 000ed36c 0047

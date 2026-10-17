@ FUN_0810b32c  entry 0x0810b32c  size 92
.thumb
.org 0x10b32c
FUN_0810b32c:
	push {r4, lr}	@ 0010b32c 10b5
.org 0x10b32e
	adds r4, r0, #0	@ 0010b32e 041c
.org 0x10b330
	bl 0x1cc9c	@ 0010b330 11f7b4fc
.org 0x10b334
	ldrb r1, [r4, #10]	@ 0010b334 a17a
.org 0x10b336
	movs r0, #1	@ 0010b336 0120
.org 0x10b338
	movs r2, #0	@ 0010b338 0022
.org 0x10b33a
	orrs r0, r1	@ 0010b33a 0843
.org 0x10b33c
	movs r1, #2	@ 0010b33c 0221
.org 0x10b33e
	orrs r0, r1	@ 0010b33e 0843
.org 0x10b340
	strb r0, [r4, #10]	@ 0010b340 a072
.org 0x10b342
	adds r0, r4, #0	@ 0010b342 201c
.org 0x10b344
	adds r0, #76	@ 0010b344 4c30
.org 0x10b346
	strb r2, [r0, #0]	@ 0010b346 0270
.org 0x10b348
	adds r2, r4, #0	@ 0010b348 221c
.org 0x10b34a
	adds r2, #74	@ 0010b34a 4a32
.org 0x10b34c
	ldrb r1, [r2, #0]	@ 0010b34c 1178
.org 0x10b34e
	movs r0, #17	@ 0010b34e 1120
.org 0x10b350
	negs r0, r0	@ 0010b350 4042
.org 0x10b352
	ands r0, r1	@ 0010b352 0840
.org 0x10b354
	strb r0, [r2, #0]	@ 0010b354 1070
.org 0x10b356
	ldrb r1, [r4, #10]	@ 0010b356 a17a
.org 0x10b358
	movs r0, #239	@ 0010b358 ef20
.org 0x10b35a
	ands r0, r1	@ 0010b35a 0840
.org 0x10b35c
	strb r0, [r4, #10]	@ 0010b35c a072
.org 0x10b35e
	movs r0, #192	@ 0010b35e c020
.org 0x10b360
	lsls r0, r0, #9	@ 0010b360 4002
.org 0x10b362
	str r0, [r4, #84]	@ 0010b362 6065
.org 0x10b364
	movs r0, #192	@ 0010b364 c020
.org 0x10b366
	lsls r0, r0, #5	@ 0010b366 4001
.org 0x10b368
	str r0, [r4, #88]	@ 0010b368 a065
.org 0x10b36a
	ldr r1, [pc, #28]	@ 0010b36a 0749
.org 0x10b36c
	ldrb r0, [r4, #9]	@ 0010b36c 607a
.org 0x10b36e
	lsls r0, r0, #2	@ 0010b36e 8000
.org 0x10b370
	adds r0, r0, r1	@ 0010b370 4018
.org 0x10b372
	movs r1, #1	@ 0010b372 0121
.org 0x10b374
	str r1, [r4, #12]	@ 0010b374 e160
.org 0x10b376
	ldr r0, [r0, #0]	@ 0010b376 0068
.org 0x10b378
	ldr r0, [r0, #4]	@ 0010b378 4068
.org 0x10b37a
	str r0, [r4, #20]	@ 0010b37a 6061
.org 0x10b37c
	adds r0, r4, #0	@ 0010b37c 201c
.org 0x10b37e
	bl 0x10b148	@ 0010b37e fff7e3fe
.org 0x10b382
	pop {r4}	@ 0010b382 10bc
.org 0x10b384
	pop {r0}	@ 0010b384 01bc
.org 0x10b386
	bx r0	@ 0010b386 0047

@ FUN_080d833c  entry 0x080d833c  size 90
.thumb
.org 0xd833c
FUN_080d833c:
	push {r4, lr}	@ 000d833c 10b5
.org 0xd833e
	adds r4, r0, #0	@ 000d833e 041c
.org 0xd8340
	ldr r1, [pc, #84]	@ 000d8340 1549
.org 0xd8342
	ldrb r0, [r4, #9]	@ 000d8342 607a
.org 0xd8344
	lsls r0, r0, #2	@ 000d8344 8000
.org 0xd8346
	adds r0, r0, r1	@ 000d8346 4018
.org 0xd8348
	movs r1, #1	@ 000d8348 0121
.org 0xd834a
	str r1, [r4, #12]	@ 000d834a e160
.org 0xd834c
	ldr r0, [r0, #0]	@ 000d834c 0068
.org 0xd834e
	ldr r0, [r0, #4]	@ 000d834e 4068
.org 0xd8350
	str r0, [r4, #20]	@ 000d8350 6061
.org 0xd8352
	ldrb r1, [r4, #10]	@ 000d8352 a17a
.org 0xd8354
	movs r0, #1	@ 000d8354 0120
.org 0xd8356
	orrs r0, r1	@ 000d8356 0843
.org 0xd8358
	movs r1, #2	@ 000d8358 0221
.org 0xd835a
	orrs r0, r1	@ 000d835a 0843
.org 0xd835c
	strb r0, [r4, #10]	@ 000d835c a072
.org 0xd835e
	adds r0, r4, #0	@ 000d835e 201c
.org 0xd8360
	bl 0x1cc9c	@ 000d8360 44f79cfc
.org 0xd8364
	movs r2, #0	@ 000d8364 0022
.org 0xd8366
	ldrb r1, [r4, #10]	@ 000d8366 a17a
.org 0xd8368
	movs r0, #239	@ 000d8368 ef20
.org 0xd836a
	ands r0, r1	@ 000d836a 0840
.org 0xd836c
	strb r0, [r4, #10]	@ 000d836c a072
.org 0xd836e
	adds r0, r4, #0	@ 000d836e 201c
.org 0xd8370
	adds r0, #76	@ 000d8370 4c30
.org 0xd8372
	strb r2, [r0, #0]	@ 000d8372 0270
.org 0xd8374
	adds r2, r4, #0	@ 000d8374 221c
.org 0xd8376
	adds r2, #74	@ 000d8376 4a32
.org 0xd8378
	ldrb r1, [r2, #0]	@ 000d8378 1178
.org 0xd837a
	movs r0, #17	@ 000d837a 1120
.org 0xd837c
	negs r0, r0	@ 000d837c 4042
.org 0xd837e
	ands r0, r1	@ 000d837e 0840
.org 0xd8380
	strb r0, [r2, #0]	@ 000d8380 1070
.org 0xd8382
	ldr r1, [pc, #24]	@ 000d8382 0649
.org 0xd8384
	adds r0, r4, #0	@ 000d8384 201c
.org 0xd8386
	bl 0x1cf00	@ 000d8386 44f7bbfd
.org 0xd838a
	adds r0, r4, #0	@ 000d838a 201c
.org 0xd838c
	bl 0xd83a0	@ 000d838c 00f008f8
.org 0xd8390
	pop {r4}	@ 000d8390 10bc
.org 0xd8392
	pop {r0}	@ 000d8392 01bc
.org 0xd8394
	bx r0	@ 000d8394 0047

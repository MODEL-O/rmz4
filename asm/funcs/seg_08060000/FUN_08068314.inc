@ FUN_08068314  entry 0x08068314  size 128
.thumb
.org 0x68314
FUN_08068314:
	push {r4, r5, lr}	@ 00068314 30b5
.org 0x68316
	adds r4, r0, #0	@ 00068316 041c
.org 0x68318
	ldrb r2, [r4, #14]	@ 00068318 a27b
.org 0x6831a
	adds r1, r2, #0	@ 0006831a 111c
.org 0x6831c
	cmp r1, #0	@ 0006831c 0029
.org 0x6831e
	bne.n 0x6832c	@ 0006831e 05d1
.org 0x68320
	str r1, [r4, #96]	@ 00068320 2166
.org 0x68322
	movs r0, #48	@ 00068322 3020
.org 0x68324
	strb r0, [r4, #18]	@ 00068324 a074
.org 0x68326
	strb r1, [r4, #15]	@ 00068326 e173
.org 0x68328
	adds r0, r2, #1	@ 00068328 501c
.org 0x6832a
	strb r0, [r4, #14]	@ 0006832a a073
.org 0x6832c
	adds r0, r4, #0	@ 0006832c 201c
.org 0x6832e
	bl 0x1cff0	@ 0006832e b4f75ffe
.org 0x68332
	ldrb r0, [r4, #15]	@ 00068332 e07b
.org 0x68334
	cmp r0, #0	@ 00068334 0028
.org 0x68336
	bne.n 0x68376	@ 00068336 1ed1
.org 0x68338
	ldr r1, [r4, #88]	@ 00068338 a16d
.org 0x6833a
	ldr r0, [r4, #96]	@ 0006833a 206e
.org 0x6833c
	adds r1, r1, r0	@ 0006833c 0918
.org 0x6833e
	str r1, [r4, #88]	@ 0006833e a165
.org 0x68340
	adds r0, #64	@ 00068340 4030
.org 0x68342
	str r0, [r4, #96]	@ 00068342 2066
.org 0x68344
	adds r5, r4, #0	@ 00068344 251c
.org 0x68346
	adds r5, #180	@ 00068346 b435
.org 0x68348
	ldr r0, [r5, #4]	@ 00068348 6868
.org 0x6834a
	movs r2, #160	@ 0006834a a022
.org 0x6834c
	lsls r2, r2, #5	@ 0006834c 5201
.org 0x6834e
	adds r0, r0, r2	@ 0006834e 8018
.org 0x68350
	cmp r1, r0	@ 00068350 8142
.org 0x68352
	ble.n 0x6838e	@ 00068352 1cdd
.org 0x68354
	movs r0, #95	@ 00068354 5f20
.org 0x68356
	bl 0x2b10	@ 00068356 9af7dbfb
.org 0x6835a
	adds r1, r4, #0	@ 0006835a 211c
.org 0x6835c
	adds r1, #84	@ 0006835c 5431
.org 0x6835e
	movs r0, #8	@ 0006835e 0820
.org 0x68360
	bl 0x1fe64	@ 00068360 b7f780fd
.org 0x68364
	ldr r0, [r5, #4]	@ 00068364 6868
.org 0x68366
	movs r1, #160	@ 00068366 a021
.org 0x68368
	lsls r1, r1, #5	@ 00068368 4901
.org 0x6836a
	adds r0, r0, r1	@ 0006836a 4018
.org 0x6836c
	str r0, [r4, #88]	@ 0006836c a065
.org 0x6836e
	ldrb r0, [r4, #15]	@ 0006836e e07b
.org 0x68370
	adds r0, #1	@ 00068370 0130
.org 0x68372
	strb r0, [r4, #15]	@ 00068372 e073
.org 0x68374
	b.n 0x6838e	@ 00068374 0be0
.org 0x68376
	ldrb r0, [r4, #18]	@ 00068376 a07c
.org 0x68378
	subs r0, #1	@ 00068378 0138
.org 0x6837a
	movs r1, #0	@ 0006837a 0021
.org 0x6837c
	strb r0, [r4, #18]	@ 0006837c a074
.org 0x6837e
	lsls r0, r0, #24	@ 0006837e 0006
.org 0x68380
	lsrs r0, r0, #24	@ 00068380 000e
.org 0x68382
	cmp r0, #255	@ 00068382 ff28
.org 0x68384
	bne.n 0x6838e	@ 00068384 03d1
.org 0x68386
	movs r0, #31	@ 00068386 1f20
.org 0x68388
	strb r0, [r4, #13]	@ 00068388 6073
.org 0x6838a
	strb r1, [r4, #14]	@ 0006838a a173
.org 0x6838c
	strb r1, [r4, #15]	@ 0006838c e173
.org 0x6838e
	pop {r4, r5}	@ 0006838e 30bc
.org 0x68390
	pop {r0}	@ 00068390 01bc
.org 0x68392
	bx r0	@ 00068392 0047

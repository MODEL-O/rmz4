@ FUN_0806f304  entry 0x0806f304  size 116
.thumb
.org 0x6f304
FUN_0806f304:
	push {r4, r5, lr}	@ 0006f304 30b5
.org 0x6f306
	sub sp, #16	@ 0006f306 84b0
.org 0x6f308
	adds r3, r0, #0	@ 0006f308 031c
.org 0x6f30a
	lsls r1, r1, #24	@ 0006f30a 0906
.org 0x6f30c
	lsrs r2, r1, #24	@ 0006f30c 0a0e
.org 0x6f30e
	movs r5, #0	@ 0006f30e 0025
.org 0x6f310
	movs r4, #0	@ 0006f310 0024
.org 0x6f312
	cmp r4, r2	@ 0006f312 9442
.org 0x6f314
	bge.n 0x6f32c	@ 0006f314 0ada
.org 0x6f316
	mov r0, sp	@ 0006f316 6846
.org 0x6f318
	adds r1, r0, r4	@ 0006f318 0119
.org 0x6f31a
	adds r0, r3, r4	@ 0006f31a 1819
.org 0x6f31c
	ldrb r0, [r0, #0]	@ 0006f31c 0078
.org 0x6f31e
	strb r0, [r1, #0]	@ 0006f31e 0870
.org 0x6f320
	adds r0, r0, r5	@ 0006f320 4019
.org 0x6f322
	lsls r0, r0, #24	@ 0006f322 0006
.org 0x6f324
	lsrs r5, r0, #24	@ 0006f324 050e
.org 0x6f326
	adds r4, #1	@ 0006f326 0134
.org 0x6f328
	cmp r4, r2	@ 0006f328 9442
.org 0x6f32a
	blt.n 0x6f316	@ 0006f32a f4db
.org 0x6f32c
	lsls r0, r5, #24	@ 0006f32c 2806
.org 0x6f32e
	asrs r3, r0, #24	@ 0006f32e 0316
.org 0x6f330
	cmp r3, #0	@ 0006f330 002b
.org 0x6f332
	bne.n 0x6f33a	@ 0006f332 02d1
.org 0x6f334
	movs r0, #1	@ 0006f334 0120
.org 0x6f336
	negs r0, r0	@ 0006f336 4042
.org 0x6f338
	b.n 0x6f370	@ 0006f338 1ae0
.org 0x6f33a
	ldr r2, [pc, #60]	@ 0006f33a 0f4a
.org 0x6f33c
	ldr r1, [r2, #0]	@ 0006f33c 1168
.org 0x6f33e
	ldr r0, [pc, #60]	@ 0006f33e 0f48
.org 0x6f340
	muls r0, r1	@ 0006f340 4843
.org 0x6f342
	ldr r1, [pc, #60]	@ 0006f342 0f49
.org 0x6f344
	adds r0, r0, r1	@ 0006f344 4018
.org 0x6f346
	lsls r0, r0, #1	@ 0006f346 4000
.org 0x6f348
	lsrs r1, r0, #1	@ 0006f348 4108
.org 0x6f34a
	str r1, [r2, #0]	@ 0006f34a 1160
.org 0x6f34c
	lsrs r0, r0, #17	@ 0006f34c 400c
.org 0x6f34e
	adds r1, r3, #0	@ 0006f34e 191c
.org 0x6f350
	bl 0x129198	@ 0006f350 b9f022ff
.org 0x6f354
	adds r1, r0, #0	@ 0006f354 011c
.org 0x6f356
	subs r4, #1	@ 0006f356 013c
.org 0x6f358
	cmp r4, #0	@ 0006f358 002c
.org 0x6f35a
	blt.n 0x6f36e	@ 0006f35a 08db
.org 0x6f35c
	mov r2, sp	@ 0006f35c 6a46
.org 0x6f35e
	adds r0, r2, r4	@ 0006f35e 1019
.org 0x6f360
	ldrb r0, [r0, #0]	@ 0006f360 0078
.org 0x6f362
	subs r0, r5, r0	@ 0006f362 281a
.org 0x6f364
	lsls r0, r0, #24	@ 0006f364 0006
.org 0x6f366
	lsrs r5, r0, #24	@ 0006f366 050e
.org 0x6f368
	asrs r0, r0, #24	@ 0006f368 0016
.org 0x6f36a
	cmp r1, r0	@ 0006f36a 8142
.org 0x6f36c
	blt.n 0x6f356	@ 0006f36c f3db
.org 0x6f36e
	adds r0, r4, #0	@ 0006f36e 201c
.org 0x6f370
	add sp, #16	@ 0006f370 04b0
.org 0x6f372
	pop {r4, r5}	@ 0006f372 30bc
.org 0x6f374
	pop {r1}	@ 0006f374 02bc
.org 0x6f376
	bx r1	@ 0006f376 0847

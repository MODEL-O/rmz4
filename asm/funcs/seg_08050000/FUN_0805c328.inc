@ FUN_0805c328  entry 0x0805c328  size 116
.thumb
.org 0x5c328
FUN_0805c328:
	push {r4, r5, lr}	@ 0005c328 30b5
.org 0x5c32a
	sub sp, #16	@ 0005c32a 84b0
.org 0x5c32c
	adds r3, r0, #0	@ 0005c32c 031c
.org 0x5c32e
	lsls r1, r1, #24	@ 0005c32e 0906
.org 0x5c330
	lsrs r2, r1, #24	@ 0005c330 0a0e
.org 0x5c332
	movs r5, #0	@ 0005c332 0025
.org 0x5c334
	movs r4, #0	@ 0005c334 0024
.org 0x5c336
	cmp r4, r2	@ 0005c336 9442
.org 0x5c338
	bge.n 0x5c350	@ 0005c338 0ada
.org 0x5c33a
	mov r0, sp	@ 0005c33a 6846
.org 0x5c33c
	adds r1, r0, r4	@ 0005c33c 0119
.org 0x5c33e
	adds r0, r3, r4	@ 0005c33e 1819
.org 0x5c340
	ldrb r0, [r0, #0]	@ 0005c340 0078
.org 0x5c342
	strb r0, [r1, #0]	@ 0005c342 0870
.org 0x5c344
	adds r0, r0, r5	@ 0005c344 4019
.org 0x5c346
	lsls r0, r0, #24	@ 0005c346 0006
.org 0x5c348
	lsrs r5, r0, #24	@ 0005c348 050e
.org 0x5c34a
	adds r4, #1	@ 0005c34a 0134
.org 0x5c34c
	cmp r4, r2	@ 0005c34c 9442
.org 0x5c34e
	blt.n 0x5c33a	@ 0005c34e f4db
.org 0x5c350
	lsls r0, r5, #24	@ 0005c350 2806
.org 0x5c352
	asrs r3, r0, #24	@ 0005c352 0316
.org 0x5c354
	cmp r3, #0	@ 0005c354 002b
.org 0x5c356
	bne.n 0x5c35e	@ 0005c356 02d1
.org 0x5c358
	movs r0, #1	@ 0005c358 0120
.org 0x5c35a
	negs r0, r0	@ 0005c35a 4042
.org 0x5c35c
	b.n 0x5c394	@ 0005c35c 1ae0
.org 0x5c35e
	ldr r2, [pc, #60]	@ 0005c35e 0f4a
.org 0x5c360
	ldr r1, [r2, #0]	@ 0005c360 1168
.org 0x5c362
	ldr r0, [pc, #60]	@ 0005c362 0f48
.org 0x5c364
	muls r0, r1	@ 0005c364 4843
.org 0x5c366
	ldr r1, [pc, #60]	@ 0005c366 0f49
.org 0x5c368
	adds r0, r0, r1	@ 0005c368 4018
.org 0x5c36a
	lsls r0, r0, #1	@ 0005c36a 4000
.org 0x5c36c
	lsrs r1, r0, #1	@ 0005c36c 4108
.org 0x5c36e
	str r1, [r2, #0]	@ 0005c36e 1160
.org 0x5c370
	lsrs r0, r0, #17	@ 0005c370 400c
.org 0x5c372
	adds r1, r3, #0	@ 0005c372 191c
.org 0x5c374
	bl 0x129198	@ 0005c374 ccf010ff
.org 0x5c378
	adds r1, r0, #0	@ 0005c378 011c
.org 0x5c37a
	subs r4, #1	@ 0005c37a 013c
.org 0x5c37c
	cmp r4, #0	@ 0005c37c 002c
.org 0x5c37e
	blt.n 0x5c392	@ 0005c37e 08db
.org 0x5c380
	mov r2, sp	@ 0005c380 6a46
.org 0x5c382
	adds r0, r2, r4	@ 0005c382 1019
.org 0x5c384
	ldrb r0, [r0, #0]	@ 0005c384 0078
.org 0x5c386
	subs r0, r5, r0	@ 0005c386 281a
.org 0x5c388
	lsls r0, r0, #24	@ 0005c388 0006
.org 0x5c38a
	lsrs r5, r0, #24	@ 0005c38a 050e
.org 0x5c38c
	asrs r0, r0, #24	@ 0005c38c 0016
.org 0x5c38e
	cmp r1, r0	@ 0005c38e 8142
.org 0x5c390
	blt.n 0x5c37a	@ 0005c390 f3db
.org 0x5c392
	adds r0, r4, #0	@ 0005c392 201c
.org 0x5c394
	add sp, #16	@ 0005c394 04b0
.org 0x5c396
	pop {r4, r5}	@ 0005c396 30bc
.org 0x5c398
	pop {r1}	@ 0005c398 02bc
.org 0x5c39a
	bx r1	@ 0005c39a 0847

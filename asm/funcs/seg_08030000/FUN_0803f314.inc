@ FUN_0803f314  entry 0x0803f314  size 110
.thumb
.org 0x3f314
FUN_0803f314:
	push {r4, lr}	@ 0003f314 10b5
.org 0x3f316
	adds r3, r0, #0	@ 0003f316 031c
.org 0x3f318
	ldr r0, [r3, #44]	@ 0003f318 d86a
.org 0x3f31a
	adds r4, r0, #0	@ 0003f31a 041c
.org 0x3f31c
	adds r4, #180	@ 0003f31c b434
.org 0x3f31e
	movs r1, #173	@ 0003f31e ad21
.org 0x3f320
	lsls r1, r1, #1	@ 0003f320 4900
.org 0x3f322
	adds r0, r0, r1	@ 0003f322 4018
.org 0x3f324
	ldrh r1, [r0, #0]	@ 0003f324 0188
.org 0x3f326
	movs r0, #8	@ 0003f326 0820
.org 0x3f328
	ands r0, r1	@ 0003f328 0840
.org 0x3f32a
	lsls r0, r0, #16	@ 0003f32a 0004
.org 0x3f32c
	lsrs r2, r0, #16	@ 0003f32c 020c
.org 0x3f32e
	cmp r2, #0	@ 0003f32e 002a
.org 0x3f330
	beq.n 0x3f33c	@ 0003f330 04d0
.org 0x3f332
	ldrb r1, [r3, #10]	@ 0003f332 997a
.org 0x3f334
	movs r0, #254	@ 0003f334 fe20
.org 0x3f336
	ands r0, r1	@ 0003f336 0840
.org 0x3f338
	movs r2, #0	@ 0003f338 0022
.org 0x3f33a
	b.n 0x3f34e	@ 0003f33a 08e0
.org 0x3f33c
	ldrb r0, [r4, #12]	@ 0003f33c 207b
.org 0x3f33e
	cmp r0, #1	@ 0003f33e 0128
.org 0x3f340
	bhi.n 0x3f37c	@ 0003f340 1cd8
.org 0x3f342
	ldrb r0, [r4, #13]	@ 0003f342 607b
.org 0x3f344
	cmp r0, #1	@ 0003f344 0128
.org 0x3f346
	bhi.n 0x3f37c	@ 0003f346 19d8
.org 0x3f348
	ldrb r1, [r3, #10]	@ 0003f348 997a
.org 0x3f34a
	movs r0, #254	@ 0003f34a fe20
.org 0x3f34c
	ands r0, r1	@ 0003f34c 0840
.org 0x3f34e
	movs r1, #253	@ 0003f34e fd21
.org 0x3f350
	ands r0, r1	@ 0003f350 0840
.org 0x3f352
	strb r0, [r3, #10]	@ 0003f352 9872
.org 0x3f354
	adds r0, r3, #0	@ 0003f354 181c
.org 0x3f356
	adds r0, #140	@ 0003f356 8c30
.org 0x3f358
	str r2, [r0, #0]	@ 0003f358 0260
.org 0x3f35a
	adds r0, #4	@ 0003f35a 0430
.org 0x3f35c
	str r2, [r0, #0]	@ 0003f35c 0260
.org 0x3f35e
	adds r0, #4	@ 0003f35e 0430
.org 0x3f360
	strb r2, [r0, #0]	@ 0003f360 0270
.org 0x3f362
	ldrb r1, [r3, #10]	@ 0003f362 997a
.org 0x3f364
	movs r0, #251	@ 0003f364 fb20
.org 0x3f366
	ands r0, r1	@ 0003f366 0840
.org 0x3f368
	strb r0, [r3, #10]	@ 0003f368 9872
.org 0x3f36a
	ldr r1, [pc, #24]	@ 0003f36a 0649
.org 0x3f36c
	ldrb r0, [r3, #9]	@ 0003f36c 587a
.org 0x3f36e
	lsls r0, r0, #2	@ 0003f36e 8000
.org 0x3f370
	adds r0, r0, r1	@ 0003f370 4018
.org 0x3f372
	movs r1, #3	@ 0003f372 0321
.org 0x3f374
	str r1, [r3, #12]	@ 0003f374 d960
.org 0x3f376
	ldr r0, [r0, #0]	@ 0003f376 0068
.org 0x3f378
	ldr r0, [r0, #12]	@ 0003f378 c068
.org 0x3f37a
	str r0, [r3, #20]	@ 0003f37a 5861
.org 0x3f37c
	pop {r4}	@ 0003f37c 10bc
.org 0x3f37e
	pop {r0}	@ 0003f37e 01bc
.org 0x3f380
	bx r0	@ 0003f380 0047

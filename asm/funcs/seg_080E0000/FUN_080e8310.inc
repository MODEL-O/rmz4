@ FUN_080e8310  entry 0x080e8310  size 88
.thumb
.org 0xe8310
FUN_080e8310:
	push {r4, lr}	@ 000e8310 10b5
.org 0xe8312
	adds r4, r0, #0	@ 000e8312 041c
.org 0xe8314
	ldr r0, [r4, #84]	@ 000e8314 606d
.org 0xe8316
	ldr r1, [r4, #92]	@ 000e8316 e16d
.org 0xe8318
	adds r0, r0, r1	@ 000e8318 4018
.org 0xe831a
	str r0, [r4, #84]	@ 000e831a 6065
.org 0xe831c
	ldr r0, [r4, #88]	@ 000e831c a06d
.org 0xe831e
	ldr r1, [r4, #96]	@ 000e831e 216e
.org 0xe8320
	adds r0, r0, r1	@ 000e8320 4018
.org 0xe8322
	str r0, [r4, #88]	@ 000e8322 a065
.org 0xe8324
	adds r1, #64	@ 000e8324 4031
.org 0xe8326
	str r1, [r4, #96]	@ 000e8326 2166
.org 0xe8328
	ldrb r1, [r4, #18]	@ 000e8328 a17c
.org 0xe832a
	adds r0, r4, #0	@ 000e832a 201c
.org 0xe832c
	adds r0, #36	@ 000e832c 2430
.org 0xe832e
	strb r1, [r0, #0]	@ 000e832e 0170
.org 0xe8330
	ldrb r0, [r4, #17]	@ 000e8330 607c
.org 0xe8332
	cmp r0, #0	@ 000e8332 0028
.org 0xe8334
	bne.n 0xe833c	@ 000e8334 02d1
.org 0xe8336
	ldrb r0, [r4, #18]	@ 000e8336 a07c
.org 0xe8338
	adds r0, #4	@ 000e8338 0430
.org 0xe833a
	b.n 0xe8340	@ 000e833a 01e0
.org 0xe833c
	ldrb r0, [r4, #18]	@ 000e833c a07c
.org 0xe833e
	subs r0, #4	@ 000e833e 0438
.org 0xe8340
	strb r0, [r4, #18]	@ 000e8340 a074
.org 0xe8342
	ldr r0, [r4, #84]	@ 000e8342 606d
.org 0xe8344
	ldr r1, [r4, #88]	@ 000e8344 a16d
.org 0xe8346
	bl 0x7c7c	@ 000e8346 1ff799fc
.org 0xe834a
	lsls r0, r0, #16	@ 000e834a 0004
.org 0xe834c
	cmp r0, #0	@ 000e834c 0028
.org 0xe834e
	beq.n 0xe8362	@ 000e834e 08d0
.org 0xe8350
	ldr r1, [pc, #20]	@ 000e8350 0549
.org 0xe8352
	ldrb r0, [r4, #9]	@ 000e8352 607a
.org 0xe8354
	lsls r0, r0, #2	@ 000e8354 8000
.org 0xe8356
	adds r0, r0, r1	@ 000e8356 4018
.org 0xe8358
	movs r1, #2	@ 000e8358 0221
.org 0xe835a
	str r1, [r4, #12]	@ 000e835a e160
.org 0xe835c
	ldr r0, [r0, #0]	@ 000e835c 0068
.org 0xe835e
	ldr r0, [r0, #8]	@ 000e835e 8068
.org 0xe8360
	str r0, [r4, #20]	@ 000e8360 6061
.org 0xe8362
	pop {r4}	@ 000e8362 10bc
.org 0xe8364
	pop {r0}	@ 000e8364 01bc
.org 0xe8366
	bx r0	@ 000e8366 0047

@ FUN_080e0318  entry 0x080e0318  size 98
.thumb
.org 0xe0318
FUN_080e0318:
	push {r4, lr}	@ 000e0318 10b5
.org 0xe031a
	adds r4, r0, #0	@ 000e031a 041c
.org 0xe031c
	ldr r0, [r4, #84]	@ 000e031c 606d
.org 0xe031e
	ldr r1, [r4, #92]	@ 000e031e e16d
.org 0xe0320
	adds r0, r0, r1	@ 000e0320 4018
.org 0xe0322
	str r0, [r4, #84]	@ 000e0322 6065
.org 0xe0324
	ldr r0, [r4, #88]	@ 000e0324 a06d
.org 0xe0326
	ldr r1, [r4, #96]	@ 000e0326 216e
.org 0xe0328
	adds r0, r0, r1	@ 000e0328 4018
.org 0xe032a
	str r0, [r4, #88]	@ 000e032a a065
.org 0xe032c
	adds r1, #64	@ 000e032c 4031
.org 0xe032e
	str r1, [r4, #96]	@ 000e032e 2166
.org 0xe0330
	ldrb r1, [r4, #18]	@ 000e0330 a17c
.org 0xe0332
	adds r0, r1, #1	@ 000e0332 481c
.org 0xe0334
	strb r0, [r4, #18]	@ 000e0334 a074
.org 0xe0336
	movs r0, #1	@ 000e0336 0120
.org 0xe0338
	ands r0, r1	@ 000e0338 0840
.org 0xe033a
	cmp r0, #0	@ 000e033a 0028
.org 0xe033c
	beq.n 0xe0346	@ 000e033c 03d0
.org 0xe033e
	ldrb r1, [r4, #10]	@ 000e033e a17a
.org 0xe0340
	movs r0, #1	@ 000e0340 0120
.org 0xe0342
	orrs r0, r1	@ 000e0342 0843
.org 0xe0344
	b.n 0xe034c	@ 000e0344 02e0
.org 0xe0346
	ldrb r1, [r4, #10]	@ 000e0346 a17a
.org 0xe0348
	movs r0, #254	@ 000e0348 fe20
.org 0xe034a
	ands r0, r1	@ 000e034a 0840
.org 0xe034c
	strb r0, [r4, #10]	@ 000e034c a072
.org 0xe034e
	ldr r0, [r4, #84]	@ 000e034e 606d
.org 0xe0350
	ldr r1, [r4, #88]	@ 000e0350 a16d
.org 0xe0352
	bl 0x7c7c	@ 000e0352 27f793fc
.org 0xe0356
	lsls r0, r0, #16	@ 000e0356 0004
.org 0xe0358
	cmp r0, #0	@ 000e0358 0028
.org 0xe035a
	beq.n 0xe0374	@ 000e035a 0bd0
.org 0xe035c
	ldr r1, [pc, #28]	@ 000e035c 0749
.org 0xe035e
	ldrb r0, [r4, #9]	@ 000e035e 607a
.org 0xe0360
	lsls r0, r0, #2	@ 000e0360 8000
.org 0xe0362
	adds r0, r0, r1	@ 000e0362 4018
.org 0xe0364
	movs r1, #2	@ 000e0364 0221
.org 0xe0366
	str r1, [r4, #12]	@ 000e0366 e160
.org 0xe0368
	ldr r0, [r0, #0]	@ 000e0368 0068
.org 0xe036a
	ldr r0, [r0, #8]	@ 000e036a 8068
.org 0xe036c
	str r0, [r4, #20]	@ 000e036c 6061
.org 0xe036e
	adds r0, r4, #0	@ 000e036e 201c
.org 0xe0370
	bl 0xdff80	@ 000e0370 fff706fe
.org 0xe0374
	pop {r4}	@ 000e0374 10bc
.org 0xe0376
	pop {r0}	@ 000e0376 01bc
.org 0xe0378
	bx r0	@ 000e0378 0047

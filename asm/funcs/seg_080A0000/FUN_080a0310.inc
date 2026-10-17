@ FUN_080a0310  entry 0x080a0310  size 114
.thumb
.org 0xa0310
FUN_080a0310:
	push {r4, r5, lr}	@ 000a0310 30b5
.org 0xa0312
	adds r4, r0, #0	@ 000a0312 041c
.org 0xa0314
	ldrb r5, [r4, #15]	@ 000a0314 e57b
.org 0xa0316
	cmp r5, #0	@ 000a0316 002d
.org 0xa0318
	bne.n 0xa0338	@ 000a0318 0ed1
.org 0xa031a
	adds r1, r4, #0	@ 000a031a 211c
.org 0xa031c
	adds r1, #37	@ 000a031c 2531
.org 0xa031e
	movs r0, #24	@ 000a031e 1820
.org 0xa0320
	strb r0, [r1, #0]	@ 000a0320 0870
.org 0xa0322
	adds r0, r4, #0	@ 000a0322 201c
.org 0xa0324
	adds r0, #116	@ 000a0324 7430
.org 0xa0326
	ldr r1, [pc, #72]	@ 000a0326 1249
.org 0xa0328
	bl 0x5784	@ 000a0328 65f72cfa
.org 0xa032c
	str r5, [r4, #96]	@ 000a032c 2566
.org 0xa032e
	movs r0, #1	@ 000a032e 0120
.org 0xa0330
	strb r0, [r4, #18]	@ 000a0330 a074
.org 0xa0332
	ldrb r0, [r4, #15]	@ 000a0332 e07b
.org 0xa0334
	adds r0, #1	@ 000a0334 0130
.org 0xa0336
	strb r0, [r4, #15]	@ 000a0336 e073
.org 0xa0338
	ldrb r0, [r4, #18]	@ 000a0338 a07c
.org 0xa033a
	cmp r0, #0	@ 000a033a 0028
.org 0xa033c
	beq.n 0xa0350	@ 000a033c 08d0
.org 0xa033e
	ldr r5, [r4, #44]	@ 000a033e e56a
.org 0xa0340
	cmp r5, #0	@ 000a0340 002d
.org 0xa0342
	bne.n 0xa0350	@ 000a0342 05d1
.org 0xa0344
	adds r0, r4, #0	@ 000a0344 201c
.org 0xa0346
	adds r0, #116	@ 000a0346 7430
.org 0xa0348
	ldr r1, [pc, #40]	@ 000a0348 0a49
.org 0xa034a
	bl 0x5784	@ 000a034a 65f71bfa
.org 0xa034e
	strb r5, [r4, #18]	@ 000a034e a574
.org 0xa0350
	ldr r1, [r4, #96]	@ 000a0350 216e
.org 0xa0352
	adds r0, r4, #0	@ 000a0352 201c
.org 0xa0354
	bl 0xa0a94	@ 000a0354 00f09efb
.org 0xa0358
	cmp r0, #0	@ 000a0358 0028
.org 0xa035a
	bne.n 0xa0378	@ 000a035a 0dd1
.org 0xa035c
	ldr r0, [r4, #96]	@ 000a035c 206e
.org 0xa035e
	adds r0, #64	@ 000a035e 4030
.org 0xa0360
	str r0, [r4, #96]	@ 000a0360 2066
.org 0xa0362
	movs r1, #224	@ 000a0362 e021
.org 0xa0364
	lsls r1, r1, #3	@ 000a0364 c900
.org 0xa0366
	cmp r0, r1	@ 000a0366 8842
.org 0xa0368
	ble.n 0xa0386	@ 000a0368 0ddd
.org 0xa036a
	str r1, [r4, #96]	@ 000a036a 2166
.org 0xa036c
	b.n 0xa0386	@ 000a036c 0be0
.org 0xa036e
	.byte 0x00	@ 000a036e data
.org 0xa036f
	.byte 0x00	@ 000a036f data
.org 0xa0370
	.byte 0x6c,0x19,0x86,0x08	@ 000a0370 data
.org 0xa0374
	.byte 0x54,0x19,0x86,0x08	@ 000a0374 data
.org 0xa0378
	ldr r1, [r4, #44]	@ 000a0378 e16a
.org 0xa037a
	cmp r1, #0	@ 000a037a 0029
.org 0xa037c
	bne.n 0xa0386	@ 000a037c 03d1
.org 0xa037e
	movs r0, #2	@ 000a037e 0220
.org 0xa0380
	strb r0, [r4, #13]	@ 000a0380 6073

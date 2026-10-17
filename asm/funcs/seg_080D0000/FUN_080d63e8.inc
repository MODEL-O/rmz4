@ FUN_080d63e8  entry 0x080d63e8  size 188
.thumb
.org 0xd63e8
FUN_080d63e8:
	push {r4, r5, lr}	@ 000d63e8 30b5
.org 0xd63ea
	adds r5, r0, #0	@ 000d63ea 051c
.org 0xd63ec
	ldr r0, [r5, #84]	@ 000d63ec 686d
.org 0xd63ee
	ldr r1, [r5, #92]	@ 000d63ee e96d
.org 0xd63f0
	adds r0, r0, r1	@ 000d63f0 4018
.org 0xd63f2
	str r0, [r5, #84]	@ 000d63f2 6865
.org 0xd63f4
	movs r0, #245	@ 000d63f4 f520
.org 0xd63f6
	muls r0, r1	@ 000d63f6 4843
.org 0xd63f8
	cmp r0, #0	@ 000d63f8 0028
.org 0xd63fa
	bge.n 0xd63fe	@ 000d63fa 00da
.org 0xd63fc
	adds r0, #255	@ 000d63fc ff30
.org 0xd63fe
	asrs r0, r0, #8	@ 000d63fe 0012
.org 0xd6400
	str r0, [r5, #92]	@ 000d6400 e865
.org 0xd6402
	ldr r0, [r5, #88]	@ 000d6402 a86d
.org 0xd6404
	ldr r1, [r5, #96]	@ 000d6404 296e
.org 0xd6406
	adds r0, r0, r1	@ 000d6406 4018
.org 0xd6408
	str r0, [r5, #88]	@ 000d6408 a865
.org 0xd640a
	ldrb r0, [r5, #19]	@ 000d640a e87c
.org 0xd640c
	cmp r0, #0	@ 000d640c 0028
.org 0xd640e
	beq.n 0xd6420	@ 000d640e 07d0
.org 0xd6410
	adds r0, r1, #0	@ 000d6410 081c
.org 0xd6412
	adds r0, #32	@ 000d6412 2030
.org 0xd6414
	str r0, [r5, #96]	@ 000d6414 2866
.org 0xd6416
	movs r1, #224	@ 000d6416 e021
.org 0xd6418
	lsls r1, r1, #3	@ 000d6418 c900
.org 0xd641a
	cmp r0, r1	@ 000d641a 8842
.org 0xd641c
	ble.n 0xd6420	@ 000d641c 00dd
.org 0xd641e
	str r1, [r5, #96]	@ 000d641e 2966
.org 0xd6420
	adds r0, r5, #0	@ 000d6420 281c
.org 0xd6422
	bl 0x1cff0	@ 000d6422 46f7e5fd
.org 0xd6426
	ldrb r0, [r5, #18]	@ 000d6426 a87c
.org 0xd6428
	subs r0, #1	@ 000d6428 0138
.org 0xd642a
	strb r0, [r5, #18]	@ 000d642a a874
.org 0xd642c
	ldrb r0, [r5, #19]	@ 000d642c e87c
.org 0xd642e
	cmp r0, #0	@ 000d642e 0028
.org 0xd6430
	beq.n 0xd6464	@ 000d6430 18d0
.org 0xd6432
	ldr r4, [r5, #84]	@ 000d6432 6c6d
.org 0xd6434
	ldr r2, [r5, #88]	@ 000d6434 aa6d
.org 0xd6436
	ldr r0, [pc, #40]	@ 000d6436 0a48
.org 0xd6438
	adds r3, r2, r0	@ 000d6438 1318
.org 0xd643a
	ldrb r1, [r5, #10]	@ 000d643a a97a
.org 0xd643c
	movs r0, #32	@ 000d643c 2020
.org 0xd643e
	ands r0, r1	@ 000d643e 0840
.org 0xd6440
	cmp r0, #0	@ 000d6440 0028
.org 0xd6442
	beq.n 0xd644a	@ 000d6442 02d0
.org 0xd6444
	movs r0, #128	@ 000d6444 8020
.org 0xd6446
	lsls r0, r0, #2	@ 000d6446 8000
.org 0xd6448
	adds r3, r2, r0	@ 000d6448 1318
.org 0xd644a
	adds r0, r4, #0	@ 000d644a 201c
.org 0xd644c
	adds r1, r3, #0	@ 000d644c 191c
.org 0xd644e
	bl 0x7c7c	@ 000d644e 31f715fc
.org 0xd6452
	lsls r0, r0, #16	@ 000d6452 0004
.org 0xd6454
	cmp r0, #0	@ 000d6454 0028
.org 0xd6456
	beq.n 0xd6476	@ 000d6456 0ed0
.org 0xd6458
	movs r0, #0	@ 000d6458 0020
.org 0xd645a
	strb r0, [r5, #18]	@ 000d645a a874
.org 0xd645c
	b.n 0xd6476	@ 000d645c 0be0
.org 0xd645e
	.byte 0x00	@ 000d645e data
.org 0xd645f
	.byte 0x00	@ 000d645f data
.org 0xd6460
	.byte 0x00,0xfe,0xff,0xff	@ 000d6460 data
.org 0xd6464
	ldr r0, [r5, #84]	@ 000d6464 686d
.org 0xd6466
	ldr r1, [r5, #88]	@ 000d6466 a96d
.org 0xd6468
	bl 0x8534	@ 000d6468 32f764f8
.org 0xd646c
	adds r1, r0, #0	@ 000d646c 011c
.org 0xd646e
	ldr r0, [r5, #88]	@ 000d646e a86d
.org 0xd6470
	cmp r0, r1	@ 000d6470 8842
.org 0xd6472
	ble.n 0xd6476	@ 000d6472 00dd
.org 0xd6474
	str r1, [r5, #88]	@ 000d6474 a965
.org 0xd6476
	ldrb r0, [r5, #18]	@ 000d6476 a87c
.org 0xd6478
	cmp r0, #0	@ 000d6478 0028
.org 0xd647a
	bne.n 0xd64a4	@ 000d647a 13d1
.org 0xd647c
	ldr r0, [r5, #40]	@ 000d647c a86a
.org 0xd647e
	adds r4, r5, #0	@ 000d647e 2c1c
.org 0xd6480
	adds r4, #84	@ 000d6480 5434
.org 0xd6482
	adds r1, r4, #0	@ 000d6482 211c
.org 0xd6484
	movs r2, #1	@ 000d6484 0122
.org 0xd6486
	bl 0xd621c	@ 000d6486 fff7c9fe
.org 0xd648a
	movs r0, #1	@ 000d648a 0120
.org 0xd648c
	adds r1, r4, #0	@ 000d648c 211c
.org 0xd648e
	bl 0xd0c88	@ 000d648e faf7fbfb
.org 0xd6492
	ldr r1, [pc, #24]	@ 000d6492 0649
.org 0xd6494
	ldrb r0, [r5, #9]	@ 000d6494 687a
.org 0xd6496
	lsls r0, r0, #2	@ 000d6496 8000
.org 0xd6498
	adds r0, r0, r1	@ 000d6498 4018
.org 0xd649a
	movs r1, #2	@ 000d649a 0221
.org 0xd649c
	str r1, [r5, #12]	@ 000d649c e960
.org 0xd649e
	ldr r0, [r0, #0]	@ 000d649e 0068
.org 0xd64a0
	ldr r0, [r0, #8]	@ 000d64a0 8068
.org 0xd64a2
	str r0, [r5, #20]	@ 000d64a2 6861

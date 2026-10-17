@ FUN_08058318  entry 0x08058318  size 152
.thumb
.org 0x58318
FUN_08058318:
	push {r4, lr}	@ 00058318 10b5
.org 0x5831a
	adds r4, r0, #0	@ 0005831a 041c
.org 0x5831c
	ldrb r0, [r4, #15]	@ 0005831c e07b
.org 0x5831e
	cmp r0, #0	@ 0005831e 0028
.org 0x58320
	bne.n 0x58340	@ 00058320 0ed1
.org 0x58322
	ldr r1, [pc, #116]	@ 00058322 1d49
.org 0x58324
	adds r0, r4, #0	@ 00058324 201c
.org 0x58326
	bl 0x1cf00	@ 00058326 c4f7ebfd
.org 0x5832a
	adds r0, r4, #0	@ 0005832a 201c
.org 0x5832c
	bl 0x5977c	@ 0005832c 01f026fa
.org 0x58330
	adds r1, r0, #0	@ 00058330 011c
.org 0x58332
	ldr r0, [pc, #104]	@ 00058332 1a48
.org 0x58334
	adds r0, r1, r0	@ 00058334 0818
.org 0x58336
	ldrb r1, [r0, #0]	@ 00058336 0178
.org 0x58338
	strb r1, [r4, #18]	@ 00058338 a174
.org 0x5833a
	ldrb r0, [r4, #15]	@ 0005833a e07b
.org 0x5833c
	adds r0, #1	@ 0005833c 0130
.org 0x5833e
	strb r0, [r4, #15]	@ 0005833e e073
.org 0x58340
	adds r0, r4, #0	@ 00058340 201c
.org 0x58342
	bl 0x1cff0	@ 00058342 c4f755fe
.org 0x58346
	adds r0, r4, #0	@ 00058346 201c
.org 0x58348
	adds r0, #116	@ 00058348 7430
.org 0x5834a
	ldr r3, [pc, #84]	@ 0005834a 154b
.org 0x5834c
	ldrb r1, [r4, #30]	@ 0005834c a17f
.org 0x5834e
	lsls r1, r1, #8	@ 0005834e 0902
.org 0x58350
	adds r2, r4, #0	@ 00058350 221c
.org 0x58352
	adds r2, #112	@ 00058352 7032
.org 0x58354
	ldrb r2, [r2, #0]	@ 00058354 1278
.org 0x58356
	orrs r1, r2	@ 00058356 1143
.org 0x58358
	ldr r2, [pc, #72]	@ 00058358 124a
.org 0x5835a
	adds r1, r1, r2	@ 0005835a 8918
.org 0x5835c
	lsls r1, r1, #2	@ 0005835c 8900
.org 0x5835e
	adds r1, r1, r3	@ 0005835e c918
.org 0x58360
	adds r2, r4, #0	@ 00058360 221c
.org 0x58362
	adds r2, #113	@ 00058362 7132
.org 0x58364
	ldrb r2, [r2, #0]	@ 00058364 1278
.org 0x58366
	lsls r2, r2, #24	@ 00058366 1206
.org 0x58368
	asrs r2, r2, #24	@ 00058368 1216
.org 0x5836a
	ldr r1, [r1, #0]	@ 0005836a 0968
.org 0x5836c
	lsls r2, r2, #2	@ 0005836c 9200
.org 0x5836e
	adds r2, r2, r1	@ 0005836e 5218
.org 0x58370
	ldr r1, [r2, #0]	@ 00058370 1168
.org 0x58372
	ldrb r2, [r1, #0]	@ 00058372 0a78
.org 0x58374
	lsls r1, r2, #1	@ 00058374 5100
.org 0x58376
	adds r1, r1, r2	@ 00058376 8918
.org 0x58378
	lsls r1, r1, #3	@ 00058378 c900
.org 0x5837a
	ldr r2, [pc, #44]	@ 0005837a 0b4a
.org 0x5837c
	adds r1, r1, r2	@ 0005837c 8918
.org 0x5837e
	bl 0x5784	@ 0005837e adf701fa
.org 0x58382
	adds r0, r4, #0	@ 00058382 201c
.org 0x58384
	bl 0x597ac	@ 00058384 01f012fa
.org 0x58388
	cmp r0, #0	@ 00058388 0028
.org 0x5838a
	beq.n 0x583ac	@ 0005838a 0fd0
.org 0x5838c
	movs r1, #0	@ 0005838c 0021
.org 0x5838e
	movs r0, #4	@ 0005838e 0420
.org 0x58390
	strb r0, [r4, #13]	@ 00058390 6073
.org 0x58392
	strb r1, [r4, #14]	@ 00058392 a173
.org 0x58394
	strb r1, [r4, #15]	@ 00058394 e173
.org 0x58396
	b.n 0x583be	@ 00058396 12e0
.org 0x58398
	.byte 0x06,0xa0,0x00,0x00	@ 00058398 data
.org 0x5839c
	.byte 0xd7,0x87,0x85,0x08	@ 0005839c data
.org 0x583a0
	.byte 0x1c,0x87,0x85,0x08	@ 000583a0 data
.org 0x583a4
	.byte 0x00,0x60,0xff,0xff	@ 000583a4 data
.org 0x583a8
	.byte 0xcc,0x84,0x85,0x08	@ 000583a8 data
.org 0x583ac
	ldrb r0, [r4, #18]	@ 000583ac a07c
.org 0x583ae
	subs r0, #1	@ 000583ae 0138

@ FUN_080242b0  entry 0x080242b0  size 982
.thumb
.org 0x242b0
FUN_080242b0:
	push {r4, r5, r6, r7, lr}	@ 000242b0 f0b5
.org 0x242b2
	mov r7, r9	@ 000242b2 4f46
.org 0x242b4
	mov r6, r8	@ 000242b4 4646
.org 0x242b6
	push {r6, r7}	@ 000242b6 c0b4
.org 0x242b8
	adds r6, r0, #0	@ 000242b8 061c
.org 0x242ba
	ldr r4, [r6, #32]	@ 000242ba 346a
.org 0x242bc
	movs r0, #190	@ 000242bc be20
.org 0x242be
	lsls r0, r0, #1	@ 000242be 4000
.org 0x242c0
	adds r7, r6, r0	@ 000242c0 3718
.org 0x242c2
	ldrb r1, [r7, #0]	@ 000242c2 3978
.org 0x242c4
	mov r8, r1	@ 000242c4 8846
.org 0x242c6
	cmp r1, #0	@ 000242c6 0029
.org 0x242c8
	beq.n 0x242cc	@ 000242c8 00d0
.org 0x242ca
	b.n 0x24404	@ 000242ca 9be0
.org 0x242cc
	ldr r5, [pc, #64]	@ 000242cc 104d
.org 0x242ce
	ldrh r0, [r5, #8]	@ 000242ce 2889
.org 0x242d0
	movs r1, #1	@ 000242d0 0121
.org 0x242d2
	mov r9, r1	@ 000242d2 8946
.org 0x242d4
	movs r3, #0	@ 000242d4 0023
.org 0x242d6
	mov r1, r9	@ 000242d6 4946
.org 0x242d8
	orrs r0, r1	@ 000242d8 0843
.org 0x242da
	strh r0, [r5, #8]	@ 000242da 2881
.org 0x242dc
	ldr r2, [pc, #52]	@ 000242dc 0d4a
.org 0x242de
	ldrb r1, [r2, #4]	@ 000242de 1179
.org 0x242e0
	movs r0, #8	@ 000242e0 0820
.org 0x242e2
	orrs r0, r1	@ 000242e2 0843
.org 0x242e4
	strb r0, [r2, #4]	@ 000242e4 1071
.org 0x242e6
	ldr r1, [pc, #48]	@ 000242e6 0c49
.org 0x242e8
	adds r0, r6, r1	@ 000242e8 7018
.org 0x242ea
	strb r3, [r0, #0]	@ 000242ea 0370
.org 0x242ec
	ldrb r4, [r5, #2]	@ 000242ec ac78
.org 0x242ee
	cmp r4, #0	@ 000242ee 002c
.org 0x242f0
	bne.n 0x24320	@ 000242f0 16d1
.org 0x242f2
	adds r0, r5, #0	@ 000242f2 281c
.org 0x242f4
	adds r0, #16	@ 000242f4 1030
.org 0x242f6
	ldr r1, [pc, #36]	@ 000242f6 0949
.org 0x242f8
	ldr r1, [r1, #40]	@ 000242f8 896a
.org 0x242fa
	ldr r1, [r1, #0]	@ 000242fa 0968
.org 0x242fc
	bl 0x275f0	@ 000242fc 03f078f9
.org 0x24300
	movs r0, #1	@ 00024300 0120
.org 0x24302
	bl 0x1f63c	@ 00024302 fbf79bf9
.org 0x24306
	mov r0, r8	@ 00024306 4046
.org 0x24308
	strh r0, [r5, #10]	@ 00024308 6881
.org 0x2430a
	mov r1, r9	@ 0002430a 4946
.org 0x2430c
	strb r1, [r7, #0]	@ 0002430c 3970
.org 0x2430e
	b.n 0x2474e	@ 0002430e 1ee2
.org 0x24310
	.byte 0x10,0xe9,0x02,0x02	@ 00024310 data
.org 0x24314
	.byte 0xb0,0xe8,0x02,0x02	@ 00024314 data
.org 0x24318
	.byte 0x7d,0x01,0x00,0x00	@ 00024318 data
.org 0x2431c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002431c data
.org 0x24320
	cmp r4, #1	@ 00024320 012c
.org 0x24322
	bne.n 0x24338	@ 00024322 09d1
.org 0x24324
	adds r0, r5, #0	@ 00024324 281c
.org 0x24326
	adds r0, #16	@ 00024326 1030
.org 0x24328
	ldr r1, [pc, #8]	@ 00024328 0249
.org 0x2432a
	ldr r1, [r1, #40]	@ 0002432a 896a
.org 0x2432c
	ldr r1, [r1, #4]	@ 0002432c 4968
.org 0x2432e
	bl 0x275f0	@ 0002432e 03f05ff9
.org 0x24332
	b.n 0x2440a	@ 00024332 6ae0
.org 0x24334
	.byte 0xf8,0x2c,0x84,0x08	@ 00024334 data
.org 0x24338
	cmp r4, #2	@ 00024338 022c
.org 0x2433a
	bne.n 0x24354	@ 0002433a 0bd1
.org 0x2433c
	adds r0, r5, #0	@ 0002433c 281c
.org 0x2433e
	adds r0, #16	@ 0002433e 1030
.org 0x24340
	ldr r1, [pc, #12]	@ 00024340 0349
.org 0x24342
	ldr r1, [r1, #40]	@ 00024342 896a
.org 0x24344
	ldr r1, [r1, #8]	@ 00024344 8968
.org 0x24346
	bl 0x275f0	@ 00024346 03f053f9
.org 0x2434a
	strb r4, [r7, #0]	@ 0002434a 3c70
.org 0x2434c
	b.n 0x2474e	@ 0002434c ffe1
.org 0x2434e
	.byte 0x00	@ 0002434e data
.org 0x2434f
	.byte 0x00	@ 0002434f data
.org 0x24350
	.byte 0xf8,0x2c,0x84,0x08	@ 00024350 data
.org 0x24354
	cmp r4, #3	@ 00024354 032c
.org 0x24356
	bne.n 0x24378	@ 00024356 0fd1
.org 0x24358
	adds r0, r5, #0	@ 00024358 281c
.org 0x2435a
	adds r0, #16	@ 0002435a 1030
.org 0x2435c
	ldr r1, [pc, #20]	@ 0002435c 0549
.org 0x2435e
	ldr r1, [r1, #40]	@ 0002435e 896a
.org 0x24360
	ldr r1, [r1, #16]	@ 00024360 0969
.org 0x24362
	bl 0x275f0	@ 00024362 03f045f9
.org 0x24366
	movs r0, #4	@ 00024366 0420
.org 0x24368
	bl 0x1f63c	@ 00024368 fbf768f9
.org 0x2436c
	movs r0, #4	@ 0002436c 0420
.org 0x2436e
	strb r0, [r7, #0]	@ 0002436e 3870
.org 0x24370
	b.n 0x2474e	@ 00024370 ede1
.org 0x24372
	.byte 0x00	@ 00024372 data
.org 0x24373
	.byte 0x00	@ 00024373 data
.org 0x24374
	.byte 0xf8,0x2c,0x84,0x08	@ 00024374 data
.org 0x24378
	cmp r4, #4	@ 00024378 042c
.org 0x2437a
	bne.n 0x24394	@ 0002437a 0bd1
.org 0x2437c
	adds r0, r5, #0	@ 0002437c 281c
.org 0x2437e
	adds r0, #16	@ 0002437e 1030
.org 0x24380
	ldr r1, [pc, #12]	@ 00024380 0349
.org 0x24382
	ldr r1, [r1, #40]	@ 00024382 896a
.org 0x24384
	ldr r1, [r1, #24]	@ 00024384 8969
.org 0x24386
	bl 0x275f0	@ 00024386 03f033f9
.org 0x2438a
	movs r0, #5	@ 0002438a 0520
.org 0x2438c
	strb r0, [r7, #0]	@ 0002438c 3870
.org 0x2438e
	b.n 0x2474e	@ 0002438e dee1
.org 0x24390
	.byte 0xf8,0x2c,0x84,0x08	@ 00024390 data
.org 0x24394
	cmp r4, #5	@ 00024394 052c
.org 0x24396
	bne.n 0x243c8	@ 00024396 17d1
.org 0x24398
	ldrh r0, [r5, #10]	@ 00024398 6889
.org 0x2439a
	cmp r0, #0	@ 0002439a 0028
.org 0x2439c
	beq.n 0x243b4	@ 0002439c 0ad0
.org 0x2439e
	adds r0, r5, #0	@ 0002439e 281c
.org 0x243a0
	adds r0, #16	@ 000243a0 1030
.org 0x243a2
	ldr r1, [pc, #12]	@ 000243a2 0349
.org 0x243a4
	ldr r1, [r1, #40]	@ 000243a4 896a
.org 0x243a6
	ldr r1, [r1, #32]	@ 000243a6 096a
.org 0x243a8
	bl 0x275f0	@ 000243a8 03f022f9
.org 0x243ac
	b.n 0x245a2	@ 000243ac f9e0
.org 0x243ae
	.byte 0x00	@ 000243ae data
.org 0x243af
	.byte 0x00	@ 000243af data
.org 0x243b0
	.byte 0xf8,0x2c,0x84,0x08	@ 000243b0 data
.org 0x243b4
	adds r0, r5, #0	@ 000243b4 281c
.org 0x243b6
	adds r0, #16	@ 000243b6 1030
.org 0x243b8
	ldr r1, [pc, #8]	@ 000243b8 0249
.org 0x243ba
	ldr r1, [r1, #40]	@ 000243ba 896a
.org 0x243bc
	ldr r1, [r1, #64]	@ 000243bc 096c
.org 0x243be
	bl 0x275f0	@ 000243be 03f017f9
.org 0x243c2
	b.n 0x245a2	@ 000243c2 eee0
.org 0x243c4
	.byte 0xf8,0x2c,0x84,0x08	@ 000243c4 data
.org 0x243c8
	cmp r4, #6	@ 000243c8 062c
.org 0x243ca
	bne.n 0x243e4	@ 000243ca 0bd1
.org 0x243cc
	adds r0, r5, #0	@ 000243cc 281c
.org 0x243ce
	adds r0, #16	@ 000243ce 1030
.org 0x243d0
	ldr r1, [pc, #12]	@ 000243d0 0349
.org 0x243d2
	ldr r1, [r1, #40]	@ 000243d2 896a
.org 0x243d4
	ldr r1, [r1, #40]	@ 000243d4 896a
.org 0x243d6
	bl 0x275f0	@ 000243d6 03f00bf9
.org 0x243da
	movs r0, #11	@ 000243da 0b20
.org 0x243dc
	strb r0, [r7, #0]	@ 000243dc 3870
.org 0x243de
	b.n 0x2474e	@ 000243de b6e1
.org 0x243e0
	.byte 0xf8,0x2c,0x84,0x08	@ 000243e0 data
.org 0x243e4
	cmp r4, #7	@ 000243e4 072c
.org 0x243e6
	beq.n 0x243ea	@ 000243e6 00d0
.org 0x243e8
	b.n 0x2474e	@ 000243e8 b1e1
.org 0x243ea
	adds r0, r5, #0	@ 000243ea 281c
.org 0x243ec
	adds r0, #16	@ 000243ec 1030
.org 0x243ee
	ldr r1, [pc, #16]	@ 000243ee 0449
.org 0x243f0
	ldr r1, [r1, #40]	@ 000243f0 896a
.org 0x243f2
	ldr r1, [r1, #48]	@ 000243f2 096b
.org 0x243f4
	bl 0x275f0	@ 000243f4 03f0fcf8
.org 0x243f8
	movs r0, #12	@ 000243f8 0c20
.org 0x243fa
	strb r0, [r7, #0]	@ 000243fa 3870
.org 0x243fc
	b.n 0x2474e	@ 000243fc a7e1
.org 0x243fe
	.byte 0x00	@ 000243fe data
.org 0x243ff
	.byte 0x00	@ 000243ff data
.org 0x24400
	.byte 0xf8,0x2c,0x84,0x08	@ 00024400 data
.org 0x24404
	mov r1, r8	@ 00024404 4146
.org 0x24406
	cmp r1, #1	@ 00024406 0129
.org 0x24408
	bne.n 0x24416	@ 00024408 05d1
.org 0x2440a
	movs r0, #2	@ 0002440a 0220
.org 0x2440c
	bl 0x1f63c	@ 0002440c fbf716f9
.org 0x24410
	movs r0, #2	@ 00024410 0220
.org 0x24412
	strb r0, [r7, #0]	@ 00024412 3870
.org 0x24414
	b.n 0x2474e	@ 00024414 9be1
.org 0x24416
	mov r0, r8	@ 00024416 4046
.org 0x24418
	cmp r0, #2	@ 00024418 0228
.org 0x2441a
	bne.n 0x2442c	@ 0002441a 07d1
.org 0x2441c
	ldr r1, [r4, #84]	@ 0002441c 616d
.org 0x2441e
	movs r0, #150	@ 0002441e 9620
.org 0x24420
	lsls r0, r0, #13	@ 00024420 4003
.org 0x24422
	cmp r1, r0	@ 00024422 8142
.org 0x24424
	ble.n 0x2442c	@ 00024424 02dd
.org 0x24426
	movs r0, #3	@ 00024426 0320
.org 0x24428
	strb r0, [r7, #0]	@ 00024428 3870
.org 0x2442a
	b.n 0x2474e	@ 0002442a 90e1
.org 0x2442c
	movs r1, #190	@ 0002442c be21
.org 0x2442e
	lsls r1, r1, #1	@ 0002442e 4900
.org 0x24430
	adds r5, r6, r1	@ 00024430 7518
.org 0x24432
	ldrb r0, [r5, #0]	@ 00024432 2878
.org 0x24434
	cmp r0, #3	@ 00024434 0328
.org 0x24436
	bne.n 0x24470	@ 00024436 1bd1
.org 0x24438
	ldr r1, [r4, #84]	@ 00024438 616d
.org 0x2443a
	ldr r0, [pc, #36]	@ 0002443a 0948
.org 0x2443c
	cmp r1, r0	@ 0002443c 8142
.org 0x2443e
	ble.n 0x24470	@ 0002443e 17dd
.org 0x24440
	ldr r0, [pc, #32]	@ 00024440 0848
.org 0x24442
	ldr r1, [pc, #36]	@ 00024442 0949
.org 0x24444
	ldr r1, [r1, #40]	@ 00024444 896a
.org 0x24446
	ldr r1, [r1, #12]	@ 00024446 c968
.org 0x24448
	bl 0x275f0	@ 00024448 03f0d2f8
.org 0x2444c
	movs r0, #4	@ 0002444c 0420
.org 0x2444e
	bl 0x1f63c	@ 0002444e fbf7f5f8
.org 0x24452
	ldr r2, [pc, #24]	@ 00024452 064a
.org 0x24454
	ldrb r1, [r2, #4]	@ 00024454 1179
.org 0x24456
	movs r0, #8	@ 00024456 0820
.org 0x24458
	orrs r0, r1	@ 00024458 0843
.org 0x2445a
	strb r0, [r2, #4]	@ 0002445a 1071
.org 0x2445c
	movs r0, #5	@ 0002445c 0520
.org 0x2445e
	b.n 0x2474c	@ 0002445e 75e1
.org 0x24460
	.byte 0x00,0x18,0x15,0x00	@ 00024460 data
.org 0x24464
	.byte 0x20,0xe9,0x02,0x02	@ 00024464 data
.org 0x24468
	.byte 0xf8,0x2c,0x84,0x08	@ 00024468 data
.org 0x2446c
	.byte 0xb0,0xe8,0x02,0x02	@ 0002446c data
.org 0x24470
	movs r0, #190	@ 00024470 be20
.org 0x24472
	lsls r0, r0, #1	@ 00024472 4000
.org 0x24474
	adds r5, r6, r0	@ 00024474 3518
.org 0x24476
	ldrb r0, [r5, #0]	@ 00024476 2878
.org 0x24478
	cmp r0, #4	@ 00024478 0428
.org 0x2447a
	bne.n 0x244b4	@ 0002447a 1bd1
.org 0x2447c
	ldr r1, [r4, #84]	@ 0002447c 616d
.org 0x2447e
	ldr r0, [pc, #36]	@ 0002447e 0948
.org 0x24480
	cmp r1, r0	@ 00024480 8142
.org 0x24482
	ble.n 0x244b4	@ 00024482 17dd
.org 0x24484
	ldr r0, [pc, #32]	@ 00024484 0848
.org 0x24486
	ldr r1, [pc, #36]	@ 00024486 0949
.org 0x24488
	ldr r1, [r1, #40]	@ 00024488 896a
.org 0x2448a
	ldr r1, [r1, #20]	@ 0002448a 4969
.org 0x2448c
	bl 0x275f0	@ 0002448c 03f0b0f8
.org 0x24490
	movs r0, #4	@ 00024490 0420
.org 0x24492
	bl 0x1f63c	@ 00024492 fbf7d3f8
.org 0x24496
	ldr r2, [pc, #24]	@ 00024496 064a
.org 0x24498
	ldrb r1, [r2, #4]	@ 00024498 1179
.org 0x2449a
	movs r0, #8	@ 0002449a 0820
.org 0x2449c
	orrs r0, r1	@ 0002449c 0843
.org 0x2449e
	strb r0, [r2, #4]	@ 0002449e 1071
.org 0x244a0
	movs r0, #5	@ 000244a0 0520
.org 0x244a2
	b.n 0x2474c	@ 000244a2 53e1
.org 0x244a4
	.byte 0x00,0x18,0x15,0x00	@ 000244a4 data
.org 0x244a8
	.byte 0x20,0xe9,0x02,0x02	@ 000244a8 data
.org 0x244ac
	.byte 0xf8,0x2c,0x84,0x08	@ 000244ac data
.org 0x244b0
	.byte 0xb0,0xe8,0x02,0x02	@ 000244b0 data
.org 0x244b4
	movs r1, #190	@ 000244b4 be21
.org 0x244b6
	lsls r1, r1, #1	@ 000244b6 4900
.org 0x244b8
	adds r5, r6, r1	@ 000244b8 7518
.org 0x244ba
	ldrb r0, [r5, #0]	@ 000244ba 2878
.org 0x244bc
	cmp r0, #5	@ 000244bc 0528
.org 0x244be
	bne.n 0x244ca	@ 000244be 04d1
.org 0x244c0
	movs r0, #3	@ 000244c0 0320
.org 0x244c2
	bl 0x1f63c	@ 000244c2 fbf7bbf8
.org 0x244c6
	movs r0, #6	@ 000244c6 0620
.org 0x244c8
	b.n 0x2474c	@ 000244c8 40e1
.org 0x244ca
	cmp r0, #6	@ 000244ca 0628
.org 0x244cc
	bne.n 0x2453c	@ 000244cc 36d1
.org 0x244ce
	ldr r0, [pc, #80]	@ 000244ce 1448
.org 0x244d0
	ldr r1, [pc, #80]	@ 000244d0 1449
.org 0x244d2
	adds r0, r0, r1	@ 000244d2 4018
.org 0x244d4
	ldrb r0, [r0, #0]	@ 000244d4 0078
.org 0x244d6
	cmp r0, #40	@ 000244d6 2828
.org 0x244d8
	bne.n 0x2453c	@ 000244d8 30d1
.org 0x244da
	ldr r1, [pc, #76]	@ 000244da 1349
.org 0x244dc
	ldrb r2, [r1, #0]	@ 000244dc 0a78
.org 0x244de
	movs r0, #128	@ 000244de 8020
.org 0x244e0
	orrs r0, r2	@ 000244e0 1043
.org 0x244e2
	strb r0, [r1, #0]	@ 000244e2 0870
.org 0x244e4
	ldrb r2, [r1, #1]	@ 000244e4 4a78
.org 0x244e6
	movs r0, #2	@ 000244e6 0220
.org 0x244e8
	orrs r0, r2	@ 000244e8 1043
.org 0x244ea
	strb r0, [r1, #1]	@ 000244ea 4870
.org 0x244ec
	ldr r4, [pc, #60]	@ 000244ec 0f4c
.org 0x244ee
	ldr r0, [pc, #64]	@ 000244ee 1048
.org 0x244f0
	ldr r0, [r0, #40]	@ 000244f0 806a
.org 0x244f2
	ldr r1, [r0, #28]	@ 000244f2 c169
.org 0x244f4
	adds r0, r4, #0	@ 000244f4 201c
.org 0x244f6
	bl 0x275f0	@ 000244f6 03f07bf8
.org 0x244fa
	subs r4, #16	@ 000244fa 103c
.org 0x244fc
	ldrh r0, [r4, #8]	@ 000244fc 2089
.org 0x244fe
	ldr r2, [pc, #52]	@ 000244fe 0d4a
.org 0x24500
	ands r2, r0	@ 00024500 0240
.org 0x24502
	ldrb r1, [r4, #18]	@ 00024502 a17c
.org 0x24504
	movs r0, #253	@ 00024504 fd20
.org 0x24506
	ands r0, r1	@ 00024506 0840
.org 0x24508
	strb r0, [r4, #18]	@ 00024508 a074
.org 0x2450a
	ldr r3, [pc, #44]	@ 0002450a 0b4b
.org 0x2450c
	ldrb r1, [r3, #4]	@ 0002450c 1979
.org 0x2450e
	movs r0, #247	@ 0002450e f720
.org 0x24510
	ands r0, r1	@ 00024510 0840
.org 0x24512
	strb r0, [r3, #4]	@ 00024512 1871
.org 0x24514
	movs r0, #1	@ 00024514 0120
.org 0x24516
	orrs r2, r0	@ 00024516 0243
.org 0x24518
	strh r2, [r4, #8]	@ 00024518 2281
.org 0x2451a
	movs r0, #7	@ 0002451a 0720
.org 0x2451c
	b.n 0x2474c	@ 0002451c 16e1
.org 0x2451e
	.byte 0x00	@ 0002451e data
.org 0x2451f
	.byte 0x00	@ 0002451f data
.org 0x24520
	.byte 0xb0,0x0a,0x00,0x02	@ 00024520 data
.org 0x24524
	.byte 0x24,0xd0,0x02,0x00	@ 00024524 data
.org 0x24528
	.byte 0xe0,0x32,0x00,0x03	@ 00024528 data
.org 0x2452c
	.byte 0x20,0xe9,0x02,0x02	@ 0002452c data
.org 0x24530
	.byte 0xf8,0x2c,0x84,0x08	@ 00024530 data
.org 0x24534
	.byte 0xef,0xff,0x00,0x00	@ 00024534 data
.org 0x24538
	.byte 0xb0,0xe8,0x02,0x02	@ 00024538 data
.org 0x2453c
	movs r0, #190	@ 0002453c be20
.org 0x2453e
	lsls r0, r0, #1	@ 0002453e 4000
.org 0x24540
	adds r3, r6, r0	@ 00024540 3318
.org 0x24542
	ldrb r0, [r3, #0]	@ 00024542 1878
.org 0x24544
	cmp r0, #7	@ 00024544 0728
.org 0x24546
	bne.n 0x24560	@ 00024546 0bd1
.org 0x24548
	ldr r1, [pc, #16]	@ 00024548 0449
.org 0x2454a
	ldrb r2, [r1, #0]	@ 0002454a 0a78
.org 0x2454c
	movs r0, #127	@ 0002454c 7f20
.org 0x2454e
	ands r0, r2	@ 0002454e 1040
.org 0x24550
	movs r2, #0	@ 00024550 0022
.org 0x24552
	strb r0, [r1, #0]	@ 00024552 0870
.org 0x24554
	strb r2, [r1, #1]	@ 00024554 4a70
.org 0x24556
	movs r0, #8	@ 00024556 0820
.org 0x24558
	strb r0, [r3, #0]	@ 00024558 1870
.org 0x2455a
	b.n 0x2474e	@ 0002455a f8e0
.org 0x2455c
	.byte 0xe0,0x32,0x00,0x03	@ 0002455c data
.org 0x24560
	cmp r0, #8	@ 00024560 0828
.org 0x24562
	bne.n 0x245b4	@ 00024562 27d1
.org 0x24564
	ldr r1, [r4, #84]	@ 00024564 616d
.org 0x24566
	ldr r0, [pc, #36]	@ 00024566 0948
.org 0x24568
	cmp r1, r0	@ 00024568 8142
.org 0x2456a
	ble.n 0x245b4	@ 0002456a 23dd
.org 0x2456c
	movs r0, #5	@ 0002456c 0520
.org 0x2456e
	bl 0x1f63c	@ 0002456e fbf765f8
.org 0x24572
	ldr r2, [pc, #28]	@ 00024572 074a
.org 0x24574
	ldrb r1, [r2, #4]	@ 00024574 1179
.org 0x24576
	movs r0, #8	@ 00024576 0820
.org 0x24578
	orrs r0, r1	@ 00024578 0843
.org 0x2457a
	strb r0, [r2, #4]	@ 0002457a 1071
.org 0x2457c
	ldr r1, [r4, #88]	@ 0002457c a16d
.org 0x2457e
	ldr r0, [pc, #20]	@ 0002457e 0548
.org 0x24580
	cmp r1, r0	@ 00024580 8142
.org 0x24582
	bgt.n 0x2459c	@ 00024582 0bdc
.org 0x24584
	ldr r1, [pc, #16]	@ 00024584 0449
.org 0x24586
	movs r0, #1	@ 00024586 0120
.org 0x24588
	b.n 0x245a0	@ 00024588 0ae0
.org 0x2458a
	.byte 0x00	@ 0002458a data
.org 0x2458b
	.byte 0x00	@ 0002458b data
.org 0x2458c
	.byte 0xff,0x7f,0x17,0x00	@ 0002458c data
.org 0x24590
	.byte 0xb0,0xe8,0x02,0x02	@ 00024590 data
.org 0x24594
	.byte 0xff,0x5f,0x04,0x00	@ 00024594 data
.org 0x24598
	.byte 0x10,0xe9,0x02,0x02	@ 00024598 data
.org 0x2459c
	ldr r1, [pc, #16]	@ 0002459c 0449
.org 0x2459e
	movs r0, #0	@ 0002459e 0020
.org 0x245a0
	strh r0, [r1, #10]	@ 000245a0 4881
.org 0x245a2
	movs r0, #190	@ 000245a2 be20
.org 0x245a4
	lsls r0, r0, #1	@ 000245a4 4000
.org 0x245a6
	adds r1, r6, r0	@ 000245a6 3118
.org 0x245a8
	movs r0, #9	@ 000245a8 0920
.org 0x245aa
	strb r0, [r1, #0]	@ 000245aa 0870
.org 0x245ac
	b.n 0x2474e	@ 000245ac cfe0
.org 0x245ae
	.byte 0x00	@ 000245ae data
.org 0x245af
	.byte 0x00	@ 000245af data
.org 0x245b0
	.byte 0x10,0xe9,0x02,0x02	@ 000245b0 data
.org 0x245b4
	movs r1, #190	@ 000245b4 be21
.org 0x245b6
	lsls r1, r1, #1	@ 000245b6 4900
.org 0x245b8
	adds r5, r6, r1	@ 000245b8 7518
.org 0x245ba
	ldrb r0, [r5, #0]	@ 000245ba 2878
.org 0x245bc
	cmp r0, #9	@ 000245bc 0928
.org 0x245be
	bne.n 0x24688	@ 000245be 63d1
.org 0x245c0
	ldr r0, [pc, #60]	@ 000245c0 0f48
.org 0x245c2
	adds r7, r6, r0	@ 000245c2 3718
.org 0x245c4
	ldrb r0, [r7, #0]	@ 000245c4 3878
.org 0x245c6
	cmp r0, #0	@ 000245c6 0028
.org 0x245c8
	bne.n 0x24610	@ 000245c8 22d1
.org 0x245ca
	ldr r1, [r4, #84]	@ 000245ca 616d
.org 0x245cc
	ldr r0, [pc, #52]	@ 000245cc 0d48
.org 0x245ce
	cmp r1, r0	@ 000245ce 8142
.org 0x245d0
	ble.n 0x24610	@ 000245d0 1edd
.org 0x245d2
	ldr r2, [pc, #52]	@ 000245d2 0d4a
.org 0x245d4
	ldrb r1, [r2, #1]	@ 000245d4 5178
.org 0x245d6
	movs r0, #2	@ 000245d6 0220
.org 0x245d8
	orrs r0, r1	@ 000245d8 0843
.org 0x245da
	strb r0, [r2, #1]	@ 000245da 5070
.org 0x245dc
	ldr r0, [pc, #44]	@ 000245dc 0b48
.org 0x245de
	movs r1, #180	@ 000245de b421
.org 0x245e0
	lsls r1, r1, #1	@ 000245e0 4900
.org 0x245e2
	adds r5, r0, r1	@ 000245e2 4518
.org 0x245e4
	ldr r0, [r5, #0]	@ 000245e4 2868
.org 0x245e6
	movs r4, #1	@ 000245e6 0124
.org 0x245e8
	negs r4, r4	@ 000245e8 6442
.org 0x245ea
	cmp r0, r4	@ 000245ea a042
.org 0x245ec
	beq.n 0x245f8	@ 000245ec 04d0
.org 0x245ee
	lsls r0, r0, #16	@ 000245ee 0004
.org 0x245f0
	lsrs r0, r0, #16	@ 000245f0 000c
.org 0x245f2
	bl 0x2a98	@ 000245f2 def751fa
.org 0x245f6
	str r4, [r5, #0]	@ 000245f6 2c60
.org 0x245f8
	movs r0, #1	@ 000245f8 0120
.org 0x245fa
	strb r0, [r7, #0]	@ 000245fa 3870
.org 0x245fc
	b.n 0x2474e	@ 000245fc a7e0
.org 0x245fe
	.byte 0x00	@ 000245fe data
.org 0x245ff
	.byte 0x00	@ 000245ff data
.org 0x24600
	.byte 0x7d,0x01,0x00,0x00	@ 00024600 data
.org 0x24604
	.byte 0xff,0x8f,0x23,0x00	@ 00024604 data
.org 0x24608
	.byte 0xe0,0x32,0x00,0x03	@ 00024608 data
.org 0x2460c
	.byte 0x10,0xe9,0x02,0x02	@ 0002460c data
.org 0x24610
	ldr r0, [pc, #20]	@ 00024610 0548
.org 0x24612
	adds r2, r6, r0	@ 00024612 3218
.org 0x24614
	ldrb r0, [r2, #0]	@ 00024614 1078
.org 0x24616
	cmp r0, #1	@ 00024616 0128
.org 0x24618
	bne.n 0x24630	@ 00024618 0ad1
.org 0x2461a
	ldr r0, [pc, #16]	@ 0002461a 0448
.org 0x2461c
	movs r1, #0	@ 0002461c 0021
.org 0x2461e
	strb r1, [r0, #1]	@ 0002461e 4170
.org 0x24620
	movs r0, #2	@ 00024620 0220
.org 0x24622
	strb r0, [r2, #0]	@ 00024622 1070
.org 0x24624
	b.n 0x2474e	@ 00024624 93e0
.org 0x24626
	.byte 0x00	@ 00024626 data
.org 0x24627
	.byte 0x00	@ 00024627 data
.org 0x24628
	.byte 0x7d,0x01,0x00,0x00	@ 00024628 data
.org 0x2462c
	.byte 0xe0,0x32,0x00,0x03	@ 0002462c data
.org 0x24630
	cmp r0, #2	@ 00024630 0228
.org 0x24632
	beq.n 0x24636	@ 00024632 00d0
.org 0x24634
	b.n 0x2474e	@ 00024634 8be0
.org 0x24636
	ldr r1, [r4, #84]	@ 00024636 616d
.org 0x24638
	ldr r0, [pc, #64]	@ 00024638 1048
.org 0x2463a
	cmp r1, r0	@ 0002463a 8142
.org 0x2463c
	bgt.n 0x24640	@ 0002463c 00dc
.org 0x2463e
	b.n 0x2474e	@ 0002463e 86e0
.org 0x24640
	ldr r0, [pc, #60]	@ 00024640 0f48
.org 0x24642
	movs r1, #0	@ 00024642 0021
.org 0x24644
	strb r1, [r0, #1]	@ 00024644 4170
.org 0x24646
	ldr r0, [pc, #60]	@ 00024646 0f48
.org 0x24648
	movs r1, #180	@ 00024648 b421
.org 0x2464a
	lsls r1, r1, #1	@ 0002464a 4900
.org 0x2464c
	adds r4, r0, r1	@ 0002464c 4418
.org 0x2464e
	ldr r0, [r4, #0]	@ 0002464e 2068
.org 0x24650
	cmp r0, #155	@ 00024650 9b28
.org 0x24652
	beq.n 0x24670	@ 00024652 0dd0
.org 0x24654
	movs r5, #1	@ 00024654 0125
.org 0x24656
	negs r5, r5	@ 00024656 6d42
.org 0x24658
	cmp r0, r5	@ 00024658 a842
.org 0x2465a
	beq.n 0x24666	@ 0002465a 04d0
.org 0x2465c
	lsls r0, r0, #16	@ 0002465c 0004
.org 0x2465e
	lsrs r0, r0, #16	@ 0002465e 000c
.org 0x24660
	bl 0x2a98	@ 00024660 def71afa
.org 0x24664
	str r5, [r4, #0]	@ 00024664 2560
.org 0x24666
	movs r0, #155	@ 00024666 9b20
.org 0x24668
	bl 0x2a88	@ 00024668 def70efa
.org 0x2466c
	movs r0, #155	@ 0002466c 9b20
.org 0x2466e
	str r0, [r4, #0]	@ 0002466e 2060
.org 0x24670
	movs r0, #190	@ 00024670 be20
.org 0x24672
	lsls r0, r0, #1	@ 00024672 4000
.org 0x24674
	adds r1, r6, r0	@ 00024674 3118
.org 0x24676
	movs r0, #10	@ 00024676 0a20
.org 0x24678
	strb r0, [r1, #0]	@ 00024678 0870
.org 0x2467a
	b.n 0x2474e	@ 0002467a 68e0
.org 0x2467c
	.byte 0xff,0xaf,0x23,0x00	@ 0002467c data
.org 0x24680
	.byte 0xe0,0x32,0x00,0x03	@ 00024680 data
.org 0x24684
	.byte 0x10,0xe9,0x02,0x02	@ 00024684 data

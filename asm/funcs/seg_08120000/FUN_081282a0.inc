@ FUN_081282a0  entry 0x081282a0  size 1008
.thumb
.org 0x1282a0
FUN_081282a0:
	push {r4, r5, r6, r7, lr}	@ 001282a0 f0b5
.org 0x1282a2
	mov r7, sl	@ 001282a2 5746
.org 0x1282a4
	mov r6, r9	@ 001282a4 4e46
.org 0x1282a6
	mov r5, r8	@ 001282a6 4546
.org 0x1282a8
	push {r5, r6, r7}	@ 001282a8 e0b4
.org 0x1282aa
	sub sp, #28	@ 001282aa 87b0
.org 0x1282ac
	ldr r0, [pc, #16]	@ 001282ac 0448
.org 0x1282ae
	ldr r0, [r0, #0]	@ 001282ae 0068
.org 0x1282b0
	str r0, [sp, #4]	@ 001282b0 0190
.org 0x1282b2
	ldrb r0, [r0, #10]	@ 001282b2 807a
.org 0x1282b4
	cmp r0, #0	@ 001282b4 0028
.org 0x1282b6
	beq.n 0x1282c4	@ 001282b6 05d0
.org 0x1282b8
	subs r0, #1	@ 001282b8 0138
.org 0x1282ba
	ldr r1, [sp, #4]	@ 001282ba 0199
.org 0x1282bc
	strb r0, [r1, #10]	@ 001282bc 8872
.org 0x1282be
	b.n 0x1282ca	@ 001282be 04e0
.org 0x1282c0
	.byte 0xf0,0x7f,0x00,0x03	@ 001282c0 data
.org 0x1282c4
	movs r0, #14	@ 001282c4 0e20
.org 0x1282c6
	ldr r2, [sp, #4]	@ 001282c6 019a
.org 0x1282c8
	strb r0, [r2, #10]	@ 001282c8 9072
.org 0x1282ca
	movs r6, #1	@ 001282ca 0126
.org 0x1282cc
	ldr r0, [sp, #4]	@ 001282cc 0198
.org 0x1282ce
	ldr r4, [r0, #28]	@ 001282ce c469
.org 0x1282d0
	ldrb r1, [r4, #0]	@ 001282d0 2178
.org 0x1282d2
	movs r0, #199	@ 001282d2 c720
.org 0x1282d4
	ands r0, r1	@ 001282d4 0840
.org 0x1282d6
	adds r2, r6, #1	@ 001282d6 721c
.org 0x1282d8
	mov sl, r2	@ 001282d8 9246
.org 0x1282da
	movs r2, #64	@ 001282da 4022
.org 0x1282dc
	adds r2, r2, r4	@ 001282dc 1219
.org 0x1282de
	mov r9, r2	@ 001282de 9146
.org 0x1282e0
	cmp r0, #0	@ 001282e0 0028
.org 0x1282e2
	bne.n 0x1282e6	@ 001282e2 00d1
.org 0x1282e4
	b.n 0x1286d0	@ 001282e4 f4e1
.org 0x1282e6
	cmp r6, #2	@ 001282e6 022e
.org 0x1282e8
	beq.n 0x128318	@ 001282e8 16d0
.org 0x1282ea
	cmp r6, #2	@ 001282ea 022e
.org 0x1282ec
	bgt.n 0x1282f4	@ 001282ec 02dc
.org 0x1282ee
	cmp r6, #1	@ 001282ee 012e
.org 0x1282f0
	beq.n 0x1282fa	@ 001282f0 03d0
.org 0x1282f2
	b.n 0x128350	@ 001282f2 2de0
.org 0x1282f4
	cmp r6, #3	@ 001282f4 032e
.org 0x1282f6
	beq.n 0x128330	@ 001282f6 1bd0
.org 0x1282f8
	b.n 0x128350	@ 001282f8 2ae0
.org 0x1282fa
	ldr r0, [pc, #16]	@ 001282fa 0448
.org 0x1282fc
	str r0, [sp, #8]	@ 001282fc 0290
.org 0x1282fe
	ldr r7, [pc, #16]	@ 001282fe 044f
.org 0x128300
	ldr r2, [pc, #16]	@ 00128300 044a
.org 0x128302
	str r2, [sp, #12]	@ 00128302 0392
.org 0x128304
	adds r0, #4	@ 00128304 0430
.org 0x128306
	str r0, [sp, #16]	@ 00128306 0490
.org 0x128308
	adds r2, #2	@ 00128308 0232
.org 0x12830a
	b.n 0x128360	@ 0012830a 29e0
.org 0x12830c
	.byte 0x60,0x00,0x00,0x04	@ 0012830c data
.org 0x128310
	.byte 0x62,0x00,0x00,0x04	@ 00128310 data
.org 0x128314
	.byte 0x63,0x00,0x00,0x04	@ 00128314 data
.org 0x128318
	ldr r0, [pc, #8]	@ 00128318 0248
.org 0x12831a
	str r0, [sp, #8]	@ 0012831a 0290
.org 0x12831c
	ldr r7, [pc, #8]	@ 0012831c 024f
.org 0x12831e
	ldr r2, [pc, #12]	@ 0012831e 034a
.org 0x128320
	b.n 0x128358	@ 00128320 1ae0
.org 0x128322
	.byte 0x00	@ 00128322 data
.org 0x128323
	.byte 0x00	@ 00128323 data
.org 0x128324
	.byte 0x61,0x00,0x00,0x04	@ 00128324 data
.org 0x128328
	.byte 0x68,0x00,0x00,0x04	@ 00128328 data
.org 0x12832c
	.byte 0x69,0x00,0x00,0x04	@ 0012832c data
.org 0x128330
	ldr r0, [pc, #16]	@ 00128330 0448
.org 0x128332
	str r0, [sp, #8]	@ 00128332 0290
.org 0x128334
	ldr r7, [pc, #16]	@ 00128334 044f
.org 0x128336
	ldr r2, [pc, #20]	@ 00128336 054a
.org 0x128338
	str r2, [sp, #12]	@ 00128338 0392
.org 0x12833a
	adds r0, #4	@ 0012833a 0430
.org 0x12833c
	str r0, [sp, #16]	@ 0012833c 0490
.org 0x12833e
	adds r2, #2	@ 0012833e 0232
.org 0x128340
	b.n 0x128360	@ 00128340 0ee0
.org 0x128342
	.byte 0x00	@ 00128342 data
.org 0x128343
	.byte 0x00	@ 00128343 data
.org 0x128344
	.byte 0x70,0x00,0x00,0x04	@ 00128344 data
.org 0x128348
	.byte 0x72,0x00,0x00,0x04	@ 00128348 data
.org 0x12834c
	.byte 0x73,0x00,0x00,0x04	@ 0012834c data
.org 0x128350
	ldr r0, [pc, #92]	@ 00128350 1748
.org 0x128352
	str r0, [sp, #8]	@ 00128352 0290
.org 0x128354
	ldr r7, [pc, #92]	@ 00128354 174f
.org 0x128356
	ldr r2, [pc, #96]	@ 00128356 184a
.org 0x128358
	str r2, [sp, #12]	@ 00128358 0392
.org 0x12835a
	adds r0, #11	@ 0012835a 0b30
.org 0x12835c
	str r0, [sp, #16]	@ 0012835c 0490
.org 0x12835e
	adds r2, #4	@ 0012835e 0432
.org 0x128360
	str r2, [sp, #20]	@ 00128360 0592
.org 0x128362
	ldr r0, [sp, #4]	@ 00128362 0198
.org 0x128364
	ldrb r0, [r0, #10]	@ 00128364 807a
.org 0x128366
	str r0, [sp, #0]	@ 00128366 0090
.org 0x128368
	ldr r2, [sp, #12]	@ 00128368 039a
.org 0x12836a
	ldrb r0, [r2, #0]	@ 0012836a 1078
.org 0x12836c
	mov r8, r0	@ 0012836c 8046
.org 0x12836e
	adds r2, r1, #0	@ 0012836e 0a1c
.org 0x128370
	movs r0, #128	@ 00128370 8020
.org 0x128372
	ands r0, r2	@ 00128372 1040
.org 0x128374
	cmp r0, #0	@ 00128374 0028
.org 0x128376
	beq.n 0x128456	@ 00128376 6ed0
.org 0x128378
	movs r3, #64	@ 00128378 4023
.org 0x12837a
	adds r0, r3, #0	@ 0012837a 181c
.org 0x12837c
	ands r0, r2	@ 0012837c 1040
.org 0x12837e
	lsls r0, r0, #24	@ 0012837e 0006
.org 0x128380
	lsrs r5, r0, #24	@ 00128380 050e
.org 0x128382
	adds r0, r6, #1	@ 00128382 701c
.org 0x128384
	mov sl, r0	@ 00128384 8246
.org 0x128386
	movs r1, #64	@ 00128386 4021
.org 0x128388
	adds r1, r1, r4	@ 00128388 0919
.org 0x12838a
	mov r9, r1	@ 0012838a 8946
.org 0x12838c
	cmp r5, #0	@ 0012838c 002d
.org 0x12838e
	bne.n 0x12847a	@ 0012838e 74d1
.org 0x128390
	movs r0, #3	@ 00128390 0320
.org 0x128392
	strb r0, [r4, #0]	@ 00128392 2070
.org 0x128394
	strb r0, [r4, #29]	@ 00128394 6077
.org 0x128396
	adds r0, r4, #0	@ 00128396 201c
.org 0x128398
	str r3, [sp, #24]	@ 00128398 0693
.org 0x12839a
	bl 0x128238	@ 0012839a fff74dff
.org 0x12839e
	ldr r3, [sp, #24]	@ 0012839e 069b
.org 0x1283a0
	cmp r6, #2	@ 001283a0 022e
.org 0x1283a2
	beq.n 0x1283c8	@ 001283a2 11d0
.org 0x1283a4
	cmp r6, #2	@ 001283a4 022e
.org 0x1283a6
	bgt.n 0x1283bc	@ 001283a6 09dc
.org 0x1283a8
	cmp r6, #1	@ 001283a8 012e
.org 0x1283aa
	beq.n 0x1283c2	@ 001283aa 0ad0
.org 0x1283ac
	b.n 0x12841c	@ 001283ac 36e0
.org 0x1283ae
	.byte 0x00	@ 001283ae data
.org 0x1283af
	.byte 0x00	@ 001283af data
.org 0x1283b0
	.byte 0x71,0x00,0x00,0x04	@ 001283b0 data
.org 0x1283b4
	.byte 0x78,0x00,0x00,0x04	@ 001283b4 data
.org 0x1283b8
	.byte 0x79,0x00,0x00,0x04	@ 001283b8 data
.org 0x1283bc
	cmp r6, #3	@ 001283bc 032e
.org 0x1283be
	beq.n 0x1283d4	@ 001283be 09d0
.org 0x1283c0
	b.n 0x12841c	@ 001283c0 2ce0
.org 0x1283c2
	ldrb r0, [r4, #31]	@ 001283c2 e07f
.org 0x1283c4
	ldr r2, [sp, #8]	@ 001283c4 029a
.org 0x1283c6
	strb r0, [r2, #0]	@ 001283c6 1070
.org 0x1283c8
	ldr r0, [r4, #36]	@ 001283c8 606a
.org 0x1283ca
	lsls r0, r0, #6	@ 001283ca 8001
.org 0x1283cc
	ldrb r1, [r4, #30]	@ 001283cc a17f
.org 0x1283ce
	adds r0, r1, r0	@ 001283ce 0818
.org 0x1283d0
	strb r0, [r7, #0]	@ 001283d0 3870
.org 0x1283d2
	b.n 0x128428	@ 001283d2 29e0
.org 0x1283d4
	ldr r1, [r4, #36]	@ 001283d4 616a
.org 0x1283d6
	ldr r0, [r4, #40]	@ 001283d6 a06a
.org 0x1283d8
	cmp r1, r0	@ 001283d8 8142
.org 0x1283da
	beq.n 0x1283fc	@ 001283da 0fd0
.org 0x1283dc
	ldr r2, [sp, #8]	@ 001283dc 029a
.org 0x1283de
	strb r3, [r2, #0]	@ 001283de 1370
.org 0x1283e0
	ldr r1, [pc, #44]	@ 001283e0 0b49
.org 0x1283e2
	ldr r2, [r4, #36]	@ 001283e2 626a
.org 0x1283e4
	ldr r0, [r2, #0]	@ 001283e4 1068
.org 0x1283e6
	str r0, [r1, #0]	@ 001283e6 0860
.org 0x1283e8
	adds r1, #4	@ 001283e8 0431
.org 0x1283ea
	ldr r0, [r2, #4]	@ 001283ea 5068
.org 0x1283ec
	str r0, [r1, #0]	@ 001283ec 0860
.org 0x1283ee
	adds r1, #4	@ 001283ee 0431
.org 0x1283f0
	ldr r0, [r2, #8]	@ 001283f0 9068
.org 0x1283f2
	str r0, [r1, #0]	@ 001283f2 0860
.org 0x1283f4
	adds r1, #4	@ 001283f4 0431
.org 0x1283f6
	ldr r0, [r2, #12]	@ 001283f6 d068
.org 0x1283f8
	str r0, [r1, #0]	@ 001283f8 0860
.org 0x1283fa
	str r2, [r4, #40]	@ 001283fa a262
.org 0x1283fc
	ldr r0, [sp, #8]	@ 001283fc 0298
.org 0x1283fe
	strb r5, [r0, #0]	@ 001283fe 0570
.org 0x128400
	ldrb r0, [r4, #30]	@ 00128400 a07f
.org 0x128402
	strb r0, [r7, #0]	@ 00128402 3870
.org 0x128404
	ldrb r0, [r4, #30]	@ 00128404 a07f
.org 0x128406
	cmp r0, #0	@ 00128406 0028
.org 0x128408
	beq.n 0x128414	@ 00128408 04d0
.org 0x12840a
	movs r0, #192	@ 0012840a c020
.org 0x12840c
	b.n 0x128436	@ 0012840c 13e0
.org 0x12840e
	.byte 0x00	@ 0012840e data
.org 0x12840f
	.byte 0x00	@ 0012840f data
.org 0x128410
	.byte 0x90,0x00,0x00,0x04	@ 00128410 data
.org 0x128414
	movs r1, #128	@ 00128414 8021
.org 0x128416
	negs r1, r1	@ 00128416 4942
.org 0x128418
	strb r1, [r4, #26]	@ 00128418 a176
.org 0x12841a
	b.n 0x128438	@ 0012841a 0de0
.org 0x12841c
	ldrb r0, [r4, #30]	@ 0012841c a07f
.org 0x12841e
	strb r0, [r7, #0]	@ 0012841e 3870
.org 0x128420
	ldr r0, [r4, #36]	@ 00128420 606a
.org 0x128422
	lsls r0, r0, #3	@ 00128422 c000
.org 0x128424
	ldr r2, [sp, #16]	@ 00128424 049a
.org 0x128426
	strb r0, [r2, #0]	@ 00128426 1070
.org 0x128428
	ldrb r0, [r4, #4]	@ 00128428 2079
.org 0x12842a
	adds r0, #8	@ 0012842a 0830
.org 0x12842c
	mov r8, r0	@ 0012842c 8046
.org 0x12842e
	ldrb r0, [r4, #30]	@ 0012842e a07f
.org 0x128430
	cmp r0, #0	@ 00128430 0028
.org 0x128432
	beq.n 0x128436	@ 00128432 00d0
.org 0x128434
	movs r0, #64	@ 00128434 4020
.org 0x128436
	strb r0, [r4, #26]	@ 00128436 a076
.org 0x128438
	ldrb r1, [r4, #4]	@ 00128438 2179
.org 0x12843a
	movs r2, #0	@ 0012843a 0022
.org 0x12843c
	strb r1, [r4, #11]	@ 0012843c e172
.org 0x12843e
	movs r0, #255	@ 0012843e ff20
.org 0x128440
	ands r0, r1	@ 00128440 0840
.org 0x128442
	adds r1, r6, #1	@ 00128442 711c
.org 0x128444
	mov sl, r1	@ 00128444 8a46
.org 0x128446
	movs r1, #64	@ 00128446 4021
.org 0x128448
	adds r1, r1, r4	@ 00128448 0919
.org 0x12844a
	mov r9, r1	@ 0012844a 8946
.org 0x12844c
	cmp r0, #0	@ 0012844c 0028
.org 0x12844e
	bne.n 0x128452	@ 0012844e 00d1
.org 0x128450
	b.n 0x12858e	@ 00128450 9de0
.org 0x128452
	strb r2, [r4, #9]	@ 00128452 6272
.org 0x128454
	b.n 0x1285bc	@ 00128454 b2e0
.org 0x128456
	movs r0, #4	@ 00128456 0420
.org 0x128458
	ands r0, r2	@ 00128458 1040
.org 0x12845a
	cmp r0, #0	@ 0012845a 0028
.org 0x12845c
	beq.n 0x128488	@ 0012845c 14d0
.org 0x12845e
	ldrb r0, [r4, #13]	@ 0012845e 607b
.org 0x128460
	subs r0, #1	@ 00128460 0138
.org 0x128462
	strb r0, [r4, #13]	@ 00128462 6073
.org 0x128464
	movs r2, #255	@ 00128464 ff22
.org 0x128466
	ands r0, r2	@ 00128466 1040
.org 0x128468
	lsls r0, r0, #24	@ 00128468 0006
.org 0x12846a
	adds r1, r6, #1	@ 0012846a 711c
.org 0x12846c
	mov sl, r1	@ 0012846c 8a46
.org 0x12846e
	movs r2, #64	@ 0012846e 4022
.org 0x128470
	adds r2, r2, r4	@ 00128470 1219
.org 0x128472
	mov r9, r2	@ 00128472 9146
.org 0x128474
	cmp r0, #0	@ 00128474 0028
.org 0x128476
	ble.n 0x12847a	@ 00128476 00dd
.org 0x128478
	b.n 0x1285ce	@ 00128478 a9e0
.org 0x12847a
	lsls r0, r6, #24	@ 0012847a 3006
.org 0x12847c
	lsrs r0, r0, #24	@ 0012847c 000e
.org 0x12847e
	bl 0x1281e8	@ 0012847e fff7b3fe
.org 0x128482
	movs r0, #0	@ 00128482 0020
.org 0x128484
	strb r0, [r4, #0]	@ 00128484 2070
.org 0x128486
	b.n 0x1286cc	@ 00128486 21e1
.org 0x128488
	movs r0, #64	@ 00128488 4020
.org 0x12848a
	ands r0, r1	@ 0012848a 0840
.org 0x12848c
	adds r2, r6, #1	@ 0012848c 721c
.org 0x12848e
	mov sl, r2	@ 0012848e 9246
.org 0x128490
	movs r2, #64	@ 00128490 4022
.org 0x128492
	adds r2, r2, r4	@ 00128492 1219
.org 0x128494
	mov r9, r2	@ 00128494 9146
.org 0x128496
	cmp r0, #0	@ 00128496 0028
.org 0x128498
	beq.n 0x1284c8	@ 00128498 16d0
.org 0x12849a
	movs r0, #3	@ 0012849a 0320
.org 0x12849c
	ands r0, r1	@ 0012849c 0840
.org 0x12849e
	cmp r0, #0	@ 0012849e 0028
.org 0x1284a0
	beq.n 0x1284c8	@ 001284a0 12d0
.org 0x1284a2
	movs r0, #252	@ 001284a2 fc20
.org 0x1284a4
	ands r0, r1	@ 001284a4 0840
.org 0x1284a6
	movs r2, #0	@ 001284a6 0022
.org 0x1284a8
	strb r0, [r4, #0]	@ 001284a8 2070
.org 0x1284aa
	ldrb r1, [r4, #7]	@ 001284aa e179
.org 0x1284ac
	strb r1, [r4, #11]	@ 001284ac e172
.org 0x1284ae
	movs r0, #255	@ 001284ae ff20
.org 0x1284b0
	ands r0, r1	@ 001284b0 0840
.org 0x1284b2
	cmp r0, #0	@ 001284b2 0028
.org 0x1284b4
	beq.n 0x1284fa	@ 001284b4 21d0
.org 0x1284b6
	movs r0, #1	@ 001284b6 0120
.org 0x1284b8
	ldrb r1, [r4, #29]	@ 001284b8 617f
.org 0x1284ba
	orrs r0, r1	@ 001284ba 0843
.org 0x1284bc
	strb r0, [r4, #29]	@ 001284bc 6077
.org 0x1284be
	cmp r6, #3	@ 001284be 032e
.org 0x1284c0
	beq.n 0x1285bc	@ 001284c0 7cd0
.org 0x1284c2
	ldrb r2, [r4, #7]	@ 001284c2 e279
.org 0x1284c4
	mov r8, r2	@ 001284c4 9046
.org 0x1284c6
	b.n 0x1285bc	@ 001284c6 79e0
.org 0x1284c8
	ldrb r0, [r4, #11]	@ 001284c8 e07a
.org 0x1284ca
	cmp r0, #0	@ 001284ca 0028
.org 0x1284cc
	bne.n 0x1285bc	@ 001284cc 76d1
.org 0x1284ce
	cmp r6, #3	@ 001284ce 032e
.org 0x1284d0
	bne.n 0x1284da	@ 001284d0 03d1
.org 0x1284d2
	movs r0, #1	@ 001284d2 0120
.org 0x1284d4
	ldrb r1, [r4, #29]	@ 001284d4 617f
.org 0x1284d6
	orrs r0, r1	@ 001284d6 0843
.org 0x1284d8
	strb r0, [r4, #29]	@ 001284d8 6077
.org 0x1284da
	adds r0, r4, #0	@ 001284da 201c
.org 0x1284dc
	bl 0x128238	@ 001284dc fff7acfe
.org 0x1284e0
	movs r0, #3	@ 001284e0 0320
.org 0x1284e2
	ldrb r2, [r4, #0]	@ 001284e2 2278
.org 0x1284e4
	ands r0, r2	@ 001284e4 1040
.org 0x1284e6
	cmp r0, #0	@ 001284e6 0028
.org 0x1284e8
	bne.n 0x12852e	@ 001284e8 21d1
.org 0x1284ea
	ldrb r0, [r4, #9]	@ 001284ea 607a
.org 0x1284ec
	subs r0, #1	@ 001284ec 0138
.org 0x1284ee
	strb r0, [r4, #9]	@ 001284ee 6072
.org 0x1284f0
	movs r1, #255	@ 001284f0 ff21
.org 0x1284f2
	ands r0, r1	@ 001284f2 0840
.org 0x1284f4
	lsls r0, r0, #24	@ 001284f4 0006
.org 0x1284f6
	cmp r0, #0	@ 001284f6 0028
.org 0x1284f8
	bgt.n 0x12852a	@ 001284f8 17dc
.org 0x1284fa
	ldrb r2, [r4, #12]	@ 001284fa 227b
.org 0x1284fc
	ldrb r1, [r4, #10]	@ 001284fc a17a
.org 0x1284fe
	adds r0, r2, #0	@ 001284fe 101c
.org 0x128500
	muls r0, r1	@ 00128500 4843
.org 0x128502
	adds r0, #255	@ 00128502 ff30
.org 0x128504
	asrs r0, r0, #8	@ 00128504 0012
.org 0x128506
	movs r1, #0	@ 00128506 0021
.org 0x128508
	strb r0, [r4, #9]	@ 00128508 6072
.org 0x12850a
	lsls r0, r0, #24	@ 0012850a 0006
.org 0x12850c
	cmp r0, #0	@ 0012850c 0028
.org 0x12850e
	beq.n 0x12847a	@ 0012850e b4d0
.org 0x128510
	movs r0, #4	@ 00128510 0420
.org 0x128512
	ldrb r2, [r4, #0]	@ 00128512 2278
.org 0x128514
	orrs r0, r2	@ 00128514 1043
.org 0x128516
	strb r0, [r4, #0]	@ 00128516 2070
.org 0x128518
	movs r0, #1	@ 00128518 0120
.org 0x12851a
	ldrb r1, [r4, #29]	@ 0012851a 617f
.org 0x12851c
	orrs r0, r1	@ 0012851c 0843
.org 0x12851e
	strb r0, [r4, #29]	@ 0012851e 6077
.org 0x128520
	cmp r6, #3	@ 00128520 032e
.org 0x128522
	beq.n 0x1285ce	@ 00128522 54d0
.org 0x128524
	movs r2, #8	@ 00128524 0822
.org 0x128526
	mov r8, r2	@ 00128526 9046
.org 0x128528
	b.n 0x1285ce	@ 00128528 51e0
.org 0x12852a
	ldrb r0, [r4, #7]	@ 0012852a e079
.org 0x12852c
	b.n 0x1285ba	@ 0012852c 45e0
.org 0x12852e
	cmp r0, #1	@ 0012852e 0128
.org 0x128530
	bne.n 0x12853a	@ 00128530 03d1
.org 0x128532
	ldrb r0, [r4, #25]	@ 00128532 607e
.org 0x128534
	strb r0, [r4, #9]	@ 00128534 6072
.org 0x128536
	movs r0, #7	@ 00128536 0720
.org 0x128538
	b.n 0x1285ba	@ 00128538 3fe0
.org 0x12853a
	cmp r0, #2	@ 0012853a 0228
.org 0x12853c
	bne.n 0x12857e	@ 0012853c 1fd1
.org 0x12853e
	ldrb r0, [r4, #9]	@ 0012853e 607a
.org 0x128540
	subs r0, #1	@ 00128540 0138
.org 0x128542
	strb r0, [r4, #9]	@ 00128542 6072
.org 0x128544
	movs r1, #255	@ 00128544 ff21
.org 0x128546
	ands r0, r1	@ 00128546 0840
.org 0x128548
	lsls r0, r0, #24	@ 00128548 0006
.org 0x12854a
	ldrb r2, [r4, #25]	@ 0012854a 627e
.org 0x12854c
	lsls r1, r2, #24	@ 0012854c 1106
.org 0x12854e
	cmp r0, r1	@ 0012854e 8842
.org 0x128550
	bgt.n 0x12857a	@ 00128550 13dc
.org 0x128552
	ldrb r0, [r4, #6]	@ 00128552 a079
.org 0x128554
	cmp r0, #0	@ 00128554 0028
.org 0x128556
	bne.n 0x128562	@ 00128556 04d1
.org 0x128558
	movs r0, #252	@ 00128558 fc20
.org 0x12855a
	ldrb r1, [r4, #0]	@ 0012855a 2178
.org 0x12855c
	ands r0, r1	@ 0012855c 0840
.org 0x12855e
	strb r0, [r4, #0]	@ 0012855e 2070
.org 0x128560
	b.n 0x1284fa	@ 00128560 cbe7
.org 0x128562
	ldrb r0, [r4, #0]	@ 00128562 2078
.org 0x128564
	subs r0, #1	@ 00128564 0138
.org 0x128566
	strb r0, [r4, #0]	@ 00128566 2070
.org 0x128568
	movs r0, #1	@ 00128568 0120
.org 0x12856a
	ldrb r2, [r4, #29]	@ 0012856a 627f
.org 0x12856c
	orrs r0, r2	@ 0012856c 1043
.org 0x12856e
	strb r0, [r4, #29]	@ 0012856e 6077
.org 0x128570
	cmp r6, #3	@ 00128570 032e
.org 0x128572
	beq.n 0x128532	@ 00128572 ded0
.org 0x128574
	movs r0, #8	@ 00128574 0820
.org 0x128576
	mov r8, r0	@ 00128576 8046
.org 0x128578
	b.n 0x128532	@ 00128578 dbe7
.org 0x12857a
	ldrb r0, [r4, #5]	@ 0012857a 6079
.org 0x12857c
	b.n 0x1285ba	@ 0012857c 1de0
.org 0x12857e
	ldrb r0, [r4, #9]	@ 0012857e 607a
.org 0x128580
	adds r0, #1	@ 00128580 0130
.org 0x128582
	strb r0, [r4, #9]	@ 00128582 6072
.org 0x128584
	movs r1, #255	@ 00128584 ff21
.org 0x128586
	ands r0, r1	@ 00128586 0840
.org 0x128588
	ldrb r2, [r4, #10]	@ 00128588 a27a
.org 0x12858a
	cmp r0, r2	@ 0012858a 9042
.org 0x12858c
	bcc.n 0x1285b8	@ 0012858c 14d3
.org 0x12858e
	ldrb r0, [r4, #0]	@ 0012858e 2078
.org 0x128590
	subs r0, #1	@ 00128590 0138
.org 0x128592
	movs r2, #0	@ 00128592 0022
.org 0x128594
	strb r0, [r4, #0]	@ 00128594 2070
.org 0x128596
	ldrb r1, [r4, #5]	@ 00128596 6179
.org 0x128598
	strb r1, [r4, #11]	@ 00128598 e172
.org 0x12859a
	movs r0, #255	@ 0012859a ff20
.org 0x12859c
	ands r0, r1	@ 0012859c 0840
.org 0x12859e
	cmp r0, #0	@ 0012859e 0028
.org 0x1285a0
	beq.n 0x128552	@ 001285a0 d7d0
.org 0x1285a2
	movs r0, #1	@ 001285a2 0120
.org 0x1285a4
	ldrb r1, [r4, #29]	@ 001285a4 617f
.org 0x1285a6
	orrs r0, r1	@ 001285a6 0843
.org 0x1285a8
	strb r0, [r4, #29]	@ 001285a8 6077
.org 0x1285aa
	ldrb r0, [r4, #10]	@ 001285aa a07a
.org 0x1285ac
	strb r0, [r4, #9]	@ 001285ac 6072
.org 0x1285ae
	cmp r6, #3	@ 001285ae 032e
.org 0x1285b0
	beq.n 0x1285bc	@ 001285b0 04d0
.org 0x1285b2
	ldrb r2, [r4, #5]	@ 001285b2 6279
.org 0x1285b4
	mov r8, r2	@ 001285b4 9046
.org 0x1285b6
	b.n 0x1285bc	@ 001285b6 01e0
.org 0x1285b8
	ldrb r0, [r4, #4]	@ 001285b8 2079
.org 0x1285ba
	strb r0, [r4, #11]	@ 001285ba e072
.org 0x1285bc
	ldrb r0, [r4, #11]	@ 001285bc e07a
.org 0x1285be
	subs r0, #1	@ 001285be 0138
.org 0x1285c0
	strb r0, [r4, #11]	@ 001285c0 e072
.org 0x1285c2
	ldr r0, [sp, #0]	@ 001285c2 0098
.org 0x1285c4
	cmp r0, #0	@ 001285c4 0028
.org 0x1285c6
	bne.n 0x1285ce	@ 001285c6 02d1
.org 0x1285c8
	subs r0, #1	@ 001285c8 0138
.org 0x1285ca
	str r0, [sp, #0]	@ 001285ca 0090
.org 0x1285cc
	b.n 0x1284c8	@ 001285cc 7ce7
.org 0x1285ce
	movs r0, #2	@ 001285ce 0220
.org 0x1285d0
	ldrb r1, [r4, #29]	@ 001285d0 617f
.org 0x1285d2
	ands r0, r1	@ 001285d2 0840
.org 0x1285d4
	cmp r0, #0	@ 001285d4 0028
.org 0x1285d6
	beq.n 0x128646	@ 001285d6 36d0
.org 0x1285d8
	cmp r6, #3	@ 001285d8 032e
.org 0x1285da
	bgt.n 0x12860e	@ 001285da 18dc
.org 0x1285dc
	movs r0, #8	@ 001285dc 0820
.org 0x1285de
	ldrb r2, [r4, #1]	@ 001285de 6278
.org 0x1285e0
	ands r0, r2	@ 001285e0 1040
.org 0x1285e2
	cmp r0, #0	@ 001285e2 0028
.org 0x1285e4
	beq.n 0x12860e	@ 001285e4 13d0
.org 0x1285e6
	ldr r0, [pc, #16]	@ 001285e6 0448
.org 0x1285e8
	ldrb r0, [r0, #0]	@ 001285e8 0078
.org 0x1285ea
	cmp r0, #63	@ 001285ea 3f28
.org 0x1285ec
	bgt.n 0x128600	@ 001285ec 08dc
.org 0x1285ee
	ldr r0, [r4, #32]	@ 001285ee 206a
.org 0x1285f0
	adds r0, #2	@ 001285f0 0230
.org 0x1285f2
	ldr r1, [pc, #8]	@ 001285f2 0249
.org 0x1285f4
	b.n 0x12860a	@ 001285f4 09e0
.org 0x1285f6
	.byte 0x00	@ 001285f6 data
.org 0x1285f7
	.byte 0x00	@ 001285f7 data
.org 0x1285f8
	.byte 0x89,0x00,0x00,0x04	@ 001285f8 data
.org 0x1285fc
	.byte 0xfc,0x07,0x00,0x00	@ 001285fc data
.org 0x128600
	cmp r0, #127	@ 00128600 7f28
.org 0x128602
	bgt.n 0x12860e	@ 00128602 04dc
.org 0x128604
	ldr r0, [r4, #32]	@ 00128604 206a
.org 0x128606
	adds r0, #1	@ 00128606 0130
.org 0x128608
	ldr r1, [pc, #16]	@ 00128608 0449
.org 0x12860a
	ands r0, r1	@ 0012860a 0840
.org 0x12860c
	str r0, [r4, #32]	@ 0012860c 2062
.org 0x12860e
	cmp r6, #4	@ 0012860e 042e
.org 0x128610
	beq.n 0x128620	@ 00128610 06d0
.org 0x128612
	ldr r0, [r4, #32]	@ 00128612 206a
.org 0x128614
	ldr r1, [sp, #16]	@ 00128614 0499
.org 0x128616
	strb r0, [r1, #0]	@ 00128616 0870
.org 0x128618
	b.n 0x12862e	@ 00128618 09e0
.org 0x12861a
	.byte 0x00	@ 0012861a data
.org 0x12861b
	.byte 0x00	@ 0012861b data
.org 0x12861c
	.byte 0xfe,0x07,0x00,0x00	@ 0012861c data
.org 0x128620
	ldr r2, [sp, #16]	@ 00128620 049a
.org 0x128622
	ldrb r0, [r2, #0]	@ 00128622 1078
.org 0x128624
	movs r1, #8	@ 00128624 0821
.org 0x128626
	ands r1, r0	@ 00128626 0140
.org 0x128628
	ldr r0, [r4, #32]	@ 00128628 206a
.org 0x12862a
	orrs r0, r1	@ 0012862a 0843
.org 0x12862c
	strb r0, [r2, #0]	@ 0012862c 1070
.org 0x12862e
	movs r0, #192	@ 0012862e c020
.org 0x128630
	ldrb r1, [r4, #26]	@ 00128630 a17e
.org 0x128632
	ands r0, r1	@ 00128632 0840
.org 0x128634
	adds r1, r4, #0	@ 00128634 211c
.org 0x128636
	adds r1, #33	@ 00128636 2131
.org 0x128638
	ldrb r1, [r1, #0]	@ 00128638 0978
.org 0x12863a
	adds r0, r1, r0	@ 0012863a 0818
.org 0x12863c
	strb r0, [r4, #26]	@ 0012863c a076
.org 0x12863e
	movs r2, #255	@ 0012863e ff22
.org 0x128640
	ands r0, r2	@ 00128640 1040
.org 0x128642
	ldr r1, [sp, #20]	@ 00128642 0599
.org 0x128644
	strb r0, [r1, #0]	@ 00128644 0870
.org 0x128646
	movs r0, #1	@ 00128646 0120
.org 0x128648
	ldrb r2, [r4, #29]	@ 00128648 627f
.org 0x12864a
	ands r0, r2	@ 0012864a 1040
.org 0x12864c
	cmp r0, #0	@ 0012864c 0028
.org 0x12864e
	beq.n 0x1286cc	@ 0012864e 3dd0
.org 0x128650
	ldr r1, [pc, #60]	@ 00128650 0f49
.org 0x128652
	ldrb r0, [r1, #0]	@ 00128652 0878
.org 0x128654
	ldrb r2, [r4, #28]	@ 00128654 227f
.org 0x128656
	bics r0, r2	@ 00128656 9043
.org 0x128658
	ldrb r2, [r4, #27]	@ 00128658 e27e
.org 0x12865a
	orrs r0, r2	@ 0012865a 1043
.org 0x12865c
	strb r0, [r1, #0]	@ 0012865c 0870
.org 0x12865e
	cmp r6, #3	@ 0012865e 032e
.org 0x128660
	bne.n 0x128698	@ 00128660 1ad1
.org 0x128662
	ldr r0, [pc, #48]	@ 00128662 0c48
.org 0x128664
	ldrb r1, [r4, #9]	@ 00128664 617a
.org 0x128666
	adds r0, r1, r0	@ 00128666 0818
.org 0x128668
	ldrb r0, [r0, #0]	@ 00128668 0078
.org 0x12866a
	ldr r2, [sp, #12]	@ 0012866a 039a
.org 0x12866c
	strb r0, [r2, #0]	@ 0012866c 1070
.org 0x12866e
	movs r1, #128	@ 0012866e 8021
.org 0x128670
	adds r0, r1, #0	@ 00128670 081c
.org 0x128672
	ldrb r2, [r4, #26]	@ 00128672 a27e
.org 0x128674
	ands r0, r2	@ 00128674 1040
.org 0x128676
	cmp r0, #0	@ 00128676 0028
.org 0x128678
	beq.n 0x1286cc	@ 00128678 28d0
.org 0x12867a
	ldr r0, [sp, #8]	@ 0012867a 0298
.org 0x12867c
	strb r1, [r0, #0]	@ 0012867c 0170
.org 0x12867e
	ldrb r0, [r4, #26]	@ 0012867e a07e
.org 0x128680
	ldr r1, [sp, #20]	@ 00128680 0599
.org 0x128682
	strb r0, [r1, #0]	@ 00128682 0870
.org 0x128684
	movs r0, #127	@ 00128684 7f20
.org 0x128686
	ldrb r2, [r4, #26]	@ 00128686 a27e
.org 0x128688
	ands r0, r2	@ 00128688 1040
.org 0x12868a
	strb r0, [r4, #26]	@ 0012868a a076
.org 0x12868c
	b.n 0x1286cc	@ 0012868c 1ee0
.org 0x12868e
	.byte 0x00	@ 0012868e data
.org 0x12868f
	.byte 0x00	@ 0012868f data

@ FUN_0802624c  entry 0x0802624c  size 672
.thumb
.org 0x2624c
FUN_0802624c:
	push {r4, r5, r6, r7, lr}	@ 0002624c f0b5
.org 0x2624e
	mov r7, r8	@ 0002624e 4746
.org 0x26250
	push {r7}	@ 00026250 80b4
.org 0x26252
	adds r7, r0, #0	@ 00026252 071c
.org 0x26254
	ldr r3, [r7, #32]	@ 00026254 3b6a
.org 0x26256
	movs r0, #190	@ 00026256 be20
.org 0x26258
	lsls r0, r0, #1	@ 00026258 4000
.org 0x2625a
	adds r6, r7, r0	@ 0002625a 3e18
.org 0x2625c
	ldrb r0, [r6, #0]	@ 0002625c 3078
.org 0x2625e
	cmp r0, #0	@ 0002625e 0028
.org 0x26260
	beq.n 0x26264	@ 00026260 00d0
.org 0x26262
	b.n 0x26378	@ 00026262 89e0
.org 0x26264
	ldr r5, [pc, #64]	@ 00026264 104d
.org 0x26266
	ldrh r0, [r5, #8]	@ 00026266 2889
.org 0x26268
	movs r1, #1	@ 00026268 0121
.org 0x2626a
	mov r8, r1	@ 0002626a 8846
.org 0x2626c
	movs r1, #0	@ 0002626c 0021
.org 0x2626e
	mov ip, r1	@ 0002626e 8c46
.org 0x26270
	mov r3, r8	@ 00026270 4346
.org 0x26272
	orrs r3, r0	@ 00026272 0343
.org 0x26274
	strh r3, [r5, #8]	@ 00026274 2b81
.org 0x26276
	ldr r2, [pc, #52]	@ 00026276 0d4a
.org 0x26278
	ldrb r1, [r2, #4]	@ 00026278 1179
.org 0x2627a
	movs r0, #8	@ 0002627a 0820
.org 0x2627c
	orrs r0, r1	@ 0002627c 0843
.org 0x2627e
	strb r0, [r2, #4]	@ 0002627e 1071
.org 0x26280
	ldr r1, [pc, #44]	@ 00026280 0b49
.org 0x26282
	adds r0, r7, r1	@ 00026282 7818
.org 0x26284
	mov r1, ip	@ 00026284 6146
.org 0x26286
	strb r1, [r0, #0]	@ 00026286 0170
.org 0x26288
	ldrb r4, [r5, #2]	@ 00026288 ac78
.org 0x2628a
	cmp r4, #0	@ 0002628a 002c
.org 0x2628c
	bne.n 0x262b8	@ 0002628c 14d1
.org 0x2628e
	adds r0, r5, #0	@ 0002628e 281c
.org 0x26290
	adds r0, #16	@ 00026290 1030
.org 0x26292
	ldr r1, [pc, #32]	@ 00026292 0849
.org 0x26294
	ldr r1, [r1, #60]	@ 00026294 c96b
.org 0x26296
	ldr r1, [r1, #0]	@ 00026296 0968
.org 0x26298
	bl 0x275f0	@ 00026298 01f0aaf9
.org 0x2629c
	movs r0, #1	@ 0002629c 0120
.org 0x2629e
	bl 0x1f63c	@ 0002629e f9f7cdf9
.org 0x262a2
	mov r0, r8	@ 000262a2 4046
.org 0x262a4
	strb r0, [r6, #0]	@ 000262a4 3070
.org 0x262a6
	b.n 0x2655e	@ 000262a6 5ae1
.org 0x262a8
	.byte 0x10,0xe9,0x02,0x02	@ 000262a8 data
.org 0x262ac
	.byte 0xb0,0xe8,0x02,0x02	@ 000262ac data
.org 0x262b0
	.byte 0x7d,0x01,0x00,0x00	@ 000262b0 data
.org 0x262b4
	.byte 0xf8,0x2c,0x84,0x08	@ 000262b4 data
.org 0x262b8
	cmp r4, #1	@ 000262b8 012c
.org 0x262ba
	bne.n 0x262d0	@ 000262ba 09d1
.org 0x262bc
	adds r0, r5, #0	@ 000262bc 281c
.org 0x262be
	adds r0, #16	@ 000262be 1030
.org 0x262c0
	ldr r1, [pc, #8]	@ 000262c0 0249
.org 0x262c2
	ldr r1, [r1, #60]	@ 000262c2 c96b
.org 0x262c4
	ldr r1, [r1, #4]	@ 000262c4 4968
.org 0x262c6
	bl 0x275f0	@ 000262c6 01f093f9
.org 0x262ca
	b.n 0x2637c	@ 000262ca 57e0
.org 0x262cc
	.byte 0xf8,0x2c,0x84,0x08	@ 000262cc data
.org 0x262d0
	cmp r4, #2	@ 000262d0 022c
.org 0x262d2
	bne.n 0x262e4	@ 000262d2 07d1
.org 0x262d4
	adds r0, r5, #0	@ 000262d4 281c
.org 0x262d6
	adds r0, #16	@ 000262d6 1030
.org 0x262d8
	ldr r1, [pc, #4]	@ 000262d8 0149
.org 0x262da
	ldr r1, [r1, #60]	@ 000262da c96b
.org 0x262dc
	ldr r1, [r1, #8]	@ 000262dc 8968
.org 0x262de
	b.n 0x26350	@ 000262de 37e0
.org 0x262e0
	.byte 0xf8,0x2c,0x84,0x08	@ 000262e0 data
.org 0x262e4
	cmp r4, #3	@ 000262e4 032c
.org 0x262e6
	bne.n 0x26300	@ 000262e6 0bd1
.org 0x262e8
	adds r0, r5, #0	@ 000262e8 281c
.org 0x262ea
	adds r0, #16	@ 000262ea 1030
.org 0x262ec
	ldr r1, [pc, #12]	@ 000262ec 0349
.org 0x262ee
	ldr r1, [r1, #60]	@ 000262ee c96b
.org 0x262f0
	ldr r1, [r1, #12]	@ 000262f0 c968
.org 0x262f2
	bl 0x275f0	@ 000262f2 01f07df9
.org 0x262f6
	movs r0, #4	@ 000262f6 0420
.org 0x262f8
	strb r0, [r6, #0]	@ 000262f8 3070
.org 0x262fa
	b.n 0x2655e	@ 000262fa 30e1
.org 0x262fc
	.byte 0xf8,0x2c,0x84,0x08	@ 000262fc data
.org 0x26300
	cmp r4, #4	@ 00026300 042c
.org 0x26302
	bne.n 0x2631c	@ 00026302 0bd1
.org 0x26304
	adds r0, r5, #0	@ 00026304 281c
.org 0x26306
	adds r0, #16	@ 00026306 1030
.org 0x26308
	ldr r1, [pc, #12]	@ 00026308 0349
.org 0x2630a
	ldr r1, [r1, #60]	@ 0002630a c96b
.org 0x2630c
	ldr r1, [r1, #20]	@ 0002630c 4969
.org 0x2630e
	bl 0x275f0	@ 0002630e 01f06ff9
.org 0x26312
	movs r0, #6	@ 00026312 0620
.org 0x26314
	strb r0, [r6, #0]	@ 00026314 3070
.org 0x26316
	b.n 0x2655e	@ 00026316 22e1
.org 0x26318
	.byte 0xf8,0x2c,0x84,0x08	@ 00026318 data
.org 0x2631c
	cmp r4, #5	@ 0002631c 052c
.org 0x2631e
	bne.n 0x26338	@ 0002631e 0bd1
.org 0x26320
	adds r0, r5, #0	@ 00026320 281c
.org 0x26322
	adds r0, #16	@ 00026322 1030
.org 0x26324
	ldr r1, [pc, #12]	@ 00026324 0349
.org 0x26326
	ldr r1, [r1, #60]	@ 00026326 c96b
.org 0x26328
	ldr r1, [r1, #28]	@ 00026328 c969
.org 0x2632a
	bl 0x275f0	@ 0002632a 01f061f9
.org 0x2632e
	movs r0, #7	@ 0002632e 0720
.org 0x26330
	strb r0, [r6, #0]	@ 00026330 3070
.org 0x26332
	b.n 0x2655e	@ 00026332 14e1
.org 0x26334
	.byte 0xf8,0x2c,0x84,0x08	@ 00026334 data
.org 0x26338
	cmp r4, #6	@ 00026338 062c
.org 0x2633a
	beq.n 0x2633e	@ 0002633a 00d0
.org 0x2633c
	b.n 0x2655e	@ 0002633c 0fe1
.org 0x2633e
	ldr r1, [r7, #24]	@ 0002633e b969
.org 0x26340
	ldr r0, [pc, #20]	@ 00026340 0548
.org 0x26342
	cmp r1, r0	@ 00026342 8142
.org 0x26344
	bne.n 0x26360	@ 00026344 0cd1
.org 0x26346
	adds r0, r5, #0	@ 00026346 281c
.org 0x26348
	adds r0, #16	@ 00026348 1030
.org 0x2634a
	ldr r1, [pc, #16]	@ 0002634a 0449
.org 0x2634c
	ldr r1, [r1, #60]	@ 0002634c c96b
.org 0x2634e
	ldr r1, [r1, #20]	@ 0002634e 4969
.org 0x26350
	bl 0x275f0	@ 00026350 01f04ef9
.org 0x26354
	strb r4, [r6, #0]	@ 00026354 3470
.org 0x26356
	b.n 0x2655e	@ 00026356 02e1
.org 0x26358
	.byte 0x44,0x2d,0x84,0x08	@ 00026358 data
.org 0x2635c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002635c data
.org 0x26360
	movs r0, #4	@ 00026360 0420
.org 0x26362
	orrs r3, r0	@ 00026362 0343
.org 0x26364
	mov r1, ip	@ 00026364 6146
.org 0x26366
	orrs r3, r1	@ 00026366 0b43
.org 0x26368
	ldr r0, [pc, #8]	@ 00026368 0248
.org 0x2636a
	ands r3, r0	@ 0002636a 0340
.org 0x2636c
	strh r3, [r5, #8]	@ 0002636c 2b81
.org 0x2636e
	movs r0, #10	@ 0002636e 0a20
.org 0x26370
	strb r0, [r6, #0]	@ 00026370 3070
.org 0x26372
	b.n 0x2655e	@ 00026372 f4e0
.org 0x26374
	.byte 0xfe,0xff,0x00,0x00	@ 00026374 data
.org 0x26378
	cmp r0, #1	@ 00026378 0128
.org 0x2637a
	bne.n 0x26388	@ 0002637a 05d1
.org 0x2637c
	movs r0, #2	@ 0002637c 0220
.org 0x2637e
	bl 0x1f63c	@ 0002637e f9f75df9
.org 0x26382
	movs r0, #2	@ 00026382 0220
.org 0x26384
	strb r0, [r6, #0]	@ 00026384 3070
.org 0x26386
	b.n 0x2655e	@ 00026386 eae0
.org 0x26388
	cmp r0, #2	@ 00026388 0228
.org 0x2638a
	bne.n 0x263ac	@ 0002638a 0fd1
.org 0x2638c
	ldr r1, [r3, #84]	@ 0002638c 596d
.org 0x2638e
	movs r0, #254	@ 0002638e fe20
.org 0x26390
	lsls r0, r0, #12	@ 00026390 0003
.org 0x26392
	cmp r1, r0	@ 00026392 8142
.org 0x26394
	ble.n 0x263ac	@ 00026394 0add
.org 0x26396
	ldr r2, [pc, #16]	@ 00026396 044a
.org 0x26398
	ldrb r1, [r2, #1]	@ 00026398 5178
.org 0x2639a
	movs r0, #2	@ 0002639a 0220
.org 0x2639c
	orrs r0, r1	@ 0002639c 0843
.org 0x2639e
	strb r0, [r2, #1]	@ 0002639e 5070
.org 0x263a0
	movs r0, #3	@ 000263a0 0320
.org 0x263a2
	strb r0, [r6, #0]	@ 000263a2 3070
.org 0x263a4
	b.n 0x2655e	@ 000263a4 dbe0
.org 0x263a6
	.byte 0x00	@ 000263a6 data
.org 0x263a7
	.byte 0x00	@ 000263a7 data
.org 0x263a8
	.byte 0xe0,0x32,0x00,0x03	@ 000263a8 data
.org 0x263ac
	movs r0, #190	@ 000263ac be20
.org 0x263ae
	lsls r0, r0, #1	@ 000263ae 4000
.org 0x263b0
	adds r4, r7, r0	@ 000263b0 3c18
.org 0x263b2
	ldrb r0, [r4, #0]	@ 000263b2 2078
.org 0x263b4
	cmp r0, #3	@ 000263b4 0328
.org 0x263b6
	bne.n 0x263d0	@ 000263b6 0bd1
.org 0x263b8
	movs r0, #3	@ 000263b8 0320
.org 0x263ba
	bl 0x1f63c	@ 000263ba f9f73ff9
.org 0x263be
	ldr r0, [pc, #12]	@ 000263be 0348
.org 0x263c0
	movs r1, #0	@ 000263c0 0021
.org 0x263c2
	strb r1, [r0, #1]	@ 000263c2 4170
.org 0x263c4
	movs r0, #4	@ 000263c4 0420
.org 0x263c6
	strb r0, [r4, #0]	@ 000263c6 2070
.org 0x263c8
	b.n 0x2655e	@ 000263c8 c9e0
.org 0x263ca
	.byte 0x00	@ 000263ca data
.org 0x263cb
	.byte 0x00	@ 000263cb data
.org 0x263cc
	.byte 0xe0,0x32,0x00,0x03	@ 000263cc data
.org 0x263d0
	cmp r0, #4	@ 000263d0 0428
.org 0x263d2
	bne.n 0x2649c	@ 000263d2 63d1
.org 0x263d4
	ldr r1, [pc, #60]	@ 000263d4 0f49
.org 0x263d6
	adds r6, r7, r1	@ 000263d6 7e18
.org 0x263d8
	ldrb r0, [r6, #0]	@ 000263d8 3078
.org 0x263da
	cmp r0, #0	@ 000263da 0028
.org 0x263dc
	bne.n 0x26424	@ 000263dc 22d1
.org 0x263de
	ldr r1, [r3, #84]	@ 000263de 596d
.org 0x263e0
	ldr r0, [pc, #52]	@ 000263e0 0d48
.org 0x263e2
	cmp r1, r0	@ 000263e2 8142
.org 0x263e4
	ble.n 0x26424	@ 000263e4 1edd
.org 0x263e6
	ldr r2, [pc, #52]	@ 000263e6 0d4a
.org 0x263e8
	ldrb r1, [r2, #1]	@ 000263e8 5178
.org 0x263ea
	movs r0, #2	@ 000263ea 0220
.org 0x263ec
	orrs r0, r1	@ 000263ec 0843
.org 0x263ee
	strb r0, [r2, #1]	@ 000263ee 5070
.org 0x263f0
	ldr r0, [pc, #44]	@ 000263f0 0b48
.org 0x263f2
	movs r1, #180	@ 000263f2 b421
.org 0x263f4
	lsls r1, r1, #1	@ 000263f4 4900
.org 0x263f6
	adds r5, r0, r1	@ 000263f6 4518
.org 0x263f8
	ldr r0, [r5, #0]	@ 000263f8 2868
.org 0x263fa
	movs r4, #1	@ 000263fa 0124
.org 0x263fc
	negs r4, r4	@ 000263fc 6442
.org 0x263fe
	cmp r0, r4	@ 000263fe a042
.org 0x26400
	beq.n 0x2640c	@ 00026400 04d0
.org 0x26402
	lsls r0, r0, #16	@ 00026402 0004
.org 0x26404
	lsrs r0, r0, #16	@ 00026404 000c
.org 0x26406
	bl 0x2a98	@ 00026406 dcf747fb
.org 0x2640a
	str r4, [r5, #0]	@ 0002640a 2c60
.org 0x2640c
	movs r0, #1	@ 0002640c 0120
.org 0x2640e
	strb r0, [r6, #0]	@ 0002640e 3070
.org 0x26410
	b.n 0x2655e	@ 00026410 a5e0
.org 0x26412
	.byte 0x00	@ 00026412 data
.org 0x26413
	.byte 0x00	@ 00026413 data
.org 0x26414
	.byte 0x7d,0x01,0x00,0x00	@ 00026414 data
.org 0x26418
	.byte 0xff,0xff,0x1c,0x00	@ 00026418 data
.org 0x2641c
	.byte 0xe0,0x32,0x00,0x03	@ 0002641c data
.org 0x26420
	.byte 0x10,0xe9,0x02,0x02	@ 00026420 data
.org 0x26424
	ldr r0, [pc, #20]	@ 00026424 0548
.org 0x26426
	adds r2, r7, r0	@ 00026426 3a18
.org 0x26428
	ldrb r0, [r2, #0]	@ 00026428 1078
.org 0x2642a
	cmp r0, #1	@ 0002642a 0128
.org 0x2642c
	bne.n 0x26444	@ 0002642c 0ad1
.org 0x2642e
	ldr r0, [pc, #16]	@ 0002642e 0448
.org 0x26430
	movs r1, #0	@ 00026430 0021
.org 0x26432
	strb r1, [r0, #1]	@ 00026432 4170
.org 0x26434
	movs r0, #2	@ 00026434 0220
.org 0x26436
	strb r0, [r2, #0]	@ 00026436 1070
.org 0x26438
	b.n 0x2655e	@ 00026438 91e0
.org 0x2643a
	.byte 0x00	@ 0002643a data
.org 0x2643b
	.byte 0x00	@ 0002643b data
.org 0x2643c
	.byte 0x7d,0x01,0x00,0x00	@ 0002643c data
.org 0x26440
	.byte 0xe0,0x32,0x00,0x03	@ 00026440 data
.org 0x26444
	cmp r0, #2	@ 00026444 0228
.org 0x26446
	beq.n 0x2644a	@ 00026446 00d0
.org 0x26448
	b.n 0x2655e	@ 00026448 89e0
.org 0x2644a
	ldr r1, [r3, #84]	@ 0002644a 596d
.org 0x2644c
	ldr r0, [pc, #64]	@ 0002644c 1048
.org 0x2644e
	cmp r1, r0	@ 0002644e 8142
.org 0x26450
	bgt.n 0x26454	@ 00026450 00dc
.org 0x26452
	b.n 0x2655e	@ 00026452 84e0
.org 0x26454
	ldr r0, [pc, #60]	@ 00026454 0f48
.org 0x26456
	movs r1, #0	@ 00026456 0021
.org 0x26458
	strb r1, [r0, #1]	@ 00026458 4170
.org 0x2645a
	ldr r0, [pc, #60]	@ 0002645a 0f48
.org 0x2645c
	movs r1, #180	@ 0002645c b421
.org 0x2645e
	lsls r1, r1, #1	@ 0002645e 4900
.org 0x26460
	adds r4, r0, r1	@ 00026460 4418
.org 0x26462
	ldr r0, [r4, #0]	@ 00026462 2068
.org 0x26464
	cmp r0, #155	@ 00026464 9b28
.org 0x26466
	beq.n 0x26484	@ 00026466 0dd0
.org 0x26468
	movs r5, #1	@ 00026468 0125
.org 0x2646a
	negs r5, r5	@ 0002646a 6d42
.org 0x2646c
	cmp r0, r5	@ 0002646c a842
.org 0x2646e
	beq.n 0x2647a	@ 0002646e 04d0
.org 0x26470
	lsls r0, r0, #16	@ 00026470 0004
.org 0x26472
	lsrs r0, r0, #16	@ 00026472 000c
.org 0x26474
	bl 0x2a98	@ 00026474 dcf710fb
.org 0x26478
	str r5, [r4, #0]	@ 00026478 2560
.org 0x2647a
	movs r0, #155	@ 0002647a 9b20
.org 0x2647c
	bl 0x2a88	@ 0002647c dcf704fb
.org 0x26480
	movs r0, #155	@ 00026480 9b20
.org 0x26482
	str r0, [r4, #0]	@ 00026482 2060
.org 0x26484
	movs r0, #190	@ 00026484 be20
.org 0x26486
	lsls r0, r0, #1	@ 00026486 4000
.org 0x26488
	adds r1, r7, r0	@ 00026488 3918
.org 0x2648a
	movs r0, #5	@ 0002648a 0520
.org 0x2648c
	strb r0, [r1, #0]	@ 0002648c 0870
.org 0x2648e
	b.n 0x2655e	@ 0002648e 66e0
.org 0x26490
	.byte 0xff,0x1f,0x1d,0x00	@ 00026490 data
.org 0x26494
	.byte 0xe0,0x32,0x00,0x03	@ 00026494 data
.org 0x26498
	.byte 0x10,0xe9,0x02,0x02	@ 00026498 data
.org 0x2649c
	cmp r0, #5	@ 0002649c 0528
.org 0x2649e
	bne.n 0x264c0	@ 0002649e 0fd1
.org 0x264a0
	ldr r1, [r3, #88]	@ 000264a0 996d
.org 0x264a2
	ldr r0, [pc, #16]	@ 000264a2 0448
.org 0x264a4
	cmp r1, r0	@ 000264a4 8142
.org 0x264a6
	ble.n 0x264c0	@ 000264a6 0bdd
.org 0x264a8
	ldr r0, [pc, #12]	@ 000264a8 0348
.org 0x264aa
	ldr r1, [pc, #16]	@ 000264aa 0449
.org 0x264ac
	ldr r1, [r1, #60]	@ 000264ac c96b
.org 0x264ae
	ldr r1, [r1, #16]	@ 000264ae 0969
.org 0x264b0
	b.n 0x264dc	@ 000264b0 14e0
.org 0x264b2
	.byte 0x00	@ 000264b2 data
.org 0x264b3
	.byte 0x00	@ 000264b3 data
.org 0x264b4
	.byte 0xff,0x3f,0x01,0x00	@ 000264b4 data
.org 0x264b8
	.byte 0x20,0xe9,0x02,0x02	@ 000264b8 data
.org 0x264bc
	.byte 0xf8,0x2c,0x84,0x08	@ 000264bc data
.org 0x264c0
	movs r1, #190	@ 000264c0 be21
.org 0x264c2
	lsls r1, r1, #1	@ 000264c2 4900
.org 0x264c4
	adds r4, r7, r1	@ 000264c4 7c18
.org 0x264c6
	ldrb r0, [r4, #0]	@ 000264c6 2078
.org 0x264c8
	cmp r0, #6	@ 000264c8 0628
.org 0x264ca
	bne.n 0x264f8	@ 000264ca 15d1
.org 0x264cc
	ldr r1, [r3, #88]	@ 000264cc 996d
.org 0x264ce
	ldr r0, [pc, #28]	@ 000264ce 0748
.org 0x264d0
	cmp r1, r0	@ 000264d0 8142
.org 0x264d2
	ble.n 0x264f8	@ 000264d2 11dd
.org 0x264d4
	ldr r0, [pc, #24]	@ 000264d4 0648
.org 0x264d6
	ldr r1, [pc, #28]	@ 000264d6 0749
.org 0x264d8
	ldr r1, [r1, #60]	@ 000264d8 c96b
.org 0x264da
	ldr r1, [r1, #24]	@ 000264da 8969
.org 0x264dc
	bl 0x275f0	@ 000264dc 01f088f8
.org 0x264e0
	movs r0, #5	@ 000264e0 0520
.org 0x264e2
	bl 0x1f63c	@ 000264e2 f9f7abf8
.org 0x264e6
	movs r0, #7	@ 000264e6 0720
.org 0x264e8
	strb r0, [r4, #0]	@ 000264e8 2070
.org 0x264ea
	b.n 0x2655e	@ 000264ea 38e0

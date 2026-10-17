@ FUN_08025224  entry 0x08025224  size 642
.thumb
.org 0x25224
FUN_08025224:
	push {r4, r5, r6, r7, lr}	@ 00025224 f0b5
.org 0x25226
	mov r7, r8	@ 00025226 4746
.org 0x25228
	push {r7}	@ 00025228 80b4
.org 0x2522a
	adds r4, r0, #0	@ 0002522a 041c
.org 0x2522c
	ldr r3, [r4, #32]	@ 0002522c 236a
.org 0x2522e
	movs r0, #190	@ 0002522e be20
.org 0x25230
	lsls r0, r0, #1	@ 00025230 4000
.org 0x25232
	adds r5, r4, r0	@ 00025232 2518
.org 0x25234
	ldrb r0, [r5, #0]	@ 00025234 2878
.org 0x25236
	cmp r0, #0	@ 00025236 0028
.org 0x25238
	beq.n 0x2523c	@ 00025238 00d0
.org 0x2523a
	b.n 0x25340	@ 0002523a 81e0
.org 0x2523c
	ldr r3, [pc, #64]	@ 0002523c 104b
.org 0x2523e
	ldrh r0, [r3, #8]	@ 0002523e 1889
.org 0x25240
	movs r1, #1	@ 00025240 0121
.org 0x25242
	mov r8, r1	@ 00025242 8846
.org 0x25244
	movs r7, #0	@ 00025244 0027
.org 0x25246
	mov ip, r7	@ 00025246 bc46
.org 0x25248
	mov r2, r8	@ 00025248 4246
.org 0x2524a
	orrs r2, r0	@ 0002524a 0243
.org 0x2524c
	strh r2, [r3, #8]	@ 0002524c 1a81
.org 0x2524e
	ldr r6, [pc, #52]	@ 0002524e 0d4e
.org 0x25250
	ldrb r1, [r6, #4]	@ 00025250 3179
.org 0x25252
	movs r0, #8	@ 00025252 0820
.org 0x25254
	orrs r1, r0	@ 00025254 0143
.org 0x25256
	strb r1, [r6, #4]	@ 00025256 3171
.org 0x25258
	ldr r7, [pc, #44]	@ 00025258 0b4f
.org 0x2525a
	adds r0, r4, r7	@ 0002525a e019
.org 0x2525c
	mov r4, ip	@ 0002525c 6446
.org 0x2525e
	strb r4, [r0, #0]	@ 0002525e 0470
.org 0x25260
	ldrb r4, [r3, #2]	@ 00025260 9c78
.org 0x25262
	cmp r4, #0	@ 00025262 002c
.org 0x25264
	bne.n 0x25290	@ 00025264 14d1
.org 0x25266
	adds r0, r3, #0	@ 00025266 181c
.org 0x25268
	adds r0, #16	@ 00025268 1030
.org 0x2526a
	ldr r1, [pc, #32]	@ 0002526a 0849
.org 0x2526c
	ldr r1, [r1, #52]	@ 0002526c 496b
.org 0x2526e
	ldr r1, [r1, #0]	@ 0002526e 0968
.org 0x25270
	bl 0x275f0	@ 00025270 02f0bef9
.org 0x25274
	movs r0, #1	@ 00025274 0120
.org 0x25276
	bl 0x1f63c	@ 00025276 faf7e1f9
.org 0x2527a
	mov r7, r8	@ 0002527a 4746
.org 0x2527c
	strb r7, [r5, #0]	@ 0002527c 2f70
.org 0x2527e
	b.n 0x2550c	@ 0002527e 45e1
.org 0x25280
	.byte 0x10,0xe9,0x02,0x02	@ 00025280 data
.org 0x25284
	.byte 0xb0,0xe8,0x02,0x02	@ 00025284 data
.org 0x25288
	.byte 0x7d,0x01,0x00,0x00	@ 00025288 data
.org 0x2528c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002528c data
.org 0x25290
	cmp r4, #1	@ 00025290 012c
.org 0x25292
	bne.n 0x252b0	@ 00025292 0dd1
.org 0x25294
	adds r0, r3, #0	@ 00025294 181c
.org 0x25296
	adds r0, #16	@ 00025296 1030
.org 0x25298
	ldr r1, [pc, #16]	@ 00025298 0449
.org 0x2529a
	ldr r1, [r1, #52]	@ 0002529a 496b
.org 0x2529c
	ldr r1, [r1, #4]	@ 0002529c 4968
.org 0x2529e
	bl 0x275f0	@ 0002529e 02f0a7f9
.org 0x252a2
	movs r0, #2	@ 000252a2 0220
.org 0x252a4
	bl 0x1f63c	@ 000252a4 faf7caf9
.org 0x252a8
	movs r0, #2	@ 000252a8 0220
.org 0x252aa
	b.n 0x2550a	@ 000252aa 2ee1
.org 0x252ac
	.byte 0xf8,0x2c,0x84,0x08	@ 000252ac data
.org 0x252b0
	cmp r4, #2	@ 000252b0 022c
.org 0x252b2
	bne.n 0x252cc	@ 000252b2 0bd1
.org 0x252b4
	adds r0, r3, #0	@ 000252b4 181c
.org 0x252b6
	adds r0, #16	@ 000252b6 1030
.org 0x252b8
	ldr r1, [pc, #12]	@ 000252b8 0349
.org 0x252ba
	ldr r1, [r1, #52]	@ 000252ba 496b
.org 0x252bc
	ldr r1, [r1, #8]	@ 000252bc 8968
.org 0x252be
	bl 0x275f0	@ 000252be 02f097f9
.org 0x252c2
	strb r4, [r5, #0]	@ 000252c2 2c70
.org 0x252c4
	b.n 0x2550c	@ 000252c4 22e1
.org 0x252c6
	.byte 0x00	@ 000252c6 data
.org 0x252c7
	.byte 0x00	@ 000252c7 data
.org 0x252c8
	.byte 0xf8,0x2c,0x84,0x08	@ 000252c8 data
.org 0x252cc
	cmp r4, #3	@ 000252cc 032c
.org 0x252ce
	bne.n 0x252e8	@ 000252ce 0bd1
.org 0x252d0
	adds r0, r3, #0	@ 000252d0 181c
.org 0x252d2
	adds r0, #16	@ 000252d2 1030
.org 0x252d4
	ldr r1, [pc, #12]	@ 000252d4 0349
.org 0x252d6
	ldr r1, [r1, #52]	@ 000252d6 496b
.org 0x252d8
	ldr r1, [r1, #12]	@ 000252d8 c968
.org 0x252da
	bl 0x275f0	@ 000252da 02f089f9
.org 0x252de
	movs r0, #4	@ 000252de 0420
.org 0x252e0
	b.n 0x2550a	@ 000252e0 13e1
.org 0x252e2
	.byte 0x00	@ 000252e2 data
.org 0x252e3
	.byte 0x00	@ 000252e3 data
.org 0x252e4
	.byte 0xf8,0x2c,0x84,0x08	@ 000252e4 data
.org 0x252e8
	cmp r4, #4	@ 000252e8 042c
.org 0x252ea
	bne.n 0x25308	@ 000252ea 0dd1
.org 0x252ec
	movs r0, #247	@ 000252ec f720
.org 0x252ee
	ands r1, r0	@ 000252ee 0140
.org 0x252f0
	strb r1, [r6, #4]	@ 000252f0 3171
.org 0x252f2
	adds r0, r3, #0	@ 000252f2 181c
.org 0x252f4
	adds r0, #16	@ 000252f4 1030
.org 0x252f6
	ldr r1, [pc, #12]	@ 000252f6 0349
.org 0x252f8
	ldr r1, [r1, #52]	@ 000252f8 496b
.org 0x252fa
	ldr r1, [r1, #20]	@ 000252fa 4969
.org 0x252fc
	bl 0x275f0	@ 000252fc 02f078f9
.org 0x25300
	movs r0, #6	@ 00025300 0620
.org 0x25302
	b.n 0x2550a	@ 00025302 02e1
.org 0x25304
	.byte 0xf8,0x2c,0x84,0x08	@ 00025304 data
.org 0x25308
	cmp r4, #5	@ 00025308 052c
.org 0x2530a
	bne.n 0x25324	@ 0002530a 0bd1
.org 0x2530c
	adds r0, r3, #0	@ 0002530c 181c
.org 0x2530e
	adds r0, #16	@ 0002530e 1030
.org 0x25310
	ldr r1, [pc, #12]	@ 00025310 0349
.org 0x25312
	ldr r1, [r1, #52]	@ 00025312 496b
.org 0x25314
	ldr r1, [r1, #28]	@ 00025314 c969
.org 0x25316
	bl 0x275f0	@ 00025316 02f06bf9
.org 0x2531a
	movs r0, #7	@ 0002531a 0720
.org 0x2531c
	b.n 0x2550a	@ 0002531c f5e0
.org 0x2531e
	.byte 0x00	@ 0002531e data
.org 0x2531f
	.byte 0x00	@ 0002531f data
.org 0x25320
	.byte 0xf8,0x2c,0x84,0x08	@ 00025320 data
.org 0x25324
	cmp r4, #6	@ 00025324 062c
.org 0x25326
	beq.n 0x2532a	@ 00025326 00d0
.org 0x25328
	b.n 0x2550c	@ 00025328 f0e0
.org 0x2532a
	movs r0, #4	@ 0002532a 0420
.org 0x2532c
	orrs r2, r0	@ 0002532c 0243
.org 0x2532e
	mov r0, ip	@ 0002532e 6046
.org 0x25330
	orrs r2, r0	@ 00025330 0243
.org 0x25332
	ldr r0, [pc, #8]	@ 00025332 0248
.org 0x25334
	ands r2, r0	@ 00025334 0240
.org 0x25336
	strh r2, [r3, #8]	@ 00025336 1a81
.org 0x25338
	b.n 0x25508	@ 00025338 e6e0
.org 0x2533a
	.byte 0x00	@ 0002533a data
.org 0x2533b
	.byte 0x00	@ 0002533b data
.org 0x2533c
	.byte 0xfe,0xff,0x00,0x00	@ 0002533c data
.org 0x25340
	cmp r0, #1	@ 00025340 0128
.org 0x25342
	bne.n 0x2534e	@ 00025342 04d1
.org 0x25344
	movs r0, #2	@ 00025344 0220
.org 0x25346
	bl 0x1f63c	@ 00025346 faf779f9
.org 0x2534a
	movs r0, #2	@ 0002534a 0220
.org 0x2534c
	b.n 0x2550a	@ 0002534c dde0
.org 0x2534e
	cmp r0, #2	@ 0002534e 0228
.org 0x25350
	bne.n 0x25360	@ 00025350 06d1
.org 0x25352
	ldr r1, [r3, #84]	@ 00025352 596d
.org 0x25354
	movs r0, #164	@ 00025354 a420
.org 0x25356
	lsls r0, r0, #12	@ 00025356 0003
.org 0x25358
	cmp r1, r0	@ 00025358 8142
.org 0x2535a
	ble.n 0x25360	@ 0002535a 01dd
.org 0x2535c
	movs r0, #3	@ 0002535c 0320
.org 0x2535e
	b.n 0x2550a	@ 0002535e d4e0
.org 0x25360
	movs r1, #190	@ 00025360 be21
.org 0x25362
	lsls r1, r1, #1	@ 00025362 4900
.org 0x25364
	adds r5, r4, r1	@ 00025364 6518
.org 0x25366
	ldrb r0, [r5, #0]	@ 00025366 2878
.org 0x25368
	cmp r0, #3	@ 00025368 0328
.org 0x2536a
	bne.n 0x25376	@ 0002536a 04d1
.org 0x2536c
	movs r0, #3	@ 0002536c 0320
.org 0x2536e
	bl 0x1f63c	@ 0002536e faf765f9
.org 0x25372
	movs r0, #4	@ 00025372 0420
.org 0x25374
	b.n 0x2550a	@ 00025374 c9e0
.org 0x25376
	cmp r0, #4	@ 00025376 0428
.org 0x25378
	bne.n 0x25440	@ 00025378 62d1
.org 0x2537a
	ldr r7, [pc, #60]	@ 0002537a 0f4f
.org 0x2537c
	adds r6, r4, r7	@ 0002537c e619
.org 0x2537e
	ldrb r0, [r6, #0]	@ 0002537e 3078
.org 0x25380
	cmp r0, #0	@ 00025380 0028
.org 0x25382
	bne.n 0x253c8	@ 00025382 21d1
.org 0x25384
	ldr r1, [r3, #84]	@ 00025384 596d
.org 0x25386
	ldr r0, [pc, #52]	@ 00025386 0d48
.org 0x25388
	cmp r1, r0	@ 00025388 8142
.org 0x2538a
	ble.n 0x253c8	@ 0002538a 1ddd
.org 0x2538c
	ldr r2, [pc, #48]	@ 0002538c 0c4a
.org 0x2538e
	ldrb r1, [r2, #1]	@ 0002538e 5178
.org 0x25390
	movs r0, #2	@ 00025390 0220
.org 0x25392
	orrs r0, r1	@ 00025392 0843
.org 0x25394
	strb r0, [r2, #1]	@ 00025394 5070
.org 0x25396
	ldr r0, [pc, #44]	@ 00025396 0b48
.org 0x25398
	movs r1, #180	@ 00025398 b421
.org 0x2539a
	lsls r1, r1, #1	@ 0002539a 4900
.org 0x2539c
	adds r5, r0, r1	@ 0002539c 4518
.org 0x2539e
	ldr r0, [r5, #0]	@ 0002539e 2868
.org 0x253a0
	movs r4, #1	@ 000253a0 0124
.org 0x253a2
	negs r4, r4	@ 000253a2 6442
.org 0x253a4
	cmp r0, r4	@ 000253a4 a042
.org 0x253a6
	beq.n 0x253b2	@ 000253a6 04d0
.org 0x253a8
	lsls r0, r0, #16	@ 000253a8 0004
.org 0x253aa
	lsrs r0, r0, #16	@ 000253aa 000c
.org 0x253ac
	bl 0x2a98	@ 000253ac ddf774fb
.org 0x253b0
	str r4, [r5, #0]	@ 000253b0 2c60
.org 0x253b2
	movs r0, #1	@ 000253b2 0120
.org 0x253b4
	strb r0, [r6, #0]	@ 000253b4 3070
.org 0x253b6
	b.n 0x2550c	@ 000253b6 a9e0
.org 0x253b8
	.byte 0x7d,0x01,0x00,0x00	@ 000253b8 data
.org 0x253bc
	.byte 0xff,0x5f,0x17,0x00	@ 000253bc data
.org 0x253c0
	.byte 0xe0,0x32,0x00,0x03	@ 000253c0 data
.org 0x253c4
	.byte 0x10,0xe9,0x02,0x02	@ 000253c4 data
.org 0x253c8
	ldr r7, [pc, #20]	@ 000253c8 054f
.org 0x253ca
	adds r2, r4, r7	@ 000253ca e219
.org 0x253cc
	ldrb r0, [r2, #0]	@ 000253cc 1078
.org 0x253ce
	cmp r0, #1	@ 000253ce 0128
.org 0x253d0
	bne.n 0x253e8	@ 000253d0 0ad1
.org 0x253d2
	ldr r0, [pc, #16]	@ 000253d2 0448
.org 0x253d4
	movs r1, #0	@ 000253d4 0021
.org 0x253d6
	strb r1, [r0, #1]	@ 000253d6 4170
.org 0x253d8
	movs r0, #2	@ 000253d8 0220
.org 0x253da
	strb r0, [r2, #0]	@ 000253da 1070
.org 0x253dc
	b.n 0x2550c	@ 000253dc 96e0
.org 0x253de
	.byte 0x00	@ 000253de data
.org 0x253df
	.byte 0x00	@ 000253df data
.org 0x253e0
	.byte 0x7d,0x01,0x00,0x00	@ 000253e0 data
.org 0x253e4
	.byte 0xe0,0x32,0x00,0x03	@ 000253e4 data
.org 0x253e8
	cmp r0, #2	@ 000253e8 0228
.org 0x253ea
	beq.n 0x253ee	@ 000253ea 00d0
.org 0x253ec
	b.n 0x2550c	@ 000253ec 8ee0
.org 0x253ee
	ldr r1, [r3, #84]	@ 000253ee 596d
.org 0x253f0
	ldr r0, [pc, #64]	@ 000253f0 1048
.org 0x253f2
	cmp r1, r0	@ 000253f2 8142
.org 0x253f4
	bgt.n 0x253f8	@ 000253f4 00dc
.org 0x253f6
	b.n 0x2550c	@ 000253f6 89e0
.org 0x253f8
	ldr r0, [pc, #60]	@ 000253f8 0f48
.org 0x253fa
	movs r1, #0	@ 000253fa 0021
.org 0x253fc
	strb r1, [r0, #1]	@ 000253fc 4170
.org 0x253fe
	ldr r0, [pc, #60]	@ 000253fe 0f48
.org 0x25400
	movs r1, #180	@ 00025400 b421
.org 0x25402
	lsls r1, r1, #1	@ 00025402 4900
.org 0x25404
	adds r5, r0, r1	@ 00025404 4518
.org 0x25406
	ldr r0, [r5, #0]	@ 00025406 2868
.org 0x25408
	cmp r0, #155	@ 00025408 9b28
.org 0x2540a
	beq.n 0x25428	@ 0002540a 0dd0
.org 0x2540c
	movs r6, #1	@ 0002540c 0126
.org 0x2540e
	negs r6, r6	@ 0002540e 7642
.org 0x25410
	cmp r0, r6	@ 00025410 b042
.org 0x25412
	beq.n 0x2541e	@ 00025412 04d0
.org 0x25414
	lsls r0, r0, #16	@ 00025414 0004
.org 0x25416
	lsrs r0, r0, #16	@ 00025416 000c
.org 0x25418
	bl 0x2a98	@ 00025418 ddf73efb
.org 0x2541c
	str r6, [r5, #0]	@ 0002541c 2e60
.org 0x2541e
	movs r0, #155	@ 0002541e 9b20
.org 0x25420
	bl 0x2a88	@ 00025420 ddf732fb
.org 0x25424
	movs r0, #155	@ 00025424 9b20
.org 0x25426
	str r0, [r5, #0]	@ 00025426 2860
.org 0x25428
	movs r7, #190	@ 00025428 be27
.org 0x2542a
	lsls r7, r7, #1	@ 0002542a 7f00
.org 0x2542c
	adds r1, r4, r7	@ 0002542c e119
.org 0x2542e
	movs r0, #5	@ 0002542e 0520
.org 0x25430
	strb r0, [r1, #0]	@ 00025430 0870
.org 0x25432
	b.n 0x2550c	@ 00025432 6be0
.org 0x25434
	.byte 0xff,0x7f,0x17,0x00	@ 00025434 data
.org 0x25438
	.byte 0xe0,0x32,0x00,0x03	@ 00025438 data
.org 0x2543c
	.byte 0x10,0xe9,0x02,0x02	@ 0002543c data
.org 0x25440
	cmp r0, #5	@ 00025440 0528
.org 0x25442
	bne.n 0x25470	@ 00025442 15d1
.org 0x25444
	ldr r1, [r3, #84]	@ 00025444 596d
.org 0x25446
	ldr r0, [pc, #28]	@ 00025446 0748
.org 0x25448
	cmp r1, r0	@ 00025448 8142
.org 0x2544a
	ble.n 0x25470	@ 0002544a 11dd
.org 0x2544c
	ldr r0, [pc, #24]	@ 0002544c 0648
.org 0x2544e
	ldr r1, [pc, #28]	@ 0002544e 0749
.org 0x25450
	ldr r1, [r1, #52]	@ 00025450 496b
.org 0x25452
	ldr r1, [r1, #16]	@ 00025452 0969
.org 0x25454
	bl 0x275f0	@ 00025454 02f0ccf8
.org 0x25458
	movs r0, #5	@ 00025458 0520
.org 0x2545a
	bl 0x1f63c	@ 0002545a faf7eff8
.org 0x2545e
	movs r0, #7	@ 0002545e 0720
.org 0x25460
	b.n 0x2550a	@ 00025460 53e0
.org 0x25462
	.byte 0x00	@ 00025462 data
.org 0x25463
	.byte 0x00	@ 00025463 data
.org 0x25464
	.byte 0xff,0x3f,0x18,0x00	@ 00025464 data
.org 0x25468
	.byte 0x20,0xe9,0x02,0x02	@ 00025468 data
.org 0x2546c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002546c data
.org 0x25470
	movs r0, #190	@ 00025470 be20
.org 0x25472
	lsls r0, r0, #1	@ 00025472 4000
.org 0x25474
	adds r5, r4, r0	@ 00025474 2518
.org 0x25476
	ldrb r0, [r5, #0]	@ 00025476 2878
.org 0x25478
	cmp r0, #6	@ 00025478 0628
.org 0x2547a
	bne.n 0x254a8	@ 0002547a 15d1
.org 0x2547c
	ldr r1, [r3, #84]	@ 0002547c 596d
.org 0x2547e
	ldr r0, [pc, #28]	@ 0002547e 0748
.org 0x25480
	cmp r1, r0	@ 00025480 8142
.org 0x25482
	ble.n 0x254a8	@ 00025482 11dd
.org 0x25484
	ldr r0, [pc, #24]	@ 00025484 0648
.org 0x25486
	ldr r1, [pc, #28]	@ 00025486 0749
.org 0x25488
	ldr r1, [r1, #52]	@ 00025488 496b
.org 0x2548a
	ldr r1, [r1, #24]	@ 0002548a 8969
.org 0x2548c
	bl 0x275f0	@ 0002548c 02f0b0f8
.org 0x25490
	movs r0, #5	@ 00025490 0520
.org 0x25492
	bl 0x1f63c	@ 00025492 faf7d3f8
.org 0x25496
	movs r0, #7	@ 00025496 0720
.org 0x25498
	b.n 0x2550a	@ 00025498 37e0
.org 0x2549a
	.byte 0x00	@ 0002549a data
.org 0x2549b
	.byte 0x00	@ 0002549b data
.org 0x2549c
	.byte 0xff,0x5f,0x18,0x00	@ 0002549c data
.org 0x254a0
	.byte 0x20,0xe9,0x02,0x02	@ 000254a0 data
.org 0x254a4
	.byte 0xf8,0x2c,0x84,0x08	@ 000254a4 data

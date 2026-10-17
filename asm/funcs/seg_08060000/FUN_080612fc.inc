@ FUN_080612fc  entry 0x080612fc  size 872
.thumb
.org 0x612fc
FUN_080612fc:
	push {r4, r5, r6, r7, lr}	@ 000612fc f0b5
.org 0x612fe
	adds r6, r0, #0	@ 000612fe 061c
.org 0x61300
	ldrb r0, [r6, #14]	@ 00061300 b07b
.org 0x61302
	cmp r0, #0	@ 00061302 0028
.org 0x61304
	bne.n 0x613c8	@ 00061304 60d1
.org 0x61306
	adds r0, r6, #0	@ 00061306 301c
.org 0x61308
	adds r0, #84	@ 00061308 5430
.org 0x6130a
	movs r1, #0	@ 0006130a 0021
.org 0x6130c
	movs r2, #193	@ 0006130c c122
.org 0x6130e
	bl 0xdad0c	@ 0006130e 79f0fdfc
.org 0x61312
	adds r1, r0, #0	@ 00061312 011c
.org 0x61314
	adds r0, r6, #0	@ 00061314 301c
.org 0x61316
	adds r0, #180	@ 00061316 b430
.org 0x61318
	str r1, [r0, #12]	@ 00061318 c160
.org 0x6131a
	adds r7, r0, #0	@ 0006131a 071c
.org 0x6131c
	cmp r1, #0	@ 0006131c 0029
.org 0x6131e
	bne.n 0x61322	@ 0006131e 00d1
.org 0x61320
	b.n 0x6168e	@ 00061320 b5e1
.org 0x61322
	ldr r0, [pc, #20]	@ 00061322 0548
.org 0x61324
	ldrh r0, [r0, #0]	@ 00061324 0088
.org 0x61326
	cmp r0, #11	@ 00061326 0b28
.org 0x61328
	bne.n 0x6133c	@ 00061328 08d1
.org 0x6132a
	adds r1, #120	@ 0006132a 7831
.org 0x6132c
	movs r0, #57	@ 0006132c 3920
.org 0x6132e
	strb r0, [r1, #0]	@ 0006132e 0870
.org 0x61330
	ldr r0, [r7, #12]	@ 00061330 f868
.org 0x61332
	adds r0, #121	@ 00061332 7930
.org 0x61334
	movs r1, #6	@ 00061334 0621
.org 0x61336
	b.n 0x61348	@ 00061336 07e0
.org 0x61338
	.byte 0x10,0xe9,0x02,0x02	@ 00061338 data
.org 0x6133c
	adds r1, #120	@ 0006133c 7831
.org 0x6133e
	movs r0, #53	@ 0006133e 3520
.org 0x61340
	strb r0, [r1, #0]	@ 00061340 0870
.org 0x61342
	ldr r0, [r7, #12]	@ 00061342 f868
.org 0x61344
	adds r0, #121	@ 00061344 7930
.org 0x61346
	movs r1, #10	@ 00061346 0a21
.org 0x61348
	strb r1, [r0, #0]	@ 00061348 0170
.org 0x6134a
	ldr r0, [r7, #12]	@ 0006134a f868
.org 0x6134c
	cmp r0, #0	@ 0006134c 0028
.org 0x6134e
	bne.n 0x61352	@ 0006134e 00d1
.org 0x61350
	b.n 0x6168e	@ 00061350 9de1
.org 0x61352
	ldr r1, [pc, #36]	@ 00061352 0949
.org 0x61354
	adds r0, r6, #0	@ 00061354 301c
.org 0x61356
	bl 0x1cf00	@ 00061356 bbf7d3fd
.org 0x6135a
	adds r0, r6, #0	@ 0006135a 301c
.org 0x6135c
	adds r0, #164	@ 0006135c a430
.org 0x6135e
	ldrh r0, [r0, #0]	@ 0006135e 0088
.org 0x61360
	subs r0, #3	@ 00061360 0338
.org 0x61362
	movs r1, #0	@ 00061362 0021
.org 0x61364
	strh r0, [r7, #20]	@ 00061364 b882
.org 0x61366
	str r1, [r6, #92]	@ 00061366 f165
.org 0x61368
	ldrb r1, [r6, #10]	@ 00061368 b17a
.org 0x6136a
	movs r0, #16	@ 0006136a 1020
.org 0x6136c
	ands r0, r1	@ 0006136c 0840
.org 0x6136e
	cmp r0, #0	@ 0006136e 0028
.org 0x61370
	beq.n 0x6137c	@ 00061370 04d0
.org 0x61372
	movs r0, #40	@ 00061372 2820
.org 0x61374
	b.n 0x61380	@ 00061374 04e0
.org 0x61376
	.byte 0x00	@ 00061376 data
.org 0x61377
	.byte 0x00	@ 00061377 data
.org 0x61378
	.byte 0x1a,0xa5,0x00,0x00	@ 00061378 data
.org 0x6137c
	movs r0, #40	@ 0006137c 2820
.org 0x6137e
	negs r0, r0	@ 0006137e 4042
.org 0x61380
	str r0, [r6, #100]	@ 00061380 7066
.org 0x61382
	adds r0, r6, #0	@ 00061382 301c
.org 0x61384
	movs r1, #0	@ 00061384 0021
.org 0x61386
	bl 0xc63e8	@ 00061386 65f02ff8
.org 0x6138a
	movs r0, #0	@ 0006138a 0020
.org 0x6138c
	strb r0, [r6, #19]	@ 0006138c f074
.org 0x6138e
	str r0, [r6, #104]	@ 0006138e b066
.org 0x61390
	ldr r0, [pc, #12]	@ 00061390 0348
.org 0x61392
	ldrh r0, [r0, #0]	@ 00061392 0088
.org 0x61394
	cmp r0, #11	@ 00061394 0b28
.org 0x61396
	bne.n 0x613a8	@ 00061396 07d1
.org 0x61398
	ldr r0, [pc, #8]	@ 00061398 0248
.org 0x6139a
	bl 0x2b10	@ 0006139a a1f7b9fb
.org 0x6139e
	b.n 0x613b0	@ 0006139e 07e0
.org 0x613a0
	.byte 0x10,0xe9,0x02,0x02	@ 000613a0 data
.org 0x613a4
	.byte 0x1d,0x01,0x00,0x00	@ 000613a4 data
.org 0x613a8
	movs r0, #143	@ 000613a8 8f20
.org 0x613aa
	lsls r0, r0, #1	@ 000613aa 4000
.org 0x613ac
	bl 0x2b10	@ 000613ac a1f7b0fb
.org 0x613b0
	movs r0, #93	@ 000613b0 5d20
.org 0x613b2
	bl 0x2b10	@ 000613b2 a1f7adfb
.org 0x613b6
	adds r1, r6, #0	@ 000613b6 311c
.org 0x613b8
	adds r1, #180	@ 000613b8 b431
.org 0x613ba
	movs r2, #0	@ 000613ba 0022
.org 0x613bc
	movs r0, #93	@ 000613bc 5d20
.org 0x613be
	strh r0, [r1, #22]	@ 000613be c882
.org 0x613c0
	strb r2, [r6, #15]	@ 000613c0 f273
.org 0x613c2
	ldrb r0, [r6, #14]	@ 000613c2 b07b
.org 0x613c4
	adds r0, #1	@ 000613c4 0130
.org 0x613c6
	strb r0, [r6, #14]	@ 000613c6 b073
.org 0x613c8
	adds r0, r6, #0	@ 000613c8 301c
.org 0x613ca
	bl 0x1cff0	@ 000613ca bbf711fe
.org 0x613ce
	adds r1, r6, #0	@ 000613ce 311c
.org 0x613d0
	adds r1, #84	@ 000613d0 5431
.org 0x613d2
	movs r0, #8	@ 000613d2 0820
.org 0x613d4
	bl 0x1fe64	@ 000613d4 bef746fd
.org 0x613d8
	adds r1, r6, #0	@ 000613d8 311c
.org 0x613da
	adds r1, #180	@ 000613da b431
.org 0x613dc
	adds r0, r6, #0	@ 000613dc 301c
.org 0x613de
	adds r0, #164	@ 000613de a430
.org 0x613e0
	movs r3, #20	@ 000613e0 1423
.org 0x613e2
	ldrsh r2, [r1, r3]	@ 000613e2 ca5e
.org 0x613e4
	movs r3, #0	@ 000613e4 0023
.org 0x613e6
	ldrsh r0, [r0, r3]	@ 000613e6 c05e
.org 0x613e8
	adds r7, r1, #0	@ 000613e8 0f1c
.org 0x613ea
	cmp r2, r0	@ 000613ea 8242
.org 0x613ec
	ble.n 0x613f4	@ 000613ec 02dd
.org 0x613ee
	movs r1, #0	@ 000613ee 0021
.org 0x613f0
	movs r0, #36	@ 000613f0 2420
.org 0x613f2
	b.n 0x6168a	@ 000613f2 4ae1
.org 0x613f4
	ldr r0, [r6, #84]	@ 000613f4 706d
.org 0x613f6
	ldr r1, [r6, #92]	@ 000613f6 f16d
.org 0x613f8
	adds r0, r0, r1	@ 000613f8 4018
.org 0x613fa
	str r0, [r6, #84]	@ 000613fa 7065
.org 0x613fc
	ldr r0, [r6, #88]	@ 000613fc b06d
.org 0x613fe
	ldr r2, [r6, #96]	@ 000613fe 326e
.org 0x61400
	adds r0, r0, r2	@ 00061400 8018
.org 0x61402
	str r0, [r6, #88]	@ 00061402 b065
.org 0x61404
	ldr r0, [r6, #100]	@ 00061404 706e
.org 0x61406
	adds r1, r1, r0	@ 00061406 0918
.org 0x61408
	str r1, [r6, #92]	@ 00061408 f165
.org 0x6140a
	cmp r2, #0	@ 0006140a 002a
.org 0x6140c
	ble.n 0x61414	@ 0006140c 02dd
.org 0x6140e
	adds r0, r2, #0	@ 0006140e 101c
.org 0x61410
	subs r0, #16	@ 00061410 1038
.org 0x61412
	b.n 0x61418	@ 00061412 01e0
.org 0x61414
	adds r0, r2, #0	@ 00061414 101c
.org 0x61416
	subs r0, #96	@ 00061416 6038
.org 0x61418
	str r0, [r6, #96]	@ 00061418 3066
.org 0x6141a
	ldr r0, [r6, #96]	@ 0006141a 306e
.org 0x6141c
	ldr r1, [pc, #36]	@ 0006141c 0949
.org 0x6141e
	cmp r0, r1	@ 0006141e 8842
.org 0x61420
	bge.n 0x61424	@ 00061420 00da
.org 0x61422
	str r1, [r6, #96]	@ 00061422 3166
.org 0x61424
	ldrb r2, [r6, #15]	@ 00061424 f27b
.org 0x61426
	adds r0, r2, #0	@ 00061426 101c
.org 0x61428
	cmp r0, #0	@ 00061428 0028
.org 0x6142a
	bne.n 0x61448	@ 0006142a 0dd1
.org 0x6142c
	ldr r0, [r6, #104]	@ 0006142c b06e
.org 0x6142e
	adds r0, #128	@ 0006142e 8030
.org 0x61430
	str r0, [r6, #104]	@ 00061430 b066
.org 0x61432
	movs r1, #160	@ 00061432 a021
.org 0x61434
	lsls r1, r1, #4	@ 00061434 0901
.org 0x61436
	cmp r0, r1	@ 00061436 8842
.org 0x61438
	ble.n 0x61488	@ 00061438 26dd
.org 0x6143a
	str r1, [r6, #104]	@ 0006143a b166
.org 0x6143c
	movs r0, #20	@ 0006143c 1420
.org 0x6143e
	strb r0, [r6, #18]	@ 0006143e b074
.org 0x61440
	adds r0, r2, #1	@ 00061440 501c
.org 0x61442
	b.n 0x61486	@ 00061442 20e0
.org 0x61444
	.byte 0x00,0xfc,0xff,0xff	@ 00061444 data
.org 0x61448
	cmp r0, #1	@ 00061448 0128
.org 0x6144a
	bne.n 0x6145e	@ 0006144a 08d1
.org 0x6144c
	ldrb r0, [r6, #18]	@ 0006144c b07c
.org 0x6144e
	subs r0, #1	@ 0006144e 0138
.org 0x61450
	strb r0, [r6, #18]	@ 00061450 b074
.org 0x61452
	lsls r0, r0, #24	@ 00061452 0006
.org 0x61454
	lsrs r0, r0, #24	@ 00061454 000e
.org 0x61456
	cmp r0, #255	@ 00061456 ff28
.org 0x61458
	bne.n 0x61488	@ 00061458 16d1
.org 0x6145a
	adds r0, r2, #1	@ 0006145a 501c
.org 0x6145c
	b.n 0x61486	@ 0006145c 13e0
.org 0x6145e
	cmp r0, #2	@ 0006145e 0228
.org 0x61460
	bne.n 0x61488	@ 00061460 12d1
.org 0x61462
	ldr r0, [r6, #104]	@ 00061462 b06e
.org 0x61464
	ldr r1, [pc, #76]	@ 00061464 1349
.org 0x61466
	adds r0, r0, r1	@ 00061466 4018
.org 0x61468
	str r0, [r6, #104]	@ 00061468 b066
.org 0x6146a
	cmp r0, #0	@ 0006146a 0028
.org 0x6146c
	bge.n 0x61488	@ 0006146c 0cda
.org 0x6146e
	ldr r0, [r7, #12]	@ 0006146e f868
.org 0x61470
	cmp r0, #0	@ 00061470 0028
.org 0x61472
	beq.n 0x6147e	@ 00061472 04d0
.org 0x61474
	adds r0, #119	@ 00061474 7730
.org 0x61476
	movs r2, #0	@ 00061476 0022
.org 0x61478
	movs r1, #1	@ 00061478 0121
.org 0x6147a
	strb r1, [r0, #0]	@ 0006147a 0170
.org 0x6147c
	str r2, [r7, #12]	@ 0006147c fa60
.org 0x6147e
	movs r0, #0	@ 0006147e 0020
.org 0x61480
	strh r0, [r7, #22]	@ 00061480 f882
.org 0x61482
	ldrb r0, [r6, #15]	@ 00061482 f07b
.org 0x61484
	adds r0, #1	@ 00061484 0130
.org 0x61486
	strb r0, [r6, #15]	@ 00061486 f073
.org 0x61488
	ldr r1, [r7, #12]	@ 00061488 f968
.org 0x6148a
	cmp r1, #0	@ 0006148a 0029
.org 0x6148c
	bne.n 0x61490	@ 0006148c 00d1
.org 0x6148e
	b.n 0x61618	@ 0006148e c3e0
.org 0x61490
	adds r5, r1, #0	@ 00061490 0d1c
.org 0x61492
	ldrb r0, [r6, #19]	@ 00061492 f07c
.org 0x61494
	cmp r0, #0	@ 00061494 0028
.org 0x61496
	beq.n 0x614b8	@ 00061496 0fd0
.org 0x61498
	cmp r0, #1	@ 00061498 0128
.org 0x6149a
	beq.n 0x614c2	@ 0006149a 12d0
.org 0x6149c
	ldr r2, [r6, #104]	@ 0006149c b26e
.org 0x6149e
	adds r1, #116	@ 0006149e 7431
.org 0x614a0
	movs r0, #0	@ 000614a0 0020
.org 0x614a2
	strb r0, [r1, #0]	@ 000614a2 0870
.org 0x614a4
	adds r1, r5, #0	@ 000614a4 291c
.org 0x614a6
	adds r1, #117	@ 000614a6 7531
.org 0x614a8
	movs r0, #25	@ 000614a8 1920
.org 0x614aa
	strb r0, [r1, #0]	@ 000614aa 0870
.org 0x614ac
	adds r1, #1	@ 000614ac 0131
.org 0x614ae
	movs r0, #31	@ 000614ae 1f20
.org 0x614b0
	b.n 0x614dc	@ 000614b0 14e0
.org 0x614b2
	.byte 0x00	@ 000614b2 data
.org 0x614b3
	.byte 0x00	@ 000614b3 data
.org 0x614b4
	.byte 0x00,0xfd,0xff,0xff	@ 000614b4 data
.org 0x614b8
	ldr r0, [r6, #104]	@ 000614b8 b06e
.org 0x614ba
	lsrs r1, r0, #31	@ 000614ba c10f
.org 0x614bc
	adds r0, r0, r1	@ 000614bc 4018
.org 0x614be
	asrs r2, r0, #1	@ 000614be 4210
.org 0x614c0
	b.n 0x614ce	@ 000614c0 05e0
.org 0x614c2
	ldr r0, [r6, #104]	@ 000614c2 b06e
.org 0x614c4
	lsls r0, r0, #3	@ 000614c4 c000
.org 0x614c6
	movs r1, #10	@ 000614c6 0a21
.org 0x614c8
	bl 0x128fb8	@ 000614c8 c7f076fd
.org 0x614cc
	adds r2, r0, #0	@ 000614cc 021c
.org 0x614ce
	adds r1, r5, #0	@ 000614ce 291c
.org 0x614d0
	adds r1, #116	@ 000614d0 7431
.org 0x614d2
	movs r0, #31	@ 000614d2 1f20
.org 0x614d4
	strb r0, [r1, #0]	@ 000614d4 0870
.org 0x614d6
	adds r1, #1	@ 000614d6 0131
.org 0x614d8
	strb r0, [r1, #0]	@ 000614d8 0870
.org 0x614da
	adds r1, #1	@ 000614da 0131
.org 0x614dc
	strb r0, [r1, #0]	@ 000614dc 0870
.org 0x614de
	ldr r0, [r7, #4]	@ 000614de 7868
.org 0x614e0
	movs r1, #128	@ 000614e0 8021
.org 0x614e2
	lsls r1, r1, #3	@ 000614e2 c900
.org 0x614e4
	adds r0, r0, r1	@ 000614e4 4018
.org 0x614e6
	str r0, [r5, #88]	@ 000614e6 a865
.org 0x614e8
	ldr r0, [r7, #4]	@ 000614e8 7868
.org 0x614ea
	adds r0, r0, r1	@ 000614ea 4018
.org 0x614ec
	str r0, [r5, #104]	@ 000614ec a866
.org 0x614ee
	ldrb r1, [r6, #10]	@ 000614ee b17a
.org 0x614f0
	movs r0, #16	@ 000614f0 1020
.org 0x614f2
	ands r0, r1	@ 000614f2 0840
.org 0x614f4
	cmp r0, #0	@ 000614f4 0028
.org 0x614f6
	beq.n 0x61552	@ 000614f6 2cd0
.org 0x614f8
	ldr r0, [r6, #84]	@ 000614f8 706d
.org 0x614fa
	movs r3, #144	@ 000614fa 9023
.org 0x614fc
	lsls r3, r3, #6	@ 000614fc 9b01
.org 0x614fe
	adds r0, r0, r3	@ 000614fe c018
.org 0x61500
	str r0, [r5, #92]	@ 00061500 e865
.org 0x61502
	ldr r0, [r6, #84]	@ 00061502 706d
.org 0x61504
	movs r1, #156	@ 00061504 9c21
.org 0x61506
	lsls r1, r1, #6	@ 00061506 8901
.org 0x61508
	adds r0, r0, r1	@ 00061508 4018
.org 0x6150a
	str r0, [r5, #124]	@ 0006150a e867
.org 0x6150c
	ldr r0, [r6, #88]	@ 0006150c b06d
.org 0x6150e
	movs r3, #192	@ 0006150e c023
.org 0x61510
	lsls r3, r3, #4	@ 00061510 1b01
.org 0x61512
	adds r0, r0, r3	@ 00061512 c018
.org 0x61514
	str r0, [r5, #96]	@ 00061514 2866
.org 0x61516
	adds r1, r5, #0	@ 00061516 291c
.org 0x61518
	adds r1, #128	@ 00061518 8031
.org 0x6151a
	ldr r0, [r6, #88]	@ 0006151a b06d
.org 0x6151c
	movs r3, #128	@ 0006151c 8023
.org 0x6151e
	lsls r3, r3, #4	@ 0006151e 1b01
.org 0x61520
	adds r0, r0, r3	@ 00061520 c018
.org 0x61522
	str r0, [r1, #0]	@ 00061522 0860
.org 0x61524
	ldr r0, [r5, #92]	@ 00061524 e86d
.org 0x61526
	subs r0, r0, r2	@ 00061526 801a
.org 0x61528
	str r0, [r5, #92]	@ 00061528 e865
.org 0x6152a
	ldr r0, [r5, #124]	@ 0006152a e86f
.org 0x6152c
	adds r0, r0, r2	@ 0006152c 8018
.org 0x6152e
	str r0, [r5, #124]	@ 0006152e e867
.org 0x61530
	ldr r0, [r5, #96]	@ 00061530 286e
.org 0x61532
	adds r0, r0, r2	@ 00061532 8018
.org 0x61534
	str r0, [r5, #96]	@ 00061534 2866
.org 0x61536
	ldr r0, [r1, #0]	@ 00061536 0868
.org 0x61538
	subs r0, r0, r2	@ 00061538 801a
.org 0x6153a
	str r0, [r1, #0]	@ 0006153a 0860
.org 0x6153c
	ldr r1, [r5, #88]	@ 0006153c a96d
.org 0x6153e
	subs r1, r1, r0	@ 0006153e 091a
.org 0x61540
	ldr r0, [r5, #124]	@ 00061540 e86f
.org 0x61542
	adds r0, r0, r1	@ 00061542 4018
.org 0x61544
	str r0, [r5, #84]	@ 00061544 6865
.org 0x61546
	ldr r1, [r5, #104]	@ 00061546 a96e
.org 0x61548
	ldr r0, [r5, #96]	@ 00061548 286e
.org 0x6154a
	subs r1, r1, r0	@ 0006154a 091a
.org 0x6154c
	ldr r0, [r5, #92]	@ 0006154c e86d
.org 0x6154e
	adds r0, r0, r1	@ 0006154e 4018
.org 0x61550
	b.n 0x615a6	@ 00061550 29e0
.org 0x61552
	ldr r0, [r6, #84]	@ 00061552 706d
.org 0x61554
	ldr r1, [pc, #144]	@ 00061554 2449
.org 0x61556
	adds r0, r0, r1	@ 00061556 4018
.org 0x61558
	str r0, [r5, #92]	@ 00061558 e865
.org 0x6155a
	ldr r0, [r6, #84]	@ 0006155a 706d
.org 0x6155c
	ldr r3, [pc, #140]	@ 0006155c 234b
.org 0x6155e
	adds r0, r0, r3	@ 0006155e c018
.org 0x61560
	str r0, [r5, #124]	@ 00061560 e867
.org 0x61562
	ldr r0, [r6, #88]	@ 00061562 b06d
.org 0x61564
	movs r1, #128	@ 00061564 8021
.org 0x61566
	lsls r1, r1, #4	@ 00061566 0901
.org 0x61568
	adds r0, r0, r1	@ 00061568 4018
.org 0x6156a
	str r0, [r5, #96]	@ 0006156a 2866
.org 0x6156c
	adds r1, r5, #0	@ 0006156c 291c
.org 0x6156e
	adds r1, #128	@ 0006156e 8031
.org 0x61570
	ldr r0, [r6, #88]	@ 00061570 b06d
.org 0x61572
	movs r3, #192	@ 00061572 c023
.org 0x61574
	lsls r3, r3, #4	@ 00061574 1b01
.org 0x61576
	adds r0, r0, r3	@ 00061576 c018
.org 0x61578
	str r0, [r1, #0]	@ 00061578 0860
.org 0x6157a
	ldr r0, [r5, #92]	@ 0006157a e86d
.org 0x6157c
	subs r0, r0, r2	@ 0006157c 801a
.org 0x6157e
	str r0, [r5, #92]	@ 0006157e e865
.org 0x61580
	ldr r0, [r5, #124]	@ 00061580 e86f
.org 0x61582
	adds r0, r0, r2	@ 00061582 8018
.org 0x61584
	str r0, [r5, #124]	@ 00061584 e867
.org 0x61586
	ldr r0, [r5, #96]	@ 00061586 286e
.org 0x61588
	subs r0, r0, r2	@ 00061588 801a
.org 0x6158a
	str r0, [r5, #96]	@ 0006158a 2866
.org 0x6158c
	ldr r0, [r1, #0]	@ 0006158c 0868
.org 0x6158e
	adds r0, r0, r2	@ 0006158e 8018
.org 0x61590
	str r0, [r1, #0]	@ 00061590 0860
.org 0x61592
	ldr r1, [r5, #88]	@ 00061592 a96d
.org 0x61594
	subs r1, r1, r0	@ 00061594 091a
.org 0x61596
	ldr r0, [r5, #124]	@ 00061596 e86f
.org 0x61598
	subs r0, r0, r1	@ 00061598 401a
.org 0x6159a
	str r0, [r5, #84]	@ 0006159a 6865
.org 0x6159c
	ldr r1, [r5, #104]	@ 0006159c a96e
.org 0x6159e
	ldr r0, [r5, #96]	@ 0006159e 286e
.org 0x615a0
	subs r1, r1, r0	@ 000615a0 091a
.org 0x615a2
	ldr r0, [r5, #92]	@ 000615a2 e86d
.org 0x615a4
	subs r0, r0, r1	@ 000615a4 401a
.org 0x615a6
	str r0, [r5, #100]	@ 000615a6 6866
.org 0x615a8
	ldrb r0, [r6, #19]	@ 000615a8 f07c
.org 0x615aa
	adds r0, #1	@ 000615aa 0130
.org 0x615ac
	movs r1, #3	@ 000615ac 0321
.org 0x615ae
	bl 0x129050	@ 000615ae c7f04ffd
.org 0x615b2
	strb r0, [r6, #19]	@ 000615b2 f074
.org 0x615b4
	lsls r0, r0, #24	@ 000615b4 0006
.org 0x615b6
	cmp r0, #0	@ 000615b6 0028
.org 0x615b8
	bne.n 0x61618	@ 000615b8 2ed1
.org 0x615ba
	ldrb r2, [r6, #10]	@ 000615ba b27a
.org 0x615bc
	movs r0, #16	@ 000615bc 1020
.org 0x615be
	ands r0, r2	@ 000615be 1040
.org 0x615c0
	cmp r0, #0	@ 000615c0 0028
.org 0x615c2
	beq.n 0x615f4	@ 000615c2 17d0
.org 0x615c4
	ldr r0, [r5, #84]	@ 000615c4 686d
.org 0x615c6
	ldr r1, [r5, #88]	@ 000615c6 a96d
.org 0x615c8
	lsrs r2, r2, #4	@ 000615c8 1209
.org 0x615ca
	movs r4, #1	@ 000615ca 0124
.org 0x615cc
	ands r2, r4	@ 000615cc 2240
.org 0x615ce
	bl 0xc6480	@ 000615ce 64f057ff
.org 0x615d2
	ldr r0, [r5, #84]	@ 000615d2 686d
.org 0x615d4
	ldr r1, [pc, #24]	@ 000615d4 0649
.org 0x615d6
	adds r0, r0, r1	@ 000615d6 4018
.org 0x615d8
	ldr r1, [r5, #88]	@ 000615d8 a96d
.org 0x615da
	ldrb r2, [r6, #10]	@ 000615da b27a
.org 0x615dc
	lsrs r2, r2, #4	@ 000615dc 1209
.org 0x615de
	ands r2, r4	@ 000615de 2240
.org 0x615e0
	bl 0xc6480	@ 000615e0 64f04eff
.org 0x615e4
	b.n 0x61618	@ 000615e4 18e0
.org 0x615e6
	.byte 0x00	@ 000615e6 data
.org 0x615e7
	.byte 0x00	@ 000615e7 data
.org 0x615e8
	.byte 0x00,0xd9,0xff,0xff	@ 000615e8 data
.org 0x615ec
	.byte 0x00,0xdc,0xff,0xff	@ 000615ec data
.org 0x615f0
	.byte 0x00,0xf0,0xff,0xff	@ 000615f0 data
.org 0x615f4
	ldr r0, [r5, #100]	@ 000615f4 686e
.org 0x615f6
	ldr r1, [r5, #104]	@ 000615f6 a96e
.org 0x615f8
	lsls r2, r2, #24	@ 000615f8 1206
.org 0x615fa
	lsrs r2, r2, #28	@ 000615fa 120f
.org 0x615fc
	movs r4, #1	@ 000615fc 0124
.org 0x615fe
	ands r2, r4	@ 000615fe 2240
.org 0x61600
	bl 0xc6480	@ 00061600 64f03eff
.org 0x61604
	ldr r0, [r5, #100]	@ 00061604 686e
.org 0x61606
	movs r3, #128	@ 00061606 8023
.org 0x61608
	lsls r3, r3, #5	@ 00061608 5b01
.org 0x6160a
	adds r0, r0, r3	@ 0006160a c018
.org 0x6160c
	ldr r1, [r5, #104]	@ 0006160c a96e
.org 0x6160e
	ldrb r2, [r6, #10]	@ 0006160e b27a
.org 0x61610
	lsrs r2, r2, #4	@ 00061610 1209
.org 0x61612
	ands r2, r4	@ 00061612 2240
.org 0x61614
	bl 0xc6480	@ 00061614 64f034ff
.org 0x61618
	ldrb r1, [r6, #10]	@ 00061618 b17a
.org 0x6161a
	movs r0, #16	@ 0006161a 1020
.org 0x6161c
	ands r0, r1	@ 0006161c 0840
.org 0x6161e
	lsls r0, r0, #24	@ 0006161e 0006
.org 0x61620
	lsrs r4, r0, #24	@ 00061620 040e
.org 0x61622
	cmp r4, #0	@ 00061622 002c
.org 0x61624
	beq.n 0x61660	@ 00061624 1cd0
.org 0x61626
	ldr r0, [pc, #52]	@ 00061626 0d48
.org 0x61628
	ldr r0, [r0, #56]	@ 00061628 806b
.org 0x6162a
	movs r1, #160	@ 0006162a a021
.org 0x6162c
	lsls r1, r1, #6	@ 0006162c 8901
.org 0x6162e
	adds r0, r0, r1	@ 0006162e 4018
.org 0x61630
	ldr r1, [r6, #84]	@ 00061630 716d
.org 0x61632
	cmp r1, r0	@ 00061632 8142
.org 0x61634
	ble.n 0x6168e	@ 00061634 2bdd
.org 0x61636
	ldr r0, [r7, #12]	@ 00061636 f868
.org 0x61638
	cmp r0, #0	@ 00061638 0028
.org 0x6163a
	beq.n 0x61646	@ 0006163a 04d0
.org 0x6163c
	adds r0, #119	@ 0006163c 7730
.org 0x6163e
	movs r2, #0	@ 0006163e 0022
.org 0x61640
	movs r1, #1	@ 00061640 0121
.org 0x61642
	strb r1, [r0, #0]	@ 00061642 0170
.org 0x61644
	str r2, [r7, #12]	@ 00061644 fa60
.org 0x61646
	movs r0, #93	@ 00061646 5d20
.org 0x61648
	bl 0x2b5c	@ 00061648 a1f788fa
.org 0x6164c
	movs r0, #0	@ 0006164c 0020
.org 0x6164e
	movs r1, #0	@ 0006164e 0021
.org 0x61650
	strh r1, [r7, #22]	@ 00061650 f982
.org 0x61652
	movs r1, #30	@ 00061652 1e21
.org 0x61654
	strb r1, [r6, #13]	@ 00061654 7173
.org 0x61656
	strb r0, [r6, #14]	@ 00061656 b073
.org 0x61658
	b.n 0x6168e	@ 00061658 19e0
.org 0x6165a
	.byte 0x00	@ 0006165a data
.org 0x6165b
	.byte 0x00	@ 0006165b data
.org 0x6165c
	.byte 0xf8,0xe9,0x02,0x02	@ 0006165c data
.org 0x61660
	ldr r0, [pc, #48]	@ 00061660 0c48
.org 0x61662
	ldr r0, [r0, #56]	@ 00061662 806b

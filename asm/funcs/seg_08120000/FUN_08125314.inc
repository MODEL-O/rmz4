@ FUN_08125314  entry 0x08125314  size 680
.thumb
.org 0x125314
FUN_08125314:
	push {r4, r5, r6, r7, lr}	@ 00125314 f0b5
.org 0x125316
	mov r7, sl	@ 00125316 5746
.org 0x125318
	mov r6, r9	@ 00125318 4e46
.org 0x12531a
	mov r5, r8	@ 0012531a 4546
.org 0x12531c
	push {r5, r6, r7}	@ 0012531c e0b4
.org 0x12531e
	sub sp, #12	@ 0012531e 83b0
.org 0x125320
	adds r7, r0, #0	@ 00125320 071c
.org 0x125322
	ldr r0, [pc, #664]	@ 00125322 a648
.org 0x125324
	adds r1, r7, r0	@ 00125324 3918
.org 0x125326
	movs r2, #180	@ 00125326 b422
.org 0x125328
	lsls r2, r2, #9	@ 00125328 5202
.org 0x12532a
	str r2, [r1, #0]	@ 0012532a 0a60
.org 0x12532c
	movs r0, #240	@ 0012532c f020
.org 0x12532e
	lsls r0, r0, #8	@ 0012532e 0002
.org 0x125330
	str r0, [r1, #4]	@ 00125330 4860
.org 0x125332
	movs r0, #23	@ 00125332 1720
.org 0x125334
	bl 0x6a94	@ 00125334 e1f6aefb
.org 0x125338
	ldr r6, [pc, #644]	@ 00125338 a14e
.org 0x12533a
	ldr r0, [pc, #648]	@ 0012533a a248
.org 0x12533c
	mov r9, r0	@ 0012533c 8146
.org 0x12533e
	ldrh r1, [r0, #0]	@ 0012533e 0188
.org 0x125340
	ldrh r0, [r6, #6]	@ 00125340 f088
.org 0x125342
	lsrs r0, r0, #6	@ 00125342 8009
.org 0x125344
	subs r1, r1, r0	@ 00125344 091a
.org 0x125346
	lsls r1, r1, #5	@ 00125346 4901
.org 0x125348
	movs r2, #128	@ 00125348 8022
.org 0x12534a
	lsls r2, r2, #9	@ 0012534a 5202
.org 0x12534c
	adds r1, r1, r2	@ 0012534c 8918
.org 0x12534e
	adds r0, r6, #0	@ 0012534e 301c
.org 0x125350
	bl 0x1d30	@ 00125350 dcf6eefc
.org 0x125354
	ldr r0, [pc, #624]	@ 00125354 9c48
.org 0x125356
	mov r8, r0	@ 00125356 8046
.org 0x125358
	ldrh r1, [r0, #0]	@ 00125358 0188
.org 0x12535a
	ldr r2, [pc, #624]	@ 0012535a 9c4a
.org 0x12535c
	ldrb r0, [r2, #7]	@ 0012535c d079
.org 0x12535e
	subs r1, r1, r0	@ 0012535e 091a
.org 0x125360
	lsls r1, r1, #5	@ 00125360 4901
.org 0x125362
	movs r0, #128	@ 00125362 8020
.org 0x125364
	lsls r0, r0, #2	@ 00125364 8000
.org 0x125366
	mov sl, r0	@ 00125366 8246
.org 0x125368
	add r1, sl	@ 00125368 5144
.org 0x12536a
	adds r0, r2, #0	@ 0012536a 101c
.org 0x12536c
	bl 0x2208	@ 0012536c dcf64cff
.org 0x125370
	adds r0, r6, #0	@ 00125370 301c
.org 0x125372
	adds r0, #20	@ 00125372 1430
.org 0x125374
	mov r2, r9	@ 00125374 4a46
.org 0x125376
	ldrh r1, [r2, #2]	@ 00125376 5188
.org 0x125378
	ldrh r2, [r0, #6]	@ 00125378 c288
.org 0x12537a
	lsrs r2, r2, #6	@ 0012537a 9209
.org 0x12537c
	subs r1, r1, r2	@ 0012537c 891a
.org 0x12537e
	lsls r1, r1, #5	@ 0012537e 4901
.org 0x125380
	movs r2, #128	@ 00125380 8022
.org 0x125382
	lsls r2, r2, #9	@ 00125382 5202
.org 0x125384
	adds r1, r1, r2	@ 00125384 8918
.org 0x125386
	bl 0x1d30	@ 00125386 dcf6d3fc
.org 0x12538a
	ldr r0, [pc, #576]	@ 0012538a 9048
.org 0x12538c
	adds r0, #20	@ 0012538c 1430
.org 0x12538e
	mov r2, r8	@ 0012538e 4246
.org 0x125390
	ldrh r1, [r2, #2]	@ 00125390 5188
.org 0x125392
	ldrb r2, [r0, #7]	@ 00125392 c279
.org 0x125394
	subs r1, r1, r2	@ 00125394 891a
.org 0x125396
	lsls r1, r1, #5	@ 00125396 4901
.org 0x125398
	add r1, sl	@ 00125398 5144
.org 0x12539a
	bl 0x2208	@ 0012539a dcf635ff
.org 0x12539e
	adds r0, r6, #0	@ 0012539e 301c
.org 0x1253a0
	adds r0, #40	@ 001253a0 2830
.org 0x1253a2
	mov r2, r9	@ 001253a2 4a46
.org 0x1253a4
	ldrh r1, [r2, #4]	@ 001253a4 9188
.org 0x1253a6
	ldrh r2, [r0, #6]	@ 001253a6 c288
.org 0x1253a8
	lsrs r2, r2, #6	@ 001253a8 9209
.org 0x1253aa
	subs r1, r1, r2	@ 001253aa 891a
.org 0x1253ac
	lsls r1, r1, #5	@ 001253ac 4901
.org 0x1253ae
	movs r2, #128	@ 001253ae 8022
.org 0x1253b0
	lsls r2, r2, #9	@ 001253b0 5202
.org 0x1253b2
	adds r1, r1, r2	@ 001253b2 8918
.org 0x1253b4
	bl 0x1d30	@ 001253b4 dcf6bcfc
.org 0x1253b8
	ldr r0, [pc, #528]	@ 001253b8 8448
.org 0x1253ba
	adds r0, #40	@ 001253ba 2830
.org 0x1253bc
	mov r2, r8	@ 001253bc 4246
.org 0x1253be
	ldrh r1, [r2, #4]	@ 001253be 9188
.org 0x1253c0
	ldrb r2, [r0, #7]	@ 001253c0 c279
.org 0x1253c2
	subs r1, r1, r2	@ 001253c2 891a
.org 0x1253c4
	lsls r1, r1, #5	@ 001253c4 4901
.org 0x1253c6
	add r1, sl	@ 001253c6 5144
.org 0x1253c8
	bl 0x2208	@ 001253c8 dcf61eff
.org 0x1253cc
	adds r0, r6, #0	@ 001253cc 301c
.org 0x1253ce
	adds r0, #80	@ 001253ce 5030
.org 0x1253d0
	mov r2, r9	@ 001253d0 4a46
.org 0x1253d2
	ldrh r1, [r2, #8]	@ 001253d2 1189
.org 0x1253d4
	ldrh r2, [r0, #6]	@ 001253d4 c288
.org 0x1253d6
	lsrs r2, r2, #6	@ 001253d6 9209
.org 0x1253d8
	subs r1, r1, r2	@ 001253d8 891a
.org 0x1253da
	lsls r1, r1, #5	@ 001253da 4901
.org 0x1253dc
	movs r2, #128	@ 001253dc 8022
.org 0x1253de
	lsls r2, r2, #9	@ 001253de 5202
.org 0x1253e0
	adds r1, r1, r2	@ 001253e0 8918
.org 0x1253e2
	bl 0x1d30	@ 001253e2 dcf6a5fc
.org 0x1253e6
	ldr r0, [pc, #484]	@ 001253e6 7948
.org 0x1253e8
	adds r0, #80	@ 001253e8 5030
.org 0x1253ea
	mov r2, r8	@ 001253ea 4246
.org 0x1253ec
	ldrh r1, [r2, #8]	@ 001253ec 1189
.org 0x1253ee
	ldrb r2, [r0, #7]	@ 001253ee c279
.org 0x1253f0
	subs r1, r1, r2	@ 001253f0 891a
.org 0x1253f2
	lsls r1, r1, #5	@ 001253f2 4901
.org 0x1253f4
	add r1, sl	@ 001253f4 5144
.org 0x1253f6
	bl 0x2208	@ 001253f6 dcf607ff
.org 0x1253fa
	adds r0, r6, #0	@ 001253fa 301c
.org 0x1253fc
	adds r0, #100	@ 001253fc 6430
.org 0x1253fe
	mov r2, r9	@ 001253fe 4a46
.org 0x125400
	ldrh r1, [r2, #10]	@ 00125400 5189
.org 0x125402
	ldrh r2, [r0, #6]	@ 00125402 c288
.org 0x125404
	lsrs r2, r2, #6	@ 00125404 9209
.org 0x125406
	subs r1, r1, r2	@ 00125406 891a
.org 0x125408
	lsls r1, r1, #5	@ 00125408 4901
.org 0x12540a
	movs r2, #128	@ 0012540a 8022
.org 0x12540c
	lsls r2, r2, #9	@ 0012540c 5202
.org 0x12540e
	adds r1, r1, r2	@ 0012540e 8918
.org 0x125410
	bl 0x1d30	@ 00125410 dcf68efc
.org 0x125414
	ldr r0, [pc, #436]	@ 00125414 6d48
.org 0x125416
	adds r0, #100	@ 00125416 6430
.org 0x125418
	mov r2, r8	@ 00125418 4246
.org 0x12541a
	ldrh r1, [r2, #10]	@ 0012541a 5189
.org 0x12541c
	ldrb r2, [r0, #7]	@ 0012541c c279
.org 0x12541e
	subs r1, r1, r2	@ 0012541e 891a
.org 0x125420
	lsls r1, r1, #5	@ 00125420 4901
.org 0x125422
	add r1, sl	@ 00125422 5144
.org 0x125424
	bl 0x2208	@ 00125424 dcf6f0fe
.org 0x125428
	movs r4, #198	@ 00125428 c624
.org 0x12542a
	lsls r5, r4, #1	@ 0012542a 6500
.org 0x12542c
	mov r1, r9	@ 0012542c 4946
.org 0x12542e
	adds r0, r1, r5	@ 0012542e 4819
.org 0x125430
	mov r2, sl	@ 00125430 5246
.org 0x125432
	strh r2, [r0, #0]	@ 00125432 0280
.org 0x125434
	add r5, r8	@ 00125434 4544
.org 0x125436
	movs r0, #4	@ 00125436 0420
.org 0x125438
	strh r0, [r5, #0]	@ 00125438 2880
.org 0x12543a
	lsls r4, r4, #2	@ 0012543a a400
.org 0x12543c
	adds r4, #198	@ 0012543c c634
.org 0x12543e
	lsls r4, r4, #2	@ 0012543e a400
.org 0x125440
	adds r0, r4, r6	@ 00125440 a019
.org 0x125442
	ldrh r1, [r0, #6]	@ 00125442 c188
.org 0x125444
	lsrs r1, r1, #6	@ 00125444 8909
.org 0x125446
	mov r2, sl	@ 00125446 5246
.org 0x125448
	subs r1, r2, r1	@ 00125448 511a
.org 0x12544a
	lsls r1, r1, #5	@ 0012544a 4901
.org 0x12544c
	movs r2, #128	@ 0012544c 8022
.org 0x12544e
	lsls r2, r2, #9	@ 0012544e 5202
.org 0x125450
	adds r1, r1, r2	@ 00125450 8918
.org 0x125452
	bl 0x1d30	@ 00125452 dcf66dfc
.org 0x125456
	ldr r0, [pc, #372]	@ 00125456 5d48
.org 0x125458
	adds r4, r4, r0	@ 00125458 2418
.org 0x12545a
	ldrh r1, [r5, #0]	@ 0012545a 2988
.org 0x12545c
	ldrb r0, [r4, #7]	@ 0012545c e079
.org 0x12545e
	subs r1, r1, r0	@ 0012545e 091a
.org 0x125460
	lsls r1, r1, #5	@ 00125460 4901
.org 0x125462
	add r1, sl	@ 00125462 5144
.org 0x125464
	adds r0, r4, #0	@ 00125464 201c
.org 0x125466
	bl 0x2208	@ 00125466 dcf6cffe
.org 0x12546a
	movs r4, #247	@ 0012546a f724
.org 0x12546c
	lsls r5, r4, #1	@ 0012546c 6500
.org 0x12546e
	mov r2, r9	@ 0012546e 4a46
.org 0x125470
	adds r1, r2, r5	@ 00125470 5119
.org 0x125472
	ldr r0, [pc, #348]	@ 00125472 5748
.org 0x125474
	strh r0, [r1, #0]	@ 00125474 0880
.org 0x125476
	add r5, r8	@ 00125476 4544
.org 0x125478
	movs r0, #10	@ 00125478 0a20
.org 0x12547a
	strh r0, [r5, #0]	@ 0012547a 2880
.org 0x12547c
	lsls r4, r4, #4	@ 0012547c 2401
.org 0x12547e
	movs r2, #247	@ 0012547e f722
.org 0x125480
	lsls r2, r2, #2	@ 00125480 9200
.org 0x125482
	adds r4, r4, r2	@ 00125482 a418
.org 0x125484
	adds r0, r4, r6	@ 00125484 a019
.org 0x125486
	ldrh r1, [r1, #0]	@ 00125486 0988
.org 0x125488
	ldrh r2, [r0, #6]	@ 00125488 c288
.org 0x12548a
	lsrs r2, r2, #6	@ 0012548a 9209
.org 0x12548c
	subs r1, r1, r2	@ 0012548c 891a
.org 0x12548e
	lsls r1, r1, #5	@ 0012548e 4901
.org 0x125490
	movs r2, #128	@ 00125490 8022
.org 0x125492
	lsls r2, r2, #9	@ 00125492 5202
.org 0x125494
	adds r1, r1, r2	@ 00125494 8918
.org 0x125496
	bl 0x1d30	@ 00125496 dcf64bfc
.org 0x12549a
	ldr r0, [pc, #304]	@ 0012549a 4c48
.org 0x12549c
	adds r4, r4, r0	@ 0012549c 2418
.org 0x12549e
	ldrh r1, [r5, #0]	@ 0012549e 2988
.org 0x1254a0
	ldrb r0, [r4, #7]	@ 001254a0 e079
.org 0x1254a2
	subs r1, r1, r0	@ 001254a2 091a
.org 0x1254a4
	lsls r1, r1, #5	@ 001254a4 4901
.org 0x1254a6
	add r1, sl	@ 001254a6 5144
.org 0x1254a8
	adds r0, r4, #0	@ 001254a8 201c
.org 0x1254aa
	bl 0x2208	@ 001254aa dcf6adfe
.org 0x1254ae
	movs r1, #206	@ 001254ae ce21
.org 0x1254b0
	add r9, r1	@ 001254b0 8944
.org 0x1254b2
	movs r1, #234	@ 001254b2 ea21
.org 0x1254b4
	lsls r1, r1, #2	@ 001254b4 8900
.org 0x1254b6
	mov r2, r9	@ 001254b6 4a46
.org 0x1254b8
	strh r1, [r2, #0]	@ 001254b8 1180
.org 0x1254ba
	movs r0, #206	@ 001254ba ce20
.org 0x1254bc
	add r8, r0	@ 001254bc 8044
.org 0x1254be
	movs r0, #10	@ 001254be 0a20
.org 0x1254c0
	mov r2, r8	@ 001254c0 4246
.org 0x1254c2
	strh r0, [r2, #0]	@ 001254c2 1080
.org 0x1254c4
	ldr r4, [pc, #268]	@ 001254c4 434c
.org 0x1254c6
	adds r6, r4, r6	@ 001254c6 a619
.org 0x1254c8
	ldrh r0, [r6, #6]	@ 001254c8 f088
.org 0x1254ca
	lsrs r0, r0, #6	@ 001254ca 8009
.org 0x1254cc
	subs r1, r1, r0	@ 001254cc 091a
.org 0x1254ce
	lsls r1, r1, #5	@ 001254ce 4901
.org 0x1254d0
	movs r2, #128	@ 001254d0 8022
.org 0x1254d2
	lsls r2, r2, #9	@ 001254d2 5202
.org 0x1254d4
	adds r1, r1, r2	@ 001254d4 8918
.org 0x1254d6
	adds r0, r6, #0	@ 001254d6 301c
.org 0x1254d8
	bl 0x1d30	@ 001254d8 dcf62afc
.org 0x1254dc
	ldr r0, [pc, #236]	@ 001254dc 3b48
.org 0x1254de
	adds r4, r4, r0	@ 001254de 2418
.org 0x1254e0
	mov r2, r8	@ 001254e0 4246
.org 0x1254e2
	ldrh r1, [r2, #0]	@ 001254e2 1188
.org 0x1254e4
	ldrb r0, [r4, #7]	@ 001254e4 e079
.org 0x1254e6
	subs r1, r1, r0	@ 001254e6 091a
.org 0x1254e8
	lsls r1, r1, #5	@ 001254e8 4901
.org 0x1254ea
	add r1, sl	@ 001254ea 5144
.org 0x1254ec
	adds r0, r4, #0	@ 001254ec 201c
.org 0x1254ee
	bl 0x2208	@ 001254ee dcf68bfe
.org 0x1254f2
	movs r0, #180	@ 001254f2 b420
.org 0x1254f4
	lsls r0, r0, #9	@ 001254f4 4002
.org 0x1254f6
	str r0, [sp, #4]	@ 001254f6 0190
.org 0x1254f8
	movs r0, #220	@ 001254f8 dc20
.org 0x1254fa
	lsls r0, r0, #8	@ 001254fa 0002
.org 0x1254fc
	str r0, [sp, #8]	@ 001254fc 0290
.org 0x1254fe
	add r0, sp, #4	@ 001254fe 01a8
.org 0x125500
	bl 0x2f190	@ 00125500 09f746fe
.org 0x125504
	ldr r1, [pc, #208]	@ 00125504 3449
.org 0x125506
	adds r4, r7, r1	@ 00125506 7c18
.org 0x125508
	str r0, [r4, #0]	@ 00125508 2060
.org 0x12550a
	ldr r3, [pc, #208]	@ 0012550a 344b
.org 0x12550c
	str r3, [sp, #0]	@ 0012550c 0093
.org 0x12550e
	movs r1, #0	@ 0012550e 0021
.org 0x125510
	movs r2, #0	@ 00125510 0022
.org 0x125512
	bl 0x2cbec	@ 00125512 07f76bfb
.org 0x125516
	ldr r1, [pc, #200]	@ 00125516 3249
.org 0x125518
	ldr r0, [r4, #0]	@ 00125518 2068
.org 0x12551a
	str r0, [r1, #0]	@ 0012551a 0860
.org 0x12551c
	ldr r1, [pc, #196]	@ 0012551c 3149
.org 0x12551e
	bl 0x382b0	@ 0012551e 12f7c7fe
.org 0x125522
	ldr r0, [r4, #0]	@ 00125522 2068
.org 0x125524
	adds r0, #76	@ 00125524 4c30
.org 0x125526
	movs r2, #1	@ 00125526 0122
.org 0x125528
	strb r2, [r0, #0]	@ 00125528 0270
.org 0x12552a
	ldr r1, [r4, #0]	@ 0012552a 2168
.org 0x12552c
	adds r1, #74	@ 0012552c 4a31
.org 0x12552e
	ldrb r0, [r1, #0]	@ 0012552e 0878
.org 0x125530
	movs r2, #16	@ 00125530 1022
.org 0x125532
	orrs r0, r2	@ 00125532 1043
.org 0x125534
	strb r0, [r1, #0]	@ 00125534 0870
.org 0x125536
	ldr r1, [r4, #0]	@ 00125536 2168
.org 0x125538
	ldrb r0, [r1, #10]	@ 00125538 887a
.org 0x12553a
	orrs r2, r0	@ 0012553a 0243
.org 0x12553c
	strb r2, [r1, #10]	@ 0012553c 8a72
.org 0x12553e
	movs r0, #0	@ 0012553e 0020
.org 0x125540
	str r0, [r4, #8]	@ 00125540 a060
.org 0x125542
	str r0, [r4, #12]	@ 00125542 e060
.org 0x125544
	ldr r0, [pc, #160]	@ 00125544 2848
.org 0x125546
	ldr r0, [r0, #44]	@ 00125546 c06a
.org 0x125548
	str r0, [r4, #16]	@ 00125548 2061
.org 0x12554a
	movs r0, #225	@ 0012554a e120
.org 0x12554c
	lsls r0, r0, #4	@ 0012554c 0001
.org 0x12554e
	str r0, [r4, #20]	@ 0012554e 6061
.org 0x125550
	movs r1, #0	@ 00125550 0021
.org 0x125552
	strb r1, [r4, #24]	@ 00125552 2176
.org 0x125554
	strb r1, [r4, #25]	@ 00125554 6176
.org 0x125556
	strb r1, [r4, #26]	@ 00125556 a176
.org 0x125558
	strb r1, [r4, #27]	@ 00125558 e176
.org 0x12555a
	strb r1, [r4, #28]	@ 0012555a 2177
.org 0x12555c
	strb r1, [r4, #29]	@ 0012555c 6177
.org 0x12555e
	strb r1, [r4, #30]	@ 0012555e a177
.org 0x125560
	strb r1, [r4, #31]	@ 00125560 e177
.org 0x125562
	ldr r2, [pc, #136]	@ 00125562 224a
.org 0x125564
	adds r0, r7, r2	@ 00125564 b818
.org 0x125566
	strb r1, [r0, #0]	@ 00125566 0170
.org 0x125568
	ldr r1, [pc, #132]	@ 00125568 2149
.org 0x12556a
	adds r0, r7, r1	@ 0012556a 7818
.org 0x12556c
	movs r2, #0	@ 0012556c 0022
.org 0x12556e
	strb r2, [r0, #0]	@ 0012556e 0270
.org 0x125570
	adds r1, #1	@ 00125570 0131
.org 0x125572
	adds r0, r7, r1	@ 00125572 7818
.org 0x125574
	strb r2, [r0, #0]	@ 00125574 0270
.org 0x125576
	ldr r2, [pc, #124]	@ 00125576 1f4a
.org 0x125578
	adds r0, r7, r2	@ 00125578 b818
.org 0x12557a
	movs r1, #0	@ 0012557a 0021
.org 0x12557c
	strb r1, [r0, #0]	@ 0012557c 0170
.org 0x12557e
	ldr r0, [sp, #4]	@ 0012557e 0198
.org 0x125580
	movs r2, #200	@ 00125580 c822
.org 0x125582
	lsls r2, r2, #6	@ 00125582 9201
.org 0x125584
	adds r0, r0, r2	@ 00125584 8018
.org 0x125586
	str r0, [sp, #4]	@ 00125586 0190
.org 0x125588
	add r0, sp, #4	@ 00125588 01a8
.org 0x12558a
	adds r1, r7, #0	@ 0012558a 391c
.org 0x12558c
	bl 0xb97d0	@ 0012558c 94f720f9
.org 0x125590
	ldr r0, [sp, #4]	@ 00125590 0198
.org 0x125592
	str r0, [r4, #40]	@ 00125592 a062
.org 0x125594
	ldr r0, [r4, #36]	@ 00125594 606a
.org 0x125596
	movs r1, #2	@ 00125596 0221
.org 0x125598
	negs r1, r1	@ 00125598 4942
.org 0x12559a
	ands r0, r1	@ 0012559a 0840
.org 0x12559c
	subs r1, #1	@ 0012559c 0139
.org 0x12559e
	ands r0, r1	@ 0012559e 0840
.org 0x1255a0
	subs r1, #2	@ 001255a0 0239
.org 0x1255a2
	ands r0, r1	@ 001255a2 0840
.org 0x1255a4
	str r0, [r4, #36]	@ 001255a4 6062
.org 0x1255a6
	movs r0, #138	@ 001255a6 8a20
.org 0x1255a8
	bl 0x2a88	@ 001255a8 ddf66efa
.org 0x1255ac
	add sp, #12	@ 001255ac 03b0
.org 0x1255ae
	pop {r3, r4, r5}	@ 001255ae 38bc
.org 0x1255b0
	mov r8, r3	@ 001255b0 9846
.org 0x1255b2
	mov r9, r4	@ 001255b2 a146
.org 0x1255b4
	mov sl, r5	@ 001255b4 aa46
.org 0x1255b6
	pop {r4, r5, r6, r7}	@ 001255b6 f0bc
.org 0x1255b8
	pop {r0}	@ 001255b8 01bc
.org 0x1255ba
	bx r0	@ 001255ba 0047

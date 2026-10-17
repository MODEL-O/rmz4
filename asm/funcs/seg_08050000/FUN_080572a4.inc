@ FUN_080572a4  entry 0x080572a4  size 688
.thumb
.org 0x572a4
FUN_080572a4:
	push {r4, r5, r6, lr}	@ 000572a4 70b5
.org 0x572a6
	adds r4, r0, #0	@ 000572a6 041c
.org 0x572a8
	ldrb r0, [r4, #10]	@ 000572a8 a07a
.org 0x572aa
	lsrs r5, r0, #4	@ 000572aa 0509
.org 0x572ac
	movs r6, #1	@ 000572ac 0126
.org 0x572ae
	ands r5, r6	@ 000572ae 3540
.org 0x572b0
	ldrb r0, [r4, #15]	@ 000572b0 e07b
.org 0x572b2
	cmp r0, #1	@ 000572b2 0128
.org 0x572b4
	beq.n 0x57316	@ 000572b4 2fd0
.org 0x572b6
	cmp r0, #1	@ 000572b6 0128
.org 0x572b8
	bgt.n 0x572c0	@ 000572b8 02dc
.org 0x572ba
	cmp r0, #0	@ 000572ba 0028
.org 0x572bc
	beq.n 0x572ce	@ 000572bc 07d0
.org 0x572be
	b.n 0x57570	@ 000572be 57e1
.org 0x572c0
	cmp r0, #2	@ 000572c0 0228
.org 0x572c2
	bne.n 0x572c6	@ 000572c2 00d1
.org 0x572c4
	b.n 0x57460	@ 000572c4 cce0
.org 0x572c6
	cmp r0, #3	@ 000572c6 0328
.org 0x572c8
	bne.n 0x572cc	@ 000572c8 00d1
.org 0x572ca
	b.n 0x57472	@ 000572ca d2e0
.org 0x572cc
	b.n 0x57570	@ 000572cc 50e1
.org 0x572ce
	ldr r1, [pc, #140]	@ 000572ce 2349
.org 0x572d0
	adds r0, r4, #0	@ 000572d0 201c
.org 0x572d2
	bl 0x1cf00	@ 000572d2 c5f715fe
.org 0x572d6
	adds r0, r4, #0	@ 000572d6 201c
.org 0x572d8
	bl 0x5977c	@ 000572d8 02f050fa
.org 0x572dc
	adds r3, r0, #0	@ 000572dc 031c
.org 0x572de
	ldr r1, [pc, #128]	@ 000572de 2049
.org 0x572e0
	lsls r0, r3, #1	@ 000572e0 5800
.org 0x572e2
	adds r0, r0, r1	@ 000572e2 4018
.org 0x572e4
	ldrh r0, [r0, #0]	@ 000572e4 0088
.org 0x572e6
	str r0, [r4, #104]	@ 000572e6 a066
.org 0x572e8
	movs r1, #128	@ 000572e8 8021
.org 0x572ea
	lsls r1, r1, #2	@ 000572ea 8900
.org 0x572ec
	str r1, [r4, #92]	@ 000572ec e165
.org 0x572ee
	movs r0, #32	@ 000572ee 2020
.org 0x572f0
	str r0, [r4, #100]	@ 000572f0 6066
.org 0x572f2
	str r1, [r4, #96]	@ 000572f2 2166
.org 0x572f4
	adds r1, r4, #0	@ 000572f4 211c
.org 0x572f6
	adds r1, #196	@ 000572f6 c431
.org 0x572f8
	ldr r0, [r4, #84]	@ 000572f8 606d
.org 0x572fa
	str r0, [r1, #0]	@ 000572fa 0860
.org 0x572fc
	adds r1, #4	@ 000572fc 0431
.org 0x572fe
	adds r0, r4, #0	@ 000572fe 201c
.org 0x57300
	adds r0, #188	@ 00057300 bc30
.org 0x57302
	ldr r0, [r0, #0]	@ 00057302 0068
.org 0x57304
	str r0, [r1, #0]	@ 00057304 0860
.org 0x57306
	adds r0, r5, #1	@ 00057306 681c
.org 0x57308
	movs r1, #1	@ 00057308 0121
.org 0x5730a
	ands r0, r1	@ 0005730a 0840
.org 0x5730c
	strb r0, [r4, #18]	@ 0005730c a074
.org 0x5730e
	strb r6, [r4, #19]	@ 0005730e e674
.org 0x57310
	ldrb r0, [r4, #15]	@ 00057310 e07b
.org 0x57312
	adds r0, #1	@ 00057312 0130
.org 0x57314
	strb r0, [r4, #15]	@ 00057314 e073
.org 0x57316
	ldrb r0, [r4, #19]	@ 00057316 e07c
.org 0x57318
	cmp r0, #0	@ 00057318 0028
.org 0x5731a
	beq.n 0x57378	@ 0005731a 2dd0
.org 0x5731c
	adds r0, r4, #0	@ 0005731c 201c
.org 0x5731e
	adds r0, #115	@ 0005731e 7330
.org 0x57320
	ldrb r0, [r0, #0]	@ 00057320 0078
.org 0x57322
	cmp r0, #3	@ 00057322 0328
.org 0x57324
	bne.n 0x57378	@ 00057324 28d1
.org 0x57326
	adds r5, #1	@ 00057326 0135
.org 0x57328
	movs r0, #1	@ 00057328 0120
.org 0x5732a
	ands r5, r0	@ 0005732a 0540
.org 0x5732c
	movs r3, #1	@ 0005732c 0123
.org 0x5732e
	adds r1, r5, #0	@ 0005732e 291c
.org 0x57330
	ands r1, r3	@ 00057330 1940
.org 0x57332
	adds r0, r4, #0	@ 00057332 201c
.org 0x57334
	adds r0, #76	@ 00057334 4c30
.org 0x57336
	strb r1, [r0, #0]	@ 00057336 0170
.org 0x57338
	movs r0, #74	@ 00057338 4a20
.org 0x5733a
	adds r0, r0, r4	@ 0005733a 0019
.org 0x5733c
	mov ip, r0	@ 0005733c 8446
.org 0x5733e
	lsls r1, r1, #4	@ 0005733e 0901
.org 0x57340
	ldrb r2, [r0, #0]	@ 00057340 0278
.org 0x57342
	movs r0, #17	@ 00057342 1120
.org 0x57344
	negs r0, r0	@ 00057344 4042
.org 0x57346
	ands r0, r2	@ 00057346 1040
.org 0x57348
	orrs r0, r1	@ 00057348 0843
.org 0x5734a
	mov r1, ip	@ 0005734a 6146
.org 0x5734c
	strb r0, [r1, #0]	@ 0005734c 0870
.org 0x5734e
	ands r5, r3	@ 0005734e 1d40
.org 0x57350
	cmp r5, #0	@ 00057350 002d
.org 0x57352
	beq.n 0x57364	@ 00057352 07d0
.org 0x57354
	ldrb r0, [r4, #10]	@ 00057354 a07a
.org 0x57356
	movs r1, #16	@ 00057356 1021
.org 0x57358
	orrs r0, r1	@ 00057358 0843
.org 0x5735a
	b.n 0x5736a	@ 0005735a 06e0
.org 0x5735c
	.byte 0x1d,0xa0,0x00,0x00	@ 0005735c data
.org 0x57360
	.byte 0xce,0x87,0x85,0x08	@ 00057360 data
.org 0x57364
	ldrb r1, [r4, #10]	@ 00057364 a17a
.org 0x57366
	movs r0, #239	@ 00057366 ef20
.org 0x57368
	ands r0, r1	@ 00057368 0840
.org 0x5736a
	strb r0, [r4, #10]	@ 0005736a a072
.org 0x5736c
	ldr r1, [pc, #216]	@ 0005736c 3649
.org 0x5736e
	adds r0, r4, #0	@ 0005736e 201c
.org 0x57370
	bl 0x1cf00	@ 00057370 c5f7c6fd
.org 0x57374
	movs r0, #0	@ 00057374 0020
.org 0x57376
	strb r0, [r4, #19]	@ 00057376 e074
.org 0x57378
	adds r0, r4, #0	@ 00057378 201c
.org 0x5737a
	bl 0x1cff0	@ 0005737a c5f739fe
.org 0x5737e
	adds r0, r4, #0	@ 0005737e 201c
.org 0x57380
	adds r0, #116	@ 00057380 7430
.org 0x57382
	ldr r3, [pc, #200]	@ 00057382 324b
.org 0x57384
	ldrb r1, [r4, #30]	@ 00057384 a17f
.org 0x57386
	lsls r1, r1, #8	@ 00057386 0902
.org 0x57388
	adds r2, r4, #0	@ 00057388 221c
.org 0x5738a
	adds r2, #112	@ 0005738a 7032
.org 0x5738c
	ldrb r2, [r2, #0]	@ 0005738c 1278
.org 0x5738e
	orrs r1, r2	@ 0005738e 1143
.org 0x57390
	ldr r2, [pc, #188]	@ 00057390 2f4a
.org 0x57392
	adds r1, r1, r2	@ 00057392 8918
.org 0x57394
	lsls r1, r1, #2	@ 00057394 8900
.org 0x57396
	adds r1, r1, r3	@ 00057396 c918
.org 0x57398
	adds r2, r4, #0	@ 00057398 221c
.org 0x5739a
	adds r2, #113	@ 0005739a 7132
.org 0x5739c
	ldrb r2, [r2, #0]	@ 0005739c 1278
.org 0x5739e
	lsls r2, r2, #24	@ 0005739e 1206
.org 0x573a0
	asrs r2, r2, #24	@ 000573a0 1216
.org 0x573a2
	ldr r1, [r1, #0]	@ 000573a2 0968
.org 0x573a4
	lsls r2, r2, #2	@ 000573a4 9200
.org 0x573a6
	adds r2, r2, r1	@ 000573a6 5218
.org 0x573a8
	ldr r1, [r2, #0]	@ 000573a8 1168
.org 0x573aa
	ldrb r2, [r1, #0]	@ 000573aa 0a78
.org 0x573ac
	lsls r1, r2, #1	@ 000573ac 5100
.org 0x573ae
	adds r1, r1, r2	@ 000573ae 8918
.org 0x573b0
	lsls r1, r1, #3	@ 000573b0 c900
.org 0x573b2
	ldr r2, [pc, #160]	@ 000573b2 284a
.org 0x573b4
	adds r1, r1, r2	@ 000573b4 8918
.org 0x573b6
	bl 0x5784	@ 000573b6 aef7e5f9
.org 0x573ba
	ldr r0, [r4, #92]	@ 000573ba e06d
.org 0x573bc
	ldr r1, [r4, #100]	@ 000573bc 616e
.org 0x573be
	adds r0, r0, r1	@ 000573be 4018
.org 0x573c0
	str r0, [r4, #92]	@ 000573c0 e065
.org 0x573c2
	ldr r1, [r4, #104]	@ 000573c2 a16e
.org 0x573c4
	cmp r0, r1	@ 000573c4 8842
.org 0x573c6
	ble.n 0x573ca	@ 000573c6 00dd
.org 0x573c8
	str r1, [r4, #92]	@ 000573c8 e165
.org 0x573ca
	ldr r3, [r4, #84]	@ 000573ca 636d
.org 0x573cc
	ldrb r0, [r4, #18]	@ 000573cc a07c
.org 0x573ce
	lsls r0, r0, #1	@ 000573ce 4000
.org 0x573d0
	movs r1, #1	@ 000573d0 0121
.org 0x573d2
	subs r1, r1, r0	@ 000573d2 091a
.org 0x573d4
	ldr r0, [r4, #92]	@ 000573d4 e06d
.org 0x573d6
	muls r0, r1	@ 000573d6 4843
.org 0x573d8
	adds r3, r3, r0	@ 000573d8 1b18
.org 0x573da
	str r3, [r4, #84]	@ 000573da 6365
.org 0x573dc
	adds r1, r4, #0	@ 000573dc 211c
.org 0x573de
	adds r1, #188	@ 000573de bc31
.org 0x573e0
	ldr r2, [r1, #0]	@ 000573e0 0a68
.org 0x573e2
	ldr r0, [r4, #96]	@ 000573e2 206e
.org 0x573e4
	adds r2, r2, r0	@ 000573e4 1218
.org 0x573e6
	adds r0, r4, #0	@ 000573e6 201c
.org 0x573e8
	adds r0, #200	@ 000573e8 c830
.org 0x573ea
	ldr r0, [r0, #0]	@ 000573ea 0068
.org 0x573ec
	movs r5, #128	@ 000573ec 8025
.org 0x573ee
	lsls r5, r5, #6	@ 000573ee ad01
.org 0x573f0
	adds r0, r0, r5	@ 000573f0 4019
.org 0x573f2
	cmp r2, r0	@ 000573f2 8242
.org 0x573f4
	ble.n 0x573f8	@ 000573f4 00dd
.org 0x573f6
	adds r2, r0, #0	@ 000573f6 021c
.org 0x573f8
	str r2, [r1, #0]	@ 000573f8 0a60
.org 0x573fa
	ldr r1, [pc, #92]	@ 000573fa 1749
.org 0x573fc
	adds r0, r4, #0	@ 000573fc 201c
.org 0x573fe
	adds r0, #181	@ 000573fe b530
.org 0x57400
	ldrb r0, [r0, #0]	@ 00057400 0078
.org 0x57402
	lsls r0, r0, #1	@ 00057402 4000
.org 0x57404
	adds r0, r0, r1	@ 00057404 4018
.org 0x57406
	movs r1, #0	@ 00057406 0021
.org 0x57408
	ldrsh r0, [r0, r1]	@ 00057408 405e
.org 0x5740a
	lsls r0, r0, #1	@ 0005740a 4000
.org 0x5740c
	adds r0, r2, r0	@ 0005740c 1018
.org 0x5740e
	str r0, [r4, #88]	@ 0005740e a065
.org 0x57410
	ldrb r2, [r4, #18]	@ 00057410 a27c
.org 0x57412
	movs r5, #0	@ 00057412 0025
.org 0x57414
	ldr r0, [pc, #68]	@ 00057414 1148
.org 0x57416
	ldr r0, [r0, #0]	@ 00057416 0068
.org 0x57418
	ldr r1, [r4, #84]	@ 00057418 616d
.org 0x5741a
	ldr r0, [r0, #84]	@ 0005741a 406d
.org 0x5741c
	cmp r1, r0	@ 0005741c 8142
.org 0x5741e
	bge.n 0x57422	@ 0005741e 00da
.org 0x57420
	movs r5, #1	@ 00057420 0125
.org 0x57422
	cmp r2, r5	@ 00057422 aa42
.org 0x57424
	beq.n 0x5743e	@ 00057424 0bd0
.org 0x57426
	adds r0, r4, #0	@ 00057426 201c
.org 0x57428
	adds r0, #196	@ 00057428 c430
.org 0x5742a
	ldr r0, [r0, #0]	@ 0005742a 0068
.org 0x5742c
	subs r0, r3, r0	@ 0005742c 181a
.org 0x5742e
	movs r2, #160	@ 0005742e a022
.org 0x57430
	lsls r2, r2, #7	@ 00057430 d201
.org 0x57432
	adds r0, r0, r2	@ 00057432 8018
.org 0x57434
	movs r1, #160	@ 00057434 a021
.org 0x57436
	lsls r1, r1, #8	@ 00057436 0902
.org 0x57438
	cmp r0, r1	@ 00057438 8842
.org 0x5743a
	bhi.n 0x5743e	@ 0005743a 00d8
.org 0x5743c
	b.n 0x57570	@ 0005743c 98e0
.org 0x5743e
	ldrb r0, [r4, #15]	@ 0005743e e07b
.org 0x57440
	adds r0, #1	@ 00057440 0130
.org 0x57442
	strb r0, [r4, #15]	@ 00057442 e073
.org 0x57444
	b.n 0x57570	@ 00057444 94e0
.org 0x57446
	.byte 0x00	@ 00057446 data
.org 0x57447
	.byte 0x00	@ 00057447 data
.org 0x57448
	.byte 0x07,0xa0,0x00,0x00	@ 00057448 data
.org 0x5744c
	.byte 0x1c,0x87,0x85,0x08	@ 0005744c data
.org 0x57450
	.byte 0x00,0x60,0xff,0xff	@ 00057450 data
.org 0x57454
	.byte 0xcc,0x84,0x85,0x08	@ 00057454 data
.org 0x57458
	.byte 0x0c,0x93,0x12,0x08	@ 00057458 data
.org 0x5745c
	.byte 0xf0,0xdb,0x02,0x02	@ 0005745c data
.org 0x57460
	ldr r0, [r4, #100]	@ 00057460 606e
.org 0x57462
	negs r0, r0	@ 00057462 4042
.org 0x57464
	str r0, [r4, #100]	@ 00057464 6066
.org 0x57466
	ldr r0, [r4, #96]	@ 00057466 206e
.org 0x57468
	negs r0, r0	@ 00057468 4042
.org 0x5746a
	str r0, [r4, #96]	@ 0005746a 2066
.org 0x5746c
	ldrb r0, [r4, #15]	@ 0005746c e07b
.org 0x5746e
	adds r0, #1	@ 0005746e 0130
.org 0x57470
	strb r0, [r4, #15]	@ 00057470 e073
.org 0x57472
	ldrb r0, [r4, #19]	@ 00057472 e07c
.org 0x57474
	cmp r0, #0	@ 00057474 0028
.org 0x57476
	beq.n 0x574cc	@ 00057476 29d0
.org 0x57478
	adds r0, r4, #0	@ 00057478 201c
.org 0x5747a
	adds r0, #115	@ 0005747a 7330
.org 0x5747c
	ldrb r0, [r0, #0]	@ 0005747c 0078
.org 0x5747e
	cmp r0, #3	@ 0005747e 0328
.org 0x57480
	bne.n 0x574cc	@ 00057480 24d1
.org 0x57482
	adds r5, #1	@ 00057482 0135
.org 0x57484
	movs r0, #1	@ 00057484 0120
.org 0x57486
	ands r5, r0	@ 00057486 0540
.org 0x57488
	movs r3, #1	@ 00057488 0123
.org 0x5748a
	adds r1, r5, #0	@ 0005748a 291c
.org 0x5748c
	ands r1, r3	@ 0005748c 1940
.org 0x5748e
	adds r0, r4, #0	@ 0005748e 201c
.org 0x57490
	adds r0, #76	@ 00057490 4c30
.org 0x57492
	strb r1, [r0, #0]	@ 00057492 0170
.org 0x57494
	movs r0, #74	@ 00057494 4a20
.org 0x57496
	adds r0, r0, r4	@ 00057496 0019
.org 0x57498
	mov ip, r0	@ 00057498 8446
.org 0x5749a
	lsls r1, r1, #4	@ 0005749a 0901
.org 0x5749c
	ldrb r2, [r0, #0]	@ 0005749c 0278
.org 0x5749e
	movs r0, #17	@ 0005749e 1120
.org 0x574a0
	negs r0, r0	@ 000574a0 4042
.org 0x574a2
	ands r0, r2	@ 000574a2 1040
.org 0x574a4
	orrs r0, r1	@ 000574a4 0843
.org 0x574a6
	mov r1, ip	@ 000574a6 6146
.org 0x574a8
	strb r0, [r1, #0]	@ 000574a8 0870
.org 0x574aa
	ands r5, r3	@ 000574aa 1d40
.org 0x574ac
	cmp r5, #0	@ 000574ac 002d
.org 0x574ae
	beq.n 0x574b8	@ 000574ae 03d0
.org 0x574b0
	ldrb r0, [r4, #10]	@ 000574b0 a07a
.org 0x574b2
	movs r1, #16	@ 000574b2 1021
.org 0x574b4
	orrs r0, r1	@ 000574b4 0843
.org 0x574b6
	b.n 0x574be	@ 000574b6 02e0
.org 0x574b8
	ldrb r1, [r4, #10]	@ 000574b8 a17a
.org 0x574ba
	movs r0, #239	@ 000574ba ef20
.org 0x574bc
	ands r0, r1	@ 000574bc 0840
.org 0x574be
	strb r0, [r4, #10]	@ 000574be a072
.org 0x574c0
	ldr r1, [pc, #180]	@ 000574c0 2d49
.org 0x574c2
	adds r0, r4, #0	@ 000574c2 201c
.org 0x574c4
	bl 0x1cf00	@ 000574c4 c5f71cfd
.org 0x574c8
	movs r0, #0	@ 000574c8 0020
.org 0x574ca
	strb r0, [r4, #19]	@ 000574ca e074
.org 0x574cc
	adds r0, r4, #0	@ 000574cc 201c
.org 0x574ce
	bl 0x1cff0	@ 000574ce c5f78ffd
.org 0x574d2
	adds r0, r4, #0	@ 000574d2 201c
.org 0x574d4
	adds r0, #116	@ 000574d4 7430
.org 0x574d6
	ldr r3, [pc, #164]	@ 000574d6 294b
.org 0x574d8
	ldrb r1, [r4, #30]	@ 000574d8 a17f
.org 0x574da
	lsls r1, r1, #8	@ 000574da 0902
.org 0x574dc
	adds r2, r4, #0	@ 000574dc 221c
.org 0x574de
	adds r2, #112	@ 000574de 7032
.org 0x574e0
	ldrb r2, [r2, #0]	@ 000574e0 1278
.org 0x574e2
	orrs r1, r2	@ 000574e2 1143
.org 0x574e4
	ldr r2, [pc, #152]	@ 000574e4 264a
.org 0x574e6
	adds r1, r1, r2	@ 000574e6 8918
.org 0x574e8
	lsls r1, r1, #2	@ 000574e8 8900
.org 0x574ea
	adds r1, r1, r3	@ 000574ea c918
.org 0x574ec
	adds r2, r4, #0	@ 000574ec 221c
.org 0x574ee
	adds r2, #113	@ 000574ee 7132
.org 0x574f0
	ldrb r2, [r2, #0]	@ 000574f0 1278
.org 0x574f2
	lsls r2, r2, #24	@ 000574f2 1206
.org 0x574f4
	asrs r2, r2, #24	@ 000574f4 1216
.org 0x574f6
	ldr r1, [r1, #0]	@ 000574f6 0968
.org 0x574f8
	lsls r2, r2, #2	@ 000574f8 9200
.org 0x574fa
	adds r2, r2, r1	@ 000574fa 5218
.org 0x574fc
	ldr r1, [r2, #0]	@ 000574fc 1168
.org 0x574fe
	ldrb r2, [r1, #0]	@ 000574fe 0a78
.org 0x57500
	lsls r1, r2, #1	@ 00057500 5100
.org 0x57502
	adds r1, r1, r2	@ 00057502 8918
.org 0x57504
	lsls r1, r1, #3	@ 00057504 c900
.org 0x57506
	ldr r2, [pc, #124]	@ 00057506 1f4a
.org 0x57508
	adds r1, r1, r2	@ 00057508 8918
.org 0x5750a
	bl 0x5784	@ 0005750a aef73bf9
.org 0x5750e
	ldr r0, [r4, #92]	@ 0005750e e06d
.org 0x57510
	ldr r1, [r4, #100]	@ 00057510 616e
.org 0x57512
	adds r0, r0, r1	@ 00057512 4018
.org 0x57514
	str r0, [r4, #92]	@ 00057514 e065
.org 0x57516
	cmp r0, #0	@ 00057516 0028
.org 0x57518
	bge.n 0x5751e	@ 00057518 01da
.org 0x5751a
	movs r0, #0	@ 0005751a 0020
.org 0x5751c
	str r0, [r4, #92]	@ 0005751c e065
.org 0x5751e
	ldr r3, [r4, #84]	@ 0005751e 636d
.org 0x57520
	ldrb r0, [r4, #18]	@ 00057520 a07c
.org 0x57522
	lsls r0, r0, #1	@ 00057522 4000
.org 0x57524
	movs r1, #1	@ 00057524 0121
.org 0x57526
	subs r1, r1, r0	@ 00057526 091a
.org 0x57528
	ldr r0, [r4, #92]	@ 00057528 e06d
.org 0x5752a
	muls r0, r1	@ 0005752a 4843
.org 0x5752c
	adds r3, r3, r0	@ 0005752c 1b18
.org 0x5752e
	str r3, [r4, #84]	@ 0005752e 6365
.org 0x57530
	adds r1, r4, #0	@ 00057530 211c
.org 0x57532
	adds r1, #188	@ 00057532 bc31
.org 0x57534
	ldr r2, [r1, #0]	@ 00057534 0a68
.org 0x57536
	ldr r0, [r4, #96]	@ 00057536 206e
.org 0x57538
	adds r2, r2, r0	@ 00057538 1218
.org 0x5753a
	adds r3, r4, #0	@ 0005753a 231c
.org 0x5753c
	adds r3, #200	@ 0005753c c833
.org 0x5753e
	ldr r0, [r3, #0]	@ 0005753e 1868
.org 0x57540
	cmp r2, r0	@ 00057540 8242
.org 0x57542
	bge.n 0x57546	@ 00057542 00da
.org 0x57544
	adds r2, r0, #0	@ 00057544 021c
.org 0x57546
	str r2, [r1, #0]	@ 00057546 0a60
.org 0x57548
	ldr r0, [pc, #60]	@ 00057548 0f48
.org 0x5754a
	adds r1, r4, #0	@ 0005754a 211c
.org 0x5754c
	adds r1, #181	@ 0005754c b531
.org 0x5754e
	ldrb r1, [r1, #0]	@ 0005754e 0978
.org 0x57550
	lsls r1, r1, #1	@ 00057550 4900
.org 0x57552
	adds r1, r1, r0	@ 00057552 0918

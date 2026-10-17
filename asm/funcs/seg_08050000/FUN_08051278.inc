@ FUN_08051278  entry 0x08051278  size 882
.thumb
.org 0x51278
FUN_08051278:
	push {r4, r5, r6, r7, lr}	@ 00051278 f0b5
.org 0x5127a
	mov r7, sl	@ 0005127a 5746
.org 0x5127c
	mov r6, r9	@ 0005127c 4e46
.org 0x5127e
	mov r5, r8	@ 0005127e 4546
.org 0x51280
	push {r5, r6, r7}	@ 00051280 e0b4
.org 0x51282
	sub sp, #8	@ 00051282 82b0
.org 0x51284
	adds r7, r0, #0	@ 00051284 071c
.org 0x51286
	ldrb r0, [r7, #14]	@ 00051286 b87b
.org 0x51288
	cmp r0, #0	@ 00051288 0028
.org 0x5128a
	bne.n 0x51374	@ 0005128a 73d1
.org 0x5128c
	ldr r2, [pc, #96]	@ 0005128c 184a
.org 0x5128e
	ldr r1, [r2, #0]	@ 0005128e 1168
.org 0x51290
	ldr r0, [pc, #96]	@ 00051290 1848
.org 0x51292
	muls r0, r1	@ 00051292 4843
.org 0x51294
	ldr r1, [pc, #96]	@ 00051294 1849
.org 0x51296
	adds r0, r0, r1	@ 00051296 4018
.org 0x51298
	lsls r0, r0, #1	@ 00051298 4000
.org 0x5129a
	lsrs r1, r0, #1	@ 0005129a 4108
.org 0x5129c
	str r1, [r2, #0]	@ 0005129c 1160
.org 0x5129e
	lsrs r5, r0, #17	@ 0005129e 450c
.org 0x512a0
	movs r0, #31	@ 000512a0 1f20
.org 0x512a2
	ands r5, r0	@ 000512a2 0540
.org 0x512a4
	adds r0, r7, #0	@ 000512a4 381c
.org 0x512a6
	adds r0, #116	@ 000512a6 7430
.org 0x512a8
	ldr r1, [pc, #80]	@ 000512a8 1449
.org 0x512aa
	bl 0x5784	@ 000512aa b4f76bfa
.org 0x512ae
	movs r3, #0	@ 000512ae 0023
.org 0x512b0
	ldr r0, [pc, #76]	@ 000512b0 1348
.org 0x512b2
	ldr r2, [r0, #0]	@ 000512b2 0268
.org 0x512b4
	ldr r1, [r7, #84]	@ 000512b4 796d
.org 0x512b6
	ldr r0, [r2, #84]	@ 000512b6 506d
.org 0x512b8
	cmp r1, r0	@ 000512b8 8142
.org 0x512ba
	bge.n 0x512be	@ 000512ba 00da
.org 0x512bc
	movs r3, #1	@ 000512bc 0123
.org 0x512be
	adds r0, r7, #0	@ 000512be 381c
.org 0x512c0
	adds r0, #76	@ 000512c0 4c30
.org 0x512c2
	strb r3, [r0, #0]	@ 000512c2 0370
.org 0x512c4
	movs r3, #0	@ 000512c4 0023
.org 0x512c6
	ldr r1, [r7, #84]	@ 000512c6 796d
.org 0x512c8
	ldr r0, [r2, #84]	@ 000512c8 506d
.org 0x512ca
	cmp r1, r0	@ 000512ca 8142
.org 0x512cc
	bge.n 0x512d0	@ 000512cc 00da
.org 0x512ce
	movs r3, #1	@ 000512ce 0123
.org 0x512d0
	adds r4, r7, #0	@ 000512d0 3c1c
.org 0x512d2
	adds r4, #74	@ 000512d2 4a34
.org 0x512d4
	lsls r2, r3, #4	@ 000512d4 1a01
.org 0x512d6
	ldrb r1, [r4, #0]	@ 000512d6 2178
.org 0x512d8
	movs r0, #17	@ 000512d8 1120
.org 0x512da
	negs r0, r0	@ 000512da 4042
.org 0x512dc
	ands r0, r1	@ 000512dc 0840
.org 0x512de
	orrs r0, r2	@ 000512de 1043
.org 0x512e0
	strb r0, [r4, #0]	@ 000512e0 2070
.org 0x512e2
	cmp r3, #0	@ 000512e2 002b
.org 0x512e4
	beq.n 0x51304	@ 000512e4 0ed0
.org 0x512e6
	ldrb r0, [r7, #10]	@ 000512e6 b87a
.org 0x512e8
	movs r1, #16	@ 000512e8 1021
.org 0x512ea
	orrs r0, r1	@ 000512ea 0843
.org 0x512ec
	b.n 0x5130a	@ 000512ec 0de0
.org 0x512ee
	.byte 0x00	@ 000512ee data
.org 0x512ef
	.byte 0x00	@ 000512ef data
.org 0x512f0
	.byte 0x38,0xdc,0x02,0x02	@ 000512f0 data
.org 0x512f4
	.byte 0xfd,0x43,0x03,0x00	@ 000512f4 data
.org 0x512f8
	.byte 0xc3,0x9e,0x26,0x00	@ 000512f8 data
.org 0x512fc
	.byte 0x84,0x7e,0x85,0x08	@ 000512fc data
.org 0x51300
	.byte 0xf0,0xdb,0x02,0x02	@ 00051300 data
.org 0x51304
	ldrb r1, [r7, #10]	@ 00051304 b97a
.org 0x51306
	movs r0, #239	@ 00051306 ef20
.org 0x51308
	ands r0, r1	@ 00051308 0840
.org 0x5130a
	strb r0, [r7, #10]	@ 0005130a b872
.org 0x5130c
	movs r0, #128	@ 0005130c 8020
.org 0x5130e
	lsls r0, r0, #1	@ 0005130e 4000
.org 0x51310
	str r0, [r7, #92]	@ 00051310 f865
.org 0x51312
	movs r0, #24	@ 00051312 1820
.org 0x51314
	str r0, [r7, #100]	@ 00051314 7866
.org 0x51316
	cmp r5, #11	@ 00051316 0b2d
.org 0x51318
	bhi.n 0x51324	@ 00051318 04d8
.org 0x5131a
	adds r1, r7, #0	@ 0005131a 391c
.org 0x5131c
	adds r1, #180	@ 0005131c b431
.org 0x5131e
	movs r0, #160	@ 0005131e a020
.org 0x51320
	lsls r0, r0, #8	@ 00051320 0002
.org 0x51322
	b.n 0x5133a	@ 00051322 0ae0
.org 0x51324
	cmp r5, #23	@ 00051324 172d
.org 0x51326
	bhi.n 0x51332	@ 00051326 04d8
.org 0x51328
	adds r1, r7, #0	@ 00051328 391c
.org 0x5132a
	adds r1, #180	@ 0005132a b431
.org 0x5132c
	movs r0, #240	@ 0005132c f020
.org 0x5132e
	lsls r0, r0, #8	@ 0005132e 0002
.org 0x51330
	b.n 0x5133a	@ 00051330 03e0
.org 0x51332
	adds r1, r7, #0	@ 00051332 391c
.org 0x51334
	adds r1, #180	@ 00051334 b431
.org 0x51336
	movs r0, #160	@ 00051336 a020
.org 0x51338
	lsls r0, r0, #9	@ 00051338 4002
.org 0x5133a
	str r0, [r1, #12]	@ 0005133a c860
.org 0x5133c
	adds r0, r7, #0	@ 0005133c 381c
.org 0x5133e
	adds r0, #164	@ 0005133e a430
.org 0x51340
	movs r2, #0	@ 00051340 0022
.org 0x51342
	ldrsh r0, [r0, r2]	@ 00051342 805e
.org 0x51344
	cmp r0, #32	@ 00051344 2028
.org 0x51346
	ble.n 0x5134e	@ 00051346 02dd
.org 0x51348
	movs r0, #160	@ 00051348 a020
.org 0x5134a
	lsls r0, r0, #2	@ 0005134a 8000
.org 0x5134c
	b.n 0x5135c	@ 0005134c 06e0
.org 0x5134e
	cmp r0, #16	@ 0005134e 1028
.org 0x51350
	ble.n 0x51358	@ 00051350 02dd
.org 0x51352
	movs r0, #192	@ 00051352 c020
.org 0x51354
	lsls r0, r0, #2	@ 00051354 8000
.org 0x51356
	b.n 0x5135c	@ 00051356 01e0
.org 0x51358
	movs r0, #224	@ 00051358 e020
.org 0x5135a
	lsls r0, r0, #2	@ 0005135a 8000
.org 0x5135c
	str r0, [r7, #96]	@ 0005135c 3866
.org 0x5135e
	adds r0, r7, #0	@ 0005135e 381c
.org 0x51360
	movs r1, #0	@ 00051360 0021
.org 0x51362
	movs r2, #0	@ 00051362 0022
.org 0x51364
	bl 0xdcd18	@ 00051364 8bf0d8fc
.org 0x51368
	movs r0, #0	@ 00051368 0020
.org 0x5136a
	strb r0, [r7, #18]	@ 0005136a b874
.org 0x5136c
	strb r0, [r7, #15]	@ 0005136c f873
.org 0x5136e
	ldrb r0, [r7, #14]	@ 0005136e b87b
.org 0x51370
	adds r0, #1	@ 00051370 0130
.org 0x51372
	strb r0, [r7, #14]	@ 00051372 b873
.org 0x51374
	adds r0, r7, #0	@ 00051374 381c
.org 0x51376
	bl 0x1cff0	@ 00051376 cbf73bfe
.org 0x5137a
	ldrb r0, [r7, #18]	@ 0005137a b87c
.org 0x5137c
	adds r1, r0, #1	@ 0005137c 411c
.org 0x5137e
	strb r1, [r7, #18]	@ 0005137e b974
.org 0x51380
	movs r5, #1	@ 00051380 0125
.org 0x51382
	movs r0, #1	@ 00051382 0120
.org 0x51384
	ands r0, r1	@ 00051384 0840
.org 0x51386
	cmp r0, #0	@ 00051386 0028
.org 0x51388
	beq.n 0x513ec	@ 00051388 30d0
.org 0x5138a
	movs r0, #3	@ 0005138a 0320
.org 0x5138c
	ands r1, r0	@ 0005138c 0140
.org 0x5138e
	cmp r1, #1	@ 0005138e 0129
.org 0x51390
	bne.n 0x513c8	@ 00051390 1ad1
.org 0x51392
	adds r0, r7, #0	@ 00051392 381c
.org 0x51394
	adds r0, #84	@ 00051394 5430
.org 0x51396
	ldr r1, [pc, #32]	@ 00051396 0849
.org 0x51398
	ldr r4, [pc, #32]	@ 00051398 084c
.org 0x5139a
	ldr r3, [r4, #0]	@ 0005139a 2368
.org 0x5139c
	ldr r2, [pc, #32]	@ 0005139c 084a
.org 0x5139e
	muls r3, r2	@ 0005139e 5343
.org 0x513a0
	ldr r2, [pc, #32]	@ 000513a0 084a
.org 0x513a2
	adds r3, r3, r2	@ 000513a2 9b18
.org 0x513a4
	lsls r3, r3, #1	@ 000513a4 5b00
.org 0x513a6
	lsrs r2, r3, #1	@ 000513a6 5a08
.org 0x513a8
	str r2, [r4, #0]	@ 000513a8 2260
.org 0x513aa
	lsrs r3, r3, #17	@ 000513aa 5b0c
.org 0x513ac
	ands r3, r5	@ 000513ac 2b40
.org 0x513ae
	lsls r3, r3, #4	@ 000513ae 1b01
.org 0x513b0
	movs r2, #0	@ 000513b0 0022
.org 0x513b2
	bl 0xd4c8c	@ 000513b2 83f06bfc
.org 0x513b6
	b.n 0x513ec	@ 000513b6 19e0
.org 0x513b8
	.byte 0xf4,0x80,0x85,0x08	@ 000513b8 data
.org 0x513bc
	.byte 0x38,0xdc,0x02,0x02	@ 000513bc data
.org 0x513c0
	.byte 0xfd,0x43,0x03,0x00	@ 000513c0 data
.org 0x513c4
	.byte 0xc3,0x9e,0x26,0x00	@ 000513c4 data
.org 0x513c8
	adds r0, r7, #0	@ 000513c8 381c
.org 0x513ca
	adds r0, #84	@ 000513ca 5430
.org 0x513cc
	ldr r1, [pc, #280]	@ 000513cc 4649
.org 0x513ce
	ldr r4, [pc, #284]	@ 000513ce 474c
.org 0x513d0
	ldr r3, [r4, #0]	@ 000513d0 2368
.org 0x513d2
	ldr r2, [pc, #284]	@ 000513d2 474a
.org 0x513d4
	muls r3, r2	@ 000513d4 5343
.org 0x513d6
	ldr r2, [pc, #284]	@ 000513d6 474a
.org 0x513d8
	adds r3, r3, r2	@ 000513d8 9b18
.org 0x513da
	lsls r3, r3, #1	@ 000513da 5b00
.org 0x513dc
	lsrs r2, r3, #1	@ 000513dc 5a08
.org 0x513de
	str r2, [r4, #0]	@ 000513de 2260
.org 0x513e0
	lsrs r3, r3, #17	@ 000513e0 5b0c
.org 0x513e2
	ands r3, r5	@ 000513e2 2b40
.org 0x513e4
	lsls r3, r3, #4	@ 000513e4 1b01
.org 0x513e6
	movs r2, #0	@ 000513e6 0022
.org 0x513e8
	bl 0xd4c8c	@ 000513e8 83f050fc
.org 0x513ec
	ldrb r1, [r7, #10]	@ 000513ec b97a
.org 0x513ee
	movs r0, #16	@ 000513ee 1020
.org 0x513f0
	mov sl, r0	@ 000513f0 8246
.org 0x513f2
	movs r0, #16	@ 000513f2 1020
.org 0x513f4
	ands r0, r1	@ 000513f4 0840
.org 0x513f6
	cmp r0, #0	@ 000513f6 0028
.org 0x513f8
	bne.n 0x513fc	@ 000513f8 00d1
.org 0x513fa
	b.n 0x51504	@ 000513fa 83e0
.org 0x513fc
	ldr r0, [r7, #84]	@ 000513fc 786d
.org 0x513fe
	ldr r1, [r7, #92]	@ 000513fe f96d
.org 0x51400
	adds r0, r0, r1	@ 00051400 4018
.org 0x51402
	str r0, [r7, #84]	@ 00051402 7865
.org 0x51404
	movs r1, #140	@ 00051404 8c21
.org 0x51406
	lsls r1, r1, #6	@ 00051406 8901
.org 0x51408
	adds r0, r0, r1	@ 00051408 4018
.org 0x5140a
	ldr r1, [r7, #88]	@ 0005140a b96d
.org 0x5140c
	ldr r2, [pc, #232]	@ 0005140c 3a4a
.org 0x5140e
	adds r1, r1, r2	@ 0005140e 8918
.org 0x51410
	bl 0x7c7c	@ 00051410 b6f734fc
.org 0x51414
	lsls r0, r0, #16	@ 00051414 0004
.org 0x51416
	cmp r0, #0	@ 00051416 0028
.org 0x51418
	bne.n 0x5141c	@ 00051418 00d1
.org 0x5141a
	b.n 0x515dc	@ 0005141a dfe0
.org 0x5141c
	ldr r1, [r7, #92]	@ 0005141c f96d
.org 0x5141e
	ldr r0, [pc, #220]	@ 0005141e 3748
.org 0x51420
	adds r1, r1, r0	@ 00051420 0918
.org 0x51422
	ldr r0, [r7, #84]	@ 00051422 786d
.org 0x51424
	subs r0, r0, r1	@ 00051424 401a
.org 0x51426
	str r0, [sp, #0]	@ 00051426 0090
.org 0x51428
	ldr r0, [r7, #88]	@ 00051428 b86d
.org 0x5142a
	ldr r1, [pc, #204]	@ 0005142a 3349
.org 0x5142c
	adds r0, r0, r1	@ 0005142c 4018
.org 0x5142e
	str r0, [sp, #4]	@ 0005142e 0190
.org 0x51430
	ldr r6, [pc, #204]	@ 00051430 334e
.org 0x51432
	ldr r5, [pc, #184]	@ 00051432 2e4d
.org 0x51434
	ldr r0, [r5, #0]	@ 00051434 2868
.org 0x51436
	ldr r2, [pc, #184]	@ 00051436 2e4a
.org 0x51438
	mov r9, r2	@ 00051438 9146
.org 0x5143a
	mov r3, r9	@ 0005143a 4b46
.org 0x5143c
	muls r3, r0	@ 0005143c 4343
.org 0x5143e
	ldr r0, [pc, #180]	@ 0005143e 2d48
.org 0x51440
	mov r8, r0	@ 00051440 8046
.org 0x51442
	add r3, r8	@ 00051442 4344
.org 0x51444
	lsls r3, r3, #1	@ 00051444 5b00
.org 0x51446
	lsrs r0, r3, #1	@ 00051446 5808
.org 0x51448
	str r0, [r5, #0]	@ 00051448 2860
.org 0x5144a
	lsrs r3, r3, #17	@ 0005144a 5b0c
.org 0x5144c
	movs r4, #1	@ 0005144c 0124
.org 0x5144e
	ands r3, r4	@ 0005144e 2340
.org 0x51450
	lsls r3, r3, #4	@ 00051450 1b01
.org 0x51452
	orrs r3, r4	@ 00051452 2343
.org 0x51454
	mov r0, sp	@ 00051454 6846
.org 0x51456
	adds r1, r6, #0	@ 00051456 311c
.org 0x51458
	movs r2, #0	@ 00051458 0022
.org 0x5145a
	bl 0xd4c8c	@ 0005145a 83f017fc
.org 0x5145e
	ldr r0, [r5, #0]	@ 0005145e 2868
.org 0x51460
	mov r3, r9	@ 00051460 4b46
.org 0x51462
	muls r3, r0	@ 00051462 4343
.org 0x51464
	add r3, r8	@ 00051464 4344
.org 0x51466
	lsls r3, r3, #1	@ 00051466 5b00
.org 0x51468
	lsrs r0, r3, #1	@ 00051468 5808
.org 0x5146a
	str r0, [r5, #0]	@ 0005146a 2860
.org 0x5146c
	lsrs r3, r3, #17	@ 0005146c 5b0c
.org 0x5146e
	ands r3, r4	@ 0005146e 2340
.org 0x51470
	lsls r3, r3, #4	@ 00051470 1b01
.org 0x51472
	orrs r3, r4	@ 00051472 2343
.org 0x51474
	mov r0, sp	@ 00051474 6846
.org 0x51476
	adds r1, r6, #0	@ 00051476 311c
.org 0x51478
	movs r2, #0	@ 00051478 0022
.org 0x5147a
	bl 0xd4c8c	@ 0005147a 83f007fc
.org 0x5147e
	adds r6, #28	@ 0005147e 1c36
.org 0x51480
	ldr r0, [r5, #0]	@ 00051480 2868
.org 0x51482
	mov r3, r9	@ 00051482 4b46
.org 0x51484
	muls r3, r0	@ 00051484 4343
.org 0x51486
	add r3, r8	@ 00051486 4344
.org 0x51488
	lsls r3, r3, #1	@ 00051488 5b00
.org 0x5148a
	lsrs r0, r3, #1	@ 0005148a 5808
.org 0x5148c
	str r0, [r5, #0]	@ 0005148c 2860
.org 0x5148e
	lsrs r3, r3, #17	@ 0005148e 5b0c
.org 0x51490
	ands r3, r4	@ 00051490 2340
.org 0x51492
	lsls r3, r3, #4	@ 00051492 1b01
.org 0x51494
	orrs r3, r4	@ 00051494 2343
.org 0x51496
	mov r0, sp	@ 00051496 6846
.org 0x51498
	adds r1, r6, #0	@ 00051498 311c
.org 0x5149a
	movs r2, #0	@ 0005149a 0022
.org 0x5149c
	bl 0xd4c8c	@ 0005149c 83f0f6fb
.org 0x514a0
	ldr r0, [r5, #0]	@ 000514a0 2868
.org 0x514a2
	mov r3, r9	@ 000514a2 4b46
.org 0x514a4
	muls r3, r0	@ 000514a4 4343
.org 0x514a6
	add r3, r8	@ 000514a6 4344
.org 0x514a8
	lsls r3, r3, #1	@ 000514a8 5b00
.org 0x514aa
	lsrs r0, r3, #1	@ 000514aa 5808
.org 0x514ac
	str r0, [r5, #0]	@ 000514ac 2860
.org 0x514ae
	lsrs r3, r3, #17	@ 000514ae 5b0c
.org 0x514b0
	ands r3, r4	@ 000514b0 2340
.org 0x514b2
	lsls r3, r3, #4	@ 000514b2 1b01
.org 0x514b4
	orrs r3, r4	@ 000514b4 2343
.org 0x514b6
	mov r0, sp	@ 000514b6 6846
.org 0x514b8
	adds r1, r6, #0	@ 000514b8 311c
.org 0x514ba
	movs r2, #0	@ 000514ba 0022
.org 0x514bc
	bl 0xd4c8c	@ 000514bc 83f0e6fb
.org 0x514c0
	adds r1, r7, #0	@ 000514c0 391c
.org 0x514c2
	adds r1, #76	@ 000514c2 4c31
.org 0x514c4
	movs r0, #0	@ 000514c4 0020
.org 0x514c6
	strb r0, [r1, #0]	@ 000514c6 0870
.org 0x514c8
	adds r2, r7, #0	@ 000514c8 3a1c
.org 0x514ca
	adds r2, #74	@ 000514ca 4a32
.org 0x514cc
	ldrb r1, [r2, #0]	@ 000514cc 1178
.org 0x514ce
	subs r0, #17	@ 000514ce 1138
.org 0x514d0
	ands r0, r1	@ 000514d0 0840
.org 0x514d2
	strb r0, [r2, #0]	@ 000514d2 1070
.org 0x514d4
	ldrb r1, [r7, #10]	@ 000514d4 b97a
.org 0x514d6
	movs r0, #239	@ 000514d6 ef20
.org 0x514d8
	ands r0, r1	@ 000514d8 0840
.org 0x514da
	strb r0, [r7, #10]	@ 000514da b872
.org 0x514dc
	adds r1, r7, #0	@ 000514dc 391c
.org 0x514de
	adds r1, #84	@ 000514de 5431
.org 0x514e0
	movs r0, #2	@ 000514e0 0220
.org 0x514e2
	bl 0x1fe64	@ 000514e2 cef7bffc
.org 0x514e6
	b.n 0x515dc	@ 000514e6 79e0
.org 0x514e8
	.byte 0x10,0x81,0x85,0x08	@ 000514e8 data
.org 0x514ec
	.byte 0x38,0xdc,0x02,0x02	@ 000514ec data
.org 0x514f0
	.byte 0xfd,0x43,0x03,0x00	@ 000514f0 data
.org 0x514f4
	.byte 0xc3,0x9e,0x26,0x00	@ 000514f4 data
.org 0x514f8
	.byte 0x00,0xe5,0xff,0xff	@ 000514f8 data
.org 0x514fc
	.byte 0x00,0xdd,0xff,0xff	@ 000514fc data
.org 0x51500
	.byte 0x2c,0x81,0x85,0x08	@ 00051500 data
.org 0x51504
	ldr r0, [r7, #84]	@ 00051504 786d
.org 0x51506
	ldr r1, [r7, #92]	@ 00051506 f96d
.org 0x51508
	subs r0, r0, r1	@ 00051508 401a
.org 0x5150a
	str r0, [r7, #84]	@ 0005150a 7865
.org 0x5150c
	ldr r1, [pc, #252]	@ 0005150c 3f49
.org 0x5150e
	adds r0, r0, r1	@ 0005150e 4018
.org 0x51510
	ldr r1, [r7, #88]	@ 00051510 b96d
.org 0x51512
	ldr r2, [pc, #252]	@ 00051512 3f4a
.org 0x51514
	adds r1, r1, r2	@ 00051514 8918
.org 0x51516
	bl 0x7c7c	@ 00051516 b6f7b1fb
.org 0x5151a
	lsls r0, r0, #16	@ 0005151a 0004
.org 0x5151c
	cmp r0, #0	@ 0005151c 0028
.org 0x5151e
	beq.n 0x515dc	@ 0005151e 5dd0
.org 0x51520
	ldr r1, [r7, #92]	@ 00051520 f96d
.org 0x51522
	ldr r0, [pc, #232]	@ 00051522 3a48
.org 0x51524
	adds r1, r1, r0	@ 00051524 0918
.org 0x51526
	ldr r0, [r7, #84]	@ 00051526 786d
.org 0x51528
	adds r0, r0, r1	@ 00051528 4018
.org 0x5152a
	str r0, [sp, #0]	@ 0005152a 0090
.org 0x5152c
	ldr r0, [r7, #88]	@ 0005152c b86d
.org 0x5152e
	ldr r1, [pc, #224]	@ 0005152e 3849
.org 0x51530
	adds r0, r0, r1	@ 00051530 4018
.org 0x51532
	str r0, [sp, #4]	@ 00051532 0190
.org 0x51534
	ldr r5, [pc, #220]	@ 00051534 374d
.org 0x51536
	ldr r4, [pc, #224]	@ 00051536 384c
.org 0x51538
	ldr r0, [r4, #0]	@ 00051538 2068
.org 0x5153a
	ldr r2, [pc, #224]	@ 0005153a 384a
.org 0x5153c
	mov r9, r2	@ 0005153c 9146
.org 0x5153e
	mov r3, r9	@ 0005153e 4b46
.org 0x51540
	muls r3, r0	@ 00051540 4343
.org 0x51542
	ldr r0, [pc, #220]	@ 00051542 3748
.org 0x51544
	mov r8, r0	@ 00051544 8046
.org 0x51546
	add r3, r8	@ 00051546 4344
.org 0x51548
	lsls r3, r3, #1	@ 00051548 5b00
.org 0x5154a
	lsrs r0, r3, #1	@ 0005154a 5808
.org 0x5154c
	str r0, [r4, #0]	@ 0005154c 2060
.org 0x5154e
	lsrs r3, r3, #17	@ 0005154e 5b0c
.org 0x51550
	movs r6, #1	@ 00051550 0126
.org 0x51552
	ands r3, r6	@ 00051552 3340
.org 0x51554
	lsls r3, r3, #4	@ 00051554 1b01
.org 0x51556
	mov r0, sp	@ 00051556 6846
.org 0x51558
	adds r1, r5, #0	@ 00051558 291c
.org 0x5155a
	movs r2, #0	@ 0005155a 0022
.org 0x5155c
	bl 0xd4c8c	@ 0005155c 83f096fb
.org 0x51560
	ldr r0, [r4, #0]	@ 00051560 2068
.org 0x51562
	mov r3, r9	@ 00051562 4b46
.org 0x51564
	muls r3, r0	@ 00051564 4343
.org 0x51566
	add r3, r8	@ 00051566 4344
.org 0x51568
	lsls r3, r3, #1	@ 00051568 5b00
.org 0x5156a
	lsrs r0, r3, #1	@ 0005156a 5808
.org 0x5156c
	str r0, [r4, #0]	@ 0005156c 2060
.org 0x5156e
	lsrs r3, r3, #17	@ 0005156e 5b0c
.org 0x51570
	ands r3, r6	@ 00051570 3340
.org 0x51572
	lsls r3, r3, #4	@ 00051572 1b01
.org 0x51574
	mov r0, sp	@ 00051574 6846
.org 0x51576
	adds r1, r5, #0	@ 00051576 291c
.org 0x51578
	movs r2, #0	@ 00051578 0022
.org 0x5157a
	bl 0xd4c8c	@ 0005157a 83f087fb
.org 0x5157e
	adds r5, #28	@ 0005157e 1c35
.org 0x51580
	ldr r0, [r4, #0]	@ 00051580 2068
.org 0x51582
	mov r3, r9	@ 00051582 4b46
.org 0x51584
	muls r3, r0	@ 00051584 4343
.org 0x51586
	add r3, r8	@ 00051586 4344
.org 0x51588
	lsls r3, r3, #1	@ 00051588 5b00
.org 0x5158a
	lsrs r0, r3, #1	@ 0005158a 5808
.org 0x5158c
	str r0, [r4, #0]	@ 0005158c 2060
.org 0x5158e
	lsrs r3, r3, #17	@ 0005158e 5b0c
.org 0x51590
	ands r3, r6	@ 00051590 3340
.org 0x51592
	lsls r3, r3, #4	@ 00051592 1b01
.org 0x51594
	mov r0, sp	@ 00051594 6846
.org 0x51596
	adds r1, r5, #0	@ 00051596 291c
.org 0x51598
	movs r2, #0	@ 00051598 0022
.org 0x5159a
	bl 0xd4c8c	@ 0005159a 83f077fb
.org 0x5159e
	ldr r0, [r4, #0]	@ 0005159e 2068
.org 0x515a0
	mov r3, r9	@ 000515a0 4b46
.org 0x515a2
	muls r3, r0	@ 000515a2 4343
.org 0x515a4
	add r3, r8	@ 000515a4 4344
.org 0x515a6
	lsls r3, r3, #1	@ 000515a6 5b00
.org 0x515a8
	lsrs r0, r3, #1	@ 000515a8 5808
.org 0x515aa
	str r0, [r4, #0]	@ 000515aa 2060
.org 0x515ac
	lsrs r3, r3, #17	@ 000515ac 5b0c
.org 0x515ae
	ands r3, r6	@ 000515ae 3340
.org 0x515b0
	lsls r3, r3, #4	@ 000515b0 1b01
.org 0x515b2
	mov r0, sp	@ 000515b2 6846
.org 0x515b4
	adds r1, r5, #0	@ 000515b4 291c
.org 0x515b6
	movs r2, #0	@ 000515b6 0022
.org 0x515b8
	bl 0xd4c8c	@ 000515b8 83f068fb
.org 0x515bc
	adds r1, r7, #0	@ 000515bc 391c
.org 0x515be
	adds r1, #76	@ 000515be 4c31
.org 0x515c0
	movs r0, #1	@ 000515c0 0120
.org 0x515c2
	strb r0, [r1, #0]	@ 000515c2 0870
.org 0x515c4
	subs r1, #2	@ 000515c4 0239
.org 0x515c6
	ldrb r0, [r1, #0]	@ 000515c6 0878
.org 0x515c8
	mov r2, sl	@ 000515c8 5246
.org 0x515ca
	orrs r0, r2	@ 000515ca 1043
.org 0x515cc
	strb r0, [r1, #0]	@ 000515cc 0870
.org 0x515ce
	ldrb r0, [r7, #10]	@ 000515ce b87a
.org 0x515d0
	orrs r0, r2	@ 000515d0 1043
.org 0x515d2
	strb r0, [r7, #10]	@ 000515d2 b872
.org 0x515d4
	adds r1, #10	@ 000515d4 0a31
.org 0x515d6
	movs r0, #2	@ 000515d6 0220
.org 0x515d8
	bl 0x1fe64	@ 000515d8 cef744fc
.org 0x515dc
	adds r2, r7, #0	@ 000515dc 3a1c
.org 0x515de
	adds r2, #180	@ 000515de b432
.org 0x515e0
	ldr r0, [r2, #12]	@ 000515e0 d068
.org 0x515e2
	ldr r1, [r7, #92]	@ 000515e2 f96d
.org 0x515e4
	subs r0, r0, r1	@ 000515e4 401a
.org 0x515e6
	str r0, [r2, #12]	@ 000515e6 d060
.org 0x515e8
	ldrb r0, [r7, #15]	@ 000515e8 f87b

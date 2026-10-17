@ FUN_080a23f8  entry 0x080a23f8  size 110
.thumb
.org 0xa23f8
FUN_080a23f8:
	push {r4, r5, r6, r7, lr}	@ 000a23f8 f0b5
.org 0xa23fa
	adds r6, r0, #0	@ 000a23fa 061c
.org 0xa23fc
	adds r7, r1, #0	@ 000a23fc 0f1c
.org 0xa23fe
	lsls r2, r2, #24	@ 000a23fe 1206
.org 0xa2400
	lsrs r4, r2, #24	@ 000a2400 140e
.org 0xa2402
	lsls r3, r3, #24	@ 000a2402 1b06
.org 0xa2404
	lsrs r5, r3, #24	@ 000a2404 1d0e
.org 0xa2406
	ldr r0, [pc, #96]	@ 000a2406 1848
.org 0xa2408
	ldr r0, [r0, #0]	@ 000a2408 0068
.org 0xa240a
	bl 0x5500	@ 000a240a 63f779f8
.org 0xa240e
	adds r3, r0, #0	@ 000a240e 031c
.org 0xa2410
	cmp r3, #0	@ 000a2410 002b
.org 0xa2412
	beq.n 0xa245e	@ 000a2412 24d0
.org 0xa2414
	adds r1, r3, #0	@ 000a2414 191c
.org 0xa2416
	adds r1, #37	@ 000a2416 2531
.org 0xa2418
	movs r2, #0	@ 000a2418 0022
.org 0xa241a
	movs r0, #24	@ 000a241a 1820
.org 0xa241c
	strb r0, [r1, #0]	@ 000a241c 0870
.org 0xa241e
	ldr r0, [pc, #76]	@ 000a241e 1348
.org 0xa2420
	movs r1, #55	@ 000a2420 3721
.org 0xa2422
	strb r1, [r3, #9]	@ 000a2422 5972
.org 0xa2424
	adds r0, #220	@ 000a2424 dc30
.org 0xa2426
	ldr r0, [r0, #0]	@ 000a2426 0068
.org 0xa2428
	ldr r0, [r0, #0]	@ 000a2428 0068
.org 0xa242a
	str r0, [r3, #20]	@ 000a242a 5861
.org 0xa242c
	movs r0, #0	@ 000a242c 0020
.org 0xa242e
	strh r2, [r3, #32]	@ 000a242e 1a84
.org 0xa2430
	adds r1, r3, #0	@ 000a2430 191c
.org 0xa2432
	adds r1, #34	@ 000a2432 2231
.org 0xa2434
	strb r0, [r1, #0]	@ 000a2434 0870
.org 0xa2436
	ldrb r1, [r3, #11]	@ 000a2436 d97a
.org 0xa2438
	movs r0, #16	@ 000a2438 1020
.org 0xa243a
	orrs r0, r1	@ 000a243a 0843
.org 0xa243c
	strb r0, [r3, #11]	@ 000a243c d872
.org 0xa243e
	ldrb r0, [r3, #28]	@ 000a243e 187f
.org 0xa2440
	strb r0, [r3, #29]	@ 000a2440 5877
.org 0xa2442
	str r6, [r3, #40]	@ 000a2442 9e62
.org 0xa2444
	ldr r0, [r7, #0]	@ 000a2444 3868
.org 0xa2446
	ldr r1, [r7, #4]	@ 000a2446 7968
.org 0xa2448
	str r0, [r3, #84]	@ 000a2448 5865
.org 0xa244a
	str r1, [r3, #88]	@ 000a244a 9965
.org 0xa244c
	strb r4, [r3, #16]	@ 000a244c 1c74
.org 0xa244e
	strb r5, [r3, #17]	@ 000a244e 5d74
.org 0xa2450
	cmp r4, #1	@ 000a2450 012c
.org 0xa2452
	bne.n 0xa245e	@ 000a2452 04d1
.org 0xa2454
	ldr r1, [pc, #24]	@ 000a2454 0649
.org 0xa2456
	adds r1, #38	@ 000a2456 2631
.org 0xa2458
	ldrb r0, [r1, #0]	@ 000a2458 0878
.org 0xa245a
	adds r0, #1	@ 000a245a 0130
.org 0xa245c
	strb r0, [r1, #0]	@ 000a245c 0870
.org 0xa245e
	adds r0, r3, #0	@ 000a245e 181c
.org 0xa2460
	pop {r4, r5, r6, r7}	@ 000a2460 f0bc
.org 0xa2462
	pop {r1}	@ 000a2462 02bc
.org 0xa2464
	bx r1	@ 000a2464 0847

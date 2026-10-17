@ FUN_08049300  entry 0x08049300  size 150
.thumb
.org 0x49300
FUN_08049300:
	push {r4, r5, r6, lr}	@ 00049300 70b5
.org 0x49302
	adds r6, r0, #0	@ 00049302 061c
.org 0x49304
	lsls r1, r1, #24	@ 00049304 0906
.org 0x49306
	lsrs r4, r1, #24	@ 00049306 0c0e
.org 0x49308
	lsls r2, r2, #24	@ 00049308 1206
.org 0x4930a
	lsrs r5, r2, #24	@ 0004930a 150e
.org 0x4930c
	ldr r0, [pc, #80]	@ 0004930c 1448
.org 0x4930e
	ldr r0, [r0, #0]	@ 0004930e 0068
.org 0x49310
	bl 0x5500	@ 00049310 bcf7f6f8
.org 0x49314
	adds r3, r0, #0	@ 00049314 031c
.org 0x49316
	cmp r3, #0	@ 00049316 002b
.org 0x49318
	beq.n 0x493a4	@ 00049318 44d0
.org 0x4931a
	ldr r0, [pc, #72]	@ 0004931a 1248
.org 0x4931c
	movs r1, #34	@ 0004931c 2221
.org 0x4931e
	strb r1, [r3, #9]	@ 0004931e 5972
.org 0x49320
	adds r0, #136	@ 00049320 8830
.org 0x49322
	ldr r0, [r0, #0]	@ 00049322 0068
.org 0x49324
	ldr r0, [r0, #0]	@ 00049324 0068
.org 0x49326
	str r0, [r3, #20]	@ 00049326 5861
.org 0x49328
	ldrb r1, [r3, #11]	@ 00049328 d97a
.org 0x4932a
	movs r0, #191	@ 0004932a bf20
.org 0x4932c
	ands r0, r1	@ 0004932c 0840
.org 0x4932e
	strb r0, [r3, #11]	@ 0004932e d872
.org 0x49330
	adds r1, r3, #0	@ 00049330 191c
.org 0x49332
	adds r1, #37	@ 00049332 2531
.org 0x49334
	movs r0, #16	@ 00049334 1020
.org 0x49336
	strb r0, [r1, #0]	@ 00049336 0870
.org 0x49338
	ldr r0, [pc, #44]	@ 00049338 0b48
.org 0x4933a
	ldrh r0, [r0, #0]	@ 0004933a 0088
.org 0x4933c
	strh r0, [r3, #32]	@ 0004933c 1884
.org 0x4933e
	ldr r0, [pc, #44]	@ 0004933e 0b48
.org 0x49340
	ldrb r0, [r0, #0]	@ 00049340 0078
.org 0x49342
	subs r1, #3	@ 00049342 0339
.org 0x49344
	strb r0, [r1, #0]	@ 00049344 0870
.org 0x49346
	movs r0, #1	@ 00049346 0120
.org 0x49348
	strb r0, [r3, #16]	@ 00049348 1874
.org 0x4934a
	strb r4, [r3, #17]	@ 0004934a 5c74
.org 0x4934c
	ldr r0, [pc, #32]	@ 0004934c 0848
.org 0x4934e
	ldr r0, [r0, #0]	@ 0004934e 0068
.org 0x49350
	str r0, [r3, #44]	@ 00049350 d862
.org 0x49352
	adds r2, r5, #0	@ 00049352 2a1c
.org 0x49354
	cmp r2, #0	@ 00049354 002a
.org 0x49356
	beq.n 0x49374	@ 00049356 0dd0
.org 0x49358
	ldrb r0, [r3, #10]	@ 00049358 987a
.org 0x4935a
	movs r1, #16	@ 0004935a 1021
.org 0x4935c
	orrs r0, r1	@ 0004935c 0843
.org 0x4935e
	b.n 0x4937a	@ 0004935e 0ce0
.org 0x49360
	.byte 0x88,0xed,0x02,0x02	@ 00049360 data
.org 0x49364
	.byte 0xf8,0x39,0x85,0x08	@ 00049364 data
.org 0x49368
	.byte 0xfc,0x36,0x85,0x08	@ 00049368 data
.org 0x4936c
	.byte 0x04,0x37,0x85,0x08	@ 0004936c data
.org 0x49370
	.byte 0xf0,0xdb,0x02,0x02	@ 00049370 data
.org 0x49374
	ldrb r1, [r3, #10]	@ 00049374 997a
.org 0x49376
	movs r0, #239	@ 00049376 ef20
.org 0x49378
	ands r0, r1	@ 00049378 0840
.org 0x4937a
	strb r0, [r3, #10]	@ 0004937a 9872
.org 0x4937c
	movs r1, #1	@ 0004937c 0121
.org 0x4937e
	ands r1, r2	@ 0004937e 1140
.org 0x49380
	adds r0, r3, #0	@ 00049380 181c
.org 0x49382
	adds r0, #76	@ 00049382 4c30
.org 0x49384
	strb r1, [r0, #0]	@ 00049384 0170
.org 0x49386
	movs r0, #74	@ 00049386 4a20
.org 0x49388
	adds r0, r0, r3	@ 00049388 c018
.org 0x4938a
	mov ip, r0	@ 0004938a 8446
.org 0x4938c
	lsls r1, r1, #4	@ 0004938c 0901
.org 0x4938e
	ldrb r2, [r0, #0]	@ 0004938e 0278
.org 0x49390
	movs r0, #17	@ 00049390 1120
.org 0x49392
	negs r0, r0	@ 00049392 4042
.org 0x49394
	ands r0, r2	@ 00049394 1040

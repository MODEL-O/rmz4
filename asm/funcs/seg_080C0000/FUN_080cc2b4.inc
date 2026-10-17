@ FUN_080cc2b4  entry 0x080cc2b4  size 194
.thumb
.org 0xcc2b4
FUN_080cc2b4:
	push {r4, r5, r6, lr}	@ 000cc2b4 70b5
.org 0xcc2b6
	mov r6, r8	@ 000cc2b6 4646
.org 0xcc2b8
	push {r6}	@ 000cc2b8 40b4
.org 0xcc2ba
	adds r4, r0, #0	@ 000cc2ba 041c
.org 0xcc2bc
	bl 0x1cc9c	@ 000cc2bc 50f7eefc
.org 0xcc2c0
	ldrb r1, [r4, #10]	@ 000cc2c0 a17a
.org 0xcc2c2
	movs r0, #1	@ 000cc2c2 0120
.org 0xcc2c4
	orrs r0, r1	@ 000cc2c4 0843
.org 0xcc2c6
	movs r1, #2	@ 000cc2c6 0221
.org 0xcc2c8
	orrs r0, r1	@ 000cc2c8 0843
.org 0xcc2ca
	strb r0, [r4, #10]	@ 000cc2ca a072
.org 0xcc2cc
	ldr r1, [pc, #168]	@ 000cc2cc 2a49
.org 0xcc2ce
	adds r0, r4, #0	@ 000cc2ce 201c
.org 0xcc2d0
	bl 0x1cf00	@ 000cc2d0 50f716fe
.org 0xcc2d4
	adds r0, r4, #0	@ 000cc2d4 201c
.org 0xcc2d6
	bl 0x1cff0	@ 000cc2d6 50f78bfe
.org 0xcc2da
	movs r6, #0	@ 000cc2da 0026
.org 0xcc2dc
	ldrb r1, [r4, #10]	@ 000cc2dc a17a
.org 0xcc2de
	movs r0, #239	@ 000cc2de ef20
.org 0xcc2e0
	ands r0, r1	@ 000cc2e0 0840
.org 0xcc2e2
	strb r0, [r4, #10]	@ 000cc2e2 a072
.org 0xcc2e4
	movs r0, #1	@ 000cc2e4 0120
.org 0xcc2e6
	mov r8, r0	@ 000cc2e6 8046
.org 0xcc2e8
	adds r0, r4, #0	@ 000cc2e8 201c
.org 0xcc2ea
	adds r0, #76	@ 000cc2ea 4c30
.org 0xcc2ec
	strb r6, [r0, #0]	@ 000cc2ec 0670
.org 0xcc2ee
	adds r2, r4, #0	@ 000cc2ee 221c
.org 0xcc2f0
	adds r2, #74	@ 000cc2f0 4a32
.org 0xcc2f2
	ldrb r1, [r2, #0]	@ 000cc2f2 1178
.org 0xcc2f4
	movs r0, #17	@ 000cc2f4 1120
.org 0xcc2f6
	negs r0, r0	@ 000cc2f6 4042
.org 0xcc2f8
	ands r0, r1	@ 000cc2f8 0840
.org 0xcc2fa
	strb r0, [r2, #0]	@ 000cc2fa 1070
.org 0xcc2fc
	adds r1, r4, #0	@ 000cc2fc 211c
.org 0xcc2fe
	adds r1, #37	@ 000cc2fe 2531
.org 0xcc300
	movs r0, #25	@ 000cc300 1920
.org 0xcc302
	strb r0, [r1, #0]	@ 000cc302 0870
.org 0xcc304
	ldrb r1, [r4, #10]	@ 000cc304 a17a
.org 0xcc306
	movs r0, #4	@ 000cc306 0420
.org 0xcc308
	orrs r0, r1	@ 000cc308 0843
.org 0xcc30a
	strb r0, [r4, #10]	@ 000cc30a a072
.org 0xcc30c
	adds r5, r4, #0	@ 000cc30c 251c
.org 0xcc30e
	adds r5, #116	@ 000cc30e 7435
.org 0xcc310
	ldr r1, [pc, #104]	@ 000cc310 1a49
.org 0xcc312
	adds r2, #10	@ 000cc312 0a32
.org 0xcc314
	adds r0, r5, #0	@ 000cc314 281c
.org 0xcc316
	movs r3, #8	@ 000cc316 0823
.org 0xcc318
	bl 0x5760	@ 000cc318 39f722fa
.org 0xcc31c
	str r4, [r5, #44]	@ 000cc31c ec62
.org 0xcc31e
	str r6, [r5, #36]	@ 000cc31e 6e62
.org 0xcc320
	ldr r2, [pc, #92]	@ 000cc320 174a
.org 0xcc322
	ldrb r0, [r4, #17]	@ 000cc322 607c
.org 0xcc324
	adds r0, #64	@ 000cc324 4030
.org 0xcc326
	lsls r0, r0, #24	@ 000cc326 0006
.org 0xcc328
	lsrs r0, r0, #23	@ 000cc328 c00d
.org 0xcc32a
	adds r0, r0, r2	@ 000cc32a 8018
.org 0xcc32c
	movs r3, #0	@ 000cc32c 0023
.org 0xcc32e
	ldrsh r1, [r0, r3]	@ 000cc32e c15e
.org 0xcc330
	lsls r0, r1, #3	@ 000cc330 c800
.org 0xcc332
	subs r0, r0, r1	@ 000cc332 401a
.org 0xcc334
	asrs r0, r0, #2	@ 000cc334 8010
.org 0xcc336
	str r0, [r4, #92]	@ 000cc336 e065
.org 0xcc338
	ldrb r0, [r4, #17]	@ 000cc338 607c
.org 0xcc33a
	lsls r0, r0, #1	@ 000cc33a 4000
.org 0xcc33c
	adds r0, r0, r2	@ 000cc33c 8018
.org 0xcc33e
	movs r2, #0	@ 000cc33e 0022
.org 0xcc340
	ldrsh r1, [r0, r2]	@ 000cc340 815e
.org 0xcc342
	lsls r0, r1, #3	@ 000cc342 c800
.org 0xcc344
	subs r0, r0, r1	@ 000cc344 401a
.org 0xcc346
	asrs r0, r0, #2	@ 000cc346 8010
.org 0xcc348
	str r0, [r4, #96]	@ 000cc348 2066
.org 0xcc34a
	movs r0, #4	@ 000cc34a 0420
.org 0xcc34c
	negs r0, r0	@ 000cc34c 4042
.org 0xcc34e
	str r0, [r4, #104]	@ 000cc34e a066
.org 0xcc350
	movs r0, #24	@ 000cc350 1820
.org 0xcc352
	strb r0, [r4, #18]	@ 000cc352 a074
.org 0xcc354
	ldr r1, [pc, #44]	@ 000cc354 0b49
.org 0xcc356
	ldrb r0, [r4, #9]	@ 000cc356 607a
.org 0xcc358
	lsls r0, r0, #2	@ 000cc358 8000
.org 0xcc35a
	adds r0, r0, r1	@ 000cc35a 4018
.org 0xcc35c
	mov r3, r8	@ 000cc35c 4346
.org 0xcc35e
	str r3, [r4, #12]	@ 000cc35e e360
.org 0xcc360
	ldr r0, [r0, #0]	@ 000cc360 0068
.org 0xcc362
	ldr r0, [r0, #4]	@ 000cc362 4068
.org 0xcc364
	str r0, [r4, #20]	@ 000cc364 6061
.org 0xcc366
	adds r0, r4, #0	@ 000cc366 201c
.org 0xcc368
	bl 0xcc0a4	@ 000cc368 fff79cfe
.org 0xcc36c
	pop {r3}	@ 000cc36c 08bc
.org 0xcc36e
	mov r8, r3	@ 000cc36e 9846
.org 0xcc370
	pop {r4, r5, r6}	@ 000cc370 70bc
.org 0xcc372
	pop {r0}	@ 000cc372 01bc
.org 0xcc374
	bx r0	@ 000cc374 0047

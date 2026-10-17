@ FUN_08040264  entry 0x08040264  size 328
.thumb
.org 0x40264
FUN_08040264:
	push {r4, r5, lr}	@ 00040264 30b5
.org 0x40266
	adds r4, r0, #0	@ 00040266 041c
.org 0x40268
	ldr r1, [pc, #64]	@ 00040268 1049
.org 0x4026a
	ldrb r0, [r4, #9]	@ 0004026a 607a
.org 0x4026c
	lsls r0, r0, #2	@ 0004026c 8000
.org 0x4026e
	adds r0, r0, r1	@ 0004026e 4018
.org 0x40270
	movs r1, #1	@ 00040270 0121
.org 0x40272
	str r1, [r4, #12]	@ 00040272 e160
.org 0x40274
	ldr r0, [r0, #0]	@ 00040274 0068
.org 0x40276
	movs r5, #4	@ 00040276 0425
.org 0x40278
	ldr r0, [r0, #4]	@ 00040278 4068
.org 0x4027a
	str r0, [r4, #20]	@ 0004027a 6061
.org 0x4027c
	adds r0, r4, #0	@ 0004027c 201c
.org 0x4027e
	bl 0x1cc9c	@ 0004027e dcf70dfd
.org 0x40282
	adds r0, r4, #0	@ 00040282 201c
.org 0x40284
	bl 0x1ceec	@ 00040284 dcf732fe
.org 0x40288
	ldrb r1, [r4, #10]	@ 00040288 a17a
.org 0x4028a
	movs r0, #1	@ 0004028a 0120
.org 0x4028c
	orrs r0, r1	@ 0004028c 0843
.org 0x4028e
	movs r1, #2	@ 0004028e 0221
.org 0x40290
	orrs r0, r1	@ 00040290 0843
.org 0x40292
	strb r0, [r4, #10]	@ 00040292 a072
.org 0x40294
	adds r0, r4, #0	@ 00040294 201c
.org 0x40296
	bl 0x1ceec	@ 00040296 dcf729fe
.org 0x4029a
	ldrb r2, [r4, #17]	@ 0004029a 627c
.org 0x4029c
	lsrs r0, r2, #4	@ 0004029c 1009
.org 0x4029e
	cmp r0, #1	@ 0004029e 0128
.org 0x402a0
	beq.n 0x40314	@ 000402a0 38d0
.org 0x402a2
	cmp r0, #1	@ 000402a2 0128
.org 0x402a4
	bgt.n 0x402b0	@ 000402a4 04dc
.org 0x402a6
	cmp r0, #0	@ 000402a6 0028
.org 0x402a8
	beq.n 0x402b6	@ 000402a8 05d0
.org 0x402aa
	b.n 0x403b4	@ 000402aa 83e0
.org 0x402ac
	.byte 0xf8,0x39,0x85,0x08	@ 000402ac data
.org 0x402b0
	cmp r0, #2	@ 000402b0 0228
.org 0x402b2
	beq.n 0x40370	@ 000402b2 5dd0
.org 0x402b4
	b.n 0x403b4	@ 000402b4 7ee0
.org 0x402b6
	ldr r1, [pc, #68]	@ 000402b6 1149
.org 0x402b8
	adds r0, r5, #0	@ 000402b8 281c
.org 0x402ba
	ands r0, r2	@ 000402ba 1040
.org 0x402bc
	lsls r0, r0, #24	@ 000402bc 0006
.org 0x402be
	lsrs r0, r0, #24	@ 000402be 000e
.org 0x402c0
	lsls r2, r0, #1	@ 000402c0 4200
.org 0x402c2
	adds r2, r2, r0	@ 000402c2 1218
.org 0x402c4
	adds r2, r2, r1	@ 000402c4 5218
.org 0x402c6
	ldr r0, [pc, #56]	@ 000402c6 0e48
.org 0x402c8
	adds r1, r0, #0	@ 000402c8 011c
.org 0x402ca
	ldrb r2, [r2, #0]	@ 000402ca 1278
.org 0x402cc
	adds r1, r1, r2	@ 000402cc 8918
.org 0x402ce
	lsls r1, r1, #16	@ 000402ce 0904
.org 0x402d0
	lsrs r1, r1, #16	@ 000402d0 090c
.org 0x402d2
	adds r0, r4, #0	@ 000402d2 201c
.org 0x402d4
	bl 0x1cf00	@ 000402d4 dcf714fe
.org 0x402d8
	ldr r2, [pc, #40]	@ 000402d8 0a4a
.org 0x402da
	ldr r1, [r2, #0]	@ 000402da 1168
.org 0x402dc
	ldr r0, [pc, #40]	@ 000402dc 0a48
.org 0x402de
	muls r0, r1	@ 000402de 4843
.org 0x402e0
	ldr r1, [pc, #40]	@ 000402e0 0a49
.org 0x402e2
	adds r0, r0, r1	@ 000402e2 4018
.org 0x402e4
	lsls r0, r0, #1	@ 000402e4 4000
.org 0x402e6
	lsrs r1, r0, #1	@ 000402e6 4108
.org 0x402e8
	str r1, [r2, #0]	@ 000402e8 1160
.org 0x402ea
	lsrs r0, r0, #17	@ 000402ea 400c
.org 0x402ec
	movs r1, #127	@ 000402ec 7f21
.org 0x402ee
	ands r0, r1	@ 000402ee 0840
.org 0x402f0
	movs r1, #192	@ 000402f0 c021
.org 0x402f2
	lsls r1, r1, #1	@ 000402f2 4900
.org 0x402f4
	adds r0, r0, r1	@ 000402f4 4018
.org 0x402f6
	str r0, [r4, #92]	@ 000402f6 e065
.org 0x402f8
	ldr r0, [pc, #20]	@ 000402f8 0548
.org 0x402fa
	b.n 0x403b2	@ 000402fa 5ae0
.org 0x402fc
	.byte 0x20,0x55,0x85,0x08	@ 000402fc data
.org 0x40300
	.byte 0x09,0x81,0x00,0x00	@ 00040300 data
.org 0x40304
	.byte 0x38,0xdc,0x02,0x02	@ 00040304 data
.org 0x40308
	.byte 0xfd,0x43,0x03,0x00	@ 00040308 data
.org 0x4030c
	.byte 0xc3,0x9e,0x26,0x00	@ 0004030c data
.org 0x40310
	.byte 0x80,0xfc,0xff,0xff	@ 00040310 data
.org 0x40314
	ldr r1, [pc, #64]	@ 00040314 1049
.org 0x40316
	adds r0, r5, #0	@ 00040316 281c
.org 0x40318
	ands r0, r2	@ 00040318 1040
.org 0x4031a
	lsls r0, r0, #24	@ 0004031a 0006
.org 0x4031c
	lsrs r0, r0, #24	@ 0004031c 000e
.org 0x4031e
	lsls r2, r0, #1	@ 0004031e 4200
.org 0x40320
	adds r2, r2, r0	@ 00040320 1218
.org 0x40322
	adds r1, #1	@ 00040322 0131
.org 0x40324
	adds r2, r2, r1	@ 00040324 5218
.org 0x40326
	ldr r0, [pc, #52]	@ 00040326 0d48
.org 0x40328
	adds r1, r0, #0	@ 00040328 011c
.org 0x4032a
	ldrb r2, [r2, #0]	@ 0004032a 1278
.org 0x4032c
	adds r1, r1, r2	@ 0004032c 8918
.org 0x4032e
	lsls r1, r1, #16	@ 0004032e 0904
.org 0x40330
	lsrs r1, r1, #16	@ 00040330 090c
.org 0x40332
	adds r0, r4, #0	@ 00040332 201c
.org 0x40334
	bl 0x1cf00	@ 00040334 dcf7e4fd
.org 0x40338
	ldr r2, [pc, #36]	@ 00040338 094a
.org 0x4033a
	ldr r1, [r2, #0]	@ 0004033a 1168
.org 0x4033c
	ldr r0, [pc, #36]	@ 0004033c 0948
.org 0x4033e
	muls r0, r1	@ 0004033e 4843
.org 0x40340
	ldr r1, [pc, #36]	@ 00040340 0949
.org 0x40342
	adds r0, r0, r1	@ 00040342 4018
.org 0x40344
	lsls r0, r0, #1	@ 00040344 4000
.org 0x40346
	lsrs r1, r0, #1	@ 00040346 4108
.org 0x40348
	str r1, [r2, #0]	@ 00040348 1160
.org 0x4034a
	lsrs r0, r0, #17	@ 0004034a 400c
.org 0x4034c
	movs r1, #127	@ 0004034c 7f21
.org 0x4034e
	ands r0, r1	@ 0004034e 0840
.org 0x40350
	negs r0, r0	@ 00040350 4042
.org 0x40352
	str r0, [r4, #92]	@ 00040352 e065
.org 0x40354
	ldr r0, [pc, #20]	@ 00040354 0548
.org 0x40356
	b.n 0x403b2	@ 00040356 2ce0
.org 0x40358
	.byte 0x20,0x55,0x85,0x08	@ 00040358 data
.org 0x4035c
	.byte 0x09,0x81,0x00,0x00	@ 0004035c data
.org 0x40360
	.byte 0x38,0xdc,0x02,0x02	@ 00040360 data
.org 0x40364
	.byte 0xfd,0x43,0x03,0x00	@ 00040364 data
.org 0x40368
	.byte 0xc3,0x9e,0x26,0x00	@ 00040368 data
.org 0x4036c
	.byte 0x80,0xfb,0xff,0xff	@ 0004036c data
.org 0x40370
	ldr r1, [pc, #108]	@ 00040370 1b49
.org 0x40372
	adds r0, r5, #0	@ 00040372 281c
.org 0x40374
	ands r0, r2	@ 00040374 1040
.org 0x40376
	lsls r0, r0, #24	@ 00040376 0006
.org 0x40378
	lsrs r0, r0, #24	@ 00040378 000e
.org 0x4037a
	lsls r2, r0, #1	@ 0004037a 4200
.org 0x4037c
	adds r2, r2, r0	@ 0004037c 1218
.org 0x4037e
	adds r1, #2	@ 0004037e 0231
.org 0x40380
	adds r2, r2, r1	@ 00040380 5218
.org 0x40382
	ldr r0, [pc, #96]	@ 00040382 1848
.org 0x40384
	adds r1, r0, #0	@ 00040384 011c
.org 0x40386
	ldrb r2, [r2, #0]	@ 00040386 1278
.org 0x40388
	adds r1, r1, r2	@ 00040388 8918
.org 0x4038a
	lsls r1, r1, #16	@ 0004038a 0904
.org 0x4038c
	lsrs r1, r1, #16	@ 0004038c 090c
.org 0x4038e
	adds r0, r4, #0	@ 0004038e 201c
.org 0x40390
	bl 0x1cf00	@ 00040390 dcf7b6fd
.org 0x40394
	ldr r2, [pc, #80]	@ 00040394 144a
.org 0x40396
	ldr r1, [r2, #0]	@ 00040396 1168
.org 0x40398
	ldr r0, [pc, #80]	@ 00040398 1448
.org 0x4039a
	muls r0, r1	@ 0004039a 4843
.org 0x4039c
	ldr r1, [pc, #80]	@ 0004039c 1449
.org 0x4039e
	adds r0, r0, r1	@ 0004039e 4018
.org 0x403a0
	lsls r0, r0, #1	@ 000403a0 4000
.org 0x403a2
	lsrs r1, r0, #1	@ 000403a2 4108
.org 0x403a4
	str r1, [r2, #0]	@ 000403a4 1160
.org 0x403a6
	lsrs r0, r0, #17	@ 000403a6 400c
.org 0x403a8
	movs r1, #127	@ 000403a8 7f21
.org 0x403aa
	ands r0, r1	@ 000403aa 0840

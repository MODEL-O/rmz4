@ FUN_080622ec  entry 0x080622ec  size 188
.thumb
.org 0x622ec
FUN_080622ec:
	push {r4, r5, r6, lr}	@ 000622ec 70b5
.org 0x622ee
	adds r6, r0, #0	@ 000622ee 061c
.org 0x622f0
	ldrb r0, [r6, #15]	@ 000622f0 f07b
.org 0x622f2
	cmp r0, #0	@ 000622f2 0028
.org 0x622f4
	bne.n 0x62312	@ 000622f4 0dd1
.org 0x622f6
	ldr r0, [r6, #84]	@ 000622f6 706d
.org 0x622f8
	ldr r1, [r6, #88]	@ 000622f8 b16d
.org 0x622fa
	bl 0x8534	@ 000622fa a6f71bf9
.org 0x622fe
	ldr r1, [pc, #168]	@ 000622fe 2a49
.org 0x62300
	adds r0, r0, r1	@ 00062300 4018
.org 0x62302
	str r0, [r6, #88]	@ 00062302 b065
.org 0x62304
	adds r0, r6, #0	@ 00062304 301c
.org 0x62306
	movs r1, #1	@ 00062306 0121
.org 0x62308
	bl 0x65a94	@ 00062308 03f0c4fb
.org 0x6230c
	ldrb r0, [r6, #15]	@ 0006230c f07b
.org 0x6230e
	adds r0, #1	@ 0006230e 0130
.org 0x62310
	strb r0, [r6, #15]	@ 00062310 f073
.org 0x62312
	ldrb r0, [r6, #30]	@ 00062312 b07f
.org 0x62314
	lsls r0, r0, #8	@ 00062314 0002
.org 0x62316
	adds r1, r6, #0	@ 00062316 311c
.org 0x62318
	adds r1, #112	@ 00062318 7031
.org 0x6231a
	ldrb r1, [r1, #0]	@ 0006231a 0978
.org 0x6231c
	orrs r1, r0	@ 0006231c 0143
.org 0x6231e
	adds r5, r6, #0	@ 0006231e 351c
.org 0x62320
	adds r5, #113	@ 00062320 7135
.org 0x62322
	movs r2, #0	@ 00062322 0022
.org 0x62324
	ldrsb r2, [r5, r2]	@ 00062324 aa56
.org 0x62326
	lsls r2, r2, #16	@ 00062326 1204
.org 0x62328
	lsrs r2, r2, #16	@ 00062328 120c
.org 0x6232a
	adds r0, r6, #0	@ 0006232a 301c
.org 0x6232c
	adds r0, #114	@ 0006232c 7230
.org 0x6232e
	movs r3, #0	@ 0006232e 0023
.org 0x62330
	ldrsb r3, [r0, r3]	@ 00062330 c356
.org 0x62332
	adds r3, #1	@ 00062332 0133
.org 0x62334
	lsls r3, r3, #16	@ 00062334 1b04
.org 0x62336
	lsrs r3, r3, #16	@ 00062336 1b0c
.org 0x62338
	adds r0, r6, #0	@ 00062338 301c
.org 0x6233a
	bl 0x1cfc8	@ 0006233a baf745fe
.org 0x6233e
	adds r0, r6, #0	@ 0006233e 301c
.org 0x62340
	bl 0x1cff0	@ 00062340 baf756fe
.org 0x62344
	adds r0, r6, #0	@ 00062344 301c
.org 0x62346
	adds r0, #116	@ 00062346 7430
.org 0x62348
	ldr r4, [pc, #96]	@ 00062348 184c
.org 0x6234a
	ldr r3, [pc, #100]	@ 0006234a 194b
.org 0x6234c
	adds r1, r6, #0	@ 0006234c 311c
.org 0x6234e
	adds r1, #180	@ 0006234e b431
.org 0x62350
	ldrb r2, [r1, #0]	@ 00062350 0a78
.org 0x62352
	lsls r1, r2, #1	@ 00062352 5100
.org 0x62354
	adds r1, r1, r3	@ 00062354 c918
.org 0x62356
	ldrh r1, [r1, #0]	@ 00062356 0988
.org 0x62358
	lsls r1, r1, #2	@ 00062358 8900
.org 0x6235a
	adds r1, r1, r4	@ 0006235a 0919
.org 0x6235c
	ldrb r5, [r5, #0]	@ 0006235c 2d78
.org 0x6235e
	lsls r5, r5, #24	@ 0006235e 2d06
.org 0x62360
	asrs r5, r5, #24	@ 00062360 2d16
.org 0x62362
	ldr r1, [r1, #0]	@ 00062362 0968
.org 0x62364
	lsls r3, r5, #2	@ 00062364 ab00
.org 0x62366
	adds r3, r3, r1	@ 00062366 5b18
.org 0x62368
	ldr r4, [pc, #72]	@ 00062368 124c
.org 0x6236a
	adds r1, r6, #0	@ 0006236a 311c
.org 0x6236c
	adds r1, #181	@ 0006236c b531
.org 0x6236e
	ldrb r1, [r1, #0]	@ 0006236e 0978
.org 0x62370
	lsls r1, r1, #2	@ 00062370 8900
.org 0x62372
	adds r1, r1, r4	@ 00062372 0919
.org 0x62374
	ldr r1, [r1, #0]	@ 00062374 0968
.org 0x62376
	lsls r2, r2, #2	@ 00062376 9200
.org 0x62378
	adds r2, r2, r1	@ 00062378 5218
.org 0x6237a
	ldr r1, [r2, #0]	@ 0006237a 1168
.org 0x6237c
	adds r1, r1, r5	@ 0006237c 4919
.org 0x6237e
	ldrb r1, [r1, #0]	@ 0006237e 0978
.org 0x62380
	lsls r2, r1, #1	@ 00062380 4a00
.org 0x62382
	adds r2, r2, r1	@ 00062382 5218
.org 0x62384
	lsls r2, r2, #3	@ 00062384 d200
.org 0x62386
	ldr r1, [r3, #0]	@ 00062386 1968
.org 0x62388
	adds r1, r1, r2	@ 00062388 8918
.org 0x6238a
	bl 0x5784	@ 0006238a a3f7fbf9
.org 0x6238e
	ldr r0, [r6, #24]	@ 0006238e b069
.org 0x62390
	ldrb r1, [r0, #9]	@ 00062390 417a
.org 0x62392
	movs r2, #1	@ 00062392 0122
.org 0x62394
	adds r0, r2, #0	@ 00062394 101c
.org 0x62396
	ands r0, r1	@ 00062396 0840
.org 0x62398
	cmp r0, #0	@ 00062398 0028
.org 0x6239a
	beq.n 0x623a2	@ 0006239a 02d0
.org 0x6239c
	movs r0, #0	@ 0006239c 0020
.org 0x6239e
	strb r2, [r6, #14]	@ 0006239e b273
.org 0x623a0
	strb r0, [r6, #15]	@ 000623a0 f073
.org 0x623a2
	pop {r4, r5, r6}	@ 000623a2 70bc
.org 0x623a4
	pop {r0}	@ 000623a4 01bc
.org 0x623a6
	bx r0	@ 000623a6 0047

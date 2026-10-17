@ FUN_080972b8  entry 0x080972b8  size 358
.thumb
.org 0x972b8
FUN_080972b8:
	push {r4, r5, lr}	@ 000972b8 30b5
.org 0x972ba
	adds r4, r0, #0	@ 000972ba 041c
.org 0x972bc
	ldr r5, [r4, #40]	@ 000972bc a56a
.org 0x972be
	ldrb r2, [r4, #14]	@ 000972be a27b
.org 0x972c0
	cmp r2, #0	@ 000972c0 002a
.org 0x972c2
	bne.n 0x973b0	@ 000972c2 75d1
.org 0x972c4
	adds r0, r5, #0	@ 000972c4 281c
.org 0x972c6
	adds r0, #190	@ 000972c6 be30
.org 0x972c8
	ldrb r1, [r0, #0]	@ 000972c8 0178
.org 0x972ca
	cmp r1, #0	@ 000972ca 0029
.org 0x972cc
	beq.n 0x97308	@ 000972cc 1cd0
.org 0x972ce
	ldrb r1, [r4, #10]	@ 000972ce a17a
.org 0x972d0
	movs r0, #254	@ 000972d0 fe20
.org 0x972d2
	ands r0, r1	@ 000972d2 0840
.org 0x972d4
	movs r1, #253	@ 000972d4 fd21
.org 0x972d6
	ands r0, r1	@ 000972d6 0840
.org 0x972d8
	strb r0, [r4, #10]	@ 000972d8 a072
.org 0x972da
	adds r0, r4, #0	@ 000972da 201c
.org 0x972dc
	adds r0, #140	@ 000972dc 8c30
.org 0x972de
	str r2, [r0, #0]	@ 000972de 0260
.org 0x972e0
	adds r0, #4	@ 000972e0 0430
.org 0x972e2
	str r2, [r0, #0]	@ 000972e2 0260
.org 0x972e4
	adds r0, #4	@ 000972e4 0430
.org 0x972e6
	strb r2, [r0, #0]	@ 000972e6 0270
.org 0x972e8
	ldrb r1, [r4, #10]	@ 000972e8 a17a
.org 0x972ea
	movs r0, #251	@ 000972ea fb20
.org 0x972ec
	ands r0, r1	@ 000972ec 0840
.org 0x972ee
	strb r0, [r4, #10]	@ 000972ee a072
.org 0x972f0
	ldr r1, [pc, #16]	@ 000972f0 0449
.org 0x972f2
	ldrb r0, [r4, #9]	@ 000972f2 607a
.org 0x972f4
	lsls r0, r0, #2	@ 000972f4 8000
.org 0x972f6
	adds r0, r0, r1	@ 000972f6 4018
.org 0x972f8
	movs r1, #3	@ 000972f8 0321
.org 0x972fa
	str r1, [r4, #12]	@ 000972fa e160
.org 0x972fc
	ldr r0, [r0, #0]	@ 000972fc 0068
.org 0x972fe
	ldr r0, [r0, #12]	@ 000972fe c068
.org 0x97300
	b.n 0x9742e	@ 00097300 95e0
.org 0x97302
	.byte 0x00	@ 00097302 data
.org 0x97303
	.byte 0x00	@ 00097303 data
.org 0x97304
	.byte 0x40,0xdb,0x85,0x08	@ 00097304 data
.org 0x97308
	adds r0, r4, #0	@ 00097308 201c
.org 0x9730a
	adds r0, #140	@ 0009730a 8c30
.org 0x9730c
	str r1, [r0, #0]	@ 0009730c 0160
.org 0x9730e
	adds r0, #4	@ 0009730e 0430
.org 0x97310
	str r1, [r0, #0]	@ 00097310 0160
.org 0x97312
	adds r0, #4	@ 00097312 0430
.org 0x97314
	strb r1, [r0, #0]	@ 00097314 0170
.org 0x97316
	ldrb r1, [r4, #10]	@ 00097316 a17a
.org 0x97318
	movs r0, #251	@ 00097318 fb20
.org 0x9731a
	ands r0, r1	@ 0009731a 0840
.org 0x9731c
	strb r0, [r4, #10]	@ 0009731c a072
.org 0x9731e
	ldr r1, [pc, #60]	@ 0009731e 0f49
.org 0x97320
	adds r0, r4, #0	@ 00097320 201c
.org 0x97322
	bl 0x1cf00	@ 00097322 85f7edfd
.org 0x97326
	ldr r0, [r5, #84]	@ 00097326 686d
.org 0x97328
	ldr r1, [r5, #88]	@ 00097328 a96d
.org 0x9732a
	str r0, [r4, #84]	@ 0009732a 6065
.org 0x9732c
	str r1, [r4, #88]	@ 0009732c a165
.org 0x9732e
	ldrb r1, [r4, #10]	@ 0009732e a17a
.org 0x97330
	movs r0, #16	@ 00097330 1020
.org 0x97332
	ands r0, r1	@ 00097332 0840
.org 0x97334
	cmp r0, #0	@ 00097334 0028
.org 0x97336
	beq.n 0x97364	@ 00097336 15d0
.org 0x97338
	ldr r2, [pc, #36]	@ 00097338 094a
.org 0x9733a
	adds r3, r5, #0	@ 0009733a 2b1c
.org 0x9733c
	adds r3, #189	@ 0009733c bd33
.org 0x9733e
	ldrb r0, [r3, #0]	@ 0009733e 1878
.org 0x97340
	adds r0, #64	@ 00097340 4030
.org 0x97342
	lsls r0, r0, #24	@ 00097342 0006
.org 0x97344
	lsrs r0, r0, #23	@ 00097344 c00d
.org 0x97346
	adds r0, r0, r2	@ 00097346 8018
.org 0x97348
	movs r5, #0	@ 00097348 0025
.org 0x9734a
	ldrsh r1, [r0, r5]	@ 0009734a 415f
.org 0x9734c
	movs r0, #26	@ 0009734c 1a20
.org 0x9734e
	muls r1, r0	@ 0009734e 4143
.org 0x97350
	ldr r0, [r4, #84]	@ 00097350 606d
.org 0x97352
	adds r0, r0, r1	@ 00097352 4018
.org 0x97354
	str r0, [r4, #84]	@ 00097354 6065
.org 0x97356
	movs r0, #238	@ 00097356 ee20
.org 0x97358
	b.n 0x97384	@ 00097358 14e0
.org 0x9735a
	.byte 0x00	@ 0009735a data
.org 0x9735b
	.byte 0x00	@ 0009735b data
.org 0x9735c
	.byte 0x08,0x50,0x00,0x00	@ 0009735c data
.org 0x97360
	.byte 0x0c,0x93,0x12,0x08	@ 00097360 data
.org 0x97364
	ldr r2, [pc, #100]	@ 00097364 194a
.org 0x97366
	adds r3, r5, #0	@ 00097366 2b1c
.org 0x97368
	adds r3, #189	@ 00097368 bd33
.org 0x9736a
	ldrb r0, [r3, #0]	@ 0009736a 1878
.org 0x9736c
	adds r0, #64	@ 0009736c 4030
.org 0x9736e
	lsls r0, r0, #24	@ 0009736e 0006
.org 0x97370
	lsrs r0, r0, #23	@ 00097370 c00d
.org 0x97372
	adds r0, r0, r2	@ 00097372 8018
.org 0x97374
	movs r5, #0	@ 00097374 0025
.org 0x97376
	ldrsh r1, [r0, r5]	@ 00097376 415f
.org 0x97378
	movs r0, #26	@ 00097378 1a20
.org 0x9737a
	muls r1, r0	@ 0009737a 4143
.org 0x9737c
	ldr r0, [r4, #84]	@ 0009737c 606d
.org 0x9737e
	subs r0, r0, r1	@ 0009737e 401a
.org 0x97380
	str r0, [r4, #84]	@ 00097380 6065
.org 0x97382
	movs r0, #18	@ 00097382 1220
.org 0x97384
	strb r0, [r4, #19]	@ 00097384 e074
.org 0x97386
	ldrb r0, [r3, #0]	@ 00097386 1878
.org 0x97388
	lsls r0, r0, #1	@ 00097388 4000
.org 0x9738a
	adds r0, r0, r2	@ 0009738a 8018
.org 0x9738c
	movs r2, #0	@ 0009738c 0022
.org 0x9738e
	ldrsh r1, [r0, r2]	@ 0009738e 815e
.org 0x97390
	movs r0, #26	@ 00097390 1a20
.org 0x97392
	muls r1, r0	@ 00097392 4143
.org 0x97394
	ldr r0, [r4, #88]	@ 00097394 a06d
.org 0x97396
	subs r0, r0, r1	@ 00097396 401a
.org 0x97398
	str r0, [r4, #88]	@ 00097398 a065
.org 0x9739a
	ldr r0, [pc, #52]	@ 0009739a 0d48
.org 0x9739c
	str r0, [r4, #96]	@ 0009739c 2066
.org 0x9739e
	movs r0, #0	@ 0009739e 0020
.org 0x973a0
	strb r0, [r4, #18]	@ 000973a0 a074
.org 0x973a2
	ldrb r0, [r3, #0]	@ 000973a2 1878
.org 0x973a4
	adds r1, r4, #0	@ 000973a4 211c
.org 0x973a6
	adds r1, #189	@ 000973a6 bd31
.org 0x973a8
	strb r0, [r1, #0]	@ 000973a8 0870
.org 0x973aa
	ldrb r0, [r4, #14]	@ 000973aa a07b
.org 0x973ac
	adds r0, #1	@ 000973ac 0130
.org 0x973ae
	strb r0, [r4, #14]	@ 000973ae a073
.org 0x973b0
	adds r0, r4, #0	@ 000973b0 201c
.org 0x973b2
	bl 0x1cff0	@ 000973b2 85f71dfe
.org 0x973b6
	ldrb r1, [r4, #18]	@ 000973b6 a17c
.org 0x973b8
	adds r0, r1, #1	@ 000973b8 481c
.org 0x973ba
	strb r0, [r4, #18]	@ 000973ba a074
.org 0x973bc
	movs r0, #1	@ 000973bc 0120
.org 0x973be
	ands r0, r1	@ 000973be 0840
.org 0x973c0
	cmp r0, #0	@ 000973c0 0028
.org 0x973c2
	beq.n 0x973d4	@ 000973c2 07d0
.org 0x973c4
	ldrb r1, [r4, #10]	@ 000973c4 a17a
.org 0x973c6
	movs r0, #254	@ 000973c6 fe20
.org 0x973c8
	ands r0, r1	@ 000973c8 0840
.org 0x973ca
	b.n 0x973da	@ 000973ca 06e0
.org 0x973cc
	.byte 0x0c,0x93,0x12,0x08	@ 000973cc data
.org 0x973d0
	.byte 0x80,0xfb,0xff,0xff	@ 000973d0 data
.org 0x973d4
	ldrb r0, [r4, #10]	@ 000973d4 a07a
.org 0x973d6
	movs r1, #1	@ 000973d6 0121
.org 0x973d8
	orrs r0, r1	@ 000973d8 0843
.org 0x973da
	strb r0, [r4, #10]	@ 000973da a072
.org 0x973dc
	adds r1, r4, #0	@ 000973dc 211c
.org 0x973de
	adds r1, #189	@ 000973de bd31
.org 0x973e0
	ldrb r0, [r4, #19]	@ 000973e0 e07c
.org 0x973e2
	ldrb r5, [r1, #0]	@ 000973e2 0d78
.org 0x973e4
	adds r0, r0, r5	@ 000973e4 4019
.org 0x973e6
	strb r0, [r1, #0]	@ 000973e6 0870
.org 0x973e8
	subs r1, #153	@ 000973e8 9939
.org 0x973ea
	strb r0, [r1, #0]	@ 000973ea 0870
.org 0x973ec
	ldr r1, [r4, #88]	@ 000973ec a16d
.org 0x973ee
	ldr r0, [r4, #96]	@ 000973ee 206e
.org 0x973f0
	adds r1, r1, r0	@ 000973f0 0918
.org 0x973f2
	str r1, [r4, #88]	@ 000973f2 a165
.org 0x973f4
	adds r0, #64	@ 000973f4 4030
.org 0x973f6
	str r0, [r4, #96]	@ 000973f6 2066
.org 0x973f8
	cmp r0, #0	@ 000973f8 0028
.org 0x973fa
	ble.n 0x97430	@ 000973fa 19dd
.org 0x973fc
	ldr r0, [r4, #84]	@ 000973fc 606d
.org 0x973fe
	movs r2, #160	@ 000973fe a022
.org 0x97400
	lsls r2, r2, #4	@ 00097400 1201
.org 0x97402
	adds r1, r1, r2	@ 00097402 8918
.org 0x97404
	bl 0x7c7c	@ 00097404 70f73afc
.org 0x97408
	lsls r0, r0, #16	@ 00097408 0004
.org 0x9740a
	cmp r0, #0	@ 0009740a 0028
.org 0x9740c
	beq.n 0x97430	@ 0009740c 10d0
.org 0x9740e
	adds r1, r4, #0	@ 0009740e 211c
.org 0x97410
	adds r1, #84	@ 00097410 5431
.org 0x97412
	movs r0, #1	@ 00097412 0120
.org 0x97414
	bl 0xd0c88	@ 00097414 39f038fc
.org 0x97418
	movs r0, #42	@ 00097418 2a20
.org 0x9741a
	bl 0x2b10	@ 0009741a 6bf779fb

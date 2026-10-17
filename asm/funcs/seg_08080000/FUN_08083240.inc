@ FUN_08083240  entry 0x08083240  size 432
.thumb
.org 0x83240
FUN_08083240:
	push {r4, r5, lr}	@ 00083240 30b5
.org 0x83242
	sub sp, #8	@ 00083242 82b0
.org 0x83244
	adds r4, r0, #0	@ 00083244 041c
.org 0x83246
	ldrb r0, [r4, #14]	@ 00083246 a07b
.org 0x83248
	cmp r0, #0	@ 00083248 0028
.org 0x8324a
	beq.n 0x83254	@ 0008324a 03d0
.org 0x8324c
	cmp r0, #1	@ 0008324c 0128
.org 0x8324e
	bne.n 0x83252	@ 0008324e 00d1
.org 0x83250
	b.n 0x83362	@ 00083250 87e0
.org 0x83252
	b.n 0x83404	@ 00083252 d7e0
.org 0x83254
	adds r0, r4, #0	@ 00083254 201c
.org 0x83256
	adds r0, #190	@ 00083256 be30
.org 0x83258
	ldrb r0, [r0, #0]	@ 00083258 0078
.org 0x8325a
	cmp r0, #2	@ 0008325a 0228
.org 0x8325c
	beq.n 0x83290	@ 0008325c 18d0
.org 0x8325e
	cmp r0, #2	@ 0008325e 0228
.org 0x83260
	bgt.n 0x83268	@ 00083260 02dc
.org 0x83262
	cmp r0, #1	@ 00083262 0128
.org 0x83264
	beq.n 0x83272	@ 00083264 05d0
.org 0x83266
	b.n 0x8333c	@ 00083266 69e0
.org 0x83268
	cmp r0, #3	@ 00083268 0328
.org 0x8326a
	beq.n 0x832b4	@ 0008326a 23d0
.org 0x8326c
	cmp r0, #4	@ 0008326c 0428
.org 0x8326e
	beq.n 0x832e8	@ 0008326e 3bd0
.org 0x83270
	b.n 0x8333c	@ 00083270 64e0
.org 0x83272
	ldr r3, [r4, #88]	@ 00083272 a36d
.org 0x83274
	ldr r1, [pc, #20]	@ 00083274 0549
.org 0x83276
	adds r0, r3, r1	@ 00083276 5818
.org 0x83278
	str r0, [r4, #88]	@ 00083278 a065
.org 0x8327a
	adds r2, r0, #0	@ 0008327a 021c
.org 0x8327c
	ldrb r1, [r4, #10]	@ 0008327c a17a
.org 0x8327e
	movs r0, #32	@ 0008327e 2020
.org 0x83280
	ands r0, r1	@ 00083280 0840
.org 0x83282
	cmp r0, #0	@ 00083282 0028
.org 0x83284
	beq.n 0x832aa	@ 00083284 11d0
.org 0x83286
	movs r0, #144	@ 00083286 9020
.org 0x83288
	lsls r0, r0, #5	@ 00083288 4001
.org 0x8328a
	b.n 0x832a8	@ 0008328a 0de0
.org 0x8328c
	.byte 0x00,0xee,0xff,0xff	@ 0008328c data
.org 0x83290
	ldr r3, [r4, #88]	@ 00083290 a36d
.org 0x83292
	ldr r1, [pc, #28]	@ 00083292 0749
.org 0x83294
	adds r0, r3, r1	@ 00083294 5818
.org 0x83296
	str r0, [r4, #88]	@ 00083296 a065
.org 0x83298
	adds r2, r0, #0	@ 00083298 021c
.org 0x8329a
	ldrb r1, [r4, #10]	@ 0008329a a17a
.org 0x8329c
	movs r0, #32	@ 0008329c 2020
.org 0x8329e
	ands r0, r1	@ 0008329e 0840
.org 0x832a0
	cmp r0, #0	@ 000832a0 0028
.org 0x832a2
	beq.n 0x832aa	@ 000832a2 02d0
.org 0x832a4
	movs r0, #192	@ 000832a4 c020
.org 0x832a6
	lsls r0, r0, #5	@ 000832a6 4001
.org 0x832a8
	adds r2, r3, r0	@ 000832a8 1a18
.org 0x832aa
	str r2, [r4, #88]	@ 000832aa a265
.org 0x832ac
	b.n 0x8333c	@ 000832ac 46e0
.org 0x832ae
	.byte 0x00	@ 000832ae data
.org 0x832af
	.byte 0x00	@ 000832af data
.org 0x832b0
	.byte 0x00,0xe8,0xff,0xff	@ 000832b0 data
.org 0x832b4
	ldr r3, [r4, #88]	@ 000832b4 a36d
.org 0x832b6
	ldr r1, [pc, #44]	@ 000832b6 0b49
.org 0x832b8
	adds r0, r3, r1	@ 000832b8 5818
.org 0x832ba
	str r0, [r4, #88]	@ 000832ba a065
.org 0x832bc
	adds r2, r0, #0	@ 000832bc 021c
.org 0x832be
	ldrb r1, [r4, #10]	@ 000832be a17a
.org 0x832c0
	movs r0, #32	@ 000832c0 2020
.org 0x832c2
	ands r0, r1	@ 000832c2 0840
.org 0x832c4
	cmp r0, #0	@ 000832c4 0028
.org 0x832c6
	beq.n 0x832ce	@ 000832c6 02d0
.org 0x832c8
	movs r0, #140	@ 000832c8 8c20
.org 0x832ca
	lsls r0, r0, #6	@ 000832ca 8001
.org 0x832cc
	adds r2, r3, r0	@ 000832cc 1a18
.org 0x832ce
	str r2, [r4, #88]	@ 000832ce a265
.org 0x832d0
	lsls r0, r1, #24	@ 000832d0 0806
.org 0x832d2
	lsrs r0, r0, #29	@ 000832d2 400f
.org 0x832d4
	movs r2, #1	@ 000832d4 0122
.org 0x832d6
	bics r2, r0	@ 000832d6 8243
.org 0x832d8
	cmp r2, #0	@ 000832d8 002a
.org 0x832da
	beq.n 0x8331c	@ 000832da 1fd0
.org 0x832dc
	movs r0, #32	@ 000832dc 2020
.org 0x832de
	orrs r0, r1	@ 000832de 0843
.org 0x832e0
	b.n 0x83320	@ 000832e0 1ee0
.org 0x832e2
	.byte 0x00	@ 000832e2 data
.org 0x832e3
	.byte 0x00	@ 000832e3 data
.org 0x832e4
	.byte 0x00,0xdd,0xff,0xff	@ 000832e4 data
.org 0x832e8
	ldr r3, [r4, #88]	@ 000832e8 a36d
.org 0x832ea
	ldr r1, [pc, #44]	@ 000832ea 0b49
.org 0x832ec
	adds r0, r3, r1	@ 000832ec 5818
.org 0x832ee
	str r0, [r4, #88]	@ 000832ee a065
.org 0x832f0
	adds r2, r0, #0	@ 000832f0 021c
.org 0x832f2
	ldrb r1, [r4, #10]	@ 000832f2 a17a
.org 0x832f4
	movs r0, #32	@ 000832f4 2020
.org 0x832f6
	ands r0, r1	@ 000832f6 0840
.org 0x832f8
	cmp r0, #0	@ 000832f8 0028
.org 0x832fa
	beq.n 0x83302	@ 000832fa 02d0
.org 0x832fc
	movs r0, #172	@ 000832fc ac20
.org 0x832fe
	lsls r0, r0, #6	@ 000832fe 8001
.org 0x83300
	adds r2, r3, r0	@ 00083300 1a18
.org 0x83302
	str r2, [r4, #88]	@ 00083302 a265
.org 0x83304
	lsls r0, r1, #24	@ 00083304 0806
.org 0x83306
	lsrs r0, r0, #29	@ 00083306 400f
.org 0x83308
	movs r2, #1	@ 00083308 0122
.org 0x8330a
	bics r2, r0	@ 0008330a 8243
.org 0x8330c
	cmp r2, #0	@ 0008330c 002a
.org 0x8330e
	beq.n 0x8331c	@ 0008330e 05d0
.org 0x83310
	movs r0, #32	@ 00083310 2020
.org 0x83312
	orrs r0, r1	@ 00083312 0843
.org 0x83314
	b.n 0x83320	@ 00083314 04e0
.org 0x83316
	.byte 0x00	@ 00083316 data
.org 0x83317
	.byte 0x00	@ 00083317 data
.org 0x83318
	.byte 0x00,0xd5,0xff,0xff	@ 00083318 data
.org 0x8331c
	movs r0, #223	@ 0008331c df20
.org 0x8331e
	ands r0, r1	@ 0008331e 0840
.org 0x83320
	strb r0, [r4, #10]	@ 00083320 a072
.org 0x83322
	adds r0, r2, #0	@ 00083322 101c
.org 0x83324
	adds r1, r4, #0	@ 00083324 211c
.org 0x83326
	adds r1, #77	@ 00083326 4d31
.org 0x83328
	strb r0, [r1, #0]	@ 00083328 0870
.org 0x8332a
	adds r3, r4, #0	@ 0008332a 231c
.org 0x8332c
	adds r3, #74	@ 0008332c 4a33
.org 0x8332e
	lsls r0, r0, #5	@ 0008332e 4001
.org 0x83330
	ldrb r2, [r3, #0]	@ 00083330 1a78
.org 0x83332
	movs r1, #33	@ 00083332 2121
.org 0x83334
	negs r1, r1	@ 00083334 4942
.org 0x83336
	ands r1, r2	@ 00083336 1140
.org 0x83338
	orrs r1, r0	@ 00083338 0143
.org 0x8333a
	strb r1, [r3, #0]	@ 0008333a 1970
.org 0x8333c
	ldrb r1, [r4, #10]	@ 0008333c a17a
.org 0x8333e
	movs r0, #254	@ 0008333e fe20
.org 0x83340
	ands r0, r1	@ 00083340 0840
.org 0x83342
	movs r1, #0	@ 00083342 0021
.org 0x83344
	strb r0, [r4, #10]	@ 00083344 a072
.org 0x83346
	adds r0, r4, #0	@ 00083346 201c
.org 0x83348
	adds r0, #140	@ 00083348 8c30
.org 0x8334a
	str r1, [r0, #0]	@ 0008334a 0160
.org 0x8334c
	adds r0, #4	@ 0008334c 0430
.org 0x8334e
	str r1, [r0, #0]	@ 0008334e 0160
.org 0x83350
	adds r0, #4	@ 00083350 0430
.org 0x83352
	strb r1, [r0, #0]	@ 00083352 0170
.org 0x83354
	ldrb r1, [r4, #10]	@ 00083354 a17a
.org 0x83356
	movs r0, #251	@ 00083356 fb20
.org 0x83358
	ands r0, r1	@ 00083358 0840
.org 0x8335a
	strb r0, [r4, #10]	@ 0008335a a072
.org 0x8335c
	ldrb r0, [r4, #14]	@ 0008335c a07b
.org 0x8335e
	adds r0, #1	@ 0008335e 0130
.org 0x83360
	strb r0, [r4, #14]	@ 00083360 a073
.org 0x83362
	ldr r0, [r4, #84]	@ 00083362 606d
.org 0x83364
	str r0, [sp, #0]	@ 00083364 0090
.org 0x83366
	ldr r0, [r4, #88]	@ 00083366 a06d
.org 0x83368
	ldr r1, [pc, #76]	@ 00083368 1349
.org 0x8336a
	adds r0, r0, r1	@ 0008336a 4018
.org 0x8336c
	str r0, [sp, #4]	@ 0008336c 0190
.org 0x8336e
	movs r0, #1	@ 0008336e 0120
.org 0x83370
	mov r1, sp	@ 00083370 6946
.org 0x83372
	bl 0xd0c88	@ 00083372 4df089fc
.org 0x83376
	movs r0, #42	@ 00083376 2a20
.org 0x83378
	bl 0x2b10	@ 00083378 7ff7cafb
.org 0x8337c
	adds r0, r4, #0	@ 0008337c 201c
.org 0x8337e
	mov r1, sp	@ 0008337e 6946
.org 0x83380
	movs r2, #2	@ 00083380 0222
.org 0x83382
	bl 0xd621c	@ 00083382 52f04bff
.org 0x83386
	ldr r0, [r4, #84]	@ 00083386 606d
.org 0x83388
	ldr r1, [r4, #88]	@ 00083388 a16d
.org 0x8338a
	bl 0x7c7c	@ 0008338a 84f777fc
.org 0x8338e
	lsls r0, r0, #16	@ 0008338e 0004
.org 0x83390
	cmp r0, #0	@ 00083390 0028
.org 0x83392
	beq.n 0x833ce	@ 00083392 1cd0
.org 0x83394
	ldr r0, [r4, #84]	@ 00083394 606d
.org 0x83396
	ldr r1, [r4, #88]	@ 00083396 a16d
.org 0x83398
	bl 0x7db4	@ 00083398 84f70cfd
.org 0x8339c
	adds r5, r0, #0	@ 0008339c 051c
.org 0x8339e
	ldr r0, [r4, #84]	@ 0008339e 606d
.org 0x833a0
	ldr r1, [r4, #88]	@ 000833a0 a16d
.org 0x833a2
	bl 0x7f8c	@ 000833a2 84f7f3fd
.org 0x833a6
	adds r1, r0, #0	@ 000833a6 011c
.org 0x833a8
	cmp r5, #0	@ 000833a8 002d
.org 0x833aa
	bgt.n 0x833c8	@ 000833aa 0ddc
.org 0x833ac
	cmp r1, #0	@ 000833ac 0029
.org 0x833ae
	bge.n 0x833bc	@ 000833ae 05da
.org 0x833b0
	ldr r0, [r4, #88]	@ 000833b0 a06d
.org 0x833b2
	adds r0, r0, r5	@ 000833b2 4019
.org 0x833b4
	b.n 0x833cc	@ 000833b4 0ae0
.org 0x833b6
	.byte 0x00	@ 000833b6 data
.org 0x833b7
	.byte 0x00	@ 000833b7 data
.org 0x833b8
	.byte 0x00,0xf8,0xff,0xff	@ 000833b8 data
.org 0x833bc
	negs r0, r5	@ 000833bc 6842
.org 0x833be
	cmp r0, r1	@ 000833be 8842
.org 0x833c0
	bge.n 0x833c8	@ 000833c0 02da
.org 0x833c2
	ldr r0, [r4, #88]	@ 000833c2 a06d
.org 0x833c4
	adds r0, r0, r5	@ 000833c4 4019
.org 0x833c6
	b.n 0x833cc	@ 000833c6 01e0
.org 0x833c8
	ldr r0, [r4, #88]	@ 000833c8 a06d
.org 0x833ca
	adds r0, r0, r1	@ 000833ca 4018
.org 0x833cc
	str r0, [r4, #88]	@ 000833cc a065
.org 0x833ce
	adds r5, r4, #0	@ 000833ce 251c
.org 0x833d0
	adds r5, #84	@ 000833d0 5435
.org 0x833d2
	movs r0, #4	@ 000833d2 0420
.org 0x833d4
	movs r1, #8	@ 000833d4 0821
.org 0x833d6
	adds r2, r5, #0	@ 000833d6 2a1c
.org 0x833d8
	bl 0x2ab88	@ 000833d8 a7f7d6fb
.org 0x833dc
	ldr r2, [pc, #44]	@ 000833dc 0b4a
.org 0x833de
	ldrh r1, [r2, #12]	@ 000833de 9189
.org 0x833e0
	ldr r0, [pc, #44]	@ 000833e0 0b48
.org 0x833e2
	cmp r1, r0	@ 000833e2 8142
.org 0x833e4
	bhi.n 0x833ea	@ 000833e4 01d8
.org 0x833e6
	adds r0, r1, #1	@ 000833e6 481c
.org 0x833e8
	strh r0, [r2, #12]	@ 000833e8 9081
.org 0x833ea
	adds r0, r4, #0	@ 000833ea 201c
.org 0x833ec
	adds r1, r5, #0	@ 000833ec 291c
.org 0x833ee
	bl 0x2abe0	@ 000833ee a7f7f7fb

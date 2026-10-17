@ FUN_08022248  entry 0x08022248  size 620
.thumb
.org 0x22248
FUN_08022248:
	push {r4, r5, r6, r7, lr}	@ 00022248 f0b5
.org 0x2224a
	mov r7, r9	@ 0002224a 4f46
.org 0x2224c
	mov r6, r8	@ 0002224c 4646
.org 0x2224e
	push {r6, r7}	@ 0002224e c0b4
.org 0x22250
	adds r2, r0, #0	@ 00022250 021c
.org 0x22252
	ldr r3, [r2, #32]	@ 00022252 136a
.org 0x22254
	movs r0, #190	@ 00022254 be20
.org 0x22256
	lsls r0, r0, #1	@ 00022256 4000
.org 0x22258
	adds r7, r2, r0	@ 00022258 1718
.org 0x2225a
	ldrb r0, [r7, #0]	@ 0002225a 3878
.org 0x2225c
	cmp r0, #0	@ 0002225c 0028
.org 0x2225e
	beq.n 0x22262	@ 0002225e 00d0
.org 0x22260
	b.n 0x2236c	@ 00022260 84e0
.org 0x22262
	ldr r2, [pc, #124]	@ 00022262 1f4a
.org 0x22264
	ldrh r1, [r2, #8]	@ 00022264 1189
.org 0x22266
	movs r0, #1	@ 00022266 0120
.org 0x22268
	orrs r0, r1	@ 00022268 0843
.org 0x2226a
	strh r0, [r2, #8]	@ 0002226a 1081
.org 0x2226c
	ldr r1, [pc, #116]	@ 0002226c 1d49
.org 0x2226e
	mov r9, r1	@ 0002226e 8946
.org 0x22270
	ldrb r1, [r1, #4]	@ 00022270 0979
.org 0x22272
	movs r0, #8	@ 00022272 0820
.org 0x22274
	orrs r0, r1	@ 00022274 0843
.org 0x22276
	mov r3, r9	@ 00022276 4b46
.org 0x22278
	strb r0, [r3, #4]	@ 00022278 1871
.org 0x2227a
	ldrb r4, [r2, #2]	@ 0002227a 9478
.org 0x2227c
	cmp r4, #0	@ 0002227c 002c
.org 0x2227e
	bne.n 0x222f0	@ 0002227e 37d1
.org 0x22280
	adds r0, r2, #0	@ 00022280 101c
.org 0x22282
	adds r0, #16	@ 00022282 1030
.org 0x22284
	ldr r1, [pc, #96]	@ 00022284 1849
.org 0x22286
	ldr r1, [r1, #20]	@ 00022286 4969
.org 0x22288
	ldr r1, [r1, #56]	@ 00022288 896b
.org 0x2228a
	bl 0x275f0	@ 0002228a 05f0b1f9
.org 0x2228e
	movs r0, #2	@ 0002228e 0220
.org 0x22290
	bl 0x1f63c	@ 00022290 fdf7d4f9
.org 0x22294
	mov r0, r9	@ 00022294 4846
.org 0x22296
	ldrb r1, [r0, #9]	@ 00022296 417a
.org 0x22298
	movs r2, #191	@ 00022298 bf22
.org 0x2229a
	adds r0, r2, #0	@ 0002229a 101c
.org 0x2229c
	ands r0, r1	@ 0002229c 0840
.org 0x2229e
	movs r1, #127	@ 0002229e 7f21
.org 0x222a0
	mov r8, r1	@ 000222a0 8846
.org 0x222a2
	ands r0, r1	@ 000222a2 0840
.org 0x222a4
	mov r3, r9	@ 000222a4 4b46
.org 0x222a6
	strb r0, [r3, #9]	@ 000222a6 5872
.org 0x222a8
	ldrb r3, [r3, #10]	@ 000222a8 9b7a
.org 0x222aa
	movs r1, #254	@ 000222aa fe21
.org 0x222ac
	adds r0, r1, #0	@ 000222ac 081c
.org 0x222ae
	ands r0, r3	@ 000222ae 1840
.org 0x222b0
	movs r6, #253	@ 000222b0 fd26
.org 0x222b2
	ands r0, r6	@ 000222b2 3040
.org 0x222b4
	movs r5, #251	@ 000222b4 fb25
.org 0x222b6
	ands r0, r5	@ 000222b6 2840
.org 0x222b8
	movs r4, #247	@ 000222b8 f724
.org 0x222ba
	ands r0, r4	@ 000222ba 2040
.org 0x222bc
	mov r3, r9	@ 000222bc 4b46
.org 0x222be
	strb r0, [r3, #10]	@ 000222be 9872
.org 0x222c0
	ldr r3, [pc, #40]	@ 000222c0 0a4b
.org 0x222c2
	ldrb r0, [r3, #5]	@ 000222c2 5879
.org 0x222c4
	ands r2, r0	@ 000222c4 0240
.org 0x222c6
	mov r0, r8	@ 000222c6 4046
.org 0x222c8
	ands r2, r0	@ 000222c8 0240
.org 0x222ca
	strb r2, [r3, #5]	@ 000222ca 5a71
.org 0x222cc
	ldrb r0, [r3, #6]	@ 000222cc 9879
.org 0x222ce
	ands r1, r0	@ 000222ce 0140
.org 0x222d0
	ands r1, r6	@ 000222d0 3140
.org 0x222d2
	ands r1, r5	@ 000222d2 2940
.org 0x222d4
	ands r1, r4	@ 000222d4 2140
.org 0x222d6
	strb r1, [r3, #6]	@ 000222d6 9971
.org 0x222d8
	movs r0, #2	@ 000222d8 0220
.org 0x222da
	strb r0, [r7, #0]	@ 000222da 3870
.org 0x222dc
	b.n 0x22510	@ 000222dc 18e1
.org 0x222de
	.byte 0x00	@ 000222de data
.org 0x222df
	.byte 0x00	@ 000222df data
.org 0x222e0
	.byte 0x10,0xe9,0x02,0x02	@ 000222e0 data
.org 0x222e4
	.byte 0xb0,0xe8,0x02,0x02	@ 000222e4 data
.org 0x222e8
	.byte 0xf8,0x2c,0x84,0x08	@ 000222e8 data
.org 0x222ec
	.byte 0x80,0x58,0x03,0x02	@ 000222ec data
.org 0x222f0
	cmp r4, #2	@ 000222f0 022c
.org 0x222f2
	bne.n 0x2230c	@ 000222f2 0bd1
.org 0x222f4
	adds r0, r2, #0	@ 000222f4 101c
.org 0x222f6
	adds r0, #16	@ 000222f6 1030
.org 0x222f8
	ldr r1, [pc, #12]	@ 000222f8 0349
.org 0x222fa
	ldr r1, [r1, #20]	@ 000222fa 4969
.org 0x222fc
	ldr r1, [r1, #8]	@ 000222fc 8968
.org 0x222fe
	bl 0x275f0	@ 000222fe 05f077f9
.org 0x22302
	strb r4, [r7, #0]	@ 00022302 3c70
.org 0x22304
	b.n 0x22510	@ 00022304 04e1
.org 0x22306
	.byte 0x00	@ 00022306 data
.org 0x22307
	.byte 0x00	@ 00022307 data
.org 0x22308
	.byte 0xf8,0x2c,0x84,0x08	@ 00022308 data
.org 0x2230c
	cmp r4, #3	@ 0002230c 032c
.org 0x2230e
	bne.n 0x22330	@ 0002230e 0fd1
.org 0x22310
	adds r0, r2, #0	@ 00022310 101c
.org 0x22312
	adds r0, #16	@ 00022312 1030
.org 0x22314
	ldr r1, [pc, #20]	@ 00022314 0549
.org 0x22316
	ldr r1, [r1, #20]	@ 00022316 4969
.org 0x22318
	ldr r1, [r1, #16]	@ 00022318 0969
.org 0x2231a
	bl 0x275f0	@ 0002231a 05f069f9
.org 0x2231e
	movs r0, #4	@ 0002231e 0420
.org 0x22320
	bl 0x1f63c	@ 00022320 fdf78cf9
.org 0x22324
	movs r0, #4	@ 00022324 0420
.org 0x22326
	strb r0, [r7, #0]	@ 00022326 3870
.org 0x22328
	b.n 0x22510	@ 00022328 f2e0
.org 0x2232a
	.byte 0x00	@ 0002232a data
.org 0x2232b
	.byte 0x00	@ 0002232b data
.org 0x2232c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002232c data
.org 0x22330
	cmp r4, #4	@ 00022330 042c
.org 0x22332
	bne.n 0x2234c	@ 00022332 0bd1
.org 0x22334
	adds r0, r2, #0	@ 00022334 101c
.org 0x22336
	adds r0, #16	@ 00022336 1030
.org 0x22338
	ldr r1, [pc, #12]	@ 00022338 0349
.org 0x2233a
	ldr r1, [r1, #20]	@ 0002233a 4969
.org 0x2233c
	ldr r1, [r1, #24]	@ 0002233c 8969
.org 0x2233e
	bl 0x275f0	@ 0002233e 05f057f9
.org 0x22342
	movs r0, #5	@ 00022342 0520
.org 0x22344
	strb r0, [r7, #0]	@ 00022344 3870
.org 0x22346
	b.n 0x22510	@ 00022346 e3e0
.org 0x22348
	.byte 0xf8,0x2c,0x84,0x08	@ 00022348 data
.org 0x2234c
	cmp r4, #5	@ 0002234c 052c
.org 0x2234e
	beq.n 0x22352	@ 0002234e 00d0
.org 0x22350
	b.n 0x22510	@ 00022350 dee0
.org 0x22352
	adds r0, r2, #0	@ 00022352 101c
.org 0x22354
	adds r0, #16	@ 00022354 1030
.org 0x22356
	ldr r1, [pc, #16]	@ 00022356 0449
.org 0x22358
	ldr r1, [r1, #20]	@ 00022358 4969
.org 0x2235a
	ldr r1, [r1, #32]	@ 0002235a 096a
.org 0x2235c
	bl 0x275f0	@ 0002235c 05f048f9
.org 0x22360
	movs r0, #9	@ 00022360 0920
.org 0x22362
	strb r0, [r7, #0]	@ 00022362 3870
.org 0x22364
	b.n 0x22510	@ 00022364 d4e0
.org 0x22366
	.byte 0x00	@ 00022366 data
.org 0x22367
	.byte 0x00	@ 00022367 data
.org 0x22368
	.byte 0xf8,0x2c,0x84,0x08	@ 00022368 data
.org 0x2236c
	cmp r0, #2	@ 0002236c 0228
.org 0x2236e
	bne.n 0x22384	@ 0002236e 09d1
.org 0x22370
	ldr r1, [r3, #84]	@ 00022370 596d
.org 0x22372
	ldr r0, [pc, #12]	@ 00022372 0348
.org 0x22374
	cmp r1, r0	@ 00022374 8142
.org 0x22376
	ble.n 0x22384	@ 00022376 05dd
.org 0x22378
	movs r0, #3	@ 00022378 0320
.org 0x2237a
	strb r0, [r7, #0]	@ 0002237a 3870
.org 0x2237c
	b.n 0x22510	@ 0002237c c8e0
.org 0x2237e
	.byte 0x00	@ 0002237e data
.org 0x2237f
	.byte 0x00	@ 0002237f data
.org 0x22380
	.byte 0x00,0x70,0x17,0x00	@ 00022380 data
.org 0x22384
	movs r1, #190	@ 00022384 be21
.org 0x22386
	lsls r1, r1, #1	@ 00022386 4900
.org 0x22388
	adds r4, r2, r1	@ 00022388 5418
.org 0x2238a
	ldrb r0, [r4, #0]	@ 0002238a 2078
.org 0x2238c
	cmp r0, #3	@ 0002238c 0328
.org 0x2238e
	bne.n 0x2239a	@ 0002238e 04d1
.org 0x22390
	ldr r1, [r3, #84]	@ 00022390 596d
.org 0x22392
	movs r0, #195	@ 00022392 c320
.org 0x22394
	lsls r0, r0, #13	@ 00022394 4003
.org 0x22396
	cmp r1, r0	@ 00022396 8142
.org 0x22398
	bgt.n 0x223b0	@ 00022398 0adc
.org 0x2239a
	movs r0, #190	@ 0002239a be20
.org 0x2239c
	lsls r0, r0, #1	@ 0002239c 4000
.org 0x2239e
	adds r4, r2, r0	@ 0002239e 1418
.org 0x223a0
	ldrb r0, [r4, #0]	@ 000223a0 2078
.org 0x223a2
	cmp r0, #4	@ 000223a2 0428
.org 0x223a4
	bne.n 0x223e0	@ 000223a4 1cd1
.org 0x223a6
	ldr r1, [r3, #84]	@ 000223a6 596d
.org 0x223a8
	movs r0, #195	@ 000223a8 c320
.org 0x223aa
	lsls r0, r0, #13	@ 000223aa 4003
.org 0x223ac
	cmp r1, r0	@ 000223ac 8142
.org 0x223ae
	ble.n 0x223e0	@ 000223ae 17dd
.org 0x223b0
	ldr r0, [pc, #32]	@ 000223b0 0848
.org 0x223b2
	ldr r1, [pc, #36]	@ 000223b2 0949
.org 0x223b4
	ldr r1, [r1, #20]	@ 000223b4 4969
.org 0x223b6
	ldr r1, [r1, #20]	@ 000223b6 4969
.org 0x223b8
	bl 0x275f0	@ 000223b8 05f01af9
.org 0x223bc
	movs r0, #4	@ 000223bc 0420
.org 0x223be
	bl 0x1f63c	@ 000223be fdf73df9
.org 0x223c2
	ldr r2, [pc, #24]	@ 000223c2 064a
.org 0x223c4
	ldrb r1, [r2, #4]	@ 000223c4 1179
.org 0x223c6
	movs r0, #8	@ 000223c6 0820
.org 0x223c8
	orrs r0, r1	@ 000223c8 0843
.org 0x223ca
	strb r0, [r2, #4]	@ 000223ca 1071
.org 0x223cc
	movs r0, #5	@ 000223cc 0520
.org 0x223ce
	strb r0, [r4, #0]	@ 000223ce 2070
.org 0x223d0
	b.n 0x22510	@ 000223d0 9ee0
.org 0x223d2
	.byte 0x00	@ 000223d2 data
.org 0x223d3
	.byte 0x00	@ 000223d3 data
.org 0x223d4
	.byte 0x20,0xe9,0x02,0x02	@ 000223d4 data
.org 0x223d8
	.byte 0xf8,0x2c,0x84,0x08	@ 000223d8 data
.org 0x223dc
	.byte 0xb0,0xe8,0x02,0x02	@ 000223dc data
.org 0x223e0
	movs r1, #190	@ 000223e0 be21
.org 0x223e2
	lsls r1, r1, #1	@ 000223e2 4900
.org 0x223e4
	adds r5, r2, r1	@ 000223e4 5518
.org 0x223e6
	ldrb r0, [r5, #0]	@ 000223e6 2878
.org 0x223e8
	cmp r0, #5	@ 000223e8 0528
.org 0x223ea
	bne.n 0x223f6	@ 000223ea 04d1
.org 0x223ec
	movs r0, #3	@ 000223ec 0320
.org 0x223ee
	bl 0x1f63c	@ 000223ee fdf725f9
.org 0x223f2
	movs r0, #6	@ 000223f2 0620
.org 0x223f4
	b.n 0x2250e	@ 000223f4 8be0
.org 0x223f6
	cmp r0, #6	@ 000223f6 0628
.org 0x223f8
	bne.n 0x2245c	@ 000223f8 30d1
.org 0x223fa
	ldr r4, [pc, #76]	@ 000223fa 134c
.org 0x223fc
	ldrh r1, [r4, #8]	@ 000223fc 2189
.org 0x223fe
	movs r0, #16	@ 000223fe 1020
.org 0x22400
	ands r0, r1	@ 00022400 0840
.org 0x22402
	cmp r0, #0	@ 00022402 0028
.org 0x22404
	beq.n 0x2245c	@ 00022404 2ad0
.org 0x22406
	ldr r1, [pc, #68]	@ 00022406 1149
.org 0x22408
	ldrb r2, [r1, #0]	@ 00022408 0a78
.org 0x2240a
	movs r0, #128	@ 0002240a 8020
.org 0x2240c
	orrs r0, r2	@ 0002240c 1043
.org 0x2240e
	strb r0, [r1, #0]	@ 0002240e 0870
.org 0x22410
	ldrb r2, [r1, #1]	@ 00022410 4a78
.org 0x22412
	movs r0, #2	@ 00022412 0220
.org 0x22414
	orrs r0, r2	@ 00022414 1043
.org 0x22416
	strb r0, [r1, #1]	@ 00022416 4870
.org 0x22418
	adds r0, r4, #0	@ 00022418 201c
.org 0x2241a
	adds r0, #16	@ 0002241a 1030
.org 0x2241c
	ldr r1, [pc, #48]	@ 0002241c 0c49
.org 0x2241e
	ldr r1, [r1, #20]	@ 0002241e 4969
.org 0x22420
	ldr r1, [r1, #28]	@ 00022420 c969
.org 0x22422
	bl 0x275f0	@ 00022422 05f0e5f8
.org 0x22426
	ldrh r0, [r4, #8]	@ 00022426 2089
.org 0x22428
	ldr r2, [pc, #40]	@ 00022428 0a4a
.org 0x2242a
	ands r2, r0	@ 0002242a 0240
.org 0x2242c
	ldrb r1, [r4, #18]	@ 0002242c a17c
.org 0x2242e
	movs r0, #253	@ 0002242e fd20
.org 0x22430
	ands r0, r1	@ 00022430 0840
.org 0x22432
	strb r0, [r4, #18]	@ 00022432 a074
.org 0x22434
	ldr r3, [pc, #32]	@ 00022434 084b
.org 0x22436
	ldrb r1, [r3, #4]	@ 00022436 1979
.org 0x22438
	movs r0, #247	@ 00022438 f720
.org 0x2243a
	ands r0, r1	@ 0002243a 0840
.org 0x2243c
	strb r0, [r3, #4]	@ 0002243c 1871
.org 0x2243e
	movs r0, #1	@ 0002243e 0120
.org 0x22440
	orrs r2, r0	@ 00022440 0243
.org 0x22442
	strh r2, [r4, #8]	@ 00022442 2281
.org 0x22444
	movs r0, #7	@ 00022444 0720
.org 0x22446
	b.n 0x2250e	@ 00022446 62e0
.org 0x22448
	.byte 0x10,0xe9,0x02,0x02	@ 00022448 data
.org 0x2244c
	.byte 0xe0,0x32,0x00,0x03	@ 0002244c data
.org 0x22450
	.byte 0xf8,0x2c,0x84,0x08	@ 00022450 data
.org 0x22454
	.byte 0xef,0xff,0x00,0x00	@ 00022454 data
.org 0x22458
	.byte 0xb0,0xe8,0x02,0x02	@ 00022458 data
.org 0x2245c
	movs r0, #190	@ 0002245c be20
.org 0x2245e
	lsls r0, r0, #1	@ 0002245e 4000
.org 0x22460
	adds r4, r2, r0	@ 00022460 1418
.org 0x22462
	ldrb r0, [r4, #0]	@ 00022462 2078
.org 0x22464
	cmp r0, #7	@ 00022464 0728
.org 0x22466
	bne.n 0x22480	@ 00022466 0bd1
.org 0x22468
	ldr r1, [pc, #16]	@ 00022468 0449
.org 0x2246a
	ldrb r2, [r1, #0]	@ 0002246a 0a78
.org 0x2246c
	movs r0, #127	@ 0002246c 7f20
.org 0x2246e
	ands r0, r2	@ 0002246e 1040
.org 0x22470
	movs r2, #0	@ 00022470 0022
.org 0x22472
	strb r0, [r1, #0]	@ 00022472 0870
.org 0x22474
	strb r2, [r1, #1]	@ 00022474 4a70
.org 0x22476
	movs r0, #8	@ 00022476 0820
.org 0x22478
	strb r0, [r4, #0]	@ 00022478 2070
.org 0x2247a
	b.n 0x22510	@ 0002247a 49e0
.org 0x2247c
	.byte 0xe0,0x32,0x00,0x03	@ 0002247c data
.org 0x22480
	cmp r0, #8	@ 00022480 0828
.org 0x22482
	bne.n 0x224ac	@ 00022482 13d1
.org 0x22484
	ldr r1, [r3, #84]	@ 00022484 596d
.org 0x22486
	ldr r0, [pc, #28]	@ 00022486 0748
.org 0x22488
	cmp r1, r0	@ 00022488 8142
.org 0x2248a
	ble.n 0x224ac	@ 0002248a 0fdd
.org 0x2248c
	movs r0, #5	@ 0002248c 0520
.org 0x2248e
	bl 0x1f63c	@ 0002248e fdf7d5f8
.org 0x22492
	ldr r2, [pc, #20]	@ 00022492 054a
.org 0x22494
	ldrb r1, [r2, #4]	@ 00022494 1179
.org 0x22496
	movs r0, #8	@ 00022496 0820
.org 0x22498
	orrs r0, r1	@ 00022498 0843
.org 0x2249a
	strb r0, [r2, #4]	@ 0002249a 1071
.org 0x2249c
	movs r0, #9	@ 0002249c 0920
.org 0x2249e
	strb r0, [r4, #0]	@ 0002249e 2070
.org 0x224a0
	b.n 0x22510	@ 000224a0 36e0
.org 0x224a2
	.byte 0x00	@ 000224a2 data
.org 0x224a3
	.byte 0x00	@ 000224a3 data
.org 0x224a4
	.byte 0xff,0x4f,0x1a,0x00	@ 000224a4 data
.org 0x224a8
	.byte 0xb0,0xe8,0x02,0x02	@ 000224a8 data
.org 0x224ac
	movs r1, #190	@ 000224ac be21
.org 0x224ae
	lsls r1, r1, #1	@ 000224ae 4900
.org 0x224b0
	adds r5, r2, r1	@ 000224b0 5518
.org 0x224b2
	ldrb r0, [r5, #0]	@ 000224b2 2878

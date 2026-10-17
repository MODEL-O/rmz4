@ FUN_080312ec  entry 0x080312ec  size 290
.thumb
.org 0x312ec
FUN_080312ec:
	push {r4, r5, r6, lr}	@ 000312ec 70b5
.org 0x312ee
	adds r4, r0, #0	@ 000312ee 041c
.org 0x312f0
	ldrb r0, [r4, #30]	@ 000312f0 a07f
.org 0x312f2
	lsls r0, r0, #8	@ 000312f2 0002
.org 0x312f4
	adds r1, r4, #0	@ 000312f4 211c
.org 0x312f6
	adds r1, #112	@ 000312f6 7031
.org 0x312f8
	ldrb r1, [r1, #0]	@ 000312f8 0978
.org 0x312fa
	orrs r1, r0	@ 000312fa 0143
.org 0x312fc
	movs r2, #128	@ 000312fc 8022
.org 0x312fe
	lsls r2, r2, #3	@ 000312fe d200
.org 0x31300
	cmp r1, r2	@ 00031300 9142
.org 0x31302
	beq.n 0x3131a	@ 00031302 0ad0
.org 0x31304
	adds r0, r4, #0	@ 00031304 201c
.org 0x31306
	adds r0, #115	@ 00031306 7330
.org 0x31308
	ldrb r0, [r0, #0]	@ 00031308 0078
.org 0x3130a
	cmp r0, #3	@ 0003130a 0328
.org 0x3130c
	bne.n 0x3131a	@ 0003130c 05d1
.org 0x3130e
	adds r0, r4, #0	@ 0003130e 201c
.org 0x31310
	adds r1, r2, #0	@ 00031310 111c
.org 0x31312
	movs r2, #1	@ 00031312 0122
.org 0x31314
	movs r3, #4	@ 00031314 0423
.org 0x31316
	bl 0x1cfc8	@ 00031316 ebf757fe
.org 0x3131a
	movs r1, #150	@ 0003131a 9621
.org 0x3131c
	lsls r1, r1, #2	@ 0003131c 8900
.org 0x3131e
	adds r0, r4, r1	@ 0003131e 6018
.org 0x31320
	ldr r1, [r0, #0]	@ 00031320 0168
.org 0x31322
	movs r0, #32	@ 00031322 2020
.org 0x31324
	ands r0, r1	@ 00031324 0840
.org 0x31326
	cmp r0, #0	@ 00031326 0028
.org 0x31328
	beq.n 0x31356	@ 00031328 15d0
.org 0x3132a
	ldr r0, [r4, #92]	@ 0003132a e06d
.org 0x3132c
	cmp r0, #0	@ 0003132c 0028
.org 0x3132e
	bge.n 0x31332	@ 0003132e 00da
.org 0x31330
	negs r0, r0	@ 00031330 4042
.org 0x31332
	negs r0, r0	@ 00031332 4042
.org 0x31334
	lsls r0, r0, #16	@ 00031334 0004
.org 0x31336
	lsrs r3, r0, #16	@ 00031336 030c
.org 0x31338
	adds r1, r4, #0	@ 00031338 211c
.org 0x3133a
	adds r1, #76	@ 0003133a 4c31
.org 0x3133c
	movs r0, #0	@ 0003133c 0020
.org 0x3133e
	strb r0, [r1, #0]	@ 0003133e 0870
.org 0x31340
	adds r2, r4, #0	@ 00031340 221c
.org 0x31342
	adds r2, #74	@ 00031342 4a32
.org 0x31344
	ldrb r1, [r2, #0]	@ 00031344 1178
.org 0x31346
	subs r0, #17	@ 00031346 1138
.org 0x31348
	ands r0, r1	@ 00031348 0840
.org 0x3134a
	strb r0, [r2, #0]	@ 0003134a 1070
.org 0x3134c
	ldrb r1, [r4, #10]	@ 0003134c a17a
.org 0x3134e
	movs r0, #239	@ 0003134e ef20
.org 0x31350
	ands r0, r1	@ 00031350 0840
.org 0x31352
	strb r0, [r4, #10]	@ 00031352 a072
.org 0x31354
	b.n 0x31388	@ 00031354 18e0
.org 0x31356
	movs r0, #16	@ 00031356 1020
.org 0x31358
	ands r1, r0	@ 00031358 0140
.org 0x3135a
	cmp r1, #0	@ 0003135a 0029
.org 0x3135c
	beq.n 0x31386	@ 0003135c 13d0
.org 0x3135e
	ldr r0, [r4, #92]	@ 0003135e e06d
.org 0x31360
	cmp r0, #0	@ 00031360 0028
.org 0x31362
	bge.n 0x31366	@ 00031362 00da
.org 0x31364
	negs r0, r0	@ 00031364 4042
.org 0x31366
	lsls r0, r0, #16	@ 00031366 0004
.org 0x31368
	lsrs r3, r0, #16	@ 00031368 030c
.org 0x3136a
	adds r1, r4, #0	@ 0003136a 211c
.org 0x3136c
	adds r1, #76	@ 0003136c 4c31
.org 0x3136e
	movs r0, #1	@ 0003136e 0120
.org 0x31370
	strb r0, [r1, #0]	@ 00031370 0870
.org 0x31372
	adds r2, r4, #0	@ 00031372 221c
.org 0x31374
	adds r2, #74	@ 00031374 4a32
.org 0x31376
	ldrb r0, [r2, #0]	@ 00031376 1078
.org 0x31378
	movs r1, #16	@ 00031378 1021
.org 0x3137a
	orrs r0, r1	@ 0003137a 0843
.org 0x3137c
	strb r0, [r2, #0]	@ 0003137c 1070
.org 0x3137e
	ldrb r0, [r4, #10]	@ 0003137e a07a
.org 0x31380
	orrs r1, r0	@ 00031380 0143
.org 0x31382
	strb r1, [r4, #10]	@ 00031382 a172
.org 0x31384
	b.n 0x31388	@ 00031384 00e0
.org 0x31386
	movs r3, #0	@ 00031386 0023
.org 0x31388
	lsls r1, r3, #16	@ 00031388 1904
.org 0x3138a
	asrs r1, r1, #16	@ 0003138a 0914
.org 0x3138c
	ldr r0, [r4, #84]	@ 0003138c 606d
.org 0x3138e
	adds r0, r0, r1	@ 0003138e 4018
.org 0x31390
	str r0, [r4, #84]	@ 00031390 6065
.org 0x31392
	movs r0, #186	@ 00031392 ba20
.org 0x31394
	lsls r0, r0, #1	@ 00031394 4000
.org 0x31396
	adds r5, r4, r0	@ 00031396 2518
.org 0x31398
	ldrb r1, [r5, #0]	@ 00031398 2978
.org 0x3139a
	lsls r1, r1, #3	@ 0003139a c900
.org 0x3139c
	ldr r6, [pc, #112]	@ 0003139c 1c4e
.org 0x3139e
	adds r1, r1, r6	@ 0003139e 8919
.org 0x313a0
	adds r0, r4, #0	@ 000313a0 201c
.org 0x313a2
	movs r2, #0	@ 000313a2 0022
.org 0x313a4
	bl 0x2b7f0	@ 000313a4 faf724fa
.org 0x313a8
	ldrb r1, [r5, #0]	@ 000313a8 2978
.org 0x313aa
	lsls r1, r1, #3	@ 000313aa c900
.org 0x313ac
	adds r1, r1, r6	@ 000313ac 8919
.org 0x313ae
	adds r0, r4, #0	@ 000313ae 201c
.org 0x313b0
	movs r2, #1	@ 000313b0 0122
.org 0x313b2
	bl 0x2b7f0	@ 000313b2 faf71dfa
.org 0x313b6
	ldr r0, [r4, #88]	@ 000313b6 a06d
.org 0x313b8
	ldr r1, [r4, #96]	@ 000313b8 216e
.org 0x313ba
	adds r0, r0, r1	@ 000313ba 4018
.org 0x313bc
	str r0, [r4, #88]	@ 000313bc a065
.org 0x313be
	adds r0, r4, #0	@ 000313be 201c
.org 0x313c0
	bl 0x3851c	@ 000313c0 07f0acf8
.org 0x313c4
	lsls r0, r0, #16	@ 000313c4 0004
.org 0x313c6
	asrs r0, r0, #16	@ 000313c6 0014
.org 0x313c8
	ldr r1, [r4, #96]	@ 000313c8 216e
.org 0x313ca
	adds r1, r1, r0	@ 000313ca 0918
.org 0x313cc
	str r1, [r4, #96]	@ 000313cc 2166
.org 0x313ce
	ldrb r1, [r5, #0]	@ 000313ce 2978
.org 0x313d0
	lsls r1, r1, #3	@ 000313d0 c900
.org 0x313d2
	adds r1, r1, r6	@ 000313d2 8919
.org 0x313d4
	adds r0, r4, #0	@ 000313d4 201c
.org 0x313d6
	movs r2, #0	@ 000313d6 0022
.org 0x313d8
	bl 0x2bfe8	@ 000313d8 faf706fe
.org 0x313dc
	lsls r0, r0, #16	@ 000313dc 0004
.org 0x313de
	lsrs r1, r0, #16	@ 000313de 010c
.org 0x313e0
	cmp r1, #0	@ 000313e0 0029
.org 0x313e2
	bne.n 0x313f6	@ 000313e2 08d1
.org 0x313e4
	ldrb r1, [r5, #0]	@ 000313e4 2978
.org 0x313e6
	lsls r1, r1, #3	@ 000313e6 c900
.org 0x313e8
	adds r1, r1, r6	@ 000313e8 8919
.org 0x313ea
	adds r0, r4, #0	@ 000313ea 201c
.org 0x313ec
	movs r2, #1	@ 000313ec 0122
.org 0x313ee
	bl 0x2c2d4	@ 000313ee faf771ff
.org 0x313f2
	lsls r0, r0, #16	@ 000313f2 0004
.org 0x313f4
	lsrs r1, r0, #16	@ 000313f4 010c
.org 0x313f6
	ldr r0, [r4, #96]	@ 000313f6 206e
.org 0x313f8
	cmp r0, #0	@ 000313f8 0028
.org 0x313fa
	bgt.n 0x31400	@ 000313fa 01dc
.org 0x313fc
	cmp r1, #0	@ 000313fc 0029
.org 0x313fe
	beq.n 0x31408	@ 000313fe 03d0
.org 0x31400
	movs r1, #0	@ 00031400 0021
.org 0x31402
	movs r0, #2	@ 00031402 0220
.org 0x31404
	strb r0, [r4, #14]	@ 00031404 a073
.org 0x31406
	strb r1, [r4, #15]	@ 00031406 e173
.org 0x31408
	pop {r4, r5, r6}	@ 00031408 70bc
.org 0x3140a
	pop {r0}	@ 0003140a 01bc
.org 0x3140c
	bx r0	@ 0003140c 0047

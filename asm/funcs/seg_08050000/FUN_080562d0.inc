@ FUN_080562d0  entry 0x080562d0  size 256
.thumb
.org 0x562d0
FUN_080562d0:
	push {r4, r5, r6, r7, lr}	@ 000562d0 f0b5
.org 0x562d2
	mov r7, r8	@ 000562d2 4746
.org 0x562d4
	push {r7}	@ 000562d4 80b4
.org 0x562d6
	adds r4, r0, #0	@ 000562d6 041c
.org 0x562d8
	ldrb r0, [r4, #10]	@ 000562d8 a07a
.org 0x562da
	lsrs r7, r0, #4	@ 000562da 0709
.org 0x562dc
	movs r0, #1	@ 000562dc 0120
.org 0x562de
	mov r8, r0	@ 000562de 8046
.org 0x562e0
	ands r7, r0	@ 000562e0 0740
.org 0x562e2
	ldr r6, [pc, #236]	@ 000562e2 3b4e
.org 0x562e4
	ldr r5, [r6, #0]	@ 000562e4 3568
.org 0x562e6
	ldrb r0, [r4, #15]	@ 000562e6 e07b
.org 0x562e8
	cmp r0, #0	@ 000562e8 0028
.org 0x562ea
	bne.n 0x56316	@ 000562ea 14d1
.org 0x562ec
	movs r0, #251	@ 000562ec fb20
.org 0x562ee
	bl 0x2b10	@ 000562ee acf70ffc
.org 0x562f2
	ldr r1, [pc, #224]	@ 000562f2 3849
.org 0x562f4
	adds r0, r4, #0	@ 000562f4 201c
.org 0x562f6
	bl 0x1cf00	@ 000562f6 c6f703fe
.org 0x562fa
	ldr r2, [r6, #0]	@ 000562fa 3268
.org 0x562fc
	ldr r0, [r2, #84]	@ 000562fc 506d
.org 0x562fe
	ldr r1, [r4, #84]	@ 000562fe 616d
.org 0x56300
	subs r0, r0, r1	@ 00056300 401a
.org 0x56302
	str r0, [r4, #100]	@ 00056302 6066
.org 0x56304
	ldr r0, [r2, #88]	@ 00056304 906d
.org 0x56306
	ldr r1, [r4, #88]	@ 00056306 a16d
.org 0x56308
	subs r0, r0, r1	@ 00056308 401a
.org 0x5630a
	str r0, [r4, #104]	@ 0005630a a066
.org 0x5630c
	movs r0, #14	@ 0005630c 0e20
.org 0x5630e
	strb r0, [r4, #18]	@ 0005630e a074
.org 0x56310
	ldrb r0, [r4, #15]	@ 00056310 e07b
.org 0x56312
	adds r0, #1	@ 00056312 0130
.org 0x56314
	strb r0, [r4, #15]	@ 00056314 e073
.org 0x56316
	adds r0, r4, #0	@ 00056316 201c
.org 0x56318
	bl 0x1cff0	@ 00056318 c6f76afe
.org 0x5631c
	ldrb r0, [r4, #18]	@ 0005631c a07c
.org 0x5631e
	cmp r0, #0	@ 0005631e 0028
.org 0x56320
	beq.n 0x56326	@ 00056320 01d0
.org 0x56322
	subs r0, #1	@ 00056322 0138
.org 0x56324
	strb r0, [r4, #18]	@ 00056324 a074
.org 0x56326
	cmp r5, #0	@ 00056326 002d
.org 0x56328
	beq.n 0x5636e	@ 00056328 21d0
.org 0x5632a
	adds r0, r4, #0	@ 0005632a 201c
.org 0x5632c
	adds r0, #140	@ 0005632c 8c30
.org 0x5632e
	ldr r0, [r0, #0]	@ 0005632e 0068
.org 0x56330
	movs r1, #128	@ 00056330 8021
.org 0x56332
	lsls r1, r1, #4	@ 00056332 0901
.org 0x56334
	ands r0, r1	@ 00056334 0840
.org 0x56336
	cmp r0, #0	@ 00056336 0028
.org 0x56338
	beq.n 0x5636e	@ 00056338 19d0
.org 0x5633a
	ldr r2, [pc, #156]	@ 0005633a 274a
.org 0x5633c
	adds r1, r5, r2	@ 0005633c a918
.org 0x5633e
	movs r0, #0	@ 0005633e 0020
.org 0x56340
	mov r2, r8	@ 00056340 4246
.org 0x56342
	strb r2, [r1, #0]	@ 00056342 0a70
.org 0x56344
	movs r2, #185	@ 00056344 b922
.org 0x56346
	lsls r2, r2, #1	@ 00056346 5200
.org 0x56348
	adds r1, r5, r2	@ 00056348 a918
.org 0x5634a
	strb r0, [r1, #0]	@ 0005634a 0870
.org 0x5634c
	str r0, [r5, #96]	@ 0005634c 2866
.org 0x5634e
	ldr r0, [r4, #84]	@ 0005634e 606d
.org 0x56350
	ldr r1, [r4, #100]	@ 00056350 616e
.org 0x56352
	adds r0, r0, r1	@ 00056352 4018
.org 0x56354
	str r0, [r5, #84]	@ 00056354 6865
.org 0x56356
	ldr r0, [r4, #88]	@ 00056356 a06d
.org 0x56358
	ldr r1, [r4, #104]	@ 00056358 a16e
.org 0x5635a
	adds r0, r0, r1	@ 0005635a 4018
.org 0x5635c
	str r0, [r5, #88]	@ 0005635c a865
.org 0x5635e
	ldrb r0, [r4, #18]	@ 0005635e a07c
.org 0x56360
	cmp r0, #1	@ 00056360 0128
.org 0x56362
	bne.n 0x5636e	@ 00056362 04d1
.org 0x56364
	adds r0, r4, #0	@ 00056364 201c
.org 0x56366
	adds r0, #116	@ 00056366 7430
.org 0x56368
	ldr r1, [pc, #112]	@ 00056368 1c49
.org 0x5636a
	bl 0x5784	@ 0005636a aff70bfa
.org 0x5636e
	adds r0, r4, #0	@ 0005636e 201c
.org 0x56370
	adds r0, #115	@ 00056370 7330
.org 0x56372
	ldrb r0, [r0, #0]	@ 00056372 0078
.org 0x56374
	cmp r0, #3	@ 00056374 0328
.org 0x56376
	bne.n 0x563c6	@ 00056376 26d1
.org 0x56378
	ldrb r6, [r4, #18]	@ 00056378 a67c
.org 0x5637a
	cmp r6, #0	@ 0005637a 002e
.org 0x5637c
	bne.n 0x563c6	@ 0005637c 23d1
.org 0x5637e
	cmp r5, #0	@ 0005637e 002d
.org 0x56380
	beq.n 0x563c0	@ 00056380 1ed0
.org 0x56382
	adds r2, r5, #0	@ 00056382 2a1c
.org 0x56384
	adds r2, #180	@ 00056384 b432
.org 0x56386
	movs r0, #161	@ 00056386 a120
.org 0x56388
	lsls r0, r0, #1	@ 00056388 4000
.org 0x5638a
	adds r3, r5, r0	@ 0005638a 2b18
.org 0x5638c
	ldrb r0, [r3, #0]	@ 0005638c 1878
.org 0x5638e
	movs r1, #64	@ 0005638e 4021
.org 0x56390
	orrs r0, r1	@ 00056390 0843
.org 0x56392
	strb r0, [r3, #0]	@ 00056392 1870
.org 0x56394
	movs r0, #4	@ 00056394 0420
.org 0x56396
	strb r0, [r5, #13]	@ 00056396 6873
.org 0x56398
	strb r6, [r5, #14]	@ 00056398 ae73
.org 0x5639a
	lsls r0, r7, #1	@ 0005639a 7800
.org 0x5639c
	movs r1, #1	@ 0005639c 0121
.org 0x5639e
	subs r1, r1, r0	@ 0005639e 091a
.org 0x563a0
	lsls r0, r1, #3	@ 000563a0 c800
.org 0x563a2
	subs r0, r0, r1	@ 000563a2 401a
.org 0x563a4
	lsls r0, r0, #7	@ 000563a4 c001
.org 0x563a6
	str r0, [r2, #116]	@ 000563a6 5067
.org 0x563a8
	ldr r0, [pc, #52]	@ 000563a8 0d48
.org 0x563aa
	str r0, [r2, #120]	@ 000563aa 9067
.org 0x563ac
	str r6, [r2, #124]	@ 000563ac d667
.org 0x563ae
	movs r2, #154	@ 000563ae 9a22
.org 0x563b0
	lsls r2, r2, #1	@ 000563b0 5200
.org 0x563b2
	adds r1, r5, r2	@ 000563b2 a918
.org 0x563b4
	movs r0, #64	@ 000563b4 4020
.org 0x563b6
	str r0, [r1, #0]	@ 000563b6 0860
.org 0x563b8
	adds r0, #248	@ 000563b8 f830
.org 0x563ba
	adds r1, r5, r0	@ 000563ba 2918
.org 0x563bc
	movs r0, #16	@ 000563bc 1020
.org 0x563be
	strh r0, [r1, #0]	@ 000563be 0880
.org 0x563c0
	movs r0, #7	@ 000563c0 0720
.org 0x563c2
	strb r0, [r4, #14]	@ 000563c2 a073
.org 0x563c4
	strb r6, [r4, #15]	@ 000563c4 e673
.org 0x563c6
	pop {r3}	@ 000563c6 08bc
.org 0x563c8
	mov r8, r3	@ 000563c8 9846
.org 0x563ca
	pop {r4, r5, r6, r7}	@ 000563ca f0bc
.org 0x563cc
	pop {r0}	@ 000563cc 01bc
.org 0x563ce
	bx r0	@ 000563ce 0047

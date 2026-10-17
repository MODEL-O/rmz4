@ FUN_080fa310  entry 0x080fa310  size 216
.thumb
.org 0xfa310
FUN_080fa310:
	push {r4, r5, r6, lr}	@ 000fa310 70b5
.org 0xfa312
	adds r6, r0, #0	@ 000fa312 061c
.org 0xfa314
	bl 0x1cc9c	@ 000fa314 22f7c2fc
.org 0xfa318
	adds r0, r6, #0	@ 000fa318 301c
.org 0xfa31a
	adds r0, #100	@ 000fa31a 6430
.org 0xfa31c
	str r0, [r6, #64]	@ 000fa31c 3064
.org 0xfa31e
	ldrb r1, [r6, #10]	@ 000fa31e b17a
.org 0xfa320
	movs r0, #1	@ 000fa320 0120
.org 0xfa322
	movs r4, #0	@ 000fa322 0024
.org 0xfa324
	orrs r0, r1	@ 000fa324 0843
.org 0xfa326
	movs r1, #2	@ 000fa326 0221
.org 0xfa328
	orrs r0, r1	@ 000fa328 0843
.org 0xfa32a
	strb r0, [r6, #10]	@ 000fa32a b072
.org 0xfa32c
	movs r1, #140	@ 000fa32c 8c21
.org 0xfa32e
	lsls r1, r1, #8	@ 000fa32e 0902
.org 0xfa330
	adds r0, r6, #0	@ 000fa330 301c
.org 0xfa332
	bl 0x1cf00	@ 000fa332 22f7e5fd
.org 0xfa336
	adds r0, r6, #0	@ 000fa336 301c
.org 0xfa338
	bl 0x1cff0	@ 000fa338 22f75afe
.org 0xfa33c
	ldrb r2, [r6, #16]	@ 000fa33c 327c
.org 0xfa33e
	cmp r2, #0	@ 000fa33e 002a
.org 0xfa340
	beq.n 0xfa34a	@ 000fa340 03d0
.org 0xfa342
	ldrb r0, [r6, #10]	@ 000fa342 b07a
.org 0xfa344
	movs r1, #16	@ 000fa344 1021
.org 0xfa346
	orrs r0, r1	@ 000fa346 0843
.org 0xfa348
	b.n 0xfa350	@ 000fa348 02e0
.org 0xfa34a
	ldrb r1, [r6, #10]	@ 000fa34a b17a
.org 0xfa34c
	movs r0, #239	@ 000fa34c ef20
.org 0xfa34e
	ands r0, r1	@ 000fa34e 0840
.org 0xfa350
	strb r0, [r6, #10]	@ 000fa350 b072
.org 0xfa352
	movs r5, #1	@ 000fa352 0125
.org 0xfa354
	adds r1, r5, #0	@ 000fa354 291c
.org 0xfa356
	ands r1, r2	@ 000fa356 1140
.org 0xfa358
	adds r0, r6, #0	@ 000fa358 301c
.org 0xfa35a
	adds r0, #76	@ 000fa35a 4c30
.org 0xfa35c
	strb r1, [r0, #0]	@ 000fa35c 0170
.org 0xfa35e
	adds r3, r6, #0	@ 000fa35e 331c
.org 0xfa360
	adds r3, #74	@ 000fa360 4a33
.org 0xfa362
	lsls r1, r1, #4	@ 000fa362 0901
.org 0xfa364
	ldrb r2, [r3, #0]	@ 000fa364 1a78
.org 0xfa366
	movs r0, #17	@ 000fa366 1120
.org 0xfa368
	negs r0, r0	@ 000fa368 4042
.org 0xfa36a
	ands r0, r2	@ 000fa36a 1040
.org 0xfa36c
	orrs r0, r1	@ 000fa36c 0843
.org 0xfa36e
	strb r0, [r3, #0]	@ 000fa36e 1870
.org 0xfa370
	ldrb r0, [r6, #10]	@ 000fa370 b07a
.org 0xfa372
	movs r1, #4	@ 000fa372 0421
.org 0xfa374
	orrs r0, r1	@ 000fa374 0843
.org 0xfa376
	strb r0, [r6, #10]	@ 000fa376 b072
.org 0xfa378
	adds r4, r6, #0	@ 000fa378 341c
.org 0xfa37a
	adds r4, #116	@ 000fa37a 7434
.org 0xfa37c
	ldr r1, [pc, #104]	@ 000fa37c 1a49
.org 0xfa37e
	adds r2, r6, #0	@ 000fa37e 321c
.org 0xfa380
	adds r2, #84	@ 000fa380 5432
.org 0xfa382
	adds r0, r4, #0	@ 000fa382 201c
.org 0xfa384
	movs r3, #8	@ 000fa384 0823
.org 0xfa386
	bl 0x5760	@ 000fa386 0bf7ebf9
.org 0xfa38a
	str r6, [r4, #44]	@ 000fa38a e662
.org 0xfa38c
	ldr r0, [pc, #92]	@ 000fa38c 1748
.org 0xfa38e
	str r0, [r4, #36]	@ 000fa38e 6062
.org 0xfa390
	ldrb r1, [r6, #11]	@ 000fa390 f17a
.org 0xfa392
	movs r0, #8	@ 000fa392 0820
.org 0xfa394
	orrs r0, r1	@ 000fa394 0843
.org 0xfa396
	strb r0, [r6, #11]	@ 000fa396 f072
.org 0xfa398
	ldr r0, [pc, #84]	@ 000fa398 1548
.org 0xfa39a
	str r0, [r6, #48]	@ 000fa39a 3063
.org 0xfa39c
	movs r4, #0	@ 000fa39c 0024
.org 0xfa39e
	strh r5, [r6, #38]	@ 000fa39e f584
.org 0xfa3a0
	ldr r0, [r6, #84]	@ 000fa3a0 706d
.org 0xfa3a2
	ldr r1, [r6, #88]	@ 000fa3a2 b16d
.org 0xfa3a4
	bl 0x8534	@ 000fa3a4 0ef7c6f8
.org 0xfa3a8
	str r0, [r6, #88]	@ 000fa3a8 b065
.org 0xfa3aa
	adds r1, r6, #0	@ 000fa3aa 311c
.org 0xfa3ac
	adds r1, #180	@ 000fa3ac b431
.org 0xfa3ae
	ldr r0, [r6, #84]	@ 000fa3ae 706d
.org 0xfa3b0
	str r0, [r1, #0]	@ 000fa3b0 0860
.org 0xfa3b2
	adds r1, #4	@ 000fa3b2 0431
.org 0xfa3b4
	ldr r0, [r6, #88]	@ 000fa3b4 b06d
.org 0xfa3b6
	str r0, [r1, #0]	@ 000fa3b6 0860
.org 0xfa3b8
	adds r0, r6, #0	@ 000fa3b8 301c
.org 0xfa3ba
	adds r0, #190	@ 000fa3ba be30
.org 0xfa3bc
	strb r4, [r0, #0]	@ 000fa3bc 0470
.org 0xfa3be
	ldr r0, [r6, #84]	@ 000fa3be 706d
.org 0xfa3c0
	ldr r1, [r6, #88]	@ 000fa3c0 b16d
.org 0xfa3c2
	str r0, [r6, #100]	@ 000fa3c2 7066
.org 0xfa3c4
	str r1, [r6, #104]	@ 000fa3c4 b166
.org 0xfa3c6
	adds r0, r6, #0	@ 000fa3c6 301c
.org 0xfa3c8
	adds r0, #189	@ 000fa3c8 bd30
.org 0xfa3ca
	strb r4, [r0, #0]	@ 000fa3ca 0470
.org 0xfa3cc
	ldr r1, [pc, #36]	@ 000fa3cc 0949
.org 0xfa3ce
	ldrb r0, [r6, #9]	@ 000fa3ce 707a
.org 0xfa3d0
	lsls r0, r0, #2	@ 000fa3d0 8000
.org 0xfa3d2
	adds r0, r0, r1	@ 000fa3d2 4018
.org 0xfa3d4
	str r5, [r6, #12]	@ 000fa3d4 f560
.org 0xfa3d6
	ldr r0, [r0, #0]	@ 000fa3d6 0068
.org 0xfa3d8
	ldr r0, [r0, #4]	@ 000fa3d8 4068
.org 0xfa3da
	str r0, [r6, #20]	@ 000fa3da 7061
.org 0xfa3dc
	adds r0, r6, #0	@ 000fa3dc 301c
.org 0xfa3de
	bl 0xfa3f8	@ 000fa3de 00f00bf8
.org 0xfa3e2
	pop {r4, r5, r6}	@ 000fa3e2 70bc
.org 0xfa3e4
	pop {r0}	@ 000fa3e4 01bc
.org 0xfa3e6
	bx r0	@ 000fa3e6 0047

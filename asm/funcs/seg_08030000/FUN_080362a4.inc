@ FUN_080362a4  entry 0x080362a4  size 246
.thumb
.org 0x362a4
FUN_080362a4:
	push {r4, r5, r6, lr}	@ 000362a4 70b5
.org 0x362a6
	adds r4, r0, #0	@ 000362a6 041c
.org 0x362a8
	movs r6, #0	@ 000362a8 0026
.org 0x362aa
	adds r0, #180	@ 000362aa b430
.org 0x362ac
	ldrb r0, [r0, #12]	@ 000362ac 007b
.org 0x362ae
	cmp r0, #2	@ 000362ae 0228
.org 0x362b0
	bne.n 0x362b8	@ 000362b0 02d1
.org 0x362b2
	adds r0, r4, #0	@ 000362b2 201c
.org 0x362b4
	movs r1, #0	@ 000362b4 0021
.org 0x362b6
	b.n 0x362bc	@ 000362b6 01e0
.org 0x362b8
	adds r0, r4, #0	@ 000362b8 201c
.org 0x362ba
	movs r1, #1	@ 000362ba 0121
.org 0x362bc
	bl 0x3a428	@ 000362bc 04f0b4f8
.org 0x362c0
	lsls r0, r0, #24	@ 000362c0 0006
.org 0x362c2
	lsrs r0, r0, #24	@ 000362c2 000e
.org 0x362c4
	cmp r0, #2	@ 000362c4 0228
.org 0x362c6
	bne.n 0x362ca	@ 000362c6 00d1
.org 0x362c8
	movs r6, #1	@ 000362c8 0126
.org 0x362ca
	movs r1, #150	@ 000362ca 9621
.org 0x362cc
	lsls r1, r1, #2	@ 000362cc 8900
.org 0x362ce
	adds r0, r4, r1	@ 000362ce 6018
.org 0x362d0
	ldr r1, [r0, #0]	@ 000362d0 0168
.org 0x362d2
	movs r0, #64	@ 000362d2 4020
.org 0x362d4
	ands r0, r1	@ 000362d4 0840
.org 0x362d6
	cmp r0, #0	@ 000362d6 0028
.org 0x362d8
	beq.n 0x36324	@ 000362d8 24d0
.org 0x362da
	movs r0, #48	@ 000362da 3020
.org 0x362dc
	ands r1, r0	@ 000362dc 0140
.org 0x362de
	cmp r1, #0	@ 000362de 0029
.org 0x362e0
	beq.n 0x36304	@ 000362e0 10d0
.org 0x362e2
	ldr r1, [pc, #24]	@ 000362e2 0649
.org 0x362e4
	adds r0, r4, #0	@ 000362e4 201c
.org 0x362e6
	bl 0x1cf00	@ 000362e6 e6f70bfe
.org 0x362ea
	movs r0, #171	@ 000362ea ab20
.org 0x362ec
	lsls r0, r0, #1	@ 000362ec 4000
.org 0x362ee
	adds r1, r4, r0	@ 000362ee 2118
.org 0x362f0
	movs r0, #1	@ 000362f0 0120
.org 0x362f2
	strb r0, [r1, #0]	@ 000362f2 0870
.org 0x362f4
	cmp r6, #0	@ 000362f4 002e
.org 0x362f6
	bne.n 0x36384	@ 000362f6 45d1
.org 0x362f8
	ldr r1, [pc, #4]	@ 000362f8 0149
.org 0x362fa
	b.n 0x3637a	@ 000362fa 3ee0
.org 0x362fc
	.byte 0x02,0x28,0x00,0x00	@ 000362fc data
.org 0x36300
	.byte 0x72,0x02,0x00,0x00	@ 00036300 data
.org 0x36304
	movs r1, #160	@ 00036304 a021
.org 0x36306
	lsls r1, r1, #6	@ 00036306 8901
.org 0x36308
	adds r0, r4, #0	@ 00036308 201c
.org 0x3630a
	bl 0x1cf00	@ 0003630a e6f7f9fd
.org 0x3630e
	movs r0, #171	@ 0003630e ab20
.org 0x36310
	lsls r0, r0, #1	@ 00036310 4000
.org 0x36312
	adds r1, r4, r0	@ 00036312 2118
.org 0x36314
	movs r0, #3	@ 00036314 0320
.org 0x36316
	strb r0, [r1, #0]	@ 00036316 0870
.org 0x36318
	cmp r6, #0	@ 00036318 002e
.org 0x3631a
	bne.n 0x36384	@ 0003631a 33d1
.org 0x3631c
	ldr r1, [pc, #0]	@ 0003631c 0049
.org 0x3631e
	b.n 0x3637a	@ 0003631e 2ce0
.org 0x36320
	.byte 0x6d,0x02,0x00,0x00	@ 00036320 data
.org 0x36324
	movs r5, #128	@ 00036324 8025
.org 0x36326
	ands r5, r1	@ 00036326 0d40
.org 0x36328
	cmp r5, #0	@ 00036328 002d
.org 0x3632a
	beq.n 0x36364	@ 0003632a 1bd0
.org 0x3632c
	ldr r1, [pc, #40]	@ 0003632c 0a49
.org 0x3632e
	adds r0, r4, #0	@ 0003632e 201c
.org 0x36330
	bl 0x1cf00	@ 00036330 e6f7e6fd
.org 0x36334
	movs r0, #171	@ 00036334 ab20
.org 0x36336
	lsls r0, r0, #1	@ 00036336 4000
.org 0x36338
	adds r1, r4, r0	@ 00036338 2118
.org 0x3633a
	movs r0, #2	@ 0003633a 0220
.org 0x3633c
	strb r0, [r1, #0]	@ 0003633c 0870
.org 0x3633e
	cmp r6, #0	@ 0003633e 002e
.org 0x36340
	bne.n 0x36384	@ 00036340 20d1
.org 0x36342
	ldr r1, [pc, #24]	@ 00036342 0649
.org 0x36344
	adds r0, r4, r1	@ 00036344 6018
.org 0x36346
	ldrb r0, [r0, #0]	@ 00036346 0078
.org 0x36348
	cmp r0, #3	@ 00036348 0328
.org 0x3634a
	bne.n 0x3634e	@ 0003634a 00d1
.org 0x3634c
	movs r6, #1	@ 0003634c 0126
.org 0x3634e
	cmp r6, #0	@ 0003634e 002e
.org 0x36350
	bne.n 0x36384	@ 00036350 18d1
.org 0x36352
	ldr r1, [pc, #12]	@ 00036352 0349
.org 0x36354
	b.n 0x3637a	@ 00036354 11e0
.org 0x36356
	.byte 0x00	@ 00036356 data
.org 0x36357
	.byte 0x00	@ 00036357 data
.org 0x36358
	.byte 0x06,0x28,0x00,0x00	@ 00036358 data
.org 0x3635c
	.byte 0x6f,0x02,0x00,0x00	@ 0003635c data
.org 0x36360
	.byte 0x75,0x02,0x00,0x00	@ 00036360 data
.org 0x36364
	ldr r1, [pc, #76]	@ 00036364 1349
.org 0x36366
	adds r0, r4, #0	@ 00036366 201c
.org 0x36368
	bl 0x1cf00	@ 00036368 e6f7cafd
.org 0x3636c
	movs r1, #171	@ 0003636c ab21
.org 0x3636e
	lsls r1, r1, #1	@ 0003636e 4900
.org 0x36370
	adds r0, r4, r1	@ 00036370 6018
.org 0x36372
	strb r5, [r0, #0]	@ 00036372 0570
.org 0x36374
	cmp r6, #0	@ 00036374 002e
.org 0x36376
	bne.n 0x36384	@ 00036376 05d1
.org 0x36378
	ldr r1, [pc, #60]	@ 00036378 0f49
.org 0x3637a
	adds r0, r4, r1	@ 0003637a 6018
.org 0x3637c
	ldrb r0, [r0, #0]	@ 0003637c 0078
.org 0x3637e
	cmp r0, #3	@ 0003637e 0328
.org 0x36380
	bne.n 0x36384	@ 00036380 00d1
.org 0x36382
	movs r6, #1	@ 00036382 0126
.org 0x36384
	adds r0, r4, #0	@ 00036384 201c
.org 0x36386
	adds r1, r6, #0	@ 00036386 311c
.org 0x36388
	bl 0x40664	@ 00036388 0af06cf9
.org 0x3638c
	ldr r0, [pc, #44]	@ 0003638c 0b48
.org 0x3638e
	adds r1, r4, r0	@ 0003638e 2118
.org 0x36390
	movs r0, #14	@ 00036390 0e20
.org 0x36392
	strb r0, [r1, #0]	@ 00036392 0870
.org 0x36394
	ldr r1, [pc, #40]	@ 00036394 0a49
.org 0x36396
	adds r2, r4, r1	@ 00036396 6218
.org 0x36398
	ldrb r1, [r2, #0]	@ 00036398 1178

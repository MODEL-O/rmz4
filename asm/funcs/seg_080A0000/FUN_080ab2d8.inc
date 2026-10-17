@ FUN_080ab2d8  entry 0x080ab2d8  size 254
.thumb
.org 0xab2d8
FUN_080ab2d8:
	push {r4, r5, r6, lr}	@ 000ab2d8 70b5
.org 0xab2da
	adds r6, r0, #0	@ 000ab2da 061c
.org 0xab2dc
	ldrb r0, [r6, #10]	@ 000ab2dc b07a
.org 0xab2de
	lsrs r4, r0, #4	@ 000ab2de 0409
.org 0xab2e0
	movs r0, #1	@ 000ab2e0 0120
.org 0xab2e2
	ands r4, r0	@ 000ab2e2 0440
.org 0xab2e4
	ldrb r0, [r6, #15]	@ 000ab2e4 f07b
.org 0xab2e6
	cmp r0, #0	@ 000ab2e6 0028
.org 0xab2e8
	bne.n 0xab304	@ 000ab2e8 0cd1
.org 0xab2ea
	ldr r1, [pc, #96]	@ 000ab2ea 1849
.org 0xab2ec
	adds r0, r6, #0	@ 000ab2ec 301c
.org 0xab2ee
	bl 0x1cf00	@ 000ab2ee 71f707fe
.org 0xab2f2
	lsls r0, r4, #1	@ 000ab2f2 6000
.org 0xab2f4
	subs r0, #1	@ 000ab2f4 0138
.org 0xab2f6
	lsls r0, r0, #9	@ 000ab2f6 4002
.org 0xab2f8
	str r0, [r6, #92]	@ 000ab2f8 f065
.org 0xab2fa
	ldr r0, [pc, #84]	@ 000ab2fa 1548
.org 0xab2fc
	str r0, [r6, #96]	@ 000ab2fc 3066
.org 0xab2fe
	ldrb r0, [r6, #15]	@ 000ab2fe f07b
.org 0xab300
	adds r0, #1	@ 000ab300 0130
.org 0xab302
	strb r0, [r6, #15]	@ 000ab302 f073
.org 0xab304
	adds r0, r6, #0	@ 000ab304 301c
.org 0xab306
	bl 0x1cff0	@ 000ab306 71f773fe
.org 0xab30a
	adds r0, r6, #0	@ 000ab30a 301c
.org 0xab30c
	adds r0, #116	@ 000ab30c 7430
.org 0xab30e
	ldr r1, [pc, #68]	@ 000ab30e 1149
.org 0xab310
	bl 0x5784	@ 000ab310 5af738fa
.org 0xab314
	adds r0, r6, #0	@ 000ab314 301c
.org 0xab316
	adds r0, #180	@ 000ab316 b430
.org 0xab318
	movs r1, #0	@ 000ab318 0021
.org 0xab31a
	ldrsh r0, [r0, r1]	@ 000ab31a 405e
.org 0xab31c
	cmp r0, #0	@ 000ab31c 0028
.org 0xab31e
	beq.n 0xab3b0	@ 000ab31e 47d0
.org 0xab320
	ldr r0, [r6, #88]	@ 000ab320 b06d
.org 0xab322
	ldr r1, [r6, #96]	@ 000ab322 316e
.org 0xab324
	adds r0, r0, r1	@ 000ab324 4018
.org 0xab326
	str r0, [r6, #88]	@ 000ab326 b065
.org 0xab328
	ldr r4, [r6, #84]	@ 000ab328 746d
.org 0xab32a
	ldr r5, [r6, #88]	@ 000ab32a b56d
.org 0xab32c
	adds r0, r4, #0	@ 000ab32c 201c
.org 0xab32e
	adds r1, r5, #0	@ 000ab32e 291c
.org 0xab330
	bl 0x7c7c	@ 000ab330 5cf7a4fc
.org 0xab334
	lsls r0, r0, #16	@ 000ab334 0004
.org 0xab336
	cmp r0, #0	@ 000ab336 0028
.org 0xab338
	beq.n 0xab358	@ 000ab338 0ed0
.org 0xab33a
	adds r0, r4, #0	@ 000ab33a 201c
.org 0xab33c
	adds r1, r5, #0	@ 000ab33c 291c
.org 0xab33e
	bl 0x8748	@ 000ab33e 5df703fa
.org 0xab342
	str r0, [r6, #88]	@ 000ab342 b065
.org 0xab344
	movs r0, #0	@ 000ab344 0020
.org 0xab346
	str r0, [r6, #96]	@ 000ab346 3066
.org 0xab348
	b.n 0xab368	@ 000ab348 0ee0
.org 0xab34a
	.byte 0x00	@ 000ab34a data
.org 0xab34b
	.byte 0x00	@ 000ab34b data
.org 0xab34c
	.byte 0x04,0x90,0x00,0x00	@ 000ab34c data
.org 0xab350
	.byte 0x80,0xfb,0xff,0xff	@ 000ab350 data
.org 0xab354
	.byte 0xe4,0x2b,0x86,0x08	@ 000ab354 data
.org 0xab358
	ldr r0, [r6, #96]	@ 000ab358 306e
.org 0xab35a
	adds r0, #64	@ 000ab35a 4030
.org 0xab35c
	str r0, [r6, #96]	@ 000ab35c 3066
.org 0xab35e
	movs r1, #224	@ 000ab35e e021
.org 0xab360
	lsls r1, r1, #3	@ 000ab360 c900
.org 0xab362
	cmp r0, r1	@ 000ab362 8842
.org 0xab364
	ble.n 0xab368	@ 000ab364 00dd
.org 0xab366
	str r1, [r6, #96]	@ 000ab366 3166
.org 0xab368
	ldr r0, [r6, #84]	@ 000ab368 706d
.org 0xab36a
	ldr r1, [r6, #92]	@ 000ab36a f16d
.org 0xab36c
	adds r0, r0, r1	@ 000ab36c 4018
.org 0xab36e
	str r0, [r6, #84]	@ 000ab36e 7065
.org 0xab370
	cmp r1, #0	@ 000ab370 0029
.org 0xab372
	bge.n 0xab392	@ 000ab372 0eda
.org 0xab374
	ldr r4, [r6, #84]	@ 000ab374 746d
.org 0xab376
	ldr r5, [r6, #88]	@ 000ab376 b56d
.org 0xab378
	adds r0, r4, #0	@ 000ab378 201c
.org 0xab37a
	adds r1, r5, #0	@ 000ab37a 291c
.org 0xab37c
	bl 0x7c7c	@ 000ab37c 5cf77efc
.org 0xab380
	lsls r0, r0, #16	@ 000ab380 0004
.org 0xab382
	cmp r0, #0	@ 000ab382 0028
.org 0xab384
	beq.n 0xab3ce	@ 000ab384 23d0
.org 0xab386
	adds r0, r4, #0	@ 000ab386 201c
.org 0xab388
	adds r1, r5, #0	@ 000ab388 291c
.org 0xab38a
	bl 0x8988	@ 000ab38a 5df7fdfa
.org 0xab38e
	str r0, [r6, #84]	@ 000ab38e 7065
.org 0xab390
	b.n 0xab3ce	@ 000ab390 1de0
.org 0xab392
	ldr r4, [r6, #84]	@ 000ab392 746d
.org 0xab394
	ldr r5, [r6, #88]	@ 000ab394 b56d
.org 0xab396
	adds r0, r4, #0	@ 000ab396 201c
.org 0xab398
	adds r1, r5, #0	@ 000ab398 291c
.org 0xab39a
	bl 0x7c7c	@ 000ab39a 5cf76ffc
.org 0xab39e
	lsls r0, r0, #16	@ 000ab39e 0004
.org 0xab3a0
	cmp r0, #0	@ 000ab3a0 0028
.org 0xab3a2
	beq.n 0xab3ce	@ 000ab3a2 14d0
.org 0xab3a4
	adds r0, r4, #0	@ 000ab3a4 201c
.org 0xab3a6
	adds r1, r5, #0	@ 000ab3a6 291c
.org 0xab3a8
	bl 0x8868	@ 000ab3a8 5df75efa
.org 0xab3ac
	str r0, [r6, #84]	@ 000ab3ac 7065
.org 0xab3ae
	b.n 0xab3ce	@ 000ab3ae 0ee0
.org 0xab3b0
	ldr r0, [r6, #88]	@ 000ab3b0 b06d
.org 0xab3b2
	ldr r2, [r6, #96]	@ 000ab3b2 326e
.org 0xab3b4
	adds r0, r0, r2	@ 000ab3b4 8018
.org 0xab3b6
	str r0, [r6, #88]	@ 000ab3b6 b065
.org 0xab3b8
	ldr r0, [r6, #84]	@ 000ab3b8 706d
.org 0xab3ba
	ldr r1, [r6, #92]	@ 000ab3ba f16d
.org 0xab3bc
	adds r0, r0, r1	@ 000ab3bc 4018
.org 0xab3be
	str r0, [r6, #84]	@ 000ab3be 7065
.org 0xab3c0
	adds r2, #64	@ 000ab3c0 4032
.org 0xab3c2
	str r2, [r6, #96]	@ 000ab3c2 3266
.org 0xab3c4
	movs r0, #224	@ 000ab3c4 e020
.org 0xab3c6
	lsls r0, r0, #3	@ 000ab3c6 c000
.org 0xab3c8
	cmp r2, r0	@ 000ab3c8 8242
.org 0xab3ca
	ble.n 0xab3ce	@ 000ab3ca 00dd
.org 0xab3cc
	str r0, [r6, #96]	@ 000ab3cc 3066
.org 0xab3ce
	ldr r0, [r6, #96]	@ 000ab3ce 306e
.org 0xab3d0
	cmp r0, #0	@ 000ab3d0 0028
.org 0xab3d2
	blt.n 0xab3de	@ 000ab3d2 04db
.org 0xab3d4
	movs r1, #0	@ 000ab3d4 0021

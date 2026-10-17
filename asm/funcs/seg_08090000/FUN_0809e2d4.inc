@ FUN_0809e2d4  entry 0x0809e2d4  size 190
.thumb
.org 0x9e2d4
FUN_0809e2d4:
	push {r4, r5, r6, r7, lr}	@ 0009e2d4 f0b5
.org 0x9e2d6
	adds r4, r0, #0	@ 0009e2d6 041c
.org 0x9e2d8
	ldr r6, [r4, #40]	@ 0009e2d8 a66a
.org 0x9e2da
	ldrb r0, [r6, #10]	@ 0009e2da b07a
.org 0x9e2dc
	lsrs r5, r0, #4	@ 0009e2dc 0509
.org 0x9e2de
	movs r0, #1	@ 0009e2de 0120
.org 0x9e2e0
	ands r5, r0	@ 0009e2e0 0540
.org 0x9e2e2
	ldrb r0, [r4, #15]	@ 0009e2e2 e07b
.org 0x9e2e4
	cmp r0, #0	@ 0009e2e4 0028
.org 0x9e2e6
	bne.n 0x9e2fa	@ 0009e2e6 08d1
.org 0x9e2e8
	adds r0, r4, #0	@ 0009e2e8 201c
.org 0x9e2ea
	adds r0, #116	@ 0009e2ea 7430
.org 0x9e2ec
	ldr r1, [pc, #72]	@ 0009e2ec 1249
.org 0x9e2ee
	ldr r1, [r1, #4]	@ 0009e2ee 4968
.org 0x9e2f0
	bl 0x5784	@ 0009e2f0 67f748fa
.org 0x9e2f4
	ldrb r0, [r4, #15]	@ 0009e2f4 e07b
.org 0x9e2f6
	adds r0, #1	@ 0009e2f6 0130
.org 0x9e2f8
	strb r0, [r4, #15]	@ 0009e2f8 e073
.org 0x9e2fa
	ldrb r0, [r6, #12]	@ 0009e2fa 307b
.org 0x9e2fc
	cmp r0, #1	@ 0009e2fc 0128
.org 0x9e2fe
	bls.n 0x9e340	@ 0009e2fe 1fd9
.org 0x9e300
	ldrb r1, [r4, #10]	@ 0009e300 a17a
.org 0x9e302
	movs r0, #254	@ 0009e302 fe20
.org 0x9e304
	ands r0, r1	@ 0009e304 0840
.org 0x9e306
	movs r2, #0	@ 0009e306 0022
.org 0x9e308
	movs r1, #253	@ 0009e308 fd21
.org 0x9e30a
	ands r0, r1	@ 0009e30a 0840
.org 0x9e30c
	strb r0, [r4, #10]	@ 0009e30c a072
.org 0x9e30e
	adds r0, r4, #0	@ 0009e30e 201c
.org 0x9e310
	adds r0, #140	@ 0009e310 8c30
.org 0x9e312
	str r2, [r0, #0]	@ 0009e312 0260
.org 0x9e314
	adds r0, #4	@ 0009e314 0430
.org 0x9e316
	str r2, [r0, #0]	@ 0009e316 0260
.org 0x9e318
	adds r0, #4	@ 0009e318 0430
.org 0x9e31a
	strb r2, [r0, #0]	@ 0009e31a 0270
.org 0x9e31c
	ldrb r1, [r4, #10]	@ 0009e31c a17a
.org 0x9e31e
	movs r0, #251	@ 0009e31e fb20
.org 0x9e320
	ands r0, r1	@ 0009e320 0840
.org 0x9e322
	strb r0, [r4, #10]	@ 0009e322 a072
.org 0x9e324
	ldr r1, [pc, #20]	@ 0009e324 0549
.org 0x9e326
	ldrb r0, [r4, #9]	@ 0009e326 607a
.org 0x9e328
	lsls r0, r0, #2	@ 0009e328 8000
.org 0x9e32a
	adds r0, r0, r1	@ 0009e32a 4018
.org 0x9e32c
	movs r1, #3	@ 0009e32c 0321
.org 0x9e32e
	str r1, [r4, #12]	@ 0009e32e e160
.org 0x9e330
	ldr r0, [r0, #0]	@ 0009e330 0068
.org 0x9e332
	ldr r0, [r0, #12]	@ 0009e332 c068
.org 0x9e334
	str r0, [r4, #20]	@ 0009e334 6061
.org 0x9e336
	b.n 0x9e394	@ 0009e336 2de0
.org 0x9e338
	.byte 0xc8,0x15,0x86,0x08	@ 0009e338 data
.org 0x9e33c
	.byte 0x40,0xdb,0x85,0x08	@ 0009e33c data
.org 0x9e340
	adds r2, r5, #0	@ 0009e340 2a1c
.org 0x9e342
	cmp r2, #0	@ 0009e342 002a
.org 0x9e344
	beq.n 0x9e34e	@ 0009e344 03d0
.org 0x9e346
	ldrb r1, [r4, #10]	@ 0009e346 a17a
.org 0x9e348
	movs r0, #16	@ 0009e348 1020
.org 0x9e34a
	orrs r0, r1	@ 0009e34a 0843
.org 0x9e34c
	b.n 0x9e354	@ 0009e34c 02e0
.org 0x9e34e
	ldrb r1, [r4, #10]	@ 0009e34e a17a
.org 0x9e350
	movs r0, #239	@ 0009e350 ef20
.org 0x9e352
	ands r0, r1	@ 0009e352 0840
.org 0x9e354
	strb r0, [r4, #10]	@ 0009e354 a072
.org 0x9e356
	movs r7, #1	@ 0009e356 0127
.org 0x9e358
	adds r1, r7, #0	@ 0009e358 391c
.org 0x9e35a
	ands r1, r2	@ 0009e35a 1140
.org 0x9e35c
	adds r0, r4, #0	@ 0009e35c 201c
.org 0x9e35e
	adds r0, #76	@ 0009e35e 4c30
.org 0x9e360
	movs r5, #0	@ 0009e360 0025
.org 0x9e362
	strb r1, [r0, #0]	@ 0009e362 0170
.org 0x9e364
	adds r3, r4, #0	@ 0009e364 231c
.org 0x9e366
	adds r3, #74	@ 0009e366 4a33
.org 0x9e368
	lsls r1, r1, #4	@ 0009e368 0901
.org 0x9e36a
	ldrb r2, [r3, #0]	@ 0009e36a 1a78
.org 0x9e36c
	movs r0, #17	@ 0009e36c 1120
.org 0x9e36e
	negs r0, r0	@ 0009e36e 4042
.org 0x9e370
	ands r0, r2	@ 0009e370 1040
.org 0x9e372
	orrs r0, r1	@ 0009e372 0843
.org 0x9e374
	strb r0, [r3, #0]	@ 0009e374 1870
.org 0x9e376
	ldr r0, [r6, #84]	@ 0009e376 706d
.org 0x9e378
	ldr r1, [r6, #88]	@ 0009e378 b16d
.org 0x9e37a
	str r0, [r4, #84]	@ 0009e37a 6065
.org 0x9e37c
	str r1, [r4, #88]	@ 0009e37c a165
.org 0x9e37e
	adds r0, r4, #0	@ 0009e37e 201c
.org 0x9e380
	adds r0, #140	@ 0009e380 8c30
.org 0x9e382
	ldr r0, [r0, #0]	@ 0009e382 0068
.org 0x9e384
	movs r1, #128	@ 0009e384 8021
.org 0x9e386
	lsls r1, r1, #4	@ 0009e386 0901
.org 0x9e388
	ands r0, r1	@ 0009e388 0840
.org 0x9e38a
	cmp r0, #0	@ 0009e38a 0028
.org 0x9e38c
	beq.n 0x9e394	@ 0009e38c 02d0
.org 0x9e38e
	strb r7, [r4, #13]	@ 0009e38e 6773
.org 0x9e390
	strb r5, [r4, #14]	@ 0009e390 a573

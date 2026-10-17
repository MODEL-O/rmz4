@ FUN_080032f0  entry 0x080032f0  size 134
.thumb
.org 0x32f0
FUN_080032f0:
	push {r4, r5, r6, r7, lr}	@ 000032f0 f0b5
.org 0x32f2
	adds r4, r0, #0	@ 000032f2 041c
.org 0x32f4
	adds r3, r1, #0	@ 000032f4 0b1c
.org 0x32f6
	ldr r0, [pc, #128]	@ 000032f6 2048
.org 0x32f8
	movs r1, #128	@ 000032f8 8021
.org 0x32fa
	lsls r1, r1, #3	@ 000032fa c900
.org 0x32fc
	adds r7, r0, r1	@ 000032fc 4718
.org 0x32fe
	ldr r5, [r7, #0]	@ 000032fe 3d68
.org 0x3300
	cmp r5, r7	@ 00003300 bd42
.org 0x3302
	bcs.n 0x3370	@ 00003302 35d2
.org 0x3304
	ldr r2, [r4, #8]	@ 00003304 a268
.org 0x3306
	ldr r0, [r2, #4]	@ 00003306 5068
.org 0x3308
	ldr r1, [r3, #12]	@ 00003308 d968
.org 0x330a
	subs r0, r0, r1	@ 0000330a 401a
.org 0x330c
	lsls r0, r0, #8	@ 0000330c 0002
.org 0x330e
	asrs r6, r0, #16	@ 0000330e 0614
.org 0x3310
	adds r0, r6, #0	@ 00003310 301c
.org 0x3312
	adds r0, #64	@ 00003312 4030
.org 0x3314
	cmp r0, #223	@ 00003314 df28
.org 0x3316
	bhi.n 0x3370	@ 00003316 2bd8
.org 0x3318
	ldr r0, [r2, #0]	@ 00003318 1068
.org 0x331a
	ldr r1, [r3, #8]	@ 0000331a 9968
.org 0x331c
	subs r0, r0, r1	@ 0000331c 401a
.org 0x331e
	lsls r0, r0, #8	@ 0000331e 0002
.org 0x3320
	asrs r3, r0, #16	@ 00003320 0314
.org 0x3322
	adds r1, r3, #0	@ 00003322 191c
.org 0x3324
	adds r1, #128	@ 00003324 8031
.org 0x3326
	ldr r0, [pc, #84]	@ 00003326 1548
.org 0x3328
	cmp r1, r0	@ 00003328 8142
.org 0x332a
	bhi.n 0x3370	@ 0000332a 21d8
.org 0x332c
	ldr r2, [r4, #12]	@ 0000332c e268
.org 0x332e
	str r2, [r5, #0]	@ 0000332e 2a60
.org 0x3330
	movs r1, #255	@ 00003330 ff21
.org 0x3332
	ands r1, r6	@ 00003332 3140
.org 0x3334
	ldrb r0, [r4, #13]	@ 00003334 607b
.org 0x3336
	lsrs r0, r0, #6	@ 00003336 8009
.org 0x3338
	lsls r0, r0, #14	@ 00003338 8003
.org 0x333a
	orrs r1, r0	@ 0000333a 0143
.org 0x333c
	ldr r0, [pc, #64]	@ 0000333c 1048
.org 0x333e
	ands r3, r0	@ 0000333e 0340
.org 0x3340
	lsls r0, r3, #16	@ 00003340 1804
.org 0x3342
	orrs r1, r0	@ 00003342 0143
.org 0x3344
	ldrb r0, [r4, #18]	@ 00003344 a07c
.org 0x3346
	lsls r0, r0, #28	@ 00003346 0007
.org 0x3348
	orrs r1, r0	@ 00003348 0143
.org 0x334a
	ldrb r0, [r4, #19]	@ 0000334a e07c
.org 0x334c
	lsls r0, r0, #29	@ 0000334c 4007
.org 0x334e
	orrs r1, r0	@ 0000334e 0143
.org 0x3350
	ldrb r0, [r4, #15]	@ 00003350 e07b
.org 0x3352
	lsrs r0, r0, #6	@ 00003352 8009
.org 0x3354
	lsls r0, r0, #30	@ 00003354 8007
.org 0x3356
	orrs r1, r0	@ 00003356 0143
.org 0x3358
	orrs r2, r1	@ 00003358 0a43
.org 0x335a
	str r2, [r5, #0]	@ 0000335a 2a60
.org 0x335c
	ldrh r1, [r4, #16]	@ 0000335c 218a
.org 0x335e
	strh r1, [r5, #4]	@ 0000335e a980
.org 0x3360
	ldrh r0, [r4, #16]	@ 00003360 208a
.org 0x3362
	lsls r0, r0, #22	@ 00003362 8005
.org 0x3364
	lsrs r0, r0, #22	@ 00003364 800d
.org 0x3366
	orrs r1, r0	@ 00003366 0143
.org 0x3368
	strh r1, [r5, #4]	@ 00003368 a980
.org 0x336a
	adds r0, r5, #0	@ 0000336a 281c
.org 0x336c
	adds r0, #8	@ 0000336c 0830
.org 0x336e
	str r0, [r7, #0]	@ 0000336e 3860
.org 0x3370
	pop {r4, r5, r6, r7}	@ 00003370 f0bc
.org 0x3372
	pop {r0}	@ 00003372 01bc
.org 0x3374
	bx r0	@ 00003374 0047

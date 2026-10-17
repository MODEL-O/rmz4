@ FUN_0805d2d0  entry 0x0805d2d0  size 248
.thumb
.org 0x5d2d0
FUN_0805d2d0:
	push {r4, r5, r6, r7, lr}	@ 0005d2d0 f0b5
.org 0x5d2d2
	sub sp, #16	@ 0005d2d2 84b0
.org 0x5d2d4
	adds r5, r0, #0	@ 0005d2d4 051c
.org 0x5d2d6
	ldr r1, [pc, #224]	@ 0005d2d6 3849
.org 0x5d2d8
	mov r0, sp	@ 0005d2d8 6846
.org 0x5d2da
	movs r2, #6	@ 0005d2da 0622
.org 0x5d2dc
	bl 0x129258	@ 0005d2dc cbf0bcff
.org 0x5d2e0
	ldr r0, [pc, #216]	@ 0005d2e0 3648
.org 0x5d2e2
	ldr r1, [r0, #0]	@ 0005d2e2 0168
.org 0x5d2e4
	ldr r2, [r0, #4]	@ 0005d2e4 4268
.org 0x5d2e6
	str r1, [sp, #8]	@ 0005d2e6 0291
.org 0x5d2e8
	str r2, [sp, #12]	@ 0005d2e8 0392
.org 0x5d2ea
	ldrb r1, [r5, #16]	@ 0005d2ea 297c
.org 0x5d2ec
	ldrb r0, [r5, #10]	@ 0005d2ec a87a
.org 0x5d2ee
	lsrs r7, r0, #4	@ 0005d2ee 0709
.org 0x5d2f0
	movs r0, #1	@ 0005d2f0 0120
.org 0x5d2f2
	ands r7, r0	@ 0005d2f2 0740
.org 0x5d2f4
	ldr r0, [pc, #200]	@ 0005d2f4 3248
.org 0x5d2f6
	ldr r6, [r0, #0]	@ 0005d2f6 0668
.org 0x5d2f8
	ldrb r0, [r5, #15]	@ 0005d2f8 e87b
.org 0x5d2fa
	cmp r0, #0	@ 0005d2fa 0028
.org 0x5d2fc
	bne.n 0x5d31c	@ 0005d2fc 0ed1
.org 0x5d2fe
	lsls r0, r1, #1	@ 0005d2fe 4800
.org 0x5d300
	add r0, sp	@ 0005d300 6844
.org 0x5d302
	ldrb r1, [r0, #0]	@ 0005d302 0178
.org 0x5d304
	adds r0, r5, #0	@ 0005d304 281c
.org 0x5d306
	bl 0x5ee6c	@ 0005d306 01f0b1fd
.org 0x5d30a
	ldr r0, [r5, #88]	@ 0005d30a a86d
.org 0x5d30c
	ldr r2, [pc, #180]	@ 0005d30c 2d4a
.org 0x5d30e
	adds r0, r0, r2	@ 0005d30e 8018
.org 0x5d310
	str r0, [r5, #92]	@ 0005d310 e865
.org 0x5d312
	ldr r0, [pc, #180]	@ 0005d312 2d48
.org 0x5d314
	str r0, [r5, #96]	@ 0005d314 2866
.org 0x5d316
	ldrb r0, [r5, #15]	@ 0005d316 e87b
.org 0x5d318
	adds r0, #1	@ 0005d318 0130
.org 0x5d31a
	strb r0, [r5, #15]	@ 0005d31a e873
.org 0x5d31c
	adds r0, r5, #0	@ 0005d31c 281c
.org 0x5d31e
	bl 0x1cff0	@ 0005d31e bff767fe
.org 0x5d322
	adds r0, r5, #0	@ 0005d322 281c
.org 0x5d324
	adds r0, #116	@ 0005d324 7430
.org 0x5d326
	ldr r4, [pc, #164]	@ 0005d326 294c
.org 0x5d328
	ldr r3, [pc, #164]	@ 0005d328 294b
.org 0x5d32a
	adds r1, r5, #0	@ 0005d32a 291c
.org 0x5d32c
	adds r1, #184	@ 0005d32c b831
.org 0x5d32e
	ldrb r2, [r1, #0]	@ 0005d32e 0a78
.org 0x5d330
	lsls r1, r2, #1	@ 0005d330 5100
.org 0x5d332
	adds r1, r1, r3	@ 0005d332 c918
.org 0x5d334
	ldrh r1, [r1, #0]	@ 0005d334 0988
.org 0x5d336
	lsls r1, r1, #2	@ 0005d336 8900
.org 0x5d338
	adds r1, r1, r4	@ 0005d338 0919
.org 0x5d33a
	adds r3, r5, #0	@ 0005d33a 2b1c
.org 0x5d33c
	adds r3, #113	@ 0005d33c 7133
.org 0x5d33e
	movs r4, #0	@ 0005d33e 0024
.org 0x5d340
	ldrsb r4, [r3, r4]	@ 0005d340 1c57
.org 0x5d342
	ldr r1, [r1, #0]	@ 0005d342 0968
.org 0x5d344
	lsls r3, r4, #2	@ 0005d344 a300
.org 0x5d346
	adds r3, r3, r1	@ 0005d346 5b18
.org 0x5d348
	ldr r1, [pc, #136]	@ 0005d348 2249
.org 0x5d34a
	lsls r2, r2, #2	@ 0005d34a 9200
.org 0x5d34c
	adds r2, r2, r1	@ 0005d34c 5218
.org 0x5d34e
	ldr r1, [r2, #0]	@ 0005d34e 1168
.org 0x5d350
	adds r1, r1, r4	@ 0005d350 0919
.org 0x5d352
	ldrb r1, [r1, #0]	@ 0005d352 0978
.org 0x5d354
	lsls r2, r1, #1	@ 0005d354 4a00
.org 0x5d356
	adds r2, r2, r1	@ 0005d356 5218
.org 0x5d358
	lsls r2, r2, #3	@ 0005d358 d200
.org 0x5d35a
	ldr r1, [r3, #0]	@ 0005d35a 1968
.org 0x5d35c
	adds r1, r1, r2	@ 0005d35c 8918
.org 0x5d35e
	bl 0x5784	@ 0005d35e a8f711fa
.org 0x5d362
	ldr r0, [r5, #88]	@ 0005d362 a86d
.org 0x5d364
	ldr r1, [r5, #96]	@ 0005d364 296e
.org 0x5d366
	adds r0, r0, r1	@ 0005d366 4018
.org 0x5d368
	str r0, [r5, #88]	@ 0005d368 a865
.org 0x5d36a
	cmp r6, #0	@ 0005d36a 002e
.org 0x5d36c
	beq.n 0x5d3d8	@ 0005d36c 34d0
.org 0x5d36e
	adds r0, r5, #0	@ 0005d36e 281c
.org 0x5d370
	adds r0, #140	@ 0005d370 8c30
.org 0x5d372
	ldr r0, [r0, #0]	@ 0005d372 0068
.org 0x5d374
	movs r1, #128	@ 0005d374 8021
.org 0x5d376
	lsls r1, r1, #4	@ 0005d376 0901
.org 0x5d378
	ands r0, r1	@ 0005d378 0840
.org 0x5d37a
	cmp r0, #0	@ 0005d37a 0028
.org 0x5d37c
	beq.n 0x5d3d8	@ 0005d37c 2cd0
.org 0x5d37e
	movs r2, #0	@ 0005d37e 0022
.org 0x5d380
	str r2, [r6, #96]	@ 0005d380 3266
.org 0x5d382
	adds r0, r5, #0	@ 0005d382 281c
.org 0x5d384
	adds r0, #192	@ 0005d384 c030
.org 0x5d386
	ldr r1, [r5, #84]	@ 0005d386 696d
.org 0x5d388
	ldr r0, [r0, #0]	@ 0005d388 0068
.org 0x5d38a
	adds r1, r1, r0	@ 0005d38a 0918
.org 0x5d38c
	lsls r0, r7, #1	@ 0005d38c 7800
.org 0x5d38e
	subs r0, #1	@ 0005d38e 0138
.org 0x5d390
	ldr r3, [sp, #8]	@ 0005d390 029b
.org 0x5d392
	muls r0, r3	@ 0005d392 5843
.org 0x5d394
	adds r1, r1, r0	@ 0005d394 0918
.org 0x5d396
	str r1, [r6, #84]	@ 0005d396 7165
.org 0x5d398
	adds r1, r5, #0	@ 0005d398 291c
.org 0x5d39a
	adds r1, #196	@ 0005d39a c431
.org 0x5d39c
	ldr r0, [r5, #88]	@ 0005d39c a86d
.org 0x5d39e
	ldr r1, [r1, #0]	@ 0005d39e 0968
.org 0x5d3a0
	adds r0, r0, r1	@ 0005d3a0 4018
.org 0x5d3a2
	ldr r1, [sp, #12]	@ 0005d3a2 0399
.org 0x5d3a4
	adds r0, r0, r1	@ 0005d3a4 4018
.org 0x5d3a6
	str r0, [r6, #88]	@ 0005d3a6 b065
.org 0x5d3a8
	ldr r1, [r5, #88]	@ 0005d3a8 a96d
.org 0x5d3aa
	ldr r0, [r5, #92]	@ 0005d3aa e86d
.org 0x5d3ac
	cmp r1, r0	@ 0005d3ac 8142
.org 0x5d3ae
	bgt.n 0x5d3e0	@ 0005d3ae 17dc
.org 0x5d3b0
	movs r0, #4	@ 0005d3b0 0420
.org 0x5d3b2
	strb r0, [r5, #14]	@ 0005d3b2 a873
.org 0x5d3b4
	strb r2, [r5, #15]	@ 0005d3b4 ea73
.org 0x5d3b6
	b.n 0x5d3e0	@ 0005d3b6 13e0
.org 0x5d3b8
	.byte 0x94,0x97,0x12,0x08	@ 0005d3b8 data
.org 0x5d3bc
	.byte 0x9c,0x97,0x12,0x08	@ 0005d3bc data
.org 0x5d3c0
	.byte 0xf0,0xdb,0x02,0x02	@ 0005d3c0 data
.org 0x5d3c4
	.byte 0x00,0xb0,0xff,0xff	@ 0005d3c4 data

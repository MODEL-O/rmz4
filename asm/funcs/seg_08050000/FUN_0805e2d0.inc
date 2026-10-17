@ FUN_0805e2d0  entry 0x0805e2d0  size 236
.thumb
.org 0x5e2d0
FUN_0805e2d0:
	push {r4, r5, lr}	@ 0005e2d0 30b5
.org 0x5e2d2
	adds r5, r0, #0	@ 0005e2d2 051c
.org 0x5e2d4
	ldrb r0, [r5, #15]	@ 0005e2d4 e87b
.org 0x5e2d6
	cmp r0, #0	@ 0005e2d6 0028
.org 0x5e2d8
	bne.n 0x5e340	@ 0005e2d8 32d1
.org 0x5e2da
	ldr r0, [pc, #192]	@ 0005e2da 3048
.org 0x5e2dc
	ldr r1, [pc, #192]	@ 0005e2dc 3049
.org 0x5e2de
	adds r1, #168	@ 0005e2de a831
.org 0x5e2e0
	ldrh r1, [r1, #0]	@ 0005e2e0 0988
.org 0x5e2e2
	ldrh r2, [r0, #6]	@ 0005e2e2 c288
.org 0x5e2e4
	lsrs r2, r2, #6	@ 0005e2e4 9209
.org 0x5e2e6
	subs r1, r1, r2	@ 0005e2e6 891a
.org 0x5e2e8
	lsls r1, r1, #5	@ 0005e2e8 4901
.org 0x5e2ea
	movs r2, #128	@ 0005e2ea 8022
.org 0x5e2ec
	lsls r2, r2, #9	@ 0005e2ec 5202
.org 0x5e2ee
	adds r1, r1, r2	@ 0005e2ee 8918
.org 0x5e2f0
	bl 0x1d30	@ 0005e2f0 a3f71efd
.org 0x5e2f4
	ldr r0, [pc, #172]	@ 0005e2f4 2b48
.org 0x5e2f6
	ldr r1, [pc, #176]	@ 0005e2f6 2c49
.org 0x5e2f8
	adds r1, #168	@ 0005e2f8 a831
.org 0x5e2fa
	ldrh r1, [r1, #0]	@ 0005e2fa 0988
.org 0x5e2fc
	ldrb r2, [r0, #7]	@ 0005e2fc c279
.org 0x5e2fe
	subs r1, r1, r2	@ 0005e2fe 891a
.org 0x5e300
	lsls r1, r1, #5	@ 0005e300 4901
.org 0x5e302
	movs r2, #128	@ 0005e302 8022
.org 0x5e304
	lsls r2, r2, #2	@ 0005e304 9200
.org 0x5e306
	adds r1, r1, r2	@ 0005e306 8918
.org 0x5e308
	bl 0x2208	@ 0005e308 a3f77eff
.org 0x5e30c
	adds r4, r5, #0	@ 0005e30c 2c1c
.org 0x5e30e
	adds r4, #204	@ 0005e30e cc34
.org 0x5e310
	ldr r0, [r4, #0]	@ 0005e310 2068
.org 0x5e312
	cmp r0, #0	@ 0005e312 0028
.org 0x5e314
	bne.n 0x5e336	@ 0005e314 0fd1
.org 0x5e316
	ldr r2, [pc, #148]	@ 0005e316 254a
.org 0x5e318
	ldr r1, [r2, #0]	@ 0005e318 1168
.org 0x5e31a
	ldr r0, [pc, #148]	@ 0005e31a 2548
.org 0x5e31c
	muls r1, r0	@ 0005e31c 4143
.org 0x5e31e
	ldr r0, [pc, #148]	@ 0005e31e 2548
.org 0x5e320
	adds r1, r1, r0	@ 0005e320 0918
.org 0x5e322
	lsls r1, r1, #1	@ 0005e322 4900
.org 0x5e324
	lsrs r0, r1, #1	@ 0005e324 4808
.org 0x5e326
	str r0, [r2, #0]	@ 0005e326 1060
.org 0x5e328
	lsrs r1, r1, #17	@ 0005e328 490c
.org 0x5e32a
	movs r0, #3	@ 0005e32a 0320
.org 0x5e32c
	ands r1, r0	@ 0005e32c 0140
.org 0x5e32e
	adds r0, r5, #0	@ 0005e32e 281c
.org 0x5e330
	bl 0xc4bd4	@ 0005e330 66f050fc
.org 0x5e334
	str r0, [r4, #0]	@ 0005e334 2060
.org 0x5e336
	movs r0, #16	@ 0005e336 1020
.org 0x5e338
	strb r0, [r5, #18]	@ 0005e338 a874
.org 0x5e33a
	ldrb r0, [r5, #15]	@ 0005e33a e87b
.org 0x5e33c
	adds r0, #1	@ 0005e33c 0130
.org 0x5e33e
	strb r0, [r5, #15]	@ 0005e33e e873
.org 0x5e340
	adds r0, r5, #0	@ 0005e340 281c
.org 0x5e342
	bl 0x1cff0	@ 0005e342 bef755fe
.org 0x5e346
	adds r0, r5, #0	@ 0005e346 281c
.org 0x5e348
	adds r0, #116	@ 0005e348 7430
.org 0x5e34a
	ldr r4, [pc, #108]	@ 0005e34a 1b4c
.org 0x5e34c
	ldr r3, [pc, #108]	@ 0005e34c 1b4b
.org 0x5e34e
	adds r1, r5, #0	@ 0005e34e 291c
.org 0x5e350
	adds r1, #184	@ 0005e350 b831
.org 0x5e352
	ldrb r2, [r1, #0]	@ 0005e352 0a78
.org 0x5e354
	lsls r1, r2, #1	@ 0005e354 5100
.org 0x5e356
	adds r1, r1, r3	@ 0005e356 c918
.org 0x5e358
	ldrh r1, [r1, #0]	@ 0005e358 0988
.org 0x5e35a
	lsls r1, r1, #2	@ 0005e35a 8900
.org 0x5e35c
	adds r1, r1, r4	@ 0005e35c 0919
.org 0x5e35e
	adds r3, r5, #0	@ 0005e35e 2b1c
.org 0x5e360
	adds r3, #113	@ 0005e360 7133
.org 0x5e362
	movs r4, #0	@ 0005e362 0024
.org 0x5e364
	ldrsb r4, [r3, r4]	@ 0005e364 1c57
.org 0x5e366
	ldr r1, [r1, #0]	@ 0005e366 0968
.org 0x5e368
	lsls r3, r4, #2	@ 0005e368 a300
.org 0x5e36a
	adds r3, r3, r1	@ 0005e36a 5b18
.org 0x5e36c
	ldr r1, [pc, #80]	@ 0005e36c 1449
.org 0x5e36e
	lsls r2, r2, #2	@ 0005e36e 9200
.org 0x5e370
	adds r2, r2, r1	@ 0005e370 5218
.org 0x5e372
	ldr r1, [r2, #0]	@ 0005e372 1168
.org 0x5e374
	adds r1, r1, r4	@ 0005e374 0919
.org 0x5e376
	ldrb r1, [r1, #0]	@ 0005e376 0978
.org 0x5e378
	lsls r2, r1, #1	@ 0005e378 4a00
.org 0x5e37a
	adds r2, r2, r1	@ 0005e37a 5218
.org 0x5e37c
	lsls r2, r2, #3	@ 0005e37c d200
.org 0x5e37e
	ldr r1, [r3, #0]	@ 0005e37e 1968
.org 0x5e380
	adds r1, r1, r2	@ 0005e380 8918
.org 0x5e382
	bl 0x5784	@ 0005e382 a7f7fff9
.org 0x5e386
	adds r2, r5, #0	@ 0005e386 2a1c
.org 0x5e388
	adds r2, #204	@ 0005e388 cc32
.org 0x5e38a
	ldr r1, [r2, #0]	@ 0005e38a 1168
.org 0x5e38c
	cmp r1, #0	@ 0005e38c 0029
.org 0x5e38e
	beq.n 0x5e3ca	@ 0005e38e 1cd0
.org 0x5e390
	ldrb r0, [r1, #12]	@ 0005e390 087b
.org 0x5e392
	cmp r0, #1	@ 0005e392 0128
.org 0x5e394
	bls.n 0x5e3c4	@ 0005e394 16d9
.org 0x5e396
	movs r0, #0	@ 0005e396 0020
.org 0x5e398
	str r0, [r2, #0]	@ 0005e398 1060
.org 0x5e39a
	b.n 0x5e3ca	@ 0005e39a 16e0
.org 0x5e39c
	.byte 0x90,0x46,0xc4,0x08	@ 0005e39c data
.org 0x5e3a0
	.byte 0x40,0xe0,0x02,0x02	@ 0005e3a0 data
.org 0x5e3a4
	.byte 0x9c,0x46,0xc4,0x08	@ 0005e3a4 data
.org 0x5e3a8
	.byte 0x40,0xde,0x02,0x02	@ 0005e3a8 data
.org 0x5e3ac
	.byte 0x38,0xdc,0x02,0x02	@ 0005e3ac data
.org 0x5e3b0
	.byte 0xfd,0x43,0x03,0x00	@ 0005e3b0 data
.org 0x5e3b4
	.byte 0xc3,0x9e,0x26,0x00	@ 0005e3b4 data
.org 0x5e3b8
	.byte 0xa8,0xa7,0x85,0x08	@ 0005e3b8 data

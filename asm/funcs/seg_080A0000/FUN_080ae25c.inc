@ FUN_080ae25c  entry 0x080ae25c  size 302
.thumb
.org 0xae25c
FUN_080ae25c:
	push {r4, r5, r6, r7, lr}	@ 000ae25c f0b5
.org 0xae25e
	mov r7, sl	@ 000ae25e 5746
.org 0xae260
	mov r6, r9	@ 000ae260 4e46
.org 0xae262
	mov r5, r8	@ 000ae262 4546
.org 0xae264
	push {r5, r6, r7}	@ 000ae264 e0b4
.org 0xae266
	adds r7, r0, #0	@ 000ae266 071c
.org 0xae268
	ldrb r4, [r7, #14]	@ 000ae268 bc7b
.org 0xae26a
	cmp r4, #0	@ 000ae26a 002c
.org 0xae26c
	bne.n 0xae33a	@ 000ae26c 65d1
.org 0xae26e
	adds r0, #140	@ 000ae26e 8c30
.org 0xae270
	str r4, [r0, #0]	@ 000ae270 0460
.org 0xae272
	adds r0, #4	@ 000ae272 0430
.org 0xae274
	str r4, [r0, #0]	@ 000ae274 0460
.org 0xae276
	adds r0, #4	@ 000ae276 0430
.org 0xae278
	strb r4, [r0, #0]	@ 000ae278 0470
.org 0xae27a
	ldrb r1, [r7, #10]	@ 000ae27a b97a
.org 0xae27c
	movs r0, #251	@ 000ae27c fb20
.org 0xae27e
	ands r0, r1	@ 000ae27e 0840
.org 0xae280
	strb r0, [r7, #10]	@ 000ae280 b872
.org 0xae282
	ldrb r0, [r7, #30]	@ 000ae282 b87f
.org 0xae284
	lsls r0, r0, #8	@ 000ae284 0002
.org 0xae286
	adds r1, r7, #0	@ 000ae286 391c
.org 0xae288
	adds r1, #112	@ 000ae288 7031
.org 0xae28a
	ldrb r1, [r1, #0]	@ 000ae28a 0978
.org 0xae28c
	orrs r0, r1	@ 000ae28c 0843
.org 0xae28e
	ldr r1, [pc, #128]	@ 000ae28e 2049
.org 0xae290
	cmp r0, r1	@ 000ae290 8842
.org 0xae292
	bne.n 0xae324	@ 000ae292 47d1
.org 0xae294
	movs r0, #84	@ 000ae294 5420
.org 0xae296
	adds r0, r0, r7	@ 000ae296 c019
.org 0xae298
	mov sl, r0	@ 000ae298 8246
.org 0xae29a
	ldr r5, [pc, #120]	@ 000ae29a 1e4d
.org 0xae29c
	ldr r4, [pc, #120]	@ 000ae29c 1e4c
.org 0xae29e
	ldr r0, [r4, #0]	@ 000ae29e 2068
.org 0xae2a0
	ldr r1, [pc, #120]	@ 000ae2a0 1e49
.org 0xae2a2
	mov r9, r1	@ 000ae2a2 8946
.org 0xae2a4
	mov r3, r9	@ 000ae2a4 4b46
.org 0xae2a6
	muls r3, r0	@ 000ae2a6 4343
.org 0xae2a8
	ldr r2, [pc, #116]	@ 000ae2a8 1d4a
.org 0xae2aa
	mov r8, r2	@ 000ae2aa 9046
.org 0xae2ac
	add r3, r8	@ 000ae2ac 4344
.org 0xae2ae
	lsls r3, r3, #1	@ 000ae2ae 5b00
.org 0xae2b0
	lsrs r0, r3, #1	@ 000ae2b0 5808
.org 0xae2b2
	str r0, [r4, #0]	@ 000ae2b2 2060
.org 0xae2b4
	lsrs r3, r3, #17	@ 000ae2b4 5b0c
.org 0xae2b6
	movs r6, #1	@ 000ae2b6 0126
.org 0xae2b8
	ands r3, r6	@ 000ae2b8 3340
.org 0xae2ba
	lsls r3, r3, #4	@ 000ae2ba 1b01
.org 0xae2bc
	mov r0, sl	@ 000ae2bc 5046
.org 0xae2be
	adds r1, r5, #0	@ 000ae2be 291c
.org 0xae2c0
	movs r2, #0	@ 000ae2c0 0022
.org 0xae2c2
	bl 0xd4c8c	@ 000ae2c2 26f0e3fc
.org 0xae2c6
	adds r1, r5, #0	@ 000ae2c6 291c
.org 0xae2c8
	adds r1, #28	@ 000ae2c8 1c31
.org 0xae2ca
	ldr r0, [r4, #0]	@ 000ae2ca 2068
.org 0xae2cc
	mov r3, r9	@ 000ae2cc 4b46
.org 0xae2ce
	muls r3, r0	@ 000ae2ce 4343
.org 0xae2d0
	add r3, r8	@ 000ae2d0 4344
.org 0xae2d2
	lsls r3, r3, #1	@ 000ae2d2 5b00
.org 0xae2d4
	lsrs r0, r3, #1	@ 000ae2d4 5808
.org 0xae2d6
	str r0, [r4, #0]	@ 000ae2d6 2060
.org 0xae2d8
	lsrs r3, r3, #17	@ 000ae2d8 5b0c
.org 0xae2da
	ands r3, r6	@ 000ae2da 3340
.org 0xae2dc
	lsls r3, r3, #4	@ 000ae2dc 1b01
.org 0xae2de
	mov r0, sl	@ 000ae2de 5046
.org 0xae2e0
	movs r2, #0	@ 000ae2e0 0022
.org 0xae2e2
	bl 0xd4c8c	@ 000ae2e2 26f0d3fc
.org 0xae2e6
	adds r5, #56	@ 000ae2e6 3835
.org 0xae2e8
	ldr r0, [r4, #0]	@ 000ae2e8 2068
.org 0xae2ea
	mov r3, r9	@ 000ae2ea 4b46
.org 0xae2ec
	muls r3, r0	@ 000ae2ec 4343
.org 0xae2ee
	add r3, r8	@ 000ae2ee 4344
.org 0xae2f0
	lsls r3, r3, #1	@ 000ae2f0 5b00
.org 0xae2f2
	lsrs r0, r3, #1	@ 000ae2f2 5808
.org 0xae2f4
	str r0, [r4, #0]	@ 000ae2f4 2060
.org 0xae2f6
	lsrs r3, r3, #17	@ 000ae2f6 5b0c
.org 0xae2f8
	ands r3, r6	@ 000ae2f8 3340
.org 0xae2fa
	lsls r3, r3, #4	@ 000ae2fa 1b01
.org 0xae2fc
	mov r0, sl	@ 000ae2fc 5046
.org 0xae2fe
	adds r1, r5, #0	@ 000ae2fe 291c
.org 0xae300
	movs r2, #0	@ 000ae300 0022
.org 0xae302
	bl 0xd4c8c	@ 000ae302 26f0c3fc
.org 0xae306
	ldrb r1, [r7, #10]	@ 000ae306 b97a
.org 0xae308
	movs r0, #254	@ 000ae308 fe20
.org 0xae30a
	ands r0, r1	@ 000ae30a 0840
.org 0xae30c
	strb r0, [r7, #10]	@ 000ae30c b872
.org 0xae30e
	b.n 0xae37e	@ 000ae30e 36e0
.org 0xae310
	.byte 0x03,0xa2,0x00,0x00	@ 000ae310 data
.org 0xae314
	.byte 0x7c,0x2f,0x86,0x08	@ 000ae314 data
.org 0xae318
	.byte 0x38,0xdc,0x02,0x02	@ 000ae318 data
.org 0xae31c
	.byte 0xfd,0x43,0x03,0x00	@ 000ae31c data
.org 0xae320
	.byte 0xc3,0x9e,0x26,0x00	@ 000ae320 data
.org 0xae324
	ldr r1, [pc, #120]	@ 000ae324 1e49
.org 0xae326
	adds r0, r7, #0	@ 000ae326 381c
.org 0xae328
	bl 0x1cf00	@ 000ae328 6ef7eafd
.org 0xae32c
	strb r4, [r7, #18]	@ 000ae32c bc74
.org 0xae32e
	ldr r0, [pc, #116]	@ 000ae32e 1d48
.org 0xae330
	bl 0x2b10	@ 000ae330 54f7eefb
.org 0xae334
	ldrb r0, [r7, #14]	@ 000ae334 b87b
.org 0xae336
	adds r0, #1	@ 000ae336 0130
.org 0xae338
	strb r0, [r7, #14]	@ 000ae338 b873
.org 0xae33a
	adds r0, r7, #0	@ 000ae33a 381c
.org 0xae33c
	bl 0x1cff0	@ 000ae33c 6ef758fe
.org 0xae340
	ldrb r1, [r7, #18]	@ 000ae340 b97c
.org 0xae342
	adds r0, r1, #1	@ 000ae342 481c
.org 0xae344
	strb r0, [r7, #18]	@ 000ae344 b874
.org 0xae346
	movs r0, #1	@ 000ae346 0120
.org 0xae348
	ands r0, r1	@ 000ae348 0840
.org 0xae34a
	cmp r0, #0	@ 000ae34a 0028
.org 0xae34c
	bne.n 0xae374	@ 000ae34c 12d1
.org 0xae34e
	adds r0, r7, #0	@ 000ae34e 381c
.org 0xae350
	adds r0, #84	@ 000ae350 5430
.org 0xae352
	ldr r1, [pc, #84]	@ 000ae352 1549
.org 0xae354
	ldr r4, [pc, #84]	@ 000ae354 154c
.org 0xae356
	ldr r3, [r4, #0]	@ 000ae356 2368
.org 0xae358
	ldr r2, [pc, #84]	@ 000ae358 154a
.org 0xae35a
	muls r3, r2	@ 000ae35a 5343
.org 0xae35c
	ldr r2, [pc, #84]	@ 000ae35c 154a
.org 0xae35e
	adds r3, r3, r2	@ 000ae35e 9b18
.org 0xae360
	lsls r3, r3, #1	@ 000ae360 5b00
.org 0xae362
	lsrs r2, r3, #1	@ 000ae362 5a08
.org 0xae364
	str r2, [r4, #0]	@ 000ae364 2260
.org 0xae366
	lsrs r3, r3, #17	@ 000ae366 5b0c
.org 0xae368
	movs r2, #1	@ 000ae368 0122
.org 0xae36a
	ands r3, r2	@ 000ae36a 1340
.org 0xae36c
	lsls r3, r3, #4	@ 000ae36c 1b01
.org 0xae36e
	movs r2, #0	@ 000ae36e 0022
.org 0xae370
	bl 0xd4c8c	@ 000ae370 26f08cfc
.org 0xae374
	adds r0, r7, #0	@ 000ae374 381c
.org 0xae376
	adds r0, #115	@ 000ae376 7330
.org 0xae378
	ldrb r0, [r0, #0]	@ 000ae378 0078
.org 0xae37a
	cmp r0, #3	@ 000ae37a 0328
.org 0xae37c
	bne.n 0xae390	@ 000ae37c 08d1
.org 0xae37e
	ldr r1, [pc, #56]	@ 000ae37e 0e49
.org 0xae380
	ldrb r0, [r7, #9]	@ 000ae380 787a
.org 0xae382
	lsls r0, r0, #2	@ 000ae382 8000
.org 0xae384
	adds r0, r0, r1	@ 000ae384 4018
.org 0xae386
	movs r1, #4	@ 000ae386 0421
.org 0xae388
	str r1, [r7, #12]	@ 000ae388 f960

@ FUN_080b2304  entry 0x080b2304  size 164
.thumb
.org 0xb2304
FUN_080b2304:
	push {r4, lr}	@ 000b2304 10b5
.org 0xb2306
	adds r4, r0, #0	@ 000b2306 041c
.org 0xb2308
	ldrb r0, [r4, #16]	@ 000b2308 207c
.org 0xb230a
	cmp r0, #0	@ 000b230a 0028
.org 0xb230c
	bne.n 0xb2332	@ 000b230c 11d1
.org 0xb230e
	adds r0, r4, #0	@ 000b230e 201c
.org 0xb2310
	bl 0xb2dc0	@ 000b2310 00f056fd
.org 0xb2314
	lsls r0, r0, #24	@ 000b2314 0006
.org 0xb2316
	cmp r0, #0	@ 000b2316 0028
.org 0xb2318
	beq.n 0xb2332	@ 000b2318 0bd0
.org 0xb231a
	ldr r1, [pc, #88]	@ 000b231a 1649
.org 0xb231c
	ldrb r0, [r4, #9]	@ 000b231c 607a
.org 0xb231e
	lsls r0, r0, #2	@ 000b231e 8000
.org 0xb2320
	adds r0, r0, r1	@ 000b2320 4018
.org 0xb2322
	movs r1, #2	@ 000b2322 0221
.org 0xb2324
	str r1, [r4, #12]	@ 000b2324 e160
.org 0xb2326
	ldr r0, [r0, #0]	@ 000b2326 0068
.org 0xb2328
	ldr r0, [r0, #8]	@ 000b2328 8068
.org 0xb232a
	str r0, [r4, #20]	@ 000b232a 6061
.org 0xb232c
	adds r0, r4, #0	@ 000b232c 201c
.org 0xb232e
	bl 0xb23b4	@ 000b232e 00f041f8
.org 0xb2332
	adds r0, r4, #0	@ 000b2332 201c
.org 0xb2334
	adds r0, #140	@ 000b2334 8c30
.org 0xb2336
	ldr r0, [r0, #0]	@ 000b2336 0068
.org 0xb2338
	movs r1, #128	@ 000b2338 8021
.org 0xb233a
	lsls r1, r1, #2	@ 000b233a 8900
.org 0xb233c
	ands r0, r1	@ 000b233c 0840
.org 0xb233e
	cmp r0, #0	@ 000b233e 0028
.org 0xb2340
	beq.n 0xb2378	@ 000b2340 1ad0
.org 0xb2342
	ldrb r0, [r4, #16]	@ 000b2342 207c
.org 0xb2344
	cmp r0, #1	@ 000b2344 0128
.org 0xb2346
	bne.n 0xb235a	@ 000b2346 08d1
.org 0xb2348
	adds r0, r4, #0	@ 000b2348 201c
.org 0xb234a
	adds r0, #184	@ 000b234a b830
.org 0xb234c
	movs r1, #0	@ 000b234c 0021
.org 0xb234e
	strb r1, [r0, #0]	@ 000b234e 0170
.org 0xb2350
	adds r0, #1	@ 000b2350 0130
.org 0xb2352
	strb r1, [r0, #0]	@ 000b2352 0170
.org 0xb2354
	adds r0, r4, #0	@ 000b2354 201c
.org 0xb2356
	bl 0xb29b8	@ 000b2356 00f02ffb
.org 0xb235a
	ldr r1, [pc, #24]	@ 000b235a 0649
.org 0xb235c
	ldrb r0, [r4, #9]	@ 000b235c 607a
.org 0xb235e
	lsls r0, r0, #2	@ 000b235e 8000
.org 0xb2360
	adds r0, r0, r1	@ 000b2360 4018
.org 0xb2362
	movs r1, #2	@ 000b2362 0221
.org 0xb2364
	str r1, [r4, #12]	@ 000b2364 e160
.org 0xb2366
	ldr r0, [r0, #0]	@ 000b2366 0068
.org 0xb2368
	ldr r0, [r0, #8]	@ 000b2368 8068
.org 0xb236a
	str r0, [r4, #20]	@ 000b236a 6061
.org 0xb236c
	adds r0, r4, #0	@ 000b236c 201c
.org 0xb236e
	bl 0xb23b4	@ 000b236e 00f021f8
.org 0xb2372
	b.n 0xb23ac	@ 000b2372 1be0
.org 0xb2374
	.byte 0x40,0xdb,0x85,0x08	@ 000b2374 data
.org 0xb2378
	adds r0, r4, #0	@ 000b2378 201c
.org 0xb237a
	bl 0xb2a4c	@ 000b237a 00f067fb
.org 0xb237e
	adds r0, r4, #0	@ 000b237e 201c
.org 0xb2380
	adds r0, #192	@ 000b2380 c030
.org 0xb2382
	ldr r0, [r0, #0]	@ 000b2382 0068
.org 0xb2384
	cmp r0, #0	@ 000b2384 0028
.org 0xb2386
	bne.n 0xb23a0	@ 000b2386 0bd1
.org 0xb2388
	ldr r0, [pc, #16]	@ 000b2388 0448
.org 0xb238a
	ldrb r1, [r4, #13]	@ 000b238a 617b
.org 0xb238c
	lsls r1, r1, #2	@ 000b238c 8900
.org 0xb238e
	adds r1, r1, r0	@ 000b238e 0918
.org 0xb2390
	ldr r1, [r1, #0]	@ 000b2390 0968
.org 0xb2392
	adds r0, r4, #0	@ 000b2392 201c
.org 0xb2394
	bl 0x128f80	@ 000b2394 76f0f4fd
.org 0xb2398
	b.n 0xb23a6	@ 000b2398 05e0
.org 0xb239a
	.byte 0x00	@ 000b239a data
.org 0xb239b
	.byte 0x00	@ 000b239b data
.org 0xb239c
	.byte 0x50,0x36,0x86,0x08	@ 000b239c data
.org 0xb23a0
	adds r0, r4, #0	@ 000b23a0 201c
.org 0xb23a2
	bl 0xb2ad4	@ 000b23a2 00f097fb
.org 0xb23a6
	adds r0, r4, #0	@ 000b23a6 201c

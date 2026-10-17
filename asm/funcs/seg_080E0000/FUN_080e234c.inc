@ FUN_080e234c  entry 0x080e234c  size 92
.thumb
.org 0xe234c
FUN_080e234c:
	push {r4, lr}	@ 000e234c 10b5
.org 0xe234e
	adds r4, r0, #0	@ 000e234e 041c
.org 0xe2350
	adds r2, r4, #0	@ 000e2350 221c
.org 0xe2352
	adds r2, #116	@ 000e2352 7432
.org 0xe2354
	ldrb r0, [r2, #0]	@ 000e2354 1078
.org 0xe2356
	cmp r0, #0	@ 000e2356 0028
.org 0xe2358
	beq.n 0xe236c	@ 000e2358 08d0
.org 0xe235a
	ldrb r0, [r4, #10]	@ 000e235a a07a
.org 0xe235c
	movs r1, #1	@ 000e235c 0121
.org 0xe235e
	orrs r1, r0	@ 000e235e 0143
.org 0xe2360
	strb r1, [r4, #10]	@ 000e2360 a172
.org 0xe2362
	ldrb r0, [r4, #17]	@ 000e2362 607c
.org 0xe2364
	cmp r0, #2	@ 000e2364 0228
.org 0xe2366
	bhi.n 0xe2378	@ 000e2366 07d8
.org 0xe2368
	movs r0, #0	@ 000e2368 0020
.org 0xe236a
	b.n 0xe2376	@ 000e236a 04e0
.org 0xe236c
	ldrb r0, [r4, #10]	@ 000e236c a07a
.org 0xe236e
	movs r1, #254	@ 000e236e fe21
.org 0xe2370
	ands r1, r0	@ 000e2370 0140
.org 0xe2372
	strb r1, [r4, #10]	@ 000e2372 a172
.org 0xe2374
	movs r0, #1	@ 000e2374 0120
.org 0xe2376
	strb r0, [r2, #0]	@ 000e2376 1070
.org 0xe2378
	adds r0, r4, #0	@ 000e2378 201c
.org 0xe237a
	bl 0xe2500	@ 000e237a 00f0c1f8
.org 0xe237e
	adds r0, r4, #0	@ 000e237e 201c
.org 0xe2380
	bl 0xe25e8	@ 000e2380 00f032f9
.org 0xe2384
	lsls r0, r0, #24	@ 000e2384 0006
.org 0xe2386
	cmp r0, #0	@ 000e2386 0028
.org 0xe2388
	beq.n 0xe239c	@ 000e2388 08d0
.org 0xe238a
	ldr r1, [pc, #28]	@ 000e238a 0749
.org 0xe238c
	ldrb r0, [r4, #9]	@ 000e238c 607a
.org 0xe238e
	lsls r0, r0, #2	@ 000e238e 8000
.org 0xe2390
	adds r0, r0, r1	@ 000e2390 4018
.org 0xe2392
	movs r1, #2	@ 000e2392 0221
.org 0xe2394
	str r1, [r4, #12]	@ 000e2394 e160
.org 0xe2396
	ldr r0, [r0, #0]	@ 000e2396 0068
.org 0xe2398
	ldr r0, [r0, #8]	@ 000e2398 8068
.org 0xe239a
	str r0, [r4, #20]	@ 000e239a 6061
.org 0xe239c
	adds r0, r4, #0	@ 000e239c 201c
.org 0xe239e
	bl 0x1cff0	@ 000e239e 3af727fe
.org 0xe23a2
	pop {r4}	@ 000e23a2 10bc
.org 0xe23a4
	pop {r0}	@ 000e23a4 01bc
.org 0xe23a6
	bx r0	@ 000e23a6 0047

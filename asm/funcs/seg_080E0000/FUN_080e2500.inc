@ FUN_080e2500  entry 0x080e2500  size 86
.thumb
.org 0xe2500
FUN_080e2500:
	push {r4, lr}	@ 000e2500 10b5
.org 0xe2502
	adds r4, r0, #0	@ 000e2502 041c
.org 0xe2504
	ldr r1, [r4, #84]	@ 000e2504 616d
.org 0xe2506
	ldr r0, [r4, #92]	@ 000e2506 e06d
.org 0xe2508
	adds r3, r1, r0	@ 000e2508 0b18
.org 0xe250a
	str r3, [r4, #84]	@ 000e250a 6365
.org 0xe250c
	ldr r1, [r4, #88]	@ 000e250c a16d
.org 0xe250e
	ldr r0, [r4, #96]	@ 000e250e 206e
.org 0xe2510
	adds r2, r1, r0	@ 000e2510 0a18
.org 0xe2512
	str r2, [r4, #88]	@ 000e2512 a265
.org 0xe2514
	ldr r1, [r4, #104]	@ 000e2514 a16e
.org 0xe2516
	adds r0, r0, r1	@ 000e2516 4018
.org 0xe2518
	str r0, [r4, #96]	@ 000e2518 2066
.org 0xe251a
	ldrb r0, [r4, #17]	@ 000e251a 607c
.org 0xe251c
	subs r0, #3	@ 000e251c 0338
.org 0xe251e
	lsls r0, r0, #24	@ 000e251e 0006
.org 0xe2520
	lsrs r0, r0, #24	@ 000e2520 000e
.org 0xe2522
	cmp r0, #1	@ 000e2522 0128
.org 0xe2524
	bhi.n 0xe2530	@ 000e2524 04d8
.org 0xe2526
	movs r0, #128	@ 000e2526 8020
.org 0xe2528
	lsls r0, r0, #5	@ 000e2528 4001
.org 0xe252a
	adds r1, r2, r0	@ 000e252a 1118
.org 0xe252c
	adds r0, r3, #0	@ 000e252c 181c
.org 0xe252e
	b.n 0xe2534	@ 000e252e 01e0
.org 0xe2530
	adds r0, r3, #0	@ 000e2530 181c
.org 0xe2532
	adds r1, r2, #0	@ 000e2532 111c
.org 0xe2534
	bl 0x7c7c	@ 000e2534 25f7a2fb
.org 0xe2538
	lsls r0, r0, #16	@ 000e2538 0004
.org 0xe253a
	cmp r0, #0	@ 000e253a 0028
.org 0xe253c
	beq.n 0xe2550	@ 000e253c 08d0
.org 0xe253e
	ldr r1, [pc, #24]	@ 000e253e 0649
.org 0xe2540
	ldrb r0, [r4, #9]	@ 000e2540 607a
.org 0xe2542
	lsls r0, r0, #2	@ 000e2542 8000
.org 0xe2544
	adds r0, r0, r1	@ 000e2544 4018
.org 0xe2546
	movs r1, #2	@ 000e2546 0221
.org 0xe2548
	str r1, [r4, #12]	@ 000e2548 e160
.org 0xe254a
	ldr r0, [r0, #0]	@ 000e254a 0068
.org 0xe254c
	ldr r0, [r0, #8]	@ 000e254c 8068
.org 0xe254e
	str r0, [r4, #20]	@ 000e254e 6061
.org 0xe2550
	pop {r4}	@ 000e2550 10bc
.org 0xe2552
	pop {r0}	@ 000e2552 01bc
.org 0xe2554
	bx r0	@ 000e2554 0047

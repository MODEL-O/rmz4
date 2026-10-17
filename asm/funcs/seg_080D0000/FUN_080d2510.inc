@ FUN_080d2510  entry 0x080d2510  size 78
.thumb
.org 0xd2510
FUN_080d2510:
	push {r4, lr}	@ 000d2510 10b5
.org 0xd2512
	adds r4, r0, #0	@ 000d2512 041c
.org 0xd2514
	bl 0x1cff0	@ 000d2514 4af76cfd
.org 0xd2518
	ldrb r1, [r4, #18]	@ 000d2518 a17c
.org 0xd251a
	adds r0, r1, #1	@ 000d251a 481c
.org 0xd251c
	strb r0, [r4, #18]	@ 000d251c a074
.org 0xd251e
	movs r0, #1	@ 000d251e 0120
.org 0xd2520
	ands r0, r1	@ 000d2520 0840
.org 0xd2522
	cmp r0, #0	@ 000d2522 0028
.org 0xd2524
	beq.n 0xd252e	@ 000d2524 03d0
.org 0xd2526
	ldrb r1, [r4, #10]	@ 000d2526 a17a
.org 0xd2528
	movs r0, #254	@ 000d2528 fe20
.org 0xd252a
	ands r0, r1	@ 000d252a 0840
.org 0xd252c
	b.n 0xd2534	@ 000d252c 02e0
.org 0xd252e
	ldrb r0, [r4, #10]	@ 000d252e a07a
.org 0xd2530
	movs r1, #1	@ 000d2530 0121
.org 0xd2532
	orrs r0, r1	@ 000d2532 0843
.org 0xd2534
	strb r0, [r4, #10]	@ 000d2534 a072
.org 0xd2536
	ldr r0, [r4, #88]	@ 000d2536 a06d
.org 0xd2538
	subs r0, #192	@ 000d2538 c038
.org 0xd253a
	str r0, [r4, #88]	@ 000d253a a065
.org 0xd253c
	adds r0, r4, #0	@ 000d253c 201c
.org 0xd253e
	adds r0, #115	@ 000d253e 7330
.org 0xd2540
	ldrb r0, [r0, #0]	@ 000d2540 0078
.org 0xd2542
	cmp r0, #3	@ 000d2542 0328
.org 0xd2544
	bne.n 0xd2558	@ 000d2544 08d1
.org 0xd2546
	ldr r1, [pc, #24]	@ 000d2546 0649
.org 0xd2548
	ldrb r0, [r4, #9]	@ 000d2548 607a
.org 0xd254a
	lsls r0, r0, #2	@ 000d254a 8000
.org 0xd254c
	adds r0, r0, r1	@ 000d254c 4018
.org 0xd254e
	movs r1, #2	@ 000d254e 0221
.org 0xd2550
	str r1, [r4, #12]	@ 000d2550 e160
.org 0xd2552
	ldr r0, [r0, #0]	@ 000d2552 0068
.org 0xd2554
	ldr r0, [r0, #8]	@ 000d2554 8068
.org 0xd2556
	str r0, [r4, #20]	@ 000d2556 6061
.org 0xd2558
	pop {r4}	@ 000d2558 10bc
.org 0xd255a
	pop {r0}	@ 000d255a 01bc
.org 0xd255c
	bx r0	@ 000d255c 0047

@ FUN_080c2504  entry 0x080c2504  size 110
.thumb
.org 0xc2504
FUN_080c2504:
	push {r4, r5, r6, r7, lr}	@ 000c2504 f0b5
.org 0xc2506
	adds r5, r0, #0	@ 000c2506 051c
.org 0xc2508
	ldr r3, [r5, #40]	@ 000c2508 ab6a
.org 0xc250a
	ldr r1, [pc, #104]	@ 000c250a 1a49
.org 0xc250c
	ldrb r0, [r5, #9]	@ 000c250c 687a
.org 0xc250e
	lsls r0, r0, #2	@ 000c250e 8000
.org 0xc2510
	adds r0, r0, r1	@ 000c2510 4018
.org 0xc2512
	movs r1, #1	@ 000c2512 0121
.org 0xc2514
	str r1, [r5, #12]	@ 000c2514 e960
.org 0xc2516
	ldr r0, [r0, #0]	@ 000c2516 0068
.org 0xc2518
	ldr r0, [r0, #4]	@ 000c2518 4068
.org 0xc251a
	str r0, [r5, #20]	@ 000c251a 6861
.org 0xc251c
	ldrb r1, [r5, #10]	@ 000c251c a97a
.org 0xc251e
	movs r0, #254	@ 000c251e fe20
.org 0xc2520
	ands r0, r1	@ 000c2520 0840
.org 0xc2522
	movs r1, #2	@ 000c2522 0221
.org 0xc2524
	orrs r0, r1	@ 000c2524 0843
.org 0xc2526
	strb r0, [r5, #10]	@ 000c2526 a872
.org 0xc2528
	adds r0, r5, #0	@ 000c2528 281c
.org 0xc252a
	adds r0, #190	@ 000c252a be30
.org 0xc252c
	movs r1, #16	@ 000c252c 1021
.org 0xc252e
	strb r1, [r0, #0]	@ 000c252e 0170
.org 0xc2530
	adds r2, r5, #0	@ 000c2530 2a1c
.org 0xc2532
	adds r2, #188	@ 000c2532 bc32
.org 0xc2534
	movs r0, #64	@ 000c2534 4020
.org 0xc2536
	strb r0, [r2, #0]	@ 000c2536 1070
.org 0xc2538
	ldrb r0, [r3, #10]	@ 000c2538 987a
.org 0xc253a
	ands r1, r0	@ 000c253a 0140
.org 0xc253c
	ldr r1, [r3, #88]	@ 000c253c 996d
.org 0xc253e
	ldr r0, [pc, #56]	@ 000c253e 0e48
.org 0xc2540
	adds r7, r1, r0	@ 000c2540 0f18
.org 0xc2542
	adds r1, r3, #0	@ 000c2542 191c
.org 0xc2544
	adds r1, #180	@ 000c2544 b431
.org 0xc2546
	ldr r4, [r1, #0]	@ 000c2546 0c68
.org 0xc2548
	subs r4, r4, r7	@ 000c2548 e41b
.org 0xc254a
	ldr r1, [pc, #48]	@ 000c254a 0c49
.org 0xc254c
	adds r4, r4, r1	@ 000c254c 6418
.org 0xc254e
	adds r1, r4, #0	@ 000c254e 211c
.org 0xc2550
	bl 0x10d338	@ 000c2550 4af0f2fe
.org 0xc2554
	subs r0, #64	@ 000c2554 4038
.org 0xc2556
	adds r2, r5, #0	@ 000c2556 2a1c
.org 0xc2558
	adds r2, #189	@ 000c2558 bd32
.org 0xc255a
	movs r1, #0	@ 000c255a 0021
.org 0xc255c
	strb r0, [r2, #0]	@ 000c255c 1070
.org 0xc255e
	adds r0, r5, #0	@ 000c255e 281c
.org 0xc2560
	adds r0, #192	@ 000c2560 c030
.org 0xc2562
	str r4, [r0, #0]	@ 000c2562 0460
.org 0xc2564
	strb r1, [r5, #18]	@ 000c2564 a974
.org 0xc2566
	adds r0, r5, #0	@ 000c2566 281c
.org 0xc2568
	bl 0xc2628	@ 000c2568 00f05ef8
.org 0xc256c
	pop {r4, r5, r6, r7}	@ 000c256c f0bc
.org 0xc256e
	pop {r0}	@ 000c256e 01bc
.org 0xc2570
	bx r0	@ 000c2570 0047

@ FUN_080b252c  entry 0x080b252c  size 82
.thumb
.org 0xb252c
FUN_080b252c:
	push {r4, r5, r6, lr}	@ 000b252c 70b5
.org 0xb252e
	adds r5, r0, #0	@ 000b252e 051c
.org 0xb2530
	adds r1, r5, #0	@ 000b2530 291c
.org 0xb2532
	adds r1, #181	@ 000b2532 b531
.org 0xb2534
	movs r6, #0	@ 000b2534 0026
.org 0xb2536
	strb r6, [r1, #0]	@ 000b2536 0e70
.org 0xb2538
	ldrb r0, [r5, #17]	@ 000b2538 687c
.org 0xb253a
	cmp r0, #2	@ 000b253a 0228
.org 0xb253c
	bne.n 0xb2542	@ 000b253c 01d1
.org 0xb253e
	movs r0, #4	@ 000b253e 0420
.org 0xb2540
	strb r0, [r1, #0]	@ 000b2540 0870
.org 0xb2542
	ldr r0, [r5, #84]	@ 000b2542 686d
.org 0xb2544
	ldr r1, [r5, #88]	@ 000b2544 a96d
.org 0xb2546
	bl 0x8534	@ 000b2546 55f7f5ff
.org 0xb254a
	str r0, [r5, #88]	@ 000b254a a865
.org 0xb254c
	ldrb r0, [r5, #10]	@ 000b254c a87a
.org 0xb254e
	movs r1, #4	@ 000b254e 0421
.org 0xb2550
	orrs r0, r1	@ 000b2550 0843
.org 0xb2552
	strb r0, [r5, #10]	@ 000b2552 a872
.org 0xb2554
	adds r4, r5, #0	@ 000b2554 2c1c
.org 0xb2556
	adds r4, #116	@ 000b2556 7434
.org 0xb2558
	ldr r1, [pc, #36]	@ 000b2558 0949
.org 0xb255a
	adds r2, r5, #0	@ 000b255a 2a1c
.org 0xb255c
	adds r2, #84	@ 000b255c 5432
.org 0xb255e
	adds r0, r4, #0	@ 000b255e 201c
.org 0xb2560
	movs r3, #6	@ 000b2560 0623
.org 0xb2562
	bl 0x5760	@ 000b2562 53f7fdf8
.org 0xb2566
	str r5, [r4, #44]	@ 000b2566 e562
.org 0xb2568
	ldr r0, [pc, #24]	@ 000b2568 0648
.org 0xb256a
	str r0, [r4, #36]	@ 000b256a 6062
.org 0xb256c
	adds r0, r5, #0	@ 000b256c 281c
.org 0xb256e
	bl 0xb2b38	@ 000b256e 00f0e3fa
.org 0xb2572
	movs r0, #1	@ 000b2572 0120
.org 0xb2574
	strb r0, [r5, #13]	@ 000b2574 6873
.org 0xb2576
	strb r6, [r5, #14]	@ 000b2576 ae73
.org 0xb2578
	pop {r4, r5, r6}	@ 000b2578 70bc
.org 0xb257a
	pop {r0}	@ 000b257a 01bc
.org 0xb257c
	bx r0	@ 000b257c 0047

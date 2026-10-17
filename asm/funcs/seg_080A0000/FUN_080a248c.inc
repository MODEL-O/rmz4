@ FUN_080a248c  entry 0x080a248c  size 292
.thumb
.org 0xa248c
FUN_080a248c:
	push {r4, r5, r6, r7, lr}	@ 000a248c f0b5
.org 0xa248e
	mov r7, r8	@ 000a248e 4746
.org 0xa2490
	push {r7}	@ 000a2490 80b4
.org 0xa2492
	adds r6, r0, #0	@ 000a2492 061c
.org 0xa2494
	ldrb r0, [r6, #16]	@ 000a2494 307c
.org 0xa2496
	mov r8, r0	@ 000a2496 8046
.org 0xa2498
	movs r5, #0	@ 000a2498 0025
.org 0xa249a
	ldr r0, [pc, #88]	@ 000a249a 1648
.org 0xa249c
	ldr r0, [r0, #0]	@ 000a249c 0068
.org 0xa249e
	ldr r1, [r6, #84]	@ 000a249e 716d
.org 0xa24a0
	ldr r0, [r0, #84]	@ 000a24a0 406d
.org 0xa24a2
	cmp r1, r0	@ 000a24a2 8142
.org 0xa24a4
	bge.n 0xa24a8	@ 000a24a4 00da
.org 0xa24a6
	movs r5, #1	@ 000a24a6 0125
.org 0xa24a8
	ldr r1, [pc, #76]	@ 000a24a8 1349
.org 0xa24aa
	ldrb r0, [r6, #9]	@ 000a24aa 707a
.org 0xa24ac
	lsls r0, r0, #2	@ 000a24ac 8000
.org 0xa24ae
	adds r0, r0, r1	@ 000a24ae 4018
.org 0xa24b0
	movs r1, #1	@ 000a24b0 0121
.org 0xa24b2
	str r1, [r6, #12]	@ 000a24b2 f160
.org 0xa24b4
	ldr r0, [r0, #0]	@ 000a24b4 0068
.org 0xa24b6
	ldr r0, [r0, #4]	@ 000a24b6 4068
.org 0xa24b8
	str r0, [r6, #20]	@ 000a24b8 7061
.org 0xa24ba
	movs r2, #0	@ 000a24ba 0022
.org 0xa24bc
	movs r3, #2	@ 000a24bc 0223
.org 0xa24be
	movs r0, #2	@ 000a24be 0220
.org 0xa24c0
	strb r0, [r6, #13]	@ 000a24c0 7073
.org 0xa24c2
	strb r2, [r6, #14]	@ 000a24c2 b273
.org 0xa24c4
	strb r2, [r6, #15]	@ 000a24c4 f273
.org 0xa24c6
	ldrb r0, [r6, #10]	@ 000a24c6 b07a
.org 0xa24c8
	movs r4, #0	@ 000a24c8 0024
.org 0xa24ca
	orrs r0, r1	@ 000a24ca 0843
.org 0xa24cc
	orrs r0, r3	@ 000a24cc 1843
.org 0xa24ce
	strb r0, [r6, #10]	@ 000a24ce b072
.org 0xa24d0
	adds r1, r6, #0	@ 000a24d0 311c
.org 0xa24d2
	adds r1, #180	@ 000a24d2 b431
.org 0xa24d4
	movs r0, #120	@ 000a24d4 7820
.org 0xa24d6
	str r0, [r1, #0]	@ 000a24d6 0860
.org 0xa24d8
	adds r0, r6, #0	@ 000a24d8 301c
.org 0xa24da
	adds r0, #184	@ 000a24da b830
.org 0xa24dc
	strb r2, [r0, #0]	@ 000a24dc 0270
.org 0xa24de
	str r2, [r6, #44]	@ 000a24de f262
.org 0xa24e0
	adds r0, r6, #0	@ 000a24e0 301c
.org 0xa24e2
	bl 0x1cc9c	@ 000a24e2 7af7dbfb
.org 0xa24e6
	adds r2, r5, #0	@ 000a24e6 2a1c
.org 0xa24e8
	cmp r2, #0	@ 000a24e8 002a
.org 0xa24ea
	beq.n 0xa24fc	@ 000a24ea 07d0
.org 0xa24ec
	ldrb r0, [r6, #10]	@ 000a24ec b07a
.org 0xa24ee
	movs r1, #16	@ 000a24ee 1021
.org 0xa24f0
	orrs r0, r1	@ 000a24f0 0843
.org 0xa24f2
	b.n 0xa2502	@ 000a24f2 06e0
.org 0xa24f4
	.byte 0xf0,0xdb,0x02,0x02	@ 000a24f4 data
.org 0xa24f8
	.byte 0x40,0xdb,0x85,0x08	@ 000a24f8 data
.org 0xa24fc
	ldrb r1, [r6, #10]	@ 000a24fc b17a
.org 0xa24fe
	movs r0, #239	@ 000a24fe ef20
.org 0xa2500
	ands r0, r1	@ 000a2500 0840
.org 0xa2502
	strb r0, [r6, #10]	@ 000a2502 b072
.org 0xa2504
	adds r1, r2, #0	@ 000a2504 111c
.org 0xa2506
	adds r0, r6, #0	@ 000a2506 301c
.org 0xa2508
	adds r0, #76	@ 000a2508 4c30
.org 0xa250a
	movs r7, #0	@ 000a250a 0027
.org 0xa250c
	strb r1, [r0, #0]	@ 000a250c 0170
.org 0xa250e
	adds r3, r6, #0	@ 000a250e 331c
.org 0xa2510
	adds r3, #74	@ 000a2510 4a33
.org 0xa2512
	lsls r1, r1, #4	@ 000a2512 0901
.org 0xa2514
	ldrb r2, [r3, #0]	@ 000a2514 1a78
.org 0xa2516
	movs r0, #17	@ 000a2516 1120
.org 0xa2518
	negs r0, r0	@ 000a2518 4042
.org 0xa251a
	ands r0, r2	@ 000a251a 1040
.org 0xa251c
	orrs r0, r1	@ 000a251c 0843
.org 0xa251e
	strb r0, [r3, #0]	@ 000a251e 1870
.org 0xa2520
	ldr r1, [pc, #112]	@ 000a2520 1c49
.org 0xa2522
	adds r0, r6, #0	@ 000a2522 301c
.org 0xa2524
	bl 0x1cf00	@ 000a2524 7af7ecfc
.org 0xa2528
	adds r0, r6, #0	@ 000a2528 301c
.org 0xa252a
	bl 0x1cff0	@ 000a252a 7af761fd
.org 0xa252e
	ldrb r1, [r6, #10]	@ 000a252e b17a
.org 0xa2530
	movs r0, #4	@ 000a2530 0420
.org 0xa2532
	orrs r0, r1	@ 000a2532 0843
.org 0xa2534
	strb r0, [r6, #10]	@ 000a2534 b072
.org 0xa2536
	adds r4, r6, #0	@ 000a2536 341c
.org 0xa2538
	adds r4, #116	@ 000a2538 7434
.org 0xa253a
	ldr r1, [pc, #92]	@ 000a253a 1749
.org 0xa253c
	adds r5, r6, #0	@ 000a253c 351c
.org 0xa253e
	adds r5, #84	@ 000a253e 5435
.org 0xa2540
	adds r0, r4, #0	@ 000a2540 201c
.org 0xa2542
	adds r2, r5, #0	@ 000a2542 2a1c
.org 0xa2544
	movs r3, #10	@ 000a2544 0a23
.org 0xa2546
	bl 0x5760	@ 000a2546 63f70bf9
.org 0xa254a
	str r6, [r4, #44]	@ 000a254a e662
.org 0xa254c
	ldr r0, [pc, #76]	@ 000a254c 1348
.org 0xa254e
	str r0, [r4, #36]	@ 000a254e 6062
.org 0xa2550
	ldr r0, [pc, #76]	@ 000a2550 1348
.org 0xa2552
	ldr r0, [r0, #0]	@ 000a2552 0068
.org 0xa2554
	movs r1, #10	@ 000a2554 0a21
.org 0xa2556
	ldrsh r0, [r0, r1]	@ 000a2556 405e
.org 0xa2558
	cmp r0, #5	@ 000a2558 0528
.org 0xa255a
	bgt.n 0xa25a8	@ 000a255a 25dc
.org 0xa255c
	ldrb r1, [r6, #10]	@ 000a255c b17a
.org 0xa255e
	movs r0, #254	@ 000a255e fe20
.org 0xa2560
	ands r0, r1	@ 000a2560 0840
.org 0xa2562
	movs r1, #253	@ 000a2562 fd21
.org 0xa2564
	ands r0, r1	@ 000a2564 0840
.org 0xa2566
	strb r0, [r6, #10]	@ 000a2566 b072
.org 0xa2568
	adds r0, r6, #0	@ 000a2568 301c
.org 0xa256a
	adds r0, #140	@ 000a256a 8c30
.org 0xa256c
	str r7, [r0, #0]	@ 000a256c 0760
.org 0xa256e
	adds r0, #4	@ 000a256e 0430
.org 0xa2570
	str r7, [r0, #0]	@ 000a2570 0760
.org 0xa2572
	adds r0, #4	@ 000a2572 0430
.org 0xa2574
	strb r7, [r0, #0]	@ 000a2574 0770
.org 0xa2576
	ldrb r1, [r6, #10]	@ 000a2576 b17a
.org 0xa2578
	movs r0, #251	@ 000a2578 fb20
.org 0xa257a
	ands r0, r1	@ 000a257a 0840
.org 0xa257c
	strb r0, [r6, #10]	@ 000a257c b072
.org 0xa257e
	ldr r1, [pc, #36]	@ 000a257e 0949
.org 0xa2580
	ldrb r0, [r6, #9]	@ 000a2580 707a
.org 0xa2582
	lsls r0, r0, #2	@ 000a2582 8000
.org 0xa2584
	adds r0, r0, r1	@ 000a2584 4018
.org 0xa2586
	movs r1, #3	@ 000a2586 0321
.org 0xa2588
	str r1, [r6, #12]	@ 000a2588 f160
.org 0xa258a
	ldr r0, [r0, #0]	@ 000a258a 0068
.org 0xa258c
	ldr r0, [r0, #12]	@ 000a258c c068
.org 0xa258e
	str r0, [r6, #20]	@ 000a258e 7061
.org 0xa2590
	b.n 0xa25c4	@ 000a2590 18e0
.org 0xa2592
	.byte 0x00	@ 000a2592 data
.org 0xa2593
	.byte 0x00	@ 000a2593 data
.org 0xa2594
	.byte 0x02,0x84,0x00,0x00	@ 000a2594 data
.org 0xa2598
	.byte 0xf8,0x1c,0x86,0x08	@ 000a2598 data
.org 0xa259c
	.byte 0xfd,0x2c,0x0a,0x08	@ 000a259c data
.org 0xa25a0
	.byte 0x90,0xed,0x02,0x02	@ 000a25a0 data
.org 0xa25a4
	.byte 0x40,0xdb,0x85,0x08	@ 000a25a4 data
.org 0xa25a8
	movs r4, #0	@ 000a25a8 0024
.org 0xa25aa
	lsls r3, r4, #24	@ 000a25aa 2306
.org 0xa25ac
	lsrs r3, r3, #24	@ 000a25ac 1b0e
.org 0xa25ae
	adds r0, r6, #0	@ 000a25ae 301c

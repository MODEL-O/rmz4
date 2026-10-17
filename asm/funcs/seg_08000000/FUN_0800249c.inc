@ FUN_0800249c  entry 0x0800249c  size 274
.thumb
.org 0x249c
FUN_0800249c:
	push {r4, r5, r6, r7, lr}	@ 0000249c f0b5
.org 0x249e
	mov r7, r8	@ 0000249e 4746
.org 0x24a0
	push {r7}	@ 000024a0 80b4
.org 0x24a2
	lsls r0, r0, #16	@ 000024a2 0004
.org 0x24a4
	lsrs r4, r0, #16	@ 000024a4 040c
.org 0x24a6
	lsls r1, r1, #16	@ 000024a6 0904
.org 0x24a8
	lsrs r7, r1, #16	@ 000024a8 0f0c
.org 0x24aa
	movs r6, #0	@ 000024aa 0026
.org 0x24ac
	ldr r3, [pc, #180]	@ 000024ac 2d4b
.org 0x24ae
	adds r0, r4, #1	@ 000024ae 601c
.org 0x24b0
	mov r8, r0	@ 000024b0 8046
.org 0x24b2
	mov r2, r8	@ 000024b2 4246
.org 0x24b4
	adds r1, r3, #0	@ 000024b4 191c
.org 0x24b6
	ldrh r0, [r1, #0]	@ 000024b6 0888
.org 0x24b8
	cmp r0, r2	@ 000024b8 9042
.org 0x24ba
	bne.n 0x24be	@ 000024ba 00d1
.org 0x24bc
	b.n 0x25c0	@ 000024bc 80e0
.org 0x24be
	adds r1, #2	@ 000024be 0231
.org 0x24c0
	adds r6, #1	@ 000024c0 0136
.org 0x24c2
	cmp r6, #15	@ 000024c2 0f2e
.org 0x24c4
	ble.n 0x24b6	@ 000024c4 f7dd
.org 0x24c6
	movs r6, #0	@ 000024c6 0026
.org 0x24c8
	ldrh r0, [r3, #0]	@ 000024c8 1888
.org 0x24ca
	cmp r0, #0	@ 000024ca 0028
.org 0x24cc
	beq.n 0x24de	@ 000024cc 07d0
.org 0x24ce
	adds r1, r3, #0	@ 000024ce 191c
.org 0x24d0
	adds r1, #2	@ 000024d0 0231
.org 0x24d2
	adds r6, #1	@ 000024d2 0136
.org 0x24d4
	cmp r6, #15	@ 000024d4 0f2e
.org 0x24d6
	bgt.n 0x24de	@ 000024d6 02dc
.org 0x24d8
	ldrh r0, [r1, #0]	@ 000024d8 0888
.org 0x24da
	cmp r0, #0	@ 000024da 0028
.org 0x24dc
	bne.n 0x24d0	@ 000024dc f8d1
.org 0x24de
	cmp r6, #16	@ 000024de 102e
.org 0x24e0
	beq.n 0x25c0	@ 000024e0 6ed0
.org 0x24e2
	lsls r0, r6, #2	@ 000024e2 b000
.org 0x24e4
	adds r0, r0, r6	@ 000024e4 8019
.org 0x24e6
	lsls r0, r0, #2	@ 000024e6 8000
.org 0x24e8
	ldr r1, [pc, #124]	@ 000024e8 1f49
.org 0x24ea
	adds r5, r0, r1	@ 000024ea 4518
.org 0x24ec
	lsls r1, r4, #2	@ 000024ec a100
.org 0x24ee
	ldr r0, [pc, #124]	@ 000024ee 1f48
.org 0x24f0
	adds r2, r1, r0	@ 000024f0 0a18
.org 0x24f2
	ldr r0, [r2, #0]	@ 000024f2 1068
.org 0x24f4
	adds r0, r0, r2	@ 000024f4 8018
.org 0x24f6
	str r0, [r5, #0]	@ 000024f6 2860
.org 0x24f8
	ldr r0, [pc, #116]	@ 000024f8 1d48
.org 0x24fa
	adds r1, r1, r0	@ 000024fa 0918
.org 0x24fc
	ldr r1, [r1, #0]	@ 000024fc 0968
.org 0x24fe
	str r1, [r5, #4]	@ 000024fe 6960
.org 0x2500
	movs r0, #0	@ 00002500 0020
.org 0x2502
	strh r0, [r5, #16]	@ 00002502 2882
.org 0x2504
	strh r7, [r5, #18]	@ 00002504 6f82
.org 0x2506
	adds r4, r5, #0	@ 00002506 2c1c
.org 0x2508
	adds r4, #8	@ 00002508 0834
.org 0x250a
	adds r0, r4, #0	@ 0000250a 201c
.org 0x250c
	bl 0x34a4	@ 0000250c 00f0caff
.org 0x2510
	adds r0, r4, #0	@ 00002510 201c
.org 0x2512
	movs r1, #0	@ 00002512 0021
.org 0x2514
	bl 0x34b8	@ 00002514 00f0d0ff
.org 0x2518
	ldr r2, [r5, #0]	@ 00002518 2a68
.org 0x251a
	ldrb r0, [r2, #2]	@ 0000251a 9078
.org 0x251c
	ldrb r4, [r2, #1]	@ 0000251c 5478
.org 0x251e
	subs r0, r0, r4	@ 0000251e 001b
.org 0x2520
	adds r0, #1	@ 00002520 0130
.org 0x2522
	lsls r0, r0, #16	@ 00002522 0004
.org 0x2524
	lsrs r3, r0, #16	@ 00002524 030c
.org 0x2526
	ldrh r1, [r5, #18]	@ 00002526 698a
.org 0x2528
	ldr r0, [pc, #72]	@ 00002528 1248
.org 0x252a
	ands r0, r1	@ 0000252a 0840
.org 0x252c
	cmp r0, #0	@ 0000252c 0028
.org 0x252e
	bne.n 0x2580	@ 0000252e 27d1
.org 0x2530
	ldrb r1, [r5, #12]	@ 00002530 297b
.org 0x2532
	ldr r0, [r5, #8]	@ 00002532 a868
.org 0x2534
	lsls r1, r1, #2	@ 00002534 8900
.org 0x2536
	adds r1, r1, r0	@ 00002536 0918
.org 0x2538
	movs r0, #13	@ 00002538 0d20
.org 0x253a
	ldrsb r0, [r5, r0]	@ 0000253a 2856
.org 0x253c
	ldr r1, [r1, #0]	@ 0000253c 0968
.org 0x253e
	lsls r0, r0, #1	@ 0000253e 4000
.org 0x2540
	adds r0, r0, r1	@ 00002540 4018
.org 0x2542
	ldrb r0, [r0, #0]	@ 00002542 0078
.org 0x2544
	lsls r3, r3, #16	@ 00002544 1b04
.org 0x2546
	asrs r3, r3, #16	@ 00002546 1b14
.org 0x2548
	muls r0, r3	@ 00002548 5843
.org 0x254a
	lsls r0, r0, #1	@ 0000254a 4000
.org 0x254c
	adds r0, #4	@ 0000254c 0430
.org 0x254e
	adds r0, r2, r0	@ 0000254e 1018
.org 0x2550
	lsls r1, r4, #1	@ 00002550 6100
.org 0x2552
	ldrh r5, [r5, #18]	@ 00002552 6d8a
.org 0x2554
	adds r1, r1, r5	@ 00002554 4919
.org 0x2556
	ldr r2, [pc, #32]	@ 00002556 084a
.org 0x2558
	adds r1, r1, r2	@ 00002558 8918
.org 0x255a
	ldr r2, [pc, #32]	@ 0000255a 084a
.org 0x255c
	ands r2, r3	@ 0000255c 1a40
.org 0x255e
	bl 0x128be4	@ 0000255e 26f141fb
.org 0x2562
	b.n 0x25b6	@ 00002562 28e0
.org 0x2564
	.byte 0xa0,0x08,0x00,0x02	@ 00002564 data
.org 0x2568
	.byte 0xc0,0x08,0x00,0x02	@ 00002568 data
.org 0x256c
	.byte 0x00,0xc0,0xc0,0x08	@ 0000256c data
.org 0x2570
	.byte 0x00,0x80,0xc1,0x08	@ 00002570 data
.org 0x2574
	.byte 0xff,0x01,0x00,0x00	@ 00002574 data
.org 0x2578
	.byte 0xc0,0x2a,0x00,0x03	@ 00002578 data
.org 0x257c
	.byte 0xff,0xff,0x1f,0x00	@ 0000257c data
.org 0x2580
	ldrb r1, [r5, #12]	@ 00002580 297b
.org 0x2582
	ldr r0, [r5, #8]	@ 00002582 a868
.org 0x2584
	lsls r1, r1, #2	@ 00002584 8900
.org 0x2586
	adds r1, r1, r0	@ 00002586 0918
.org 0x2588
	movs r0, #13	@ 00002588 0d20
.org 0x258a
	ldrsb r0, [r5, r0]	@ 0000258a 2856
.org 0x258c
	ldr r1, [r1, #0]	@ 0000258c 0968
.org 0x258e
	lsls r0, r0, #1	@ 0000258e 4000
.org 0x2590
	adds r0, r0, r1	@ 00002590 4018
.org 0x2592
	ldrb r0, [r0, #0]	@ 00002592 0078
.org 0x2594
	lsls r3, r3, #16	@ 00002594 1b04
.org 0x2596
	asrs r3, r3, #16	@ 00002596 1b14
.org 0x2598
	muls r0, r3	@ 00002598 5843
.org 0x259a
	lsls r0, r0, #1	@ 0000259a 4000
.org 0x259c
	adds r0, #4	@ 0000259c 0430
.org 0x259e
	adds r0, r2, r0	@ 0000259e 1018
.org 0x25a0
	lsls r1, r4, #1	@ 000025a0 6100
.org 0x25a2
	movs r2, #31	@ 000025a2 1f22
.org 0x25a4
	ands r1, r2	@ 000025a4 1140
.org 0x25a6
	ldrh r5, [r5, #18]	@ 000025a6 6d8a
.org 0x25a8
	adds r1, r1, r5	@ 000025a8 4919
.org 0x25aa
	ldr r2, [pc, #32]	@ 000025aa 084a
.org 0x25ac
	adds r1, r1, r2	@ 000025ac 8918

@ FUN_0804b464  entry 0x0804b464  size 466
.thumb
.org 0x4b464
FUN_0804b464:
	push {r4, r5, r6, lr}	@ 0004b464 70b5
.org 0x4b466
	adds r6, r0, #0	@ 0004b466 061c
.org 0x4b468
	ldr r5, [r6, #40]	@ 0004b468 b56a
.org 0x4b46a
	ldr r1, [pc, #148]	@ 0004b46a 2549
.org 0x4b46c
	ldrb r0, [r6, #9]	@ 0004b46c 707a
.org 0x4b46e
	lsls r0, r0, #2	@ 0004b46e 8000
.org 0x4b470
	adds r0, r0, r1	@ 0004b470 4018
.org 0x4b472
	movs r1, #1	@ 0004b472 0121
.org 0x4b474
	str r1, [r6, #12]	@ 0004b474 f160
.org 0x4b476
	ldr r0, [r0, #0]	@ 0004b476 0068
.org 0x4b478
	ldr r0, [r0, #4]	@ 0004b478 4068
.org 0x4b47a
	str r0, [r6, #20]	@ 0004b47a 7061
.org 0x4b47c
	adds r0, r6, #0	@ 0004b47c 301c
.org 0x4b47e
	bl 0x1cc9c	@ 0004b47e d1f70dfc
.org 0x4b482
	adds r0, r6, #0	@ 0004b482 301c
.org 0x4b484
	bl 0x1ceec	@ 0004b484 d1f732fd
.org 0x4b488
	ldrb r1, [r6, #10]	@ 0004b488 b17a
.org 0x4b48a
	movs r0, #1	@ 0004b48a 0120
.org 0x4b48c
	orrs r0, r1	@ 0004b48c 0843
.org 0x4b48e
	movs r1, #2	@ 0004b48e 0221
.org 0x4b490
	orrs r0, r1	@ 0004b490 0843
.org 0x4b492
	strb r0, [r6, #10]	@ 0004b492 b072
.org 0x4b494
	adds r0, r6, #0	@ 0004b494 301c
.org 0x4b496
	movs r1, #15	@ 0004b496 0f21
.org 0x4b498
	bl 0x1d3d0	@ 0004b498 d1f79aff
.org 0x4b49c
	movs r1, #254	@ 0004b49c fe21
.org 0x4b49e
	lsls r1, r1, #7	@ 0004b49e c901
.org 0x4b4a0
	adds r0, r6, #0	@ 0004b4a0 301c
.org 0x4b4a2
	bl 0x1cf00	@ 0004b4a2 d1f72dfd
.org 0x4b4a6
	adds r0, r6, #0	@ 0004b4a6 301c
.org 0x4b4a8
	bl 0x1cff0	@ 0004b4a8 d1f7a2fd
.org 0x4b4ac
	movs r2, #0	@ 0004b4ac 0022
.org 0x4b4ae
	ldrb r1, [r6, #10]	@ 0004b4ae b17a
.org 0x4b4b0
	movs r0, #239	@ 0004b4b0 ef20
.org 0x4b4b2
	ands r0, r1	@ 0004b4b2 0840
.org 0x4b4b4
	strb r0, [r6, #10]	@ 0004b4b4 b072
.org 0x4b4b6
	adds r0, r6, #0	@ 0004b4b6 301c
.org 0x4b4b8
	adds r0, #76	@ 0004b4b8 4c30
.org 0x4b4ba
	strb r2, [r0, #0]	@ 0004b4ba 0270
.org 0x4b4bc
	adds r2, r6, #0	@ 0004b4bc 321c
.org 0x4b4be
	adds r2, #74	@ 0004b4be 4a32
.org 0x4b4c0
	ldrb r1, [r2, #0]	@ 0004b4c0 1178
.org 0x4b4c2
	movs r0, #17	@ 0004b4c2 1120
.org 0x4b4c4
	negs r0, r0	@ 0004b4c4 4042
.org 0x4b4c6
	ands r0, r1	@ 0004b4c6 0840
.org 0x4b4c8
	strb r0, [r2, #0]	@ 0004b4c8 1070
.org 0x4b4ca
	ldrb r1, [r6, #10]	@ 0004b4ca b17a
.org 0x4b4cc
	movs r0, #4	@ 0004b4cc 0420
.org 0x4b4ce
	orrs r0, r1	@ 0004b4ce 0843
.org 0x4b4d0
	strb r0, [r6, #10]	@ 0004b4d0 b072
.org 0x4b4d2
	adds r4, r6, #0	@ 0004b4d2 341c
.org 0x4b4d4
	adds r4, #116	@ 0004b4d4 7434
.org 0x4b4d6
	ldr r1, [pc, #44]	@ 0004b4d6 0b49
.org 0x4b4d8
	adds r2, #10	@ 0004b4d8 0a32
.org 0x4b4da
	adds r0, r4, #0	@ 0004b4da 201c
.org 0x4b4dc
	movs r3, #8	@ 0004b4dc 0823
.org 0x4b4de
	bl 0x5760	@ 0004b4de baf73ff9
.org 0x4b4e2
	str r6, [r4, #44]	@ 0004b4e2 e662
.org 0x4b4e4
	ldr r0, [pc, #32]	@ 0004b4e4 0848
.org 0x4b4e6
	str r0, [r4, #36]	@ 0004b4e6 6062
.org 0x4b4e8
	ldr r2, [r6, #84]	@ 0004b4e8 726d
.org 0x4b4ea
	ldr r0, [r5, #84]	@ 0004b4ea 686d
.org 0x4b4ec
	cmp r2, r0	@ 0004b4ec 8242
.org 0x4b4ee
	ble.n 0x4b50c	@ 0004b4ee 0ddd
.org 0x4b4f0
	ldr r1, [r6, #88]	@ 0004b4f0 b16d
.org 0x4b4f2
	adds r0, r2, #0	@ 0004b4f2 101c
.org 0x4b4f4
	bl 0x816c	@ 0004b4f4 bcf73afe
.org 0x4b4f8
	adds r5, r0, #0	@ 0004b4f8 051c
.org 0x4b4fa
	cmp r5, #0	@ 0004b4fa 002d
.org 0x4b4fc
	ble.n 0x4b51e	@ 0004b4fc 0fdd
.org 0x4b4fe
	b.n 0x4b51a	@ 0004b4fe 0ce0
.org 0x4b500
	.byte 0xf8,0x39,0x85,0x08	@ 0004b500 data
.org 0x4b504
	.byte 0x10,0x76,0x85,0x08	@ 0004b504 data
.org 0x4b508
	.byte 0x55,0xb9,0x04,0x08	@ 0004b508 data
.org 0x4b50c
	ldr r1, [r6, #88]	@ 0004b50c b16d
.org 0x4b50e
	adds r0, r2, #0	@ 0004b50e 101c
.org 0x4b510
	bl 0x834c	@ 0004b510 bcf71cff
.org 0x4b514
	adds r5, r0, #0	@ 0004b514 051c
.org 0x4b516
	cmp r5, #0	@ 0004b516 002d
.org 0x4b518
	bge.n 0x4b51e	@ 0004b518 01da
.org 0x4b51a
	movs r5, #128	@ 0004b51a 8025
.org 0x4b51c
	lsls r5, r5, #9	@ 0004b51c 6d02
.org 0x4b51e
	ldr r0, [r6, #84]	@ 0004b51e 706d
.org 0x4b520
	ldr r1, [r6, #88]	@ 0004b520 b16d
.org 0x4b522
	bl 0x7db4	@ 0004b522 bcf747fc
.org 0x4b526
	adds r4, r0, #0	@ 0004b526 041c
.org 0x4b528
	ldr r0, [r6, #84]	@ 0004b528 706d
.org 0x4b52a
	ldr r1, [r6, #88]	@ 0004b52a b16d
.org 0x4b52c
	bl 0x7f8c	@ 0004b52c bcf72efd
.org 0x4b530
	cmp r4, #0	@ 0004b530 002c
.org 0x4b532
	ble.n 0x4b538	@ 0004b532 01dd
.org 0x4b534
	movs r4, #128	@ 0004b534 8024
.org 0x4b536
	lsls r4, r4, #9	@ 0004b536 6402
.org 0x4b538
	cmp r0, #0	@ 0004b538 0028
.org 0x4b53a
	bge.n 0x4b540	@ 0004b53a 01da
.org 0x4b53c
	movs r0, #128	@ 0004b53c 8020
.org 0x4b53e
	lsls r0, r0, #9	@ 0004b53e 4002
.org 0x4b540
	adds r3, r4, #0	@ 0004b540 231c
.org 0x4b542
	cmp r4, #0	@ 0004b542 002c
.org 0x4b544
	bge.n 0x4b548	@ 0004b544 00da
.org 0x4b546
	negs r3, r4	@ 0004b546 6342
.org 0x4b548
	adds r1, r0, #0	@ 0004b548 011c
.org 0x4b54a
	cmp r1, #0	@ 0004b54a 0029
.org 0x4b54c
	bge.n 0x4b550	@ 0004b54c 00da
.org 0x4b54e
	negs r1, r1	@ 0004b54e 4942
.org 0x4b550
	adds r2, r0, #0	@ 0004b550 021c
.org 0x4b552
	cmp r3, r1	@ 0004b552 8b42
.org 0x4b554
	bge.n 0x4b558	@ 0004b554 00da
.org 0x4b556
	adds r2, r4, #0	@ 0004b556 221c
.org 0x4b558
	movs r0, #128	@ 0004b558 8020
.org 0x4b55a
	lsls r0, r0, #9	@ 0004b55a 4002
.org 0x4b55c
	cmp r5, r0	@ 0004b55c 8542
.org 0x4b55e
	bne.n 0x4b5a0	@ 0004b55e 1fd1
.org 0x4b560
	cmp r2, r5	@ 0004b560 aa42
.org 0x4b562
	bne.n 0x4b5a0	@ 0004b562 1dd1
.org 0x4b564
	ldrb r1, [r6, #10]	@ 0004b564 b17a
.org 0x4b566
	movs r0, #254	@ 0004b566 fe20
.org 0x4b568
	ands r0, r1	@ 0004b568 0840
.org 0x4b56a
	movs r2, #0	@ 0004b56a 0022
.org 0x4b56c
	movs r1, #253	@ 0004b56c fd21
.org 0x4b56e
	ands r0, r1	@ 0004b56e 0840
.org 0x4b570
	strb r0, [r6, #10]	@ 0004b570 b072
.org 0x4b572
	adds r0, r6, #0	@ 0004b572 301c
.org 0x4b574
	adds r0, #140	@ 0004b574 8c30
.org 0x4b576
	str r2, [r0, #0]	@ 0004b576 0260
.org 0x4b578
	adds r0, #4	@ 0004b578 0430
.org 0x4b57a
	str r2, [r0, #0]	@ 0004b57a 0260
.org 0x4b57c
	adds r0, #4	@ 0004b57c 0430
.org 0x4b57e
	strb r2, [r0, #0]	@ 0004b57e 0270
.org 0x4b580
	ldrb r1, [r6, #10]	@ 0004b580 b17a
.org 0x4b582
	movs r0, #251	@ 0004b582 fb20
.org 0x4b584
	ands r0, r1	@ 0004b584 0840
.org 0x4b586
	strb r0, [r6, #10]	@ 0004b586 b072
.org 0x4b588
	ldr r1, [pc, #16]	@ 0004b588 0449
.org 0x4b58a
	ldrb r0, [r6, #9]	@ 0004b58a 707a
.org 0x4b58c
	lsls r0, r0, #2	@ 0004b58c 8000
.org 0x4b58e
	adds r0, r0, r1	@ 0004b58e 4018
.org 0x4b590
	movs r1, #3	@ 0004b590 0321
.org 0x4b592
	str r1, [r6, #12]	@ 0004b592 f160
.org 0x4b594
	ldr r0, [r0, #0]	@ 0004b594 0068
.org 0x4b596
	ldr r0, [r0, #12]	@ 0004b596 c068
.org 0x4b598
	str r0, [r6, #20]	@ 0004b598 7061
.org 0x4b59a
	b.n 0x4b64a	@ 0004b59a 56e0
.org 0x4b59c
	.byte 0xf8,0x39,0x85,0x08	@ 0004b59c data
.org 0x4b5a0
	adds r1, r5, #0	@ 0004b5a0 291c
.org 0x4b5a2
	cmp r5, #0	@ 0004b5a2 002d
.org 0x4b5a4
	bge.n 0x4b5a8	@ 0004b5a4 00da
.org 0x4b5a6
	negs r1, r5	@ 0004b5a6 6942
.org 0x4b5a8
	adds r0, r2, #0	@ 0004b5a8 101c
.org 0x4b5aa
	cmp r2, #0	@ 0004b5aa 002a
.org 0x4b5ac
	bge.n 0x4b5b0	@ 0004b5ac 00da
.org 0x4b5ae
	negs r0, r2	@ 0004b5ae 5042
.org 0x4b5b0
	cmp r1, r0	@ 0004b5b0 8142
.org 0x4b5b2
	bge.n 0x4b5fa	@ 0004b5b2 22da
.org 0x4b5b4
	ldr r0, [r6, #84]	@ 0004b5b4 706d
.org 0x4b5b6
	adds r0, r0, r5	@ 0004b5b6 4019
.org 0x4b5b8
	str r0, [r6, #84]	@ 0004b5b8 7065
.org 0x4b5ba
	ldrb r0, [r6, #17]	@ 0004b5ba 707c
.org 0x4b5bc
	cmp r0, #0	@ 0004b5bc 0028
.org 0x4b5be
	beq.n 0x4b5c6	@ 0004b5be 02d0
.org 0x4b5c0
	movs r0, #128	@ 0004b5c0 8020
.org 0x4b5c2
	lsls r0, r0, #3	@ 0004b5c2 c000
.org 0x4b5c4
	b.n 0x4b5c8	@ 0004b5c4 00e0
.org 0x4b5c6
	ldr r0, [pc, #24]	@ 0004b5c6 0648
.org 0x4b5c8
	str r0, [r6, #96]	@ 0004b5c8 3066
.org 0x4b5ca
	movs r0, #0	@ 0004b5ca 0020
.org 0x4b5cc
	str r0, [r6, #92]	@ 0004b5cc f065
.org 0x4b5ce
	cmp r5, #0	@ 0004b5ce 002d
.org 0x4b5d0
	bge.n 0x4b5e4	@ 0004b5d0 08da
.org 0x4b5d2
	ldr r0, [r6, #84]	@ 0004b5d2 706d
.org 0x4b5d4
	ldr r1, [r6, #88]	@ 0004b5d4 b16d
.org 0x4b5d6
	bl 0x8868	@ 0004b5d6 bdf747f9
.org 0x4b5da
	str r0, [r6, #84]	@ 0004b5da 7065
.org 0x4b5dc
	movs r0, #1	@ 0004b5dc 0120
.org 0x4b5de
	b.n 0x4b5f2	@ 0004b5de 08e0
.org 0x4b5e0
	.byte 0x00,0xfc,0xff,0xff	@ 0004b5e0 data
.org 0x4b5e4
	ldr r0, [r6, #84]	@ 0004b5e4 706d
.org 0x4b5e6
	ldr r1, [r6, #88]	@ 0004b5e6 b16d
.org 0x4b5e8
	bl 0x8988	@ 0004b5e8 bdf7cef9
.org 0x4b5ec
	str r0, [r6, #84]	@ 0004b5ec 7065
.org 0x4b5ee
	movs r0, #1	@ 0004b5ee 0120
.org 0x4b5f0
	negs r0, r0	@ 0004b5f0 4042
.org 0x4b5f2
	str r0, [r6, #100]	@ 0004b5f2 7066
.org 0x4b5f4
	movs r0, #0	@ 0004b5f4 0020
.org 0x4b5f6
	str r0, [r6, #104]	@ 0004b5f6 b066
.org 0x4b5f8
	b.n 0x4b640	@ 0004b5f8 22e0
.org 0x4b5fa
	ldr r0, [r6, #88]	@ 0004b5fa b06d
.org 0x4b5fc
	adds r0, r0, r2	@ 0004b5fc 8018
.org 0x4b5fe
	str r0, [r6, #88]	@ 0004b5fe b065
.org 0x4b600
	ldrb r0, [r6, #17]	@ 0004b600 707c
.org 0x4b602
	cmp r0, #0	@ 0004b602 0028
.org 0x4b604
	beq.n 0x4b60c	@ 0004b604 02d0
.org 0x4b606
	movs r0, #128	@ 0004b606 8020
.org 0x4b608
	lsls r0, r0, #3	@ 0004b608 c000
.org 0x4b60a
	b.n 0x4b60e	@ 0004b60a 00e0
.org 0x4b60c
	ldr r0, [pc, #24]	@ 0004b60c 0648
.org 0x4b60e
	str r0, [r6, #92]	@ 0004b60e f065
.org 0x4b610
	movs r0, #0	@ 0004b610 0020
.org 0x4b612
	str r0, [r6, #96]	@ 0004b612 3066
.org 0x4b614
	cmp r2, #0	@ 0004b614 002a
.org 0x4b616
	bge.n 0x4b62c	@ 0004b616 09da
.org 0x4b618
	ldr r0, [r6, #84]	@ 0004b618 706d
.org 0x4b61a
	ldr r1, [r6, #88]	@ 0004b61a b16d
.org 0x4b61c
	bl 0x8534	@ 0004b61c bcf78aff
.org 0x4b620
	str r0, [r6, #88]	@ 0004b620 b065
.org 0x4b622
	movs r0, #1	@ 0004b622 0120
.org 0x4b624
	b.n 0x4b63a	@ 0004b624 09e0
.org 0x4b626
	.byte 0x00	@ 0004b626 data
.org 0x4b627
	.byte 0x00	@ 0004b627 data
.org 0x4b628
	.byte 0x00,0xfc,0xff,0xff	@ 0004b628 data
.org 0x4b62c
	ldr r0, [r6, #84]	@ 0004b62c 706d
.org 0x4b62e
	ldr r1, [r6, #88]	@ 0004b62e b16d
.org 0x4b630
	bl 0x8748	@ 0004b630 bdf78af8
.org 0x4b634
	str r0, [r6, #88]	@ 0004b634 b065

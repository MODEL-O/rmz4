@ FUN_0806c4f8  entry 0x0806c4f8  size 418
.thumb
.org 0x6c4f8
FUN_0806c4f8:
	push {r4, r5, lr}	@ 0006c4f8 30b5
.org 0x6c4fa
	adds r4, r0, #0	@ 0006c4fa 041c
.org 0x6c4fc
	ldrb r0, [r4, #14]	@ 0006c4fc a07b
.org 0x6c4fe
	cmp r0, #0	@ 0006c4fe 0028
.org 0x6c500
	bne.n 0x6c560	@ 0006c500 2ed1
.org 0x6c502
	ldr r1, [pc, #40]	@ 0006c502 0a49
.org 0x6c504
	adds r0, r4, #0	@ 0006c504 201c
.org 0x6c506
	bl 0x1cf00	@ 0006c506 b0f7fbfc
.org 0x6c50a
	movs r0, #203	@ 0006c50a cb20
.org 0x6c50c
	bl 0x2b10	@ 0006c50c 96f700fb
.org 0x6c510
	movs r0, #192	@ 0006c510 c020
.org 0x6c512
	lsls r0, r0, #3	@ 0006c512 c000
.org 0x6c514
	str r0, [r4, #92]	@ 0006c514 e065
.org 0x6c516
	movs r0, #32	@ 0006c516 2020
.org 0x6c518
	str r0, [r4, #100]	@ 0006c518 6066
.org 0x6c51a
	adds r0, r4, #0	@ 0006c51a 201c
.org 0x6c51c
	adds r0, #164	@ 0006c51c a430
.org 0x6c51e
	movs r1, #0	@ 0006c51e 0021
.org 0x6c520
	ldrsh r0, [r0, r1]	@ 0006c520 405e
.org 0x6c522
	cmp r0, #15	@ 0006c522 0f28
.org 0x6c524
	bgt.n 0x6c530	@ 0006c524 04dc
.org 0x6c526
	movs r0, #144	@ 0006c526 9020
.org 0x6c528
	lsls r0, r0, #3	@ 0006c528 c000
.org 0x6c52a
	b.n 0x6c53e	@ 0006c52a 08e0
.org 0x6c52c
	.byte 0x17,0xaa,0x00,0x00	@ 0006c52c data
.org 0x6c530
	cmp r0, #31	@ 0006c530 1f28
.org 0x6c532
	bgt.n 0x6c53a	@ 0006c532 02dc
.org 0x6c534
	movs r0, #136	@ 0006c534 8820
.org 0x6c536
	lsls r0, r0, #3	@ 0006c536 c000
.org 0x6c538
	b.n 0x6c53e	@ 0006c538 01e0
.org 0x6c53a
	movs r0, #128	@ 0006c53a 8020
.org 0x6c53c
	lsls r0, r0, #3	@ 0006c53c c000
.org 0x6c53e
	str r0, [r4, #96]	@ 0006c53e 2066
.org 0x6c540
	ldrb r1, [r4, #10]	@ 0006c540 a17a
.org 0x6c542
	movs r0, #16	@ 0006c542 1020
.org 0x6c544
	ands r0, r1	@ 0006c544 0840
.org 0x6c546
	cmp r0, #0	@ 0006c546 0028
.org 0x6c548
	beq.n 0x6c54e	@ 0006c548 01d0
.org 0x6c54a
	movs r0, #243	@ 0006c54a f320
.org 0x6c54c
	b.n 0x6c550	@ 0006c54c 00e0
.org 0x6c54e
	movs r0, #141	@ 0006c54e 8d20
.org 0x6c550
	strb r0, [r4, #18]	@ 0006c550 a074
.org 0x6c552
	movs r1, #0	@ 0006c552 0021
.org 0x6c554
	movs r0, #6	@ 0006c554 0620
.org 0x6c556
	strb r0, [r4, #19]	@ 0006c556 e074
.org 0x6c558
	strb r1, [r4, #15]	@ 0006c558 e173
.org 0x6c55a
	ldrb r0, [r4, #14]	@ 0006c55a a07b
.org 0x6c55c
	adds r0, #1	@ 0006c55c 0130
.org 0x6c55e
	strb r0, [r4, #14]	@ 0006c55e a073
.org 0x6c560
	adds r0, r4, #0	@ 0006c560 201c
.org 0x6c562
	bl 0x1cff0	@ 0006c562 b0f745fd
.org 0x6c566
	ldrb r0, [r4, #15]	@ 0006c566 e07b
.org 0x6c568
	cmp r0, #0	@ 0006c568 0028
.org 0x6c56a
	bne.n 0x6c5b0	@ 0006c56a 21d1
.org 0x6c56c
	adds r0, r4, #0	@ 0006c56c 201c
.org 0x6c56e
	adds r0, #115	@ 0006c56e 7330
.org 0x6c570
	ldrb r0, [r0, #0]	@ 0006c570 0078
.org 0x6c572
	cmp r0, #3	@ 0006c572 0328
.org 0x6c574
	beq.n 0x6c578	@ 0006c574 00d0
.org 0x6c576
	b.n 0x6c6b2	@ 0006c576 9ce0
.org 0x6c578
	ldrb r0, [r4, #19]	@ 0006c578 e07c
.org 0x6c57a
	subs r0, #1	@ 0006c57a 0138
.org 0x6c57c
	strb r0, [r4, #19]	@ 0006c57c e074
.org 0x6c57e
	lsls r0, r0, #24	@ 0006c57e 0006
.org 0x6c580
	lsrs r0, r0, #24	@ 0006c580 000e
.org 0x6c582
	cmp r0, #255	@ 0006c582 ff28
.org 0x6c584
	beq.n 0x6c588	@ 0006c584 00d0
.org 0x6c586
	b.n 0x6c6b2	@ 0006c586 94e0
.org 0x6c588
	ldr r1, [pc, #28]	@ 0006c588 0749
.org 0x6c58a
	adds r0, r4, #0	@ 0006c58a 201c
.org 0x6c58c
	bl 0x1cf00	@ 0006c58c b0f7b8fc
.org 0x6c590
	adds r0, r4, #0	@ 0006c590 201c
.org 0x6c592
	bl 0x1cff0	@ 0006c592 b0f72dfd
.org 0x6c596
	adds r0, r4, #0	@ 0006c596 201c
.org 0x6c598
	adds r0, #116	@ 0006c598 7430
.org 0x6c59a
	ldr r1, [pc, #16]	@ 0006c59a 0449
.org 0x6c59c
	bl 0x5784	@ 0006c59c 99f7f2f8
.org 0x6c5a0
	ldrb r0, [r4, #15]	@ 0006c5a0 e07b
.org 0x6c5a2
	adds r0, #1	@ 0006c5a2 0130
.org 0x6c5a4
	strb r0, [r4, #15]	@ 0006c5a4 e073
.org 0x6c5a6
	b.n 0x6c6b2	@ 0006c5a6 84e0
.org 0x6c5a8
	.byte 0x1f,0xaa,0x00,0x00	@ 0006c5a8 data
.org 0x6c5ac
	.byte 0x8c,0xc3,0x85,0x08	@ 0006c5ac data
.org 0x6c5b0
	cmp r0, #1	@ 0006c5b0 0128
.org 0x6c5b2
	bne.n 0x6c600	@ 0006c5b2 25d1
.org 0x6c5b4
	movs r3, #0	@ 0006c5b4 0023
.org 0x6c5b6
	ldrb r1, [r4, #10]	@ 0006c5b6 a17a
.org 0x6c5b8
	movs r0, #16	@ 0006c5b8 1020
.org 0x6c5ba
	ands r0, r1	@ 0006c5ba 0840
.org 0x6c5bc
	cmp r0, #0	@ 0006c5bc 0028
.org 0x6c5be
	beq.n 0x6c5d0	@ 0006c5be 07d0
.org 0x6c5c0
	adds r0, r4, #0	@ 0006c5c0 201c
.org 0x6c5c2
	adds r0, #180	@ 0006c5c2 b430
.org 0x6c5c4
	ldr r2, [r4, #84]	@ 0006c5c4 626d
.org 0x6c5c6
	ldr r1, [r0, #16]	@ 0006c5c6 0169
.org 0x6c5c8
	adds r5, r0, #0	@ 0006c5c8 051c
.org 0x6c5ca
	cmp r2, r1	@ 0006c5ca 8a42
.org 0x6c5cc
	ble.n 0x6c5e0	@ 0006c5cc 08dd
.org 0x6c5ce
	b.n 0x6c5e4	@ 0006c5ce 09e0
.org 0x6c5d0
	adds r0, r4, #0	@ 0006c5d0 201c
.org 0x6c5d2
	adds r0, #180	@ 0006c5d2 b430
.org 0x6c5d4
	ldr r2, [r4, #84]	@ 0006c5d4 626d
.org 0x6c5d6
	ldr r1, [r0, #16]	@ 0006c5d6 0169
.org 0x6c5d8
	adds r5, r0, #0	@ 0006c5d8 051c
.org 0x6c5da
	cmp r2, r1	@ 0006c5da 8a42
.org 0x6c5dc
	bge.n 0x6c5e0	@ 0006c5dc 00da
.org 0x6c5de
	movs r3, #1	@ 0006c5de 0123
.org 0x6c5e0
	cmp r3, #0	@ 0006c5e0 002b
.org 0x6c5e2
	beq.n 0x6c62c	@ 0006c5e2 23d0
.org 0x6c5e4
	ldr r1, [pc, #16]	@ 0006c5e4 0449
.org 0x6c5e6
	adds r0, r4, #0	@ 0006c5e6 201c
.org 0x6c5e8
	bl 0x1cf00	@ 0006c5e8 b0f78afc
.org 0x6c5ec
	adds r0, r4, #0	@ 0006c5ec 201c
.org 0x6c5ee
	adds r0, #116	@ 0006c5ee 7430
.org 0x6c5f0
	ldr r1, [pc, #8]	@ 0006c5f0 0249
.org 0x6c5f2
	bl 0x5784	@ 0006c5f2 99f7c7f8
.org 0x6c5f6
	b.n 0x6c626	@ 0006c5f6 16e0
.org 0x6c5f8
	.byte 0x18,0xaa,0x00,0x00	@ 0006c5f8 data
.org 0x6c5fc
	.byte 0x74,0xc3,0x85,0x08	@ 0006c5fc data
.org 0x6c600
	adds r5, r4, #0	@ 0006c600 251c
.org 0x6c602
	adds r5, #180	@ 0006c602 b435
.org 0x6c604
	cmp r0, #2	@ 0006c604 0228
.org 0x6c606
	bne.n 0x6c62c	@ 0006c606 11d1
.org 0x6c608
	adds r0, r4, #0	@ 0006c608 201c
.org 0x6c60a
	adds r0, #113	@ 0006c60a 7130
.org 0x6c60c
	ldrb r0, [r0, #0]	@ 0006c60c 0078
.org 0x6c60e
	lsls r0, r0, #24	@ 0006c60e 0006
.org 0x6c610
	asrs r0, r0, #24	@ 0006c610 0016
.org 0x6c612
	cmp r0, #2	@ 0006c612 0228
.org 0x6c614
	ble.n 0x6c62c	@ 0006c614 0add
.org 0x6c616
	movs r0, #210	@ 0006c616 d220
.org 0x6c618
	bl 0x2b10	@ 0006c618 96f77afa
.org 0x6c61c
	adds r0, r4, #0	@ 0006c61c 201c
.org 0x6c61e
	movs r1, #0	@ 0006c61e 0021
.org 0x6c620
	movs r2, #0	@ 0006c620 0022
.org 0x6c622
	bl 0xca4c4	@ 0006c622 5df04fff
.org 0x6c626
	ldrb r0, [r4, #15]	@ 0006c626 e07b
.org 0x6c628
	adds r0, #1	@ 0006c628 0130
.org 0x6c62a
	strb r0, [r4, #15]	@ 0006c62a e073
.org 0x6c62c
	ldr r2, [pc, #100]	@ 0006c62c 194a
.org 0x6c62e
	ldrb r0, [r4, #18]	@ 0006c62e a07c
.org 0x6c630
	adds r0, #64	@ 0006c630 4030
.org 0x6c632
	lsls r0, r0, #24	@ 0006c632 0006
.org 0x6c634
	lsrs r0, r0, #23	@ 0006c634 c00d
.org 0x6c636
	adds r0, r0, r2	@ 0006c636 8018
.org 0x6c638
	movs r3, #0	@ 0006c638 0023
.org 0x6c63a
	ldrsh r0, [r0, r3]	@ 0006c63a c05e
.org 0x6c63c
	ldr r3, [r4, #92]	@ 0006c63c e36d
.org 0x6c63e
	adds r1, r0, #0	@ 0006c63e 011c
.org 0x6c640
	muls r1, r3	@ 0006c640 5943
.org 0x6c642
	asrs r1, r1, #8	@ 0006c642 0912
.org 0x6c644
	ldr r0, [r4, #84]	@ 0006c644 606d
.org 0x6c646
	adds r0, r0, r1	@ 0006c646 4018
.org 0x6c648
	str r0, [r4, #84]	@ 0006c648 6065
.org 0x6c64a
	ldrb r0, [r4, #18]	@ 0006c64a a07c
.org 0x6c64c
	lsls r0, r0, #1	@ 0006c64c 4000
.org 0x6c64e
	adds r0, r0, r2	@ 0006c64e 8018
.org 0x6c650
	movs r1, #0	@ 0006c650 0021
.org 0x6c652
	ldrsh r0, [r0, r1]	@ 0006c652 405e
.org 0x6c654
	adds r1, r0, #0	@ 0006c654 011c
.org 0x6c656
	muls r1, r3	@ 0006c656 5943
.org 0x6c658
	asrs r1, r1, #8	@ 0006c658 0912
.org 0x6c65a
	ldr r0, [r4, #88]	@ 0006c65a a06d
.org 0x6c65c
	adds r0, r0, r1	@ 0006c65c 4018
.org 0x6c65e
	str r0, [r4, #88]	@ 0006c65e a065
.org 0x6c660
	ldr r0, [r4, #96]	@ 0006c660 206e
.org 0x6c662
	cmp r3, r0	@ 0006c662 8342
.org 0x6c664
	ble.n 0x6c66a	@ 0006c664 01dd
.org 0x6c666
	ldr r0, [r4, #100]	@ 0006c666 606e
.org 0x6c668
	subs r0, r3, r0	@ 0006c668 181a
.org 0x6c66a
	str r0, [r4, #92]	@ 0006c66a e065
.org 0x6c66c
	ldrb r1, [r4, #10]	@ 0006c66c a17a
.org 0x6c66e
	movs r0, #16	@ 0006c66e 1020
.org 0x6c670
	ands r0, r1	@ 0006c670 0840
.org 0x6c672
	lsls r0, r0, #24	@ 0006c672 0006
.org 0x6c674
	lsrs r2, r0, #24	@ 0006c674 020e
.org 0x6c676
	cmp r2, #0	@ 0006c676 002a
.org 0x6c678
	beq.n 0x6c69c	@ 0006c678 10d0
.org 0x6c67a
	ldr r0, [r5, #24]	@ 0006c67a a869
.org 0x6c67c
	ldr r2, [pc, #24]	@ 0006c67c 064a
.org 0x6c67e
	adds r1, r0, r2	@ 0006c67e 8118
.org 0x6c680
	ldr r0, [r4, #84]	@ 0006c680 606d
.org 0x6c682
	cmp r0, r1	@ 0006c682 8842
.org 0x6c684
	ble.n 0x6c6b2	@ 0006c684 15dd
.org 0x6c686
	str r1, [r4, #84]	@ 0006c686 6165
.org 0x6c688
	movs r1, #0	@ 0006c688 0021
.org 0x6c68a
	movs r0, #24	@ 0006c68a 1820
.org 0x6c68c
	strb r0, [r4, #13]	@ 0006c68c 6073
.org 0x6c68e
	strb r1, [r4, #14]	@ 0006c68e a173
.org 0x6c690
	b.n 0x6c6b2	@ 0006c690 0fe0
.org 0x6c692
	.byte 0x00	@ 0006c692 data
.org 0x6c693
	.byte 0x00	@ 0006c693 data
.org 0x6c694
	.byte 0x0c,0x93,0x12,0x08	@ 0006c694 data
.org 0x6c698
	.byte 0x00,0xe8,0xff,0xff	@ 0006c698 data

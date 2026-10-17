@ FUN_080d64b0  entry 0x080d64b0  size 534
.thumb
.org 0xd64b0
FUN_080d64b0:
	push {r4, r5, r6, r7, lr}	@ 000d64b0 f0b5
.org 0xd64b2
	mov r7, r9	@ 000d64b2 4f46
.org 0xd64b4
	mov r6, r8	@ 000d64b4 4646
.org 0xd64b6
	push {r6, r7}	@ 000d64b6 c0b4
.org 0xd64b8
	adds r7, r0, #0	@ 000d64b8 071c
.org 0xd64ba
	ldr r0, [r7, #40]	@ 000d64ba b86a
.org 0xd64bc
	mov r9, r0	@ 000d64bc 8146
.org 0xd64be
	ldrb r0, [r0, #10]	@ 000d64be 807a
.org 0xd64c0
	lsls r0, r0, #24	@ 000d64c0 0006
.org 0xd64c2
	lsrs r6, r0, #28	@ 000d64c2 060f
.org 0xd64c4
	movs r1, #1	@ 000d64c4 0121
.org 0xd64c6
	ands r6, r1	@ 000d64c6 0e40
.org 0xd64c8
	lsrs r0, r0, #29	@ 000d64c8 400f
.org 0xd64ca
	mov r8, r0	@ 000d64ca 8046
.org 0xd64cc
	mov r2, r8	@ 000d64cc 4246
.org 0xd64ce
	ands r2, r1	@ 000d64ce 0a40
.org 0xd64d0
	mov r8, r2	@ 000d64d0 9046
.org 0xd64d2
	ldrb r5, [r7, #17]	@ 000d64d2 7d7c
.org 0xd64d4
	ldrb r1, [r7, #10]	@ 000d64d4 b97a
.org 0xd64d6
	movs r0, #1	@ 000d64d6 0120
.org 0xd64d8
	orrs r0, r1	@ 000d64d8 0843
.org 0xd64da
	strb r0, [r7, #10]	@ 000d64da b872
.org 0xd64dc
	adds r0, r7, #0	@ 000d64dc 381c
.org 0xd64de
	bl 0x1cc9c	@ 000d64de 46f7ddfb
.org 0xd64e2
	adds r0, r6, #0	@ 000d64e2 301c
.org 0xd64e4
	cmp r5, #1	@ 000d64e4 012d
.org 0xd64e6
	bne.n 0xd64ee	@ 000d64e6 02d1
.org 0xd64e8
	adds r1, r5, #0	@ 000d64e8 291c
.org 0xd64ea
	eors r1, r0	@ 000d64ea 4140
.org 0xd64ec
	b.n 0xd64f0	@ 000d64ec 00e0
.org 0xd64ee
	adds r1, r0, #0	@ 000d64ee 011c
.org 0xd64f0
	adds r2, r1, #0	@ 000d64f0 0a1c
.org 0xd64f2
	cmp r2, #0	@ 000d64f2 002a
.org 0xd64f4
	beq.n 0xd64fe	@ 000d64f4 03d0
.org 0xd64f6
	ldrb r1, [r7, #10]	@ 000d64f6 b97a
.org 0xd64f8
	movs r0, #16	@ 000d64f8 1020
.org 0xd64fa
	orrs r0, r1	@ 000d64fa 0843
.org 0xd64fc
	b.n 0xd6504	@ 000d64fc 02e0
.org 0xd64fe
	ldrb r1, [r7, #10]	@ 000d64fe b97a
.org 0xd6500
	movs r0, #239	@ 000d6500 ef20
.org 0xd6502
	ands r0, r1	@ 000d6502 0840
.org 0xd6504
	strb r0, [r7, #10]	@ 000d6504 b872
.org 0xd6506
	movs r4, #1	@ 000d6506 0124
.org 0xd6508
	adds r1, r4, #0	@ 000d6508 211c
.org 0xd650a
	ands r1, r2	@ 000d650a 1140
.org 0xd650c
	adds r0, r7, #0	@ 000d650c 381c
.org 0xd650e
	adds r0, #76	@ 000d650e 4c30
.org 0xd6510
	strb r1, [r0, #0]	@ 000d6510 0170
.org 0xd6512
	adds r3, r7, #0	@ 000d6512 3b1c
.org 0xd6514
	adds r3, #74	@ 000d6514 4a33
.org 0xd6516
	lsls r1, r1, #4	@ 000d6516 0901
.org 0xd6518
	ldrb r2, [r3, #0]	@ 000d6518 1a78
.org 0xd651a
	movs r0, #17	@ 000d651a 1120
.org 0xd651c
	negs r0, r0	@ 000d651c 4042
.org 0xd651e
	ands r0, r2	@ 000d651e 1040
.org 0xd6520
	orrs r0, r1	@ 000d6520 0843
.org 0xd6522
	strb r0, [r3, #0]	@ 000d6522 1870
.org 0xd6524
	mov r1, r9	@ 000d6524 4946
.org 0xd6526
	ldrb r0, [r1, #10]	@ 000d6526 887a
.org 0xd6528
	lsrs r2, r0, #5	@ 000d6528 4209
.org 0xd652a
	ands r2, r4	@ 000d652a 2240
.org 0xd652c
	cmp r2, #0	@ 000d652c 002a
.org 0xd652e
	beq.n 0xd6538	@ 000d652e 03d0
.org 0xd6530
	ldrb r0, [r7, #10]	@ 000d6530 b87a
.org 0xd6532
	movs r1, #32	@ 000d6532 2021
.org 0xd6534
	orrs r0, r1	@ 000d6534 0843
.org 0xd6536
	b.n 0xd653e	@ 000d6536 02e0
.org 0xd6538
	ldrb r1, [r7, #10]	@ 000d6538 b97a
.org 0xd653a
	movs r0, #223	@ 000d653a df20
.org 0xd653c
	ands r0, r1	@ 000d653c 0840
.org 0xd653e
	strb r0, [r7, #10]	@ 000d653e b872
.org 0xd6540
	adds r1, r2, #0	@ 000d6540 111c
.org 0xd6542
	adds r2, r7, #0	@ 000d6542 3a1c
.org 0xd6544
	adds r2, #77	@ 000d6544 4d32
.org 0xd6546
	strb r1, [r2, #0]	@ 000d6546 1170
.org 0xd6548
	lsls r1, r1, #5	@ 000d6548 4901
.org 0xd654a
	ldrb r2, [r3, #0]	@ 000d654a 1a78
.org 0xd654c
	movs r0, #33	@ 000d654c 2120
.org 0xd654e
	negs r0, r0	@ 000d654e 4042
.org 0xd6550
	ands r0, r2	@ 000d6550 1040
.org 0xd6552
	orrs r0, r1	@ 000d6552 0843
.org 0xd6554
	strb r0, [r3, #0]	@ 000d6554 1870
.org 0xd6556
	adds r0, r7, #0	@ 000d6556 381c
.org 0xd6558
	adds r0, #120	@ 000d6558 7830
.org 0xd655a
	ldrb r1, [r0, #0]	@ 000d655a 0178
.org 0xd655c
	adds r4, r0, #0	@ 000d655c 041c
.org 0xd655e
	cmp r1, #2	@ 000d655e 0229
.org 0xd6560
	bne.n 0xd6568	@ 000d6560 02d1
.org 0xd6562
	cmp r5, #2	@ 000d6562 022d
.org 0xd6564
	bne.n 0xd6568	@ 000d6564 00d1
.org 0xd6566
	movs r5, #1	@ 000d6566 0125
.org 0xd6568
	ldr r1, [pc, #156]	@ 000d6568 2749
.org 0xd656a
	lsls r0, r5, #1	@ 000d656a 6800
.org 0xd656c
	adds r0, r0, r1	@ 000d656c 4018
.org 0xd656e
	ldrh r1, [r0, #0]	@ 000d656e 0188
.org 0xd6570
	adds r0, r7, #0	@ 000d6570 381c
.org 0xd6572
	bl 0x1cf00	@ 000d6572 46f7c5fc
.org 0xd6576
	lsls r0, r6, #24	@ 000d6576 3006
.org 0xd6578
	asrs r1, r0, #24	@ 000d6578 0116
.org 0xd657a
	cmp r1, #0	@ 000d657a 0029
.org 0xd657c
	beq.n 0xd6582	@ 000d657c 01d0
.org 0xd657e
	movs r0, #2	@ 000d657e 0220
.org 0xd6580
	subs r5, r0, r5	@ 000d6580 451b
.org 0xd6582
	ldrb r0, [r4, #0]	@ 000d6582 2078
.org 0xd6584
	cmp r0, #2	@ 000d6584 0228
.org 0xd6586
	bne.n 0xd661c	@ 000d6586 49d1
.org 0xd6588
	ldr r4, [r7, #116]	@ 000d6588 7c6f
.org 0xd658a
	asrs r4, r4, #6	@ 000d658a a411
.org 0xd658c
	adds r0, r1, #1	@ 000d658c 481c
.org 0xd658e
	lsls r0, r0, #24	@ 000d658e 0006
.org 0xd6590
	lsrs r6, r0, #24	@ 000d6590 060e
.org 0xd6592
	asrs r0, r0, #24	@ 000d6592 0016
.org 0xd6594
	cmp r0, #2	@ 000d6594 0228
.org 0xd6596
	bne.n 0xd659a	@ 000d6596 00d1
.org 0xd6598
	movs r6, #255	@ 000d6598 ff26
.org 0xd659a
	adds r0, r4, #0	@ 000d659a 201c
.org 0xd659c
	cmp r4, #0	@ 000d659c 002c
.org 0xd659e
	bge.n 0xd65a2	@ 000d659e 00da
.org 0xd65a0
	negs r0, r4	@ 000d65a0 6042
.org 0xd65a2
	lsls r3, r6, #24	@ 000d65a2 3306
.org 0xd65a4
	cmp r0, #127	@ 000d65a4 7f28
.org 0xd65a6
	bgt.n 0xd65aa	@ 000d65a6 00dc
.org 0xd65a8
	asrs r4, r3, #17	@ 000d65a8 5c14
.org 0xd65aa
	adds r1, r4, #0	@ 000d65aa 211c
.org 0xd65ac
	cmp r4, #0	@ 000d65ac 002c
.org 0xd65ae
	bge.n 0xd65b2	@ 000d65ae 00da
.org 0xd65b0
	negs r1, r4	@ 000d65b0 6142
.org 0xd65b2
	movs r0, #128	@ 000d65b2 8020
.org 0xd65b4
	lsls r0, r0, #1	@ 000d65b4 4000
.org 0xd65b6
	cmp r1, r0	@ 000d65b6 8142
.org 0xd65b8
	ble.n 0xd65bc	@ 000d65b8 00dd
.org 0xd65ba
	asrs r4, r3, #16	@ 000d65ba 1c14
.org 0xd65bc
	subs r2, r5, #1	@ 000d65bc 6a1e
.org 0xd65be
	lsls r2, r2, #8	@ 000d65be 1202
.org 0xd65c0
	asrs r3, r3, #24	@ 000d65c0 1b16
.org 0xd65c2
	ldr r6, [pc, #72]	@ 000d65c2 124e
.org 0xd65c4
	ldr r0, [r6, #0]	@ 000d65c4 3068
.org 0xd65c6
	ldr r1, [pc, #72]	@ 000d65c6 1249
.org 0xd65c8
	mov ip, r1	@ 000d65c8 8c46
.org 0xd65ca
	mov r1, ip	@ 000d65ca 6146
.org 0xd65cc
	muls r1, r0	@ 000d65cc 4143
.org 0xd65ce
	adds r0, r1, #0	@ 000d65ce 081c
.org 0xd65d0
	ldr r1, [pc, #64]	@ 000d65d0 1049
.org 0xd65d2
	adds r0, r0, r1	@ 000d65d2 4018
.org 0xd65d4
	lsls r0, r0, #1	@ 000d65d4 4000
.org 0xd65d6
	lsrs r5, r0, #1	@ 000d65d6 4508
.org 0xd65d8
	str r5, [r6, #0]	@ 000d65d8 3560
.org 0xd65da
	lsrs r0, r0, #17	@ 000d65da 400c
.org 0xd65dc
	ldr r1, [pc, #56]	@ 000d65dc 0e49
.org 0xd65de
	ands r0, r1	@ 000d65de 0840
.org 0xd65e0
	muls r0, r3	@ 000d65e0 5843
.org 0xd65e2
	adds r2, r2, r0	@ 000d65e2 1218
.org 0xd65e4
	adds r2, r2, r4	@ 000d65e4 1219
.org 0xd65e6
	str r2, [r7, #92]	@ 000d65e6 fa65
.org 0xd65e8
	mov r2, r8	@ 000d65e8 4246
.org 0xd65ea
	lsls r0, r2, #24	@ 000d65ea 1006
.org 0xd65ec
	adds r2, r0, #0	@ 000d65ec 021c
.org 0xd65ee
	cmp r2, #0	@ 000d65ee 002a
.org 0xd65f0
	bne.n 0xd66d4	@ 000d65f0 70d1
.org 0xd65f2
	mov r0, ip	@ 000d65f2 6046
.org 0xd65f4
	muls r0, r5	@ 000d65f4 6843
.org 0xd65f6
	ldr r1, [pc, #28]	@ 000d65f6 0749
.org 0xd65f8
	adds r0, r0, r1	@ 000d65f8 4018
.org 0xd65fa
	lsls r0, r0, #1	@ 000d65fa 4000
.org 0xd65fc
	lsrs r1, r0, #1	@ 000d65fc 4108
.org 0xd65fe
	str r1, [r6, #0]	@ 000d65fe 3160
.org 0xd6600
	lsls r0, r0, #6	@ 000d6600 8001
.org 0xd6602
	lsrs r0, r0, #23	@ 000d6602 c00d
.org 0xd6604
	b.n 0xd66b4	@ 000d6604 56e0
.org 0xd6606
	.byte 0x00	@ 000d6606 data
.org 0xd6607
	.byte 0x00	@ 000d6607 data
.org 0xd6608
	.byte 0x08,0x7f,0x86,0x08	@ 000d6608 data
.org 0xd660c
	.byte 0x38,0xdc,0x02,0x02	@ 000d660c data
.org 0xd6610
	.byte 0xfd,0x43,0x03,0x00	@ 000d6610 data
.org 0xd6614
	.byte 0xc3,0x9e,0x26,0x00	@ 000d6614 data
.org 0xd6618
	.byte 0x7f,0x01,0x00,0x00	@ 000d6618 data
.org 0xd661c
	cmp r0, #1	@ 000d661c 0128
.org 0xd661e
	bne.n 0xd6674	@ 000d661e 29d1
.org 0xd6620
	subs r1, r5, #1	@ 000d6620 691e
.org 0xd6622
	lsls r1, r1, #8	@ 000d6622 0902
.org 0xd6624
	ldr r6, [pc, #52]	@ 000d6624 0d4e
.org 0xd6626
	ldr r0, [r6, #0]	@ 000d6626 3068
.org 0xd6628
	ldr r5, [pc, #52]	@ 000d6628 0d4d
.org 0xd662a
	muls r0, r5	@ 000d662a 6843
.org 0xd662c
	ldr r3, [pc, #52]	@ 000d662c 0d4b
.org 0xd662e
	adds r0, r0, r3	@ 000d662e c018
.org 0xd6630
	lsls r0, r0, #1	@ 000d6630 4000
.org 0xd6632
	lsrs r2, r0, #1	@ 000d6632 4208
.org 0xd6634
	lsrs r0, r0, #17	@ 000d6634 400c
.org 0xd6636
	ldr r4, [pc, #48]	@ 000d6636 0c4c
.org 0xd6638
	ands r0, r4	@ 000d6638 2040
.org 0xd663a
	adds r1, r1, r0	@ 000d663a 0918
.org 0xd663c
	ldr r0, [pc, #44]	@ 000d663c 0b48
.org 0xd663e
	adds r1, r1, r0	@ 000d663e 0918
.org 0xd6640
	str r1, [r7, #92]	@ 000d6640 f965
.org 0xd6642
	adds r0, r2, #0	@ 000d6642 101c
.org 0xd6644
	muls r0, r5	@ 000d6644 6843
.org 0xd6646
	adds r0, r0, r3	@ 000d6646 c018
.org 0xd6648
	lsls r0, r0, #1	@ 000d6648 4000
.org 0xd664a
	lsrs r1, r0, #1	@ 000d664a 4108
.org 0xd664c
	str r1, [r6, #0]	@ 000d664c 3160
.org 0xd664e
	lsrs r0, r0, #17	@ 000d664e 400c
.org 0xd6650
	ands r0, r4	@ 000d6650 2040
.org 0xd6652
	ldr r1, [pc, #28]	@ 000d6652 0749
.org 0xd6654
	subs r1, r1, r0	@ 000d6654 091a
.org 0xd6656
	str r1, [r7, #96]	@ 000d6656 3966
.org 0xd6658
	b.n 0xd66e6	@ 000d6658 45e0
.org 0xd665a
	.byte 0x00	@ 000d665a data
.org 0xd665b
	.byte 0x00	@ 000d665b data
.org 0xd665c
	.byte 0x38,0xdc,0x02,0x02	@ 000d665c data
.org 0xd6660
	.byte 0xfd,0x43,0x03,0x00	@ 000d6660 data
.org 0xd6664
	.byte 0xc3,0x9e,0x26,0x00	@ 000d6664 data
.org 0xd6668
	.byte 0xff,0x01,0x00,0x00	@ 000d6668 data
.org 0xd666c
	.byte 0x00,0xff,0xff,0xff	@ 000d666c data
.org 0xd6670
	.byte 0x00,0xfe,0xff,0xff	@ 000d6670 data
.org 0xd6674
	subs r1, r5, #1	@ 000d6674 691e
.org 0xd6676
	lsls r1, r1, #8	@ 000d6676 0902
.org 0xd6678
	ldr r4, [pc, #64]	@ 000d6678 104c
.org 0xd667a
	ldr r0, [r4, #0]	@ 000d667a 2068
.org 0xd667c
	ldr r6, [pc, #64]	@ 000d667c 104e
.org 0xd667e
	muls r0, r6	@ 000d667e 7043
.org 0xd6680
	ldr r2, [pc, #64]	@ 000d6680 104a
.org 0xd6682
	adds r0, r0, r2	@ 000d6682 8018
.org 0xd6684
	lsls r0, r0, #1	@ 000d6684 4000
.org 0xd6686
	lsrs r3, r0, #1	@ 000d6686 4308
.org 0xd6688
	str r3, [r4, #0]	@ 000d6688 2360
.org 0xd668a
	lsrs r0, r0, #17	@ 000d668a 400c
.org 0xd668c
	ldr r5, [pc, #56]	@ 000d668c 0e4d
.org 0xd668e
	ands r0, r5	@ 000d668e 2840
.org 0xd6690
	adds r1, r1, r0	@ 000d6690 0918
.org 0xd6692
	ldr r0, [pc, #56]	@ 000d6692 0e48
.org 0xd6694
	adds r1, r1, r0	@ 000d6694 0918
.org 0xd6696
	str r1, [r7, #92]	@ 000d6696 f965
.org 0xd6698
	mov r1, r8	@ 000d6698 4146
.org 0xd669a
	lsls r0, r1, #24	@ 000d669a 0806
.org 0xd669c
	adds r2, r0, #0	@ 000d669c 021c
.org 0xd669e
	cmp r2, #0	@ 000d669e 002a
.org 0xd66a0
	bne.n 0xd66d4	@ 000d66a0 18d1
.org 0xd66a2
	adds r0, r3, #0	@ 000d66a2 181c
.org 0xd66a4
	muls r0, r6	@ 000d66a4 7043
.org 0xd66a6
	ldr r1, [pc, #28]	@ 000d66a6 0749
.org 0xd66a8
	adds r0, r0, r1	@ 000d66a8 4018
.org 0xd66aa
	lsls r0, r0, #1	@ 000d66aa 4000
.org 0xd66ac
	lsrs r1, r0, #1	@ 000d66ac 4108
.org 0xd66ae
	str r1, [r4, #0]	@ 000d66ae 2160
.org 0xd66b0
	lsrs r0, r0, #17	@ 000d66b0 400c
.org 0xd66b2
	ands r0, r5	@ 000d66b2 2840
.org 0xd66b4
	ldr r1, [pc, #24]	@ 000d66b4 0649
.org 0xd66b6
	subs r1, r1, r0	@ 000d66b6 091a
.org 0xd66b8
	str r1, [r7, #96]	@ 000d66b8 3966
.org 0xd66ba
	b.n 0xd66d8	@ 000d66ba 0de0
.org 0xd66bc
	.byte 0x38,0xdc,0x02,0x02	@ 000d66bc data
.org 0xd66c0
	.byte 0xfd,0x43,0x03,0x00	@ 000d66c0 data
.org 0xd66c4
	.byte 0xc3,0x9e,0x26,0x00	@ 000d66c4 data

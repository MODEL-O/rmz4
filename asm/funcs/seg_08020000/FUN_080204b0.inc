@ FUN_080204b0  entry 0x080204b0  size 746
.thumb
.org 0x204b0
FUN_080204b0:
	push {r4, r5, r6, r7, lr}	@ 000204b0 f0b5
.org 0x204b2
	adds r4, r0, #0	@ 000204b2 041c
.org 0x204b4
	ldr r3, [r4, #32]	@ 000204b4 236a
.org 0x204b6
	movs r0, #190	@ 000204b6 be20
.org 0x204b8
	lsls r0, r0, #1	@ 000204b8 4000
.org 0x204ba
	adds r6, r4, r0	@ 000204ba 2618
.org 0x204bc
	ldrb r0, [r6, #0]	@ 000204bc 3078
.org 0x204be
	cmp r0, #0	@ 000204be 0028
.org 0x204c0
	beq.n 0x204c4	@ 000204c0 00d0
.org 0x204c2
	b.n 0x205b4	@ 000204c2 77e0
.org 0x204c4
	ldr r5, [pc, #56]	@ 000204c4 0e4d
.org 0x204c6
	ldrh r0, [r5, #8]	@ 000204c6 2889
.org 0x204c8
	movs r7, #1	@ 000204c8 0127
.org 0x204ca
	movs r1, #0	@ 000204ca 0021
.org 0x204cc
	mov ip, r1	@ 000204cc 8c46
.org 0x204ce
	adds r3, r7, #0	@ 000204ce 3b1c
.org 0x204d0
	orrs r3, r0	@ 000204d0 0343
.org 0x204d2
	strh r3, [r5, #8]	@ 000204d2 2b81
.org 0x204d4
	ldr r2, [pc, #44]	@ 000204d4 0b4a
.org 0x204d6
	ldrb r1, [r2, #4]	@ 000204d6 1179
.org 0x204d8
	movs r0, #8	@ 000204d8 0820
.org 0x204da
	orrs r0, r1	@ 000204da 0843
.org 0x204dc
	strb r0, [r2, #4]	@ 000204dc 1071
.org 0x204de
	ldr r1, [pc, #40]	@ 000204de 0a49
.org 0x204e0
	adds r0, r4, r1	@ 000204e0 6018
.org 0x204e2
	mov r1, ip	@ 000204e2 6146
.org 0x204e4
	strb r1, [r0, #0]	@ 000204e4 0170
.org 0x204e6
	ldrb r4, [r5, #2]	@ 000204e6 ac78
.org 0x204e8
	cmp r4, #0	@ 000204e8 002c
.org 0x204ea
	bne.n 0x20510	@ 000204ea 11d1
.org 0x204ec
	adds r0, r5, #0	@ 000204ec 281c
.org 0x204ee
	adds r0, #16	@ 000204ee 1030
.org 0x204f0
	ldr r1, [pc, #24]	@ 000204f0 0649
.org 0x204f2
	ldr r1, [r1, #8]	@ 000204f2 8968
.org 0x204f4
	ldr r1, [r1, #0]	@ 000204f4 0968
.org 0x204f6
	bl 0x275f0	@ 000204f6 07f07bf8
.org 0x204fa
	movs r0, #1	@ 000204fa 0120
.org 0x204fc
	b.n 0x20524	@ 000204fc 12e0
.org 0x204fe
	.byte 0x00	@ 000204fe data
.org 0x204ff
	.byte 0x00	@ 000204ff data
.org 0x20500
	.byte 0x10,0xe9,0x02,0x02	@ 00020500 data
.org 0x20504
	.byte 0xb0,0xe8,0x02,0x02	@ 00020504 data
.org 0x20508
	.byte 0x7d,0x01,0x00,0x00	@ 00020508 data
.org 0x2050c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002050c data
.org 0x20510
	cmp r4, #1	@ 00020510 012c
.org 0x20512
	bne.n 0x20530	@ 00020512 0dd1
.org 0x20514
	adds r0, r5, #0	@ 00020514 281c
.org 0x20516
	adds r0, #16	@ 00020516 1030
.org 0x20518
	ldr r1, [pc, #16]	@ 00020518 0449
.org 0x2051a
	ldr r1, [r1, #8]	@ 0002051a 8968
.org 0x2051c
	ldr r1, [r1, #4]	@ 0002051c 4968
.org 0x2051e
	bl 0x275f0	@ 0002051e 07f067f8
.org 0x20522
	movs r0, #2	@ 00020522 0220
.org 0x20524
	bl 0x1f63c	@ 00020524 fff78af8
.org 0x20528
	strb r7, [r6, #0]	@ 00020528 3770
.org 0x2052a
	b.n 0x20842	@ 0002052a 8ae1
.org 0x2052c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002052c data
.org 0x20530
	cmp r4, #2	@ 00020530 022c
.org 0x20532
	bne.n 0x2054c	@ 00020532 0bd1
.org 0x20534
	adds r0, r5, #0	@ 00020534 281c
.org 0x20536
	adds r0, #16	@ 00020536 1030
.org 0x20538
	ldr r1, [pc, #12]	@ 00020538 0349
.org 0x2053a
	ldr r1, [r1, #8]	@ 0002053a 8968
.org 0x2053c
	ldr r1, [r1, #8]	@ 0002053c 8968
.org 0x2053e
	bl 0x275f0	@ 0002053e 07f057f8
.org 0x20542
	strb r7, [r6, #0]	@ 00020542 3770
.org 0x20544
	b.n 0x20842	@ 00020544 7de1
.org 0x20546
	.byte 0x00	@ 00020546 data
.org 0x20547
	.byte 0x00	@ 00020547 data
.org 0x20548
	.byte 0xf8,0x2c,0x84,0x08	@ 00020548 data
.org 0x2054c
	cmp r4, #3	@ 0002054c 032c
.org 0x2054e
	bne.n 0x20564	@ 0002054e 09d1
.org 0x20550
	adds r0, r5, #0	@ 00020550 281c
.org 0x20552
	adds r0, #16	@ 00020552 1030
.org 0x20554
	ldr r1, [pc, #8]	@ 00020554 0249
.org 0x20556
	ldr r1, [r1, #8]	@ 00020556 8968
.org 0x20558
	ldr r1, [r1, #12]	@ 00020558 c968
.org 0x2055a
	bl 0x275f0	@ 0002055a 07f049f8
.org 0x2055e
	b.n 0x205ce	@ 0002055e 36e0
.org 0x20560
	.byte 0xf8,0x2c,0x84,0x08	@ 00020560 data
.org 0x20564
	cmp r4, #4	@ 00020564 042c
.org 0x20566
	bne.n 0x20578	@ 00020566 07d1
.org 0x20568
	adds r0, r5, #0	@ 00020568 281c
.org 0x2056a
	adds r0, #16	@ 0002056a 1030
.org 0x2056c
	ldr r1, [pc, #4]	@ 0002056c 0149
.org 0x2056e
	ldr r1, [r1, #8]	@ 0002056e 8968
.org 0x20570
	ldr r1, [r1, #20]	@ 00020570 4969
.org 0x20572
	b.n 0x20586	@ 00020572 08e0
.org 0x20574
	.byte 0xf8,0x2c,0x84,0x08	@ 00020574 data
.org 0x20578
	cmp r4, #5	@ 00020578 052c
.org 0x2057a
	bne.n 0x20594	@ 0002057a 0bd1
.org 0x2057c
	adds r0, r5, #0	@ 0002057c 281c
.org 0x2057e
	adds r0, #16	@ 0002057e 1030
.org 0x20580
	ldr r1, [pc, #12]	@ 00020580 0349
.org 0x20582
	ldr r1, [r1, #8]	@ 00020582 8968
.org 0x20584
	ldr r1, [r1, #28]	@ 00020584 c969
.org 0x20586
	bl 0x275f0	@ 00020586 07f033f8
.org 0x2058a
	strb r4, [r6, #0]	@ 0002058a 3470
.org 0x2058c
	b.n 0x20842	@ 0002058c 59e1
.org 0x2058e
	.byte 0x00	@ 0002058e data
.org 0x2058f
	.byte 0x00	@ 0002058f data
.org 0x20590
	.byte 0xf8,0x2c,0x84,0x08	@ 00020590 data
.org 0x20594
	cmp r4, #6	@ 00020594 062c
.org 0x20596
	beq.n 0x2059a	@ 00020596 00d0
.org 0x20598
	b.n 0x20842	@ 00020598 53e1
.org 0x2059a
	movs r0, #4	@ 0002059a 0420
.org 0x2059c
	orrs r3, r0	@ 0002059c 0343
.org 0x2059e
	mov r0, ip	@ 0002059e 6046
.org 0x205a0
	orrs r3, r0	@ 000205a0 0343
.org 0x205a2
	ldr r0, [pc, #12]	@ 000205a2 0348
.org 0x205a4
	ands r3, r0	@ 000205a4 0340
.org 0x205a6
	strh r3, [r5, #8]	@ 000205a6 2b81
.org 0x205a8
	movs r0, #11	@ 000205a8 0b20
.org 0x205aa
	strb r0, [r6, #0]	@ 000205aa 3070
.org 0x205ac
	b.n 0x20842	@ 000205ac 49e1
.org 0x205ae
	.byte 0x00	@ 000205ae data
.org 0x205af
	.byte 0x00	@ 000205af data
.org 0x205b0
	.byte 0xfe,0xff,0x00,0x00	@ 000205b0 data
.org 0x205b4
	cmp r0, #1	@ 000205b4 0128
.org 0x205b6
	bne.n 0x205dc	@ 000205b6 11d1
.org 0x205b8
	ldr r1, [r3, #84]	@ 000205b8 596d
.org 0x205ba
	ldr r0, [pc, #24]	@ 000205ba 0648
.org 0x205bc
	cmp r1, r0	@ 000205bc 8142
.org 0x205be
	ble.n 0x205dc	@ 000205be 0ddd
.org 0x205c0
	ldr r0, [pc, #20]	@ 000205c0 0548
.org 0x205c2
	movs r1, #135	@ 000205c2 8721
.org 0x205c4
	lsls r1, r1, #13	@ 000205c4 4903
.org 0x205c6
	str r1, [r0, #0]	@ 000205c6 0160
.org 0x205c8
	movs r0, #3	@ 000205c8 0320
.org 0x205ca
	bl 0x1f63c	@ 000205ca fff737f8
.org 0x205ce
	movs r0, #2	@ 000205ce 0220
.org 0x205d0
	strb r0, [r6, #0]	@ 000205d0 3070
.org 0x205d2
	b.n 0x20842	@ 000205d2 36e1
.org 0x205d4
	.byte 0xff,0x57,0x11,0x00	@ 000205d4 data
.org 0x205d8
	.byte 0x54,0xea,0x02,0x02	@ 000205d8 data
.org 0x205dc
	movs r1, #190	@ 000205dc be21
.org 0x205de
	lsls r1, r1, #1	@ 000205de 4900
.org 0x205e0
	adds r5, r4, r1	@ 000205e0 6518
.org 0x205e2
	ldrb r0, [r5, #0]	@ 000205e2 2878
.org 0x205e4
	cmp r0, #2	@ 000205e4 0228
.org 0x205e6
	bne.n 0x206a8	@ 000205e6 5fd1
.org 0x205e8
	ldr r0, [pc, #60]	@ 000205e8 0f48
.org 0x205ea
	adds r6, r4, r0	@ 000205ea 2618
.org 0x205ec
	ldrb r0, [r6, #0]	@ 000205ec 3078
.org 0x205ee
	cmp r0, #0	@ 000205ee 0028
.org 0x205f0
	bne.n 0x20638	@ 000205f0 22d1
.org 0x205f2
	ldr r1, [r3, #84]	@ 000205f2 596d
.org 0x205f4
	ldr r0, [pc, #52]	@ 000205f4 0d48
.org 0x205f6
	cmp r1, r0	@ 000205f6 8142
.org 0x205f8
	ble.n 0x20638	@ 000205f8 1edd
.org 0x205fa
	ldr r2, [pc, #52]	@ 000205fa 0d4a
.org 0x205fc
	ldrb r1, [r2, #1]	@ 000205fc 5178
.org 0x205fe
	movs r0, #2	@ 000205fe 0220
.org 0x20600
	orrs r0, r1	@ 00020600 0843
.org 0x20602
	strb r0, [r2, #1]	@ 00020602 5070
.org 0x20604
	ldr r0, [pc, #44]	@ 00020604 0b48
.org 0x20606
	movs r1, #180	@ 00020606 b421
.org 0x20608
	lsls r1, r1, #1	@ 00020608 4900
.org 0x2060a
	adds r5, r0, r1	@ 0002060a 4518
.org 0x2060c
	ldr r0, [r5, #0]	@ 0002060c 2868
.org 0x2060e
	movs r4, #1	@ 0002060e 0124
.org 0x20610
	negs r4, r4	@ 00020610 6442
.org 0x20612
	cmp r0, r4	@ 00020612 a042
.org 0x20614
	beq.n 0x20620	@ 00020614 04d0
.org 0x20616
	lsls r0, r0, #16	@ 00020616 0004
.org 0x20618
	lsrs r0, r0, #16	@ 00020618 000c
.org 0x2061a
	bl 0x2a98	@ 0002061a e2f73dfa
.org 0x2061e
	str r4, [r5, #0]	@ 0002061e 2c60
.org 0x20620
	movs r0, #1	@ 00020620 0120
.org 0x20622
	strb r0, [r6, #0]	@ 00020622 3070
.org 0x20624
	b.n 0x20842	@ 00020624 0de1
.org 0x20626
	.byte 0x00	@ 00020626 data
.org 0x20627
	.byte 0x00	@ 00020627 data
.org 0x20628
	.byte 0x7d,0x01,0x00,0x00	@ 00020628 data
.org 0x2062c
	.byte 0xff,0x0f,0x1c,0x00	@ 0002062c data
.org 0x20630
	.byte 0xe0,0x32,0x00,0x03	@ 00020630 data
.org 0x20634
	.byte 0x10,0xe9,0x02,0x02	@ 00020634 data
.org 0x20638
	ldr r0, [pc, #20]	@ 00020638 0548
.org 0x2063a
	adds r2, r4, r0	@ 0002063a 2218
.org 0x2063c
	ldrb r0, [r2, #0]	@ 0002063c 1078
.org 0x2063e
	cmp r0, #1	@ 0002063e 0128
.org 0x20640
	bne.n 0x20658	@ 00020640 0ad1
.org 0x20642
	ldr r0, [pc, #16]	@ 00020642 0448
.org 0x20644
	movs r1, #0	@ 00020644 0021
.org 0x20646
	strb r1, [r0, #1]	@ 00020646 4170
.org 0x20648
	movs r0, #2	@ 00020648 0220
.org 0x2064a
	strb r0, [r2, #0]	@ 0002064a 1070
.org 0x2064c
	b.n 0x20842	@ 0002064c f9e0
.org 0x2064e
	.byte 0x00	@ 0002064e data
.org 0x2064f
	.byte 0x00	@ 0002064f data
.org 0x20650
	.byte 0x7d,0x01,0x00,0x00	@ 00020650 data
.org 0x20654
	.byte 0xe0,0x32,0x00,0x03	@ 00020654 data
.org 0x20658
	cmp r0, #2	@ 00020658 0228
.org 0x2065a
	beq.n 0x2065e	@ 0002065a 00d0
.org 0x2065c
	b.n 0x20842	@ 0002065c f1e0
.org 0x2065e
	ldr r1, [r3, #84]	@ 0002065e 596d
.org 0x20660
	ldr r0, [pc, #60]	@ 00020660 0f48
.org 0x20662
	cmp r1, r0	@ 00020662 8142
.org 0x20664
	bgt.n 0x20668	@ 00020664 00dc
.org 0x20666
	b.n 0x20842	@ 00020666 ece0
.org 0x20668
	ldr r0, [pc, #56]	@ 00020668 0e48
.org 0x2066a
	movs r1, #180	@ 0002066a b421
.org 0x2066c
	lsls r1, r1, #1	@ 0002066c 4900
.org 0x2066e
	adds r5, r0, r1	@ 0002066e 4518
.org 0x20670
	ldr r0, [r5, #0]	@ 00020670 2868
.org 0x20672
	cmp r0, #155	@ 00020672 9b28
.org 0x20674
	beq.n 0x20692	@ 00020674 0dd0
.org 0x20676
	movs r6, #1	@ 00020676 0126
.org 0x20678
	negs r6, r6	@ 00020678 7642
.org 0x2067a
	cmp r0, r6	@ 0002067a b042
.org 0x2067c
	beq.n 0x20688	@ 0002067c 04d0
.org 0x2067e
	lsls r0, r0, #16	@ 0002067e 0004
.org 0x20680
	lsrs r0, r0, #16	@ 00020680 000c
.org 0x20682
	bl 0x2a98	@ 00020682 e2f709fa
.org 0x20686
	str r6, [r5, #0]	@ 00020686 2e60
.org 0x20688
	movs r0, #155	@ 00020688 9b20
.org 0x2068a
	bl 0x2a88	@ 0002068a e2f7fdf9
.org 0x2068e
	movs r0, #155	@ 0002068e 9b20
.org 0x20690
	str r0, [r5, #0]	@ 00020690 2860
.org 0x20692
	movs r0, #190	@ 00020692 be20
.org 0x20694
	lsls r0, r0, #1	@ 00020694 4000
.org 0x20696
	adds r1, r4, r0	@ 00020696 2118
.org 0x20698
	movs r0, #3	@ 00020698 0320
.org 0x2069a
	strb r0, [r1, #0]	@ 0002069a 0870
.org 0x2069c
	b.n 0x20842	@ 0002069c d1e0
.org 0x2069e
	.byte 0x00	@ 0002069e data
.org 0x2069f
	.byte 0x00	@ 0002069f data
.org 0x206a0
	.byte 0xff,0x2f,0x1c,0x00	@ 000206a0 data
.org 0x206a4
	.byte 0x10,0xe9,0x02,0x02	@ 000206a4 data
.org 0x206a8
	cmp r0, #3	@ 000206a8 0328
.org 0x206aa
	bne.n 0x206d8	@ 000206aa 15d1
.org 0x206ac
	ldr r1, [r3, #84]	@ 000206ac 596d
.org 0x206ae
	ldr r0, [pc, #24]	@ 000206ae 0648
.org 0x206b0
	cmp r1, r0	@ 000206b0 8142
.org 0x206b2
	ble.n 0x206d8	@ 000206b2 11dd
.org 0x206b4
	ldr r2, [pc, #20]	@ 000206b4 054a
.org 0x206b6
	ldrb r1, [r2, #4]	@ 000206b6 1179
.org 0x206b8
	movs r0, #8	@ 000206b8 0820
.org 0x206ba
	orrs r0, r1	@ 000206ba 0843
.org 0x206bc
	strb r0, [r2, #4]	@ 000206bc 1071
.org 0x206be
	ldr r0, [pc, #16]	@ 000206be 0448
.org 0x206c0
	ldr r1, [pc, #16]	@ 000206c0 0449
.org 0x206c2
	ldr r1, [r1, #8]	@ 000206c2 8968
.org 0x206c4
	ldr r1, [r1, #16]	@ 000206c4 0969
.org 0x206c6
	b.n 0x206fe	@ 000206c6 1ae0
.org 0x206c8
	.byte 0xff,0xff,0x1c,0x00	@ 000206c8 data
.org 0x206cc
	.byte 0xb0,0xe8,0x02,0x02	@ 000206cc data
.org 0x206d0
	.byte 0x20,0xe9,0x02,0x02	@ 000206d0 data
.org 0x206d4
	.byte 0xf8,0x2c,0x84,0x08	@ 000206d4 data
.org 0x206d8
	movs r1, #190	@ 000206d8 be21
.org 0x206da
	lsls r1, r1, #1	@ 000206da 4900
.org 0x206dc
	adds r5, r4, r1	@ 000206dc 6518
.org 0x206de
	ldrb r0, [r5, #0]	@ 000206de 2878
.org 0x206e0
	cmp r0, #4	@ 000206e0 0428
.org 0x206e2
	bne.n 0x20720	@ 000206e2 1dd1
.org 0x206e4
	ldr r1, [r3, #84]	@ 000206e4 596d
.org 0x206e6
	ldr r0, [pc, #40]	@ 000206e6 0a48
.org 0x206e8
	cmp r1, r0	@ 000206e8 8142
.org 0x206ea
	ble.n 0x20720	@ 000206ea 19dd
.org 0x206ec
	ldr r2, [pc, #36]	@ 000206ec 094a
.org 0x206ee
	ldrb r1, [r2, #4]	@ 000206ee 1179
.org 0x206f0
	movs r0, #8	@ 000206f0 0820
.org 0x206f2
	orrs r0, r1	@ 000206f2 0843
.org 0x206f4
	strb r0, [r2, #4]	@ 000206f4 1071
.org 0x206f6
	ldr r0, [pc, #32]	@ 000206f6 0848
.org 0x206f8
	ldr r1, [pc, #32]	@ 000206f8 0849
.org 0x206fa
	ldr r1, [r1, #8]	@ 000206fa 8968
.org 0x206fc
	ldr r1, [r1, #24]	@ 000206fc 8969
.org 0x206fe
	bl 0x275f0	@ 000206fe 06f077ff
.org 0x20702
	movs r0, #5	@ 00020702 0520
.org 0x20704
	bl 0x1f63c	@ 00020704 fef79aff
.org 0x20708
	movs r0, #5	@ 00020708 0520
.org 0x2070a
	strb r0, [r5, #0]	@ 0002070a 2870
.org 0x2070c
	b.n 0x20842	@ 0002070c 99e0
.org 0x2070e
	.byte 0x00	@ 0002070e data
.org 0x2070f
	.byte 0x00	@ 0002070f data
.org 0x20710
	.byte 0xff,0xff,0x1c,0x00	@ 00020710 data
.org 0x20714
	.byte 0xb0,0xe8,0x02,0x02	@ 00020714 data
.org 0x20718
	.byte 0x20,0xe9,0x02,0x02	@ 00020718 data
.org 0x2071c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002071c data
.org 0x20720
	movs r0, #190	@ 00020720 be20
.org 0x20722
	lsls r0, r0, #1	@ 00020722 4000
.org 0x20724
	adds r6, r4, r0	@ 00020724 2618
.org 0x20726
	ldrb r0, [r6, #0]	@ 00020726 3078
.org 0x20728
	cmp r0, #5	@ 00020728 0528
.org 0x2072a
	bne.n 0x20738	@ 0002072a 05d1
.org 0x2072c
	movs r0, #4	@ 0002072c 0420
.org 0x2072e
	bl 0x1f63c	@ 0002072e fef785ff
.org 0x20732
	movs r0, #6	@ 00020732 0620
.org 0x20734
	strb r0, [r6, #0]	@ 00020734 3070
.org 0x20736
	b.n 0x20842	@ 00020736 84e0
.org 0x20738
	cmp r0, #6	@ 00020738 0628
.org 0x2073a
	bne.n 0x20794	@ 0002073a 2bd1
.org 0x2073c
	ldr r5, [pc, #68]	@ 0002073c 114d
.org 0x2073e
	ldrh r1, [r5, #8]	@ 0002073e 2989
.org 0x20740
	movs r0, #16	@ 00020740 1020
.org 0x20742
	ands r0, r1	@ 00020742 0840
.org 0x20744
	cmp r0, #0	@ 00020744 0028
.org 0x20746
	beq.n 0x20794	@ 00020746 25d0
.org 0x20748
	ldr r1, [pc, #60]	@ 00020748 0f49
.org 0x2074a
	ldrb r2, [r1, #0]	@ 0002074a 0a78
.org 0x2074c
	movs r0, #128	@ 0002074c 8020
.org 0x2074e
	orrs r0, r2	@ 0002074e 1043
.org 0x20750
	strb r0, [r1, #0]	@ 00020750 0870
.org 0x20752
	ldrb r2, [r1, #1]	@ 00020752 4a78
.org 0x20754
	movs r0, #2	@ 00020754 0220
.org 0x20756
	orrs r0, r2	@ 00020756 1043
.org 0x20758
	strb r0, [r1, #1]	@ 00020758 4870
.org 0x2075a
	adds r0, r5, #0	@ 0002075a 281c
.org 0x2075c
	adds r0, #16	@ 0002075c 1030
.org 0x2075e
	ldr r1, [pc, #44]	@ 0002075e 0b49
.org 0x20760
	ldr r1, [r1, #8]	@ 00020760 8968
.org 0x20762
	ldr r1, [r1, #32]	@ 00020762 096a
.org 0x20764
	bl 0x275f0	@ 00020764 06f044ff
.org 0x20768
	ldrh r0, [r5, #8]	@ 00020768 2889
.org 0x2076a
	ldr r1, [pc, #36]	@ 0002076a 0949
.org 0x2076c
	ands r1, r0	@ 0002076c 0140
.org 0x2076e
	ldrb r2, [r5, #18]	@ 0002076e aa7c
.org 0x20770
	movs r0, #253	@ 00020770 fd20
.org 0x20772
	ands r0, r2	@ 00020772 1040
.org 0x20774
	strb r0, [r5, #18]	@ 00020774 a874
.org 0x20776
	movs r0, #1	@ 00020776 0120
.org 0x20778
	orrs r1, r0	@ 00020778 0143
.org 0x2077a
	strh r1, [r5, #8]	@ 0002077a 2981
.org 0x2077c
	movs r0, #7	@ 0002077c 0720
.org 0x2077e
	strb r0, [r6, #0]	@ 0002077e 3070
.org 0x20780
	b.n 0x20842	@ 00020780 5fe0
.org 0x20782
	.byte 0x00	@ 00020782 data
.org 0x20783
	.byte 0x00	@ 00020783 data
.org 0x20784
	.byte 0x10,0xe9,0x02,0x02	@ 00020784 data
.org 0x20788
	.byte 0xe0,0x32,0x00,0x03	@ 00020788 data
.org 0x2078c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002078c data
.org 0x20790
	.byte 0xef,0xff,0x00,0x00	@ 00020790 data
.org 0x20794
	movs r1, #190	@ 00020794 be21
.org 0x20796
	lsls r1, r1, #1	@ 00020796 4900
.org 0x20798
	adds r5, r4, r1	@ 00020798 6518

@ FUN_080355c8  entry 0x080355c8  size 212
.thumb
.org 0x355c8
FUN_080355c8:
	push {r4, lr}	@ 000355c8 10b5
.org 0x355ca
	adds r4, r0, #0	@ 000355ca 041c
.org 0x355cc
	adds r0, #180	@ 000355cc b430
.org 0x355ce
	ldrb r0, [r0, #12]	@ 000355ce 007b
.org 0x355d0
	cmp r0, #1	@ 000355d0 0128
.org 0x355d2
	bne.n 0x355da	@ 000355d2 02d1
.org 0x355d4
	adds r0, r4, #0	@ 000355d4 201c
.org 0x355d6
	movs r1, #0	@ 000355d6 0021
.org 0x355d8
	b.n 0x355de	@ 000355d8 01e0
.org 0x355da
	adds r0, r4, #0	@ 000355da 201c
.org 0x355dc
	movs r1, #1	@ 000355dc 0121
.org 0x355de
	bl 0x3a428	@ 000355de 04f023ff
.org 0x355e2
	lsls r0, r0, #24	@ 000355e2 0006
.org 0x355e4
	lsrs r1, r0, #24	@ 000355e4 010e
.org 0x355e6
	ldr r2, [pc, #64]	@ 000355e6 104a
.org 0x355e8
	adds r0, r4, r2	@ 000355e8 a018
.org 0x355ea
	ldrb r0, [r0, #0]	@ 000355ea 0078
.org 0x355ec
	adds r2, r4, #0	@ 000355ec 221c
.org 0x355ee
	adds r2, #180	@ 000355ee b432
.org 0x355f0
	cmp r0, #3	@ 000355f0 0328
.org 0x355f2
	bne.n 0x355f6	@ 000355f2 00d1
.org 0x355f4
	movs r1, #2	@ 000355f4 0221
.org 0x355f6
	cmp r1, #2	@ 000355f6 0229
.org 0x355f8
	bne.n 0x35634	@ 000355f8 1cd1
.org 0x355fa
	ldr r0, [pc, #48]	@ 000355fa 0c48
.org 0x355fc
	adds r2, r4, r0	@ 000355fc 2218
.org 0x355fe
	ldrb r0, [r2, #0]	@ 000355fe 1078
.org 0x35600
	movs r1, #2	@ 00035600 0221
.org 0x35602
	orrs r0, r1	@ 00035602 0843
.org 0x35604
	movs r1, #8	@ 00035604 0821
.org 0x35606
	orrs r0, r1	@ 00035606 0843
.org 0x35608
	strb r0, [r2, #0]	@ 00035608 1070
.org 0x3560a
	movs r1, #0	@ 0003560a 0021
.org 0x3560c
	strb r1, [r4, #14]	@ 0003560c a173
.org 0x3560e
	strb r1, [r4, #15]	@ 0003560e e173
.org 0x35610
	ldr r0, [pc, #28]	@ 00035610 0748
.org 0x35612
	adds r2, r4, r0	@ 00035612 2218
.org 0x35614
	movs r0, #4	@ 00035614 0420
.org 0x35616
	strb r0, [r2, #0]	@ 00035616 1070
.org 0x35618
	movs r2, #129	@ 00035618 8122
.org 0x3561a
	lsls r2, r2, #1	@ 0003561a 5200
.org 0x3561c
	adds r0, r4, r2	@ 0003561c a018
.org 0x3561e
	strb r1, [r0, #0]	@ 0003561e 0170
.org 0x35620
	adds r0, r4, #0	@ 00035620 201c
.org 0x35622
	bl 0x33b8c	@ 00035622 fef7b3fa
.org 0x35626
	b.n 0x356aa	@ 00035626 40e0
.org 0x35628
	.byte 0x6f,0x02,0x00,0x00	@ 00035628 data
.org 0x3562c
	.byte 0x53,0x01,0x00,0x00	@ 0003562c data
.org 0x35630
	.byte 0x01,0x01,0x00,0x00	@ 00035630 data
.org 0x35634
	movs r1, #150	@ 00035634 9621
.org 0x35636
	lsls r1, r1, #2	@ 00035636 8900
.org 0x35638
	adds r0, r4, r1	@ 00035638 6018
.org 0x3563a
	ldr r0, [r0, #0]	@ 0003563a 0068
.org 0x3563c
	movs r1, #192	@ 0003563c c021
.org 0x3563e
	ands r0, r1	@ 0003563e 0840
.org 0x35640
	cmp r0, #0	@ 00035640 0028
.org 0x35642
	beq.n 0x35668	@ 00035642 11d0
.org 0x35644
	ldrb r0, [r2, #17]	@ 00035644 507c
.org 0x35646
	cmp r0, #11	@ 00035646 0b28
.org 0x35648
	bne.n 0x35668	@ 00035648 0ed1
.org 0x3564a
	ldr r0, [pc, #24]	@ 0003564a 0648
.org 0x3564c
	adds r2, r4, r0	@ 0003564c 2218
.org 0x3564e
	movs r1, #0	@ 0003564e 0021
.org 0x35650
	movs r0, #3	@ 00035650 0320
.org 0x35652
	strb r0, [r2, #0]	@ 00035652 1070
.org 0x35654
	movs r2, #129	@ 00035654 8122
.org 0x35656
	lsls r2, r2, #1	@ 00035656 5200
.org 0x35658
	adds r0, r4, r2	@ 00035658 a018
.org 0x3565a
	strb r1, [r0, #0]	@ 0003565a 0170
.org 0x3565c
	adds r0, r4, #0	@ 0003565c 201c
.org 0x3565e
	bl 0x35960	@ 0003565e 00f07ff9
.org 0x35662
	b.n 0x356aa	@ 00035662 22e0
.org 0x35664
	.byte 0x01,0x01,0x00,0x00	@ 00035664 data
.org 0x35668
	ldrh r1, [r2, #20]	@ 00035668 918a
.org 0x3566a
	movs r0, #32	@ 0003566a 2020
.org 0x3566c
	ands r0, r1	@ 0003566c 0840
.org 0x3566e
	lsls r0, r0, #16	@ 0003566e 0004
.org 0x35670
	lsrs r2, r0, #21	@ 00035670 420d
.org 0x35672
	cmp r2, #0	@ 00035672 002a
.org 0x35674
	beq.n 0x35694	@ 00035674 0ed0
.org 0x35676
	ldr r0, [pc, #24]	@ 00035676 0648
.org 0x35678
	adds r2, r4, r0	@ 00035678 2218
.org 0x3567a
	movs r1, #0	@ 0003567a 0021
.org 0x3567c
	movs r0, #2	@ 0003567c 0220
.org 0x3567e
	strb r0, [r2, #0]	@ 0003567e 1070
.org 0x35680
	movs r2, #129	@ 00035680 8122
.org 0x35682
	lsls r2, r2, #1	@ 00035682 5200
.org 0x35684
	adds r0, r4, r2	@ 00035684 a018
.org 0x35686
	strb r1, [r0, #0]	@ 00035686 0170
.org 0x35688
	adds r0, r4, #0	@ 00035688 201c
.org 0x3568a
	bl 0x357e4	@ 0003568a 00f0abf8
.org 0x3568e
	b.n 0x356aa	@ 0003568e 0ce0
.org 0x35690
	.byte 0x01,0x01,0x00,0x00	@ 00035690 data
.org 0x35694
	ldr r0, [pc, #24]	@ 00035694 0648
.org 0x35696
	adds r1, r4, r0	@ 00035696 2118
.org 0x35698
	movs r0, #1	@ 00035698 0120
.org 0x3569a
	strb r0, [r1, #0]	@ 0003569a 0870

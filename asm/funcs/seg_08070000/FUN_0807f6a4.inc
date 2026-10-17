@ FUN_0807f6a4  entry 0x0807f6a4  size 226
.thumb
.org 0x7f6a4
FUN_0807f6a4:
	push {r4, r5, lr}	@ 0007f6a4 30b5
.org 0x7f6a6
	adds r4, r0, #0	@ 0007f6a6 041c
.org 0x7f6a8
	ldrb r5, [r4, #14]	@ 0007f6a8 a57b
.org 0x7f6aa
	cmp r5, #0	@ 0007f6aa 002d
.org 0x7f6ac
	bne.n 0x7f6d0	@ 0007f6ac 10d1
.org 0x7f6ae
	ldr r1, [pc, #84]	@ 0007f6ae 1549
.org 0x7f6b0
	bl 0x1cf00	@ 0007f6b0 9df726fc
.org 0x7f6b4
	adds r0, r4, #0	@ 0007f6b4 201c
.org 0x7f6b6
	adds r0, #116	@ 0007f6b6 7430
.org 0x7f6b8
	ldr r1, [pc, #76]	@ 0007f6b8 1349
.org 0x7f6ba
	bl 0x5784	@ 0007f6ba 86f763f8
.org 0x7f6be
	movs r0, #24	@ 0007f6be 1820
.org 0x7f6c0
	strb r0, [r4, #18]	@ 0007f6c0 a074
.org 0x7f6c2
	movs r0, #174	@ 0007f6c2 ae20
.org 0x7f6c4
	lsls r0, r0, #1	@ 0007f6c4 4000
.org 0x7f6c6
	bl 0x2b10	@ 0007f6c6 83f723fa
.org 0x7f6ca
	strb r5, [r4, #15]	@ 0007f6ca e573
.org 0x7f6cc
	movs r0, #2	@ 0007f6cc 0220
.org 0x7f6ce
	strb r0, [r4, #14]	@ 0007f6ce a073
.org 0x7f6d0
	adds r0, r4, #0	@ 0007f6d0 201c
.org 0x7f6d2
	bl 0x1cff0	@ 0007f6d2 9df78dfc
.org 0x7f6d6
	ldrb r5, [r4, #15]	@ 0007f6d6 e57b
.org 0x7f6d8
	cmp r5, #0	@ 0007f6d8 002d
.org 0x7f6da
	bne.n 0x7f710	@ 0007f6da 19d1
.org 0x7f6dc
	adds r0, r4, #0	@ 0007f6dc 201c
.org 0x7f6de
	adds r0, #115	@ 0007f6de 7330
.org 0x7f6e0
	ldrb r0, [r0, #0]	@ 0007f6e0 0078
.org 0x7f6e2
	cmp r0, #3	@ 0007f6e2 0328
.org 0x7f6e4
	bne.n 0x7f790	@ 0007f6e4 54d1
.org 0x7f6e6
	ldr r1, [pc, #36]	@ 0007f6e6 0949
.org 0x7f6e8
	adds r0, r4, #0	@ 0007f6e8 201c
.org 0x7f6ea
	bl 0x1cf00	@ 0007f6ea 9df709fc
.org 0x7f6ee
	adds r0, r4, #0	@ 0007f6ee 201c
.org 0x7f6f0
	bl 0x1cff0	@ 0007f6f0 9df77efc
.org 0x7f6f4
	strb r5, [r4, #18]	@ 0007f6f4 a574
.org 0x7f6f6
	strb r5, [r4, #19]	@ 0007f6f6 e574
.org 0x7f6f8
	adds r0, r4, #0	@ 0007f6f8 201c
.org 0x7f6fa
	movs r1, #0	@ 0007f6fa 0021
.org 0x7f6fc
	movs r2, #0	@ 0007f6fc 0022
.org 0x7f6fe
	bl 0xb4aec	@ 0007f6fe 35f0f5f9
.org 0x7f702
	b.n 0x7f774	@ 0007f702 37e0
.org 0x7f704
	.byte 0x05,0xc8,0x00,0x00	@ 0007f704 data
.org 0x7f708
	.byte 0xf4,0xd8,0x85,0x08	@ 0007f708 data
.org 0x7f70c
	.byte 0x07,0xc8,0x00,0x00	@ 0007f70c data
.org 0x7f710
	cmp r5, #1	@ 0007f710 012d
.org 0x7f712
	bne.n 0x7f780	@ 0007f712 35d1
.org 0x7f714
	ldrb r0, [r4, #18]	@ 0007f714 a07c
.org 0x7f716
	subs r0, #1	@ 0007f716 0138
.org 0x7f718
	strb r0, [r4, #18]	@ 0007f718 a074
.org 0x7f71a
	lsls r0, r0, #24	@ 0007f71a 0006
.org 0x7f71c
	lsrs r0, r0, #24	@ 0007f71c 000e
.org 0x7f71e
	cmp r0, #255	@ 0007f71e ff28
.org 0x7f720
	bne.n 0x7f790	@ 0007f720 36d1
.org 0x7f722
	adds r0, r4, #0	@ 0007f722 201c
.org 0x7f724
	adds r0, #180	@ 0007f724 b430
.org 0x7f726
	ldr r1, [r4, #84]	@ 0007f726 616d
.org 0x7f728
	ldr r0, [r0, #0]	@ 0007f728 0068
.org 0x7f72a
	cmp r1, r0	@ 0007f72a 8142
.org 0x7f72c
	ble.n 0x7f738	@ 0007f72c 04dd
.org 0x7f72e
	ldrb r0, [r4, #19]	@ 0007f72e e07c
.org 0x7f730
	ands r5, r0	@ 0007f730 0540
.org 0x7f732
	adds r0, r4, #0	@ 0007f732 201c
.org 0x7f734
	adds r1, r5, #0	@ 0007f734 291c
.org 0x7f736
	b.n 0x7f742	@ 0007f736 04e0
.org 0x7f738
	ldrb r1, [r4, #19]	@ 0007f738 e17c
.org 0x7f73a
	adds r1, #1	@ 0007f73a 0131
.org 0x7f73c
	movs r0, #1	@ 0007f73c 0120
.org 0x7f73e
	ands r1, r0	@ 0007f73e 0140
.org 0x7f740
	adds r0, r4, #0	@ 0007f740 201c
.org 0x7f742
	movs r2, #0	@ 0007f742 0022
.org 0x7f744
	bl 0xb3f44	@ 0007f744 34f0fefb
.org 0x7f748
	ldrb r2, [r4, #19]	@ 0007f748 e27c
.org 0x7f74a
	lsls r2, r2, #2	@ 0007f74a 9200
.org 0x7f74c
	adds r1, r4, #0	@ 0007f74c 211c
.org 0x7f74e
	adds r1, #188	@ 0007f74e bc31
.org 0x7f750
	adds r1, r1, r2	@ 0007f750 8918
.org 0x7f752
	str r0, [r1, #0]	@ 0007f752 0860
.org 0x7f754
	movs r0, #64	@ 0007f754 4020
.org 0x7f756
	strb r0, [r4, #18]	@ 0007f756 a074
.org 0x7f758
	ldrb r0, [r4, #19]	@ 0007f758 e07c
.org 0x7f75a
	adds r0, #1	@ 0007f75a 0130
.org 0x7f75c
	strb r0, [r4, #19]	@ 0007f75c e074
.org 0x7f75e
	lsls r0, r0, #24	@ 0007f75e 0006
.org 0x7f760
	lsrs r0, r0, #24	@ 0007f760 000e
.org 0x7f762
	cmp r0, #4	@ 0007f762 0428
.org 0x7f764
	bne.n 0x7f790	@ 0007f764 14d1
.org 0x7f766
	ldr r1, [pc, #20]	@ 0007f766 0549
.org 0x7f768
	adds r0, r4, #0	@ 0007f768 201c
.org 0x7f76a
	bl 0x1cf00	@ 0007f76a 9df7c9fb
.org 0x7f76e
	adds r0, r4, #0	@ 0007f76e 201c
.org 0x7f770
	bl 0x1cff0	@ 0007f770 9df73efc
.org 0x7f774
	ldrb r0, [r4, #15]	@ 0007f774 e07b
.org 0x7f776
	adds r0, #1	@ 0007f776 0130
.org 0x7f778
	strb r0, [r4, #15]	@ 0007f778 e073
.org 0x7f77a
	b.n 0x7f790	@ 0007f77a 09e0
.org 0x7f77c
	.byte 0x06,0xc8,0x00,0x00	@ 0007f77c data
.org 0x7f780
	adds r0, r4, #0	@ 0007f780 201c
.org 0x7f782
	adds r0, #115	@ 0007f782 7330
.org 0x7f784
	ldrb r1, [r0, #0]	@ 0007f784 0178

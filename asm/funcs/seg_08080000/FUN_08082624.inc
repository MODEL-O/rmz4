@ FUN_08082624  entry 0x08082624  size 210
.thumb
.org 0x82624
FUN_08082624:
	push {r4, lr}	@ 00082624 10b5
.org 0x82626
	adds r4, r0, #0	@ 00082626 041c
.org 0x82628
	ldrb r0, [r4, #14]	@ 00082628 a07b
.org 0x8262a
	cmp r0, #0	@ 0008262a 0028
.org 0x8262c
	beq.n 0x82634	@ 0008262c 02d0
.org 0x8262e
	cmp r0, #1	@ 0008262e 0128
.org 0x82630
	beq.n 0x82670	@ 00082630 1ed0
.org 0x82632
	b.n 0x82700	@ 00082632 65e0
.org 0x82634
	ldr r1, [pc, #84]	@ 00082634 1549
.org 0x82636
	adds r0, r4, #0	@ 00082636 201c
.org 0x82638
	bl 0x1cf00	@ 00082638 9af762fc
.org 0x8263c
	movs r0, #21	@ 0008263c 1520
.org 0x8263e
	strb r0, [r4, #18]	@ 0008263e a074
.org 0x82640
	ldr r0, [pc, #76]	@ 00082640 1348
.org 0x82642
	str r0, [r4, #92]	@ 00082642 e065
.org 0x82644
	adds r2, r0, #0	@ 00082644 021c
.org 0x82646
	ldrb r1, [r4, #10]	@ 00082646 a17a
.org 0x82648
	movs r0, #16	@ 00082648 1020
.org 0x8264a
	ands r0, r1	@ 0008264a 0840
.org 0x8264c
	cmp r0, #0	@ 0008264c 0028
.org 0x8264e
	beq.n 0x82654	@ 0008264e 01d0
.org 0x82650
	movs r2, #128	@ 00082650 8022
.org 0x82652
	lsls r2, r2, #2	@ 00082652 9200
.org 0x82654
	str r2, [r4, #92]	@ 00082654 e265
.org 0x82656
	ldr r0, [pc, #60]	@ 00082656 0f48
.org 0x82658
	str r0, [r4, #96]	@ 00082658 2066
.org 0x8265a
	adds r2, r0, #0	@ 0008265a 021c
.org 0x8265c
	movs r0, #32	@ 0008265c 2020
.org 0x8265e
	ands r0, r1	@ 0008265e 0840
.org 0x82660
	cmp r0, #0	@ 00082660 0028
.org 0x82662
	beq.n 0x82668	@ 00082662 01d0
.org 0x82664
	movs r2, #128	@ 00082664 8022
.org 0x82666
	lsls r2, r2, #3	@ 00082666 d200
.org 0x82668
	str r2, [r4, #96]	@ 00082668 2266
.org 0x8266a
	ldrb r0, [r4, #14]	@ 0008266a a07b
.org 0x8266c
	adds r0, #1	@ 0008266c 0130
.org 0x8266e
	strb r0, [r4, #14]	@ 0008266e a073
.org 0x82670
	ldrb r0, [r4, #18]	@ 00082670 a07c
.org 0x82672
	cmp r0, #0	@ 00082672 0028
.org 0x82674
	beq.n 0x8269c	@ 00082674 12d0
.org 0x82676
	subs r0, #1	@ 00082676 0138
.org 0x82678
	strb r0, [r4, #18]	@ 00082678 a074
.org 0x8267a
	lsls r0, r0, #24	@ 0008267a 0006
.org 0x8267c
	cmp r0, #0	@ 0008267c 0028
.org 0x8267e
	bne.n 0x826fa	@ 0008267e 3cd1
.org 0x82680
	adds r0, r4, #0	@ 00082680 201c
.org 0x82682
	adds r0, #116	@ 00082682 7430
.org 0x82684
	ldr r1, [pc, #16]	@ 00082684 0449
.org 0x82686
	bl 0x5784	@ 00082686 83f77df8
.org 0x8268a
	b.n 0x826fa	@ 0008268a 36e0
.org 0x8268c
	.byte 0x01,0x16,0x00,0x00	@ 0008268c data
.org 0x82690
	.byte 0x00,0xfe,0xff,0xff	@ 00082690 data
.org 0x82694
	.byte 0x00,0xfc,0xff,0xff	@ 00082694 data
.org 0x82698
	.byte 0xb8,0xe7,0x85,0x08	@ 00082698 data
.org 0x8269c
	ldr r1, [r4, #92]	@ 0008269c e16d
.org 0x8269e
	ldr r2, [r4, #96]	@ 0008269e 226e
.org 0x826a0
	adds r0, r4, #0	@ 000826a0 201c
.org 0x826a2
	bl 0x8368c	@ 000826a2 00f0f3ff
.org 0x826a6
	movs r1, #2	@ 000826a6 0221
.org 0x826a8
	ands r1, r0	@ 000826a8 0140
.org 0x826aa
	cmp r1, #0	@ 000826aa 0029
.org 0x826ac
	beq.n 0x826e4	@ 000826ac 1ad0
.org 0x826ae
	ldrb r2, [r4, #10]	@ 000826ae a27a
.org 0x826b0
	lsrs r0, r2, #4	@ 000826b0 1009
.org 0x826b2
	movs r1, #1	@ 000826b2 0121
.org 0x826b4
	bics r1, r0	@ 000826b4 8143
.org 0x826b6
	cmp r1, #0	@ 000826b6 0029
.org 0x826b8
	beq.n 0x826c0	@ 000826b8 02d0
.org 0x826ba
	movs r0, #16	@ 000826ba 1020
.org 0x826bc
	orrs r0, r2	@ 000826bc 1043
.org 0x826be
	b.n 0x826c4	@ 000826be 01e0
.org 0x826c0
	movs r0, #239	@ 000826c0 ef20
.org 0x826c2
	ands r0, r2	@ 000826c2 1040
.org 0x826c4
	strb r0, [r4, #10]	@ 000826c4 a072
.org 0x826c6
	adds r0, r4, #0	@ 000826c6 201c
.org 0x826c8
	adds r0, #76	@ 000826c8 4c30
.org 0x826ca
	strb r1, [r0, #0]	@ 000826ca 0170
.org 0x826cc
	adds r3, r4, #0	@ 000826cc 231c
.org 0x826ce
	adds r3, #74	@ 000826ce 4a33
.org 0x826d0
	lsls r1, r1, #4	@ 000826d0 0901
.org 0x826d2
	ldrb r2, [r3, #0]	@ 000826d2 1a78
.org 0x826d4
	movs r0, #17	@ 000826d4 1120
.org 0x826d6
	negs r0, r0	@ 000826d6 4042
.org 0x826d8
	ands r0, r2	@ 000826d8 1040
.org 0x826da
	orrs r0, r1	@ 000826da 0843
.org 0x826dc
	strb r0, [r3, #0]	@ 000826dc 1870
.org 0x826de
	ldr r0, [r4, #92]	@ 000826de e06d
.org 0x826e0
	negs r0, r0	@ 000826e0 4042
.org 0x826e2
	str r0, [r4, #92]	@ 000826e2 e065
.org 0x826e4
	adds r1, r4, #0	@ 000826e4 211c
.org 0x826e6
	adds r1, #192	@ 000826e6 c031
.org 0x826e8
	ldr r0, [r1, #0]	@ 000826e8 0868
.org 0x826ea
	subs r0, #1	@ 000826ea 0138
.org 0x826ec
	str r0, [r1, #0]	@ 000826ec 0860
.org 0x826ee
	cmp r0, #9	@ 000826ee 0928
.org 0x826f0
	bgt.n 0x826fa	@ 000826f0 03dc
.org 0x826f2
	movs r1, #0	@ 000826f2 0021
.org 0x826f4
	movs r0, #2	@ 000826f4 0220

@ FUN_081025a0  entry 0x081025a0  size 192
.thumb
.org 0x1025a0
FUN_081025a0:
	push {r4, r5, r6, lr}	@ 001025a0 70b5
.org 0x1025a2
	adds r4, r0, #0	@ 001025a2 041c
.org 0x1025a4
	ldrb r0, [r4, #14]	@ 001025a4 a07b
.org 0x1025a6
	cmp r0, #0	@ 001025a6 0028
.org 0x1025a8
	bne.n 0x102650	@ 001025a8 52d1
.org 0x1025aa
	ldr r1, [pc, #84]	@ 001025aa 1549
.org 0x1025ac
	ldrb r0, [r4, #16]	@ 001025ac 207c
.org 0x1025ae
	lsls r0, r0, #2	@ 001025ae 8000
.org 0x1025b0
	adds r0, r0, r1	@ 001025b0 4018
.org 0x1025b2
	ldr r1, [r0, #0]	@ 001025b2 0168
.org 0x1025b4
	adds r0, r4, #0	@ 001025b4 201c
.org 0x1025b6
	bl 0x128f80	@ 001025b6 26f0e3fc
.org 0x1025ba
	adds r1, r4, #0	@ 001025ba 211c
.org 0x1025bc
	adds r1, #188	@ 001025bc bc31
.org 0x1025be
	strh r0, [r1, #0]	@ 001025be 0880
.org 0x1025c0
	ldrh r0, [r1, #0]	@ 001025c0 0888
.org 0x1025c2
	bl 0x10e518	@ 001025c2 0bf0a9ff
.org 0x1025c6
	adds r0, r4, #0	@ 001025c6 201c
.org 0x1025c8
	adds r0, #194	@ 001025c8 c230
.org 0x1025ca
	ldrh r1, [r0, #0]	@ 001025ca 0188
.org 0x1025cc
	adds r0, r4, #0	@ 001025cc 201c
.org 0x1025ce
	bl 0x1cf00	@ 001025ce 1af797fc
.org 0x1025d2
	adds r0, r4, #0	@ 001025d2 201c
.org 0x1025d4
	adds r0, #185	@ 001025d4 b930
.org 0x1025d6
	ldrb r0, [r0, #0]	@ 001025d6 0078
.org 0x1025d8
	cmp r0, #0	@ 001025d8 0028
.org 0x1025da
	beq.n 0x10264a	@ 001025da 36d0
.org 0x1025dc
	ldrb r2, [r4, #10]	@ 001025dc a27a
.org 0x1025de
	lsrs r6, r2, #4	@ 001025de 1609
.org 0x1025e0
	movs r0, #1	@ 001025e0 0120
.org 0x1025e2
	ands r6, r0	@ 001025e2 0640
.org 0x1025e4
	movs r3, #0	@ 001025e4 0023
.org 0x1025e6
	ldr r0, [pc, #28]	@ 001025e6 0748
.org 0x1025e8
	ldr r0, [r0, #0]	@ 001025e8 0068
.org 0x1025ea
	ldr r1, [r4, #84]	@ 001025ea 616d
.org 0x1025ec
	ldr r0, [r0, #84]	@ 001025ec 406d
.org 0x1025ee
	cmp r1, r0	@ 001025ee 8142
.org 0x1025f0
	bge.n 0x1025f4	@ 001025f0 00da
.org 0x1025f2
	movs r3, #1	@ 001025f2 0123
.org 0x1025f4
	adds r5, r3, #0	@ 001025f4 1d1c
.org 0x1025f6
	cmp r5, #0	@ 001025f6 002d
.org 0x1025f8
	beq.n 0x102608	@ 001025f8 06d0
.org 0x1025fa
	movs r0, #16	@ 001025fa 1020
.org 0x1025fc
	orrs r0, r2	@ 001025fc 1043
.org 0x1025fe
	b.n 0x10260c	@ 001025fe 05e0
.org 0x102600
	.byte 0x38,0xbb,0x86,0x08	@ 00102600 data
.org 0x102604
	.byte 0xf0,0xdb,0x02,0x02	@ 00102604 data
.org 0x102608
	movs r0, #239	@ 00102608 ef20
.org 0x10260a
	ands r0, r2	@ 0010260a 1040
.org 0x10260c
	strb r0, [r4, #10]	@ 0010260c a072
.org 0x10260e
	movs r3, #1	@ 0010260e 0123
.org 0x102610
	adds r1, r3, #0	@ 00102610 191c
.org 0x102612
	ands r1, r5	@ 00102612 2940
.org 0x102614
	adds r0, r4, #0	@ 00102614 201c
.org 0x102616
	adds r0, #76	@ 00102616 4c30
.org 0x102618
	strb r1, [r0, #0]	@ 00102618 0170
.org 0x10261a
	movs r0, #74	@ 0010261a 4a20
.org 0x10261c
	adds r0, r0, r4	@ 0010261c 0019
.org 0x10261e
	mov ip, r0	@ 0010261e 8446
.org 0x102620
	lsls r1, r1, #4	@ 00102620 0901
.org 0x102622
	ldrb r2, [r0, #0]	@ 00102622 0278
.org 0x102624
	movs r0, #17	@ 00102624 1120
.org 0x102626
	negs r0, r0	@ 00102626 4042
.org 0x102628
	ands r0, r2	@ 00102628 1040
.org 0x10262a
	orrs r0, r1	@ 0010262a 0843
.org 0x10262c
	mov r1, ip	@ 0010262c 6146
.org 0x10262e
	strb r0, [r1, #0]	@ 0010262e 0870
.org 0x102630
	ldrb r0, [r4, #10]	@ 00102630 a07a
.org 0x102632
	lsrs r0, r0, #4	@ 00102632 0009
.org 0x102634
	ands r0, r3	@ 00102634 1840
.org 0x102636
	cmp r6, r0	@ 00102636 8642
.org 0x102638
	beq.n 0x10264a	@ 00102638 07d0
.org 0x10263a
	ldr r0, [r4, #92]	@ 0010263a e06d
.org 0x10263c
	lsls r0, r0, #8	@ 0010263c 0002
.org 0x10263e
	negs r0, r0	@ 0010263e 4042
.org 0x102640
	cmp r0, #0	@ 00102640 0028
.org 0x102642
	bge.n 0x102646	@ 00102642 00da
.org 0x102644
	adds r0, #255	@ 00102644 ff30
.org 0x102646
	asrs r0, r0, #8	@ 00102646 0012
.org 0x102648
	str r0, [r4, #92]	@ 00102648 e065
.org 0x10264a
	ldrb r0, [r4, #14]	@ 0010264a a07b
.org 0x10264c
	adds r0, #1	@ 0010264c 0130
.org 0x10264e
	strb r0, [r4, #14]	@ 0010264e a073
.org 0x102650
	ldr r0, [pc, #20]	@ 00102650 0548
.org 0x102652
	ldrh r1, [r0, #2]	@ 00102652 4188
.org 0x102654
	cmp r1, #0	@ 00102654 0029
.org 0x102656
	bne.n 0x102662	@ 00102656 04d1
.org 0x102658
	ldr r0, [pc, #16]	@ 00102658 0448
.org 0x10265a
	strb r1, [r0, #0]	@ 0010265a 0170
.org 0x10265c
	movs r0, #4	@ 0010265c 0420
.org 0x10265e
	strb r0, [r4, #13]	@ 0010265e 6073

@ FUN_0809855c  entry 0x0809855c  size 240
.thumb
.org 0x9855c
FUN_0809855c:
	push {r4, r5, r6, lr}	@ 0009855c 70b5
.org 0x9855e
	adds r6, r0, #0	@ 0009855e 061c
.org 0x98560
	ldrb r0, [r6, #16]	@ 00098560 307c
.org 0x98562
	cmp r0, #0	@ 00098562 0028
.org 0x98564
	beq.n 0x9856e	@ 00098564 03d0
.org 0x98566
	adds r0, r6, #0	@ 00098566 301c
.org 0x98568
	bl 0x98660	@ 00098568 00f07af8
.org 0x9856c
	b.n 0x98654	@ 0009856c 72e0
.org 0x9856e
	adds r0, r6, #0	@ 0009856e 301c
.org 0x98570
	bl 0x1cc9c	@ 00098570 84f794fb
.org 0x98574
	ldrb r1, [r6, #10]	@ 00098574 b17a
.org 0x98576
	movs r0, #1	@ 00098576 0120
.org 0x98578
	movs r4, #0	@ 00098578 0024
.org 0x9857a
	orrs r0, r1	@ 0009857a 0843
.org 0x9857c
	movs r1, #2	@ 0009857c 0221
.org 0x9857e
	orrs r0, r1	@ 0009857e 0843
.org 0x98580
	strb r0, [r6, #10]	@ 00098580 b072
.org 0x98582
	movs r1, #186	@ 00098582 ba21
.org 0x98584
	lsls r1, r1, #8	@ 00098584 0902
.org 0x98586
	adds r0, r6, #0	@ 00098586 301c
.org 0x98588
	bl 0x1cf00	@ 00098588 84f7bafc
.org 0x9858c
	adds r0, r6, #0	@ 0009858c 301c
.org 0x9858e
	bl 0x1cff0	@ 0009858e 84f72ffd
.org 0x98592
	movs r2, #0	@ 00098592 0022
.org 0x98594
	ldr r0, [pc, #24]	@ 00098594 0648
.org 0x98596
	ldr r0, [r0, #0]	@ 00098596 0068
.org 0x98598
	ldr r1, [r6, #84]	@ 00098598 716d
.org 0x9859a
	ldr r0, [r0, #84]	@ 0009859a 406d
.org 0x9859c
	cmp r1, r0	@ 0009859c 8142
.org 0x9859e
	bge.n 0x985a2	@ 0009859e 00da
.org 0x985a0
	movs r2, #1	@ 000985a0 0122
.org 0x985a2
	cmp r2, #0	@ 000985a2 002a
.org 0x985a4
	beq.n 0x985b4	@ 000985a4 06d0
.org 0x985a6
	ldrb r0, [r6, #10]	@ 000985a6 b07a
.org 0x985a8
	movs r1, #16	@ 000985a8 1021
.org 0x985aa
	orrs r0, r1	@ 000985aa 0843
.org 0x985ac
	b.n 0x985ba	@ 000985ac 05e0
.org 0x985ae
	.byte 0x00	@ 000985ae data
.org 0x985af
	.byte 0x00	@ 000985af data
.org 0x985b0
	.byte 0xf0,0xdb,0x02,0x02	@ 000985b0 data
.org 0x985b4
	ldrb r1, [r6, #10]	@ 000985b4 b17a
.org 0x985b6
	movs r0, #239	@ 000985b6 ef20
.org 0x985b8
	ands r0, r1	@ 000985b8 0840
.org 0x985ba
	strb r0, [r6, #10]	@ 000985ba b072
.org 0x985bc
	adds r1, r2, #0	@ 000985bc 111c
.org 0x985be
	adds r0, r6, #0	@ 000985be 301c
.org 0x985c0
	adds r0, #76	@ 000985c0 4c30
.org 0x985c2
	movs r5, #0	@ 000985c2 0025
.org 0x985c4
	strb r1, [r0, #0]	@ 000985c4 0170
.org 0x985c6
	adds r3, r6, #0	@ 000985c6 331c
.org 0x985c8
	adds r3, #74	@ 000985c8 4a33
.org 0x985ca
	lsls r1, r1, #4	@ 000985ca 0901
.org 0x985cc
	ldrb r2, [r3, #0]	@ 000985cc 1a78
.org 0x985ce
	movs r0, #17	@ 000985ce 1120
.org 0x985d0
	negs r0, r0	@ 000985d0 4042
.org 0x985d2
	ands r0, r2	@ 000985d2 1040
.org 0x985d4
	orrs r0, r1	@ 000985d4 0843
.org 0x985d6
	strb r0, [r3, #0]	@ 000985d6 1870
.org 0x985d8
	ldrb r1, [r6, #10]	@ 000985d8 b17a
.org 0x985da
	movs r0, #4	@ 000985da 0420
.org 0x985dc
	orrs r0, r1	@ 000985dc 0843
.org 0x985de
	strb r0, [r6, #10]	@ 000985de b072
.org 0x985e0
	adds r4, r6, #0	@ 000985e0 341c
.org 0x985e2
	adds r4, #116	@ 000985e2 7434
.org 0x985e4
	ldr r1, [pc, #64]	@ 000985e4 1049
.org 0x985e6
	adds r2, r6, #0	@ 000985e6 321c
.org 0x985e8
	adds r2, #84	@ 000985e8 5432
.org 0x985ea
	adds r0, r4, #0	@ 000985ea 201c
.org 0x985ec
	movs r3, #6	@ 000985ec 0623
.org 0x985ee
	bl 0x5760	@ 000985ee 6df7b7f8
.org 0x985f2
	str r6, [r4, #44]	@ 000985f2 e662
.org 0x985f4
	ldr r0, [pc, #52]	@ 000985f4 0d48
.org 0x985f6
	str r0, [r4, #36]	@ 000985f6 6062
.org 0x985f8
	adds r0, r6, #0	@ 000985f8 301c
.org 0x985fa
	adds r0, #189	@ 000985fa bd30
.org 0x985fc
	strb r5, [r0, #0]	@ 000985fc 0570
.org 0x985fe
	adds r1, r6, #0	@ 000985fe 311c
.org 0x98600
	adds r1, #180	@ 00098600 b431
.org 0x98602
	ldr r0, [r6, #84]	@ 00098602 706d
.org 0x98604
	movs r2, #128	@ 00098604 8022
.org 0x98606
	lsls r2, r2, #5	@ 00098606 5201
.org 0x98608
	adds r0, r0, r2	@ 00098608 8018
.org 0x9860a
	str r0, [r1, #0]	@ 0009860a 0860
.org 0x9860c
	adds r1, #4	@ 0009860c 0431
.org 0x9860e
	ldr r0, [r6, #88]	@ 0009860e b06d
.org 0x98610
	str r0, [r1, #0]	@ 00098610 0860
.org 0x98612
	adds r0, r6, #0	@ 00098612 301c
.org 0x98614
	adds r0, #192	@ 00098614 c030
.org 0x98616
	str r5, [r0, #0]	@ 00098616 0560
.org 0x98618
	strb r5, [r6, #18]	@ 00098618 b574
.org 0x9861a
	ldrb r1, [r6, #10]	@ 0009861a b17a
.org 0x9861c
	movs r0, #16	@ 0009861c 1020
.org 0x9861e
	ands r0, r1	@ 0009861e 0840
.org 0x98620
	cmp r0, #0	@ 00098620 0028
.org 0x98622
	beq.n 0x98630	@ 00098622 05d0
.org 0x98624
	movs r0, #252	@ 00098624 fc20
.org 0x98626
	b.n 0x98632	@ 00098626 04e0
.org 0x98628
	.byte 0xbc,0x0b,0x86,0x08	@ 00098628 data
.org 0x9862c
	.byte 0xd9,0x8d,0x09,0x08	@ 0009862c data
.org 0x98630
	movs r0, #4	@ 00098630 0420
.org 0x98632
	strb r0, [r6, #19]	@ 00098632 f074
.org 0x98634
	adds r1, r6, #0	@ 00098634 311c
.org 0x98636
	adds r1, #190	@ 00098636 be31
.org 0x98638
	movs r0, #64	@ 00098638 4020
.org 0x9863a
	strb r0, [r1, #0]	@ 0009863a 0870
.org 0x9863c
	ldr r1, [pc, #28]	@ 0009863c 0749
.org 0x9863e
	ldrb r0, [r6, #9]	@ 0009863e 707a
.org 0x98640
	lsls r0, r0, #2	@ 00098640 8000
.org 0x98642
	adds r0, r0, r1	@ 00098642 4018
.org 0x98644
	movs r1, #1	@ 00098644 0121
.org 0x98646
	str r1, [r6, #12]	@ 00098646 f160
.org 0x98648
	ldr r0, [r0, #0]	@ 00098648 0068
.org 0x9864a
	ldr r0, [r0, #4]	@ 0009864a 4068

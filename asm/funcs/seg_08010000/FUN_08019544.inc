@ FUN_08019544  entry 0x08019544  size 318
.thumb
.org 0x19544
FUN_08019544:
	push {r4, r5, lr}	@ 00019544 30b5
.org 0x19546
	adds r5, r0, #0	@ 00019546 051c
.org 0x19548
	ldrb r0, [r5, #14]	@ 00019548 a87b
.org 0x1954a
	cmp r0, #0	@ 0001954a 0028
.org 0x1954c
	beq.n 0x19550	@ 0001954c 00d0
.org 0x1954e
	b.n 0x19692	@ 0001954e a0e0
.org 0x19550
	ldr r0, [pc, #148]	@ 00019550 2548
.org 0x19552
	movs r2, #225	@ 00019552 e122
.org 0x19554
	lsls r2, r2, #1	@ 00019554 5200
.org 0x19556
	adds r0, r0, r2	@ 00019556 8018
.org 0x19558
	ldr r1, [pc, #144]	@ 00019558 2449
.org 0x1955a
	strh r1, [r0, #0]	@ 0001955a 0180
.org 0x1955c
	ldr r0, [pc, #144]	@ 0001955c 2448
.org 0x1955e
	adds r0, r0, r2	@ 0001955e 8018
.org 0x19560
	movs r1, #9	@ 00019560 0921
.org 0x19562
	strh r1, [r0, #0]	@ 00019562 0180
.org 0x19564
	ldr r1, [r5, #52]	@ 00019564 696b
.org 0x19566
	movs r0, #202	@ 00019566 ca20
.org 0x19568
	lsls r0, r0, #4	@ 00019568 0001
.org 0x1956a
	cmp r1, r0	@ 0001956a 8142
.org 0x1956c
	ble.n 0x195f8	@ 0001956c 44dd
.org 0x1956e
	ldr r4, [pc, #132]	@ 0001956e 214c
.org 0x19570
	adds r0, r4, #0	@ 00019570 201c
.org 0x19572
	movs r1, #2	@ 00019572 0221
.org 0x19574
	movs r2, #1	@ 00019574 0122
.org 0x19576
	bl 0xf83fc	@ 00019576 def041ff
.org 0x1957a
	str r0, [r5, #104]	@ 0001957a a866
.org 0x1957c
	adds r0, r4, #0	@ 0001957c 201c
.org 0x1957e
	adds r0, #8	@ 0001957e 0830
.org 0x19580
	movs r1, #2	@ 00019580 0221
.org 0x19582
	movs r2, #1	@ 00019582 0122
.org 0x19584
	bl 0xf83fc	@ 00019584 def03aff
.org 0x19588
	str r0, [r5, #108]	@ 00019588 e866
.org 0x1958a
	adds r0, r4, #0	@ 0001958a 201c
.org 0x1958c
	adds r0, #16	@ 0001958c 1030
.org 0x1958e
	movs r1, #2	@ 0001958e 0221
.org 0x19590
	movs r2, #1	@ 00019590 0122
.org 0x19592
	bl 0xf83fc	@ 00019592 def033ff
.org 0x19596
	str r0, [r5, #112]	@ 00019596 2867
.org 0x19598
	adds r0, r4, #0	@ 00019598 201c
.org 0x1959a
	adds r0, #24	@ 0001959a 1830
.org 0x1959c
	movs r1, #2	@ 0001959c 0221
.org 0x1959e
	movs r2, #1	@ 0001959e 0122
.org 0x195a0
	bl 0xf83fc	@ 000195a0 def02cff
.org 0x195a4
	str r0, [r5, #116]	@ 000195a4 6867
.org 0x195a6
	adds r0, r4, #0	@ 000195a6 201c
.org 0x195a8
	adds r0, #32	@ 000195a8 2030
.org 0x195aa
	movs r1, #2	@ 000195aa 0221
.org 0x195ac
	movs r2, #1	@ 000195ac 0122
.org 0x195ae
	bl 0xf83fc	@ 000195ae def025ff
.org 0x195b2
	str r0, [r5, #120]	@ 000195b2 a867
.org 0x195b4
	adds r0, r4, #0	@ 000195b4 201c
.org 0x195b6
	adds r0, #40	@ 000195b6 2830
.org 0x195b8
	movs r1, #2	@ 000195b8 0221
.org 0x195ba
	movs r2, #1	@ 000195ba 0122
.org 0x195bc
	bl 0xf83fc	@ 000195bc def01eff
.org 0x195c0
	str r0, [r5, #124]	@ 000195c0 e867
.org 0x195c2
	adds r0, r4, #0	@ 000195c2 201c
.org 0x195c4
	adds r0, #48	@ 000195c4 3030
.org 0x195c6
	movs r1, #2	@ 000195c6 0221
.org 0x195c8
	movs r2, #1	@ 000195c8 0122
.org 0x195ca
	bl 0xf83fc	@ 000195ca def017ff
.org 0x195ce
	adds r1, r5, #0	@ 000195ce 291c
.org 0x195d0
	adds r1, #128	@ 000195d0 8031
.org 0x195d2
	str r0, [r1, #0]	@ 000195d2 0860
.org 0x195d4
	adds r0, r4, #0	@ 000195d4 201c
.org 0x195d6
	adds r0, #56	@ 000195d6 3830
.org 0x195d8
	movs r1, #2	@ 000195d8 0221
.org 0x195da
	movs r2, #1	@ 000195da 0122
.org 0x195dc
	bl 0xf83fc	@ 000195dc def00eff
.org 0x195e0
	adds r1, r5, #0	@ 000195e0 291c
.org 0x195e2
	adds r1, #132	@ 000195e2 8431
.org 0x195e4
	str r0, [r1, #0]	@ 000195e4 0860
.org 0x195e6
	b.n 0x1968c	@ 000195e6 51e0
.org 0x195e8
	.byte 0x40,0xe0,0x02,0x02	@ 000195e8 data
.org 0x195ec
	.byte 0xb2,0x03,0x00,0x00	@ 000195ec data
.org 0x195f0
	.byte 0x40,0xde,0x02,0x02	@ 000195f0 data
.org 0x195f4
	.byte 0x3c,0x96,0x83,0x08	@ 000195f4 data
.org 0x195f8
	movs r0, #180	@ 000195f8 b420
.org 0x195fa
	lsls r0, r0, #3	@ 000195fa c000
.org 0x195fc
	cmp r1, r0	@ 000195fc 8142
.org 0x195fe
	ble.n 0x19654	@ 000195fe 29dd
.org 0x19600
	movs r0, #116	@ 00019600 7420
.org 0x19602
	bl 0x2b10	@ 00019602 e9f785fa
.org 0x19606
	ldr r4, [pc, #72]	@ 00019606 124c
.org 0x19608
	adds r0, r4, #0	@ 00019608 201c
.org 0x1960a
	movs r1, #0	@ 0001960a 0021
.org 0x1960c
	movs r2, #1	@ 0001960c 0122
.org 0x1960e
	bl 0xf83fc	@ 0001960e def0f5fe
.org 0x19612
	str r0, [r5, #104]	@ 00019612 a866
.org 0x19614
	adds r0, r4, #0	@ 00019614 201c
.org 0x19616
	adds r0, #8	@ 00019616 0830
.org 0x19618
	movs r1, #0	@ 00019618 0021
.org 0x1961a
	movs r2, #1	@ 0001961a 0122
.org 0x1961c
	bl 0xf83fc	@ 0001961c def0eefe
.org 0x19620
	str r0, [r5, #108]	@ 00019620 e866
.org 0x19622
	adds r0, r4, #0	@ 00019622 201c
.org 0x19624
	adds r0, #16	@ 00019624 1030
.org 0x19626
	movs r1, #1	@ 00019626 0121
.org 0x19628
	movs r2, #1	@ 00019628 0122
.org 0x1962a
	bl 0xf83fc	@ 0001962a def0e7fe
.org 0x1962e
	str r0, [r5, #112]	@ 0001962e 2867
.org 0x19630
	adds r0, r4, #0	@ 00019630 201c
.org 0x19632
	adds r0, #24	@ 00019632 1830
.org 0x19634
	movs r1, #0	@ 00019634 0021
.org 0x19636
	movs r2, #1	@ 00019636 0122
.org 0x19638
	bl 0xf83fc	@ 00019638 def0e0fe
.org 0x1963c
	str r0, [r5, #116]	@ 0001963c 6867
.org 0x1963e
	adds r0, r4, #0	@ 0001963e 201c
.org 0x19640
	adds r0, #32	@ 00019640 2030
.org 0x19642
	movs r1, #0	@ 00019642 0021
.org 0x19644
	movs r2, #1	@ 00019644 0122
.org 0x19646
	bl 0xf83fc	@ 00019646 def0d9fe
.org 0x1964a
	str r0, [r5, #120]	@ 0001964a a867
.org 0x1964c
	b.n 0x1968c	@ 0001964c 1ee0
.org 0x1964e
	.byte 0x00	@ 0001964e data
.org 0x1964f
	.byte 0x00	@ 0001964f data
.org 0x19650
	.byte 0x14,0x96,0x83,0x08	@ 00019650 data
.org 0x19654
	ldr r4, [pc, #64]	@ 00019654 104c
.org 0x19656
	adds r0, r4, #0	@ 00019656 201c
.org 0x19658
	movs r1, #1	@ 00019658 0121
.org 0x1965a
	movs r2, #1	@ 0001965a 0122
.org 0x1965c
	bl 0xf83fc	@ 0001965c def0cefe
.org 0x19660
	str r0, [r5, #104]	@ 00019660 a866
.org 0x19662
	adds r0, r4, #0	@ 00019662 201c
.org 0x19664
	adds r0, #8	@ 00019664 0830
.org 0x19666
	movs r1, #1	@ 00019666 0121
.org 0x19668
	movs r2, #1	@ 00019668 0122
.org 0x1966a
	bl 0xf83fc	@ 0001966a def0c7fe
.org 0x1966e
	str r0, [r5, #108]	@ 0001966e e866
.org 0x19670
	adds r0, r4, #0	@ 00019670 201c
.org 0x19672
	adds r0, #16	@ 00019672 1030
.org 0x19674
	movs r1, #1	@ 00019674 0121
.org 0x19676
	movs r2, #1	@ 00019676 0122
.org 0x19678
	bl 0xf83fc	@ 00019678 def0c0fe
.org 0x1967c
	str r0, [r5, #112]	@ 0001967c 2867
.org 0x1967e
	adds r4, #24	@ 0001967e 1834
.org 0x19680
	adds r0, r4, #0	@ 00019680 201c

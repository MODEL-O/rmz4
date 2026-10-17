@ FUN_080c65fc  entry 0x080c65fc  size 134
.thumb
.org 0xc65fc
FUN_080c65fc:
	push {r4, r5, r6, lr}	@ 000c65fc 70b5
.org 0xc65fe
	adds r4, r0, #0	@ 000c65fe 041c
.org 0xc6600
	bl 0x1cc9c	@ 000c6600 56f74cfb
.org 0xc6604
	ldrb r1, [r4, #10]	@ 000c6604 a17a
.org 0xc6606
	movs r0, #254	@ 000c6606 fe20
.org 0xc6608
	ands r0, r1	@ 000c6608 0840
.org 0xc660a
	movs r1, #2	@ 000c660a 0221
.org 0xc660c
	orrs r0, r1	@ 000c660c 0843
.org 0xc660e
	strb r0, [r4, #10]	@ 000c660e a072
.org 0xc6610
	movs r1, #198	@ 000c6610 c621
.org 0xc6612
	lsls r1, r1, #7	@ 000c6612 c901
.org 0xc6614
	adds r0, r4, #0	@ 000c6614 201c
.org 0xc6616
	bl 0x1cf00	@ 000c6616 56f773fc
.org 0xc661a
	adds r0, r4, #0	@ 000c661a 201c
.org 0xc661c
	bl 0x1cff0	@ 000c661c 56f7e8fc
.org 0xc6620
	movs r2, #0	@ 000c6620 0022
.org 0xc6622
	ldrb r1, [r4, #10]	@ 000c6622 a17a
.org 0xc6624
	movs r0, #239	@ 000c6624 ef20
.org 0xc6626
	ands r0, r1	@ 000c6626 0840
.org 0xc6628
	strb r0, [r4, #10]	@ 000c6628 a072
.org 0xc662a
	movs r6, #1	@ 000c662a 0126
.org 0xc662c
	adds r0, r4, #0	@ 000c662c 201c
.org 0xc662e
	adds r0, #76	@ 000c662e 4c30
.org 0xc6630
	strb r2, [r0, #0]	@ 000c6630 0270
.org 0xc6632
	adds r2, r4, #0	@ 000c6632 221c
.org 0xc6634
	adds r2, #74	@ 000c6634 4a32
.org 0xc6636
	ldrb r1, [r2, #0]	@ 000c6636 1178
.org 0xc6638
	movs r0, #17	@ 000c6638 1120
.org 0xc663a
	negs r0, r0	@ 000c663a 4042
.org 0xc663c
	ands r0, r1	@ 000c663c 0840
.org 0xc663e
	strb r0, [r2, #0]	@ 000c663e 1070
.org 0xc6640
	ldrb r1, [r4, #10]	@ 000c6640 a17a
.org 0xc6642
	movs r0, #4	@ 000c6642 0420
.org 0xc6644
	orrs r0, r1	@ 000c6644 0843
.org 0xc6646
	strb r0, [r4, #10]	@ 000c6646 a072
.org 0xc6648
	adds r5, r4, #0	@ 000c6648 251c
.org 0xc664a
	adds r5, #116	@ 000c664a 7435
.org 0xc664c
	ldr r1, [pc, #52]	@ 000c664c 0d49
.org 0xc664e
	adds r2, #10	@ 000c664e 0a32
.org 0xc6650
	adds r0, r5, #0	@ 000c6650 281c
.org 0xc6652
	movs r3, #8	@ 000c6652 0823
.org 0xc6654
	bl 0x5760	@ 000c6654 3ff784f8
.org 0xc6658
	str r4, [r5, #44]	@ 000c6658 ec62
.org 0xc665a
	ldr r0, [pc, #44]	@ 000c665a 0b48
.org 0xc665c
	str r0, [r5, #36]	@ 000c665c 6862
.org 0xc665e
	adds r1, r4, #0	@ 000c665e 211c
.org 0xc6660
	adds r1, #37	@ 000c6660 2531
.org 0xc6662
	movs r0, #17	@ 000c6662 1120
.org 0xc6664
	strb r0, [r1, #0]	@ 000c6664 0870
.org 0xc6666
	ldr r1, [pc, #36]	@ 000c6666 0949
.org 0xc6668
	ldrb r0, [r4, #9]	@ 000c6668 607a
.org 0xc666a
	lsls r0, r0, #2	@ 000c666a 8000
.org 0xc666c
	adds r0, r0, r1	@ 000c666c 4018
.org 0xc666e
	str r6, [r4, #12]	@ 000c666e e660
.org 0xc6670
	ldr r0, [r0, #0]	@ 000c6670 0068
.org 0xc6672
	ldr r0, [r0, #4]	@ 000c6672 4068
.org 0xc6674
	str r0, [r4, #20]	@ 000c6674 6061
.org 0xc6676
	adds r0, r4, #0	@ 000c6676 201c
.org 0xc6678
	bl 0xc6518	@ 000c6678 fff74eff
.org 0xc667c
	pop {r4, r5, r6}	@ 000c667c 70bc
.org 0xc667e
	pop {r0}	@ 000c667e 01bc
.org 0xc6680
	bx r0	@ 000c6680 0047

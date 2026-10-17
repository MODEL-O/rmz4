@ FUN_080bf600  entry 0x080bf600  size 182
.thumb
.org 0xbf600
FUN_080bf600:
	push {r4, r5, r6, lr}	@ 000bf600 70b5
.org 0xbf602
	adds r6, r0, #0	@ 000bf602 061c
.org 0xbf604
	ldrb r0, [r6, #17]	@ 000bf604 707c
.org 0xbf606
	adds r3, r0, #0	@ 000bf606 031c
.org 0xbf608
	ldr r1, [pc, #172]	@ 000bf608 2b49
.org 0xbf60a
	ldrb r0, [r6, #9]	@ 000bf60a 707a
.org 0xbf60c
	lsls r0, r0, #2	@ 000bf60c 8000
.org 0xbf60e
	adds r0, r0, r1	@ 000bf60e 4018
.org 0xbf610
	movs r1, #1	@ 000bf610 0121
.org 0xbf612
	str r1, [r6, #12]	@ 000bf612 f160
.org 0xbf614
	ldr r0, [r0, #0]	@ 000bf614 0068
.org 0xbf616
	ldr r0, [r0, #4]	@ 000bf616 4068
.org 0xbf618
	str r0, [r6, #20]	@ 000bf618 7061
.org 0xbf61a
	ldrb r1, [r6, #10]	@ 000bf61a b17a
.org 0xbf61c
	movs r0, #1	@ 000bf61c 0120
.org 0xbf61e
	movs r4, #0	@ 000bf61e 0024
.org 0xbf620
	orrs r0, r1	@ 000bf620 0843
.org 0xbf622
	movs r1, #2	@ 000bf622 0221
.org 0xbf624
	orrs r0, r1	@ 000bf624 0843
.org 0xbf626
	strb r0, [r6, #10]	@ 000bf626 b072
.org 0xbf628
	ldr r2, [pc, #144]	@ 000bf628 244a
.org 0xbf62a
	adds r0, r3, #0	@ 000bf62a 181c
.org 0xbf62c
	adds r0, #64	@ 000bf62c 4030
.org 0xbf62e
	lsls r0, r0, #24	@ 000bf62e 0006
.org 0xbf630
	lsrs r0, r0, #23	@ 000bf630 c00d
.org 0xbf632
	adds r0, r0, r2	@ 000bf632 8018
.org 0xbf634
	movs r5, #0	@ 000bf634 0025
.org 0xbf636
	ldrsh r1, [r0, r5]	@ 000bf636 415f
.org 0xbf638
	lsls r0, r1, #2	@ 000bf638 8800
.org 0xbf63a
	adds r0, r0, r1	@ 000bf63a 4018
.org 0xbf63c
	lsls r0, r0, #7	@ 000bf63c c001
.org 0xbf63e
	cmp r0, #0	@ 000bf63e 0028
.org 0xbf640
	bge.n 0xbf644	@ 000bf640 00da
.org 0xbf642
	adds r0, #255	@ 000bf642 ff30
.org 0xbf644
	asrs r0, r0, #8	@ 000bf644 0012
.org 0xbf646
	str r0, [r6, #92]	@ 000bf646 f065
.org 0xbf648
	lsls r0, r3, #1	@ 000bf648 5800
.org 0xbf64a
	adds r0, r0, r2	@ 000bf64a 8018
.org 0xbf64c
	movs r2, #0	@ 000bf64c 0022
.org 0xbf64e
	ldrsh r1, [r0, r2]	@ 000bf64e 815e
.org 0xbf650
	lsls r0, r1, #2	@ 000bf650 8800
.org 0xbf652
	adds r0, r0, r1	@ 000bf652 4018
.org 0xbf654
	lsls r0, r0, #7	@ 000bf654 c001
.org 0xbf656
	cmp r0, #0	@ 000bf656 0028
.org 0xbf658
	bge.n 0xbf65c	@ 000bf658 00da
.org 0xbf65a
	adds r0, #255	@ 000bf65a ff30
.org 0xbf65c
	asrs r0, r0, #8	@ 000bf65c 0012
.org 0xbf65e
	str r0, [r6, #96]	@ 000bf65e 3066
.org 0xbf660
	adds r0, r6, #0	@ 000bf660 301c
.org 0xbf662
	bl 0x1cc9c	@ 000bf662 5df71bfb
.org 0xbf666
	movs r5, #0	@ 000bf666 0025
.org 0xbf668
	ldrb r1, [r6, #10]	@ 000bf668 b17a
.org 0xbf66a
	movs r0, #239	@ 000bf66a ef20
.org 0xbf66c
	ands r0, r1	@ 000bf66c 0840
.org 0xbf66e
	strb r0, [r6, #10]	@ 000bf66e b072
.org 0xbf670
	adds r0, r6, #0	@ 000bf670 301c
.org 0xbf672
	adds r0, #76	@ 000bf672 4c30
.org 0xbf674
	strb r5, [r0, #0]	@ 000bf674 0570
.org 0xbf676
	adds r2, r6, #0	@ 000bf676 321c
.org 0xbf678
	adds r2, #74	@ 000bf678 4a32
.org 0xbf67a
	ldrb r1, [r2, #0]	@ 000bf67a 1178
.org 0xbf67c
	movs r0, #17	@ 000bf67c 1120
.org 0xbf67e
	negs r0, r0	@ 000bf67e 4042
.org 0xbf680
	ands r0, r1	@ 000bf680 0840
.org 0xbf682
	strb r0, [r2, #0]	@ 000bf682 1070
.org 0xbf684
	ldr r1, [pc, #56]	@ 000bf684 0e49
.org 0xbf686
	adds r0, r6, #0	@ 000bf686 301c
.org 0xbf688
	bl 0x1cf00	@ 000bf688 5df73afc
.org 0xbf68c
	ldrb r0, [r6, #10]	@ 000bf68c b07a
.org 0xbf68e
	movs r1, #4	@ 000bf68e 0421
.org 0xbf690
	orrs r0, r1	@ 000bf690 0843
.org 0xbf692
	strb r0, [r6, #10]	@ 000bf692 b072
.org 0xbf694
	adds r4, r6, #0	@ 000bf694 341c
.org 0xbf696
	adds r4, #116	@ 000bf696 7434
.org 0xbf698
	ldr r1, [pc, #40]	@ 000bf698 0a49
.org 0xbf69a
	adds r2, r6, #0	@ 000bf69a 321c
.org 0xbf69c
	adds r2, #84	@ 000bf69c 5432
.org 0xbf69e
	adds r0, r4, #0	@ 000bf69e 201c
.org 0xbf6a0
	movs r3, #64	@ 000bf6a0 4023
.org 0xbf6a2
	bl 0x5760	@ 000bf6a2 46f75df8
.org 0xbf6a6
	str r6, [r4, #44]	@ 000bf6a6 e662
.org 0xbf6a8
	str r5, [r4, #36]	@ 000bf6a8 6562
.org 0xbf6aa
	adds r0, r6, #0	@ 000bf6aa 301c
.org 0xbf6ac
	bl 0xbf830	@ 000bf6ac 00f0c0f8
.org 0xbf6b0
	pop {r4, r5, r6}	@ 000bf6b0 70bc
.org 0xbf6b2
	pop {r0}	@ 000bf6b2 01bc
.org 0xbf6b4
	bx r0	@ 000bf6b4 0047

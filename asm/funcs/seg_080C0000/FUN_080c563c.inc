@ FUN_080c563c  entry 0x080c563c  size 140
.thumb
.org 0xc563c
FUN_080c563c:
	push {r4, r5, r6, lr}	@ 000c563c 70b5
.org 0xc563e
	adds r6, r0, #0	@ 000c563e 061c
.org 0xc5640
	ldr r0, [r6, #40]	@ 000c5640 b06a
.org 0xc5642
	ldrb r4, [r0, #10]	@ 000c5642 847a
.org 0xc5644
	lsrs r4, r4, #4	@ 000c5644 2409
.org 0xc5646
	movs r2, #1	@ 000c5646 0122
.org 0xc5648
	ands r4, r2	@ 000c5648 1440
.org 0xc564a
	ldr r1, [pc, #48]	@ 000c564a 0c49
.org 0xc564c
	ldrb r0, [r6, #9]	@ 000c564c 707a
.org 0xc564e
	lsls r0, r0, #2	@ 000c564e 8000
.org 0xc5650
	adds r0, r0, r1	@ 000c5650 4018
.org 0xc5652
	str r2, [r6, #12]	@ 000c5652 f260
.org 0xc5654
	ldr r0, [r0, #0]	@ 000c5654 0068
.org 0xc5656
	ldr r0, [r0, #4]	@ 000c5656 4068
.org 0xc5658
	str r0, [r6, #20]	@ 000c5658 7061
.org 0xc565a
	ldrb r1, [r6, #10]	@ 000c565a b17a
.org 0xc565c
	movs r0, #1	@ 000c565c 0120
.org 0xc565e
	movs r5, #0	@ 000c565e 0025
.org 0xc5660
	orrs r0, r1	@ 000c5660 0843
.org 0xc5662
	movs r1, #2	@ 000c5662 0221
.org 0xc5664
	orrs r0, r1	@ 000c5664 0843
.org 0xc5666
	strb r0, [r6, #10]	@ 000c5666 b072
.org 0xc5668
	adds r0, r6, #0	@ 000c5668 301c
.org 0xc566a
	bl 0x1cc9c	@ 000c566a 57f717fb
.org 0xc566e
	cmp r4, #0	@ 000c566e 002c
.org 0xc5670
	beq.n 0xc5680	@ 000c5670 06d0
.org 0xc5672
	ldrb r0, [r6, #10]	@ 000c5672 b07a
.org 0xc5674
	movs r1, #16	@ 000c5674 1021
.org 0xc5676
	orrs r0, r1	@ 000c5676 0843
.org 0xc5678
	b.n 0xc5686	@ 000c5678 05e0
.org 0xc567a
	.byte 0x00	@ 000c567a data
.org 0xc567b
	.byte 0x00	@ 000c567b data
.org 0xc567c
	.byte 0xf4,0x49,0x86,0x08	@ 000c567c data
.org 0xc5680
	ldrb r1, [r6, #10]	@ 000c5680 b17a
.org 0xc5682
	movs r0, #239	@ 000c5682 ef20
.org 0xc5684
	ands r0, r1	@ 000c5684 0840
.org 0xc5686
	strb r0, [r6, #10]	@ 000c5686 b072
.org 0xc5688
	adds r1, r4, #0	@ 000c5688 211c
.org 0xc568a
	adds r0, r6, #0	@ 000c568a 301c
.org 0xc568c
	adds r0, #76	@ 000c568c 4c30
.org 0xc568e
	movs r5, #0	@ 000c568e 0025
.org 0xc5690
	strb r1, [r0, #0]	@ 000c5690 0170
.org 0xc5692
	adds r3, r6, #0	@ 000c5692 331c
.org 0xc5694
	adds r3, #74	@ 000c5694 4a33
.org 0xc5696
	lsls r1, r1, #4	@ 000c5696 0901
.org 0xc5698
	ldrb r2, [r3, #0]	@ 000c5698 1a78
.org 0xc569a
	movs r0, #17	@ 000c569a 1120
.org 0xc569c
	negs r0, r0	@ 000c569c 4042
.org 0xc569e
	ands r0, r2	@ 000c569e 1040
.org 0xc56a0
	orrs r0, r1	@ 000c56a0 0843
.org 0xc56a2
	strb r0, [r3, #0]	@ 000c56a2 1870
.org 0xc56a4
	ldrb r1, [r6, #10]	@ 000c56a4 b17a
.org 0xc56a6
	movs r0, #4	@ 000c56a6 0420
.org 0xc56a8
	orrs r0, r1	@ 000c56a8 0843
.org 0xc56aa
	strb r0, [r6, #10]	@ 000c56aa b072
.org 0xc56ac
	adds r4, r6, #0	@ 000c56ac 341c
.org 0xc56ae
	adds r4, #116	@ 000c56ae 7434
.org 0xc56b0
	ldr r1, [pc, #28]	@ 000c56b0 0749
.org 0xc56b2
	adds r2, r6, #0	@ 000c56b2 321c
.org 0xc56b4
	adds r2, #84	@ 000c56b4 5432
.org 0xc56b6
	adds r0, r4, #0	@ 000c56b6 201c
.org 0xc56b8
	movs r3, #64	@ 000c56b8 4023
.org 0xc56ba
	bl 0x5760	@ 000c56ba 40f751f8
.org 0xc56be
	str r6, [r4, #44]	@ 000c56be e662
.org 0xc56c0
	str r5, [r4, #36]	@ 000c56c0 6562
.org 0xc56c2
	adds r0, r6, #0	@ 000c56c2 301c
.org 0xc56c4
	bl 0xc56d4	@ 000c56c4 00f006f8

@ FUN_0810a640  entry 0x0810a640  size 92
.thumb
.org 0x10a640
FUN_0810a640:
	push {r4, lr}	@ 0010a640 10b5
.org 0x10a642
	adds r4, r0, #0	@ 0010a642 041c
.org 0x10a644
	ldr r1, [pc, #84]	@ 0010a644 1549
.org 0x10a646
	ldrb r0, [r4, #9]	@ 0010a646 607a
.org 0x10a648
	lsls r0, r0, #2	@ 0010a648 8000
.org 0x10a64a
	adds r0, r0, r1	@ 0010a64a 4018
.org 0x10a64c
	movs r1, #1	@ 0010a64c 0121
.org 0x10a64e
	str r1, [r4, #12]	@ 0010a64e e160
.org 0x10a650
	ldr r0, [r0, #0]	@ 0010a650 0068
.org 0x10a652
	ldr r0, [r0, #4]	@ 0010a652 4068
.org 0x10a654
	str r0, [r4, #20]	@ 0010a654 6061
.org 0x10a656
	adds r0, r4, #0	@ 0010a656 201c
.org 0x10a658
	bl 0x1cc9c	@ 0010a658 12f720fb
.org 0x10a65c
	ldrb r1, [r4, #10]	@ 0010a65c a17a
.org 0x10a65e
	movs r0, #1	@ 0010a65e 0120
.org 0x10a660
	movs r2, #0	@ 0010a660 0022
.org 0x10a662
	orrs r0, r1	@ 0010a662 0843
.org 0x10a664
	movs r1, #2	@ 0010a664 0221
.org 0x10a666
	orrs r0, r1	@ 0010a666 0843
.org 0x10a668
	strb r0, [r4, #10]	@ 0010a668 a072
.org 0x10a66a
	adds r0, r4, #0	@ 0010a66a 201c
.org 0x10a66c
	adds r0, #76	@ 0010a66c 4c30
.org 0x10a66e
	strb r2, [r0, #0]	@ 0010a66e 0270
.org 0x10a670
	adds r3, r4, #0	@ 0010a670 231c
.org 0x10a672
	adds r3, #74	@ 0010a672 4a33
.org 0x10a674
	ldrb r1, [r3, #0]	@ 0010a674 1978
.org 0x10a676
	movs r0, #17	@ 0010a676 1120
.org 0x10a678
	negs r0, r0	@ 0010a678 4042
.org 0x10a67a
	ands r0, r1	@ 0010a67a 0840
.org 0x10a67c
	strb r0, [r3, #0]	@ 0010a67c 1870
.org 0x10a67e
	ldrb r1, [r4, #10]	@ 0010a67e a17a
.org 0x10a680
	movs r0, #239	@ 0010a680 ef20
.org 0x10a682
	ands r0, r1	@ 0010a682 0840
.org 0x10a684
	strb r0, [r4, #10]	@ 0010a684 a072
.org 0x10a686
	strb r2, [r4, #19]	@ 0010a686 e274
.org 0x10a688
	strb r2, [r4, #18]	@ 0010a688 a274
.org 0x10a68a
	adds r0, r4, #0	@ 0010a68a 201c
.org 0x10a68c
	adds r0, #116	@ 0010a68c 7430
.org 0x10a68e
	strb r2, [r0, #0]	@ 0010a68e 0270
.org 0x10a690
	adds r0, r4, #0	@ 0010a690 201c
.org 0x10a692
	bl 0x10a6a0	@ 0010a692 00f005f8
.org 0x10a696
	pop {r4}	@ 0010a696 10bc
.org 0x10a698
	pop {r0}	@ 0010a698 01bc
.org 0x10a69a
	bx r0	@ 0010a69a 0047

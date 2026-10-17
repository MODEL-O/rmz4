@ FUN_080d2744  entry 0x080d2744  size 138
.thumb
.org 0xd2744
FUN_080d2744:
	push {r4, r5, r6, r7, lr}	@ 000d2744 f0b5
.org 0xd2746
	adds r4, r0, #0	@ 000d2746 041c
.org 0xd2748
	ldr r0, [r4, #40]	@ 000d2748 a06a
.org 0xd274a
	ldr r5, [r4, #44]	@ 000d274a e56a
.org 0xd274c
	adds r6, r4, #0	@ 000d274c 261c
.org 0xd274e
	adds r6, #116	@ 000d274e 7436
.org 0xd2750
	adds r7, r4, #0	@ 000d2750 271c
.org 0xd2752
	adds r7, #84	@ 000d2752 5437
.org 0xd2754
	ldrb r0, [r0, #12]	@ 000d2754 007b
.org 0xd2756
	cmp r0, #0	@ 000d2756 0028
.org 0xd2758
	beq.n 0xd27c8	@ 000d2758 36d0
.org 0xd275a
	adds r0, r4, #0	@ 000d275a 201c
.org 0xd275c
	bl 0x1cc9c	@ 000d275c 4af79efa
.org 0xd2760
	ldrb r0, [r4, #10]	@ 000d2760 a07a
.org 0xd2762
	movs r1, #1	@ 000d2762 0121
.org 0xd2764
	orrs r1, r0	@ 000d2764 0143
.org 0xd2766
	strb r1, [r4, #10]	@ 000d2766 a172
.org 0xd2768
	str r6, [r4, #64]	@ 000d2768 2664
.org 0xd276a
	movs r0, #8	@ 000d276a 0820
.org 0xd276c
	ldrsb r0, [r5, r0]	@ 000d276c 2856
.org 0xd276e
	cmp r0, #2	@ 000d276e 0228
.org 0xd2770
	beq.n 0xd2786	@ 000d2770 09d0
.org 0xd2772
	ldrb r0, [r4, #16]	@ 000d2772 207c
.org 0xd2774
	adds r0, #17	@ 000d2774 1130
.org 0xd2776
	adds r1, r4, #0	@ 000d2776 211c
.org 0xd2778
	adds r1, #37	@ 000d2778 2531
.org 0xd277a
	strb r0, [r1, #0]	@ 000d277a 0870
.org 0xd277c
	adds r0, r4, #0	@ 000d277c 201c
.org 0xd277e
	movs r1, #12	@ 000d277e 0c21
.org 0xd2780
	bl 0x1d3d0	@ 000d2780 4af726fe
.org 0xd2784
	b.n 0xd2798	@ 000d2784 08e0
.org 0xd2786
	ldrb r0, [r4, #16]	@ 000d2786 207c
.org 0xd2788
	adds r0, #25	@ 000d2788 1930
.org 0xd278a
	adds r1, r4, #0	@ 000d278a 211c
.org 0xd278c
	adds r1, #37	@ 000d278c 2531
.org 0xd278e
	strb r0, [r1, #0]	@ 000d278e 0870
.org 0xd2790
	adds r0, r4, #0	@ 000d2790 201c
.org 0xd2792
	movs r1, #8	@ 000d2792 0821
.org 0xd2794
	bl 0x1d3d0	@ 000d2794 4af71cfe
.org 0xd2798
	ldr r3, [pc, #52]	@ 000d2798 0d4b
.org 0xd279a
	adds r1, r7, #0	@ 000d279a 391c
.org 0xd279c
	movs r2, #2	@ 000d279c 0222
.org 0xd279e
	ldr r0, [r5, #84]	@ 000d279e 686d
.org 0xd27a0
	str r0, [r1, #0]	@ 000d27a0 0860
.org 0xd27a2
	ldr r0, [r5, #88]	@ 000d27a2 a86d
.org 0xd27a4
	str r0, [r1, #4]	@ 000d27a4 4860
.org 0xd27a6
	adds r1, #8	@ 000d27a6 0831
.org 0xd27a8
	subs r2, #1	@ 000d27a8 013a
.org 0xd27aa
	cmp r2, #0	@ 000d27aa 002a
.org 0xd27ac
	bge.n 0xd279e	@ 000d27ac f7da
.org 0xd27ae
	movs r0, #3	@ 000d27ae 0320
.org 0xd27b0
	strb r0, [r4, #18]	@ 000d27b0 a074
.org 0xd27b2
	ldrb r0, [r4, #9]	@ 000d27b2 607a
.org 0xd27b4
	lsls r0, r0, #2	@ 000d27b4 8000
.org 0xd27b6
	adds r0, r0, r3	@ 000d27b6 c018
.org 0xd27b8
	movs r1, #1	@ 000d27b8 0121
.org 0xd27ba
	str r1, [r4, #12]	@ 000d27ba e160
.org 0xd27bc
	ldr r0, [r0, #0]	@ 000d27bc 0068
.org 0xd27be
	ldr r0, [r0, #4]	@ 000d27be 4068
.org 0xd27c0
	str r0, [r4, #20]	@ 000d27c0 6061
.org 0xd27c2
	adds r0, r4, #0	@ 000d27c2 201c
.org 0xd27c4
	bl 0xd27d4	@ 000d27c4 00f006f8
.org 0xd27c8
	pop {r4, r5, r6, r7}	@ 000d27c8 f0bc
.org 0xd27ca
	pop {r0}	@ 000d27ca 01bc
.org 0xd27cc
	bx r0	@ 000d27cc 0047

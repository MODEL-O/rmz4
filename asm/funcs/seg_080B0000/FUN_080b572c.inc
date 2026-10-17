@ FUN_080b572c  entry 0x080b572c  size 128
.thumb
.org 0xb572c
FUN_080b572c:
	push {r4, r5, r6, r7, lr}	@ 000b572c f0b5
.org 0xb572e
	mov r7, r8	@ 000b572e 4746
.org 0xb5730
	push {r7}	@ 000b5730 80b4
.org 0xb5732
	adds r5, r0, #0	@ 000b5732 051c
.org 0xb5734
	adds r6, r1, #0	@ 000b5734 0e1c
.org 0xb5736
	adds r7, r2, #0	@ 000b5736 171c
.org 0xb5738
	lsls r3, r3, #24	@ 000b5738 1b06
.org 0xb573a
	lsrs r3, r3, #24	@ 000b573a 1b0e
.org 0xb573c
	mov r8, r3	@ 000b573c 9846
.org 0xb573e
	ldr r0, [pc, #108]	@ 000b573e 1b48
.org 0xb5740
	ldr r0, [r0, #0]	@ 000b5740 0068
.org 0xb5742
	bl 0x5500	@ 000b5742 4ff7ddfe
.org 0xb5746
	adds r4, r0, #0	@ 000b5746 041c
.org 0xb5748
	cmp r4, #0	@ 000b5748 002c
.org 0xb574a
	beq.n 0xb57a0	@ 000b574a 29d0
.org 0xb574c
	adds r1, r4, #0	@ 000b574c 211c
.org 0xb574e
	adds r1, #37	@ 000b574e 2531
.org 0xb5750
	movs r3, #0	@ 000b5750 0023
.org 0xb5752
	movs r0, #24	@ 000b5752 1820
.org 0xb5754
	strb r0, [r1, #0]	@ 000b5754 0870
.org 0xb5756
	ldr r0, [pc, #88]	@ 000b5756 1648
.org 0xb5758
	movs r1, #96	@ 000b5758 6021
.org 0xb575a
	strb r1, [r4, #9]	@ 000b575a 6172
.org 0xb575c
	movs r1, #192	@ 000b575c c021
.org 0xb575e
	lsls r1, r1, #1	@ 000b575e 4900
.org 0xb5760
	adds r0, r0, r1	@ 000b5760 4018
.org 0xb5762
	ldr r0, [r0, #0]	@ 000b5762 0068
.org 0xb5764
	ldr r0, [r0, #0]	@ 000b5764 0068
.org 0xb5766
	str r0, [r4, #20]	@ 000b5766 6061
.org 0xb5768
	movs r2, #0	@ 000b5768 0022
.org 0xb576a
	strh r3, [r4, #32]	@ 000b576a 2384
.org 0xb576c
	adds r0, r4, #0	@ 000b576c 201c
.org 0xb576e
	adds r0, #34	@ 000b576e 2230
.org 0xb5770
	strb r2, [r0, #0]	@ 000b5770 0270
.org 0xb5772
	ldrb r1, [r4, #11]	@ 000b5772 e17a
.org 0xb5774
	movs r0, #16	@ 000b5774 1020
.org 0xb5776
	orrs r0, r1	@ 000b5776 0843
.org 0xb5778
	strb r0, [r4, #11]	@ 000b5778 e072
.org 0xb577a
	ldrb r0, [r4, #28]	@ 000b577a 207f
.org 0xb577c
	strb r0, [r4, #29]	@ 000b577c 6077
.org 0xb577e
	str r5, [r4, #40]	@ 000b577e a562
.org 0xb5780
	ldr r0, [r6, #0]	@ 000b5780 3068
.org 0xb5782
	ldr r1, [r6, #4]	@ 000b5782 7168
.org 0xb5784
	str r0, [r4, #84]	@ 000b5784 6065
.org 0xb5786
	str r1, [r4, #88]	@ 000b5786 a165
.org 0xb5788
	ldr r0, [r7, #0]	@ 000b5788 3868
.org 0xb578a
	ldr r1, [r7, #4]	@ 000b578a 7968
.org 0xb578c
	str r0, [r4, #92]	@ 000b578c e065
.org 0xb578e
	str r1, [r4, #96]	@ 000b578e 2166
.org 0xb5790
	strb r2, [r4, #16]	@ 000b5790 2274
.org 0xb5792
	mov r0, r8	@ 000b5792 4046
.org 0xb5794
	strb r0, [r4, #17]	@ 000b5794 6074
.org 0xb5796
	adds r1, r5, #0	@ 000b5796 291c
.org 0xb5798
	adds r1, #204	@ 000b5798 cc31
.org 0xb579a
	ldrh r0, [r1, #0]	@ 000b579a 0888
.org 0xb579c
	adds r0, #1	@ 000b579c 0130
.org 0xb579e
	strh r0, [r1, #0]	@ 000b579e 0880
.org 0xb57a0
	adds r0, r4, #0	@ 000b57a0 201c
.org 0xb57a2
	pop {r3}	@ 000b57a2 08bc
.org 0xb57a4
	mov r8, r3	@ 000b57a4 9846
.org 0xb57a6
	pop {r4, r5, r6, r7}	@ 000b57a6 f0bc
.org 0xb57a8
	pop {r1}	@ 000b57a8 02bc
.org 0xb57aa
	bx r1	@ 000b57aa 0847

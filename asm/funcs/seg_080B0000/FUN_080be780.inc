@ FUN_080be780  entry 0x080be780  size 82
.thumb
.org 0xbe780
FUN_080be780:
	push {r4, r5, r6, r7, lr}	@ 000be780 f0b5
.org 0xbe782
	adds r5, r0, #0	@ 000be782 051c
.org 0xbe784
	adds r6, r1, #0	@ 000be784 0e1c
.org 0xbe786
	adds r7, r2, #0	@ 000be786 171c
.org 0xbe788
	ldr r0, [pc, #72]	@ 000be788 1248
.org 0xbe78a
	ldr r0, [r0, #0]	@ 000be78a 0068
.org 0xbe78c
	bl 0x5500	@ 000be78c 46f7b8fe
.org 0xbe790
	adds r4, r0, #0	@ 000be790 041c
.org 0xbe792
	cmp r4, #0	@ 000be792 002c
.org 0xbe794
	beq.n 0xbe7ca	@ 000be794 19d0
.org 0xbe796
	adds r1, r4, #0	@ 000be796 211c
.org 0xbe798
	adds r1, #37	@ 000be798 2531
.org 0xbe79a
	movs r3, #0	@ 000be79a 0023
.org 0xbe79c
	movs r0, #8	@ 000be79c 0820
.org 0xbe79e
	strb r0, [r1, #0]	@ 000be79e 0870
.org 0xbe7a0
	ldr r1, [pc, #52]	@ 000be7a0 0d49
.org 0xbe7a2
	movs r0, #5	@ 000be7a2 0520
.org 0xbe7a4
	strb r0, [r4, #9]	@ 000be7a4 6072
.org 0xbe7a6
	ldr r0, [r1, #20]	@ 000be7a6 4869
.org 0xbe7a8
	ldr r0, [r0, #0]	@ 000be7a8 0068
.org 0xbe7aa
	str r0, [r4, #20]	@ 000be7aa 6061
.org 0xbe7ac
	movs r2, #0	@ 000be7ac 0022
.org 0xbe7ae
	strh r3, [r4, #32]	@ 000be7ae 2384
.org 0xbe7b0
	adds r0, r4, #0	@ 000be7b0 201c
.org 0xbe7b2
	adds r0, #34	@ 000be7b2 2230
.org 0xbe7b4
	strb r2, [r0, #0]	@ 000be7b4 0270
.org 0xbe7b6
	adds r0, #146	@ 000be7b6 9230
.org 0xbe7b8
	str r5, [r0, #0]	@ 000be7b8 0560
.org 0xbe7ba
	str r6, [r4, #40]	@ 000be7ba a662
.org 0xbe7bc
	ldr r0, [r7, #0]	@ 000be7bc 3868
.org 0xbe7be
	ldr r1, [r7, #4]	@ 000be7be 7968
.org 0xbe7c0
	str r0, [r4, #84]	@ 000be7c0 6065
.org 0xbe7c2
	str r1, [r4, #88]	@ 000be7c2 a165
.org 0xbe7c4
	movs r0, #1	@ 000be7c4 0120
.org 0xbe7c6
	strb r0, [r4, #16]	@ 000be7c6 2074
.org 0xbe7c8
	strb r2, [r4, #17]	@ 000be7c8 6274
.org 0xbe7ca
	adds r0, r4, #0	@ 000be7ca 201c
.org 0xbe7cc
	pop {r4, r5, r6, r7}	@ 000be7cc f0bc
.org 0xbe7ce
	pop {r1}	@ 000be7ce 02bc
.org 0xbe7d0
	bx r1	@ 000be7d0 0847

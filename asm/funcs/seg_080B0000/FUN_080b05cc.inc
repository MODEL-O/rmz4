@ FUN_080b05cc  entry 0x080b05cc  size 144
.thumb
.org 0xb05cc
FUN_080b05cc:
	push {r4, r5, r6, r7, lr}	@ 000b05cc f0b5
.org 0xb05ce
	adds r5, r0, #0	@ 000b05ce 051c
.org 0xb05d0
	ldr r0, [r5, #20]	@ 000b05d0 6869
.org 0xb05d2
	movs r7, #1	@ 000b05d2 0127
.org 0xb05d4
	ands r0, r7	@ 000b05d4 3840
.org 0xb05d6
	cmp r0, #0	@ 000b05d6 0028
.org 0xb05d8
	beq.n 0xb065a	@ 000b05d8 3fd0
.org 0xb05da
	ldr r4, [r5, #44]	@ 000b05da ec6a
.org 0xb05dc
	ldrb r6, [r4, #16]	@ 000b05dc 267c
.org 0xb05de
	cmp r6, #0	@ 000b05de 002e
.org 0xb05e0
	beq.n 0xb05ea	@ 000b05e0 03d0
.org 0xb05e2
	movs r0, #37	@ 000b05e2 2520
.org 0xb05e4
	bl 0x6984	@ 000b05e4 56f7cef9
.org 0xb05e8
	b.n 0xb065a	@ 000b05e8 37e0
.org 0xb05ea
	movs r0, #31	@ 000b05ea 1f20
.org 0xb05ec
	bl 0x6984	@ 000b05ec 56f7caf9
.org 0xb05f0
	ldrb r0, [r4, #18]	@ 000b05f0 a07c
.org 0xb05f2
	cmp r0, #255	@ 000b05f2 ff28
.org 0xb05f4
	beq.n 0xb0628	@ 000b05f4 18d0
.org 0xb05f6
	ldr r1, [r5, #20]	@ 000b05f6 6969
.org 0xb05f8
	movs r0, #128	@ 000b05f8 8020
.org 0xb05fa
	lsls r0, r0, #2	@ 000b05fa 8000
.org 0xb05fc
	ands r0, r1	@ 000b05fc 0840
.org 0xb05fe
	cmp r0, #0	@ 000b05fe 0028
.org 0xb0600
	beq.n 0xb065a	@ 000b0600 2bd0
.org 0xb0602
	movs r0, #128	@ 000b0602 8020
.org 0xb0604
	lsls r0, r0, #10	@ 000b0604 8002
.org 0xb0606
	ands r1, r0	@ 000b0606 0140
.org 0xb0608
	cmp r1, #0	@ 000b0608 0029
.org 0xb060a
	beq.n 0xb065a	@ 000b060a 26d0
.org 0xb060c
	adds r0, r4, #0	@ 000b060c 201c
.org 0xb060e
	adds r0, #181	@ 000b060e b530
.org 0xb0610
	strb r7, [r0, #0]	@ 000b0610 0770
.org 0xb0612
	ldr r0, [pc, #16]	@ 000b0612 0448
.org 0xb0614
	ldr r0, [r0, #0]	@ 000b0614 0068
.org 0xb0616
	cmp r0, #0	@ 000b0616 0028
.org 0xb0618
	beq.n 0xb065a	@ 000b0618 1fd0
.org 0xb061a
	movs r1, #5	@ 000b061a 0521
.org 0xb061c
	movs r2, #6	@ 000b061c 0622
.org 0xb061e
	bl 0x3a578	@ 000b061e 89f7abff
.org 0xb0622
	b.n 0xb065a	@ 000b0622 1ae0
.org 0xb0624
	.byte 0xf0,0xdb,0x02,0x02	@ 000b0624 data
.org 0xb0628
	ldr r0, [r5, #20]	@ 000b0628 6869
.org 0xb062a
	movs r1, #128	@ 000b062a 8021
.org 0xb062c
	lsls r1, r1, #10	@ 000b062c 8902
.org 0xb062e
	ands r0, r1	@ 000b062e 0840
.org 0xb0630
	cmp r0, #0	@ 000b0630 0028
.org 0xb0632
	beq.n 0xb065a	@ 000b0632 12d0
.org 0xb0634
	adds r1, r4, #0	@ 000b0634 211c
.org 0xb0636
	adds r1, #181	@ 000b0636 b531
.org 0xb0638
	movs r0, #2	@ 000b0638 0220
.org 0xb063a
	strb r0, [r1, #0]	@ 000b063a 0870
.org 0xb063c
	ldr r0, [pc, #32]	@ 000b063c 0848
.org 0xb063e
	ldr r0, [r0, #0]	@ 000b063e 0068
.org 0xb0640
	cmp r0, #0	@ 000b0640 0028
.org 0xb0642
	beq.n 0xb065a	@ 000b0642 0ad0
.org 0xb0644
	movs r1, #8	@ 000b0644 0821
.org 0xb0646
	movs r2, #0	@ 000b0646 0022
.org 0xb0648
	bl 0x3a578	@ 000b0648 89f796ff
.org 0xb064c
	movs r0, #4	@ 000b064c 0420
.org 0xb064e
	strb r0, [r4, #13]	@ 000b064e 6073
.org 0xb0650
	strb r6, [r4, #14]	@ 000b0650 a673
.org 0xb0652
	adds r1, r4, #0	@ 000b0652 211c
.org 0xb0654
	adds r1, #164	@ 000b0654 a431
.org 0xb0656
	movs r0, #40	@ 000b0656 2820
.org 0xb0658
	strh r0, [r1, #0]	@ 000b0658 0880
.org 0xb065a
	pop {r4, r5, r6, r7}	@ 000b065a f0bc

@ FUN_0809a680  entry 0x0809a680  size 166
.thumb
.org 0x9a680
FUN_0809a680:
	push {r4, r5, r6, r7, lr}	@ 0009a680 f0b5
.org 0x9a682
	adds r4, r0, #0	@ 0009a682 041c
.org 0x9a684
	bl 0x1cff0	@ 0009a684 82f7b4fc
.org 0x9a688
	ldr r1, [r4, #84]	@ 0009a688 616d
.org 0x9a68a
	ldr r0, [r4, #92]	@ 0009a68a e06d
.org 0x9a68c
	adds r6, r1, r0	@ 0009a68c 0e18
.org 0x9a68e
	str r6, [r4, #84]	@ 0009a68e 6665
.org 0x9a690
	ldr r1, [r4, #88]	@ 0009a690 a16d
.org 0x9a692
	ldr r0, [r4, #96]	@ 0009a692 206e
.org 0x9a694
	adds r5, r1, r0	@ 0009a694 0d18
.org 0x9a696
	str r5, [r4, #88]	@ 0009a696 a565
.org 0x9a698
	ldrb r0, [r4, #17]	@ 0009a698 607c
.org 0x9a69a
	movs r1, #3	@ 0009a69a 0321
.org 0x9a69c
	bl 0x129198	@ 0009a69c 8ef07cfd
.org 0x9a6a0
	lsls r0, r0, #24	@ 0009a6a0 0006
.org 0x9a6a2
	lsrs r7, r0, #24	@ 0009a6a2 070e
.org 0x9a6a4
	cmp r7, #2	@ 0009a6a4 022f
.org 0x9a6a6
	bne.n 0x9a6d0	@ 0009a6a6 13d1
.org 0x9a6a8
	adds r0, r6, #0	@ 0009a6a8 301c
.org 0x9a6aa
	adds r1, r5, #0	@ 0009a6aa 291c
.org 0x9a6ac
	bl 0x7c7c	@ 0009a6ac 6df7e6fa
.org 0x9a6b0
	lsls r0, r0, #16	@ 0009a6b0 0004
.org 0x9a6b2
	cmp r0, #0	@ 0009a6b2 0028
.org 0x9a6b4
	beq.n 0x9a708	@ 0009a6b4 28d0
.org 0x9a6b6
	ldr r1, [pc, #20]	@ 0009a6b6 0549
.org 0x9a6b8
	ldrb r0, [r4, #9]	@ 0009a6b8 607a
.org 0x9a6ba
	lsls r0, r0, #2	@ 0009a6ba 8000
.org 0x9a6bc
	adds r0, r0, r1	@ 0009a6bc 4018
.org 0x9a6be
	str r7, [r4, #12]	@ 0009a6be e760
.org 0x9a6c0
	ldr r0, [r0, #0]	@ 0009a6c0 0068
.org 0x9a6c2
	ldr r0, [r0, #8]	@ 0009a6c2 8068
.org 0x9a6c4
	str r0, [r4, #20]	@ 0009a6c4 6061
.org 0x9a6c6
	movs r0, #1	@ 0009a6c6 0120
.org 0x9a6c8
	strb r0, [r4, #18]	@ 0009a6c8 a074
.org 0x9a6ca
	b.n 0x9a6f6	@ 0009a6ca 14e0
.org 0x9a6cc
	.byte 0x40,0xdb,0x85,0x08	@ 0009a6cc data
.org 0x9a6d0
	ldr r0, [pc, #44]	@ 0009a6d0 0b48
.org 0x9a6d2
	adds r1, r4, #0	@ 0009a6d2 211c
.org 0x9a6d4
	adds r1, #84	@ 0009a6d4 5431
.org 0x9a6d6
	bl 0x1fb14	@ 0009a6d6 85f71dfa
.org 0x9a6da
	movs r1, #128	@ 0009a6da 8021
.org 0x9a6dc
	lsls r1, r1, #5	@ 0009a6dc 4901
.org 0x9a6de
	cmp r0, r1	@ 0009a6de 8842
.org 0x9a6e0
	bls.n 0x9a708	@ 0009a6e0 12d9
.org 0x9a6e2
	ldr r1, [pc, #32]	@ 0009a6e2 0849
.org 0x9a6e4
	ldrb r0, [r4, #9]	@ 0009a6e4 607a
.org 0x9a6e6
	lsls r0, r0, #2	@ 0009a6e6 8000
.org 0x9a6e8
	adds r0, r0, r1	@ 0009a6e8 4018
.org 0x9a6ea
	movs r1, #2	@ 0009a6ea 0221
.org 0x9a6ec
	str r1, [r4, #12]	@ 0009a6ec e160
.org 0x9a6ee
	ldr r0, [r0, #0]	@ 0009a6ee 0068
.org 0x9a6f0
	ldr r0, [r0, #8]	@ 0009a6f0 8068
.org 0x9a6f2
	str r0, [r4, #20]	@ 0009a6f2 6061
.org 0x9a6f4
	strb r1, [r4, #18]	@ 0009a6f4 a174
.org 0x9a6f6
	adds r0, r4, #0	@ 0009a6f6 201c
.org 0x9a6f8
	bl 0x99ff4	@ 0009a6f8 fff77cfc
.org 0x9a6fc
	b.n 0x9a72e	@ 0009a6fc 17e0
.org 0x9a6fe
	.byte 0x00	@ 0009a6fe data
.org 0x9a6ff
	.byte 0x00	@ 0009a6ff data
.org 0x9a700
	.byte 0xf8,0xe9,0x02,0x02	@ 0009a700 data
.org 0x9a704
	.byte 0x40,0xdb,0x85,0x08	@ 0009a704 data
.org 0x9a708
	adds r0, r4, #0	@ 0009a708 201c
.org 0x9a70a
	adds r0, #140	@ 0009a70a 8c30
.org 0x9a70c
	ldr r0, [r0, #0]	@ 0009a70c 0068
.org 0x9a70e
	movs r1, #4	@ 0009a70e 0421
.org 0x9a710
	ands r0, r1	@ 0009a710 0840
.org 0x9a712
	cmp r0, #0	@ 0009a712 0028
.org 0x9a714
	beq.n 0x9a72e	@ 0009a714 0bd0
.org 0x9a716
	ldr r1, [pc, #28]	@ 0009a716 0749
.org 0x9a718
	ldrb r0, [r4, #9]	@ 0009a718 607a
.org 0x9a71a
	lsls r0, r0, #2	@ 0009a71a 8000
.org 0x9a71c
	adds r0, r0, r1	@ 0009a71c 4018
.org 0x9a71e
	movs r1, #2	@ 0009a71e 0221
.org 0x9a720
	str r1, [r4, #12]	@ 0009a720 e160
.org 0x9a722
	ldr r0, [r0, #0]	@ 0009a722 0068
.org 0x9a724
	ldr r0, [r0, #8]	@ 0009a724 8068

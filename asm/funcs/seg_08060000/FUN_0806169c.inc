@ FUN_0806169c  entry 0x0806169c  size 180
.thumb
.org 0x6169c
FUN_0806169c:
	push {r4, r5, lr}	@ 0006169c 30b5
.org 0x6169e
	adds r4, r0, #0	@ 0006169e 041c
.org 0x616a0
	ldrb r5, [r4, #14]	@ 000616a0 a57b
.org 0x616a2
	cmp r5, #0	@ 000616a2 002d
.org 0x616a4
	bne.n 0x616b4	@ 000616a4 06d1
.org 0x616a6
	ldr r1, [pc, #84]	@ 000616a6 1549
.org 0x616a8
	bl 0x1cf00	@ 000616a8 bbf72afc
.org 0x616ac
	strb r5, [r4, #15]	@ 000616ac e573
.org 0x616ae
	ldrb r0, [r4, #14]	@ 000616ae a07b
.org 0x616b0
	adds r0, #1	@ 000616b0 0130
.org 0x616b2
	strb r0, [r4, #14]	@ 000616b2 a073
.org 0x616b4
	ldrb r0, [r4, #15]	@ 000616b4 e07b
.org 0x616b6
	cmp r0, #0	@ 000616b6 0028
.org 0x616b8
	bne.n 0x61744	@ 000616b8 44d1
.org 0x616ba
	movs r3, #0	@ 000616ba 0023
.org 0x616bc
	ldr r0, [pc, #64]	@ 000616bc 1048
.org 0x616be
	ldr r2, [r0, #0]	@ 000616be 0268
.org 0x616c0
	ldr r1, [r4, #84]	@ 000616c0 616d
.org 0x616c2
	ldr r0, [r2, #84]	@ 000616c2 506d
.org 0x616c4
	cmp r1, r0	@ 000616c4 8142
.org 0x616c6
	bge.n 0x616ca	@ 000616c6 00da
.org 0x616c8
	movs r3, #1	@ 000616c8 0123
.org 0x616ca
	adds r0, r4, #0	@ 000616ca 201c
.org 0x616cc
	adds r0, #76	@ 000616cc 4c30
.org 0x616ce
	strb r3, [r0, #0]	@ 000616ce 0370
.org 0x616d0
	movs r3, #0	@ 000616d0 0023
.org 0x616d2
	ldr r1, [r4, #84]	@ 000616d2 616d
.org 0x616d4
	ldr r0, [r2, #84]	@ 000616d4 506d
.org 0x616d6
	cmp r1, r0	@ 000616d6 8142
.org 0x616d8
	bge.n 0x616dc	@ 000616d8 00da
.org 0x616da
	movs r3, #1	@ 000616da 0123
.org 0x616dc
	adds r5, r4, #0	@ 000616dc 251c
.org 0x616de
	adds r5, #74	@ 000616de 4a35
.org 0x616e0
	lsls r2, r3, #4	@ 000616e0 1a01
.org 0x616e2
	ldrb r1, [r5, #0]	@ 000616e2 2978
.org 0x616e4
	movs r0, #17	@ 000616e4 1120
.org 0x616e6
	negs r0, r0	@ 000616e6 4042
.org 0x616e8
	ands r0, r1	@ 000616e8 0840
.org 0x616ea
	orrs r0, r2	@ 000616ea 1043
.org 0x616ec
	strb r0, [r5, #0]	@ 000616ec 2870
.org 0x616ee
	cmp r3, #0	@ 000616ee 002b
.org 0x616f0
	beq.n 0x61704	@ 000616f0 08d0
.org 0x616f2
	ldrb r0, [r4, #10]	@ 000616f2 a07a
.org 0x616f4
	movs r1, #16	@ 000616f4 1021
.org 0x616f6
	orrs r0, r1	@ 000616f6 0843
.org 0x616f8
	b.n 0x6170a	@ 000616f8 07e0
.org 0x616fa
	.byte 0x00	@ 000616fa data
.org 0x616fb
	.byte 0x00	@ 000616fb data
.org 0x616fc
	.byte 0x1b,0xa5,0x00,0x00	@ 000616fc data
.org 0x61700
	.byte 0xf0,0xdb,0x02,0x02	@ 00061700 data
.org 0x61704
	ldrb r1, [r4, #10]	@ 00061704 a17a
.org 0x61706
	movs r0, #239	@ 00061706 ef20
.org 0x61708
	ands r0, r1	@ 00061708 0840
.org 0x6170a
	strb r0, [r4, #10]	@ 0006170a a072
.org 0x6170c
	ldr r0, [r4, #84]	@ 0006170c 606d
.org 0x6170e
	ldr r1, [r4, #92]	@ 0006170e e16d
.org 0x61710
	adds r0, r0, r1	@ 00061710 4018
.org 0x61712
	str r0, [r4, #84]	@ 00061712 6065
.org 0x61714
	ldr r1, [r4, #88]	@ 00061714 a16d
.org 0x61716
	ldr r0, [r4, #96]	@ 00061716 206e
.org 0x61718
	adds r1, r1, r0	@ 00061718 0918
.org 0x6171a
	str r1, [r4, #88]	@ 0006171a a165
.org 0x6171c
	adds r0, #64	@ 0006171c 4030
.org 0x6171e
	str r0, [r4, #96]	@ 0006171e 2066
.org 0x61720
	adds r5, r4, #0	@ 00061720 251c
.org 0x61722
	adds r5, #180	@ 00061722 b435
.org 0x61724
	ldr r0, [r5, #4]	@ 00061724 6868
.org 0x61726
	cmp r1, r0	@ 00061726 8142
.org 0x61728
	ble.n 0x61754	@ 00061728 14dd
.org 0x6172a
	ldr r1, [pc, #20]	@ 0006172a 0549
.org 0x6172c
	adds r0, r4, #0	@ 0006172c 201c
.org 0x6172e
	bl 0x1cf00	@ 0006172e bbf7e7fb
.org 0x61732
	ldr r0, [r5, #4]	@ 00061732 6868
.org 0x61734
	str r0, [r4, #88]	@ 00061734 a065
.org 0x61736
	ldrb r0, [r4, #15]	@ 00061736 e07b
.org 0x61738
	adds r0, #1	@ 00061738 0130
.org 0x6173a
	strb r0, [r4, #15]	@ 0006173a e073
.org 0x6173c
	b.n 0x61754	@ 0006173c 0ae0
.org 0x6173e
	.byte 0x00	@ 0006173e data
.org 0x6173f
	.byte 0x00	@ 0006173f data
.org 0x61740
	.byte 0x03,0xa5,0x00,0x00	@ 00061740 data
.org 0x61744
	adds r0, r4, #0	@ 00061744 201c
.org 0x61746
	adds r0, #115	@ 00061746 7330
.org 0x61748
	ldrb r1, [r0, #0]	@ 00061748 0178
.org 0x6174a
	cmp r1, #3	@ 0006174a 0329
.org 0x6174c
	bne.n 0x61754	@ 0006174c 02d1
.org 0x6174e
	movs r0, #0	@ 0006174e 0020

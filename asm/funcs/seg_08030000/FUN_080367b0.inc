@ FUN_080367b0  entry 0x080367b0  size 146
.thumb
.org 0x367b0
FUN_080367b0:
	push {r4, r5, r6, lr}	@ 000367b0 70b5
.org 0x367b2
	adds r4, r0, #0	@ 000367b2 041c
.org 0x367b4
	movs r1, #167	@ 000367b4 a721
.org 0x367b6
	lsls r1, r1, #1	@ 000367b6 4900
.org 0x367b8
	adds r0, r4, r1	@ 000367b8 6018
.org 0x367ba
	movs r6, #2	@ 000367ba 0226
.org 0x367bc
	strb r6, [r0, #0]	@ 000367bc 0670
.org 0x367be
	ldrb r0, [r4, #30]	@ 000367be a07f
.org 0x367c0
	lsls r0, r0, #8	@ 000367c0 0002
.org 0x367c2
	adds r1, r4, #0	@ 000367c2 211c
.org 0x367c4
	adds r1, #112	@ 000367c4 7031
.org 0x367c6
	ldrb r1, [r1, #0]	@ 000367c6 0978
.org 0x367c8
	orrs r1, r0	@ 000367c8 0143
.org 0x367ca
	movs r2, #132	@ 000367ca 8422
.org 0x367cc
	lsls r2, r2, #6	@ 000367cc 9201
.org 0x367ce
	cmp r1, r2	@ 000367ce 9142
.org 0x367d0
	beq.n 0x367da	@ 000367d0 03d0
.org 0x367d2
	adds r0, r4, #0	@ 000367d2 201c
.org 0x367d4
	adds r1, r2, #0	@ 000367d4 111c
.org 0x367d6
	bl 0x1cf00	@ 000367d6 e6f793fb
.org 0x367da
	movs r2, #129	@ 000367da 8122
.org 0x367dc
	lsls r2, r2, #1	@ 000367dc 5200
.org 0x367de
	adds r5, r4, r2	@ 000367de a518
.org 0x367e0
	ldrb r0, [r5, #0]	@ 000367e0 2878
.org 0x367e2
	cmp r0, #0	@ 000367e2 0028
.org 0x367e4
	bne.n 0x367f6	@ 000367e4 07d1
.org 0x367e6
	adds r0, r4, #0	@ 000367e6 201c
.org 0x367e8
	movs r1, #2	@ 000367e8 0221
.org 0x367ea
	bl 0x3d374	@ 000367ea 06f0c3fd
.org 0x367ee
	ldrb r0, [r5, #0]	@ 000367ee 2878
.org 0x367f0
	adds r0, #1	@ 000367f0 0130
.org 0x367f2
	strb r0, [r5, #0]	@ 000367f2 2870
.org 0x367f4
	b.n 0x36840	@ 000367f4 24e0
.org 0x367f6
	movs r0, #162	@ 000367f6 a220
.org 0x367f8
	lsls r0, r0, #1	@ 000367f8 4000
.org 0x367fa
	adds r1, r4, r0	@ 000367fa 2118
.org 0x367fc
	adds r0, r4, #0	@ 000367fc 201c
.org 0x367fe
	bl 0x39fd8	@ 000367fe 03f0ebfb
.org 0x36802
	lsls r0, r0, #24	@ 00036802 0006
.org 0x36804
	lsrs r0, r0, #24	@ 00036804 000e
.org 0x36806
	cmp r0, #1	@ 00036806 0128
.org 0x36808
	bne.n 0x36828	@ 00036808 0ed1
.org 0x3680a
	movs r1, #128	@ 0003680a 8021
.org 0x3680c
	lsls r1, r1, #1	@ 0003680c 4900
.org 0x3680e
	adds r0, r4, r1	@ 0003680e 6018
.org 0x36810
	movs r1, #3	@ 00036810 0321
.org 0x36812
	strb r1, [r0, #0]	@ 00036812 0170
.org 0x36814
	ldr r2, [pc, #12]	@ 00036814 034a
.org 0x36816
	adds r1, r4, r2	@ 00036816 a118
.org 0x36818
	movs r0, #0	@ 00036818 0020
.org 0x3681a
	strb r0, [r1, #0]	@ 0003681a 0870
.org 0x3681c
	adds r0, r4, #0	@ 0003681c 201c
.org 0x3681e
	bl 0x35b7c	@ 0003681e fff7adf9
.org 0x36822
	b.n 0x36840	@ 00036822 0de0
.org 0x36824
	.byte 0x01,0x01,0x00,0x00	@ 00036824 data
.org 0x36828
	ldr r1, [pc, #28]	@ 00036828 0749
.org 0x3682a
	adds r0, r4, r1	@ 0003682a 6018
.org 0x3682c
	ldrb r1, [r0, #0]	@ 0003682c 0178
.org 0x3682e
	cmp r1, #0	@ 0003682e 0029
.org 0x36830
	bne.n 0x36840	@ 00036830 06d1
.org 0x36832
	ldr r2, [pc, #24]	@ 00036832 064a
.org 0x36834
	adds r0, r4, r2	@ 00036834 a018
.org 0x36836
	strb r6, [r0, #0]	@ 00036836 0670
.org 0x36838
	strb r1, [r5, #0]	@ 00036838 2970
.org 0x3683a
	adds r0, r4, #0	@ 0003683a 201c
.org 0x3683c
	bl 0x36850	@ 0003683c 00f008f8
.org 0x36840
	pop {r4, r5, r6}	@ 00036840 70bc

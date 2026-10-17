@ FUN_08087990  entry 0x08087990  size 118
.thumb
.org 0x87990
FUN_08087990:
	push {r4, lr}	@ 00087990 10b5
.org 0x87992
	adds r4, r0, #0	@ 00087992 041c
.org 0x87994
	ldrb r0, [r4, #15]	@ 00087994 e07b
.org 0x87996
	cmp r0, #0	@ 00087996 0028
.org 0x87998
	bne.n 0x879f0	@ 00087998 2ad1
.org 0x8799a
	adds r0, r4, #0	@ 0008799a 201c
.org 0x8799c
	adds r0, #116	@ 0008799c 7430
.org 0x8799e
	ldr r1, [pc, #32]	@ 0008799e 0849
.org 0x879a0
	bl 0x5784	@ 000879a0 7df7f0fe
.org 0x879a4
	ldr r1, [pc, #28]	@ 000879a4 0749
.org 0x879a6
	adds r0, r4, #0	@ 000879a6 201c
.org 0x879a8
	bl 0x1cf00	@ 000879a8 95f7aafa
.org 0x879ac
	ldrb r2, [r4, #10]	@ 000879ac a27a
.org 0x879ae
	lsrs r0, r2, #4	@ 000879ae 1009
.org 0x879b0
	movs r1, #1	@ 000879b0 0121
.org 0x879b2
	bics r1, r0	@ 000879b2 8143
.org 0x879b4
	cmp r1, #0	@ 000879b4 0029
.org 0x879b6
	beq.n 0x879c8	@ 000879b6 07d0
.org 0x879b8
	movs r0, #16	@ 000879b8 1020
.org 0x879ba
	orrs r0, r2	@ 000879ba 1043
.org 0x879bc
	b.n 0x879cc	@ 000879bc 06e0
.org 0x879be
	.byte 0x00	@ 000879be data
.org 0x879bf
	.byte 0x00	@ 000879bf data
.org 0x879c0
	.byte 0x04,0xf0,0x85,0x08	@ 000879c0 data
.org 0x879c4
	.byte 0x03,0x1d,0x00,0x00	@ 000879c4 data
.org 0x879c8
	movs r0, #239	@ 000879c8 ef20
.org 0x879ca
	ands r0, r2	@ 000879ca 1040
.org 0x879cc
	strb r0, [r4, #10]	@ 000879cc a072
.org 0x879ce
	adds r0, r4, #0	@ 000879ce 201c
.org 0x879d0
	adds r0, #76	@ 000879d0 4c30
.org 0x879d2
	strb r1, [r0, #0]	@ 000879d2 0170
.org 0x879d4
	adds r3, r4, #0	@ 000879d4 231c
.org 0x879d6
	adds r3, #74	@ 000879d6 4a33
.org 0x879d8
	lsls r1, r1, #4	@ 000879d8 0901
.org 0x879da
	ldrb r2, [r3, #0]	@ 000879da 1a78
.org 0x879dc
	movs r0, #17	@ 000879dc 1120
.org 0x879de
	negs r0, r0	@ 000879de 4042
.org 0x879e0
	ands r0, r2	@ 000879e0 1040
.org 0x879e2
	orrs r0, r1	@ 000879e2 0843
.org 0x879e4
	strb r0, [r3, #0]	@ 000879e4 1870
.org 0x879e6
	movs r0, #8	@ 000879e6 0820
.org 0x879e8
	strb r0, [r4, #18]	@ 000879e8 a074
.org 0x879ea
	ldrb r0, [r4, #15]	@ 000879ea e07b
.org 0x879ec
	adds r0, #1	@ 000879ec 0130
.org 0x879ee
	strb r0, [r4, #15]	@ 000879ee e073
.org 0x879f0
	adds r0, r4, #0	@ 000879f0 201c
.org 0x879f2
	bl 0x1cff0	@ 000879f2 95f7fdfa
.org 0x879f6
	ldrb r0, [r4, #18]	@ 000879f6 a07c
.org 0x879f8
	subs r0, #1	@ 000879f8 0138
.org 0x879fa
	strb r0, [r4, #18]	@ 000879fa a074
.org 0x879fc
	lsls r0, r0, #24	@ 000879fc 0006
.org 0x879fe
	lsrs r1, r0, #24	@ 000879fe 010e
.org 0x87a00
	cmp r1, #0	@ 00087a00 0029
.org 0x87a02
	bne.n 0x87a0a	@ 00087a02 02d1
.org 0x87a04
	movs r0, #2	@ 00087a04 0220

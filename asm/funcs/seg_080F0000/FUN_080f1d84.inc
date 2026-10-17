@ FUN_080f1d84  entry 0x080f1d84  size 144
.thumb
.org 0xf1d84
FUN_080f1d84:
	push {r4, lr}	@ 000f1d84 10b5
.org 0xf1d86
	adds r4, r0, #0	@ 000f1d86 041c
.org 0xf1d88
	ldrb r0, [r4, #17]	@ 000f1d88 607c
.org 0xf1d8a
	cmp r0, #1	@ 000f1d8a 0128
.org 0xf1d8c
	beq.n 0xf1dde	@ 000f1d8c 27d0
.org 0xf1d8e
	cmp r0, #1	@ 000f1d8e 0128
.org 0xf1d90
	bgt.n 0xf1d98	@ 000f1d90 02dc
.org 0xf1d92
	cmp r0, #0	@ 000f1d92 0028
.org 0xf1d94
	beq.n 0xf1d9e	@ 000f1d94 03d0
.org 0xf1d96
	b.n 0xf1e1c	@ 000f1d96 41e0
.org 0xf1d98
	cmp r0, #2	@ 000f1d98 0228
.org 0xf1d9a
	beq.n 0xf1e04	@ 000f1d9a 33d0
.org 0xf1d9c
	b.n 0xf1e1c	@ 000f1d9c 3ee0
.org 0xf1d9e
	ldr r0, [pc, #88]	@ 000f1d9e 1648
.org 0xf1da0
	movs r2, #161	@ 000f1da0 a122
.org 0xf1da2
	lsls r2, r2, #1	@ 000f1da2 5200
.org 0xf1da4
	adds r0, r0, r2	@ 000f1da4 8018
.org 0xf1da6
	movs r1, #128	@ 000f1da6 8021
.org 0xf1da8
	lsls r1, r1, #2	@ 000f1da8 8900
.org 0xf1daa
	strh r1, [r0, #0]	@ 000f1daa 0180
.org 0xf1dac
	ldr r0, [pc, #76]	@ 000f1dac 1348
.org 0xf1dae
	adds r0, r0, r2	@ 000f1dae 8018
.org 0xf1db0
	movs r1, #5	@ 000f1db0 0521
.org 0xf1db2
	strh r1, [r0, #0]	@ 000f1db2 0180
.org 0xf1db4
	ldr r1, [pc, #72]	@ 000f1db4 1249
.org 0xf1db6
	adds r0, r4, #0	@ 000f1db6 201c
.org 0xf1db8
	bl 0x1cf00	@ 000f1db8 2bf7a2f8
.org 0xf1dbc
	adds r2, r4, #0	@ 000f1dbc 221c
.org 0xf1dbe
	adds r2, #73	@ 000f1dbe 4932
.org 0xf1dc0
	ldrb r1, [r2, #0]	@ 000f1dc0 1178
.org 0xf1dc2
	movs r0, #13	@ 000f1dc2 0d20
.org 0xf1dc4
	negs r0, r0	@ 000f1dc4 4042
.org 0xf1dc6
	ands r0, r1	@ 000f1dc6 0840
.org 0xf1dc8
	movs r1, #4	@ 000f1dc8 0421
.org 0xf1dca
	orrs r0, r1	@ 000f1dca 0843
.org 0xf1dcc
	strb r0, [r2, #0]	@ 000f1dcc 1070
.org 0xf1dce
	ldr r0, [r4, #84]	@ 000f1dce 606d
.org 0xf1dd0
	ldr r1, [r4, #88]	@ 000f1dd0 a16d
.org 0xf1dd2
	bl 0x8534	@ 000f1dd2 16f7affb
.org 0xf1dd6
	str r0, [r4, #88]	@ 000f1dd6 a065
.org 0xf1dd8
	ldrb r0, [r4, #17]	@ 000f1dd8 607c
.org 0xf1dda
	adds r0, #1	@ 000f1dda 0130
.org 0xf1ddc
	strb r0, [r4, #17]	@ 000f1ddc 6074
.org 0xf1dde
	adds r0, r4, #0	@ 000f1dde 201c
.org 0xf1de0
	bl 0x1cff0	@ 000f1de0 2bf706f9
.org 0xf1de4
	ldr r0, [r4, #24]	@ 000f1de4 a069
.org 0xf1de6
	ldrb r1, [r0, #9]	@ 000f1de6 417a
.org 0xf1de8
	movs r0, #1	@ 000f1de8 0120
.org 0xf1dea
	ands r0, r1	@ 000f1dea 0840
.org 0xf1dec
	cmp r0, #0	@ 000f1dec 0028
.org 0xf1dee
	beq.n 0xf1e1c	@ 000f1dee 15d0
.org 0xf1df0
	movs r0, #30	@ 000f1df0 1e20
.org 0xf1df2
	strb r0, [r4, #18]	@ 000f1df2 a074
.org 0xf1df4
	b.n 0xf1e16	@ 000f1df4 0fe0
.org 0xf1df6
	.byte 0x00	@ 000f1df6 data
.org 0xf1df7
	.byte 0x00	@ 000f1df7 data
.org 0xf1df8
	.byte 0x40,0xe2,0x02,0x02	@ 000f1df8 data
.org 0xf1dfc
	.byte 0x40,0xdc,0x02,0x02	@ 000f1dfc data
.org 0xf1e00
	.byte 0x18,0xa1,0x00,0x00	@ 000f1e00 data
.org 0xf1e04
	movs r1, #161	@ 000f1e04 a121
.org 0xf1e06
	lsls r1, r1, #8	@ 000f1e06 0902
.org 0xf1e08
	adds r0, r4, #0	@ 000f1e08 201c
.org 0xf1e0a
	movs r2, #1	@ 000f1e0a 0122
.org 0xf1e0c
	bl 0xed7f8	@ 000f1e0c fbf7f4fc
.org 0xf1e10
	lsls r0, r0, #16	@ 000f1e10 0004
.org 0xf1e12
	cmp r0, #0	@ 000f1e12 0028

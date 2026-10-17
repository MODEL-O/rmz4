@ FUN_080f1ec4  entry 0x080f1ec4  size 150
.thumb
.org 0xf1ec4
FUN_080f1ec4:
	push {r4, lr}	@ 000f1ec4 10b5
.org 0xf1ec6
	adds r4, r0, #0	@ 000f1ec6 041c
.org 0xf1ec8
	ldrb r0, [r4, #17]	@ 000f1ec8 607c
.org 0xf1eca
	cmp r0, #1	@ 000f1eca 0128
.org 0xf1ecc
	beq.n 0xf1f24	@ 000f1ecc 2ad0
.org 0xf1ece
	cmp r0, #1	@ 000f1ece 0128
.org 0xf1ed0
	bgt.n 0xf1ed8	@ 000f1ed0 02dc
.org 0xf1ed2
	cmp r0, #0	@ 000f1ed2 0028
.org 0xf1ed4
	beq.n 0xf1ede	@ 000f1ed4 03d0
.org 0xf1ed6
	b.n 0xf1f64	@ 000f1ed6 45e0
.org 0xf1ed8
	cmp r0, #2	@ 000f1ed8 0228
.org 0xf1eda
	beq.n 0xf1f4c	@ 000f1eda 37d0
.org 0xf1edc
	b.n 0xf1f64	@ 000f1edc 42e0
.org 0xf1ede
	ldr r0, [pc, #92]	@ 000f1ede 1748
.org 0xf1ee0
	movs r2, #170	@ 000f1ee0 aa22
.org 0xf1ee2
	lsls r2, r2, #1	@ 000f1ee2 5200
.org 0xf1ee4
	adds r0, r0, r2	@ 000f1ee4 8018
.org 0xf1ee6
	ldr r1, [pc, #88]	@ 000f1ee6 1649
.org 0xf1ee8
	strh r1, [r0, #0]	@ 000f1ee8 0180
.org 0xf1eea
	ldr r0, [pc, #88]	@ 000f1eea 1648
.org 0xf1eec
	adds r0, r0, r2	@ 000f1eec 8018
.org 0xf1eee
	movs r1, #7	@ 000f1eee 0721
.org 0xf1ef0
	strh r1, [r0, #0]	@ 000f1ef0 0180
.org 0xf1ef2
	ldr r1, [pc, #84]	@ 000f1ef2 1549
.org 0xf1ef4
	adds r0, r4, #0	@ 000f1ef4 201c
.org 0xf1ef6
	bl 0x1cf00	@ 000f1ef6 2bf703f8
.org 0xf1efa
	adds r2, r4, #0	@ 000f1efa 221c
.org 0xf1efc
	adds r2, #73	@ 000f1efc 4932
.org 0xf1efe
	ldrb r1, [r2, #0]	@ 000f1efe 1178
.org 0xf1f00
	movs r0, #13	@ 000f1f00 0d20
.org 0xf1f02
	negs r0, r0	@ 000f1f02 4042
.org 0xf1f04
	ands r0, r1	@ 000f1f04 0840
.org 0xf1f06
	movs r1, #4	@ 000f1f06 0421
.org 0xf1f08
	orrs r0, r1	@ 000f1f08 0843
.org 0xf1f0a
	strb r0, [r2, #0]	@ 000f1f0a 1070
.org 0xf1f0c
	adds r1, r4, #0	@ 000f1f0c 211c
.org 0xf1f0e
	adds r1, #37	@ 000f1f0e 2531
.org 0xf1f10
	movs r0, #29	@ 000f1f10 1d20
.org 0xf1f12
	strb r0, [r1, #0]	@ 000f1f12 0870
.org 0xf1f14
	ldr r0, [r4, #84]	@ 000f1f14 606d
.org 0xf1f16
	ldr r1, [r4, #88]	@ 000f1f16 a16d
.org 0xf1f18
	bl 0x8534	@ 000f1f18 16f70cfb
.org 0xf1f1c
	str r0, [r4, #88]	@ 000f1f1c a065
.org 0xf1f1e
	ldrb r0, [r4, #17]	@ 000f1f1e 607c
.org 0xf1f20
	adds r0, #1	@ 000f1f20 0130
.org 0xf1f22
	strb r0, [r4, #17]	@ 000f1f22 6074
.org 0xf1f24
	adds r0, r4, #0	@ 000f1f24 201c
.org 0xf1f26
	bl 0x1cff0	@ 000f1f26 2bf763f8
.org 0xf1f2a
	ldr r0, [r4, #24]	@ 000f1f2a a069
.org 0xf1f2c
	ldrb r1, [r0, #9]	@ 000f1f2c 417a
.org 0xf1f2e
	movs r0, #1	@ 000f1f2e 0120
.org 0xf1f30
	ands r0, r1	@ 000f1f30 0840
.org 0xf1f32
	cmp r0, #0	@ 000f1f32 0028
.org 0xf1f34
	beq.n 0xf1f64	@ 000f1f34 16d0
.org 0xf1f36
	movs r0, #30	@ 000f1f36 1e20
.org 0xf1f38
	strb r0, [r4, #18]	@ 000f1f38 a074
.org 0xf1f3a
	b.n 0xf1f5e	@ 000f1f3a 10e0
.org 0xf1f3c
	.byte 0x40,0xe2,0x02,0x02	@ 000f1f3c data
.org 0xf1f40
	.byte 0x5d,0x02,0x00,0x00	@ 000f1f40 data
.org 0xf1f44
	.byte 0x40,0xdc,0x02,0x02	@ 000f1f44 data
.org 0xf1f48
	.byte 0x01,0xaa,0x00,0x00	@ 000f1f48 data
.org 0xf1f4c
	movs r1, #170	@ 000f1f4c aa21
.org 0xf1f4e
	lsls r1, r1, #8	@ 000f1f4e 0902
.org 0xf1f50
	adds r0, r4, #0	@ 000f1f50 201c
.org 0xf1f52
	movs r2, #1	@ 000f1f52 0122
.org 0xf1f54
	bl 0xed7f8	@ 000f1f54 fbf750fc
.org 0xf1f58
	lsls r0, r0, #16	@ 000f1f58 0004

@ FUN_08114ce4  entry 0x08114ce4  size 594
.thumb
.org 0x114ce4
FUN_08114ce4:
	push {r4, r5, r6, r7, lr}	@ 00114ce4 f0b5
.org 0x114ce6
	mov r7, r8	@ 00114ce6 4746
.org 0x114ce8
	push {r7}	@ 00114ce8 80b4
.org 0x114cea
	adds r5, r0, #0	@ 00114cea 051c
.org 0x114cec
	ldrb r0, [r5, #3]	@ 00114cec e878
.org 0x114cee
	cmp r0, #34	@ 00114cee 2228
.org 0x114cf0
	bhi.n 0x114d8c	@ 00114cf0 4cd8
.org 0x114cf2
	lsls r0, r0, #2	@ 00114cf2 8000
.org 0x114cf4
	ldr r1, [pc, #4]	@ 00114cf4 0149
.org 0x114cf6
	adds r0, r0, r1	@ 00114cf6 4018
.org 0x114cf8
	ldr r0, [r0, #0]	@ 00114cf8 0068
.org 0x114cfa
	mov pc, r0	@ 00114cfa 8746
.org 0x114cfc
	.byte 0x00,0x4d,0x11,0x08	@ 00114cfc data
.org 0x114d00
	.byte 0x9e,0x4d,0x11,0x08	@ 00114d00 data
.org 0x114d04
	.byte 0xae,0x4d,0x11,0x08	@ 00114d04 data
.org 0x114d08
	.byte 0x20,0x50,0x11,0x08	@ 00114d08 data
.org 0x114d0c
	.byte 0x38,0x50,0x11,0x08	@ 00114d0c data
.org 0x114d10
	.byte 0x62,0x50,0x11,0x08	@ 00114d10 data
.org 0x114d14
	.byte 0xb4,0x50,0x11,0x08	@ 00114d14 data
.org 0x114d18
	.byte 0xfa,0x50,0x11,0x08	@ 00114d18 data
.org 0x114d1c
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d1c data
.org 0x114d20
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d20 data
.org 0x114d24
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d24 data
.org 0x114d28
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d28 data
.org 0x114d2c
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d2c data
.org 0x114d30
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d30 data
.org 0x114d34
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d34 data
.org 0x114d38
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d38 data
.org 0x114d3c
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d3c data
.org 0x114d40
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d40 data
.org 0x114d44
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d44 data
.org 0x114d48
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d48 data
.org 0x114d4c
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d4c data
.org 0x114d50
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d50 data
.org 0x114d54
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d54 data
.org 0x114d58
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d58 data
.org 0x114d5c
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d5c data
.org 0x114d60
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d60 data
.org 0x114d64
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d64 data
.org 0x114d68
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d68 data
.org 0x114d6c
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d6c data
.org 0x114d70
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d70 data
.org 0x114d74
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d74 data
.org 0x114d78
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d78 data
.org 0x114d7c
	.byte 0x8c,0x4d,0x11,0x08	@ 00114d7c data
.org 0x114d80
	.byte 0x10,0x51,0x11,0x08	@ 00114d80 data
.org 0x114d84
	.byte 0x4e,0x51,0x11,0x08	@ 00114d84 data
.org 0x114d88
	.byte 0x14,0x52,0x11,0x08	@ 00114d88 data
.org 0x114d8c
	ldr r0, [pc, #72]	@ 00114d8c 1248
.org 0x114d8e
	ldrh r0, [r0, #2]	@ 00114d8e 4088
.org 0x114d90
	cmp r0, #0	@ 00114d90 0028
.org 0x114d92
	beq.n 0x114d9a	@ 00114d92 02d0
.org 0x114d94
	cmp r0, #4	@ 00114d94 0428
.org 0x114d96
	beq.n 0x114d9a	@ 00114d96 00d0
.org 0x114d98
	b.n 0x115224	@ 00114d98 44e2
.org 0x114d9a
	movs r0, #0	@ 00114d9a 0020
.org 0x114d9c
	strb r0, [r5, #3]	@ 00114d9c e870
.org 0x114d9e
	movs r0, #40	@ 00114d9e 2820
.org 0x114da0
	bl 0x10e584	@ 00114da0 f9f7f0fb
.org 0x114da4
	movs r0, #0	@ 00114da4 0020
.org 0x114da6
	strh r0, [r5, #10]	@ 00114da6 6881
.org 0x114da8
	ldrb r0, [r5, #3]	@ 00114da8 e878
.org 0x114daa
	adds r0, #1	@ 00114daa 0130
.org 0x114dac
	strb r0, [r5, #3]	@ 00114dac e870
.org 0x114dae
	ldr r0, [pc, #40]	@ 00114dae 0a48
.org 0x114db0
	ldrh r0, [r0, #2]	@ 00114db0 4088
.org 0x114db2
	cmp r0, #0	@ 00114db2 0028
.org 0x114db4
	beq.n 0x114dbc	@ 00114db4 02d0
.org 0x114db6
	cmp r0, #4	@ 00114db6 0428
.org 0x114db8
	beq.n 0x114dbc	@ 00114db8 00d0
.org 0x114dba
	b.n 0x115224	@ 00114dba 33e2
.org 0x114dbc
	adds r0, r5, #0	@ 00114dbc 281c
.org 0x114dbe
	bl 0x117a68	@ 00114dbe 02f053fe
.org 0x114dc2
	lsls r0, r0, #16	@ 00114dc2 0004
.org 0x114dc4
	lsrs r1, r0, #16	@ 00114dc4 010c
.org 0x114dc6
	cmp r0, #0	@ 00114dc6 0028
.org 0x114dc8
	bne.n 0x114dcc	@ 00114dc8 00d1
.org 0x114dca
	b.n 0x115224	@ 00114dca 2be2
.org 0x114dcc
	lsls r0, r1, #16	@ 00114dcc 0804
.org 0x114dce
	asrs r1, r0, #16	@ 00114dce 0114
.org 0x114dd0
	cmp r1, #0	@ 00114dd0 0029
.org 0x114dd2
	ble.n 0x114ddc	@ 00114dd2 03dd
.org 0x114dd4
	movs r0, #3	@ 00114dd4 0320
.org 0x114dd6
	b.n 0x115222	@ 00114dd6 24e2
.org 0x114dd8
	.byte 0x88,0xf3,0x02,0x02	@ 00114dd8 data
.org 0x114ddc
	movs r0, #1	@ 00114ddc 0120
.org 0x114dde
	negs r0, r0	@ 00114dde 4042
.org 0x114de0
	cmp r1, r0	@ 00114de0 8142
.org 0x114de2
	beq.n 0x114de6	@ 00114de2 00d0
.org 0x114de4
	b.n 0x11501c	@ 00114de4 1ae1
.org 0x114de6
	ldr r2, [pc, #32]	@ 00114de6 084a
.org 0x114de8
	ldrb r1, [r2, #5]	@ 00114de8 5179
.org 0x114dea
	movs r3, #1	@ 00114dea 0123
.org 0x114dec
	adds r0, r3, #0	@ 00114dec 181c
.org 0x114dee
	ands r0, r1	@ 00114dee 0840
.org 0x114df0
	cmp r0, #0	@ 00114df0 0028
.org 0x114df2
	beq.n 0x114df6	@ 00114df2 00d0
.org 0x114df4
	b.n 0x114f14	@ 00114df4 8ee0
.org 0x114df6
	ldrb r1, [r2, #7]	@ 00114df6 d179
.org 0x114df8
	movs r0, #8	@ 00114df8 0820
.org 0x114dfa
	ands r0, r1	@ 00114dfa 0840
.org 0x114dfc
	cmp r0, #0	@ 00114dfc 0028
.org 0x114dfe
	beq.n 0x114e10	@ 00114dfe 07d0
.org 0x114e00
	ldr r0, [pc, #8]	@ 00114e00 0248
.org 0x114e02
	bl 0x10e5f0	@ 00114e02 f9f7f5fb
.org 0x114e06
	b.n 0x114efe	@ 00114e06 7ae0
.org 0x114e08
	.byte 0xb0,0xe8,0x02,0x02	@ 00114e08 data
.org 0x114e0c
	.byte 0x51,0x02,0x00,0x00	@ 00114e0c data
.org 0x114e10
	movs r7, #4	@ 00114e10 0427
.org 0x114e12
	adds r0, r7, #0	@ 00114e12 381c
.org 0x114e14
	ands r0, r1	@ 00114e14 0840
.org 0x114e16
	cmp r0, #0	@ 00114e16 0028
.org 0x114e18
	beq.n 0x114e28	@ 00114e18 06d0
.org 0x114e1a
	ldr r0, [pc, #8]	@ 00114e1a 0248
.org 0x114e1c
	bl 0x10e5f0	@ 00114e1c f9f7e8fb
.org 0x114e20
	b.n 0x114efe	@ 00114e20 6de0
.org 0x114e22
	.byte 0x00	@ 00114e22 data
.org 0x114e23
	.byte 0x00	@ 00114e23 data
.org 0x114e24
	.byte 0x4f,0x02,0x00,0x00	@ 00114e24 data
.org 0x114e28
	movs r6, #2	@ 00114e28 0226
.org 0x114e2a
	adds r0, r6, #0	@ 00114e2a 301c
.org 0x114e2c
	ands r0, r1	@ 00114e2c 0840
.org 0x114e2e
	cmp r0, #0	@ 00114e2e 0028
.org 0x114e30
	beq.n 0x114e40	@ 00114e30 06d0
.org 0x114e32
	ldr r0, [pc, #8]	@ 00114e32 0248
.org 0x114e34
	bl 0x10e5f0	@ 00114e34 f9f7dcfb
.org 0x114e38
	b.n 0x114efe	@ 00114e38 61e0
.org 0x114e3a
	.byte 0x00	@ 00114e3a data
.org 0x114e3b
	.byte 0x00	@ 00114e3b data
.org 0x114e3c
	.byte 0x4d,0x02,0x00,0x00	@ 00114e3c data
.org 0x114e40
	adds r0, r3, #0	@ 00114e40 181c
.org 0x114e42
	ands r0, r1	@ 00114e42 0840
.org 0x114e44
	cmp r0, #0	@ 00114e44 0028
.org 0x114e46
	bne.n 0x114e54	@ 00114e46 05d1
.org 0x114e48
	ldrb r1, [r2, #6]	@ 00114e48 9179
.org 0x114e4a
	movs r3, #128	@ 00114e4a 8023
.org 0x114e4c
	adds r0, r3, #0	@ 00114e4c 181c
.org 0x114e4e
	ands r0, r1	@ 00114e4e 0840
.org 0x114e50
	cmp r0, #0	@ 00114e50 0028
.org 0x114e52
	beq.n 0x114e60	@ 00114e52 05d0
.org 0x114e54
	ldr r0, [pc, #4]	@ 00114e54 0148
.org 0x114e56
	bl 0x10e5f0	@ 00114e56 f9f7cbfb
.org 0x114e5a
	b.n 0x114efe	@ 00114e5a 50e0
.org 0x114e5c
	.byte 0x49,0x02,0x00,0x00	@ 00114e5c data
.org 0x114e60
	movs r0, #64	@ 00114e60 4020
.org 0x114e62
	ands r0, r1	@ 00114e62 0840
.org 0x114e64
	cmp r0, #0	@ 00114e64 0028
.org 0x114e66
	beq.n 0x114e74	@ 00114e66 05d0
.org 0x114e68
	ldr r0, [pc, #4]	@ 00114e68 0148
.org 0x114e6a
	bl 0x10e5f0	@ 00114e6a f9f7c1fb
.org 0x114e6e
	b.n 0x114efe	@ 00114e6e 46e0
.org 0x114e70
	.byte 0x47,0x02,0x00,0x00	@ 00114e70 data
.org 0x114e74
	movs r4, #32	@ 00114e74 2024
.org 0x114e76
	adds r0, r4, #0	@ 00114e76 201c
.org 0x114e78
	ands r0, r1	@ 00114e78 0840
.org 0x114e7a
	cmp r0, #0	@ 00114e7a 0028
.org 0x114e7c
	bne.n 0x114e86	@ 00114e7c 03d1
.org 0x114e7e
	movs r0, #16	@ 00114e7e 1020
.org 0x114e80
	ands r0, r1	@ 00114e80 0840
.org 0x114e82
	cmp r0, #0	@ 00114e82 0028
.org 0x114e84
	beq.n 0x114e94	@ 00114e84 06d0
.org 0x114e86
	ldr r0, [pc, #8]	@ 00114e86 0248
.org 0x114e88
	bl 0x10e5f0	@ 00114e88 f9f7b2fb
.org 0x114e8c
	b.n 0x114efe	@ 00114e8c 37e0
.org 0x114e8e
	.byte 0x00	@ 00114e8e data
.org 0x114e8f
	.byte 0x00	@ 00114e8f data
.org 0x114e90
	.byte 0x43,0x02,0x00,0x00	@ 00114e90 data
.org 0x114e94
	movs r0, #8	@ 00114e94 0820
.org 0x114e96
	ands r0, r1	@ 00114e96 0840
.org 0x114e98
	cmp r0, #0	@ 00114e98 0028
.org 0x114e9a
	beq.n 0x114ea8	@ 00114e9a 05d0
.org 0x114e9c
	ldr r0, [pc, #4]	@ 00114e9c 0148
.org 0x114e9e
	bl 0x10e5f0	@ 00114e9e f9f7a7fb
.org 0x114ea2
	b.n 0x114efe	@ 00114ea2 2ce0
.org 0x114ea4
	.byte 0x41,0x02,0x00,0x00	@ 00114ea4 data
.org 0x114ea8
	adds r0, r7, #0	@ 00114ea8 381c
.org 0x114eaa
	ands r0, r1	@ 00114eaa 0840
.org 0x114eac
	cmp r0, #0	@ 00114eac 0028
.org 0x114eae
	beq.n 0x114ebc	@ 00114eae 05d0
.org 0x114eb0
	ldr r0, [pc, #4]	@ 00114eb0 0148
.org 0x114eb2
	bl 0x10e5f0	@ 00114eb2 f9f79dfb
.org 0x114eb6
	b.n 0x114efe	@ 00114eb6 22e0
.org 0x114eb8
	.byte 0x3f,0x02,0x00,0x00	@ 00114eb8 data
.org 0x114ebc
	adds r0, r6, #0	@ 00114ebc 301c
.org 0x114ebe
	ands r0, r1	@ 00114ebe 0840
.org 0x114ec0
	cmp r0, #0	@ 00114ec0 0028
.org 0x114ec2
	beq.n 0x114ecc	@ 00114ec2 03d0
.org 0x114ec4
	ldr r0, [pc, #0]	@ 00114ec4 0048
.org 0x114ec6
	b.n 0x114fdc	@ 00114ec6 89e0
.org 0x114ec8
	.byte 0x37,0x02,0x00,0x00	@ 00114ec8 data
.org 0x114ecc
	movs r0, #1	@ 00114ecc 0120
.org 0x114ece
	ands r0, r1	@ 00114ece 0840
.org 0x114ed0
	cmp r0, #0	@ 00114ed0 0028
.org 0x114ed2
	beq.n 0x114ee0	@ 00114ed2 05d0
.org 0x114ed4
	ldr r0, [pc, #4]	@ 00114ed4 0148
.org 0x114ed6
	bl 0x10e5f0	@ 00114ed6 f9f78bfb
.org 0x114eda
	b.n 0x114efe	@ 00114eda 10e0
.org 0x114edc
	.byte 0x35,0x02,0x00,0x00	@ 00114edc data
.org 0x114ee0
	ldrb r1, [r2, #5]	@ 00114ee0 5179
.org 0x114ee2
	adds r0, r3, #0	@ 00114ee2 181c
.org 0x114ee4
	ands r0, r1	@ 00114ee4 0840
.org 0x114ee6
	cmp r0, #0	@ 00114ee6 0028
.org 0x114ee8
	beq.n 0x114ef8	@ 00114ee8 06d0
.org 0x114eea
	ldr r0, [pc, #8]	@ 00114eea 0248
.org 0x114eec
	bl 0x10e5f0	@ 00114eec f9f780fb
.org 0x114ef0
	b.n 0x114efe	@ 00114ef0 05e0
.org 0x114ef2
	.byte 0x00	@ 00114ef2 data
.org 0x114ef3
	.byte 0x00	@ 00114ef3 data
.org 0x114ef4
	.byte 0x33,0x02,0x00,0x00	@ 00114ef4 data
.org 0x114ef8
	ldr r0, [pc, #16]	@ 00114ef8 0448
.org 0x114efa
	bl 0x10e5f0	@ 00114efa f9f779fb
.org 0x114efe
	ldr r2, [pc, #16]	@ 00114efe 044a
.org 0x114f00
	ldrb r1, [r2, #5]	@ 00114f00 5179
.org 0x114f02
	movs r0, #1	@ 00114f02 0120
.org 0x114f04
	orrs r0, r1	@ 00114f04 0843
.org 0x114f06
	strb r0, [r2, #5]	@ 00114f06 5071
.org 0x114f08
	b.n 0x115220	@ 00114f08 8ae1
.org 0x114f0a
	.byte 0x00	@ 00114f0a data
.org 0x114f0b
	.byte 0x00	@ 00114f0b data
.org 0x114f0c
	.byte 0x31,0x02,0x00,0x00	@ 00114f0c data
.org 0x114f10
	.byte 0xb0,0xe8,0x02,0x02	@ 00114f10 data
.org 0x114f14
	ldrb r1, [r2, #7]	@ 00114f14 d179
.org 0x114f16
	movs r0, #8	@ 00114f16 0820
.org 0x114f18
	mov r8, r0	@ 00114f18 8046
.org 0x114f1a
	ands r0, r1	@ 00114f1a 0840
.org 0x114f1c
	cmp r0, #0	@ 00114f1c 0028
.org 0x114f1e
	beq.n 0x114f2c	@ 00114f1e 05d0
.org 0x114f20
	ldr r0, [pc, #4]	@ 00114f20 0148
.org 0x114f22
	bl 0x10e5f0	@ 00114f22 f9f765fb
.org 0x114f26
	b.n 0x115220	@ 00114f26 7be1
.org 0x114f28
	.byte 0x52,0x02,0x00,0x00	@ 00114f28 data
.org 0x114f2c
	movs r0, #4	@ 00114f2c 0420
.org 0x114f2e
	mov ip, r0	@ 00114f2e 8446
.org 0x114f30
	ands r0, r1	@ 00114f30 0840
.org 0x114f32
	cmp r0, #0	@ 00114f32 0028
.org 0x114f34
	beq.n 0x114f40	@ 00114f34 04d0

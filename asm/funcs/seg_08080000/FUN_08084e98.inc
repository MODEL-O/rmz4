@ FUN_08084e98  entry 0x08084e98  size 338
.thumb
.org 0x84e98
FUN_08084e98:
	push {r4, r5, r6, lr}	@ 00084e98 70b5
.org 0x84e9a
	adds r6, r0, #0	@ 00084e9a 061c
.org 0x84e9c
	ldrb r0, [r6, #14]	@ 00084e9c b07b
.org 0x84e9e
	cmp r0, #0	@ 00084e9e 0028
.org 0x84ea0
	beq.n 0x84ea8	@ 00084ea0 02d0
.org 0x84ea2
	cmp r0, #1	@ 00084ea2 0128
.org 0x84ea4
	beq.n 0x84f64	@ 00084ea4 5ed0
.org 0x84ea6
	b.n 0x84ffc	@ 00084ea6 a9e0
.org 0x84ea8
	adds r0, r6, #0	@ 00084ea8 301c
.org 0x84eaa
	adds r0, #116	@ 00084eaa 7430
.org 0x84eac
	ldr r1, [pc, #32]	@ 00084eac 0849
.org 0x84eae
	bl 0x5784	@ 00084eae 80f769fc
.org 0x84eb2
	ldrb r0, [r6, #17]	@ 00084eb2 707c
.org 0x84eb4
	cmp r0, #1	@ 00084eb4 0128
.org 0x84eb6
	bhi.n 0x84f10	@ 00084eb6 2bd8
.org 0x84eb8
	ldr r1, [pc, #24]	@ 00084eb8 0649
.org 0x84eba
	adds r0, r6, #0	@ 00084eba 301c
.org 0x84ebc
	bl 0x1cf00	@ 00084ebc 98f720f8
.org 0x84ec0
	ldrb r2, [r6, #17]	@ 00084ec0 727c
.org 0x84ec2
	cmp r2, #0	@ 00084ec2 002a
.org 0x84ec4
	beq.n 0x84ed8	@ 00084ec4 08d0
.org 0x84ec6
	ldrb r1, [r6, #10]	@ 00084ec6 b17a
.org 0x84ec8
	movs r0, #16	@ 00084ec8 1020
.org 0x84eca
	orrs r0, r1	@ 00084eca 0843
.org 0x84ecc
	b.n 0x84ede	@ 00084ecc 07e0
.org 0x84ece
	.byte 0x00	@ 00084ece data
.org 0x84ecf
	.byte 0x00	@ 00084ecf data
.org 0x84ed0
	.byte 0x48,0xeb,0x85,0x08	@ 00084ed0 data
.org 0x84ed4
	.byte 0x13,0x19,0x00,0x00	@ 00084ed4 data
.org 0x84ed8
	ldrb r1, [r6, #10]	@ 00084ed8 b17a
.org 0x84eda
	movs r0, #239	@ 00084eda ef20
.org 0x84edc
	ands r0, r1	@ 00084edc 0840
.org 0x84ede
	strb r0, [r6, #10]	@ 00084ede b072
.org 0x84ee0
	movs r1, #1	@ 00084ee0 0121
.org 0x84ee2
	ands r1, r2	@ 00084ee2 1140
.org 0x84ee4
	adds r0, r6, #0	@ 00084ee4 301c
.org 0x84ee6
	adds r0, #76	@ 00084ee6 4c30
.org 0x84ee8
	movs r3, #0	@ 00084ee8 0023
.org 0x84eea
	strb r1, [r0, #0]	@ 00084eea 0170
.org 0x84eec
	adds r4, r6, #0	@ 00084eec 341c
.org 0x84eee
	adds r4, #74	@ 00084eee 4a34
.org 0x84ef0
	lsls r1, r1, #4	@ 00084ef0 0901
.org 0x84ef2
	ldrb r2, [r4, #0]	@ 00084ef2 2278
.org 0x84ef4
	movs r0, #17	@ 00084ef4 1120
.org 0x84ef6
	negs r0, r0	@ 00084ef6 4042
.org 0x84ef8
	ands r0, r2	@ 00084ef8 1040
.org 0x84efa
	orrs r0, r1	@ 00084efa 0843
.org 0x84efc
	strb r0, [r4, #0]	@ 00084efc 2070
.org 0x84efe
	ldrb r0, [r6, #17]	@ 00084efe 707c
.org 0x84f00
	lsls r0, r0, #10	@ 00084f00 8002
.org 0x84f02
	ldr r1, [pc, #8]	@ 00084f02 0249
.org 0x84f04
	adds r0, r0, r1	@ 00084f04 4018
.org 0x84f06
	str r0, [r6, #92]	@ 00084f06 f065
.org 0x84f08
	str r3, [r6, #96]	@ 00084f08 3366
.org 0x84f0a
	b.n 0x84f5e	@ 00084f0a 28e0
.org 0x84f0c
	.byte 0x00,0xfe,0xff,0xff	@ 00084f0c data
.org 0x84f10
	movs r2, #1	@ 00084f10 0122
.org 0x84f12
	ands r2, r0	@ 00084f12 0240
.org 0x84f14
	cmp r2, #0	@ 00084f14 002a
.org 0x84f16
	beq.n 0x84f20	@ 00084f16 03d0
.org 0x84f18
	ldrb r1, [r6, #10]	@ 00084f18 b17a
.org 0x84f1a
	movs r0, #32	@ 00084f1a 2020
.org 0x84f1c
	orrs r0, r1	@ 00084f1c 0843
.org 0x84f1e
	b.n 0x84f26	@ 00084f1e 02e0
.org 0x84f20
	ldrb r1, [r6, #10]	@ 00084f20 b17a
.org 0x84f22
	movs r0, #223	@ 00084f22 df20
.org 0x84f24
	ands r0, r1	@ 00084f24 0840
.org 0x84f26
	strb r0, [r6, #10]	@ 00084f26 b072
.org 0x84f28
	movs r4, #1	@ 00084f28 0124
.org 0x84f2a
	adds r1, r4, #0	@ 00084f2a 211c
.org 0x84f2c
	ands r1, r2	@ 00084f2c 1140
.org 0x84f2e
	adds r0, r6, #0	@ 00084f2e 301c
.org 0x84f30
	adds r0, #77	@ 00084f30 4d30
.org 0x84f32
	movs r5, #0	@ 00084f32 0025
.org 0x84f34
	strb r1, [r0, #0]	@ 00084f34 0170
.org 0x84f36
	adds r3, r6, #0	@ 00084f36 331c
.org 0x84f38
	adds r3, #74	@ 00084f38 4a33
.org 0x84f3a
	lsls r1, r1, #5	@ 00084f3a 4901
.org 0x84f3c
	ldrb r2, [r3, #0]	@ 00084f3c 1a78
.org 0x84f3e
	movs r0, #33	@ 00084f3e 2120
.org 0x84f40
	negs r0, r0	@ 00084f40 4042
.org 0x84f42
	ands r0, r2	@ 00084f42 1040
.org 0x84f44
	orrs r0, r1	@ 00084f44 0843
.org 0x84f46
	strb r0, [r3, #0]	@ 00084f46 1870
.org 0x84f48
	ldr r1, [pc, #100]	@ 00084f48 1949
.org 0x84f4a
	adds r0, r6, #0	@ 00084f4a 301c
.org 0x84f4c
	bl 0x1cf00	@ 00084f4c 97f7d8ff
.org 0x84f50
	str r5, [r6, #92]	@ 00084f50 f565
.org 0x84f52
	ldrb r0, [r6, #17]	@ 00084f52 707c
.org 0x84f54
	ands r4, r0	@ 00084f54 0440
.org 0x84f56
	lsls r4, r4, #10	@ 00084f56 a402
.org 0x84f58
	ldr r0, [pc, #88]	@ 00084f58 1648
.org 0x84f5a
	adds r4, r4, r0	@ 00084f5a 2418
.org 0x84f5c
	str r4, [r6, #96]	@ 00084f5c 3466
.org 0x84f5e
	ldrb r0, [r6, #14]	@ 00084f5e b07b
.org 0x84f60
	adds r0, #1	@ 00084f60 0130
.org 0x84f62
	strb r0, [r6, #14]	@ 00084f62 b073
.org 0x84f64
	ldr r0, [r6, #84]	@ 00084f64 706d
.org 0x84f66
	ldr r1, [r6, #92]	@ 00084f66 f16d
.org 0x84f68
	adds r0, r0, r1	@ 00084f68 4018
.org 0x84f6a
	str r0, [r6, #84]	@ 00084f6a 7065
.org 0x84f6c
	ldr r0, [r6, #88]	@ 00084f6c b06d
.org 0x84f6e
	ldr r1, [r6, #96]	@ 00084f6e 316e
.org 0x84f70
	adds r0, r0, r1	@ 00084f70 4018
.org 0x84f72
	str r0, [r6, #88]	@ 00084f72 b065
.org 0x84f74
	adds r0, r6, #0	@ 00084f74 301c
.org 0x84f76
	bl 0x1cff0	@ 00084f76 98f73bf8
.org 0x84f7a
	adds r5, r6, #0	@ 00084f7a 351c
.org 0x84f7c
	adds r5, #140	@ 00084f7c 8c35
.org 0x84f7e
	ldr r4, [r5, #0]	@ 00084f7e 2c68
.org 0x84f80
	movs r0, #4	@ 00084f80 0420
.org 0x84f82
	ands r4, r0	@ 00084f82 0440
.org 0x84f84
	cmp r4, #0	@ 00084f84 002c
.org 0x84f86
	beq.n 0x84fb8	@ 00084f86 17d0
.org 0x84f88
	adds r1, r6, #0	@ 00084f88 311c
.org 0x84f8a
	adds r1, #84	@ 00084f8a 5431
.org 0x84f8c
	movs r0, #2	@ 00084f8c 0220
.org 0x84f8e
	bl 0xd0c88	@ 00084f8e 4bf07bfe
.org 0x84f92
	ldrb r1, [r6, #10]	@ 00084f92 b17a
.org 0x84f94
	movs r0, #254	@ 00084f94 fe20
.org 0x84f96
	ands r0, r1	@ 00084f96 0840
.org 0x84f98
	movs r2, #0	@ 00084f98 0022
.org 0x84f9a
	movs r1, #253	@ 00084f9a fd21
.org 0x84f9c
	ands r0, r1	@ 00084f9c 0840
.org 0x84f9e
	strb r0, [r6, #10]	@ 00084f9e b072
.org 0x84fa0
	str r2, [r5, #0]	@ 00084fa0 2a60
.org 0x84fa2
	adds r0, r6, #0	@ 00084fa2 301c
.org 0x84fa4
	adds r0, #144	@ 00084fa4 9030
.org 0x84fa6
	str r2, [r0, #0]	@ 00084fa6 0260
.org 0x84fa8
	adds r0, #4	@ 00084fa8 0430
.org 0x84faa
	strb r2, [r0, #0]	@ 00084faa 0270
.org 0x84fac
	b.n 0x84fe2	@ 00084fac 19e0
.org 0x84fae
	.byte 0x00	@ 00084fae data
.org 0x84faf
	.byte 0x00	@ 00084faf data
.org 0x84fb0
	.byte 0x12,0x19,0x00,0x00	@ 00084fb0 data
.org 0x84fb4
	.byte 0x00,0xfe,0xff,0xff	@ 00084fb4 data
.org 0x84fb8
	ldr r0, [pc, #72]	@ 00084fb8 1248
.org 0x84fba
	adds r1, r6, #0	@ 00084fba 311c
.org 0x84fbc
	adds r1, #84	@ 00084fbc 5431
.org 0x84fbe
	bl 0x1fb14	@ 00084fbe 9af7a9fd
.org 0x84fc2
	movs r1, #128	@ 00084fc2 8021
.org 0x84fc4
	lsls r1, r1, #5	@ 00084fc4 4901
.org 0x84fc6
	cmp r0, r1	@ 00084fc6 8842
.org 0x84fc8
	bls.n 0x84ffc	@ 00084fc8 18d9
.org 0x84fca
	ldrb r1, [r6, #10]	@ 00084fca b17a
.org 0x84fcc
	movs r0, #254	@ 00084fcc fe20
.org 0x84fce
	ands r0, r1	@ 00084fce 0840
.org 0x84fd0
	movs r1, #253	@ 00084fd0 fd21
.org 0x84fd2
	ands r0, r1	@ 00084fd2 0840
.org 0x84fd4
	strb r0, [r6, #10]	@ 00084fd4 b072
.org 0x84fd6
	str r4, [r5, #0]	@ 00084fd6 2c60
.org 0x84fd8
	adds r0, r6, #0	@ 00084fd8 301c
.org 0x84fda
	adds r0, #144	@ 00084fda 9030
.org 0x84fdc
	str r4, [r0, #0]	@ 00084fdc 0460
.org 0x84fde
	adds r0, #4	@ 00084fde 0430
.org 0x84fe0
	strb r4, [r0, #0]	@ 00084fe0 0470
.org 0x84fe2
	ldrb r1, [r6, #10]	@ 00084fe2 b17a
.org 0x84fe4
	movs r0, #251	@ 00084fe4 fb20
.org 0x84fe6
	ands r0, r1	@ 00084fe6 0840
.org 0x84fe8
	strb r0, [r6, #10]	@ 00084fe8 b072

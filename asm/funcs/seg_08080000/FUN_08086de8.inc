@ FUN_08086de8  entry 0x08086de8  size 412
.thumb
.org 0x86de8
FUN_08086de8:
	push {r4, r5, r6, r7, lr}	@ 00086de8 f0b5
.org 0x86dea
	mov r7, sl	@ 00086dea 5746
.org 0x86dec
	mov r6, r9	@ 00086dec 4e46
.org 0x86dee
	mov r5, r8	@ 00086dee 4546
.org 0x86df0
	push {r5, r6, r7}	@ 00086df0 e0b4
.org 0x86df2
	adds r4, r0, #0	@ 00086df2 041c
.org 0x86df4
	movs r6, #0	@ 00086df4 0026
.org 0x86df6
	ldr r0, [pc, #96]	@ 00086df6 1848
.org 0x86df8
	ldr r0, [r0, #0]	@ 00086df8 0068
.org 0x86dfa
	ldr r1, [r4, #84]	@ 00086dfa 616d
.org 0x86dfc
	ldr r0, [r0, #84]	@ 00086dfc 406d
.org 0x86dfe
	cmp r1, r0	@ 00086dfe 8142
.org 0x86e00
	bge.n 0x86e04	@ 00086e00 00da
.org 0x86e02
	movs r6, #1	@ 00086e02 0126
.org 0x86e04
	ldrb r0, [r4, #16]	@ 00086e04 207c
.org 0x86e06
	mov r9, r0	@ 00086e06 8146
.org 0x86e08
	ldr r1, [pc, #80]	@ 00086e08 1449
.org 0x86e0a
	ldrb r0, [r4, #9]	@ 00086e0a 607a
.org 0x86e0c
	lsls r0, r0, #2	@ 00086e0c 8000
.org 0x86e0e
	adds r0, r0, r1	@ 00086e0e 4018
.org 0x86e10
	movs r3, #1	@ 00086e10 0123
.org 0x86e12
	str r3, [r4, #12]	@ 00086e12 e360
.org 0x86e14
	ldr r0, [r0, #0]	@ 00086e14 0068
.org 0x86e16
	ldr r0, [r0, #4]	@ 00086e16 4068
.org 0x86e18
	str r0, [r4, #20]	@ 00086e18 6061
.org 0x86e1a
	ldrb r1, [r4, #10]	@ 00086e1a a17a
.org 0x86e1c
	movs r0, #1	@ 00086e1c 0120
.org 0x86e1e
	movs r5, #0	@ 00086e1e 0025
.org 0x86e20
	movs r2, #0	@ 00086e20 0022
.org 0x86e22
	orrs r0, r1	@ 00086e22 0843
.org 0x86e24
	movs r1, #2	@ 00086e24 0221
.org 0x86e26
	orrs r0, r1	@ 00086e26 0843
.org 0x86e28
	strb r0, [r4, #10]	@ 00086e28 a072
.org 0x86e2a
	adds r0, r4, #0	@ 00086e2a 201c
.org 0x86e2c
	adds r0, #181	@ 00086e2c b530
.org 0x86e2e
	strb r3, [r0, #0]	@ 00086e2e 0370
.org 0x86e30
	adds r0, #1	@ 00086e30 0130
.org 0x86e32
	strb r2, [r0, #0]	@ 00086e32 0270
.org 0x86e34
	str r2, [r4, #44]	@ 00086e34 e262
.org 0x86e36
	adds r0, #1	@ 00086e36 0130
.org 0x86e38
	strb r2, [r0, #0]	@ 00086e38 0270
.org 0x86e3a
	adds r0, #1	@ 00086e3a 0130
.org 0x86e3c
	strb r2, [r0, #0]	@ 00086e3c 0270
.org 0x86e3e
	adds r0, #1	@ 00086e3e 0130
.org 0x86e40
	strb r2, [r0, #0]	@ 00086e40 0270
.org 0x86e42
	adds r0, r4, #0	@ 00086e42 201c
.org 0x86e44
	bl 0x1cc9c	@ 00086e44 95f72aff
.org 0x86e48
	adds r2, r6, #0	@ 00086e48 321c
.org 0x86e4a
	cmp r2, #0	@ 00086e4a 002a
.org 0x86e4c
	beq.n 0x86e60	@ 00086e4c 08d0
.org 0x86e4e
	ldrb r0, [r4, #10]	@ 00086e4e a07a
.org 0x86e50
	movs r1, #16	@ 00086e50 1021
.org 0x86e52
	orrs r0, r1	@ 00086e52 0843
.org 0x86e54
	b.n 0x86e66	@ 00086e54 07e0
.org 0x86e56
	.byte 0x00	@ 00086e56 data
.org 0x86e57
	.byte 0x00	@ 00086e57 data
.org 0x86e58
	.byte 0xf0,0xdb,0x02,0x02	@ 00086e58 data
.org 0x86e5c
	.byte 0x40,0xdb,0x85,0x08	@ 00086e5c data
.org 0x86e60
	ldrb r1, [r4, #10]	@ 00086e60 a17a
.org 0x86e62
	movs r0, #239	@ 00086e62 ef20
.org 0x86e64
	ands r0, r1	@ 00086e64 0840
.org 0x86e66
	strb r0, [r4, #10]	@ 00086e66 a072
.org 0x86e68
	movs r1, #1	@ 00086e68 0121
.org 0x86e6a
	mov sl, r1	@ 00086e6a 8a46
.org 0x86e6c
	ands r1, r2	@ 00086e6c 1140
.org 0x86e6e
	adds r0, r4, #0	@ 00086e6e 201c
.org 0x86e70
	adds r0, #76	@ 00086e70 4c30
.org 0x86e72
	movs r2, #0	@ 00086e72 0022
.org 0x86e74
	mov r8, r2	@ 00086e74 9046
.org 0x86e76
	strb r1, [r0, #0]	@ 00086e76 0170
.org 0x86e78
	adds r6, r4, #0	@ 00086e78 261c
.org 0x86e7a
	adds r6, #74	@ 00086e7a 4a36
.org 0x86e7c
	lsls r1, r1, #4	@ 00086e7c 0901
.org 0x86e7e
	ldrb r2, [r6, #0]	@ 00086e7e 3278
.org 0x86e80
	movs r0, #17	@ 00086e80 1120
.org 0x86e82
	negs r0, r0	@ 00086e82 4042
.org 0x86e84
	ands r0, r2	@ 00086e84 1040
.org 0x86e86
	orrs r0, r1	@ 00086e86 0843
.org 0x86e88
	strb r0, [r6, #0]	@ 00086e88 3070
.org 0x86e8a
	ldrb r0, [r4, #10]	@ 00086e8a a07a
.org 0x86e8c
	movs r1, #4	@ 00086e8c 0421
.org 0x86e8e
	orrs r0, r1	@ 00086e8e 0843
.org 0x86e90
	strb r0, [r4, #10]	@ 00086e90 a072
.org 0x86e92
	adds r5, r4, #0	@ 00086e92 251c
.org 0x86e94
	adds r5, #116	@ 00086e94 7435
.org 0x86e96
	ldr r7, [pc, #32]	@ 00086e96 084f
.org 0x86e98
	adds r2, r4, #0	@ 00086e98 221c
.org 0x86e9a
	adds r2, #84	@ 00086e9a 5432
.org 0x86e9c
	adds r0, r5, #0	@ 00086e9c 281c
.org 0x86e9e
	adds r1, r7, #0	@ 00086e9e 391c
.org 0x86ea0
	movs r3, #10	@ 00086ea0 0a23
.org 0x86ea2
	bl 0x5760	@ 00086ea2 7ef75dfc
.org 0x86ea6
	str r4, [r5, #44]	@ 00086ea6 ec62
.org 0x86ea8
	ldr r0, [pc, #16]	@ 00086ea8 0448
.org 0x86eaa
	str r0, [r5, #36]	@ 00086eaa 6862
.org 0x86eac
	mov r0, r9	@ 00086eac 4846
.org 0x86eae
	cmp r0, #0	@ 00086eae 0028
.org 0x86eb0
	beq.n 0x86ec0	@ 00086eb0 06d0
.org 0x86eb2
	cmp r0, #1	@ 00086eb2 0128
.org 0x86eb4
	beq.n 0x86eee	@ 00086eb4 1bd0
.org 0x86eb6
	b.n 0x86f38	@ 00086eb6 3fe0
.org 0x86eb8
	.byte 0xd4,0xef,0x85,0x08	@ 00086eb8 data
.org 0x86ebc
	.byte 0xa5,0x8b,0x08,0x08	@ 00086ebc data
.org 0x86ec0
	ldr r0, [r4, #84]	@ 00086ec0 606d
.org 0x86ec2
	ldr r1, [r4, #88]	@ 00086ec2 a16d
.org 0x86ec4
	bl 0x8534	@ 00086ec4 81f736fb
.org 0x86ec8
	str r0, [r4, #88]	@ 00086ec8 a065
.org 0x86eca
	mov r1, sl	@ 00086eca 5146
.org 0x86ecc
	strb r1, [r4, #13]	@ 00086ecc 6173
.org 0x86ece
	mov r2, r8	@ 00086ece 4246
.org 0x86ed0
	strb r2, [r4, #14]	@ 00086ed0 a273
.org 0x86ed2
	strb r2, [r4, #15]	@ 00086ed2 e273
.org 0x86ed4
	adds r0, r5, #0	@ 00086ed4 281c
.org 0x86ed6
	adds r1, r7, #0	@ 00086ed6 391c
.org 0x86ed8
	bl 0x5784	@ 00086ed8 7ef754fc
.org 0x86edc
	movs r1, #232	@ 00086edc e821
.org 0x86ede
	lsls r1, r1, #5	@ 00086ede 4901
.org 0x86ee0
	adds r0, r4, #0	@ 00086ee0 201c
.org 0x86ee2
	bl 0x1cf00	@ 00086ee2 96f70df8
.org 0x86ee6
	adds r0, r4, #0	@ 00086ee6 201c
.org 0x86ee8
	bl 0x1cff0	@ 00086ee8 96f782f8
.org 0x86eec
	b.n 0x86f38	@ 00086eec 24e0
.org 0x86eee
	ldr r0, [r4, #84]	@ 00086eee 606d
.org 0x86ef0
	ldr r1, [r4, #88]	@ 00086ef0 a16d
.org 0x86ef2
	bl 0x8748	@ 00086ef2 81f729fc
.org 0x86ef6
	str r0, [r4, #88]	@ 00086ef6 a065
.org 0x86ef8
	movs r0, #2	@ 00086ef8 0220
.org 0x86efa
	strb r0, [r4, #13]	@ 00086efa 6073
.org 0x86efc
	mov r0, r8	@ 00086efc 4046
.org 0x86efe
	strb r0, [r4, #14]	@ 00086efe a073
.org 0x86f00
	strb r0, [r4, #15]	@ 00086f00 e073
.org 0x86f02
	adds r0, r5, #0	@ 00086f02 281c
.org 0x86f04
	adds r1, r7, #0	@ 00086f04 391c
.org 0x86f06
	bl 0x5784	@ 00086f06 7ef73dfc
.org 0x86f0a
	movs r1, #232	@ 00086f0a e821
.org 0x86f0c
	lsls r1, r1, #5	@ 00086f0c 4901
.org 0x86f0e
	adds r0, r4, #0	@ 00086f0e 201c
.org 0x86f10
	bl 0x1cf00	@ 00086f10 95f7f6ff
.org 0x86f14
	ldrb r0, [r4, #10]	@ 00086f14 a07a
.org 0x86f16
	movs r1, #32	@ 00086f16 2021
.org 0x86f18
	orrs r0, r1	@ 00086f18 0843
.org 0x86f1a
	strb r0, [r4, #10]	@ 00086f1a a072
.org 0x86f1c
	adds r0, r4, #0	@ 00086f1c 201c
.org 0x86f1e
	adds r0, #77	@ 00086f1e 4d30
.org 0x86f20
	mov r1, r9	@ 00086f20 4946
.org 0x86f22
	strb r1, [r0, #0]	@ 00086f22 0170
.org 0x86f24
	movs r2, #32	@ 00086f24 2022
.org 0x86f26
	ldrb r1, [r6, #0]	@ 00086f26 3178
.org 0x86f28
	movs r0, #33	@ 00086f28 2120
.org 0x86f2a
	negs r0, r0	@ 00086f2a 4042
.org 0x86f2c
	ands r0, r1	@ 00086f2c 0840
.org 0x86f2e
	orrs r0, r2	@ 00086f2e 1043
.org 0x86f30
	strb r0, [r6, #0]	@ 00086f30 3070
.org 0x86f32
	adds r0, r4, #0	@ 00086f32 201c
.org 0x86f34
	bl 0x1cff0	@ 00086f34 96f75cf8
.org 0x86f38
	ldr r0, [r4, #84]	@ 00086f38 606d
.org 0x86f3a
	ldr r2, [pc, #32]	@ 00086f3a 084a
.org 0x86f3c
	adds r5, r0, r2	@ 00086f3c 8518
.org 0x86f3e
	ldr r6, [r4, #88]	@ 00086f3e a66d
.org 0x86f40
	adds r0, r5, #0	@ 00086f40 281c
.org 0x86f42
	adds r1, r6, #0	@ 00086f42 311c
.org 0x86f44
	bl 0x7c7c	@ 00086f44 80f79afe
.org 0x86f48
	lsls r0, r0, #16	@ 00086f48 0004
.org 0x86f4a
	cmp r0, #0	@ 00086f4a 0028
.org 0x86f4c
	beq.n 0x86f60	@ 00086f4c 08d0
.org 0x86f4e
	adds r0, r5, #0	@ 00086f4e 281c
.org 0x86f50
	adds r1, r6, #0	@ 00086f50 311c
.org 0x86f52
	bl 0x8988	@ 00086f52 81f719fd
.org 0x86f56
	movs r1, #128	@ 00086f56 8021
.org 0x86f58
	lsls r1, r1, #4	@ 00086f58 0901
.org 0x86f5a
	b.n 0x86f82	@ 00086f5a 12e0
.org 0x86f5c
	.byte 0x00,0xf8,0xff,0xff	@ 00086f5c data
.org 0x86f60
	ldr r0, [r4, #84]	@ 00086f60 606d
.org 0x86f62
	movs r2, #128	@ 00086f62 8022
.org 0x86f64
	lsls r2, r2, #4	@ 00086f64 1201
.org 0x86f66
	adds r5, r0, r2	@ 00086f66 8518
.org 0x86f68
	ldr r6, [r4, #88]	@ 00086f68 a66d
.org 0x86f6a
	adds r0, r5, #0	@ 00086f6a 281c
.org 0x86f6c
	adds r1, r6, #0	@ 00086f6c 311c
.org 0x86f6e
	bl 0x7c7c	@ 00086f6e 80f785fe
.org 0x86f72
	lsls r0, r0, #16	@ 00086f72 0004
.org 0x86f74
	cmp r0, #0	@ 00086f74 0028
.org 0x86f76
	beq.n 0x86f86	@ 00086f76 06d0
.org 0x86f78
	adds r0, r5, #0	@ 00086f78 281c
.org 0x86f7a
	adds r1, r6, #0	@ 00086f7a 311c
.org 0x86f7c
	bl 0x8868	@ 00086f7c 81f774fc
.org 0x86f80
	ldr r1, [pc, #24]	@ 00086f80 0649
.org 0x86f82
	adds r0, r0, r1	@ 00086f82 4018

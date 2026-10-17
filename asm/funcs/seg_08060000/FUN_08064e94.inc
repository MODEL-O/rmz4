@ FUN_08064e94  entry 0x08064e94  size 428
.thumb
.org 0x64e94
FUN_08064e94:
	push {r4, r5, r6, lr}	@ 00064e94 70b5
.org 0x64e96
	adds r6, r0, #0	@ 00064e96 061c
.org 0x64e98
	ldrb r4, [r6, #15]	@ 00064e98 f47b
.org 0x64e9a
	cmp r4, #0	@ 00064e9a 002c
.org 0x64e9c
	beq.n 0x64ea0	@ 00064e9c 00d0
.org 0x64e9e
	b.n 0x64fd6	@ 00064e9e 9ae0
.org 0x64ea0
	ldr r0, [pc, #244]	@ 00064ea0 3d48
.org 0x64ea2
	bl 0x2b10	@ 00064ea2 9df735fe
.org 0x64ea6
	adds r0, r6, #0	@ 00064ea6 301c
.org 0x64ea8
	adds r0, #196	@ 00064ea8 c430
.org 0x64eaa
	ldr r0, [r0, #0]	@ 00064eaa 0068
.org 0x64eac
	cmp r0, #0	@ 00064eac 0028
.org 0x64eae
	beq.n 0x64eb8	@ 00064eae 03d0
.org 0x64eb0
	adds r1, r0, #0	@ 00064eb0 011c
.org 0x64eb2
	adds r1, #181	@ 00064eb2 b531
.org 0x64eb4
	movs r0, #1	@ 00064eb4 0120
.org 0x64eb6
	strb r0, [r1, #0]	@ 00064eb6 0870
.org 0x64eb8
	adds r2, r6, #0	@ 00064eb8 321c
.org 0x64eba
	adds r2, #188	@ 00064eba bc32
.org 0x64ebc
	ldr r1, [r2, #0]	@ 00064ebc 1168
.org 0x64ebe
	cmp r1, #0	@ 00064ebe 0029
.org 0x64ec0
	beq.n 0x64eca	@ 00064ec0 03d0
.org 0x64ec2
	adds r1, #181	@ 00064ec2 b531
.org 0x64ec4
	movs r0, #1	@ 00064ec4 0120
.org 0x64ec6
	strb r0, [r1, #0]	@ 00064ec6 0870
.org 0x64ec8
	str r4, [r2, #0]	@ 00064ec8 1460
.org 0x64eca
	adds r3, r6, #0	@ 00064eca 331c
.org 0x64ecc
	adds r3, #200	@ 00064ecc c833
.org 0x64ece
	ldr r2, [r3, #0]	@ 00064ece 1a68
.org 0x64ed0
	cmp r2, #0	@ 00064ed0 002a
.org 0x64ed2
	beq.n 0x64f0a	@ 00064ed2 1ad0
.org 0x64ed4
	ldrb r1, [r2, #10]	@ 00064ed4 917a
.org 0x64ed6
	movs r0, #254	@ 00064ed6 fe20
.org 0x64ed8
	ands r0, r1	@ 00064ed8 0840
.org 0x64eda
	movs r1, #253	@ 00064eda fd21
.org 0x64edc
	ands r0, r1	@ 00064edc 0840
.org 0x64ede
	strb r0, [r2, #10]	@ 00064ede 9072
.org 0x64ee0
	adds r0, r2, #0	@ 00064ee0 101c
.org 0x64ee2
	adds r0, #140	@ 00064ee2 8c30
.org 0x64ee4
	str r4, [r0, #0]	@ 00064ee4 0460
.org 0x64ee6
	adds r0, #4	@ 00064ee6 0430
.org 0x64ee8
	str r4, [r0, #0]	@ 00064ee8 0460
.org 0x64eea
	adds r0, #4	@ 00064eea 0430
.org 0x64eec
	strb r4, [r0, #0]	@ 00064eec 0470
.org 0x64eee
	ldrb r1, [r2, #10]	@ 00064eee 917a
.org 0x64ef0
	movs r0, #251	@ 00064ef0 fb20
.org 0x64ef2
	ands r0, r1	@ 00064ef2 0840
.org 0x64ef4
	strb r0, [r2, #10]	@ 00064ef4 9072
.org 0x64ef6
	ldr r1, [pc, #164]	@ 00064ef6 2949
.org 0x64ef8
	ldrb r0, [r2, #9]	@ 00064ef8 507a
.org 0x64efa
	lsls r0, r0, #2	@ 00064efa 8000
.org 0x64efc
	adds r0, r0, r1	@ 00064efc 4018
.org 0x64efe
	movs r1, #3	@ 00064efe 0321
.org 0x64f00
	str r1, [r2, #12]	@ 00064f00 d160
.org 0x64f02
	ldr r0, [r0, #0]	@ 00064f02 0068
.org 0x64f04
	ldr r0, [r0, #12]	@ 00064f04 c068
.org 0x64f06
	str r0, [r2, #20]	@ 00064f06 5061
.org 0x64f08
	str r4, [r3, #0]	@ 00064f08 1c60
.org 0x64f0a
	adds r3, r6, #0	@ 00064f0a 331c
.org 0x64f0c
	adds r3, #216	@ 00064f0c d833
.org 0x64f0e
	ldr r2, [r3, #0]	@ 00064f0e 1a68
.org 0x64f10
	cmp r2, #0	@ 00064f10 002a
.org 0x64f12
	beq.n 0x64f4a	@ 00064f12 1ad0
.org 0x64f14
	ldrb r1, [r2, #10]	@ 00064f14 917a
.org 0x64f16
	movs r0, #254	@ 00064f16 fe20
.org 0x64f18
	ands r0, r1	@ 00064f18 0840
.org 0x64f1a
	movs r1, #253	@ 00064f1a fd21
.org 0x64f1c
	ands r0, r1	@ 00064f1c 0840
.org 0x64f1e
	strb r0, [r2, #10]	@ 00064f1e 9072
.org 0x64f20
	adds r0, r2, #0	@ 00064f20 101c
.org 0x64f22
	adds r0, #140	@ 00064f22 8c30
.org 0x64f24
	str r4, [r0, #0]	@ 00064f24 0460
.org 0x64f26
	adds r0, #4	@ 00064f26 0430
.org 0x64f28
	str r4, [r0, #0]	@ 00064f28 0460
.org 0x64f2a
	adds r0, #4	@ 00064f2a 0430
.org 0x64f2c
	strb r4, [r0, #0]	@ 00064f2c 0470
.org 0x64f2e
	ldrb r1, [r2, #10]	@ 00064f2e 917a
.org 0x64f30
	movs r0, #251	@ 00064f30 fb20
.org 0x64f32
	ands r0, r1	@ 00064f32 0840
.org 0x64f34
	strb r0, [r2, #10]	@ 00064f34 9072
.org 0x64f36
	ldr r1, [pc, #104]	@ 00064f36 1a49
.org 0x64f38
	ldrb r0, [r2, #9]	@ 00064f38 507a
.org 0x64f3a
	lsls r0, r0, #2	@ 00064f3a 8000
.org 0x64f3c
	adds r0, r0, r1	@ 00064f3c 4018
.org 0x64f3e
	movs r1, #3	@ 00064f3e 0321
.org 0x64f40
	str r1, [r2, #12]	@ 00064f40 d160
.org 0x64f42
	ldr r0, [r0, #0]	@ 00064f42 0068
.org 0x64f44
	ldr r0, [r0, #12]	@ 00064f44 c068
.org 0x64f46
	str r0, [r2, #20]	@ 00064f46 5061
.org 0x64f48
	str r4, [r3, #0]	@ 00064f48 1c60
.org 0x64f4a
	adds r0, r6, #0	@ 00064f4a 301c
.org 0x64f4c
	adds r0, #84	@ 00064f4c 5430
.org 0x64f4e
	movs r1, #2	@ 00064f4e 0221
.org 0x64f50
	movs r2, #2	@ 00064f50 0222
.org 0x64f52
	bl 0x664bc	@ 00064f52 01f0b3fa
.org 0x64f56
	ldr r0, [pc, #76]	@ 00064f56 1348
.org 0x64f58
	ldr r0, [r0, #0]	@ 00064f58 0068
.org 0x64f5a
	ldrb r0, [r0, #10]	@ 00064f5a 807a
.org 0x64f5c
	lsrs r0, r0, #4	@ 00064f5c 0009
.org 0x64f5e
	movs r4, #1	@ 00064f5e 0124
.org 0x64f60
	adds r5, r4, #0	@ 00064f60 251c
.org 0x64f62
	bics r5, r0	@ 00064f62 8543
.org 0x64f64
	adds r0, r6, #0	@ 00064f64 301c
.org 0x64f66
	movs r1, #17	@ 00064f66 1121
.org 0x64f68
	bl 0x65a94	@ 00064f68 00f094fd
.org 0x64f6c
	adds r1, r5, #0	@ 00064f6c 291c
.org 0x64f6e
	ands r1, r4	@ 00064f6e 2140
.org 0x64f70
	adds r0, r6, #0	@ 00064f70 301c
.org 0x64f72
	adds r0, #76	@ 00064f72 4c30
.org 0x64f74
	strb r1, [r0, #0]	@ 00064f74 0170
.org 0x64f76
	adds r3, r6, #0	@ 00064f76 331c
.org 0x64f78
	adds r3, #74	@ 00064f78 4a33
.org 0x64f7a
	lsls r1, r1, #4	@ 00064f7a 0901
.org 0x64f7c
	ldrb r2, [r3, #0]	@ 00064f7c 1a78
.org 0x64f7e
	movs r0, #17	@ 00064f7e 1120
.org 0x64f80
	negs r0, r0	@ 00064f80 4042
.org 0x64f82
	ands r0, r2	@ 00064f82 1040
.org 0x64f84
	orrs r0, r1	@ 00064f84 0843
.org 0x64f86
	strb r0, [r3, #0]	@ 00064f86 1870
.org 0x64f88
	adds r0, r5, #0	@ 00064f88 281c
.org 0x64f8a
	ands r0, r4	@ 00064f8a 2040
.org 0x64f8c
	cmp r0, #0	@ 00064f8c 0028
.org 0x64f8e
	beq.n 0x64fa8	@ 00064f8e 0bd0
.org 0x64f90
	ldrb r0, [r6, #10]	@ 00064f90 b07a
.org 0x64f92
	movs r1, #16	@ 00064f92 1021
.org 0x64f94
	orrs r0, r1	@ 00064f94 0843
.org 0x64f96
	b.n 0x64fae	@ 00064f96 0ae0
.org 0x64f98
	.byte 0x09,0x01,0x00,0x00	@ 00064f98 data
.org 0x64f9c
	.byte 0x40,0xdb,0x85,0x08	@ 00064f9c data
.org 0x64fa0
	.byte 0xfc,0x92,0x86,0x08	@ 00064fa0 data
.org 0x64fa4
	.byte 0xf0,0xdb,0x02,0x02	@ 00064fa4 data
.org 0x64fa8
	ldrb r1, [r6, #10]	@ 00064fa8 b17a
.org 0x64faa
	movs r0, #239	@ 00064faa ef20
.org 0x64fac
	ands r0, r1	@ 00064fac 0840
.org 0x64fae
	strb r0, [r6, #10]	@ 00064fae b072
.org 0x64fb0
	ldr r0, [r6, #88]	@ 00064fb0 b06d
.org 0x64fb2
	ldr r1, [pc, #156]	@ 00064fb2 2749
.org 0x64fb4
	adds r0, r0, r1	@ 00064fb4 4018
.org 0x64fb6
	str r0, [r6, #88]	@ 00064fb6 b065
.org 0x64fb8
	lsls r0, r5, #1	@ 00064fb8 6800
.org 0x64fba
	subs r0, #1	@ 00064fba 0138
.org 0x64fbc
	lsls r0, r0, #10	@ 00064fbc 8002
.org 0x64fbe
	str r0, [r6, #92]	@ 00064fbe f065
.org 0x64fc0
	cmp r0, #0	@ 00064fc0 0028
.org 0x64fc2
	bge.n 0x64fc6	@ 00064fc2 00da
.org 0x64fc4
	adds r0, #31	@ 00064fc4 1f30
.org 0x64fc6
	asrs r0, r0, #5	@ 00064fc6 4011
.org 0x64fc8
	negs r0, r0	@ 00064fc8 4042
.org 0x64fca
	str r0, [r6, #100]	@ 00064fca 7066
.org 0x64fcc
	movs r0, #12	@ 00064fcc 0c20
.org 0x64fce
	strb r0, [r6, #18]	@ 00064fce b074
.org 0x64fd0
	ldrb r0, [r6, #15]	@ 00064fd0 f07b
.org 0x64fd2
	adds r0, #1	@ 00064fd2 0130
.org 0x64fd4
	strb r0, [r6, #15]	@ 00064fd4 f073
.org 0x64fd6
	adds r0, r6, #0	@ 00064fd6 301c
.org 0x64fd8
	bl 0x1cff0	@ 00064fd8 b8f70af8
.org 0x64fdc
	adds r0, r6, #0	@ 00064fdc 301c
.org 0x64fde
	adds r0, #116	@ 00064fde 7430
.org 0x64fe0
	ldr r4, [pc, #112]	@ 00064fe0 1c4c
.org 0x64fe2
	ldr r3, [pc, #116]	@ 00064fe2 1d4b
.org 0x64fe4
	adds r1, r6, #0	@ 00064fe4 311c
.org 0x64fe6
	adds r1, #180	@ 00064fe6 b431
.org 0x64fe8
	ldrb r2, [r1, #0]	@ 00064fe8 0a78
.org 0x64fea
	lsls r1, r2, #1	@ 00064fea 5100
.org 0x64fec
	adds r1, r1, r3	@ 00064fec c918
.org 0x64fee
	ldrh r1, [r1, #0]	@ 00064fee 0988
.org 0x64ff0
	lsls r1, r1, #2	@ 00064ff0 8900
.org 0x64ff2
	adds r1, r1, r4	@ 00064ff2 0919
.org 0x64ff4
	adds r3, r6, #0	@ 00064ff4 331c
.org 0x64ff6
	adds r3, #113	@ 00064ff6 7133
.org 0x64ff8
	movs r5, #0	@ 00064ff8 0025
.org 0x64ffa
	ldrsb r5, [r3, r5]	@ 00064ffa 5d57
.org 0x64ffc
	ldr r1, [r1, #0]	@ 00064ffc 0968
.org 0x64ffe
	lsls r3, r5, #2	@ 00064ffe ab00
.org 0x65000
	adds r3, r3, r1	@ 00065000 5b18
.org 0x65002
	ldr r4, [pc, #88]	@ 00065002 164c
.org 0x65004
	adds r1, r6, #0	@ 00065004 311c
.org 0x65006
	adds r1, #181	@ 00065006 b531
.org 0x65008
	ldrb r1, [r1, #0]	@ 00065008 0978
.org 0x6500a
	lsls r1, r1, #2	@ 0006500a 8900
.org 0x6500c
	adds r1, r1, r4	@ 0006500c 0919
.org 0x6500e
	ldr r1, [r1, #0]	@ 0006500e 0968
.org 0x65010
	lsls r2, r2, #2	@ 00065010 9200
.org 0x65012
	adds r2, r2, r1	@ 00065012 5218
.org 0x65014
	ldr r1, [r2, #0]	@ 00065014 1168
.org 0x65016
	adds r1, r1, r5	@ 00065016 4919
.org 0x65018
	ldrb r1, [r1, #0]	@ 00065018 0978
.org 0x6501a
	lsls r2, r1, #1	@ 0006501a 4a00
.org 0x6501c
	adds r2, r2, r1	@ 0006501c 5218
.org 0x6501e
	lsls r2, r2, #3	@ 0006501e d200
.org 0x65020
	ldr r1, [r3, #0]	@ 00065020 1968
.org 0x65022
	adds r1, r1, r2	@ 00065022 8918
.org 0x65024
	bl 0x5784	@ 00065024 a0f7aefb
.org 0x65028
	ldr r0, [r6, #84]	@ 00065028 706d
.org 0x6502a
	ldr r1, [r6, #92]	@ 0006502a f16d
.org 0x6502c
	adds r0, r0, r1	@ 0006502c 4018
.org 0x6502e
	str r0, [r6, #84]	@ 0006502e 7065
.org 0x65030
	ldr r0, [r6, #100]	@ 00065030 706e
.org 0x65032
	adds r1, r1, r0	@ 00065032 0918
.org 0x65034
	str r1, [r6, #92]	@ 00065034 f165
.org 0x65036
	ldrb r0, [r6, #18]	@ 00065036 b07c
.org 0x65038
	subs r0, #1	@ 00065038 0138
.org 0x6503a
	strb r0, [r6, #18]	@ 0006503a b074
.org 0x6503c
	lsls r0, r0, #24	@ 0006503c 0006
.org 0x6503e
	lsrs r1, r0, #24	@ 0006503e 010e

@ FUN_08066d68  entry 0x08066d68  size 966
.thumb
.org 0x66d68
FUN_08066d68:
	push {r4, r5, r6, r7, lr}	@ 00066d68 f0b5
.org 0x66d6a
	mov r7, sl	@ 00066d6a 5746
.org 0x66d6c
	mov r6, r9	@ 00066d6c 4e46
.org 0x66d6e
	mov r5, r8	@ 00066d6e 4546
.org 0x66d70
	push {r5, r6, r7}	@ 00066d70 e0b4
.org 0x66d72
	sub sp, #20	@ 00066d72 85b0
.org 0x66d74
	adds r4, r0, #0	@ 00066d74 041c
.org 0x66d76
	ldr r6, [pc, #64]	@ 00066d76 104e
.org 0x66d78
	ldr r0, [r6, #0]	@ 00066d78 3068
.org 0x66d7a
	mov r8, r0	@ 00066d7a 8046
.org 0x66d7c
	adds r0, r4, #0	@ 00066d7c 201c
.org 0x66d7e
	bl 0x1cff0	@ 00066d7e b6f737f9
.org 0x66d82
	ldr r0, [pc, #56]	@ 00066d82 0e48
.org 0x66d84
	ldrh r1, [r0, #8]	@ 00066d84 0189
.org 0x66d86
	movs r0, #8	@ 00066d86 0820
.org 0x66d88
	ands r0, r1	@ 00066d88 0840
.org 0x66d8a
	lsls r0, r0, #16	@ 00066d8a 0004
.org 0x66d8c
	lsrs r5, r0, #16	@ 00066d8c 050c
.org 0x66d8e
	cmp r5, #0	@ 00066d8e 002d
.org 0x66d90
	beq.n 0x66d94	@ 00066d90 00d0
.org 0x66d92
	b.n 0x67168	@ 00066d92 e9e1
.org 0x66d94
	ldrb r0, [r4, #10]	@ 00066d94 a07a
.org 0x66d96
	lsrs r1, r0, #4	@ 00066d96 0109
.org 0x66d98
	movs r0, #1	@ 00066d98 0120
.org 0x66d9a
	ands r1, r0	@ 00066d9a 0140
.org 0x66d9c
	movs r2, #0	@ 00066d9c 0022
.org 0x66d9e
	ldr r0, [r6, #0]	@ 00066d9e 3068
.org 0x66da0
	ldr r7, [r0, #84]	@ 00066da0 476d
.org 0x66da2
	ldr r3, [r4, #84]	@ 00066da2 636d
.org 0x66da4
	cmp r3, r7	@ 00066da4 bb42
.org 0x66da6
	bge.n 0x66daa	@ 00066da6 00da
.org 0x66da8
	movs r2, #1	@ 00066da8 0122
.org 0x66daa
	eors r1, r2	@ 00066daa 5140
.org 0x66dac
	cmp r1, #0	@ 00066dac 0029
.org 0x66dae
	beq.n 0x66dc0	@ 00066dae 07d0
.org 0x66db0
	movs r0, #40	@ 00066db0 2820
.org 0x66db2
	strb r0, [r4, #13]	@ 00066db2 6073
.org 0x66db4
	strb r5, [r4, #14]	@ 00066db4 a573
.org 0x66db6
	b.n 0x67168	@ 00066db6 d7e1
.org 0x66db8
	.byte 0xf0,0xdb,0x02,0x02	@ 00066db8 data
.org 0x66dbc
	.byte 0x10,0xe9,0x02,0x02	@ 00066dbc data
.org 0x66dc0
	adds r0, r4, #0	@ 00066dc0 201c
.org 0x66dc2
	adds r0, #218	@ 00066dc2 da30
.org 0x66dc4
	ldrb r2, [r0, #0]	@ 00066dc4 0278
.org 0x66dc6
	adds r6, r2, #0	@ 00066dc6 161c
.org 0x66dc8
	adds r5, r4, #0	@ 00066dc8 251c
.org 0x66dca
	adds r5, #180	@ 00066dca b435
.org 0x66dcc
	str r0, [sp, #4]	@ 00066dcc 0190
.org 0x66dce
	cmp r6, #0	@ 00066dce 002e
.org 0x66dd0
	beq.n 0x66ddc	@ 00066dd0 04d0
.org 0x66dd2
	strb r2, [r4, #13]	@ 00066dd2 6273
.org 0x66dd4
	strb r1, [r4, #14]	@ 00066dd4 a173
.org 0x66dd6
	adds r2, r0, #0	@ 00066dd6 021c
.org 0x66dd8
	strb r1, [r2, #0]	@ 00066dd8 1170
.org 0x66dda
	b.n 0x67168	@ 00066dda c5e1
.org 0x66ddc
	adds r0, r4, #0	@ 00066ddc 201c
.org 0x66dde
	adds r0, #217	@ 00066dde d930
.org 0x66de0
	ldrb r1, [r0, #0]	@ 00066de0 0178
.org 0x66de2
	str r0, [sp, #0]	@ 00066de2 0090
.org 0x66de4
	cmp r1, #4	@ 00066de4 0429
.org 0x66de6
	beq.n 0x66e3c	@ 00066de6 29d0
.org 0x66de8
	ldr r1, [r5, #8]	@ 00066de8 a968
.org 0x66dea
	movs r2, #192	@ 00066dea c022
.org 0x66dec
	lsls r2, r2, #6	@ 00066dec 9201
.org 0x66dee
	adds r0, r1, r2	@ 00066dee 8818
.org 0x66df0
	cmp r7, r0	@ 00066df0 8742
.org 0x66df2
	bge.n 0x66e0a	@ 00066df2 0ada
.org 0x66df4
	movs r2, #192	@ 00066df4 c022
.org 0x66df6
	lsls r2, r2, #7	@ 00066df6 d201
.org 0x66df8
	adds r0, r1, r2	@ 00066df8 8818
.org 0x66dfa
	cmp r3, r0	@ 00066dfa 8342
.org 0x66dfc
	bge.n 0x66e0a	@ 00066dfc 05da
.org 0x66dfe
	movs r0, #4	@ 00066dfe 0420
.org 0x66e00
	ldr r3, [sp, #0]	@ 00066e00 009b
.org 0x66e02
	strb r0, [r3, #0]	@ 00066e02 1870
.org 0x66e04
	strb r0, [r4, #13]	@ 00066e04 6073
.org 0x66e06
	strb r6, [r4, #14]	@ 00066e06 a673
.org 0x66e08
	b.n 0x67168	@ 00066e08 aee1
.org 0x66e0a
	ldr r0, [pc, #36]	@ 00066e0a 0948
.org 0x66e0c
	ldr r0, [r0, #0]	@ 00066e0c 0068
.org 0x66e0e
	ldr r2, [r5, #12]	@ 00066e0e ea68
.org 0x66e10
	ldr r5, [pc, #32]	@ 00066e10 084d
.org 0x66e12
	adds r1, r2, r5	@ 00066e12 5119
.org 0x66e14
	ldr r0, [r0, #84]	@ 00066e14 406d
.org 0x66e16
	cmp r0, r1	@ 00066e16 8842
.org 0x66e18
	ble.n 0x66e3c	@ 00066e18 10dd
.org 0x66e1a
	ldr r1, [pc, #28]	@ 00066e1a 0749
.org 0x66e1c
	adds r0, r2, r1	@ 00066e1c 5018
.org 0x66e1e
	cmp r3, r0	@ 00066e1e 8342
.org 0x66e20
	ble.n 0x66e3c	@ 00066e20 0cdd
.org 0x66e22
	movs r1, #0	@ 00066e22 0021
.org 0x66e24
	movs r0, #4	@ 00066e24 0420
.org 0x66e26
	ldr r2, [sp, #0]	@ 00066e26 009a
.org 0x66e28
	strb r0, [r2, #0]	@ 00066e28 1070
.org 0x66e2a
	strb r0, [r4, #13]	@ 00066e2a 6073
.org 0x66e2c
	strb r1, [r4, #14]	@ 00066e2c a173
.org 0x66e2e
	b.n 0x67168	@ 00066e2e 9be1
.org 0x66e30
	.byte 0xf0,0xdb,0x02,0x02	@ 00066e30 data
.org 0x66e34
	.byte 0x00,0xd0,0xff,0xff	@ 00066e34 data
.org 0x66e38
	.byte 0x00,0xa0,0xff,0xff	@ 00066e38 data
.org 0x66e3c
	ldr r0, [pc, #92]	@ 00066e3c 1748
.org 0x66e3e
	ldr r0, [r0, #0]	@ 00066e3e 0068
.org 0x66e40
	ldr r1, [r0, #84]	@ 00066e40 416d
.org 0x66e42
	subs r0, r3, r1	@ 00066e42 581a
.org 0x66e44
	cmp r0, #0	@ 00066e44 0028
.org 0x66e46
	bge.n 0x66e4a	@ 00066e46 00da
.org 0x66e48
	subs r0, r1, r3	@ 00066e48 c81a
.org 0x66e4a
	asrs r0, r0, #8	@ 00066e4a 0012
.org 0x66e4c
	mov sl, r0	@ 00066e4c 8246
.org 0x66e4e
	adds r0, r4, #0	@ 00066e4e 201c
.org 0x66e50
	adds r0, #164	@ 00066e50 a430
.org 0x66e52
	movs r3, #0	@ 00066e52 0023
.org 0x66e54
	ldrsh r0, [r0, r3]	@ 00066e54 c05e
.org 0x66e56
	movs r7, #2	@ 00066e56 0227
.org 0x66e58
	cmp r0, #15	@ 00066e58 0f28
.org 0x66e5a
	ble.n 0x66e64	@ 00066e5a 03dd
.org 0x66e5c
	movs r7, #0	@ 00066e5c 0027
.org 0x66e5e
	cmp r0, #31	@ 00066e5e 1f28
.org 0x66e60
	bgt.n 0x66e64	@ 00066e60 00dc
.org 0x66e62
	movs r7, #1	@ 00066e62 0127
.org 0x66e64
	adds r0, r4, #0	@ 00066e64 201c
.org 0x66e66
	adds r0, #219	@ 00066e66 db30
.org 0x66e68
	ldrb r1, [r0, #0]	@ 00066e68 0178
.org 0x66e6a
	str r0, [sp, #8]	@ 00066e6a 0290
.org 0x66e6c
	cmp r1, #0	@ 00066e6c 0029
.org 0x66e6e
	beq.n 0x66f0c	@ 00066e6e 4dd0
.org 0x66e70
	movs r2, #0	@ 00066e70 0022
.org 0x66e72
	strb r2, [r0, #0]	@ 00066e72 0270
.org 0x66e74
	cmp r7, #0	@ 00066e74 002f
.org 0x66e76
	bne.n 0x66eac	@ 00066e76 19d1
.org 0x66e78
	ldr r5, [pc, #36]	@ 00066e78 094d
.org 0x66e7a
	ldr r1, [r5, #0]	@ 00066e7a 2968
.org 0x66e7c
	ldr r0, [pc, #36]	@ 00066e7c 0948
.org 0x66e7e
	muls r0, r1	@ 00066e7e 4843
.org 0x66e80
	ldr r1, [pc, #36]	@ 00066e80 0949
.org 0x66e82
	adds r0, r0, r1	@ 00066e82 4018
.org 0x66e84
	lsls r0, r0, #1	@ 00066e84 4000
.org 0x66e86
	lsrs r1, r0, #1	@ 00066e86 4108
.org 0x66e88
	str r1, [r5, #0]	@ 00066e88 2960
.org 0x66e8a
	lsrs r0, r0, #17	@ 00066e8a 400c
.org 0x66e8c
	movs r1, #31	@ 00066e8c 1f21
.org 0x66e8e
	ands r0, r1	@ 00066e8e 0840
.org 0x66e90
	cmp r0, #7	@ 00066e90 0728
.org 0x66e92
	bhi.n 0x66f0c	@ 00066e92 3bd8
.org 0x66e94
	movs r0, #26	@ 00066e94 1a20
.org 0x66e96
	strb r0, [r4, #13]	@ 00066e96 6073
.org 0x66e98
	strb r7, [r4, #14]	@ 00066e98 a773
.org 0x66e9a
	b.n 0x67168	@ 00066e9a 65e1
.org 0x66e9c
	.byte 0xf0,0xdb,0x02,0x02	@ 00066e9c data
.org 0x66ea0
	.byte 0x38,0xdc,0x02,0x02	@ 00066ea0 data
.org 0x66ea4
	.byte 0xfd,0x43,0x03,0x00	@ 00066ea4 data
.org 0x66ea8
	.byte 0xc3,0x9e,0x26,0x00	@ 00066ea8 data
.org 0x66eac
	cmp r7, #1	@ 00066eac 012f
.org 0x66eae
	bne.n 0x66edc	@ 00066eae 15d1
.org 0x66eb0
	ldr r3, [pc, #28]	@ 00066eb0 074b
.org 0x66eb2
	ldr r1, [r3, #0]	@ 00066eb2 1968
.org 0x66eb4
	ldr r0, [pc, #28]	@ 00066eb4 0748
.org 0x66eb6
	muls r0, r1	@ 00066eb6 4843
.org 0x66eb8
	ldr r5, [pc, #28]	@ 00066eb8 074d
.org 0x66eba
	adds r0, r0, r5	@ 00066eba 4019
.org 0x66ebc
	lsls r0, r0, #1	@ 00066ebc 4000
.org 0x66ebe
	lsrs r1, r0, #1	@ 00066ebe 4108
.org 0x66ec0
	str r1, [r3, #0]	@ 00066ec0 1960
.org 0x66ec2
	lsrs r0, r0, #17	@ 00066ec2 400c
.org 0x66ec4
	movs r1, #31	@ 00066ec4 1f21
.org 0x66ec6
	ands r0, r1	@ 00066ec6 0840
.org 0x66ec8
	cmp r0, #9	@ 00066ec8 0928
.org 0x66eca
	bhi.n 0x66f0c	@ 00066eca 1fd8
.org 0x66ecc
	movs r0, #26	@ 00066ecc 1a20
.org 0x66ece
	b.n 0x67164	@ 00066ece 49e1
.org 0x66ed0
	.byte 0x38,0xdc,0x02,0x02	@ 00066ed0 data
.org 0x66ed4
	.byte 0xfd,0x43,0x03,0x00	@ 00066ed4 data
.org 0x66ed8
	.byte 0xc3,0x9e,0x26,0x00	@ 00066ed8 data
.org 0x66edc
	ldr r0, [pc, #32]	@ 00066edc 0848
.org 0x66ede
	ldr r1, [r0, #0]	@ 00066ede 0168
.org 0x66ee0
	ldr r0, [pc, #32]	@ 00066ee0 0848
.org 0x66ee2
	muls r0, r1	@ 00066ee2 4843
.org 0x66ee4
	ldr r1, [pc, #32]	@ 00066ee4 0849
.org 0x66ee6
	adds r0, r0, r1	@ 00066ee6 4018
.org 0x66ee8
	lsls r0, r0, #1	@ 00066ee8 4000
.org 0x66eea
	lsrs r1, r0, #1	@ 00066eea 4108
.org 0x66eec
	ldr r3, [pc, #16]	@ 00066eec 044b
.org 0x66eee
	str r1, [r3, #0]	@ 00066eee 1960
.org 0x66ef0
	lsrs r0, r0, #17	@ 00066ef0 400c
.org 0x66ef2
	movs r1, #31	@ 00066ef2 1f21
.org 0x66ef4
	ands r0, r1	@ 00066ef4 0840
.org 0x66ef6
	cmp r0, #11	@ 00066ef6 0b28
.org 0x66ef8
	bhi.n 0x66f0c	@ 00066ef8 08d8
.org 0x66efa
	movs r0, #26	@ 00066efa 1a20
.org 0x66efc
	b.n 0x67164	@ 00066efc 32e1
.org 0x66efe
	.byte 0x00	@ 00066efe data
.org 0x66eff
	.byte 0x00	@ 00066eff data
.org 0x66f00
	.byte 0x38,0xdc,0x02,0x02	@ 00066f00 data
.org 0x66f04
	.byte 0xfd,0x43,0x03,0x00	@ 00066f04 data
.org 0x66f08
	.byte 0xc3,0x9e,0x26,0x00	@ 00066f08 data
.org 0x66f0c
	mov r5, r8	@ 00066f0c 4546
.org 0x66f0e
	adds r5, #180	@ 00066f0e b435
.org 0x66f10
	str r5, [sp, #12]	@ 00066f10 0395
.org 0x66f12
	movs r6, #4	@ 00066f12 0426
.org 0x66f14
	movs r5, #6	@ 00066f14 0625
.org 0x66f16
	movs r0, #13	@ 00066f16 0d20
.org 0x66f18
	mov r8, r0	@ 00066f18 8046
.org 0x66f1a
	movs r1, #20	@ 00066f1a 1421
.org 0x66f1c
	mov r9, r1	@ 00066f1c 8946
.org 0x66f1e
	movs r3, #23	@ 00066f1e 1723
.org 0x66f20
	movs r2, #35	@ 00066f20 2322
.org 0x66f22
	mov ip, r2	@ 00066f22 9446
.org 0x66f24
	ldr r0, [pc, #64]	@ 00066f24 1048
.org 0x66f26
	ldr r1, [r0, #0]	@ 00066f26 0168
.org 0x66f28
	ldr r0, [pc, #64]	@ 00066f28 1048
.org 0x66f2a
	muls r0, r1	@ 00066f2a 4843
.org 0x66f2c
	ldr r1, [pc, #64]	@ 00066f2c 1049
.org 0x66f2e
	adds r0, r0, r1	@ 00066f2e 4018
.org 0x66f30
	lsls r0, r0, #1	@ 00066f30 4000
.org 0x66f32
	lsrs r1, r0, #1	@ 00066f32 4108
.org 0x66f34
	ldr r2, [pc, #48]	@ 00066f34 0c4a
.org 0x66f36
	str r1, [r2, #0]	@ 00066f36 1160
.org 0x66f38
	lsrs r1, r0, #17	@ 00066f38 410c
.org 0x66f3a
	movs r0, #31	@ 00066f3a 1f20
.org 0x66f3c
	ands r1, r0	@ 00066f3c 0140
.org 0x66f3e
	str r1, [sp, #16]	@ 00066f3e 0491
.org 0x66f40
	ldr r2, [sp, #12]	@ 00066f40 039a
.org 0x66f42
	ldr r0, [r2, #56]	@ 00066f42 906b
.org 0x66f44
	cmp r0, #0	@ 00066f44 0028
.org 0x66f46
	bne.n 0x66f4a	@ 00066f46 00d1
.org 0x66f48
	b.n 0x6704e	@ 00066f48 81e0
.org 0x66f4a
	mov r0, sl	@ 00066f4a 5046
.org 0x66f4c
	cmp r0, #99	@ 00066f4c 6328
.org 0x66f4e
	bgt.n 0x66fb6	@ 00066f4e 32dc
.org 0x66f50
	cmp r7, #0	@ 00066f50 002f
.org 0x66f52
	bne.n 0x66f7a	@ 00066f52 12d1
.org 0x66f54
	cmp r1, #4	@ 00066f54 0429
.org 0x66f56
	bhi.n 0x66f5a	@ 00066f56 00d8
.org 0x66f58
	b.n 0x670f6	@ 00066f58 cde0
.org 0x66f5a
	cmp r1, #9	@ 00066f5a 0929
.org 0x66f5c
	bhi.n 0x66f60	@ 00066f5c 00d8
.org 0x66f5e
	b.n 0x670fe	@ 00066f5e cee0
.org 0x66f60
	cmp r1, #14	@ 00066f60 0e29
.org 0x66f62
	bhi.n 0x66f74	@ 00066f62 07d8
.org 0x66f64
	mov r1, r8	@ 00066f64 4146
.org 0x66f66
	b.n 0x6710e	@ 00066f66 d2e0
.org 0x66f68
	.byte 0x38,0xdc,0x02,0x02	@ 00066f68 data
.org 0x66f6c
	.byte 0xfd,0x43,0x03,0x00	@ 00066f6c data
.org 0x66f70
	.byte 0xc3,0x9e,0x26,0x00	@ 00066f70 data
.org 0x66f74
	cmp r1, #24	@ 00066f74 1829
.org 0x66f76
	bls.n 0x66fda	@ 00066f76 30d9
.org 0x66f78
	b.n 0x67108	@ 00066f78 c6e0
.org 0x66f7a
	cmp r7, #1	@ 00066f7a 012f
.org 0x66f7c
	bne.n 0x66f9a	@ 00066f7c 0dd1
.org 0x66f7e
	cmp r1, #5	@ 00066f7e 0529
.org 0x66f80
	bhi.n 0x66f84	@ 00066f80 00d8
.org 0x66f82
	b.n 0x670fe	@ 00066f82 bce0
.org 0x66f84
	cmp r1, #10	@ 00066f84 0a29
.org 0x66f86
	bhi.n 0x66f8a	@ 00066f86 00d8
.org 0x66f88
	b.n 0x670c2	@ 00066f88 9be0
.org 0x66f8a
	cmp r1, #20	@ 00066f8a 1429
.org 0x66f8c
	bhi.n 0x66f92	@ 00066f8c 01d8
.org 0x66f8e
	mov r1, r9	@ 00066f8e 4946
.org 0x66f90
	b.n 0x6710e	@ 00066f90 bde0
.org 0x66f92
	cmp r1, #27	@ 00066f92 1b29
.org 0x66f94
	bhi.n 0x66f98	@ 00066f94 00d8
.org 0x66f96
	b.n 0x67108	@ 00066f96 b7e0
.org 0x66f98
	b.n 0x670ec	@ 00066f98 a8e0
.org 0x66f9a
	cmp r1, #3	@ 00066f9a 0329
.org 0x66f9c
	bhi.n 0x66fa0	@ 00066f9c 00d8
.org 0x66f9e
	b.n 0x670fe	@ 00066f9e aee0
.org 0x66fa0
	cmp r1, #7	@ 00066fa0 0729
.org 0x66fa2
	bhi.n 0x66fa6	@ 00066fa2 00d8
.org 0x66fa4
	b.n 0x670c2	@ 00066fa4 8de0
.org 0x66fa6
	cmp r1, #17	@ 00066fa6 1129
.org 0x66fa8
	bhi.n 0x66fae	@ 00066fa8 01d8
.org 0x66faa
	mov r1, r9	@ 00066faa 4946
.org 0x66fac
	b.n 0x6710e	@ 00066fac afe0
.org 0x66fae
	cmp r1, #25	@ 00066fae 1929
.org 0x66fb0
	bhi.n 0x66fb4	@ 00066fb0 00d8
.org 0x66fb2
	b.n 0x67108	@ 00066fb2 a9e0
.org 0x66fb4
	b.n 0x670ec	@ 00066fb4 9ae0
.org 0x66fb6
	mov r0, sl	@ 00066fb6 5046
.org 0x66fb8
	cmp r0, #179	@ 00066fb8 b328
.org 0x66fba
	bgt.n 0x67010	@ 00066fba 29dc
.org 0x66fbc
	cmp r7, #0	@ 00066fbc 002f
.org 0x66fbe
	bne.n 0x66fe0	@ 00066fbe 0fd1
.org 0x66fc0
	cmp r1, #4	@ 00066fc0 0429
.org 0x66fc2
	bhi.n 0x66fc6	@ 00066fc2 00d8
.org 0x66fc4
	b.n 0x670f6	@ 00066fc4 97e0
.org 0x66fc6
	cmp r1, #10	@ 00066fc6 0a29
.org 0x66fc8
	bhi.n 0x66fcc	@ 00066fc8 00d8
.org 0x66fca
	b.n 0x670fe	@ 00066fca 98e0
.org 0x66fcc
	cmp r1, #15	@ 00066fcc 0f29
.org 0x66fce
	bhi.n 0x66fd4	@ 00066fce 01d8
.org 0x66fd0
	mov r1, r8	@ 00066fd0 4146
.org 0x66fd2
	b.n 0x6710e	@ 00066fd2 9ce0
.org 0x66fd4
	cmp r1, #21	@ 00066fd4 1529
.org 0x66fd6
	bls.n 0x66fda	@ 00066fd6 00d9
.org 0x66fd8
	b.n 0x67108	@ 00066fd8 96e0
.org 0x66fda
	mov r2, r9	@ 00066fda 4a46
.org 0x66fdc
	strb r2, [r4, #13]	@ 00066fdc 6273
.org 0x66fde
	b.n 0x67110	@ 00066fde 97e0
.org 0x66fe0
	cmp r7, #1	@ 00066fe0 012f
.org 0x66fe2
	bne.n 0x66ffc	@ 00066fe2 0bd1
.org 0x66fe4
	cmp r1, #3	@ 00066fe4 0329
.org 0x66fe6
	bhi.n 0x66fea	@ 00066fe6 00d8
.org 0x66fe8
	b.n 0x670f6	@ 00066fe8 85e0
.org 0x66fea
	cmp r1, #8	@ 00066fea 0829
.org 0x66fec
	bhi.n 0x66ff0	@ 00066fec 00d8
.org 0x66fee
	b.n 0x670fe	@ 00066fee 86e0
.org 0x66ff0
	cmp r1, #12	@ 00066ff0 0c29
.org 0x66ff2
	bls.n 0x670c2	@ 00066ff2 66d9
.org 0x66ff4
	cmp r1, #17	@ 00066ff4 1129
.org 0x66ff6
	bhi.n 0x66f92	@ 00066ff6 ccd8
.org 0x66ff8
	mov r1, r9	@ 00066ff8 4946
.org 0x66ffa
	b.n 0x6710e	@ 00066ffa 88e0
.org 0x66ffc
	cmp r1, #3	@ 00066ffc 0329
.org 0x66ffe
	bls.n 0x670f6	@ 00066ffe 7ad9
.org 0x67000
	cmp r1, #7	@ 00067000 0729
.org 0x67002
	bls.n 0x670fe	@ 00067002 7cd9
.org 0x67004
	cmp r1, #10	@ 00067004 0a29
.org 0x67006
	bls.n 0x670c2	@ 00067006 5cd9
.org 0x67008
	cmp r1, #15	@ 00067008 0f29
.org 0x6700a
	bhi.n 0x66fae	@ 0006700a d0d8
.org 0x6700c
	mov r1, r9	@ 0006700c 4946
.org 0x6700e
	b.n 0x6710e	@ 0006700e 7ee0
.org 0x67010
	cmp r7, #0	@ 00067010 002f
.org 0x67012
	bne.n 0x67022	@ 00067012 06d1
.org 0x67014
	cmp r1, #7	@ 00067014 0729
.org 0x67016
	bls.n 0x670f6	@ 00067016 6ed9
.org 0x67018
	cmp r1, #17	@ 00067018 1129
.org 0x6701a
	bls.n 0x670fe	@ 0006701a 70d9
.org 0x6701c
	cmp r1, #21	@ 0006701c 1529
.org 0x6701e
	bls.n 0x67042	@ 0006701e 10d9
.org 0x67020
	b.n 0x67108	@ 00067020 72e0
.org 0x67022
	cmp r7, #1	@ 00067022 012f
.org 0x67024
	bne.n 0x67036	@ 00067024 07d1
.org 0x67026
	cmp r1, #4	@ 00067026 0429
.org 0x67028
	bls.n 0x670f6	@ 00067028 65d9
.org 0x6702a
	cmp r1, #13	@ 0006702a 0d29
.org 0x6702c
	bls.n 0x670fe	@ 0006702c 67d9
.org 0x6702e
	cmp r1, #17	@ 0006702e 1129
.org 0x67030
	bhi.n 0x66f92	@ 00067030 afd8
.org 0x67032
	mov r1, r9	@ 00067032 4946
.org 0x67034
	b.n 0x6710e	@ 00067034 6be0
.org 0x67036
	cmp r1, #4	@ 00067036 0429
.org 0x67038
	bls.n 0x670f6	@ 00067038 5dd9
.org 0x6703a
	cmp r1, #12	@ 0006703a 0c29
.org 0x6703c
	bls.n 0x670fe	@ 0006703c 5fd9
.org 0x6703e
	cmp r1, #16	@ 0006703e 1029
.org 0x67040
	bhi.n 0x67048	@ 00067040 02d8
.org 0x67042
	mov r0, r9	@ 00067042 4846
.org 0x67044
	strb r0, [r4, #13]	@ 00067044 6073
.org 0x67046
	b.n 0x67110	@ 00067046 63e0
.org 0x67048
	cmp r1, #25	@ 00067048 1929
.org 0x6704a
	bls.n 0x67108	@ 0006704a 5dd9
.org 0x6704c
	b.n 0x6710c	@ 0006704c 5ee0
.org 0x6704e
	mov r2, sl	@ 0006704e 5246
.org 0x67050
	cmp r2, #99	@ 00067050 632a
.org 0x67052
	bgt.n 0x67088	@ 00067052 19dc
.org 0x67054
	cmp r7, #0	@ 00067054 002f
.org 0x67056
	bne.n 0x67066	@ 00067056 06d1
.org 0x67058
	cmp r1, #4	@ 00067058 0429
.org 0x6705a
	bls.n 0x670f6	@ 0006705a 4cd9
.org 0x6705c
	cmp r1, #12	@ 0006705c 0c29
.org 0x6705e
	bls.n 0x670fe	@ 0006705e 4ed9
.org 0x67060
	cmp r1, #23	@ 00067060 1729
.org 0x67062
	bls.n 0x670c2	@ 00067062 2ed9
.org 0x67064
	b.n 0x67108	@ 00067064 50e0
.org 0x67066
	cmp r7, #1	@ 00067066 012f
.org 0x67068
	bne.n 0x6707a	@ 00067068 07d1
.org 0x6706a
	cmp r1, #4	@ 0006706a 0429
.org 0x6706c
	bls.n 0x670f6	@ 0006706c 43d9
.org 0x6706e
	cmp r1, #11	@ 0006706e 0b29
.org 0x67070
	bls.n 0x670fe	@ 00067070 45d9
.org 0x67072
	cmp r1, #22	@ 00067072 1629
.org 0x67074
	bhi.n 0x66f92	@ 00067074 8dd8
.org 0x67076
	mov r1, r8	@ 00067076 4146
.org 0x67078
	b.n 0x6710e	@ 00067078 49e0
.org 0x6707a
	cmp r1, #4	@ 0006707a 0429
.org 0x6707c
	bls.n 0x670f6	@ 0006707c 3bd9
.org 0x6707e
	cmp r1, #11	@ 0006707e 0b29
.org 0x67080
	bls.n 0x670fe	@ 00067080 3dd9
.org 0x67082
	cmp r1, #20	@ 00067082 1429
.org 0x67084
	bls.n 0x670c2	@ 00067084 1dd9
.org 0x67086
	b.n 0x67048	@ 00067086 dfe7
.org 0x67088
	mov r2, sl	@ 00067088 5246
.org 0x6708a
	cmp r2, #179	@ 0006708a b32a
.org 0x6708c
	bgt.n 0x670ce	@ 0006708c 1fdc
.org 0x6708e
	cmp r7, #0	@ 0006708e 002f
.org 0x67090
	bne.n 0x670a0	@ 00067090 06d1
.org 0x67092
	cmp r1, #7	@ 00067092 0729
.org 0x67094
	bls.n 0x670f6	@ 00067094 2fd9
.org 0x67096
	cmp r1, #17	@ 00067096 1129
.org 0x67098
	bls.n 0x670fe	@ 00067098 31d9
.org 0x6709a
	cmp r1, #24	@ 0006709a 1829
.org 0x6709c
	bls.n 0x670c2	@ 0006709c 11d9
.org 0x6709e
	b.n 0x67108	@ 0006709e 33e0
.org 0x670a0
	cmp r7, #1	@ 000670a0 012f
.org 0x670a2
	bne.n 0x670b6	@ 000670a2 08d1
.org 0x670a4
	cmp r1, #6	@ 000670a4 0629
.org 0x670a6
	bls.n 0x670f6	@ 000670a6 26d9
.org 0x670a8
	cmp r1, #14	@ 000670a8 0e29
.org 0x670aa
	bls.n 0x670fe	@ 000670aa 28d9
.org 0x670ac
	cmp r1, #20	@ 000670ac 1429
.org 0x670ae
	bls.n 0x670b2	@ 000670ae 00d9
.org 0x670b0
	b.n 0x66fae	@ 000670b0 7de7
.org 0x670b2
	mov r1, r8	@ 000670b2 4146
.org 0x670b4
	b.n 0x6710e	@ 000670b4 2be0
.org 0x670b6
	cmp r1, #5	@ 000670b6 0529
.org 0x670b8
	bls.n 0x670f6	@ 000670b8 1dd9
.org 0x670ba
	cmp r1, #13	@ 000670ba 0d29
.org 0x670bc
	bls.n 0x670fe	@ 000670bc 1fd9
.org 0x670be
	cmp r1, #19	@ 000670be 1329
.org 0x670c0
	bhi.n 0x670c8	@ 000670c0 02d8
.org 0x670c2
	mov r0, r8	@ 000670c2 4046
.org 0x670c4
	strb r0, [r4, #13]	@ 000670c4 6073
.org 0x670c6
	b.n 0x67110	@ 000670c6 23e0
.org 0x670c8
	cmp r1, #23	@ 000670c8 1729
.org 0x670ca
	bls.n 0x67108	@ 000670ca 1dd9
.org 0x670cc
	b.n 0x6710c	@ 000670cc 1ee0
.org 0x670ce
	cmp r7, #0	@ 000670ce 002f
.org 0x670d0
	bne.n 0x670dc	@ 000670d0 04d1
.org 0x670d2
	cmp r1, #9	@ 000670d2 0929
.org 0x670d4
	bls.n 0x670f6	@ 000670d4 0fd9
.org 0x670d6
	cmp r1, #23	@ 000670d6 1729
.org 0x670d8
	bls.n 0x670fe	@ 000670d8 11d9
.org 0x670da
	b.n 0x67108	@ 000670da 15e0
.org 0x670dc
	cmp r7, #1	@ 000670dc 012f
.org 0x670de
	bne.n 0x670f2	@ 000670de 08d1
.org 0x670e0
	cmp r1, #7	@ 000670e0 0729
.org 0x670e2
	bls.n 0x670f6	@ 000670e2 08d9
.org 0x670e4
	cmp r1, #19	@ 000670e4 1329
.org 0x670e6
	bls.n 0x670fe	@ 000670e6 0ad9
.org 0x670e8
	cmp r1, #24	@ 000670e8 1829
.org 0x670ea
	bls.n 0x67108	@ 000670ea 0dd9
.org 0x670ec
	mov r2, ip	@ 000670ec 6246
.org 0x670ee
	strb r2, [r4, #13]	@ 000670ee 6273
.org 0x670f0
	b.n 0x67110	@ 000670f0 0ee0
.org 0x670f2
	cmp r1, #6	@ 000670f2 0629
.org 0x670f4
	bhi.n 0x670fa	@ 000670f4 01d8
.org 0x670f6
	strb r6, [r4, #13]	@ 000670f6 6673
.org 0x670f8
	b.n 0x67110	@ 000670f8 0ae0
.org 0x670fa
	cmp r1, #17	@ 000670fa 1129
.org 0x670fc
	bhi.n 0x67102	@ 000670fc 01d8
.org 0x670fe
	strb r5, [r4, #13]	@ 000670fe 6573
.org 0x67100
	b.n 0x67110	@ 00067100 06e0
.org 0x67102
	ldr r0, [sp, #16]	@ 00067102 0498
.org 0x67104
	cmp r0, #22	@ 00067104 1628
.org 0x67106
	bhi.n 0x6710c	@ 00067106 01d8
.org 0x67108
	strb r3, [r4, #13]	@ 00067108 6373
.org 0x6710a
	b.n 0x67110	@ 0006710a 01e0
.org 0x6710c
	mov r1, ip	@ 0006710c 6146
.org 0x6710e
	strb r1, [r4, #13]	@ 0006710e 6173
.org 0x67110
	ldr r2, [pc, #100]	@ 00067110 194a
.org 0x67112
	ldr r1, [pc, #104]	@ 00067112 1a49
.org 0x67114
	adds r0, r2, r1	@ 00067114 5018
.org 0x67116
	ldrb r1, [r0, #0]	@ 00067116 0178
.org 0x67118
	movs r0, #16	@ 00067118 1020
.org 0x6711a
	ands r0, r1	@ 0006711a 0840
.org 0x6711c
	cmp r0, #0	@ 0006711c 0028
.org 0x6711e
	beq.n 0x6712e	@ 0006711e 06d0
.org 0x67120
	ldr r0, [pc, #92]	@ 00067120 1748
.org 0x67122
	ldrb r1, [r0, #4]	@ 00067122 0179
.org 0x67124
	adds r0, r6, #0	@ 00067124 301c
.org 0x67126
	ands r0, r1	@ 00067126 0840
.org 0x67128
	ldrb r1, [r4, #13]	@ 00067128 617b
.org 0x6712a
	cmp r0, #0	@ 0006712a 0028
.org 0x6712c
	beq.n 0x67138	@ 0006712c 04d0

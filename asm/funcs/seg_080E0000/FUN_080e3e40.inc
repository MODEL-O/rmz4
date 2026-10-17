@ FUN_080e3e40  entry 0x080e3e40  size 358
.thumb
.org 0xe3e40
FUN_080e3e40:
	push {r4, r5, r6, r7, lr}	@ 000e3e40 f0b5
.org 0xe3e42
	adds r4, r0, #0	@ 000e3e42 041c
.org 0xe3e44
	ldr r5, [r4, #124]	@ 000e3e44 e56f
.org 0xe3e46
	bl 0x1cc9c	@ 000e3e46 38f729ff
.org 0xe3e4a
	ldrb r1, [r4, #10]	@ 000e3e4a a17a
.org 0xe3e4c
	movs r0, #1	@ 000e3e4c 0120
.org 0xe3e4e
	movs r7, #0	@ 000e3e4e 0027
.org 0xe3e50
	orrs r0, r1	@ 000e3e50 0843
.org 0xe3e52
	movs r1, #2	@ 000e3e52 0221
.org 0xe3e54
	orrs r0, r1	@ 000e3e54 0843
.org 0xe3e56
	strb r0, [r4, #10]	@ 000e3e56 a072
.org 0xe3e58
	ldrh r1, [r5, #0]	@ 000e3e58 2988
.org 0xe3e5a
	adds r0, r4, #0	@ 000e3e5a 201c
.org 0xe3e5c
	bl 0x1cf00	@ 000e3e5c 39f750f8
.org 0xe3e60
	adds r0, r4, #0	@ 000e3e60 201c
.org 0xe3e62
	bl 0x1cff0	@ 000e3e62 39f7c5f8
.org 0xe3e66
	ldrb r0, [r5, #26]	@ 000e3e66 a87e
.org 0xe3e68
	cmp r0, #0	@ 000e3e68 0028
.org 0xe3e6a
	beq.n 0xe3e84	@ 000e3e6a 0bd0
.org 0xe3e6c
	adds r3, r4, #0	@ 000e3e6c 231c
.org 0xe3e6e
	adds r3, #73	@ 000e3e6e 4933
.org 0xe3e70
	movs r0, #3	@ 000e3e70 0320
.org 0xe3e72
	ldrb r1, [r5, #26]	@ 000e3e72 a97e
.org 0xe3e74
	ands r1, r0	@ 000e3e74 0140
.org 0xe3e76
	lsls r1, r1, #2	@ 000e3e76 8900
.org 0xe3e78
	ldrb r2, [r3, #0]	@ 000e3e78 1a78
.org 0xe3e7a
	movs r0, #13	@ 000e3e7a 0d20
.org 0xe3e7c
	negs r0, r0	@ 000e3e7c 4042
.org 0xe3e7e
	ands r0, r2	@ 000e3e7e 1040
.org 0xe3e80
	orrs r0, r1	@ 000e3e80 0843
.org 0xe3e82
	strb r0, [r3, #0]	@ 000e3e82 1870
.org 0xe3e84
	ldrb r1, [r5, #27]	@ 000e3e84 e97e
.org 0xe3e86
	cmp r1, #0	@ 000e3e86 0029
.org 0xe3e88
	beq.n 0xe3e90	@ 000e3e88 02d0
.org 0xe3e8a
	adds r0, r4, #0	@ 000e3e8a 201c
.org 0xe3e8c
	adds r0, #37	@ 000e3e8c 2530
.org 0xe3e8e
	strb r1, [r0, #0]	@ 000e3e8e 0170
.org 0xe3e90
	adds r0, r4, #0	@ 000e3e90 201c
.org 0xe3e92
	adds r0, #120	@ 000e3e92 7830
.org 0xe3e94
	ldrb r2, [r0, #0]	@ 000e3e94 0278
.org 0xe3e96
	adds r6, r0, #0	@ 000e3e96 061c
.org 0xe3e98
	cmp r2, #0	@ 000e3e98 002a
.org 0xe3e9a
	beq.n 0xe3ea4	@ 000e3e9a 03d0
.org 0xe3e9c
	ldrb r0, [r4, #10]	@ 000e3e9c a07a
.org 0xe3e9e
	movs r1, #16	@ 000e3e9e 1021
.org 0xe3ea0
	orrs r0, r1	@ 000e3ea0 0843
.org 0xe3ea2
	b.n 0xe3eaa	@ 000e3ea2 02e0
.org 0xe3ea4
	ldrb r1, [r4, #10]	@ 000e3ea4 a17a
.org 0xe3ea6
	movs r0, #239	@ 000e3ea6 ef20
.org 0xe3ea8
	ands r0, r1	@ 000e3ea8 0840
.org 0xe3eaa
	strb r0, [r4, #10]	@ 000e3eaa a072
.org 0xe3eac
	movs r1, #1	@ 000e3eac 0121
.org 0xe3eae
	ands r1, r2	@ 000e3eae 1140
.org 0xe3eb0
	adds r0, r4, #0	@ 000e3eb0 201c
.org 0xe3eb2
	adds r0, #76	@ 000e3eb2 4c30
.org 0xe3eb4
	strb r1, [r0, #0]	@ 000e3eb4 0170
.org 0xe3eb6
	adds r3, r4, #0	@ 000e3eb6 231c
.org 0xe3eb8
	adds r3, #74	@ 000e3eb8 4a33
.org 0xe3eba
	lsls r1, r1, #4	@ 000e3eba 0901
.org 0xe3ebc
	ldrb r2, [r3, #0]	@ 000e3ebc 1a78
.org 0xe3ebe
	movs r0, #17	@ 000e3ebe 1120
.org 0xe3ec0
	negs r0, r0	@ 000e3ec0 4042
.org 0xe3ec2
	ands r0, r2	@ 000e3ec2 1040
.org 0xe3ec4
	orrs r0, r1	@ 000e3ec4 0843
.org 0xe3ec6
	strb r0, [r3, #0]	@ 000e3ec6 1870
.org 0xe3ec8
	ldrb r0, [r6, #0]	@ 000e3ec8 3078
.org 0xe3eca
	cmp r0, #0	@ 000e3eca 0028
.org 0xe3ecc
	beq.n 0xe3ed8	@ 000e3ecc 04d0
.org 0xe3ece
	movs r0, #4	@ 000e3ece 0420
.org 0xe3ed0
	ldrsh r1, [r5, r0]	@ 000e3ed0 295e
.org 0xe3ed2
	ldr r0, [r4, #84]	@ 000e3ed2 606d
.org 0xe3ed4
	subs r0, r0, r1	@ 000e3ed4 401a
.org 0xe3ed6
	b.n 0xe3ee0	@ 000e3ed6 03e0
.org 0xe3ed8
	movs r3, #4	@ 000e3ed8 0423
.org 0xe3eda
	ldrsh r1, [r5, r3]	@ 000e3eda e95e
.org 0xe3edc
	ldr r0, [r4, #84]	@ 000e3edc 606d
.org 0xe3ede
	adds r0, r0, r1	@ 000e3ede 4018
.org 0xe3ee0
	str r0, [r4, #84]	@ 000e3ee0 6065
.org 0xe3ee2
	adds r0, r4, #0	@ 000e3ee2 201c
.org 0xe3ee4
	adds r0, #121	@ 000e3ee4 7930
.org 0xe3ee6
	ldrb r0, [r0, #0]	@ 000e3ee6 0078
.org 0xe3ee8
	cmp r0, #0	@ 000e3ee8 0028
.org 0xe3eea
	beq.n 0xe3f24	@ 000e3eea 1bd0
.org 0xe3eec
	movs r6, #8	@ 000e3eec 0826
.org 0xe3eee
	ldrsh r2, [r5, r6]	@ 000e3eee aa5f
.org 0xe3ef0
	negs r2, r2	@ 000e3ef0 5242
.org 0xe3ef2
	ldr r3, [pc, #36]	@ 000e3ef2 094b
.org 0xe3ef4
	ldr r1, [r3, #0]	@ 000e3ef4 1968
.org 0xe3ef6
	ldr r0, [pc, #36]	@ 000e3ef6 0948
.org 0xe3ef8
	muls r0, r1	@ 000e3ef8 4843
.org 0xe3efa
	ldr r1, [pc, #36]	@ 000e3efa 0949
.org 0xe3efc
	adds r0, r0, r1	@ 000e3efc 4018
.org 0xe3efe
	lsls r0, r0, #1	@ 000e3efe 4000
.org 0xe3f00
	lsrs r1, r0, #1	@ 000e3f00 4108
.org 0xe3f02
	str r1, [r3, #0]	@ 000e3f02 1960
.org 0xe3f04
	lsrs r0, r0, #17	@ 000e3f04 400c
.org 0xe3f06
	movs r6, #12	@ 000e3f06 0c26
.org 0xe3f08
	ldrsh r1, [r5, r6]	@ 000e3f08 a95f
.org 0xe3f0a
	ands r0, r1	@ 000e3f0a 0840
.org 0xe3f0c
	subs r2, r2, r0	@ 000e3f0c 121a
.org 0xe3f0e
	str r2, [r4, #92]	@ 000e3f0e e265
.org 0xe3f10
	movs r1, #16	@ 000e3f10 1021
.org 0xe3f12
	ldrsh r0, [r5, r1]	@ 000e3f12 685e
.org 0xe3f14
	negs r0, r0	@ 000e3f14 4042
.org 0xe3f16
	b.n 0xe3f4a	@ 000e3f16 18e0
.org 0xe3f18
	.byte 0x38,0xdc,0x02,0x02	@ 000e3f18 data
.org 0xe3f1c
	.byte 0xfd,0x43,0x03,0x00	@ 000e3f1c data
.org 0xe3f20
	.byte 0xc3,0x9e,0x26,0x00	@ 000e3f20 data
.org 0xe3f24
	movs r3, #8	@ 000e3f24 0823
.org 0xe3f26
	ldrsh r2, [r5, r3]	@ 000e3f26 ea5e
.org 0xe3f28
	ldr r3, [pc, #136]	@ 000e3f28 224b
.org 0xe3f2a
	ldr r1, [r3, #0]	@ 000e3f2a 1968
.org 0xe3f2c
	ldr r0, [pc, #136]	@ 000e3f2c 2248
.org 0xe3f2e
	muls r0, r1	@ 000e3f2e 4843
.org 0xe3f30
	ldr r6, [pc, #136]	@ 000e3f30 224e
.org 0xe3f32
	adds r0, r0, r6	@ 000e3f32 8019
.org 0xe3f34
	lsls r0, r0, #1	@ 000e3f34 4000
.org 0xe3f36
	lsrs r1, r0, #1	@ 000e3f36 4108
.org 0xe3f38
	str r1, [r3, #0]	@ 000e3f38 1960
.org 0xe3f3a
	lsrs r0, r0, #17	@ 000e3f3a 400c
.org 0xe3f3c
	movs r6, #12	@ 000e3f3c 0c26
.org 0xe3f3e
	ldrsh r1, [r5, r6]	@ 000e3f3e a95f
.org 0xe3f40
	ands r0, r1	@ 000e3f40 0840
.org 0xe3f42
	adds r2, r2, r0	@ 000e3f42 1218
.org 0xe3f44
	str r2, [r4, #92]	@ 000e3f44 e265
.org 0xe3f46
	movs r1, #16	@ 000e3f46 1021
.org 0xe3f48
	ldrsh r0, [r5, r1]	@ 000e3f48 685e
.org 0xe3f4a
	str r0, [r4, #100]	@ 000e3f4a 6066
.org 0xe3f4c
	movs r6, #6	@ 000e3f4c 0626
.org 0xe3f4e
	ldrsh r1, [r5, r6]	@ 000e3f4e a95f
.org 0xe3f50
	ldr r0, [r4, #88]	@ 000e3f50 a06d
.org 0xe3f52
	adds r0, r0, r1	@ 000e3f52 4018
.org 0xe3f54
	str r0, [r4, #88]	@ 000e3f54 a065
.org 0xe3f56
	movs r0, #10	@ 000e3f56 0a20
.org 0xe3f58
	ldrsh r2, [r5, r0]	@ 000e3f58 2a5e
.org 0xe3f5a
	ldr r1, [r3, #0]	@ 000e3f5a 1968
.org 0xe3f5c
	ldr r0, [pc, #88]	@ 000e3f5c 1648
.org 0xe3f5e
	muls r0, r1	@ 000e3f5e 4843
.org 0xe3f60
	ldr r1, [pc, #88]	@ 000e3f60 1649
.org 0xe3f62
	adds r0, r0, r1	@ 000e3f62 4018
.org 0xe3f64
	lsls r0, r0, #1	@ 000e3f64 4000
.org 0xe3f66
	lsrs r1, r0, #1	@ 000e3f66 4108
.org 0xe3f68
	str r1, [r3, #0]	@ 000e3f68 1960
.org 0xe3f6a
	lsrs r0, r0, #17	@ 000e3f6a 400c
.org 0xe3f6c
	movs r3, #14	@ 000e3f6c 0e23
.org 0xe3f6e
	ldrsh r1, [r5, r3]	@ 000e3f6e e95e
.org 0xe3f70
	ands r0, r1	@ 000e3f70 0840
.org 0xe3f72
	adds r2, r2, r0	@ 000e3f72 1218
.org 0xe3f74
	str r2, [r4, #96]	@ 000e3f74 2266
.org 0xe3f76
	movs r6, #18	@ 000e3f76 1226
.org 0xe3f78
	ldrsh r0, [r5, r6]	@ 000e3f78 a85f
.org 0xe3f7a
	str r0, [r4, #104]	@ 000e3f7a a066
.org 0xe3f7c
	ldrh r1, [r5, #20]	@ 000e3f7c a98a
.org 0xe3f7e
	adds r0, r4, #0	@ 000e3f7e 201c
.org 0xe3f80
	adds r0, #116	@ 000e3f80 7430
.org 0xe3f82
	strh r1, [r0, #0]	@ 000e3f82 0180
.org 0xe3f84
	ldrh r0, [r5, #22]	@ 000e3f84 e88a
.org 0xe3f86
	adds r1, r4, #0	@ 000e3f86 211c
.org 0xe3f88
	adds r1, #118	@ 000e3f88 7631
.org 0xe3f8a
	strh r0, [r1, #0]	@ 000e3f8a 0880
.org 0xe3f8c
	ldrb r0, [r5, #2]	@ 000e3f8c a878
.org 0xe3f8e
	strb r0, [r4, #18]	@ 000e3f8e a074
.org 0xe3f90
	ldrb r0, [r5, #2]	@ 000e3f90 a878
.org 0xe3f92
	strb r0, [r4, #19]	@ 000e3f92 e074
.org 0xe3f94
	ldr r1, [pc, #40]	@ 000e3f94 0a49
.org 0xe3f96
	ldrb r0, [r4, #9]	@ 000e3f96 607a
.org 0xe3f98
	lsls r0, r0, #2	@ 000e3f98 8000
.org 0xe3f9a
	adds r0, r0, r1	@ 000e3f9a 4018
.org 0xe3f9c
	movs r1, #1	@ 000e3f9c 0121
.org 0xe3f9e
	str r1, [r4, #12]	@ 000e3f9e e160
.org 0xe3fa0
	ldr r0, [r0, #0]	@ 000e3fa0 0068
.org 0xe3fa2
	ldr r0, [r0, #4]	@ 000e3fa2 4068
.org 0xe3fa4
	str r0, [r4, #20]	@ 000e3fa4 6061

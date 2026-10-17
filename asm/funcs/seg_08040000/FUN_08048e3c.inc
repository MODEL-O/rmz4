@ FUN_08048e3c  entry 0x08048e3c  size 620
.thumb
.org 0x48e3c
FUN_08048e3c:
	push {r4, r5, r6, r7, lr}	@ 00048e3c f0b5
.org 0x48e3e
	mov r7, r8	@ 00048e3e 4746
.org 0x48e40
	push {r7}	@ 00048e40 80b4
.org 0x48e42
	sub sp, #8	@ 00048e42 82b0
.org 0x48e44
	adds r4, r0, #0	@ 00048e44 041c
.org 0x48e46
	ldr r5, [r4, #40]	@ 00048e46 a56a
.org 0x48e48
	adds r3, r4, #0	@ 00048e48 231c
.org 0x48e4a
	adds r3, #189	@ 00048e4a bd33
.org 0x48e4c
	ldrb r2, [r3, #0]	@ 00048e4c 1a78
.org 0x48e4e
	cmp r2, #0	@ 00048e4e 002a
.org 0x48e50
	bne.n 0x48e62	@ 00048e50 07d1
.org 0x48e52
	adds r0, #140	@ 00048e52 8c30
.org 0x48e54
	ldr r0, [r0, #0]	@ 00048e54 0068
.org 0x48e56
	ldr r1, [pc, #132]	@ 00048e56 2149
.org 0x48e58
	ands r0, r1	@ 00048e58 0840
.org 0x48e5a
	cmp r0, #0	@ 00048e5a 0028
.org 0x48e5c
	beq.n 0x48e62	@ 00048e5c 01d0
.org 0x48e5e
	adds r0, r2, #1	@ 00048e5e 501c
.org 0x48e60
	strb r0, [r3, #0]	@ 00048e60 1870
.org 0x48e62
	movs r1, #168	@ 00048e62 a821
.org 0x48e64
	lsls r1, r1, #1	@ 00048e64 4900
.org 0x48e66
	adds r0, r5, r1	@ 00048e66 6818
.org 0x48e68
	ldrb r1, [r0, #0]	@ 00048e68 0178
.org 0x48e6a
	mov r8, r0	@ 00048e6a 8046
.org 0x48e6c
	cmp r1, #255	@ 00048e6c ff29
.org 0x48e6e
	bne.n 0x48ee8	@ 00048e6e 3bd1
.org 0x48e70
	adds r0, r4, #0	@ 00048e70 201c
.org 0x48e72
	adds r0, #189	@ 00048e72 bd30
.org 0x48e74
	ldrb r0, [r0, #0]	@ 00048e74 0078
.org 0x48e76
	cmp r0, #0	@ 00048e76 0028
.org 0x48e78
	beq.n 0x48e96	@ 00048e78 0dd0
.org 0x48e7a
	adds r0, r5, #0	@ 00048e7a 281c
.org 0x48e7c
	bl 0x3aabc	@ 00048e7c f1f71efe
.org 0x48e80
	lsls r0, r0, #24	@ 00048e80 0006
.org 0x48e82
	cmp r0, #0	@ 00048e82 0028
.org 0x48e84
	beq.n 0x48e96	@ 00048e84 07d0
.org 0x48e86
	adds r1, r4, #0	@ 00048e86 211c
.org 0x48e88
	adds r1, #84	@ 00048e88 5431
.org 0x48e8a
	movs r0, #1	@ 00048e8a 0120
.org 0x48e8c
	bl 0xd0c88	@ 00048e8c 87f0fcfe
.org 0x48e90
	movs r0, #42	@ 00048e90 2a20
.org 0x48e92
	bl 0x2b10	@ 00048e92 b9f73dfe
.org 0x48e96
	ldr r0, [pc, #72]	@ 00048e96 1248
.org 0x48e98
	adds r2, r5, r0	@ 00048e98 2a18
.org 0x48e9a
	ldrb r0, [r2, #0]	@ 00048e9a 1078
.org 0x48e9c
	movs r1, #64	@ 00048e9c 4021
.org 0x48e9e
	orrs r0, r1	@ 00048e9e 0843
.org 0x48ea0
	strb r0, [r2, #0]	@ 00048ea0 1070
.org 0x48ea2
	ldrb r1, [r4, #10]	@ 00048ea2 a17a
.org 0x48ea4
	movs r0, #254	@ 00048ea4 fe20
.org 0x48ea6
	ands r0, r1	@ 00048ea6 0840
.org 0x48ea8
	movs r2, #0	@ 00048ea8 0022
.org 0x48eaa
	movs r1, #253	@ 00048eaa fd21
.org 0x48eac
	ands r0, r1	@ 00048eac 0840
.org 0x48eae
	strb r0, [r4, #10]	@ 00048eae a072
.org 0x48eb0
	adds r0, r4, #0	@ 00048eb0 201c
.org 0x48eb2
	adds r0, #140	@ 00048eb2 8c30
.org 0x48eb4
	str r2, [r0, #0]	@ 00048eb4 0260
.org 0x48eb6
	adds r0, #4	@ 00048eb6 0430
.org 0x48eb8
	str r2, [r0, #0]	@ 00048eb8 0260
.org 0x48eba
	adds r0, #4	@ 00048eba 0430
.org 0x48ebc
	strb r2, [r0, #0]	@ 00048ebc 0270
.org 0x48ebe
	ldrb r1, [r4, #10]	@ 00048ebe a17a
.org 0x48ec0
	movs r0, #251	@ 00048ec0 fb20
.org 0x48ec2
	ands r0, r1	@ 00048ec2 0840
.org 0x48ec4
	strb r0, [r4, #10]	@ 00048ec4 a072
.org 0x48ec6
	ldr r1, [pc, #28]	@ 00048ec6 0749
.org 0x48ec8
	ldrb r0, [r4, #9]	@ 00048ec8 607a
.org 0x48eca
	lsls r0, r0, #2	@ 00048eca 8000
.org 0x48ecc
	adds r0, r0, r1	@ 00048ecc 4018
.org 0x48ece
	movs r1, #3	@ 00048ece 0321
.org 0x48ed0
	str r1, [r4, #12]	@ 00048ed0 e160
.org 0x48ed2
	ldr r0, [r0, #0]	@ 00048ed2 0068
.org 0x48ed4
	ldr r0, [r0, #12]	@ 00048ed4 c068
.org 0x48ed6
	str r0, [r4, #20]	@ 00048ed6 6061
.org 0x48ed8
	b.n 0x490c8	@ 00048ed8 f6e0
.org 0x48eda
	.byte 0x00	@ 00048eda data
.org 0x48edb
	.byte 0x00	@ 00048edb data
.org 0x48edc
	.byte 0x04,0x10,0x00,0x00	@ 00048edc data
.org 0x48ee0
	.byte 0x53,0x01,0x00,0x00	@ 00048ee0 data
.org 0x48ee4
	.byte 0xf8,0x39,0x85,0x08	@ 00048ee4 data
.org 0x48ee8
	adds r0, r4, #0	@ 00048ee8 201c
.org 0x48eea
	bl 0x1cff0	@ 00048eea d4f781f8
.org 0x48eee
	ldrb r0, [r4, #15]	@ 00048eee e07b
.org 0x48ef0
	cmp r0, #0	@ 00048ef0 0028
.org 0x48ef2
	bne.n 0x48f58	@ 00048ef2 31d1
.org 0x48ef4
	adds r0, r4, #0	@ 00048ef4 201c
.org 0x48ef6
	adds r0, #113	@ 00048ef6 7130
.org 0x48ef8
	ldrb r0, [r0, #0]	@ 00048ef8 0078
.org 0x48efa
	strb r0, [r4, #19]	@ 00048efa e074
.org 0x48efc
	ldrb r0, [r4, #19]	@ 00048efc e07c
.org 0x48efe
	lsls r0, r0, #25	@ 00048efe 4006
.org 0x48f00
	lsrs r7, r0, #24	@ 00048f00 070e
.org 0x48f02
	adds r0, r4, #0	@ 00048f02 201c
.org 0x48f04
	adds r0, #140	@ 00048f04 8c30
.org 0x48f06
	ldr r1, [r0, #0]	@ 00048f06 0168
.org 0x48f08
	ldr r0, [pc, #32]	@ 00048f08 0848
.org 0x48f0a
	ands r0, r1	@ 00048f0a 0840
.org 0x48f0c
	cmp r0, #0	@ 00048f0c 0028
.org 0x48f0e
	beq.n 0x48f34	@ 00048f0e 11d0
.org 0x48f10
	movs r0, #128	@ 00048f10 8020
.org 0x48f12
	lsls r0, r0, #5	@ 00048f12 4001
.org 0x48f14
	ands r1, r0	@ 00048f14 0140
.org 0x48f16
	cmp r1, #0	@ 00048f16 0029
.org 0x48f18
	beq.n 0x48f20	@ 00048f18 02d0
.org 0x48f1a
	movs r0, #43	@ 00048f1a 2b20
.org 0x48f1c
	bl 0x2b10	@ 00048f1c b9f7f8fd
.org 0x48f20
	ldr r1, [pc, #12]	@ 00048f20 0349
.org 0x48f22
	ldrb r0, [r4, #19]	@ 00048f22 e07c
.org 0x48f24
	lsls r0, r0, #1	@ 00048f24 4000
.org 0x48f26
	adds r0, r0, r1	@ 00048f26 4018
.org 0x48f28
	ldrh r1, [r0, #0]	@ 00048f28 0188
.org 0x48f2a
	b.n 0x48f40	@ 00048f2a 09e0
.org 0x48f2c
	.byte 0x04,0x10,0x00,0x00	@ 00048f2c data
.org 0x48f30
	.byte 0xbc,0x71,0x85,0x08	@ 00048f30 data
.org 0x48f34
	adds r0, r4, #0	@ 00048f34 201c
.org 0x48f36
	adds r0, #115	@ 00048f36 7330
.org 0x48f38
	ldrb r0, [r0, #0]	@ 00048f38 0078
.org 0x48f3a
	cmp r0, #3	@ 00048f3a 0328
.org 0x48f3c
	bne.n 0x49004	@ 00048f3c 62d1
.org 0x48f3e
	ldr r1, [pc, #20]	@ 00048f3e 0549
.org 0x48f40
	adds r0, r4, #0	@ 00048f40 201c
.org 0x48f42
	bl 0x1cf00	@ 00048f42 d3f7ddff
.org 0x48f46
	adds r0, r4, #0	@ 00048f46 201c
.org 0x48f48
	bl 0x1cff0	@ 00048f48 d4f752f8
.org 0x48f4c
	movs r0, #1	@ 00048f4c 0120
.org 0x48f4e
	strb r0, [r4, #15]	@ 00048f4e e073
.org 0x48f50
	b.n 0x49004	@ 00048f50 58e0
.org 0x48f52
	.byte 0x00	@ 00048f52 data
.org 0x48f53
	.byte 0x00	@ 00048f53 data
.org 0x48f54
	.byte 0x23,0x81,0x00,0x00	@ 00048f54 data
.org 0x48f58
	cmp r0, #1	@ 00048f58 0128
.org 0x48f5a
	bne.n 0x48fc0	@ 00048f5a 31d1
.org 0x48f5c
	ldrb r0, [r4, #19]	@ 00048f5c e07c
.org 0x48f5e
	lsls r0, r0, #25	@ 00048f5e 4006
.org 0x48f60
	lsrs r7, r0, #24	@ 00048f60 070e
.org 0x48f62
	adds r6, r4, #0	@ 00048f62 261c
.org 0x48f64
	adds r6, #140	@ 00048f64 8c36
.org 0x48f66
	ldr r0, [r6, #0]	@ 00048f66 3068
.org 0x48f68
	movs r1, #128	@ 00048f68 8021
.org 0x48f6a
	lsls r1, r1, #5	@ 00048f6a 4901
.org 0x48f6c
	ands r0, r1	@ 00048f6c 0840
.org 0x48f6e
	cmp r0, #0	@ 00048f6e 0028
.org 0x48f70
	beq.n 0x48f78	@ 00048f70 02d0
.org 0x48f72
	movs r0, #43	@ 00048f72 2b20
.org 0x48f74
	bl 0x2b10	@ 00048f74 b9f7ccfd
.org 0x48f78
	ldrb r0, [r4, #18]	@ 00048f78 a07c
.org 0x48f7a
	adds r1, r0, #1	@ 00048f7a 411c
.org 0x48f7c
	strb r1, [r4, #18]	@ 00048f7c a174
.org 0x48f7e
	lsls r0, r0, #24	@ 00048f7e 0006
.org 0x48f80
	lsrs r0, r0, #24	@ 00048f80 000e
.org 0x48f82
	cmp r0, #31	@ 00048f82 1f28
.org 0x48f84
	bls.n 0x49004	@ 00048f84 3ed9
.org 0x48f86
	ldr r1, [pc, #52]	@ 00048f86 0d49
.org 0x48f88
	ldrb r0, [r4, #19]	@ 00048f88 e07c
.org 0x48f8a
	movs r2, #4	@ 00048f8a 0422
.org 0x48f8c
	subs r2, r2, r0	@ 00048f8c 121a
.org 0x48f8e
	lsls r2, r2, #16	@ 00048f8e 1204
.org 0x48f90
	lsrs r2, r2, #16	@ 00048f90 120c
.org 0x48f92
	adds r0, r4, #0	@ 00048f92 201c
.org 0x48f94
	movs r3, #2	@ 00048f94 0223
.org 0x48f96
	bl 0x1cfc8	@ 00048f96 d4f717f8
.org 0x48f9a
	adds r0, r4, #0	@ 00048f9a 201c
.org 0x48f9c
	bl 0x1cff0	@ 00048f9c d4f728f8
.org 0x48fa0
	movs r1, #0	@ 00048fa0 0021
.org 0x48fa2
	str r1, [r6, #0]	@ 00048fa2 3160
.org 0x48fa4
	adds r0, r4, #0	@ 00048fa4 201c
.org 0x48fa6
	adds r0, #144	@ 00048fa6 9030
.org 0x48fa8
	str r1, [r0, #0]	@ 00048fa8 0160
.org 0x48faa
	adds r0, #4	@ 00048faa 0430
.org 0x48fac
	strb r1, [r0, #0]	@ 00048fac 0170
.org 0x48fae
	ldrb r1, [r4, #10]	@ 00048fae a17a
.org 0x48fb0
	movs r0, #251	@ 00048fb0 fb20
.org 0x48fb2
	ands r0, r1	@ 00048fb2 0840
.org 0x48fb4
	strb r0, [r4, #10]	@ 00048fb4 a072
.org 0x48fb6
	movs r0, #2	@ 00048fb6 0220
.org 0x48fb8
	strb r0, [r4, #15]	@ 00048fb8 e073
.org 0x48fba
	b.n 0x49004	@ 00048fba 23e0
.org 0x48fbc
	.byte 0x25,0x81,0x00,0x00	@ 00048fbc data
.org 0x48fc0
	adds r0, r4, #0	@ 00048fc0 201c
.org 0x48fc2
	adds r0, #113	@ 00048fc2 7130
.org 0x48fc4
	ldrb r1, [r0, #0]	@ 00048fc4 0178
.org 0x48fc6
	movs r0, #4	@ 00048fc6 0420
.org 0x48fc8
	subs r0, r0, r1	@ 00048fc8 401a
.org 0x48fca
	strb r0, [r4, #19]	@ 00048fca e074
.org 0x48fcc
	ldrb r0, [r4, #19]	@ 00048fcc e07c
.org 0x48fce
	lsls r0, r0, #25	@ 00048fce 4006
.org 0x48fd0
	lsrs r7, r0, #24	@ 00048fd0 070e
.org 0x48fd2
	adds r0, r4, #0	@ 00048fd2 201c
.org 0x48fd4
	adds r0, #115	@ 00048fd4 7330
.org 0x48fd6
	ldrb r0, [r0, #0]	@ 00048fd6 0078
.org 0x48fd8
	cmp r0, #3	@ 00048fd8 0328
.org 0x48fda
	bne.n 0x49004	@ 00048fda 13d1
.org 0x48fdc
	ldr r1, [pc, #28]	@ 00048fdc 0749
.org 0x48fde
	adds r2, r5, r1	@ 00048fde 6a18
.org 0x48fe0
	ldrb r0, [r2, #0]	@ 00048fe0 1078
.org 0x48fe2
	movs r1, #64	@ 00048fe2 4021
.org 0x48fe4
	orrs r0, r1	@ 00048fe4 0843
.org 0x48fe6
	strb r0, [r2, #0]	@ 00048fe6 1070
.org 0x48fe8
	ldr r1, [pc, #20]	@ 00048fe8 0549
.org 0x48fea
	ldrb r0, [r4, #9]	@ 00048fea 607a
.org 0x48fec
	lsls r0, r0, #2	@ 00048fec 8000
.org 0x48fee
	adds r0, r0, r1	@ 00048fee 4018
.org 0x48ff0
	movs r1, #2	@ 00048ff0 0221
.org 0x48ff2
	str r1, [r4, #12]	@ 00048ff2 e160
.org 0x48ff4
	ldr r0, [r0, #0]	@ 00048ff4 0068
.org 0x48ff6
	ldr r0, [r0, #8]	@ 00048ff6 8068
.org 0x48ff8
	str r0, [r4, #20]	@ 00048ff8 6061
.org 0x48ffa
	b.n 0x490c8	@ 00048ffa 65e0
.org 0x48ffc
	.byte 0x53,0x01,0x00,0x00	@ 00048ffc data
.org 0x49000
	.byte 0xf8,0x39,0x85,0x08	@ 00049000 data
.org 0x49004
	ldrb r0, [r5, #10]	@ 00049004 a87a
.org 0x49006
	lsrs r2, r0, #4	@ 00049006 0209
.org 0x49008
	movs r0, #1	@ 00049008 0120
.org 0x4900a
	ands r2, r0	@ 0004900a 0240
.org 0x4900c
	cmp r2, #0	@ 0004900c 002a
.org 0x4900e
	beq.n 0x49018	@ 0004900e 03d0
.org 0x49010
	ldrb r1, [r4, #10]	@ 00049010 a17a
.org 0x49012
	movs r0, #16	@ 00049012 1020
.org 0x49014
	orrs r0, r1	@ 00049014 0843
.org 0x49016
	b.n 0x4901e	@ 00049016 02e0
.org 0x49018
	ldrb r1, [r4, #10]	@ 00049018 a17a
.org 0x4901a
	movs r0, #239	@ 0004901a ef20
.org 0x4901c
	ands r0, r1	@ 0004901c 0840
.org 0x4901e
	strb r0, [r4, #10]	@ 0004901e a072
.org 0x49020
	adds r1, r2, #0	@ 00049020 111c
.org 0x49022
	adds r0, r4, #0	@ 00049022 201c
.org 0x49024
	adds r0, #76	@ 00049024 4c30
.org 0x49026
	strb r1, [r0, #0]	@ 00049026 0170
.org 0x49028
	adds r3, r4, #0	@ 00049028 231c
.org 0x4902a
	adds r3, #74	@ 0004902a 4a33
.org 0x4902c
	lsls r1, r1, #4	@ 0004902c 0901
.org 0x4902e
	ldrb r2, [r3, #0]	@ 0004902e 1a78
.org 0x49030
	movs r0, #17	@ 00049030 1120
.org 0x49032
	negs r0, r0	@ 00049032 4042
.org 0x49034
	ands r0, r2	@ 00049034 1040
.org 0x49036
	orrs r0, r1	@ 00049036 0843
.org 0x49038
	strb r0, [r3, #0]	@ 00049038 1870
.org 0x4903a
	adds r0, r5, #0	@ 0004903a 281c
.org 0x4903c
	adds r0, #113	@ 0004903c 7130
.org 0x4903e
	ldrb r0, [r0, #0]	@ 0004903e 0078
.org 0x49040
	lsls r0, r0, #24	@ 00049040 0006
.org 0x49042
	asrs r0, r0, #24	@ 00049042 0016
.org 0x49044
	movs r3, #0	@ 00049044 0023
.org 0x49046
	cmp r0, #3	@ 00049046 0328
.org 0x49048
	bne.n 0x4904c	@ 00049048 00d1
.org 0x4904a
	movs r3, #1	@ 0004904a 0123
.org 0x4904c
	ldrb r1, [r4, #10]	@ 0004904c a17a
.org 0x4904e
	movs r0, #16	@ 0004904e 1020
.org 0x49050
	ands r0, r1	@ 00049050 0840
.org 0x49052
	cmp r0, #0	@ 00049052 0028
.org 0x49054
	beq.n 0x49070	@ 00049054 0cd0
.org 0x49056
	ldr r2, [pc, #20]	@ 00049056 054a
.org 0x49058
	lsls r3, r3, #3	@ 00049058 db00
.org 0x4905a
	mov r1, r8	@ 0004905a 4146
.org 0x4905c
	ldrb r0, [r1, #0]	@ 0004905c 0878
.org 0x4905e
	lsls r0, r0, #4	@ 0004905e 0001
.org 0x49060
	adds r0, r3, r0	@ 00049060 1818
.org 0x49062
	adds r0, r0, r2	@ 00049062 8018
.org 0x49064
	ldr r1, [r5, #84]	@ 00049064 696d
.org 0x49066
	ldr r0, [r0, #0]	@ 00049066 0068
.org 0x49068
	subs r1, r1, r0	@ 00049068 091a
.org 0x4906a
	b.n 0x49084	@ 0004906a 0be0
.org 0x4906c
	.byte 0x4c,0x35,0x85,0x08	@ 0004906c data
.org 0x49070
	ldr r2, [pc, #96]	@ 00049070 184a
.org 0x49072
	lsls r3, r3, #3	@ 00049072 db00
.org 0x49074
	mov r1, r8	@ 00049074 4146
.org 0x49076
	ldrb r0, [r1, #0]	@ 00049076 0878
.org 0x49078
	lsls r0, r0, #4	@ 00049078 0001
.org 0x4907a
	adds r0, r3, r0	@ 0004907a 1818
.org 0x4907c
	adds r0, r0, r2	@ 0004907c 8018
.org 0x4907e
	ldr r1, [r5, #84]	@ 0004907e 696d
.org 0x49080
	ldr r0, [r0, #0]	@ 00049080 0068
.org 0x49082
	adds r1, r1, r0	@ 00049082 0918
.org 0x49084
	str r1, [r4, #84]	@ 00049084 6165
.org 0x49086
	mov r1, r8	@ 00049086 4146
.org 0x49088
	ldrb r0, [r1, #0]	@ 00049088 0878
.org 0x4908a
	lsls r0, r0, #4	@ 0004908a 0001
.org 0x4908c
	adds r0, r3, r0	@ 0004908c 1818
.org 0x4908e
	adds r1, r2, #4	@ 0004908e 111d
.org 0x49090
	adds r0, r0, r1	@ 00049090 4018
.org 0x49092
	ldr r1, [r5, #88]	@ 00049092 a96d
.org 0x49094
	ldr r0, [r0, #0]	@ 00049094 0068
.org 0x49096
	adds r1, r1, r0	@ 00049096 0918
.org 0x49098
	str r1, [r4, #88]	@ 00049098 a165
.org 0x4909a
	ldr r1, [pc, #60]	@ 0004909a 0f49
.org 0x4909c
	mov r2, r8	@ 0004909c 4246
.org 0x4909e
	ldrb r0, [r2, #0]	@ 0004909e 1078
.org 0x490a0
	adds r0, r0, r1	@ 000490a0 4018
.org 0x490a2
	ldrb r1, [r0, #0]	@ 000490a2 0178
.org 0x490a4
	adds r0, r4, #0	@ 000490a4 201c
.org 0x490a6
	adds r0, #36	@ 000490a6 2430

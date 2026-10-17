@ FUN_08089f20  entry 0x08089f20  size 290
.thumb
.org 0x89f20
FUN_08089f20:
	push {r4, r5, r6, lr}	@ 00089f20 70b5
.org 0x89f22
	adds r5, r0, #0	@ 00089f22 051c
.org 0x89f24
	bl 0x1cc9c	@ 00089f24 92f7bafe
.org 0x89f28
	ldrb r1, [r5, #10]	@ 00089f28 a97a
.org 0x89f2a
	movs r0, #1	@ 00089f2a 0120
.org 0x89f2c
	orrs r0, r1	@ 00089f2c 0843
.org 0x89f2e
	movs r1, #2	@ 00089f2e 0221
.org 0x89f30
	orrs r0, r1	@ 00089f30 0843
.org 0x89f32
	movs r6, #0	@ 00089f32 0026
.org 0x89f34
	movs r1, #4	@ 00089f34 0421
.org 0x89f36
	orrs r0, r1	@ 00089f36 0843
.org 0x89f38
	strb r0, [r5, #10]	@ 00089f38 a872
.org 0x89f3a
	adds r4, r5, #0	@ 00089f3a 2c1c
.org 0x89f3c
	adds r4, #116	@ 00089f3c 7434
.org 0x89f3e
	ldr r1, [pc, #40]	@ 00089f3e 0a49
.org 0x89f40
	adds r2, r5, #0	@ 00089f40 2a1c
.org 0x89f42
	adds r2, #84	@ 00089f42 5432
.org 0x89f44
	adds r0, r4, #0	@ 00089f44 201c
.org 0x89f46
	movs r3, #4	@ 00089f46 0423
.org 0x89f48
	bl 0x5760	@ 00089f48 7bf70afc
.org 0x89f4c
	str r5, [r4, #44]	@ 00089f4c e562
.org 0x89f4e
	ldr r0, [pc, #28]	@ 00089f4e 0748
.org 0x89f50
	str r0, [r4, #36]	@ 00089f50 6062
.org 0x89f52
	adds r1, r5, #0	@ 00089f52 291c
.org 0x89f54
	adds r1, #184	@ 00089f54 b831
.org 0x89f56
	ldr r0, [r5, #84]	@ 00089f56 686d
.org 0x89f58
	str r0, [r1, #0]	@ 00089f58 0860
.org 0x89f5a
	ldrb r2, [r5, #16]	@ 00089f5a 2a7c
.org 0x89f5c
	cmp r2, #0	@ 00089f5c 002a
.org 0x89f5e
	beq.n 0x89f70	@ 00089f5e 07d0
.org 0x89f60
	ldrb r0, [r5, #10]	@ 00089f60 a87a
.org 0x89f62
	movs r1, #16	@ 00089f62 1021
.org 0x89f64
	orrs r0, r1	@ 00089f64 0843
.org 0x89f66
	b.n 0x89f76	@ 00089f66 06e0
.org 0x89f68
	.byte 0xcc,0xf3,0x85,0x08	@ 00089f68 data
.org 0x89f6c
	.byte 0x11,0xa1,0x08,0x08	@ 00089f6c data
.org 0x89f70
	ldrb r1, [r5, #10]	@ 00089f70 a97a
.org 0x89f72
	movs r0, #239	@ 00089f72 ef20
.org 0x89f74
	ands r0, r1	@ 00089f74 0840
.org 0x89f76
	strb r0, [r5, #10]	@ 00089f76 a872
.org 0x89f78
	movs r6, #1	@ 00089f78 0126
.org 0x89f7a
	adds r1, r6, #0	@ 00089f7a 311c
.org 0x89f7c
	ands r1, r2	@ 00089f7c 1140
.org 0x89f7e
	adds r0, r5, #0	@ 00089f7e 281c
.org 0x89f80
	adds r0, #76	@ 00089f80 4c30
.org 0x89f82
	movs r4, #0	@ 00089f82 0024
.org 0x89f84
	strb r1, [r0, #0]	@ 00089f84 0170
.org 0x89f86
	adds r3, r5, #0	@ 00089f86 2b1c
.org 0x89f88
	adds r3, #74	@ 00089f88 4a33
.org 0x89f8a
	lsls r1, r1, #4	@ 00089f8a 0901
.org 0x89f8c
	ldrb r2, [r3, #0]	@ 00089f8c 1a78
.org 0x89f8e
	movs r0, #17	@ 00089f8e 1120
.org 0x89f90
	negs r0, r0	@ 00089f90 4042
.org 0x89f92
	ands r0, r2	@ 00089f92 1040
.org 0x89f94
	orrs r0, r1	@ 00089f94 0843
.org 0x89f96
	strb r0, [r3, #0]	@ 00089f96 1870
.org 0x89f98
	adds r0, r5, #0	@ 00089f98 281c
.org 0x89f9a
	adds r0, #188	@ 00089f9a bc30
.org 0x89f9c
	str r4, [r0, #0]	@ 00089f9c 0460
.org 0x89f9e
	ldrb r0, [r5, #17]	@ 00089f9e 687c
.org 0x89fa0
	cmp r0, #1	@ 00089fa0 0128
.org 0x89fa2
	bhi.n 0x89fb2	@ 00089fa2 06d8
.org 0x89fa4
	adds r1, r5, #0	@ 00089fa4 291c
.org 0x89fa6
	adds r1, #192	@ 00089fa6 c031
.org 0x89fa8
	strb r0, [r1, #0]	@ 00089fa8 0870
.org 0x89faa
	adds r0, r5, #0	@ 00089faa 281c
.org 0x89fac
	adds r0, #193	@ 00089fac c130
.org 0x89fae
	strb r4, [r0, #0]	@ 00089fae 0470
.org 0x89fb0
	b.n 0x89fc0	@ 00089fb0 06e0
.org 0x89fb2
	subs r0, #2	@ 00089fb2 0238
.org 0x89fb4
	adds r1, r5, #0	@ 00089fb4 291c
.org 0x89fb6
	adds r1, #192	@ 00089fb6 c031
.org 0x89fb8
	strb r0, [r1, #0]	@ 00089fb8 0870
.org 0x89fba
	adds r0, r5, #0	@ 00089fba 281c
.org 0x89fbc
	adds r0, #193	@ 00089fbc c130
.org 0x89fbe
	strb r6, [r0, #0]	@ 00089fbe 0670
.org 0x89fc0
	adds r4, r1, #0	@ 00089fc0 0c1c
.org 0x89fc2
	adds r2, r0, #0	@ 00089fc2 021c
.org 0x89fc4
	adds r1, r5, #0	@ 00089fc4 291c
.org 0x89fc6
	adds r1, #195	@ 00089fc6 c331
.org 0x89fc8
	movs r0, #0	@ 00089fc8 0020
.org 0x89fca
	strb r0, [r1, #0]	@ 00089fca 0870
.org 0x89fcc
	ldrb r0, [r2, #0]	@ 00089fcc 1078
.org 0x89fce
	cmp r0, #0	@ 00089fce 0028
.org 0x89fd0
	beq.n 0x89fe6	@ 00089fd0 09d0
.org 0x89fd2
	ldrb r0, [r4, #0]	@ 00089fd2 2078
.org 0x89fd4
	cmp r0, #0	@ 00089fd4 0028
.org 0x89fd6
	bne.n 0x89fe0	@ 00089fd6 03d1
.org 0x89fd8
	ldr r0, [pc, #0]	@ 00089fd8 0048
.org 0x89fda
	b.n 0x89ffe	@ 00089fda 10e0
.org 0x89fdc
	.byte 0xff,0x5f,0x02,0x00	@ 00089fdc data
.org 0x89fe0
	movs r0, #248	@ 00089fe0 f820
.org 0x89fe2
	lsls r0, r0, #9	@ 00089fe2 4002
.org 0x89fe4
	b.n 0x89ffe	@ 00089fe4 0be0
.org 0x89fe6
	ldrb r0, [r4, #0]	@ 00089fe6 2078
.org 0x89fe8
	cmp r0, #0	@ 00089fe8 0028
.org 0x89fea
	bne.n 0x89ff6	@ 00089fea 04d1
.org 0x89fec
	ldr r0, [r5, #84]	@ 00089fec 686d
.org 0x89fee
	ldr r1, [r5, #88]	@ 00089fee a96d
.org 0x89ff0
	bl 0x8534	@ 00089ff0 7ef7a0fa
.org 0x89ff4
	b.n 0x89ffe	@ 00089ff4 03e0
.org 0x89ff6
	ldr r0, [r5, #84]	@ 00089ff6 686d
.org 0x89ff8
	ldr r1, [r5, #88]	@ 00089ff8 a96d
.org 0x89ffa
	bl 0x8748	@ 00089ffa 7ef7a5fb
.org 0x89ffe
	str r0, [r5, #88]	@ 00089ffe a865
.org 0x8a000
	adds r0, r5, #0	@ 0008a000 281c
.org 0x8a002
	bl 0x7f90c	@ 0008a002 f5f783fc
.org 0x8a006
	cmp r0, #0	@ 0008a006 0028
.org 0x8a008
	beq.n 0x8a020	@ 0008a008 0ad0
.org 0x8a00a
	ldrb r1, [r4, #0]	@ 0008a00a 2178
.org 0x8a00c
	movs r2, #128	@ 0008a00c 8022
.org 0x8a00e
	lsls r2, r2, #6	@ 0008a00e 9201
.org 0x8a010
	adds r0, r2, #0	@ 0008a010 101c
.org 0x8a012
	orrs r1, r0	@ 0008a012 0143
.org 0x8a014
	adds r0, r5, #0	@ 0008a014 281c
.org 0x8a016
	bl 0x1cf00	@ 0008a016 92f773ff
.org 0x8a01a
	adds r0, r5, #0	@ 0008a01a 281c
.org 0x8a01c
	bl 0x1cff0	@ 0008a01c 92f7e8ff
.org 0x8a020
	adds r0, r5, #0	@ 0008a020 281c
.org 0x8a022
	adds r0, #194	@ 0008a022 c230
.org 0x8a024
	movs r2, #0	@ 0008a024 0022
.org 0x8a026
	strb r2, [r0, #0]	@ 0008a026 0270
.org 0x8a028
	ldr r1, [pc, #36]	@ 0008a028 0949
.org 0x8a02a
	ldrb r0, [r5, #9]	@ 0008a02a 687a
.org 0x8a02c
	lsls r0, r0, #2	@ 0008a02c 8000
.org 0x8a02e
	adds r0, r0, r1	@ 0008a02e 4018
.org 0x8a030
	movs r1, #1	@ 0008a030 0121
.org 0x8a032
	str r1, [r5, #12]	@ 0008a032 e960
.org 0x8a034
	ldr r0, [r0, #0]	@ 0008a034 0068
.org 0x8a036
	ldr r0, [r0, #4]	@ 0008a036 4068
.org 0x8a038
	str r0, [r5, #20]	@ 0008a038 6861
.org 0x8a03a
	ldrb r0, [r4, #0]	@ 0008a03a 2078
.org 0x8a03c
	strb r0, [r5, #13]	@ 0008a03c 6873
.org 0x8a03e
	strb r2, [r5, #14]	@ 0008a03e aa73
.org 0x8a040
	strb r2, [r5, #15]	@ 0008a040 ea73

@ FUN_080a6e88  entry 0x080a6e88  size 358
.thumb
.org 0xa6e88
FUN_080a6e88:
	push {r4, r5, lr}	@ 000a6e88 30b5
.org 0xa6e8a
	adds r4, r0, #0	@ 000a6e8a 041c
.org 0xa6e8c
	ldr r5, [r4, #40]	@ 000a6e8c a56a
.org 0xa6e8e
	ldrb r2, [r4, #14]	@ 000a6e8e a27b
.org 0xa6e90
	cmp r2, #0	@ 000a6e90 002a
.org 0xa6e92
	bne.n 0xa6f80	@ 000a6e92 75d1
.org 0xa6e94
	adds r0, r5, #0	@ 000a6e94 281c
.org 0xa6e96
	adds r0, #190	@ 000a6e96 be30
.org 0xa6e98
	ldrb r1, [r0, #0]	@ 000a6e98 0178
.org 0xa6e9a
	cmp r1, #0	@ 000a6e9a 0029
.org 0xa6e9c
	beq.n 0xa6ed8	@ 000a6e9c 1cd0
.org 0xa6e9e
	ldrb r1, [r4, #10]	@ 000a6e9e a17a
.org 0xa6ea0
	movs r0, #254	@ 000a6ea0 fe20
.org 0xa6ea2
	ands r0, r1	@ 000a6ea2 0840
.org 0xa6ea4
	movs r1, #253	@ 000a6ea4 fd21
.org 0xa6ea6
	ands r0, r1	@ 000a6ea6 0840
.org 0xa6ea8
	strb r0, [r4, #10]	@ 000a6ea8 a072
.org 0xa6eaa
	adds r0, r4, #0	@ 000a6eaa 201c
.org 0xa6eac
	adds r0, #140	@ 000a6eac 8c30
.org 0xa6eae
	str r2, [r0, #0]	@ 000a6eae 0260
.org 0xa6eb0
	adds r0, #4	@ 000a6eb0 0430
.org 0xa6eb2
	str r2, [r0, #0]	@ 000a6eb2 0260
.org 0xa6eb4
	adds r0, #4	@ 000a6eb4 0430
.org 0xa6eb6
	strb r2, [r0, #0]	@ 000a6eb6 0270
.org 0xa6eb8
	ldrb r1, [r4, #10]	@ 000a6eb8 a17a
.org 0xa6eba
	movs r0, #251	@ 000a6eba fb20
.org 0xa6ebc
	ands r0, r1	@ 000a6ebc 0840
.org 0xa6ebe
	strb r0, [r4, #10]	@ 000a6ebe a072
.org 0xa6ec0
	ldr r1, [pc, #16]	@ 000a6ec0 0449
.org 0xa6ec2
	ldrb r0, [r4, #9]	@ 000a6ec2 607a
.org 0xa6ec4
	lsls r0, r0, #2	@ 000a6ec4 8000
.org 0xa6ec6
	adds r0, r0, r1	@ 000a6ec6 4018
.org 0xa6ec8
	movs r1, #3	@ 000a6ec8 0321
.org 0xa6eca
	str r1, [r4, #12]	@ 000a6eca e160
.org 0xa6ecc
	ldr r0, [r0, #0]	@ 000a6ecc 0068
.org 0xa6ece
	ldr r0, [r0, #12]	@ 000a6ece c068
.org 0xa6ed0
	b.n 0xa6ffe	@ 000a6ed0 95e0
.org 0xa6ed2
	.byte 0x00	@ 000a6ed2 data
.org 0xa6ed3
	.byte 0x00	@ 000a6ed3 data
.org 0xa6ed4
	.byte 0x40,0xdb,0x85,0x08	@ 000a6ed4 data
.org 0xa6ed8
	adds r0, r4, #0	@ 000a6ed8 201c
.org 0xa6eda
	adds r0, #140	@ 000a6eda 8c30
.org 0xa6edc
	str r1, [r0, #0]	@ 000a6edc 0160
.org 0xa6ede
	adds r0, #4	@ 000a6ede 0430
.org 0xa6ee0
	str r1, [r0, #0]	@ 000a6ee0 0160
.org 0xa6ee2
	adds r0, #4	@ 000a6ee2 0430
.org 0xa6ee4
	strb r1, [r0, #0]	@ 000a6ee4 0170
.org 0xa6ee6
	ldrb r1, [r4, #10]	@ 000a6ee6 a17a
.org 0xa6ee8
	movs r0, #251	@ 000a6ee8 fb20
.org 0xa6eea
	ands r0, r1	@ 000a6eea 0840
.org 0xa6eec
	strb r0, [r4, #10]	@ 000a6eec a072
.org 0xa6eee
	ldr r1, [pc, #60]	@ 000a6eee 0f49
.org 0xa6ef0
	adds r0, r4, #0	@ 000a6ef0 201c
.org 0xa6ef2
	bl 0x1cf00	@ 000a6ef2 76f705f8
.org 0xa6ef6
	ldr r0, [r5, #84]	@ 000a6ef6 686d
.org 0xa6ef8
	ldr r1, [r5, #88]	@ 000a6ef8 a96d
.org 0xa6efa
	str r0, [r4, #84]	@ 000a6efa 6065
.org 0xa6efc
	str r1, [r4, #88]	@ 000a6efc a165
.org 0xa6efe
	ldrb r1, [r4, #10]	@ 000a6efe a17a
.org 0xa6f00
	movs r0, #16	@ 000a6f00 1020
.org 0xa6f02
	ands r0, r1	@ 000a6f02 0840
.org 0xa6f04
	cmp r0, #0	@ 000a6f04 0028
.org 0xa6f06
	beq.n 0xa6f34	@ 000a6f06 15d0
.org 0xa6f08
	ldr r2, [pc, #36]	@ 000a6f08 094a
.org 0xa6f0a
	adds r3, r5, #0	@ 000a6f0a 2b1c
.org 0xa6f0c
	adds r3, #189	@ 000a6f0c bd33
.org 0xa6f0e
	ldrb r0, [r3, #0]	@ 000a6f0e 1878
.org 0xa6f10
	adds r0, #64	@ 000a6f10 4030
.org 0xa6f12
	lsls r0, r0, #24	@ 000a6f12 0006
.org 0xa6f14
	lsrs r0, r0, #23	@ 000a6f14 c00d
.org 0xa6f16
	adds r0, r0, r2	@ 000a6f16 8018
.org 0xa6f18
	movs r5, #0	@ 000a6f18 0025
.org 0xa6f1a
	ldrsh r1, [r0, r5]	@ 000a6f1a 415f
.org 0xa6f1c
	movs r0, #26	@ 000a6f1c 1a20
.org 0xa6f1e
	muls r1, r0	@ 000a6f1e 4143
.org 0xa6f20
	ldr r0, [r4, #84]	@ 000a6f20 606d
.org 0xa6f22
	adds r0, r0, r1	@ 000a6f22 4018
.org 0xa6f24
	str r0, [r4, #84]	@ 000a6f24 6065
.org 0xa6f26
	movs r0, #238	@ 000a6f26 ee20
.org 0xa6f28
	b.n 0xa6f54	@ 000a6f28 14e0
.org 0xa6f2a
	.byte 0x00	@ 000a6f2a data
.org 0xa6f2b
	.byte 0x00	@ 000a6f2b data
.org 0xa6f2c
	.byte 0x08,0x8b,0x00,0x00	@ 000a6f2c data
.org 0xa6f30
	.byte 0x0c,0x93,0x12,0x08	@ 000a6f30 data
.org 0xa6f34
	ldr r2, [pc, #100]	@ 000a6f34 194a
.org 0xa6f36
	adds r3, r5, #0	@ 000a6f36 2b1c
.org 0xa6f38
	adds r3, #189	@ 000a6f38 bd33
.org 0xa6f3a
	ldrb r0, [r3, #0]	@ 000a6f3a 1878
.org 0xa6f3c
	adds r0, #64	@ 000a6f3c 4030
.org 0xa6f3e
	lsls r0, r0, #24	@ 000a6f3e 0006
.org 0xa6f40
	lsrs r0, r0, #23	@ 000a6f40 c00d
.org 0xa6f42
	adds r0, r0, r2	@ 000a6f42 8018
.org 0xa6f44
	movs r5, #0	@ 000a6f44 0025
.org 0xa6f46
	ldrsh r1, [r0, r5]	@ 000a6f46 415f
.org 0xa6f48
	movs r0, #26	@ 000a6f48 1a20
.org 0xa6f4a
	muls r1, r0	@ 000a6f4a 4143
.org 0xa6f4c
	ldr r0, [r4, #84]	@ 000a6f4c 606d
.org 0xa6f4e
	subs r0, r0, r1	@ 000a6f4e 401a
.org 0xa6f50
	str r0, [r4, #84]	@ 000a6f50 6065
.org 0xa6f52
	movs r0, #18	@ 000a6f52 1220
.org 0xa6f54
	strb r0, [r4, #19]	@ 000a6f54 e074
.org 0xa6f56
	ldrb r0, [r3, #0]	@ 000a6f56 1878
.org 0xa6f58
	lsls r0, r0, #1	@ 000a6f58 4000
.org 0xa6f5a
	adds r0, r0, r2	@ 000a6f5a 8018
.org 0xa6f5c
	movs r2, #0	@ 000a6f5c 0022
.org 0xa6f5e
	ldrsh r1, [r0, r2]	@ 000a6f5e 815e
.org 0xa6f60
	movs r0, #26	@ 000a6f60 1a20
.org 0xa6f62
	muls r1, r0	@ 000a6f62 4143
.org 0xa6f64
	ldr r0, [r4, #88]	@ 000a6f64 a06d
.org 0xa6f66
	subs r0, r0, r1	@ 000a6f66 401a
.org 0xa6f68
	str r0, [r4, #88]	@ 000a6f68 a065
.org 0xa6f6a
	ldr r0, [pc, #52]	@ 000a6f6a 0d48
.org 0xa6f6c
	str r0, [r4, #96]	@ 000a6f6c 2066
.org 0xa6f6e
	movs r0, #0	@ 000a6f6e 0020
.org 0xa6f70
	strb r0, [r4, #18]	@ 000a6f70 a074
.org 0xa6f72
	ldrb r0, [r3, #0]	@ 000a6f72 1878
.org 0xa6f74
	adds r1, r4, #0	@ 000a6f74 211c
.org 0xa6f76
	adds r1, #189	@ 000a6f76 bd31
.org 0xa6f78
	strb r0, [r1, #0]	@ 000a6f78 0870
.org 0xa6f7a
	ldrb r0, [r4, #14]	@ 000a6f7a a07b
.org 0xa6f7c
	adds r0, #1	@ 000a6f7c 0130
.org 0xa6f7e
	strb r0, [r4, #14]	@ 000a6f7e a073
.org 0xa6f80
	adds r0, r4, #0	@ 000a6f80 201c
.org 0xa6f82
	bl 0x1cff0	@ 000a6f82 76f735f8
.org 0xa6f86
	ldrb r1, [r4, #18]	@ 000a6f86 a17c
.org 0xa6f88
	adds r0, r1, #1	@ 000a6f88 481c
.org 0xa6f8a
	strb r0, [r4, #18]	@ 000a6f8a a074
.org 0xa6f8c
	movs r0, #1	@ 000a6f8c 0120
.org 0xa6f8e
	ands r0, r1	@ 000a6f8e 0840
.org 0xa6f90
	cmp r0, #0	@ 000a6f90 0028
.org 0xa6f92
	beq.n 0xa6fa4	@ 000a6f92 07d0
.org 0xa6f94
	ldrb r1, [r4, #10]	@ 000a6f94 a17a
.org 0xa6f96
	movs r0, #254	@ 000a6f96 fe20
.org 0xa6f98
	ands r0, r1	@ 000a6f98 0840
.org 0xa6f9a
	b.n 0xa6faa	@ 000a6f9a 06e0
.org 0xa6f9c
	.byte 0x0c,0x93,0x12,0x08	@ 000a6f9c data
.org 0xa6fa0
	.byte 0x80,0xfb,0xff,0xff	@ 000a6fa0 data
.org 0xa6fa4
	ldrb r0, [r4, #10]	@ 000a6fa4 a07a
.org 0xa6fa6
	movs r1, #1	@ 000a6fa6 0121
.org 0xa6fa8
	orrs r0, r1	@ 000a6fa8 0843
.org 0xa6faa
	strb r0, [r4, #10]	@ 000a6faa a072
.org 0xa6fac
	adds r1, r4, #0	@ 000a6fac 211c
.org 0xa6fae
	adds r1, #189	@ 000a6fae bd31
.org 0xa6fb0
	ldrb r0, [r4, #19]	@ 000a6fb0 e07c
.org 0xa6fb2
	ldrb r5, [r1, #0]	@ 000a6fb2 0d78
.org 0xa6fb4
	adds r0, r0, r5	@ 000a6fb4 4019
.org 0xa6fb6
	strb r0, [r1, #0]	@ 000a6fb6 0870
.org 0xa6fb8
	subs r1, #153	@ 000a6fb8 9939
.org 0xa6fba
	strb r0, [r1, #0]	@ 000a6fba 0870
.org 0xa6fbc
	ldr r1, [r4, #88]	@ 000a6fbc a16d
.org 0xa6fbe
	ldr r0, [r4, #96]	@ 000a6fbe 206e
.org 0xa6fc0
	adds r1, r1, r0	@ 000a6fc0 0918
.org 0xa6fc2
	str r1, [r4, #88]	@ 000a6fc2 a165
.org 0xa6fc4
	adds r0, #64	@ 000a6fc4 4030
.org 0xa6fc6
	str r0, [r4, #96]	@ 000a6fc6 2066
.org 0xa6fc8
	cmp r0, #0	@ 000a6fc8 0028
.org 0xa6fca
	ble.n 0xa7000	@ 000a6fca 19dd
.org 0xa6fcc
	ldr r0, [r4, #84]	@ 000a6fcc 606d
.org 0xa6fce
	movs r2, #160	@ 000a6fce a022
.org 0xa6fd0
	lsls r2, r2, #4	@ 000a6fd0 1201
.org 0xa6fd2
	adds r1, r1, r2	@ 000a6fd2 8918
.org 0xa6fd4
	bl 0x7c7c	@ 000a6fd4 60f752fe
.org 0xa6fd8
	lsls r0, r0, #16	@ 000a6fd8 0004
.org 0xa6fda
	cmp r0, #0	@ 000a6fda 0028
.org 0xa6fdc
	beq.n 0xa7000	@ 000a6fdc 10d0
.org 0xa6fde
	adds r1, r4, #0	@ 000a6fde 211c
.org 0xa6fe0
	adds r1, #84	@ 000a6fe0 5431
.org 0xa6fe2
	movs r0, #1	@ 000a6fe2 0120
.org 0xa6fe4
	bl 0xd0c88	@ 000a6fe4 29f050fe
.org 0xa6fe8
	movs r0, #42	@ 000a6fe8 2a20
.org 0xa6fea
	bl 0x2b10	@ 000a6fea 5bf791fd

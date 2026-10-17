@ FUN_080c6e34  entry 0x080c6e34  size 256
.thumb
.org 0xc6e34
FUN_080c6e34:
	push {r4, r5, lr}	@ 000c6e34 30b5
.org 0xc6e36
	adds r4, r0, #0	@ 000c6e36 041c
.org 0xc6e38
	ldr r5, [r4, #40]	@ 000c6e38 a56a
.org 0xc6e3a
	bl 0x1cff0	@ 000c6e3a 56f7d9f8
.org 0xc6e3e
	ldrb r0, [r5, #30]	@ 000c6e3e a87f
.org 0xc6e40
	lsls r0, r0, #8	@ 000c6e40 0002
.org 0xc6e42
	adds r1, r5, #0	@ 000c6e42 291c
.org 0xc6e44
	adds r1, #112	@ 000c6e44 7031
.org 0xc6e46
	ldrb r1, [r1, #0]	@ 000c6e46 0978
.org 0xc6e48
	orrs r0, r1	@ 000c6e48 0843
.org 0xc6e4a
	ldr r1, [pc, #60]	@ 000c6e4a 0f49
.org 0xc6e4c
	cmp r0, r1	@ 000c6e4c 8842
.org 0xc6e4e
	beq.n 0xc6e90	@ 000c6e4e 1fd0
.org 0xc6e50
	ldrb r1, [r4, #10]	@ 000c6e50 a17a
.org 0xc6e52
	movs r0, #254	@ 000c6e52 fe20
.org 0xc6e54
	ands r0, r1	@ 000c6e54 0840
.org 0xc6e56
	movs r2, #0	@ 000c6e56 0022
.org 0xc6e58
	movs r1, #253	@ 000c6e58 fd21
.org 0xc6e5a
	ands r0, r1	@ 000c6e5a 0840
.org 0xc6e5c
	strb r0, [r4, #10]	@ 000c6e5c a072
.org 0xc6e5e
	adds r0, r4, #0	@ 000c6e5e 201c
.org 0xc6e60
	adds r0, #140	@ 000c6e60 8c30
.org 0xc6e62
	str r2, [r0, #0]	@ 000c6e62 0260
.org 0xc6e64
	adds r0, #4	@ 000c6e64 0430
.org 0xc6e66
	str r2, [r0, #0]	@ 000c6e66 0260
.org 0xc6e68
	adds r0, #4	@ 000c6e68 0430
.org 0xc6e6a
	strb r2, [r0, #0]	@ 000c6e6a 0270
.org 0xc6e6c
	ldrb r1, [r4, #10]	@ 000c6e6c a17a
.org 0xc6e6e
	movs r0, #251	@ 000c6e6e fb20
.org 0xc6e70
	ands r0, r1	@ 000c6e70 0840
.org 0xc6e72
	strb r0, [r4, #10]	@ 000c6e72 a072
.org 0xc6e74
	ldr r1, [pc, #20]	@ 000c6e74 0549
.org 0xc6e76
	ldrb r0, [r4, #9]	@ 000c6e76 607a
.org 0xc6e78
	lsls r0, r0, #2	@ 000c6e78 8000
.org 0xc6e7a
	adds r0, r0, r1	@ 000c6e7a 4018
.org 0xc6e7c
	movs r1, #3	@ 000c6e7c 0321
.org 0xc6e7e
	str r1, [r4, #12]	@ 000c6e7e e160
.org 0xc6e80
	ldr r0, [r0, #0]	@ 000c6e80 0068
.org 0xc6e82
	ldr r0, [r0, #12]	@ 000c6e82 c068
.org 0xc6e84
	b.n 0xc6f42	@ 000c6e84 5de0
.org 0xc6e86
	.byte 0x00	@ 000c6e86 data
.org 0xc6e87
	.byte 0x00	@ 000c6e87 data
.org 0xc6e88
	.byte 0x1a,0xa5,0x00,0x00	@ 000c6e88 data
.org 0xc6e8c
	.byte 0xf4,0x49,0x86,0x08	@ 000c6e8c data
.org 0xc6e90
	ldrb r0, [r5, #10]	@ 000c6e90 a87a
.org 0xc6e92
	lsrs r2, r0, #4	@ 000c6e92 0209
.org 0xc6e94
	movs r0, #1	@ 000c6e94 0120
.org 0xc6e96
	ands r2, r0	@ 000c6e96 0240
.org 0xc6e98
	cmp r2, #0	@ 000c6e98 002a
.org 0xc6e9a
	beq.n 0xc6ea4	@ 000c6e9a 03d0
.org 0xc6e9c
	ldrb r1, [r4, #10]	@ 000c6e9c a17a
.org 0xc6e9e
	movs r0, #16	@ 000c6e9e 1020
.org 0xc6ea0
	orrs r0, r1	@ 000c6ea0 0843
.org 0xc6ea2
	b.n 0xc6eaa	@ 000c6ea2 02e0
.org 0xc6ea4
	ldrb r1, [r4, #10]	@ 000c6ea4 a17a
.org 0xc6ea6
	movs r0, #239	@ 000c6ea6 ef20
.org 0xc6ea8
	ands r0, r1	@ 000c6ea8 0840
.org 0xc6eaa
	strb r0, [r4, #10]	@ 000c6eaa a072
.org 0xc6eac
	adds r1, r2, #0	@ 000c6eac 111c
.org 0xc6eae
	adds r0, r4, #0	@ 000c6eae 201c
.org 0xc6eb0
	adds r0, #76	@ 000c6eb0 4c30
.org 0xc6eb2
	strb r1, [r0, #0]	@ 000c6eb2 0170
.org 0xc6eb4
	adds r3, r4, #0	@ 000c6eb4 231c
.org 0xc6eb6
	adds r3, #74	@ 000c6eb6 4a33
.org 0xc6eb8
	lsls r1, r1, #4	@ 000c6eb8 0901
.org 0xc6eba
	ldrb r2, [r3, #0]	@ 000c6eba 1a78
.org 0xc6ebc
	movs r0, #17	@ 000c6ebc 1120
.org 0xc6ebe
	negs r0, r0	@ 000c6ebe 4042
.org 0xc6ec0
	ands r0, r2	@ 000c6ec0 1040
.org 0xc6ec2
	orrs r0, r1	@ 000c6ec2 0843
.org 0xc6ec4
	strb r0, [r3, #0]	@ 000c6ec4 1870
.org 0xc6ec6
	adds r0, r5, #0	@ 000c6ec6 281c
.org 0xc6ec8
	adds r0, #113	@ 000c6ec8 7130
.org 0xc6eca
	ldrb r0, [r0, #0]	@ 000c6eca 0078
.org 0xc6ecc
	lsls r0, r0, #24	@ 000c6ecc 0006
.org 0xc6ece
	asrs r0, r0, #24	@ 000c6ece 0016
.org 0xc6ed0
	cmp r0, #0	@ 000c6ed0 0028
.org 0xc6ed2
	bne.n 0xc6ee8	@ 000c6ed2 09d1
.org 0xc6ed4
	ldr r0, [r5, #88]	@ 000c6ed4 a86d
.org 0xc6ed6
	ldr r1, [pc, #12]	@ 000c6ed6 0349
.org 0xc6ed8
	adds r0, r0, r1	@ 000c6ed8 4018
.org 0xc6eda
	str r0, [r4, #88]	@ 000c6eda a065
.org 0xc6edc
	movs r2, #200	@ 000c6edc c822
.org 0xc6ede
	lsls r2, r2, #5	@ 000c6ede 5201
.org 0xc6ee0
	b.n 0xc6ef0	@ 000c6ee0 06e0
.org 0xc6ee2
	.byte 0x00	@ 000c6ee2 data
.org 0xc6ee3
	.byte 0x00	@ 000c6ee3 data
.org 0xc6ee4
	.byte 0x00,0xff,0xff,0xff	@ 000c6ee4 data
.org 0xc6ee8
	ldr r0, [r5, #88]	@ 000c6ee8 a86d
.org 0xc6eea
	str r0, [r4, #88]	@ 000c6eea a065
.org 0xc6eec
	movs r2, #208	@ 000c6eec d022
.org 0xc6eee
	lsls r2, r2, #5	@ 000c6eee 5201
.org 0xc6ef0
	ldrb r1, [r4, #10]	@ 000c6ef0 a17a
.org 0xc6ef2
	movs r0, #16	@ 000c6ef2 1020
.org 0xc6ef4
	ands r0, r1	@ 000c6ef4 0840
.org 0xc6ef6
	cmp r0, #0	@ 000c6ef6 0028
.org 0xc6ef8
	beq.n 0xc6f00	@ 000c6ef8 02d0
.org 0xc6efa
	ldr r0, [r5, #84]	@ 000c6efa 686d
.org 0xc6efc
	adds r0, r0, r2	@ 000c6efc 8018
.org 0xc6efe
	b.n 0xc6f04	@ 000c6efe 01e0
.org 0xc6f00
	ldr r0, [r5, #84]	@ 000c6f00 686d
.org 0xc6f02
	subs r0, r0, r2	@ 000c6f02 801a
.org 0xc6f04
	str r0, [r4, #84]	@ 000c6f04 6065
.org 0xc6f06
	ldrb r0, [r4, #13]	@ 000c6f06 607b
.org 0xc6f08
	cmp r0, #0	@ 000c6f08 0028
.org 0xc6f0a
	bne.n 0xc6f28	@ 000c6f0a 0dd1
.org 0xc6f0c
	ldrb r0, [r5, #15]	@ 000c6f0c e87b
.org 0xc6f0e
	cmp r0, #2	@ 000c6f0e 0228
.org 0xc6f10
	bne.n 0xc6f44	@ 000c6f10 18d1
.org 0xc6f12
	ldr r1, [pc, #16]	@ 000c6f12 0449
.org 0xc6f14
	adds r0, r4, #0	@ 000c6f14 201c
.org 0xc6f16
	bl 0x1cf00	@ 000c6f16 55f7f3ff
.org 0xc6f1a
	ldrb r0, [r4, #13]	@ 000c6f1a 607b
.org 0xc6f1c
	adds r0, #1	@ 000c6f1c 0130
.org 0xc6f1e
	strb r0, [r4, #13]	@ 000c6f1e 6073
.org 0xc6f20
	b.n 0xc6f44	@ 000c6f20 10e0
.org 0xc6f22
	.byte 0x00	@ 000c6f22 data
.org 0xc6f23
	.byte 0x00	@ 000c6f23 data
.org 0xc6f24
	.byte 0x03,0xa6,0x00,0x00	@ 000c6f24 data
.org 0xc6f28
	adds r0, r4, #0	@ 000c6f28 201c
.org 0xc6f2a
	adds r0, #115	@ 000c6f2a 7330
.org 0xc6f2c
	ldrb r0, [r0, #0]	@ 000c6f2c 0078
.org 0xc6f2e
	cmp r0, #3	@ 000c6f2e 0328
.org 0xc6f30
	bne.n 0xc6f44	@ 000c6f30 08d1
.org 0xc6f32
	ldr r1, [pc, #24]	@ 000c6f32 0649

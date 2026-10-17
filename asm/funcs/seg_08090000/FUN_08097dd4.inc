@ FUN_08097dd4  entry 0x08097dd4  size 454
.thumb
.org 0x97dd4
FUN_08097dd4:
	push {r4, r5, lr}	@ 00097dd4 30b5
.org 0x97dd6
	sub sp, #8	@ 00097dd6 82b0
.org 0x97dd8
	adds r4, r0, #0	@ 00097dd8 041c
.org 0x97dda
	adds r0, #140	@ 00097dda 8c30
.org 0x97ddc
	ldr r2, [r0, #0]	@ 00097ddc 0268
.org 0x97dde
	movs r0, #128	@ 00097dde 8020
.org 0x97de0
	lsls r0, r0, #2	@ 00097de0 8000
.org 0x97de2
	ands r0, r2	@ 00097de2 1040
.org 0x97de4
	cmp r0, #0	@ 00097de4 0028
.org 0x97de6
	beq.n 0x97e08	@ 00097de6 0fd0
.org 0x97de8
	ldr r1, [pc, #24]	@ 00097de8 0649
.org 0x97dea
	ldrb r0, [r4, #9]	@ 00097dea 607a
.org 0x97dec
	lsls r0, r0, #2	@ 00097dec 8000
.org 0x97dee
	adds r0, r0, r1	@ 00097dee 4018
.org 0x97df0
	movs r1, #2	@ 00097df0 0221
.org 0x97df2
	str r1, [r4, #12]	@ 00097df2 e160
.org 0x97df4
	ldr r0, [r0, #0]	@ 00097df4 0068
.org 0x97df6
	ldr r0, [r0, #8]	@ 00097df6 8068
.org 0x97df8
	str r0, [r4, #20]	@ 00097df8 6061
.org 0x97dfa
	adds r0, r4, #0	@ 00097dfa 201c
.org 0x97dfc
	bl 0x97fc4	@ 00097dfc 00f0e2f8
.org 0x97e00
	b.n 0x97fb6	@ 00097e00 d9e0
.org 0x97e02
	.byte 0x00	@ 00097e02 data
.org 0x97e03
	.byte 0x00	@ 00097e03 data
.org 0x97e04
	.byte 0x40,0xdb,0x85,0x08	@ 00097e04 data
.org 0x97e08
	adds r0, r4, #0	@ 00097e08 201c
.org 0x97e0a
	adds r0, #192	@ 00097e0a c030
.org 0x97e0c
	ldr r1, [r0, #0]	@ 00097e0c 0168
.org 0x97e0e
	adds r5, r0, #0	@ 00097e0e 051c
.org 0x97e10
	cmp r1, #0	@ 00097e10 0029
.org 0x97e12
	bne.n 0x97e3c	@ 00097e12 13d1
.org 0x97e14
	movs r0, #1	@ 00097e14 0120
.org 0x97e16
	ands r2, r0	@ 00097e16 0240
.org 0x97e18
	cmp r2, #0	@ 00097e18 002a
.org 0x97e1a
	beq.n 0x97e36	@ 00097e1a 0cd0
.org 0x97e1c
	ldr r2, [pc, #84]	@ 00097e1c 154a
.org 0x97e1e
	movs r0, #0	@ 00097e1e 0020
.org 0x97e20
	adds r1, r4, #0	@ 00097e20 211c
.org 0x97e22
	bl 0x2adac	@ 00097e22 92f7c3ff
.org 0x97e26
	str r0, [r5, #0]	@ 00097e26 2860
.org 0x97e28
	cmp r0, #0	@ 00097e28 0028
.org 0x97e2a
	beq.n 0x97e8a	@ 00097e2a 2ed0
.org 0x97e2c
	adds r0, r4, #0	@ 00097e2c 201c
.org 0x97e2e
	adds r0, #116	@ 00097e2e 7430
.org 0x97e30
	ldr r1, [pc, #68]	@ 00097e30 1149
.org 0x97e32
	bl 0x5784	@ 00097e32 6df7a7fc
.org 0x97e36
	ldr r0, [r5, #0]	@ 00097e36 2868
.org 0x97e38
	cmp r0, #0	@ 00097e38 0028
.org 0x97e3a
	beq.n 0x97e8a	@ 00097e3a 26d0
.org 0x97e3c
	ldr r0, [r5, #0]	@ 00097e3c 2868
.org 0x97e3e
	bl 0x2b3e4	@ 00097e3e 93f7d1fa
.org 0x97e42
	cmp r0, #0	@ 00097e42 0028
.org 0x97e44
	bne.n 0x97e7c	@ 00097e44 1ad1
.org 0x97e46
	ldrb r0, [r4, #30]	@ 00097e46 a07f
.org 0x97e48
	lsls r0, r0, #8	@ 00097e48 0002
.org 0x97e4a
	adds r1, r4, #0	@ 00097e4a 211c
.org 0x97e4c
	adds r1, #112	@ 00097e4c 7031
.org 0x97e4e
	ldrb r1, [r1, #0]	@ 00097e4e 0978
.org 0x97e50
	orrs r1, r0	@ 00097e50 0143
.org 0x97e52
	adds r0, r4, #0	@ 00097e52 201c
.org 0x97e54
	adds r0, #113	@ 00097e54 7130
.org 0x97e56
	movs r2, #0	@ 00097e56 0022
.org 0x97e58
	ldrsb r2, [r0, r2]	@ 00097e58 8256
.org 0x97e5a
	lsls r2, r2, #16	@ 00097e5a 1204
.org 0x97e5c
	lsrs r2, r2, #16	@ 00097e5c 120c
.org 0x97e5e
	adds r3, r1, #1	@ 00097e5e 4b1c
.org 0x97e60
	lsls r3, r3, #16	@ 00097e60 1b04
.org 0x97e62
	lsrs r3, r3, #16	@ 00097e62 1b0c
.org 0x97e64
	adds r0, r4, #0	@ 00097e64 201c
.org 0x97e66
	bl 0x1cfc8	@ 00097e66 85f7aff8
.org 0x97e6a
	adds r0, r4, #0	@ 00097e6a 201c
.org 0x97e6c
	bl 0x1cff0	@ 00097e6c 85f7c0f8
.org 0x97e70
	b.n 0x97fb6	@ 00097e70 a1e0
.org 0x97e72
	.byte 0x00	@ 00097e72 data
.org 0x97e73
	.byte 0x00	@ 00097e73 data
.org 0x97e74
	.byte 0x50,0x0b,0x86,0x08	@ 00097e74 data
.org 0x97e78
	.byte 0xe4,0x0a,0x86,0x08	@ 00097e78 data
.org 0x97e7c
	adds r0, r4, #0	@ 00097e7c 201c
.org 0x97e7e
	adds r0, #116	@ 00097e7e 7430
.org 0x97e80
	ldr r1, [pc, #76]	@ 00097e80 1349
.org 0x97e82
	bl 0x5784	@ 00097e82 6df77ffc
.org 0x97e86
	movs r0, #0	@ 00097e86 0020
.org 0x97e88
	str r0, [r5, #0]	@ 00097e88 2860
.org 0x97e8a
	ldrb r5, [r4, #13]	@ 00097e8a 657b
.org 0x97e8c
	adds r0, r5, #0	@ 00097e8c 281c
.org 0x97e8e
	cmp r0, #0	@ 00097e8e 0028
.org 0x97e90
	bne.n 0x97ed8	@ 00097e90 22d1
.org 0x97e92
	ldrb r2, [r4, #18]	@ 00097e92 a27c
.org 0x97e94
	adds r2, #2	@ 00097e94 0232
.org 0x97e96
	strb r2, [r4, #18]	@ 00097e96 a274
.org 0x97e98
	adds r3, r4, #0	@ 00097e98 231c
.org 0x97e9a
	adds r3, #180	@ 00097e9a b433
.org 0x97e9c
	ldr r1, [pc, #52]	@ 00097e9c 0d49
.org 0x97e9e
	ldrb r0, [r4, #18]	@ 00097e9e a07c
.org 0x97ea0
	lsls r0, r0, #1	@ 00097ea0 4000
.org 0x97ea2
	adds r0, r0, r1	@ 00097ea2 4018
.org 0x97ea4
	movs r1, #0	@ 00097ea4 0021
.org 0x97ea6
	ldrsh r0, [r0, r1]	@ 00097ea6 405e
.org 0x97ea8
	lsls r1, r0, #2	@ 00097ea8 8100
.org 0x97eaa
	adds r1, r1, r0	@ 00097eaa 0918
.org 0x97eac
	lsls r1, r1, #2	@ 00097eac 8900
.org 0x97eae
	ldr r0, [r3, #0]	@ 00097eae 1868
.org 0x97eb0
	adds r0, r0, r1	@ 00097eb0 4018
.org 0x97eb2
	str r0, [r4, #84]	@ 00097eb2 6065
.org 0x97eb4
	movs r0, #127	@ 00097eb4 7f20
.org 0x97eb6
	ands r2, r0	@ 00097eb6 0240
.org 0x97eb8
	cmp r2, #0	@ 00097eb8 002a
.org 0x97eba
	bne.n 0x97fb0	@ 00097eba 79d1
.org 0x97ebc
	ldrb r0, [r4, #19]	@ 00097ebc e07c
.org 0x97ebe
	adds r0, #1	@ 00097ebe 0130
.org 0x97ec0
	strb r0, [r4, #19]	@ 00097ec0 e074
.org 0x97ec2
	lsls r0, r0, #24	@ 00097ec2 0006
.org 0x97ec4
	lsrs r0, r0, #24	@ 00097ec4 000e
.org 0x97ec6
	cmp r0, #2	@ 00097ec6 0228
.org 0x97ec8
	bne.n 0x97fb0	@ 00097ec8 72d1
.org 0x97eca
	adds r0, r5, #1	@ 00097eca 681c
.org 0x97ecc
	b.n 0x97fae	@ 00097ecc 6fe0
.org 0x97ece
	.byte 0x00	@ 00097ece data
.org 0x97ecf
	.byte 0x00	@ 00097ecf data
.org 0x97ed0
	.byte 0xcc,0x0a,0x86,0x08	@ 00097ed0 data
.org 0x97ed4
	.byte 0x0c,0x93,0x12,0x08	@ 00097ed4 data
.org 0x97ed8
	cmp r0, #1	@ 00097ed8 0128
.org 0x97eda
	bne.n 0x97f44	@ 00097eda 33d1
.org 0x97edc
	movs r0, #156	@ 00097edc 9c20
.org 0x97ede
	lsls r0, r0, #1	@ 00097ede 4000
.org 0x97ee0
	bl 0x2b10	@ 00097ee0 6af716fe
.org 0x97ee4
	ldr r0, [r4, #84]	@ 00097ee4 606d
.org 0x97ee6
	ldr r1, [pc, #84]	@ 00097ee6 1549
.org 0x97ee8
	adds r0, r0, r1	@ 00097ee8 4018
.org 0x97eea
	str r0, [sp, #0]	@ 00097eea 0090
.org 0x97eec
	ldr r0, [r4, #88]	@ 00097eec a06d
.org 0x97eee
	movs r1, #168	@ 00097eee a821
.org 0x97ef0
	lsls r1, r1, #5	@ 00097ef0 4901
.org 0x97ef2
	adds r0, r0, r1	@ 00097ef2 4018
.org 0x97ef4
	str r0, [sp, #4]	@ 00097ef4 0190
.org 0x97ef6
	mov r0, sp	@ 00097ef6 6846
.org 0x97ef8
	movs r1, #0	@ 00097ef8 0021
.org 0x97efa
	bl 0xc3490	@ 00097efa 2bf0c9fa
.org 0x97efe
	ldr r0, [r4, #84]	@ 00097efe 606d
.org 0x97f00
	movs r1, #144	@ 00097f00 9021
.org 0x97f02
	lsls r1, r1, #4	@ 00097f02 0901
.org 0x97f04
	adds r0, r0, r1	@ 00097f04 4018
.org 0x97f06
	str r0, [sp, #0]	@ 00097f06 0090
.org 0x97f08
	mov r0, sp	@ 00097f08 6846
.org 0x97f0a
	movs r1, #1	@ 00097f0a 0121
.org 0x97f0c
	bl 0xc3490	@ 00097f0c 2bf0c0fa
.org 0x97f10
	ldr r1, [pc, #44]	@ 00097f10 0b49
.org 0x97f12
	adds r0, r4, #0	@ 00097f12 201c
.org 0x97f14
	adds r0, #113	@ 00097f14 7130
.org 0x97f16
	movs r2, #0	@ 00097f16 0022
.org 0x97f18
	ldrsb r2, [r0, r2]	@ 00097f18 8256
.org 0x97f1a
	lsls r2, r2, #16	@ 00097f1a 1204
.org 0x97f1c
	lsrs r2, r2, #16	@ 00097f1c 120c
.org 0x97f1e
	ldrb r0, [r4, #30]	@ 00097f1e a07f
.org 0x97f20
	lsls r0, r0, #8	@ 00097f20 0002
.org 0x97f22
	adds r3, r4, #0	@ 00097f22 231c
.org 0x97f24
	adds r3, #112	@ 00097f24 7033
.org 0x97f26
	ldrb r3, [r3, #0]	@ 00097f26 1b78
.org 0x97f28
	orrs r3, r0	@ 00097f28 0343
.org 0x97f2a
	adds r0, r4, #0	@ 00097f2a 201c
.org 0x97f2c
	bl 0x1cfc8	@ 00097f2c 85f74cf8
.org 0x97f30
	movs r0, #64	@ 00097f30 4020
.org 0x97f32
	strb r0, [r4, #19]	@ 00097f32 e074
.org 0x97f34
	ldrb r0, [r4, #13]	@ 00097f34 607b
.org 0x97f36
	adds r0, #1	@ 00097f36 0130
.org 0x97f38
	b.n 0x97fae	@ 00097f38 39e0
.org 0x97f3a
	.byte 0x00	@ 00097f3a data
.org 0x97f3b
	.byte 0x00	@ 00097f3b data
.org 0x97f3c
	.byte 0x00,0xf7,0xff,0xff	@ 00097f3c data
.org 0x97f40
	.byte 0x01,0x86,0x00,0x00	@ 00097f40 data
.org 0x97f44
	ldrb r0, [r4, #19]	@ 00097f44 e07c
.org 0x97f46
	cmp r0, #62	@ 00097f46 3e28
.org 0x97f48
	beq.n 0x97f52	@ 00097f48 03d0
.org 0x97f4a
	cmp r0, #58	@ 00097f4a 3a28
.org 0x97f4c
	beq.n 0x97f52	@ 00097f4c 01d0
.org 0x97f4e
	cmp r0, #54	@ 00097f4e 3628
.org 0x97f50
	bne.n 0x97f74	@ 00097f50 10d1
.org 0x97f52
	movs r1, #134	@ 00097f52 8621
.org 0x97f54
	lsls r1, r1, #8	@ 00097f54 0902
.org 0x97f56
	adds r0, r4, #0	@ 00097f56 201c
.org 0x97f58
	adds r0, #113	@ 00097f58 7130
.org 0x97f5a
	movs r2, #0	@ 00097f5a 0022
.org 0x97f5c
	ldrsb r2, [r0, r2]	@ 00097f5c 8256
.org 0x97f5e
	lsls r2, r2, #16	@ 00097f5e 1204
.org 0x97f60
	lsrs r2, r2, #16	@ 00097f60 120c
.org 0x97f62
	ldrb r0, [r4, #30]	@ 00097f62 a07f
.org 0x97f64
	lsls r0, r0, #8	@ 00097f64 0002
.org 0x97f66
	adds r3, r4, #0	@ 00097f66 231c
.org 0x97f68
	adds r3, #112	@ 00097f68 7033
.org 0x97f6a
	ldrb r3, [r3, #0]	@ 00097f6a 1b78
.org 0x97f6c
	orrs r3, r0	@ 00097f6c 0343
.org 0x97f6e
	adds r0, r4, #0	@ 00097f6e 201c
.org 0x97f70
	bl 0x1cfc8	@ 00097f70 85f72af8
.org 0x97f74
	ldrb r0, [r4, #19]	@ 00097f74 e07c
.org 0x97f76
	cmp r0, #60	@ 00097f76 3c28
.org 0x97f78
	beq.n 0x97f7e	@ 00097f78 01d0
.org 0x97f7a
	cmp r0, #56	@ 00097f7a 3828
.org 0x97f7c
	bne.n 0x97f9e	@ 00097f7c 0fd1
.org 0x97f7e
	ldr r1, [pc, #64]	@ 00097f7e 1049
.org 0x97f80
	adds r0, r4, #0	@ 00097f80 201c
.org 0x97f82
	adds r0, #113	@ 00097f82 7130
.org 0x97f84
	movs r2, #0	@ 00097f84 0022
.org 0x97f86
	ldrsb r2, [r0, r2]	@ 00097f86 8256
.org 0x97f88
	lsls r2, r2, #16	@ 00097f88 1204
.org 0x97f8a
	lsrs r2, r2, #16	@ 00097f8a 120c
.org 0x97f8c
	ldrb r0, [r4, #30]	@ 00097f8c a07f
.org 0x97f8e
	lsls r0, r0, #8	@ 00097f8e 0002
.org 0x97f90
	adds r3, r4, #0	@ 00097f90 231c
.org 0x97f92
	adds r3, #112	@ 00097f92 7033
.org 0x97f94
	ldrb r3, [r3, #0]	@ 00097f94 1b78
.org 0x97f96
	orrs r3, r0	@ 00097f96 0343
.org 0x97f98
	adds r0, r4, #0	@ 00097f98 201c

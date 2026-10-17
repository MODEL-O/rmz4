@ FUN_08091dd0  entry 0x08091dd0  size 518
.thumb
.org 0x91dd0
FUN_08091dd0:
	push {r4, r5, r6, r7, lr}	@ 00091dd0 f0b5
.org 0x91dd2
	mov r7, sl	@ 00091dd2 5746
.org 0x91dd4
	mov r6, r9	@ 00091dd4 4e46
.org 0x91dd6
	mov r5, r8	@ 00091dd6 4546
.org 0x91dd8
	push {r5, r6, r7}	@ 00091dd8 e0b4
.org 0x91dda
	sub sp, #8	@ 00091dda 82b0
.org 0x91ddc
	adds r7, r0, #0	@ 00091ddc 071c
.org 0x91dde
	ldr r0, [pc, #36]	@ 00091dde 0948
.org 0x91de0
	ldr r4, [r0, #0]	@ 00091de0 0468
.org 0x91de2
	ldrb r0, [r7, #14]	@ 00091de2 b87b
.org 0x91de4
	cmp r0, #0	@ 00091de4 0028
.org 0x91de6
	beq.n 0x91dea	@ 00091de6 00d0
.org 0x91de8
	b.n 0x91fc4	@ 00091de8 ece0
.org 0x91dea
	adds r0, r7, #0	@ 00091dea 381c
.org 0x91dec
	adds r0, #116	@ 00091dec 7430
.org 0x91dee
	ldr r1, [pc, #24]	@ 00091dee 0649
.org 0x91df0
	bl 0x5784	@ 00091df0 73f7c8fc
.org 0x91df4
	ldrb r1, [r4, #10]	@ 00091df4 a17a
.org 0x91df6
	movs r0, #16	@ 00091df6 1020
.org 0x91df8
	ands r0, r1	@ 00091df8 0840
.org 0x91dfa
	cmp r0, #0	@ 00091dfa 0028
.org 0x91dfc
	beq.n 0x91e10	@ 00091dfc 08d0
.org 0x91dfe
	ldr r0, [pc, #12]	@ 00091dfe 0348
.org 0x91e00
	b.n 0x91e14	@ 00091e00 08e0
.org 0x91e02
	.byte 0x00	@ 00091e02 data
.org 0x91e03
	.byte 0x00	@ 00091e03 data
.org 0x91e04
	.byte 0xf0,0xdb,0x02,0x02	@ 00091e04 data
.org 0x91e08
	.byte 0x0c,0x03,0x86,0x08	@ 00091e08 data
.org 0x91e0c
	.byte 0x80,0xfb,0xff,0xff	@ 00091e0c data
.org 0x91e10
	movs r0, #144	@ 00091e10 9020
.org 0x91e12
	lsls r0, r0, #3	@ 00091e12 c000
.org 0x91e14
	str r0, [r7, #92]	@ 00091e14 f865
.org 0x91e16
	ldr r0, [pc, #88]	@ 00091e16 1648
.org 0x91e18
	mov sl, r0	@ 00091e18 8246
.org 0x91e1a
	str r0, [r7, #96]	@ 00091e1a 3866
.org 0x91e1c
	adds r0, r7, #0	@ 00091e1c 381c
.org 0x91e1e
	adds r0, #190	@ 00091e1e be30
.org 0x91e20
	ldrb r0, [r0, #0]	@ 00091e20 0078
.org 0x91e22
	cmp r0, #2	@ 00091e22 0228
.org 0x91e24
	bne.n 0x91e84	@ 00091e24 2ed1
.org 0x91e26
	movs r1, #84	@ 00091e26 5421
.org 0x91e28
	adds r1, r1, r7	@ 00091e28 c919
.org 0x91e2a
	mov r9, r1	@ 00091e2a 8946
.org 0x91e2c
	ldr r0, [pc, #68]	@ 00091e2c 1148
.org 0x91e2e
	mov sl, r0	@ 00091e2e 8246
.org 0x91e30
	ldr r5, [pc, #68]	@ 00091e30 114d
.org 0x91e32
	ldr r0, [r5, #0]	@ 00091e32 2868
.org 0x91e34
	ldr r1, [pc, #68]	@ 00091e34 1149
.org 0x91e36
	mov r8, r1	@ 00091e36 8846
.org 0x91e38
	mov r3, r8	@ 00091e38 4346
.org 0x91e3a
	muls r3, r0	@ 00091e3a 4343
.org 0x91e3c
	ldr r6, [pc, #64]	@ 00091e3c 104e
.org 0x91e3e
	adds r3, r3, r6	@ 00091e3e 9b19
.org 0x91e40
	lsls r3, r3, #1	@ 00091e40 5b00
.org 0x91e42
	lsrs r0, r3, #1	@ 00091e42 5808
.org 0x91e44
	str r0, [r5, #0]	@ 00091e44 2860
.org 0x91e46
	lsrs r3, r3, #17	@ 00091e46 5b0c
.org 0x91e48
	movs r4, #1	@ 00091e48 0124
.org 0x91e4a
	ands r3, r4	@ 00091e4a 2340
.org 0x91e4c
	lsls r3, r3, #4	@ 00091e4c 1b01
.org 0x91e4e
	mov r0, r9	@ 00091e4e 4846
.org 0x91e50
	mov r1, sl	@ 00091e50 5146
.org 0x91e52
	movs r2, #0	@ 00091e52 0022
.org 0x91e54
	bl 0xd4c8c	@ 00091e54 42f01aff
.org 0x91e58
	ldr r0, [r5, #0]	@ 00091e58 2868
.org 0x91e5a
	mov r3, r8	@ 00091e5a 4346
.org 0x91e5c
	muls r3, r0	@ 00091e5c 4343
.org 0x91e5e
	adds r3, r3, r6	@ 00091e5e 9b19
.org 0x91e60
	lsls r3, r3, #1	@ 00091e60 5b00
.org 0x91e62
	lsrs r0, r3, #1	@ 00091e62 5808
.org 0x91e64
	str r0, [r5, #0]	@ 00091e64 2860
.org 0x91e66
	lsrs r3, r3, #17	@ 00091e66 5b0c
.org 0x91e68
	ands r3, r4	@ 00091e68 2340
.org 0x91e6a
	lsls r3, r3, #4	@ 00091e6a 1b01
.org 0x91e6c
	orrs r3, r4	@ 00091e6c 2343
.org 0x91e6e
	b.n 0x91f36	@ 00091e6e 62e0
.org 0x91e70
	.byte 0x00,0xfb,0xff,0xff	@ 00091e70 data
.org 0x91e74
	.byte 0x88,0x03,0x86,0x08	@ 00091e74 data
.org 0x91e78
	.byte 0x38,0xdc,0x02,0x02	@ 00091e78 data
.org 0x91e7c
	.byte 0xfd,0x43,0x03,0x00	@ 00091e7c data
.org 0x91e80
	.byte 0xc3,0x9e,0x26,0x00	@ 00091e80 data
.org 0x91e84
	cmp r0, #0	@ 00091e84 0028
.org 0x91e86
	bne.n 0x91f54	@ 00091e86 65d1
.org 0x91e88
	ldrb r1, [r7, #10]	@ 00091e88 b97a
.org 0x91e8a
	movs r0, #16	@ 00091e8a 1020
.org 0x91e8c
	ands r0, r1	@ 00091e8c 0840
.org 0x91e8e
	cmp r0, #0	@ 00091e8e 0028
.org 0x91e90
	beq.n 0x91ef0	@ 00091e90 2ed0
.org 0x91e92
	movs r0, #84	@ 00091e92 5420
.org 0x91e94
	adds r0, r0, r7	@ 00091e94 c019
.org 0x91e96
	mov r9, r0	@ 00091e96 8146
.org 0x91e98
	ldr r1, [pc, #68]	@ 00091e98 1149
.org 0x91e9a
	mov sl, r1	@ 00091e9a 8a46
.org 0x91e9c
	ldr r5, [pc, #68]	@ 00091e9c 114d
.org 0x91e9e
	ldr r0, [r5, #0]	@ 00091e9e 2868
.org 0x91ea0
	ldr r1, [pc, #68]	@ 00091ea0 1149
.org 0x91ea2
	mov r8, r1	@ 00091ea2 8846
.org 0x91ea4
	mov r3, r8	@ 00091ea4 4346
.org 0x91ea6
	muls r3, r0	@ 00091ea6 4343
.org 0x91ea8
	ldr r6, [pc, #64]	@ 00091ea8 104e
.org 0x91eaa
	adds r3, r3, r6	@ 00091eaa 9b19
.org 0x91eac
	lsls r3, r3, #1	@ 00091eac 5b00
.org 0x91eae
	lsrs r0, r3, #1	@ 00091eae 5808
.org 0x91eb0
	str r0, [r5, #0]	@ 00091eb0 2860
.org 0x91eb2
	lsrs r3, r3, #17	@ 00091eb2 5b0c
.org 0x91eb4
	movs r4, #1	@ 00091eb4 0124
.org 0x91eb6
	ands r3, r4	@ 00091eb6 2340
.org 0x91eb8
	lsls r3, r3, #4	@ 00091eb8 1b01
.org 0x91eba
	orrs r3, r4	@ 00091eba 2343
.org 0x91ebc
	mov r0, r9	@ 00091ebc 4846
.org 0x91ebe
	mov r1, sl	@ 00091ebe 5146
.org 0x91ec0
	movs r2, #0	@ 00091ec0 0022
.org 0x91ec2
	bl 0xd4c8c	@ 00091ec2 42f0e3fe
.org 0x91ec6
	ldr r0, [r5, #0]	@ 00091ec6 2868
.org 0x91ec8
	mov r3, r8	@ 00091ec8 4346
.org 0x91eca
	muls r3, r0	@ 00091eca 4343
.org 0x91ecc
	adds r3, r3, r6	@ 00091ecc 9b19
.org 0x91ece
	lsls r3, r3, #1	@ 00091ece 5b00
.org 0x91ed0
	lsrs r0, r3, #1	@ 00091ed0 5808
.org 0x91ed2
	str r0, [r5, #0]	@ 00091ed2 2860
.org 0x91ed4
	lsrs r3, r3, #17	@ 00091ed4 5b0c
.org 0x91ed6
	ands r3, r4	@ 00091ed6 2340
.org 0x91ed8
	lsls r3, r3, #4	@ 00091ed8 1b01
.org 0x91eda
	orrs r3, r4	@ 00091eda 2343
.org 0x91edc
	b.n 0x91f36	@ 00091edc 2be0
.org 0x91ede
	.byte 0x00	@ 00091ede data
.org 0x91edf
	.byte 0x00	@ 00091edf data
.org 0x91ee0
	.byte 0x88,0x03,0x86,0x08	@ 00091ee0 data
.org 0x91ee4
	.byte 0x38,0xdc,0x02,0x02	@ 00091ee4 data
.org 0x91ee8
	.byte 0xfd,0x43,0x03,0x00	@ 00091ee8 data
.org 0x91eec
	.byte 0xc3,0x9e,0x26,0x00	@ 00091eec data
.org 0x91ef0
	movs r0, #84	@ 00091ef0 5420
.org 0x91ef2
	adds r0, r0, r7	@ 00091ef2 c019
.org 0x91ef4
	mov r9, r0	@ 00091ef4 8146
.org 0x91ef6
	ldr r1, [pc, #76]	@ 00091ef6 1349
.org 0x91ef8
	mov sl, r1	@ 00091ef8 8a46
.org 0x91efa
	ldr r4, [pc, #76]	@ 00091efa 134c
.org 0x91efc
	ldr r0, [r4, #0]	@ 00091efc 2068
.org 0x91efe
	ldr r1, [pc, #76]	@ 00091efe 1349
.org 0x91f00
	mov r8, r1	@ 00091f00 8846
.org 0x91f02
	mov r3, r8	@ 00091f02 4346
.org 0x91f04
	muls r3, r0	@ 00091f04 4343
.org 0x91f06
	ldr r6, [pc, #72]	@ 00091f06 124e
.org 0x91f08
	adds r3, r3, r6	@ 00091f08 9b19
.org 0x91f0a
	lsls r3, r3, #1	@ 00091f0a 5b00
.org 0x91f0c
	lsrs r0, r3, #1	@ 00091f0c 5808
.org 0x91f0e
	str r0, [r4, #0]	@ 00091f0e 2060
.org 0x91f10
	lsrs r3, r3, #17	@ 00091f10 5b0c
.org 0x91f12
	movs r5, #1	@ 00091f12 0125
.org 0x91f14
	ands r3, r5	@ 00091f14 2b40
.org 0x91f16
	lsls r3, r3, #4	@ 00091f16 1b01
.org 0x91f18
	mov r0, r9	@ 00091f18 4846
.org 0x91f1a
	mov r1, sl	@ 00091f1a 5146
.org 0x91f1c
	movs r2, #0	@ 00091f1c 0022
.org 0x91f1e
	bl 0xd4c8c	@ 00091f1e 42f0b5fe
.org 0x91f22
	ldr r0, [r4, #0]	@ 00091f22 2068
.org 0x91f24
	mov r3, r8	@ 00091f24 4346
.org 0x91f26
	muls r3, r0	@ 00091f26 4343
.org 0x91f28
	adds r3, r3, r6	@ 00091f28 9b19
.org 0x91f2a
	lsls r3, r3, #1	@ 00091f2a 5b00
.org 0x91f2c
	lsrs r0, r3, #1	@ 00091f2c 5808
.org 0x91f2e
	str r0, [r4, #0]	@ 00091f2e 2060
.org 0x91f30
	lsrs r3, r3, #17	@ 00091f30 5b0c
.org 0x91f32
	ands r3, r5	@ 00091f32 2b40
.org 0x91f34
	lsls r3, r3, #4	@ 00091f34 1b01
.org 0x91f36
	mov r0, r9	@ 00091f36 4846
.org 0x91f38
	mov r1, sl	@ 00091f38 5146
.org 0x91f3a
	movs r2, #0	@ 00091f3a 0022
.org 0x91f3c
	bl 0xd4c8c	@ 00091f3c 42f0a6fe
.org 0x91f40
	b.n 0x91fbe	@ 00091f40 3de0
.org 0x91f42
	.byte 0x00	@ 00091f42 data
.org 0x91f43
	.byte 0x00	@ 00091f43 data
.org 0x91f44
	.byte 0x88,0x03,0x86,0x08	@ 00091f44 data
.org 0x91f48
	.byte 0x38,0xdc,0x02,0x02	@ 00091f48 data
.org 0x91f4c
	.byte 0xfd,0x43,0x03,0x00	@ 00091f4c data
.org 0x91f50
	.byte 0xc3,0x9e,0x26,0x00	@ 00091f50 data
.org 0x91f54
	ldr r0, [r7, #84]	@ 00091f54 786d
.org 0x91f56
	ldr r1, [r7, #88]	@ 00091f56 b96d
.org 0x91f58
	str r0, [sp, #0]	@ 00091f58 0090
.org 0x91f5a
	str r1, [sp, #4]	@ 00091f5a 0191
.org 0x91f5c
	ldr r0, [sp, #0]	@ 00091f5c 0098
.org 0x91f5e
	movs r1, #192	@ 00091f5e c021
.org 0x91f60
	lsls r1, r1, #2	@ 00091f60 8900
.org 0x91f62
	adds r0, r0, r1	@ 00091f62 4018
.org 0x91f64
	str r0, [sp, #0]	@ 00091f64 0090
.org 0x91f66
	ldr r0, [pc, #180]	@ 00091f66 2d48
.org 0x91f68
	mov r9, r0	@ 00091f68 8146
.org 0x91f6a
	ldr r5, [pc, #180]	@ 00091f6a 2d4d
.org 0x91f6c
	ldr r0, [r5, #0]	@ 00091f6c 2868
.org 0x91f6e
	ldr r1, [pc, #180]	@ 00091f6e 2d49
.org 0x91f70
	mov r8, r1	@ 00091f70 8846
.org 0x91f72
	mov r3, r8	@ 00091f72 4346
.org 0x91f74
	muls r3, r0	@ 00091f74 4343
.org 0x91f76
	ldr r6, [pc, #176]	@ 00091f76 2c4e
.org 0x91f78
	adds r3, r3, r6	@ 00091f78 9b19
.org 0x91f7a
	lsls r3, r3, #1	@ 00091f7a 5b00
.org 0x91f7c
	lsrs r0, r3, #1	@ 00091f7c 5808
.org 0x91f7e
	str r0, [r5, #0]	@ 00091f7e 2860
.org 0x91f80
	lsrs r3, r3, #17	@ 00091f80 5b0c
.org 0x91f82
	movs r4, #1	@ 00091f82 0124
.org 0x91f84
	ands r3, r4	@ 00091f84 2340
.org 0x91f86
	lsls r3, r3, #4	@ 00091f86 1b01
.org 0x91f88
	mov r0, sp	@ 00091f88 6846
.org 0x91f8a
	mov r1, r9	@ 00091f8a 4946
.org 0x91f8c
	movs r2, #0	@ 00091f8c 0022
.org 0x91f8e
	bl 0xd4c8c	@ 00091f8e 42f07dfe
.org 0x91f92
	ldr r0, [sp, #0]	@ 00091f92 0098
.org 0x91f94
	ldr r1, [pc, #148]	@ 00091f94 2549
.org 0x91f96
	adds r0, r0, r1	@ 00091f96 4018
.org 0x91f98
	str r0, [sp, #0]	@ 00091f98 0090
.org 0x91f9a
	ldr r0, [r5, #0]	@ 00091f9a 2868
.org 0x91f9c
	mov r3, r8	@ 00091f9c 4346
.org 0x91f9e
	muls r3, r0	@ 00091f9e 4343
.org 0x91fa0
	adds r3, r3, r6	@ 00091fa0 9b19
.org 0x91fa2
	lsls r3, r3, #1	@ 00091fa2 5b00
.org 0x91fa4
	lsrs r0, r3, #1	@ 00091fa4 5808
.org 0x91fa6
	str r0, [r5, #0]	@ 00091fa6 2860
.org 0x91fa8
	lsrs r3, r3, #17	@ 00091fa8 5b0c
.org 0x91faa
	ands r3, r4	@ 00091faa 2340
.org 0x91fac
	lsls r3, r3, #4	@ 00091fac 1b01
.org 0x91fae
	orrs r3, r4	@ 00091fae 2343
.org 0x91fb0
	mov r0, sp	@ 00091fb0 6846
.org 0x91fb2
	mov r1, r9	@ 00091fb2 4946
.org 0x91fb4
	movs r2, #0	@ 00091fb4 0022
.org 0x91fb6
	bl 0xd4c8c	@ 00091fb6 42f069fe
.org 0x91fba
	mov r0, sl	@ 00091fba 5046
.org 0x91fbc
	str r0, [r7, #96]	@ 00091fbc 3866
.org 0x91fbe
	ldrb r0, [r7, #14]	@ 00091fbe b87b
.org 0x91fc0
	adds r0, #1	@ 00091fc0 0130
.org 0x91fc2
	strb r0, [r7, #14]	@ 00091fc2 b873
.org 0x91fc4
	adds r0, r7, #0	@ 00091fc4 381c
.org 0x91fc6
	bl 0x1cff0	@ 00091fc6 8bf713f8
.org 0x91fca
	ldr r1, [r7, #84]	@ 00091fca 796d
.org 0x91fcc
	ldr r0, [r7, #92]	@ 00091fcc f86d
.org 0x91fce
	adds r3, r1, r0	@ 00091fce 0b18
.org 0x91fd0
	str r3, [r7, #84]	@ 00091fd0 7b65
.org 0x91fd2
	ldr r1, [r7, #88]	@ 00091fd2 b96d
.org 0x91fd4
	ldr r0, [r7, #96]	@ 00091fd4 386e

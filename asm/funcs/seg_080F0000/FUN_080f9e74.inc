@ FUN_080f9e74  entry 0x080f9e74  size 382
.thumb
.org 0xf9e74
FUN_080f9e74:
	push {r4, r5, r6, r7, lr}	@ 000f9e74 f0b5
.org 0xf9e76
	mov r7, sl	@ 000f9e76 5746
.org 0xf9e78
	mov r6, r9	@ 000f9e78 4e46
.org 0xf9e7a
	mov r5, r8	@ 000f9e7a 4546
.org 0xf9e7c
	push {r5, r6, r7}	@ 000f9e7c e0b4
.org 0xf9e7e
	sub sp, #40	@ 000f9e7e 8ab0
.org 0xf9e80
	adds r6, r0, #0	@ 000f9e80 061c
.org 0xf9e82
	ldr r1, [pc, #72]	@ 000f9e82 1249
.org 0xf9e84
	mov r0, sp	@ 000f9e84 6846
.org 0xf9e86
	movs r2, #6	@ 000f9e86 0622
.org 0xf9e88
	bl 0x129258	@ 000f9e88 2ff0e6f9
.org 0xf9e8c
	add r0, sp, #8	@ 000f9e8c 02a8
.org 0xf9e8e
	mov r9, r0	@ 000f9e8e 8146
.org 0xf9e90
	ldr r1, [pc, #60]	@ 000f9e90 0f49
.org 0xf9e92
	movs r2, #6	@ 000f9e92 0622
.org 0xf9e94
	bl 0x129258	@ 000f9e94 2ff0e0f9
.org 0xf9e98
	add r5, sp, #16	@ 000f9e98 04ad
.org 0xf9e9a
	ldr r1, [pc, #56]	@ 000f9e9a 0e49
.org 0xf9e9c
	adds r0, r5, #0	@ 000f9e9c 281c
.org 0xf9e9e
	movs r2, #4	@ 000f9e9e 0422
.org 0xf9ea0
	bl 0x129258	@ 000f9ea0 2ff0daf9
.org 0xf9ea4
	add r2, sp, #20	@ 000f9ea4 05aa
.org 0xf9ea6
	adds r1, r2, #0	@ 000f9ea6 111c
.org 0xf9ea8
	ldr r0, [pc, #44]	@ 000f9ea8 0b48
.org 0xf9eaa
	ldmia r0!, {r3, r4, r7}	@ 000f9eaa 98c8
.org 0xf9eac
	stmia r1!, {r3, r4, r7}	@ 000f9eac 98c1
.org 0xf9eae
	adds r0, r6, #0	@ 000f9eae 301c
.org 0xf9eb0
	adds r0, #180	@ 000f9eb0 b430
.org 0xf9eb2
	ldrb r1, [r0, #0]	@ 000f9eb2 0178
.org 0xf9eb4
	ldrb r0, [r6, #10]	@ 000f9eb4 b07a
.org 0xf9eb6
	lsrs r3, r0, #4	@ 000f9eb6 0309
.org 0xf9eb8
	movs r0, #1	@ 000f9eb8 0120
.org 0xf9eba
	ands r3, r0	@ 000f9eba 0340
.org 0xf9ebc
	cmp r1, #1	@ 000f9ebc 0129
.org 0xf9ebe
	beq.n 0xf9f24	@ 000f9ebe 31d0
.org 0xf9ec0
	cmp r1, #1	@ 000f9ec0 0129
.org 0xf9ec2
	bgt.n 0xf9edc	@ 000f9ec2 0bdc
.org 0xf9ec4
	cmp r1, #0	@ 000f9ec4 0029
.org 0xf9ec6
	beq.n 0xf9ee6	@ 000f9ec6 0ed0
.org 0xf9ec8
	b.n 0xf9ee0	@ 000f9ec8 0ae0
.org 0xf9eca
	.byte 0x00	@ 000f9eca data
.org 0xf9ecb
	.byte 0x00	@ 000f9ecb data
.org 0xf9ecc
	.byte 0x94,0xa4,0x12,0x08	@ 000f9ecc data
.org 0xf9ed0
	.byte 0x9a,0xa4,0x12,0x08	@ 000f9ed0 data
.org 0xf9ed4
	.byte 0xa0,0xa4,0x12,0x08	@ 000f9ed4 data
.org 0xf9ed8
	.byte 0xa4,0xa4,0x12,0x08	@ 000f9ed8 data
.org 0xf9edc
	cmp r1, #2	@ 000f9edc 0229
.org 0xf9ede
	beq.n 0xf9f64	@ 000f9ede 41d0
.org 0xf9ee0
	lsls r1, r1, #2	@ 000f9ee0 8900
.org 0xf9ee2
	mov r8, r1	@ 000f9ee2 8846
.org 0xf9ee4
	b.n 0xf9f9c	@ 000f9ee4 5ae0
.org 0xf9ee6
	ldr r0, [r6, #88]	@ 000f9ee6 b06d
.org 0xf9ee8
	ldr r1, [pc, #52]	@ 000f9ee8 0d49
.org 0xf9eea
	adds r0, r0, r1	@ 000f9eea 4018
.org 0xf9eec
	add r1, sp, #32	@ 000f9eec 08a9
.org 0xf9eee
	str r0, [r1, #4]	@ 000f9eee 4860
.org 0xf9ef0
	movs r4, #0	@ 000f9ef0 0024
.org 0xf9ef2
	mov sl, r1	@ 000f9ef2 8a46
.org 0xf9ef4
	lsls r7, r3, #1	@ 000f9ef4 5f00
.org 0xf9ef6
	mov r8, r4	@ 000f9ef6 a046
.org 0xf9ef8
	mov r5, sp	@ 000f9ef8 6d46
.org 0xf9efa
	movs r2, #0	@ 000f9efa 0022
.org 0xf9efc
	ldrsh r1, [r5, r2]	@ 000f9efc a95e
.org 0xf9efe
	subs r0, r7, #1	@ 000f9efe 781e
.org 0xf9f00
	muls r1, r0	@ 000f9f00 4143
.org 0xf9f02
	ldr r0, [r6, #84]	@ 000f9f02 706d
.org 0xf9f04
	adds r0, r0, r1	@ 000f9f04 4018
.org 0xf9f06
	str r0, [sp, #32]	@ 000f9f06 0890
.org 0xf9f08
	lsls r3, r4, #24	@ 000f9f08 2306
.org 0xf9f0a
	lsrs r3, r3, #24	@ 000f9f0a 1b0e
.org 0xf9f0c
	adds r0, r6, #0	@ 000f9f0c 301c
.org 0xf9f0e
	mov r1, sl	@ 000f9f0e 5146
.org 0xf9f10
	movs r2, #1	@ 000f9f10 0122
.org 0xf9f12
	bl 0x9fd14	@ 000f9f12 a5f7fffe
.org 0xf9f16
	adds r5, #2	@ 000f9f16 0235
.org 0xf9f18
	adds r4, #1	@ 000f9f18 0134
.org 0xf9f1a
	cmp r4, #2	@ 000f9f1a 022c
.org 0xf9f1c
	ble.n 0xf9efa	@ 000f9f1c eddd
.org 0xf9f1e
	b.n 0xf9f9c	@ 000f9f1e 3de0
.org 0xf9f20
	.byte 0x00,0xf4,0xff,0xff	@ 000f9f20 data
.org 0xf9f24
	add r1, sp, #32	@ 000f9f24 08a9
.org 0xf9f26
	ldr r0, [r6, #88]	@ 000f9f26 b06d
.org 0xf9f28
	ldr r4, [pc, #52]	@ 000f9f28 0d4c
.org 0xf9f2a
	adds r0, r0, r4	@ 000f9f2a 0019
.org 0xf9f2c
	str r0, [r1, #4]	@ 000f9f2c 4860
.org 0xf9f2e
	movs r4, #0	@ 000f9f2e 0024
.org 0xf9f30
	mov sl, r1	@ 000f9f30 8a46
.org 0xf9f32
	lsls r7, r3, #1	@ 000f9f32 5f00
.org 0xf9f34
	movs r0, #4	@ 000f9f34 0420
.org 0xf9f36
	mov r8, r0	@ 000f9f36 8046
.org 0xf9f38
	mov r5, r9	@ 000f9f38 4d46
.org 0xf9f3a
	movs r2, #0	@ 000f9f3a 0022
.org 0xf9f3c
	ldrsh r1, [r5, r2]	@ 000f9f3c a95e
.org 0xf9f3e
	subs r0, r7, #1	@ 000f9f3e 781e
.org 0xf9f40
	muls r1, r0	@ 000f9f40 4143
.org 0xf9f42
	ldr r0, [r6, #84]	@ 000f9f42 706d
.org 0xf9f44
	adds r0, r0, r1	@ 000f9f44 4018
.org 0xf9f46
	str r0, [sp, #32]	@ 000f9f46 0890
.org 0xf9f48
	lsls r3, r4, #24	@ 000f9f48 2306
.org 0xf9f4a
	lsrs r3, r3, #24	@ 000f9f4a 1b0e
.org 0xf9f4c
	adds r0, r6, #0	@ 000f9f4c 301c
.org 0xf9f4e
	mov r1, sl	@ 000f9f4e 5146
.org 0xf9f50
	movs r2, #1	@ 000f9f50 0122
.org 0xf9f52
	bl 0xa1098	@ 000f9f52 a7f7a1f8
.org 0xf9f56
	adds r5, #2	@ 000f9f56 0235
.org 0xf9f58
	adds r4, #1	@ 000f9f58 0134
.org 0xf9f5a
	cmp r4, #2	@ 000f9f5a 022c
.org 0xf9f5c
	ble.n 0xf9f3a	@ 000f9f5c eddd
.org 0xf9f5e
	b.n 0xf9f9c	@ 000f9f5e 1de0
.org 0xf9f60
	.byte 0x00,0xee,0xff,0xff	@ 000f9f60 data
.org 0xf9f64
	add r1, sp, #32	@ 000f9f64 08a9
.org 0xf9f66
	ldr r0, [r6, #88]	@ 000f9f66 b06d
.org 0xf9f68
	ldr r4, [pc, #160]	@ 000f9f68 284c
.org 0xf9f6a
	adds r0, r0, r4	@ 000f9f6a 0019
.org 0xf9f6c
	str r0, [r1, #4]	@ 000f9f6c 4860
.org 0xf9f6e
	movs r4, #0	@ 000f9f6e 0024
.org 0xf9f70
	mov sl, r1	@ 000f9f70 8a46
.org 0xf9f72
	lsls r7, r3, #1	@ 000f9f72 5f00
.org 0xf9f74
	movs r0, #8	@ 000f9f74 0820
.org 0xf9f76
	mov r8, r0	@ 000f9f76 8046
.org 0xf9f78
	movs r2, #0	@ 000f9f78 0022
.org 0xf9f7a
	ldrsh r1, [r5, r2]	@ 000f9f7a a95e
.org 0xf9f7c
	subs r0, r7, #1	@ 000f9f7c 781e
.org 0xf9f7e
	muls r1, r0	@ 000f9f7e 4143
.org 0xf9f80
	ldr r0, [r6, #84]	@ 000f9f80 706d
.org 0xf9f82
	adds r0, r0, r1	@ 000f9f82 4018
.org 0xf9f84
	str r0, [sp, #32]	@ 000f9f84 0890
.org 0xf9f86
	lsls r3, r4, #24	@ 000f9f86 2306
.org 0xf9f88
	lsrs r3, r3, #24	@ 000f9f88 1b0e
.org 0xf9f8a
	adds r0, r6, #0	@ 000f9f8a 301c
.org 0xf9f8c
	mov r1, sl	@ 000f9f8c 5146
.org 0xf9f8e
	movs r2, #1	@ 000f9f8e 0122
.org 0xf9f90
	bl 0xa23f8	@ 000f9f90 a8f732fa
.org 0xf9f94
	adds r5, #2	@ 000f9f94 0235
.org 0xf9f96
	adds r4, #1	@ 000f9f96 0134
.org 0xf9f98
	cmp r4, #1	@ 000f9f98 012c
.org 0xf9f9a
	ble.n 0xf9f78	@ 000f9f9a eddd
.org 0xf9f9c
	mov r0, sp	@ 000f9f9c 6846
.org 0xf9f9e
	add r0, r8	@ 000f9f9e 4044
.org 0xf9fa0
	adds r0, #20	@ 000f9fa0 1430
.org 0xf9fa2
	ldr r2, [r0, #0]	@ 000f9fa2 0268
.org 0xf9fa4
	ldr r6, [pc, #104]	@ 000f9fa4 1a4e
.org 0xf9fa6
	movs r1, #129	@ 000f9fa6 8121
.org 0xf9fa8
	lsls r1, r1, #1	@ 000f9fa8 4900
.org 0xf9faa
	adds r0, r6, r1	@ 000f9faa 7018
.org 0xf9fac
	ldrh r3, [r0, #0]	@ 000f9fac 0388
.org 0xf9fae
	adds r3, #127	@ 000f9fae 7f33
.org 0xf9fb0
	ldr r4, [pc, #96]	@ 000f9fb0 184c
.org 0xf9fb2
	adds r1, r4, r1	@ 000f9fb2 6118
.org 0xf9fb4
	ldrh r0, [r1, #0]	@ 000f9fb4 0888
.org 0xf9fb6
	adds r0, #1	@ 000f9fb6 0130
.org 0xf9fb8
	lsls r2, r2, #8	@ 000f9fb8 1202
.org 0xf9fba
	asrs r2, r2, #16	@ 000f9fba 1214
.org 0xf9fbc
	lsls r5, r2, #1	@ 000f9fbc 5500
.org 0xf9fbe
	adds r6, r5, r6	@ 000f9fbe ae19
.org 0xf9fc0
	strh r3, [r6, #0]	@ 000f9fc0 3380
.org 0xf9fc2
	adds r5, r5, r4	@ 000f9fc2 2d19
.org 0xf9fc4
	strh r0, [r5, #0]	@ 000f9fc4 2880
.org 0xf9fc6
	lsls r4, r2, #2	@ 000f9fc6 9400
.org 0xf9fc8
	adds r4, r4, r2	@ 000f9fc8 a418
.org 0xf9fca
	lsls r4, r4, #2	@ 000f9fca a400
.org 0xf9fcc
	ldr r3, [pc, #72]	@ 000f9fcc 124b
.org 0xf9fce
	adds r0, r4, r3	@ 000f9fce e018
.org 0xf9fd0
	ldrh r1, [r6, #0]	@ 000f9fd0 3188
.org 0xf9fd2
	ldrh r2, [r0, #6]	@ 000f9fd2 c288
.org 0xf9fd4
	lsrs r2, r2, #6	@ 000f9fd4 9209
.org 0xf9fd6
	subs r1, r1, r2	@ 000f9fd6 891a
.org 0xf9fd8
	lsls r1, r1, #5	@ 000f9fd8 4901
.org 0xf9fda
	movs r7, #128	@ 000f9fda 8027
.org 0xf9fdc
	lsls r7, r7, #9	@ 000f9fdc 7f02
.org 0xf9fde
	adds r1, r1, r7	@ 000f9fde c919
.org 0xf9fe0
	bl 0x1d30	@ 000f9fe0 07f7a6fe
.org 0xf9fe4
	ldr r0, [pc, #52]	@ 000f9fe4 0d48
.org 0xf9fe6
	adds r4, r4, r0	@ 000f9fe6 2418
.org 0xf9fe8
	ldrh r1, [r5, #0]	@ 000f9fe8 2988
.org 0xf9fea
	ldrb r0, [r4, #7]	@ 000f9fea e079
.org 0xf9fec
	subs r1, r1, r0	@ 000f9fec 091a
.org 0xf9fee
	lsls r1, r1, #5	@ 000f9fee 4901
.org 0xf9ff0
	movs r2, #128	@ 000f9ff0 8022

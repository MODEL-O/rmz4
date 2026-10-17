@ FUN_08065d1c  entry 0x08065d1c  size 466
.thumb
.org 0x65d1c
FUN_08065d1c:
	push {r4, r5, r6, r7, lr}	@ 00065d1c f0b5
.org 0x65d1e
	mov r7, sl	@ 00065d1e 5746
.org 0x65d20
	mov r6, r9	@ 00065d20 4e46
.org 0x65d22
	mov r5, r8	@ 00065d22 4546
.org 0x65d24
	push {r5, r6, r7}	@ 00065d24 e0b4
.org 0x65d26
	sub sp, #80	@ 00065d26 94b0
.org 0x65d28
	adds r7, r0, #0	@ 00065d28 071c
.org 0x65d2a
	ldr r1, [pc, #224]	@ 00065d2a 3849
.org 0x65d2c
	mov r0, sp	@ 00065d2c 6846
.org 0x65d2e
	movs r2, #4	@ 00065d2e 0422
.org 0x65d30
	bl 0x129258	@ 00065d30 c3f092fa
.org 0x65d34
	mov r0, sp	@ 00065d34 6846
.org 0x65d36
	adds r0, #4	@ 00065d36 0430
.org 0x65d38
	str r0, [sp, #72]	@ 00065d38 1290
.org 0x65d3a
	ldr r1, [pc, #212]	@ 00065d3a 3549
.org 0x65d3c
	movs r2, #4	@ 00065d3c 0422
.org 0x65d3e
	bl 0x129258	@ 00065d3e c3f08bfa
.org 0x65d42
	mov r1, sp	@ 00065d42 6946
.org 0x65d44
	adds r1, #8	@ 00065d44 0831
.org 0x65d46
	str r1, [sp, #76]	@ 00065d46 1391
.org 0x65d48
	ldr r5, [pc, #200]	@ 00065d48 324d
.org 0x65d4a
	adds r0, r1, #0	@ 00065d4a 081c
.org 0x65d4c
	adds r1, r5, #0	@ 00065d4c 291c
.org 0x65d4e
	movs r2, #4	@ 00065d4e 0422
.org 0x65d50
	bl 0x129258	@ 00065d50 c3f082fa
.org 0x65d54
	add r2, sp, #12	@ 00065d54 03aa
.org 0x65d56
	mov r9, r2	@ 00065d56 9146
.org 0x65d58
	ldr r4, [pc, #188]	@ 00065d58 2f4c
.org 0x65d5a
	mov r0, r9	@ 00065d5a 4846
.org 0x65d5c
	adds r1, r4, #0	@ 00065d5c 211c
.org 0x65d5e
	movs r2, #4	@ 00065d5e 0422
.org 0x65d60
	bl 0x129258	@ 00065d60 c3f07afa
.org 0x65d64
	add r3, sp, #16	@ 00065d64 04ab
.org 0x65d66
	mov sl, r3	@ 00065d66 9a46
.org 0x65d68
	ldr r1, [pc, #176]	@ 00065d68 2c49
.org 0x65d6a
	mov r0, sl	@ 00065d6a 5046
.org 0x65d6c
	movs r2, #4	@ 00065d6c 0422
.org 0x65d6e
	bl 0x129258	@ 00065d6e c3f073fa
.org 0x65d72
	add r0, sp, #20	@ 00065d72 05a8
.org 0x65d74
	mov r8, r0	@ 00065d74 8046
.org 0x65d76
	adds r1, r5, #0	@ 00065d76 291c
.org 0x65d78
	movs r2, #4	@ 00065d78 0422
.org 0x65d7a
	bl 0x129258	@ 00065d7a c3f06dfa
.org 0x65d7e
	add r5, sp, #24	@ 00065d7e 06ad
.org 0x65d80
	adds r0, r5, #0	@ 00065d80 281c
.org 0x65d82
	adds r1, r4, #0	@ 00065d82 211c
.org 0x65d84
	movs r2, #4	@ 00065d84 0422
.org 0x65d86
	bl 0x129258	@ 00065d86 c3f067fa
.org 0x65d8a
	add r6, sp, #28	@ 00065d8a 07ae
.org 0x65d8c
	ldr r1, [sp, #72]	@ 00065d8c 1299
.org 0x65d8e
	str r1, [sp, #40]	@ 00065d8e 0a91
.org 0x65d90
	ldr r2, [sp, #76]	@ 00065d90 139a
.org 0x65d92
	str r2, [sp, #44]	@ 00065d92 0b92
.org 0x65d94
	mov r3, r9	@ 00065d94 4b46
.org 0x65d96
	str r3, [sp, #48]	@ 00065d96 0c93
.org 0x65d98
	add r4, sp, #40	@ 00065d98 0aac
.org 0x65d9a
	adds r0, r6, #0	@ 00065d9a 301c
.org 0x65d9c
	adds r1, r4, #0	@ 00065d9c 211c
.org 0x65d9e
	movs r2, #12	@ 00065d9e 0c22
.org 0x65da0
	bl 0x129258	@ 00065da0 c3f05afa
.org 0x65da4
	mov r0, sl	@ 00065da4 5046
.org 0x65da6
	str r0, [sp, #52]	@ 00065da6 0d90
.org 0x65da8
	mov r1, r8	@ 00065da8 4146
.org 0x65daa
	str r1, [sp, #56]	@ 00065daa 0e91
.org 0x65dac
	str r5, [sp, #60]	@ 00065dac 0f95
.org 0x65dae
	add r1, sp, #52	@ 00065dae 0da9
.org 0x65db0
	adds r0, r4, #0	@ 00065db0 201c
.org 0x65db2
	movs r2, #12	@ 00065db2 0c22
.org 0x65db4
	bl 0x129258	@ 00065db4 c3f050fa
.org 0x65db8
	str r6, [sp, #64]	@ 00065db8 1096
.org 0x65dba
	add r2, sp, #64	@ 00065dba 10aa
.org 0x65dbc
	str r4, [r2, #4]	@ 00065dbc 5460
.org 0x65dbe
	movs r4, #0	@ 00065dbe 0024
.org 0x65dc0
	ldr r0, [pc, #92]	@ 00065dc0 1748
.org 0x65dc2
	ldr r0, [r0, #0]	@ 00065dc2 0068
.org 0x65dc4
	ldr r0, [r0, #84]	@ 00065dc4 406d
.org 0x65dc6
	ldr r1, [r7, #84]	@ 00065dc6 796d
.org 0x65dc8
	subs r0, r0, r1	@ 00065dc8 401a
.org 0x65dca
	ldr r3, [pc, #88]	@ 00065dca 164b
.org 0x65dcc
	adds r0, r0, r3	@ 00065dcc c018
.org 0x65dce
	ldr r1, [pc, #88]	@ 00065dce 1649
.org 0x65dd0
	mov r8, r2	@ 00065dd0 9046
.org 0x65dd2
	cmp r0, r1	@ 00065dd2 8842
.org 0x65dd4
	bls.n 0x65dd8	@ 00065dd4 00d9
.org 0x65dd6
	movs r4, #1	@ 00065dd6 0124
.org 0x65dd8
	adds r0, r7, #0	@ 00065dd8 381c
.org 0x65dda
	bl 0x66160	@ 00065dda 00f0c1f9
.org 0x65dde
	adds r5, r0, #0	@ 00065dde 051c
.org 0x65de0
	adds r0, r7, #0	@ 00065de0 381c
.org 0x65de2
	adds r0, #205	@ 00065de2 cd30
.org 0x65de4
	ldrb r1, [r0, #0]	@ 00065de4 0178
.org 0x65de6
	mov r9, r0	@ 00065de6 8146
.org 0x65de8
	lsls r6, r4, #2	@ 00065de8 a600
.org 0x65dea
	cmp r1, #2	@ 00065dea 0229
.org 0x65dec
	bls.n 0x65e4e	@ 00065dec 2fd9
.org 0x65dee
	subs r0, #1	@ 00065dee 0138
.org 0x65df0
	ldrb r3, [r0, #0]	@ 00065df0 0378
.org 0x65df2
	movs r4, #0	@ 00065df2 0024
.org 0x65df4
	mov r0, sp	@ 00065df4 6846
.org 0x65df6
	ldrb r0, [r0, #0]	@ 00065df6 0078
.org 0x65df8
	lsls r2, r5, #2	@ 00065df8 aa00
.org 0x65dfa
	cmp r0, r3	@ 00065dfa 9842
.org 0x65dfc
	bne.n 0x65e2c	@ 00065dfc 16d1
.org 0x65dfe
	mov r1, r8	@ 00065dfe 4146
.org 0x65e00
	adds r0, r6, r1	@ 00065e00 7018
.org 0x65e02
	ldr r0, [r0, #0]	@ 00065e02 0068
.org 0x65e04
	adds r0, r2, r0	@ 00065e04 1018
.org 0x65e06
	ldr r0, [r0, #0]	@ 00065e06 0068
.org 0x65e08
	strb r4, [r0, #0]	@ 00065e08 0470
.org 0x65e0a
	b.n 0x65e4e	@ 00065e0a 20e0
.org 0x65e0c
	.byte 0x93,0x98,0x12,0x08	@ 00065e0c data
.org 0x65e10
	.byte 0x97,0x98,0x12,0x08	@ 00065e10 data
.org 0x65e14
	.byte 0x9b,0x98,0x12,0x08	@ 00065e14 data
.org 0x65e18
	.byte 0x9f,0x98,0x12,0x08	@ 00065e18 data
.org 0x65e1c
	.byte 0xa3,0x98,0x12,0x08	@ 00065e1c data
.org 0x65e20
	.byte 0xf0,0xdb,0x02,0x02	@ 00065e20 data
.org 0x65e24
	.byte 0xff,0x4f,0x00,0x00	@ 00065e24 data
.org 0x65e28
	.byte 0xfe,0x9f,0x00,0x00	@ 00065e28 data
.org 0x65e2c
	adds r4, #1	@ 00065e2c 0134
.org 0x65e2e
	cmp r4, #1	@ 00065e2e 012c
.org 0x65e30
	bgt.n 0x65e4e	@ 00065e30 0ddc
.org 0x65e32
	mov r2, sp	@ 00065e32 6a46
.org 0x65e34
	adds r0, r2, r4	@ 00065e34 1019
.org 0x65e36
	ldrb r0, [r0, #0]	@ 00065e36 0078
.org 0x65e38
	cmp r0, r3	@ 00065e38 9842
.org 0x65e3a
	bne.n 0x65e2c	@ 00065e3a f7d1
.org 0x65e3c
	mov r3, r8	@ 00065e3c 4346
.org 0x65e3e
	adds r0, r6, r3	@ 00065e3e f018
.org 0x65e40
	ldr r1, [r0, #0]	@ 00065e40 0168
.org 0x65e42
	lsls r0, r5, #2	@ 00065e42 a800
.org 0x65e44
	adds r0, r0, r1	@ 00065e44 4018
.org 0x65e46
	ldr r0, [r0, #0]	@ 00065e46 0068
.org 0x65e48
	adds r0, r0, r4	@ 00065e48 0019
.org 0x65e4a
	movs r1, #0	@ 00065e4a 0021
.org 0x65e4c
	strb r1, [r0, #0]	@ 00065e4c 0170
.org 0x65e4e
	ldr r0, [pc, #112]	@ 00065e4e 1c48
.org 0x65e50
	ldr r1, [pc, #112]	@ 00065e50 1c49
.org 0x65e52
	adds r0, r0, r1	@ 00065e52 4018
.org 0x65e54
	ldrb r1, [r0, #0]	@ 00065e54 0178
.org 0x65e56
	movs r0, #16	@ 00065e56 1020
.org 0x65e58
	ands r0, r1	@ 00065e58 0840
.org 0x65e5a
	cmp r0, #0	@ 00065e5a 0028
.org 0x65e5c
	beq.n 0x65e6c	@ 00065e5c 06d0
.org 0x65e5e
	ldr r0, [pc, #104]	@ 00065e5e 1a48
.org 0x65e60
	ldrb r1, [r0, #4]	@ 00065e60 0179
.org 0x65e62
	movs r0, #4	@ 00065e62 0420
.org 0x65e64
	ands r0, r1	@ 00065e64 0840
.org 0x65e66
	lsls r2, r5, #2	@ 00065e66 aa00
.org 0x65e68
	cmp r0, #0	@ 00065e68 0028
.org 0x65e6a
	beq.n 0x65e7c	@ 00065e6a 07d0
.org 0x65e6c
	mov r2, r8	@ 00065e6c 4246
.org 0x65e6e
	adds r0, r6, r2	@ 00065e6e b018
.org 0x65e70
	ldr r0, [r0, #0]	@ 00065e70 0068
.org 0x65e72
	lsls r2, r5, #2	@ 00065e72 aa00
.org 0x65e74
	adds r0, r2, r0	@ 00065e74 1018
.org 0x65e76
	ldr r1, [r0, #0]	@ 00065e76 0168
.org 0x65e78
	movs r0, #0	@ 00065e78 0020
.org 0x65e7a
	strb r0, [r1, #2]	@ 00065e7a 8870
.org 0x65e7c
	ldr r0, [pc, #76]	@ 00065e7c 1348
.org 0x65e7e
	ldr r0, [r0, #0]	@ 00065e7e 0068
.org 0x65e80
	movs r3, #10	@ 00065e80 0a23
.org 0x65e82
	ldrsh r1, [r0, r3]	@ 00065e82 c15e
.org 0x65e84
	movs r0, #24	@ 00065e84 1820
.org 0x65e86
	subs r0, r0, r1	@ 00065e86 401a
.org 0x65e88
	cmp r0, #19	@ 00065e88 1328
.org 0x65e8a
	ble.n 0x65e9c	@ 00065e8a 07dd
.org 0x65e8c
	mov r1, r8	@ 00065e8c 4146
.org 0x65e8e
	adds r0, r6, r1	@ 00065e8e 7018
.org 0x65e90
	ldr r0, [r0, #0]	@ 00065e90 0068
.org 0x65e92
	adds r0, r2, r0	@ 00065e92 1018
.org 0x65e94
	ldr r1, [r0, #0]	@ 00065e94 0168
.org 0x65e96
	movs r0, #0	@ 00065e96 0020
.org 0x65e98
	strb r0, [r1, #1]	@ 00065e98 4870
.org 0x65e9a
	strb r0, [r1, #0]	@ 00065e9a 0870
.org 0x65e9c
	mov r3, r8	@ 00065e9c 4346
.org 0x65e9e
	adds r0, r6, r3	@ 00065e9e f018
.org 0x65ea0
	ldr r0, [r0, #0]	@ 00065ea0 0068
.org 0x65ea2
	adds r0, r2, r0	@ 00065ea2 1018
.org 0x65ea4
	ldr r0, [r0, #0]	@ 00065ea4 0068
.org 0x65ea6
	movs r1, #4	@ 00065ea6 0421
.org 0x65ea8
	bl 0x6635c	@ 00065ea8 00f058fa
.org 0x65eac
	adds r1, r0, #0	@ 00065eac 011c
.org 0x65eae
	movs r0, #1	@ 00065eae 0120
.org 0x65eb0
	negs r0, r0	@ 00065eb0 4042
.org 0x65eb2
	cmp r1, r0	@ 00065eb2 8142
.org 0x65eb4
	bne.n 0x65ed0	@ 00065eb4 0cd1
.org 0x65eb6
	adds r0, r7, #0	@ 00065eb6 381c
.org 0x65eb8
	bl 0x65fe0	@ 00065eb8 00f092f8
.org 0x65ebc
	b.n 0x65f14	@ 00065ebc 2ae0
.org 0x65ebe
	.byte 0x00	@ 00065ebe data
.org 0x65ebf
	.byte 0x00	@ 00065ebf data
.org 0x65ec0
	.byte 0xb0,0x0a,0x00,0x02	@ 00065ec0 data
.org 0x65ec4
	.byte 0x10,0xc0,0x02,0x00	@ 00065ec4 data
.org 0x65ec8
	.byte 0xb0,0xe8,0x02,0x02	@ 00065ec8 data
.org 0x65ecc
	.byte 0x94,0xed,0x02,0x02	@ 00065ecc data
.org 0x65ed0
	mov r2, sp	@ 00065ed0 6a46
.org 0x65ed2
	adds r0, r2, r1	@ 00065ed2 5018
.org 0x65ed4
	ldrb r3, [r0, #0]	@ 00065ed4 0378
.org 0x65ed6
	cmp r3, #0	@ 00065ed6 002b
.org 0x65ed8
	bne.n 0x65ee6	@ 00065ed8 05d1
.org 0x65eda
	adds r0, r7, #0	@ 00065eda 381c
.org 0x65edc
	adds r0, #183	@ 00065edc b730
.org 0x65ede
	ldrb r0, [r0, #0]	@ 00065ede 0078
.org 0x65ee0
	cmp r0, #1	@ 00065ee0 0128
.org 0x65ee2
	bls.n 0x65ee6	@ 00065ee2 00d9
.org 0x65ee4
	movs r3, #1	@ 00065ee4 0123
.org 0x65ee6
	ldr r0, [pc, #32]	@ 00065ee6 0848
.org 0x65ee8
	adds r0, r3, r0	@ 00065ee8 1818
.org 0x65eea
	ldrb r0, [r0, #0]	@ 00065eea 0078
.org 0x65eec
	movs r1, #0	@ 00065eec 0021

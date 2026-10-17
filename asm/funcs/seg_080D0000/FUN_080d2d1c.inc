@ FUN_080d2d1c  entry 0x080d2d1c  size 638
.thumb
.org 0xd2d1c
FUN_080d2d1c:
	push {r4, r5, r6, r7, lr}	@ 000d2d1c f0b5
.org 0xd2d1e
	mov r7, sl	@ 000d2d1e 5746
.org 0xd2d20
	mov r6, r9	@ 000d2d20 4e46
.org 0xd2d22
	mov r5, r8	@ 000d2d22 4546
.org 0xd2d24
	push {r5, r6, r7}	@ 000d2d24 e0b4
.org 0xd2d26
	sub sp, #16	@ 000d2d26 84b0
.org 0xd2d28
	adds r7, r0, #0	@ 000d2d28 071c
.org 0xd2d2a
	ldr r0, [r7, #40]	@ 000d2d2a b86a
.org 0xd2d2c
	mov r9, r0	@ 000d2d2c 8146
.org 0xd2d2e
	ldrb r6, [r7, #13]	@ 000d2d2e 7e7b
.org 0xd2d30
	cmp r6, #0	@ 000d2d30 002e
.org 0xd2d32
	beq.n 0xd2d3a	@ 000d2d32 02d0
.org 0xd2d34
	cmp r6, #1	@ 000d2d34 012e
.org 0xd2d36
	beq.n 0xd2de8	@ 000d2d36 57d0
.org 0xd2d38
	b.n 0xd2f9a	@ 000d2d38 2fe1
.org 0xd2d3a
	ldrb r0, [r7, #19]	@ 000d2d3a f87c
.org 0xd2d3c
	adds r0, #1	@ 000d2d3c 0130
.org 0xd2d3e
	strb r0, [r7, #19]	@ 000d2d3e f874
.org 0xd2d40
	ldrb r1, [r7, #18]	@ 000d2d40 b97c
.org 0xd2d42
	lsls r0, r0, #24	@ 000d2d42 0006
.org 0xd2d44
	lsrs r0, r0, #24	@ 000d2d44 000e
.org 0xd2d46
	cmp r1, r0	@ 000d2d46 8142
.org 0xd2d48
	bcs.n 0xd2d6e	@ 000d2d48 11d2
.org 0xd2d4a
	subs r0, r1, #1	@ 000d2d4a 481e
.org 0xd2d4c
	strb r0, [r7, #18]	@ 000d2d4c b874
.org 0xd2d4e
	strb r6, [r7, #19]	@ 000d2d4e fe74
.org 0xd2d50
	mov r1, r9	@ 000d2d50 4946
.org 0xd2d52
	adds r1, #140	@ 000d2d52 8c31
.org 0xd2d54
	ldr r0, [r1, #0]	@ 000d2d54 0868
.org 0xd2d56
	movs r4, #1	@ 000d2d56 0124
.org 0xd2d58
	orrs r0, r4	@ 000d2d58 2043
.org 0xd2d5a
	str r0, [r1, #0]	@ 000d2d5a 0860
.org 0xd2d5c
	adds r1, #4	@ 000d2d5c 0431
.org 0xd2d5e
	ldr r0, [r1, #0]	@ 000d2d5e 0868
.org 0xd2d60
	orrs r0, r4	@ 000d2d60 2043
.org 0xd2d62
	str r0, [r1, #0]	@ 000d2d62 0860
.org 0xd2d64
	mov r0, r9	@ 000d2d64 4846
.org 0xd2d66
	bl 0x1d3fc	@ 000d2d66 4af749fb
.org 0xd2d6a
	strb r4, [r7, #17]	@ 000d2d6a 7c74
.org 0xd2d6c
	b.n 0xd2d8c	@ 000d2d6c 0ee0
.org 0xd2d6e
	mov r1, r9	@ 000d2d6e 4946
.org 0xd2d70
	adds r1, #140	@ 000d2d70 8c31
.org 0xd2d72
	ldr r0, [r1, #0]	@ 000d2d72 0868
.org 0xd2d74
	movs r2, #2	@ 000d2d74 0222
.org 0xd2d76
	negs r2, r2	@ 000d2d76 5242
.org 0xd2d78
	ands r0, r2	@ 000d2d78 1040
.org 0xd2d7a
	str r0, [r1, #0]	@ 000d2d7a 0860
.org 0xd2d7c
	adds r1, #4	@ 000d2d7c 0431
.org 0xd2d7e
	ldr r0, [r1, #0]	@ 000d2d7e 0868
.org 0xd2d80
	ands r0, r2	@ 000d2d80 1040
.org 0xd2d82
	str r0, [r1, #0]	@ 000d2d82 0860
.org 0xd2d84
	mov r0, r9	@ 000d2d84 4846
.org 0xd2d86
	bl 0x1d330	@ 000d2d86 4af7d3fa
.org 0xd2d8a
	strb r6, [r7, #17]	@ 000d2d8a 7e74
.org 0xd2d8c
	ldrb r0, [r7, #18]	@ 000d2d8c b87c
.org 0xd2d8e
	cmp r0, #1	@ 000d2d8e 0128
.org 0xd2d90
	bls.n 0xd2d94	@ 000d2d90 00d9
.org 0xd2d92
	b.n 0xd2f9a	@ 000d2d92 02e1
.org 0xd2d94
	adds r1, r7, #0	@ 000d2d94 391c
.org 0xd2d96
	adds r1, #128	@ 000d2d96 8031
.org 0xd2d98
	movs r0, #128	@ 000d2d98 8020
.org 0xd2d9a
	strh r0, [r1, #0]	@ 000d2d9a 0880
.org 0xd2d9c
	movs r0, #48	@ 000d2d9c 3020
.org 0xd2d9e
	bl 0x2b10	@ 000d2d9e 2ff7b7fe
.org 0xd2da2
	ldr r0, [pc, #52]	@ 000d2da2 0d48
.org 0xd2da4
	ldr r1, [pc, #52]	@ 000d2da4 0d49
.org 0xd2da6
	ldrh r1, [r1, #22]	@ 000d2da6 c98a
.org 0xd2da8
	ldrh r2, [r0, #6]	@ 000d2da8 c288
.org 0xd2daa
	lsrs r2, r2, #6	@ 000d2daa 9209
.org 0xd2dac
	subs r1, r1, r2	@ 000d2dac 891a
.org 0xd2dae
	lsls r1, r1, #5	@ 000d2dae 4901
.org 0xd2db0
	movs r2, #128	@ 000d2db0 8022
.org 0xd2db2
	lsls r2, r2, #9	@ 000d2db2 5202
.org 0xd2db4
	adds r1, r1, r2	@ 000d2db4 8918
.org 0xd2db6
	bl 0x1d30	@ 000d2db6 2ef7bbff
.org 0xd2dba
	ldr r0, [pc, #36]	@ 000d2dba 0948
.org 0xd2dbc
	ldr r1, [pc, #36]	@ 000d2dbc 0949
.org 0xd2dbe
	ldrh r1, [r1, #22]	@ 000d2dbe c98a
.org 0xd2dc0
	ldrb r2, [r0, #7]	@ 000d2dc0 c279
.org 0xd2dc2
	subs r1, r1, r2	@ 000d2dc2 891a
.org 0xd2dc4
	lsls r1, r1, #5	@ 000d2dc4 4901
.org 0xd2dc6
	movs r3, #128	@ 000d2dc6 8023
.org 0xd2dc8
	lsls r3, r3, #2	@ 000d2dc8 9b00
.org 0xd2dca
	adds r1, r1, r3	@ 000d2dca c918
.org 0xd2dcc
	bl 0x2208	@ 000d2dcc 2ff71cfa
.org 0xd2dd0
	ldrb r0, [r7, #13]	@ 000d2dd0 787b
.org 0xd2dd2
	adds r0, #1	@ 000d2dd2 0130
.org 0xd2dd4
	strb r0, [r7, #13]	@ 000d2dd4 7873
.org 0xd2dd6
	b.n 0xd2f9a	@ 000d2dd6 e0e0
.org 0xd2dd8
	.byte 0xdc,0x40,0xc4,0x08	@ 000d2dd8 data
.org 0xd2ddc
	.byte 0x40,0xe0,0x02,0x02	@ 000d2ddc data
.org 0xd2de0
	.byte 0xe8,0x40,0xc4,0x08	@ 000d2de0 data
.org 0xd2de4
	.byte 0x40,0xde,0x02,0x02	@ 000d2de4 data
.org 0xd2de8
	ldrb r1, [r7, #18]	@ 000d2de8 b97c
.org 0xd2dea
	adds r0, r1, #1	@ 000d2dea 481c
.org 0xd2dec
	strb r0, [r7, #18]	@ 000d2dec b874
.org 0xd2dee
	movs r0, #3	@ 000d2dee 0320
.org 0xd2df0
	ands r0, r1	@ 000d2df0 0840
.org 0xd2df2
	cmp r0, #1	@ 000d2df2 0128
.org 0xd2df4
	bls.n 0xd2e14	@ 000d2df4 0ed9
.org 0xd2df6
	mov r5, r9	@ 000d2df6 4d46
.org 0xd2df8
	adds r5, #140	@ 000d2df8 8c35
.org 0xd2dfa
	ldr r0, [r5, #0]	@ 000d2dfa 2868
.org 0xd2dfc
	orrs r0, r6	@ 000d2dfc 3043
.org 0xd2dfe
	str r0, [r5, #0]	@ 000d2dfe 2860
.org 0xd2e00
	mov r4, r9	@ 000d2e00 4c46
.org 0xd2e02
	adds r4, #144	@ 000d2e02 9034
.org 0xd2e04
	ldr r0, [r4, #0]	@ 000d2e04 2068
.org 0xd2e06
	orrs r0, r6	@ 000d2e06 3043
.org 0xd2e08
	str r0, [r4, #0]	@ 000d2e08 2060
.org 0xd2e0a
	mov r0, r9	@ 000d2e0a 4846
.org 0xd2e0c
	bl 0x1d3fc	@ 000d2e0c 4af7f6fa
.org 0xd2e10
	strb r6, [r7, #17]	@ 000d2e10 7e74
.org 0xd2e12
	b.n 0xd2e36	@ 000d2e12 10e0
.org 0xd2e14
	mov r5, r9	@ 000d2e14 4d46
.org 0xd2e16
	adds r5, #140	@ 000d2e16 8c35
.org 0xd2e18
	ldr r0, [r5, #0]	@ 000d2e18 2868
.org 0xd2e1a
	movs r1, #2	@ 000d2e1a 0221
.org 0xd2e1c
	negs r1, r1	@ 000d2e1c 4942
.org 0xd2e1e
	ands r0, r1	@ 000d2e1e 0840
.org 0xd2e20
	str r0, [r5, #0]	@ 000d2e20 2860
.org 0xd2e22
	mov r4, r9	@ 000d2e22 4c46
.org 0xd2e24
	adds r4, #144	@ 000d2e24 9034
.org 0xd2e26
	ldr r0, [r4, #0]	@ 000d2e26 2068
.org 0xd2e28
	ands r0, r1	@ 000d2e28 0840
.org 0xd2e2a
	str r0, [r4, #0]	@ 000d2e2a 2060
.org 0xd2e2c
	mov r0, r9	@ 000d2e2c 4846
.org 0xd2e2e
	bl 0x1d330	@ 000d2e2e 4af77ffa
.org 0xd2e32
	movs r0, #0	@ 000d2e32 0020
.org 0xd2e34
	strb r0, [r7, #17]	@ 000d2e34 7874
.org 0xd2e36
	str r5, [sp, #8]	@ 000d2e36 0295
.org 0xd2e38
	str r4, [sp, #12]	@ 000d2e38 0394
.org 0xd2e3a
	movs r0, #128	@ 000d2e3a 8020
.org 0xd2e3c
	adds r0, r0, r7	@ 000d2e3c c019
.org 0xd2e3e
	mov sl, r0	@ 000d2e3e 8246
.org 0xd2e40
	ldrh r0, [r0, #0]	@ 000d2e40 0088
.org 0xd2e42
	cmp r0, #40	@ 000d2e42 2828
.org 0xd2e44
	bne.n 0xd2e5a	@ 000d2e44 09d1
.org 0xd2e46
	ldr r0, [r7, #84]	@ 000d2e46 786d
.org 0xd2e48
	ldr r1, [r7, #88]	@ 000d2e48 b96d
.org 0xd2e4a
	str r0, [sp, #0]	@ 000d2e4a 0090
.org 0xd2e4c
	str r1, [sp, #4]	@ 000d2e4c 0191
.org 0xd2e4e
	mov r0, r9	@ 000d2e4e 4846
.org 0xd2e50
	mov r1, sp	@ 000d2e50 6946
.org 0xd2e52
	movs r2, #3	@ 000d2e52 0322
.org 0xd2e54
	movs r3, #0	@ 000d2e54 0023
.org 0xd2e56
	bl 0xd29c0	@ 000d2e56 fff7b3fd
.org 0xd2e5a
	mov r1, sl	@ 000d2e5a 5146
.org 0xd2e5c
	ldrh r0, [r1, #0]	@ 000d2e5c 0888
.org 0xd2e5e
	movs r1, #18	@ 000d2e5e 1221
.org 0xd2e60
	bl 0x129198	@ 000d2e60 56f09af9
.org 0xd2e64
	lsls r0, r0, #16	@ 000d2e64 0004
.org 0xd2e66
	cmp r0, #0	@ 000d2e66 0028
.org 0xd2e68
	bne.n 0xd2eb4	@ 000d2e68 24d1
.org 0xd2e6a
	ldr r2, [pc, #320]	@ 000d2e6a 504a
.org 0xd2e6c
	mov r8, r2	@ 000d2e6c 9046
.org 0xd2e6e
	ldr r0, [r2, #0]	@ 000d2e6e 1068
.org 0xd2e70
	ldr r5, [pc, #316]	@ 000d2e70 4f4d
.org 0xd2e72
	adds r1, r0, #0	@ 000d2e72 011c
.org 0xd2e74
	muls r1, r5	@ 000d2e74 6943
.org 0xd2e76
	ldr r3, [pc, #316]	@ 000d2e76 4f4b
.org 0xd2e78
	adds r1, r1, r3	@ 000d2e78 c918
.org 0xd2e7a
	lsls r1, r1, #1	@ 000d2e7a 4900
.org 0xd2e7c
	lsrs r6, r1, #1	@ 000d2e7c 4e08
.org 0xd2e7e
	lsrs r1, r1, #17	@ 000d2e7e 490c
.org 0xd2e80
	movs r4, #127	@ 000d2e80 7f24
.org 0xd2e82
	ands r1, r4	@ 000d2e82 2140
.org 0xd2e84
	movs r2, #64	@ 000d2e84 4022
.org 0xd2e86
	subs r1, r2, r1	@ 000d2e86 511a
.org 0xd2e88
	lsls r1, r1, #8	@ 000d2e88 0902
.org 0xd2e8a
	ldr r0, [r7, #84]	@ 000d2e8a 786d
.org 0xd2e8c
	adds r0, r0, r1	@ 000d2e8c 4018
.org 0xd2e8e
	str r0, [sp, #0]	@ 000d2e8e 0090
.org 0xd2e90
	adds r0, r6, #0	@ 000d2e90 301c
.org 0xd2e92
	muls r0, r5	@ 000d2e92 6843
.org 0xd2e94
	adds r0, r0, r3	@ 000d2e94 c018
.org 0xd2e96
	lsls r0, r0, #1	@ 000d2e96 4000
.org 0xd2e98
	lsrs r1, r0, #1	@ 000d2e98 4108
.org 0xd2e9a
	mov r3, r8	@ 000d2e9a 4346
.org 0xd2e9c
	str r1, [r3, #0]	@ 000d2e9c 1960
.org 0xd2e9e
	lsrs r0, r0, #17	@ 000d2e9e 400c
.org 0xd2ea0
	ands r0, r4	@ 000d2ea0 2040
.org 0xd2ea2
	subs r2, r2, r0	@ 000d2ea2 121a
.org 0xd2ea4
	lsls r2, r2, #8	@ 000d2ea4 1202
.org 0xd2ea6
	ldr r0, [r7, #88]	@ 000d2ea6 b86d
.org 0xd2ea8
	adds r0, r0, r2	@ 000d2ea8 8018
.org 0xd2eaa
	str r0, [sp, #4]	@ 000d2eaa 0190
.org 0xd2eac
	movs r0, #1	@ 000d2eac 0120
.org 0xd2eae
	mov r1, sp	@ 000d2eae 6946
.org 0xd2eb0
	bl 0xd0c88	@ 000d2eb0 fdf7eafe
.org 0xd2eb4
	mov r1, sl	@ 000d2eb4 5146
.org 0xd2eb6
	ldrh r0, [r1, #0]	@ 000d2eb6 0888
.org 0xd2eb8
	movs r1, #18	@ 000d2eb8 1221
.org 0xd2eba
	bl 0x129198	@ 000d2eba 56f06df9
.org 0xd2ebe
	lsls r0, r0, #16	@ 000d2ebe 0004
.org 0xd2ec0
	lsrs r0, r0, #16	@ 000d2ec0 000c
.org 0xd2ec2
	cmp r0, #9	@ 000d2ec2 0928
.org 0xd2ec4
	bne.n 0xd2f20	@ 000d2ec4 2cd1
.org 0xd2ec6
	ldr r2, [pc, #228]	@ 000d2ec6 394a
.org 0xd2ec8
	mov r8, r2	@ 000d2ec8 9046
.org 0xd2eca
	ldr r0, [r2, #0]	@ 000d2eca 1068
.org 0xd2ecc
	ldr r3, [pc, #224]	@ 000d2ecc 384b
.org 0xd2ece
	adds r1, r0, #0	@ 000d2ece 011c
.org 0xd2ed0
	muls r1, r3	@ 000d2ed0 5943
.org 0xd2ed2
	ldr r4, [pc, #224]	@ 000d2ed2 384c
.org 0xd2ed4
	adds r1, r1, r4	@ 000d2ed4 0919
.org 0xd2ed6
	lsls r1, r1, #1	@ 000d2ed6 4900
.org 0xd2ed8
	lsrs r6, r1, #1	@ 000d2ed8 4e08
.org 0xd2eda
	lsrs r1, r1, #17	@ 000d2eda 490c
.org 0xd2edc
	movs r5, #31	@ 000d2edc 1f25
.org 0xd2ede
	ands r1, r5	@ 000d2ede 2940
.org 0xd2ee0
	movs r2, #16	@ 000d2ee0 1022
.org 0xd2ee2
	subs r1, r2, r1	@ 000d2ee2 511a
.org 0xd2ee4
	lsls r1, r1, #8	@ 000d2ee4 0902
.org 0xd2ee6
	ldr r0, [r7, #84]	@ 000d2ee6 786d
.org 0xd2ee8
	adds r0, r0, r1	@ 000d2ee8 4018
.org 0xd2eea
	str r0, [sp, #0]	@ 000d2eea 0090
.org 0xd2eec
	adds r0, r6, #0	@ 000d2eec 301c
.org 0xd2eee
	muls r0, r3	@ 000d2eee 5843
.org 0xd2ef0
	adds r0, r0, r4	@ 000d2ef0 0019
.org 0xd2ef2
	lsls r0, r0, #1	@ 000d2ef2 4000
.org 0xd2ef4
	lsrs r1, r0, #1	@ 000d2ef4 4108
.org 0xd2ef6
	lsrs r0, r0, #17	@ 000d2ef6 400c
.org 0xd2ef8
	ands r0, r5	@ 000d2ef8 2840
.org 0xd2efa
	subs r2, r2, r0	@ 000d2efa 121a
.org 0xd2efc
	lsls r2, r2, #8	@ 000d2efc 1202
.org 0xd2efe
	ldr r0, [r7, #88]	@ 000d2efe b86d
.org 0xd2f00
	adds r0, r0, r2	@ 000d2f00 8018
.org 0xd2f02
	str r0, [sp, #4]	@ 000d2f02 0190
.org 0xd2f04
	muls r3, r1	@ 000d2f04 4b43
.org 0xd2f06
	adds r3, r3, r4	@ 000d2f06 1b19
.org 0xd2f08
	lsls r3, r3, #1	@ 000d2f08 5b00
.org 0xd2f0a
	lsrs r0, r3, #1	@ 000d2f0a 5808
.org 0xd2f0c
	mov r1, r8	@ 000d2f0c 4146
.org 0xd2f0e
	str r0, [r1, #0]	@ 000d2f0e 0860
.org 0xd2f10
	lsrs r3, r3, #17	@ 000d2f10 5b0c
.org 0xd2f12
	lsls r3, r3, #24	@ 000d2f12 1b06
.org 0xd2f14
	lsrs r3, r3, #24	@ 000d2f14 1b0e
.org 0xd2f16
	adds r0, r7, #0	@ 000d2f16 381c
.org 0xd2f18
	mov r1, sp	@ 000d2f18 6946
.org 0xd2f1a
	movs r2, #2	@ 000d2f1a 0222
.org 0xd2f1c
	bl 0xd29c0	@ 000d2f1c fff750fd
.org 0xd2f20
	mov r2, sl	@ 000d2f20 5246
.org 0xd2f22
	ldrh r0, [r2, #0]	@ 000d2f22 1088
.org 0xd2f24
	movs r1, #18	@ 000d2f24 1221
.org 0xd2f26
	bl 0x129198	@ 000d2f26 56f037f9
.org 0xd2f2a
	lsls r0, r0, #16	@ 000d2f2a 0004
.org 0xd2f2c
	cmp r0, #0	@ 000d2f2c 0028
.org 0xd2f2e
	bne.n 0xd2f36	@ 000d2f2e 02d1
.org 0xd2f30
	movs r0, #53	@ 000d2f30 3520
.org 0xd2f32
	bl 0x2b10	@ 000d2f32 2ff7edfd
.org 0xd2f36
	mov r3, sl	@ 000d2f36 5346
.org 0xd2f38
	ldrh r0, [r3, #0]	@ 000d2f38 1888
.org 0xd2f3a
	movs r1, #6	@ 000d2f3a 0621
.org 0xd2f3c
	bl 0x129198	@ 000d2f3c 56f02cf9
.org 0xd2f40
	lsls r0, r0, #16	@ 000d2f40 0004
.org 0xd2f42
	cmp r0, #0	@ 000d2f42 0028
.org 0xd2f44
	bne.n 0xd2f60	@ 000d2f44 0cd1
.org 0xd2f46
	ldr r0, [r7, #84]	@ 000d2f46 786d
.org 0xd2f48
	ldr r1, [r7, #88]	@ 000d2f48 b96d
.org 0xd2f4a
	str r0, [sp, #0]	@ 000d2f4a 0090
.org 0xd2f4c
	str r1, [sp, #4]	@ 000d2f4c 0191
.org 0xd2f4e
	ldrb r3, [r7, #18]	@ 000d2f4e bb7c
.org 0xd2f50
	lsrs r3, r3, #1	@ 000d2f50 5b08
.org 0xd2f52
	movs r0, #3	@ 000d2f52 0320
.org 0xd2f54
	ands r3, r0	@ 000d2f54 0340
.org 0xd2f56
	adds r0, r7, #0	@ 000d2f56 381c
.org 0xd2f58
	mov r1, sp	@ 000d2f58 6946
.org 0xd2f5a
	movs r2, #1	@ 000d2f5a 0122
.org 0xd2f5c
	bl 0xd29c0	@ 000d2f5c fff730fd
.org 0xd2f60
	mov r1, sl	@ 000d2f60 5146
.org 0xd2f62
	ldrh r0, [r1, #0]	@ 000d2f62 0888
.org 0xd2f64
	subs r0, #1	@ 000d2f64 0138
.org 0xd2f66
	strh r0, [r1, #0]	@ 000d2f66 0880
.org 0xd2f68
	lsls r0, r0, #16	@ 000d2f68 0004
.org 0xd2f6a
	ldr r1, [pc, #76]	@ 000d2f6a 1349
.org 0xd2f6c
	cmp r0, r1	@ 000d2f6c 8842
.org 0xd2f6e
	bne.n 0xd2f9a	@ 000d2f6e 14d1
.org 0xd2f70
	ldr r2, [sp, #8]	@ 000d2f70 029a
.org 0xd2f72
	ldr r0, [r2, #0]	@ 000d2f72 1068
.org 0xd2f74
	movs r1, #1	@ 000d2f74 0121
.org 0xd2f76
	orrs r0, r1	@ 000d2f76 0843
.org 0xd2f78
	str r0, [r2, #0]	@ 000d2f78 1060
.org 0xd2f7a
	ldr r3, [sp, #12]	@ 000d2f7a 039b
.org 0xd2f7c
	ldr r0, [r3, #0]	@ 000d2f7c 1868
.org 0xd2f7e
	orrs r0, r1	@ 000d2f7e 0843
.org 0xd2f80
	str r0, [r3, #0]	@ 000d2f80 1860
.org 0xd2f82
	mov r0, r9	@ 000d2f82 4846
.org 0xd2f84
	bl 0x1d3fc	@ 000d2f84 4af73afa
.org 0xd2f88
	ldr r1, [pc, #48]	@ 000d2f88 0c49
.org 0xd2f8a
	ldrb r0, [r7, #9]	@ 000d2f8a 787a
.org 0xd2f8c
	lsls r0, r0, #2	@ 000d2f8c 8000
.org 0xd2f8e
	adds r0, r0, r1	@ 000d2f8e 4018
.org 0xd2f90
	movs r1, #2	@ 000d2f90 0221
.org 0xd2f92
	str r1, [r7, #12]	@ 000d2f92 f960
.org 0xd2f94
	ldr r0, [r0, #0]	@ 000d2f94 0068
.org 0xd2f96
	ldr r0, [r0, #8]	@ 000d2f96 8068
.org 0xd2f98
	str r0, [r7, #20]	@ 000d2f98 7861

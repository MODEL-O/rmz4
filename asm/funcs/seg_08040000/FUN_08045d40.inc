@ FUN_08045d40  entry 0x08045d40  size 650
.thumb
.org 0x45d40
FUN_08045d40:
	push {r4, r5, r6, r7, lr}	@ 00045d40 f0b5
.org 0x45d42
	mov r7, r8	@ 00045d42 4746
.org 0x45d44
	push {r7}	@ 00045d44 80b4
.org 0x45d46
	adds r4, r0, #0	@ 00045d46 041c
.org 0x45d48
	ldr r7, [r4, #40]	@ 00045d48 a76a
.org 0x45d4a
	ldrb r1, [r4, #15]	@ 00045d4a e17b
.org 0x45d4c
	adds r2, r1, #0	@ 00045d4c 0a1c
.org 0x45d4e
	cmp r2, #0	@ 00045d4e 002a
.org 0x45d50
	beq.n 0x45d74	@ 00045d50 10d0
.org 0x45d52
	cmp r2, #2	@ 00045d52 022a
.org 0x45d54
	bne.n 0x45d98	@ 00045d54 20d1
.org 0x45d56
	ldr r1, [pc, #24]	@ 00045d56 0649
.org 0x45d58
	ldrb r0, [r4, #9]	@ 00045d58 607a
.org 0x45d5a
	lsls r0, r0, #2	@ 00045d5a 8000
.org 0x45d5c
	adds r0, r0, r1	@ 00045d5c 4018
.org 0x45d5e
	str r2, [r4, #12]	@ 00045d5e e260
.org 0x45d60
	ldr r0, [r0, #0]	@ 00045d60 0068
.org 0x45d62
	ldr r0, [r0, #8]	@ 00045d62 8068
.org 0x45d64
	str r0, [r4, #20]	@ 00045d64 6061
.org 0x45d66
	ldrb r1, [r4, #10]	@ 00045d66 a17a
.org 0x45d68
	movs r0, #254	@ 00045d68 fe20
.org 0x45d6a
	ands r0, r1	@ 00045d6a 0840
.org 0x45d6c
	strb r0, [r4, #10]	@ 00045d6c a072
.org 0x45d6e
	b.n 0x45fda	@ 00045d6e 34e1
.org 0x45d70
	.byte 0xf8,0x39,0x85,0x08	@ 00045d70 data
.org 0x45d74
	ldrb r0, [r7, #12]	@ 00045d74 387b
.org 0x45d76
	cmp r0, #1	@ 00045d76 0128
.org 0x45d78
	bls.n 0x45d9c	@ 00045d78 10d9
.org 0x45d7a
	ldrb r2, [r4, #17]	@ 00045d7a 627c
.org 0x45d7c
	cmp r2, #2	@ 00045d7c 022a
.org 0x45d7e
	bne.n 0x45d98	@ 00045d7e 0bd1
.org 0x45d80
	ldr r1, [pc, #16]	@ 00045d80 0449
.org 0x45d82
	ldrb r0, [r4, #9]	@ 00045d82 607a
.org 0x45d84
	lsls r0, r0, #2	@ 00045d84 8000
.org 0x45d86
	adds r0, r0, r1	@ 00045d86 4018
.org 0x45d88
	str r2, [r4, #12]	@ 00045d88 e260
.org 0x45d8a
	ldr r0, [r0, #0]	@ 00045d8a 0068
.org 0x45d8c
	ldr r0, [r0, #8]	@ 00045d8c 8068
.org 0x45d8e
	str r0, [r4, #20]	@ 00045d8e 6061
.org 0x45d90
	b.n 0x45fda	@ 00045d90 23e1
.org 0x45d92
	.byte 0x00	@ 00045d92 data
.org 0x45d93
	.byte 0x00	@ 00045d93 data
.org 0x45d94
	.byte 0xf8,0x39,0x85,0x08	@ 00045d94 data
.org 0x45d98
	adds r0, r1, #1	@ 00045d98 481c
.org 0x45d9a
	strb r0, [r4, #15]	@ 00045d9a e073
.org 0x45d9c
	ldrb r0, [r4, #14]	@ 00045d9c a07b
.org 0x45d9e
	cmp r0, #1	@ 00045d9e 0128
.org 0x45da0
	bhi.n 0x45dc0	@ 00045da0 0ed8
.org 0x45da2
	cmp r0, #1	@ 00045da2 0128
.org 0x45da4
	bne.n 0x45dba	@ 00045da4 09d1
.org 0x45da6
	ldrb r2, [r4, #17]	@ 00045da6 627c
.org 0x45da8
	cmp r2, #1	@ 00045da8 012a
.org 0x45daa
	bhi.n 0x45dba	@ 00045daa 06d8
.org 0x45dac
	ldr r0, [r4, #44]	@ 00045dac e06a
.org 0x45dae
	adds r2, #1	@ 00045dae 0132
.org 0x45db0
	lsls r2, r2, #24	@ 00045db0 1206
.org 0x45db2
	lsrs r2, r2, #24	@ 00045db2 120e
.org 0x45db4
	adds r1, r4, #0	@ 00045db4 211c
.org 0x45db6
	bl 0x455c4	@ 00045db6 fff705fc
.org 0x45dba
	ldrb r0, [r4, #14]	@ 00045dba a07b
.org 0x45dbc
	adds r0, #1	@ 00045dbc 0130
.org 0x45dbe
	strb r0, [r4, #14]	@ 00045dbe a073
.org 0x45dc0
	adds r6, r4, #0	@ 00045dc0 261c
.org 0x45dc2
	adds r6, #180	@ 00045dc2 b436
.org 0x45dc4
	adds r2, r4, #0	@ 00045dc4 221c
.org 0x45dc6
	adds r2, #188	@ 00045dc6 bc32
.org 0x45dc8
	ldr r0, [r2, #0]	@ 00045dc8 1068
.org 0x45dca
	str r0, [r6, #0]	@ 00045dca 3060
.org 0x45dcc
	adds r5, r4, #0	@ 00045dcc 251c
.org 0x45dce
	adds r5, #184	@ 00045dce b835
.org 0x45dd0
	adds r1, r4, #0	@ 00045dd0 211c
.org 0x45dd2
	adds r1, #192	@ 00045dd2 c031
.org 0x45dd4
	ldr r0, [r1, #0]	@ 00045dd4 0868
.org 0x45dd6
	str r0, [r5, #0]	@ 00045dd6 2860
.org 0x45dd8
	adds r0, r7, #0	@ 00045dd8 381c
.org 0x45dda
	adds r0, #180	@ 00045dda b430
.org 0x45ddc
	ldr r0, [r0, #0]	@ 00045ddc 0068
.org 0x45dde
	str r0, [r2, #0]	@ 00045dde 1060
.org 0x45de0
	adds r0, r7, #0	@ 00045de0 381c
.org 0x45de2
	adds r0, #184	@ 00045de2 b830
.org 0x45de4
	ldr r3, [r0, #0]	@ 00045de4 0368
.org 0x45de6
	str r3, [r1, #0]	@ 00045de6 0b60
.org 0x45de8
	ldrb r0, [r4, #17]	@ 00045de8 607c
.org 0x45dea
	adds r7, r2, #0	@ 00045dea 171c
.org 0x45dec
	mov r8, r1	@ 00045dec 8846
.org 0x45dee
	cmp r0, #2	@ 00045dee 0228
.org 0x45df0
	bne.n 0x45ede	@ 00045df0 75d1
.org 0x45df2
	ldr r0, [r5, #0]	@ 00045df2 2868
.org 0x45df4
	cmp r0, r3	@ 00045df4 9842
.org 0x45df6
	beq.n 0x45e70	@ 00045df6 3bd0
.org 0x45df8
	ldr r1, [pc, #84]	@ 00045df8 1549
.org 0x45dfa
	adds r0, r4, #0	@ 00045dfa 201c
.org 0x45dfc
	adds r0, #113	@ 00045dfc 7130
.org 0x45dfe
	movs r2, #0	@ 00045dfe 0022
.org 0x45e00
	ldrsb r2, [r0, r2]	@ 00045e00 8256
.org 0x45e02
	lsls r2, r2, #16	@ 00045e02 1204
.org 0x45e04
	lsrs r2, r2, #16	@ 00045e04 120c
.org 0x45e06
	adds r0, #1	@ 00045e06 0130
.org 0x45e08
	movs r3, #0	@ 00045e08 0023
.org 0x45e0a
	ldrsb r3, [r0, r3]	@ 00045e0a c356
.org 0x45e0c
	lsls r3, r3, #16	@ 00045e0c 1b04
.org 0x45e0e
	lsrs r3, r3, #16	@ 00045e0e 1b0c
.org 0x45e10
	adds r0, r4, #0	@ 00045e10 201c
.org 0x45e12
	bl 0x1cfc8	@ 00045e12 d7f7d9f8
.org 0x45e16
	movs r6, #0	@ 00045e16 0026
.org 0x45e18
	ldrb r1, [r4, #10]	@ 00045e18 a17a
.org 0x45e1a
	movs r0, #239	@ 00045e1a ef20
.org 0x45e1c
	ands r0, r1	@ 00045e1c 0840
.org 0x45e1e
	strb r0, [r4, #10]	@ 00045e1e a072
.org 0x45e20
	adds r0, r4, #0	@ 00045e20 201c
.org 0x45e22
	adds r0, #76	@ 00045e22 4c30
.org 0x45e24
	strb r6, [r0, #0]	@ 00045e24 0670
.org 0x45e26
	adds r1, r4, #0	@ 00045e26 211c
.org 0x45e28
	adds r1, #74	@ 00045e28 4a31
.org 0x45e2a
	ldrb r2, [r1, #0]	@ 00045e2a 0a78
.org 0x45e2c
	movs r0, #17	@ 00045e2c 1120
.org 0x45e2e
	negs r0, r0	@ 00045e2e 4042
.org 0x45e30
	ands r0, r2	@ 00045e30 1040
.org 0x45e32
	strb r0, [r1, #0]	@ 00045e32 0870
.org 0x45e34
	ldr r2, [r5, #0]	@ 00045e34 2a68
.org 0x45e36
	mov r3, r8	@ 00045e36 4346
.org 0x45e38
	ldr r0, [r3, #0]	@ 00045e38 1868
.org 0x45e3a
	adds r3, r1, #0	@ 00045e3a 0b1c
.org 0x45e3c
	cmp r2, r0	@ 00045e3c 8242
.org 0x45e3e
	bge.n 0x45e54	@ 00045e3e 09da
.org 0x45e40
	ldrb r1, [r4, #10]	@ 00045e40 a17a
.org 0x45e42
	movs r0, #223	@ 00045e42 df20
.org 0x45e44
	ands r0, r1	@ 00045e44 0840
.org 0x45e46
	strb r0, [r4, #10]	@ 00045e46 a072
.org 0x45e48
	adds r0, r4, #0	@ 00045e48 201c
.org 0x45e4a
	adds r0, #77	@ 00045e4a 4d30
.org 0x45e4c
	strb r6, [r0, #0]	@ 00045e4c 0670
.org 0x45e4e
	b.n 0x45fa6	@ 00045e4e aae0
.org 0x45e50
	.byte 0x09,0x84,0x00,0x00	@ 00045e50 data
.org 0x45e54
	ldrb r0, [r4, #10]	@ 00045e54 a07a
.org 0x45e56
	movs r1, #32	@ 00045e56 2021
.org 0x45e58
	orrs r0, r1	@ 00045e58 0843
.org 0x45e5a
	strb r0, [r4, #10]	@ 00045e5a a072
.org 0x45e5c
	adds r1, r4, #0	@ 00045e5c 211c
.org 0x45e5e
	adds r1, #77	@ 00045e5e 4d31
.org 0x45e60
	movs r0, #1	@ 00045e60 0120
.org 0x45e62
	strb r0, [r1, #0]	@ 00045e62 0870
.org 0x45e64
	movs r2, #32	@ 00045e64 2022
.org 0x45e66
	ldrb r1, [r3, #0]	@ 00045e66 1978
.org 0x45e68
	subs r0, #34	@ 00045e68 2238
.org 0x45e6a
	ands r0, r1	@ 00045e6a 0840
.org 0x45e6c
	orrs r0, r2	@ 00045e6c 1043
.org 0x45e6e
	b.n 0x45fae	@ 00045e6e 9ee0
.org 0x45e70
	ldr r1, [pc, #64]	@ 00045e70 1049
.org 0x45e72
	adds r0, r4, #0	@ 00045e72 201c
.org 0x45e74
	adds r0, #113	@ 00045e74 7130
.org 0x45e76
	movs r2, #0	@ 00045e76 0022
.org 0x45e78
	ldrsb r2, [r0, r2]	@ 00045e78 8256
.org 0x45e7a
	lsls r2, r2, #16	@ 00045e7a 1204
.org 0x45e7c
	lsrs r2, r2, #16	@ 00045e7c 120c
.org 0x45e7e
	adds r0, #1	@ 00045e7e 0130
.org 0x45e80
	movs r3, #0	@ 00045e80 0023
.org 0x45e82
	ldrsb r3, [r0, r3]	@ 00045e82 c356
.org 0x45e84
	lsls r3, r3, #16	@ 00045e84 1b04
.org 0x45e86
	lsrs r3, r3, #16	@ 00045e86 1b0c
.org 0x45e88
	adds r0, r4, #0	@ 00045e88 201c
.org 0x45e8a
	bl 0x1cfc8	@ 00045e8a d7f79df8
.org 0x45e8e
	ldr r1, [r6, #0]	@ 00045e8e 3168
.org 0x45e90
	ldr r0, [r7, #0]	@ 00045e90 3868
.org 0x45e92
	cmp r1, r0	@ 00045e92 8142
.org 0x45e94
	bge.n 0x45eb8	@ 00045e94 10da
.org 0x45e96
	movs r2, #0	@ 00045e96 0022
.org 0x45e98
	ldrb r1, [r4, #10]	@ 00045e98 a17a
.org 0x45e9a
	movs r0, #239	@ 00045e9a ef20
.org 0x45e9c
	ands r0, r1	@ 00045e9c 0840
.org 0x45e9e
	strb r0, [r4, #10]	@ 00045e9e a072
.org 0x45ea0
	adds r0, r4, #0	@ 00045ea0 201c
.org 0x45ea2
	adds r0, #76	@ 00045ea2 4c30
.org 0x45ea4
	strb r2, [r0, #0]	@ 00045ea4 0270
.org 0x45ea6
	adds r1, r4, #0	@ 00045ea6 211c
.org 0x45ea8
	adds r1, #74	@ 00045ea8 4a31
.org 0x45eaa
	ldrb r2, [r1, #0]	@ 00045eaa 0a78
.org 0x45eac
	movs r0, #17	@ 00045eac 1120
.org 0x45eae
	negs r0, r0	@ 00045eae 4042
.org 0x45eb0
	ands r0, r2	@ 00045eb0 1040
.org 0x45eb2
	b.n 0x45f6a	@ 00045eb2 5ae0
.org 0x45eb4
	.byte 0x06,0x84,0x00,0x00	@ 00045eb4 data
.org 0x45eb8
	adds r3, r4, #0	@ 00045eb8 231c
.org 0x45eba
	adds r3, #74	@ 00045eba 4a33
.org 0x45ebc
	cmp r1, r0	@ 00045ebc 8142
.org 0x45ebe
	ble.n 0x45f96	@ 00045ebe 6add
.org 0x45ec0
	movs r2, #1	@ 00045ec0 0122
.org 0x45ec2
	ldrb r1, [r4, #10]	@ 00045ec2 a17a
.org 0x45ec4
	movs r0, #16	@ 00045ec4 1020
.org 0x45ec6
	orrs r0, r1	@ 00045ec6 0843
.org 0x45ec8
	strb r0, [r4, #10]	@ 00045ec8 a072
.org 0x45eca
	adds r0, r4, #0	@ 00045eca 201c
.org 0x45ecc
	adds r0, #76	@ 00045ecc 4c30
.org 0x45ece
	strb r2, [r0, #0]	@ 00045ece 0270
.org 0x45ed0
	movs r2, #16	@ 00045ed0 1022
.org 0x45ed2
	ldrb r1, [r3, #0]	@ 00045ed2 1978
.org 0x45ed4
	movs r0, #17	@ 00045ed4 1120
.org 0x45ed6
	negs r0, r0	@ 00045ed6 4042
.org 0x45ed8
	ands r0, r1	@ 00045ed8 0840
.org 0x45eda
	orrs r0, r2	@ 00045eda 1043
.org 0x45edc
	b.n 0x45f94	@ 00045edc 5ae0
.org 0x45ede
	ldr r0, [r5, #0]	@ 00045ede 2868
.org 0x45ee0
	cmp r0, r3	@ 00045ee0 9842
.org 0x45ee2
	beq.n 0x45f24	@ 00045ee2 1fd0
.org 0x45ee4
	ldr r1, [pc, #56]	@ 00045ee4 0e49
.org 0x45ee6
	adds r0, r4, #0	@ 00045ee6 201c
.org 0x45ee8
	adds r0, #113	@ 00045ee8 7130
.org 0x45eea
	movs r2, #0	@ 00045eea 0022
.org 0x45eec
	ldrsb r2, [r0, r2]	@ 00045eec 8256
.org 0x45eee
	lsls r2, r2, #16	@ 00045eee 1204
.org 0x45ef0
	lsrs r2, r2, #16	@ 00045ef0 120c
.org 0x45ef2
	adds r0, #1	@ 00045ef2 0130
.org 0x45ef4
	movs r3, #0	@ 00045ef4 0023
.org 0x45ef6
	ldrsb r3, [r0, r3]	@ 00045ef6 c356
.org 0x45ef8
	lsls r3, r3, #16	@ 00045ef8 1b04
.org 0x45efa
	lsrs r3, r3, #16	@ 00045efa 1b0c
.org 0x45efc
	adds r0, r4, #0	@ 00045efc 201c
.org 0x45efe
	bl 0x1cfc8	@ 00045efe d7f763f8
.org 0x45f02
	movs r2, #0	@ 00045f02 0022
.org 0x45f04
	ldrb r1, [r4, #10]	@ 00045f04 a17a
.org 0x45f06
	movs r0, #239	@ 00045f06 ef20
.org 0x45f08
	ands r0, r1	@ 00045f08 0840
.org 0x45f0a
	strb r0, [r4, #10]	@ 00045f0a a072
.org 0x45f0c
	adds r0, r4, #0	@ 00045f0c 201c
.org 0x45f0e
	adds r0, #76	@ 00045f0e 4c30
.org 0x45f10
	strb r2, [r0, #0]	@ 00045f10 0270
.org 0x45f12
	adds r1, r4, #0	@ 00045f12 211c
.org 0x45f14
	adds r1, #74	@ 00045f14 4a31
.org 0x45f16
	ldrb r2, [r1, #0]	@ 00045f16 0a78
.org 0x45f18
	movs r0, #17	@ 00045f18 1120
.org 0x45f1a
	negs r0, r0	@ 00045f1a 4042
.org 0x45f1c
	ands r0, r2	@ 00045f1c 1040
.org 0x45f1e
	b.n 0x45f6a	@ 00045f1e 24e0
.org 0x45f20
	.byte 0x0a,0x84,0x00,0x00	@ 00045f20 data
.org 0x45f24
	ldr r1, [pc, #72]	@ 00045f24 1249
.org 0x45f26
	adds r0, r4, #0	@ 00045f26 201c
.org 0x45f28
	adds r0, #113	@ 00045f28 7130
.org 0x45f2a
	movs r2, #0	@ 00045f2a 0022
.org 0x45f2c
	ldrsb r2, [r0, r2]	@ 00045f2c 8256
.org 0x45f2e
	lsls r2, r2, #16	@ 00045f2e 1204
.org 0x45f30
	lsrs r2, r2, #16	@ 00045f30 120c
.org 0x45f32
	adds r0, #1	@ 00045f32 0130
.org 0x45f34
	movs r3, #0	@ 00045f34 0023
.org 0x45f36
	ldrsb r3, [r0, r3]	@ 00045f36 c356
.org 0x45f38
	lsls r3, r3, #16	@ 00045f38 1b04
.org 0x45f3a
	lsrs r3, r3, #16	@ 00045f3a 1b0c
.org 0x45f3c
	adds r0, r4, #0	@ 00045f3c 201c
.org 0x45f3e
	bl 0x1cfc8	@ 00045f3e d7f743f8
.org 0x45f42
	ldr r1, [r6, #0]	@ 00045f42 3168
.org 0x45f44
	ldr r0, [r7, #0]	@ 00045f44 3868
.org 0x45f46
	cmp r1, r0	@ 00045f46 8142
.org 0x45f48
	bge.n 0x45f74	@ 00045f48 14da
.org 0x45f4a
	movs r2, #1	@ 00045f4a 0122
.org 0x45f4c
	ldrb r1, [r4, #10]	@ 00045f4c a17a
.org 0x45f4e
	movs r0, #16	@ 00045f4e 1020
.org 0x45f50
	orrs r0, r1	@ 00045f50 0843
.org 0x45f52
	strb r0, [r4, #10]	@ 00045f52 a072
.org 0x45f54
	adds r0, r4, #0	@ 00045f54 201c
.org 0x45f56
	adds r0, #76	@ 00045f56 4c30
.org 0x45f58
	strb r2, [r0, #0]	@ 00045f58 0270
.org 0x45f5a
	adds r1, r4, #0	@ 00045f5a 211c
.org 0x45f5c
	adds r1, #74	@ 00045f5c 4a31
.org 0x45f5e
	movs r3, #16	@ 00045f5e 1023
.org 0x45f60
	ldrb r2, [r1, #0]	@ 00045f60 0a78
.org 0x45f62
	movs r0, #17	@ 00045f62 1120
.org 0x45f64
	negs r0, r0	@ 00045f64 4042
.org 0x45f66
	ands r0, r2	@ 00045f66 1040
.org 0x45f68
	orrs r0, r3	@ 00045f68 1843
.org 0x45f6a
	strb r0, [r1, #0]	@ 00045f6a 0870
.org 0x45f6c
	adds r3, r1, #0	@ 00045f6c 0b1c
.org 0x45f6e
	b.n 0x45f96	@ 00045f6e 12e0
.org 0x45f70
	.byte 0x08,0x84,0x00,0x00	@ 00045f70 data
.org 0x45f74
	adds r3, r4, #0	@ 00045f74 231c
.org 0x45f76
	adds r3, #74	@ 00045f76 4a33
.org 0x45f78
	cmp r1, r0	@ 00045f78 8142
.org 0x45f7a
	ble.n 0x45f96	@ 00045f7a 0cdd
.org 0x45f7c
	movs r2, #0	@ 00045f7c 0022
.org 0x45f7e
	ldrb r1, [r4, #10]	@ 00045f7e a17a
.org 0x45f80
	movs r0, #239	@ 00045f80 ef20
.org 0x45f82
	ands r0, r1	@ 00045f82 0840
.org 0x45f84
	strb r0, [r4, #10]	@ 00045f84 a072
.org 0x45f86
	adds r0, r4, #0	@ 00045f86 201c
.org 0x45f88
	adds r0, #76	@ 00045f88 4c30
.org 0x45f8a
	strb r2, [r0, #0]	@ 00045f8a 0270
.org 0x45f8c
	ldrb r1, [r3, #0]	@ 00045f8c 1978
.org 0x45f8e
	movs r0, #17	@ 00045f8e 1120
.org 0x45f90
	negs r0, r0	@ 00045f90 4042
.org 0x45f92
	ands r0, r1	@ 00045f92 0840
.org 0x45f94
	strb r0, [r3, #0]	@ 00045f94 1870
.org 0x45f96
	movs r2, #0	@ 00045f96 0022
.org 0x45f98
	ldrb r1, [r4, #10]	@ 00045f98 a17a
.org 0x45f9a
	movs r0, #223	@ 00045f9a df20
.org 0x45f9c
	ands r0, r1	@ 00045f9c 0840
.org 0x45f9e
	strb r0, [r4, #10]	@ 00045f9e a072
.org 0x45fa0
	adds r0, r4, #0	@ 00045fa0 201c
.org 0x45fa2
	adds r0, #77	@ 00045fa2 4d30
.org 0x45fa4
	strb r2, [r0, #0]	@ 00045fa4 0270
.org 0x45fa6
	ldrb r1, [r3, #0]	@ 00045fa6 1978
.org 0x45fa8
	movs r0, #33	@ 00045fa8 2120
.org 0x45faa
	negs r0, r0	@ 00045faa 4042
.org 0x45fac
	ands r0, r1	@ 00045fac 0840
.org 0x45fae
	strb r0, [r3, #0]	@ 00045fae 1870
.org 0x45fb0
	adds r0, r4, #0	@ 00045fb0 201c
.org 0x45fb2
	bl 0x1cff0	@ 00045fb2 d7f71df8
.org 0x45fb6
	ldr r2, [r7, #0]	@ 00045fb6 3a68
.org 0x45fb8
	ldrb r3, [r4, #10]	@ 00045fb8 a37a
.org 0x45fba
	movs r0, #16	@ 00045fba 1020
.org 0x45fbc
	ands r0, r3	@ 00045fbc 1840
.org 0x45fbe
	cmp r0, #0	@ 00045fbe 0028
.org 0x45fc0
	beq.n 0x45fc6	@ 00045fc0 01d0
.org 0x45fc2
	ldr r0, [pc, #32]	@ 00045fc2 0848
.org 0x45fc4
	adds r2, r2, r0	@ 00045fc4 1218
.org 0x45fc6
	str r2, [r4, #84]	@ 00045fc6 6265
.org 0x45fc8
	mov r0, r8	@ 00045fc8 4046

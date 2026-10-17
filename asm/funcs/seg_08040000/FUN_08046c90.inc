@ FUN_08046c90  entry 0x08046c90  size 582
.thumb
.org 0x46c90
FUN_08046c90:
	push {r4, r5, r6, r7, lr}	@ 00046c90 f0b5
.org 0x46c92
	mov r7, r8	@ 00046c92 4746
.org 0x46c94
	push {r7}	@ 00046c94 80b4
.org 0x46c96
	adds r5, r0, #0	@ 00046c96 051c
.org 0x46c98
	ldr r7, [r5, #40]	@ 00046c98 af6a
.org 0x46c9a
	bl 0x1cff0	@ 00046c9a d6f7a9f9
.org 0x46c9e
	ldrb r6, [r5, #13]	@ 00046c9e 6e7b
.org 0x46ca0
	cmp r6, #0	@ 00046ca0 002e
.org 0x46ca2
	beq.n 0x46ca6	@ 00046ca2 00d0
.org 0x46ca4
	b.n 0x46db0	@ 00046ca4 84e0
.org 0x46ca6
	ldrb r0, [r5, #18]	@ 00046ca6 a87c
.org 0x46ca8
	subs r0, #1	@ 00046ca8 0138
.org 0x46caa
	movs r1, #0	@ 00046caa 0021
.org 0x46cac
	mov r8, r1	@ 00046cac 8846
.org 0x46cae
	strb r0, [r5, #18]	@ 00046cae a874
.org 0x46cb0
	lsls r0, r0, #24	@ 00046cb0 0006
.org 0x46cb2
	lsrs r0, r0, #24	@ 00046cb2 000e
.org 0x46cb4
	cmp r0, #255	@ 00046cb4 ff28
.org 0x46cb6
	beq.n 0x46cba	@ 00046cb6 00d0
.org 0x46cb8
	b.n 0x46efe	@ 00046cb8 21e1
.org 0x46cba
	adds r4, r5, #0	@ 00046cba 2c1c
.org 0x46cbc
	adds r4, #84	@ 00046cbc 5434
.org 0x46cbe
	adds r0, r7, #0	@ 00046cbe 381c
.org 0x46cc0
	adds r1, r4, #0	@ 00046cc0 211c
.org 0x46cc2
	bl 0x41318	@ 00046cc2 faf729fb
.org 0x46cc6
	lsls r0, r0, #24	@ 00046cc6 0006
.org 0x46cc8
	lsrs r2, r0, #24	@ 00046cc8 020e
.org 0x46cca
	mov ip, r4	@ 00046cca a446
.org 0x46ccc
	cmp r2, #0	@ 00046ccc 002a
.org 0x46cce
	beq.n 0x46d0c	@ 00046cce 1dd0
.org 0x46cd0
	ldrb r1, [r5, #10]	@ 00046cd0 a97a
.org 0x46cd2
	movs r0, #254	@ 00046cd2 fe20
.org 0x46cd4
	ands r0, r1	@ 00046cd4 0840
.org 0x46cd6
	movs r1, #253	@ 00046cd6 fd21
.org 0x46cd8
	ands r0, r1	@ 00046cd8 0840
.org 0x46cda
	strb r0, [r5, #10]	@ 00046cda a872
.org 0x46cdc
	adds r0, r5, #0	@ 00046cdc 281c
.org 0x46cde
	adds r0, #140	@ 00046cde 8c30
.org 0x46ce0
	str r6, [r0, #0]	@ 00046ce0 0660
.org 0x46ce2
	adds r0, #4	@ 00046ce2 0430
.org 0x46ce4
	str r6, [r0, #0]	@ 00046ce4 0660
.org 0x46ce6
	adds r0, #4	@ 00046ce6 0430
.org 0x46ce8
	strb r6, [r0, #0]	@ 00046ce8 0670
.org 0x46cea
	ldrb r1, [r5, #10]	@ 00046cea a97a
.org 0x46cec
	movs r0, #251	@ 00046cec fb20
.org 0x46cee
	ands r0, r1	@ 00046cee 0840
.org 0x46cf0
	strb r0, [r5, #10]	@ 00046cf0 a872
.org 0x46cf2
	ldr r1, [pc, #20]	@ 00046cf2 0549
.org 0x46cf4
	ldrb r0, [r5, #9]	@ 00046cf4 687a
.org 0x46cf6
	lsls r0, r0, #2	@ 00046cf6 8000
.org 0x46cf8
	adds r0, r0, r1	@ 00046cf8 4018
.org 0x46cfa
	movs r1, #3	@ 00046cfa 0321
.org 0x46cfc
	str r1, [r5, #12]	@ 00046cfc e960
.org 0x46cfe
	ldr r0, [r0, #0]	@ 00046cfe 0068
.org 0x46d00
	ldr r0, [r0, #12]	@ 00046d00 c068
.org 0x46d02
	str r0, [r5, #20]	@ 00046d02 6861
.org 0x46d04
	b.n 0x46efe	@ 00046d04 fbe0
.org 0x46d06
	.byte 0x00	@ 00046d06 data
.org 0x46d07
	.byte 0x00	@ 00046d07 data
.org 0x46d08
	.byte 0xf8,0x39,0x85,0x08	@ 00046d08 data
.org 0x46d0c
	ldrb r0, [r5, #16]	@ 00046d0c 287c
.org 0x46d0e
	cmp r0, #0	@ 00046d0e 0028
.org 0x46d10
	bne.n 0x46d2c	@ 00046d10 0cd1
.org 0x46d12
	ldr r1, [r5, #84]	@ 00046d12 696d
.org 0x46d14
	ldr r0, [r7, #84]	@ 00046d14 786d
.org 0x46d16
	cmp r1, r0	@ 00046d16 8142
.org 0x46d18
	ble.n 0x46d22	@ 00046d18 03dd
.org 0x46d1a
	movs r0, #176	@ 00046d1a b020
.org 0x46d1c
	lsls r0, r0, #2	@ 00046d1c 8000
.org 0x46d1e
	str r0, [r5, #92]	@ 00046d1e e865
.org 0x46d20
	b.n 0x46d36	@ 00046d20 09e0
.org 0x46d22
	ldr r0, [pc, #4]	@ 00046d22 0148
.org 0x46d24
	str r0, [r5, #92]	@ 00046d24 e865
.org 0x46d26
	b.n 0x46d5a	@ 00046d26 18e0
.org 0x46d28
	.byte 0x40,0xfd,0xff,0xff	@ 00046d28 data
.org 0x46d2c
	str r2, [r5, #92]	@ 00046d2c ea65
.org 0x46d2e
	ldr r1, [r5, #84]	@ 00046d2e 696d
.org 0x46d30
	ldr r0, [r7, #84]	@ 00046d30 786d
.org 0x46d32
	cmp r1, r0	@ 00046d32 8142
.org 0x46d34
	ble.n 0x46d5a	@ 00046d34 11dd
.org 0x46d36
	movs r2, #1	@ 00046d36 0122
.org 0x46d38
	ldrb r0, [r5, #10]	@ 00046d38 a87a
.org 0x46d3a
	movs r1, #16	@ 00046d3a 1021
.org 0x46d3c
	orrs r0, r1	@ 00046d3c 0843
.org 0x46d3e
	strb r0, [r5, #10]	@ 00046d3e a872
.org 0x46d40
	adds r0, r5, #0	@ 00046d40 281c
.org 0x46d42
	adds r0, #76	@ 00046d42 4c30
.org 0x46d44
	strb r2, [r0, #0]	@ 00046d44 0270
.org 0x46d46
	adds r3, r5, #0	@ 00046d46 2b1c
.org 0x46d48
	adds r3, #74	@ 00046d48 4a33
.org 0x46d4a
	movs r2, #16	@ 00046d4a 1022
.org 0x46d4c
	ldrb r1, [r3, #0]	@ 00046d4c 1978
.org 0x46d4e
	movs r0, #17	@ 00046d4e 1120
.org 0x46d50
	negs r0, r0	@ 00046d50 4042
.org 0x46d52
	ands r0, r1	@ 00046d52 0840
.org 0x46d54
	orrs r0, r2	@ 00046d54 1043
.org 0x46d56
	strb r0, [r3, #0]	@ 00046d56 1870
.org 0x46d58
	b.n 0x46d76	@ 00046d58 0de0
.org 0x46d5a
	ldrb r1, [r5, #10]	@ 00046d5a a97a
.org 0x46d5c
	movs r0, #239	@ 00046d5c ef20
.org 0x46d5e
	ands r0, r1	@ 00046d5e 0840
.org 0x46d60
	strb r0, [r5, #10]	@ 00046d60 a872
.org 0x46d62
	adds r0, r5, #0	@ 00046d62 281c
.org 0x46d64
	adds r0, #76	@ 00046d64 4c30
.org 0x46d66
	strb r2, [r0, #0]	@ 00046d66 0270
.org 0x46d68
	adds r2, r5, #0	@ 00046d68 2a1c
.org 0x46d6a
	adds r2, #74	@ 00046d6a 4a32
.org 0x46d6c
	ldrb r1, [r2, #0]	@ 00046d6c 1178
.org 0x46d6e
	movs r0, #17	@ 00046d6e 1120
.org 0x46d70
	negs r0, r0	@ 00046d70 4042
.org 0x46d72
	ands r0, r1	@ 00046d72 0840
.org 0x46d74
	strb r0, [r2, #0]	@ 00046d74 1070
.org 0x46d76
	ldr r0, [pc, #112]	@ 00046d76 1c48
.org 0x46d78
	str r0, [r5, #96]	@ 00046d78 2866
.org 0x46d7a
	ldrb r1, [r5, #10]	@ 00046d7a a97a
.org 0x46d7c
	movs r0, #4	@ 00046d7c 0420
.org 0x46d7e
	orrs r0, r1	@ 00046d7e 0843
.org 0x46d80
	strb r0, [r5, #10]	@ 00046d80 a872
.org 0x46d82
	adds r4, r5, #0	@ 00046d82 2c1c
.org 0x46d84
	adds r4, #116	@ 00046d84 7434
.org 0x46d86
	ldr r1, [pc, #100]	@ 00046d86 1949
.org 0x46d88
	adds r0, r4, #0	@ 00046d88 201c
.org 0x46d8a
	mov r2, ip	@ 00046d8a 6246
.org 0x46d8c
	movs r3, #8	@ 00046d8c 0823
.org 0x46d8e
	bl 0x5760	@ 00046d8e bef7e7fc
.org 0x46d92
	str r5, [r4, #44]	@ 00046d92 e562
.org 0x46d94
	ldr r0, [pc, #88]	@ 00046d94 1648
.org 0x46d96
	str r0, [r4, #36]	@ 00046d96 6062
.org 0x46d98
	ldrb r1, [r5, #10]	@ 00046d98 a97a
.org 0x46d9a
	movs r0, #1	@ 00046d9a 0120
.org 0x46d9c
	orrs r0, r1	@ 00046d9c 0843
.org 0x46d9e
	strb r0, [r5, #10]	@ 00046d9e a872
.org 0x46da0
	adds r0, r7, #0	@ 00046da0 381c
.org 0x46da2
	bl 0x3aa4c	@ 00046da2 f3f753fe
.org 0x46da6
	adds r1, r5, #0	@ 00046da6 291c
.org 0x46da8
	adds r1, #189	@ 00046da8 bd31
.org 0x46daa
	movs r0, #1	@ 00046daa 0120
.org 0x46dac
	strb r0, [r1, #0]	@ 00046dac 0870
.org 0x46dae
	strb r0, [r5, #13]	@ 00046dae 6873
.org 0x46db0
	ldrb r6, [r5, #14]	@ 00046db0 ae7b
.org 0x46db2
	cmp r6, #0	@ 00046db2 002e
.org 0x46db4
	bne.n 0x46e74	@ 00046db4 5ed1
.org 0x46db6
	adds r4, r5, #0	@ 00046db6 2c1c
.org 0x46db8
	adds r4, #36	@ 00046db8 2434
.org 0x46dba
	ldrb r0, [r4, #0]	@ 00046dba 2078
.org 0x46dbc
	adds r0, #7	@ 00046dbc 0730
.org 0x46dbe
	strb r0, [r4, #0]	@ 00046dbe 2070
.org 0x46dc0
	ldr r0, [r5, #84]	@ 00046dc0 686d
.org 0x46dc2
	ldr r1, [r5, #92]	@ 00046dc2 e96d
.org 0x46dc4
	adds r0, r0, r1	@ 00046dc4 4018
.org 0x46dc6
	str r0, [r5, #84]	@ 00046dc6 6865
.org 0x46dc8
	ldr r1, [r5, #88]	@ 00046dc8 a96d
.org 0x46dca
	bl 0x46f90	@ 00046dca 00f0e1f8
.org 0x46dce
	lsls r0, r0, #16	@ 00046dce 0004
.org 0x46dd0
	adds r7, r4, #0	@ 00046dd0 271c
.org 0x46dd2
	cmp r0, #0	@ 00046dd2 0028
.org 0x46dd4
	beq.n 0x46e08	@ 00046dd4 18d0
.org 0x46dd6
	ldr r0, [r5, #92]	@ 00046dd6 e86d
.org 0x46dd8
	cmp r0, #0	@ 00046dd8 0028
.org 0x46dda
	ble.n 0x46df4	@ 00046dda 0bdd
.org 0x46ddc
	ldr r0, [r5, #84]	@ 00046ddc 686d
.org 0x46dde
	ldr r1, [r5, #88]	@ 00046dde a96d
.org 0x46de0
	bl 0x816c	@ 00046de0 c1f7c4f9
.org 0x46de4
	b.n 0x46dfc	@ 00046de4 0ae0
.org 0x46de6
	.byte 0x00	@ 00046de6 data
.org 0x46de7
	.byte 0x00	@ 00046de7 data
.org 0x46de8
	.byte 0x00,0xfc,0xff,0xff	@ 00046de8 data
.org 0x46dec
	.byte 0x20,0x6d,0x85,0x08	@ 00046dec data
.org 0x46df0
	.byte 0x65,0x6f,0x04,0x08	@ 00046df0 data
.org 0x46df4
	ldr r0, [r5, #84]	@ 00046df4 686d
.org 0x46df6
	ldr r1, [r5, #88]	@ 00046df6 a96d
.org 0x46df8
	bl 0x834c	@ 00046df8 c1f7a8fa
.org 0x46dfc
	ldr r1, [r5, #84]	@ 00046dfc 696d
.org 0x46dfe
	adds r1, r1, r0	@ 00046dfe 0918
.org 0x46e00
	str r1, [r5, #84]	@ 00046e00 6965
.org 0x46e02
	movs r0, #64	@ 00046e02 4020
.org 0x46e04
	strb r0, [r7, #0]	@ 00046e04 3870
.org 0x46e06
	b.n 0x46e66	@ 00046e06 2ee0
.org 0x46e08
	ldr r0, [r5, #96]	@ 00046e08 286e
.org 0x46e0a
	adds r0, #64	@ 00046e0a 4030
.org 0x46e0c
	str r0, [r5, #96]	@ 00046e0c 2866
.org 0x46e0e
	movs r1, #224	@ 00046e0e e021
.org 0x46e10
	lsls r1, r1, #3	@ 00046e10 c900
.org 0x46e12
	cmp r0, r1	@ 00046e12 8842
.org 0x46e14
	ble.n 0x46e18	@ 00046e14 00dd
.org 0x46e16
	str r1, [r5, #96]	@ 00046e16 2966
.org 0x46e18
	ldr r1, [r5, #88]	@ 00046e18 a96d
.org 0x46e1a
	ldr r0, [r5, #96]	@ 00046e1a 286e
.org 0x46e1c
	adds r1, r1, r0	@ 00046e1c 0918
.org 0x46e1e
	str r1, [r5, #88]	@ 00046e1e a965
.org 0x46e20
	ldr r0, [r5, #84]	@ 00046e20 686d
.org 0x46e22
	bl 0x46f90	@ 00046e22 00f0b5f8
.org 0x46e26
	lsls r0, r0, #16	@ 00046e26 0004
.org 0x46e28
	cmp r0, #0	@ 00046e28 0028
.org 0x46e2a
	beq.n 0x46e56	@ 00046e2a 14d0
.org 0x46e2c
	ldr r0, [r5, #96]	@ 00046e2c 286e
.org 0x46e2e
	cmp r0, #0	@ 00046e2e 0028
.org 0x46e30
	ble.n 0x46e42	@ 00046e30 07dd
.org 0x46e32
	ldr r0, [r5, #84]	@ 00046e32 686d
.org 0x46e34
	ldr r1, [r5, #88]	@ 00046e34 a96d
.org 0x46e36
	bl 0x7db4	@ 00046e36 c0f7bdff
.org 0x46e3a
	ldr r1, [r5, #88]	@ 00046e3a a96d
.org 0x46e3c
	adds r1, r1, r0	@ 00046e3c 0918
.org 0x46e3e
	str r1, [r5, #88]	@ 00046e3e a965
.org 0x46e40
	b.n 0x46e64	@ 00046e40 10e0
.org 0x46e42
	ldr r0, [r5, #84]	@ 00046e42 686d
.org 0x46e44
	ldr r1, [r5, #88]	@ 00046e44 a96d
.org 0x46e46
	bl 0x7f8c	@ 00046e46 c1f7a1f8
.org 0x46e4a
	ldr r1, [r5, #88]	@ 00046e4a a96d
.org 0x46e4c
	adds r1, r1, r0	@ 00046e4c 0918
.org 0x46e4e
	str r1, [r5, #88]	@ 00046e4e a965
.org 0x46e50
	movs r0, #128	@ 00046e50 8020
.org 0x46e52
	strb r0, [r4, #0]	@ 00046e52 2070
.org 0x46e54
	b.n 0x46e66	@ 00046e54 07e0
.org 0x46e56
	adds r0, r5, #0	@ 00046e56 281c
.org 0x46e58
	adds r0, #140	@ 00046e58 8c30
.org 0x46e5a
	ldr r0, [r0, #0]	@ 00046e5a 0068
.org 0x46e5c
	ldr r1, [pc, #16]	@ 00046e5c 0449
.org 0x46e5e
	ands r0, r1	@ 00046e5e 0840
.org 0x46e60
	cmp r0, #0	@ 00046e60 0028
.org 0x46e62
	beq.n 0x46ef8	@ 00046e62 49d0
.org 0x46e64
	strb r6, [r4, #0]	@ 00046e64 2670
.org 0x46e66
	ldrb r0, [r5, #14]	@ 00046e66 a87b
.org 0x46e68
	adds r0, #1	@ 00046e68 0130
.org 0x46e6a
	strb r0, [r5, #14]	@ 00046e6a a873
.org 0x46e6c
	b.n 0x46efe	@ 00046e6c 47e0
.org 0x46e6e
	.byte 0x00	@ 00046e6e data
.org 0x46e6f
	.byte 0x00	@ 00046e6f data
.org 0x46e70
	.byte 0x04,0x10,0x00,0x00	@ 00046e70 data
.org 0x46e74
	cmp r6, #1	@ 00046e74 012e
.org 0x46e76
	bne.n 0x46e9a	@ 00046e76 10d1
.org 0x46e78
	ldr r1, [pc, #60]	@ 00046e78 0f49
.org 0x46e7a
	adds r0, r5, #0	@ 00046e7a 281c
.org 0x46e7c
	bl 0x1cf00	@ 00046e7c d6f740f8
.org 0x46e80
	adds r0, r5, #0	@ 00046e80 281c
.org 0x46e82
	bl 0x1cff0	@ 00046e82 d6f7b5f8
.org 0x46e86
	movs r0, #169	@ 00046e86 a920
.org 0x46e88
	bl 0x2b10	@ 00046e88 bbf742fe
.org 0x46e8c
	adds r1, r5, #0	@ 00046e8c 291c
.org 0x46e8e
	adds r1, #189	@ 00046e8e bd31
.org 0x46e90
	movs r0, #0	@ 00046e90 0020
.org 0x46e92
	strb r0, [r1, #0]	@ 00046e92 0870
.org 0x46e94
	ldrb r0, [r5, #14]	@ 00046e94 a87b
.org 0x46e96
	adds r0, #1	@ 00046e96 0130
.org 0x46e98
	strb r0, [r5, #14]	@ 00046e98 a873
.org 0x46e9a
	adds r0, r5, #0	@ 00046e9a 281c
.org 0x46e9c
	adds r0, #113	@ 00046e9c 7130
.org 0x46e9e
	ldrb r0, [r0, #0]	@ 00046e9e 0078
.org 0x46ea0
	subs r0, #1	@ 00046ea0 0138
.org 0x46ea2
	lsls r0, r0, #24	@ 00046ea2 0006
.org 0x46ea4
	lsrs r0, r0, #24	@ 00046ea4 000e
.org 0x46ea6
	cmp r0, #1	@ 00046ea6 0128
.org 0x46ea8
	bhi.n 0x46ec0	@ 00046ea8 0ad8
.org 0x46eaa
	adds r0, r5, #0	@ 00046eaa 281c
.org 0x46eac
	adds r0, #116	@ 00046eac 7430
.org 0x46eae
	ldr r1, [pc, #12]	@ 00046eae 0349
.org 0x46eb0
	bl 0x5784	@ 00046eb0 bef768fc
.org 0x46eb4
	b.n 0x46eca	@ 00046eb4 09e0
.org 0x46eb6
	.byte 0x00	@ 00046eb6 data
.org 0x46eb7
	.byte 0x00	@ 00046eb7 data
.org 0x46eb8
	.byte 0x12,0x82,0x00,0x00	@ 00046eb8 data
.org 0x46ebc
	.byte 0x50,0x6d,0x85,0x08	@ 00046ebc data
.org 0x46ec0
	adds r0, r5, #0	@ 00046ec0 281c
.org 0x46ec2
	adds r0, #116	@ 00046ec2 7430
.org 0x46ec4
	ldr r1, [pc, #40]	@ 00046ec4 0a49
.org 0x46ec6
	bl 0x5784	@ 00046ec6 bef75dfc
.org 0x46eca
	adds r0, r5, #0	@ 00046eca 281c
.org 0x46ecc
	adds r0, #115	@ 00046ecc 7330
.org 0x46ece
	ldrb r0, [r0, #0]	@ 00046ece 0078
.org 0x46ed0
	cmp r0, #3	@ 00046ed0 0328
.org 0x46ed2
	bne.n 0x46ef8	@ 00046ed2 11d1
.org 0x46ed4
	ldr r1, [pc, #28]	@ 00046ed4 0749

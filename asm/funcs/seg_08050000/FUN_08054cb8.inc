@ FUN_08054cb8  entry 0x08054cb8  size 702
.thumb
.org 0x54cb8
FUN_08054cb8:
	push {r4, r5, r6, r7, lr}	@ 00054cb8 f0b5
.org 0x54cba
	mov r7, r9	@ 00054cba 4f46
.org 0x54cbc
	mov r6, r8	@ 00054cbc 4646
.org 0x54cbe
	push {r6, r7}	@ 00054cbe c0b4
.org 0x54cc0
	sub sp, #40	@ 00054cc0 8ab0
.org 0x54cc2
	adds r6, r0, #0	@ 00054cc2 061c
.org 0x54cc4
	mov r1, sp	@ 00054cc4 6946
.org 0x54cc6
	ldr r0, [pc, #28]	@ 00054cc6 0748
.org 0x54cc8
	ldmia r0!, {r2, r3, r4}	@ 00054cc8 1cc8
.org 0x54cca
	stmia r1!, {r2, r3, r4}	@ 00054cca 1cc1
.org 0x54ccc
	ldmia r0!, {r2, r3, r4}	@ 00054ccc 1cc8
.org 0x54cce
	stmia r1!, {r2, r3, r4}	@ 00054cce 1cc1
.org 0x54cd0
	ldmia r0!, {r2, r3}	@ 00054cd0 0cc8
.org 0x54cd2
	stmia r1!, {r2, r3}	@ 00054cd2 0cc1
.org 0x54cd4
	ldrb r0, [r6, #13]	@ 00054cd4 707b
.org 0x54cd6
	cmp r0, #1	@ 00054cd6 0128
.org 0x54cd8
	beq.n 0x54d62	@ 00054cd8 43d0
.org 0x54cda
	cmp r0, #1	@ 00054cda 0128
.org 0x54cdc
	bgt.n 0x54ce8	@ 00054cdc 04dc
.org 0x54cde
	cmp r0, #0	@ 00054cde 0028
.org 0x54ce0
	beq.n 0x54cf0	@ 00054ce0 06d0
.org 0x54ce2
	b.n 0x54f8c	@ 00054ce2 53e1
.org 0x54ce4
	.byte 0xb0,0x95,0x12,0x08	@ 00054ce4 data
.org 0x54ce8
	cmp r0, #2	@ 00054ce8 0228
.org 0x54cea
	bne.n 0x54cee	@ 00054cea 00d1
.org 0x54cec
	b.n 0x54e80	@ 00054cec c8e0
.org 0x54cee
	b.n 0x54f8c	@ 00054cee 4de1
.org 0x54cf0
	movs r0, #83	@ 00054cf0 5320
.org 0x54cf2
	bl 0x2b10	@ 00054cf2 adf70dff
.org 0x54cf6
	ldr r3, [pc, #360]	@ 00054cf6 5a4b
.org 0x54cf8
	ldrh r2, [r3, #8]	@ 00054cf8 1a89
.org 0x54cfa
	movs r4, #1	@ 00054cfa 0124
.org 0x54cfc
	adds r0, r4, #0	@ 00054cfc 201c
.org 0x54cfe
	ands r0, r2	@ 00054cfe 1040
.org 0x54d00
	cmp r0, #0	@ 00054d00 0028
.org 0x54d02
	beq.n 0x54d18	@ 00054d02 09d0
.org 0x54d04
	ldrb r1, [r3, #18]	@ 00054d04 997c
.org 0x54d06
	adds r0, r4, #0	@ 00054d06 201c
.org 0x54d08
	ands r0, r1	@ 00054d08 0840
.org 0x54d0a
	cmp r0, #0	@ 00054d0a 0028
.org 0x54d0c
	bne.n 0x54d18	@ 00054d0c 04d1
.org 0x54d0e
	ldr r0, [pc, #340]	@ 00054d0e 5548
.org 0x54d10
	ands r0, r2	@ 00054d10 1040
.org 0x54d12
	movs r1, #16	@ 00054d12 1021
.org 0x54d14
	orrs r0, r1	@ 00054d14 0843
.org 0x54d16
	strh r0, [r3, #8]	@ 00054d16 1881
.org 0x54d18
	adds r0, r6, #0	@ 00054d18 301c
.org 0x54d1a
	adds r0, #140	@ 00054d1a 8c30
.org 0x54d1c
	movs r4, #0	@ 00054d1c 0024
.org 0x54d1e
	str r4, [r0, #0]	@ 00054d1e 0460
.org 0x54d20
	adds r0, #4	@ 00054d20 0430
.org 0x54d22
	str r4, [r0, #0]	@ 00054d22 0460
.org 0x54d24
	adds r0, #4	@ 00054d24 0430
.org 0x54d26
	strb r4, [r0, #0]	@ 00054d26 0470
.org 0x54d28
	ldrb r1, [r6, #10]	@ 00054d28 b17a
.org 0x54d2a
	movs r0, #251	@ 00054d2a fb20
.org 0x54d2c
	ands r0, r1	@ 00054d2c 0840
.org 0x54d2e
	strb r0, [r6, #10]	@ 00054d2e b072
.org 0x54d30
	ldrb r0, [r6, #30]	@ 00054d30 b07f
.org 0x54d32
	lsls r0, r0, #8	@ 00054d32 0002
.org 0x54d34
	adds r1, r6, #0	@ 00054d34 311c
.org 0x54d36
	adds r1, #112	@ 00054d36 7031
.org 0x54d38
	ldrb r1, [r1, #0]	@ 00054d38 0978
.org 0x54d3a
	orrs r0, r1	@ 00054d3a 0843
.org 0x54d3c
	ldr r1, [pc, #296]	@ 00054d3c 4a49
.org 0x54d3e
	cmp r0, r1	@ 00054d3e 8842
.org 0x54d40
	bne.n 0x54d4a	@ 00054d40 03d1
.org 0x54d42
	subs r1, #1	@ 00054d42 0139
.org 0x54d44
	adds r0, r6, #0	@ 00054d44 301c
.org 0x54d46
	bl 0x1cf00	@ 00054d46 c8f7dbf8
.org 0x54d4a
	str r4, [r6, #96]	@ 00054d4a 3466
.org 0x54d4c
	str r4, [r6, #92]	@ 00054d4c f465
.org 0x54d4e
	ldr r0, [r6, #88]	@ 00054d4e b06d
.org 0x54d50
	str r0, [r6, #100]	@ 00054d50 7066
.org 0x54d52
	movs r0, #8	@ 00054d52 0820
.org 0x54d54
	strb r0, [r6, #18]	@ 00054d54 b074
.org 0x54d56
	strb r4, [r6, #19]	@ 00054d56 f474
.org 0x54d58
	movs r0, #128	@ 00054d58 8020
.org 0x54d5a
	str r0, [r6, #104]	@ 00054d5a b066
.org 0x54d5c
	ldrb r0, [r6, #13]	@ 00054d5c 707b
.org 0x54d5e
	adds r0, #1	@ 00054d5e 0130
.org 0x54d60
	strb r0, [r6, #13]	@ 00054d60 7073
.org 0x54d62
	adds r0, r6, #0	@ 00054d62 301c
.org 0x54d64
	bl 0x1cff0	@ 00054d64 c8f744f9
.org 0x54d68
	ldr r0, [r6, #92]	@ 00054d68 f06d
.org 0x54d6a
	ldr r1, [r6, #96]	@ 00054d6a 316e
.org 0x54d6c
	adds r0, r0, r1	@ 00054d6c 4018
.org 0x54d6e
	str r0, [r6, #92]	@ 00054d6e f065
.org 0x54d70
	adds r1, #64	@ 00054d70 4031
.org 0x54d72
	str r1, [r6, #96]	@ 00054d72 3166
.org 0x54d74
	movs r0, #224	@ 00054d74 e020
.org 0x54d76
	lsls r0, r0, #3	@ 00054d76 c000
.org 0x54d78
	cmp r1, r0	@ 00054d78 8142
.org 0x54d7a
	ble.n 0x54d7e	@ 00054d7a 00dd
.org 0x54d7c
	str r0, [r6, #96]	@ 00054d7c 3066
.org 0x54d7e
	ldr r0, [r6, #92]	@ 00054d7e f06d
.org 0x54d80
	cmp r0, #0	@ 00054d80 0028
.org 0x54d82
	bge.n 0x54d86	@ 00054d82 00da
.org 0x54d84
	adds r0, #31	@ 00054d84 1f30
.org 0x54d86
	asrs r0, r0, #5	@ 00054d86 4011
.org 0x54d88
	ldr r1, [r6, #100]	@ 00054d88 716e
.org 0x54d8a
	adds r1, r1, r0	@ 00054d8a 0918
.org 0x54d8c
	str r1, [r6, #88]	@ 00054d8c b165
.org 0x54d8e
	adds r0, r6, #0	@ 00054d8e 301c
.org 0x54d90
	bl 0x5524c	@ 00054d90 00f05cfa
.org 0x54d94
	adds r0, r6, #0	@ 00054d94 301c
.org 0x54d96
	bl 0x5526c	@ 00054d96 00f069fa
.org 0x54d9a
	ldrb r0, [r6, #18]	@ 00054d9a b07c
.org 0x54d9c
	subs r0, #1	@ 00054d9c 0138
.org 0x54d9e
	strb r0, [r6, #18]	@ 00054d9e b074
.org 0x54da0
	lsls r0, r0, #24	@ 00054da0 0006
.org 0x54da2
	cmp r0, #0	@ 00054da2 0028
.org 0x54da4
	bne.n 0x54e48	@ 00054da4 50d1
.org 0x54da6
	ldrb r0, [r6, #19]	@ 00054da6 f07c
.org 0x54da8
	movs r1, #3	@ 00054da8 0321
.org 0x54daa
	bl 0x129198	@ 00054daa d4f0f5f9
.org 0x54dae
	lsls r0, r0, #24	@ 00054dae 0006
.org 0x54db0
	cmp r0, #0	@ 00054db0 0028
.org 0x54db2
	bne.n 0x54dba	@ 00054db2 02d1
.org 0x54db4
	movs r0, #53	@ 00054db4 3520
.org 0x54db6
	bl 0x2b10	@ 00054db6 adf7abfe
.org 0x54dba
	ldrb r0, [r6, #19]	@ 00054dba f07c
.org 0x54dbc
	movs r2, #3	@ 00054dbc 0322
.org 0x54dbe
	ands r2, r0	@ 00054dbe 0240
.org 0x54dc0
	lsls r2, r2, #3	@ 00054dc0 d200
.org 0x54dc2
	mov r4, sp	@ 00054dc2 6c46
.org 0x54dc4
	adds r0, r4, r2	@ 00054dc4 a018
.org 0x54dc6
	ldr r1, [r6, #84]	@ 00054dc6 716d
.org 0x54dc8
	ldr r0, [r0, #0]	@ 00054dc8 0068
.org 0x54dca
	adds r1, r1, r0	@ 00054dca 0918
.org 0x54dcc
	ldr r7, [pc, #156]	@ 00054dcc 274f
.org 0x54dce
	ldr r0, [r7, #0]	@ 00054dce 3868
.org 0x54dd0
	ldr r3, [pc, #156]	@ 00054dd0 274b
.org 0x54dd2
	mov r9, r3	@ 00054dd2 9946
.org 0x54dd4
	mov r4, r9	@ 00054dd4 4c46
.org 0x54dd6
	muls r4, r0	@ 00054dd6 4443
.org 0x54dd8
	adds r0, r4, #0	@ 00054dd8 201c
.org 0x54dda
	ldr r3, [pc, #152]	@ 00054dda 264b
.org 0x54ddc
	mov r8, r3	@ 00054ddc 9846
.org 0x54dde
	add r0, r8	@ 00054dde 4044
.org 0x54de0
	lsls r0, r0, #1	@ 00054de0 4000
.org 0x54de2
	lsrs r5, r0, #1	@ 00054de2 4508
.org 0x54de4
	lsrs r0, r0, #17	@ 00054de4 400c
.org 0x54de6
	ldr r4, [pc, #144]	@ 00054de6 244c
.org 0x54de8
	ands r0, r4	@ 00054de8 2040
.org 0x54dea
	adds r1, r1, r0	@ 00054dea 0918
.org 0x54dec
	ldr r3, [pc, #140]	@ 00054dec 234b
.org 0x54dee
	adds r1, r1, r3	@ 00054dee c918
.org 0x54df0
	str r1, [sp, #32]	@ 00054df0 0891
.org 0x54df2
	add r0, sp, #4	@ 00054df2 01a8
.org 0x54df4
	adds r0, r0, r2	@ 00054df4 8018
.org 0x54df6
	ldr r2, [r6, #88]	@ 00054df6 b26d
.org 0x54df8
	ldr r0, [r0, #0]	@ 00054df8 0068
.org 0x54dfa
	adds r2, r2, r0	@ 00054dfa 1218
.org 0x54dfc
	mov r0, r9	@ 00054dfc 4846
.org 0x54dfe
	muls r0, r5	@ 00054dfe 6843
.org 0x54e00
	add r0, r8	@ 00054e00 4044
.org 0x54e02
	lsls r0, r0, #1	@ 00054e02 4000
.org 0x54e04
	lsrs r1, r0, #1	@ 00054e04 4108
.org 0x54e06
	str r1, [r7, #0]	@ 00054e06 3960
.org 0x54e08
	lsrs r0, r0, #17	@ 00054e08 400c
.org 0x54e0a
	ands r0, r4	@ 00054e0a 2040
.org 0x54e0c
	adds r2, r2, r0	@ 00054e0c 1218
.org 0x54e0e
	adds r2, r2, r3	@ 00054e0e d218
.org 0x54e10
	add r1, sp, #32	@ 00054e10 08a9
.org 0x54e12
	str r2, [r1, #4]	@ 00054e12 4a60
.org 0x54e14
	movs r0, #1	@ 00054e14 0120
.org 0x54e16
	bl 0xd0c88	@ 00054e16 7bf037ff
.org 0x54e1a
	cmp r0, #0	@ 00054e1a 0028
.org 0x54e1c
	beq.n 0x54e28	@ 00054e1c 04d0
.org 0x54e1e
	adds r0, #73	@ 00054e1e 4930
.org 0x54e20
	ldrb r1, [r0, #0]	@ 00054e20 0178
.org 0x54e22
	movs r2, #12	@ 00054e22 0c22
.org 0x54e24
	orrs r1, r2	@ 00054e24 1143
.org 0x54e26
	strb r1, [r0, #0]	@ 00054e26 0170
.org 0x54e28
	ldr r0, [r7, #0]	@ 00054e28 3868
.org 0x54e2a
	mov r4, r9	@ 00054e2a 4c46
.org 0x54e2c
	muls r4, r0	@ 00054e2c 4443
.org 0x54e2e
	adds r0, r4, #0	@ 00054e2e 201c
.org 0x54e30
	add r0, r8	@ 00054e30 4044
.org 0x54e32
	lsls r0, r0, #1	@ 00054e32 4000
.org 0x54e34
	lsrs r1, r0, #1	@ 00054e34 4108
.org 0x54e36
	str r1, [r7, #0]	@ 00054e36 3960
.org 0x54e38
	lsrs r0, r0, #17	@ 00054e38 400c
.org 0x54e3a
	movs r1, #7	@ 00054e3a 0721
.org 0x54e3c
	ands r0, r1	@ 00054e3c 0840
.org 0x54e3e
	adds r0, #8	@ 00054e3e 0830
.org 0x54e40
	strb r0, [r6, #18]	@ 00054e40 b074
.org 0x54e42
	ldrb r0, [r6, #19]	@ 00054e42 f07c
.org 0x54e44
	adds r0, #1	@ 00054e44 0130
.org 0x54e46
	strb r0, [r6, #19]	@ 00054e46 f074
.org 0x54e48
	ldr r0, [r6, #104]	@ 00054e48 b06e
.org 0x54e4a
	subs r0, #1	@ 00054e4a 0138
.org 0x54e4c
	str r0, [r6, #104]	@ 00054e4c b066
.org 0x54e4e
	cmp r0, #0	@ 00054e4e 0028
.org 0x54e50
	beq.n 0x54e54	@ 00054e50 00d0
.org 0x54e52
	b.n 0x54f8c	@ 00054e52 9be0
.org 0x54e54
	ldr r2, [pc, #8]	@ 00054e54 024a
.org 0x54e56
	ldrb r1, [r2, #18]	@ 00054e56 917c
.org 0x54e58
	movs r0, #2	@ 00054e58 0220
.org 0x54e5a
	orrs r0, r1	@ 00054e5a 0843
.org 0x54e5c
	strb r0, [r2, #18]	@ 00054e5c 9074
.org 0x54e5e
	b.n 0x54f86	@ 00054e5e 92e0
.org 0x54e60
	.byte 0x10,0xe9,0x02,0x02	@ 00054e60 data
.org 0x54e64
	.byte 0xfe,0xff,0x00,0x00	@ 00054e64 data
.org 0x54e68
	.byte 0x01,0x2c,0x00,0x00	@ 00054e68 data
.org 0x54e6c
	.byte 0x38,0xdc,0x02,0x02	@ 00054e6c data
.org 0x54e70
	.byte 0xfd,0x43,0x03,0x00	@ 00054e70 data
.org 0x54e74
	.byte 0xc3,0x9e,0x26,0x00	@ 00054e74 data
.org 0x54e78
	.byte 0xff,0x3f,0x00,0x00	@ 00054e78 data
.org 0x54e7c
	.byte 0x01,0xe0,0xff,0xff	@ 00054e7c data
.org 0x54e80
	adds r0, r6, #0	@ 00054e80 301c
.org 0x54e82
	bl 0x1cff0	@ 00054e82 c8f7b5f8
.org 0x54e86
	ldr r0, [r6, #92]	@ 00054e86 f06d
.org 0x54e88
	ldr r1, [r6, #96]	@ 00054e88 316e
.org 0x54e8a
	adds r0, r0, r1	@ 00054e8a 4018
.org 0x54e8c
	str r0, [r6, #92]	@ 00054e8c f065
.org 0x54e8e
	adds r1, #64	@ 00054e8e 4031
.org 0x54e90
	str r1, [r6, #96]	@ 00054e90 3166
.org 0x54e92
	movs r0, #224	@ 00054e92 e020
.org 0x54e94
	lsls r0, r0, #3	@ 00054e94 c000
.org 0x54e96
	cmp r1, r0	@ 00054e96 8142
.org 0x54e98
	ble.n 0x54e9c	@ 00054e98 00dd
.org 0x54e9a
	str r0, [r6, #96]	@ 00054e9a 3066
.org 0x54e9c
	ldr r0, [r6, #92]	@ 00054e9c f06d
.org 0x54e9e
	cmp r0, #0	@ 00054e9e 0028
.org 0x54ea0
	bge.n 0x54ea4	@ 00054ea0 00da
.org 0x54ea2
	adds r0, #31	@ 00054ea2 1f30
.org 0x54ea4
	asrs r0, r0, #5	@ 00054ea4 4011
.org 0x54ea6
	ldr r1, [r6, #100]	@ 00054ea6 716e
.org 0x54ea8
	adds r1, r1, r0	@ 00054ea8 0918
.org 0x54eaa
	str r1, [r6, #88]	@ 00054eaa b165
.org 0x54eac
	adds r0, r6, #0	@ 00054eac 301c
.org 0x54eae
	bl 0x5524c	@ 00054eae 00f0cdf9
.org 0x54eb2
	adds r0, r6, #0	@ 00054eb2 301c
.org 0x54eb4
	bl 0x5526c	@ 00054eb4 00f0daf9
.org 0x54eb8
	ldrb r0, [r6, #18]	@ 00054eb8 b07c
.org 0x54eba
	subs r0, #1	@ 00054eba 0138
.org 0x54ebc
	strb r0, [r6, #18]	@ 00054ebc b074
.org 0x54ebe
	lsls r0, r0, #24	@ 00054ebe 0006
.org 0x54ec0
	cmp r0, #0	@ 00054ec0 0028
.org 0x54ec2
	bne.n 0x54f66	@ 00054ec2 50d1
.org 0x54ec4
	ldrb r0, [r6, #19]	@ 00054ec4 f07c
.org 0x54ec6
	movs r1, #3	@ 00054ec6 0321
.org 0x54ec8
	bl 0x129198	@ 00054ec8 d4f066f9
.org 0x54ecc
	lsls r0, r0, #24	@ 00054ecc 0006
.org 0x54ece
	cmp r0, #0	@ 00054ece 0028
.org 0x54ed0
	bne.n 0x54ed8	@ 00054ed0 02d1
.org 0x54ed2
	movs r0, #53	@ 00054ed2 3520
.org 0x54ed4
	bl 0x2b10	@ 00054ed4 adf71cfe
.org 0x54ed8
	ldrb r0, [r6, #19]	@ 00054ed8 f07c
.org 0x54eda
	movs r2, #3	@ 00054eda 0322
.org 0x54edc
	ands r2, r0	@ 00054edc 0240
.org 0x54ede
	lsls r2, r2, #3	@ 00054ede d200
.org 0x54ee0
	mov r1, sp	@ 00054ee0 6946
.org 0x54ee2
	adds r0, r1, r2	@ 00054ee2 8818
.org 0x54ee4
	ldr r1, [r6, #84]	@ 00054ee4 716d
.org 0x54ee6
	ldr r0, [r0, #0]	@ 00054ee6 0068
.org 0x54ee8
	adds r1, r1, r0	@ 00054ee8 0918
.org 0x54eea
	ldr r7, [pc, #176]	@ 00054eea 2c4f
.org 0x54eec
	ldr r0, [r7, #0]	@ 00054eec 3868
.org 0x54eee
	ldr r3, [pc, #176]	@ 00054eee 2c4b
.org 0x54ef0
	mov r9, r3	@ 00054ef0 9946
.org 0x54ef2
	mov r4, r9	@ 00054ef2 4c46
.org 0x54ef4
	muls r4, r0	@ 00054ef4 4443
.org 0x54ef6
	adds r0, r4, #0	@ 00054ef6 201c
.org 0x54ef8
	ldr r3, [pc, #168]	@ 00054ef8 2a4b
.org 0x54efa
	mov r8, r3	@ 00054efa 9846
.org 0x54efc
	add r0, r8	@ 00054efc 4044
.org 0x54efe
	lsls r0, r0, #1	@ 00054efe 4000
.org 0x54f00
	lsrs r3, r0, #1	@ 00054f00 4308
.org 0x54f02
	lsrs r0, r0, #17	@ 00054f02 400c
.org 0x54f04
	ldr r5, [pc, #160]	@ 00054f04 284d
.org 0x54f06
	ands r0, r5	@ 00054f06 2840
.org 0x54f08
	adds r1, r1, r0	@ 00054f08 0918
.org 0x54f0a
	ldr r4, [pc, #160]	@ 00054f0a 284c
.org 0x54f0c
	adds r1, r1, r4	@ 00054f0c 0919
.org 0x54f0e
	str r1, [sp, #32]	@ 00054f0e 0891
.org 0x54f10
	add r1, sp, #32	@ 00054f10 08a9
.org 0x54f12
	add r0, sp, #4	@ 00054f12 01a8
.org 0x54f14
	adds r0, r0, r2	@ 00054f14 8018
.org 0x54f16
	ldr r2, [r6, #88]	@ 00054f16 b26d
.org 0x54f18
	ldr r0, [r0, #0]	@ 00054f18 0068
.org 0x54f1a
	adds r2, r2, r0	@ 00054f1a 1218
.org 0x54f1c
	mov r0, r9	@ 00054f1c 4846
.org 0x54f1e
	muls r0, r3	@ 00054f1e 5843
.org 0x54f20
	add r0, r8	@ 00054f20 4044
.org 0x54f22
	lsls r0, r0, #1	@ 00054f22 4000
.org 0x54f24
	lsrs r3, r0, #1	@ 00054f24 4308
.org 0x54f26
	str r3, [r7, #0]	@ 00054f26 3b60
.org 0x54f28
	lsrs r0, r0, #17	@ 00054f28 400c
.org 0x54f2a
	ands r0, r5	@ 00054f2a 2840
.org 0x54f2c
	adds r2, r2, r0	@ 00054f2c 1218
.org 0x54f2e
	adds r2, r2, r4	@ 00054f2e 1219
.org 0x54f30
	str r2, [r1, #4]	@ 00054f30 4a60
.org 0x54f32
	movs r0, #1	@ 00054f32 0120
.org 0x54f34
	bl 0xd0c88	@ 00054f34 7bf0a8fe
.org 0x54f38
	cmp r0, #0	@ 00054f38 0028
.org 0x54f3a
	beq.n 0x54f46	@ 00054f3a 04d0
.org 0x54f3c
	adds r0, #73	@ 00054f3c 4930
.org 0x54f3e
	ldrb r1, [r0, #0]	@ 00054f3e 0178
.org 0x54f40
	movs r2, #12	@ 00054f40 0c22
.org 0x54f42
	orrs r1, r2	@ 00054f42 1143
.org 0x54f44
	strb r1, [r0, #0]	@ 00054f44 0170
.org 0x54f46
	ldr r0, [r7, #0]	@ 00054f46 3868
.org 0x54f48
	mov r4, r9	@ 00054f48 4c46
.org 0x54f4a
	muls r4, r0	@ 00054f4a 4443
.org 0x54f4c
	adds r0, r4, #0	@ 00054f4c 201c
.org 0x54f4e
	add r0, r8	@ 00054f4e 4044
.org 0x54f50
	lsls r0, r0, #1	@ 00054f50 4000
.org 0x54f52
	lsrs r1, r0, #1	@ 00054f52 4108
.org 0x54f54
	str r1, [r7, #0]	@ 00054f54 3960
.org 0x54f56
	lsrs r0, r0, #17	@ 00054f56 400c
.org 0x54f58
	movs r1, #7	@ 00054f58 0721
.org 0x54f5a
	ands r0, r1	@ 00054f5a 0840
.org 0x54f5c
	adds r0, #8	@ 00054f5c 0830
.org 0x54f5e
	strb r0, [r6, #18]	@ 00054f5e b074
.org 0x54f60
	ldrb r0, [r6, #19]	@ 00054f60 f07c
.org 0x54f62
	adds r0, #1	@ 00054f62 0130
.org 0x54f64
	strb r0, [r6, #19]	@ 00054f64 f074
.org 0x54f66
	adds r0, r6, #0	@ 00054f66 301c
.org 0x54f68
	adds r0, #188	@ 00054f68 bc30
.org 0x54f6a
	ldr r0, [r0, #0]	@ 00054f6a 0068
.org 0x54f6c
	movs r1, #192	@ 00054f6c c021
.org 0x54f6e
	lsls r1, r1, #9	@ 00054f6e 4902
.org 0x54f70
	adds r0, r0, r1	@ 00054f70 4018
.org 0x54f72
	ldr r1, [r6, #88]	@ 00054f72 b16d
.org 0x54f74
	cmp r1, r0	@ 00054f74 8142

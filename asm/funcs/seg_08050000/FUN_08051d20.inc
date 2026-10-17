@ FUN_08051d20  entry 0x08051d20  size 650
.thumb
.org 0x51d20
FUN_08051d20:
	push {r4, r5, r6, r7, lr}	@ 00051d20 f0b5
.org 0x51d22
	mov r7, r8	@ 00051d22 4746
.org 0x51d24
	push {r7}	@ 00051d24 80b4
.org 0x51d26
	sub sp, #8	@ 00051d26 82b0
.org 0x51d28
	adds r6, r0, #0	@ 00051d28 061c
.org 0x51d2a
	ldrb r0, [r6, #14]	@ 00051d2a b07b
.org 0x51d2c
	cmp r0, #0	@ 00051d2c 0028
.org 0x51d2e
	beq.n 0x51d32	@ 00051d2e 00d0
.org 0x51d30
	b.n 0x51ea8	@ 00051d30 bae0
.org 0x51d32
	ldr r5, [pc, #48]	@ 00051d32 0c4d
.org 0x51d34
	ldr r0, [r5, #0]	@ 00051d34 2868
.org 0x51d36
	ldr r4, [pc, #48]	@ 00051d36 0c4c
.org 0x51d38
	muls r0, r4	@ 00051d38 6043
.org 0x51d3a
	ldr r2, [pc, #48]	@ 00051d3a 0c4a
.org 0x51d3c
	adds r0, r0, r2	@ 00051d3c 8018
.org 0x51d3e
	lsls r0, r0, #1	@ 00051d3e 4000
.org 0x51d40
	lsrs r1, r0, #1	@ 00051d40 4108
.org 0x51d42
	lsrs r0, r0, #17	@ 00051d42 400c
.org 0x51d44
	movs r3, #31	@ 00051d44 1f23
.org 0x51d46
	ands r0, r3	@ 00051d46 1840
.org 0x51d48
	adds r0, #1	@ 00051d48 0130
.org 0x51d4a
	mov r8, r0	@ 00051d4a 8046
.org 0x51d4c
	adds r0, r1, #0	@ 00051d4c 081c
.org 0x51d4e
	muls r0, r4	@ 00051d4e 6043
.org 0x51d50
	adds r0, r0, r2	@ 00051d50 8018
.org 0x51d52
	lsls r0, r0, #1	@ 00051d52 4000
.org 0x51d54
	lsrs r1, r0, #1	@ 00051d54 4108
.org 0x51d56
	str r1, [r5, #0]	@ 00051d56 2960
.org 0x51d58
	lsrs r4, r0, #17	@ 00051d58 440c
.org 0x51d5a
	ands r4, r3	@ 00051d5a 1c40
.org 0x51d5c
	cmp r4, #4	@ 00051d5c 042c
.org 0x51d5e
	bhi.n 0x51d70	@ 00051d5e 07d8
.org 0x51d60
	movs r4, #0	@ 00051d60 0024
.org 0x51d62
	b.n 0x51da2	@ 00051d62 1ee0
.org 0x51d64
	.byte 0x38,0xdc,0x02,0x02	@ 00051d64 data
.org 0x51d68
	.byte 0xfd,0x43,0x03,0x00	@ 00051d68 data
.org 0x51d6c
	.byte 0xc3,0x9e,0x26,0x00	@ 00051d6c data
.org 0x51d70
	cmp r4, #7	@ 00051d70 072c
.org 0x51d72
	bhi.n 0x51d78	@ 00051d72 01d8
.org 0x51d74
	movs r4, #1	@ 00051d74 0124
.org 0x51d76
	b.n 0x51da2	@ 00051d76 14e0
.org 0x51d78
	cmp r4, #12	@ 00051d78 0c2c
.org 0x51d7a
	bhi.n 0x51d80	@ 00051d7a 01d8
.org 0x51d7c
	movs r4, #2	@ 00051d7c 0224
.org 0x51d7e
	b.n 0x51da2	@ 00051d7e 10e0
.org 0x51d80
	cmp r4, #16	@ 00051d80 102c
.org 0x51d82
	bhi.n 0x51d88	@ 00051d82 01d8
.org 0x51d84
	movs r4, #3	@ 00051d84 0324
.org 0x51d86
	b.n 0x51da2	@ 00051d86 0ce0
.org 0x51d88
	cmp r4, #19	@ 00051d88 132c
.org 0x51d8a
	bhi.n 0x51d90	@ 00051d8a 01d8
.org 0x51d8c
	movs r4, #4	@ 00051d8c 0424
.org 0x51d8e
	b.n 0x51da2	@ 00051d8e 08e0
.org 0x51d90
	cmp r4, #24	@ 00051d90 182c
.org 0x51d92
	bhi.n 0x51d98	@ 00051d92 01d8
.org 0x51d94
	movs r4, #5	@ 00051d94 0524
.org 0x51d96
	b.n 0x51da2	@ 00051d96 04e0
.org 0x51d98
	cmp r4, #27	@ 00051d98 1b2c
.org 0x51d9a
	bhi.n 0x51da0	@ 00051d9a 01d8
.org 0x51d9c
	movs r4, #6	@ 00051d9c 0624
.org 0x51d9e
	b.n 0x51da2	@ 00051d9e 00e0
.org 0x51da0
	movs r4, #7	@ 00051da0 0724
.org 0x51da2
	adds r5, r6, #0	@ 00051da2 351c
.org 0x51da4
	adds r5, #180	@ 00051da4 b435
.org 0x51da6
	adds r0, r6, #0	@ 00051da6 301c
.org 0x51da8
	adds r0, #218	@ 00051da8 da30
.org 0x51daa
	adds r0, r0, r4	@ 00051daa 0019
.org 0x51dac
	ldrb r7, [r0, #0]	@ 00051dac 0778
.org 0x51dae
	cmp r7, #0	@ 00051dae 002f
.org 0x51db0
	beq.n 0x51db4	@ 00051db0 00d0
.org 0x51db2
	b.n 0x51fda	@ 00051db2 12e1
.org 0x51db4
	ldr r1, [pc, #92]	@ 00051db4 1749
.org 0x51db6
	adds r0, r6, #0	@ 00051db6 301c
.org 0x51db8
	bl 0x1cf00	@ 00051db8 cbf7a2f8
.org 0x51dbc
	adds r0, r6, #0	@ 00051dbc 301c
.org 0x51dbe
	adds r0, #116	@ 00051dbe 7430
.org 0x51dc0
	ldr r1, [pc, #84]	@ 00051dc0 1549
.org 0x51dc2
	bl 0x5784	@ 00051dc2 b3f7dffc
.org 0x51dc6
	ldr r0, [r5, #0]	@ 00051dc6 2868
.org 0x51dc8
	ldr r1, [r5, #4]	@ 00051dc8 6968
.org 0x51dca
	bl 0x8988	@ 00051dca b6f7ddfd
.org 0x51dce
	str r0, [r6, #84]	@ 00051dce 7065
.org 0x51dd0
	cmp r4, #2	@ 00051dd0 022c
.org 0x51dd2
	bhi.n 0x51e20	@ 00051dd2 25d8
.org 0x51dd4
	adds r1, r6, #0	@ 00051dd4 311c
.org 0x51dd6
	adds r1, #77	@ 00051dd6 4d31
.org 0x51dd8
	movs r0, #1	@ 00051dd8 0120
.org 0x51dda
	strb r0, [r1, #0]	@ 00051dda 0870
.org 0x51ddc
	adds r2, r6, #0	@ 00051ddc 321c
.org 0x51dde
	adds r2, #74	@ 00051dde 4a32
.org 0x51de0
	ldrb r0, [r2, #0]	@ 00051de0 1078
.org 0x51de2
	movs r1, #32	@ 00051de2 2021
.org 0x51de4
	orrs r0, r1	@ 00051de4 0843
.org 0x51de6
	strb r0, [r2, #0]	@ 00051de6 1070
.org 0x51de8
	ldrb r0, [r6, #10]	@ 00051de8 b07a
.org 0x51dea
	orrs r1, r0	@ 00051dea 0143
.org 0x51dec
	strb r1, [r6, #10]	@ 00051dec b172
.org 0x51dee
	ldr r0, [r5, #0]	@ 00051dee 2868
.org 0x51df0
	ldr r1, [r5, #4]	@ 00051df0 6968
.org 0x51df2
	bl 0x8748	@ 00051df2 b6f7a9fc
.org 0x51df6
	str r0, [r5, #24]	@ 00051df6 a861
.org 0x51df8
	ldr r1, [pc, #32]	@ 00051df8 0849
.org 0x51dfa
	adds r0, r0, r1	@ 00051dfa 4018
.org 0x51dfc
	str r0, [r6, #88]	@ 00051dfc b065
.org 0x51dfe
	lsls r1, r4, #2	@ 00051dfe a100
.org 0x51e00
	adds r1, r1, r4	@ 00051e00 0919
.org 0x51e02
	lsls r1, r1, #11	@ 00051e02 c902
.org 0x51e04
	ldr r0, [r6, #84]	@ 00051e04 706d
.org 0x51e06
	adds r0, r0, r1	@ 00051e06 4018
.org 0x51e08
	movs r1, #192	@ 00051e08 c021
.org 0x51e0a
	lsls r1, r1, #6	@ 00051e0a 8901
.org 0x51e0c
	adds r0, r0, r1	@ 00051e0c 4018
.org 0x51e0e
	str r0, [r6, #84]	@ 00051e0e 7065
.org 0x51e10
	b.n 0x51e60	@ 00051e10 26e0
.org 0x51e12
	.byte 0x00	@ 00051e12 data
.org 0x51e13
	.byte 0x00	@ 00051e13 data
.org 0x51e14
	.byte 0x1a,0xa1,0x00,0x00	@ 00051e14 data
.org 0x51e18
	.byte 0xdc,0x80,0x85,0x08	@ 00051e18 data
.org 0x51e1c
	.byte 0x00,0xd4,0xff,0xff	@ 00051e1c data
.org 0x51e20
	adds r0, r6, #0	@ 00051e20 301c
.org 0x51e22
	adds r0, #77	@ 00051e22 4d30
.org 0x51e24
	strb r7, [r0, #0]	@ 00051e24 0770
.org 0x51e26
	adds r2, r6, #0	@ 00051e26 321c
.org 0x51e28
	adds r2, #74	@ 00051e28 4a32
.org 0x51e2a
	ldrb r1, [r2, #0]	@ 00051e2a 1178
.org 0x51e2c
	movs r0, #33	@ 00051e2c 2120
.org 0x51e2e
	negs r0, r0	@ 00051e2e 4042
.org 0x51e30
	ands r0, r1	@ 00051e30 0840
.org 0x51e32
	strb r0, [r2, #0]	@ 00051e32 1070
.org 0x51e34
	ldrb r1, [r6, #10]	@ 00051e34 b17a
.org 0x51e36
	movs r0, #223	@ 00051e36 df20
.org 0x51e38
	ands r0, r1	@ 00051e38 0840
.org 0x51e3a
	strb r0, [r6, #10]	@ 00051e3a b072
.org 0x51e3c
	ldr r0, [r5, #4]	@ 00051e3c 6868
.org 0x51e3e
	str r0, [r5, #24]	@ 00051e3e a861
.org 0x51e40
	movs r1, #176	@ 00051e40 b021
.org 0x51e42
	lsls r1, r1, #6	@ 00051e42 8901
.org 0x51e44
	adds r0, r0, r1	@ 00051e44 4018
.org 0x51e46
	str r0, [r6, #88]	@ 00051e46 b065
.org 0x51e48
	subs r1, r4, #3	@ 00051e48 e11e
.org 0x51e4a
	lsls r0, r1, #1	@ 00051e4a 4800
.org 0x51e4c
	adds r0, r0, r1	@ 00051e4c 4018
.org 0x51e4e
	lsls r0, r0, #2	@ 00051e4e 8000
.org 0x51e50
	subs r0, r0, r1	@ 00051e50 401a
.org 0x51e52
	lsls r0, r0, #10	@ 00051e52 8002
.org 0x51e54
	ldr r1, [r6, #84]	@ 00051e54 716d
.org 0x51e56
	adds r1, r1, r0	@ 00051e56 0918
.org 0x51e58
	movs r0, #128	@ 00051e58 8020
.org 0x51e5a
	lsls r0, r0, #5	@ 00051e5a 4001
.org 0x51e5c
	adds r1, r1, r0	@ 00051e5c 0918
.org 0x51e5e
	str r1, [r6, #84]	@ 00051e5e 7165
.org 0x51e60
	adds r0, r6, #0	@ 00051e60 301c
.org 0x51e62
	adds r0, #164	@ 00051e62 a430
.org 0x51e64
	movs r1, #0	@ 00051e64 0021
.org 0x51e66
	ldrsh r0, [r0, r1]	@ 00051e66 405e
.org 0x51e68
	cmp r0, #32	@ 00051e68 2028
.org 0x51e6a
	ble.n 0x51e70	@ 00051e6a 01dd
.org 0x51e6c
	movs r0, #60	@ 00051e6c 3c20
.org 0x51e6e
	b.n 0x51e7a	@ 00051e6e 04e0
.org 0x51e70
	cmp r0, #16	@ 00051e70 1028
.org 0x51e72
	ble.n 0x51e78	@ 00051e72 01dd
.org 0x51e74
	movs r0, #50	@ 00051e74 3220
.org 0x51e76
	b.n 0x51e7a	@ 00051e76 00e0
.org 0x51e78
	movs r0, #40	@ 00051e78 2820
.org 0x51e7a
	strb r0, [r6, #18]	@ 00051e7a b074
.org 0x51e7c
	ldr r1, [pc, #16]	@ 00051e7c 0449
.org 0x51e7e
	adds r0, r6, #0	@ 00051e7e 301c
.org 0x51e80
	adds r0, #215	@ 00051e80 d730
.org 0x51e82
	ldrb r0, [r0, #0]	@ 00051e82 0078
.org 0x51e84
	adds r0, r0, r1	@ 00051e84 4018
.org 0x51e86
	ldrb r0, [r0, #0]	@ 00051e86 0078
.org 0x51e88
	cmp r8, r0	@ 00051e88 8045
.org 0x51e8a
	bhi.n 0x51e94	@ 00051e8a 03d8
.org 0x51e8c
	movs r0, #18	@ 00051e8c 1220
.org 0x51e8e
	b.n 0x51e96	@ 00051e8e 02e0
.org 0x51e90
	.byte 0xdc,0x81,0x85,0x08	@ 00051e90 data
.org 0x51e94
	movs r0, #25	@ 00051e94 1920
.org 0x51e96
	strb r0, [r6, #15]	@ 00051e96 f073
.org 0x51e98
	adds r1, r6, #0	@ 00051e98 311c
.org 0x51e9a
	adds r1, #226	@ 00051e9a e231
.org 0x51e9c
	movs r0, #0	@ 00051e9c 0020
.org 0x51e9e
	strb r0, [r1, #0]	@ 00051e9e 0870
.org 0x51ea0
	strb r0, [r6, #19]	@ 00051ea0 f074
.org 0x51ea2
	ldrb r0, [r6, #14]	@ 00051ea2 b07b
.org 0x51ea4
	adds r0, #1	@ 00051ea4 0130
.org 0x51ea6
	strb r0, [r6, #14]	@ 00051ea6 b073
.org 0x51ea8
	adds r0, r6, #0	@ 00051ea8 301c
.org 0x51eaa
	bl 0x1cff0	@ 00051eaa cbf7a1f8
.org 0x51eae
	adds r0, r6, #0	@ 00051eae 301c
.org 0x51eb0
	adds r0, #140	@ 00051eb0 8c30
.org 0x51eb2
	ldr r0, [r0, #0]	@ 00051eb2 0068
.org 0x51eb4
	movs r1, #1	@ 00051eb4 0121
.org 0x51eb6
	ands r0, r1	@ 00051eb6 0840
.org 0x51eb8
	cmp r0, #0	@ 00051eb8 0028
.org 0x51eba
	beq.n 0x51ec2	@ 00051eba 02d0
.org 0x51ebc
	adds r0, r6, #0	@ 00051ebc 301c
.org 0x51ebe
	adds r0, #226	@ 00051ebe e230
.org 0x51ec0
	strb r1, [r0, #0]	@ 00051ec0 0170
.org 0x51ec2
	ldrb r0, [r6, #15]	@ 00051ec2 f07b
.org 0x51ec4
	cmp r0, #18	@ 00051ec4 1228
.org 0x51ec6
	beq.n 0x51eca	@ 00051ec6 00d0
.org 0x51ec8
	b.n 0x51fc4	@ 00051ec8 7ce0
.org 0x51eca
	ldrb r5, [r6, #19]	@ 00051eca f57c
.org 0x51ecc
	movs r0, #3	@ 00051ecc 0320
.org 0x51ece
	ands r0, r5	@ 00051ece 2840
.org 0x51ed0
	cmp r0, #0	@ 00051ed0 0028
.org 0x51ed2
	bne.n 0x51faa	@ 00051ed2 6ad1
.org 0x51ed4
	ldr r3, [r6, #84]	@ 00051ed4 736d
.org 0x51ed6
	movs r0, #128	@ 00051ed6 8020
.org 0x51ed8
	lsls r0, r0, #5	@ 00051ed8 4001
.org 0x51eda
	adds r2, r3, r0	@ 00051eda 1a18
.org 0x51edc
	ldr r4, [pc, #64]	@ 00051edc 104c
.org 0x51ede
	ldr r0, [r4, #0]	@ 00051ede 2068
.org 0x51ee0
	ldr r7, [pc, #64]	@ 00051ee0 104f
.org 0x51ee2
	muls r0, r7	@ 00051ee2 7843
.org 0x51ee4
	ldr r1, [pc, #64]	@ 00051ee4 1049
.org 0x51ee6
	mov r8, r1	@ 00051ee6 8846
.org 0x51ee8
	add r0, r8	@ 00051ee8 4044
.org 0x51eea
	lsls r0, r0, #1	@ 00051eea 4000
.org 0x51eec
	lsrs r1, r0, #1	@ 00051eec 4108
.org 0x51eee
	str r1, [r4, #0]	@ 00051eee 2160
.org 0x51ef0
	lsrs r0, r0, #17	@ 00051ef0 400c
.org 0x51ef2
	movs r1, #31	@ 00051ef2 1f21
.org 0x51ef4
	ands r0, r1	@ 00051ef4 0840
.org 0x51ef6
	lsls r0, r0, #8	@ 00051ef6 0002
.org 0x51ef8
	subs r2, r2, r0	@ 00051ef8 121a
.org 0x51efa
	str r2, [sp, #0]	@ 00051efa 0092
.org 0x51efc
	movs r0, #7	@ 00051efc 0720
.org 0x51efe
	ands r0, r5	@ 00051efe 2840
.org 0x51f00
	adds r2, r3, #0	@ 00051f00 1a1c
.org 0x51f02
	cmp r0, #0	@ 00051f02 0028
.org 0x51f04
	bne.n 0x51f44	@ 00051f04 1ed1
.org 0x51f06
	ldrb r1, [r6, #10]	@ 00051f06 b17a
.org 0x51f08
	movs r0, #32	@ 00051f08 2020
.org 0x51f0a
	ands r0, r1	@ 00051f0a 0840
.org 0x51f0c
	cmp r0, #0	@ 00051f0c 0028
.org 0x51f0e
	beq.n 0x51f30	@ 00051f0e 0fd0
.org 0x51f10
	ldr r1, [r6, #88]	@ 00051f10 b16d
.org 0x51f12
	adds r0, r2, #0	@ 00051f12 101c
.org 0x51f14
	bl 0x8748	@ 00051f14 b6f718fc
.org 0x51f18
	str r0, [sp, #4]	@ 00051f18 0190
.org 0x51f1a
	ldr r1, [pc, #16]	@ 00051f1a 0449
.org 0x51f1c
	b.n 0x51f5a	@ 00051f1c 1de0
.org 0x51f1e
	.byte 0x00	@ 00051f1e data
.org 0x51f1f
	.byte 0x00	@ 00051f1f data
.org 0x51f20
	.byte 0x38,0xdc,0x02,0x02	@ 00051f20 data
.org 0x51f24
	.byte 0xfd,0x43,0x03,0x00	@ 00051f24 data
.org 0x51f28
	.byte 0xc3,0x9e,0x26,0x00	@ 00051f28 data
.org 0x51f2c
	.byte 0xb8,0x81,0x85,0x08	@ 00051f2c data
.org 0x51f30
	ldr r1, [r6, #88]	@ 00051f30 b16d
.org 0x51f32
	adds r0, r2, #0	@ 00051f32 101c
.org 0x51f34
	bl 0x8534	@ 00051f34 b6f7fefa
.org 0x51f38
	str r0, [sp, #4]	@ 00051f38 0190
.org 0x51f3a
	ldr r1, [pc, #4]	@ 00051f3a 0149
.org 0x51f3c
	b.n 0x51f5a	@ 00051f3c 0de0
.org 0x51f3e
	.byte 0x00	@ 00051f3e data
.org 0x51f3f
	.byte 0x00	@ 00051f3f data
.org 0x51f40
	.byte 0xf4,0x80,0x85,0x08	@ 00051f40 data
.org 0x51f44
	ldrb r1, [r6, #10]	@ 00051f44 b17a
.org 0x51f46
	movs r0, #32	@ 00051f46 2020
.org 0x51f48
	ands r0, r1	@ 00051f48 0840
.org 0x51f4a
	cmp r0, #0	@ 00051f4a 0028
.org 0x51f4c
	beq.n 0x51f80	@ 00051f4c 18d0
.org 0x51f4e
	ldr r1, [r6, #88]	@ 00051f4e b16d
.org 0x51f50
	adds r0, r2, #0	@ 00051f50 101c
.org 0x51f52
	bl 0x8748	@ 00051f52 b6f7f9fb
.org 0x51f56
	str r0, [sp, #4]	@ 00051f56 0190
.org 0x51f58
	ldr r1, [pc, #32]	@ 00051f58 0849
.org 0x51f5a
	ldr r0, [r4, #0]	@ 00051f5a 2068
.org 0x51f5c
	adds r3, r0, #0	@ 00051f5c 031c
.org 0x51f5e
	muls r3, r7	@ 00051f5e 7b43
.org 0x51f60
	add r3, r8	@ 00051f60 4344
.org 0x51f62
	lsls r3, r3, #1	@ 00051f62 5b00
.org 0x51f64
	lsrs r0, r3, #1	@ 00051f64 5808
.org 0x51f66
	str r0, [r4, #0]	@ 00051f66 2060
.org 0x51f68
	lsrs r3, r3, #17	@ 00051f68 5b0c
.org 0x51f6a
	movs r0, #1	@ 00051f6a 0120
.org 0x51f6c
	ands r3, r0	@ 00051f6c 0340
.org 0x51f6e
	lsls r3, r3, #4	@ 00051f6e 1b01
.org 0x51f70
	mov r0, sp	@ 00051f70 6846
.org 0x51f72
	movs r2, #0	@ 00051f72 0022
.org 0x51f74
	bl 0xd4c8c	@ 00051f74 82f08afe
.org 0x51f78
	b.n 0x51faa	@ 00051f78 17e0
.org 0x51f7a
	.byte 0x00	@ 00051f7a data
.org 0x51f7b
	.byte 0x00	@ 00051f7b data
.org 0x51f7c
	.byte 0x9c,0x81,0x85,0x08	@ 00051f7c data
.org 0x51f80
	ldr r1, [r6, #88]	@ 00051f80 b16d
.org 0x51f82
	adds r0, r3, #0	@ 00051f82 181c
.org 0x51f84
	bl 0x8534	@ 00051f84 b6f7d6fa
.org 0x51f88
	str r0, [sp, #4]	@ 00051f88 0190
.org 0x51f8a
	ldr r1, [pc, #92]	@ 00051f8a 1749
.org 0x51f8c
	ldr r0, [r4, #0]	@ 00051f8c 2068
.org 0x51f8e
	adds r3, r0, #0	@ 00051f8e 031c
.org 0x51f90
	muls r3, r7	@ 00051f90 7b43
.org 0x51f92
	add r3, r8	@ 00051f92 4344
.org 0x51f94
	lsls r3, r3, #1	@ 00051f94 5b00
.org 0x51f96
	lsrs r0, r3, #1	@ 00051f96 5808
.org 0x51f98
	str r0, [r4, #0]	@ 00051f98 2060
.org 0x51f9a
	lsrs r3, r3, #17	@ 00051f9a 5b0c
.org 0x51f9c
	movs r0, #1	@ 00051f9c 0120
.org 0x51f9e
	ands r3, r0	@ 00051f9e 0340
.org 0x51fa0
	lsls r3, r3, #4	@ 00051fa0 1b01
.org 0x51fa2
	mov r0, sp	@ 00051fa2 6846
.org 0x51fa4
	movs r2, #0	@ 00051fa4 0022
.org 0x51fa6
	bl 0xd4c8c	@ 00051fa6 82f071fe

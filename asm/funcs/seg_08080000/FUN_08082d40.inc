@ FUN_08082d40  entry 0x08082d40  size 726
.thumb
.org 0x82d40
FUN_08082d40:
	push {r4, r5, r6, r7, lr}	@ 00082d40 f0b5
.org 0x82d42
	sub sp, #8	@ 00082d42 82b0
.org 0x82d44
	adds r5, r0, #0	@ 00082d44 051c
.org 0x82d46
	ldrb r0, [r5, #14]	@ 00082d46 a87b
.org 0x82d48
	cmp r0, #1	@ 00082d48 0128
.org 0x82d4a
	bne.n 0x82d4e	@ 00082d4a 00d1
.org 0x82d4c
	b.n 0x82f2a	@ 00082d4c ede0
.org 0x82d4e
	cmp r0, #1	@ 00082d4e 0128
.org 0x82d50
	bgt.n 0x82d58	@ 00082d50 02dc
.org 0x82d52
	cmp r0, #0	@ 00082d52 0028
.org 0x82d54
	beq.n 0x82d60	@ 00082d54 04d0
.org 0x82d56
	b.n 0x83036	@ 00082d56 6ee1
.org 0x82d58
	cmp r0, #2	@ 00082d58 0228
.org 0x82d5a
	bne.n 0x82d5e	@ 00082d5a 00d1
.org 0x82d5c
	b.n 0x83010	@ 00082d5c 58e1
.org 0x82d5e
	b.n 0x83036	@ 00082d5e 6ae1
.org 0x82d60
	movs r4, #0	@ 00082d60 0024
.org 0x82d62
	adds r0, r5, #0	@ 00082d62 281c
.org 0x82d64
	adds r0, #190	@ 00082d64 be30
.org 0x82d66
	ldrb r0, [r0, #0]	@ 00082d66 0078
.org 0x82d68
	cmp r0, #2	@ 00082d68 0228
.org 0x82d6a
	beq.n 0x82da0	@ 00082d6a 19d0
.org 0x82d6c
	cmp r0, #2	@ 00082d6c 0228
.org 0x82d6e
	bgt.n 0x82d76	@ 00082d6e 02dc
.org 0x82d70
	cmp r0, #1	@ 00082d70 0128
.org 0x82d72
	beq.n 0x82d84	@ 00082d72 07d0
.org 0x82d74
	b.n 0x82d7e	@ 00082d74 03e0
.org 0x82d76
	cmp r0, #3	@ 00082d76 0328
.org 0x82d78
	beq.n 0x82dbc	@ 00082d78 20d0
.org 0x82d7a
	cmp r0, #4	@ 00082d7a 0428
.org 0x82d7c
	beq.n 0x82de0	@ 00082d7c 30d0
.org 0x82d7e
	adds r6, r5, #0	@ 00082d7e 2e1c
.org 0x82d80
	adds r6, #74	@ 00082d80 4a36
.org 0x82d82
	b.n 0x82e26	@ 00082d82 50e0
.org 0x82d84
	ldr r4, [pc, #20]	@ 00082d84 054c
.org 0x82d86
	ldrb r1, [r5, #10]	@ 00082d86 a97a
.org 0x82d88
	movs r0, #32	@ 00082d88 2020
.org 0x82d8a
	ands r0, r1	@ 00082d8a 0840
.org 0x82d8c
	adds r6, r5, #0	@ 00082d8c 2e1c
.org 0x82d8e
	adds r6, #74	@ 00082d8e 4a36
.org 0x82d90
	cmp r0, #0	@ 00082d90 0028
.org 0x82d92
	beq.n 0x82e26	@ 00082d92 48d0
.org 0x82d94
	movs r4, #144	@ 00082d94 9024
.org 0x82d96
	lsls r4, r4, #5	@ 00082d96 6401
.org 0x82d98
	b.n 0x82e26	@ 00082d98 45e0
.org 0x82d9a
	.byte 0x00	@ 00082d9a data
.org 0x82d9b
	.byte 0x00	@ 00082d9b data
.org 0x82d9c
	.byte 0x00,0xee,0xff,0xff	@ 00082d9c data
.org 0x82da0
	ldr r4, [pc, #20]	@ 00082da0 054c
.org 0x82da2
	ldrb r1, [r5, #10]	@ 00082da2 a97a
.org 0x82da4
	movs r0, #32	@ 00082da4 2020
.org 0x82da6
	ands r0, r1	@ 00082da6 0840
.org 0x82da8
	adds r6, r5, #0	@ 00082da8 2e1c
.org 0x82daa
	adds r6, #74	@ 00082daa 4a36
.org 0x82dac
	cmp r0, #0	@ 00082dac 0028
.org 0x82dae
	beq.n 0x82e26	@ 00082dae 3ad0
.org 0x82db0
	movs r4, #192	@ 00082db0 c024
.org 0x82db2
	lsls r4, r4, #5	@ 00082db2 6401
.org 0x82db4
	b.n 0x82e26	@ 00082db4 37e0
.org 0x82db6
	.byte 0x00	@ 00082db6 data
.org 0x82db7
	.byte 0x00	@ 00082db7 data
.org 0x82db8
	.byte 0x00,0xe8,0xff,0xff	@ 00082db8 data
.org 0x82dbc
	ldr r4, [pc, #28]	@ 00082dbc 074c
.org 0x82dbe
	ldrb r1, [r5, #10]	@ 00082dbe a97a
.org 0x82dc0
	movs r0, #32	@ 00082dc0 2020
.org 0x82dc2
	ands r0, r1	@ 00082dc2 0840
.org 0x82dc4
	cmp r0, #0	@ 00082dc4 0028
.org 0x82dc6
	beq.n 0x82dcc	@ 00082dc6 01d0
.org 0x82dc8
	movs r4, #140	@ 00082dc8 8c24
.org 0x82dca
	lsls r4, r4, #6	@ 00082dca a401
.org 0x82dcc
	lsrs r0, r1, #5	@ 00082dcc 4809
.org 0x82dce
	movs r2, #1	@ 00082dce 0122
.org 0x82dd0
	bics r2, r0	@ 00082dd0 8243
.org 0x82dd2
	cmp r2, #0	@ 00082dd2 002a
.org 0x82dd4
	beq.n 0x82e04	@ 00082dd4 16d0
.org 0x82dd6
	movs r0, #32	@ 00082dd6 2020
.org 0x82dd8
	orrs r0, r1	@ 00082dd8 0843
.org 0x82dda
	b.n 0x82e08	@ 00082dda 15e0
.org 0x82ddc
	.byte 0x00,0xdd,0xff,0xff	@ 00082ddc data
.org 0x82de0
	ldr r4, [pc, #28]	@ 00082de0 074c
.org 0x82de2
	ldrb r1, [r5, #10]	@ 00082de2 a97a
.org 0x82de4
	movs r0, #32	@ 00082de4 2020
.org 0x82de6
	ands r0, r1	@ 00082de6 0840
.org 0x82de8
	cmp r0, #0	@ 00082de8 0028
.org 0x82dea
	beq.n 0x82df0	@ 00082dea 01d0
.org 0x82dec
	movs r4, #172	@ 00082dec ac24
.org 0x82dee
	lsls r4, r4, #6	@ 00082dee a401
.org 0x82df0
	lsrs r0, r1, #5	@ 00082df0 4809
.org 0x82df2
	movs r2, #1	@ 00082df2 0122
.org 0x82df4
	bics r2, r0	@ 00082df4 8243
.org 0x82df6
	cmp r2, #0	@ 00082df6 002a
.org 0x82df8
	beq.n 0x82e04	@ 00082df8 04d0
.org 0x82dfa
	movs r0, #32	@ 00082dfa 2020
.org 0x82dfc
	orrs r0, r1	@ 00082dfc 0843
.org 0x82dfe
	b.n 0x82e08	@ 00082dfe 03e0
.org 0x82e00
	.byte 0x00,0xd5,0xff,0xff	@ 00082e00 data
.org 0x82e04
	movs r0, #223	@ 00082e04 df20
.org 0x82e06
	ands r0, r1	@ 00082e06 0840
.org 0x82e08
	strb r0, [r5, #10]	@ 00082e08 a872
.org 0x82e0a
	adds r0, r2, #0	@ 00082e0a 101c
.org 0x82e0c
	adds r1, r5, #0	@ 00082e0c 291c
.org 0x82e0e
	adds r1, #77	@ 00082e0e 4d31
.org 0x82e10
	strb r0, [r1, #0]	@ 00082e10 0870
.org 0x82e12
	adds r3, r5, #0	@ 00082e12 2b1c
.org 0x82e14
	adds r3, #74	@ 00082e14 4a33
.org 0x82e16
	lsls r0, r0, #5	@ 00082e16 4001
.org 0x82e18
	ldrb r2, [r3, #0]	@ 00082e18 1a78
.org 0x82e1a
	movs r1, #33	@ 00082e1a 2121
.org 0x82e1c
	negs r1, r1	@ 00082e1c 4942
.org 0x82e1e
	ands r1, r2	@ 00082e1e 1140
.org 0x82e20
	orrs r1, r0	@ 00082e20 0143
.org 0x82e22
	strb r1, [r3, #0]	@ 00082e22 1970
.org 0x82e24
	adds r6, r3, #0	@ 00082e24 1e1c
.org 0x82e26
	ldr r1, [r5, #88]	@ 00082e26 a96d
.org 0x82e28
	adds r1, r1, r4	@ 00082e28 0919
.org 0x82e2a
	str r1, [r5, #88]	@ 00082e2a a965
.org 0x82e2c
	ldr r0, [r5, #84]	@ 00082e2c 686d
.org 0x82e2e
	bl 0x7c7c	@ 00082e2e 84f725ff
.org 0x82e32
	lsls r0, r0, #16	@ 00082e32 0004
.org 0x82e34
	cmp r0, #0	@ 00082e34 0028
.org 0x82e36
	beq.n 0x82e6c	@ 00082e36 19d0
.org 0x82e38
	ldr r0, [r5, #84]	@ 00082e38 686d
.org 0x82e3a
	ldr r1, [r5, #88]	@ 00082e3a a96d
.org 0x82e3c
	bl 0x7db4	@ 00082e3c 84f7baff
.org 0x82e40
	adds r4, r0, #0	@ 00082e40 041c
.org 0x82e42
	ldr r0, [r5, #84]	@ 00082e42 686d
.org 0x82e44
	ldr r1, [r5, #88]	@ 00082e44 a96d
.org 0x82e46
	bl 0x7f8c	@ 00082e46 85f7a1f8
.org 0x82e4a
	adds r1, r0, #0	@ 00082e4a 011c
.org 0x82e4c
	cmp r4, #0	@ 00082e4c 002c
.org 0x82e4e
	bgt.n 0x82e66	@ 00082e4e 0adc
.org 0x82e50
	cmp r1, #0	@ 00082e50 0029
.org 0x82e52
	bge.n 0x82e5a	@ 00082e52 02da
.org 0x82e54
	ldr r0, [r5, #88]	@ 00082e54 a86d
.org 0x82e56
	adds r0, r0, r4	@ 00082e56 0019
.org 0x82e58
	b.n 0x82e6a	@ 00082e58 07e0
.org 0x82e5a
	negs r0, r4	@ 00082e5a 6042
.org 0x82e5c
	cmp r0, r1	@ 00082e5c 8842
.org 0x82e5e
	bge.n 0x82e66	@ 00082e5e 02da
.org 0x82e60
	ldr r0, [r5, #88]	@ 00082e60 a86d
.org 0x82e62
	adds r0, r0, r4	@ 00082e62 0019
.org 0x82e64
	b.n 0x82e6a	@ 00082e64 01e0
.org 0x82e66
	ldr r0, [r5, #88]	@ 00082e66 a86d
.org 0x82e68
	adds r0, r0, r1	@ 00082e68 4018
.org 0x82e6a
	str r0, [r5, #88]	@ 00082e6a a865
.org 0x82e6c
	ldr r1, [pc, #48]	@ 00082e6c 0c49
.org 0x82e6e
	adds r0, r5, #0	@ 00082e6e 281c
.org 0x82e70
	bl 0x1cf00	@ 00082e70 9af746f8
.org 0x82e74
	ldr r0, [r5, #84]	@ 00082e74 686d
.org 0x82e76
	str r0, [sp, #0]	@ 00082e76 0090
.org 0x82e78
	ldr r0, [r5, #88]	@ 00082e78 a86d
.org 0x82e7a
	ldr r1, [pc, #40]	@ 00082e7a 0a49
.org 0x82e7c
	adds r0, r0, r1	@ 00082e7c 4018
.org 0x82e7e
	str r0, [sp, #4]	@ 00082e7e 0190
.org 0x82e80
	movs r4, #0	@ 00082e80 0024
.org 0x82e82
	adds r0, r5, #0	@ 00082e82 281c
.org 0x82e84
	adds r0, #180	@ 00082e84 b430
.org 0x82e86
	ldr r0, [r0, #0]	@ 00082e86 0068
.org 0x82e88
	cmp r0, #0	@ 00082e88 0028
.org 0x82e8a
	ble.n 0x82e8e	@ 00082e8a 00dd
.org 0x82e8c
	movs r4, #1	@ 00082e8c 0124
.org 0x82e8e
	movs r0, #1	@ 00082e8e 0120
.org 0x82e90
	adds r2, r4, #0	@ 00082e90 221c
.org 0x82e92
	eors r2, r0	@ 00082e92 4240
.org 0x82e94
	cmp r2, #0	@ 00082e94 002a
.org 0x82e96
	beq.n 0x82ea8	@ 00082e96 07d0
.org 0x82e98
	ldrb r1, [r5, #10]	@ 00082e98 a97a
.org 0x82e9a
	movs r0, #16	@ 00082e9a 1020
.org 0x82e9c
	orrs r0, r1	@ 00082e9c 0843
.org 0x82e9e
	b.n 0x82eae	@ 00082e9e 06e0
.org 0x82ea0
	.byte 0x07,0x16,0x00,0x00	@ 00082ea0 data
.org 0x82ea4
	.byte 0x00,0xf0,0xff,0xff	@ 00082ea4 data
.org 0x82ea8
	ldrb r1, [r5, #10]	@ 00082ea8 a97a
.org 0x82eaa
	movs r0, #239	@ 00082eaa ef20
.org 0x82eac
	ands r0, r1	@ 00082eac 0840
.org 0x82eae
	strb r0, [r5, #10]	@ 00082eae a872
.org 0x82eb0
	adds r1, r2, #0	@ 00082eb0 111c
.org 0x82eb2
	adds r0, r5, #0	@ 00082eb2 281c
.org 0x82eb4
	adds r0, #76	@ 00082eb4 4c30
.org 0x82eb6
	movs r7, #0	@ 00082eb6 0027
.org 0x82eb8
	strb r1, [r0, #0]	@ 00082eb8 0170
.org 0x82eba
	lsls r1, r1, #4	@ 00082eba 0901
.org 0x82ebc
	ldrb r2, [r6, #0]	@ 00082ebc 3278
.org 0x82ebe
	movs r0, #17	@ 00082ebe 1120
.org 0x82ec0
	negs r0, r0	@ 00082ec0 4042
.org 0x82ec2
	ands r0, r2	@ 00082ec2 1040
.org 0x82ec4
	orrs r0, r1	@ 00082ec4 0843
.org 0x82ec6
	strb r0, [r6, #0]	@ 00082ec6 3070
.org 0x82ec8
	movs r2, #128	@ 00082ec8 8022
.org 0x82eca
	lsls r2, r2, #2	@ 00082eca 9200
.org 0x82ecc
	movs r0, #0	@ 00082ecc 0020
.org 0x82ece
	mov r1, sp	@ 00082ece 6946
.org 0x82ed0
	adds r3, r4, #0	@ 00082ed0 231c
.org 0x82ed2
	bl 0xd0dc4	@ 00082ed2 4df077ff
.org 0x82ed6
	movs r0, #128	@ 00082ed6 8020
.org 0x82ed8
	lsls r0, r0, #1	@ 00082ed8 4000
.org 0x82eda
	lsls r4, r4, #9	@ 00082eda 6402
.org 0x82edc
	subs r0, r0, r4	@ 00082edc 001b
.org 0x82ede
	str r0, [r5, #92]	@ 00082ede e865
.org 0x82ee0
	ldr r0, [r5, #96]	@ 00082ee0 286e
.org 0x82ee2
	asrs r0, r0, #1	@ 00082ee2 4010
.org 0x82ee4
	str r0, [r5, #96]	@ 00082ee4 2866
.org 0x82ee6
	adds r0, r5, #0	@ 00082ee6 281c
.org 0x82ee8
	bl 0xd61d4	@ 00082ee8 53f074f9
.org 0x82eec
	ldr r0, [r5, #92]	@ 00082eec e86d
.org 0x82eee
	movs r1, #180	@ 00082eee b421
.org 0x82ef0
	muls r0, r1	@ 00082ef0 4843
.org 0x82ef2
	cmp r0, #0	@ 00082ef2 0028
.org 0x82ef4
	bge.n 0x82ef8	@ 00082ef4 00da
.org 0x82ef6
	adds r0, #255	@ 00082ef6 ff30
.org 0x82ef8
	asrs r0, r0, #8	@ 00082ef8 0012
.org 0x82efa
	str r0, [r5, #92]	@ 00082efa e865
.org 0x82efc
	ldr r0, [r5, #96]	@ 00082efc 286e
.org 0x82efe
	muls r0, r1	@ 00082efe 4843
.org 0x82f00
	cmp r0, #0	@ 00082f00 0028
.org 0x82f02
	bge.n 0x82f06	@ 00082f02 00da
.org 0x82f04
	adds r0, #255	@ 00082f04 ff30
.org 0x82f06
	asrs r0, r0, #8	@ 00082f06 0012
.org 0x82f08
	str r0, [r5, #96]	@ 00082f08 2866
.org 0x82f0a
	adds r0, r5, #0	@ 00082f0a 281c
.org 0x82f0c
	adds r0, #140	@ 00082f0c 8c30
.org 0x82f0e
	str r7, [r0, #0]	@ 00082f0e 0760
.org 0x82f10
	adds r0, #4	@ 00082f10 0430
.org 0x82f12
	str r7, [r0, #0]	@ 00082f12 0760
.org 0x82f14
	adds r0, #4	@ 00082f14 0430
.org 0x82f16
	strb r7, [r0, #0]	@ 00082f16 0770
.org 0x82f18
	ldrb r1, [r5, #10]	@ 00082f18 a97a
.org 0x82f1a
	movs r0, #251	@ 00082f1a fb20
.org 0x82f1c
	ands r0, r1	@ 00082f1c 0840
.org 0x82f1e
	strb r0, [r5, #10]	@ 00082f1e a872
.org 0x82f20
	movs r0, #20	@ 00082f20 1420
.org 0x82f22
	strb r0, [r5, #18]	@ 00082f22 a874
.org 0x82f24
	ldrb r0, [r5, #14]	@ 00082f24 a87b
.org 0x82f26
	adds r0, #1	@ 00082f26 0130
.org 0x82f28
	strb r0, [r5, #14]	@ 00082f28 a873
.org 0x82f2a
	ldr r1, [r5, #88]	@ 00082f2a a96d
.org 0x82f2c
	ldr r0, [r5, #96]	@ 00082f2c 286e
.org 0x82f2e
	adds r1, r1, r0	@ 00082f2e 0918
.org 0x82f30
	str r1, [r5, #88]	@ 00082f30 a965
.org 0x82f32
	ldr r0, [r5, #84]	@ 00082f32 686d
.org 0x82f34
	bl 0x7db4	@ 00082f34 84f73eff
.org 0x82f38
	adds r4, r0, #0	@ 00082f38 041c
.org 0x82f3a
	cmp r4, #0	@ 00082f3a 002c
.org 0x82f3c
	bge.n 0x82f44	@ 00082f3c 02da
.org 0x82f3e
	ldr r0, [r5, #88]	@ 00082f3e a86d
.org 0x82f40
	adds r0, r0, r4	@ 00082f40 0019
.org 0x82f42
	str r0, [r5, #88]	@ 00082f42 a865
.org 0x82f44
	ldr r0, [r5, #84]	@ 00082f44 686d
.org 0x82f46
	ldr r1, [r5, #92]	@ 00082f46 e96d
.org 0x82f48
	adds r0, r0, r1	@ 00082f48 4018
.org 0x82f4a
	str r0, [r5, #84]	@ 00082f4a 6865
.org 0x82f4c
	cmp r1, #0	@ 00082f4c 0029
.org 0x82f4e
	ble.n 0x82f5e	@ 00082f4e 06dd
.org 0x82f50
	ldr r1, [r5, #88]	@ 00082f50 a96d
.org 0x82f52
	bl 0x816c	@ 00082f52 85f70bf9
.org 0x82f56
	adds r4, r0, #0	@ 00082f56 041c
.org 0x82f58
	cmp r4, #0	@ 00082f58 002c
.org 0x82f5a
	bge.n 0x82f70	@ 00082f5a 09da
.org 0x82f5c
	b.n 0x82f6a	@ 00082f5c 05e0
.org 0x82f5e
	ldr r1, [r5, #88]	@ 00082f5e a96d
.org 0x82f60
	bl 0x834c	@ 00082f60 85f7f4f9
.org 0x82f64
	adds r4, r0, #0	@ 00082f64 041c
.org 0x82f66
	cmp r4, #0	@ 00082f66 002c
.org 0x82f68
	ble.n 0x82f70	@ 00082f68 02dd
.org 0x82f6a
	ldr r0, [r5, #84]	@ 00082f6a 686d
.org 0x82f6c
	adds r0, r0, r4	@ 00082f6c 0019
.org 0x82f6e
	str r0, [r5, #84]	@ 00082f6e 6865
.org 0x82f70
	ldr r1, [r5, #92]	@ 00082f70 e96d
.org 0x82f72
	lsls r0, r1, #3	@ 00082f72 c800
.org 0x82f74
	subs r0, r0, r1	@ 00082f74 401a
.org 0x82f76
	lsls r0, r0, #5	@ 00082f76 4001
.org 0x82f78
	adds r0, r0, r1	@ 00082f78 4018
.org 0x82f7a
	cmp r0, #0	@ 00082f7a 0028
.org 0x82f7c
	bge.n 0x82f80	@ 00082f7c 00da
.org 0x82f7e
	adds r0, #255	@ 00082f7e ff30
.org 0x82f80
	asrs r0, r0, #8	@ 00082f80 0012
.org 0x82f82
	str r0, [r5, #92]	@ 00082f82 e865
.org 0x82f84
	ldr r2, [r5, #96]	@ 00082f84 2a6e
.org 0x82f86
	cmp r2, #0	@ 00082f86 002a
.org 0x82f88
	bne.n 0x82f94	@ 00082f88 04d1
.org 0x82f8a
	ldrb r1, [r5, #10]	@ 00082f8a a97a
.org 0x82f8c
	movs r0, #32	@ 00082f8c 2020
.org 0x82f8e
	ands r0, r1	@ 00082f8e 0840
.org 0x82f90
	cmp r0, #0	@ 00082f90 0028
.org 0x82f92
	beq.n 0x82fa4	@ 00082f92 07d0
.org 0x82f94
	adds r0, r2, #0	@ 00082f94 101c
.org 0x82f96
	adds r0, #64	@ 00082f96 4030
.org 0x82f98
	str r0, [r5, #96]	@ 00082f98 2866
.org 0x82f9a
	movs r1, #224	@ 00082f9a e021
.org 0x82f9c
	lsls r1, r1, #3	@ 00082f9c c900
.org 0x82f9e
	cmp r0, r1	@ 00082f9e 8842
.org 0x82fa0
	ble.n 0x82fa4	@ 00082fa0 00dd
.org 0x82fa2
	str r1, [r5, #96]	@ 00082fa2 2966
.org 0x82fa4
	ldrb r0, [r5, #18]	@ 00082fa4 a87c
.org 0x82fa6
	subs r0, #1	@ 00082fa6 0138
.org 0x82fa8
	strb r0, [r5, #18]	@ 00082fa8 a874
.org 0x82faa
	lsls r0, r0, #24	@ 00082faa 0006
.org 0x82fac
	cmp r0, #0	@ 00082fac 0028
.org 0x82fae
	bne.n 0x82ffc	@ 00082fae 25d1
.org 0x82fb0
	ldrb r1, [r5, #10]	@ 00082fb0 a97a
.org 0x82fb2
	movs r0, #254	@ 00082fb2 fe20
.org 0x82fb4
	ands r0, r1	@ 00082fb4 0840
.org 0x82fb6
	strb r0, [r5, #10]	@ 00082fb6 a872
.org 0x82fb8
	ldr r0, [r5, #84]	@ 00082fb8 686d
.org 0x82fba
	str r0, [sp, #0]	@ 00082fba 0090
.org 0x82fbc
	ldr r0, [r5, #88]	@ 00082fbc a86d
.org 0x82fbe
	ldr r1, [pc, #68]	@ 00082fbe 1149
.org 0x82fc0
	adds r0, r0, r1	@ 00082fc0 4018
.org 0x82fc2
	str r0, [sp, #4]	@ 00082fc2 0190
.org 0x82fc4
	movs r0, #1	@ 00082fc4 0120
.org 0x82fc6
	mov r1, sp	@ 00082fc6 6946
.org 0x82fc8
	bl 0xd0c88	@ 00082fc8 4df05efe
.org 0x82fcc
	movs r0, #42	@ 00082fcc 2a20
.org 0x82fce
	bl 0x2b10	@ 00082fce 7ff79ffd
.org 0x82fd2
	adds r4, r5, #0	@ 00082fd2 2c1c
.org 0x82fd4
	adds r4, #84	@ 00082fd4 5434
.org 0x82fd6
	movs r0, #4	@ 00082fd6 0420
.org 0x82fd8
	movs r1, #8	@ 00082fd8 0821
.org 0x82fda
	adds r2, r4, #0	@ 00082fda 221c
.org 0x82fdc
	bl 0x2ab88	@ 00082fdc a7f7d4fd
.org 0x82fe0
	ldr r2, [pc, #36]	@ 00082fe0 094a
.org 0x82fe2
	ldrh r1, [r2, #12]	@ 00082fe2 9189
.org 0x82fe4
	ldr r0, [pc, #36]	@ 00082fe4 0948
.org 0x82fe6
	cmp r1, r0	@ 00082fe6 8142
.org 0x82fe8
	bhi.n 0x82fee	@ 00082fe8 01d8
.org 0x82fea
	adds r0, r1, #1	@ 00082fea 481c
.org 0x82fec
	strh r0, [r2, #12]	@ 00082fec 9081
.org 0x82fee
	adds r0, r5, #0	@ 00082fee 281c
.org 0x82ff0
	adds r1, r4, #0	@ 00082ff0 211c
.org 0x82ff2
	bl 0x2abe0	@ 00082ff2 a7f7f5fd
.org 0x82ff6
	ldrb r0, [r5, #14]	@ 00082ff6 a87b
.org 0x82ff8
	adds r0, #1	@ 00082ff8 0130
.org 0x82ffa
	strb r0, [r5, #14]	@ 00082ffa a873
.org 0x82ffc
	adds r0, r5, #0	@ 00082ffc 281c
.org 0x82ffe
	bl 0x1cff0	@ 00082ffe 99f7f7ff
.org 0x83002
	b.n 0x83036	@ 00083002 18e0
.org 0x83004
	.byte 0x00,0xf0,0xff,0xff	@ 00083004 data
.org 0x83008
	.byte 0xe0,0xe8,0x02,0x02	@ 00083008 data
.org 0x8300c
	.byte 0x0e,0x27,0x00,0x00	@ 0008300c data
.org 0x83010
	ldrb r1, [r5, #10]	@ 00083010 a97a
.org 0x83012
	movs r0, #254	@ 00083012 fe20
.org 0x83014
	ands r0, r1	@ 00083014 0840

@ FUN_08087d7c  entry 0x08087d7c  size 418
.thumb
.org 0x87d7c
FUN_08087d7c:
	push {r4, r5, r6, r7, lr}	@ 00087d7c f0b5
.org 0x87d7e
	mov r7, r9	@ 00087d7e 4f46
.org 0x87d80
	mov r6, r8	@ 00087d80 4646
.org 0x87d82
	push {r6, r7}	@ 00087d82 c0b4
.org 0x87d84
	sub sp, #24	@ 00087d84 86b0
.org 0x87d86
	adds r5, r0, #0	@ 00087d86 051c
.org 0x87d88
	ldrb r0, [r5, #15]	@ 00087d88 e87b
.org 0x87d8a
	cmp r0, #0	@ 00087d8a 0028
.org 0x87d8c
	beq.n 0x87d90	@ 00087d8c 00d0
.org 0x87d8e
	b.n 0x87ed0	@ 00087d8e 9fe0
.org 0x87d90
	movs r1, #0	@ 00087d90 0021
.org 0x87d92
	ldr r0, [pc, #32]	@ 00087d92 0848
.org 0x87d94
	ldr r0, [r0, #0]	@ 00087d94 0068
.org 0x87d96
	ldr r2, [r5, #84]	@ 00087d96 6a6d
.org 0x87d98
	ldr r0, [r0, #84]	@ 00087d98 406d
.org 0x87d9a
	cmp r2, r0	@ 00087d9a 8242
.org 0x87d9c
	bge.n 0x87da0	@ 00087d9c 00da
.org 0x87d9e
	movs r1, #1	@ 00087d9e 0121
.org 0x87da0
	adds r7, r1, #0	@ 00087da0 0f1c
.org 0x87da2
	ldrb r1, [r5, #10]	@ 00087da2 a97a
.org 0x87da4
	movs r0, #16	@ 00087da4 1020
.org 0x87da6
	ands r0, r1	@ 00087da6 0840
.org 0x87da8
	cmp r0, #0	@ 00087da8 0028
.org 0x87daa
	beq.n 0x87db8	@ 00087daa 05d0
.org 0x87dac
	movs r1, #128	@ 00087dac 8021
.org 0x87dae
	lsls r1, r1, #3	@ 00087dae c900
.org 0x87db0
	b.n 0x87dba	@ 00087db0 03e0
.org 0x87db2
	.byte 0x00	@ 00087db2 data
.org 0x87db3
	.byte 0x00	@ 00087db3 data
.org 0x87db4
	.byte 0xf0,0xdb,0x02,0x02	@ 00087db4 data
.org 0x87db8
	ldr r1, [pc, #96]	@ 00087db8 1849
.org 0x87dba
	adds r0, r2, r1	@ 00087dba 5018
.org 0x87dbc
	str r0, [sp, #0]	@ 00087dbc 0090
.org 0x87dbe
	ldr r0, [r5, #88]	@ 00087dbe a86d
.org 0x87dc0
	str r0, [sp, #4]	@ 00087dc0 0190
.org 0x87dc2
	movs r0, #128	@ 00087dc2 8020
.org 0x87dc4
	lsls r0, r0, #2	@ 00087dc4 8000
.org 0x87dc6
	str r0, [sp, #8]	@ 00087dc6 0290
.org 0x87dc8
	add r1, sp, #8	@ 00087dc8 02a9
.org 0x87dca
	movs r0, #0	@ 00087dca 0020
.org 0x87dcc
	str r0, [r1, #4]	@ 00087dcc 4860
.org 0x87dce
	mov r0, sp	@ 00087dce 6846
.org 0x87dd0
	movs r2, #6	@ 00087dd0 0622
.org 0x87dd2
	movs r3, #8	@ 00087dd2 0823
.org 0x87dd4
	bl 0x88ff0	@ 00087dd4 01f00cf9
.org 0x87dd8
	adds r4, r5, #0	@ 00087dd8 2c1c
.org 0x87dda
	adds r4, #116	@ 00087dda 7434
.org 0x87ddc
	ldr r1, [pc, #64]	@ 00087ddc 1049
.org 0x87dde
	adds r0, r4, #0	@ 00087dde 201c
.org 0x87de0
	bl 0x5784	@ 00087de0 7df7d0fc
.org 0x87de4
	adds r0, r5, #0	@ 00087de4 281c
.org 0x87de6
	adds r0, #181	@ 00087de6 b530
.org 0x87de8
	ldrb r1, [r0, #0]	@ 00087de8 0178
.org 0x87dea
	mov r9, r4	@ 00087dea a146
.org 0x87dec
	mov r8, r0	@ 00087dec 8046
.org 0x87dee
	cmp r1, #0	@ 00087dee 0029
.org 0x87df0
	beq.n 0x87e48	@ 00087df0 2ad0
.org 0x87df2
	adds r0, #3	@ 00087df2 0330
.org 0x87df4
	ldrb r0, [r0, #0]	@ 00087df4 0078
.org 0x87df6
	cmp r0, #0	@ 00087df6 0028
.org 0x87df8
	bne.n 0x87e3a	@ 00087df8 1fd1
.org 0x87dfa
	ldr r0, [r5, #84]	@ 00087dfa 686d
.org 0x87dfc
	str r0, [sp, #16]	@ 00087dfc 0490
.org 0x87dfe
	ldr r0, [r5, #88]	@ 00087dfe a86d
.org 0x87e00
	add r2, sp, #16	@ 00087e00 04aa
.org 0x87e02
	str r0, [r2, #4]	@ 00087e02 5060
.org 0x87e04
	ldrb r1, [r5, #10]	@ 00087e04 a97a
.org 0x87e06
	lsrs r3, r1, #4	@ 00087e06 0b09
.org 0x87e08
	movs r0, #1	@ 00087e08 0120
.org 0x87e0a
	ands r3, r0	@ 00087e0a 0340
.org 0x87e0c
	movs r0, #32	@ 00087e0c 2020
.org 0x87e0e
	ands r0, r1	@ 00087e0e 0840
.org 0x87e10
	adds r6, r2, #0	@ 00087e10 161c
.org 0x87e12
	cmp r0, #0	@ 00087e12 0028
.org 0x87e14
	beq.n 0x87e24	@ 00087e14 06d0
.org 0x87e16
	adds r0, r3, #2	@ 00087e16 981c
.org 0x87e18
	adds r4, r0, #0	@ 00087e18 041c
.org 0x87e1a
	b.n 0x87e26	@ 00087e1a 04e0
.org 0x87e1c
	.byte 0x00,0xfc,0xff,0xff	@ 00087e1c data
.org 0x87e20
	.byte 0x34,0xf0,0x85,0x08	@ 00087e20 data
.org 0x87e24
	adds r4, r3, #0	@ 00087e24 1c1c
.org 0x87e26
	adds r0, r6, #0	@ 00087e26 301c
.org 0x87e28
	movs r1, #0	@ 00087e28 0021
.org 0x87e2a
	adds r2, r4, #0	@ 00087e2a 221c
.org 0x87e2c
	bl 0xd83f8	@ 00087e2c 50f0e4fa
.org 0x87e30
	adds r0, r6, #0	@ 00087e30 301c
.org 0x87e32
	movs r1, #1	@ 00087e32 0121
.org 0x87e34
	adds r2, r4, #0	@ 00087e34 221c
.org 0x87e36
	bl 0xd83f8	@ 00087e36 50f0dffa
.org 0x87e3a
	movs r0, #0	@ 00087e3a 0020
.org 0x87e3c
	mov r1, r8	@ 00087e3c 4146
.org 0x87e3e
	strb r0, [r1, #0]	@ 00087e3e 0870
.org 0x87e40
	ldr r1, [pc, #28]	@ 00087e40 0749
.org 0x87e42
	mov r0, r9	@ 00087e42 4846
.org 0x87e44
	bl 0x5784	@ 00087e44 7df79efc
.org 0x87e48
	ldr r1, [pc, #24]	@ 00087e48 0649
.org 0x87e4a
	adds r0, r5, #0	@ 00087e4a 281c
.org 0x87e4c
	bl 0x1cf00	@ 00087e4c 95f758f8
.org 0x87e50
	adds r2, r7, #0	@ 00087e50 3a1c
.org 0x87e52
	cmp r7, #0	@ 00087e52 002f
.org 0x87e54
	beq.n 0x87e68	@ 00087e54 08d0
.org 0x87e56
	ldrb r1, [r5, #10]	@ 00087e56 a97a
.org 0x87e58
	movs r0, #16	@ 00087e58 1020
.org 0x87e5a
	orrs r0, r1	@ 00087e5a 0843
.org 0x87e5c
	b.n 0x87e6e	@ 00087e5c 07e0
.org 0x87e5e
	.byte 0x00	@ 00087e5e data
.org 0x87e5f
	.byte 0x00	@ 00087e5f data
.org 0x87e60
	.byte 0x64,0xf0,0x85,0x08	@ 00087e60 data
.org 0x87e64
	.byte 0x0d,0x1d,0x00,0x00	@ 00087e64 data
.org 0x87e68
	ldrb r1, [r5, #10]	@ 00087e68 a97a
.org 0x87e6a
	movs r0, #239	@ 00087e6a ef20
.org 0x87e6c
	ands r0, r1	@ 00087e6c 0840
.org 0x87e6e
	strb r0, [r5, #10]	@ 00087e6e a872
.org 0x87e70
	movs r3, #1	@ 00087e70 0123
.org 0x87e72
	adds r1, r3, #0	@ 00087e72 191c
.org 0x87e74
	ands r1, r2	@ 00087e74 1140
.org 0x87e76
	adds r0, r5, #0	@ 00087e76 281c
.org 0x87e78
	adds r0, #76	@ 00087e78 4c30
.org 0x87e7a
	strb r1, [r0, #0]	@ 00087e7a 0170
.org 0x87e7c
	movs r0, #74	@ 00087e7c 4a20
.org 0x87e7e
	adds r0, r0, r5	@ 00087e7e 4019
.org 0x87e80
	mov ip, r0	@ 00087e80 8446
.org 0x87e82
	lsls r1, r1, #4	@ 00087e82 0901
.org 0x87e84
	ldrb r2, [r0, #0]	@ 00087e84 0278
.org 0x87e86
	movs r0, #17	@ 00087e86 1120
.org 0x87e88
	negs r0, r0	@ 00087e88 4042
.org 0x87e8a
	ands r0, r2	@ 00087e8a 1040
.org 0x87e8c
	orrs r0, r1	@ 00087e8c 0843
.org 0x87e8e
	mov r1, ip	@ 00087e8e 6146
.org 0x87e90
	strb r0, [r1, #0]	@ 00087e90 0870
.org 0x87e92
	lsls r0, r7, #1	@ 00087e92 7800
.org 0x87e94
	subs r3, r3, r0	@ 00087e94 1b1a
.org 0x87e96
	lsls r0, r3, #1	@ 00087e96 5800
.org 0x87e98
	adds r0, r0, r3	@ 00087e98 c018
.org 0x87e9a
	lsls r0, r0, #7	@ 00087e9a c001
.org 0x87e9c
	str r0, [r5, #92]	@ 00087e9c e865
.org 0x87e9e
	ldr r0, [pc, #40]	@ 00087e9e 0a48
.org 0x87ea0
	str r0, [r5, #96]	@ 00087ea0 2866
.org 0x87ea2
	movs r0, #8	@ 00087ea2 0820
.org 0x87ea4
	strb r0, [r5, #18]	@ 00087ea4 a874
.org 0x87ea6
	ldrb r0, [r5, #15]	@ 00087ea6 e87b
.org 0x87ea8
	adds r0, #1	@ 00087ea8 0130
.org 0x87eaa
	strb r0, [r5, #15]	@ 00087eaa e873
.org 0x87eac
	adds r0, r5, #0	@ 00087eac 281c
.org 0x87eae
	bl 0x7f90c	@ 00087eae f7f72dfd
.org 0x87eb2
	cmp r0, #0	@ 00087eb2 0028
.org 0x87eb4
	beq.n 0x87ed0	@ 00087eb4 0cd0
.org 0x87eb6
	ldr r1, [pc, #20]	@ 00087eb6 0549
.org 0x87eb8
	mov r0, r9	@ 00087eb8 4846
.org 0x87eba
	bl 0x5784	@ 00087eba 7df763fc
.org 0x87ebe
	adds r0, r5, #0	@ 00087ebe 281c
.org 0x87ec0
	bl 0x1cff0	@ 00087ec0 95f796f8
.org 0x87ec4
	b.n 0x87f32	@ 00087ec4 35e0
.org 0x87ec6
	.byte 0x00	@ 00087ec6 data
.org 0x87ec7
	.byte 0x00	@ 00087ec7 data
.org 0x87ec8
	.byte 0x80,0xfd,0xff,0xff	@ 00087ec8 data
.org 0x87ecc
	.byte 0x34,0xf0,0x85,0x08	@ 00087ecc data
.org 0x87ed0
	adds r0, r5, #0	@ 00087ed0 281c
.org 0x87ed2
	bl 0x1cff0	@ 00087ed2 95f78df8
.org 0x87ed6
	ldrb r0, [r5, #18]	@ 00087ed6 a87c
.org 0x87ed8
	cmp r0, #0	@ 00087ed8 0028
.org 0x87eda
	beq.n 0x87ef0	@ 00087eda 09d0
.org 0x87edc
	subs r0, #1	@ 00087edc 0138
.org 0x87ede
	strb r0, [r5, #18]	@ 00087ede a874
.org 0x87ee0
	lsls r0, r0, #24	@ 00087ee0 0006
.org 0x87ee2
	cmp r0, #0	@ 00087ee2 0028
.org 0x87ee4
	bne.n 0x87ef0	@ 00087ee4 04d1
.org 0x87ee6
	adds r0, r5, #0	@ 00087ee6 281c
.org 0x87ee8
	adds r0, #116	@ 00087ee8 7430
.org 0x87eea
	ldr r1, [pc, #84]	@ 00087eea 1549
.org 0x87eec
	bl 0x5784	@ 00087eec 7df74afc
.org 0x87ef0
	adds r0, r5, #0	@ 00087ef0 281c
.org 0x87ef2
	bl 0x88c9c	@ 00087ef2 00f0d3fe
.org 0x87ef6
	cmp r0, #0	@ 00087ef6 0028
.org 0x87ef8
	beq.n 0x87f32	@ 00087ef8 1bd0
.org 0x87efa
	ldrb r2, [r5, #10]	@ 00087efa aa7a
.org 0x87efc
	movs r0, #32	@ 00087efc 2020
.org 0x87efe
	ands r0, r2	@ 00087efe 1040
.org 0x87f00
	cmp r0, #0	@ 00087f00 0028
.org 0x87f02
	beq.n 0x87f2a	@ 00087f02 12d0
.org 0x87f04
	movs r1, #0	@ 00087f04 0021
.org 0x87f06
	movs r0, #223	@ 00087f06 df20
.org 0x87f08
	ands r0, r2	@ 00087f08 1040
.org 0x87f0a
	strb r0, [r5, #10]	@ 00087f0a a872
.org 0x87f0c
	adds r0, r5, #0	@ 00087f0c 281c
.org 0x87f0e
	adds r0, #77	@ 00087f0e 4d30
.org 0x87f10
	strb r1, [r0, #0]	@ 00087f10 0170
.org 0x87f12
	adds r2, r5, #0	@ 00087f12 2a1c
.org 0x87f14
	adds r2, #74	@ 00087f14 4a32
.org 0x87f16
	ldrb r1, [r2, #0]	@ 00087f16 1178
.org 0x87f18
	movs r0, #33	@ 00087f18 2120
.org 0x87f1a
	negs r0, r0	@ 00087f1a 4042
.org 0x87f1c
	ands r0, r1	@ 00087f1c 0840

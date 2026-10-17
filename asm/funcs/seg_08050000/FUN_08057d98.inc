@ FUN_08057d98  entry 0x08057d98  size 268
.thumb
.org 0x57d98
FUN_08057d98:
	push {r4, r5, r6, r7, lr}	@ 00057d98 f0b5
.org 0x57d9a
	mov r7, r9	@ 00057d9a 4f46
.org 0x57d9c
	mov r6, r8	@ 00057d9c 4646
.org 0x57d9e
	push {r6, r7}	@ 00057d9e c0b4
.org 0x57da0
	sub sp, #40	@ 00057da0 8ab0
.org 0x57da2
	adds r7, r0, #0	@ 00057da2 071c
.org 0x57da4
	ldrb r0, [r7, #15]	@ 00057da4 f87b
.org 0x57da6
	cmp r0, #0	@ 00057da6 0028
.org 0x57da8
	bne.n 0x57dbc	@ 00057da8 08d1
.org 0x57daa
	ldr r1, [pc, #224]	@ 00057daa 3849
.org 0x57dac
	adds r0, r7, #0	@ 00057dac 381c
.org 0x57dae
	bl 0x1cf00	@ 00057dae c5f7a7f8
.org 0x57db2
	movs r0, #4	@ 00057db2 0420
.org 0x57db4
	strb r0, [r7, #18]	@ 00057db4 b874
.org 0x57db6
	ldrb r0, [r7, #15]	@ 00057db6 f87b
.org 0x57db8
	adds r0, #1	@ 00057db8 0130
.org 0x57dba
	strb r0, [r7, #15]	@ 00057dba f873
.org 0x57dbc
	adds r0, r7, #0	@ 00057dbc 381c
.org 0x57dbe
	bl 0x1cff0	@ 00057dbe c5f717f9
.org 0x57dc2
	adds r0, r7, #0	@ 00057dc2 381c
.org 0x57dc4
	adds r0, #116	@ 00057dc4 7430
.org 0x57dc6
	ldr r3, [pc, #200]	@ 00057dc6 324b
.org 0x57dc8
	ldrb r1, [r7, #30]	@ 00057dc8 b97f
.org 0x57dca
	lsls r1, r1, #8	@ 00057dca 0902
.org 0x57dcc
	adds r2, r7, #0	@ 00057dcc 3a1c
.org 0x57dce
	adds r2, #112	@ 00057dce 7032
.org 0x57dd0
	ldrb r2, [r2, #0]	@ 00057dd0 1278
.org 0x57dd2
	orrs r1, r2	@ 00057dd2 1143
.org 0x57dd4
	ldr r2, [pc, #188]	@ 00057dd4 2f4a
.org 0x57dd6
	adds r1, r1, r2	@ 00057dd6 8918
.org 0x57dd8
	lsls r1, r1, #2	@ 00057dd8 8900
.org 0x57dda
	adds r1, r1, r3	@ 00057dda c918
.org 0x57ddc
	adds r2, r7, #0	@ 00057ddc 3a1c
.org 0x57dde
	adds r2, #113	@ 00057dde 7132
.org 0x57de0
	ldrb r2, [r2, #0]	@ 00057de0 1278
.org 0x57de2
	lsls r2, r2, #24	@ 00057de2 1206
.org 0x57de4
	asrs r2, r2, #24	@ 00057de4 1216
.org 0x57de6
	ldr r1, [r1, #0]	@ 00057de6 0968
.org 0x57de8
	lsls r2, r2, #2	@ 00057de8 9200
.org 0x57dea
	adds r2, r2, r1	@ 00057dea 5218
.org 0x57dec
	ldr r1, [r2, #0]	@ 00057dec 1168
.org 0x57dee
	ldrb r2, [r1, #0]	@ 00057dee 0a78
.org 0x57df0
	lsls r1, r2, #1	@ 00057df0 5100
.org 0x57df2
	adds r1, r1, r2	@ 00057df2 8918
.org 0x57df4
	lsls r1, r1, #3	@ 00057df4 c900
.org 0x57df6
	ldr r2, [pc, #160]	@ 00057df6 284a
.org 0x57df8
	adds r1, r1, r2	@ 00057df8 8918
.org 0x57dfa
	bl 0x5784	@ 00057dfa adf7c3fc
.org 0x57dfe
	ldrb r0, [r7, #18]	@ 00057dfe b87c
.org 0x57e00
	subs r0, #1	@ 00057e00 0138
.org 0x57e02
	strb r0, [r7, #18]	@ 00057e02 b874
.org 0x57e04
	lsls r0, r0, #24	@ 00057e04 0006
.org 0x57e06
	cmp r0, #0	@ 00057e06 0028
.org 0x57e08
	bne.n 0x57ec2	@ 00057e08 5bd1
.org 0x57e0a
	ldr r0, [pc, #144]	@ 00057e0a 2448
.org 0x57e0c
	ldr r1, [pc, #144]	@ 00057e0c 2449
.org 0x57e0e
	adds r0, r0, r1	@ 00057e0e 4018
.org 0x57e10
	ldrb r1, [r0, #0]	@ 00057e10 0178
.org 0x57e12
	movs r0, #16	@ 00057e12 1020
.org 0x57e14
	ands r0, r1	@ 00057e14 0840
.org 0x57e16
	cmp r0, #0	@ 00057e16 0028
.org 0x57e18
	beq.n 0x57eb8	@ 00057e18 4ed0
.org 0x57e1a
	ldr r0, [pc, #136]	@ 00057e1a 2248
.org 0x57e1c
	ldrb r1, [r0, #4]	@ 00057e1c 0179
.org 0x57e1e
	movs r0, #4	@ 00057e1e 0420
.org 0x57e20
	ands r0, r1	@ 00057e20 0840
.org 0x57e22
	lsls r0, r0, #24	@ 00057e22 0006
.org 0x57e24
	lsrs r0, r0, #24	@ 00057e24 000e
.org 0x57e26
	mov r9, r0	@ 00057e26 8146
.org 0x57e28
	cmp r0, #0	@ 00057e28 0028
.org 0x57e2a
	bne.n 0x57eb8	@ 00057e2a 45d1
.org 0x57e2c
	ldr r1, [pc, #120]	@ 00057e2c 1e49
.org 0x57e2e
	mov r0, sp	@ 00057e2e 6846
.org 0x57e30
	movs r2, #2	@ 00057e30 0222
.org 0x57e32
	bl 0x129258	@ 00057e32 d1f011fa
.org 0x57e36
	add r2, sp, #4	@ 00057e36 01aa
.org 0x57e38
	mov r8, r2	@ 00057e38 9046
.org 0x57e3a
	ldr r1, [pc, #112]	@ 00057e3a 1c49
.org 0x57e3c
	mov r0, r8	@ 00057e3c 4046
.org 0x57e3e
	movs r2, #2	@ 00057e3e 0222
.org 0x57e40
	bl 0x129258	@ 00057e40 d1f00afa
.org 0x57e44
	add r6, sp, #8	@ 00057e44 02ae
.org 0x57e46
	ldr r1, [pc, #104]	@ 00057e46 1a49
.org 0x57e48
	adds r0, r6, #0	@ 00057e48 301c
.org 0x57e4a
	movs r2, #2	@ 00057e4a 0222
.org 0x57e4c
	bl 0x129258	@ 00057e4c d1f004fa
.org 0x57e50
	add r5, sp, #12	@ 00057e50 03ad
.org 0x57e52
	ldr r1, [pc, #96]	@ 00057e52 1849
.org 0x57e54
	adds r0, r5, #0	@ 00057e54 281c
.org 0x57e56
	movs r2, #2	@ 00057e56 0222
.org 0x57e58
	bl 0x129258	@ 00057e58 d1f0fef9
.org 0x57e5c
	add r4, sp, #16	@ 00057e5c 04ac
.org 0x57e5e
	mov r0, r8	@ 00057e5e 4046
.org 0x57e60
	str r0, [sp, #28]	@ 00057e60 0790
.org 0x57e62
	str r6, [sp, #32]	@ 00057e62 0896
.org 0x57e64
	str r5, [sp, #36]	@ 00057e64 0995
.org 0x57e66
	add r1, sp, #28	@ 00057e66 07a9
.org 0x57e68
	adds r0, r4, #0	@ 00057e68 201c
.org 0x57e6a
	movs r2, #12	@ 00057e6a 0c22
.org 0x57e6c
	bl 0x129258	@ 00057e6c d1f0f4f9
.org 0x57e70
	adds r0, r7, #0	@ 00057e70 381c
.org 0x57e72
	bl 0x5977c	@ 00057e72 01f083fc
.org 0x57e76
	lsls r0, r0, #2	@ 00057e76 8000
.org 0x57e78
	adds r4, r4, r0	@ 00057e78 2418
.org 0x57e7a
	ldr r0, [r4, #0]	@ 00057e7a 2068
.org 0x57e7c
	movs r1, #2	@ 00057e7c 0221
.org 0x57e7e
	bl 0x59b68	@ 00057e7e 01f073fe
.org 0x57e82
	add r0, sp	@ 00057e82 6844
.org 0x57e84
	ldrb r0, [r0, #0]	@ 00057e84 0078
.org 0x57e86
	strb r0, [r7, #13]	@ 00057e86 7873
.org 0x57e88
	mov r1, r9	@ 00057e88 4946
.org 0x57e8a
	b.n 0x57ebe	@ 00057e8a 18e0
.org 0x57e8c
	.byte 0x06,0xa0,0x00,0x00	@ 00057e8c data
.org 0x57e90
	.byte 0x1c,0x87,0x85,0x08	@ 00057e90 data
.org 0x57e94
	.byte 0x00,0x60,0xff,0xff	@ 00057e94 data
.org 0x57e98
	.byte 0xcc,0x84,0x85,0x08	@ 00057e98 data
.org 0x57e9c
	.byte 0xb0,0x0a,0x00,0x02	@ 00057e9c data
.org 0x57ea0
	.byte 0x10,0xc0,0x02,0x00	@ 00057ea0 data

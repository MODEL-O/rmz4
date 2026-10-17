@ FUN_080a6c4c  entry 0x080a6c4c  size 374
.thumb
.org 0xa6c4c
FUN_080a6c4c:
	push {r4, r5, r6, lr}	@ 000a6c4c 70b5
.org 0xa6c4e
	adds r4, r0, #0	@ 000a6c4e 041c
.org 0xa6c50
	ldr r5, [r4, #40]	@ 000a6c50 a56a
.org 0xa6c52
	ldrb r0, [r5, #12]	@ 000a6c52 287b
.org 0xa6c54
	cmp r0, #1	@ 000a6c54 0128
.org 0xa6c56
	bls.n 0xa6cbc	@ 000a6c56 31d9
.org 0xa6c58
	adds r0, r5, #0	@ 000a6c58 281c
.org 0xa6c5a
	adds r0, #184	@ 000a6c5a b830
.org 0xa6c5c
	ldrb r2, [r0, #0]	@ 000a6c5c 0278
.org 0xa6c5e
	cmp r2, #0	@ 000a6c5e 002a
.org 0xa6c60
	beq.n 0xa6c80	@ 000a6c60 0ed0
.org 0xa6c62
	ldr r1, [pc, #24]	@ 000a6c62 0649
.org 0xa6c64
	ldrb r0, [r4, #9]	@ 000a6c64 607a
.org 0xa6c66
	lsls r0, r0, #2	@ 000a6c66 8000
.org 0xa6c68
	adds r0, r0, r1	@ 000a6c68 4018
.org 0xa6c6a
	movs r1, #2	@ 000a6c6a 0221
.org 0xa6c6c
	str r1, [r4, #12]	@ 000a6c6c e160
.org 0xa6c6e
	ldr r0, [r0, #0]	@ 000a6c6e 0068
.org 0xa6c70
	ldr r0, [r0, #8]	@ 000a6c70 8068
.org 0xa6c72
	str r0, [r4, #20]	@ 000a6c72 6061
.org 0xa6c74
	adds r0, r4, #0	@ 000a6c74 201c
.org 0xa6c76
	bl 0xa6df8	@ 000a6c76 00f0bff8
.org 0xa6c7a
	b.n 0xa6df2	@ 000a6c7a bae0
.org 0xa6c7c
	.byte 0x40,0xdb,0x85,0x08	@ 000a6c7c data
.org 0xa6c80
	ldrb r1, [r4, #10]	@ 000a6c80 a17a
.org 0xa6c82
	movs r0, #254	@ 000a6c82 fe20
.org 0xa6c84
	ands r0, r1	@ 000a6c84 0840
.org 0xa6c86
	movs r1, #253	@ 000a6c86 fd21
.org 0xa6c88
	ands r0, r1	@ 000a6c88 0840
.org 0xa6c8a
	strb r0, [r4, #10]	@ 000a6c8a a072
.org 0xa6c8c
	adds r0, r4, #0	@ 000a6c8c 201c
.org 0xa6c8e
	adds r0, #140	@ 000a6c8e 8c30
.org 0xa6c90
	str r2, [r0, #0]	@ 000a6c90 0260
.org 0xa6c92
	adds r0, #4	@ 000a6c92 0430
.org 0xa6c94
	str r2, [r0, #0]	@ 000a6c94 0260
.org 0xa6c96
	adds r0, #4	@ 000a6c96 0430
.org 0xa6c98
	strb r2, [r0, #0]	@ 000a6c98 0270
.org 0xa6c9a
	ldrb r1, [r4, #10]	@ 000a6c9a a17a
.org 0xa6c9c
	movs r0, #251	@ 000a6c9c fb20
.org 0xa6c9e
	ands r0, r1	@ 000a6c9e 0840
.org 0xa6ca0
	strb r0, [r4, #10]	@ 000a6ca0 a072
.org 0xa6ca2
	ldr r1, [pc, #20]	@ 000a6ca2 0549
.org 0xa6ca4
	ldrb r0, [r4, #9]	@ 000a6ca4 607a
.org 0xa6ca6
	lsls r0, r0, #2	@ 000a6ca6 8000
.org 0xa6ca8
	adds r0, r0, r1	@ 000a6ca8 4018
.org 0xa6caa
	movs r1, #3	@ 000a6caa 0321
.org 0xa6cac
	str r1, [r4, #12]	@ 000a6cac e160
.org 0xa6cae
	ldr r0, [r0, #0]	@ 000a6cae 0068
.org 0xa6cb0
	ldr r0, [r0, #12]	@ 000a6cb0 c068
.org 0xa6cb2
	str r0, [r4, #20]	@ 000a6cb2 6061
.org 0xa6cb4
	b.n 0xa6df2	@ 000a6cb4 9de0
.org 0xa6cb6
	.byte 0x00	@ 000a6cb6 data
.org 0xa6cb7
	.byte 0x00	@ 000a6cb7 data
.org 0xa6cb8
	.byte 0x40,0xdb,0x85,0x08	@ 000a6cb8 data
.org 0xa6cbc
	adds r0, r5, #0	@ 000a6cbc 281c
.org 0xa6cbe
	adds r0, #192	@ 000a6cbe c030
.org 0xa6cc0
	ldr r0, [r0, #0]	@ 000a6cc0 0068
.org 0xa6cc2
	cmp r0, #0	@ 000a6cc2 0028
.org 0xa6cc4
	beq.n 0xa6cd8	@ 000a6cc4 08d0
.org 0xa6cc6
	adds r0, r4, #0	@ 000a6cc6 201c
.org 0xa6cc8
	adds r0, #116	@ 000a6cc8 7430
.org 0xa6cca
	ldr r1, [pc, #8]	@ 000a6cca 0249
.org 0xa6ccc
	bl 0x5784	@ 000a6ccc 5ef75afd
.org 0xa6cd0
	b.n 0xa6ce2	@ 000a6cd0 07e0
.org 0xa6cd2
	.byte 0x00	@ 000a6cd2 data
.org 0xa6cd3
	.byte 0x00	@ 000a6cd3 data
.org 0xa6cd4
	.byte 0x54,0x26,0x86,0x08	@ 000a6cd4 data
.org 0xa6cd8
	adds r0, r4, #0	@ 000a6cd8 201c
.org 0xa6cda
	adds r0, #116	@ 000a6cda 7430
.org 0xa6cdc
	ldr r1, [pc, #52]	@ 000a6cdc 0d49
.org 0xa6cde
	bl 0x5784	@ 000a6cde 5ef751fd
.org 0xa6ce2
	adds r2, r5, #0	@ 000a6ce2 2a1c
.org 0xa6ce4
	adds r2, #189	@ 000a6ce4 bd32
.org 0xa6ce6
	ldrb r0, [r2, #0]	@ 000a6ce6 1078
.org 0xa6ce8
	cmp r0, #192	@ 000a6ce8 c028
.org 0xa6cea
	beq.n 0xa6dc4	@ 000a6cea 6bd0
.org 0xa6cec
	ldrb r1, [r4, #10]	@ 000a6cec a17a
.org 0xa6cee
	movs r0, #1	@ 000a6cee 0120
.org 0xa6cf0
	movs r3, #0	@ 000a6cf0 0023
.org 0xa6cf2
	orrs r0, r1	@ 000a6cf2 0843
.org 0xa6cf4
	strb r0, [r4, #10]	@ 000a6cf4 a072
.org 0xa6cf6
	ldrb r1, [r2, #0]	@ 000a6cf6 1178
.org 0xa6cf8
	adds r0, r4, #0	@ 000a6cf8 201c
.org 0xa6cfa
	adds r0, #36	@ 000a6cfa 2430
.org 0xa6cfc
	strb r1, [r0, #0]	@ 000a6cfc 0170
.org 0xa6cfe
	ldrb r0, [r5, #10]	@ 000a6cfe a87a
.org 0xa6d00
	lsrs r2, r0, #4	@ 000a6d00 0209
.org 0xa6d02
	movs r0, #1	@ 000a6d02 0120
.org 0xa6d04
	ands r2, r0	@ 000a6d04 0240
.org 0xa6d06
	cmp r2, #0	@ 000a6d06 002a
.org 0xa6d08
	beq.n 0xa6d18	@ 000a6d08 06d0
.org 0xa6d0a
	ldrb r0, [r4, #10]	@ 000a6d0a a07a
.org 0xa6d0c
	movs r1, #16	@ 000a6d0c 1021
.org 0xa6d0e
	orrs r0, r1	@ 000a6d0e 0843
.org 0xa6d10
	b.n 0xa6d1e	@ 000a6d10 05e0
.org 0xa6d12
	.byte 0x00	@ 000a6d12 data
.org 0xa6d13
	.byte 0x00	@ 000a6d13 data
.org 0xa6d14
	.byte 0xf4,0x25,0x86,0x08	@ 000a6d14 data
.org 0xa6d18
	ldrb r1, [r4, #10]	@ 000a6d18 a17a
.org 0xa6d1a
	movs r0, #239	@ 000a6d1a ef20
.org 0xa6d1c
	ands r0, r1	@ 000a6d1c 0840
.org 0xa6d1e
	strb r0, [r4, #10]	@ 000a6d1e a072
.org 0xa6d20
	adds r1, r2, #0	@ 000a6d20 111c
.org 0xa6d22
	adds r0, r4, #0	@ 000a6d22 201c
.org 0xa6d24
	adds r0, #76	@ 000a6d24 4c30
.org 0xa6d26
	strb r1, [r0, #0]	@ 000a6d26 0170
.org 0xa6d28
	adds r3, r4, #0	@ 000a6d28 231c
.org 0xa6d2a
	adds r3, #74	@ 000a6d2a 4a33
.org 0xa6d2c
	lsls r1, r1, #4	@ 000a6d2c 0901
.org 0xa6d2e
	ldrb r2, [r3, #0]	@ 000a6d2e 1a78
.org 0xa6d30
	movs r0, #17	@ 000a6d30 1120
.org 0xa6d32
	negs r0, r0	@ 000a6d32 4042
.org 0xa6d34
	ands r0, r2	@ 000a6d34 1040
.org 0xa6d36
	orrs r0, r1	@ 000a6d36 0843
.org 0xa6d38
	strb r0, [r3, #0]	@ 000a6d38 1870
.org 0xa6d3a
	adds r0, r4, #0	@ 000a6d3a 201c
.org 0xa6d3c
	bl 0x1cff0	@ 000a6d3c 76f758f9
.org 0xa6d40
	ldrb r0, [r5, #30]	@ 000a6d40 a87f
.org 0xa6d42
	lsls r1, r0, #8	@ 000a6d42 0102
.org 0xa6d44
	adds r0, r5, #0	@ 000a6d44 281c
.org 0xa6d46
	adds r0, #112	@ 000a6d46 7030
.org 0xa6d48
	ldrb r0, [r0, #0]	@ 000a6d48 0078
.org 0xa6d4a
	orrs r1, r0	@ 000a6d4a 0143
.org 0xa6d4c
	ldr r0, [pc, #16]	@ 000a6d4c 0448
.org 0xa6d4e
	cmp r1, r0	@ 000a6d4e 8142
.org 0xa6d50
	beq.n 0xa6d78	@ 000a6d50 12d0
.org 0xa6d52
	cmp r1, r0	@ 000a6d52 8142
.org 0xa6d54
	bgt.n 0xa6d64	@ 000a6d54 06dc
.org 0xa6d56
	subs r0, #2	@ 000a6d56 0238
.org 0xa6d58
	cmp r1, r0	@ 000a6d58 8142
.org 0xa6d5a
	beq.n 0xa6d78	@ 000a6d5a 0dd0
.org 0xa6d5c
	b.n 0xa6dc4	@ 000a6d5c 32e0
.org 0xa6d5e
	.byte 0x00	@ 000a6d5e data
.org 0xa6d5f
	.byte 0x00	@ 000a6d5f data
.org 0xa6d60
	.byte 0x02,0x8b,0x00,0x00	@ 000a6d60 data
.org 0xa6d64
	ldr r0, [pc, #12]	@ 000a6d64 0348
.org 0xa6d66
	cmp r1, r0	@ 000a6d66 8142
.org 0xa6d68
	beq.n 0xa6d84	@ 000a6d68 0cd0
.org 0xa6d6a
	adds r0, #1	@ 000a6d6a 0130
.org 0xa6d6c
	cmp r1, r0	@ 000a6d6c 8142
.org 0xa6d6e
	beq.n 0xa6d98	@ 000a6d6e 13d0
.org 0xa6d70
	b.n 0xa6dc4	@ 000a6d70 28e0
.org 0xa6d72
	.byte 0x00	@ 000a6d72 data
.org 0xa6d73
	.byte 0x00	@ 000a6d73 data
.org 0xa6d74
	.byte 0x03,0x8b,0x00,0x00	@ 000a6d74 data
.org 0xa6d78
	movs r3, #0	@ 000a6d78 0023
.org 0xa6d7a
	ldr r2, [pc, #4]	@ 000a6d7a 014a
.org 0xa6d7c
	b.n 0xa6dce	@ 000a6d7c 27e0
.org 0xa6d7e
	.byte 0x00	@ 000a6d7e data
.org 0xa6d7f
	.byte 0x00	@ 000a6d7f data
.org 0xa6d80
	.byte 0x00,0xf3,0xff,0xff	@ 000a6d80 data
.org 0xa6d84
	ldr r2, [pc, #12]	@ 000a6d84 034a
.org 0xa6d86
	adds r0, r5, #0	@ 000a6d86 281c
.org 0xa6d88
	adds r0, #113	@ 000a6d88 7130
.org 0xa6d8a
	ldrb r0, [r0, #0]	@ 000a6d8a 0078
.org 0xa6d8c
	lsls r0, r0, #24	@ 000a6d8c 0006
.org 0xa6d8e
	asrs r0, r0, #24	@ 000a6d8e 0016
.org 0xa6d90
	b.n 0xa6da6	@ 000a6d90 09e0
.org 0xa6d92
	.byte 0x00	@ 000a6d92 data
.org 0xa6d93
	.byte 0x00	@ 000a6d93 data
.org 0xa6d94
	.byte 0xa4,0x25,0x86,0x08	@ 000a6d94 data
.org 0xa6d98
	ldr r2, [pc, #32]	@ 000a6d98 084a
.org 0xa6d9a
	adds r0, r5, #0	@ 000a6d9a 281c
.org 0xa6d9c
	adds r0, #113	@ 000a6d9c 7130
.org 0xa6d9e
	movs r1, #0	@ 000a6d9e 0021
.org 0xa6da0
	ldrsb r1, [r0, r1]	@ 000a6da0 4156
.org 0xa6da2
	movs r0, #7	@ 000a6da2 0720
.org 0xa6da4
	subs r0, r0, r1	@ 000a6da4 401a
.org 0xa6da6
	lsls r0, r0, #2	@ 000a6da6 8000
.org 0xa6da8
	adds r1, r0, r2	@ 000a6da8 8118
.org 0xa6daa
	movs r6, #0	@ 000a6daa 0026
.org 0xa6dac
	ldrsh r3, [r1, r6]	@ 000a6dac 8b5f
.org 0xa6dae
	adds r2, #2	@ 000a6dae 0232
.org 0xa6db0
	adds r0, r0, r2	@ 000a6db0 8018
.org 0xa6db2
	movs r1, #0	@ 000a6db2 0021
.org 0xa6db4
	ldrsh r0, [r0, r1]	@ 000a6db4 405e
.org 0xa6db6
	ldr r6, [pc, #8]	@ 000a6db6 024e
.org 0xa6db8
	adds r2, r0, r6	@ 000a6db8 8219
.org 0xa6dba
	b.n 0xa6dce	@ 000a6dba 08e0
.org 0xa6dbc
	.byte 0xa4,0x25,0x86,0x08	@ 000a6dbc data
.org 0xa6dc0
	.byte 0x00,0xf3,0xff,0xff	@ 000a6dc0 data

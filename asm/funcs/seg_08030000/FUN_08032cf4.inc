@ FUN_08032cf4  entry 0x08032cf4  size 290
.thumb
.org 0x32cf4
FUN_08032cf4:
	push {r4, r5, r6, r7, lr}	@ 00032cf4 f0b5
.org 0x32cf6
	adds r4, r0, #0	@ 00032cf6 041c
.org 0x32cf8
	movs r0, #161	@ 00032cf8 a120
.org 0x32cfa
	lsls r0, r0, #1	@ 00032cfa 4000
.org 0x32cfc
	adds r1, r4, r0	@ 00032cfc 2118
.org 0x32cfe
	ldrb r0, [r1, #0]	@ 00032cfe 0878
.org 0x32d00
	movs r2, #16	@ 00032d00 1022
.org 0x32d02
	orrs r0, r2	@ 00032d02 1043
.org 0x32d04
	strb r0, [r1, #0]	@ 00032d04 0870
.org 0x32d06
	movs r1, #150	@ 00032d06 9621
.org 0x32d08
	lsls r1, r1, #2	@ 00032d08 8900
.org 0x32d0a
	adds r7, r4, r1	@ 00032d0a 6718
.org 0x32d0c
	ldr r0, [r7, #0]	@ 00032d0c 3868
.org 0x32d0e
	movs r1, #16	@ 00032d0e 1021
.org 0x32d10
	ands r0, r1	@ 00032d10 0840
.org 0x32d12
	cmp r0, #0	@ 00032d12 0028
.org 0x32d14
	beq.n 0x32d36	@ 00032d14 0fd0
.org 0x32d16
	ldr r0, [r4, #84]	@ 00032d16 606d
.org 0x32d18
	movs r1, #192	@ 00032d18 c021
.org 0x32d1a
	lsls r1, r1, #1	@ 00032d1a 4900
.org 0x32d1c
	adds r0, r0, r1	@ 00032d1c 4018
.org 0x32d1e
	str r0, [r4, #84]	@ 00032d1e 6065
.org 0x32d20
	adds r1, r4, #0	@ 00032d20 211c
.org 0x32d22
	adds r1, #76	@ 00032d22 4c31
.org 0x32d24
	movs r0, #1	@ 00032d24 0120
.org 0x32d26
	strb r0, [r1, #0]	@ 00032d26 0870
.org 0x32d28
	subs r1, #2	@ 00032d28 0239
.org 0x32d2a
	ldrb r0, [r1, #0]	@ 00032d2a 0878
.org 0x32d2c
	orrs r0, r2	@ 00032d2c 1043
.org 0x32d2e
	strb r0, [r1, #0]	@ 00032d2e 0870
.org 0x32d30
	ldrb r0, [r4, #10]	@ 00032d30 a07a
.org 0x32d32
	orrs r0, r2	@ 00032d32 1043
.org 0x32d34
	strb r0, [r4, #10]	@ 00032d34 a072
.org 0x32d36
	ldr r0, [r7, #0]	@ 00032d36 3868
.org 0x32d38
	movs r1, #32	@ 00032d38 2021
.org 0x32d3a
	ands r0, r1	@ 00032d3a 0840
.org 0x32d3c
	cmp r0, #0	@ 00032d3c 0028
.org 0x32d3e
	beq.n 0x32d64	@ 00032d3e 11d0
.org 0x32d40
	ldr r0, [r4, #84]	@ 00032d40 606d
.org 0x32d42
	ldr r1, [pc, #212]	@ 00032d42 3549
.org 0x32d44
	adds r0, r0, r1	@ 00032d44 4018
.org 0x32d46
	str r0, [r4, #84]	@ 00032d46 6065
.org 0x32d48
	adds r1, r4, #0	@ 00032d48 211c
.org 0x32d4a
	adds r1, #76	@ 00032d4a 4c31
.org 0x32d4c
	movs r0, #0	@ 00032d4c 0020
.org 0x32d4e
	strb r0, [r1, #0]	@ 00032d4e 0870
.org 0x32d50
	adds r2, r4, #0	@ 00032d50 221c
.org 0x32d52
	adds r2, #74	@ 00032d52 4a32
.org 0x32d54
	ldrb r1, [r2, #0]	@ 00032d54 1178
.org 0x32d56
	subs r0, #17	@ 00032d56 1138
.org 0x32d58
	ands r0, r1	@ 00032d58 0840
.org 0x32d5a
	strb r0, [r2, #0]	@ 00032d5a 1070
.org 0x32d5c
	ldrb r1, [r4, #10]	@ 00032d5c a17a
.org 0x32d5e
	movs r0, #239	@ 00032d5e ef20
.org 0x32d60
	ands r0, r1	@ 00032d60 0840
.org 0x32d62
	strb r0, [r4, #10]	@ 00032d62 a072
.org 0x32d64
	movs r0, #186	@ 00032d64 ba20
.org 0x32d66
	lsls r0, r0, #1	@ 00032d66 4000
.org 0x32d68
	adds r5, r4, r0	@ 00032d68 2518
.org 0x32d6a
	ldrb r1, [r5, #0]	@ 00032d6a 2978
.org 0x32d6c
	lsls r1, r1, #3	@ 00032d6c c900
.org 0x32d6e
	ldr r6, [pc, #172]	@ 00032d6e 2b4e
.org 0x32d70
	adds r1, r1, r6	@ 00032d70 8919
.org 0x32d72
	adds r0, r4, #0	@ 00032d72 201c
.org 0x32d74
	movs r2, #0	@ 00032d74 0022
.org 0x32d76
	bl 0x2b7f0	@ 00032d76 f8f73bfd
.org 0x32d7a
	ldrb r1, [r5, #0]	@ 00032d7a 2978
.org 0x32d7c
	lsls r1, r1, #3	@ 00032d7c c900
.org 0x32d7e
	adds r1, r1, r6	@ 00032d7e 8919
.org 0x32d80
	adds r0, r4, #0	@ 00032d80 201c
.org 0x32d82
	movs r2, #1	@ 00032d82 0122
.org 0x32d84
	bl 0x2b7f0	@ 00032d84 f8f734fd
.org 0x32d88
	ldr r0, [r7, #0]	@ 00032d88 3868
.org 0x32d8a
	movs r1, #64	@ 00032d8a 4021
.org 0x32d8c
	ands r0, r1	@ 00032d8c 0840
.org 0x32d8e
	cmp r0, #0	@ 00032d8e 0028
.org 0x32d90
	beq.n 0x32d9a	@ 00032d90 03d0
.org 0x32d92
	ldr r0, [r4, #88]	@ 00032d92 a06d
.org 0x32d94
	ldr r1, [pc, #128]	@ 00032d94 2049
.org 0x32d96
	adds r0, r0, r1	@ 00032d96 4018
.org 0x32d98
	str r0, [r4, #88]	@ 00032d98 a065
.org 0x32d9a
	ldr r0, [r7, #0]	@ 00032d9a 3868
.org 0x32d9c
	movs r1, #128	@ 00032d9c 8021
.org 0x32d9e
	ands r0, r1	@ 00032d9e 0840
.org 0x32da0
	cmp r0, #0	@ 00032da0 0028
.org 0x32da2
	beq.n 0x32dae	@ 00032da2 04d0
.org 0x32da4
	ldr r0, [r4, #88]	@ 00032da4 a06d
.org 0x32da6
	movs r1, #192	@ 00032da6 c021
.org 0x32da8
	lsls r1, r1, #1	@ 00032da8 4900
.org 0x32daa
	adds r0, r0, r1	@ 00032daa 4018
.org 0x32dac
	str r0, [r4, #88]	@ 00032dac a065
.org 0x32dae
	ldrb r1, [r5, #0]	@ 00032dae 2978
.org 0x32db0
	lsls r1, r1, #3	@ 00032db0 c900
.org 0x32db2
	adds r1, r1, r6	@ 00032db2 8919
.org 0x32db4
	adds r0, r4, #0	@ 00032db4 201c
.org 0x32db6
	movs r2, #0	@ 00032db6 0022
.org 0x32db8
	bl 0x2bfe8	@ 00032db8 f9f716f9
.org 0x32dbc
	ldrb r1, [r5, #0]	@ 00032dbc 2978
.org 0x32dbe
	lsls r1, r1, #3	@ 00032dbe c900
.org 0x32dc0
	adds r1, r1, r6	@ 00032dc0 8919
.org 0x32dc2
	adds r0, r4, #0	@ 00032dc2 201c
.org 0x32dc4
	movs r2, #1	@ 00032dc4 0122
.org 0x32dc6
	bl 0x2baf0	@ 00032dc6 f8f793fe
.org 0x32dca
	lsls r0, r0, #16	@ 00032dca 0004
.org 0x32dcc
	cmp r0, #0	@ 00032dcc 0028
.org 0x32dce
	beq.n 0x32dde	@ 00032dce 06d0
.org 0x32dd0
	ldrb r1, [r5, #0]	@ 00032dd0 2978
.org 0x32dd2
	lsls r1, r1, #3	@ 00032dd2 c900
.org 0x32dd4
	adds r1, r1, r6	@ 00032dd4 8919
.org 0x32dd6
	adds r0, r4, #0	@ 00032dd6 201c
.org 0x32dd8
	movs r2, #0	@ 00032dd8 0022
.org 0x32dda
	bl 0x2c2d4	@ 00032dda f9f77bfa
.org 0x32dde
	ldr r0, [pc, #64]	@ 00032dde 1048
.org 0x32de0
	adds r1, r4, r0	@ 00032de0 2118
.org 0x32de2
	ldrb r0, [r1, #0]	@ 00032de2 0878
.org 0x32de4
	subs r0, #1	@ 00032de4 0138
.org 0x32de6
	strb r0, [r1, #0]	@ 00032de6 0870
.org 0x32de8
	lsls r0, r0, #24	@ 00032de8 0006
.org 0x32dea
	lsrs r0, r0, #24	@ 00032dea 000e
.org 0x32dec
	cmp r0, #255	@ 00032dec ff28
.org 0x32dee
	beq.n 0x32dfa	@ 00032dee 04d0
.org 0x32df0
	ldr r0, [r7, #0]	@ 00032df0 3868
.org 0x32df2
	movs r1, #1	@ 00032df2 0121
.org 0x32df4
	ands r0, r1	@ 00032df4 0840
.org 0x32df6
	cmp r0, #0	@ 00032df6 0028
.org 0x32df8
	beq.n 0x32e10	@ 00032df8 0ad0
.org 0x32dfa
	movs r1, #1	@ 00032dfa 0121
.org 0x32dfc
	strb r1, [r4, #13]	@ 00032dfc 6173
.org 0x32dfe
	movs r0, #0	@ 00032dfe 0020
.org 0x32e00
	strb r0, [r4, #14]	@ 00032e00 a073
.org 0x32e02
	strb r1, [r4, #15]	@ 00032e02 e173
.org 0x32e04
	adds r0, r4, #0	@ 00032e04 201c
.org 0x32e06
	bl 0x386d4	@ 00032e06 05f065fc
.org 0x32e0a
	lsls r0, r0, #16	@ 00032e0a 0004
.org 0x32e0c
	asrs r0, r0, #16	@ 00032e0c 0014
.org 0x32e0e
	str r0, [r4, #92]	@ 00032e0e e065
.org 0x32e10
	pop {r4, r5, r6, r7}	@ 00032e10 f0bc
.org 0x32e12
	pop {r0}	@ 00032e12 01bc
.org 0x32e14
	bx r0	@ 00032e14 0047

@ FUN_08042d14  entry 0x08042d14  size 346
.thumb
.org 0x42d14
FUN_08042d14:
	push {r4, r5, r6, lr}	@ 00042d14 70b5
.org 0x42d16
	sub sp, #8	@ 00042d16 82b0
.org 0x42d18
	adds r4, r0, #0	@ 00042d18 041c
.org 0x42d1a
	ldr r6, [r4, #44]	@ 00042d1a e66a
.org 0x42d1c
	ldr r0, [r4, #96]	@ 00042d1c 206e
.org 0x42d1e
	adds r1, r0, #0	@ 00042d1e 011c
.org 0x42d20
	subs r1, #128	@ 00042d20 8039
.org 0x42d22
	str r1, [r4, #96]	@ 00042d22 2166
.org 0x42d24
	ldr r0, [r4, #92]	@ 00042d24 e06d
.org 0x42d26
	adds r0, r0, r1	@ 00042d26 4018
.org 0x42d28
	str r0, [r4, #92]	@ 00042d28 e065
.org 0x42d2a
	ldrb r3, [r4, #13]	@ 00042d2a 637b
.org 0x42d2c
	cmp r3, #1	@ 00042d2c 012b
.org 0x42d2e
	beq.n 0x42d58	@ 00042d2e 13d0
.org 0x42d30
	cmp r3, #1	@ 00042d30 012b
.org 0x42d32
	bgt.n 0x42d3a	@ 00042d32 02dc
.org 0x42d34
	cmp r3, #0	@ 00042d34 002b
.org 0x42d36
	beq.n 0x42d44	@ 00042d36 05d0
.org 0x42d38
	b.n 0x42dd8	@ 00042d38 4ee0
.org 0x42d3a
	cmp r3, #2	@ 00042d3a 022b
.org 0x42d3c
	beq.n 0x42d78	@ 00042d3c 1cd0
.org 0x42d3e
	cmp r3, #3	@ 00042d3e 032b
.org 0x42d40
	beq.n 0x42d98	@ 00042d40 2ad0
.org 0x42d42
	b.n 0x42dd8	@ 00042d42 49e0
.org 0x42d44
	ldr r0, [pc, #8]	@ 00042d44 0248
.org 0x42d46
	cmp r1, r0	@ 00042d46 8142
.org 0x42d48
	bgt.n 0x42dd8	@ 00042d48 46dc
.org 0x42d4a
	ldr r1, [pc, #8]	@ 00042d4a 0249
.org 0x42d4c
	b.n 0x42d80	@ 00042d4c 18e0
.org 0x42d4e
	.byte 0x00	@ 00042d4e data
.org 0x42d4f
	.byte 0x00	@ 00042d4f data
.org 0x42d50
	.byte 0xff,0x01,0x00,0x00	@ 00042d50 data
.org 0x42d54
	.byte 0x21,0x80,0x00,0x00	@ 00042d54 data
.org 0x42d58
	cmp r1, #0	@ 00042d58 0029
.org 0x42d5a
	bge.n 0x42dd8	@ 00042d5a 3dda
.org 0x42d5c
	adds r0, r4, #0	@ 00042d5c 201c
.org 0x42d5e
	adds r0, #116	@ 00042d5e 7430
.org 0x42d60
	ldr r1, [pc, #16]	@ 00042d60 0449
.org 0x42d62
	movs r3, #1	@ 00042d62 0123
.org 0x42d64
	negs r3, r3	@ 00042d64 5b42
.org 0x42d66
	str r3, [sp, #0]	@ 00042d66 0093
.org 0x42d68
	movs r2, #2	@ 00042d68 0222
.org 0x42d6a
	str r2, [sp, #4]	@ 00042d6a 0192
.org 0x42d6c
	adds r2, r3, #0	@ 00042d6c 1a1c
.org 0x42d6e
	bl 0x5794	@ 00042d6e c2f711fd
.org 0x42d72
	b.n 0x42d86	@ 00042d72 08e0
.org 0x42d74
	.byte 0xbc,0x5b,0x85,0x08	@ 00042d74 data
.org 0x42d78
	ldr r0, [pc, #20]	@ 00042d78 0548
.org 0x42d7a
	cmp r1, r0	@ 00042d7a 8142
.org 0x42d7c
	bge.n 0x42dd8	@ 00042d7c 2cda
.org 0x42d7e
	ldr r1, [pc, #20]	@ 00042d7e 0549
.org 0x42d80
	adds r0, r4, #0	@ 00042d80 201c
.org 0x42d82
	bl 0x1cf00	@ 00042d82 daf7bdf8
.org 0x42d86
	ldrb r0, [r4, #13]	@ 00042d86 607b
.org 0x42d88
	adds r0, #1	@ 00042d88 0130
.org 0x42d8a
	strb r0, [r4, #13]	@ 00042d8a 6073
.org 0x42d8c
	b.n 0x42dd8	@ 00042d8c 24e0
.org 0x42d8e
	.byte 0x00	@ 00042d8e data
.org 0x42d8f
	.byte 0x00	@ 00042d8f data
.org 0x42d90
	.byte 0x00,0xfe,0xff,0xff	@ 00042d90 data
.org 0x42d94
	.byte 0x22,0x80,0x00,0x00	@ 00042d94 data
.org 0x42d98
	cmp r0, #0	@ 00042d98 0028
.org 0x42d9a
	bge.n 0x42dd8	@ 00042d9a 1dda
.org 0x42d9c
	ldrb r1, [r4, #10]	@ 00042d9c a17a
.org 0x42d9e
	movs r0, #254	@ 00042d9e fe20
.org 0x42da0
	ands r0, r1	@ 00042da0 0840
.org 0x42da2
	movs r2, #0	@ 00042da2 0022
.org 0x42da4
	movs r1, #253	@ 00042da4 fd21
.org 0x42da6
	ands r0, r1	@ 00042da6 0840
.org 0x42da8
	strb r0, [r4, #10]	@ 00042da8 a072
.org 0x42daa
	adds r0, r4, #0	@ 00042daa 201c
.org 0x42dac
	adds r0, #140	@ 00042dac 8c30
.org 0x42dae
	str r2, [r0, #0]	@ 00042dae 0260
.org 0x42db0
	adds r0, #4	@ 00042db0 0430
.org 0x42db2
	str r2, [r0, #0]	@ 00042db2 0260
.org 0x42db4
	adds r0, #4	@ 00042db4 0430
.org 0x42db6
	strb r2, [r0, #0]	@ 00042db6 0270
.org 0x42db8
	ldrb r1, [r4, #10]	@ 00042db8 a17a
.org 0x42dba
	movs r0, #251	@ 00042dba fb20
.org 0x42dbc
	ands r0, r1	@ 00042dbc 0840
.org 0x42dbe
	strb r0, [r4, #10]	@ 00042dbe a072
.org 0x42dc0
	ldr r1, [pc, #16]	@ 00042dc0 0449
.org 0x42dc2
	ldrb r0, [r4, #9]	@ 00042dc2 607a
.org 0x42dc4
	lsls r0, r0, #2	@ 00042dc4 8000
.org 0x42dc6
	adds r0, r0, r1	@ 00042dc6 4018
.org 0x42dc8
	str r3, [r4, #12]	@ 00042dc8 e360
.org 0x42dca
	ldr r0, [r0, #0]	@ 00042dca 0068
.org 0x42dcc
	ldr r0, [r0, #12]	@ 00042dcc c068
.org 0x42dce
	str r0, [r4, #20]	@ 00042dce 6061
.org 0x42dd0
	b.n 0x42e8a	@ 00042dd0 5be0
.org 0x42dd2
	.byte 0x00	@ 00042dd2 data
.org 0x42dd3
	.byte 0x00	@ 00042dd3 data
.org 0x42dd4
	.byte 0xf8,0x39,0x85,0x08	@ 00042dd4 data
.org 0x42dd8
	adds r0, r4, #0	@ 00042dd8 201c
.org 0x42dda
	bl 0x1cff0	@ 00042dda daf709f9
.org 0x42dde
	ldrb r0, [r6, #10]	@ 00042dde b07a
.org 0x42de0
	lsrs r2, r0, #4	@ 00042de0 0209
.org 0x42de2
	movs r0, #1	@ 00042de2 0120
.org 0x42de4
	ands r2, r0	@ 00042de4 0240
.org 0x42de6
	cmp r2, #0	@ 00042de6 002a
.org 0x42de8
	beq.n 0x42df2	@ 00042de8 03d0
.org 0x42dea
	ldrb r1, [r4, #10]	@ 00042dea a17a
.org 0x42dec
	movs r0, #16	@ 00042dec 1020
.org 0x42dee
	orrs r0, r1	@ 00042dee 0843
.org 0x42df0
	b.n 0x42df8	@ 00042df0 02e0
.org 0x42df2
	ldrb r1, [r4, #10]	@ 00042df2 a17a
.org 0x42df4
	movs r0, #239	@ 00042df4 ef20
.org 0x42df6
	ands r0, r1	@ 00042df6 0840
.org 0x42df8
	strb r0, [r4, #10]	@ 00042df8 a072
.org 0x42dfa
	adds r1, r2, #0	@ 00042dfa 111c
.org 0x42dfc
	adds r0, r4, #0	@ 00042dfc 201c
.org 0x42dfe
	adds r0, #76	@ 00042dfe 4c30
.org 0x42e00
	strb r1, [r0, #0]	@ 00042e00 0170
.org 0x42e02
	adds r3, r4, #0	@ 00042e02 231c
.org 0x42e04
	adds r3, #74	@ 00042e04 4a33
.org 0x42e06
	lsls r1, r1, #4	@ 00042e06 0901
.org 0x42e08
	ldrb r2, [r3, #0]	@ 00042e08 1a78
.org 0x42e0a
	movs r0, #17	@ 00042e0a 1120
.org 0x42e0c
	negs r0, r0	@ 00042e0c 4042
.org 0x42e0e
	ands r0, r2	@ 00042e0e 1040
.org 0x42e10
	orrs r0, r1	@ 00042e10 0843
.org 0x42e12
	strb r0, [r3, #0]	@ 00042e12 1870
.org 0x42e14
	adds r0, r6, #0	@ 00042e14 301c
.org 0x42e16
	adds r0, #36	@ 00042e16 2430
.org 0x42e18
	ldrb r5, [r0, #0]	@ 00042e18 0578
.org 0x42e1a
	ldr r0, [r6, #84]	@ 00042e1a 706d
.org 0x42e1c
	ldr r1, [r6, #88]	@ 00042e1c b16d
.org 0x42e1e
	str r0, [r4, #84]	@ 00042e1e 6065
.org 0x42e20
	str r1, [r4, #88]	@ 00042e20 a165
.org 0x42e22
	ldr r0, [r6, #84]	@ 00042e22 706d
.org 0x42e24
	ldr r1, [r6, #88]	@ 00042e24 b16d
.org 0x42e26
	str r0, [r4, #100]	@ 00042e26 6066
.org 0x42e28
	str r1, [r4, #104]	@ 00042e28 a166
.org 0x42e2a
	ldrb r1, [r4, #10]	@ 00042e2a a17a
.org 0x42e2c
	movs r0, #16	@ 00042e2c 1020
.org 0x42e2e
	ands r0, r1	@ 00042e2e 0840
.org 0x42e30
	cmp r0, #0	@ 00042e30 0028
.org 0x42e32
	beq.n 0x42e58	@ 00042e32 11d0
.org 0x42e34
	ldr r3, [pc, #28]	@ 00042e34 074b
.org 0x42e36
	adds r0, r5, #0	@ 00042e36 281c
.org 0x42e38
	adds r0, #64	@ 00042e38 4030
.org 0x42e3a
	lsls r0, r0, #24	@ 00042e3a 0006
.org 0x42e3c
	lsrs r0, r0, #23	@ 00042e3c c00d
.org 0x42e3e
	adds r0, r0, r3	@ 00042e3e c018
.org 0x42e40
	movs r1, #0	@ 00042e40 0021
.org 0x42e42
	ldrsh r0, [r0, r1]	@ 00042e42 405e
.org 0x42e44
	ldr r2, [r4, #92]	@ 00042e44 e26d
.org 0x42e46
	adds r1, r0, #0	@ 00042e46 011c
.org 0x42e48
	muls r1, r2	@ 00042e48 5143
.org 0x42e4a
	asrs r1, r1, #8	@ 00042e4a 0912
.org 0x42e4c
	ldr r0, [r4, #84]	@ 00042e4c 606d
.org 0x42e4e
	adds r0, r0, r1	@ 00042e4e 4018
.org 0x42e50
	b.n 0x42e74	@ 00042e50 10e0
.org 0x42e52
	.byte 0x00	@ 00042e52 data
.org 0x42e53
	.byte 0x00	@ 00042e53 data
.org 0x42e54
	.byte 0x0c,0x93,0x12,0x08	@ 00042e54 data
.org 0x42e58
	ldr r3, [pc, #56]	@ 00042e58 0e4b
.org 0x42e5a
	adds r0, r5, #0	@ 00042e5a 281c
.org 0x42e5c
	adds r0, #64	@ 00042e5c 4030
.org 0x42e5e
	lsls r0, r0, #24	@ 00042e5e 0006
.org 0x42e60
	lsrs r0, r0, #23	@ 00042e60 c00d
.org 0x42e62
	adds r0, r0, r3	@ 00042e62 c018
.org 0x42e64
	movs r1, #0	@ 00042e64 0021
.org 0x42e66
	ldrsh r0, [r0, r1]	@ 00042e66 405e
.org 0x42e68
	ldr r2, [r4, #92]	@ 00042e68 e26d
.org 0x42e6a
	adds r1, r0, #0	@ 00042e6a 011c
.org 0x42e6c
	muls r1, r2	@ 00042e6c 5143

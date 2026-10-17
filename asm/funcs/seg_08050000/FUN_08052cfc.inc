@ FUN_08052cfc  entry 0x08052cfc  size 234
.thumb
.org 0x52cfc
FUN_08052cfc:
	push {r4, r5, r6, lr}	@ 00052cfc 70b5
.org 0x52cfe
	adds r5, r0, #0	@ 00052cfe 051c
.org 0x52d00
	ldrb r0, [r5, #14]	@ 00052d00 a87b
.org 0x52d02
	cmp r0, #0	@ 00052d02 0028
.org 0x52d04
	bne.n 0x52dc2	@ 00052d04 5dd1
.org 0x52d06
	ldr r1, [pc, #24]	@ 00052d06 0649
.org 0x52d08
	adds r0, r5, #0	@ 00052d08 281c
.org 0x52d0a
	bl 0x1cf00	@ 00052d0a caf7f9f8
.org 0x52d0e
	ldrb r1, [r5, #10]	@ 00052d0e a97a
.org 0x52d10
	movs r0, #32	@ 00052d10 2020
.org 0x52d12
	ands r0, r1	@ 00052d12 0840
.org 0x52d14
	cmp r0, #0	@ 00052d14 0028
.org 0x52d16
	beq.n 0x52d24	@ 00052d16 05d0
.org 0x52d18
	ldr r0, [r5, #88]	@ 00052d18 a86d
.org 0x52d1a
	movs r1, #224	@ 00052d1a e021
.org 0x52d1c
	lsls r1, r1, #5	@ 00052d1c 4901
.org 0x52d1e
	b.n 0x52d2a	@ 00052d1e 04e0
.org 0x52d20
	.byte 0x0a,0xa1,0x00,0x00	@ 00052d20 data
.org 0x52d24
	ldr r0, [r5, #88]	@ 00052d24 a86d
.org 0x52d26
	movs r1, #128	@ 00052d26 8021
.org 0x52d28
	lsls r1, r1, #5	@ 00052d28 4901
.org 0x52d2a
	adds r0, r0, r1	@ 00052d2a 4018
.org 0x52d2c
	str r0, [r5, #88]	@ 00052d2c a865
.org 0x52d2e
	ldr r0, [pc, #112]	@ 00052d2e 1c48
.org 0x52d30
	str r0, [r5, #96]	@ 00052d30 2866
.org 0x52d32
	adds r1, r5, #0	@ 00052d32 291c
.org 0x52d34
	adds r1, #77	@ 00052d34 4d31
.org 0x52d36
	movs r0, #0	@ 00052d36 0020
.org 0x52d38
	strb r0, [r1, #0]	@ 00052d38 0870
.org 0x52d3a
	adds r6, r5, #0	@ 00052d3a 2e1c
.org 0x52d3c
	adds r6, #74	@ 00052d3c 4a36
.org 0x52d3e
	ldrb r1, [r6, #0]	@ 00052d3e 3178
.org 0x52d40
	subs r0, #33	@ 00052d40 2138
.org 0x52d42
	ands r0, r1	@ 00052d42 0840
.org 0x52d44
	strb r0, [r6, #0]	@ 00052d44 3070
.org 0x52d46
	ldrb r1, [r5, #10]	@ 00052d46 a97a
.org 0x52d48
	movs r0, #223	@ 00052d48 df20
.org 0x52d4a
	ands r0, r1	@ 00052d4a 0840
.org 0x52d4c
	strb r0, [r5, #10]	@ 00052d4c a872
.org 0x52d4e
	ldr r0, [r5, #92]	@ 00052d4e e86d
.org 0x52d50
	asrs r0, r0, #1	@ 00052d50 4010
.org 0x52d52
	negs r0, r0	@ 00052d52 4042
.org 0x52d54
	str r0, [r5, #92]	@ 00052d54 e865
.org 0x52d56
	adds r4, r5, #0	@ 00052d56 2c1c
.org 0x52d58
	adds r4, #84	@ 00052d58 5434
.org 0x52d5a
	movs r0, #4	@ 00052d5a 0420
.org 0x52d5c
	adds r1, r4, #0	@ 00052d5c 211c
.org 0x52d5e
	bl 0x1fe64	@ 00052d5e cdf781f8
.org 0x52d62
	movs r3, #0	@ 00052d62 0023
.org 0x52d64
	ldr r0, [pc, #60]	@ 00052d64 0f48
.org 0x52d66
	ldr r2, [r0, #0]	@ 00052d66 0268
.org 0x52d68
	ldr r1, [r5, #84]	@ 00052d68 696d
.org 0x52d6a
	ldr r0, [r2, #84]	@ 00052d6a 506d
.org 0x52d6c
	cmp r1, r0	@ 00052d6c 8142
.org 0x52d6e
	bge.n 0x52d72	@ 00052d6e 00da
.org 0x52d70
	movs r3, #1	@ 00052d70 0123
.org 0x52d72
	adds r0, r5, #0	@ 00052d72 281c
.org 0x52d74
	adds r0, #76	@ 00052d74 4c30
.org 0x52d76
	strb r3, [r0, #0]	@ 00052d76 0370
.org 0x52d78
	movs r3, #0	@ 00052d78 0023
.org 0x52d7a
	ldr r1, [r5, #84]	@ 00052d7a 696d
.org 0x52d7c
	ldr r0, [r2, #84]	@ 00052d7c 506d
.org 0x52d7e
	cmp r1, r0	@ 00052d7e 8142
.org 0x52d80
	bge.n 0x52d84	@ 00052d80 00da
.org 0x52d82
	movs r3, #1	@ 00052d82 0123
.org 0x52d84
	lsls r2, r3, #4	@ 00052d84 1a01
.org 0x52d86
	ldrb r1, [r6, #0]	@ 00052d86 3178
.org 0x52d88
	movs r0, #17	@ 00052d88 1120
.org 0x52d8a
	negs r0, r0	@ 00052d8a 4042
.org 0x52d8c
	ands r0, r1	@ 00052d8c 0840
.org 0x52d8e
	orrs r0, r2	@ 00052d8e 1043
.org 0x52d90
	strb r0, [r6, #0]	@ 00052d90 3070
.org 0x52d92
	cmp r3, #0	@ 00052d92 002b
.org 0x52d94
	beq.n 0x52da8	@ 00052d94 08d0
.org 0x52d96
	ldrb r0, [r5, #10]	@ 00052d96 a87a
.org 0x52d98
	movs r1, #16	@ 00052d98 1021
.org 0x52d9a
	orrs r0, r1	@ 00052d9a 0843
.org 0x52d9c
	b.n 0x52dae	@ 00052d9c 07e0
.org 0x52d9e
	.byte 0x00	@ 00052d9e data
.org 0x52d9f
	.byte 0x00	@ 00052d9f data
.org 0x52da0
	.byte 0x00,0xfc,0xff,0xff	@ 00052da0 data
.org 0x52da4
	.byte 0xf0,0xdb,0x02,0x02	@ 00052da4 data
.org 0x52da8
	ldrb r1, [r5, #10]	@ 00052da8 a97a
.org 0x52daa
	movs r0, #239	@ 00052daa ef20
.org 0x52dac
	ands r0, r1	@ 00052dac 0840
.org 0x52dae
	strb r0, [r5, #10]	@ 00052dae a872
.org 0x52db0
	adds r0, r4, #0	@ 00052db0 201c
.org 0x52db2
	bl 0xc1b28	@ 00052db2 6ef0b9fe
.org 0x52db6
	movs r0, #56	@ 00052db6 3820
.org 0x52db8
	bl 0x2b10	@ 00052db8 aff7aafe
.org 0x52dbc
	ldrb r0, [r5, #14]	@ 00052dbc a87b
.org 0x52dbe
	adds r0, #1	@ 00052dbe 0130
.org 0x52dc0
	strb r0, [r5, #14]	@ 00052dc0 a873
.org 0x52dc2
	adds r0, r5, #0	@ 00052dc2 281c
.org 0x52dc4
	bl 0x1cff0	@ 00052dc4 caf714f9
.org 0x52dc8
	ldr r0, [r5, #84]	@ 00052dc8 686d
.org 0x52dca
	ldr r1, [r5, #92]	@ 00052dca e96d
.org 0x52dcc
	adds r0, r0, r1	@ 00052dcc 4018
.org 0x52dce
	str r0, [r5, #84]	@ 00052dce 6865
.org 0x52dd0
	ldr r0, [r5, #88]	@ 00052dd0 a86d
.org 0x52dd2
	ldr r1, [r5, #96]	@ 00052dd2 296e
.org 0x52dd4
	adds r0, r0, r1	@ 00052dd4 4018
.org 0x52dd6
	str r0, [r5, #88]	@ 00052dd6 a865
.org 0x52dd8
	adds r1, #64	@ 00052dd8 4031
.org 0x52dda
	str r1, [r5, #96]	@ 00052dda 2966
.org 0x52ddc
	adds r0, r5, #0	@ 00052ddc 281c
.org 0x52dde
	adds r0, #115	@ 00052dde 7330
.org 0x52de0
	ldrb r0, [r0, #0]	@ 00052de0 0078
.org 0x52de2
	cmp r0, #3	@ 00052de2 0328
.org 0x52de4
	bne.n 0x52dee	@ 00052de4 03d1

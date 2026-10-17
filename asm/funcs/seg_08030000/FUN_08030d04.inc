@ FUN_08030d04  entry 0x08030d04  size 322
.thumb
.org 0x30d04
FUN_08030d04:
	push {r4, r5, r6, r7, lr}	@ 00030d04 f0b5
.org 0x30d06
	adds r4, r0, #0	@ 00030d06 041c
.org 0x30d08
	movs r1, #186	@ 00030d08 ba21
.org 0x30d0a
	lsls r1, r1, #1	@ 00030d0a 4900
.org 0x30d0c
	adds r0, r4, r1	@ 00030d0c 6018
.org 0x30d0e
	movs r6, #1	@ 00030d0e 0126
.org 0x30d10
	strb r6, [r0, #0]	@ 00030d10 0670
.org 0x30d12
	ldr r0, [pc, #72]	@ 00030d12 1248
.org 0x30d14
	adds r1, r4, r0	@ 00030d14 2118
.org 0x30d16
	ldrb r0, [r1, #0]	@ 00030d16 0878
.org 0x30d18
	adds r0, #1	@ 00030d18 0130
.org 0x30d1a
	strb r0, [r1, #0]	@ 00030d1a 0870
.org 0x30d1c
	lsls r0, r0, #24	@ 00030d1c 0006
.org 0x30d1e
	lsrs r0, r0, #24	@ 00030d1e 000e
.org 0x30d20
	cmp r0, #3	@ 00030d20 0328
.org 0x30d22
	bne.n 0x30d36	@ 00030d22 08d1
.org 0x30d24
	movs r0, #0	@ 00030d24 0020
.org 0x30d26
	strb r0, [r1, #0]	@ 00030d26 0870
.org 0x30d28
	adds r0, r4, #0	@ 00030d28 201c
.org 0x30d2a
	adds r0, #84	@ 00030d2a 5430
.org 0x30d2c
	ldrb r1, [r4, #10]	@ 00030d2c a17a
.org 0x30d2e
	lsrs r1, r1, #4	@ 00030d2e 0909
.org 0x30d30
	ands r1, r6	@ 00030d30 3140
.org 0x30d32
	bl 0xd1d08	@ 00030d32 a0f0e9ff
.org 0x30d36
	ldr r1, [pc, #40]	@ 00030d36 0a49
.org 0x30d38
	adds r0, r4, r1	@ 00030d38 6018
.org 0x30d3a
	ldrb r1, [r0, #0]	@ 00030d3a 0178
.org 0x30d3c
	movs r0, #2	@ 00030d3c 0220
.org 0x30d3e
	ands r0, r1	@ 00030d3e 0840
.org 0x30d40
	cmp r0, #0	@ 00030d40 0028
.org 0x30d42
	beq.n 0x30d46	@ 00030d42 00d0
.org 0x30d44
	b.n 0x30e48	@ 00030d44 80e0
.org 0x30d46
	movs r0, #150	@ 00030d46 9620
.org 0x30d48
	lsls r0, r0, #2	@ 00030d48 8000
.org 0x30d4a
	adds r1, r4, r0	@ 00030d4a 2118
.org 0x30d4c
	ldr r2, [r1, #0]	@ 00030d4c 0a68
.org 0x30d4e
	movs r0, #32	@ 00030d4e 2020
.org 0x30d50
	ands r0, r2	@ 00030d50 1040
.org 0x30d52
	adds r7, r1, #0	@ 00030d52 0f1c
.org 0x30d54
	cmp r0, #0	@ 00030d54 0028
.org 0x30d56
	beq.n 0x30d64	@ 00030d56 05d0
.org 0x30d58
	movs r5, #0	@ 00030d58 0025
.org 0x30d5a
	b.n 0x30d76	@ 00030d5a 0ce0
.org 0x30d5c
	.byte 0x3d,0x01,0x00,0x00	@ 00030d5c data
.org 0x30d60
	.byte 0x53,0x01,0x00,0x00	@ 00030d60 data
.org 0x30d64
	movs r0, #16	@ 00030d64 1020
.org 0x30d66
	ands r2, r0	@ 00030d66 0240
.org 0x30d68
	cmp r2, #0	@ 00030d68 002a
.org 0x30d6a
	beq.n 0x30d70	@ 00030d6a 01d0
.org 0x30d6c
	movs r5, #1	@ 00030d6c 0125
.org 0x30d6e
	b.n 0x30d76	@ 00030d6e 02e0
.org 0x30d70
	ldrb r0, [r4, #10]	@ 00030d70 a07a
.org 0x30d72
	lsrs r5, r0, #4	@ 00030d72 0509
.org 0x30d74
	ands r5, r6	@ 00030d74 3540
.org 0x30d76
	movs r3, #1	@ 00030d76 0123
.org 0x30d78
	adds r1, r5, #0	@ 00030d78 291c
.org 0x30d7a
	ands r1, r3	@ 00030d7a 1940
.org 0x30d7c
	adds r0, r4, #0	@ 00030d7c 201c
.org 0x30d7e
	adds r0, #76	@ 00030d7e 4c30
.org 0x30d80
	strb r1, [r0, #0]	@ 00030d80 0170
.org 0x30d82
	movs r0, #74	@ 00030d82 4a20
.org 0x30d84
	adds r0, r0, r4	@ 00030d84 0019
.org 0x30d86
	mov ip, r0	@ 00030d86 8446
.org 0x30d88
	lsls r1, r1, #4	@ 00030d88 0901
.org 0x30d8a
	ldrb r2, [r0, #0]	@ 00030d8a 0278
.org 0x30d8c
	movs r0, #17	@ 00030d8c 1120
.org 0x30d8e
	negs r0, r0	@ 00030d8e 4042
.org 0x30d90
	ands r0, r2	@ 00030d90 1040
.org 0x30d92
	orrs r0, r1	@ 00030d92 0843
.org 0x30d94
	mov r1, ip	@ 00030d94 6146
.org 0x30d96
	strb r0, [r1, #0]	@ 00030d96 0870
.org 0x30d98
	adds r0, r5, #0	@ 00030d98 281c
.org 0x30d9a
	ands r0, r3	@ 00030d9a 1840
.org 0x30d9c
	cmp r0, #0	@ 00030d9c 0028
.org 0x30d9e
	beq.n 0x30da8	@ 00030d9e 03d0
.org 0x30da0
	ldrb r0, [r4, #10]	@ 00030da0 a07a
.org 0x30da2
	movs r1, #16	@ 00030da2 1021
.org 0x30da4
	orrs r0, r1	@ 00030da4 0843
.org 0x30da6
	b.n 0x30dae	@ 00030da6 02e0
.org 0x30da8
	ldrb r1, [r4, #10]	@ 00030da8 a17a
.org 0x30daa
	movs r0, #239	@ 00030daa ef20
.org 0x30dac
	ands r0, r1	@ 00030dac 0840
.org 0x30dae
	strb r0, [r4, #10]	@ 00030dae a072
.org 0x30db0
	movs r1, #161	@ 00030db0 a121
.org 0x30db2
	lsls r1, r1, #1	@ 00030db2 4900
.org 0x30db4
	adds r0, r4, r1	@ 00030db4 6018
.org 0x30db6
	ldrb r1, [r0, #0]	@ 00030db6 0178
.org 0x30db8
	movs r0, #32	@ 00030db8 2020
.org 0x30dba
	ands r0, r1	@ 00030dba 0840
.org 0x30dbc
	cmp r0, #0	@ 00030dbc 0028
.org 0x30dbe
	beq.n 0x30dfe	@ 00030dbe 1ed0
.org 0x30dc0
	cmp r5, #0	@ 00030dc0 002d
.org 0x30dc2
	beq.n 0x30de6	@ 00030dc2 10d0
.org 0x30dc4
	ldr r0, [r4, #92]	@ 00030dc4 e06d
.org 0x30dc6
	adds r0, #64	@ 00030dc6 4030
.org 0x30dc8
	str r0, [r4, #92]	@ 00030dc8 e065
.org 0x30dca
	adds r0, r4, #0	@ 00030dca 201c
.org 0x30dcc
	bl 0x38790	@ 00030dcc 07f0e0fc
.org 0x30dd0
	lsls r0, r0, #16	@ 00030dd0 0004
.org 0x30dd2
	asrs r0, r0, #16	@ 00030dd2 0014
.org 0x30dd4
	ldr r1, [r4, #92]	@ 00030dd4 e16d
.org 0x30dd6
	cmp r1, r0	@ 00030dd6 8142
.org 0x30dd8
	ble.n 0x30e1c	@ 00030dd8 20dd
.org 0x30dda
	adds r0, r4, #0	@ 00030dda 201c
.org 0x30ddc
	bl 0x38790	@ 00030ddc 07f0d8fc
.org 0x30de0
	lsls r0, r0, #16	@ 00030de0 0004
.org 0x30de2
	asrs r0, r0, #16	@ 00030de2 0014
.org 0x30de4
	b.n 0x30e1a	@ 00030de4 19e0
.org 0x30de6
	ldr r0, [r4, #92]	@ 00030de6 e06d
.org 0x30de8
	subs r0, #64	@ 00030de8 4038
.org 0x30dea
	str r0, [r4, #92]	@ 00030dea e065
.org 0x30dec
	adds r0, r4, #0	@ 00030dec 201c
.org 0x30dee
	bl 0x38790	@ 00030dee 07f0cffc
.org 0x30df2
	lsls r0, r0, #16	@ 00030df2 0004
.org 0x30df4
	asrs r0, r0, #16	@ 00030df4 0014
.org 0x30df6
	ldr r1, [r4, #92]	@ 00030df6 e16d
.org 0x30df8
	cmn r1, r0	@ 00030df8 c142
.org 0x30dfa
	bge.n 0x30e1c	@ 00030dfa 0fda
.org 0x30dfc
	b.n 0x30e0e	@ 00030dfc 07e0
.org 0x30dfe
	cmp r5, #0	@ 00030dfe 002d
.org 0x30e00
	beq.n 0x30e0e	@ 00030e00 05d0
.org 0x30e02
	adds r0, r4, #0	@ 00030e02 201c
.org 0x30e04
	bl 0x38790	@ 00030e04 07f0c4fc
.org 0x30e08
	lsls r0, r0, #16	@ 00030e08 0004
.org 0x30e0a
	asrs r0, r0, #16	@ 00030e0a 0014
.org 0x30e0c
	b.n 0x30e1a	@ 00030e0c 05e0
.org 0x30e0e
	adds r0, r4, #0	@ 00030e0e 201c
.org 0x30e10
	bl 0x38790	@ 00030e10 07f0befc
.org 0x30e14
	lsls r0, r0, #16	@ 00030e14 0004
.org 0x30e16
	asrs r0, r0, #16	@ 00030e16 0014
.org 0x30e18
	negs r0, r0	@ 00030e18 4042
.org 0x30e1a
	str r0, [r4, #92]	@ 00030e1a e065
.org 0x30e1c
	movs r0, #157	@ 00030e1c 9d20
.org 0x30e1e
	lsls r0, r0, #1	@ 00030e1e 4000
.org 0x30e20
	adds r1, r4, r0	@ 00030e20 2118
.org 0x30e22
	ldrb r0, [r1, #0]	@ 00030e22 0878
.org 0x30e24
	subs r0, #1	@ 00030e24 0138
.org 0x30e26
	strb r0, [r1, #0]	@ 00030e26 0870
.org 0x30e28
	lsls r0, r0, #24	@ 00030e28 0006
.org 0x30e2a
	lsrs r0, r0, #24	@ 00030e2a 000e
.org 0x30e2c
	cmp r0, #255	@ 00030e2c ff28
.org 0x30e2e
	bne.n 0x30e48	@ 00030e2e 0bd1
.org 0x30e30
	ldr r1, [r7, #0]	@ 00030e30 3968
.org 0x30e32
	movs r0, #48	@ 00030e32 3020
.org 0x30e34
	ands r1, r0	@ 00030e34 0140
.org 0x30e36
	cmp r1, #0	@ 00030e36 0029
.org 0x30e38
	beq.n 0x30e44	@ 00030e38 04d0
.org 0x30e3a
	movs r0, #1	@ 00030e3a 0120
.org 0x30e3c
	strb r0, [r4, #14]	@ 00030e3c a073
.org 0x30e3e
	movs r0, #0	@ 00030e3e 0020
.org 0x30e40
	strb r0, [r4, #15]	@ 00030e40 e073
.org 0x30e42
	b.n 0x30e48	@ 00030e42 01e0
.org 0x30e44
	strb r1, [r4, #14]	@ 00030e44 a173

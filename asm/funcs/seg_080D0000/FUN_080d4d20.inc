@ FUN_080d4d20  entry 0x080d4d20  size 364
.thumb
.org 0xd4d20
FUN_080d4d20:
	push {r4, r5, r6, lr}	@ 000d4d20 70b5
.org 0xd4d22
	adds r4, r0, #0	@ 000d4d22 041c
.org 0xd4d24
	ldr r5, [r4, #124]	@ 000d4d24 e56f
.org 0xd4d26
	bl 0x1cc9c	@ 000d4d26 47f7b9ff
.org 0xd4d2a
	ldrb r1, [r4, #10]	@ 000d4d2a a17a
.org 0xd4d2c
	movs r0, #1	@ 000d4d2c 0120
.org 0xd4d2e
	movs r6, #0	@ 000d4d2e 0026
.org 0xd4d30
	orrs r0, r1	@ 000d4d30 0843
.org 0xd4d32
	movs r1, #2	@ 000d4d32 0221
.org 0xd4d34
	orrs r0, r1	@ 000d4d34 0843
.org 0xd4d36
	strb r0, [r4, #10]	@ 000d4d36 a072
.org 0xd4d38
	ldrh r1, [r5, #0]	@ 000d4d38 2988
.org 0xd4d3a
	adds r0, r4, #0	@ 000d4d3a 201c
.org 0xd4d3c
	bl 0x1cf00	@ 000d4d3c 48f7e0f8
.org 0xd4d40
	adds r0, r4, #0	@ 000d4d40 201c
.org 0xd4d42
	bl 0x1cff0	@ 000d4d42 48f755f9
.org 0xd4d46
	adds r0, r4, #0	@ 000d4d46 201c
.org 0xd4d48
	adds r0, #120	@ 000d4d48 7830
.org 0xd4d4a
	ldrb r2, [r0, #0]	@ 000d4d4a 0278
.org 0xd4d4c
	cmp r2, #0	@ 000d4d4c 002a
.org 0xd4d4e
	beq.n 0xd4d58	@ 000d4d4e 03d0
.org 0xd4d50
	ldrb r0, [r4, #10]	@ 000d4d50 a07a
.org 0xd4d52
	movs r1, #16	@ 000d4d52 1021
.org 0xd4d54
	orrs r0, r1	@ 000d4d54 0843
.org 0xd4d56
	b.n 0xd4d5e	@ 000d4d56 02e0
.org 0xd4d58
	ldrb r1, [r4, #10]	@ 000d4d58 a17a
.org 0xd4d5a
	movs r0, #239	@ 000d4d5a ef20
.org 0xd4d5c
	ands r0, r1	@ 000d4d5c 0840
.org 0xd4d5e
	strb r0, [r4, #10]	@ 000d4d5e a072
.org 0xd4d60
	movs r1, #1	@ 000d4d60 0121
.org 0xd4d62
	ands r1, r2	@ 000d4d62 1140
.org 0xd4d64
	adds r0, r4, #0	@ 000d4d64 201c
.org 0xd4d66
	adds r0, #76	@ 000d4d66 4c30
.org 0xd4d68
	strb r1, [r0, #0]	@ 000d4d68 0170
.org 0xd4d6a
	adds r3, r4, #0	@ 000d4d6a 231c
.org 0xd4d6c
	adds r3, #74	@ 000d4d6c 4a33
.org 0xd4d6e
	lsls r1, r1, #4	@ 000d4d6e 0901
.org 0xd4d70
	ldrb r2, [r3, #0]	@ 000d4d70 1a78
.org 0xd4d72
	movs r0, #17	@ 000d4d72 1120
.org 0xd4d74
	negs r0, r0	@ 000d4d74 4042
.org 0xd4d76
	ands r0, r2	@ 000d4d76 1040
.org 0xd4d78
	orrs r0, r1	@ 000d4d78 0843
.org 0xd4d7a
	strb r0, [r3, #0]	@ 000d4d7a 1870
.org 0xd4d7c
	adds r0, r4, #0	@ 000d4d7c 201c
.org 0xd4d7e
	adds r0, #122	@ 000d4d7e 7a30
.org 0xd4d80
	ldrb r2, [r0, #0]	@ 000d4d80 0278
.org 0xd4d82
	cmp r2, #0	@ 000d4d82 002a
.org 0xd4d84
	beq.n 0xd4d8e	@ 000d4d84 03d0
.org 0xd4d86
	ldrb r0, [r4, #10]	@ 000d4d86 a07a
.org 0xd4d88
	movs r1, #32	@ 000d4d88 2021
.org 0xd4d8a
	orrs r0, r1	@ 000d4d8a 0843
.org 0xd4d8c
	b.n 0xd4d94	@ 000d4d8c 02e0
.org 0xd4d8e
	ldrb r1, [r4, #10]	@ 000d4d8e a17a
.org 0xd4d90
	movs r0, #223	@ 000d4d90 df20
.org 0xd4d92
	ands r0, r1	@ 000d4d92 0840
.org 0xd4d94
	strb r0, [r4, #10]	@ 000d4d94 a072
.org 0xd4d96
	movs r1, #1	@ 000d4d96 0121
.org 0xd4d98
	ands r1, r2	@ 000d4d98 1140
.org 0xd4d9a
	adds r0, r4, #0	@ 000d4d9a 201c
.org 0xd4d9c
	adds r0, #77	@ 000d4d9c 4d30
.org 0xd4d9e
	strb r1, [r0, #0]	@ 000d4d9e 0170
.org 0xd4da0
	lsls r1, r1, #5	@ 000d4da0 4901
.org 0xd4da2
	ldrb r2, [r3, #0]	@ 000d4da2 1a78
.org 0xd4da4
	movs r0, #33	@ 000d4da4 2120
.org 0xd4da6
	negs r0, r0	@ 000d4da6 4042
.org 0xd4da8
	ands r0, r2	@ 000d4da8 1040
.org 0xd4daa
	orrs r0, r1	@ 000d4daa 0843
.org 0xd4dac
	strb r0, [r3, #0]	@ 000d4dac 1870
.org 0xd4dae
	adds r0, r4, #0	@ 000d4dae 201c
.org 0xd4db0
	adds r0, #120	@ 000d4db0 7830
.org 0xd4db2
	ldrb r0, [r0, #0]	@ 000d4db2 0078
.org 0xd4db4
	cmp r0, #0	@ 000d4db4 0028
.org 0xd4db6
	beq.n 0xd4dc2	@ 000d4db6 04d0
.org 0xd4db8
	movs r0, #4	@ 000d4db8 0420
.org 0xd4dba
	ldrsh r1, [r5, r0]	@ 000d4dba 295e
.org 0xd4dbc
	ldr r0, [r4, #84]	@ 000d4dbc 606d
.org 0xd4dbe
	subs r0, r0, r1	@ 000d4dbe 401a
.org 0xd4dc0
	b.n 0xd4dca	@ 000d4dc0 03e0
.org 0xd4dc2
	movs r3, #4	@ 000d4dc2 0423
.org 0xd4dc4
	ldrsh r1, [r5, r3]	@ 000d4dc4 e95e
.org 0xd4dc6
	ldr r0, [r4, #84]	@ 000d4dc6 606d
.org 0xd4dc8
	adds r0, r0, r1	@ 000d4dc8 4018
.org 0xd4dca
	str r0, [r4, #84]	@ 000d4dca 6065
.org 0xd4dcc
	adds r0, r4, #0	@ 000d4dcc 201c
.org 0xd4dce
	adds r0, #121	@ 000d4dce 7930
.org 0xd4dd0
	ldrb r0, [r0, #0]	@ 000d4dd0 0078
.org 0xd4dd2
	cmp r0, #0	@ 000d4dd2 0028
.org 0xd4dd4
	beq.n 0xd4e10	@ 000d4dd4 1cd0
.org 0xd4dd6
	movs r6, #8	@ 000d4dd6 0826
.org 0xd4dd8
	ldrsh r2, [r5, r6]	@ 000d4dd8 aa5f
.org 0xd4dda
	negs r2, r2	@ 000d4dda 5242
.org 0xd4ddc
	ldr r3, [pc, #36]	@ 000d4ddc 094b
.org 0xd4dde
	ldr r1, [r3, #0]	@ 000d4dde 1968
.org 0xd4de0
	ldr r0, [pc, #36]	@ 000d4de0 0948
.org 0xd4de2
	muls r0, r1	@ 000d4de2 4843
.org 0xd4de4
	ldr r1, [pc, #36]	@ 000d4de4 0949
.org 0xd4de6
	adds r0, r0, r1	@ 000d4de6 4018
.org 0xd4de8
	lsls r0, r0, #1	@ 000d4de8 4000
.org 0xd4dea
	lsrs r1, r0, #1	@ 000d4dea 4108
.org 0xd4dec
	str r1, [r3, #0]	@ 000d4dec 1960
.org 0xd4dee
	lsrs r0, r0, #17	@ 000d4dee 400c
.org 0xd4df0
	movs r6, #12	@ 000d4df0 0c26
.org 0xd4df2
	ldrsh r1, [r5, r6]	@ 000d4df2 a95f
.org 0xd4df4
	ands r0, r1	@ 000d4df4 0840
.org 0xd4df6
	subs r2, r2, r0	@ 000d4df6 121a
.org 0xd4df8
	str r2, [r4, #92]	@ 000d4df8 e265
.org 0xd4dfa
	movs r1, #16	@ 000d4dfa 1021
.org 0xd4dfc
	ldrsh r0, [r5, r1]	@ 000d4dfc 685e
.org 0xd4dfe
	negs r0, r0	@ 000d4dfe 4042
.org 0xd4e00
	b.n 0xd4e36	@ 000d4e00 19e0
.org 0xd4e02
	.byte 0x00	@ 000d4e02 data
.org 0xd4e03
	.byte 0x00	@ 000d4e03 data
.org 0xd4e04
	.byte 0x38,0xdc,0x02,0x02	@ 000d4e04 data
.org 0xd4e08
	.byte 0xfd,0x43,0x03,0x00	@ 000d4e08 data
.org 0xd4e0c
	.byte 0xc3,0x9e,0x26,0x00	@ 000d4e0c data
.org 0xd4e10
	movs r3, #8	@ 000d4e10 0823
.org 0xd4e12
	ldrsh r2, [r5, r3]	@ 000d4e12 ea5e
.org 0xd4e14
	ldr r3, [pc, #132]	@ 000d4e14 214b
.org 0xd4e16
	ldr r1, [r3, #0]	@ 000d4e16 1968
.org 0xd4e18
	ldr r0, [pc, #132]	@ 000d4e18 2148
.org 0xd4e1a
	muls r0, r1	@ 000d4e1a 4843
.org 0xd4e1c
	ldr r6, [pc, #132]	@ 000d4e1c 214e
.org 0xd4e1e
	adds r0, r0, r6	@ 000d4e1e 8019
.org 0xd4e20
	lsls r0, r0, #1	@ 000d4e20 4000
.org 0xd4e22
	lsrs r1, r0, #1	@ 000d4e22 4108
.org 0xd4e24
	str r1, [r3, #0]	@ 000d4e24 1960
.org 0xd4e26
	lsrs r0, r0, #17	@ 000d4e26 400c
.org 0xd4e28
	movs r6, #12	@ 000d4e28 0c26
.org 0xd4e2a
	ldrsh r1, [r5, r6]	@ 000d4e2a a95f
.org 0xd4e2c
	ands r0, r1	@ 000d4e2c 0840
.org 0xd4e2e
	adds r2, r2, r0	@ 000d4e2e 1218
.org 0xd4e30
	str r2, [r4, #92]	@ 000d4e30 e265
.org 0xd4e32
	movs r1, #16	@ 000d4e32 1021
.org 0xd4e34
	ldrsh r0, [r5, r1]	@ 000d4e34 685e
.org 0xd4e36
	str r0, [r4, #100]	@ 000d4e36 6066
.org 0xd4e38
	movs r6, #6	@ 000d4e38 0626
.org 0xd4e3a
	ldrsh r1, [r5, r6]	@ 000d4e3a a95f
.org 0xd4e3c
	ldr r0, [r4, #88]	@ 000d4e3c a06d
.org 0xd4e3e
	adds r0, r0, r1	@ 000d4e3e 4018
.org 0xd4e40
	str r0, [r4, #88]	@ 000d4e40 a065
.org 0xd4e42
	movs r0, #10	@ 000d4e42 0a20
.org 0xd4e44
	ldrsh r2, [r5, r0]	@ 000d4e44 2a5e
.org 0xd4e46
	ldr r1, [r3, #0]	@ 000d4e46 1968
.org 0xd4e48
	ldr r0, [pc, #84]	@ 000d4e48 1548
.org 0xd4e4a
	muls r0, r1	@ 000d4e4a 4843
.org 0xd4e4c
	ldr r1, [pc, #84]	@ 000d4e4c 1549
.org 0xd4e4e
	adds r0, r0, r1	@ 000d4e4e 4018
.org 0xd4e50
	lsls r0, r0, #1	@ 000d4e50 4000
.org 0xd4e52
	lsrs r1, r0, #1	@ 000d4e52 4108
.org 0xd4e54
	str r1, [r3, #0]	@ 000d4e54 1960
.org 0xd4e56
	lsrs r0, r0, #17	@ 000d4e56 400c
.org 0xd4e58
	movs r3, #14	@ 000d4e58 0e23
.org 0xd4e5a
	ldrsh r1, [r5, r3]	@ 000d4e5a e95e
.org 0xd4e5c
	ands r0, r1	@ 000d4e5c 0840
.org 0xd4e5e
	adds r2, r2, r0	@ 000d4e5e 1218
.org 0xd4e60
	str r2, [r4, #96]	@ 000d4e60 2266
.org 0xd4e62
	movs r6, #18	@ 000d4e62 1226
.org 0xd4e64
	ldrsh r0, [r5, r6]	@ 000d4e64 a85f
.org 0xd4e66
	str r0, [r4, #104]	@ 000d4e66 a066
.org 0xd4e68
	ldrh r1, [r5, #20]	@ 000d4e68 a98a
.org 0xd4e6a
	adds r0, r4, #0	@ 000d4e6a 201c
.org 0xd4e6c
	adds r0, #116	@ 000d4e6c 7430
.org 0xd4e6e
	strh r1, [r0, #0]	@ 000d4e6e 0180
.org 0xd4e70
	ldrh r0, [r5, #22]	@ 000d4e70 e88a
.org 0xd4e72
	adds r1, r4, #0	@ 000d4e72 211c
.org 0xd4e74
	adds r1, #118	@ 000d4e74 7631
.org 0xd4e76
	strh r0, [r1, #0]	@ 000d4e76 0880
.org 0xd4e78
	ldrb r0, [r5, #2]	@ 000d4e78 a878
.org 0xd4e7a
	strb r0, [r4, #18]	@ 000d4e7a a074
.org 0xd4e7c
	ldr r1, [pc, #40]	@ 000d4e7c 0a49
.org 0xd4e7e
	ldrb r0, [r4, #9]	@ 000d4e7e 607a
.org 0xd4e80
	lsls r0, r0, #2	@ 000d4e80 8000
.org 0xd4e82
	adds r0, r0, r1	@ 000d4e82 4018
.org 0xd4e84
	movs r1, #1	@ 000d4e84 0121
.org 0xd4e86
	str r1, [r4, #12]	@ 000d4e86 e160
.org 0xd4e88
	ldr r0, [r0, #0]	@ 000d4e88 0068
.org 0xd4e8a
	ldr r0, [r0, #4]	@ 000d4e8a 4068

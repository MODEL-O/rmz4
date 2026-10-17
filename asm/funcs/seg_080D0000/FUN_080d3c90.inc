@ FUN_080d3c90  entry 0x080d3c90  size 440
.thumb
.org 0xd3c90
FUN_080d3c90:
	push {r4, r5, r6, r7, lr}	@ 000d3c90 f0b5
.org 0xd3c92
	sub sp, #4	@ 000d3c92 81b0
.org 0xd3c94
	adds r4, r0, #0	@ 000d3c94 041c
.org 0xd3c96
	ldr r6, [r4, #40]	@ 000d3c96 a66a
.org 0xd3c98
	bl 0x1cff0	@ 000d3c98 49f7aaf9
.org 0xd3c9c
	adds r0, r6, #0	@ 000d3c9c 301c
.org 0xd3c9e
	adds r0, #140	@ 000d3c9e 8c30
.org 0xd3ca0
	ldr r0, [r0, #0]	@ 000d3ca0 0068
.org 0xd3ca2
	movs r1, #128	@ 000d3ca2 8021
.org 0xd3ca4
	lsls r1, r1, #2	@ 000d3ca4 8900
.org 0xd3ca6
	ands r0, r1	@ 000d3ca6 0840
.org 0xd3ca8
	cmp r0, #0	@ 000d3ca8 0028
.org 0xd3caa
	bne.n 0xd3cb8	@ 000d3caa 05d1
.org 0xd3cac
	adds r0, r6, #0	@ 000d3cac 301c
.org 0xd3cae
	adds r0, #164	@ 000d3cae a430
.org 0xd3cb0
	movs r1, #0	@ 000d3cb0 0021
.org 0xd3cb2
	ldrsh r0, [r0, r1]	@ 000d3cb2 405e
.org 0xd3cb4
	cmp r0, #0	@ 000d3cb4 0028
.org 0xd3cb6
	bne.n 0xd3cd8	@ 000d3cb6 0fd1
.org 0xd3cb8
	ldr r1, [pc, #24]	@ 000d3cb8 0649
.org 0xd3cba
	ldrb r0, [r4, #9]	@ 000d3cba 607a
.org 0xd3cbc
	lsls r0, r0, #2	@ 000d3cbc 8000
.org 0xd3cbe
	adds r0, r0, r1	@ 000d3cbe 4018
.org 0xd3cc0
	movs r1, #2	@ 000d3cc0 0221
.org 0xd3cc2
	str r1, [r4, #12]	@ 000d3cc2 e160
.org 0xd3cc4
	ldr r0, [r0, #0]	@ 000d3cc4 0068
.org 0xd3cc6
	ldr r0, [r0, #8]	@ 000d3cc6 8068
.org 0xd3cc8
	str r0, [r4, #20]	@ 000d3cc8 6061
.org 0xd3cca
	adds r0, r4, #0	@ 000d3cca 201c
.org 0xd3ccc
	bl 0xd3e6c	@ 000d3ccc 00f0cef8
.org 0xd3cd0
	b.n 0xd3e5a	@ 000d3cd0 c3e0
.org 0xd3cd2
	.byte 0x00	@ 000d3cd2 data
.org 0xd3cd3
	.byte 0x00	@ 000d3cd3 data
.org 0xd3cd4
	.byte 0x64,0x6f,0x86,0x08	@ 000d3cd4 data
.org 0xd3cd8
	ldr r0, [r4, #84]	@ 000d3cd8 606d
.org 0xd3cda
	str r0, [r4, #124]	@ 000d3cda e067
.org 0xd3cdc
	ldrb r0, [r4, #13]	@ 000d3cdc 607b
.org 0xd3cde
	cmp r0, #0	@ 000d3cde 0028
.org 0xd3ce0
	bne.n 0xd3d1c	@ 000d3ce0 1cd1
.org 0xd3ce2
	ldrb r1, [r4, #10]	@ 000d3ce2 a17a
.org 0xd3ce4
	movs r0, #32	@ 000d3ce4 2020
.org 0xd3ce6
	ands r0, r1	@ 000d3ce6 0840
.org 0xd3ce8
	cmp r0, #0	@ 000d3ce8 0028
.org 0xd3cea
	bne.n 0xd3d08	@ 000d3cea 0dd1
.org 0xd3cec
	adds r0, r4, #0	@ 000d3cec 201c
.org 0xd3cee
	adds r0, #113	@ 000d3cee 7130
.org 0xd3cf0
	ldrb r0, [r0, #0]	@ 000d3cf0 0078
.org 0xd3cf2
	lsls r0, r0, #24	@ 000d3cf2 0006
.org 0xd3cf4
	asrs r0, r0, #24	@ 000d3cf4 0016
.org 0xd3cf6
	cmp r0, #1	@ 000d3cf6 0128
.org 0xd3cf8
	bgt.n 0xd3d08	@ 000d3cf8 06dc
.org 0xd3cfa
	movs r0, #161	@ 000d3cfa a120
.org 0xd3cfc
	lsls r0, r0, #1	@ 000d3cfc 4000
.org 0xd3cfe
	adds r2, r6, r0	@ 000d3cfe 3218
.org 0xd3d00
	ldrb r0, [r2, #0]	@ 000d3d00 1078
.org 0xd3d02
	movs r1, #8	@ 000d3d02 0821
.org 0xd3d04
	orrs r0, r1	@ 000d3d04 0843
.org 0xd3d06
	strb r0, [r2, #0]	@ 000d3d06 1070
.org 0xd3d08
	adds r0, r4, #0	@ 000d3d08 201c
.org 0xd3d0a
	adds r0, #115	@ 000d3d0a 7330
.org 0xd3d0c
	ldrb r0, [r0, #0]	@ 000d3d0c 0078
.org 0xd3d0e
	cmp r0, #3	@ 000d3d0e 0328
.org 0xd3d10
	beq.n 0xd3d14	@ 000d3d10 00d0
.org 0xd3d12
	b.n 0xd3e5a	@ 000d3d12 a2e0
.org 0xd3d14
	ldrb r0, [r4, #13]	@ 000d3d14 607b
.org 0xd3d16
	adds r0, #1	@ 000d3d16 0130
.org 0xd3d18
	strb r0, [r4, #13]	@ 000d3d18 6073
.org 0xd3d1a
	b.n 0xd3e5a	@ 000d3d1a 9ee0
.org 0xd3d1c
	ldr r0, [r6, #84]	@ 000d3d1c 706d
.org 0xd3d1e
	str r0, [r4, #84]	@ 000d3d1e 6065
.org 0xd3d20
	ldr r2, [pc, #24]	@ 000d3d20 064a
.org 0xd3d22
	movs r1, #232	@ 000d3d22 e821
.org 0xd3d24
	lsls r1, r1, #1	@ 000d3d24 4900
.org 0xd3d26
	adds r0, r2, r1	@ 000d3d26 5018
.org 0xd3d28
	ldrh r1, [r0, #0]	@ 000d3d28 0188
.org 0xd3d2a
	movs r0, #127	@ 000d3d2a 7f20
.org 0xd3d2c
	ands r0, r1	@ 000d3d2c 0840
.org 0xd3d2e
	cmp r0, #2	@ 000d3d2e 0228
.org 0xd3d30
	bne.n 0xd3d40	@ 000d3d30 06d1
.org 0xd3d32
	adds r0, r6, #0	@ 000d3d32 301c
.org 0xd3d34
	adds r0, #84	@ 000d3d34 5430
.org 0xd3d36
	bl 0x7b84	@ 000d3d36 33f725ff
.org 0xd3d3a
	b.n 0xd3d46	@ 000d3d3a 04e0
.org 0xd3d3c
	.byte 0xb0,0x0a,0x00,0x02	@ 000d3d3c data
.org 0xd3d40
	ldr r1, [pc, #20]	@ 000d3d40 0549
.org 0xd3d42
	adds r0, r2, r1	@ 000d3d42 5018
.org 0xd3d44
	ldr r0, [r0, #0]	@ 000d3d44 0068
.org 0xd3d46
	str r0, [r4, #88]	@ 000d3d46 a065
.org 0xd3d48
	ldrb r0, [r4, #13]	@ 000d3d48 607b
.org 0xd3d4a
	cmp r0, #2	@ 000d3d4a 0228
.org 0xd3d4c
	beq.n 0xd3d98	@ 000d3d4c 24d0
.org 0xd3d4e
	cmp r0, #2	@ 000d3d4e 0228
.org 0xd3d50
	bgt.n 0xd3d5c	@ 000d3d50 04dc
.org 0xd3d52
	cmp r0, #1	@ 000d3d52 0128
.org 0xd3d54
	beq.n 0xd3d66	@ 000d3d54 07d0
.org 0xd3d56
	b.n 0xd3dc6	@ 000d3d56 36e0
.org 0xd3d58
	.byte 0x0c,0xc0,0x02,0x00	@ 000d3d58 data
.org 0xd3d5c
	cmp r0, #3	@ 000d3d5c 0328
.org 0xd3d5e
	beq.n 0xd3da6	@ 000d3d5e 22d0
.org 0xd3d60
	cmp r0, #4	@ 000d3d60 0428
.org 0xd3d62
	beq.n 0xd3dba	@ 000d3d62 2ad0
.org 0xd3d64
	b.n 0xd3dc6	@ 000d3d64 2fe0
.org 0xd3d66
	adds r0, r4, #0	@ 000d3d66 201c
.org 0xd3d68
	movs r1, #20	@ 000d3d68 1421
.org 0xd3d6a
	bl 0x1cf00	@ 000d3d6a 49f7c9f8
.org 0xd3d6e
	adds r0, r4, #0	@ 000d3d6e 201c
.org 0xd3d70
	bl 0x1cff0	@ 000d3d70 49f73ef9
.org 0xd3d74
	movs r2, #0	@ 000d3d74 0022
.org 0xd3d76
	ldrb r1, [r4, #10]	@ 000d3d76 a17a
.org 0xd3d78
	movs r0, #223	@ 000d3d78 df20
.org 0xd3d7a
	ands r0, r1	@ 000d3d7a 0840
.org 0xd3d7c
	strb r0, [r4, #10]	@ 000d3d7c a072
.org 0xd3d7e
	adds r0, r4, #0	@ 000d3d7e 201c
.org 0xd3d80
	adds r0, #77	@ 000d3d80 4d30
.org 0xd3d82
	strb r2, [r0, #0]	@ 000d3d82 0270
.org 0xd3d84
	adds r2, r4, #0	@ 000d3d84 221c
.org 0xd3d86
	adds r2, #74	@ 000d3d86 4a32
.org 0xd3d88
	ldrb r1, [r2, #0]	@ 000d3d88 1178
.org 0xd3d8a
	movs r0, #33	@ 000d3d8a 2120
.org 0xd3d8c
	negs r0, r0	@ 000d3d8c 4042
.org 0xd3d8e
	ands r0, r1	@ 000d3d8e 0840
.org 0xd3d90
	strb r0, [r2, #0]	@ 000d3d90 1070
.org 0xd3d92
	ldrb r0, [r4, #13]	@ 000d3d92 607b
.org 0xd3d94
	adds r0, #1	@ 000d3d94 0130
.org 0xd3d96
	strb r0, [r4, #13]	@ 000d3d96 6073
.org 0xd3d98
	ldr r1, [r4, #124]	@ 000d3d98 e16f
.org 0xd3d9a
	ldr r0, [r4, #84]	@ 000d3d9a 606d
.org 0xd3d9c
	cmp r1, r0	@ 000d3d9c 8142
.org 0xd3d9e
	beq.n 0xd3dc6	@ 000d3d9e 12d0
.org 0xd3da0
	ldrb r0, [r4, #13]	@ 000d3da0 607b
.org 0xd3da2
	adds r0, #1	@ 000d3da2 0130
.org 0xd3da4
	b.n 0xd3dc4	@ 000d3da4 0ee0
.org 0xd3da6
	adds r0, r4, #0	@ 000d3da6 201c
.org 0xd3da8
	movs r1, #21	@ 000d3da8 1521
.org 0xd3daa
	bl 0x1cf00	@ 000d3daa 49f7a9f8
.org 0xd3dae
	adds r0, r4, #0	@ 000d3dae 201c
.org 0xd3db0
	bl 0x1cff0	@ 000d3db0 49f71ef9
.org 0xd3db4
	ldrb r0, [r4, #13]	@ 000d3db4 607b
.org 0xd3db6
	adds r0, #1	@ 000d3db6 0130
.org 0xd3db8
	strb r0, [r4, #13]	@ 000d3db8 6073
.org 0xd3dba
	ldr r1, [r4, #124]	@ 000d3dba e16f
.org 0xd3dbc
	ldr r0, [r4, #84]	@ 000d3dbc 606d
.org 0xd3dbe
	cmp r1, r0	@ 000d3dbe 8142
.org 0xd3dc0
	bne.n 0xd3dc6	@ 000d3dc0 01d1
.org 0xd3dc2
	movs r0, #1	@ 000d3dc2 0120
.org 0xd3dc4
	strb r0, [r4, #13]	@ 000d3dc4 6073
.org 0xd3dc6
	ldr r1, [pc, #60]	@ 000d3dc6 0f49
.org 0xd3dc8
	movs r2, #186	@ 000d3dc8 ba22
.org 0xd3dca
	lsls r2, r2, #1	@ 000d3dca 5200
.org 0xd3dcc
	adds r0, r6, r2	@ 000d3dcc b018
.org 0xd3dce
	ldrb r0, [r0, #0]	@ 000d3dce 0078
.org 0xd3dd0
	lsls r0, r0, #3	@ 000d3dd0 c000
.org 0xd3dd2
	adds r0, r0, r1	@ 000d3dd2 4018
.org 0xd3dd4
	movs r1, #6	@ 000d3dd4 0621
.org 0xd3dd6
	ldrsh r0, [r0, r1]	@ 000d3dd6 405e
.org 0xd3dd8
	ldr r3, [r6, #88]	@ 000d3dd8 b36d
.org 0xd3dda
	subs r7, r3, r0	@ 000d3dda 1f1a
.org 0xd3ddc
	ldr r2, [pc, #40]	@ 000d3ddc 0a4a
.org 0xd3dde
	movs r1, #232	@ 000d3dde e821
.org 0xd3de0
	lsls r1, r1, #1	@ 000d3de0 4900
.org 0xd3de2
	adds r0, r2, r1	@ 000d3de2 5018
.org 0xd3de4
	ldrh r1, [r0, #0]	@ 000d3de4 0188
.org 0xd3de6
	movs r0, #127	@ 000d3de6 7f20
.org 0xd3de8
	ands r0, r1	@ 000d3de8 0840
.org 0xd3dea
	adds r5, r3, #0	@ 000d3dea 1d1c
.org 0xd3dec
	cmp r0, #2	@ 000d3dec 0228
.org 0xd3dee
	bne.n 0xd3e0c	@ 000d3dee 0dd1
.org 0xd3df0
	adds r0, r6, #0	@ 000d3df0 301c
.org 0xd3df2
	adds r0, #84	@ 000d3df2 5430
.org 0xd3df4
	str r2, [sp, #0]	@ 000d3df4 0092
.org 0xd3df6
	bl 0x7b84	@ 000d3df6 33f7c5fe
.org 0xd3dfa
	ldr r2, [sp, #0]	@ 000d3dfa 009a
.org 0xd3dfc
	cmp r7, r0	@ 000d3dfc 8742
.org 0xd3dfe
	bgt.n 0xd3e42	@ 000d3dfe 20dc
.org 0xd3e00
	ldr r5, [r6, #88]	@ 000d3e00 b56d
.org 0xd3e02
	b.n 0xd3e16	@ 000d3e02 08e0
.org 0xd3e04
	.byte 0x6c,0x33,0x85,0x08	@ 000d3e04 data
.org 0xd3e08
	.byte 0xb0,0x0a,0x00,0x02	@ 000d3e08 data
.org 0xd3e0c
	ldr r1, [pc, #36]	@ 000d3e0c 0949
.org 0xd3e0e
	adds r0, r2, r1	@ 000d3e0e 5018
.org 0xd3e10
	ldr r0, [r0, #0]	@ 000d3e10 0068
.org 0xd3e12
	cmp r7, r0	@ 000d3e12 8742
.org 0xd3e14
	bgt.n 0xd3e42	@ 000d3e14 15dc
.org 0xd3e16
	movs r1, #232	@ 000d3e16 e821
.org 0xd3e18
	lsls r1, r1, #1	@ 000d3e18 4900
.org 0xd3e1a
	adds r0, r2, r1	@ 000d3e1a 5018
.org 0xd3e1c
	ldrh r1, [r0, #0]	@ 000d3e1c 0188
.org 0xd3e1e
	movs r0, #127	@ 000d3e1e 7f20
.org 0xd3e20
	ands r0, r1	@ 000d3e20 0840
.org 0xd3e22
	cmp r0, #2	@ 000d3e22 0228
.org 0xd3e24
	bne.n 0xd3e38	@ 000d3e24 08d1
.org 0xd3e26
	adds r0, r6, #0	@ 000d3e26 301c
.org 0xd3e28
	adds r0, #84	@ 000d3e28 5430
.org 0xd3e2a
	bl 0x7b84	@ 000d3e2a 33f7abfe
.org 0xd3e2e
	cmp r5, r0	@ 000d3e2e 8542
.org 0xd3e30
	blt.n 0xd3e42	@ 000d3e30 07db
.org 0xd3e32
	b.n 0xd3e5a	@ 000d3e32 12e0
.org 0xd3e34
	.byte 0x0c,0xc0,0x02,0x00	@ 000d3e34 data
.org 0xd3e38
	ldr r1, [pc, #40]	@ 000d3e38 0a49
.org 0xd3e3a
	adds r0, r2, r1	@ 000d3e3a 5018
.org 0xd3e3c
	ldr r0, [r0, #0]	@ 000d3e3c 0068
.org 0xd3e3e
	cmp r5, r0	@ 000d3e3e 8542
.org 0xd3e40
	bge.n 0xd3e5a	@ 000d3e40 0bda
.org 0xd3e42
	ldr r1, [pc, #36]	@ 000d3e42 0949
.org 0xd3e44
	ldrb r0, [r4, #9]	@ 000d3e44 607a
.org 0xd3e46
	lsls r0, r0, #2	@ 000d3e46 8000

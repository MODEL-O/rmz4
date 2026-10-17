@ FUN_08033e2c  entry 0x08033e2c  size 246
.thumb
.org 0x33e2c
FUN_08033e2c:
	push {r4, r5, r6, lr}	@ 00033e2c 70b5
.org 0x33e2e
	adds r4, r0, #0	@ 00033e2e 041c
.org 0x33e30
	movs r6, #0	@ 00033e30 0026
.org 0x33e32
	adds r0, #180	@ 00033e32 b430
.org 0x33e34
	ldrb r0, [r0, #12]	@ 00033e34 007b
.org 0x33e36
	cmp r0, #2	@ 00033e36 0228
.org 0x33e38
	bne.n 0x33e40	@ 00033e38 02d1
.org 0x33e3a
	adds r0, r4, #0	@ 00033e3a 201c
.org 0x33e3c
	movs r1, #0	@ 00033e3c 0021
.org 0x33e3e
	b.n 0x33e44	@ 00033e3e 01e0
.org 0x33e40
	adds r0, r4, #0	@ 00033e40 201c
.org 0x33e42
	movs r1, #1	@ 00033e42 0121
.org 0x33e44
	bl 0x3a428	@ 00033e44 06f0f0fa
.org 0x33e48
	lsls r0, r0, #24	@ 00033e48 0006
.org 0x33e4a
	lsrs r0, r0, #24	@ 00033e4a 000e
.org 0x33e4c
	cmp r0, #2	@ 00033e4c 0228
.org 0x33e4e
	bne.n 0x33e52	@ 00033e4e 00d1
.org 0x33e50
	movs r6, #1	@ 00033e50 0126
.org 0x33e52
	movs r1, #150	@ 00033e52 9621
.org 0x33e54
	lsls r1, r1, #2	@ 00033e54 8900
.org 0x33e56
	adds r0, r4, r1	@ 00033e56 6018
.org 0x33e58
	ldr r1, [r0, #0]	@ 00033e58 0168
.org 0x33e5a
	movs r0, #64	@ 00033e5a 4020
.org 0x33e5c
	ands r0, r1	@ 00033e5c 0840
.org 0x33e5e
	cmp r0, #0	@ 00033e5e 0028
.org 0x33e60
	beq.n 0x33eac	@ 00033e60 24d0
.org 0x33e62
	movs r0, #48	@ 00033e62 3020
.org 0x33e64
	ands r1, r0	@ 00033e64 0140
.org 0x33e66
	cmp r1, #0	@ 00033e66 0029
.org 0x33e68
	beq.n 0x33e8c	@ 00033e68 10d0
.org 0x33e6a
	ldr r1, [pc, #24]	@ 00033e6a 0649
.org 0x33e6c
	adds r0, r4, #0	@ 00033e6c 201c
.org 0x33e6e
	bl 0x1cf00	@ 00033e6e e9f747f8
.org 0x33e72
	movs r0, #171	@ 00033e72 ab20
.org 0x33e74
	lsls r0, r0, #1	@ 00033e74 4000
.org 0x33e76
	adds r1, r4, r0	@ 00033e76 2118
.org 0x33e78
	movs r0, #1	@ 00033e78 0120
.org 0x33e7a
	strb r0, [r1, #0]	@ 00033e7a 0870
.org 0x33e7c
	cmp r6, #0	@ 00033e7c 002e
.org 0x33e7e
	bne.n 0x33f0c	@ 00033e7e 45d1
.org 0x33e80
	ldr r1, [pc, #4]	@ 00033e80 0149
.org 0x33e82
	b.n 0x33f02	@ 00033e82 3ee0
.org 0x33e84
	.byte 0x02,0x27,0x00,0x00	@ 00033e84 data
.org 0x33e88
	.byte 0x72,0x02,0x00,0x00	@ 00033e88 data
.org 0x33e8c
	movs r1, #156	@ 00033e8c 9c21
.org 0x33e8e
	lsls r1, r1, #6	@ 00033e8e 8901
.org 0x33e90
	adds r0, r4, #0	@ 00033e90 201c
.org 0x33e92
	bl 0x1cf00	@ 00033e92 e9f735f8
.org 0x33e96
	movs r0, #171	@ 00033e96 ab20
.org 0x33e98
	lsls r0, r0, #1	@ 00033e98 4000
.org 0x33e9a
	adds r1, r4, r0	@ 00033e9a 2118
.org 0x33e9c
	movs r0, #3	@ 00033e9c 0320
.org 0x33e9e
	strb r0, [r1, #0]	@ 00033e9e 0870
.org 0x33ea0
	cmp r6, #0	@ 00033ea0 002e
.org 0x33ea2
	bne.n 0x33f0c	@ 00033ea2 33d1
.org 0x33ea4
	ldr r1, [pc, #0]	@ 00033ea4 0049
.org 0x33ea6
	b.n 0x33f02	@ 00033ea6 2ce0
.org 0x33ea8
	.byte 0x6d,0x02,0x00,0x00	@ 00033ea8 data
.org 0x33eac
	movs r5, #128	@ 00033eac 8025
.org 0x33eae
	ands r5, r1	@ 00033eae 0d40
.org 0x33eb0
	cmp r5, #0	@ 00033eb0 002d
.org 0x33eb2
	beq.n 0x33eec	@ 00033eb2 1bd0
.org 0x33eb4
	ldr r1, [pc, #40]	@ 00033eb4 0a49
.org 0x33eb6
	adds r0, r4, #0	@ 00033eb6 201c
.org 0x33eb8
	bl 0x1cf00	@ 00033eb8 e9f722f8
.org 0x33ebc
	movs r0, #171	@ 00033ebc ab20
.org 0x33ebe
	lsls r0, r0, #1	@ 00033ebe 4000
.org 0x33ec0
	adds r1, r4, r0	@ 00033ec0 2118
.org 0x33ec2
	movs r0, #2	@ 00033ec2 0220
.org 0x33ec4
	strb r0, [r1, #0]	@ 00033ec4 0870
.org 0x33ec6
	cmp r6, #0	@ 00033ec6 002e
.org 0x33ec8
	bne.n 0x33f0c	@ 00033ec8 20d1
.org 0x33eca
	ldr r1, [pc, #24]	@ 00033eca 0649
.org 0x33ecc
	adds r0, r4, r1	@ 00033ecc 6018
.org 0x33ece
	ldrb r0, [r0, #0]	@ 00033ece 0078
.org 0x33ed0
	cmp r0, #3	@ 00033ed0 0328
.org 0x33ed2
	bne.n 0x33ed6	@ 00033ed2 00d1
.org 0x33ed4
	movs r6, #1	@ 00033ed4 0126
.org 0x33ed6
	cmp r6, #0	@ 00033ed6 002e
.org 0x33ed8
	bne.n 0x33f0c	@ 00033ed8 18d1
.org 0x33eda
	ldr r1, [pc, #12]	@ 00033eda 0349
.org 0x33edc
	b.n 0x33f02	@ 00033edc 11e0
.org 0x33ede
	.byte 0x00	@ 00033ede data
.org 0x33edf
	.byte 0x00	@ 00033edf data
.org 0x33ee0
	.byte 0x06,0x27,0x00,0x00	@ 00033ee0 data
.org 0x33ee4
	.byte 0x6f,0x02,0x00,0x00	@ 00033ee4 data
.org 0x33ee8
	.byte 0x75,0x02,0x00,0x00	@ 00033ee8 data
.org 0x33eec
	ldr r1, [pc, #76]	@ 00033eec 1349
.org 0x33eee
	adds r0, r4, #0	@ 00033eee 201c
.org 0x33ef0
	bl 0x1cf00	@ 00033ef0 e9f706f8
.org 0x33ef4
	movs r1, #171	@ 00033ef4 ab21
.org 0x33ef6
	lsls r1, r1, #1	@ 00033ef6 4900
.org 0x33ef8
	adds r0, r4, r1	@ 00033ef8 6018
.org 0x33efa
	strb r5, [r0, #0]	@ 00033efa 0570
.org 0x33efc
	cmp r6, #0	@ 00033efc 002e
.org 0x33efe
	bne.n 0x33f0c	@ 00033efe 05d1
.org 0x33f00
	ldr r1, [pc, #60]	@ 00033f00 0f49
.org 0x33f02
	adds r0, r4, r1	@ 00033f02 6018
.org 0x33f04
	ldrb r0, [r0, #0]	@ 00033f04 0078
.org 0x33f06
	cmp r0, #3	@ 00033f06 0328
.org 0x33f08
	bne.n 0x33f0c	@ 00033f08 00d1
.org 0x33f0a
	movs r6, #1	@ 00033f0a 0126
.org 0x33f0c
	adds r0, r4, #0	@ 00033f0c 201c
.org 0x33f0e
	adds r1, r6, #0	@ 00033f0e 311c
.org 0x33f10
	bl 0x40664	@ 00033f10 0cf0a8fb
.org 0x33f14
	ldr r0, [pc, #44]	@ 00033f14 0b48
.org 0x33f16
	adds r1, r4, r0	@ 00033f16 2118
.org 0x33f18
	movs r0, #14	@ 00033f18 0e20
.org 0x33f1a
	strb r0, [r1, #0]	@ 00033f1a 0870
.org 0x33f1c
	ldr r1, [pc, #40]	@ 00033f1c 0a49
.org 0x33f1e
	adds r2, r4, r1	@ 00033f1e 6218
.org 0x33f20
	ldrb r1, [r2, #0]	@ 00033f20 1178

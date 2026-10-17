@ FUN_080e5bf4  entry 0x080e5bf4  size 288
.thumb
.org 0xe5bf4
FUN_080e5bf4:
	push {r4, r5, r6, r7, lr}	@ 000e5bf4 f0b5
.org 0xe5bf6
	adds r4, r0, #0	@ 000e5bf6 041c
.org 0xe5bf8
	ldr r5, [r4, #40]	@ 000e5bf8 a56a
.org 0xe5bfa
	ldrb r0, [r4, #18]	@ 000e5bfa a07c
.org 0xe5bfc
	subs r0, #1	@ 000e5bfc 0138
.org 0xe5bfe
	strb r0, [r4, #18]	@ 000e5bfe a074
.org 0xe5c00
	ldrb r0, [r5, #12]	@ 000e5c00 287b
.org 0xe5c02
	cmp r0, #1	@ 000e5c02 0128
.org 0xe5c04
	bls.n 0xe5c0a	@ 000e5c04 01d9
.org 0xe5c06
	movs r0, #0	@ 000e5c06 0020
.org 0xe5c08
	strb r0, [r4, #18]	@ 000e5c08 a074
.org 0xe5c0a
	ldrb r1, [r4, #18]	@ 000e5c0a a17c
.org 0xe5c0c
	movs r0, #1	@ 000e5c0c 0120
.org 0xe5c0e
	ands r0, r1	@ 000e5c0e 0840
.org 0xe5c10
	cmp r0, #0	@ 000e5c10 0028
.org 0xe5c12
	beq.n 0xe5c1c	@ 000e5c12 03d0
.org 0xe5c14
	ldrb r0, [r4, #10]	@ 000e5c14 a07a
.org 0xe5c16
	movs r1, #1	@ 000e5c16 0121
.org 0xe5c18
	orrs r0, r1	@ 000e5c18 0843
.org 0xe5c1a
	b.n 0xe5c22	@ 000e5c1a 02e0
.org 0xe5c1c
	ldrb r1, [r4, #10]	@ 000e5c1c a17a
.org 0xe5c1e
	movs r0, #254	@ 000e5c1e fe20
.org 0xe5c20
	ands r0, r1	@ 000e5c20 0840
.org 0xe5c22
	strb r0, [r4, #10]	@ 000e5c22 a072
.org 0xe5c24
	ldrb r3, [r5, #10]	@ 000e5c24 ab7a
.org 0xe5c26
	movs r0, #64	@ 000e5c26 4020
.org 0xe5c28
	ands r0, r3	@ 000e5c28 1840
.org 0xe5c2a
	mov ip, r3	@ 000e5c2a 9c46
.org 0xe5c2c
	cmp r0, #0	@ 000e5c2c 0028
.org 0xe5c2e
	beq.n 0xe5cb0	@ 000e5c2e 3fd0
.org 0xe5c30
	adds r0, r5, #0	@ 000e5c30 281c
.org 0xe5c32
	adds r0, #36	@ 000e5c32 2430
.org 0xe5c34
	ldrb r1, [r0, #0]	@ 000e5c34 0178
.org 0xe5c36
	ldr r2, [pc, #48]	@ 000e5c36 0c4a
.org 0xe5c38
	movs r0, #255	@ 000e5c38 ff20
.org 0xe5c3a
	subs r0, r0, r1	@ 000e5c3a 401a
.org 0xe5c3c
	lsls r0, r0, #24	@ 000e5c3c 0006
.org 0xe5c3e
	lsrs r0, r0, #23	@ 000e5c3e c00d
.org 0xe5c40
	adds r0, r0, r2	@ 000e5c40 8018
.org 0xe5c42
	movs r6, #0	@ 000e5c42 0026
.org 0xe5c44
	ldrsh r7, [r0, r6]	@ 000e5c44 875f
.org 0xe5c46
	movs r0, #63	@ 000e5c46 3f20
.org 0xe5c48
	subs r0, r0, r1	@ 000e5c48 401a
.org 0xe5c4a
	lsls r0, r0, #24	@ 000e5c4a 0006
.org 0xe5c4c
	lsrs r0, r0, #23	@ 000e5c4c c00d
.org 0xe5c4e
	adds r0, r0, r2	@ 000e5c4e 8018
.org 0xe5c50
	movs r1, #0	@ 000e5c50 0021
.org 0xe5c52
	ldrsh r6, [r0, r1]	@ 000e5c52 465e
.org 0xe5c54
	movs r0, #48	@ 000e5c54 3020
.org 0xe5c56
	ands r0, r3	@ 000e5c56 1840
.org 0xe5c58
	lsrs r0, r0, #4	@ 000e5c58 0009
.org 0xe5c5a
	movs r1, #1	@ 000e5c5a 0121
.org 0xe5c5c
	ands r0, r1	@ 000e5c5c 0840
.org 0xe5c5e
	cmp r0, #0	@ 000e5c5e 0028
.org 0xe5c60
	beq.n 0xe5c6c	@ 000e5c60 04d0
.org 0xe5c62
	ldr r0, [r4, #116]	@ 000e5c62 606f
.org 0xe5c64
	negs r3, r0	@ 000e5c64 4342
.org 0xe5c66
	b.n 0xe5c6e	@ 000e5c66 02e0
.org 0xe5c68
	.byte 0x0c,0x93,0x12,0x08	@ 000e5c68 data
.org 0xe5c6c
	ldr r3, [r4, #116]	@ 000e5c6c 636f
.org 0xe5c6e
	movs r0, #48	@ 000e5c6e 3020
.org 0xe5c70
	mov r1, ip	@ 000e5c70 6146
.org 0xe5c72
	ands r0, r1	@ 000e5c72 0840
.org 0xe5c74
	lsrs r0, r0, #4	@ 000e5c74 0009
.org 0xe5c76
	movs r1, #2	@ 000e5c76 0221
.org 0xe5c78
	ands r0, r1	@ 000e5c78 0840
.org 0xe5c7a
	cmp r0, #0	@ 000e5c7a 0028
.org 0xe5c7c
	beq.n 0xe5c84	@ 000e5c7c 02d0
.org 0xe5c7e
	ldr r0, [r4, #120]	@ 000e5c7e a06f
.org 0xe5c80
	negs r2, r0	@ 000e5c80 4242
.org 0xe5c82
	b.n 0xe5c86	@ 000e5c82 00e0
.org 0xe5c84
	ldr r2, [r4, #120]	@ 000e5c84 a26f
.org 0xe5c86
	adds r0, r6, #0	@ 000e5c86 301c
.org 0xe5c88
	muls r0, r3	@ 000e5c88 5843
.org 0xe5c8a
	asrs r0, r0, #8	@ 000e5c8a 0012
.org 0xe5c8c
	ldr r1, [r5, #84]	@ 000e5c8c 696d
.org 0xe5c8e
	adds r1, r1, r0	@ 000e5c8e 0918
.org 0xe5c90
	adds r0, r7, #0	@ 000e5c90 381c
.org 0xe5c92
	muls r0, r2	@ 000e5c92 5043
.org 0xe5c94
	asrs r0, r0, #8	@ 000e5c94 0012
.org 0xe5c96
	adds r1, r1, r0	@ 000e5c96 0918
.org 0xe5c98
	str r1, [r4, #84]	@ 000e5c98 6165
.org 0xe5c9a
	adds r0, r7, #0	@ 000e5c9a 381c
.org 0xe5c9c
	muls r0, r3	@ 000e5c9c 5843
.org 0xe5c9e
	asrs r0, r0, #8	@ 000e5c9e 0012
.org 0xe5ca0
	ldr r1, [r5, #88]	@ 000e5ca0 a96d
.org 0xe5ca2
	subs r1, r1, r0	@ 000e5ca2 091a
.org 0xe5ca4
	adds r0, r6, #0	@ 000e5ca4 301c
.org 0xe5ca6
	muls r0, r2	@ 000e5ca6 5043
.org 0xe5ca8
	asrs r0, r0, #8	@ 000e5ca8 0012
.org 0xe5caa
	adds r1, r1, r0	@ 000e5caa 0918
.org 0xe5cac
	str r1, [r4, #88]	@ 000e5cac a165
.org 0xe5cae
	b.n 0xe5cee	@ 000e5cae 1ee0
.org 0xe5cb0
	movs r0, #48	@ 000e5cb0 3020
.org 0xe5cb2
	ands r0, r3	@ 000e5cb2 1840
.org 0xe5cb4
	lsrs r0, r0, #4	@ 000e5cb4 0009
.org 0xe5cb6
	movs r1, #1	@ 000e5cb6 0121
.org 0xe5cb8
	ands r0, r1	@ 000e5cb8 0840
.org 0xe5cba
	cmp r0, #0	@ 000e5cba 0028
.org 0xe5cbc
	beq.n 0xe5cc6	@ 000e5cbc 03d0
.org 0xe5cbe
	ldr r0, [r5, #84]	@ 000e5cbe 686d
.org 0xe5cc0
	ldr r1, [r4, #116]	@ 000e5cc0 616f
.org 0xe5cc2
	subs r0, r0, r1	@ 000e5cc2 401a
.org 0xe5cc4
	b.n 0xe5ccc	@ 000e5cc4 02e0
.org 0xe5cc6
	ldr r0, [r5, #84]	@ 000e5cc6 686d
.org 0xe5cc8
	ldr r1, [r4, #116]	@ 000e5cc8 616f
.org 0xe5cca
	adds r0, r0, r1	@ 000e5cca 4018
.org 0xe5ccc
	str r0, [r4, #84]	@ 000e5ccc 6065
.org 0xe5cce
	ldrb r0, [r5, #10]	@ 000e5cce a87a
.org 0xe5cd0
	movs r1, #48	@ 000e5cd0 3021
.org 0xe5cd2
	ands r1, r0	@ 000e5cd2 0140
.org 0xe5cd4
	lsrs r1, r1, #4	@ 000e5cd4 0909
.org 0xe5cd6
	movs r0, #2	@ 000e5cd6 0220
.org 0xe5cd8
	ands r1, r0	@ 000e5cd8 0140
.org 0xe5cda
	cmp r1, #0	@ 000e5cda 0029
.org 0xe5cdc
	beq.n 0xe5ce6	@ 000e5cdc 03d0
.org 0xe5cde
	ldr r0, [r5, #88]	@ 000e5cde a86d
.org 0xe5ce0
	ldr r1, [r4, #120]	@ 000e5ce0 a16f
.org 0xe5ce2
	subs r0, r0, r1	@ 000e5ce2 401a
.org 0xe5ce4
	b.n 0xe5cec	@ 000e5ce4 02e0
.org 0xe5ce6
	ldr r0, [r5, #88]	@ 000e5ce6 a86d
.org 0xe5ce8
	ldr r1, [r4, #120]	@ 000e5ce8 a16f
.org 0xe5cea
	adds r0, r0, r1	@ 000e5cea 4018
.org 0xe5cec
	str r0, [r4, #88]	@ 000e5cec a065
.org 0xe5cee
	adds r0, r4, #0	@ 000e5cee 201c
.org 0xe5cf0
	bl 0x1cff0	@ 000e5cf0 37f77ef9
.org 0xe5cf4
	ldrb r0, [r4, #18]	@ 000e5cf4 a07c
.org 0xe5cf6
	cmp r0, #0	@ 000e5cf6 0028
.org 0xe5cf8
	beq.n 0xe5d00	@ 000e5cf8 02d0
.org 0xe5cfa
	ldrb r0, [r5, #12]	@ 000e5cfa 287b
.org 0xe5cfc
	cmp r0, #2	@ 000e5cfc 0228
.org 0xe5cfe
	bls.n 0xe5d12	@ 000e5cfe 08d9
.org 0xe5d00
	ldr r1, [pc, #20]	@ 000e5d00 0549
.org 0xe5d02
	ldrb r0, [r4, #9]	@ 000e5d02 607a
.org 0xe5d04
	lsls r0, r0, #2	@ 000e5d04 8000
.org 0xe5d06
	adds r0, r0, r1	@ 000e5d06 4018
.org 0xe5d08
	movs r1, #2	@ 000e5d08 0221
.org 0xe5d0a
	str r1, [r4, #12]	@ 000e5d0a e160
.org 0xe5d0c
	ldr r0, [r0, #0]	@ 000e5d0c 0068
.org 0xe5d0e
	ldr r0, [r0, #8]	@ 000e5d0e 8068
.org 0xe5d10
	str r0, [r4, #20]	@ 000e5d10 6061
.org 0xe5d12
	pop {r4, r5, r6, r7}	@ 000e5d12 f0bc

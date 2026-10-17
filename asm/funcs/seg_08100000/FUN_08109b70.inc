@ FUN_08109b70  entry 0x08109b70  size 464
.thumb
.org 0x109b70
FUN_08109b70:
	push {r4, r5, r6, r7, lr}	@ 00109b70 f0b5
.org 0x109b72
	mov r7, r8	@ 00109b72 4746
.org 0x109b74
	push {r7}	@ 00109b74 80b4
.org 0x109b76
	adds r6, r0, #0	@ 00109b76 061c
.org 0x109b78
	adds r0, #180	@ 00109b78 b430
.org 0x109b7a
	ldr r7, [r0, #0]	@ 00109b7a 0768
.org 0x109b7c
	adds r0, #4	@ 00109b7c 0430
.org 0x109b7e
	ldr r0, [r0, #0]	@ 00109b7e 0068
.org 0x109b80
	mov r8, r0	@ 00109b80 8046
.org 0x109b82
	adds r0, r6, #0	@ 00109b82 301c
.org 0x109b84
	bl 0x1cc9c	@ 00109b84 13f78af8
.org 0x109b88
	adds r0, r6, #0	@ 00109b88 301c
.org 0x109b8a
	bl 0x1ceec	@ 00109b8a 13f7aff9
.org 0x109b8e
	ldrb r0, [r6, #10]	@ 00109b8e b07a
.org 0x109b90
	movs r4, #1	@ 00109b90 0124
.org 0x109b92
	movs r5, #0	@ 00109b92 0025
.org 0x109b94
	orrs r0, r4	@ 00109b94 2043
.org 0x109b96
	movs r1, #2	@ 00109b96 0221
.org 0x109b98
	orrs r0, r1	@ 00109b98 0843
.org 0x109b9a
	strb r0, [r6, #10]	@ 00109b9a b072
.org 0x109b9c
	adds r1, r6, #0	@ 00109b9c 311c
.org 0x109b9e
	adds r1, #34	@ 00109b9e 2231
.org 0x109ba0
	movs r0, #15	@ 00109ba0 0f20
.org 0x109ba2
	strb r0, [r1, #0]	@ 00109ba2 0870
.org 0x109ba4
	movs r1, #254	@ 00109ba4 fe21
.org 0x109ba6
	lsls r1, r1, #7	@ 00109ba6 c901
.org 0x109ba8
	adds r0, r6, #0	@ 00109ba8 301c
.org 0x109baa
	bl 0x1cf00	@ 00109baa 13f7a9f9
.org 0x109bae
	ldrb r0, [r7, #10]	@ 00109bae b87a
.org 0x109bb0
	lsrs r0, r0, #4	@ 00109bb0 0009
.org 0x109bb2
	ands r0, r4	@ 00109bb2 2040
.org 0x109bb4
	adds r1, r6, #0	@ 00109bb4 311c
.org 0x109bb6
	adds r1, #76	@ 00109bb6 4c31
.org 0x109bb8
	strb r0, [r1, #0]	@ 00109bb8 0870
.org 0x109bba
	ldrb r1, [r7, #10]	@ 00109bba b97a
.org 0x109bbc
	lsrs r1, r1, #4	@ 00109bbc 0909
.org 0x109bbe
	ands r1, r4	@ 00109bbe 2140
.org 0x109bc0
	adds r4, r6, #0	@ 00109bc0 341c
.org 0x109bc2
	adds r4, #74	@ 00109bc2 4a34
.org 0x109bc4
	lsls r3, r1, #4	@ 00109bc4 0b01
.org 0x109bc6
	ldrb r2, [r4, #0]	@ 00109bc6 2278
.org 0x109bc8
	movs r0, #17	@ 00109bc8 1120
.org 0x109bca
	negs r0, r0	@ 00109bca 4042
.org 0x109bcc
	ands r0, r2	@ 00109bcc 1040
.org 0x109bce
	orrs r0, r3	@ 00109bce 1843
.org 0x109bd0
	strb r0, [r4, #0]	@ 00109bd0 2070
.org 0x109bd2
	cmp r1, #0	@ 00109bd2 0029
.org 0x109bd4
	beq.n 0x109bde	@ 00109bd4 03d0
.org 0x109bd6
	ldrb r0, [r6, #10]	@ 00109bd6 b07a
.org 0x109bd8
	movs r1, #16	@ 00109bd8 1021
.org 0x109bda
	orrs r0, r1	@ 00109bda 0843
.org 0x109bdc
	b.n 0x109be4	@ 00109bdc 02e0
.org 0x109bde
	ldrb r1, [r6, #10]	@ 00109bde b17a
.org 0x109be0
	movs r0, #239	@ 00109be0 ef20
.org 0x109be2
	ands r0, r1	@ 00109be2 0840
.org 0x109be4
	strb r0, [r6, #10]	@ 00109be4 b072
.org 0x109be6
	adds r0, r6, #0	@ 00109be6 301c
.org 0x109be8
	bl 0x1cff0	@ 00109be8 13f702fa
.org 0x109bec
	adds r0, r7, #0	@ 00109bec 381c
.org 0x109bee
	adds r0, #245	@ 00109bee f530
.org 0x109bf0
	ldrb r5, [r0, #0]	@ 00109bf0 0578
.org 0x109bf2
	cmp r5, #1	@ 00109bf2 012d
.org 0x109bf4
	bne.n 0x109c0c	@ 00109bf4 0ad1
.org 0x109bf6
	ldrb r1, [r6, #10]	@ 00109bf6 b17a
.org 0x109bf8
	movs r0, #4	@ 00109bf8 0420
.org 0x109bfa
	movs r5, #0	@ 00109bfa 0025
.org 0x109bfc
	orrs r0, r1	@ 00109bfc 0843
.org 0x109bfe
	strb r0, [r6, #10]	@ 00109bfe b072
.org 0x109c00
	adds r4, r6, #0	@ 00109c00 341c
.org 0x109c02
	adds r4, #116	@ 00109c02 7434
.org 0x109c04
	ldr r1, [pc, #0]	@ 00109c04 0049
.org 0x109c06
	b.n 0x109c34	@ 00109c06 15e0
.org 0x109c08
	.byte 0xf0,0xc9,0x86,0x08	@ 00109c08 data
.org 0x109c0c
	cmp r5, #0	@ 00109c0c 002d
.org 0x109c0e
	bne.n 0x109c24	@ 00109c0e 09d1
.org 0x109c10
	ldrb r1, [r6, #10]	@ 00109c10 b17a
.org 0x109c12
	movs r0, #4	@ 00109c12 0420
.org 0x109c14
	orrs r0, r1	@ 00109c14 0843
.org 0x109c16
	strb r0, [r6, #10]	@ 00109c16 b072
.org 0x109c18
	adds r4, r6, #0	@ 00109c18 341c
.org 0x109c1a
	adds r4, #116	@ 00109c1a 7434
.org 0x109c1c
	ldr r1, [pc, #0]	@ 00109c1c 0049
.org 0x109c1e
	b.n 0x109c34	@ 00109c1e 09e0
.org 0x109c20
	.byte 0xc0,0xc9,0x86,0x08	@ 00109c20 data
.org 0x109c24
	ldrb r1, [r6, #10]	@ 00109c24 b17a
.org 0x109c26
	movs r0, #4	@ 00109c26 0420
.org 0x109c28
	movs r5, #0	@ 00109c28 0025
.org 0x109c2a
	orrs r0, r1	@ 00109c2a 0843
.org 0x109c2c
	strb r0, [r6, #10]	@ 00109c2c b072
.org 0x109c2e
	adds r4, r6, #0	@ 00109c2e 341c
.org 0x109c30
	adds r4, #116	@ 00109c30 7434
.org 0x109c32
	ldr r1, [pc, #88]	@ 00109c32 1649
.org 0x109c34
	adds r2, r6, #0	@ 00109c34 321c
.org 0x109c36
	adds r2, #84	@ 00109c36 5432
.org 0x109c38
	adds r0, r4, #0	@ 00109c38 201c
.org 0x109c3a
	movs r3, #1	@ 00109c3a 0123
.org 0x109c3c
	bl 0x5760	@ 00109c3c fbf690fd
.org 0x109c40
	str r6, [r4, #44]	@ 00109c40 e662
.org 0x109c42
	str r5, [r4, #36]	@ 00109c42 6562
.org 0x109c44
	mov r2, r8	@ 00109c44 4246
.org 0x109c46
	ldr r0, [r2, #84]	@ 00109c46 506d
.org 0x109c48
	ldr r1, [r2, #88]	@ 00109c48 916d
.org 0x109c4a
	str r0, [r6, #84]	@ 00109c4a 7065
.org 0x109c4c
	str r1, [r6, #88]	@ 00109c4c b165
.org 0x109c4e
	adds r0, r6, #0	@ 00109c4e 301c
.org 0x109c50
	movs r1, #0	@ 00109c50 0021
.org 0x109c52
	bl 0x3ad84	@ 00109c52 31f797f8
.org 0x109c56
	lsls r0, r0, #24	@ 00109c56 0006
.org 0x109c58
	lsrs r3, r0, #24	@ 00109c58 030e
.org 0x109c5a
	cmp r3, #0	@ 00109c5a 002b
.org 0x109c5c
	beq.n 0x109c94	@ 00109c5c 1ad0
.org 0x109c5e
	cmp r3, #128	@ 00109c5e 802b
.org 0x109c60
	beq.n 0x109c94	@ 00109c60 18d0
.org 0x109c62
	ldr r2, [pc, #44]	@ 00109c62 0b4a
.org 0x109c64
	adds r0, r3, #0	@ 00109c64 181c
.org 0x109c66
	adds r0, #64	@ 00109c66 4030
.org 0x109c68
	lsls r0, r0, #24	@ 00109c68 0006
.org 0x109c6a
	lsrs r0, r0, #23	@ 00109c6a c00d
.org 0x109c6c
	adds r0, r0, r2	@ 00109c6c 8018
.org 0x109c6e
	movs r4, #0	@ 00109c6e 0024
.org 0x109c70
	ldrsh r1, [r0, r4]	@ 00109c70 015f
.org 0x109c72
	lsls r0, r1, #1	@ 00109c72 4800
.org 0x109c74
	adds r0, r0, r1	@ 00109c74 4018
.org 0x109c76
	lsls r0, r0, #1	@ 00109c76 4000
.org 0x109c78
	str r0, [r6, #92]	@ 00109c78 f065
.org 0x109c7a
	lsls r0, r3, #1	@ 00109c7a 5800
.org 0x109c7c
	adds r0, r0, r2	@ 00109c7c 8018
.org 0x109c7e
	movs r2, #0	@ 00109c7e 0022
.org 0x109c80
	ldrsh r1, [r0, r2]	@ 00109c80 815e
.org 0x109c82
	lsls r0, r1, #1	@ 00109c82 4800
.org 0x109c84
	adds r0, r0, r1	@ 00109c84 4018
.org 0x109c86
	lsls r0, r0, #1	@ 00109c86 4000
.org 0x109c88
	b.n 0x109d46	@ 00109c88 5de0
.org 0x109c8a
	.byte 0x00	@ 00109c8a data
.org 0x109c8b
	.byte 0x00	@ 00109c8b data
.org 0x109c8c
	.byte 0x90,0xc9,0x86,0x08	@ 00109c8c data
.org 0x109c90
	.byte 0x0c,0x93,0x12,0x08	@ 00109c90 data
.org 0x109c94
	ldrb r0, [r7, #13]	@ 00109c94 787b
.org 0x109c96
	cmp r0, #2	@ 00109c96 0228
.org 0x109c98
	bne.n 0x109d30	@ 00109c98 4ad1
.org 0x109c9a
	ldrb r1, [r7, #30]	@ 00109c9a b97f
.org 0x109c9c
	lsls r1, r1, #8	@ 00109c9c 0902
.org 0x109c9e
	adds r0, r7, #0	@ 00109c9e 381c
.org 0x109ca0
	adds r0, #112	@ 00109ca0 7030
.org 0x109ca2
	ldrb r0, [r0, #0]	@ 00109ca2 0078
.org 0x109ca4
	orrs r0, r1	@ 00109ca4 0843
.org 0x109ca6
	movs r1, #160	@ 00109ca6 a021
.org 0x109ca8
	lsls r1, r1, #3	@ 00109ca8 c900
.org 0x109caa
	cmp r0, r1	@ 00109caa 8842
.org 0x109cac
	bne.n 0x109cf2	@ 00109cac 21d1
.org 0x109cae
	adds r0, r7, #0	@ 00109cae 381c
.org 0x109cb0
	adds r0, #113	@ 00109cb0 7130
.org 0x109cb2
	ldrb r0, [r0, #0]	@ 00109cb2 0078
.org 0x109cb4
	lsls r0, r0, #24	@ 00109cb4 0006
.org 0x109cb6
	asrs r0, r0, #24	@ 00109cb6 0016
.org 0x109cb8
	cmp r0, #2	@ 00109cb8 0228
.org 0x109cba
	ble.n 0x109d30	@ 00109cba 39dd
.org 0x109cbc
	ldrb r0, [r6, #10]	@ 00109cbc b07a
.org 0x109cbe
	lsrs r0, r0, #4	@ 00109cbe 0009
.org 0x109cc0
	movs r2, #1	@ 00109cc0 0122
.org 0x109cc2
	eors r0, r2	@ 00109cc2 5040
.org 0x109cc4
	ands r0, r2	@ 00109cc4 1040
.org 0x109cc6
	adds r1, r6, #0	@ 00109cc6 311c
.org 0x109cc8
	adds r1, #76	@ 00109cc8 4c31
.org 0x109cca
	strb r0, [r1, #0]	@ 00109cca 0870
.org 0x109ccc
	ldrb r1, [r6, #10]	@ 00109ccc b17a
.org 0x109cce
	lsrs r1, r1, #4	@ 00109cce 0909
.org 0x109cd0
	eors r1, r2	@ 00109cd0 5140
.org 0x109cd2
	ands r1, r2	@ 00109cd2 1140
.org 0x109cd4
	adds r4, r6, #0	@ 00109cd4 341c
.org 0x109cd6
	adds r4, #74	@ 00109cd6 4a34
.org 0x109cd8
	lsls r3, r1, #4	@ 00109cd8 0b01
.org 0x109cda
	ldrb r2, [r4, #0]	@ 00109cda 2278
.org 0x109cdc
	movs r0, #17	@ 00109cdc 1120
.org 0x109cde
	negs r0, r0	@ 00109cde 4042
.org 0x109ce0
	ands r0, r2	@ 00109ce0 1040
.org 0x109ce2
	orrs r0, r3	@ 00109ce2 1843
.org 0x109ce4
	strb r0, [r4, #0]	@ 00109ce4 2070
.org 0x109ce6
	cmp r1, #0	@ 00109ce6 0029
.org 0x109ce8
	beq.n 0x109d28	@ 00109ce8 1ed0
.org 0x109cea
	ldrb r0, [r6, #10]	@ 00109cea b07a
.org 0x109cec
	movs r1, #16	@ 00109cec 1021
.org 0x109cee
	orrs r0, r1	@ 00109cee 0843
.org 0x109cf0
	b.n 0x109d2e	@ 00109cf0 1de0
.org 0x109cf2
	ldrb r0, [r7, #10]	@ 00109cf2 b87a
.org 0x109cf4
	lsrs r0, r0, #4	@ 00109cf4 0009
.org 0x109cf6
	movs r2, #1	@ 00109cf6 0122
.org 0x109cf8
	eors r0, r2	@ 00109cf8 5040
.org 0x109cfa
	ands r0, r2	@ 00109cfa 1040
.org 0x109cfc
	adds r1, r6, #0	@ 00109cfc 311c
.org 0x109cfe
	adds r1, #76	@ 00109cfe 4c31
.org 0x109d00
	strb r0, [r1, #0]	@ 00109d00 0870
.org 0x109d02
	ldrb r1, [r7, #10]	@ 00109d02 b97a
.org 0x109d04
	lsrs r1, r1, #4	@ 00109d04 0909
.org 0x109d06
	eors r1, r2	@ 00109d06 5140
.org 0x109d08
	ands r1, r2	@ 00109d08 1140
.org 0x109d0a
	adds r4, r6, #0	@ 00109d0a 341c
.org 0x109d0c
	adds r4, #74	@ 00109d0c 4a34
.org 0x109d0e
	lsls r3, r1, #4	@ 00109d0e 0b01
.org 0x109d10
	ldrb r2, [r4, #0]	@ 00109d10 2278
.org 0x109d12
	movs r0, #17	@ 00109d12 1120
.org 0x109d14
	negs r0, r0	@ 00109d14 4042
.org 0x109d16
	ands r0, r2	@ 00109d16 1040
.org 0x109d18
	orrs r0, r3	@ 00109d18 1843
.org 0x109d1a
	strb r0, [r4, #0]	@ 00109d1a 2070
.org 0x109d1c
	cmp r1, #0	@ 00109d1c 0029
.org 0x109d1e
	beq.n 0x109d28	@ 00109d1e 03d0
.org 0x109d20
	ldrb r0, [r6, #10]	@ 00109d20 b07a
.org 0x109d22
	movs r1, #16	@ 00109d22 1021
.org 0x109d24
	orrs r0, r1	@ 00109d24 0843
.org 0x109d26
	b.n 0x109d2e	@ 00109d26 02e0
.org 0x109d28
	ldrb r1, [r6, #10]	@ 00109d28 b17a
.org 0x109d2a
	movs r0, #239	@ 00109d2a ef20
.org 0x109d2c
	ands r0, r1	@ 00109d2c 0840
.org 0x109d2e
	strb r0, [r6, #10]	@ 00109d2e b072
.org 0x109d30
	ldrb r1, [r6, #10]	@ 00109d30 b17a
.org 0x109d32
	movs r0, #16	@ 00109d32 1020
.org 0x109d34
	ands r0, r1	@ 00109d34 0840
.org 0x109d36
	cmp r0, #0	@ 00109d36 0028
.org 0x109d38
	beq.n 0x109d40	@ 00109d38 02d0
.org 0x109d3a
	movs r0, #192	@ 00109d3a c020
.org 0x109d3c
	lsls r0, r0, #3	@ 00109d3c c000
.org 0x109d3e
	b.n 0x109d42	@ 00109d3e 00e0

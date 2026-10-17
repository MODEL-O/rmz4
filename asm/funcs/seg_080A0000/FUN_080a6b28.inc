@ FUN_080a6b28  entry 0x080a6b28  size 264
.thumb
.org 0xa6b28
FUN_080a6b28:
	push {r4, r5, lr}	@ 000a6b28 30b5
.org 0xa6b2a
	adds r4, r0, #0	@ 000a6b2a 041c
.org 0xa6b2c
	ldrb r0, [r4, #16]	@ 000a6b2c 207c
.org 0xa6b2e
	cmp r0, #1	@ 000a6b2e 0128
.org 0xa6b30
	bne.n 0xa6b3a	@ 000a6b30 03d1
.org 0xa6b32
	adds r0, r4, #0	@ 000a6b32 201c
.org 0xa6b34
	bl 0xa6c4c	@ 000a6b34 00f08af8
.org 0xa6b38
	b.n 0xa6c38	@ 000a6b38 7ee0
.org 0xa6b3a
	adds r0, r4, #0	@ 000a6b3a 201c
.org 0xa6b3c
	adds r0, #140	@ 000a6b3c 8c30
.org 0xa6b3e
	ldr r2, [r0, #0]	@ 000a6b3e 0268
.org 0xa6b40
	movs r0, #128	@ 000a6b40 8020
.org 0xa6b42
	lsls r0, r0, #2	@ 000a6b42 8000
.org 0xa6b44
	ands r0, r2	@ 000a6b44 1040
.org 0xa6b46
	cmp r0, #0	@ 000a6b46 0028
.org 0xa6b48
	beq.n 0xa6b70	@ 000a6b48 12d0
.org 0xa6b4a
	adds r1, r4, #0	@ 000a6b4a 211c
.org 0xa6b4c
	adds r1, #184	@ 000a6b4c b831
.org 0xa6b4e
	movs r0, #1	@ 000a6b4e 0120
.org 0xa6b50
	strb r0, [r1, #0]	@ 000a6b50 0870
.org 0xa6b52
	ldr r1, [pc, #24]	@ 000a6b52 0649
.org 0xa6b54
	ldrb r0, [r4, #9]	@ 000a6b54 607a
.org 0xa6b56
	lsls r0, r0, #2	@ 000a6b56 8000
.org 0xa6b58
	adds r0, r0, r1	@ 000a6b58 4018
.org 0xa6b5a
	movs r1, #2	@ 000a6b5a 0221
.org 0xa6b5c
	str r1, [r4, #12]	@ 000a6b5c e160
.org 0xa6b5e
	ldr r0, [r0, #0]	@ 000a6b5e 0068
.org 0xa6b60
	ldr r0, [r0, #8]	@ 000a6b60 8068
.org 0xa6b62
	str r0, [r4, #20]	@ 000a6b62 6061
.org 0xa6b64
	adds r0, r4, #0	@ 000a6b64 201c
.org 0xa6b66
	bl 0xa6df8	@ 000a6b66 00f047f9
.org 0xa6b6a
	b.n 0xa6c38	@ 000a6b6a 65e0
.org 0xa6b6c
	.byte 0x40,0xdb,0x85,0x08	@ 000a6b6c data
.org 0xa6b70
	adds r0, r4, #0	@ 000a6b70 201c
.org 0xa6b72
	adds r0, #192	@ 000a6b72 c030
.org 0xa6b74
	ldr r1, [r0, #0]	@ 000a6b74 0168
.org 0xa6b76
	adds r5, r0, #0	@ 000a6b76 051c
.org 0xa6b78
	cmp r1, #0	@ 000a6b78 0029
.org 0xa6b7a
	bne.n 0xa6ba4	@ 000a6b7a 13d1
.org 0xa6b7c
	movs r0, #1	@ 000a6b7c 0120
.org 0xa6b7e
	ands r2, r0	@ 000a6b7e 0240
.org 0xa6b80
	cmp r2, #0	@ 000a6b80 002a
.org 0xa6b82
	beq.n 0xa6b9e	@ 000a6b82 0cd0
.org 0xa6b84
	ldr r2, [pc, #84]	@ 000a6b84 154a
.org 0xa6b86
	movs r0, #0	@ 000a6b86 0020
.org 0xa6b88
	adds r1, r4, #0	@ 000a6b88 211c
.org 0xa6b8a
	bl 0x2adac	@ 000a6b8a 84f70ff9
.org 0xa6b8e
	str r0, [r5, #0]	@ 000a6b8e 2860
.org 0xa6b90
	cmp r0, #0	@ 000a6b90 0028
.org 0xa6b92
	beq.n 0xa6bf2	@ 000a6b92 2ed0
.org 0xa6b94
	adds r0, r4, #0	@ 000a6b94 201c
.org 0xa6b96
	adds r0, #116	@ 000a6b96 7430
.org 0xa6b98
	ldr r1, [pc, #68]	@ 000a6b98 1149
.org 0xa6b9a
	bl 0x5784	@ 000a6b9a 5ef7f3fd
.org 0xa6b9e
	ldr r0, [r5, #0]	@ 000a6b9e 2868
.org 0xa6ba0
	cmp r0, #0	@ 000a6ba0 0028
.org 0xa6ba2
	beq.n 0xa6bf2	@ 000a6ba2 26d0
.org 0xa6ba4
	ldr r0, [r5, #0]	@ 000a6ba4 2868
.org 0xa6ba6
	bl 0x2b3e4	@ 000a6ba6 84f71dfc
.org 0xa6baa
	cmp r0, #0	@ 000a6baa 0028
.org 0xa6bac
	bne.n 0xa6be4	@ 000a6bac 1ad1
.org 0xa6bae
	ldrb r0, [r4, #30]	@ 000a6bae a07f
.org 0xa6bb0
	lsls r0, r0, #8	@ 000a6bb0 0002
.org 0xa6bb2
	adds r1, r4, #0	@ 000a6bb2 211c
.org 0xa6bb4
	adds r1, #112	@ 000a6bb4 7031
.org 0xa6bb6
	ldrb r1, [r1, #0]	@ 000a6bb6 0978
.org 0xa6bb8
	orrs r1, r0	@ 000a6bb8 0143
.org 0xa6bba
	adds r0, r4, #0	@ 000a6bba 201c
.org 0xa6bbc
	adds r0, #113	@ 000a6bbc 7130
.org 0xa6bbe
	movs r2, #0	@ 000a6bbe 0022
.org 0xa6bc0
	ldrsb r2, [r0, r2]	@ 000a6bc0 8256
.org 0xa6bc2
	lsls r2, r2, #16	@ 000a6bc2 1204
.org 0xa6bc4
	lsrs r2, r2, #16	@ 000a6bc4 120c
.org 0xa6bc6
	adds r3, r1, #1	@ 000a6bc6 4b1c
.org 0xa6bc8
	lsls r3, r3, #16	@ 000a6bc8 1b04
.org 0xa6bca
	lsrs r3, r3, #16	@ 000a6bca 1b0c
.org 0xa6bcc
	adds r0, r4, #0	@ 000a6bcc 201c
.org 0xa6bce
	bl 0x1cfc8	@ 000a6bce 76f7fbf9
.org 0xa6bd2
	adds r0, r4, #0	@ 000a6bd2 201c
.org 0xa6bd4
	bl 0x1cff0	@ 000a6bd4 76f70cfa
.org 0xa6bd8
	b.n 0xa6c38	@ 000a6bd8 2ee0
.org 0xa6bda
	.byte 0x00	@ 000a6bda data
.org 0xa6bdb
	.byte 0x00	@ 000a6bdb data
.org 0xa6bdc
	.byte 0x14,0x27,0x86,0x08	@ 000a6bdc data
.org 0xa6be0
	.byte 0xdc,0x25,0x86,0x08	@ 000a6be0 data
.org 0xa6be4
	adds r0, r4, #0	@ 000a6be4 201c
.org 0xa6be6
	adds r0, #116	@ 000a6be6 7430
.org 0xa6be8
	ldr r1, [pc, #84]	@ 000a6be8 1549
.org 0xa6bea
	bl 0x5784	@ 000a6bea 5ef7cbfd
.org 0xa6bee
	movs r0, #0	@ 000a6bee 0020
.org 0xa6bf0
	str r0, [r5, #0]	@ 000a6bf0 2860
.org 0xa6bf2
	ldrb r0, [r4, #13]	@ 000a6bf2 607b
.org 0xa6bf4
	cmp r0, #2	@ 000a6bf4 0228
.org 0xa6bf6
	beq.n 0xa6c20	@ 000a6bf6 13d0
.org 0xa6bf8
	cmp r0, #5	@ 000a6bf8 0528
.org 0xa6bfa
	beq.n 0xa6c20	@ 000a6bfa 11d0
.org 0xa6bfc
	ldrb r0, [r4, #10]	@ 000a6bfc a07a
.org 0xa6bfe
	lsrs r2, r0, #4	@ 000a6bfe 0209
.org 0xa6c00
	movs r0, #1	@ 000a6c00 0120
.org 0xa6c02
	ands r2, r0	@ 000a6c02 0240
.org 0xa6c04
	movs r3, #0	@ 000a6c04 0023
.org 0xa6c06
	ldr r0, [pc, #60]	@ 000a6c06 0f48
.org 0xa6c08
	ldr r0, [r0, #0]	@ 000a6c08 0068
.org 0xa6c0a
	ldr r1, [r4, #84]	@ 000a6c0a 616d
.org 0xa6c0c
	ldr r0, [r0, #84]	@ 000a6c0c 406d
.org 0xa6c0e
	cmp r1, r0	@ 000a6c0e 8142
.org 0xa6c10
	bge.n 0xa6c14	@ 000a6c10 00da
.org 0xa6c12
	movs r3, #1	@ 000a6c12 0123
.org 0xa6c14
	cmp r2, r3	@ 000a6c14 9a42
.org 0xa6c16
	beq.n 0xa6c20	@ 000a6c16 03d0
.org 0xa6c18
	movs r1, #0	@ 000a6c18 0021
.org 0xa6c1a
	movs r0, #5	@ 000a6c1a 0520
.org 0xa6c1c
	strb r0, [r4, #13]	@ 000a6c1c 6073
.org 0xa6c1e
	strb r1, [r4, #14]	@ 000a6c1e a173
.org 0xa6c20
	ldr r1, [pc, #36]	@ 000a6c20 0949
.org 0xa6c22
	ldrb r0, [r4, #13]	@ 000a6c22 607b
.org 0xa6c24
	lsls r0, r0, #2	@ 000a6c24 8000
.org 0xa6c26
	adds r0, r0, r1	@ 000a6c26 4018
.org 0xa6c28
	ldr r1, [r0, #0]	@ 000a6c28 0168
.org 0xa6c2a
	adds r0, r4, #0	@ 000a6c2a 201c
.org 0xa6c2c
	bl 0x128f80	@ 000a6c2c 82f0a8f9

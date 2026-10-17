@ FUN_08065b08  entry 0x08065b08  size 380
.thumb
.org 0x65b08
FUN_08065b08:
	push {r4, r5, r6, r7, lr}	@ 00065b08 f0b5
.org 0x65b0a
	mov r7, sl	@ 00065b0a 5746
.org 0x65b0c
	mov r6, r9	@ 00065b0c 4e46
.org 0x65b0e
	mov r5, r8	@ 00065b0e 4546
.org 0x65b10
	push {r5, r6, r7}	@ 00065b10 e0b4
.org 0x65b12
	sub sp, #80	@ 00065b12 94b0
.org 0x65b14
	adds r7, r0, #0	@ 00065b14 071c
.org 0x65b16
	ldr r1, [pc, #168]	@ 00065b16 2a49
.org 0x65b18
	mov r0, sp	@ 00065b18 6846
.org 0x65b1a
	movs r2, #3	@ 00065b1a 0322
.org 0x65b1c
	bl 0x129258	@ 00065b1c c3f09cfb
.org 0x65b20
	mov r0, sp	@ 00065b20 6846
.org 0x65b22
	adds r0, #4	@ 00065b22 0430
.org 0x65b24
	str r0, [sp, #72]	@ 00065b24 1290
.org 0x65b26
	ldr r5, [pc, #156]	@ 00065b26 274d
.org 0x65b28
	adds r1, r5, #0	@ 00065b28 291c
.org 0x65b2a
	movs r2, #3	@ 00065b2a 0322
.org 0x65b2c
	bl 0x129258	@ 00065b2c c3f094fb
.org 0x65b30
	mov r1, sp	@ 00065b30 6946
.org 0x65b32
	adds r1, #8	@ 00065b32 0831
.org 0x65b34
	str r1, [sp, #76]	@ 00065b34 1391
.org 0x65b36
	ldr r4, [pc, #144]	@ 00065b36 244c
.org 0x65b38
	adds r0, r1, #0	@ 00065b38 081c
.org 0x65b3a
	adds r1, r4, #0	@ 00065b3a 211c
.org 0x65b3c
	movs r2, #3	@ 00065b3c 0322
.org 0x65b3e
	bl 0x129258	@ 00065b3e c3f08bfb
.org 0x65b42
	add r0, sp, #12	@ 00065b42 03a8
.org 0x65b44
	mov r9, r0	@ 00065b44 8146
.org 0x65b46
	ldr r1, [pc, #132]	@ 00065b46 2149
.org 0x65b48
	movs r2, #3	@ 00065b48 0322
.org 0x65b4a
	bl 0x129258	@ 00065b4a c3f085fb
.org 0x65b4e
	add r1, sp, #16	@ 00065b4e 04a9
.org 0x65b50
	mov sl, r1	@ 00065b50 8a46
.org 0x65b52
	ldr r1, [pc, #124]	@ 00065b52 1f49
.org 0x65b54
	mov r0, sl	@ 00065b54 5046
.org 0x65b56
	movs r2, #3	@ 00065b56 0322
.org 0x65b58
	bl 0x129258	@ 00065b58 c3f07efb
.org 0x65b5c
	add r0, sp, #20	@ 00065b5c 05a8
.org 0x65b5e
	mov r8, r0	@ 00065b5e 8046
.org 0x65b60
	adds r1, r5, #0	@ 00065b60 291c
.org 0x65b62
	movs r2, #3	@ 00065b62 0322
.org 0x65b64
	bl 0x129258	@ 00065b64 c3f078fb
.org 0x65b68
	add r5, sp, #24	@ 00065b68 06ad
.org 0x65b6a
	adds r0, r5, #0	@ 00065b6a 281c
.org 0x65b6c
	adds r1, r4, #0	@ 00065b6c 211c
.org 0x65b6e
	movs r2, #3	@ 00065b6e 0322
.org 0x65b70
	bl 0x129258	@ 00065b70 c3f072fb
.org 0x65b74
	add r6, sp, #28	@ 00065b74 07ae
.org 0x65b76
	ldr r1, [sp, #72]	@ 00065b76 1299
.org 0x65b78
	str r1, [sp, #40]	@ 00065b78 0a91
.org 0x65b7a
	ldr r0, [sp, #76]	@ 00065b7a 1398
.org 0x65b7c
	str r0, [sp, #44]	@ 00065b7c 0b90
.org 0x65b7e
	mov r1, r9	@ 00065b7e 4946
.org 0x65b80
	str r1, [sp, #48]	@ 00065b80 0c91
.org 0x65b82
	add r4, sp, #40	@ 00065b82 0aac
.org 0x65b84
	adds r0, r6, #0	@ 00065b84 301c
.org 0x65b86
	adds r1, r4, #0	@ 00065b86 211c
.org 0x65b88
	movs r2, #12	@ 00065b88 0c22
.org 0x65b8a
	bl 0x129258	@ 00065b8a c3f065fb
.org 0x65b8e
	mov r0, sl	@ 00065b8e 5046
.org 0x65b90
	str r0, [sp, #52]	@ 00065b90 0d90
.org 0x65b92
	mov r1, r8	@ 00065b92 4146
.org 0x65b94
	str r1, [sp, #56]	@ 00065b94 0e91
.org 0x65b96
	str r5, [sp, #60]	@ 00065b96 0f95
.org 0x65b98
	add r1, sp, #52	@ 00065b98 0da9
.org 0x65b9a
	adds r0, r4, #0	@ 00065b9a 201c
.org 0x65b9c
	movs r2, #12	@ 00065b9c 0c22
.org 0x65b9e
	bl 0x129258	@ 00065b9e c3f05bfb
.org 0x65ba2
	str r6, [sp, #64]	@ 00065ba2 1096
.org 0x65ba4
	add r2, sp, #64	@ 00065ba4 10aa
.org 0x65ba6
	str r4, [r2, #4]	@ 00065ba6 5460
.org 0x65ba8
	ldr r0, [pc, #40]	@ 00065ba8 0a48
.org 0x65baa
	ldrh r1, [r0, #8]	@ 00065baa 0189
.org 0x65bac
	movs r0, #8	@ 00065bac 0820
.org 0x65bae
	ands r0, r1	@ 00065bae 0840
.org 0x65bb0
	adds r6, r2, #0	@ 00065bb0 161c
.org 0x65bb2
	cmp r0, #0	@ 00065bb2 0028
.org 0x65bb4
	beq.n 0x65bd8	@ 00065bb4 10d0
.org 0x65bb6
	movs r0, #0	@ 00065bb6 0020
.org 0x65bb8
	strb r0, [r7, #13]	@ 00065bb8 7873
.org 0x65bba
	strb r0, [r7, #14]	@ 00065bba b873
.org 0x65bbc
	strb r0, [r7, #15]	@ 00065bbc f873
.org 0x65bbe
	b.n 0x65c9e	@ 00065bbe 6ee0
.org 0x65bc0
	.byte 0x84,0x98,0x12,0x08	@ 00065bc0 data
.org 0x65bc4
	.byte 0x87,0x98,0x12,0x08	@ 00065bc4 data
.org 0x65bc8
	.byte 0x8a,0x98,0x12,0x08	@ 00065bc8 data
.org 0x65bcc
	.byte 0x8d,0x98,0x12,0x08	@ 00065bcc data
.org 0x65bd0
	.byte 0x90,0x98,0x12,0x08	@ 00065bd0 data
.org 0x65bd4
	.byte 0x10,0xe9,0x02,0x02	@ 00065bd4 data
.org 0x65bd8
	movs r0, #0	@ 00065bd8 0020
.org 0x65bda
	mov r8, r0	@ 00065bda 8046
.org 0x65bdc
	ldr r0, [pc, #72]	@ 00065bdc 1248
.org 0x65bde
	ldr r0, [r0, #0]	@ 00065bde 0068
.org 0x65be0
	ldr r0, [r0, #84]	@ 00065be0 406d
.org 0x65be2
	ldr r1, [r7, #84]	@ 00065be2 796d
.org 0x65be4
	subs r0, r0, r1	@ 00065be4 401a
.org 0x65be6
	ldr r1, [pc, #68]	@ 00065be6 1149
.org 0x65be8
	adds r0, r0, r1	@ 00065be8 4018
.org 0x65bea
	ldr r1, [pc, #68]	@ 00065bea 1149
.org 0x65bec
	cmp r0, r1	@ 00065bec 8842
.org 0x65bee
	bls.n 0x65bf4	@ 00065bee 01d9
.org 0x65bf0
	movs r0, #1	@ 00065bf0 0120
.org 0x65bf2
	mov r8, r0	@ 00065bf2 8046
.org 0x65bf4
	adds r0, r7, #0	@ 00065bf4 381c
.org 0x65bf6
	bl 0x66160	@ 00065bf6 00f0b3fa
.org 0x65bfa
	adds r4, r0, #0	@ 00065bfa 041c
.org 0x65bfc
	adds r0, r7, #0	@ 00065bfc 381c
.org 0x65bfe
	adds r0, #205	@ 00065bfe cd30
.org 0x65c00
	ldrb r1, [r0, #0]	@ 00065c00 0178
.org 0x65c02
	adds r5, r0, #0	@ 00065c02 051c
.org 0x65c04
	mov r0, r8	@ 00065c04 4046
.org 0x65c06
	lsls r0, r0, #2	@ 00065c06 8000
.org 0x65c08
	mov r8, r0	@ 00065c08 8046
.org 0x65c0a
	cmp r1, #2	@ 00065c0a 0229
.org 0x65c0c
	bls.n 0x65c52	@ 00065c0c 21d9
.org 0x65c0e
	adds r0, r7, #0	@ 00065c0e 381c
.org 0x65c10
	adds r0, #204	@ 00065c10 cc30
.org 0x65c12
	ldrb r2, [r0, #0]	@ 00065c12 0278
.org 0x65c14
	movs r3, #0	@ 00065c14 0023
.org 0x65c16
	mov r0, sp	@ 00065c16 6846
.org 0x65c18
	ldrb r0, [r0, #0]	@ 00065c18 0078
.org 0x65c1a
	cmp r0, r2	@ 00065c1a 9042
.org 0x65c1c
	bne.n 0x65c34	@ 00065c1c 0ad1
.org 0x65c1e
	lsls r0, r4, #2	@ 00065c1e a000
.org 0x65c20
	adds r0, r0, r6	@ 00065c20 8019
.org 0x65c22
	ldr r0, [r0, #0]	@ 00065c22 0068
.org 0x65c24
	str r3, [r0, #0]	@ 00065c24 0360
.org 0x65c26
	b.n 0x65c52	@ 00065c26 14e0
.org 0x65c28
	.byte 0xf0,0xdb,0x02,0x02	@ 00065c28 data
.org 0x65c2c
	.byte 0xff,0x3f,0x00,0x00	@ 00065c2c data
.org 0x65c30
	.byte 0xfe,0x7f,0x00,0x00	@ 00065c30 data
.org 0x65c34
	adds r3, #1	@ 00065c34 0133
.org 0x65c36
	cmp r3, #1	@ 00065c36 012b
.org 0x65c38
	bgt.n 0x65c52	@ 00065c38 0bdc
.org 0x65c3a
	mov r1, sp	@ 00065c3a 6946
.org 0x65c3c
	adds r0, r1, r3	@ 00065c3c c818
.org 0x65c3e
	ldrb r0, [r0, #0]	@ 00065c3e 0078
.org 0x65c40
	cmp r0, r2	@ 00065c40 9042
.org 0x65c42
	bne.n 0x65c34	@ 00065c42 f7d1
.org 0x65c44
	lsls r0, r4, #2	@ 00065c44 a000
.org 0x65c46
	adds r0, r0, r6	@ 00065c46 8019
.org 0x65c48
	ldr r1, [r0, #0]	@ 00065c48 0168
.org 0x65c4a
	lsls r0, r3, #2	@ 00065c4a 9800
.org 0x65c4c
	adds r0, r0, r1	@ 00065c4c 4018
.org 0x65c4e
	movs r1, #0	@ 00065c4e 0021
.org 0x65c50
	str r1, [r0, #0]	@ 00065c50 0160
.org 0x65c52
	mov r1, r8	@ 00065c52 4146
.org 0x65c54
	adds r0, r1, r6	@ 00065c54 8819
.org 0x65c56
	ldr r1, [r0, #0]	@ 00065c56 0168
.org 0x65c58
	lsls r0, r4, #2	@ 00065c58 a000
.org 0x65c5a
	adds r0, r0, r1	@ 00065c5a 4018
.org 0x65c5c
	ldr r0, [r0, #0]	@ 00065c5c 0068
.org 0x65c5e
	movs r1, #3	@ 00065c5e 0321
.org 0x65c60
	bl 0x6635c	@ 00065c60 00f07cfb
.org 0x65c64
	add r0, sp	@ 00065c64 6844
.org 0x65c66
	ldrb r2, [r0, #0]	@ 00065c66 0278
.org 0x65c68
	cmp r2, #255	@ 00065c68 ff2a
.org 0x65c6a
	bne.n 0x65c74	@ 00065c6a 03d1
.org 0x65c6c
	adds r0, r7, #0	@ 00065c6c 381c
.org 0x65c6e
	bl 0x65d1c	@ 00065c6e 00f055f8
.org 0x65c72
	b.n 0x65c9e	@ 00065c72 14e0
.org 0x65c74
	ldr r0, [pc, #28]	@ 00065c74 0748
.org 0x65c76
	adds r0, r2, r0	@ 00065c76 1018
.org 0x65c78
	ldrb r0, [r0, #0]	@ 00065c78 0078
.org 0x65c7a
	movs r1, #0	@ 00065c7a 0021
.org 0x65c7c
	strb r0, [r7, #13]	@ 00065c7c 7873
.org 0x65c7e
	strb r1, [r7, #14]	@ 00065c7e b973
.org 0x65c80
	strb r1, [r7, #15]	@ 00065c80 f973
.org 0x65c82
	adds r0, r7, #0	@ 00065c82 381c

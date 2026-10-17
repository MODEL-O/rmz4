@ FUN_08086b14  entry 0x08086b14  size 400
.thumb
.org 0x86b14
FUN_08086b14:
	push {r4, r5, r6, r7, lr}	@ 00086b14 f0b5
.org 0x86b16
	mov r7, sl	@ 00086b16 5746
.org 0x86b18
	mov r6, r9	@ 00086b18 4e46
.org 0x86b1a
	mov r5, r8	@ 00086b1a 4546
.org 0x86b1c
	push {r5, r6, r7}	@ 00086b1c e0b4
.org 0x86b1e
	sub sp, #16	@ 00086b1e 84b0
.org 0x86b20
	adds r5, r0, #0	@ 00086b20 051c
.org 0x86b22
	ldr r1, [pc, #88]	@ 00086b22 1649
.org 0x86b24
	mov r0, sp	@ 00086b24 6846
.org 0x86b26
	movs r2, #6	@ 00086b26 0622
.org 0x86b28
	bl 0x129258	@ 00086b28 a2f096fb
.org 0x86b2c
	ldrb r4, [r5, #15]	@ 00086b2c ec7b
.org 0x86b2e
	cmp r4, #0	@ 00086b2e 002c
.org 0x86b30
	bne.n 0x86b5e	@ 00086b30 15d1
.org 0x86b32
	movs r0, #53	@ 00086b32 3520
.org 0x86b34
	bl 0x2b10	@ 00086b34 7bf7ecff
.org 0x86b38
	adds r0, r5, #0	@ 00086b38 281c
.org 0x86b3a
	movs r1, #0	@ 00086b3a 0021
.org 0x86b3c
	bl 0x86a14	@ 00086b3c fff76aff
.org 0x86b40
	adds r0, r5, #0	@ 00086b40 281c
.org 0x86b42
	adds r0, #186	@ 00086b42 ba30
.org 0x86b44
	strb r4, [r0, #0]	@ 00086b44 0470
.org 0x86b46
	adds r0, #1	@ 00086b46 0130
.org 0x86b48
	strb r4, [r0, #0]	@ 00086b48 0470
.org 0x86b4a
	movs r0, #12	@ 00086b4a 0c20
.org 0x86b4c
	strb r0, [r5, #18]	@ 00086b4c a874
.org 0x86b4e
	adds r0, r5, #0	@ 00086b4e 281c
.org 0x86b50
	adds r0, #116	@ 00086b50 7430
.org 0x86b52
	ldr r1, [pc, #44]	@ 00086b52 0b49
.org 0x86b54
	bl 0x5784	@ 00086b54 7ef716fe
.org 0x86b58
	ldrb r0, [r5, #15]	@ 00086b58 e87b
.org 0x86b5a
	adds r0, #1	@ 00086b5a 0130
.org 0x86b5c
	strb r0, [r5, #15]	@ 00086b5c e873
.org 0x86b5e
	adds r0, r5, #0	@ 00086b5e 281c
.org 0x86b60
	bl 0x86a48	@ 00086b60 fff772ff
.org 0x86b64
	ldrb r0, [r5, #18]	@ 00086b64 a87c
.org 0x86b66
	subs r0, #1	@ 00086b66 0138
.org 0x86b68
	strb r0, [r5, #18]	@ 00086b68 a874
.org 0x86b6a
	movs r1, #1	@ 00086b6a 0121
.org 0x86b6c
	ands r0, r1	@ 00086b6c 0840
.org 0x86b6e
	cmp r0, #0	@ 00086b6e 0028
.org 0x86b70
	beq.n 0x86b84	@ 00086b70 08d0
.org 0x86b72
	ldrb r1, [r5, #10]	@ 00086b72 a97a
.org 0x86b74
	movs r0, #254	@ 00086b74 fe20
.org 0x86b76
	ands r0, r1	@ 00086b76 0840
.org 0x86b78
	b.n 0x86b8a	@ 00086b78 07e0
.org 0x86b7a
	.byte 0x00	@ 00086b7a data
.org 0x86b7b
	.byte 0x00	@ 00086b7b data
.org 0x86b7c
	.byte 0x16,0x9b,0x12,0x08	@ 00086b7c data
.org 0x86b80
	.byte 0xf4,0xed,0x85,0x08	@ 00086b80 data
.org 0x86b84
	ldrb r0, [r5, #10]	@ 00086b84 a87a
.org 0x86b86
	movs r1, #1	@ 00086b86 0121
.org 0x86b88
	orrs r0, r1	@ 00086b88 0843
.org 0x86b8a
	strb r0, [r5, #10]	@ 00086b8a a872
.org 0x86b8c
	ldrb r0, [r5, #18]	@ 00086b8c a87c
.org 0x86b8e
	mov r9, r0	@ 00086b8e 8146
.org 0x86b90
	movs r0, #1	@ 00086b90 0120
.org 0x86b92
	mov r1, r9	@ 00086b92 4946
.org 0x86b94
	ands r1, r0	@ 00086b94 0140
.org 0x86b96
	mov r9, r1	@ 00086b96 8946
.org 0x86b98
	cmp r1, #0	@ 00086b98 0029
.org 0x86b9a
	bne.n 0x86c5c	@ 00086b9a 5fd1
.org 0x86b9c
	movs r2, #186	@ 00086b9c ba22
.org 0x86b9e
	adds r2, r2, r5	@ 00086b9e 5219
.org 0x86ba0
	mov sl, r2	@ 00086ba0 9246
.org 0x86ba2
	ldrb r1, [r2, #0]	@ 00086ba2 1178
.org 0x86ba4
	adds r1, #2	@ 00086ba4 0231
.org 0x86ba6
	lsls r1, r1, #11	@ 00086ba6 c902
.org 0x86ba8
	movs r0, #128	@ 00086ba8 8020
.org 0x86baa
	lsls r0, r0, #4	@ 00086baa 0001
.org 0x86bac
	subs r0, r0, r1	@ 00086bac 401a
.org 0x86bae
	adds r6, r0, #0	@ 00086bae 061c
.org 0x86bb0
	adds r7, r0, #0	@ 00086bb0 071c
.org 0x86bb2
	movs r0, #128	@ 00086bb2 8020
.org 0x86bb4
	lsls r0, r0, #5	@ 00086bb4 4001
.org 0x86bb6
	adds r1, r6, r0	@ 00086bb6 3118
.org 0x86bb8
	movs r2, #187	@ 00086bb8 bb22
.org 0x86bba
	adds r2, r2, r5	@ 00086bba 5219
.org 0x86bbc
	mov r8, r2	@ 00086bbc 9046
.org 0x86bbe
	ldrb r0, [r2, #0]	@ 00086bbe 1078
.org 0x86bc0
	lsls r0, r0, #12	@ 00086bc0 0003
.org 0x86bc2
	adds r6, r1, r0	@ 00086bc2 0e18
.org 0x86bc4
	ldr r0, [r5, #84]	@ 00086bc4 686d
.org 0x86bc6
	adds r0, r0, r6	@ 00086bc6 8019
.org 0x86bc8
	str r0, [sp, #8]	@ 00086bc8 0290
.org 0x86bca
	ldr r0, [r5, #88]	@ 00086bca a86d
.org 0x86bcc
	adds r0, r0, r7	@ 00086bcc c019
.org 0x86bce
	add r4, sp, #8	@ 00086bce 02ac
.org 0x86bd0
	str r0, [r4, #4]	@ 00086bd0 6060
.org 0x86bd2
	adds r0, r4, #0	@ 00086bd2 201c
.org 0x86bd4
	movs r1, #0	@ 00086bd4 0021
.org 0x86bd6
	movs r2, #0	@ 00086bd6 0022
.org 0x86bd8
	bl 0xd82e4	@ 00086bd8 51f084fb
.org 0x86bdc
	adds r0, r5, #0	@ 00086bdc 281c
.org 0x86bde
	adds r1, r4, #0	@ 00086bde 211c
.org 0x86be0
	bl 0x86cb4	@ 00086be0 00f068f8
.org 0x86be4
	ldr r0, [r5, #84]	@ 00086be4 686d
.org 0x86be6
	subs r0, r0, r6	@ 00086be6 801b
.org 0x86be8
	str r0, [sp, #8]	@ 00086be8 0290
.org 0x86bea
	ldr r0, [r5, #88]	@ 00086bea a86d
.org 0x86bec
	subs r0, r0, r7	@ 00086bec c01b
.org 0x86bee
	str r0, [r4, #4]	@ 00086bee 6060
.org 0x86bf0
	adds r0, r4, #0	@ 00086bf0 201c
.org 0x86bf2
	movs r1, #0	@ 00086bf2 0021
.org 0x86bf4
	movs r2, #0	@ 00086bf4 0022
.org 0x86bf6
	bl 0xd82e4	@ 00086bf6 51f075fb
.org 0x86bfa
	adds r0, r5, #0	@ 00086bfa 281c
.org 0x86bfc
	adds r1, r4, #0	@ 00086bfc 211c
.org 0x86bfe
	bl 0x86cb4	@ 00086bfe 00f059f8
.org 0x86c02
	ldr r0, [r5, #84]	@ 00086c02 686d
.org 0x86c04
	adds r0, r0, r7	@ 00086c04 c019
.org 0x86c06
	str r0, [sp, #8]	@ 00086c06 0290
.org 0x86c08
	ldr r0, [r5, #88]	@ 00086c08 a86d
.org 0x86c0a
	subs r0, r0, r6	@ 00086c0a 801b
.org 0x86c0c
	str r0, [r4, #4]	@ 00086c0c 6060
.org 0x86c0e
	adds r0, r4, #0	@ 00086c0e 201c
.org 0x86c10
	movs r1, #0	@ 00086c10 0021
.org 0x86c12
	movs r2, #0	@ 00086c12 0022
.org 0x86c14
	bl 0xd82e4	@ 00086c14 51f066fb
.org 0x86c18
	adds r0, r5, #0	@ 00086c18 281c
.org 0x86c1a
	adds r1, r4, #0	@ 00086c1a 211c
.org 0x86c1c
	bl 0x86cb4	@ 00086c1c 00f04af8
.org 0x86c20
	ldr r0, [r5, #84]	@ 00086c20 686d
.org 0x86c22
	subs r0, r0, r7	@ 00086c22 c01b
.org 0x86c24
	str r0, [sp, #8]	@ 00086c24 0290
.org 0x86c26
	ldr r0, [r5, #88]	@ 00086c26 a86d
.org 0x86c28
	adds r0, r0, r6	@ 00086c28 8019
.org 0x86c2a
	str r0, [r4, #4]	@ 00086c2a 6060
.org 0x86c2c
	adds r0, r4, #0	@ 00086c2c 201c
.org 0x86c2e
	movs r1, #0	@ 00086c2e 0021
.org 0x86c30
	movs r2, #0	@ 00086c30 0022
.org 0x86c32
	bl 0xd82e4	@ 00086c32 51f057fb
.org 0x86c36
	adds r0, r5, #0	@ 00086c36 281c
.org 0x86c38
	adds r1, r4, #0	@ 00086c38 211c
.org 0x86c3a
	bl 0x86cb4	@ 00086c3a 00f03bf8
.org 0x86c3e
	mov r1, r8	@ 00086c3e 4146
.org 0x86c40
	ldrb r0, [r1, #0]	@ 00086c40 0878
.org 0x86c42
	adds r0, #1	@ 00086c42 0130
.org 0x86c44
	strb r0, [r1, #0]	@ 00086c44 0870
.org 0x86c46
	lsls r0, r0, #24	@ 00086c46 0006
.org 0x86c48
	lsrs r0, r0, #24	@ 00086c48 000e
.org 0x86c4a
	mov r2, sl	@ 00086c4a 5246
.org 0x86c4c
	ldrb r1, [r2, #0]	@ 00086c4c 1178
.org 0x86c4e
	adds r1, #1	@ 00086c4e 0131
.org 0x86c50
	cmp r0, r1	@ 00086c50 8842
.org 0x86c52
	blt.n 0x86c5c	@ 00086c52 03db
.org 0x86c54
	strb r1, [r2, #0]	@ 00086c54 1170
.org 0x86c56
	mov r1, r9	@ 00086c56 4946
.org 0x86c58
	mov r0, r8	@ 00086c58 4046
.org 0x86c5a
	strb r1, [r0, #0]	@ 00086c5a 0170
.org 0x86c5c
	ldrb r0, [r5, #18]	@ 00086c5c a87c
.org 0x86c5e
	cmp r0, #0	@ 00086c5e 0028
.org 0x86c60
	bne.n 0x86c66	@ 00086c60 01d1
.org 0x86c62
	movs r0, #1	@ 00086c62 0120
.org 0x86c64
	b.n 0x86c9e	@ 00086c64 1be0
.org 0x86c66
	ldrb r0, [r5, #18]	@ 00086c66 a87c
.org 0x86c68
	subs r0, #1	@ 00086c68 0138
.org 0x86c6a
	movs r1, #1	@ 00086c6a 0121
.org 0x86c6c
	ands r0, r1	@ 00086c6c 0840
.org 0x86c6e
	cmp r0, #0	@ 00086c6e 0028
.org 0x86c70
	bne.n 0x86c9c	@ 00086c70 14d1
.org 0x86c72
	adds r0, r5, #0	@ 00086c72 281c
.org 0x86c74
	adds r0, #187	@ 00086c74 bb30
.org 0x86c76
	ldrb r1, [r0, #0]	@ 00086c76 0178
.org 0x86c78
	adds r1, #1	@ 00086c78 0131
.org 0x86c7a
	subs r0, #1	@ 00086c7a 0138
.org 0x86c7c
	ldrb r2, [r0, #0]	@ 00086c7c 0278
.org 0x86c7e
	adds r0, r2, #1	@ 00086c7e 501c
.org 0x86c80
	cmp r1, r0	@ 00086c80 8142
.org 0x86c82
	blt.n 0x86c9c	@ 00086c82 0bdb
.org 0x86c84
	adds r0, r5, #0	@ 00086c84 281c
.org 0x86c86
	adds r0, #116	@ 00086c86 7430
.org 0x86c88
	lsls r1, r2, #1	@ 00086c88 5100
.org 0x86c8a
	add r1, sp	@ 00086c8a 6944
.org 0x86c8c
	ldrh r2, [r1, #0]	@ 00086c8c 0a88
.org 0x86c8e
	lsls r1, r2, #1	@ 00086c8e 5100
.org 0x86c90
	adds r1, r1, r2	@ 00086c90 8918
.org 0x86c92
	lsls r1, r1, #3	@ 00086c92 c900
.org 0x86c94
	ldr r2, [pc, #24]	@ 00086c94 064a
.org 0x86c96
	adds r1, r1, r2	@ 00086c96 8918
.org 0x86c98
	bl 0x5784	@ 00086c98 7ef774fd
.org 0x86c9c
	movs r0, #0	@ 00086c9c 0020
.org 0x86c9e
	add sp, #16	@ 00086c9e 04b0
.org 0x86ca0
	pop {r3, r4, r5}	@ 00086ca0 38bc
.org 0x86ca2
	mov r8, r3	@ 00086ca2 9846

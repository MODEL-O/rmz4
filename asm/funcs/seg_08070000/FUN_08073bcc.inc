@ FUN_08073bcc  entry 0x08073bcc  size 494
.thumb
.org 0x73bcc
FUN_08073bcc:
	push {r4, r5, r6, r7, lr}	@ 00073bcc f0b5
.org 0x73bce
	mov r7, sl	@ 00073bce 5746
.org 0x73bd0
	mov r6, r9	@ 00073bd0 4e46
.org 0x73bd2
	mov r5, r8	@ 00073bd2 4546
.org 0x73bd4
	push {r5, r6, r7}	@ 00073bd4 e0b4
.org 0x73bd6
	sub sp, #104	@ 00073bd6 9ab0
.org 0x73bd8
	adds r7, r0, #0	@ 00073bd8 071c
.org 0x73bda
	ldr r1, [pc, #148]	@ 00073bda 2549
.org 0x73bdc
	mov r0, sp	@ 00073bdc 6846
.org 0x73bde
	movs r2, #7	@ 00073bde 0722
.org 0x73be0
	bl 0x129258	@ 00073be0 b5f03afb
.org 0x73be4
	add r0, sp, #8	@ 00073be4 02a8
.org 0x73be6
	mov sl, r0	@ 00073be6 8246
.org 0x73be8
	ldr r1, [pc, #136]	@ 00073be8 2249
.org 0x73bea
	movs r2, #7	@ 00073bea 0722
.org 0x73bec
	bl 0x129258	@ 00073bec b5f034fb
.org 0x73bf0
	add r4, sp, #16	@ 00073bf0 04ac
.org 0x73bf2
	ldr r1, [pc, #132]	@ 00073bf2 2149
.org 0x73bf4
	adds r0, r4, #0	@ 00073bf4 201c
.org 0x73bf6
	movs r2, #7	@ 00073bf6 0722
.org 0x73bf8
	bl 0x129258	@ 00073bf8 b5f02efb
.org 0x73bfc
	add r1, sp, #24	@ 00073bfc 06a9
.org 0x73bfe
	mov r9, r1	@ 00073bfe 8946
.org 0x73c00
	ldr r1, [pc, #120]	@ 00073c00 1e49
.org 0x73c02
	mov r0, r9	@ 00073c02 4846
.org 0x73c04
	movs r2, #7	@ 00073c04 0722
.org 0x73c06
	bl 0x129258	@ 00073c06 b5f027fb
.org 0x73c0a
	add r3, sp, #32	@ 00073c0a 08ab
.org 0x73c0c
	mov r8, r3	@ 00073c0c 9846
.org 0x73c0e
	ldr r1, [pc, #112]	@ 00073c0e 1c49
.org 0x73c10
	mov r0, r8	@ 00073c10 4046
.org 0x73c12
	movs r2, #7	@ 00073c12 0722
.org 0x73c14
	bl 0x129258	@ 00073c14 b5f020fb
.org 0x73c18
	add r5, sp, #40	@ 00073c18 0aad
.org 0x73c1a
	ldr r1, [pc, #104]	@ 00073c1a 1a49
.org 0x73c1c
	adds r0, r5, #0	@ 00073c1c 281c
.org 0x73c1e
	movs r2, #7	@ 00073c1e 0722
.org 0x73c20
	bl 0x129258	@ 00073c20 b5f01afb
.org 0x73c24
	add r6, sp, #48	@ 00073c24 0cae
.org 0x73c26
	mov r0, sp	@ 00073c26 6846
.org 0x73c28
	str r0, [sp, #60]	@ 00073c28 0f90
.org 0x73c2a
	mov r1, sl	@ 00073c2a 5146
.org 0x73c2c
	str r1, [sp, #64]	@ 00073c2c 1091
.org 0x73c2e
	str r4, [sp, #68]	@ 00073c2e 1194
.org 0x73c30
	add r4, sp, #60	@ 00073c30 0fac
.org 0x73c32
	adds r0, r6, #0	@ 00073c32 301c
.org 0x73c34
	adds r1, r4, #0	@ 00073c34 211c
.org 0x73c36
	movs r2, #12	@ 00073c36 0c22
.org 0x73c38
	bl 0x129258	@ 00073c38 b5f00efb
.org 0x73c3c
	mov r3, r9	@ 00073c3c 4b46
.org 0x73c3e
	str r3, [sp, #72]	@ 00073c3e 1293
.org 0x73c40
	mov r0, r8	@ 00073c40 4046
.org 0x73c42
	str r0, [sp, #76]	@ 00073c42 1390
.org 0x73c44
	str r5, [sp, #80]	@ 00073c44 1495
.org 0x73c46
	add r1, sp, #72	@ 00073c46 12a9
.org 0x73c48
	adds r0, r4, #0	@ 00073c48 201c
.org 0x73c4a
	movs r2, #12	@ 00073c4a 0c22
.org 0x73c4c
	bl 0x129258	@ 00073c4c b5f004fb
.org 0x73c50
	str r6, [sp, #84]	@ 00073c50 1596
.org 0x73c52
	add r2, sp, #84	@ 00073c52 15aa
.org 0x73c54
	str r4, [r2, #4]	@ 00073c54 5460
.org 0x73c56
	ldr r0, [pc, #48]	@ 00073c56 0c48
.org 0x73c58
	ldrh r1, [r0, #8]	@ 00073c58 0189
.org 0x73c5a
	movs r0, #8	@ 00073c5a 0820
.org 0x73c5c
	ands r0, r1	@ 00073c5c 0840
.org 0x73c5e
	mov r9, r2	@ 00073c5e 9146
.org 0x73c60
	cmp r0, #0	@ 00073c60 0028
.org 0x73c62
	beq.n 0x73c8c	@ 00073c62 13d0
.org 0x73c64
	movs r0, #0	@ 00073c64 0020
.org 0x73c66
	strb r0, [r7, #13]	@ 00073c66 7873
.org 0x73c68
	strb r0, [r7, #14]	@ 00073c68 b873
.org 0x73c6a
	strb r0, [r7, #15]	@ 00073c6a f873
.org 0x73c6c
	b.n 0x73dee	@ 00073c6c bfe0
.org 0x73c6e
	.byte 0x00	@ 00073c6e data
.org 0x73c6f
	.byte 0x00	@ 00073c6f data
.org 0x73c70
	.byte 0x9c,0x99,0x12,0x08	@ 00073c70 data
.org 0x73c74
	.byte 0xa3,0x99,0x12,0x08	@ 00073c74 data
.org 0x73c78
	.byte 0xaa,0x99,0x12,0x08	@ 00073c78 data
.org 0x73c7c
	.byte 0xb1,0x99,0x12,0x08	@ 00073c7c data
.org 0x73c80
	.byte 0xb8,0x99,0x12,0x08	@ 00073c80 data
.org 0x73c84
	.byte 0xbf,0x99,0x12,0x08	@ 00073c84 data
.org 0x73c88
	.byte 0x10,0xe9,0x02,0x02	@ 00073c88 data
.org 0x73c8c
	movs r4, #0	@ 00073c8c 0024
.org 0x73c8e
	ldr r0, [pc, #100]	@ 00073c8e 1948
.org 0x73c90
	ldr r0, [r0, #0]	@ 00073c90 0068
.org 0x73c92
	ldr r0, [r0, #84]	@ 00073c92 406d
.org 0x73c94
	ldr r1, [r7, #84]	@ 00073c94 796d
.org 0x73c96
	subs r0, r0, r1	@ 00073c96 401a
.org 0x73c98
	ldr r1, [pc, #92]	@ 00073c98 1749
.org 0x73c9a
	adds r0, r0, r1	@ 00073c9a 4018
.org 0x73c9c
	ldr r1, [pc, #92]	@ 00073c9c 1749
.org 0x73c9e
	cmp r0, r1	@ 00073c9e 8842
.org 0x73ca0
	bls.n 0x73ca4	@ 00073ca0 00d9
.org 0x73ca2
	movs r4, #1	@ 00073ca2 0124
.org 0x73ca4
	adds r0, r7, #0	@ 00073ca4 381c
.org 0x73ca6
	bl 0x73e00	@ 00073ca6 00f0abf8
.org 0x73caa
	adds r6, r0, #0	@ 00073caa 061c
.org 0x73cac
	adds r0, r7, #0	@ 00073cac 381c
.org 0x73cae
	adds r0, #193	@ 00073cae c130
.org 0x73cb0
	ldrb r1, [r0, #0]	@ 00073cb0 0178
.org 0x73cb2
	str r0, [sp, #92]	@ 00073cb2 1790
.org 0x73cb4
	movs r3, #192	@ 00073cb4 c023
.org 0x73cb6
	adds r3, r3, r7	@ 00073cb6 db19
.org 0x73cb8
	mov sl, r3	@ 00073cb8 9a46
.org 0x73cba
	lsls r5, r4, #2	@ 00073cba a500
.org 0x73cbc
	movs r0, #187	@ 00073cbc bb20
.org 0x73cbe
	adds r0, r0, r7	@ 00073cbe c019
.org 0x73cc0
	mov ip, r0	@ 00073cc0 8446
.org 0x73cc2
	adds r3, r7, #0	@ 00073cc2 3b1c
.org 0x73cc4
	adds r3, #201	@ 00073cc4 c933
.org 0x73cc6
	str r3, [sp, #96]	@ 00073cc6 1893
.org 0x73cc8
	adds r0, r7, #0	@ 00073cc8 381c
.org 0x73cca
	adds r0, #202	@ 00073cca ca30
.org 0x73ccc
	str r0, [sp, #100]	@ 00073ccc 1990
.org 0x73cce
	cmp r1, #2	@ 00073cce 0229
.org 0x73cd0
	bls.n 0x73d26	@ 00073cd0 29d9
.org 0x73cd2
	mov r1, sl	@ 00073cd2 5146
.org 0x73cd4
	ldrb r3, [r1, #0]	@ 00073cd4 0b78
.org 0x73cd6
	movs r4, #0	@ 00073cd6 0024
.org 0x73cd8
	ldr r0, [pc, #36]	@ 00073cd8 0948
.org 0x73cda
	ldrb r1, [r0, #0]	@ 00073cda 0178
.org 0x73cdc
	mov r8, r0	@ 00073cdc 8046
.org 0x73cde
	lsls r2, r6, #2	@ 00073cde b200
.org 0x73ce0
	cmp r1, r3	@ 00073ce0 9942
.org 0x73ce2
	bne.n 0x73d04	@ 00073ce2 0fd1
.org 0x73ce4
	mov r3, r9	@ 00073ce4 4b46
.org 0x73ce6
	adds r0, r5, r3	@ 00073ce6 e818
.org 0x73ce8
	ldr r0, [r0, #0]	@ 00073ce8 0068
.org 0x73cea
	adds r0, r2, r0	@ 00073cea 1018
.org 0x73cec
	ldr r0, [r0, #0]	@ 00073cec 0068
.org 0x73cee
	strb r4, [r0, #0]	@ 00073cee 0470
.org 0x73cf0
	b.n 0x73d26	@ 00073cf0 19e0
.org 0x73cf2
	.byte 0x00	@ 00073cf2 data
.org 0x73cf3
	.byte 0x00	@ 00073cf3 data
.org 0x73cf4
	.byte 0xf0,0xdb,0x02,0x02	@ 00073cf4 data
.org 0x73cf8
	.byte 0xff,0x4f,0x00,0x00	@ 00073cf8 data
.org 0x73cfc
	.byte 0xfe,0x9f,0x00,0x00	@ 00073cfc data
.org 0x73d00
	.byte 0xa4,0xcc,0x85,0x08	@ 00073d00 data
.org 0x73d04
	adds r4, #1	@ 00073d04 0134
.org 0x73d06
	cmp r4, #6	@ 00073d06 062c
.org 0x73d08
	bgt.n 0x73d26	@ 00073d08 0ddc
.org 0x73d0a
	mov r1, r8	@ 00073d0a 4146
.org 0x73d0c
	adds r0, r4, r1	@ 00073d0c 6018
.org 0x73d0e
	ldrb r0, [r0, #0]	@ 00073d0e 0078
.org 0x73d10
	cmp r0, r3	@ 00073d10 9842
.org 0x73d12
	bne.n 0x73d04	@ 00073d12 f7d1
.org 0x73d14
	mov r3, r9	@ 00073d14 4b46
.org 0x73d16
	adds r0, r5, r3	@ 00073d16 e818
.org 0x73d18
	ldr r1, [r0, #0]	@ 00073d18 0168
.org 0x73d1a
	lsls r0, r6, #2	@ 00073d1a b000
.org 0x73d1c
	adds r0, r0, r1	@ 00073d1c 4018
.org 0x73d1e
	ldr r0, [r0, #0]	@ 00073d1e 0068
.org 0x73d20
	adds r0, r0, r4	@ 00073d20 0019
.org 0x73d22
	movs r1, #0	@ 00073d22 0021
.org 0x73d24
	strb r1, [r0, #0]	@ 00073d24 0170
.org 0x73d26
	ldr r0, [pc, #168]	@ 00073d26 2a48
.org 0x73d28
	ldr r1, [pc, #168]	@ 00073d28 2a49
.org 0x73d2a
	adds r0, r0, r1	@ 00073d2a 4018
.org 0x73d2c
	ldrb r1, [r0, #0]	@ 00073d2c 0178
.org 0x73d2e
	movs r0, #16	@ 00073d2e 1020
.org 0x73d30
	ands r0, r1	@ 00073d30 0840
.org 0x73d32
	cmp r0, #0	@ 00073d32 0028
.org 0x73d34
	beq.n 0x73d44	@ 00073d34 06d0
.org 0x73d36
	ldr r0, [pc, #160]	@ 00073d36 2848
.org 0x73d38
	ldrb r1, [r0, #4]	@ 00073d38 0179
.org 0x73d3a
	movs r0, #4	@ 00073d3a 0420
.org 0x73d3c
	ands r0, r1	@ 00073d3c 0840
.org 0x73d3e
	lsls r2, r6, #2	@ 00073d3e b200
.org 0x73d40
	cmp r0, #0	@ 00073d40 0028
.org 0x73d42
	beq.n 0x73d54	@ 00073d42 07d0
.org 0x73d44
	mov r3, r9	@ 00073d44 4b46
.org 0x73d46
	adds r0, r5, r3	@ 00073d46 e818
.org 0x73d48
	ldr r0, [r0, #0]	@ 00073d48 0068
.org 0x73d4a
	lsls r2, r6, #2	@ 00073d4a b200
.org 0x73d4c
	adds r0, r2, r0	@ 00073d4c 1018
.org 0x73d4e
	ldr r1, [r0, #0]	@ 00073d4e 0168
.org 0x73d50
	movs r0, #0	@ 00073d50 0020
.org 0x73d52
	strb r0, [r1, #6]	@ 00073d52 8871
.org 0x73d54
	mov r1, ip	@ 00073d54 6146
.org 0x73d56
	movs r0, #0	@ 00073d56 0020
.org 0x73d58
	ldrsb r0, [r1, r0]	@ 00073d58 0856
.org 0x73d5a
	cmp r0, #2	@ 00073d5a 0228
.org 0x73d5c
	ble.n 0x73d6c	@ 00073d5c 06dd
.org 0x73d5e
	mov r3, r9	@ 00073d5e 4b46
.org 0x73d60
	adds r0, r5, r3	@ 00073d60 e818
.org 0x73d62
	ldr r0, [r0, #0]	@ 00073d62 0068
.org 0x73d64
	adds r0, r2, r0	@ 00073d64 1018
.org 0x73d66
	ldr r1, [r0, #0]	@ 00073d66 0168
.org 0x73d68
	movs r0, #0	@ 00073d68 0020
.org 0x73d6a
	strb r0, [r1, #4]	@ 00073d6a 0871
.org 0x73d6c
	ldr r1, [sp, #96]	@ 00073d6c 1899
.org 0x73d6e
	ldrb r0, [r1, #0]	@ 00073d6e 0878
.org 0x73d70
	cmp r0, #0	@ 00073d70 0028
.org 0x73d72
	beq.n 0x73d84	@ 00073d72 07d0
.org 0x73d74
	mov r3, r9	@ 00073d74 4b46
.org 0x73d76
	adds r0, r5, r3	@ 00073d76 e818
.org 0x73d78
	ldr r0, [r0, #0]	@ 00073d78 0068
.org 0x73d7a
	adds r0, r2, r0	@ 00073d7a 1018
.org 0x73d7c
	ldr r1, [r0, #0]	@ 00073d7c 0168
.org 0x73d7e
	movs r0, #0	@ 00073d7e 0020
.org 0x73d80
	strb r0, [r1, #6]	@ 00073d80 8871
.org 0x73d82
	strb r0, [r1, #3]	@ 00073d82 c870
.org 0x73d84
	ldr r1, [sp, #100]	@ 00073d84 1999
.org 0x73d86
	movs r3, #0	@ 00073d86 0023
.org 0x73d88
	ldrsh r0, [r1, r3]	@ 00073d88 c85e
.org 0x73d8a
	cmp r0, #0	@ 00073d8a 0028
.org 0x73d8c
	ble.n 0x73d9c	@ 00073d8c 06dd
.org 0x73d8e
	mov r1, r9	@ 00073d8e 4946
.org 0x73d90
	adds r0, r5, r1	@ 00073d90 6818
.org 0x73d92
	ldr r0, [r0, #0]	@ 00073d92 0068
.org 0x73d94
	adds r0, r2, r0	@ 00073d94 1018
.org 0x73d96
	ldr r1, [r0, #0]	@ 00073d96 0168
.org 0x73d98
	movs r0, #0	@ 00073d98 0020
.org 0x73d9a
	strb r0, [r1, #2]	@ 00073d9a 8870
.org 0x73d9c
	mov r3, r9	@ 00073d9c 4b46
.org 0x73d9e
	adds r0, r5, r3	@ 00073d9e e818
.org 0x73da0
	ldr r0, [r0, #0]	@ 00073da0 0068
.org 0x73da2
	adds r0, r2, r0	@ 00073da2 1018
.org 0x73da4
	ldr r0, [r0, #0]	@ 00073da4 0068
.org 0x73da6
	movs r1, #7	@ 00073da6 0721
.org 0x73da8
	bl 0x73e30	@ 00073da8 00f042f8
.org 0x73dac
	ldr r1, [pc, #44]	@ 00073dac 0b49
.org 0x73dae
	adds r0, r0, r1	@ 00073dae 4018
.org 0x73db0
	ldrb r3, [r0, #0]	@ 00073db0 0378
.org 0x73db2
	ldr r0, [pc, #44]	@ 00073db2 0b48
.org 0x73db4
	adds r0, r3, r0	@ 00073db4 1818
.org 0x73db6
	ldrb r0, [r0, #0]	@ 00073db6 0078
.org 0x73db8
	movs r1, #0	@ 00073db8 0021

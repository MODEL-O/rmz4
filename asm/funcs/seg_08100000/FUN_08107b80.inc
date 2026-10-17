@ FUN_08107b80  entry 0x08107b80  size 336
.thumb
.org 0x107b80
FUN_08107b80:
	push {r4, lr}	@ 00107b80 10b5
.org 0x107b82
	adds r4, r0, #0	@ 00107b82 041c
.org 0x107b84
	ldrb r0, [r4, #14]	@ 00107b84 a07b
.org 0x107b86
	cmp r0, #0	@ 00107b86 0028
.org 0x107b88
	beq.n 0x107b8c	@ 00107b88 00d0
.org 0x107b8a
	b.n 0x107cdc	@ 00107b8a a7e0
.org 0x107b8c
	ldrb r0, [r4, #16]	@ 00107b8c 207c
.org 0x107b8e
	cmp r0, #0	@ 00107b8e 0028
.org 0x107b90
	bne.n 0x107c20	@ 00107b90 46d1
.org 0x107b92
	ldr r0, [r4, #44]	@ 00107b92 e06a
.org 0x107b94
	ldr r3, [pc, #72]	@ 00107b94 124b
.org 0x107b96
	adds r2, r0, r3	@ 00107b96 c218
.org 0x107b98
	adds r0, r4, #0	@ 00107b98 201c
.org 0x107b9a
	adds r0, #181	@ 00107b9a b530
.org 0x107b9c
	ldrb r0, [r0, #0]	@ 00107b9c 0078
.org 0x107b9e
	adds r0, #1	@ 00107b9e 0130
.org 0x107ba0
	ldr r1, [r2, #36]	@ 00107ba0 516a
.org 0x107ba2
	cmp r1, r0	@ 00107ba2 8142
.org 0x107ba4
	bne.n 0x107baa	@ 00107ba4 01d1
.org 0x107ba6
	ldr r0, [r4, #40]	@ 00107ba6 a06a
.org 0x107ba8
	str r0, [r2, #44]	@ 00107ba8 d062
.org 0x107baa
	adds r0, r4, #0	@ 00107baa 201c
.org 0x107bac
	adds r0, #183	@ 00107bac b730
.org 0x107bae
	ldrb r0, [r0, #0]	@ 00107bae 0078
.org 0x107bb0
	cmp r0, #1	@ 00107bb0 0128
.org 0x107bb2
	bne.n 0x107bfe	@ 00107bb2 24d1
.org 0x107bb4
	ldr r0, [r4, #44]	@ 00107bb4 e06a
.org 0x107bb6
	adds r2, r0, r3	@ 00107bb6 c218
.org 0x107bb8
	ldr r0, [r2, #20]	@ 00107bb8 5069
.org 0x107bba
	cmp r0, #0	@ 00107bba 0028
.org 0x107bbc
	beq.n 0x107bfe	@ 00107bbc 1fd0
.org 0x107bbe
	ldr r0, [r2, #68]	@ 00107bbe 506c
.org 0x107bc0
	subs r3, r0, #1	@ 00107bc0 431e
.org 0x107bc2
	cmp r3, #3	@ 00107bc2 032b
.org 0x107bc4
	bhi.n 0x107bec	@ 00107bc4 12d8
.org 0x107bc6
	ldr r0, [pc, #28]	@ 00107bc6 0748
.org 0x107bc8
	adds r0, r3, r0	@ 00107bc8 1818
.org 0x107bca
	ldrb r1, [r0, #0]	@ 00107bca 0178
.org 0x107bcc
	ldr r0, [r2, #8]	@ 00107bcc 9068
.org 0x107bce
	adds r0, r0, r1	@ 00107bce 4018
.org 0x107bd0
	str r0, [r2, #8]	@ 00107bd0 9060
.org 0x107bd2
	ldr r1, [pc, #20]	@ 00107bd2 0549
.org 0x107bd4
	lsls r0, r3, #1	@ 00107bd4 5800
.org 0x107bd6
	adds r0, r0, r1	@ 00107bd6 4018
.org 0x107bd8
	ldrh r0, [r0, #0]	@ 00107bd8 0088
.org 0x107bda
	bl 0x2b10	@ 00107bda faf699ff
.org 0x107bde
	b.n 0x107bfe	@ 00107bde 0ee0
.org 0x107be0
	.byte 0xcc,0x0d,0x00,0x00	@ 00107be0 data
.org 0x107be4
	.byte 0x46,0xc4,0x86,0x08	@ 00107be4 data
.org 0x107be8
	.byte 0x3c,0xc4,0x86,0x08	@ 00107be8 data
.org 0x107bec
	ldr r0, [pc, #36]	@ 00107bec 0948
.org 0x107bee
	ldrb r1, [r0, #4]	@ 00107bee 0179
.org 0x107bf0
	ldr r0, [r2, #8]	@ 00107bf0 9068
.org 0x107bf2
	adds r0, r0, r1	@ 00107bf2 4018
.org 0x107bf4
	str r0, [r2, #8]	@ 00107bf4 9060
.org 0x107bf6
	ldr r0, [pc, #32]	@ 00107bf6 0848
.org 0x107bf8
	ldrh r0, [r0, #8]	@ 00107bf8 0089
.org 0x107bfa
	bl 0x2b10	@ 00107bfa faf689ff
.org 0x107bfe
	ldr r1, [r4, #44]	@ 00107bfe e16a
.org 0x107c00
	ldr r0, [pc, #24]	@ 00107c00 0648
.org 0x107c02
	adds r2, r1, r0	@ 00107c02 0a18
.org 0x107c04
	ldr r0, [r2, #36]	@ 00107c04 506a
.org 0x107c06
	subs r0, #1	@ 00107c06 0138
.org 0x107c08
	str r0, [r2, #36]	@ 00107c08 5062
.org 0x107c0a
	cmp r0, #0	@ 00107c0a 0028
.org 0x107c0c
	bne.n 0x107ca0	@ 00107c0c 48d1
.org 0x107c0e
	str r0, [r2, #44]	@ 00107c0e d062
.org 0x107c10
	b.n 0x107ca0	@ 00107c10 46e0
.org 0x107c12
	.byte 0x00	@ 00107c12 data
.org 0x107c13
	.byte 0x00	@ 00107c13 data
.org 0x107c14
	.byte 0x46,0xc4,0x86,0x08	@ 00107c14 data
.org 0x107c18
	.byte 0x3c,0xc4,0x86,0x08	@ 00107c18 data
.org 0x107c1c
	.byte 0xcc,0x0d,0x00,0x00	@ 00107c1c data
.org 0x107c20
	ldr r0, [r4, #44]	@ 00107c20 e06a
.org 0x107c22
	ldr r3, [pc, #76]	@ 00107c22 134b
.org 0x107c24
	adds r2, r0, r3	@ 00107c24 c218
.org 0x107c26
	adds r0, r4, #0	@ 00107c26 201c
.org 0x107c28
	adds r0, #181	@ 00107c28 b530
.org 0x107c2a
	ldrb r0, [r0, #0]	@ 00107c2a 0078
.org 0x107c2c
	adds r0, #1	@ 00107c2c 0130
.org 0x107c2e
	ldr r1, [r2, #40]	@ 00107c2e 916a
.org 0x107c30
	cmp r1, r0	@ 00107c30 8142
.org 0x107c32
	bne.n 0x107c38	@ 00107c32 01d1
.org 0x107c34
	ldr r0, [r4, #40]	@ 00107c34 a06a
.org 0x107c36
	str r0, [r2, #48]	@ 00107c36 1063
.org 0x107c38
	adds r0, r4, #0	@ 00107c38 201c
.org 0x107c3a
	adds r0, #183	@ 00107c3a b730
.org 0x107c3c
	ldrb r0, [r0, #0]	@ 00107c3c 0078
.org 0x107c3e
	cmp r0, #1	@ 00107c3e 0128
.org 0x107c40
	bne.n 0x107c8e	@ 00107c40 25d1
.org 0x107c42
	ldr r0, [r4, #44]	@ 00107c42 e06a
.org 0x107c44
	adds r2, r0, r3	@ 00107c44 c218
.org 0x107c46
	ldr r0, [r2, #20]	@ 00107c46 5069
.org 0x107c48
	cmp r0, #0	@ 00107c48 0028
.org 0x107c4a
	beq.n 0x107c8e	@ 00107c4a 20d0
.org 0x107c4c
	ldr r0, [r2, #72]	@ 00107c4c 906c
.org 0x107c4e
	subs r3, r0, #1	@ 00107c4e 431e
.org 0x107c50
	cmp r3, #3	@ 00107c50 032b
.org 0x107c52
	bhi.n 0x107c7c	@ 00107c52 13d8
.org 0x107c54
	ldr r0, [pc, #28]	@ 00107c54 0748
.org 0x107c56
	adds r0, r3, r0	@ 00107c56 1818
.org 0x107c58
	ldrb r1, [r0, #0]	@ 00107c58 0178
.org 0x107c5a
	ldr r0, [r2, #8]	@ 00107c5a 9068
.org 0x107c5c
	adds r0, r0, r1	@ 00107c5c 4018
.org 0x107c5e
	str r0, [r2, #8]	@ 00107c5e 9060
.org 0x107c60
	ldr r1, [pc, #20]	@ 00107c60 0549
.org 0x107c62
	lsls r0, r3, #1	@ 00107c62 5800
.org 0x107c64
	adds r0, r0, r1	@ 00107c64 4018
.org 0x107c66
	ldrh r0, [r0, #0]	@ 00107c66 0088
.org 0x107c68
	bl 0x2b10	@ 00107c68 faf652ff
.org 0x107c6c
	b.n 0x107c8e	@ 00107c6c 0fe0
.org 0x107c6e
	.byte 0x00	@ 00107c6e data
.org 0x107c6f
	.byte 0x00	@ 00107c6f data
.org 0x107c70
	.byte 0xcc,0x0d,0x00,0x00	@ 00107c70 data
.org 0x107c74
	.byte 0x46,0xc4,0x86,0x08	@ 00107c74 data
.org 0x107c78
	.byte 0x3c,0xc4,0x86,0x08	@ 00107c78 data
.org 0x107c7c
	ldr r0, [pc, #52]	@ 00107c7c 0d48
.org 0x107c7e
	ldrb r1, [r0, #4]	@ 00107c7e 0179
.org 0x107c80
	ldr r0, [r2, #8]	@ 00107c80 9068
.org 0x107c82
	adds r0, r0, r1	@ 00107c82 4018
.org 0x107c84
	str r0, [r2, #8]	@ 00107c84 9060
.org 0x107c86
	ldr r0, [pc, #48]	@ 00107c86 0c48
.org 0x107c88
	ldrh r0, [r0, #8]	@ 00107c88 0089
.org 0x107c8a
	bl 0x2b10	@ 00107c8a faf641ff
.org 0x107c8e
	ldr r1, [r4, #44]	@ 00107c8e e16a
.org 0x107c90
	ldr r0, [pc, #40]	@ 00107c90 0a48
.org 0x107c92
	adds r2, r1, r0	@ 00107c92 0a18
.org 0x107c94
	ldr r0, [r2, #40]	@ 00107c94 906a
.org 0x107c96
	subs r0, #1	@ 00107c96 0138
.org 0x107c98
	str r0, [r2, #40]	@ 00107c98 9062
.org 0x107c9a
	cmp r0, #0	@ 00107c9a 0028
.org 0x107c9c
	bne.n 0x107ca0	@ 00107c9c 00d1
.org 0x107c9e
	str r0, [r2, #48]	@ 00107c9e 1063
.org 0x107ca0
	adds r0, r4, #0	@ 00107ca0 201c
.org 0x107ca2
	adds r0, #180	@ 00107ca2 b430
.org 0x107ca4
	ldrb r0, [r0, #0]	@ 00107ca4 0078
.org 0x107ca6
	cmp r0, #0	@ 00107ca6 0028
.org 0x107ca8
	beq.n 0x107cc0	@ 00107ca8 0ad0
.org 0x107caa
	ldr r0, [pc, #16]	@ 00107caa 0448
.org 0x107cac
	adds r1, r1, r0	@ 00107cac 0918
.org 0x107cae
	ldrb r0, [r4, #17]	@ 00107cae 607c
.org 0x107cb0
	str r0, [r1, #104]	@ 00107cb0 8866
.org 0x107cb2
	b.n 0x107cec	@ 00107cb2 1be0
.org 0x107cb4
	.byte 0x46,0xc4,0x86,0x08	@ 00107cb4 data
.org 0x107cb8
	.byte 0x3c,0xc4,0x86,0x08	@ 00107cb8 data
.org 0x107cbc
	.byte 0xcc,0x0d,0x00,0x00	@ 00107cbc data
.org 0x107cc0
	adds r0, r4, #0	@ 00107cc0 201c
.org 0x107cc2
	adds r0, #84	@ 00107cc2 5430
.org 0x107cc4
	ldrb r1, [r4, #17]	@ 00107cc4 617c
.org 0x107cc6
	lsls r1, r1, #8	@ 00107cc6 0902
.org 0x107cc8
	movs r2, #0	@ 00107cc8 0022
.org 0x107cca
	bl 0xe8610	@ 00107cca e0f7a1fc
.org 0x107cce
	ldr r1, [pc, #52]	@ 00107cce 0d49

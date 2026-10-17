@ FUN_080a4a48  entry 0x080a4a48  size 876
.thumb
.org 0xa4a48
FUN_080a4a48:
	push {r4, r5, r6, lr}	@ 000a4a48 70b5
.org 0xa4a4a
	sub sp, #16	@ 000a4a4a 84b0
.org 0xa4a4c
	adds r4, r0, #0	@ 000a4a4c 041c
.org 0xa4a4e
	adds r6, r4, #0	@ 000a4a4e 261c
.org 0xa4a50
	adds r6, #140	@ 000a4a50 8c36
.org 0xa4a52
	ldr r5, [r6, #0]	@ 000a4a52 3568
.org 0xa4a54
	movs r0, #128	@ 000a4a54 8020
.org 0xa4a56
	lsls r0, r0, #2	@ 000a4a56 8000
.org 0xa4a58
	ands r5, r0	@ 000a4a58 0540
.org 0xa4a5a
	cmp r5, #0	@ 000a4a5a 002d
.org 0xa4a5c
	beq.n 0xa4a84	@ 000a4a5c 12d0
.org 0xa4a5e
	ldr r1, [pc, #32]	@ 000a4a5e 0849
.org 0xa4a60
	ldrb r0, [r4, #9]	@ 000a4a60 607a
.org 0xa4a62
	lsls r0, r0, #2	@ 000a4a62 8000
.org 0xa4a64
	adds r0, r0, r1	@ 000a4a64 4018
.org 0xa4a66
	movs r1, #2	@ 000a4a66 0221
.org 0xa4a68
	str r1, [r4, #12]	@ 000a4a68 e160
.org 0xa4a6a
	ldr r0, [r0, #0]	@ 000a4a6a 0068
.org 0xa4a6c
	ldr r0, [r0, #8]	@ 000a4a6c 8068
.org 0xa4a6e
	str r0, [r4, #20]	@ 000a4a6e 6061
.org 0xa4a70
	movs r0, #0	@ 000a4a70 0020
.org 0xa4a72
	strb r0, [r4, #13]	@ 000a4a72 6073
.org 0xa4a74
	strb r0, [r4, #14]	@ 000a4a74 a073
.org 0xa4a76
	strb r0, [r4, #15]	@ 000a4a76 e073
.org 0xa4a78
	adds r0, r4, #0	@ 000a4a78 201c
.org 0xa4a7a
	bl 0xa5188	@ 000a4a7a 00f085fb
.org 0xa4a7e
	b.n 0xa4de4	@ 000a4a7e b1e1
.org 0xa4a80
	.byte 0x40,0xdb,0x85,0x08	@ 000a4a80 data
.org 0xa4a84
	ldr r0, [pc, #40]	@ 000a4a84 0a48
.org 0xa4a86
	adds r1, r4, #0	@ 000a4a86 211c
.org 0xa4a88
	adds r1, #84	@ 000a4a88 5431
.org 0xa4a8a
	bl 0x1fb14	@ 000a4a8a 7bf743f8
.org 0xa4a8e
	movs r1, #240	@ 000a4a8e f021
.org 0xa4a90
	lsls r1, r1, #7	@ 000a4a90 c901
.org 0xa4a92
	cmp r0, r1	@ 000a4a92 8842
.org 0xa4a94
	bls.n 0xa4ab4	@ 000a4a94 0ed9
.org 0xa4a96
	ldrb r1, [r4, #10]	@ 000a4a96 a17a
.org 0xa4a98
	movs r0, #254	@ 000a4a98 fe20
.org 0xa4a9a
	ands r0, r1	@ 000a4a9a 0840
.org 0xa4a9c
	movs r1, #253	@ 000a4a9c fd21
.org 0xa4a9e
	ands r0, r1	@ 000a4a9e 0840
.org 0xa4aa0
	strb r0, [r4, #10]	@ 000a4aa0 a072
.org 0xa4aa2
	str r5, [r6, #0]	@ 000a4aa2 3560
.org 0xa4aa4
	adds r0, r4, #0	@ 000a4aa4 201c
.org 0xa4aa6
	adds r0, #144	@ 000a4aa6 9030
.org 0xa4aa8
	str r5, [r0, #0]	@ 000a4aa8 0560
.org 0xa4aaa
	adds r0, #4	@ 000a4aaa 0430
.org 0xa4aac
	strb r5, [r0, #0]	@ 000a4aac 0570
.org 0xa4aae
	b.n 0xa4d68	@ 000a4aae 5be1
.org 0xa4ab0
	.byte 0xf8,0xe9,0x02,0x02	@ 000a4ab0 data
.org 0xa4ab4
	adds r0, r4, #0	@ 000a4ab4 201c
.org 0xa4ab6
	bl 0x1cff0	@ 000a4ab6 78f79bfa
.org 0xa4aba
	ldr r0, [r4, #84]	@ 000a4aba 606d
.org 0xa4abc
	ldr r1, [r4, #92]	@ 000a4abc e16d
.org 0xa4abe
	adds r0, r0, r1	@ 000a4abe 4018
.org 0xa4ac0
	str r0, [r4, #84]	@ 000a4ac0 6065
.org 0xa4ac2
	ldr r1, [r4, #88]	@ 000a4ac2 a16d
.org 0xa4ac4
	bl 0x7c7c	@ 000a4ac4 63f7daf8
.org 0xa4ac8
	lsls r0, r0, #16	@ 000a4ac8 0004
.org 0xa4aca
	cmp r0, #0	@ 000a4aca 0028
.org 0xa4acc
	bne.n 0xa4ad0	@ 000a4acc 00d1
.org 0xa4ace
	b.n 0xa4bfc	@ 000a4ace 95e0
.org 0xa4ad0
	ldr r1, [r4, #88]	@ 000a4ad0 a16d
.org 0xa4ad2
	str r1, [sp, #4]	@ 000a4ad2 0191
.org 0xa4ad4
	ldr r0, [r4, #92]	@ 000a4ad4 e06d
.org 0xa4ad6
	cmp r0, #0	@ 000a4ad6 0028
.org 0xa4ad8
	bge.n 0xa4b40	@ 000a4ad8 32da
.org 0xa4ada
	ldr r0, [r4, #84]	@ 000a4ada 606d
.org 0xa4adc
	bl 0x8988	@ 000a4adc 63f754ff
.org 0xa4ae0
	str r0, [sp, #0]	@ 000a4ae0 0090
.org 0xa4ae2
	subs r0, #1	@ 000a4ae2 0138
.org 0xa4ae4
	ldr r1, [sp, #4]	@ 000a4ae4 0199
.org 0xa4ae6
	ldr r2, [pc, #32]	@ 000a4ae6 084a
.org 0xa4ae8
	adds r1, r1, r2	@ 000a4ae8 8918
.org 0xa4aea
	bl 0x7c7c	@ 000a4aea 63f7c7f8
.org 0xa4aee
	lsls r0, r0, #16	@ 000a4aee 0004
.org 0xa4af0
	cmp r0, #0	@ 000a4af0 0028
.org 0xa4af2
	bne.n 0xa4b0c	@ 000a4af2 0bd1
.org 0xa4af4
	ldr r0, [sp, #0]	@ 000a4af4 0098
.org 0xa4af6
	subs r0, #1	@ 000a4af6 0138
.org 0xa4af8
	ldr r1, [sp, #4]	@ 000a4af8 0199
.org 0xa4afa
	ldr r2, [pc, #12]	@ 000a4afa 034a
.org 0xa4afc
	adds r1, r1, r2	@ 000a4afc 8918
.org 0xa4afe
	bl 0x8534	@ 000a4afe 63f719fd
.org 0xa4b02
	movs r1, #128	@ 000a4b02 8021
.org 0xa4b04
	lsls r1, r1, #5	@ 000a4b04 4901
.org 0xa4b06
	b.n 0xa4b34	@ 000a4b06 15e0
.org 0xa4b08
	.byte 0x00,0xf0,0xff,0xff	@ 000a4b08 data
.org 0xa4b0c
	ldr r0, [sp, #0]	@ 000a4b0c 0098
.org 0xa4b0e
	subs r0, #1	@ 000a4b0e 0138
.org 0xa4b10
	ldr r1, [sp, #4]	@ 000a4b10 0199
.org 0xa4b12
	movs r2, #128	@ 000a4b12 8022
.org 0xa4b14
	lsls r2, r2, #5	@ 000a4b14 5201
.org 0xa4b16
	adds r1, r1, r2	@ 000a4b16 8918
.org 0xa4b18
	bl 0x7c7c	@ 000a4b18 63f7b0f8
.org 0xa4b1c
	lsls r0, r0, #16	@ 000a4b1c 0004
.org 0xa4b1e
	cmp r0, #0	@ 000a4b1e 0028
.org 0xa4b20
	bne.n 0xa4b38	@ 000a4b20 0ad1
.org 0xa4b22
	ldr r0, [sp, #0]	@ 000a4b22 0098
.org 0xa4b24
	subs r0, #1	@ 000a4b24 0138
.org 0xa4b26
	ldr r1, [sp, #4]	@ 000a4b26 0199
.org 0xa4b28
	movs r2, #128	@ 000a4b28 8022
.org 0xa4b2a
	lsls r2, r2, #5	@ 000a4b2a 5201
.org 0xa4b2c
	adds r1, r1, r2	@ 000a4b2c 8918
.org 0xa4b2e
	bl 0x8748	@ 000a4b2e 63f70bfe
.org 0xa4b32
	ldr r1, [pc, #8]	@ 000a4b32 0249
.org 0xa4b34
	adds r0, r0, r1	@ 000a4b34 4018
.org 0xa4b36
	str r0, [sp, #4]	@ 000a4b36 0190
.org 0xa4b38
	movs r5, #1	@ 000a4b38 0125
.org 0xa4b3a
	b.n 0xa4ba2	@ 000a4b3a 32e0
.org 0xa4b3c
	.byte 0x00,0xf0,0xff,0xff	@ 000a4b3c data
.org 0xa4b40
	ldr r0, [r4, #84]	@ 000a4b40 606d
.org 0xa4b42
	bl 0x8868	@ 000a4b42 63f791fe
.org 0xa4b46
	str r0, [sp, #0]	@ 000a4b46 0090
.org 0xa4b48
	adds r0, #1	@ 000a4b48 0130
.org 0xa4b4a
	ldr r1, [sp, #4]	@ 000a4b4a 0199
.org 0xa4b4c
	ldr r2, [pc, #32]	@ 000a4b4c 084a
.org 0xa4b4e
	adds r1, r1, r2	@ 000a4b4e 8918
.org 0xa4b50
	bl 0x7c7c	@ 000a4b50 63f794f8
.org 0xa4b54
	lsls r0, r0, #16	@ 000a4b54 0004
.org 0xa4b56
	cmp r0, #0	@ 000a4b56 0028
.org 0xa4b58
	bne.n 0xa4b74	@ 000a4b58 0cd1
.org 0xa4b5a
	ldr r0, [sp, #0]	@ 000a4b5a 0098
.org 0xa4b5c
	adds r0, #1	@ 000a4b5c 0130
.org 0xa4b5e
	ldr r1, [sp, #4]	@ 000a4b5e 0199
.org 0xa4b60
	ldr r2, [pc, #12]	@ 000a4b60 034a
.org 0xa4b62
	adds r1, r1, r2	@ 000a4b62 8918
.org 0xa4b64
	bl 0x8534	@ 000a4b64 63f7e6fc
.org 0xa4b68
	movs r1, #128	@ 000a4b68 8021
.org 0xa4b6a
	lsls r1, r1, #5	@ 000a4b6a 4901
.org 0xa4b6c
	b.n 0xa4b9c	@ 000a4b6c 16e0
.org 0xa4b6e
	.byte 0x00	@ 000a4b6e data
.org 0xa4b6f
	.byte 0x00	@ 000a4b6f data
.org 0xa4b70
	.byte 0x00,0xf0,0xff,0xff	@ 000a4b70 data
.org 0xa4b74
	ldr r0, [sp, #0]	@ 000a4b74 0098
.org 0xa4b76
	adds r0, #1	@ 000a4b76 0130
.org 0xa4b78
	ldr r1, [sp, #4]	@ 000a4b78 0199
.org 0xa4b7a
	movs r2, #128	@ 000a4b7a 8022
.org 0xa4b7c
	lsls r2, r2, #5	@ 000a4b7c 5201
.org 0xa4b7e
	adds r1, r1, r2	@ 000a4b7e 8918
.org 0xa4b80
	bl 0x7c7c	@ 000a4b80 63f77cf8
.org 0xa4b84
	lsls r0, r0, #16	@ 000a4b84 0004
.org 0xa4b86
	cmp r0, #0	@ 000a4b86 0028
.org 0xa4b88
	bne.n 0xa4ba0	@ 000a4b88 0ad1
.org 0xa4b8a
	ldr r0, [sp, #0]	@ 000a4b8a 0098
.org 0xa4b8c
	adds r0, #1	@ 000a4b8c 0130
.org 0xa4b8e
	ldr r1, [sp, #4]	@ 000a4b8e 0199
.org 0xa4b90
	movs r2, #128	@ 000a4b90 8022
.org 0xa4b92
	lsls r2, r2, #5	@ 000a4b92 5201
.org 0xa4b94
	adds r1, r1, r2	@ 000a4b94 8918
.org 0xa4b96
	bl 0x8748	@ 000a4b96 63f7d7fd
.org 0xa4b9a
	ldr r1, [pc, #44]	@ 000a4b9a 0b49
.org 0xa4b9c
	adds r0, r0, r1	@ 000a4b9c 4018
.org 0xa4b9e
	str r0, [sp, #4]	@ 000a4b9e 0190
.org 0xa4ba0
	movs r5, #0	@ 000a4ba0 0025
.org 0xa4ba2
	ldr r1, [sp, #4]	@ 000a4ba2 0199
.org 0xa4ba4
	ldr r2, [pc, #32]	@ 000a4ba4 084a
.org 0xa4ba6
	adds r1, r1, r2	@ 000a4ba6 8918
.org 0xa4ba8
	ldr r0, [sp, #0]	@ 000a4ba8 0098
.org 0xa4baa
	bl 0x7c7c	@ 000a4baa 63f767f8
.org 0xa4bae
	lsls r0, r0, #16	@ 000a4bae 0004
.org 0xa4bb0
	cmp r0, #0	@ 000a4bb0 0028
.org 0xa4bb2
	beq.n 0xa4bcc	@ 000a4bb2 0bd0
.org 0xa4bb4
	ldr r1, [sp, #4]	@ 000a4bb4 0199
.org 0xa4bb6
	ldr r0, [pc, #16]	@ 000a4bb6 0448
.org 0xa4bb8
	adds r1, r1, r0	@ 000a4bb8 0918
.org 0xa4bba
	ldr r0, [sp, #0]	@ 000a4bba 0098
.org 0xa4bbc
	bl 0x8748	@ 000a4bbc 63f7c4fd
.org 0xa4bc0
	movs r1, #128	@ 000a4bc0 8021
.org 0xa4bc2
	lsls r1, r1, #5	@ 000a4bc2 4901
.org 0xa4bc4
	b.n 0xa4bf2	@ 000a4bc4 15e0
.org 0xa4bc6
	.byte 0x00	@ 000a4bc6 data
.org 0xa4bc7
	.byte 0x00	@ 000a4bc7 data
.org 0xa4bc8
	.byte 0x00,0xf0,0xff,0xff	@ 000a4bc8 data
.org 0xa4bcc
	ldr r1, [sp, #4]	@ 000a4bcc 0199
.org 0xa4bce
	movs r2, #128	@ 000a4bce 8022
.org 0xa4bd0
	lsls r2, r2, #5	@ 000a4bd0 5201
.org 0xa4bd2
	adds r1, r1, r2	@ 000a4bd2 8918
.org 0xa4bd4
	ldr r0, [sp, #0]	@ 000a4bd4 0098
.org 0xa4bd6
	bl 0x7c7c	@ 000a4bd6 63f751f8
.org 0xa4bda
	lsls r0, r0, #16	@ 000a4bda 0004
.org 0xa4bdc
	cmp r0, #0	@ 000a4bdc 0028
.org 0xa4bde
	bne.n 0xa4be2	@ 000a4bde 00d1
.org 0xa4be0
	b.n 0xa4d44	@ 000a4be0 b0e0
.org 0xa4be2
	ldr r1, [sp, #4]	@ 000a4be2 0199
.org 0xa4be4
	movs r0, #128	@ 000a4be4 8020
.org 0xa4be6
	lsls r0, r0, #5	@ 000a4be6 4001
.org 0xa4be8
	adds r1, r1, r0	@ 000a4be8 0918
.org 0xa4bea
	ldr r0, [sp, #0]	@ 000a4bea 0098
.org 0xa4bec
	bl 0x8534	@ 000a4bec 63f7a2fc
.org 0xa4bf0
	ldr r1, [pc, #4]	@ 000a4bf0 0149
.org 0xa4bf2
	adds r0, r0, r1	@ 000a4bf2 4018
.org 0xa4bf4
	str r0, [sp, #4]	@ 000a4bf4 0190
.org 0xa4bf6
	b.n 0xa4d44	@ 000a4bf6 a5e0
.org 0xa4bf8
	.byte 0x00,0xf0,0xff,0xff	@ 000a4bf8 data
.org 0xa4bfc
	ldr r1, [r4, #88]	@ 000a4bfc a16d
.org 0xa4bfe
	ldr r0, [r4, #96]	@ 000a4bfe 206e
.org 0xa4c00
	adds r1, r1, r0	@ 000a4c00 0918
.org 0xa4c02
	str r1, [r4, #88]	@ 000a4c02 a165
.org 0xa4c04
	ldr r0, [r4, #84]	@ 000a4c04 606d
.org 0xa4c06
	bl 0x7c7c	@ 000a4c06 63f739f8
.org 0xa4c0a
	lsls r0, r0, #16	@ 000a4c0a 0004
.org 0xa4c0c
	lsrs r5, r0, #16	@ 000a4c0c 050c
.org 0xa4c0e
	cmp r5, #0	@ 000a4c0e 002d
.org 0xa4c10
	bne.n 0xa4c14	@ 000a4c10 00d1
.org 0xa4c12
	b.n 0xa4d8c	@ 000a4c12 bbe0
.org 0xa4c14
	ldr r2, [r4, #84]	@ 000a4c14 626d
.org 0xa4c16
	str r2, [sp, #0]	@ 000a4c16 0092
.org 0xa4c18
	ldr r0, [r4, #96]	@ 000a4c18 206e
.org 0xa4c1a
	adds r3, r2, #0	@ 000a4c1a 131c
.org 0xa4c1c
	cmp r0, #0	@ 000a4c1c 0028
.org 0xa4c1e
	bge.n 0xa4c8c	@ 000a4c1e 35da
.org 0xa4c20
	ldr r1, [r4, #88]	@ 000a4c20 a16d
.org 0xa4c22
	adds r0, r3, #0	@ 000a4c22 181c
.org 0xa4c24
	bl 0x8748	@ 000a4c24 63f790fd
.org 0xa4c28
	adds r1, r0, #0	@ 000a4c28 011c
.org 0xa4c2a
	str r1, [sp, #4]	@ 000a4c2a 0191
.org 0xa4c2c
	ldr r0, [sp, #0]	@ 000a4c2c 0098
.org 0xa4c2e
	ldr r2, [pc, #36]	@ 000a4c2e 094a
.org 0xa4c30
	adds r0, r0, r2	@ 000a4c30 8018
.org 0xa4c32
	subs r1, #1	@ 000a4c32 0139
.org 0xa4c34
	bl 0x7c7c	@ 000a4c34 63f722f8
.org 0xa4c38
	lsls r0, r0, #16	@ 000a4c38 0004
.org 0xa4c3a
	cmp r0, #0	@ 000a4c3a 0028
.org 0xa4c3c
	bne.n 0xa4c58	@ 000a4c3c 0cd1
.org 0xa4c3e
	ldr r0, [sp, #0]	@ 000a4c3e 0098
.org 0xa4c40
	ldr r1, [pc, #16]	@ 000a4c40 0449
.org 0xa4c42
	adds r0, r0, r1	@ 000a4c42 4018
.org 0xa4c44
	ldr r1, [sp, #4]	@ 000a4c44 0199
.org 0xa4c46
	subs r1, #1	@ 000a4c46 0139
.org 0xa4c48
	bl 0x8868	@ 000a4c48 63f70efe
.org 0xa4c4c
	movs r2, #128	@ 000a4c4c 8022
.org 0xa4c4e
	lsls r2, r2, #5	@ 000a4c4e 5201
.org 0xa4c50
	adds r0, r0, r2	@ 000a4c50 8018
.org 0xa4c52
	b.n 0xa4c82	@ 000a4c52 16e0
.org 0xa4c54
	.byte 0x00,0xf0,0xff,0xff	@ 000a4c54 data
.org 0xa4c58
	ldr r0, [sp, #0]	@ 000a4c58 0098
.org 0xa4c5a
	movs r1, #128	@ 000a4c5a 8021
.org 0xa4c5c
	lsls r1, r1, #5	@ 000a4c5c 4901
.org 0xa4c5e
	adds r0, r0, r1	@ 000a4c5e 4018
.org 0xa4c60
	ldr r1, [sp, #4]	@ 000a4c60 0199
.org 0xa4c62
	subs r1, #1	@ 000a4c62 0139
.org 0xa4c64
	bl 0x7c7c	@ 000a4c64 63f70af8
.org 0xa4c68
	lsls r0, r0, #16	@ 000a4c68 0004
.org 0xa4c6a
	cmp r0, #0	@ 000a4c6a 0028
.org 0xa4c6c
	bne.n 0xa4c84	@ 000a4c6c 0ad1
.org 0xa4c6e
	ldr r0, [sp, #0]	@ 000a4c6e 0098
.org 0xa4c70
	movs r2, #128	@ 000a4c70 8022
.org 0xa4c72
	lsls r2, r2, #5	@ 000a4c72 5201
.org 0xa4c74
	adds r0, r0, r2	@ 000a4c74 8018
.org 0xa4c76
	ldr r1, [sp, #4]	@ 000a4c76 0199
.org 0xa4c78
	subs r1, #1	@ 000a4c78 0139
.org 0xa4c7a
	bl 0x8988	@ 000a4c7a 63f785fe
.org 0xa4c7e
	ldr r1, [pc, #8]	@ 000a4c7e 0249
.org 0xa4c80
	adds r0, r0, r1	@ 000a4c80 4018
.org 0xa4c82
	str r0, [sp, #0]	@ 000a4c82 0090
.org 0xa4c84
	movs r5, #3	@ 000a4c84 0325
.org 0xa4c86
	b.n 0xa4cf2	@ 000a4c86 34e0
.org 0xa4c88
	.byte 0x00,0xf0,0xff,0xff	@ 000a4c88 data
.org 0xa4c8c
	ldr r1, [r4, #88]	@ 000a4c8c a16d
.org 0xa4c8e
	adds r0, r2, #0	@ 000a4c8e 101c
.org 0xa4c90
	bl 0x8534	@ 000a4c90 63f750fc
.org 0xa4c94
	adds r1, r0, #0	@ 000a4c94 011c
.org 0xa4c96
	str r1, [sp, #4]	@ 000a4c96 0191
.org 0xa4c98
	ldr r0, [sp, #0]	@ 000a4c98 0098
.org 0xa4c9a
	ldr r2, [pc, #36]	@ 000a4c9a 094a
.org 0xa4c9c
	adds r0, r0, r2	@ 000a4c9c 8018
.org 0xa4c9e
	adds r1, #1	@ 000a4c9e 0131
.org 0xa4ca0
	bl 0x7c7c	@ 000a4ca0 62f7ecff
.org 0xa4ca4
	lsls r0, r0, #16	@ 000a4ca4 0004
.org 0xa4ca6
	cmp r0, #0	@ 000a4ca6 0028
.org 0xa4ca8
	bne.n 0xa4cc4	@ 000a4ca8 0cd1
.org 0xa4caa
	ldr r0, [sp, #0]	@ 000a4caa 0098
.org 0xa4cac
	ldr r1, [pc, #16]	@ 000a4cac 0449
.org 0xa4cae
	adds r0, r0, r1	@ 000a4cae 4018
.org 0xa4cb0
	ldr r1, [sp, #4]	@ 000a4cb0 0199
.org 0xa4cb2
	adds r1, #1	@ 000a4cb2 0131
.org 0xa4cb4
	bl 0x8868	@ 000a4cb4 63f7d8fd
.org 0xa4cb8
	movs r2, #128	@ 000a4cb8 8022
.org 0xa4cba
	lsls r2, r2, #5	@ 000a4cba 5201
.org 0xa4cbc
	adds r0, r0, r2	@ 000a4cbc 8018
.org 0xa4cbe
	b.n 0xa4cee	@ 000a4cbe 16e0
.org 0xa4cc0
	.byte 0x00,0xf0,0xff,0xff	@ 000a4cc0 data
.org 0xa4cc4
	ldr r0, [sp, #0]	@ 000a4cc4 0098
.org 0xa4cc6
	movs r1, #128	@ 000a4cc6 8021
.org 0xa4cc8
	lsls r1, r1, #5	@ 000a4cc8 4901
.org 0xa4cca
	adds r0, r0, r1	@ 000a4cca 4018
.org 0xa4ccc
	ldr r1, [sp, #4]	@ 000a4ccc 0199
.org 0xa4cce
	adds r1, #1	@ 000a4cce 0131
.org 0xa4cd0
	bl 0x7c7c	@ 000a4cd0 62f7d4ff
.org 0xa4cd4
	lsls r0, r0, #16	@ 000a4cd4 0004
.org 0xa4cd6
	cmp r0, #0	@ 000a4cd6 0028
.org 0xa4cd8
	bne.n 0xa4cf0	@ 000a4cd8 0ad1
.org 0xa4cda
	ldr r0, [sp, #0]	@ 000a4cda 0098
.org 0xa4cdc
	movs r2, #128	@ 000a4cdc 8022
.org 0xa4cde
	lsls r2, r2, #5	@ 000a4cde 5201
.org 0xa4ce0
	adds r0, r0, r2	@ 000a4ce0 8018
.org 0xa4ce2
	ldr r1, [sp, #4]	@ 000a4ce2 0199
.org 0xa4ce4
	adds r1, #1	@ 000a4ce4 0131
.org 0xa4ce6
	bl 0x8988	@ 000a4ce6 63f74ffe
.org 0xa4cea
	ldr r1, [pc, #44]	@ 000a4cea 0b49
.org 0xa4cec
	adds r0, r0, r1	@ 000a4cec 4018
.org 0xa4cee
	str r0, [sp, #0]	@ 000a4cee 0090
.org 0xa4cf0
	movs r5, #2	@ 000a4cf0 0225
.org 0xa4cf2
	ldr r0, [sp, #0]	@ 000a4cf2 0098
.org 0xa4cf4
	ldr r2, [pc, #32]	@ 000a4cf4 084a
.org 0xa4cf6
	adds r0, r0, r2	@ 000a4cf6 8018
.org 0xa4cf8
	ldr r1, [sp, #4]	@ 000a4cf8 0199
.org 0xa4cfa
	bl 0x7c7c	@ 000a4cfa 62f7bfff
.org 0xa4cfe
	lsls r0, r0, #16	@ 000a4cfe 0004
.org 0xa4d00
	cmp r0, #0	@ 000a4d00 0028
.org 0xa4d02
	beq.n 0xa4d1c	@ 000a4d02 0bd0
.org 0xa4d04
	ldr r0, [sp, #0]	@ 000a4d04 0098
.org 0xa4d06
	ldr r1, [pc, #16]	@ 000a4d06 0449
.org 0xa4d08
	adds r0, r0, r1	@ 000a4d08 4018
.org 0xa4d0a
	ldr r1, [sp, #4]	@ 000a4d0a 0199
.org 0xa4d0c
	bl 0x8988	@ 000a4d0c 63f73cfe
.org 0xa4d10
	movs r2, #128	@ 000a4d10 8022
.org 0xa4d12
	lsls r2, r2, #5	@ 000a4d12 5201
.org 0xa4d14
	adds r0, r0, r2	@ 000a4d14 8018
.org 0xa4d16
	b.n 0xa4d42	@ 000a4d16 14e0
.org 0xa4d18
	.byte 0x00,0xf0,0xff,0xff	@ 000a4d18 data
.org 0xa4d1c
	ldr r0, [sp, #0]	@ 000a4d1c 0098
.org 0xa4d1e
	movs r1, #128	@ 000a4d1e 8021
.org 0xa4d20
	lsls r1, r1, #5	@ 000a4d20 4901
.org 0xa4d22
	adds r0, r0, r1	@ 000a4d22 4018
.org 0xa4d24
	ldr r1, [sp, #4]	@ 000a4d24 0199
.org 0xa4d26
	bl 0x7c7c	@ 000a4d26 62f7a9ff
.org 0xa4d2a
	lsls r0, r0, #16	@ 000a4d2a 0004
.org 0xa4d2c
	cmp r0, #0	@ 000a4d2c 0028
.org 0xa4d2e
	beq.n 0xa4d44	@ 000a4d2e 09d0
.org 0xa4d30
	ldr r0, [sp, #0]	@ 000a4d30 0098
.org 0xa4d32
	movs r2, #128	@ 000a4d32 8022
.org 0xa4d34
	lsls r2, r2, #5	@ 000a4d34 5201
.org 0xa4d36
	adds r0, r0, r2	@ 000a4d36 8018
.org 0xa4d38
	ldr r1, [sp, #4]	@ 000a4d38 0199
.org 0xa4d3a
	bl 0x8868	@ 000a4d3a 63f795fd
.org 0xa4d3e
	ldr r1, [pc, #68]	@ 000a4d3e 1149
.org 0xa4d40
	adds r0, r0, r1	@ 000a4d40 4018
.org 0xa4d42
	str r0, [sp, #0]	@ 000a4d42 0090
.org 0xa4d44
	mov r0, sp	@ 000a4d44 6846
.org 0xa4d46
	adds r1, r5, #0	@ 000a4d46 291c
.org 0xa4d48
	bl 0xa4810	@ 000a4d48 fff762fd
.org 0xa4d4c
	ldrb r1, [r4, #10]	@ 000a4d4c a17a
.org 0xa4d4e
	movs r0, #254	@ 000a4d4e fe20
.org 0xa4d50
	ands r0, r1	@ 000a4d50 0840
.org 0xa4d52
	movs r2, #0	@ 000a4d52 0022
.org 0xa4d54
	movs r1, #253	@ 000a4d54 fd21
.org 0xa4d56
	ands r0, r1	@ 000a4d56 0840
.org 0xa4d58
	strb r0, [r4, #10]	@ 000a4d58 a072
.org 0xa4d5a
	adds r0, r4, #0	@ 000a4d5a 201c
.org 0xa4d5c
	adds r0, #140	@ 000a4d5c 8c30
.org 0xa4d5e
	str r2, [r0, #0]	@ 000a4d5e 0260
.org 0xa4d60
	adds r0, #4	@ 000a4d60 0430
.org 0xa4d62
	str r2, [r0, #0]	@ 000a4d62 0260
.org 0xa4d64
	adds r0, #4	@ 000a4d64 0430
.org 0xa4d66
	strb r2, [r0, #0]	@ 000a4d66 0270
.org 0xa4d68
	ldrb r1, [r4, #10]	@ 000a4d68 a17a
.org 0xa4d6a
	movs r0, #251	@ 000a4d6a fb20
.org 0xa4d6c
	ands r0, r1	@ 000a4d6c 0840
.org 0xa4d6e
	strb r0, [r4, #10]	@ 000a4d6e a072
.org 0xa4d70
	ldr r1, [pc, #20]	@ 000a4d70 0549
.org 0xa4d72
	ldrb r0, [r4, #9]	@ 000a4d72 607a
.org 0xa4d74
	lsls r0, r0, #2	@ 000a4d74 8000
.org 0xa4d76
	adds r0, r0, r1	@ 000a4d76 4018
.org 0xa4d78
	movs r1, #3	@ 000a4d78 0321
.org 0xa4d7a
	str r1, [r4, #12]	@ 000a4d7a e160
.org 0xa4d7c
	ldr r0, [r0, #0]	@ 000a4d7c 0068
.org 0xa4d7e
	ldr r0, [r0, #12]	@ 000a4d7e c068
.org 0xa4d80
	str r0, [r4, #20]	@ 000a4d80 6061
.org 0xa4d82
	b.n 0xa4de4	@ 000a4d82 2fe0
.org 0xa4d84
	.byte 0x00,0xf0,0xff,0xff	@ 000a4d84 data
.org 0xa4d88
	.byte 0x40,0xdb,0x85,0x08	@ 000a4d88 data
.org 0xa4d8c
	ldr r0, [r4, #96]	@ 000a4d8c 206e
.org 0xa4d8e
	adds r0, #64	@ 000a4d8e 4030
.org 0xa4d90
	str r0, [r4, #96]	@ 000a4d90 2066
.org 0xa4d92
	movs r1, #224	@ 000a4d92 e021
.org 0xa4d94
	lsls r1, r1, #3	@ 000a4d94 c900
.org 0xa4d96
	cmp r0, r1	@ 000a4d96 8842
.org 0xa4d98
	ble.n 0xa4d9c	@ 000a4d98 00dd
.org 0xa4d9a
	str r1, [r4, #96]	@ 000a4d9a 2166
.org 0xa4d9c
	ldrb r0, [r4, #18]	@ 000a4d9c a07c
.org 0xa4d9e
	adds r0, #1	@ 000a4d9e 0130
.org 0xa4da0
	strb r0, [r4, #18]	@ 000a4da0 a074
.org 0xa4da2
	movs r1, #255	@ 000a4da2 ff21
.org 0xa4da4
	ands r0, r1	@ 000a4da4 0840
.org 0xa4da6
	movs r1, #3	@ 000a4da6 0321
.org 0xa4da8
	ands r0, r1	@ 000a4da8 0840
.org 0xa4daa
	cmp r0, #0	@ 000a4daa 0028
.org 0xa4dac
	bne.n 0xa4dc6	@ 000a4dac 0bd1
.org 0xa4dae
	ldr r0, [r4, #84]	@ 000a4dae 606d
.org 0xa4db0
	str r0, [sp, #0]	@ 000a4db0 0090
.org 0xa4db2
	ldr r0, [r4, #88]	@ 000a4db2 a06d

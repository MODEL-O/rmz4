@ FUN_08021a10  entry 0x08021a10  size 678
.thumb
.org 0x21a10
FUN_08021a10:
	push {r4, r5, r6, r7, lr}	@ 00021a10 f0b5
.org 0x21a12
	adds r4, r0, #0	@ 00021a12 041c
.org 0x21a14
	ldr r5, [r4, #32]	@ 00021a14 256a
.org 0x21a16
	movs r0, #190	@ 00021a16 be20
.org 0x21a18
	lsls r0, r0, #1	@ 00021a18 4000
.org 0x21a1a
	adds r6, r4, r0	@ 00021a1a 2618
.org 0x21a1c
	ldrb r0, [r6, #0]	@ 00021a1c 3078
.org 0x21a1e
	cmp r0, #0	@ 00021a1e 0028
.org 0x21a20
	bne.n 0x21ad0	@ 00021a20 56d1
.org 0x21a22
	ldr r4, [pc, #60]	@ 00021a22 0f4c
.org 0x21a24
	ldrh r1, [r4, #8]	@ 00021a24 2189
.org 0x21a26
	movs r0, #1	@ 00021a26 0120
.org 0x21a28
	movs r5, #0	@ 00021a28 0025
.org 0x21a2a
	orrs r0, r1	@ 00021a2a 0843
.org 0x21a2c
	strh r0, [r4, #8]	@ 00021a2c 2081
.org 0x21a2e
	ldr r2, [pc, #52]	@ 00021a2e 0d4a
.org 0x21a30
	ldrb r1, [r2, #4]	@ 00021a30 1179
.org 0x21a32
	movs r0, #8	@ 00021a32 0820
.org 0x21a34
	orrs r0, r1	@ 00021a34 0843
.org 0x21a36
	strb r0, [r2, #4]	@ 00021a36 1071
.org 0x21a38
	ldrb r0, [r4, #2]	@ 00021a38 a078
.org 0x21a3a
	cmp r0, #0	@ 00021a3a 0028
.org 0x21a3c
	bne.n 0x21a70	@ 00021a3c 18d1
.org 0x21a3e
	movs r0, #161	@ 00021a3e a120
.org 0x21a40
	lsls r0, r0, #2	@ 00021a40 8000
.org 0x21a42
	adds r1, r4, r0	@ 00021a42 2118
.org 0x21a44
	ldr r0, [pc, #32]	@ 00021a44 0848
.org 0x21a46
	str r0, [r1, #0]	@ 00021a46 0860
.org 0x21a48
	adds r0, r4, #0	@ 00021a48 201c
.org 0x21a4a
	adds r0, #16	@ 00021a4a 1030
.org 0x21a4c
	ldr r1, [pc, #28]	@ 00021a4c 0749
.org 0x21a4e
	ldr r1, [r1, #16]	@ 00021a4e 0969
.org 0x21a50
	ldr r1, [r1, #56]	@ 00021a50 896b
.org 0x21a52
	bl 0x275f0	@ 00021a52 05f0cdfd
.org 0x21a56
	movs r0, #3	@ 00021a56 0320
.org 0x21a58
	bl 0x1f63c	@ 00021a58 fdf7f0fd
.org 0x21a5c
	movs r0, #3	@ 00021a5c 0320
.org 0x21a5e
	b.n 0x21d2c	@ 00021a5e 65e1
.org 0x21a60
	.byte 0x10,0xe9,0x02,0x02	@ 00021a60 data
.org 0x21a64
	.byte 0xb0,0xe8,0x02,0x02	@ 00021a64 data
.org 0x21a68
	.byte 0xd0,0x20,0x00,0x00	@ 00021a68 data
.org 0x21a6c
	.byte 0xf8,0x2c,0x84,0x08	@ 00021a6c data
.org 0x21a70
	cmp r0, #3	@ 00021a70 0328
.org 0x21a72
	bne.n 0x21a90	@ 00021a72 0dd1
.org 0x21a74
	adds r0, r4, #0	@ 00021a74 201c
.org 0x21a76
	adds r0, #16	@ 00021a76 1030
.org 0x21a78
	ldr r1, [pc, #16]	@ 00021a78 0449
.org 0x21a7a
	ldr r1, [r1, #16]	@ 00021a7a 0969
.org 0x21a7c
	ldr r1, [r1, #16]	@ 00021a7c 0969
.org 0x21a7e
	bl 0x275f0	@ 00021a7e 05f0b7fd
.org 0x21a82
	movs r0, #4	@ 00021a82 0420
.org 0x21a84
	bl 0x1f63c	@ 00021a84 fdf7dafd
.org 0x21a88
	movs r0, #4	@ 00021a88 0420
.org 0x21a8a
	b.n 0x21d2c	@ 00021a8a 4fe1
.org 0x21a8c
	.byte 0xf8,0x2c,0x84,0x08	@ 00021a8c data
.org 0x21a90
	cmp r0, #4	@ 00021a90 0428
.org 0x21a92
	bne.n 0x21ab4	@ 00021a92 0fd1
.org 0x21a94
	adds r0, r4, #0	@ 00021a94 201c
.org 0x21a96
	adds r0, #16	@ 00021a96 1030
.org 0x21a98
	ldr r1, [pc, #20]	@ 00021a98 0549
.org 0x21a9a
	ldr r1, [r1, #16]	@ 00021a9a 0969
.org 0x21a9c
	ldr r1, [r1, #24]	@ 00021a9c 8969
.org 0x21a9e
	bl 0x275f0	@ 00021a9e 05f0a7fd
.org 0x21aa2
	ldrh r0, [r4, #8]	@ 00021aa2 2089
.org 0x21aa4
	movs r1, #2	@ 00021aa4 0221
.org 0x21aa6
	orrs r0, r1	@ 00021aa6 0843
.org 0x21aa8
	strh r0, [r4, #8]	@ 00021aa8 2081
.org 0x21aaa
	movs r0, #5	@ 00021aaa 0520
.org 0x21aac
	b.n 0x21d2c	@ 00021aac 3ee1
.org 0x21aae
	.byte 0x00	@ 00021aae data
.org 0x21aaf
	.byte 0x00	@ 00021aaf data
.org 0x21ab0
	.byte 0xf8,0x2c,0x84,0x08	@ 00021ab0 data
.org 0x21ab4
	cmp r0, #5	@ 00021ab4 0528
.org 0x21ab6
	beq.n 0x21aba	@ 00021ab6 00d0
.org 0x21ab8
	b.n 0x21d2e	@ 00021ab8 39e1
.org 0x21aba
	adds r0, r4, #0	@ 00021aba 201c
.org 0x21abc
	adds r0, #16	@ 00021abc 1030
.org 0x21abe
	ldr r1, [pc, #12]	@ 00021abe 0349
.org 0x21ac0
	ldr r1, [r1, #16]	@ 00021ac0 0969
.org 0x21ac2
	ldr r1, [r1, #32]	@ 00021ac2 096a
.org 0x21ac4
	bl 0x275f0	@ 00021ac4 05f094fd
.org 0x21ac8
	movs r0, #9	@ 00021ac8 0920
.org 0x21aca
	b.n 0x21d2c	@ 00021aca 2fe1
.org 0x21acc
	.byte 0xf8,0x2c,0x84,0x08	@ 00021acc data
.org 0x21ad0
	cmp r0, #3	@ 00021ad0 0328
.org 0x21ad2
	bne.n 0x21b2c	@ 00021ad2 2bd1
.org 0x21ad4
	ldr r0, [r5, #84]	@ 00021ad4 686d
.org 0x21ad6
	ldr r1, [pc, #68]	@ 00021ad6 1149
.org 0x21ad8
	adds r0, r0, r1	@ 00021ad8 4018
.org 0x21ada
	movs r1, #240	@ 00021ada f021
.org 0x21adc
	lsls r1, r1, #10	@ 00021adc 8902
.org 0x21ade
	bl 0x129050	@ 00021ade 07f1b7fa
.org 0x21ae2
	movs r1, #240	@ 00021ae2 f021
.org 0x21ae4
	lsls r1, r1, #8	@ 00021ae4 0902
.org 0x21ae6
	adds r0, r0, r1	@ 00021ae6 4018
.org 0x21ae8
	movs r1, #240	@ 00021ae8 f021
.org 0x21aea
	lsls r1, r1, #9	@ 00021aea 4902
.org 0x21aec
	cmp r0, r1	@ 00021aec 8842
.org 0x21aee
	ble.n 0x21b2c	@ 00021aee 1ddd
.org 0x21af0
	ldr r4, [pc, #44]	@ 00021af0 0b4c
.org 0x21af2
	ldr r0, [pc, #48]	@ 00021af2 0c48
.org 0x21af4
	ldr r0, [r0, #16]	@ 00021af4 0069
.org 0x21af6
	ldr r1, [r0, #20]	@ 00021af6 4169
.org 0x21af8
	adds r0, r4, #0	@ 00021af8 201c
.org 0x21afa
	bl 0x275f0	@ 00021afa 05f079fd
.org 0x21afe
	movs r0, #4	@ 00021afe 0420
.org 0x21b00
	bl 0x1f63c	@ 00021b00 fdf79cfd
.org 0x21b04
	ldr r2, [pc, #32]	@ 00021b04 084a
.org 0x21b06
	ldrb r1, [r2, #4]	@ 00021b06 1179
.org 0x21b08
	movs r0, #8	@ 00021b08 0820
.org 0x21b0a
	orrs r0, r1	@ 00021b0a 0843
.org 0x21b0c
	strb r0, [r2, #4]	@ 00021b0c 1071
.org 0x21b0e
	subs r4, #16	@ 00021b0e 103c
.org 0x21b10
	ldrh r1, [r4, #8]	@ 00021b10 2189
.org 0x21b12
	movs r0, #2	@ 00021b12 0220
.org 0x21b14
	orrs r0, r1	@ 00021b14 0843
.org 0x21b16
	strh r0, [r4, #8]	@ 00021b16 2081
.org 0x21b18
	movs r0, #5	@ 00021b18 0520
.org 0x21b1a
	b.n 0x21d2c	@ 00021b1a 07e1
.org 0x21b1c
	.byte 0x00,0x10,0xff,0xff	@ 00021b1c data
.org 0x21b20
	.byte 0x20,0xe9,0x02,0x02	@ 00021b20 data
.org 0x21b24
	.byte 0xf8,0x2c,0x84,0x08	@ 00021b24 data
.org 0x21b28
	.byte 0xb0,0xe8,0x02,0x02	@ 00021b28 data
.org 0x21b2c
	movs r0, #190	@ 00021b2c be20
.org 0x21b2e
	lsls r0, r0, #1	@ 00021b2e 4000
.org 0x21b30
	adds r6, r4, r0	@ 00021b30 2618
.org 0x21b32
	ldrb r0, [r6, #0]	@ 00021b32 3078
.org 0x21b34
	cmp r0, #4	@ 00021b34 0428
.org 0x21b36
	bne.n 0x21b90	@ 00021b36 2bd1
.org 0x21b38
	ldr r0, [r5, #84]	@ 00021b38 686d
.org 0x21b3a
	ldr r1, [pc, #68]	@ 00021b3a 1149
.org 0x21b3c
	adds r0, r0, r1	@ 00021b3c 4018
.org 0x21b3e
	movs r1, #240	@ 00021b3e f021
.org 0x21b40
	lsls r1, r1, #10	@ 00021b40 8902
.org 0x21b42
	bl 0x129050	@ 00021b42 07f185fa
.org 0x21b46
	movs r1, #240	@ 00021b46 f021
.org 0x21b48
	lsls r1, r1, #8	@ 00021b48 0902
.org 0x21b4a
	adds r0, r0, r1	@ 00021b4a 4018
.org 0x21b4c
	movs r1, #240	@ 00021b4c f021
.org 0x21b4e
	lsls r1, r1, #9	@ 00021b4e 4902
.org 0x21b50
	cmp r0, r1	@ 00021b50 8842
.org 0x21b52
	ble.n 0x21b90	@ 00021b52 1ddd
.org 0x21b54
	ldr r4, [pc, #44]	@ 00021b54 0b4c
.org 0x21b56
	ldr r0, [pc, #48]	@ 00021b56 0c48
.org 0x21b58
	ldr r0, [r0, #16]	@ 00021b58 0069
.org 0x21b5a
	ldr r1, [r0, #20]	@ 00021b5a 4169
.org 0x21b5c
	adds r0, r4, #0	@ 00021b5c 201c
.org 0x21b5e
	bl 0x275f0	@ 00021b5e 05f047fd
.org 0x21b62
	movs r0, #4	@ 00021b62 0420
.org 0x21b64
	bl 0x1f63c	@ 00021b64 fdf76afd
.org 0x21b68
	ldr r2, [pc, #32]	@ 00021b68 084a
.org 0x21b6a
	ldrb r1, [r2, #4]	@ 00021b6a 1179
.org 0x21b6c
	movs r0, #8	@ 00021b6c 0820
.org 0x21b6e
	orrs r0, r1	@ 00021b6e 0843
.org 0x21b70
	strb r0, [r2, #4]	@ 00021b70 1071
.org 0x21b72
	subs r4, #16	@ 00021b72 103c
.org 0x21b74
	ldrh r1, [r4, #8]	@ 00021b74 2189
.org 0x21b76
	movs r0, #2	@ 00021b76 0220
.org 0x21b78
	orrs r0, r1	@ 00021b78 0843
.org 0x21b7a
	strh r0, [r4, #8]	@ 00021b7a 2081
.org 0x21b7c
	movs r0, #5	@ 00021b7c 0520
.org 0x21b7e
	b.n 0x21d2c	@ 00021b7e d5e0
.org 0x21b80
	.byte 0x00,0x10,0xff,0xff	@ 00021b80 data
.org 0x21b84
	.byte 0x20,0xe9,0x02,0x02	@ 00021b84 data
.org 0x21b88
	.byte 0xf8,0x2c,0x84,0x08	@ 00021b88 data
.org 0x21b8c
	.byte 0xb0,0xe8,0x02,0x02	@ 00021b8c data
.org 0x21b90
	movs r0, #190	@ 00021b90 be20
.org 0x21b92
	lsls r0, r0, #1	@ 00021b92 4000
.org 0x21b94
	adds r7, r4, r0	@ 00021b94 2718
.org 0x21b96
	ldrb r0, [r7, #0]	@ 00021b96 3878
.org 0x21b98
	cmp r0, #5	@ 00021b98 0528
.org 0x21b9a
	bne.n 0x21ba8	@ 00021b9a 05d1
.org 0x21b9c
	movs r0, #3	@ 00021b9c 0320
.org 0x21b9e
	bl 0x1f63c	@ 00021b9e fdf74dfd
.org 0x21ba2
	movs r0, #6	@ 00021ba2 0620
.org 0x21ba4
	strb r0, [r7, #0]	@ 00021ba4 3870
.org 0x21ba6
	b.n 0x21d2e	@ 00021ba6 c2e0
.org 0x21ba8
	cmp r0, #6	@ 00021ba8 0628
.org 0x21baa
	bne.n 0x21c18	@ 00021baa 35d1
.org 0x21bac
	ldr r6, [pc, #80]	@ 00021bac 144e
.org 0x21bae
	ldrh r1, [r6, #8]	@ 00021bae 3189
.org 0x21bb0
	movs r0, #16	@ 00021bb0 1020
.org 0x21bb2
	ands r0, r1	@ 00021bb2 0840
.org 0x21bb4
	cmp r0, #0	@ 00021bb4 0028
.org 0x21bb6
	beq.n 0x21c18	@ 00021bb6 2fd0
.org 0x21bb8
	ldr r1, [pc, #72]	@ 00021bb8 1249
.org 0x21bba
	ldrb r2, [r1, #0]	@ 00021bba 0a78
.org 0x21bbc
	movs r0, #128	@ 00021bbc 8020
.org 0x21bbe
	orrs r0, r2	@ 00021bbe 1043
.org 0x21bc0
	strb r0, [r1, #0]	@ 00021bc0 0870
.org 0x21bc2
	ldrb r2, [r1, #1]	@ 00021bc2 4a78
.org 0x21bc4
	movs r0, #2	@ 00021bc4 0220
.org 0x21bc6
	orrs r0, r2	@ 00021bc6 1043
.org 0x21bc8
	strb r0, [r1, #1]	@ 00021bc8 4870
.org 0x21bca
	adds r0, r6, #0	@ 00021bca 301c
.org 0x21bcc
	adds r0, #16	@ 00021bcc 1030
.org 0x21bce
	ldr r1, [pc, #56]	@ 00021bce 0e49
.org 0x21bd0
	ldr r1, [r1, #16]	@ 00021bd0 0969
.org 0x21bd2
	ldr r1, [r1, #28]	@ 00021bd2 c969
.org 0x21bd4
	bl 0x275f0	@ 00021bd4 05f00cfd
.org 0x21bd8
	ldrh r0, [r6, #8]	@ 00021bd8 3089
.org 0x21bda
	ldr r1, [pc, #48]	@ 00021bda 0c49
.org 0x21bdc
	ands r1, r0	@ 00021bdc 0140
.org 0x21bde
	ldr r0, [pc, #48]	@ 00021bde 0c48
.org 0x21be0
	ands r1, r0	@ 00021be0 0140
.org 0x21be2
	ldrb r2, [r6, #18]	@ 00021be2 b27c
.org 0x21be4
	movs r0, #253	@ 00021be4 fd20
.org 0x21be6
	ands r0, r2	@ 00021be6 1040
.org 0x21be8
	strb r0, [r6, #18]	@ 00021be8 b074
.org 0x21bea
	ldr r3, [pc, #40]	@ 00021bea 0a4b
.org 0x21bec
	ldrb r2, [r3, #4]	@ 00021bec 1a79
.org 0x21bee
	movs r0, #247	@ 00021bee f720
.org 0x21bf0
	ands r0, r2	@ 00021bf0 1040
.org 0x21bf2
	strb r0, [r3, #4]	@ 00021bf2 1871
.org 0x21bf4
	movs r0, #1	@ 00021bf4 0120
.org 0x21bf6
	orrs r1, r0	@ 00021bf6 0143
.org 0x21bf8
	strh r1, [r6, #8]	@ 00021bf8 3181
.org 0x21bfa
	movs r0, #7	@ 00021bfa 0720
.org 0x21bfc
	strb r0, [r7, #0]	@ 00021bfc 3870
.org 0x21bfe
	b.n 0x21d2e	@ 00021bfe 96e0
.org 0x21c00
	.byte 0x10,0xe9,0x02,0x02	@ 00021c00 data
.org 0x21c04
	.byte 0xe0,0x32,0x00,0x03	@ 00021c04 data
.org 0x21c08
	.byte 0xf8,0x2c,0x84,0x08	@ 00021c08 data
.org 0x21c0c
	.byte 0xfd,0xff,0x00,0x00	@ 00021c0c data
.org 0x21c10
	.byte 0xef,0xff,0x00,0x00	@ 00021c10 data
.org 0x21c14
	.byte 0xb0,0xe8,0x02,0x02	@ 00021c14 data
.org 0x21c18
	movs r1, #190	@ 00021c18 be21
.org 0x21c1a
	lsls r1, r1, #1	@ 00021c1a 4900
.org 0x21c1c
	adds r6, r4, r1	@ 00021c1c 6618
.org 0x21c1e
	ldrb r0, [r6, #0]	@ 00021c1e 3078
.org 0x21c20
	cmp r0, #7	@ 00021c20 0728
.org 0x21c22
	bne.n 0x21c3c	@ 00021c22 0bd1
.org 0x21c24
	ldr r1, [pc, #16]	@ 00021c24 0449
.org 0x21c26
	ldrb r2, [r1, #0]	@ 00021c26 0a78
.org 0x21c28
	movs r0, #127	@ 00021c28 7f20
.org 0x21c2a
	ands r0, r2	@ 00021c2a 1040
.org 0x21c2c
	movs r2, #0	@ 00021c2c 0022
.org 0x21c2e
	strb r0, [r1, #0]	@ 00021c2e 0870
.org 0x21c30
	strb r2, [r1, #1]	@ 00021c30 4a70
.org 0x21c32
	movs r0, #8	@ 00021c32 0820
.org 0x21c34
	b.n 0x21d2c	@ 00021c34 7ae0
.org 0x21c36
	.byte 0x00	@ 00021c36 data
.org 0x21c37
	.byte 0x00	@ 00021c37 data
.org 0x21c38
	.byte 0xe0,0x32,0x00,0x03	@ 00021c38 data
.org 0x21c3c
	cmp r0, #8	@ 00021c3c 0828
.org 0x21c3e
	bne.n 0x21c7c	@ 00021c3e 1dd1
.org 0x21c40
	ldr r0, [r5, #84]	@ 00021c40 686d
.org 0x21c42
	ldr r1, [pc, #44]	@ 00021c42 0b49
.org 0x21c44
	adds r0, r0, r1	@ 00021c44 4018
.org 0x21c46
	movs r1, #240	@ 00021c46 f021
.org 0x21c48
	lsls r1, r1, #10	@ 00021c48 8902
.org 0x21c4a
	bl 0x129050	@ 00021c4a 07f101fa
.org 0x21c4e
	movs r1, #240	@ 00021c4e f021
.org 0x21c50
	lsls r1, r1, #8	@ 00021c50 0902
.org 0x21c52
	adds r0, r0, r1	@ 00021c52 4018
.org 0x21c54
	ldr r1, [pc, #28]	@ 00021c54 0749
.org 0x21c56
	cmp r0, r1	@ 00021c56 8842
.org 0x21c58
	ble.n 0x21c7c	@ 00021c58 10dd
.org 0x21c5a
	movs r0, #5	@ 00021c5a 0520
.org 0x21c5c
	bl 0x1f63c	@ 00021c5c fdf7eefc
.org 0x21c60
	ldr r2, [pc, #20]	@ 00021c60 054a
.org 0x21c62
	ldrb r1, [r2, #4]	@ 00021c62 1179
.org 0x21c64
	movs r0, #8	@ 00021c64 0820
.org 0x21c66
	orrs r0, r1	@ 00021c66 0843
.org 0x21c68
	strb r0, [r2, #4]	@ 00021c68 1071
.org 0x21c6a
	movs r0, #9	@ 00021c6a 0920
.org 0x21c6c
	b.n 0x21d2c	@ 00021c6c 5ee0
.org 0x21c6e
	.byte 0x00	@ 00021c6e data
.org 0x21c6f
	.byte 0x00	@ 00021c6f data
.org 0x21c70
	.byte 0x00,0x10,0xff,0xff	@ 00021c70 data
.org 0x21c74
	.byte 0xff,0xcf,0x03,0x00	@ 00021c74 data
.org 0x21c78
	.byte 0xb0,0xe8,0x02,0x02	@ 00021c78 data
.org 0x21c7c
	movs r0, #190	@ 00021c7c be20
.org 0x21c7e
	lsls r0, r0, #1	@ 00021c7e 4000
.org 0x21c80
	adds r7, r4, r0	@ 00021c80 2718
.org 0x21c82
	ldrb r0, [r7, #0]	@ 00021c82 3878
.org 0x21c84
	cmp r0, #9	@ 00021c84 0928
.org 0x21c86
	bne.n 0x21cec	@ 00021c86 31d1
.org 0x21c88
	ldr r1, [r5, #88]	@ 00021c88 a96d
.org 0x21c8a
	ldr r0, [pc, #76]	@ 00021c8a 1348
.org 0x21c8c
	cmp r1, r0	@ 00021c8c 8142
.org 0x21c8e
	bgt.n 0x21cec	@ 00021c8e 2ddc
.org 0x21c90
	ldr r0, [r5, #84]	@ 00021c90 686d
.org 0x21c92
	ldr r1, [pc, #72]	@ 00021c92 1249
.org 0x21c94
	adds r0, r0, r1	@ 00021c94 4018
.org 0x21c96
	movs r6, #240	@ 00021c96 f026
.org 0x21c98
	lsls r6, r6, #10	@ 00021c98 b602
.org 0x21c9a
	adds r1, r6, #0	@ 00021c9a 311c
.org 0x21c9c
	bl 0x129050	@ 00021c9c 07f1d8f9
.org 0x21ca0
	movs r4, #240	@ 00021ca0 f024
.org 0x21ca2
	lsls r4, r4, #8	@ 00021ca2 2402
.org 0x21ca4
	adds r0, r0, r4	@ 00021ca4 0019
.org 0x21ca6
	ldr r1, [pc, #56]	@ 00021ca6 0e49
.org 0x21ca8
	cmp r0, r1	@ 00021ca8 8842
.org 0x21caa
	ble.n 0x21cb6	@ 00021caa 04dd
.org 0x21cac
	ldr r2, [pc, #52]	@ 00021cac 0d4a
.org 0x21cae
	ldrb r1, [r2, #1]	@ 00021cae 5178
.org 0x21cb0
	movs r0, #2	@ 00021cb0 0220
.org 0x21cb2
	orrs r0, r1	@ 00021cb2 0843
.org 0x21cb4
	strb r0, [r2, #1]	@ 00021cb4 5070

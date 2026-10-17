@ FUN_08067b44  entry 0x08067b44  size 596
.thumb
.org 0x67b44
FUN_08067b44:
	push {r4, r5, lr}	@ 00067b44 30b5
.org 0x67b46
	sub sp, #4	@ 00067b46 81b0
.org 0x67b48
	adds r4, r0, #0	@ 00067b48 041c
.org 0x67b4a
	ldr r0, [pc, #32]	@ 00067b4a 0848
.org 0x67b4c
	ldr r5, [r0, #0]	@ 00067b4c 0568
.org 0x67b4e
	ldrb r0, [r4, #14]	@ 00067b4e a07b
.org 0x67b50
	cmp r0, #0	@ 00067b50 0028
.org 0x67b52
	bne.n 0x67c28	@ 00067b52 69d1
.org 0x67b54
	ldrb r1, [r4, #10]	@ 00067b54 a17a
.org 0x67b56
	movs r0, #16	@ 00067b56 1020
.org 0x67b58
	ands r0, r1	@ 00067b58 0840
.org 0x67b5a
	cmp r0, #0	@ 00067b5a 0028
.org 0x67b5c
	beq.n 0x67b74	@ 00067b5c 0ad0
.org 0x67b5e
	adds r0, r5, #0	@ 00067b5e 281c
.org 0x67b60
	adds r0, #180	@ 00067b60 b430
.org 0x67b62
	ldr r0, [r0, #56]	@ 00067b62 806b
.org 0x67b64
	cmp r0, #0	@ 00067b64 0028
.org 0x67b66
	ble.n 0x67b7e	@ 00067b66 0add
.org 0x67b68
	ldr r1, [pc, #4]	@ 00067b68 0149
.org 0x67b6a
	b.n 0x67b80	@ 00067b6a 09e0
.org 0x67b6c
	.byte 0xf0,0xdb,0x02,0x02	@ 00067b6c data
.org 0x67b70
	.byte 0x16,0xa9,0x00,0x00	@ 00067b70 data
.org 0x67b74
	adds r0, r5, #0	@ 00067b74 281c
.org 0x67b76
	adds r0, #180	@ 00067b76 b430
.org 0x67b78
	ldr r0, [r0, #56]	@ 00067b78 806b
.org 0x67b7a
	cmp r0, #0	@ 00067b7a 0028
.org 0x67b7c
	blt.n 0x67b8c	@ 00067b7c 06db
.org 0x67b7e
	ldr r1, [pc, #8]	@ 00067b7e 0249
.org 0x67b80
	adds r0, r4, #0	@ 00067b80 201c
.org 0x67b82
	bl 0x1cf00	@ 00067b82 b5f7bdf9
.org 0x67b86
	b.n 0x67b94	@ 00067b86 05e0
.org 0x67b88
	.byte 0x14,0xa9,0x00,0x00	@ 00067b88 data
.org 0x67b8c
	ldr r1, [pc, #40]	@ 00067b8c 0a49
.org 0x67b8e
	adds r0, r4, #0	@ 00067b8e 201c
.org 0x67b90
	bl 0x1cf00	@ 00067b90 b5f7b6f9
.org 0x67b94
	ldrb r0, [r4, #30]	@ 00067b94 a07f
.org 0x67b96
	lsls r0, r0, #8	@ 00067b96 0002
.org 0x67b98
	adds r1, r4, #0	@ 00067b98 211c
.org 0x67b9a
	adds r1, #112	@ 00067b9a 7031
.org 0x67b9c
	ldrb r1, [r1, #0]	@ 00067b9c 0978
.org 0x67b9e
	orrs r0, r1	@ 00067b9e 0843
.org 0x67ba0
	ldr r1, [pc, #24]	@ 00067ba0 0649
.org 0x67ba2
	cmp r0, r1	@ 00067ba2 8842
.org 0x67ba4
	bne.n 0x67be8	@ 00067ba4 20d1
.org 0x67ba6
	ldrb r1, [r4, #10]	@ 00067ba6 a17a
.org 0x67ba8
	movs r0, #16	@ 00067ba8 1020
.org 0x67baa
	ands r0, r1	@ 00067baa 0840
.org 0x67bac
	cmp r0, #0	@ 00067bac 0028
.org 0x67bae
	beq.n 0x67bc0	@ 00067bae 07d0
.org 0x67bb0
	ldr r0, [r4, #84]	@ 00067bb0 606d
.org 0x67bb2
	movs r2, #160	@ 00067bb2 a022
.org 0x67bb4
	lsls r2, r2, #6	@ 00067bb4 9201
.org 0x67bb6
	b.n 0x67bc4	@ 00067bb6 05e0
.org 0x67bb8
	.byte 0x16,0xa9,0x00,0x00	@ 00067bb8 data
.org 0x67bbc
	.byte 0x14,0xa9,0x00,0x00	@ 00067bbc data
.org 0x67bc0
	ldr r0, [r4, #84]	@ 00067bc0 606d
.org 0x67bc2
	ldr r2, [pc, #28]	@ 00067bc2 074a
.org 0x67bc4
	adds r0, r0, r2	@ 00067bc4 8018
.org 0x67bc6
	str r0, [r4, #100]	@ 00067bc6 6066
.org 0x67bc8
	ldr r0, [r4, #88]	@ 00067bc8 a06d
.org 0x67bca
	ldr r2, [pc, #24]	@ 00067bca 064a
.org 0x67bcc
	adds r0, r0, r2	@ 00067bcc 8018
.org 0x67bce
	str r0, [r4, #104]	@ 00067bce a066
.org 0x67bd0
	movs r0, #16	@ 00067bd0 1020
.org 0x67bd2
	ands r0, r1	@ 00067bd2 0840
.org 0x67bd4
	movs r1, #2	@ 00067bd4 0221
.org 0x67bd6
	cmp r0, #0	@ 00067bd6 0028
.org 0x67bd8
	beq.n 0x67c16	@ 00067bd8 1dd0
.org 0x67bda
	movs r1, #1	@ 00067bda 0121
.org 0x67bdc
	b.n 0x67c16	@ 00067bdc 1be0
.org 0x67bde
	.byte 0x00	@ 00067bde data
.org 0x67bdf
	.byte 0x00	@ 00067bdf data
.org 0x67be0
	.byte 0x00,0xd8,0xff,0xff	@ 00067be0 data
.org 0x67be4
	.byte 0x00,0xcb,0xff,0xff	@ 00067be4 data
.org 0x67be8
	ldrb r1, [r4, #10]	@ 00067be8 a17a
.org 0x67bea
	movs r0, #16	@ 00067bea 1020
.org 0x67bec
	ands r0, r1	@ 00067bec 0840
.org 0x67bee
	cmp r0, #0	@ 00067bee 0028
.org 0x67bf0
	beq.n 0x67bfa	@ 00067bf0 03d0
.org 0x67bf2
	ldr r0, [r4, #84]	@ 00067bf2 606d
.org 0x67bf4
	movs r2, #244	@ 00067bf4 f422
.org 0x67bf6
	lsls r2, r2, #6	@ 00067bf6 9201
.org 0x67bf8
	b.n 0x67bfe	@ 00067bf8 01e0
.org 0x67bfa
	ldr r0, [r4, #84]	@ 00067bfa 606d
.org 0x67bfc
	ldr r2, [pc, #32]	@ 00067bfc 084a
.org 0x67bfe
	adds r0, r0, r2	@ 00067bfe 8018
.org 0x67c00
	str r0, [r4, #100]	@ 00067c00 6066
.org 0x67c02
	ldr r0, [r4, #88]	@ 00067c02 a06d
.org 0x67c04
	ldr r2, [pc, #28]	@ 00067c04 074a
.org 0x67c06
	adds r0, r0, r2	@ 00067c06 8018
.org 0x67c08
	str r0, [r4, #104]	@ 00067c08 a066
.org 0x67c0a
	movs r0, #16	@ 00067c0a 1020
.org 0x67c0c
	ands r0, r1	@ 00067c0c 0840
.org 0x67c0e
	movs r1, #1	@ 00067c0e 0121
.org 0x67c10
	cmp r0, #0	@ 00067c10 0028
.org 0x67c12
	beq.n 0x67c16	@ 00067c12 00d0
.org 0x67c14
	movs r1, #2	@ 00067c14 0221
.org 0x67c16
	strb r1, [r4, #19]	@ 00067c16 e174
.org 0x67c18
	movs r0, #0	@ 00067c18 0020
.org 0x67c1a
	str r0, [r4, #44]	@ 00067c1a e062
.org 0x67c1c
	b.n 0x67c82	@ 00067c1c 31e0
.org 0x67c1e
	.byte 0x00	@ 00067c1e data
.org 0x67c1f
	.byte 0x00	@ 00067c1f data
.org 0x67c20
	.byte 0x00,0xc3,0xff,0xff	@ 00067c20 data
.org 0x67c24
	.byte 0x00,0xd8,0xff,0xff	@ 00067c24 data
.org 0x67c28
	cmp r0, #1	@ 00067c28 0128
.org 0x67c2a
	bne.n 0x67c88	@ 00067c2a 2dd1
.org 0x67c2c
	adds r0, r4, #0	@ 00067c2c 201c
.org 0x67c2e
	adds r0, #113	@ 00067c2e 7130
.org 0x67c30
	ldrb r0, [r0, #0]	@ 00067c30 0078
.org 0x67c32
	lsls r0, r0, #24	@ 00067c32 0006
.org 0x67c34
	asrs r0, r0, #24	@ 00067c34 0016
.org 0x67c36
	cmp r0, #1	@ 00067c36 0128
.org 0x67c38
	ble.n 0x67c88	@ 00067c38 26dd
.org 0x67c3a
	movs r0, #128	@ 00067c3a 8020
.org 0x67c3c
	strb r0, [r4, #18]	@ 00067c3c a074
.org 0x67c3e
	ldr r1, [r4, #100]	@ 00067c3e 616e
.org 0x67c40
	ldr r2, [r4, #104]	@ 00067c40 a26e
.org 0x67c42
	ldrb r3, [r4, #19]	@ 00067c42 e37c
.org 0x67c44
	str r0, [sp, #0]	@ 00067c44 0090
.org 0x67c46
	adds r0, r4, #0	@ 00067c46 201c
.org 0x67c48
	bl 0xdebc8	@ 00067c48 76f0beff
.org 0x67c4c
	adds r1, r4, #0	@ 00067c4c 211c
.org 0x67c4e
	adds r1, #180	@ 00067c4e b431
.org 0x67c50
	str r0, [r1, #20]	@ 00067c50 4861
.org 0x67c52
	ldrb r0, [r4, #30]	@ 00067c52 a07f
.org 0x67c54
	lsls r0, r0, #8	@ 00067c54 0002
.org 0x67c56
	subs r1, #68	@ 00067c56 4439
.org 0x67c58
	ldrb r1, [r1, #0]	@ 00067c58 0978
.org 0x67c5a
	orrs r0, r1	@ 00067c5a 0843
.org 0x67c5c
	ldr r1, [pc, #16]	@ 00067c5c 0449
.org 0x67c5e
	cmp r0, r1	@ 00067c5e 8842
.org 0x67c60
	bne.n 0x67c78	@ 00067c60 0ad1
.org 0x67c62
	adds r0, r4, #0	@ 00067c62 201c
.org 0x67c64
	adds r0, #116	@ 00067c64 7430
.org 0x67c66
	ldr r1, [pc, #12]	@ 00067c66 0349
.org 0x67c68
	bl 0x5784	@ 00067c68 9df78cfd
.org 0x67c6c
	b.n 0x67c82	@ 00067c6c 09e0
.org 0x67c6e
	.byte 0x00	@ 00067c6e data
.org 0x67c6f
	.byte 0x00	@ 00067c6f data
.org 0x67c70
	.byte 0x14,0xa9,0x00,0x00	@ 00067c70 data
.org 0x67c74
	.byte 0x3c,0xb4,0x85,0x08	@ 00067c74 data
.org 0x67c78
	adds r0, r4, #0	@ 00067c78 201c
.org 0x67c7a
	adds r0, #116	@ 00067c7a 7430
.org 0x67c7c
	ldr r1, [pc, #40]	@ 00067c7c 0a49
.org 0x67c7e
	bl 0x5784	@ 00067c7e 9df781fd
.org 0x67c82
	ldrb r0, [r4, #14]	@ 00067c82 a07b
.org 0x67c84
	adds r0, #1	@ 00067c84 0130
.org 0x67c86
	strb r0, [r4, #14]	@ 00067c86 a073
.org 0x67c88
	adds r0, r4, #0	@ 00067c88 201c
.org 0x67c8a
	bl 0x1cff0	@ 00067c8a b5f7b1f9
.org 0x67c8e
	ldrb r0, [r4, #14]	@ 00067c8e a07b
.org 0x67c90
	cmp r0, #1	@ 00067c90 0128
.org 0x67c92
	bhi.n 0x67c96	@ 00067c92 00d8
.org 0x67c94
	b.n 0x67ddc	@ 00067c94 a2e0
.org 0x67c96
	adds r0, r5, #0	@ 00067c96 281c
.org 0x67c98
	adds r0, #180	@ 00067c98 b430
.org 0x67c9a
	ldr r1, [r0, #56]	@ 00067c9a 816b
.org 0x67c9c
	adds r2, r0, #0	@ 00067c9c 021c
.org 0x67c9e
	cmp r1, #0	@ 00067c9e 0029
.org 0x67ca0
	bne.n 0x67cac	@ 00067ca0 04d1
.org 0x67ca2
	movs r0, #64	@ 00067ca2 4020
.org 0x67ca4
	b.n 0x67cae	@ 00067ca4 03e0
.org 0x67ca6
	.byte 0x00	@ 00067ca6 data
.org 0x67ca7
	.byte 0x00	@ 00067ca7 data
.org 0x67ca8
	.byte 0x84,0xb4,0x85,0x08	@ 00067ca8 data
.org 0x67cac
	movs r0, #0	@ 00067cac 0020
.org 0x67cae
	str r0, [r4, #92]	@ 00067cae e065
.org 0x67cb0
	ldrb r0, [r4, #19]	@ 00067cb0 e07c
.org 0x67cb2
	cmp r0, #2	@ 00067cb2 0228
.org 0x67cb4
	bne.n 0x67cbe	@ 00067cb4 03d1
.org 0x67cb6
	ldr r0, [r2, #56]	@ 00067cb6 906b
.org 0x67cb8
	mvns r0, r0	@ 00067cb8 c043
.org 0x67cba
	lsrs r1, r0, #31	@ 00067cba c10f
.org 0x67cbc
	b.n 0x67cc8	@ 00067cbc 04e0
.org 0x67cbe
	ldr r0, [r2, #56]	@ 00067cbe 906b
.org 0x67cc0
	movs r1, #0	@ 00067cc0 0021
.org 0x67cc2
	cmp r0, #0	@ 00067cc2 0028
.org 0x67cc4
	bgt.n 0x67cc8	@ 00067cc4 00dc
.org 0x67cc6
	movs r1, #1	@ 00067cc6 0121
.org 0x67cc8
	cmp r1, #0	@ 00067cc8 0029
.org 0x67cca
	beq.n 0x67d5e	@ 00067cca 48d0
.org 0x67ccc
	ldr r0, [pc, #32]	@ 00067ccc 0848
.org 0x67cce
	ldr r0, [r0, #0]	@ 00067cce 0068
.org 0x67cd0
	ldr r1, [r4, #100]	@ 00067cd0 616e
.org 0x67cd2
	ldr r0, [r0, #84]	@ 00067cd2 406d
.org 0x67cd4
	cmp r1, r0	@ 00067cd4 8142
.org 0x67cd6
	ble.n 0x67d0e	@ 00067cd6 1add
.org 0x67cd8
	subs r1, r1, r0	@ 00067cd8 091a
.org 0x67cda
	movs r0, #128	@ 00067cda 8020
.org 0x67cdc
	lsls r0, r0, #7	@ 00067cdc c001
.org 0x67cde
	cmp r1, r0	@ 00067cde 8142
.org 0x67ce0
	ble.n 0x67cf8	@ 00067ce0 0add
.org 0x67ce2
	movs r1, #222	@ 00067ce2 de21
.org 0x67ce4
	lsls r1, r1, #1	@ 00067ce4 4900
.org 0x67ce6
	adds r0, r5, r1	@ 00067ce6 6818
.org 0x67ce8
	ldr r1, [r0, #0]	@ 00067ce8 0168
.org 0x67cea
	ldr r2, [pc, #8]	@ 00067cea 024a
.org 0x67cec
	b.n 0x67dbe	@ 00067cec 67e0
.org 0x67cee
	.byte 0x00	@ 00067cee data
.org 0x67cef
	.byte 0x00	@ 00067cef data
.org 0x67cf0
	.byte 0xf0,0xdb,0x02,0x02	@ 00067cf0 data
.org 0x67cf4
	.byte 0x00,0xfd,0xff,0xff	@ 00067cf4 data
.org 0x67cf8
	movs r0, #144	@ 00067cf8 9020
.org 0x67cfa
	lsls r0, r0, #6	@ 00067cfa 8001
.org 0x67cfc
	cmp r1, r0	@ 00067cfc 8142
.org 0x67cfe
	bgt.n 0x67db4	@ 00067cfe 59dc
.org 0x67d00
	ldr r0, [r4, #44]	@ 00067d00 e06a
.org 0x67d02
	cmp r0, #0	@ 00067d02 0028
.org 0x67d04
	bne.n 0x67dc6	@ 00067d04 5fd1
.org 0x67d06
	adds r0, r4, #0	@ 00067d06 201c
.org 0x67d08
	movs r1, #2	@ 00067d08 0221
.org 0x67d0a
	movs r2, #0	@ 00067d0a 0022
.org 0x67d0c
	b.n 0x67d54	@ 00067d0c 22e0
.org 0x67d0e
	subs r1, r0, r1	@ 00067d0e 411a
.org 0x67d10
	movs r0, #128	@ 00067d10 8020
.org 0x67d12
	lsls r0, r0, #7	@ 00067d12 c001
.org 0x67d14
	cmp r1, r0	@ 00067d14 8142
.org 0x67d16
	ble.n 0x67d2c	@ 00067d16 09dd
.org 0x67d18
	movs r1, #222	@ 00067d18 de21
.org 0x67d1a
	lsls r1, r1, #1	@ 00067d1a 4900
.org 0x67d1c
	adds r0, r5, r1	@ 00067d1c 6818
.org 0x67d1e
	ldr r1, [r0, #0]	@ 00067d1e 0168
.org 0x67d20
	movs r2, #192	@ 00067d20 c022
.org 0x67d22
	lsls r2, r2, #2	@ 00067d22 9200
.org 0x67d24
	adds r1, r1, r2	@ 00067d24 8918
.org 0x67d26
	ldr r2, [r4, #92]	@ 00067d26 e26d
.org 0x67d28
	subs r1, r1, r2	@ 00067d28 891a
.org 0x67d2a
	b.n 0x67dc4	@ 00067d2a 4be0
.org 0x67d2c
	movs r0, #144	@ 00067d2c 9020
.org 0x67d2e
	lsls r0, r0, #6	@ 00067d2e 8001
.org 0x67d30
	cmp r1, r0	@ 00067d30 8142
.org 0x67d32
	ble.n 0x67d48	@ 00067d32 09dd
.org 0x67d34
	movs r1, #222	@ 00067d34 de21
.org 0x67d36
	lsls r1, r1, #1	@ 00067d36 4900
.org 0x67d38
	adds r0, r5, r1	@ 00067d38 6818
.org 0x67d3a
	ldr r1, [r0, #0]	@ 00067d3a 0168
.org 0x67d3c
	movs r2, #208	@ 00067d3c d022
.org 0x67d3e
	lsls r2, r2, #2	@ 00067d3e 9200
.org 0x67d40
	adds r1, r1, r2	@ 00067d40 8918
.org 0x67d42
	ldr r2, [r4, #92]	@ 00067d42 e26d
.org 0x67d44
	subs r1, r1, r2	@ 00067d44 891a
.org 0x67d46
	b.n 0x67dc4	@ 00067d46 3de0
.org 0x67d48
	ldr r0, [r4, #44]	@ 00067d48 e06a
.org 0x67d4a
	cmp r0, #0	@ 00067d4a 0028
.org 0x67d4c
	bne.n 0x67dc6	@ 00067d4c 3bd1
.org 0x67d4e
	adds r0, r4, #0	@ 00067d4e 201c
.org 0x67d50
	movs r1, #2	@ 00067d50 0221
.org 0x67d52
	movs r2, #1	@ 00067d52 0122
.org 0x67d54
	movs r3, #0	@ 00067d54 0023
.org 0x67d56
	bl 0xc8830	@ 00067d56 60f06bfd
.org 0x67d5a
	str r0, [r4, #44]	@ 00067d5a e062
.org 0x67d5c
	b.n 0x67dc6	@ 00067d5c 33e0
.org 0x67d5e
	ldr r0, [pc, #36]	@ 00067d5e 0948
.org 0x67d60
	ldr r0, [r0, #0]	@ 00067d60 0068
.org 0x67d62
	ldr r1, [r4, #100]	@ 00067d62 616e
.org 0x67d64
	ldr r0, [r0, #84]	@ 00067d64 406d
.org 0x67d66
	cmp r1, r0	@ 00067d66 8142
.org 0x67d68
	ble.n 0x67d9c	@ 00067d68 18dd
.org 0x67d6a
	subs r0, r1, r0	@ 00067d6a 081a
.org 0x67d6c
	cmp r0, #64	@ 00067d6c 4028
.org 0x67d6e
	ble.n 0x67d88	@ 00067d6e 0bdd
.org 0x67d70
	movs r1, #222	@ 00067d70 de21
.org 0x67d72
	lsls r1, r1, #1	@ 00067d72 4900
.org 0x67d74
	adds r0, r5, r1	@ 00067d74 6818
.org 0x67d76
	ldr r1, [r0, #0]	@ 00067d76 0168
.org 0x67d78
	movs r2, #192	@ 00067d78 c022
.org 0x67d7a
	lsls r2, r2, #2	@ 00067d7a 9200
.org 0x67d7c
	adds r1, r1, r2	@ 00067d7c 8918
.org 0x67d7e
	ldr r2, [r4, #92]	@ 00067d7e e26d
.org 0x67d80
	subs r1, r1, r2	@ 00067d80 891a
.org 0x67d82
	b.n 0x67dc4	@ 00067d82 1fe0
.org 0x67d84
	.byte 0xf0,0xdb,0x02,0x02	@ 00067d84 data
.org 0x67d88
	movs r1, #222	@ 00067d88 de21
.org 0x67d8a
	lsls r1, r1, #1	@ 00067d8a 4900
.org 0x67d8c
	adds r0, r5, r1	@ 00067d8c 6818
.org 0x67d8e
	ldr r1, [r0, #0]	@ 00067d8e 0168
.org 0x67d90
	movs r2, #208	@ 00067d90 d022
.org 0x67d92
	lsls r2, r2, #2	@ 00067d92 9200
.org 0x67d94
	adds r1, r1, r2	@ 00067d94 8918
.org 0x67d96
	ldr r2, [r4, #92]	@ 00067d96 e26d

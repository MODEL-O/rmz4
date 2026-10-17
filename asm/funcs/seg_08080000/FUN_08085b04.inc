@ FUN_08085b04  entry 0x08085b04  size 224
.thumb
.org 0x85b04
FUN_08085b04:
	push {r4, lr}	@ 00085b04 10b5
.org 0x85b06
	adds r4, r0, #0	@ 00085b06 041c
.org 0x85b08
	ldrb r0, [r4, #14]	@ 00085b08 a07b
.org 0x85b0a
	cmp r0, #0	@ 00085b0a 0028
.org 0x85b0c
	beq.n 0x85b14	@ 00085b0c 02d0
.org 0x85b0e
	cmp r0, #1	@ 00085b0e 0128
.org 0x85b10
	beq.n 0x85b58	@ 00085b10 22d0
.org 0x85b12
	b.n 0x85bf0	@ 00085b12 6de0
.org 0x85b14
	ldr r0, [pc, #100]	@ 00085b14 1948
.org 0x85b16
	str r0, [r4, #92]	@ 00085b16 e065
.org 0x85b18
	adds r2, r0, #0	@ 00085b18 021c
.org 0x85b1a
	ldrb r1, [r4, #10]	@ 00085b1a a17a
.org 0x85b1c
	movs r0, #16	@ 00085b1c 1020
.org 0x85b1e
	ands r0, r1	@ 00085b1e 0840
.org 0x85b20
	lsls r0, r0, #24	@ 00085b20 0006
.org 0x85b22
	lsrs r1, r0, #24	@ 00085b22 010e
.org 0x85b24
	cmp r1, #0	@ 00085b24 0029
.org 0x85b26
	beq.n 0x85b2c	@ 00085b26 01d0
.org 0x85b28
	movs r2, #192	@ 00085b28 c022
.org 0x85b2a
	lsls r2, r2, #1	@ 00085b2a 5200
.org 0x85b2c
	str r2, [r4, #92]	@ 00085b2c e265
.org 0x85b2e
	ldr r0, [pc, #80]	@ 00085b2e 1448
.org 0x85b30
	str r0, [r4, #100]	@ 00085b30 6066
.org 0x85b32
	cmp r1, #0	@ 00085b32 0029
.org 0x85b34
	beq.n 0x85b3a	@ 00085b34 01d0
.org 0x85b36
	movs r0, #160	@ 00085b36 a020
.org 0x85b38
	lsls r0, r0, #4	@ 00085b38 0001
.org 0x85b3a
	str r0, [r4, #100]	@ 00085b3a 6066
.org 0x85b3c
	adds r0, r4, #0	@ 00085b3c 201c
.org 0x85b3e
	adds r0, #116	@ 00085b3e 7430
.org 0x85b40
	ldr r1, [pc, #64]	@ 00085b40 1049
.org 0x85b42
	bl 0x5784	@ 00085b42 7ff71ffe
.org 0x85b46
	ldr r1, [pc, #64]	@ 00085b46 1049
.org 0x85b48
	adds r0, r4, #0	@ 00085b48 201c
.org 0x85b4a
	bl 0x1cf00	@ 00085b4a 97f7d9f9
.org 0x85b4e
	movs r0, #90	@ 00085b4e 5a20
.org 0x85b50
	strb r0, [r4, #18]	@ 00085b50 a074
.org 0x85b52
	ldrb r0, [r4, #14]	@ 00085b52 a07b
.org 0x85b54
	adds r0, #1	@ 00085b54 0130
.org 0x85b56
	strb r0, [r4, #14]	@ 00085b56 a073
.org 0x85b58
	adds r0, r4, #0	@ 00085b58 201c
.org 0x85b5a
	bl 0x1cff0	@ 00085b5a 97f749fa
.org 0x85b5e
	adds r0, r4, #0	@ 00085b5e 201c
.org 0x85b60
	adds r0, #184	@ 00085b60 b830
.org 0x85b62
	ldr r1, [r4, #84]	@ 00085b62 616d
.org 0x85b64
	ldr r0, [r0, #0]	@ 00085b64 0068
.org 0x85b66
	subs r3, r1, r0	@ 00085b66 0b1a
.org 0x85b68
	lsrs r2, r3, #31	@ 00085b68 da0f
.org 0x85b6a
	ldrb r1, [r4, #10]	@ 00085b6a a17a
.org 0x85b6c
	movs r0, #16	@ 00085b6c 1020
.org 0x85b6e
	ands r0, r1	@ 00085b6e 0840
.org 0x85b70
	cmp r0, #0	@ 00085b70 0028
.org 0x85b72
	beq.n 0x85b8c	@ 00085b72 0bd0
.org 0x85b74
	cmp r2, #0	@ 00085b74 002a
.org 0x85b76
	beq.n 0x85b90	@ 00085b76 0bd0
.org 0x85b78
	b.n 0x85baa	@ 00085b78 17e0
.org 0x85b7a
	.byte 0x00	@ 00085b7a data
.org 0x85b7b
	.byte 0x00	@ 00085b7b data
.org 0x85b7c
	.byte 0x80,0xfe,0xff,0xff	@ 00085b7c data
.org 0x85b80
	.byte 0x00,0xf6,0xff,0xff	@ 00085b80 data
.org 0x85b84
	.byte 0x10,0xec,0x85,0x08	@ 00085b84 data
.org 0x85b88
	.byte 0x05,0x1b,0x00,0x00	@ 00085b88 data
.org 0x85b8c
	cmp r2, #0	@ 00085b8c 002a
.org 0x85b8e
	beq.n 0x85baa	@ 00085b8e 0cd0
.org 0x85b90
	adds r1, r3, #0	@ 00085b90 191c
.org 0x85b92
	cmp r1, #0	@ 00085b92 0029
.org 0x85b94
	bge.n 0x85b98	@ 00085b94 00da
.org 0x85b96
	negs r1, r1	@ 00085b96 4942
.org 0x85b98
	movs r0, #160	@ 00085b98 a020
.org 0x85b9a
	lsls r0, r0, #8	@ 00085b9a 0002
.org 0x85b9c
	cmp r1, r0	@ 00085b9c 8142
.org 0x85b9e
	ble.n 0x85baa	@ 00085b9e 04dd
.org 0x85ba0
	movs r1, #0	@ 00085ba0 0021
.org 0x85ba2
	movs r0, #2	@ 00085ba2 0220
.org 0x85ba4
	strb r0, [r4, #13]	@ 00085ba4 6073
.org 0x85ba6
	strb r1, [r4, #14]	@ 00085ba6 a173
.org 0x85ba8
	b.n 0x85bf0	@ 00085ba8 22e0
.org 0x85baa
	ldrb r0, [r4, #18]	@ 00085baa a07c
.org 0x85bac
	subs r0, #1	@ 00085bac 0138
.org 0x85bae
	strb r0, [r4, #18]	@ 00085bae a074
.org 0x85bb0
	lsls r0, r0, #24	@ 00085bb0 0006
.org 0x85bb2
	cmp r0, #0	@ 00085bb2 0028
.org 0x85bb4
	beq.n 0x85bcc	@ 00085bb4 0ad0
.org 0x85bb6
	ldr r0, [r4, #84]	@ 00085bb6 606d
.org 0x85bb8
	ldr r1, [r4, #100]	@ 00085bb8 616e
.org 0x85bba
	adds r0, r0, r1	@ 00085bba 4018
.org 0x85bbc
	ldr r1, [r4, #88]	@ 00085bbc a16d
.org 0x85bbe
	ldr r2, [pc, #56]	@ 00085bbe 0e4a
.org 0x85bc0
	adds r1, r1, r2	@ 00085bc0 8918
.org 0x85bc2
	bl 0x7c7c	@ 00085bc2 82f75bf8
.org 0x85bc6
	lsls r0, r0, #16	@ 00085bc6 0004
.org 0x85bc8
	cmp r0, #0	@ 00085bc8 0028
.org 0x85bca
	beq.n 0x85bd4	@ 00085bca 03d0
.org 0x85bcc
	movs r0, #2	@ 00085bcc 0220
.org 0x85bce
	strb r0, [r4, #13]	@ 00085bce 6073
.org 0x85bd0
	movs r0, #0	@ 00085bd0 0020
.org 0x85bd2
	strb r0, [r4, #14]	@ 00085bd2 a073
.org 0x85bd4
	ldr r0, [r4, #84]	@ 00085bd4 606d
.org 0x85bd6
	ldr r1, [r4, #88]	@ 00085bd6 a16d
.org 0x85bd8
	movs r2, #128	@ 00085bd8 8022
.org 0x85bda
	lsls r2, r2, #3	@ 00085bda d200
.org 0x85bdc
	adds r1, r1, r2	@ 00085bdc 8918
.org 0x85bde
	bl 0x8aa4	@ 00085bde 82f761ff
.org 0x85be2
	ldr r1, [r4, #92]	@ 00085be2 e16d

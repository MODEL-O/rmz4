@ FUN_08107aa8  entry 0x08107aa8  size 196
.thumb
.org 0x107aa8
FUN_08107aa8:
	push {r4, r5, r6, lr}	@ 00107aa8 70b5
.org 0x107aaa
	adds r4, r0, #0	@ 00107aaa 041c
.org 0x107aac
	ldrb r0, [r4, #16]	@ 00107aac 207c
.org 0x107aae
	cmp r0, #2	@ 00107aae 0228
.org 0x107ab0
	beq.n 0x107ad8	@ 00107ab0 12d0
.org 0x107ab2
	ldr r0, [r4, #44]	@ 00107ab2 e06a
.org 0x107ab4
	ldr r1, [pc, #24]	@ 00107ab4 0649
.org 0x107ab6
	adds r0, r0, r1	@ 00107ab6 4018
.org 0x107ab8
	ldr r0, [r0, #60]	@ 00107ab8 c06b
.org 0x107aba
	cmp r0, #0	@ 00107aba 0028
.org 0x107abc
	beq.n 0x107b2c	@ 00107abc 36d0
.org 0x107abe
	ldr r0, [pc, #20]	@ 00107abe 0548
.org 0x107ac0
	ldrb r1, [r4, #13]	@ 00107ac0 617b
.org 0x107ac2
	lsls r1, r1, #2	@ 00107ac2 8900
.org 0x107ac4
	adds r1, r1, r0	@ 00107ac4 0918
.org 0x107ac6
	ldr r1, [r1, #0]	@ 00107ac6 0968
.org 0x107ac8
	adds r0, r4, #0	@ 00107ac8 201c
.org 0x107aca
	bl 0x128f80	@ 00107aca 21f059fa
.org 0x107ace
	b.n 0x107b2c	@ 00107ace 2de0
.org 0x107ad0
	.byte 0xcc,0x0d,0x00,0x00	@ 00107ad0 data
.org 0x107ad4
	.byte 0x1c,0xc4,0x86,0x08	@ 00107ad4 data
.org 0x107ad8
	ldr r0, [r4, #44]	@ 00107ad8 e06a
.org 0x107ada
	ldr r6, [pc, #60]	@ 00107ada 0f4e
.org 0x107adc
	adds r0, r0, r6	@ 00107adc 8019
.org 0x107ade
	ldr r0, [r0, #104]	@ 00107ade 806e
.org 0x107ae0
	cmp r0, #255	@ 00107ae0 ff28
.org 0x107ae2
	beq.n 0x107b1c	@ 00107ae2 1bd0
.org 0x107ae4
	adds r5, r4, #0	@ 00107ae4 251c
.org 0x107ae6
	adds r5, #180	@ 00107ae6 b435
.org 0x107ae8
	ldrb r0, [r5, #0]	@ 00107ae8 2878
.org 0x107aea
	cmp r0, #0	@ 00107aea 0028
.org 0x107aec
	bne.n 0x107b2c	@ 00107aec 1ed1
.org 0x107aee
	adds r0, r4, #0	@ 00107aee 201c
.org 0x107af0
	bl 0x1cc9c	@ 00107af0 15f7d4f8
.org 0x107af4
	ldr r0, [r4, #44]	@ 00107af4 e06a
.org 0x107af6
	adds r0, r0, r6	@ 00107af6 8019
.org 0x107af8
	ldr r0, [r0, #104]	@ 00107af8 806e
.org 0x107afa
	adds r1, r4, #0	@ 00107afa 211c
.org 0x107afc
	adds r1, #34	@ 00107afc 2231
.org 0x107afe
	strb r0, [r1, #0]	@ 00107afe 0870
.org 0x107b00
	ldrb r1, [r4, #10]	@ 00107b00 a17a
.org 0x107b02
	movs r0, #1	@ 00107b02 0120
.org 0x107b04
	orrs r0, r1	@ 00107b04 0843
.org 0x107b06
	strb r0, [r4, #10]	@ 00107b06 a072
.org 0x107b08
	movs r1, #246	@ 00107b08 f621
.org 0x107b0a
	lsls r1, r1, #8	@ 00107b0a 0902
.org 0x107b0c
	adds r0, r4, #0	@ 00107b0c 201c
.org 0x107b0e
	bl 0x1cf00	@ 00107b0e 15f7f7f9
.org 0x107b12
	movs r0, #1	@ 00107b12 0120
.org 0x107b14
	strb r0, [r5, #0]	@ 00107b14 2870
.org 0x107b16
	b.n 0x107b2c	@ 00107b16 09e0
.org 0x107b18
	.byte 0xcc,0x0d,0x00,0x00	@ 00107b18 data
.org 0x107b1c
	ldrb r1, [r4, #10]	@ 00107b1c a17a
.org 0x107b1e
	movs r0, #254	@ 00107b1e fe20
.org 0x107b20
	ands r0, r1	@ 00107b20 0840
.org 0x107b22
	movs r1, #0	@ 00107b22 0021
.org 0x107b24
	strb r0, [r4, #10]	@ 00107b24 a072
.org 0x107b26
	adds r0, r4, #0	@ 00107b26 201c
.org 0x107b28
	adds r0, #180	@ 00107b28 b430
.org 0x107b2a
	strb r1, [r0, #0]	@ 00107b2a 0170
.org 0x107b2c
	ldr r0, [r4, #44]	@ 00107b2c e06a
.org 0x107b2e
	ldr r1, [pc, #72]	@ 00107b2e 1249
.org 0x107b30
	adds r0, r0, r1	@ 00107b30 4018
.org 0x107b32
	ldr r3, [r0, #60]	@ 00107b32 c36b
.org 0x107b34
	cmp r3, #3	@ 00107b34 032b
.org 0x107b36
	bne.n 0x107b6c	@ 00107b36 19d1
.org 0x107b38
	ldrb r1, [r4, #10]	@ 00107b38 a17a
.org 0x107b3a
	movs r0, #254	@ 00107b3a fe20
.org 0x107b3c
	ands r0, r1	@ 00107b3c 0840
.org 0x107b3e
	movs r2, #0	@ 00107b3e 0022
.org 0x107b40
	movs r1, #253	@ 00107b40 fd21
.org 0x107b42
	ands r0, r1	@ 00107b42 0840
.org 0x107b44
	strb r0, [r4, #10]	@ 00107b44 a072
.org 0x107b46
	adds r0, r4, #0	@ 00107b46 201c
.org 0x107b48
	adds r0, #140	@ 00107b48 8c30
.org 0x107b4a
	str r2, [r0, #0]	@ 00107b4a 0260
.org 0x107b4c
	adds r0, #4	@ 00107b4c 0430
.org 0x107b4e
	str r2, [r0, #0]	@ 00107b4e 0260
.org 0x107b50
	adds r0, #4	@ 00107b50 0430
.org 0x107b52
	strb r2, [r0, #0]	@ 00107b52 0270
.org 0x107b54
	ldrb r1, [r4, #10]	@ 00107b54 a17a
.org 0x107b56
	movs r0, #251	@ 00107b56 fb20
.org 0x107b58
	ands r0, r1	@ 00107b58 0840
.org 0x107b5a
	strb r0, [r4, #10]	@ 00107b5a a072
.org 0x107b5c
	ldr r1, [pc, #28]	@ 00107b5c 0749
.org 0x107b5e
	ldrb r0, [r4, #9]	@ 00107b5e 607a
.org 0x107b60
	lsls r0, r0, #2	@ 00107b60 8000
.org 0x107b62
	adds r0, r0, r1	@ 00107b62 4018
.org 0x107b64
	str r3, [r4, #12]	@ 00107b64 e360
.org 0x107b66
	ldr r0, [r0, #0]	@ 00107b66 0068
.org 0x107b68
	ldr r0, [r0, #12]	@ 00107b68 c068
.org 0x107b6a
	str r0, [r4, #20]	@ 00107b6a 6061

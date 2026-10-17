@ FUN_080d7aec  entry 0x080d7aec  size 352
.thumb
.org 0xd7aec
FUN_080d7aec:
	push {r4, r5, r6, r7, lr}	@ 000d7aec f0b5
.org 0xd7aee
	adds r7, r0, #0	@ 000d7aee 071c
.org 0xd7af0
	ldr r0, [r7, #40]	@ 000d7af0 b86a
.org 0xd7af2
	ldrb r0, [r0, #10]	@ 000d7af2 807a
.org 0xd7af4
	lsls r0, r0, #24	@ 000d7af4 0006
.org 0xd7af6
	lsrs r5, r0, #28	@ 000d7af6 050f
.org 0xd7af8
	movs r1, #1	@ 000d7af8 0121
.org 0xd7afa
	ands r5, r1	@ 000d7afa 0d40
.org 0xd7afc
	lsrs r4, r0, #29	@ 000d7afc 440f
.org 0xd7afe
	ands r4, r1	@ 000d7afe 0c40
.org 0xd7b00
	ldrb r6, [r7, #17]	@ 000d7b00 7e7c
.org 0xd7b02
	ldrb r0, [r7, #14]	@ 000d7b02 b87b
.org 0xd7b04
	cmp r0, #0	@ 000d7b04 0028
.org 0xd7b06
	beq.n 0xd7b0e	@ 000d7b06 02d0
.org 0xd7b08
	cmp r0, #1	@ 000d7b08 0128
.org 0xd7b0a
	beq.n 0xd7bca	@ 000d7b0a 5ed0
.org 0xd7b0c
	b.n 0xd7c60	@ 000d7b0c a8e0
.org 0xd7b0e
	ldrb r1, [r7, #10]	@ 000d7b0e b97a
.org 0xd7b10
	movs r0, #1	@ 000d7b10 0120
.org 0xd7b12
	movs r3, #0	@ 000d7b12 0023
.org 0xd7b14
	adds r2, r0, #0	@ 000d7b14 021c
.org 0xd7b16
	orrs r2, r1	@ 000d7b16 0a43
.org 0xd7b18
	strb r2, [r7, #10]	@ 000d7b18 ba72
.org 0xd7b1a
	adds r1, r5, #0	@ 000d7b1a 291c
.org 0xd7b1c
	cmp r5, #0	@ 000d7b1c 002d
.org 0xd7b1e
	beq.n 0xd7b26	@ 000d7b1e 02d0
.org 0xd7b20
	movs r0, #16	@ 000d7b20 1020
.org 0xd7b22
	orrs r2, r0	@ 000d7b22 0243
.org 0xd7b24
	b.n 0xd7b2a	@ 000d7b24 01e0
.org 0xd7b26
	movs r0, #239	@ 000d7b26 ef20
.org 0xd7b28
	ands r2, r0	@ 000d7b28 0240
.org 0xd7b2a
	strb r2, [r7, #10]	@ 000d7b2a ba72
.org 0xd7b2c
	adds r0, r7, #0	@ 000d7b2c 381c
.org 0xd7b2e
	adds r0, #76	@ 000d7b2e 4c30
.org 0xd7b30
	strb r1, [r0, #0]	@ 000d7b30 0170
.org 0xd7b32
	adds r2, r7, #0	@ 000d7b32 3a1c
.org 0xd7b34
	adds r2, #74	@ 000d7b34 4a32
.org 0xd7b36
	lsls r1, r1, #4	@ 000d7b36 0901
.org 0xd7b38
	ldrb r3, [r2, #0]	@ 000d7b38 1378
.org 0xd7b3a
	movs r0, #17	@ 000d7b3a 1120
.org 0xd7b3c
	negs r0, r0	@ 000d7b3c 4042
.org 0xd7b3e
	ands r0, r3	@ 000d7b3e 1840
.org 0xd7b40
	orrs r0, r1	@ 000d7b40 0843
.org 0xd7b42
	strb r0, [r2, #0]	@ 000d7b42 1070
.org 0xd7b44
	adds r3, r4, #0	@ 000d7b44 231c
.org 0xd7b46
	adds r4, r2, #0	@ 000d7b46 141c
.org 0xd7b48
	cmp r3, #0	@ 000d7b48 002b
.org 0xd7b4a
	beq.n 0xd7b54	@ 000d7b4a 03d0
.org 0xd7b4c
	ldrb r0, [r7, #10]	@ 000d7b4c b87a
.org 0xd7b4e
	movs r1, #32	@ 000d7b4e 2021
.org 0xd7b50
	orrs r0, r1	@ 000d7b50 0843
.org 0xd7b52
	b.n 0xd7b5a	@ 000d7b52 02e0
.org 0xd7b54
	ldrb r1, [r7, #10]	@ 000d7b54 b97a
.org 0xd7b56
	movs r0, #223	@ 000d7b56 df20
.org 0xd7b58
	ands r0, r1	@ 000d7b58 0840
.org 0xd7b5a
	strb r0, [r7, #10]	@ 000d7b5a b872
.org 0xd7b5c
	adds r1, r3, #0	@ 000d7b5c 191c
.org 0xd7b5e
	adds r2, r7, #0	@ 000d7b5e 3a1c
.org 0xd7b60
	adds r2, #77	@ 000d7b60 4d32
.org 0xd7b62
	strb r1, [r2, #0]	@ 000d7b62 1170
.org 0xd7b64
	lsls r1, r1, #5	@ 000d7b64 4901
.org 0xd7b66
	ldrb r2, [r4, #0]	@ 000d7b66 2278
.org 0xd7b68
	movs r0, #33	@ 000d7b68 2120
.org 0xd7b6a
	negs r0, r0	@ 000d7b6a 4042
.org 0xd7b6c
	ands r0, r2	@ 000d7b6c 1040
.org 0xd7b6e
	orrs r0, r1	@ 000d7b6e 0843
.org 0xd7b70
	strb r0, [r4, #0]	@ 000d7b70 2070
.org 0xd7b72
	ldr r1, [r7, #116]	@ 000d7b72 796f
.org 0xd7b74
	lsls r0, r6, #1	@ 000d7b74 7000
.org 0xd7b76
	adds r0, r0, r1	@ 000d7b76 4018
.org 0xd7b78
	ldrh r1, [r0, #0]	@ 000d7b78 0188
.org 0xd7b7a
	adds r0, r7, #0	@ 000d7b7a 381c
.org 0xd7b7c
	bl 0x1cf00	@ 000d7b7c 45f7c0f9
.org 0xd7b80
	cmp r5, #0	@ 000d7b80 002d
.org 0xd7b82
	beq.n 0xd7b88	@ 000d7b82 01d0
.org 0xd7b84
	movs r0, #2	@ 000d7b84 0220
.org 0xd7b86
	subs r6, r0, r6	@ 000d7b86 861b
.org 0xd7b88
	subs r1, r6, #1	@ 000d7b88 711e
.org 0xd7b8a
	lsls r1, r1, #8	@ 000d7b8a 0902
.org 0xd7b8c
	ldr r6, [pc, #80]	@ 000d7b8c 144e
.org 0xd7b8e
	ldr r0, [r6, #0]	@ 000d7b8e 3068
.org 0xd7b90
	ldr r5, [pc, #80]	@ 000d7b90 144d
.org 0xd7b92
	muls r0, r5	@ 000d7b92 6843
.org 0xd7b94
	ldr r3, [pc, #80]	@ 000d7b94 144b
.org 0xd7b96
	adds r0, r0, r3	@ 000d7b96 c018
.org 0xd7b98
	lsls r0, r0, #1	@ 000d7b98 4000
.org 0xd7b9a
	lsrs r2, r0, #1	@ 000d7b9a 4208
.org 0xd7b9c
	lsrs r0, r0, #17	@ 000d7b9c 400c
.org 0xd7b9e
	ldr r4, [pc, #76]	@ 000d7b9e 134c
.org 0xd7ba0
	ands r0, r4	@ 000d7ba0 2040
.org 0xd7ba2
	adds r1, r1, r0	@ 000d7ba2 0918
.org 0xd7ba4
	ldr r0, [pc, #72]	@ 000d7ba4 1248
.org 0xd7ba6
	adds r1, r1, r0	@ 000d7ba6 0918
.org 0xd7ba8
	str r1, [r7, #92]	@ 000d7ba8 f965
.org 0xd7baa
	adds r0, r2, #0	@ 000d7baa 101c
.org 0xd7bac
	muls r0, r5	@ 000d7bac 6843
.org 0xd7bae
	adds r0, r0, r3	@ 000d7bae c018
.org 0xd7bb0
	lsls r0, r0, #1	@ 000d7bb0 4000
.org 0xd7bb2
	lsrs r1, r0, #1	@ 000d7bb2 4108
.org 0xd7bb4
	str r1, [r6, #0]	@ 000d7bb4 3160
.org 0xd7bb6
	lsrs r0, r0, #17	@ 000d7bb6 400c
.org 0xd7bb8
	ands r0, r4	@ 000d7bb8 2040
.org 0xd7bba
	ldr r1, [pc, #56]	@ 000d7bba 0e49
.org 0xd7bbc
	subs r1, r1, r0	@ 000d7bbc 091a
.org 0xd7bbe
	str r1, [r7, #96]	@ 000d7bbe 3966
.org 0xd7bc0
	movs r0, #0	@ 000d7bc0 0020
.org 0xd7bc2
	strb r0, [r7, #18]	@ 000d7bc2 b874
.org 0xd7bc4
	ldrb r0, [r7, #14]	@ 000d7bc4 b87b
.org 0xd7bc6
	adds r0, #1	@ 000d7bc6 0130
.org 0xd7bc8
	strb r0, [r7, #14]	@ 000d7bc8 b873
.org 0xd7bca
	ldrb r0, [r7, #18]	@ 000d7bca b87c
.org 0xd7bcc
	adds r0, #1	@ 000d7bcc 0130
.org 0xd7bce
	strb r0, [r7, #18]	@ 000d7bce b874
.org 0xd7bd0
	movs r1, #1	@ 000d7bd0 0121
.org 0xd7bd2
	ands r0, r1	@ 000d7bd2 0840
.org 0xd7bd4
	cmp r0, #0	@ 000d7bd4 0028
.org 0xd7bd6
	beq.n 0xd7bf8	@ 000d7bd6 0fd0
.org 0xd7bd8
	ldrb r0, [r7, #10]	@ 000d7bd8 b87a
.org 0xd7bda
	orrs r0, r1	@ 000d7bda 0843
.org 0xd7bdc
	b.n 0xd7bfe	@ 000d7bdc 0fe0
.org 0xd7bde
	.byte 0x00	@ 000d7bde data
.org 0xd7bdf
	.byte 0x00	@ 000d7bdf data
.org 0xd7be0
	.byte 0x38,0xdc,0x02,0x02	@ 000d7be0 data
.org 0xd7be4
	.byte 0xfd,0x43,0x03,0x00	@ 000d7be4 data
.org 0xd7be8
	.byte 0xc3,0x9e,0x26,0x00	@ 000d7be8 data
.org 0xd7bec
	.byte 0xff,0x01,0x00,0x00	@ 000d7bec data
.org 0xd7bf0
	.byte 0x00,0xff,0xff,0xff	@ 000d7bf0 data
.org 0xd7bf4
	.byte 0x00,0xfe,0xff,0xff	@ 000d7bf4 data
.org 0xd7bf8
	ldrb r1, [r7, #10]	@ 000d7bf8 b97a
.org 0xd7bfa
	movs r0, #254	@ 000d7bfa fe20
.org 0xd7bfc
	ands r0, r1	@ 000d7bfc 0840
.org 0xd7bfe
	strb r0, [r7, #10]	@ 000d7bfe b872
.org 0xd7c00
	ldr r0, [r7, #84]	@ 000d7c00 786d
.org 0xd7c02
	ldr r1, [r7, #92]	@ 000d7c02 f96d
.org 0xd7c04
	adds r0, r0, r1	@ 000d7c04 4018
.org 0xd7c06
	str r0, [r7, #84]	@ 000d7c06 7865
.org 0xd7c08
	ldr r0, [r7, #88]	@ 000d7c08 b86d
.org 0xd7c0a
	ldr r1, [r7, #96]	@ 000d7c0a 396e
.org 0xd7c0c
	adds r0, r0, r1	@ 000d7c0c 4018
.org 0xd7c0e
	str r0, [r7, #88]	@ 000d7c0e b865
.org 0xd7c10
	adds r1, #64	@ 000d7c10 4031
.org 0xd7c12
	str r1, [r7, #96]	@ 000d7c12 3966
.org 0xd7c14
	adds r0, r7, #0	@ 000d7c14 381c
.org 0xd7c16
	bl 0x1d134	@ 000d7c16 45f78dfa
.org 0xd7c1a
	ldr r0, [r7, #84]	@ 000d7c1a 786d
.org 0xd7c1c
	ldr r1, [r7, #88]	@ 000d7c1c b96d
.org 0xd7c1e
	bl 0x7c7c	@ 000d7c1e 30f72df8
.org 0xd7c22
	lsls r0, r0, #16	@ 000d7c22 0004
.org 0xd7c24
	cmp r0, #0	@ 000d7c24 0028
.org 0xd7c26
	beq.n 0xd7c60	@ 000d7c26 1bd0
.org 0xd7c28
	ldr r0, [r7, #96]	@ 000d7c28 386e
.org 0xd7c2a
	cmp r0, #0	@ 000d7c2a 0028
.org 0xd7c2c
	ble.n 0xd7c60	@ 000d7c2c 18dd
.org 0xd7c2e
	adds r0, r7, #0	@ 000d7c2e 381c
.org 0xd7c30
	adds r0, #121	@ 000d7c30 7930
.org 0xd7c32
	ldrb r0, [r0, #0]	@ 000d7c32 0078
.org 0xd7c34
	cmp r0, #0	@ 000d7c34 0028
.org 0xd7c36
	bne.n 0xd7c44	@ 000d7c36 05d1
.org 0xd7c38
	adds r1, r7, #0	@ 000d7c38 391c
.org 0xd7c3a
	adds r1, #84	@ 000d7c3a 5431
.org 0xd7c3c
	movs r0, #3	@ 000d7c3c 0320
.org 0xd7c3e
	bl 0xd0c88	@ 000d7c3e f9f723f8
.org 0xd7c42
	b.n 0xd7c4e	@ 000d7c42 04e0
.org 0xd7c44
	adds r1, r7, #0	@ 000d7c44 391c
.org 0xd7c46
	adds r1, #84	@ 000d7c46 5431
.org 0xd7c48
	movs r0, #2	@ 000d7c48 0220
.org 0xd7c4a
	bl 0xd0c88	@ 000d7c4a f9f71df8

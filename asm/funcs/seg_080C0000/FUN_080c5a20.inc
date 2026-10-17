@ FUN_080c5a20  entry 0x080c5a20  size 284
.thumb
.org 0xc5a20
FUN_080c5a20:
	push {r4, r5, r6, lr}	@ 000c5a20 70b5
.org 0xc5a22
	sub sp, #12	@ 000c5a22 83b0
.org 0xc5a24
	adds r4, r0, #0	@ 000c5a24 041c
.org 0xc5a26
	ldr r0, [pc, #116]	@ 000c5a26 1d48
.org 0xc5a28
	ldr r1, [r0, #4]	@ 000c5a28 4168
.org 0xc5a2a
	ldr r0, [r0, #0]	@ 000c5a2a 0068
.org 0xc5a2c
	str r0, [sp, #4]	@ 000c5a2c 0190
.org 0xc5a2e
	str r1, [sp, #8]	@ 000c5a2e 0291
.org 0xc5a30
	ldr r1, [pc, #108]	@ 000c5a30 1b49
.org 0xc5a32
	mov r0, sp	@ 000c5a32 6846
.org 0xc5a34
	movs r2, #2	@ 000c5a34 0222
.org 0xc5a36
	bl 0x129258	@ 000c5a36 63f00ffc
.org 0xc5a3a
	ldrb r5, [r4, #17]	@ 000c5a3a 657c
.org 0xc5a3c
	ldrb r6, [r4, #15]	@ 000c5a3c e67b
.org 0xc5a3e
	cmp r6, #0	@ 000c5a3e 002e
.org 0xc5a40
	bne.n 0xc5a74	@ 000c5a40 18d1
.org 0xc5a42
	adds r0, r4, #0	@ 000c5a42 201c
.org 0xc5a44
	adds r0, #116	@ 000c5a44 7430
.org 0xc5a46
	mov r2, sp	@ 000c5a46 6a46
.org 0xc5a48
	adds r1, r2, r5	@ 000c5a48 5119
.org 0xc5a4a
	ldrb r2, [r1, #0]	@ 000c5a4a 0a78
.org 0xc5a4c
	lsls r1, r2, #1	@ 000c5a4c 5100
.org 0xc5a4e
	adds r1, r1, r2	@ 000c5a4e 8918
.org 0xc5a50
	lsls r1, r1, #3	@ 000c5a50 c900
.org 0xc5a52
	ldr r2, [pc, #80]	@ 000c5a52 144a
.org 0xc5a54
	adds r1, r1, r2	@ 000c5a54 8918
.org 0xc5a56
	bl 0x5784	@ 000c5a56 3ff795fe
.org 0xc5a5a
	lsls r0, r5, #2	@ 000c5a5a a800
.org 0xc5a5c
	add r1, sp, #4	@ 000c5a5c 01a9
.org 0xc5a5e
	adds r0, r0, r1	@ 000c5a5e 4018
.org 0xc5a60
	ldrh r1, [r0, #0]	@ 000c5a60 0188
.org 0xc5a62
	adds r0, r4, #0	@ 000c5a62 201c
.org 0xc5a64
	bl 0x1cf00	@ 000c5a64 57f74cfa
.org 0xc5a68
	movs r0, #1	@ 000c5a68 0120
.org 0xc5a6a
	strb r0, [r4, #18]	@ 000c5a6a a074
.org 0xc5a6c
	strb r6, [r4, #19]	@ 000c5a6c e674
.org 0xc5a6e
	ldrb r0, [r4, #15]	@ 000c5a6e e07b
.org 0xc5a70
	adds r0, #1	@ 000c5a70 0130
.org 0xc5a72
	strb r0, [r4, #15]	@ 000c5a72 e073
.org 0xc5a74
	adds r1, r4, #0	@ 000c5a74 211c
.org 0xc5a76
	adds r1, #140	@ 000c5a76 8c31
.org 0xc5a78
	ldr r5, [r1, #0]	@ 000c5a78 0d68
.org 0xc5a7a
	movs r0, #128	@ 000c5a7a 8020
.org 0xc5a7c
	lsls r0, r0, #4	@ 000c5a7c 0001
.org 0xc5a7e
	ands r5, r0	@ 000c5a7e 0540
.org 0xc5a80
	adds r6, r1, #0	@ 000c5a80 0e1c
.org 0xc5a82
	cmp r5, #0	@ 000c5a82 002d
.org 0xc5a84
	beq.n 0xc5aac	@ 000c5a84 12d0
.org 0xc5a86
	movs r1, #0	@ 000c5a86 0021
.org 0xc5a88
	movs r0, #1	@ 000c5a88 0120
.org 0xc5a8a
	strb r0, [r4, #13]	@ 000c5a8a 6073
.org 0xc5a8c
	strb r1, [r4, #14]	@ 000c5a8c a173
.org 0xc5a8e
	strb r1, [r4, #15]	@ 000c5a8e e173
.org 0xc5a90
	ldr r0, [pc, #20]	@ 000c5a90 0548
.org 0xc5a92
	ldr r1, [r0, #4]	@ 000c5a92 4168
.org 0xc5a94
	adds r0, r4, #0	@ 000c5a94 201c
.org 0xc5a96
	bl 0x128f80	@ 000c5a96 63f073fa
.org 0xc5a9a
	b.n 0xc5b48	@ 000c5a9a 55e0
.org 0xc5a9c
	.byte 0x6c,0xa1,0x12,0x08	@ 000c5a9c data
.org 0xc5aa0
	.byte 0x68,0xa1,0x12,0x08	@ 000c5aa0 data
.org 0xc5aa4
	.byte 0xa8,0x58,0x86,0x08	@ 000c5aa4 data
.org 0xc5aa8
	.byte 0x94,0x58,0x86,0x08	@ 000c5aa8 data
.org 0xc5aac
	adds r0, r4, #0	@ 000c5aac 201c
.org 0xc5aae
	bl 0x1cff0	@ 000c5aae 57f79ffa
.org 0xc5ab2
	ldr r0, [r4, #84]	@ 000c5ab2 606d
.org 0xc5ab4
	ldr r1, [r4, #92]	@ 000c5ab4 e16d
.org 0xc5ab6
	adds r0, r0, r1	@ 000c5ab6 4018
.org 0xc5ab8
	str r0, [r4, #84]	@ 000c5ab8 6065
.org 0xc5aba
	ldr r0, [r4, #88]	@ 000c5aba a06d
.org 0xc5abc
	ldr r1, [r4, #96]	@ 000c5abc 216e
.org 0xc5abe
	adds r0, r0, r1	@ 000c5abe 4018
.org 0xc5ac0
	str r0, [r4, #88]	@ 000c5ac0 a065
.org 0xc5ac2
	ldr r0, [r4, #104]	@ 000c5ac2 a06e
.org 0xc5ac4
	adds r1, r1, r0	@ 000c5ac4 0918
.org 0xc5ac6
	str r1, [r4, #96]	@ 000c5ac6 2166
.org 0xc5ac8
	ldr r0, [pc, #52]	@ 000c5ac8 0d48
.org 0xc5aca
	cmp r1, r0	@ 000c5aca 8142
.org 0xc5acc
	bge.n 0xc5ad0	@ 000c5acc 00da
.org 0xc5ace
	str r0, [r4, #96]	@ 000c5ace 2066
.org 0xc5ad0
	ldrb r0, [r4, #18]	@ 000c5ad0 a07c
.org 0xc5ad2
	cmp r0, #0	@ 000c5ad2 0028
.org 0xc5ad4
	beq.n 0xc5ae8	@ 000c5ad4 08d0
.org 0xc5ad6
	ldr r0, [r4, #84]	@ 000c5ad6 606d
.org 0xc5ad8
	ldr r1, [r4, #88]	@ 000c5ad8 a16d
.org 0xc5ada
	bl 0x7c7c	@ 000c5ada 42f7cff8
.org 0xc5ade
	lsls r0, r0, #16	@ 000c5ade 0004
.org 0xc5ae0
	cmp r0, #0	@ 000c5ae0 0028
.org 0xc5ae2
	beq.n 0xc5ae8	@ 000c5ae2 01d0
.org 0xc5ae4
	str r5, [r4, #96]	@ 000c5ae4 2566
.org 0xc5ae6
	strb r5, [r4, #18]	@ 000c5ae6 a574
.org 0xc5ae8
	ldrb r0, [r4, #19]	@ 000c5ae8 e07c
.org 0xc5aea
	adds r0, #1	@ 000c5aea 0130
.org 0xc5aec
	strb r0, [r4, #19]	@ 000c5aec e074
.org 0xc5aee
	movs r1, #255	@ 000c5aee ff21
.org 0xc5af0
	ands r0, r1	@ 000c5af0 0840
.org 0xc5af2
	movs r1, #1	@ 000c5af2 0121
.org 0xc5af4
	ands r0, r1	@ 000c5af4 0840
.org 0xc5af6
	cmp r0, #0	@ 000c5af6 0028
.org 0xc5af8
	beq.n 0xc5b04	@ 000c5af8 04d0
.org 0xc5afa
	ldrb r0, [r4, #10]	@ 000c5afa a07a
.org 0xc5afc
	orrs r0, r1	@ 000c5afc 0843
.org 0xc5afe
	b.n 0xc5b0a	@ 000c5afe 04e0
.org 0xc5b00
	.byte 0x00,0xf9,0xff,0xff	@ 000c5b00 data
.org 0xc5b04
	ldrb r1, [r4, #10]	@ 000c5b04 a17a
.org 0xc5b06
	movs r0, #254	@ 000c5b06 fe20
.org 0xc5b08
	ands r0, r1	@ 000c5b08 0840
.org 0xc5b0a
	strb r0, [r4, #10]	@ 000c5b0a a072
.org 0xc5b0c
	adds r0, r4, #0	@ 000c5b0c 201c
.org 0xc5b0e
	adds r0, #115	@ 000c5b0e 7330
.org 0xc5b10
	ldrb r3, [r0, #0]	@ 000c5b10 0378
.org 0xc5b12
	cmp r3, #3	@ 000c5b12 032b
.org 0xc5b14
	bne.n 0xc5b48	@ 000c5b14 18d1
.org 0xc5b16
	ldrb r1, [r4, #10]	@ 000c5b16 a17a
.org 0xc5b18
	movs r0, #254	@ 000c5b18 fe20
.org 0xc5b1a
	ands r0, r1	@ 000c5b1a 0840
.org 0xc5b1c
	movs r2, #0	@ 000c5b1c 0022
.org 0xc5b1e
	movs r1, #253	@ 000c5b1e fd21
.org 0xc5b20
	ands r0, r1	@ 000c5b20 0840
.org 0xc5b22
	strb r0, [r4, #10]	@ 000c5b22 a072
.org 0xc5b24
	str r2, [r6, #0]	@ 000c5b24 3260
.org 0xc5b26
	adds r0, r4, #0	@ 000c5b26 201c
.org 0xc5b28
	adds r0, #144	@ 000c5b28 9030
.org 0xc5b2a
	str r2, [r0, #0]	@ 000c5b2a 0260
.org 0xc5b2c
	adds r0, #4	@ 000c5b2c 0430
.org 0xc5b2e
	strb r2, [r0, #0]	@ 000c5b2e 0270
.org 0xc5b30
	ldrb r1, [r4, #10]	@ 000c5b30 a17a
.org 0xc5b32
	movs r0, #251	@ 000c5b32 fb20
.org 0xc5b34
	ands r0, r1	@ 000c5b34 0840
.org 0xc5b36
	strb r0, [r4, #10]	@ 000c5b36 a072
.org 0xc5b38
	ldr r1, [pc, #20]	@ 000c5b38 0549
.org 0xc5b3a
	ldrb r0, [r4, #9]	@ 000c5b3a 607a

@ FUN_08108aac  entry 0x08108aac  size 498
.thumb
.org 0x108aac
FUN_08108aac:
	push {r4, r5, r6, lr}	@ 00108aac 70b5
.org 0x108aae
	adds r4, r0, #0	@ 00108aae 041c
.org 0x108ab0
	bl 0x1cff0	@ 00108ab0 14f79efa
.org 0x108ab4
	ldrb r0, [r4, #17]	@ 00108ab4 607c
.org 0x108ab6
	cmp r0, #0	@ 00108ab6 0028
.org 0x108ab8
	bne.n 0x108ae0	@ 00108ab8 12d1
.org 0x108aba
	ldrh r0, [r4, #18]	@ 00108aba 608a
.org 0x108abc
	subs r1, r0, #1	@ 00108abc 411e
.org 0x108abe
	strh r1, [r4, #18]	@ 00108abe 6182
.org 0x108ac0
	lsls r0, r1, #16	@ 00108ac0 0804
.org 0x108ac2
	lsrs r0, r0, #16	@ 00108ac2 000c
.org 0x108ac4
	cmp r0, #59	@ 00108ac4 3b28
.org 0x108ac6
	bhi.n 0x108ae0	@ 00108ac6 0bd8
.org 0x108ac8
	movs r0, #2	@ 00108ac8 0220
.org 0x108aca
	ands r1, r0	@ 00108aca 0140
.org 0x108acc
	cmp r1, #0	@ 00108acc 0029
.org 0x108ace
	beq.n 0x108ad8	@ 00108ace 03d0
.org 0x108ad0
	ldrb r1, [r4, #10]	@ 00108ad0 a17a
.org 0x108ad2
	movs r0, #1	@ 00108ad2 0120
.org 0x108ad4
	orrs r0, r1	@ 00108ad4 0843
.org 0x108ad6
	b.n 0x108ade	@ 00108ad6 02e0
.org 0x108ad8
	ldrb r1, [r4, #10]	@ 00108ad8 a17a
.org 0x108ada
	movs r0, #254	@ 00108ada fe20
.org 0x108adc
	ands r0, r1	@ 00108adc 0840
.org 0x108ade
	strb r0, [r4, #10]	@ 00108ade a072
.org 0x108ae0
	adds r0, r4, #0	@ 00108ae0 201c
.org 0x108ae2
	adds r0, #140	@ 00108ae2 8c30
.org 0x108ae4
	ldr r1, [r0, #0]	@ 00108ae4 0168
.org 0x108ae6
	movs r2, #4	@ 00108ae6 0422
.org 0x108ae8
	ands r1, r2	@ 00108ae8 1140
.org 0x108aea
	adds r5, r0, #0	@ 00108aea 051c
.org 0x108aec
	cmp r1, #0	@ 00108aec 0029
.org 0x108aee
	beq.n 0x108b34	@ 00108aee 21d0
.org 0x108af0
	adds r0, #44	@ 00108af0 2c30
.org 0x108af2
	ldr r0, [r0, #0]	@ 00108af2 0068
.org 0x108af4
	cmp r0, #0	@ 00108af4 0028
.org 0x108af6
	beq.n 0x108b34	@ 00108af6 1dd0
.org 0x108af8
	ldrb r1, [r4, #10]	@ 00108af8 a17a
.org 0x108afa
	movs r0, #254	@ 00108afa fe20
.org 0x108afc
	ands r0, r1	@ 00108afc 0840
.org 0x108afe
	movs r1, #0	@ 00108afe 0021
.org 0x108b00
	strb r0, [r4, #10]	@ 00108b00 a072
.org 0x108b02
	str r1, [r5, #0]	@ 00108b02 2960
.org 0x108b04
	adds r0, r4, #0	@ 00108b04 201c
.org 0x108b06
	adds r0, #144	@ 00108b06 9030
.org 0x108b08
	str r1, [r0, #0]	@ 00108b08 0160
.org 0x108b0a
	adds r0, #4	@ 00108b0a 0430
.org 0x108b0c
	strb r1, [r0, #0]	@ 00108b0c 0170
.org 0x108b0e
	ldrb r1, [r4, #10]	@ 00108b0e a17a
.org 0x108b10
	movs r0, #251	@ 00108b10 fb20
.org 0x108b12
	ands r0, r1	@ 00108b12 0840
.org 0x108b14
	strb r0, [r4, #10]	@ 00108b14 a072
.org 0x108b16
	ldr r1, [pc, #24]	@ 00108b16 0649
.org 0x108b18
	ldrb r0, [r4, #9]	@ 00108b18 607a
.org 0x108b1a
	lsls r0, r0, #2	@ 00108b1a 8000
.org 0x108b1c
	adds r0, r0, r1	@ 00108b1c 4018
.org 0x108b1e
	movs r1, #2	@ 00108b1e 0221
.org 0x108b20
	str r1, [r4, #12]	@ 00108b20 e160
.org 0x108b22
	ldr r0, [r0, #0]	@ 00108b22 0068
.org 0x108b24
	ldr r0, [r0, #8]	@ 00108b24 8068
.org 0x108b26
	str r0, [r4, #20]	@ 00108b26 6061
.org 0x108b28
	adds r0, r4, #0	@ 00108b28 201c
.org 0x108b2a
	bl 0x108cc0	@ 00108b2a 00f0c9f8
.org 0x108b2e
	b.n 0x108cae	@ 00108b2e bee0
.org 0x108b30
	.byte 0x8c,0xc4,0x86,0x08	@ 00108b30 data
.org 0x108b34
	ldrb r0, [r4, #17]	@ 00108b34 607c
.org 0x108b36
	cmp r0, #1	@ 00108b36 0128
.org 0x108b38
	bhi.n 0x108b90	@ 00108b38 2ad8
.org 0x108b3a
	ldrh r0, [r4, #18]	@ 00108b3a 608a
.org 0x108b3c
	cmp r0, #0	@ 00108b3c 0028
.org 0x108b3e
	beq.n 0x108b52	@ 00108b3e 08d0
.org 0x108b40
	ldr r0, [pc, #68]	@ 00108b40 1148
.org 0x108b42
	adds r1, r4, #0	@ 00108b42 211c
.org 0x108b44
	adds r1, #84	@ 00108b44 5431
.org 0x108b46
	bl 0x1fb14	@ 00108b46 16f7e5ff
.org 0x108b4a
	movs r1, #128	@ 00108b4a 8021
.org 0x108b4c
	lsls r1, r1, #8	@ 00108b4c 0902
.org 0x108b4e
	cmp r0, r1	@ 00108b4e 8842
.org 0x108b50
	bls.n 0x108b90	@ 00108b50 1ed9
.org 0x108b52
	ldrb r1, [r4, #10]	@ 00108b52 a17a
.org 0x108b54
	movs r0, #254	@ 00108b54 fe20
.org 0x108b56
	ands r0, r1	@ 00108b56 0840
.org 0x108b58
	movs r2, #0	@ 00108b58 0022
.org 0x108b5a
	movs r1, #253	@ 00108b5a fd21
.org 0x108b5c
	ands r0, r1	@ 00108b5c 0840
.org 0x108b5e
	strb r0, [r4, #10]	@ 00108b5e a072
.org 0x108b60
	str r2, [r5, #0]	@ 00108b60 2a60
.org 0x108b62
	adds r0, r4, #0	@ 00108b62 201c
.org 0x108b64
	adds r0, #144	@ 00108b64 9030
.org 0x108b66
	str r2, [r0, #0]	@ 00108b66 0260
.org 0x108b68
	adds r0, #4	@ 00108b68 0430
.org 0x108b6a
	strb r2, [r0, #0]	@ 00108b6a 0270
.org 0x108b6c
	ldrb r1, [r4, #10]	@ 00108b6c a17a
.org 0x108b6e
	movs r0, #251	@ 00108b6e fb20
.org 0x108b70
	ands r0, r1	@ 00108b70 0840
.org 0x108b72
	strb r0, [r4, #10]	@ 00108b72 a072
.org 0x108b74
	ldr r1, [pc, #20]	@ 00108b74 0549
.org 0x108b76
	ldrb r0, [r4, #9]	@ 00108b76 607a
.org 0x108b78
	lsls r0, r0, #2	@ 00108b78 8000
.org 0x108b7a
	adds r0, r0, r1	@ 00108b7a 4018
.org 0x108b7c
	movs r1, #3	@ 00108b7c 0321
.org 0x108b7e
	str r1, [r4, #12]	@ 00108b7e e160
.org 0x108b80
	ldr r0, [r0, #0]	@ 00108b80 0068
.org 0x108b82
	ldr r0, [r0, #12]	@ 00108b82 c068
.org 0x108b84
	str r0, [r4, #20]	@ 00108b84 6061
.org 0x108b86
	b.n 0x108cae	@ 00108b86 92e0
.org 0x108b88
	.byte 0xf8,0xe9,0x02,0x02	@ 00108b88 data
.org 0x108b8c
	.byte 0x8c,0xc4,0x86,0x08	@ 00108b8c data
.org 0x108b90
	ldrb r6, [r4, #13]	@ 00108b90 667b
.org 0x108b92
	cmp r6, #0	@ 00108b92 002e
.org 0x108b94
	bne.n 0x108c14	@ 00108b94 3ed1
.org 0x108b96
	adds r0, r4, #0	@ 00108b96 201c
.org 0x108b98
	adds r0, #180	@ 00108b98 b430
.org 0x108b9a
	ldr r2, [r4, #88]	@ 00108b9a a26d
.org 0x108b9c
	ldr r1, [r0, #0]	@ 00108b9c 0168
.org 0x108b9e
	adds r5, r0, #0	@ 00108b9e 051c
.org 0x108ba0
	cmp r2, r1	@ 00108ba0 8a42
.org 0x108ba2
	blt.n 0x108bc8	@ 00108ba2 11db
.org 0x108ba4
	ldr r0, [r4, #84]	@ 00108ba4 606d
.org 0x108ba6
	adds r1, r2, #0	@ 00108ba6 111c
.org 0x108ba8
	bl 0x108d14	@ 00108ba8 00f0b4f8
.org 0x108bac
	lsls r0, r0, #16	@ 00108bac 0004
.org 0x108bae
	cmp r0, #0	@ 00108bae 0028
.org 0x108bb0
	beq.n 0x108bc8	@ 00108bb0 0ad0
.org 0x108bb2
	ldr r0, [r4, #84]	@ 00108bb2 606d
.org 0x108bb4
	ldr r1, [r4, #88]	@ 00108bb4 a16d
.org 0x108bb6
	bl 0x108d54	@ 00108bb6 00f0cdf8
.org 0x108bba
	adds r1, r0, #0	@ 00108bba 011c
.org 0x108bbc
	str r1, [r4, #88]	@ 00108bbc a165
.org 0x108bbe
	str r6, [r4, #96]	@ 00108bbe 2666
.org 0x108bc0
	ldrb r0, [r4, #13]	@ 00108bc0 607b
.org 0x108bc2
	adds r0, #1	@ 00108bc2 0130
.org 0x108bc4
	strb r0, [r4, #13]	@ 00108bc4 6073
.org 0x108bc6
	b.n 0x108bf4	@ 00108bc6 15e0
.org 0x108bc8
	ldr r0, [r4, #84]	@ 00108bc8 606d
.org 0x108bca
	ldr r1, [r5, #0]	@ 00108bca 2968
.org 0x108bcc
	bl 0x108d14	@ 00108bcc 00f0a2f8
.org 0x108bd0
	lsls r0, r0, #16	@ 00108bd0 0004
.org 0x108bd2
	cmp r0, #0	@ 00108bd2 0028
.org 0x108bd4
	beq.n 0x108bf4	@ 00108bd4 0ed0
.org 0x108bd6
	ldr r0, [r4, #84]	@ 00108bd6 606d
.org 0x108bd8
	ldr r1, [r5, #0]	@ 00108bd8 2968
.org 0x108bda
	bl 0x108d54	@ 00108bda 00f0bbf8
.org 0x108bde
	adds r1, r0, #0	@ 00108bde 011c
.org 0x108be0
	ldr r0, [r4, #88]	@ 00108be0 a06d
.org 0x108be2
	ldr r2, [pc, #40]	@ 00108be2 0a4a
.org 0x108be4
	adds r0, r0, r2	@ 00108be4 8018
.org 0x108be6
	cmp r1, r0	@ 00108be6 8142
.org 0x108be8
	bge.n 0x108bf4	@ 00108be8 04da
.org 0x108bea
	ldr r0, [r4, #84]	@ 00108bea 606d
.org 0x108bec
	ldr r1, [r5, #0]	@ 00108bec 2968
.org 0x108bee
	bl 0x108d84	@ 00108bee 00f0c9f8
.org 0x108bf2
	str r0, [r5, #0]	@ 00108bf2 2860
.org 0x108bf4
	ldr r0, [r4, #88]	@ 00108bf4 a06d
.org 0x108bf6
	ldr r1, [r4, #96]	@ 00108bf6 216e
.org 0x108bf8
	adds r0, r0, r1	@ 00108bf8 4018
.org 0x108bfa
	str r0, [r4, #88]	@ 00108bfa a065
.org 0x108bfc
	ldr r0, [pc, #16]	@ 00108bfc 0448
.org 0x108bfe
	cmp r1, r0	@ 00108bfe 8142
.org 0x108c00
	bgt.n 0x108cae	@ 00108c00 55dc
.org 0x108c02
	adds r0, r1, #0	@ 00108c02 081c
.org 0x108c04
	adds r0, #64	@ 00108c04 4030
.org 0x108c06
	str r0, [r4, #96]	@ 00108c06 2066
.org 0x108c08
	b.n 0x108cae	@ 00108c08 51e0
.org 0x108c0a
	.byte 0x00	@ 00108c0a data
.org 0x108c0b
	.byte 0x00	@ 00108c0b data
.org 0x108c0c
	.byte 0x00,0xf9,0xff,0xff	@ 00108c0c data
.org 0x108c10
	.byte 0xff,0x06,0x00,0x00	@ 00108c10 data
.org 0x108c14
	ldr r0, [r4, #84]	@ 00108c14 606d
.org 0x108c16
	ldr r1, [r4, #88]	@ 00108c16 a16d
.org 0x108c18
	bl 0x108d54	@ 00108c18 00f09cf8
.org 0x108c1c
	adds r2, r0, #0	@ 00108c1c 021c
.org 0x108c1e
	ldr r3, [r4, #88]	@ 00108c1e a36d
.org 0x108c20
	cmp r2, r3	@ 00108c20 9a42
.org 0x108c22
	bge.n 0x108c2c	@ 00108c22 03da
.org 0x108c24
	str r2, [r4, #88]	@ 00108c24 a265
.org 0x108c26
	movs r0, #0	@ 00108c26 0020
.org 0x108c28
	str r0, [r4, #96]	@ 00108c28 2066
.org 0x108c2a
	b.n 0x108c62	@ 00108c2a 1ae0
.org 0x108c2c
	cmp r2, r3	@ 00108c2c 9a42
.org 0x108c2e
	ble.n 0x108c62	@ 00108c2e 18dd
.org 0x108c30
	ldr r1, [r4, #96]	@ 00108c30 216e
.org 0x108c32
	cmp r1, #0	@ 00108c32 0029
.org 0x108c34
	bne.n 0x108c4e	@ 00108c34 0bd1
.org 0x108c36
	movs r1, #224	@ 00108c36 e021
.org 0x108c38
	lsls r1, r1, #3	@ 00108c38 c900
.org 0x108c3a
	adds r0, r3, r1	@ 00108c3a 5818
.org 0x108c3c
	cmp r2, r0	@ 00108c3c 8242
.org 0x108c3e
	ble.n 0x108c4a	@ 00108c3e 04dd
.org 0x108c40
	movs r0, #64	@ 00108c40 4020
.org 0x108c42
	str r0, [r4, #96]	@ 00108c42 2066
.org 0x108c44
	adds r0, r3, #0	@ 00108c44 181c
.org 0x108c46
	adds r0, #64	@ 00108c46 4030
.org 0x108c48
	b.n 0x108c60	@ 00108c48 0ae0
.org 0x108c4a
	str r2, [r4, #88]	@ 00108c4a a265
.org 0x108c4c
	b.n 0x108c62	@ 00108c4c 09e0
.org 0x108c4e
	ldr r0, [pc, #100]	@ 00108c4e 1948
.org 0x108c50
	cmp r1, r0	@ 00108c50 8142
.org 0x108c52
	bgt.n 0x108c5a	@ 00108c52 02dc
.org 0x108c54
	adds r0, r1, #0	@ 00108c54 081c
.org 0x108c56
	adds r0, #64	@ 00108c56 4030
.org 0x108c58
	str r0, [r4, #96]	@ 00108c58 2066
.org 0x108c5a
	ldr r0, [r4, #88]	@ 00108c5a a06d
.org 0x108c5c
	ldr r1, [r4, #96]	@ 00108c5c 216e
.org 0x108c5e
	adds r0, r0, r1	@ 00108c5e 4018
.org 0x108c60
	str r0, [r4, #88]	@ 00108c60 a065
.org 0x108c62
	ldr r0, [r4, #84]	@ 00108c62 606d
.org 0x108c64
	ldr r2, [pc, #80]	@ 00108c64 144a
.org 0x108c66
	adds r0, r0, r2	@ 00108c66 8018
.org 0x108c68
	ldr r1, [r4, #88]	@ 00108c68 a16d
.org 0x108c6a
	movs r2, #128	@ 00108c6a 8022
.org 0x108c6c
	lsls r2, r2, #3	@ 00108c6c d200
.org 0x108c6e
	adds r1, r1, r2	@ 00108c6e 8918
.org 0x108c70
	bl 0x108db4	@ 00108c70 00f0a0f8
.org 0x108c74
	adds r5, r0, #0	@ 00108c74 051c
.org 0x108c76
	cmp r5, #0	@ 00108c76 002d
.org 0x108c78
	bne.n 0x108c94	@ 00108c78 0cd1
.org 0x108c7a
	ldr r0, [r4, #84]	@ 00108c7a 606d
.org 0x108c7c
	movs r1, #224	@ 00108c7c e021
.org 0x108c7e
	lsls r1, r1, #3	@ 00108c7e c900
.org 0x108c80
	adds r0, r0, r1	@ 00108c80 4018
.org 0x108c82
	ldr r1, [r4, #88]	@ 00108c82 a16d
.org 0x108c84
	movs r2, #128	@ 00108c84 8022
.org 0x108c86
	lsls r2, r2, #3	@ 00108c86 d200
.org 0x108c88
	adds r1, r1, r2	@ 00108c88 8918
.org 0x108c8a
	bl 0x108db4	@ 00108c8a 00f093f8
.org 0x108c8e
	adds r5, r0, #0	@ 00108c8e 051c
.org 0x108c90
	cmp r5, #0	@ 00108c90 002d
.org 0x108c92
	beq.n 0x108cae	@ 00108c92 0cd0
.org 0x108c94
	ldr r0, [r4, #84]	@ 00108c94 606d
.org 0x108c96
	adds r0, r0, r5	@ 00108c96 4019
.org 0x108c98
	ldr r1, [r4, #88]	@ 00108c98 a16d
.org 0x108c9a
	ldr r2, [pc, #32]	@ 00108c9a 084a
.org 0x108c9c
	adds r1, r1, r2	@ 00108c9c 8918

@ FUN_08089b10  entry 0x08089b10  size 490
.thumb
.org 0x89b10
FUN_08089b10:
	push {r4, r5, r6, r7, lr}	@ 00089b10 f0b5
.org 0x89b12
	mov r7, r9	@ 00089b12 4f46
.org 0x89b14
	mov r6, r8	@ 00089b14 4646
.org 0x89b16
	push {r6, r7}	@ 00089b16 c0b4
.org 0x89b18
	sub sp, #28	@ 00089b18 87b0
.org 0x89b1a
	adds r7, r0, #0	@ 00089b1a 071c
.org 0x89b1c
	ldrb r4, [r7, #14]	@ 00089b1c bc7b
.org 0x89b1e
	cmp r4, #0	@ 00089b1e 002c
.org 0x89b20
	beq.n 0x89b28	@ 00089b20 02d0
.org 0x89b22
	cmp r4, #1	@ 00089b22 012c
.org 0x89b24
	beq.n 0x89bac	@ 00089b24 42d0
.org 0x89b26
	b.n 0x89d10	@ 00089b26 f3e0
.org 0x89b28
	ldr r1, [pc, #88]	@ 00089b28 1649
.org 0x89b2a
	adds r0, r7, #0	@ 00089b2a 381c
.org 0x89b2c
	bl 0x1cf00	@ 00089b2c 93f7e8f9
.org 0x89b30
	adds r0, r7, #0	@ 00089b30 381c
.org 0x89b32
	adds r0, #140	@ 00089b32 8c30
.org 0x89b34
	str r4, [r0, #0]	@ 00089b34 0460
.org 0x89b36
	adds r0, #4	@ 00089b36 0430
.org 0x89b38
	str r4, [r0, #0]	@ 00089b38 0460
.org 0x89b3a
	adds r0, #4	@ 00089b3a 0430
.org 0x89b3c
	strb r4, [r0, #0]	@ 00089b3c 0470
.org 0x89b3e
	ldrb r1, [r7, #10]	@ 00089b3e b97a
.org 0x89b40
	movs r0, #251	@ 00089b40 fb20
.org 0x89b42
	ands r0, r1	@ 00089b42 0840
.org 0x89b44
	strb r0, [r7, #10]	@ 00089b44 b872
.org 0x89b46
	str r4, [r7, #96]	@ 00089b46 3c66
.org 0x89b48
	str r4, [r7, #92]	@ 00089b48 fc65
.org 0x89b4a
	strb r4, [r7, #19]	@ 00089b4a fc74
.org 0x89b4c
	ldr r0, [r7, #84]	@ 00089b4c 786d
.org 0x89b4e
	str r0, [sp, #4]	@ 00089b4e 0190
.org 0x89b50
	ldr r0, [r7, #88]	@ 00089b50 b86d
.org 0x89b52
	str r0, [sp, #8]	@ 00089b52 0290
.org 0x89b54
	ldrb r1, [r7, #10]	@ 00089b54 b97a
.org 0x89b56
	lsrs r1, r1, #4	@ 00089b56 0909
.org 0x89b58
	movs r0, #1	@ 00089b58 0120
.org 0x89b5a
	ands r1, r0	@ 00089b5a 0140
.org 0x89b5c
	adds r0, r7, #0	@ 00089b5c 381c
.org 0x89b5e
	adds r0, #192	@ 00089b5e c030
.org 0x89b60
	ldrb r2, [r0, #0]	@ 00089b60 0278
.org 0x89b62
	add r0, sp, #4	@ 00089b62 01a8
.org 0x89b64
	bl 0xd89e0	@ 00089b64 4ef03cff
.org 0x89b68
	adds r0, r7, #0	@ 00089b68 381c
.org 0x89b6a
	adds r0, #180	@ 00089b6a b430
.org 0x89b6c
	ldr r0, [r0, #0]	@ 00089b6c 0068
.org 0x89b6e
	cmp r0, #0	@ 00089b6e 0028
.org 0x89b70
	bge.n 0x89b88	@ 00089b70 0ada
.org 0x89b72
	movs r2, #128	@ 00089b72 8022
.org 0x89b74
	lsls r2, r2, #2	@ 00089b74 9200
.org 0x89b76
	movs r0, #0	@ 00089b76 0020
.org 0x89b78
	add r1, sp, #4	@ 00089b78 01a9
.org 0x89b7a
	movs r3, #0	@ 00089b7a 0023
.org 0x89b7c
	bl 0xd0dc4	@ 00089b7c 47f022f9
.org 0x89b80
	b.n 0x89b96	@ 00089b80 09e0
.org 0x89b82
	.byte 0x00	@ 00089b82 data
.org 0x89b83
	.byte 0x00	@ 00089b83 data
.org 0x89b84
	.byte 0x08,0x1f,0x00,0x00	@ 00089b84 data
.org 0x89b88
	movs r2, #128	@ 00089b88 8022
.org 0x89b8a
	lsls r2, r2, #2	@ 00089b8a 9200
.org 0x89b8c
	movs r0, #0	@ 00089b8c 0020
.org 0x89b8e
	add r1, sp, #4	@ 00089b8e 01a9
.org 0x89b90
	movs r3, #1	@ 00089b90 0123
.org 0x89b92
	bl 0xd0dc4	@ 00089b92 47f017f9
.org 0x89b96
	adds r2, r7, #0	@ 00089b96 3a1c
.org 0x89b98
	adds r2, #84	@ 00089b98 5432
.org 0x89b9a
	movs r0, #3	@ 00089b9a 0320
.org 0x89b9c
	movs r1, #49	@ 00089b9c 3121
.org 0x89b9e
	bl 0x2ab88	@ 00089b9e a0f7f3ff
.org 0x89ba2
	movs r0, #36	@ 00089ba2 2420
.org 0x89ba4
	strb r0, [r7, #18]	@ 00089ba4 b874
.org 0x89ba6
	ldrb r0, [r7, #14]	@ 00089ba6 b87b
.org 0x89ba8
	adds r0, #1	@ 00089ba8 0130
.org 0x89baa
	strb r0, [r7, #14]	@ 00089baa b873
.org 0x89bac
	adds r0, r7, #0	@ 00089bac 381c
.org 0x89bae
	bl 0x1cff0	@ 00089bae 93f71ffa
.org 0x89bb2
	ldr r0, [r7, #84]	@ 00089bb2 786d
.org 0x89bb4
	ldr r1, [r7, #88]	@ 00089bb4 b96d
.org 0x89bb6
	bl 0x7c7c	@ 00089bb6 7ef761f8
.org 0x89bba
	lsls r0, r0, #16	@ 00089bba 0004
.org 0x89bbc
	cmp r0, #0	@ 00089bbc 0028
.org 0x89bbe
	beq.n 0x89c54	@ 00089bbe 49d0
.org 0x89bc0
	ldr r0, [r7, #84]	@ 00089bc0 786d
.org 0x89bc2
	str r0, [sp, #4]	@ 00089bc2 0190
.org 0x89bc4
	ldr r0, [r7, #88]	@ 00089bc4 b86d
.org 0x89bc6
	ldr r1, [pc, #112]	@ 00089bc6 1c49
.org 0x89bc8
	adds r0, r0, r1	@ 00089bc8 4018
.org 0x89bca
	str r0, [sp, #8]	@ 00089bca 0290
.org 0x89bcc
	movs r0, #2	@ 00089bcc 0220
.org 0x89bce
	add r1, sp, #4	@ 00089bce 01a9
.org 0x89bd0
	bl 0xd0c88	@ 00089bd0 47f05af8
.org 0x89bd4
	ldr r2, [pc, #100]	@ 00089bd4 194a
.org 0x89bd6
	ldr r1, [r2, #0]	@ 00089bd6 1168
.org 0x89bd8
	ldr r0, [pc, #100]	@ 00089bd8 1948
.org 0x89bda
	adds r4, r1, #0	@ 00089bda 0c1c
.org 0x89bdc
	muls r4, r0	@ 00089bdc 4443
.org 0x89bde
	ldr r0, [pc, #100]	@ 00089bde 1948
.org 0x89be0
	adds r4, r4, r0	@ 00089be0 2418
.org 0x89be2
	lsls r4, r4, #1	@ 00089be2 6400
.org 0x89be4
	lsrs r0, r4, #1	@ 00089be4 6008
.org 0x89be6
	str r0, [r2, #0]	@ 00089be6 1060
.org 0x89be8
	lsrs r4, r4, #17	@ 00089be8 640c
.org 0x89bea
	movs r0, #3	@ 00089bea 0320
.org 0x89bec
	ands r4, r0	@ 00089bec 0440
.org 0x89bee
	ldr r0, [r7, #84]	@ 00089bee 786d
.org 0x89bf0
	str r0, [sp, #12]	@ 00089bf0 0390
.org 0x89bf2
	ldr r0, [r7, #88]	@ 00089bf2 b86d
.org 0x89bf4
	add r1, sp, #12	@ 00089bf4 03a9
.org 0x89bf6
	mov r8, r1	@ 00089bf6 8846
.org 0x89bf8
	str r0, [r1, #4]	@ 00089bf8 4860
.org 0x89bfa
	ldrb r1, [r7, #10]	@ 00089bfa b97a
.org 0x89bfc
	lsrs r1, r1, #4	@ 00089bfc 0909
.org 0x89bfe
	movs r6, #1	@ 00089bfe 0126
.org 0x89c00
	ands r1, r6	@ 00089c00 3140
.org 0x89c02
	ldr r2, [pc, #68]	@ 00089c02 114a
.org 0x89c04
	movs r0, #0	@ 00089c04 0020
.org 0x89c06
	mov r9, r0	@ 00089c06 8146
.org 0x89c08
	str r0, [sp, #0]	@ 00089c08 0090
.org 0x89c0a
	mov r0, r8	@ 00089c0a 4046
.org 0x89c0c
	adds r3, r4, #0	@ 00089c0c 231c
.org 0x89c0e
	bl 0xd8a6c	@ 00089c0e 4ef02dff
.org 0x89c12
	ldrb r1, [r7, #10]	@ 00089c12 b97a
.org 0x89c14
	lsrs r1, r1, #4	@ 00089c14 0909
.org 0x89c16
	ands r1, r6	@ 00089c16 3140
.org 0x89c18
	ldr r2, [pc, #48]	@ 00089c18 0c4a
.org 0x89c1a
	mov r0, r9	@ 00089c1a 4846
.org 0x89c1c
	str r0, [sp, #0]	@ 00089c1c 0090
.org 0x89c1e
	mov r0, r8	@ 00089c1e 4046
.org 0x89c20
	adds r3, r4, #0	@ 00089c20 231c
.org 0x89c22
	bl 0xd8a6c	@ 00089c22 4ef023ff
.org 0x89c26
	ldrb r1, [r7, #10]	@ 00089c26 b97a
.org 0x89c28
	lsrs r1, r1, #4	@ 00089c28 0909
.org 0x89c2a
	ands r1, r6	@ 00089c2a 3140
.org 0x89c2c
	ldr r2, [pc, #32]	@ 00089c2c 084a
.org 0x89c2e
	mov r0, r9	@ 00089c2e 4846
.org 0x89c30
	str r0, [sp, #0]	@ 00089c30 0090
.org 0x89c32
	mov r0, r8	@ 00089c32 4046
.org 0x89c34
	b.n 0x89cd2	@ 00089c34 4de0
.org 0x89c36
	.byte 0x00	@ 00089c36 data
.org 0x89c37
	.byte 0x00	@ 00089c37 data
.org 0x89c38
	.byte 0x00,0xf8,0xff,0xff	@ 00089c38 data
.org 0x89c3c
	.byte 0x38,0xdc,0x02,0x02	@ 00089c3c data
.org 0x89c40
	.byte 0xfd,0x43,0x03,0x00	@ 00089c40 data
.org 0x89c44
	.byte 0xc3,0x9e,0x26,0x00	@ 00089c44 data
.org 0x89c48
	.byte 0x0b,0x1f,0x00,0x00	@ 00089c48 data
.org 0x89c4c
	.byte 0x0c,0x1f,0x00,0x00	@ 00089c4c data
.org 0x89c50
	.byte 0x0d,0x1f,0x00,0x00	@ 00089c50 data
.org 0x89c54
	ldrb r0, [r7, #18]	@ 00089c54 b87c
.org 0x89c56
	cmp r0, #0	@ 00089c56 0028
.org 0x89c58
	beq.n 0x89d10	@ 00089c58 5ad0
.org 0x89c5a
	subs r0, #1	@ 00089c5a 0138
.org 0x89c5c
	strb r0, [r7, #18]	@ 00089c5c b874
.org 0x89c5e
	lsls r0, r0, #24	@ 00089c5e 0006
.org 0x89c60
	lsrs r5, r0, #24	@ 00089c60 050e
.org 0x89c62
	cmp r5, #0	@ 00089c62 002d
.org 0x89c64
	bne.n 0x89d10	@ 00089c64 54d1
.org 0x89c66
	ldr r0, [r7, #84]	@ 00089c66 786d
.org 0x89c68
	str r0, [sp, #4]	@ 00089c68 0190
.org 0x89c6a
	ldr r0, [r7, #88]	@ 00089c6a b86d
.org 0x89c6c
	str r0, [sp, #8]	@ 00089c6c 0290
.org 0x89c6e
	movs r0, #2	@ 00089c6e 0220
.org 0x89c70
	add r1, sp, #4	@ 00089c70 01a9
.org 0x89c72
	bl 0xd0c88	@ 00089c72 47f009f8
.org 0x89c76
	ldr r2, [pc, #168]	@ 00089c76 2a4a
.org 0x89c78
	ldr r1, [r2, #0]	@ 00089c78 1168
.org 0x89c7a
	ldr r0, [pc, #168]	@ 00089c7a 2a48
.org 0x89c7c
	adds r4, r1, #0	@ 00089c7c 0c1c
.org 0x89c7e
	muls r4, r0	@ 00089c7e 4443
.org 0x89c80
	ldr r1, [pc, #164]	@ 00089c80 2949
.org 0x89c82
	adds r4, r4, r1	@ 00089c82 6418
.org 0x89c84
	lsls r4, r4, #1	@ 00089c84 6400
.org 0x89c86
	lsrs r0, r4, #1	@ 00089c86 6008
.org 0x89c88
	str r0, [r2, #0]	@ 00089c88 1060
.org 0x89c8a
	lsrs r4, r4, #17	@ 00089c8a 640c
.org 0x89c8c
	movs r0, #3	@ 00089c8c 0320
.org 0x89c8e
	ands r4, r0	@ 00089c8e 0440
.org 0x89c90
	ldr r0, [r7, #84]	@ 00089c90 786d
.org 0x89c92
	str r0, [sp, #20]	@ 00089c92 0590
.org 0x89c94
	ldr r0, [r7, #88]	@ 00089c94 b86d
.org 0x89c96
	add r6, sp, #20	@ 00089c96 05ae
.org 0x89c98
	str r0, [r6, #4]	@ 00089c98 7060
.org 0x89c9a
	ldrb r1, [r7, #10]	@ 00089c9a b97a
.org 0x89c9c
	lsrs r1, r1, #4	@ 00089c9c 0909
.org 0x89c9e
	movs r0, #1	@ 00089c9e 0120
.org 0x89ca0
	mov r8, r0	@ 00089ca0 8046
.org 0x89ca2
	ands r1, r0	@ 00089ca2 0140
.org 0x89ca4
	ldr r2, [pc, #132]	@ 00089ca4 214a
.org 0x89ca6
	str r5, [sp, #0]	@ 00089ca6 0095
.org 0x89ca8
	adds r0, r6, #0	@ 00089ca8 301c
.org 0x89caa
	adds r3, r4, #0	@ 00089caa 231c
.org 0x89cac
	bl 0xd8a6c	@ 00089cac 4ef0defe
.org 0x89cb0
	ldrb r1, [r7, #10]	@ 00089cb0 b97a
.org 0x89cb2
	lsrs r1, r1, #4	@ 00089cb2 0909
.org 0x89cb4
	mov r0, r8	@ 00089cb4 4046
.org 0x89cb6
	ands r1, r0	@ 00089cb6 0140
.org 0x89cb8
	ldr r2, [pc, #116]	@ 00089cb8 1d4a
.org 0x89cba
	str r5, [sp, #0]	@ 00089cba 0095
.org 0x89cbc
	adds r0, r6, #0	@ 00089cbc 301c
.org 0x89cbe
	adds r3, r4, #0	@ 00089cbe 231c
.org 0x89cc0
	bl 0xd8a6c	@ 00089cc0 4ef0d4fe
.org 0x89cc4
	ldrb r1, [r7, #10]	@ 00089cc4 b97a
.org 0x89cc6
	lsrs r1, r1, #4	@ 00089cc6 0909
.org 0x89cc8
	mov r0, r8	@ 00089cc8 4046
.org 0x89cca
	ands r1, r0	@ 00089cca 0140
.org 0x89ccc
	ldr r2, [pc, #100]	@ 00089ccc 194a
.org 0x89cce
	str r5, [sp, #0]	@ 00089cce 0095
.org 0x89cd0
	adds r0, r6, #0	@ 00089cd0 301c
.org 0x89cd2
	adds r3, r4, #0	@ 00089cd2 231c
.org 0x89cd4
	bl 0xd8a6c	@ 00089cd4 4ef0cafe
.org 0x89cd8
	movs r0, #42	@ 00089cd8 2a20
.org 0x89cda
	bl 0x2b10	@ 00089cda 78f719ff
.org 0x89cde
	ldr r2, [pc, #88]	@ 00089cde 164a
.org 0x89ce0
	ldrh r1, [r2, #12]	@ 00089ce0 9189
.org 0x89ce2
	ldr r0, [pc, #88]	@ 00089ce2 1648
.org 0x89ce4
	cmp r1, r0	@ 00089ce4 8142
.org 0x89ce6
	bhi.n 0x89cec	@ 00089ce6 01d8
.org 0x89ce8
	adds r0, r1, #1	@ 00089ce8 481c
.org 0x89cea
	strh r0, [r2, #12]	@ 00089cea 9081
.org 0x89cec
	adds r1, r7, #0	@ 00089cec 391c
.org 0x89cee
	adds r1, #84	@ 00089cee 5431
.org 0x89cf0
	adds r0, r7, #0	@ 00089cf0 381c
.org 0x89cf2
	bl 0x2abe0	@ 00089cf2 a0f775ff
.org 0x89cf6
	ldrb r1, [r7, #10]	@ 00089cf6 b97a
.org 0x89cf8
	movs r0, #254	@ 00089cf8 fe20

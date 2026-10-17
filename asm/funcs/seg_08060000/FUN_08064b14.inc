@ FUN_08064b14  entry 0x08064b14  size 396
.thumb
.org 0x64b14
FUN_08064b14:
	push {r4, r5, r6, r7, lr}	@ 00064b14 f0b5
.org 0x64b16
	mov r7, sl	@ 00064b16 5746
.org 0x64b18
	mov r6, r9	@ 00064b18 4e46
.org 0x64b1a
	mov r5, r8	@ 00064b1a 4546
.org 0x64b1c
	push {r5, r6, r7}	@ 00064b1c e0b4
.org 0x64b1e
	sub sp, #24	@ 00064b1e 86b0
.org 0x64b20
	adds r6, r0, #0	@ 00064b20 061c
.org 0x64b22
	mov r1, sp	@ 00064b22 6946
.org 0x64b24
	ldr r0, [pc, #304]	@ 00064b24 4c48
.org 0x64b26
	ldmia r0!, {r2, r3, r4}	@ 00064b26 1cc8
.org 0x64b28
	stmia r1!, {r2, r3, r4}	@ 00064b28 1cc1
.org 0x64b2a
	add r5, sp, #12	@ 00064b2a 03ad
.org 0x64b2c
	adds r1, r5, #0	@ 00064b2c 291c
.org 0x64b2e
	ldr r0, [pc, #300]	@ 00064b2e 4b48
.org 0x64b30
	ldmia r0!, {r2, r3, r4}	@ 00064b30 1cc8
.org 0x64b32
	stmia r1!, {r2, r3, r4}	@ 00064b32 1cc1
.org 0x64b34
	adds r0, r6, #0	@ 00064b34 301c
.org 0x64b36
	bl 0x66160	@ 00064b36 01f013fb
.org 0x64b3a
	mov r8, r0	@ 00064b3a 8046
.org 0x64b3c
	ldrb r4, [r6, #15]	@ 00064b3c f47b
.org 0x64b3e
	cmp r4, #0	@ 00064b3e 002c
.org 0x64b40
	bne.n 0x64b88	@ 00064b40 22d1
.org 0x64b42
	adds r0, r6, #0	@ 00064b42 301c
.org 0x64b44
	movs r1, #0	@ 00064b44 0021
.org 0x64b46
	bl 0x65a94	@ 00064b46 00f0a5ff
.org 0x64b4a
	movs r2, #0	@ 00064b4a 0022
.org 0x64b4c
	adds r0, r6, #0	@ 00064b4c 301c
.org 0x64b4e
	adds r0, #212	@ 00064b4e d430
.org 0x64b50
	ldr r0, [r0, #0]	@ 00064b50 0068
.org 0x64b52
	movs r1, #136	@ 00064b52 8821
.org 0x64b54
	lsls r1, r1, #8	@ 00064b54 0902
.org 0x64b56
	adds r0, r0, r1	@ 00064b56 4018
.org 0x64b58
	ldr r1, [r6, #88]	@ 00064b58 b16d
.org 0x64b5a
	cmp r1, r0	@ 00064b5a 8142
.org 0x64b5c
	bge.n 0x64b60	@ 00064b5c 00da
.org 0x64b5e
	movs r2, #1	@ 00064b5e 0122
.org 0x64b60
	adds r7, r2, #0	@ 00064b60 171c
.org 0x64b62
	lsls r0, r7, #1	@ 00064b62 7800
.org 0x64b64
	subs r3, r0, #1	@ 00064b64 431e
.org 0x64b66
	str r4, [r6, #96]	@ 00064b66 3466
.org 0x64b68
	mov r4, r8	@ 00064b68 4446
.org 0x64b6a
	lsls r2, r4, #2	@ 00064b6a a200
.org 0x64b6c
	adds r0, r5, r2	@ 00064b6c a818
.org 0x64b6e
	ldr r0, [r0, #0]	@ 00064b6e 0068
.org 0x64b70
	muls r0, r3	@ 00064b70 5843
.org 0x64b72
	str r0, [r6, #104]	@ 00064b72 b066
.org 0x64b74
	adds r1, r6, #0	@ 00064b74 311c
.org 0x64b76
	adds r1, #220	@ 00064b76 dc31
.org 0x64b78
	mov r3, sp	@ 00064b78 6b46
.org 0x64b7a
	adds r0, r3, r2	@ 00064b7a 9818
.org 0x64b7c
	ldr r0, [r0, #0]	@ 00064b7c 0068
.org 0x64b7e
	str r0, [r1, #0]	@ 00064b7e 0860
.org 0x64b80
	strb r7, [r6, #19]	@ 00064b80 f774
.org 0x64b82
	ldrb r0, [r6, #15]	@ 00064b82 f07b
.org 0x64b84
	adds r0, #1	@ 00064b84 0130
.org 0x64b86
	strb r0, [r6, #15]	@ 00064b86 f073
.org 0x64b88
	ldrb r7, [r6, #19]	@ 00064b88 f77c
.org 0x64b8a
	lsls r0, r7, #1	@ 00064b8a 7800
.org 0x64b8c
	subs r3, r0, #1	@ 00064b8c 431e
.org 0x64b8e
	adds r1, r6, #0	@ 00064b8e 311c
.org 0x64b90
	adds r1, #212	@ 00064b90 d431
.org 0x64b92
	mov r8, r3	@ 00064b92 9846
.org 0x64b94
	lsls r0, r3, #1	@ 00064b94 5800
.org 0x64b96
	add r0, r8	@ 00064b96 4044
.org 0x64b98
	lsls r0, r0, #11	@ 00064b98 c002
.org 0x64b9a
	movs r4, #136	@ 00064b9a 8824
.org 0x64b9c
	lsls r4, r4, #8	@ 00064b9c 2402
.org 0x64b9e
	adds r0, r0, r4	@ 00064b9e 0019
.org 0x64ba0
	ldr r1, [r1, #0]	@ 00064ba0 0968
.org 0x64ba2
	adds r1, r1, r0	@ 00064ba2 0918
.org 0x64ba4
	mov r9, r1	@ 00064ba4 8946
.org 0x64ba6
	adds r0, r6, #0	@ 00064ba6 301c
.org 0x64ba8
	bl 0x1cff0	@ 00064ba8 b8f722fa
.org 0x64bac
	adds r0, r6, #0	@ 00064bac 301c
.org 0x64bae
	adds r0, #116	@ 00064bae 7430
.org 0x64bb0
	ldr r4, [pc, #172]	@ 00064bb0 2b4c
.org 0x64bb2
	ldr r3, [pc, #176]	@ 00064bb2 2c4b
.org 0x64bb4
	adds r1, r6, #0	@ 00064bb4 311c
.org 0x64bb6
	adds r1, #180	@ 00064bb6 b431
.org 0x64bb8
	ldrb r2, [r1, #0]	@ 00064bb8 0a78
.org 0x64bba
	lsls r1, r2, #1	@ 00064bba 5100
.org 0x64bbc
	adds r1, r1, r3	@ 00064bbc c918
.org 0x64bbe
	ldrh r1, [r1, #0]	@ 00064bbe 0988
.org 0x64bc0
	lsls r1, r1, #2	@ 00064bc0 8900
.org 0x64bc2
	adds r1, r1, r4	@ 00064bc2 0919
.org 0x64bc4
	adds r3, r6, #0	@ 00064bc4 331c
.org 0x64bc6
	adds r3, #113	@ 00064bc6 7133
.org 0x64bc8
	movs r5, #0	@ 00064bc8 0025
.org 0x64bca
	ldrsb r5, [r3, r5]	@ 00064bca 5d57
.org 0x64bcc
	ldr r1, [r1, #0]	@ 00064bcc 0968
.org 0x64bce
	lsls r3, r5, #2	@ 00064bce ab00
.org 0x64bd0
	adds r3, r3, r1	@ 00064bd0 5b18
.org 0x64bd2
	ldr r4, [pc, #148]	@ 00064bd2 254c
.org 0x64bd4
	adds r1, r6, #0	@ 00064bd4 311c
.org 0x64bd6
	adds r1, #181	@ 00064bd6 b531
.org 0x64bd8
	ldrb r1, [r1, #0]	@ 00064bd8 0978
.org 0x64bda
	lsls r1, r1, #2	@ 00064bda 8900
.org 0x64bdc
	adds r1, r1, r4	@ 00064bdc 0919
.org 0x64bde
	ldr r1, [r1, #0]	@ 00064bde 0968
.org 0x64be0
	lsls r2, r2, #2	@ 00064be0 9200
.org 0x64be2
	adds r2, r2, r1	@ 00064be2 5218
.org 0x64be4
	ldr r1, [r2, #0]	@ 00064be4 1168
.org 0x64be6
	adds r1, r1, r5	@ 00064be6 4919
.org 0x64be8
	ldrb r1, [r1, #0]	@ 00064be8 0978
.org 0x64bea
	lsls r2, r1, #1	@ 00064bea 4a00
.org 0x64bec
	adds r2, r2, r1	@ 00064bec 5218
.org 0x64bee
	lsls r2, r2, #3	@ 00064bee d200
.org 0x64bf0
	ldr r1, [r3, #0]	@ 00064bf0 1968
.org 0x64bf2
	adds r1, r1, r2	@ 00064bf2 8918
.org 0x64bf4
	bl 0x5784	@ 00064bf4 a0f7c6fd
.org 0x64bf8
	adds r0, r6, #0	@ 00064bf8 301c
.org 0x64bfa
	adds r0, #224	@ 00064bfa e030
.org 0x64bfc
	ldrb r1, [r0, #0]	@ 00064bfc 0178
.org 0x64bfe
	mov sl, r0	@ 00064bfe 8246
.org 0x64c00
	cmp r1, #0	@ 00064c00 0029
.org 0x64c02
	beq.n 0x64c0a	@ 00064c02 02d0
.org 0x64c04
	subs r0, r1, #1	@ 00064c04 481e
.org 0x64c06
	mov r1, sl	@ 00064c06 5146
.org 0x64c08
	strb r0, [r1, #0]	@ 00064c08 0870
.org 0x64c0a
	ldr r5, [r6, #96]	@ 00064c0a 356e
.org 0x64c0c
	negs r0, r5	@ 00064c0c 6842
.org 0x64c0e
	ldr r1, [r6, #104]	@ 00064c0e b16e
.org 0x64c10
	negs r4, r1	@ 00064c10 4c42
.org 0x64c12
	adds r1, r4, #0	@ 00064c12 211c
.org 0x64c14
	bl 0x128fb8	@ 00064c14 c4f0d0f9
.org 0x64c18
	adds r2, r0, #1	@ 00064c18 421c
.org 0x64c1a
	lsls r1, r5, #1	@ 00064c1a 6900
.org 0x64c1c
	muls r0, r4	@ 00064c1c 6043
.org 0x64c1e
	adds r1, r1, r0	@ 00064c1e 0918
.org 0x64c20
	adds r0, r2, #0	@ 00064c20 101c
.org 0x64c22
	muls r0, r1	@ 00064c22 4843
.org 0x64c24
	asrs r0, r0, #1	@ 00064c24 4010
.org 0x64c26
	ldr r1, [r6, #88]	@ 00064c26 b16d
.org 0x64c28
	adds r3, r1, r0	@ 00064c28 0b18
.org 0x64c2a
	mov r2, r9	@ 00064c2a 4a46
.org 0x64c2c
	subs r0, r3, r2	@ 00064c2c 981a
.org 0x64c2e
	mov r3, r8	@ 00064c2e 4346
.org 0x64c30
	muls r3, r0	@ 00064c30 4343
.org 0x64c32
	adds r0, r3, #0	@ 00064c32 181c
.org 0x64c34
	cmp r0, #0	@ 00064c34 0028
.org 0x64c36
	blt.n 0x64c3a	@ 00064c36 00db
.org 0x64c38
	str r4, [r6, #104]	@ 00064c38 b466
.org 0x64c3a
	ldr r0, [r6, #88]	@ 00064c3a b06d
.org 0x64c3c
	adds r0, r0, r5	@ 00064c3c 4019
.org 0x64c3e
	str r0, [r6, #88]	@ 00064c3e b065
.org 0x64c40
	ldr r0, [r6, #104]	@ 00064c40 b06e
.org 0x64c42
	adds r1, r5, r0	@ 00064c42 2918
.org 0x64c44
	str r1, [r6, #96]	@ 00064c44 3166
.org 0x64c46
	cmp r1, #0	@ 00064c46 0029
.org 0x64c48
	bge.n 0x64c6c	@ 00064c48 10da
.org 0x64c4a
	adds r0, r6, #0	@ 00064c4a 301c
.org 0x64c4c
	adds r0, #220	@ 00064c4c dc30
.org 0x64c4e
	ldr r0, [r0, #0]	@ 00064c4e 0068
.org 0x64c50
	negs r0, r0	@ 00064c50 4042
.org 0x64c52
	cmp r1, r0	@ 00064c52 8142
.org 0x64c54
	bge.n 0x64c7c	@ 00064c54 12da
.org 0x64c56
	b.n 0x64c7a	@ 00064c56 10e0
.org 0x64c58
	.byte 0x64,0x98,0x12,0x08	@ 00064c58 data
.org 0x64c5c
	.byte 0x70,0x98,0x12,0x08	@ 00064c5c data
.org 0x64c60
	.byte 0x80,0xaf,0x85,0x08	@ 00064c60 data
.org 0x64c64
	.byte 0xa0,0xb0,0x85,0x08	@ 00064c64 data
.org 0x64c68
	.byte 0x98,0xb0,0x85,0x08	@ 00064c68 data
.org 0x64c6c
	cmp r1, #0	@ 00064c6c 0029
.org 0x64c6e
	ble.n 0x64c7c	@ 00064c6e 05dd
.org 0x64c70
	adds r0, r6, #0	@ 00064c70 301c
.org 0x64c72
	adds r0, #220	@ 00064c72 dc30
.org 0x64c74
	ldr r0, [r0, #0]	@ 00064c74 0068
.org 0x64c76
	cmp r1, r0	@ 00064c76 8142
.org 0x64c78
	ble.n 0x64c7c	@ 00064c78 00dd
.org 0x64c7a
	str r0, [r6, #96]	@ 00064c7a 3066
.org 0x64c7c
	ldr r3, [r6, #88]	@ 00064c7c b36d
.org 0x64c7e
	mov r4, r9	@ 00064c7e 4c46
.org 0x64c80
	subs r0, r3, r4	@ 00064c80 181b
.org 0x64c82
	lsls r1, r7, #1	@ 00064c82 7900
.org 0x64c84
	subs r1, #1	@ 00064c84 0139
.org 0x64c86
	muls r0, r1	@ 00064c86 4843
.org 0x64c88
	cmp r0, #0	@ 00064c88 0028
.org 0x64c8a
	blt.n 0x64c96	@ 00064c8a 04db
.org 0x64c8c
	adds r0, r7, #1	@ 00064c8c 781c
.org 0x64c8e
	movs r1, #1	@ 00064c8e 0121
.org 0x64c90
	ands r0, r1	@ 00064c90 0840
.org 0x64c92
	str r4, [r6, #88]	@ 00064c92 b465
.org 0x64c94
	strb r0, [r6, #19]	@ 00064c94 f074
.org 0x64c96
	mov r1, sl	@ 00064c96 5146
.org 0x64c98
	ldrb r0, [r1, #0]	@ 00064c98 0878
.org 0x64c9a
	cmp r0, #0	@ 00064c9a 0028
.org 0x64c9c
	bne.n 0x64ca4	@ 00064c9c 02d1
.org 0x64c9e
	adds r0, r6, #0	@ 00064c9e 301c

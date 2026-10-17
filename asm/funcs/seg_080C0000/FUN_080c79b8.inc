@ FUN_080c79b8  entry 0x080c79b8  size 856
.thumb
.org 0xc79b8
FUN_080c79b8:
	push {r4, r5, r6, r7, lr}	@ 000c79b8 f0b5
.org 0xc79ba
	mov r7, sl	@ 000c79ba 5746
.org 0xc79bc
	mov r6, r9	@ 000c79bc 4e46
.org 0xc79be
	mov r5, r8	@ 000c79be 4546
.org 0xc79c0
	push {r5, r6, r7}	@ 000c79c0 e0b4
.org 0xc79c2
	sub sp, #84	@ 000c79c2 95b0
.org 0xc79c4
	mov r8, r0	@ 000c79c4 8046
.org 0xc79c6
	ldr r1, [pc, #256]	@ 000c79c6 4049
.org 0xc79c8
	mov r0, sp	@ 000c79c8 6846
.org 0xc79ca
	movs r2, #4	@ 000c79ca 0422
.org 0xc79cc
	bl 0x129258	@ 000c79cc 61f044fc
.org 0xc79d0
	mov r0, r8	@ 000c79d0 4046
.org 0xc79d2
	ldr r0, [r0, #40]	@ 000c79d2 806a
.org 0xc79d4
	mov sl, r0	@ 000c79d4 8246
.org 0xc79d6
	mov r0, r8	@ 000c79d6 4046
.org 0xc79d8
	adds r0, #180	@ 000c79d8 b430
.org 0xc79da
	ldrb r0, [r0, #0]	@ 000c79da 0078
.org 0xc79dc
	mov r9, r0	@ 000c79dc 8146
.org 0xc79de
	mov r1, r8	@ 000c79de 4146
.org 0xc79e0
	ldrb r0, [r1, #10]	@ 000c79e0 887a
.org 0xc79e2
	lsrs r0, r0, #4	@ 000c79e2 0009
.org 0xc79e4
	str r0, [sp, #68]	@ 000c79e4 1190
.org 0xc79e6
	movs r0, #1	@ 000c79e6 0120
.org 0xc79e8
	ldr r2, [sp, #68]	@ 000c79e8 119a
.org 0xc79ea
	ands r2, r0	@ 000c79ea 0240
.org 0xc79ec
	str r2, [sp, #68]	@ 000c79ec 1192
.org 0xc79ee
	mov r0, r8	@ 000c79ee 4046
.org 0xc79f0
	bl 0x1cff0	@ 000c79f0 55f7fefa
.org 0xc79f4
	mov r3, r8	@ 000c79f4 4346
.org 0xc79f6
	ldr r0, [r3, #84]	@ 000c79f6 586d
.org 0xc79f8
	ldr r1, [r3, #92]	@ 000c79f8 d96d
.org 0xc79fa
	adds r0, r0, r1	@ 000c79fa 4018
.org 0xc79fc
	str r0, [sp, #52]	@ 000c79fc 0d90
.org 0xc79fe
	ldr r0, [r3, #88]	@ 000c79fe 986d
.org 0xc7a00
	ldr r1, [r3, #96]	@ 000c7a00 196e
.org 0xc7a02
	adds r0, r0, r1	@ 000c7a02 4018
.org 0xc7a04
	add r1, sp, #52	@ 000c7a04 0da9
.org 0xc7a06
	str r0, [r1, #4]	@ 000c7a06 4860
.org 0xc7a08
	movs r5, #160	@ 000c7a08 a025
.org 0xc7a0a
	lsls r5, r5, #4	@ 000c7a0a 2d01
.org 0xc7a0c
	ldr r4, [sp, #68]	@ 000c7a0c 119c
.org 0xc7a0e
	lsls r0, r4, #1	@ 000c7a0e 6000
.org 0xc7a10
	subs r2, r0, #1	@ 000c7a10 421e
.org 0xc7a12
	lsls r6, r2, #10	@ 000c7a12 9602
.org 0xc7a14
	ldr r2, [pc, #180]	@ 000c7a14 2d4a
.org 0xc7a16
	mov r0, r9	@ 000c7a16 4846
.org 0xc7a18
	adds r0, #64	@ 000c7a18 4030
.org 0xc7a1a
	lsls r0, r0, #24	@ 000c7a1a 0006
.org 0xc7a1c
	lsrs r0, r0, #23	@ 000c7a1c c00d
.org 0xc7a1e
	adds r0, r0, r2	@ 000c7a1e 8018
.org 0xc7a20
	movs r7, #0	@ 000c7a20 0027
.org 0xc7a22
	ldrsh r4, [r0, r7]	@ 000c7a22 c45f
.org 0xc7a24
	adds r0, r4, #0	@ 000c7a24 201c
.org 0xc7a26
	muls r0, r5	@ 000c7a26 6843
.org 0xc7a28
	cmp r0, #0	@ 000c7a28 0028
.org 0xc7a2a
	bge.n 0xc7a2e	@ 000c7a2a 00da
.org 0xc7a2c
	adds r0, #255	@ 000c7a2c ff30
.org 0xc7a2e
	asrs r3, r0, #8	@ 000c7a2e 0312
.org 0xc7a30
	mov r0, r9	@ 000c7a30 4846
.org 0xc7a32
	lsls r1, r0, #1	@ 000c7a32 4100
.org 0xc7a34
	adds r0, r1, r2	@ 000c7a34 8818
.org 0xc7a36
	movs r7, #0	@ 000c7a36 0027
.org 0xc7a38
	ldrsh r2, [r0, r7]	@ 000c7a38 c25f
.org 0xc7a3a
	adds r0, r2, #0	@ 000c7a3a 101c
.org 0xc7a3c
	muls r0, r6	@ 000c7a3c 7043
.org 0xc7a3e
	adds r7, r1, #0	@ 000c7a3e 0f1c
.org 0xc7a40
	cmp r0, #0	@ 000c7a40 0028
.org 0xc7a42
	bge.n 0xc7a46	@ 000c7a42 00da
.org 0xc7a44
	adds r0, #255	@ 000c7a44 ff30
.org 0xc7a46
	asrs r0, r0, #8	@ 000c7a46 0012
.org 0xc7a48
	subs r0, r3, r0	@ 000c7a48 181a
.org 0xc7a4a
	ldr r1, [sp, #52]	@ 000c7a4a 0d99
.org 0xc7a4c
	adds r0, r0, r1	@ 000c7a4c 4018
.org 0xc7a4e
	str r0, [sp, #60]	@ 000c7a4e 0f90
.org 0xc7a50
	adds r1, r2, #0	@ 000c7a50 111c
.org 0xc7a52
	muls r1, r5	@ 000c7a52 6943
.org 0xc7a54
	cmp r1, #0	@ 000c7a54 0029
.org 0xc7a56
	bge.n 0xc7a5a	@ 000c7a56 00da
.org 0xc7a58
	adds r1, #255	@ 000c7a58 ff31
.org 0xc7a5a
	asrs r0, r1, #8	@ 000c7a5a 0812
.org 0xc7a5c
	adds r1, r4, #0	@ 000c7a5c 211c
.org 0xc7a5e
	muls r1, r6	@ 000c7a5e 7143
.org 0xc7a60
	cmp r1, #0	@ 000c7a60 0029
.org 0xc7a62
	bge.n 0xc7a66	@ 000c7a62 00da
.org 0xc7a64
	adds r1, #255	@ 000c7a64 ff31
.org 0xc7a66
	asrs r1, r1, #8	@ 000c7a66 0912
.org 0xc7a68
	adds r1, r0, r1	@ 000c7a68 4118
.org 0xc7a6a
	ldr r0, [sp, #56]	@ 000c7a6a 0e98
.org 0xc7a6c
	adds r1, r1, r0	@ 000c7a6c 0918
.org 0xc7a6e
	add r4, sp, #60	@ 000c7a6e 0fac
.org 0xc7a70
	str r1, [r4, #4]	@ 000c7a70 6160
.org 0xc7a72
	ldr r0, [sp, #60]	@ 000c7a72 0f98
.org 0xc7a74
	bl 0x7c7c	@ 000c7a74 40f702f9
.org 0xc7a78
	lsls r0, r0, #16	@ 000c7a78 0004
.org 0xc7a7a
	cmp r0, #0	@ 000c7a7a 0028
.org 0xc7a7c
	bne.n 0xc7a80	@ 000c7a7c 00d1
.org 0xc7a7e
	b.n 0xc7b96	@ 000c7a7e 8ae0
.org 0xc7a80
	add r4, sp, #4	@ 000c7a80 01ac
.org 0xc7a82
	ldr r1, [pc, #76]	@ 000c7a82 1349
.org 0xc7a84
	adds r0, r4, #0	@ 000c7a84 201c
.org 0xc7a86
	movs r2, #16	@ 000c7a86 1022
.org 0xc7a88
	bl 0x129258	@ 000c7a88 61f0e6fb
.org 0xc7a8c
	mov r0, sl	@ 000c7a8c 5046
.org 0xc7a8e
	adds r0, #212	@ 000c7a8e d430
.org 0xc7a90
	ldr r0, [r0, #0]	@ 000c7a90 0068
.org 0xc7a92
	ldr r1, [pc, #64]	@ 000c7a92 1049
.org 0xc7a94
	adds r0, r0, r1	@ 000c7a94 4018
.org 0xc7a96
	ldr r1, [sp, #64]	@ 000c7a96 1099
.org 0xc7a98
	adds r7, r4, #0	@ 000c7a98 271c
.org 0xc7a9a
	cmp r1, r0	@ 000c7a9a 8142
.org 0xc7a9c
	bge.n 0xc7adc	@ 000c7a9c 1eda
.org 0xc7a9e
	ldr r0, [sp, #60]	@ 000c7a9e 0f98
.org 0xc7aa0
	bl 0x7c7c	@ 000c7aa0 40f7ecf8
.org 0xc7aa4
	lsls r0, r0, #16	@ 000c7aa4 0004
.org 0xc7aa6
	cmp r0, #0	@ 000c7aa6 0028
.org 0xc7aa8
	beq.n 0xc7adc	@ 000c7aa8 18d0
.org 0xc7aaa
	ldr r1, [pc, #44]	@ 000c7aaa 0b49
.org 0xc7aac
	mov r2, r8	@ 000c7aac 4246
.org 0xc7aae
	ldrb r0, [r2, #9]	@ 000c7aae 507a
.org 0xc7ab0
	lsls r0, r0, #2	@ 000c7ab0 8000
.org 0xc7ab2
	adds r0, r0, r1	@ 000c7ab2 4018
.org 0xc7ab4
	movs r1, #2	@ 000c7ab4 0221
.org 0xc7ab6
	str r1, [r2, #12]	@ 000c7ab6 d160
.org 0xc7ab8
	ldr r0, [r0, #0]	@ 000c7ab8 0068
.org 0xc7aba
	ldr r0, [r0, #8]	@ 000c7aba 8068
.org 0xc7abc
	str r0, [r2, #20]	@ 000c7abc 5061
.org 0xc7abe
	mov r0, r8	@ 000c7abe 4046
.org 0xc7ac0
	bl 0xc7d40	@ 000c7ac0 00f03ef9
.org 0xc7ac4
	b.n 0xc7d2e	@ 000c7ac4 33e1
.org 0xc7ac6
	.byte 0x00	@ 000c7ac6 data
.org 0xc7ac7
	.byte 0x00	@ 000c7ac7 data
.org 0xc7ac8
	.byte 0x8c,0xa1,0x12,0x08	@ 000c7ac8 data
.org 0xc7acc
	.byte 0x0c,0x93,0x12,0x08	@ 000c7acc data
.org 0xc7ad0
	.byte 0x90,0xa1,0x12,0x08	@ 000c7ad0 data
.org 0xc7ad4
	.byte 0xff,0x5f,0x00,0x00	@ 000c7ad4 data
.org 0xc7ad8
	.byte 0xf4,0x49,0x86,0x08	@ 000c7ad8 data
.org 0xc7adc
	mov r3, r9	@ 000c7adc 4b46
.org 0xc7ade
	lsrs r1, r3, #6	@ 000c7ade 9909
.org 0xc7ae0
	ldr r0, [sp, #68]	@ 000c7ae0 1198
.org 0xc7ae2
	lsls r4, r0, #1	@ 000c7ae2 4400
.org 0xc7ae4
	mov r2, sp	@ 000c7ae4 6a46
.org 0xc7ae6
	adds r0, r2, r4	@ 000c7ae6 1019
.org 0xc7ae8
	ldrb r0, [r0, #0]	@ 000c7ae8 0078
.org 0xc7aea
	add r0, r9	@ 000c7aea 4844
.org 0xc7aec
	lsls r0, r0, #24	@ 000c7aec 0006
.org 0xc7aee
	lsrs r0, r0, #24	@ 000c7aee 000e
.org 0xc7af0
	mov r9, r0	@ 000c7af0 8146
.org 0xc7af2
	ldr r5, [pc, #380]	@ 000c7af2 5f4d
.org 0xc7af4
	subs r2, r4, #1	@ 000c7af4 621e
.org 0xc7af6
	lsls r6, r2, #10	@ 000c7af6 9602
.org 0xc7af8
	lsls r1, r1, #2	@ 000c7af8 8900
.org 0xc7afa
	adds r4, r4, r1	@ 000c7afa 6418
.org 0xc7afc
	adds r0, r7, r4	@ 000c7afc 3819
.org 0xc7afe
	ldrb r1, [r0, #0]	@ 000c7afe 0178
.org 0xc7b00
	add r0, sp, #52	@ 000c7b00 0da8
.org 0xc7b02
	bl 0xc7d88	@ 000c7b02 00f041f9
.org 0xc7b06
	str r0, [sp, #52]	@ 000c7b06 0d90
.org 0xc7b08
	mov r0, sp	@ 000c7b08 6846
.org 0xc7b0a
	adds r0, #5	@ 000c7b0a 0530
.org 0xc7b0c
	adds r0, r0, r4	@ 000c7b0c 0019
.org 0xc7b0e
	ldrb r1, [r0, #0]	@ 000c7b0e 0178
.org 0xc7b10
	add r0, sp, #52	@ 000c7b10 0da8
.org 0xc7b12
	bl 0xc7d88	@ 000c7b12 00f039f9
.org 0xc7b16
	str r0, [sp, #56]	@ 000c7b16 0e90
.org 0xc7b18
	ldr r2, [pc, #344]	@ 000c7b18 564a
.org 0xc7b1a
	mov r3, r9	@ 000c7b1a 4b46
.org 0xc7b1c
	lsls r7, r3, #1	@ 000c7b1c 5f00
.org 0xc7b1e
	adds r0, r7, r2	@ 000c7b1e b818
.org 0xc7b20
	movs r4, #0	@ 000c7b20 0024
.org 0xc7b22
	ldrsh r3, [r0, r4]	@ 000c7b22 035f
.org 0xc7b24
	adds r1, r3, #0	@ 000c7b24 191c
.org 0xc7b26
	muls r1, r6	@ 000c7b26 7143
.org 0xc7b28
	cmp r1, #0	@ 000c7b28 0029
.org 0xc7b2a
	bge.n 0xc7b2e	@ 000c7b2a 00da
.org 0xc7b2c
	adds r1, #255	@ 000c7b2c ff31
.org 0xc7b2e
	asrs r4, r1, #8	@ 000c7b2e 0c12
.org 0xc7b30
	mov r0, r9	@ 000c7b30 4846
.org 0xc7b32
	adds r0, #64	@ 000c7b32 4030
.org 0xc7b34
	lsls r0, r0, #24	@ 000c7b34 0006
.org 0xc7b36
	lsrs r0, r0, #23	@ 000c7b36 c00d
.org 0xc7b38
	adds r0, r0, r2	@ 000c7b38 8018
.org 0xc7b3a
	movs r1, #0	@ 000c7b3a 0021
.org 0xc7b3c
	ldrsh r2, [r0, r1]	@ 000c7b3c 425e
.org 0xc7b3e
	adds r1, r2, #0	@ 000c7b3e 111c
.org 0xc7b40
	muls r1, r5	@ 000c7b40 6943
.org 0xc7b42
	cmp r1, #0	@ 000c7b42 0029
.org 0xc7b44
	bge.n 0xc7b48	@ 000c7b44 00da
.org 0xc7b46
	adds r1, #255	@ 000c7b46 ff31
.org 0xc7b48
	asrs r1, r1, #8	@ 000c7b48 0912
.org 0xc7b4a
	subs r1, r4, r1	@ 000c7b4a 611a
.org 0xc7b4c
	ldr r0, [sp, #52]	@ 000c7b4c 0d98
.org 0xc7b4e
	adds r0, r0, r1	@ 000c7b4e 4018
.org 0xc7b50
	str r0, [sp, #52]	@ 000c7b50 0d90
.org 0xc7b52
	adds r0, r3, #0	@ 000c7b52 181c
.org 0xc7b54
	muls r0, r5	@ 000c7b54 6843
.org 0xc7b56
	cmp r0, #0	@ 000c7b56 0028
.org 0xc7b58
	bge.n 0xc7b5c	@ 000c7b58 00da
.org 0xc7b5a
	adds r0, #255	@ 000c7b5a ff30
.org 0xc7b5c
	asrs r1, r0, #8	@ 000c7b5c 0112
.org 0xc7b5e
	adds r0, r2, #0	@ 000c7b5e 101c
.org 0xc7b60
	muls r0, r6	@ 000c7b60 7043
.org 0xc7b62
	cmp r0, #0	@ 000c7b62 0028
.org 0xc7b64
	bge.n 0xc7b68	@ 000c7b64 00da
.org 0xc7b66
	adds r0, #255	@ 000c7b66 ff30
.org 0xc7b68
	asrs r0, r0, #8	@ 000c7b68 0012
.org 0xc7b6a
	adds r0, r1, r0	@ 000c7b6a 0818
.org 0xc7b6c
	ldr r1, [sp, #56]	@ 000c7b6c 0e99
.org 0xc7b6e
	subs r1, r1, r0	@ 000c7b6e 091a
.org 0xc7b70
	str r1, [sp, #56]	@ 000c7b70 0e91
.org 0xc7b72
	mov r1, r8	@ 000c7b72 4146
.org 0xc7b74
	adds r1, #184	@ 000c7b74 b831
.org 0xc7b76
	ldr r0, [r1, #0]	@ 000c7b76 0868
.org 0xc7b78
	muls r0, r2	@ 000c7b78 5043
.org 0xc7b7a
	cmp r0, #0	@ 000c7b7a 0028
.org 0xc7b7c
	bge.n 0xc7b80	@ 000c7b7c 00da
.org 0xc7b7e
	adds r0, #255	@ 000c7b7e ff30
.org 0xc7b80
	asrs r0, r0, #8	@ 000c7b80 0012
.org 0xc7b82
	mov r2, r8	@ 000c7b82 4246
.org 0xc7b84
	str r0, [r2, #92]	@ 000c7b84 d065
.org 0xc7b86
	ldr r0, [r1, #0]	@ 000c7b86 0868
.org 0xc7b88
	muls r0, r3	@ 000c7b88 5843
.org 0xc7b8a
	cmp r0, #0	@ 000c7b8a 0028
.org 0xc7b8c
	bge.n 0xc7b90	@ 000c7b8c 00da
.org 0xc7b8e
	adds r0, #255	@ 000c7b8e ff30
.org 0xc7b90
	asrs r0, r0, #8	@ 000c7b90 0012
.org 0xc7b92
	mov r3, r8	@ 000c7b92 4346
.org 0xc7b94
	str r0, [r3, #96]	@ 000c7b94 1866
.org 0xc7b96
	ldr r4, [sp, #68]	@ 000c7b96 119c
.org 0xc7b98
	lsls r4, r4, #1	@ 000c7b98 6400
.org 0xc7b9a
	str r4, [sp, #72]	@ 000c7b9a 1294
.org 0xc7b9c
	adds r2, r4, #0	@ 000c7b9c 221c
.org 0xc7b9e
	subs r2, #1	@ 000c7b9e 013a
.org 0xc7ba0
	lsls r0, r2, #10	@ 000c7ba0 9002
.org 0xc7ba2
	str r0, [sp, #76]	@ 000c7ba2 1390
.org 0xc7ba4
	adds r6, r0, r2	@ 000c7ba4 8618
.org 0xc7ba6
	mov r0, r9	@ 000c7ba6 4846
.org 0xc7ba8
	adds r0, #64	@ 000c7ba8 4030
.org 0xc7baa
	lsls r0, r0, #24	@ 000c7baa 0006
.org 0xc7bac
	lsrs r0, r0, #23	@ 000c7bac c00d
.org 0xc7bae
	ldr r1, [pc, #196]	@ 000c7bae 3149
.org 0xc7bb0
	adds r0, r0, r1	@ 000c7bb0 4018
.org 0xc7bb2
	movs r3, #0	@ 000c7bb2 0023
.org 0xc7bb4
	ldrsh r2, [r0, r3]	@ 000c7bb4 c25e
.org 0xc7bb6
	adds r0, r7, r1	@ 000c7bb6 7818
.org 0xc7bb8
	movs r4, #0	@ 000c7bb8 0024
.org 0xc7bba
	ldrsh r0, [r0, r4]	@ 000c7bba 005f
.org 0xc7bbc
	muls r0, r6	@ 000c7bbc 7043
.org 0xc7bbe
	cmp r0, #0	@ 000c7bbe 0028
.org 0xc7bc0
	bge.n 0xc7bc4	@ 000c7bc0 00da
.org 0xc7bc2
	adds r0, #255	@ 000c7bc2 ff30
.org 0xc7bc4
	asrs r1, r0, #8	@ 000c7bc4 0112
.org 0xc7bc6
	ldr r0, [sp, #52]	@ 000c7bc6 0d98
.org 0xc7bc8
	subs r0, r0, r1	@ 000c7bc8 401a
.org 0xc7bca
	str r0, [sp, #60]	@ 000c7bca 0f90
.org 0xc7bcc
	mov r7, sp	@ 000c7bcc 6f46
.org 0xc7bce
	adds r7, #52	@ 000c7bce 3437
.org 0xc7bd0
	str r7, [sp, #80]	@ 000c7bd0 1497
.org 0xc7bd2
	adds r0, r2, #0	@ 000c7bd2 101c
.org 0xc7bd4
	muls r0, r6	@ 000c7bd4 7043
.org 0xc7bd6
	cmp r0, #0	@ 000c7bd6 0028
.org 0xc7bd8
	bge.n 0xc7bdc	@ 000c7bd8 00da
.org 0xc7bda
	adds r0, #255	@ 000c7bda ff30
.org 0xc7bdc
	asrs r0, r0, #8	@ 000c7bdc 0012
.org 0xc7bde
	ldr r2, [sp, #80]	@ 000c7bde 149a
.org 0xc7be0
	ldr r1, [r2, #4]	@ 000c7be0 5168
.org 0xc7be2
	adds r1, r1, r0	@ 000c7be2 0918
.org 0xc7be4
	add r3, sp, #60	@ 000c7be4 0fab
.org 0xc7be6
	mov sl, r3	@ 000c7be6 9a46
.org 0xc7be8
	str r1, [r3, #4]	@ 000c7be8 5960
.org 0xc7bea
	ldr r0, [sp, #60]	@ 000c7bea 0f98
.org 0xc7bec
	bl 0x7c7c	@ 000c7bec 40f746f8
.org 0xc7bf0
	lsls r0, r0, #16	@ 000c7bf0 0004
.org 0xc7bf2
	cmp r0, #0	@ 000c7bf2 0028
.org 0xc7bf4
	bne.n 0xc7cee	@ 000c7bf4 7bd1
.org 0xc7bf6
	add r4, sp, #20	@ 000c7bf6 05ac
.org 0xc7bf8
	ldr r1, [pc, #124]	@ 000c7bf8 1f49
.org 0xc7bfa
	adds r0, r4, #0	@ 000c7bfa 201c
.org 0xc7bfc
	movs r2, #32	@ 000c7bfc 2022
.org 0xc7bfe
	bl 0x129258	@ 000c7bfe 61f02bfb
.org 0xc7c02
	add r7, sp, #4	@ 000c7c02 01af
.org 0xc7c04
	ldr r1, [pc, #116]	@ 000c7c04 1d49
.org 0xc7c06
	adds r0, r7, #0	@ 000c7c06 381c
.org 0xc7c08
	movs r2, #4	@ 000c7c08 0422
.org 0xc7c0a
	bl 0x129258	@ 000c7c0a 61f025fb
.org 0xc7c0e
	mov r0, r9	@ 000c7c0e 4846
.org 0xc7c10
	lsrs r2, r0, #6	@ 000c7c10 8209
.org 0xc7c12
	ldr r0, [sp, #72]	@ 000c7c12 1298
.org 0xc7c14
	add r0, sp	@ 000c7c14 6844
.org 0xc7c16
	ldrb r0, [r0, #0]	@ 000c7c16 0078
.org 0xc7c18
	mov r1, r9	@ 000c7c18 4946
.org 0xc7c1a
	subs r0, r1, r0	@ 000c7c1a 081a
.org 0xc7c1c
	lsls r0, r0, #24	@ 000c7c1c 0006
.org 0xc7c1e
	lsrs r0, r0, #24	@ 000c7c1e 000e
.org 0xc7c20
	mov r9, r0	@ 000c7c20 8146
.org 0xc7c22
	ldr r6, [sp, #76]	@ 000c7c22 139e
.org 0xc7c24
	ldr r3, [sp, #68]	@ 000c7c24 119b
.org 0xc7c26
	lsls r0, r3, #2	@ 000c7c26 9800
.org 0xc7c28
	lsls r1, r2, #3	@ 000c7c28 d100
.org 0xc7c2a
	adds r0, r0, r1	@ 000c7c2a 4018
.org 0xc7c2c
	adds r4, r4, r0	@ 000c7c2c 2418
.org 0xc7c2e
	movs r1, #0	@ 000c7c2e 0021
.org 0xc7c30
	ldrsh r0, [r4, r1]	@ 000c7c30 605e
.org 0xc7c32
	cmp r0, #255	@ 000c7c32 ff28
.org 0xc7c34
	bne.n 0xc7c80	@ 000c7c34 24d1
.org 0xc7c36
	adds r0, r7, r2	@ 000c7c36 b818
.org 0xc7c38
	ldrb r1, [r0, #0]	@ 000c7c38 0178
.org 0xc7c3a
	mov r0, sl	@ 000c7c3a 5046
.org 0xc7c3c
	bl 0xc7d88	@ 000c7c3c 00f0a4f8
.org 0xc7c40
	str r0, [sp, #52]	@ 000c7c40 0d90
.org 0xc7c42
	mov r2, sl	@ 000c7c42 5246
.org 0xc7c44
	ldr r0, [r2, #4]	@ 000c7c44 5068
.org 0xc7c46
	ldr r3, [sp, #80]	@ 000c7c46 149b
.org 0xc7c48
	str r0, [r3, #4]	@ 000c7c48 5860
.org 0xc7c4a
	mov r4, r9	@ 000c7c4a 4c46
.org 0xc7c4c
	lsls r1, r4, #1	@ 000c7c4c 6100
.org 0xc7c4e
	ldr r7, [pc, #36]	@ 000c7c4e 094f
.org 0xc7c50
	adds r0, r1, r7	@ 000c7c50 c819
.org 0xc7c52
	movs r2, #0	@ 000c7c52 0022
.org 0xc7c54
	ldrsh r0, [r0, r2]	@ 000c7c54 805e
.org 0xc7c56
	muls r0, r6	@ 000c7c56 7043
.org 0xc7c58
	adds r7, r1, #0	@ 000c7c58 0f1c
.org 0xc7c5a
	cmp r0, #0	@ 000c7c5a 0028
.org 0xc7c5c
	bge.n 0xc7c60	@ 000c7c5c 00da
.org 0xc7c5e
	adds r0, #255	@ 000c7c5e ff30
.org 0xc7c60
	asrs r1, r0, #8	@ 000c7c60 0112
.org 0xc7c62
	ldr r0, [sp, #52]	@ 000c7c62 0d98
.org 0xc7c64
	adds r0, r0, r1	@ 000c7c64 4018
.org 0xc7c66
	str r0, [sp, #52]	@ 000c7c66 0d90
.org 0xc7c68
	mov r1, r9	@ 000c7c68 4946
.org 0xc7c6a
	adds r1, #64	@ 000c7c6a 4031
.org 0xc7c6c
	b.n 0xc7cb8	@ 000c7c6c 24e0
.org 0xc7c6e
	.byte 0x00	@ 000c7c6e data
.org 0xc7c6f
	.byte 0x00	@ 000c7c6f data
.org 0xc7c70
	.byte 0x00,0xf6,0xff,0xff	@ 000c7c70 data
.org 0xc7c74
	.byte 0x0c,0x93,0x12,0x08	@ 000c7c74 data
.org 0xc7c78
	.byte 0xa0,0xa1,0x12,0x08	@ 000c7c78 data
.org 0xc7c7c
	.byte 0xc0,0xa1,0x12,0x08	@ 000c7c7c data
.org 0xc7c80
	adds r0, r7, r2	@ 000c7c80 b818
.org 0xc7c82
	ldrb r2, [r0, #0]	@ 000c7c82 0278
.org 0xc7c84
	ldr r0, [sp, #60]	@ 000c7c84 0f98
.org 0xc7c86
	str r0, [sp, #52]	@ 000c7c86 0d90
.org 0xc7c88
	adds r1, r2, #0	@ 000c7c88 111c
.org 0xc7c8a
	add r0, sp, #60	@ 000c7c8a 0fa8
.org 0xc7c8c
	bl 0xc7d88	@ 000c7c8c 00f07cf8
.org 0xc7c90
	adds r2, r0, #0	@ 000c7c90 021c
.org 0xc7c92
	ldr r3, [sp, #80]	@ 000c7c92 149b
.org 0xc7c94
	str r2, [r3, #4]	@ 000c7c94 5a60
.org 0xc7c96
	mov r1, r9	@ 000c7c96 4946
.org 0xc7c98
	adds r1, #64	@ 000c7c98 4031
.org 0xc7c9a
	lsls r0, r1, #24	@ 000c7c9a 0806
.org 0xc7c9c
	lsrs r0, r0, #23	@ 000c7c9c c00d
.org 0xc7c9e
	ldr r4, [pc, #128]	@ 000c7c9e 204c
.org 0xc7ca0
	adds r0, r0, r4	@ 000c7ca0 0019
.org 0xc7ca2
	movs r7, #0	@ 000c7ca2 0027
.org 0xc7ca4
	ldrsh r0, [r0, r7]	@ 000c7ca4 c05f
.org 0xc7ca6
	muls r0, r6	@ 000c7ca6 7043
.org 0xc7ca8
	cmp r0, #0	@ 000c7ca8 0028
.org 0xc7caa
	bge.n 0xc7cae	@ 000c7caa 00da
.org 0xc7cac
	adds r0, #255	@ 000c7cac ff30
.org 0xc7cae
	asrs r0, r0, #8	@ 000c7cae 0012
.org 0xc7cb0
	subs r0, r2, r0	@ 000c7cb0 101a
.org 0xc7cb2
	str r0, [sp, #56]	@ 000c7cb2 0e90
.org 0xc7cb4
	mov r0, r9	@ 000c7cb4 4846
.org 0xc7cb6
	lsls r7, r0, #1	@ 000c7cb6 4700
.org 0xc7cb8
	mov r2, r8	@ 000c7cb8 4246
.org 0xc7cba
	adds r2, #184	@ 000c7cba b832
.org 0xc7cbc
	ldr r3, [pc, #96]	@ 000c7cbc 184b
.org 0xc7cbe
	lsls r0, r1, #24	@ 000c7cbe 0806
.org 0xc7cc0
	lsrs r0, r0, #23	@ 000c7cc0 c00d
.org 0xc7cc2
	adds r0, r0, r3	@ 000c7cc2 c018
.org 0xc7cc4
	movs r4, #0	@ 000c7cc4 0024
.org 0xc7cc6
	ldrsh r1, [r0, r4]	@ 000c7cc6 015f
.org 0xc7cc8
	ldr r0, [r2, #0]	@ 000c7cc8 1068
.org 0xc7cca
	muls r0, r1	@ 000c7cca 4843
.org 0xc7ccc
	cmp r0, #0	@ 000c7ccc 0028
.org 0xc7cce
	bge.n 0xc7cd2	@ 000c7cce 00da
.org 0xc7cd0
	adds r0, #255	@ 000c7cd0 ff30
.org 0xc7cd2
	asrs r0, r0, #8	@ 000c7cd2 0012
.org 0xc7cd4
	mov r1, r8	@ 000c7cd4 4146
.org 0xc7cd6
	str r0, [r1, #92]	@ 000c7cd6 c865
.org 0xc7cd8
	adds r0, r7, r3	@ 000c7cd8 f818
.org 0xc7cda
	movs r3, #0	@ 000c7cda 0023
.org 0xc7cdc
	ldrsh r1, [r0, r3]	@ 000c7cdc c15e
.org 0xc7cde
	ldr r0, [r2, #0]	@ 000c7cde 1068
.org 0xc7ce0
	muls r0, r1	@ 000c7ce0 4843
.org 0xc7ce2
	cmp r0, #0	@ 000c7ce2 0028
.org 0xc7ce4
	bge.n 0xc7ce8	@ 000c7ce4 00da
.org 0xc7ce6
	adds r0, #255	@ 000c7ce6 ff30
.org 0xc7ce8
	asrs r0, r0, #8	@ 000c7ce8 0012
.org 0xc7cea
	mov r4, r8	@ 000c7cea 4446
.org 0xc7cec
	str r0, [r4, #96]	@ 000c7cec 2066
.org 0xc7cee
	ldr r0, [sp, #52]	@ 000c7cee 0d98
.org 0xc7cf0
	ldr r1, [sp, #56]	@ 000c7cf0 0e99
.org 0xc7cf2
	mov r7, r8	@ 000c7cf2 4746
.org 0xc7cf4
	str r0, [r7, #84]	@ 000c7cf4 7865
.org 0xc7cf6
	str r1, [r7, #88]	@ 000c7cf6 b965
.org 0xc7cf8
	mov r0, r8	@ 000c7cf8 4046
.org 0xc7cfa
	adds r0, #180	@ 000c7cfa b430
.org 0xc7cfc
	mov r1, r9	@ 000c7cfc 4946
.org 0xc7cfe
	strb r1, [r0, #0]	@ 000c7cfe 0170
.org 0xc7d00
	ldrb r1, [r7, #10]	@ 000c7d00 b97a
.org 0xc7d02
	movs r0, #16	@ 000c7d02 1020
.org 0xc7d04
	ands r0, r1	@ 000c7d04 0840
.org 0xc7d06
	cmp r0, #0	@ 000c7d06 0028
.org 0xc7d08
	beq.n 0xc7d24	@ 000c7d08 0cd0
.org 0xc7d0a
	movs r0, #160	@ 000c7d0a a020
.org 0xc7d0c
	lsls r0, r0, #1	@ 000c7d0c 4000
.org 0xc7d0e
	mov r2, r9	@ 000c7d0e 4a46

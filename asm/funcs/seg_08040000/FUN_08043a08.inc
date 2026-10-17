@ FUN_08043a08  entry 0x08043a08  size 276
.thumb
.org 0x43a08
FUN_08043a08:
	push {r4, lr}	@ 00043a08 10b5
.org 0x43a0a
	sub sp, #8	@ 00043a0a 82b0
.org 0x43a0c
	adds r4, r0, #0	@ 00043a0c 041c
.org 0x43a0e
	ldr r0, [r4, #44]	@ 00043a0e e06a
.org 0x43a10
	adds r0, #250	@ 00043a10 fa30
.org 0x43a12
	ldrb r0, [r0, #0]	@ 00043a12 0078
.org 0x43a14
	cmp r0, #2	@ 00043a14 0228
.org 0x43a16
	bne.n 0x43a64	@ 00043a16 25d1
.org 0x43a18
	ldrb r0, [r4, #13]	@ 00043a18 607b
.org 0x43a1a
	cmp r0, #0	@ 00043a1a 0028
.org 0x43a1c
	bne.n 0x43a28	@ 00043a1c 04d1
.org 0x43a1e
	adds r1, r4, #0	@ 00043a1e 211c
.org 0x43a20
	adds r1, #84	@ 00043a20 5431
.org 0x43a22
	movs r0, #2	@ 00043a22 0220
.org 0x43a24
	bl 0xd0c88	@ 00043a24 8df030f9
.org 0x43a28
	ldrb r1, [r4, #10]	@ 00043a28 a17a
.org 0x43a2a
	movs r0, #254	@ 00043a2a fe20
.org 0x43a2c
	ands r0, r1	@ 00043a2c 0840
.org 0x43a2e
	movs r2, #0	@ 00043a2e 0022
.org 0x43a30
	movs r1, #253	@ 00043a30 fd21
.org 0x43a32
	ands r0, r1	@ 00043a32 0840
.org 0x43a34
	strb r0, [r4, #10]	@ 00043a34 a072
.org 0x43a36
	adds r0, r4, #0	@ 00043a36 201c
.org 0x43a38
	adds r0, #140	@ 00043a38 8c30
.org 0x43a3a
	str r2, [r0, #0]	@ 00043a3a 0260
.org 0x43a3c
	adds r0, #4	@ 00043a3c 0430
.org 0x43a3e
	str r2, [r0, #0]	@ 00043a3e 0260
.org 0x43a40
	adds r0, #4	@ 00043a40 0430
.org 0x43a42
	strb r2, [r0, #0]	@ 00043a42 0270
.org 0x43a44
	ldrb r1, [r4, #10]	@ 00043a44 a17a
.org 0x43a46
	movs r0, #251	@ 00043a46 fb20
.org 0x43a48
	ands r0, r1	@ 00043a48 0840
.org 0x43a4a
	strb r0, [r4, #10]	@ 00043a4a a072
.org 0x43a4c
	ldr r1, [pc, #16]	@ 00043a4c 0449
.org 0x43a4e
	ldrb r0, [r4, #9]	@ 00043a4e 607a
.org 0x43a50
	lsls r0, r0, #2	@ 00043a50 8000
.org 0x43a52
	adds r0, r0, r1	@ 00043a52 4018
.org 0x43a54
	movs r1, #3	@ 00043a54 0321
.org 0x43a56
	str r1, [r4, #12]	@ 00043a56 e160
.org 0x43a58
	ldr r0, [r0, #0]	@ 00043a58 0068
.org 0x43a5a
	ldr r0, [r0, #12]	@ 00043a5a c068
.org 0x43a5c
	str r0, [r4, #20]	@ 00043a5c 6061
.org 0x43a5e
	b.n 0x43b26	@ 00043a5e 62e0
.org 0x43a60
	.byte 0xf8,0x39,0x85,0x08	@ 00043a60 data
.org 0x43a64
	ldrb r0, [r4, #13]	@ 00043a64 607b
.org 0x43a66
	cmp r0, #0	@ 00043a66 0028
.org 0x43a68
	bne.n 0x43ad8	@ 00043a68 36d1
.org 0x43a6a
	ldr r0, [r4, #84]	@ 00043a6a 606d
.org 0x43a6c
	ldr r1, [r4, #92]	@ 00043a6c e16d
.org 0x43a6e
	adds r0, r0, r1	@ 00043a6e 4018
.org 0x43a70
	str r0, [r4, #84]	@ 00043a70 6065
.org 0x43a72
	adds r0, r4, #0	@ 00043a72 201c
.org 0x43a74
	movs r1, #3	@ 00043a74 0321
.org 0x43a76
	bl 0x43b94	@ 00043a76 00f08df8
.org 0x43a7a
	lsls r0, r0, #24	@ 00043a7a 0006
.org 0x43a7c
	lsrs r0, r0, #24	@ 00043a7c 000e
.org 0x43a7e
	cmp r0, #1	@ 00043a7e 0128
.org 0x43a80
	beq.n 0x43a92	@ 00043a80 07d0
.org 0x43a82
	adds r0, r4, #0	@ 00043a82 201c
.org 0x43a84
	adds r0, #140	@ 00043a84 8c30
.org 0x43a86
	ldr r1, [r0, #0]	@ 00043a86 0168
.org 0x43a88
	movs r0, #128	@ 00043a88 8020
.org 0x43a8a
	lsls r0, r0, #5	@ 00043a8a 4001
.org 0x43a8c
	ands r0, r1	@ 00043a8c 0840
.org 0x43a8e
	cmp r0, #0	@ 00043a8e 0028
.org 0x43a90
	beq.n 0x43ac4	@ 00043a90 18d0
.org 0x43a92
	ldr r1, [pc, #40]	@ 00043a92 0a49
.org 0x43a94
	adds r0, r4, #0	@ 00043a94 201c
.org 0x43a96
	bl 0x1cf00	@ 00043a96 d9f733fa
.org 0x43a9a
	movs r0, #60	@ 00043a9a 3c20
.org 0x43a9c
	strb r0, [r4, #18]	@ 00043a9c a074
.org 0x43a9e
	adds r0, r4, #0	@ 00043a9e 201c
.org 0x43aa0
	adds r0, #116	@ 00043aa0 7430
.org 0x43aa2
	ldr r1, [pc, #28]	@ 00043aa2 0749
.org 0x43aa4
	movs r3, #1	@ 00043aa4 0123
.org 0x43aa6
	negs r3, r3	@ 00043aa6 5b42
.org 0x43aa8
	str r3, [sp, #0]	@ 00043aa8 0093
.org 0x43aaa
	str r3, [sp, #4]	@ 00043aaa 0193
.org 0x43aac
	movs r2, #7	@ 00043aac 0722
.org 0x43aae
	bl 0x5794	@ 00043aae c1f771fe
.org 0x43ab2
	movs r0, #61	@ 00043ab2 3d20
.org 0x43ab4
	bl 0x2b10	@ 00043ab4 bff72cf8
.org 0x43ab8
	b.n 0x43b1a	@ 00043ab8 2fe0
.org 0x43aba
	.byte 0x00	@ 00043aba data
.org 0x43abb
	.byte 0x00	@ 00043abb data
.org 0x43abc
	.byte 0x11,0x81,0x00,0x00	@ 00043abc data
.org 0x43ac0
	.byte 0x00,0x5d,0x85,0x08	@ 00043ac0 data
.org 0x43ac4
	movs r0, #4	@ 00043ac4 0420
.org 0x43ac6
	ands r1, r0	@ 00043ac6 0140
.org 0x43ac8
	cmp r1, #0	@ 00043ac8 0029
.org 0x43aca
	beq.n 0x43b20	@ 00043aca 29d0
.org 0x43acc
	adds r1, r4, #0	@ 00043acc 211c
.org 0x43ace
	adds r1, #84	@ 00043ace 5431
.org 0x43ad0
	movs r0, #1	@ 00043ad0 0120
.org 0x43ad2
	bl 0xd0c88	@ 00043ad2 8df0d9f8
.org 0x43ad6
	b.n 0x43ae6	@ 00043ad6 06e0
.org 0x43ad8
	cmp r0, #1	@ 00043ad8 0128
.org 0x43ada
	beq.n 0x43b04	@ 00043ada 13d0
.org 0x43adc
	adds r0, r4, #0	@ 00043adc 201c
.org 0x43ade
	adds r0, #115	@ 00043ade 7330
.org 0x43ae0
	ldrb r0, [r0, #0]	@ 00043ae0 0078
.org 0x43ae2
	cmp r0, #3	@ 00043ae2 0328
.org 0x43ae4
	bne.n 0x43b20	@ 00043ae4 1cd1
.org 0x43ae6
	ldr r1, [pc, #24]	@ 00043ae6 0649
.org 0x43ae8
	ldrb r0, [r4, #9]	@ 00043ae8 607a
.org 0x43aea
	lsls r0, r0, #2	@ 00043aea 8000
.org 0x43aec
	adds r0, r0, r1	@ 00043aec 4018
.org 0x43aee
	movs r1, #2	@ 00043aee 0221
.org 0x43af0
	str r1, [r4, #12]	@ 00043af0 e160
.org 0x43af2
	ldr r0, [r0, #0]	@ 00043af2 0068
.org 0x43af4
	ldr r0, [r0, #8]	@ 00043af4 8068
.org 0x43af6
	str r0, [r4, #20]	@ 00043af6 6061
.org 0x43af8
	adds r0, r4, #0	@ 00043af8 201c
.org 0x43afa
	bl 0x43b34	@ 00043afa 00f01bf8
.org 0x43afe
	b.n 0x43b26	@ 00043afe 12e0
.org 0x43b00
	.byte 0xf8,0x39,0x85,0x08	@ 00043b00 data
.org 0x43b04
	ldrb r0, [r4, #18]	@ 00043b04 a07c
.org 0x43b06
	subs r0, #1	@ 00043b06 0138
.org 0x43b08
	strb r0, [r4, #18]	@ 00043b08 a074
.org 0x43b0a
	lsls r0, r0, #24	@ 00043b0a 0006
.org 0x43b0c
	lsrs r0, r0, #24	@ 00043b0c 000e
.org 0x43b0e
	cmp r0, #255	@ 00043b0e ff28
.org 0x43b10
	bne.n 0x43b20	@ 00043b10 06d1
.org 0x43b12
	ldr r1, [pc, #28]	@ 00043b12 0749
.org 0x43b14
	adds r0, r4, #0	@ 00043b14 201c
.org 0x43b16
	bl 0x1cf00	@ 00043b16 d9f7f3f9
.org 0x43b1a
	ldrb r0, [r4, #13]	@ 00043b1a 607b

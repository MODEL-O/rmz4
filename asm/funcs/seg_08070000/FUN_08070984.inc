@ FUN_08070984  entry 0x08070984  size 492
.thumb
.org 0x70984
FUN_08070984:
	push {r4, r5, r6, r7, lr}	@ 00070984 f0b5
.org 0x70986
	mov r7, sl	@ 00070986 5746
.org 0x70988
	mov r6, r9	@ 00070988 4e46
.org 0x7098a
	mov r5, r8	@ 0007098a 4546
.org 0x7098c
	push {r5, r6, r7}	@ 0007098c e0b4
.org 0x7098e
	sub sp, #16	@ 0007098e 84b0
.org 0x70990
	adds r6, r0, #0	@ 00070990 061c
.org 0x70992
	ldr r1, [pc, #252]	@ 00070992 3f49
.org 0x70994
	mov r0, sp	@ 00070994 6846
.org 0x70996
	movs r2, #6	@ 00070996 0622
.org 0x70998
	bl 0x129258	@ 00070998 b8f05efc
.org 0x7099c
	add r5, sp, #8	@ 0007099c 02ad
.org 0x7099e
	ldr r1, [pc, #244]	@ 0007099e 3d49
.org 0x709a0
	adds r0, r5, #0	@ 000709a0 281c
.org 0x709a2
	movs r2, #6	@ 000709a2 0622
.org 0x709a4
	bl 0x129258	@ 000709a4 b8f058fc
.org 0x709a8
	ldrb r0, [r6, #10]	@ 000709a8 b07a
.org 0x709aa
	lsrs r0, r0, #4	@ 000709aa 0009
.org 0x709ac
	mov r9, r0	@ 000709ac 8146
.org 0x709ae
	movs r7, #1	@ 000709ae 0127
.org 0x709b0
	ands r0, r7	@ 000709b0 3840
.org 0x709b2
	mov r9, r0	@ 000709b2 8146
.org 0x709b4
	movs r1, #0	@ 000709b4 0021
.org 0x709b6
	mov r8, r1	@ 000709b6 8846
.org 0x709b8
	adds r0, r6, #0	@ 000709b8 301c
.org 0x709ba
	adds r0, #195	@ 000709ba c330
.org 0x709bc
	ldrb r4, [r0, #0]	@ 000709bc 0478
.org 0x709be
	ldrb r2, [r6, #19]	@ 000709be f27c
.org 0x709c0
	mov sl, r2	@ 000709c0 9246
.org 0x709c2
	ldrb r0, [r6, #15]	@ 000709c2 f07b
.org 0x709c4
	cmp r0, #0	@ 000709c4 0028
.org 0x709c6
	bne.n 0x70a10	@ 000709c6 23d1
.org 0x709c8
	ldr r0, [pc, #204]	@ 000709c8 3348
.org 0x709ca
	bl 0x2b10	@ 000709ca 92f7a1f8
.org 0x709ce
	adds r0, r6, #0	@ 000709ce 301c
.org 0x709d0
	movs r1, #4	@ 000709d0 0421
.org 0x709d2
	bl 0x736c4	@ 000709d2 02f077fe
.org 0x709d6
	adds r0, r6, #0	@ 000709d6 301c
.org 0x709d8
	adds r0, #196	@ 000709d8 c430
.org 0x709da
	mov r3, r8	@ 000709da 4346
.org 0x709dc
	str r3, [r0, #0]	@ 000709dc 0360
.org 0x709de
	mov r0, r9	@ 000709de 4846
.org 0x709e0
	lsls r1, r0, #1	@ 000709e0 4100
.org 0x709e2
	subs r1, #1	@ 000709e2 0139
.org 0x709e4
	lsls r0, r1, #9	@ 000709e4 4802
.org 0x709e6
	str r0, [r6, #92]	@ 000709e6 f065
.org 0x709e8
	lsls r2, r4, #1	@ 000709e8 6200
.org 0x709ea
	adds r0, r5, r2	@ 000709ea a818
.org 0x709ec
	movs r3, #0	@ 000709ec 0023
.org 0x709ee
	ldrsh r0, [r0, r3]	@ 000709ee c05e
.org 0x709f0
	muls r0, r1	@ 000709f0 4843
.org 0x709f2
	str r0, [r6, #100]	@ 000709f2 7066
.org 0x709f4
	mov r3, sp	@ 000709f4 6b46
.org 0x709f6
	adds r0, r3, r2	@ 000709f6 9818
.org 0x709f8
	movs r2, #0	@ 000709f8 0022
.org 0x709fa
	ldrsh r0, [r0, r2]	@ 000709fa 805e
.org 0x709fc
	muls r0, r1	@ 000709fc 4843
.org 0x709fe
	str r0, [r6, #104]	@ 000709fe b066
.org 0x70a00
	mov r3, r8	@ 00070a00 4346
.org 0x70a02
	str r3, [r6, #96]	@ 00070a02 3366
.org 0x70a04
	strb r7, [r6, #18]	@ 00070a04 b774
.org 0x70a06
	movs r0, #255	@ 00070a06 ff20
.org 0x70a08
	mov sl, r0	@ 00070a08 8246
.org 0x70a0a
	ldrb r0, [r6, #15]	@ 00070a0a f07b
.org 0x70a0c
	adds r0, #1	@ 00070a0c 0130
.org 0x70a0e
	strb r0, [r6, #15]	@ 00070a0e f073
.org 0x70a10
	adds r0, r6, #0	@ 00070a10 301c
.org 0x70a12
	bl 0x1cff0	@ 00070a12 acf7edfa
.org 0x70a16
	adds r0, r6, #0	@ 00070a16 301c
.org 0x70a18
	adds r0, #116	@ 00070a18 7430
.org 0x70a1a
	ldr r4, [pc, #128]	@ 00070a1a 204c
.org 0x70a1c
	ldr r3, [pc, #128]	@ 00070a1c 204b
.org 0x70a1e
	adds r1, r6, #0	@ 00070a1e 311c
.org 0x70a20
	adds r1, #184	@ 00070a20 b831
.org 0x70a22
	ldrb r2, [r1, #0]	@ 00070a22 0a78
.org 0x70a24
	lsls r1, r2, #1	@ 00070a24 5100
.org 0x70a26
	adds r1, r1, r3	@ 00070a26 c918
.org 0x70a28
	ldrh r1, [r1, #0]	@ 00070a28 0988
.org 0x70a2a
	lsls r1, r1, #2	@ 00070a2a 8900
.org 0x70a2c
	adds r1, r1, r4	@ 00070a2c 0919
.org 0x70a2e
	adds r7, r6, #0	@ 00070a2e 371c
.org 0x70a30
	adds r7, #113	@ 00070a30 7137
.org 0x70a32
	movs r5, #0	@ 00070a32 0025
.org 0x70a34
	ldrsb r5, [r7, r5]	@ 00070a34 7d57
.org 0x70a36
	ldr r1, [r1, #0]	@ 00070a36 0968
.org 0x70a38
	lsls r3, r5, #2	@ 00070a38 ab00
.org 0x70a3a
	adds r3, r3, r1	@ 00070a3a 5b18
.org 0x70a3c
	ldr r4, [pc, #100]	@ 00070a3c 194c
.org 0x70a3e
	adds r1, r6, #0	@ 00070a3e 311c
.org 0x70a40
	adds r1, #185	@ 00070a40 b931
.org 0x70a42
	ldrb r1, [r1, #0]	@ 00070a42 0978
.org 0x70a44
	lsls r1, r1, #2	@ 00070a44 8900
.org 0x70a46
	adds r1, r1, r4	@ 00070a46 0919
.org 0x70a48
	ldr r1, [r1, #0]	@ 00070a48 0968
.org 0x70a4a
	lsls r2, r2, #2	@ 00070a4a 9200
.org 0x70a4c
	adds r2, r2, r1	@ 00070a4c 5218
.org 0x70a4e
	ldr r1, [r2, #0]	@ 00070a4e 1168
.org 0x70a50
	adds r1, r1, r5	@ 00070a50 4919
.org 0x70a52
	ldrb r1, [r1, #0]	@ 00070a52 0978
.org 0x70a54
	lsls r2, r1, #1	@ 00070a54 4a00
.org 0x70a56
	adds r2, r2, r1	@ 00070a56 5218
.org 0x70a58
	lsls r2, r2, #3	@ 00070a58 d200
.org 0x70a5a
	ldr r1, [r3, #0]	@ 00070a5a 1968
.org 0x70a5c
	adds r1, r1, r2	@ 00070a5c 8918
.org 0x70a5e
	bl 0x5784	@ 00070a5e 94f791fe
.org 0x70a62
	ldrb r0, [r7, #0]	@ 00070a62 3878
.org 0x70a64
	strb r0, [r6, #19]	@ 00070a64 f074
.org 0x70a66
	ldrb r4, [r7, #0]	@ 00070a66 3c78
.org 0x70a68
	adds r0, r6, #0	@ 00070a68 301c
.org 0x70a6a
	bl 0x73850	@ 00070a6a 02f0f1fe
.org 0x70a6e
	cmp r0, #0	@ 00070a6e 0028
.org 0x70a70
	bne.n 0x70aba	@ 00070a70 23d1
.org 0x70a72
	ldr r0, [r6, #88]	@ 00070a72 b06d
.org 0x70a74
	ldr r1, [r6, #96]	@ 00070a74 316e
.org 0x70a76
	adds r0, r0, r1	@ 00070a76 4018
.org 0x70a78
	str r0, [r6, #88]	@ 00070a78 b065
.org 0x70a7a
	adds r0, r6, #0	@ 00070a7a 301c
.org 0x70a7c
	bl 0x73850	@ 00070a7c 02f0e8fe
.org 0x70a80
	cmp r0, #0	@ 00070a80 0028
.org 0x70a82
	beq.n 0x70aa8	@ 00070a82 11d0
.org 0x70a84
	adds r0, r6, #0	@ 00070a84 301c
.org 0x70a86
	bl 0x73a68	@ 00070a86 02f0efff
.org 0x70a8a
	mov r1, r8	@ 00070a8a 4146
.org 0x70a8c
	str r1, [r6, #96]	@ 00070a8c 3166
.org 0x70a8e
	b.n 0x70ac4	@ 00070a8e 19e0
.org 0x70a90
	.byte 0x3c,0x99,0x12,0x08	@ 00070a90 data
.org 0x70a94
	.byte 0x42,0x99,0x12,0x08	@ 00070a94 data
.org 0x70a98
	.byte 0x27,0x01,0x00,0x00	@ 00070a98 data
.org 0x70a9c
	.byte 0x08,0xcb,0x85,0x08	@ 00070a9c data
.org 0x70aa0
	.byte 0x04,0xcc,0x85,0x08	@ 00070aa0 data
.org 0x70aa4
	.byte 0xfc,0xcb,0x85,0x08	@ 00070aa4 data
.org 0x70aa8
	ldr r0, [r6, #96]	@ 00070aa8 306e
.org 0x70aaa
	adds r0, #64	@ 00070aaa 4030
.org 0x70aac
	str r0, [r6, #96]	@ 00070aac 3066
.org 0x70aae
	movs r1, #224	@ 00070aae e021
.org 0x70ab0
	lsls r1, r1, #3	@ 00070ab0 c900
.org 0x70ab2
	cmp r0, r1	@ 00070ab2 8842
.org 0x70ab4
	ble.n 0x70ac4	@ 00070ab4 06dd
.org 0x70ab6
	str r1, [r6, #96]	@ 00070ab6 3166
.org 0x70ab8
	b.n 0x70ac4	@ 00070ab8 04e0
.org 0x70aba
	adds r0, r6, #0	@ 00070aba 301c
.org 0x70abc
	bl 0x73a68	@ 00070abc 02f0d4ff
.org 0x70ac0
	mov r2, r8	@ 00070ac0 4246
.org 0x70ac2
	str r2, [r6, #96]	@ 00070ac2 3266
.org 0x70ac4
	cmp r4, sl	@ 00070ac4 5445
.org 0x70ac6
	beq.n 0x70ad8	@ 00070ac6 07d0
.org 0x70ac8
	cmp r4, #3	@ 00070ac8 032c
.org 0x70aca
	beq.n 0x70ad0	@ 00070aca 01d0
.org 0x70acc
	cmp r4, #7	@ 00070acc 072c
.org 0x70ace
	bne.n 0x70ad8	@ 00070ace 03d1
.org 0x70ad0
	movs r0, #155	@ 00070ad0 9b20
.org 0x70ad2
	lsls r0, r0, #1	@ 00070ad2 4000
.org 0x70ad4
	bl 0x2b10	@ 00070ad4 92f71cf8
.org 0x70ad8
	ldr r0, [r6, #84]	@ 00070ad8 706d
.org 0x70ada
	ldr r2, [r6, #92]	@ 00070ada f26d
.org 0x70adc
	adds r0, r0, r2	@ 00070adc 8018
.org 0x70ade
	str r0, [r6, #84]	@ 00070ade 7065
.org 0x70ae0
	adds r1, r6, #0	@ 00070ae0 311c
.org 0x70ae2
	adds r1, #196	@ 00070ae2 c431
.org 0x70ae4
	ldr r0, [r1, #0]	@ 00070ae4 0868
.org 0x70ae6
	adds r0, r0, r2	@ 00070ae6 8018
.org 0x70ae8
	str r0, [r1, #0]	@ 00070ae8 0860
.org 0x70aea
	adds r4, r1, #0	@ 00070aea 0c1c
.org 0x70aec
	mov r3, r9	@ 00070aec 4b46
.org 0x70aee
	cmp r3, #0	@ 00070aee 002b
.org 0x70af0
	bne.n 0x70b04	@ 00070af0 08d1
.org 0x70af2
	adds r0, r6, #0	@ 00070af2 301c
.org 0x70af4
	bl 0x7371c	@ 00070af4 02f012fe
.org 0x70af8
	cmp r0, #0	@ 00070af8 0028
.org 0x70afa
	beq.n 0x70b1e	@ 00070afa 10d0
.org 0x70afc
	adds r0, r6, #0	@ 00070afc 301c
.org 0x70afe
	bl 0x738b4	@ 00070afe 02f0d9fe
.org 0x70b02
	b.n 0x70b14	@ 00070b02 07e0
.org 0x70b04
	adds r0, r6, #0	@ 00070b04 301c
.org 0x70b06
	bl 0x73784	@ 00070b06 02f03dfe
.org 0x70b0a
	cmp r0, #0	@ 00070b0a 0028
.org 0x70b0c
	beq.n 0x70b1e	@ 00070b0c 07d0
.org 0x70b0e
	adds r0, r6, #0	@ 00070b0e 301c
.org 0x70b10
	bl 0x73940	@ 00070b10 02f016ff
.org 0x70b14
	ldrb r0, [r6, #14]	@ 00070b14 b07b
.org 0x70b16
	adds r0, #1	@ 00070b16 0130
.org 0x70b18
	lsls r0, r0, #24	@ 00070b18 0006
.org 0x70b1a
	lsrs r0, r0, #24	@ 00070b1a 000e
.org 0x70b1c
	mov r8, r0	@ 00070b1c 8046
.org 0x70b1e
	ldr r0, [r6, #92]	@ 00070b1e f06d
.org 0x70b20
	ldr r1, [r6, #100]	@ 00070b20 716e
.org 0x70b22
	adds r1, r0, r1	@ 00070b22 4118
.org 0x70b24
	str r1, [r6, #92]	@ 00070b24 f165
.org 0x70b26
	mov r2, r9	@ 00070b26 4a46
.org 0x70b28
	lsls r0, r2, #1	@ 00070b28 5000
.org 0x70b2a
	subs r3, r0, #1	@ 00070b2a 431e
.org 0x70b2c
	ldrb r2, [r6, #18]	@ 00070b2c b27c
.org 0x70b2e
	cmp r2, #0	@ 00070b2e 002a
.org 0x70b30
	beq.n 0x70b5c	@ 00070b30 14d0
.org 0x70b32
	muls r1, r3	@ 00070b32 5943
.org 0x70b34
	ldr r2, [r6, #104]	@ 00070b34 b26e
.org 0x70b36
	adds r0, r2, #0	@ 00070b36 101c
.org 0x70b38
	muls r0, r3	@ 00070b38 5843
.org 0x70b3a
	cmp r1, r0	@ 00070b3a 8142
.org 0x70b3c
	ble.n 0x70b40	@ 00070b3c 00dd
.org 0x70b3e
	str r2, [r6, #92]	@ 00070b3e f265
.org 0x70b40
	ldr r0, [r4, #0]	@ 00070b40 2068
.org 0x70b42
	adds r1, r0, #0	@ 00070b42 011c
.org 0x70b44
	muls r1, r3	@ 00070b44 5943
.org 0x70b46
	ldr r0, [pc, #16]	@ 00070b46 0448
.org 0x70b48
	cmp r1, r0	@ 00070b48 8142
.org 0x70b4a
	ble.n 0x70b70	@ 00070b4a 11dd
.org 0x70b4c
	movs r0, #0	@ 00070b4c 0020
.org 0x70b4e
	strb r0, [r6, #18]	@ 00070b4e b074
.org 0x70b50
	lsls r0, r3, #6	@ 00070b50 9801
.org 0x70b52
	negs r0, r0	@ 00070b52 4042
.org 0x70b54
	str r0, [r6, #100]	@ 00070b54 7066
.org 0x70b56
	b.n 0x70b70	@ 00070b56 0be0
.org 0x70b58
	.byte 0xff,0x4f,0x00,0x00	@ 00070b58 data
.org 0x70b5c
	adds r0, r1, #0	@ 00070b5c 081c
.org 0x70b5e
	muls r0, r3	@ 00070b5e 5843
.org 0x70b60
	cmp r0, #0	@ 00070b60 0028
.org 0x70b62
	bgt.n 0x70b70	@ 00070b62 05dc
.org 0x70b64
	str r2, [r6, #92]	@ 00070b64 f265
.org 0x70b66
	ldrb r0, [r6, #14]	@ 00070b66 b07b
.org 0x70b68
	adds r0, #2	@ 00070b68 0230
.org 0x70b6a
	lsls r0, r0, #24	@ 00070b6a 0006
.org 0x70b6c
	lsrs r0, r0, #24	@ 00070b6c 000e
.org 0x70b6e
	mov r8, r0	@ 00070b6e 8046

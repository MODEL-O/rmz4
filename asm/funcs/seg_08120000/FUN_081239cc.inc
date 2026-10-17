@ FUN_081239cc  entry 0x081239cc  size 430
.thumb
.org 0x1239cc
FUN_081239cc:
	push {r4, r5, r6, r7, lr}	@ 001239cc f0b5
.org 0x1239ce
	mov r7, sl	@ 001239ce 5746
.org 0x1239d0
	mov r6, r9	@ 001239d0 4e46
.org 0x1239d2
	mov r5, r8	@ 001239d2 4546
.org 0x1239d4
	push {r5, r6, r7}	@ 001239d4 e0b4
.org 0x1239d6
	sub sp, #8	@ 001239d6 82b0
.org 0x1239d8
	adds r6, r0, #0	@ 001239d8 061c
.org 0x1239da
	ldr r0, [pc, #116]	@ 001239da 1d48
.org 0x1239dc
	ldr r1, [pc, #116]	@ 001239dc 1d49
.org 0x1239de
	adds r7, r0, r1	@ 001239de 4718
.org 0x1239e0
	ldr r0, [r7, #0]	@ 001239e0 3868
.org 0x1239e2
	ldr r2, [pc, #116]	@ 001239e2 1d4a
.org 0x1239e4
	mov r8, r2	@ 001239e4 9046
.org 0x1239e6
	mov r1, r8	@ 001239e6 4146
.org 0x1239e8
	muls r1, r0	@ 001239e8 4143
.org 0x1239ea
	adds r0, r1, #0	@ 001239ea 081c
.org 0x1239ec
	ldr r2, [pc, #108]	@ 001239ec 1b4a
.org 0x1239ee
	mov sl, r2	@ 001239ee 9246
.org 0x1239f0
	add r0, sl	@ 001239f0 5044
.org 0x1239f2
	str r0, [r7, #0]	@ 001239f2 3860
.org 0x1239f4
	lsrs r0, r0, #16	@ 001239f4 000c
.org 0x1239f6
	movs r1, #13	@ 001239f6 0d21
.org 0x1239f8
	bl 0x129198	@ 001239f8 05f0cefb
.org 0x1239fc
	lsls r0, r0, #24	@ 001239fc 0006
.org 0x1239fe
	lsrs r4, r0, #24	@ 001239fe 040e
.org 0x123a00
	movs r5, #1	@ 00123a00 0125
.org 0x123a02
	lsls r5, r4	@ 00123a02 a540
.org 0x123a04
	ldr r1, [pc, #88]	@ 00123a04 1649
.org 0x123a06
	adds r0, r6, r1	@ 00123a06 7018
.org 0x123a08
	ldr r1, [r0, #40]	@ 00123a08 816a
.org 0x123a0a
	adds r0, r1, #0	@ 00123a0a 081c
.org 0x123a0c
	ands r0, r5	@ 00123a0c 2840
.org 0x123a0e
	cmp r0, #0	@ 00123a0e 0028
.org 0x123a10
	beq.n 0x123a84	@ 00123a10 38d0
.org 0x123a12
	mov r9, r7	@ 00123a12 b946
.org 0x123a14
	mov ip, sl	@ 00123a14 d446
.org 0x123a16
	movs r7, #1	@ 00123a16 0127
.org 0x123a18
	mov sl, r1	@ 00123a18 8a46
.org 0x123a1a
	mov r2, r9	@ 00123a1a 4a46
.org 0x123a1c
	ldr r0, [r2, #0]	@ 00123a1c 1068
.org 0x123a1e
	mov r2, r8	@ 00123a1e 4246
.org 0x123a20
	muls r2, r0	@ 00123a20 4243
.org 0x123a22
	add r2, ip	@ 00123a22 6244
.org 0x123a24
	lsrs r0, r2, #16	@ 00123a24 100c
.org 0x123a26
	movs r1, #3	@ 00123a26 0321
.org 0x123a28
	ands r0, r1	@ 00123a28 0840
.org 0x123a2a
	adds r1, r0, #1	@ 00123a2a 411c
.org 0x123a2c
	adds r3, r1, #0	@ 00123a2c 0b1c
.org 0x123a2e
	mov r0, r8	@ 00123a2e 4046
.org 0x123a30
	muls r0, r2	@ 00123a30 5043
.org 0x123a32
	add r0, ip	@ 00123a32 6044
.org 0x123a34
	mov r2, r9	@ 00123a34 4a46
.org 0x123a36
	str r0, [r2, #0]	@ 00123a36 1060
.org 0x123a38
	lsrs r0, r0, #16	@ 00123a38 000c
.org 0x123a3a
	ands r0, r7	@ 00123a3a 3840
.org 0x123a3c
	cmp r0, #0	@ 00123a3c 0028
.org 0x123a3e
	beq.n 0x123a64	@ 00123a3e 11d0
.org 0x123a40
	lsls r5, r1	@ 00123a40 8d40
.org 0x123a42
	adds r0, r4, r1	@ 00123a42 6018
.org 0x123a44
	lsls r0, r0, #24	@ 00123a44 0006
.org 0x123a46
	lsrs r4, r0, #24	@ 00123a46 040e
.org 0x123a48
	cmp r4, #13	@ 00123a48 0d2c
.org 0x123a4a
	bls.n 0x123a7c	@ 00123a4a 17d9
.org 0x123a4c
	adds r4, r1, #0	@ 00123a4c 0c1c
.org 0x123a4e
	b.n 0x123a78	@ 00123a4e 13e0
.org 0x123a50
	.byte 0x10,0xf6,0x02,0x02	@ 00123a50 data
.org 0x123a54
	.byte 0x6c,0x62,0x00,0x00	@ 00123a54 data
.org 0x123a58
	.byte 0x6d,0x4e,0xc6,0x41	@ 00123a58 data
.org 0x123a5c
	.byte 0x39,0x30,0x00,0x00	@ 00123a5c data
.org 0x123a60
	.byte 0xcc,0x0d,0x00,0x00	@ 00123a60 data
.org 0x123a64
	lsrs r5, r3	@ 00123a64 dd40
.org 0x123a66
	subs r0, r4, r3	@ 00123a66 e01a
.org 0x123a68
	lsls r0, r0, #24	@ 00123a68 0006
.org 0x123a6a
	lsrs r4, r0, #24	@ 00123a6a 040e
.org 0x123a6c
	cmp r5, #0	@ 00123a6c 002d
.org 0x123a6e
	bne.n 0x123a7c	@ 00123a6e 05d1
.org 0x123a70
	movs r0, #13	@ 00123a70 0d20
.org 0x123a72
	subs r0, r0, r3	@ 00123a72 c01a
.org 0x123a74
	lsls r0, r0, #24	@ 00123a74 0006
.org 0x123a76
	lsrs r4, r0, #24	@ 00123a76 040e
.org 0x123a78
	adds r5, r7, #0	@ 00123a78 3d1c
.org 0x123a7a
	lsls r5, r4	@ 00123a7a a540
.org 0x123a7c
	mov r0, sl	@ 00123a7c 5046
.org 0x123a7e
	ands r0, r5	@ 00123a7e 2840
.org 0x123a80
	cmp r0, #0	@ 00123a80 0028
.org 0x123a82
	bne.n 0x123a1a	@ 00123a82 cad1
.org 0x123a84
	ldr r0, [pc, #72]	@ 00123a84 1248
.org 0x123a86
	adds r2, r6, r0	@ 00123a86 3218
.org 0x123a88
	lsls r0, r4, #2	@ 00123a88 a000
.org 0x123a8a
	ldr r1, [pc, #72]	@ 00123a8a 1249
.org 0x123a8c
	adds r0, r0, r1	@ 00123a8c 4018
.org 0x123a8e
	ldr r1, [r0, #0]	@ 00123a8e 0168
.org 0x123a90
	lsls r1, r1, #8	@ 00123a90 0902
.org 0x123a92
	ldr r0, [pc, #68]	@ 00123a92 1148
.org 0x123a94
	adds r1, r1, r0	@ 00123a94 0918
.org 0x123a96
	ldr r0, [r2, #0]	@ 00123a96 1068
.org 0x123a98
	adds r0, r0, r1	@ 00123a98 4018
.org 0x123a9a
	str r0, [sp, #0]	@ 00123a9a 0090
.org 0x123a9c
	ldr r0, [r2, #4]	@ 00123a9c 5068
.org 0x123a9e
	str r0, [sp, #4]	@ 00123a9e 0190
.org 0x123aa0
	ldr r1, [pc, #56]	@ 00123aa0 0e49
.org 0x123aa2
	adds r2, r6, r1	@ 00123aa2 7218
.org 0x123aa4
	ldr r1, [r2, #36]	@ 00123aa4 516a
.org 0x123aa6
	cmp r1, #0	@ 00123aa6 0029
.org 0x123aa8
	beq.n 0x123b08	@ 00123aa8 2ed0
.org 0x123aaa
	movs r0, #7	@ 00123aaa 0720
.org 0x123aac
	ands r1, r0	@ 00123aac 0140
.org 0x123aae
	cmp r1, #0	@ 00123aae 0029
.org 0x123ab0
	bne.n 0x123b08	@ 00123ab0 2ad1
.org 0x123ab2
	ldr r0, [r2, #56]	@ 00123ab2 906b
.org 0x123ab4
	cmp r0, #0	@ 00123ab4 0028
.org 0x123ab6
	beq.n 0x123ae0	@ 00123ab6 13d0
.org 0x123ab8
	movs r2, #128	@ 00123ab8 8022
.org 0x123aba
	lsls r2, r2, #1	@ 00123aba 5200
.org 0x123abc
	adds r0, r2, #0	@ 00123abc 101c
.org 0x123abe
	orrs r4, r0	@ 00123abe 0443
.org 0x123ac0
	lsls r1, r4, #16	@ 00123ac0 2104
.org 0x123ac2
	lsrs r1, r1, #16	@ 00123ac2 090c
.org 0x123ac4
	mov r0, sp	@ 00123ac4 6846
.org 0x123ac6
	adds r2, r6, #0	@ 00123ac6 321c
.org 0x123ac8
	bl 0xbc7a0	@ 00123ac8 98f76afe
.org 0x123acc
	b.n 0x123af4	@ 00123acc 12e0
.org 0x123ace
	.byte 0x00	@ 00123ace data
.org 0x123acf
	.byte 0x00	@ 00123acf data
.org 0x123ad0
	.byte 0xc4,0x0d,0x00,0x00	@ 00123ad0 data
.org 0x123ad4
	.byte 0x90,0x23,0x88,0x08	@ 00123ad4 data
.org 0x123ad8
	.byte 0x00,0x88,0xff,0xff	@ 00123ad8 data
.org 0x123adc
	.byte 0xcc,0x0d,0x00,0x00	@ 00123adc data
.org 0x123ae0
	movs r1, #128	@ 00123ae0 8021
.org 0x123ae2
	lsls r1, r1, #2	@ 00123ae2 8900
.org 0x123ae4
	adds r0, r1, #0	@ 00123ae4 081c
.org 0x123ae6
	orrs r4, r0	@ 00123ae6 0443
.org 0x123ae8
	lsls r1, r4, #16	@ 00123ae8 2104
.org 0x123aea
	lsrs r1, r1, #16	@ 00123aea 090c
.org 0x123aec
	mov r0, sp	@ 00123aec 6846
.org 0x123aee
	adds r2, r6, #0	@ 00123aee 321c
.org 0x123af0
	bl 0xbc7a0	@ 00123af0 98f756fe
.org 0x123af4
	ldr r2, [pc, #12]	@ 00123af4 034a
.org 0x123af6
	adds r0, r6, r2	@ 00123af6 b018
.org 0x123af8
	ldr r1, [r0, #56]	@ 00123af8 816b
.org 0x123afa
	movs r2, #1	@ 00123afa 0122
.org 0x123afc
	eors r1, r2	@ 00123afc 5140
.org 0x123afe
	str r1, [r0, #56]	@ 00123afe 8163
.org 0x123b00
	b.n 0x123b12	@ 00123b00 07e0
.org 0x123b02
	.byte 0x00	@ 00123b02 data
.org 0x123b03
	.byte 0x00	@ 00123b03 data
.org 0x123b04
	.byte 0xcc,0x0d,0x00,0x00	@ 00123b04 data
.org 0x123b08
	mov r0, sp	@ 00123b08 6846
.org 0x123b0a
	adds r1, r4, #0	@ 00123b0a 211c
.org 0x123b0c
	adds r2, r6, #0	@ 00123b0c 321c
.org 0x123b0e
	bl 0xbc7a0	@ 00123b0e 98f747fe
.org 0x123b12
	ldr r0, [pc, #72]	@ 00123b12 1248
.org 0x123b14
	adds r4, r6, r0	@ 00123b14 3418
.org 0x123b16
	ldr r0, [r4, #40]	@ 00123b16 a06a
.org 0x123b18
	orrs r0, r5	@ 00123b18 2843
.org 0x123b1a
	str r0, [r4, #40]	@ 00123b1a a062
.org 0x123b1c
	ldr r0, [r4, #52]	@ 00123b1c 606b
.org 0x123b1e
	adds r0, #1	@ 00123b1e 0130
.org 0x123b20
	str r0, [r4, #52]	@ 00123b20 6063
.org 0x123b22
	ldr r0, [r4, #36]	@ 00123b22 606a
.org 0x123b24
	adds r0, #1	@ 00123b24 0130
.org 0x123b26
	str r0, [r4, #36]	@ 00123b26 6062
.org 0x123b28
	cmp r0, #0	@ 00123b28 0028
.org 0x123b2a
	beq.n 0x123b7e	@ 00123b2a 28d0
.org 0x123b2c
	movs r1, #20	@ 00123b2c 1421
.org 0x123b2e
	bl 0x129198	@ 00123b2e 05f033fb
.org 0x123b32
	cmp r0, #0	@ 00123b32 0028
.org 0x123b34
	bne.n 0x123b7e	@ 00123b34 23d1
.org 0x123b36
	ldr r2, [pc, #40]	@ 00123b36 0a4a
.org 0x123b38
	adds r1, r6, r2	@ 00123b38 b118
.org 0x123b3a
	ldr r0, [r1, #4]	@ 00123b3a 4868
.org 0x123b3c
	str r0, [sp, #4]	@ 00123b3c 0190
.org 0x123b3e
	ldr r0, [r4, #0]	@ 00123b3e 2068
.org 0x123b40
	ldr r0, [r0, #84]	@ 00123b40 406d
.org 0x123b42
	ldr r1, [r1, #0]	@ 00123b42 0968
.org 0x123b44
	cmp r0, r1	@ 00123b44 8842
.org 0x123b46
	ble.n 0x123b64	@ 00123b46 0ddd
.org 0x123b48
	movs r2, #140	@ 00123b48 8c22
.org 0x123b4a
	lsls r2, r2, #8	@ 00123b4a 1202
.org 0x123b4c
	adds r0, r1, r2	@ 00123b4c 8818
.org 0x123b4e
	str r0, [sp, #0]	@ 00123b4e 0090
.org 0x123b50
	mov r0, sp	@ 00123b50 6846
.org 0x123b52
	movs r1, #0	@ 00123b52 0021
.org 0x123b54
	adds r2, r6, #0	@ 00123b54 321c
.org 0x123b56
	bl 0xbca78	@ 00123b56 98f78fff
.org 0x123b5a
	b.n 0x123b74	@ 00123b5a 0be0
.org 0x123b5c
	.byte 0xcc,0x0d,0x00,0x00	@ 00123b5c data
.org 0x123b60
	.byte 0xc4,0x0d,0x00,0x00	@ 00123b60 data
.org 0x123b64
	ldr r2, [pc, #52]	@ 00123b64 0d4a
.org 0x123b66
	adds r0, r1, r2	@ 00123b66 8818
.org 0x123b68
	str r0, [sp, #0]	@ 00123b68 0090
.org 0x123b6a
	mov r0, sp	@ 00123b6a 6846
.org 0x123b6c
	movs r1, #1	@ 00123b6c 0121
.org 0x123b6e
	adds r2, r6, #0	@ 00123b6e 321c
.org 0x123b70
	bl 0xbca78	@ 00123b70 98f782ff
.org 0x123b74
	ldr r0, [pc, #40]	@ 00123b74 0a48
.org 0x123b76
	adds r1, r6, r0	@ 00123b76 3118
.org 0x123b78
	ldr r0, [r1, #36]	@ 00123b78 486a

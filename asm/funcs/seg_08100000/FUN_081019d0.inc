@ FUN_081019d0  entry 0x081019d0  size 412
.thumb
.org 0x1019d0
FUN_081019d0:
	push {r4, r5, r6, r7, lr}	@ 001019d0 f0b5
.org 0x1019d2
	adds r5, r0, #0	@ 001019d2 051c
.org 0x1019d4
	ldrb r6, [r5, #13]	@ 001019d4 6e7b
.org 0x1019d6
	cmp r6, #1	@ 001019d6 012e
.org 0x1019d8
	beq.n 0x101a5c	@ 001019d8 40d0
.org 0x1019da
	cmp r6, #1	@ 001019da 012e
.org 0x1019dc
	bgt.n 0x1019e4	@ 001019dc 02dc
.org 0x1019de
	cmp r6, #0	@ 001019de 002e
.org 0x1019e0
	beq.n 0x1019f2	@ 001019e0 07d0
.org 0x1019e2
	b.n 0x101b92	@ 001019e2 d6e0
.org 0x1019e4
	cmp r6, #2	@ 001019e4 022e
.org 0x1019e6
	bne.n 0x1019ea	@ 001019e6 00d1
.org 0x1019e8
	b.n 0x101b5a	@ 001019e8 b7e0
.org 0x1019ea
	cmp r6, #16	@ 001019ea 102e
.org 0x1019ec
	bne.n 0x1019f0	@ 001019ec 00d1
.org 0x1019ee
	b.n 0x101b80	@ 001019ee c7e0
.org 0x1019f0
	b.n 0x101b92	@ 001019f0 cfe0
.org 0x1019f2
	ldrb r1, [r5, #10]	@ 001019f2 a97a
.org 0x1019f4
	movs r0, #1	@ 001019f4 0120
.org 0x1019f6
	orrs r0, r1	@ 001019f6 0843
.org 0x1019f8
	strb r0, [r5, #10]	@ 001019f8 a872
.org 0x1019fa
	adds r0, r5, #0	@ 001019fa 281c
.org 0x1019fc
	bl 0x1cc9c	@ 001019fc 1bf74ef9
.org 0x101a00
	ldr r0, [r5, #84]	@ 00101a00 686d
.org 0x101a02
	ldr r1, [r5, #88]	@ 00101a02 a96d
.org 0x101a04
	bl 0x8534	@ 00101a04 06f796fd
.org 0x101a08
	str r0, [r5, #88]	@ 00101a08 a865
.org 0x101a0a
	ldrb r1, [r5, #10]	@ 00101a0a a97a
.org 0x101a0c
	movs r0, #4	@ 00101a0c 0420
.org 0x101a0e
	orrs r0, r1	@ 00101a0e 0843
.org 0x101a10
	strb r0, [r5, #10]	@ 00101a10 a872
.org 0x101a12
	adds r4, r5, #0	@ 00101a12 2c1c
.org 0x101a14
	adds r4, #116	@ 00101a14 7434
.org 0x101a16
	ldr r1, [pc, #148]	@ 00101a16 2549
.org 0x101a18
	adds r2, r5, #0	@ 00101a18 2a1c
.org 0x101a1a
	adds r2, #84	@ 00101a1a 5432
.org 0x101a1c
	adds r0, r4, #0	@ 00101a1c 201c
.org 0x101a1e
	movs r3, #0	@ 00101a1e 0023
.org 0x101a20
	bl 0x5760	@ 00101a20 03f79efe
.org 0x101a24
	str r5, [r4, #44]	@ 00101a24 e562
.org 0x101a26
	str r6, [r4, #36]	@ 00101a26 6662
.org 0x101a28
	movs r1, #244	@ 00101a28 f421
.org 0x101a2a
	lsls r1, r1, #7	@ 00101a2a c901
.org 0x101a2c
	adds r0, r5, #0	@ 00101a2c 281c
.org 0x101a2e
	bl 0x1cf00	@ 00101a2e 1bf767fa
.org 0x101a32
	ldrb r1, [r5, #10]	@ 00101a32 a97a
.org 0x101a34
	movs r0, #239	@ 00101a34 ef20
.org 0x101a36
	ands r0, r1	@ 00101a36 0840
.org 0x101a38
	strb r0, [r5, #10]	@ 00101a38 a872
.org 0x101a3a
	adds r0, r5, #0	@ 00101a3a 281c
.org 0x101a3c
	adds r0, #76	@ 00101a3c 4c30
.org 0x101a3e
	strb r6, [r0, #0]	@ 00101a3e 0670
.org 0x101a40
	adds r2, r5, #0	@ 00101a40 2a1c
.org 0x101a42
	adds r2, #74	@ 00101a42 4a32
.org 0x101a44
	ldrb r1, [r2, #0]	@ 00101a44 1178
.org 0x101a46
	movs r0, #17	@ 00101a46 1120
.org 0x101a48
	negs r0, r0	@ 00101a48 4042
.org 0x101a4a
	ands r0, r1	@ 00101a4a 0840
.org 0x101a4c
	strb r0, [r2, #0]	@ 00101a4c 1070
.org 0x101a4e
	adds r1, r5, #0	@ 00101a4e 291c
.org 0x101a50
	adds r1, #37	@ 00101a50 2531
.org 0x101a52
	movs r0, #24	@ 00101a52 1820
.org 0x101a54
	strb r0, [r1, #0]	@ 00101a54 0870
.org 0x101a56
	ldrb r0, [r5, #13]	@ 00101a56 687b
.org 0x101a58
	adds r0, #1	@ 00101a58 0130
.org 0x101a5a
	strb r0, [r5, #13]	@ 00101a5a 6873
.org 0x101a5c
	adds r0, r5, #0	@ 00101a5c 281c
.org 0x101a5e
	adds r0, #140	@ 00101a5e 8c30
.org 0x101a60
	ldr r0, [r0, #0]	@ 00101a60 0068
.org 0x101a62
	movs r1, #128	@ 00101a62 8021
.org 0x101a64
	lsls r1, r1, #22	@ 00101a64 8905
.org 0x101a66
	ands r0, r1	@ 00101a66 0840
.org 0x101a68
	cmp r0, #0	@ 00101a68 0028
.org 0x101a6a
	bne.n 0x101a6e	@ 00101a6a 00d1
.org 0x101a6c
	b.n 0x101b92	@ 00101a6c 91e0
.org 0x101a6e
	ldr r0, [pc, #64]	@ 00101a6e 1048
.org 0x101a70
	ldrb r0, [r0, #0]	@ 00101a70 0078
.org 0x101a72
	cmp r0, #0	@ 00101a72 0028
.org 0x101a74
	bne.n 0x101a78	@ 00101a74 00d1
.org 0x101a76
	b.n 0x101b92	@ 00101a76 8ce0
.org 0x101a78
	ldr r0, [pc, #56]	@ 00101a78 0e48
.org 0x101a7a
	movs r1, #197	@ 00101a7a c521
.org 0x101a7c
	lsls r1, r1, #3	@ 00101a7c c900
.org 0x101a7e
	adds r0, r0, r1	@ 00101a7e 4018
.org 0x101a80
	adds r1, r5, #0	@ 00101a80 291c
.org 0x101a82
	adds r1, #116	@ 00101a82 7431
.org 0x101a84
	ldr r0, [r0, #0]	@ 00101a84 0068
.org 0x101a86
	cmp r0, r1	@ 00101a86 8842
.org 0x101a88
	beq.n 0x101a8c	@ 00101a88 00d0
.org 0x101a8a
	b.n 0x101b92	@ 00101a8a 82e0
.org 0x101a8c
	movs r2, #0	@ 00101a8c 0022
.org 0x101a8e
	ldr r0, [pc, #40]	@ 00101a8e 0a48
.org 0x101a90
	ldr r0, [r0, #0]	@ 00101a90 0068
.org 0x101a92
	ldr r0, [r0, #84]	@ 00101a92 406d
.org 0x101a94
	ldr r1, [r5, #84]	@ 00101a94 696d
.org 0x101a96
	subs r0, r0, r1	@ 00101a96 401a
.org 0x101a98
	cmp r0, #0	@ 00101a98 0028
.org 0x101a9a
	ble.n 0x101a9e	@ 00101a9a 00dd
.org 0x101a9c
	movs r2, #1	@ 00101a9c 0122
.org 0x101a9e
	cmp r2, #0	@ 00101a9e 002a
.org 0x101aa0
	beq.n 0x101abc	@ 00101aa0 0cd0
.org 0x101aa2
	ldrb r1, [r5, #10]	@ 00101aa2 a97a
.org 0x101aa4
	movs r0, #16	@ 00101aa4 1020
.org 0x101aa6
	orrs r0, r1	@ 00101aa6 0843
.org 0x101aa8
	b.n 0x101ac2	@ 00101aa8 0be0
.org 0x101aaa
	.byte 0x00	@ 00101aaa data
.org 0x101aab
	.byte 0x00	@ 00101aab data
.org 0x101aac
	.byte 0x7c,0xba,0x86,0x08	@ 00101aac data
.org 0x101ab0
	.byte 0xf8,0xdb,0x02,0x02	@ 00101ab0 data
.org 0x101ab4
	.byte 0xe0,0x32,0x00,0x03	@ 00101ab4 data
.org 0x101ab8
	.byte 0xf0,0xdb,0x02,0x02	@ 00101ab8 data
.org 0x101abc
	ldrb r1, [r5, #10]	@ 00101abc a97a
.org 0x101abe
	movs r0, #239	@ 00101abe ef20
.org 0x101ac0
	ands r0, r1	@ 00101ac0 0840
.org 0x101ac2
	strb r0, [r5, #10]	@ 00101ac2 a872
.org 0x101ac4
	adds r1, r2, #0	@ 00101ac4 111c
.org 0x101ac6
	adds r0, r5, #0	@ 00101ac6 281c
.org 0x101ac8
	adds r0, #76	@ 00101ac8 4c30
.org 0x101aca
	strb r1, [r0, #0]	@ 00101aca 0170
.org 0x101acc
	adds r3, r5, #0	@ 00101acc 2b1c
.org 0x101ace
	adds r3, #74	@ 00101ace 4a33
.org 0x101ad0
	lsls r1, r1, #4	@ 00101ad0 0901
.org 0x101ad2
	ldrb r2, [r3, #0]	@ 00101ad2 1a78
.org 0x101ad4
	movs r0, #17	@ 00101ad4 1120
.org 0x101ad6
	negs r0, r0	@ 00101ad6 4042
.org 0x101ad8
	ands r0, r2	@ 00101ad8 1040
.org 0x101ada
	orrs r0, r1	@ 00101ada 0843
.org 0x101adc
	strb r0, [r3, #0]	@ 00101adc 1870
.org 0x101ade
	ldr r4, [pc, #20]	@ 00101ade 054c
.org 0x101ae0
	ldrb r1, [r4, #13]	@ 00101ae0 617b
.org 0x101ae2
	movs r0, #2	@ 00101ae2 0220
.org 0x101ae4
	ands r0, r1	@ 00101ae4 0840
.org 0x101ae6
	cmp r0, #0	@ 00101ae6 0028
.org 0x101ae8
	beq.n 0x101afc	@ 00101ae8 08d0
.org 0x101aea
	ldr r0, [pc, #12]	@ 00101aea 0348
.org 0x101aec
	bl 0x10e518	@ 00101aec 0cf014fd
.org 0x101af0
	b.n 0x101b54	@ 00101af0 30e0
.org 0x101af2
	.byte 0x00	@ 00101af2 data
.org 0x101af3
	.byte 0x00	@ 00101af3 data
.org 0x101af4
	.byte 0xb0,0xe8,0x02,0x02	@ 00101af4 data
.org 0x101af8
	.byte 0x18,0x0d,0x00,0x00	@ 00101af8 data
.org 0x101afc
	movs r3, #0	@ 00101afc 0023
.org 0x101afe
	movs r2, #0	@ 00101afe 0022
.org 0x101b00
	adds r7, r4, #4	@ 00101b00 271d
.org 0x101b02
	movs r6, #7	@ 00101b02 0726
.org 0x101b04
	movs r4, #1	@ 00101b04 0124
.org 0x101b06
	adds r0, r2, #0	@ 00101b06 101c
.org 0x101b08
	adds r0, #69	@ 00101b08 4530
.org 0x101b0a
	asrs r1, r0, #3	@ 00101b0a c110
.org 0x101b0c
	adds r1, r1, r7	@ 00101b0c c919
.org 0x101b0e
	ldrb r1, [r1, #0]	@ 00101b0e 0978
.org 0x101b10
	ands r0, r6	@ 00101b10 3040
.org 0x101b12
	asrs r1, r0	@ 00101b12 0141
.org 0x101b14
	ands r1, r4	@ 00101b14 2140
.org 0x101b16
	cmp r1, #0	@ 00101b16 0029
.org 0x101b18
	beq.n 0x101b20	@ 00101b18 02d0
.org 0x101b1a
	adds r0, r3, #1	@ 00101b1a 581c
.org 0x101b1c
	lsls r0, r0, #24	@ 00101b1c 0006
.org 0x101b1e
	lsrs r3, r0, #24	@ 00101b1e 030e
.org 0x101b20
	adds r0, r2, #1	@ 00101b20 501c
.org 0x101b22
	lsls r0, r0, #24	@ 00101b22 0006
.org 0x101b24
	lsrs r2, r0, #24	@ 00101b24 020e
.org 0x101b26
	cmp r2, #3	@ 00101b26 032a
.org 0x101b28
	bls.n 0x101b06	@ 00101b28 edd9
.org 0x101b2a
	cmp r3, #4	@ 00101b2a 042b
.org 0x101b2c
	bne.n 0x101b4c	@ 00101b2c 0ed1
.org 0x101b2e
	ldr r0, [pc, #20]	@ 00101b2e 0548
.org 0x101b30
	bl 0x10e518	@ 00101b30 0cf0f2fc
.org 0x101b34
	ldr r2, [pc, #16]	@ 00101b34 044a
.org 0x101b36
	ldrb r1, [r2, #13]	@ 00101b36 517b
.org 0x101b38
	movs r0, #2	@ 00101b38 0220
.org 0x101b3a
	orrs r0, r1	@ 00101b3a 0843
.org 0x101b3c
	strb r0, [r2, #13]	@ 00101b3c 5073
.org 0x101b3e
	movs r0, #16	@ 00101b3e 1020
.org 0x101b40
	b.n 0x101b90	@ 00101b40 26e0
.org 0x101b42
	.byte 0x00	@ 00101b42 data
.org 0x101b43
	.byte 0x00	@ 00101b43 data
.org 0x101b44
	.byte 0x18,0x0d,0x00,0x00	@ 00101b44 data
.org 0x101b48
	.byte 0xb0,0xe8,0x02,0x02	@ 00101b48 data
.org 0x101b4c
	ldr r1, [pc, #36]	@ 00101b4c 0949
.org 0x101b4e
	adds r0, r3, r1	@ 00101b4e 5818
.org 0x101b50
	bl 0x10e518	@ 00101b50 0cf0e2fc
.org 0x101b54
	ldrb r0, [r5, #13]	@ 00101b54 687b
.org 0x101b56
	adds r0, #1	@ 00101b56 0130
.org 0x101b58
	strb r0, [r5, #13]	@ 00101b58 6873
.org 0x101b5a
	ldr r3, [pc, #28]	@ 00101b5a 074b
.org 0x101b5c
	ldrh r0, [r3, #2]	@ 00101b5c 5888
.org 0x101b5e
	cmp r0, #0	@ 00101b5e 0028
.org 0x101b60
	bne.n 0x101b92	@ 00101b60 17d1
.org 0x101b62
	ldrh r1, [r3, #0]	@ 00101b62 1988
.org 0x101b64
	movs r0, #2	@ 00101b64 0220
.org 0x101b66
	movs r2, #0	@ 00101b66 0022
.org 0x101b68
	orrs r0, r1	@ 00101b68 0843
.org 0x101b6a
	strh r0, [r3, #0]	@ 00101b6a 1880

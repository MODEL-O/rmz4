@ FUN_08014a54  entry 0x08014a54  size 1372
.thumb
.org 0x14a54
FUN_08014a54:
	push {r4, r5, r6, r7, lr}	@ 00014a54 f0b5
.org 0x14a56
	mov r7, r8	@ 00014a56 4746
.org 0x14a58
	push {r7}	@ 00014a58 80b4
.org 0x14a5a
	adds r7, r0, #0	@ 00014a5a 071c
.org 0x14a5c
	ldr r2, [pc, #108]	@ 00014a5c 1b4a
.org 0x14a5e
	ldr r1, [pc, #112]	@ 00014a5e 1c49
.org 0x14a60
	adds r0, r2, r1	@ 00014a60 5018
.org 0x14a62
	ldrb r1, [r0, #0]	@ 00014a62 0178
.org 0x14a64
	movs r0, #15	@ 00014a64 0f20
.org 0x14a66
	ands r0, r1	@ 00014a66 0840
.org 0x14a68
	adds r6, r2, #0	@ 00014a68 161c
.org 0x14a6a
	cmp r0, #1	@ 00014a6a 0128
.org 0x14a6c
	beq.n 0x14a70	@ 00014a6c 00d0
.org 0x14a6e
	b.n 0x14e04	@ 00014a6e c9e1
.org 0x14a70
	ldr r1, [r7, #0]	@ 00014a70 3968
.org 0x14a72
	movs r0, #225	@ 00014a72 e120
.org 0x14a74
	lsls r0, r0, #13	@ 00014a74 4003
.org 0x14a76
	cmp r1, r0	@ 00014a76 8142
.org 0x14a78
	bgt.n 0x14a7c	@ 00014a78 00dc
.org 0x14a7a
	b.n 0x14c08	@ 00014a7a c5e0
.org 0x14a7c
	ldr r0, [pc, #84]	@ 00014a7c 1548
.org 0x14a7e
	cmp r1, r0	@ 00014a7e 8142
.org 0x14a80
	ble.n 0x14a84	@ 00014a80 00dd
.org 0x14a82
	b.n 0x14c08	@ 00014a82 c1e0
.org 0x14a84
	ldr r2, [pc, #80]	@ 00014a84 144a
.org 0x14a86
	adds r1, r6, r2	@ 00014a86 b118
.org 0x14a88
	ldrh r0, [r1, #0]	@ 00014a88 0888
.org 0x14a8a
	adds r0, #1	@ 00014a8a 0130
.org 0x14a8c
	strh r0, [r1, #0]	@ 00014a8c 0880
.org 0x14a8e
	lsls r0, r0, #16	@ 00014a8e 0004
.org 0x14a90
	lsrs r0, r0, #16	@ 00014a90 000c
.org 0x14a92
	cmp r0, #255	@ 00014a92 ff28
.org 0x14a94
	bhi.n 0x14a98	@ 00014a94 00d8
.org 0x14a96
	b.n 0x14c08	@ 00014a96 b7e0
.org 0x14a98
	movs r0, #0	@ 00014a98 0020
.org 0x14a9a
	strh r0, [r1, #0]	@ 00014a9a 0880
.org 0x14a9c
	movs r6, #0	@ 00014a9c 0026
.org 0x14a9e
	ldr r0, [pc, #60]	@ 00014a9e 0f48
.org 0x14aa0
	ldr r1, [r0, #0]	@ 00014aa0 0168
.org 0x14aa2
	mov ip, r0	@ 00014aa2 8446
.org 0x14aa4
	cmp r1, #0	@ 00014aa4 0029
.org 0x14aa6
	beq.n 0x14b58	@ 00014aa6 57d0
.org 0x14aa8
	mov r8, ip	@ 00014aa8 e046
.org 0x14aaa
	lsls r1, r6, #3	@ 00014aaa f100
.org 0x14aac
	mov r2, ip	@ 00014aac 6246
.org 0x14aae
	adds r0, r1, r2	@ 00014aae 8818
.org 0x14ab0
	ldr r0, [r0, #0]	@ 00014ab0 0068
.org 0x14ab2
	ldr r2, [pc, #44]	@ 00014ab2 0b4a
.org 0x14ab4
	adds r3, r0, r2	@ 00014ab4 8318
.org 0x14ab6
	ldr r0, [r7, #0]	@ 00014ab6 3868
.org 0x14ab8
	subs r2, r0, r3	@ 00014ab8 c21a
.org 0x14aba
	adds r5, r0, #0	@ 00014aba 051c
.org 0x14abc
	adds r4, r1, #0	@ 00014abc 0c1c
.org 0x14abe
	cmp r2, #0	@ 00014abe 002a
.org 0x14ac0
	blt.n 0x14ae8	@ 00014ac0 12db
.org 0x14ac2
	ldr r0, [pc, #32]	@ 00014ac2 0848
.org 0x14ac4
	cmp r2, r0	@ 00014ac4 8242
.org 0x14ac6
	ble.n 0x14af0	@ 00014ac6 13dd
.org 0x14ac8
	b.n 0x14b34	@ 00014ac8 34e0
.org 0x14aca
	.byte 0x00	@ 00014aca data
.org 0x14acb
	.byte 0x00	@ 00014acb data
.org 0x14acc
	.byte 0xb0,0x0a,0x00,0x02	@ 00014acc data
.org 0x14ad0
	.byte 0x10,0xc0,0x02,0x00	@ 00014ad0 data
.org 0x14ad4
	.byte 0xff,0x2f,0x2a,0x00	@ 00014ad4 data
.org 0x14ad8
	.byte 0x32,0xd0,0x02,0x00	@ 00014ad8 data
.org 0x14adc
	.byte 0x2c,0x59,0x83,0x08	@ 00014adc data
.org 0x14ae0
	.byte 0x00,0x88,0xff,0xff	@ 00014ae0 data
.org 0x14ae4
	.byte 0xff,0xef,0x00,0x00	@ 00014ae4 data
.org 0x14ae8
	subs r1, r3, r5	@ 00014ae8 591b
.org 0x14aea
	ldr r0, [pc, #32]	@ 00014aea 0848
.org 0x14aec
	cmp r1, r0	@ 00014aec 8142
.org 0x14aee
	bgt.n 0x14b34	@ 00014aee 21dc
.org 0x14af0
	mov r0, ip	@ 00014af0 6046
.org 0x14af2
	adds r0, #4	@ 00014af2 0430
.org 0x14af4
	adds r0, r4, r0	@ 00014af4 2018
.org 0x14af6
	ldr r0, [r0, #0]	@ 00014af6 0068
.org 0x14af8
	ldr r2, [pc, #20]	@ 00014af8 054a
.org 0x14afa
	adds r1, r0, r2	@ 00014afa 8118
.org 0x14afc
	ldr r0, [r7, #4]	@ 00014afc 7868
.org 0x14afe
	subs r2, r0, r1	@ 00014afe 421a
.org 0x14b00
	cmp r2, #0	@ 00014b00 002a
.org 0x14b02
	blt.n 0x14b18	@ 00014b02 09db
.org 0x14b04
	ldr r0, [pc, #12]	@ 00014b04 0348
.org 0x14b06
	cmp r2, r0	@ 00014b06 8242
.org 0x14b08
	ble.n 0x14b20	@ 00014b08 0add
.org 0x14b0a
	b.n 0x14b34	@ 00014b0a 13e0
.org 0x14b0c
	.byte 0xff,0xef,0x00,0x00	@ 00014b0c data
.org 0x14b10
	.byte 0x00,0xb0,0xff,0xff	@ 00014b10 data
.org 0x14b14
	.byte 0xff,0x4f,0x00,0x00	@ 00014b14 data
.org 0x14b18
	subs r1, r1, r0	@ 00014b18 091a
.org 0x14b1a
	ldr r0, [pc, #20]	@ 00014b1a 0548
.org 0x14b1c
	cmp r1, r0	@ 00014b1c 8142
.org 0x14b1e
	bgt.n 0x14b34	@ 00014b1e 09dc
.org 0x14b20
	mov r1, r8	@ 00014b20 4146
.org 0x14b22
	adds r0, r4, r1	@ 00014b22 6018
.org 0x14b24
	movs r1, #1	@ 00014b24 0121
.org 0x14b26
	movs r2, #0	@ 00014b26 0022
.org 0x14b28
	bl 0xd07a4	@ 00014b28 bbf03cfe
.org 0x14b2c
	b.n 0x14b44	@ 00014b2c 0ae0
.org 0x14b2e
	.byte 0x00	@ 00014b2e data
.org 0x14b2f
	.byte 0x00	@ 00014b2f data
.org 0x14b30
	.byte 0xff,0x4f,0x00,0x00	@ 00014b30 data
.org 0x14b34
	movs r2, #240	@ 00014b34 f022
.org 0x14b36
	lsls r2, r2, #8	@ 00014b36 1202
.org 0x14b38
	adds r0, r5, r2	@ 00014b38 a818
.org 0x14b3a
	mov r2, ip	@ 00014b3a 6246
.org 0x14b3c
	adds r1, r4, r2	@ 00014b3c a118
.org 0x14b3e
	ldr r1, [r1, #0]	@ 00014b3e 0968
.org 0x14b40
	cmp r0, r1	@ 00014b40 8842
.org 0x14b42
	blt.n 0x14b58	@ 00014b42 09db
.org 0x14b44
	adds r0, r6, #1	@ 00014b44 701c
.org 0x14b46
	lsls r0, r0, #24	@ 00014b46 0006
.org 0x14b48
	lsrs r6, r0, #24	@ 00014b48 060e
.org 0x14b4a
	lsls r0, r6, #3	@ 00014b4a f000
.org 0x14b4c
	add r0, r8	@ 00014b4c 4044
.org 0x14b4e
	ldr r0, [r0, #0]	@ 00014b4e 0068
.org 0x14b50
	ldr r1, [pc, #52]	@ 00014b50 0d49
.org 0x14b52
	mov ip, r1	@ 00014b52 8c46
.org 0x14b54
	cmp r0, #0	@ 00014b54 0028
.org 0x14b56
	bne.n 0x14aaa	@ 00014b56 a8d1
.org 0x14b58
	movs r6, #0	@ 00014b58 0026
.org 0x14b5a
	ldr r0, [pc, #48]	@ 00014b5a 0c48
.org 0x14b5c
	ldr r1, [r0, #0]	@ 00014b5c 0168
.org 0x14b5e
	mov ip, r0	@ 00014b5e 8446
.org 0x14b60
	cmp r1, #0	@ 00014b60 0029
.org 0x14b62
	beq.n 0x14c08	@ 00014b62 51d0
.org 0x14b64
	mov r8, ip	@ 00014b64 e046
.org 0x14b66
	lsls r1, r6, #3	@ 00014b66 f100
.org 0x14b68
	mov r2, ip	@ 00014b68 6246
.org 0x14b6a
	adds r0, r1, r2	@ 00014b6a 8818
.org 0x14b6c
	ldr r0, [r0, #0]	@ 00014b6c 0068
.org 0x14b6e
	ldr r2, [pc, #32]	@ 00014b6e 084a
.org 0x14b70
	adds r3, r0, r2	@ 00014b70 8318
.org 0x14b72
	ldr r0, [r7, #0]	@ 00014b72 3868
.org 0x14b74
	subs r2, r0, r3	@ 00014b74 c21a
.org 0x14b76
	adds r5, r0, #0	@ 00014b76 051c
.org 0x14b78
	adds r4, r1, #0	@ 00014b78 0c1c
.org 0x14b7a
	cmp r2, #0	@ 00014b7a 002a
.org 0x14b7c
	blt.n 0x14b98	@ 00014b7c 0cdb
.org 0x14b7e
	ldr r0, [pc, #20]	@ 00014b7e 0548
.org 0x14b80
	cmp r2, r0	@ 00014b80 8242
.org 0x14b82
	ble.n 0x14ba0	@ 00014b82 0ddd
.org 0x14b84
	b.n 0x14be4	@ 00014b84 2ee0
.org 0x14b86
	.byte 0x00	@ 00014b86 data
.org 0x14b87
	.byte 0x00	@ 00014b87 data
.org 0x14b88
	.byte 0x2c,0x59,0x83,0x08	@ 00014b88 data
.org 0x14b8c
	.byte 0xc4,0x59,0x83,0x08	@ 00014b8c data
.org 0x14b90
	.byte 0x00,0x88,0xff,0xff	@ 00014b90 data
.org 0x14b94
	.byte 0xff,0xef,0x00,0x00	@ 00014b94 data
.org 0x14b98
	subs r1, r3, r5	@ 00014b98 591b
.org 0x14b9a
	ldr r0, [pc, #32]	@ 00014b9a 0848
.org 0x14b9c
	cmp r1, r0	@ 00014b9c 8142
.org 0x14b9e
	bgt.n 0x14be4	@ 00014b9e 21dc
.org 0x14ba0
	mov r0, ip	@ 00014ba0 6046
.org 0x14ba2
	adds r0, #4	@ 00014ba2 0430
.org 0x14ba4
	adds r0, r4, r0	@ 00014ba4 2018
.org 0x14ba6
	ldr r0, [r0, #0]	@ 00014ba6 0068
.org 0x14ba8
	ldr r2, [pc, #20]	@ 00014ba8 054a
.org 0x14baa
	adds r1, r0, r2	@ 00014baa 8118
.org 0x14bac
	ldr r0, [r7, #4]	@ 00014bac 7868
.org 0x14bae
	subs r2, r0, r1	@ 00014bae 421a
.org 0x14bb0
	cmp r2, #0	@ 00014bb0 002a
.org 0x14bb2
	blt.n 0x14bc8	@ 00014bb2 09db
.org 0x14bb4
	ldr r0, [pc, #12]	@ 00014bb4 0348
.org 0x14bb6
	cmp r2, r0	@ 00014bb6 8242
.org 0x14bb8
	ble.n 0x14bd0	@ 00014bb8 0add
.org 0x14bba
	b.n 0x14be4	@ 00014bba 13e0
.org 0x14bbc
	.byte 0xff,0xef,0x00,0x00	@ 00014bbc data
.org 0x14bc0
	.byte 0x00,0xb0,0xff,0xff	@ 00014bc0 data
.org 0x14bc4
	.byte 0xff,0x4f,0x00,0x00	@ 00014bc4 data
.org 0x14bc8
	subs r1, r1, r0	@ 00014bc8 091a
.org 0x14bca
	ldr r0, [pc, #20]	@ 00014bca 0548
.org 0x14bcc
	cmp r1, r0	@ 00014bcc 8142
.org 0x14bce
	bgt.n 0x14be4	@ 00014bce 09dc
.org 0x14bd0
	mov r1, r8	@ 00014bd0 4146
.org 0x14bd2
	adds r0, r4, r1	@ 00014bd2 6018
.org 0x14bd4
	movs r1, #0	@ 00014bd4 0021
.org 0x14bd6
	movs r2, #0	@ 00014bd6 0022
.org 0x14bd8
	bl 0xd07a4	@ 00014bd8 bbf0e4fd
.org 0x14bdc
	b.n 0x14bf4	@ 00014bdc 0ae0
.org 0x14bde
	.byte 0x00	@ 00014bde data
.org 0x14bdf
	.byte 0x00	@ 00014bdf data
.org 0x14be0
	.byte 0xff,0x4f,0x00,0x00	@ 00014be0 data
.org 0x14be4
	movs r2, #240	@ 00014be4 f022
.org 0x14be6
	lsls r2, r2, #8	@ 00014be6 1202
.org 0x14be8
	adds r0, r5, r2	@ 00014be8 a818
.org 0x14bea
	mov r2, ip	@ 00014bea 6246
.org 0x14bec
	adds r1, r4, r2	@ 00014bec a118
.org 0x14bee
	ldr r1, [r1, #0]	@ 00014bee 0968
.org 0x14bf0
	cmp r0, r1	@ 00014bf0 8842
.org 0x14bf2
	blt.n 0x14c08	@ 00014bf2 09db
.org 0x14bf4
	adds r0, r6, #1	@ 00014bf4 701c
.org 0x14bf6
	lsls r0, r0, #24	@ 00014bf6 0006
.org 0x14bf8
	lsrs r6, r0, #24	@ 00014bf8 060e
.org 0x14bfa
	lsls r0, r6, #3	@ 00014bfa f000
.org 0x14bfc
	add r0, r8	@ 00014bfc 4044
.org 0x14bfe
	ldr r0, [r0, #0]	@ 00014bfe 0068
.org 0x14c00
	ldr r1, [pc, #112]	@ 00014c00 1c49
.org 0x14c02
	mov ip, r1	@ 00014c02 8c46
.org 0x14c04
	cmp r0, #0	@ 00014c04 0028
.org 0x14c06
	bne.n 0x14b66	@ 00014c06 aed1
.org 0x14c08
	ldr r2, [pc, #108]	@ 00014c08 1b4a
.org 0x14c0a
	ldr r1, [pc, #112]	@ 00014c0a 1c49
.org 0x14c0c
	adds r0, r2, r1	@ 00014c0c 5018
.org 0x14c0e
	ldrb r1, [r0, #0]	@ 00014c0e 0178
.org 0x14c10
	movs r0, #15	@ 00014c10 0f20
.org 0x14c12
	ands r0, r1	@ 00014c12 0840
.org 0x14c14
	adds r6, r2, #0	@ 00014c14 161c
.org 0x14c16
	cmp r0, #1	@ 00014c16 0128
.org 0x14c18
	beq.n 0x14c1c	@ 00014c18 00d0
.org 0x14c1a
	b.n 0x14e04	@ 00014c1a f3e0
.org 0x14c1c
	ldr r1, [r7, #0]	@ 00014c1c 3968
.org 0x14c1e
	ldr r0, [pc, #96]	@ 00014c1e 1848
.org 0x14c20
	cmp r1, r0	@ 00014c20 8142
.org 0x14c22
	ble.n 0x14c3c	@ 00014c22 0bdd
.org 0x14c24
	ldr r0, [pc, #92]	@ 00014c24 1748
.org 0x14c26
	cmp r1, r0	@ 00014c26 8142
.org 0x14c28
	bgt.n 0x14c3c	@ 00014c28 08dc
.org 0x14c2a
	ldr r2, [pc, #92]	@ 00014c2a 174a
.org 0x14c2c
	adds r0, r6, r2	@ 00014c2c b018
.org 0x14c2e
	ldrb r0, [r0, #0]	@ 00014c2e 0078
.org 0x14c30
	cmp r0, #96	@ 00014c30 6028
.org 0x14c32
	bne.n 0x14c3c	@ 00014c32 03d1
.org 0x14c34
	movs r0, #192	@ 00014c34 c020
.org 0x14c36
	lsls r0, r0, #1	@ 00014c36 4000
.org 0x14c38
	bl 0x2b10	@ 00014c38 edf76aff
.org 0x14c3c
	ldr r2, [pc, #56]	@ 00014c3c 0e4a
.org 0x14c3e
	ldr r1, [pc, #60]	@ 00014c3e 0f49
.org 0x14c40
	adds r0, r2, r1	@ 00014c40 5018
.org 0x14c42
	ldrb r1, [r0, #0]	@ 00014c42 0178
.org 0x14c44
	movs r0, #15	@ 00014c44 0f20
.org 0x14c46
	ands r0, r1	@ 00014c46 0840
.org 0x14c48
	adds r6, r2, #0	@ 00014c48 161c
.org 0x14c4a
	cmp r0, #1	@ 00014c4a 0128
.org 0x14c4c
	beq.n 0x14c50	@ 00014c4c 00d0
.org 0x14c4e
	b.n 0x14e04	@ 00014c4e d9e0
.org 0x14c50
	ldr r0, [r7, #0]	@ 00014c50 3868
.org 0x14c52
	ldr r2, [pc, #56]	@ 00014c52 0e4a
.org 0x14c54
	adds r0, r0, r2	@ 00014c54 8018
.org 0x14c56
	ldr r1, [pc, #56]	@ 00014c56 0e49
.org 0x14c58
	cmp r0, r1	@ 00014c58 8842
.org 0x14c5a
	bhi.n 0x14c9c	@ 00014c5a 1fd8
.org 0x14c5c
	ldr r0, [pc, #52]	@ 00014c5c 0d48
.org 0x14c5e
	adds r5, r6, r0	@ 00014c5e 3518
.org 0x14c60
	ldrh r0, [r5, #0]	@ 00014c60 2888
.org 0x14c62
	cmp r0, #0	@ 00014c62 0028
.org 0x14c64
	bne.n 0x14cb0	@ 00014c64 24d1
.org 0x14c66
	ldr r4, [pc, #48]	@ 00014c66 0c4c
.org 0x14c68
	adds r0, r4, #0	@ 00014c68 201c
.org 0x14c6a
	bl 0x2b10	@ 00014c6a edf751ff
.org 0x14c6e
	strh r4, [r5, #0]	@ 00014c6e 2c80
.org 0x14c70
	b.n 0x14cb0	@ 00014c70 1ee0
.org 0x14c72
	.byte 0x00	@ 00014c72 data
.org 0x14c73
	.byte 0x00	@ 00014c73 data
.org 0x14c74
	.byte 0xc4,0x59,0x83,0x08	@ 00014c74 data
.org 0x14c78
	.byte 0xb0,0x0a,0x00,0x02	@ 00014c78 data
.org 0x14c7c
	.byte 0x10,0xc0,0x02,0x00	@ 00014c7c data
.org 0x14c80
	.byte 0xff,0x5f,0x18,0x00	@ 00014c80 data
.org 0x14c84
	.byte 0xff,0x4f,0x19,0x00	@ 00014c84 data
.org 0x14c88
	.byte 0x2f,0xd0,0x02,0x00	@ 00014c88 data
.org 0x14c8c
	.byte 0xff,0xaf,0xe6,0xff	@ 00014c8c data
.org 0x14c90
	.byte 0xfe,0xdf,0x01,0x00	@ 00014c90 data
.org 0x14c94
	.byte 0x34,0xd0,0x02,0x00	@ 00014c94 data
.org 0x14c98
	.byte 0x63,0x01,0x00,0x00	@ 00014c98 data
.org 0x14c9c
	ldr r2, [pc, #92]	@ 00014c9c 174a
.org 0x14c9e
	adds r1, r6, r2	@ 00014c9e b118
.org 0x14ca0
	ldrh r0, [r1, #0]	@ 00014ca0 0888
.org 0x14ca2
	cmp r0, #0	@ 00014ca2 0028
.org 0x14ca4
	beq.n 0x14cb0	@ 00014ca4 04d0
.org 0x14ca6
	movs r0, #0	@ 00014ca6 0020
.org 0x14ca8
	strh r0, [r1, #0]	@ 00014ca8 0880
.org 0x14caa
	ldr r0, [pc, #84]	@ 00014caa 1548
.org 0x14cac
	bl 0x2b5c	@ 00014cac edf756ff
.org 0x14cb0
	ldr r0, [pc, #80]	@ 00014cb0 1448
.org 0x14cb2
	ldr r2, [pc, #84]	@ 00014cb2 154a
.org 0x14cb4
	adds r1, r0, r2	@ 00014cb4 8118
.org 0x14cb6
	ldrb r1, [r1, #0]	@ 00014cb6 0978
.org 0x14cb8
	movs r4, #15	@ 00014cb8 0f24
.org 0x14cba
	ands r4, r1	@ 00014cba 0c40
.org 0x14cbc
	adds r6, r0, #0	@ 00014cbc 061c
.org 0x14cbe
	cmp r4, #1	@ 00014cbe 012c
.org 0x14cc0
	beq.n 0x14cc4	@ 00014cc0 00d0
.org 0x14cc2
	b.n 0x14e04	@ 00014cc2 9fe0
.org 0x14cc4
	ldr r1, [pc, #68]	@ 00014cc4 1149
.org 0x14cc6
	adds r0, r6, r1	@ 00014cc6 7018
.org 0x14cc8
	ldrh r1, [r0, #0]	@ 00014cc8 0188
.org 0x14cca
	lsrs r0, r1, #8	@ 00014cca 080a
.org 0x14ccc
	cmp r0, #9	@ 00014ccc 0928
.org 0x14cce
	bne.n 0x14d14	@ 00014cce 21d1
.org 0x14cd0
	movs r0, #255	@ 00014cd0 ff20
.org 0x14cd2
	ands r0, r1	@ 00014cd2 0840
.org 0x14cd4
	cmp r0, #2	@ 00014cd4 0228
.org 0x14cd6
	bne.n 0x14d14	@ 00014cd6 1dd1
.org 0x14cd8
	ldr r2, [pc, #52]	@ 00014cd8 0d4a
.org 0x14cda
	adds r1, r6, r2	@ 00014cda b118
.org 0x14cdc
	ldrb r3, [r1, #0]	@ 00014cdc 0b78
.org 0x14cde
	ands r4, r3	@ 00014cde 1c40
.org 0x14ce0
	cmp r4, #0	@ 00014ce0 002c
.org 0x14ce2
	bne.n 0x14cf2	@ 00014ce2 06d1
.org 0x14ce4
	movs r0, #1	@ 00014ce4 0120
.org 0x14ce6
	orrs r0, r3	@ 00014ce6 1843
.org 0x14ce8
	strb r0, [r1, #0]	@ 00014ce8 0870
.org 0x14cea
	movs r0, #75	@ 00014cea 4b20
.org 0x14cec
	movs r1, #0	@ 00014cec 0021
.org 0x14cee
	bl 0x249c	@ 00014cee edf7d5fb
.org 0x14cf2
	movs r0, #75	@ 00014cf2 4b20
.org 0x14cf4
	bl 0x25d8	@ 00014cf4 edf770fc
.org 0x14cf8
	b.n 0x14d30	@ 00014cf8 1ae0
.org 0x14cfa
	.byte 0x00	@ 00014cfa data
.org 0x14cfb
	.byte 0x00	@ 00014cfb data
.org 0x14cfc
	.byte 0x34,0xd0,0x02,0x00	@ 00014cfc data
.org 0x14d00
	.byte 0x63,0x01,0x00,0x00	@ 00014d00 data
.org 0x14d04
	.byte 0xb0,0x0a,0x00,0x02	@ 00014d04 data
.org 0x14d08
	.byte 0x10,0xc0,0x02,0x00	@ 00014d08 data
.org 0x14d0c
	.byte 0xd6,0x07,0x00,0x00	@ 00014d0c data
.org 0x14d10
	.byte 0x28,0xd0,0x02,0x00	@ 00014d10 data
.org 0x14d14
	ldr r0, [pc, #84]	@ 00014d14 1548
.org 0x14d16
	ldr r1, [pc, #88]	@ 00014d16 1649
.org 0x14d18
	adds r2, r0, r1	@ 00014d18 4218
.org 0x14d1a
	ldrb r1, [r2, #0]	@ 00014d1a 1178
.org 0x14d1c
	movs r0, #1	@ 00014d1c 0120
.org 0x14d1e
	ands r0, r1	@ 00014d1e 0840
.org 0x14d20
	cmp r0, #0	@ 00014d20 0028
.org 0x14d22
	beq.n 0x14d30	@ 00014d22 05d0
.org 0x14d24
	movs r0, #1	@ 00014d24 0120
.org 0x14d26
	eors r0, r1	@ 00014d26 4840
.org 0x14d28
	strb r0, [r2, #0]	@ 00014d28 1070
.org 0x14d2a
	movs r0, #75	@ 00014d2a 4b20
.org 0x14d2c
	bl 0x2624	@ 00014d2c edf77afc
.org 0x14d30
	ldr r2, [pc, #56]	@ 00014d30 0e4a
.org 0x14d32
	ldr r1, [pc, #64]	@ 00014d32 1049
.org 0x14d34
	adds r0, r2, r1	@ 00014d34 5018
.org 0x14d36
	ldrh r1, [r0, #0]	@ 00014d36 0188
.org 0x14d38
	lsrs r0, r1, #8	@ 00014d38 080a
.org 0x14d3a
	cmp r0, #9	@ 00014d3a 0928
.org 0x14d3c
	bne.n 0x14d78	@ 00014d3c 1cd1
.org 0x14d3e
	movs r0, #255	@ 00014d3e ff20
.org 0x14d40
	ands r0, r1	@ 00014d40 0840
.org 0x14d42
	cmp r0, #1	@ 00014d42 0128
.org 0x14d44
	bne.n 0x14d78	@ 00014d44 18d1
.org 0x14d46
	ldr r0, [pc, #40]	@ 00014d46 0a48
.org 0x14d48
	adds r2, r2, r0	@ 00014d48 1218
.org 0x14d4a
	ldrb r1, [r2, #0]	@ 00014d4a 1178
.org 0x14d4c
	movs r0, #2	@ 00014d4c 0220
.org 0x14d4e
	ands r0, r1	@ 00014d4e 0840
.org 0x14d50
	cmp r0, #0	@ 00014d50 0028
.org 0x14d52
	bne.n 0x14d62	@ 00014d52 06d1
.org 0x14d54
	movs r0, #2	@ 00014d54 0220
.org 0x14d56
	orrs r0, r1	@ 00014d56 0843
.org 0x14d58
	strb r0, [r2, #0]	@ 00014d58 1070
.org 0x14d5a
	movs r0, #76	@ 00014d5a 4c20
.org 0x14d5c
	movs r1, #0	@ 00014d5c 0021
.org 0x14d5e
	bl 0x249c	@ 00014d5e edf79dfb
.org 0x14d62
	movs r0, #76	@ 00014d62 4c20
.org 0x14d64
	bl 0x25d8	@ 00014d64 edf738fc
.org 0x14d68
	b.n 0x14d94	@ 00014d68 14e0
.org 0x14d6a
	.byte 0x00	@ 00014d6a data
.org 0x14d6b
	.byte 0x00	@ 00014d6b data
.org 0x14d6c
	.byte 0xb0,0x0a,0x00,0x02	@ 00014d6c data
.org 0x14d70
	.byte 0x28,0xd0,0x02,0x00	@ 00014d70 data
.org 0x14d74
	.byte 0xd6,0x07,0x00,0x00	@ 00014d74 data
.org 0x14d78
	ldr r0, [pc, #84]	@ 00014d78 1548
.org 0x14d7a
	ldr r1, [pc, #88]	@ 00014d7a 1649
.org 0x14d7c
	adds r2, r0, r1	@ 00014d7c 4218
.org 0x14d7e
	ldrb r1, [r2, #0]	@ 00014d7e 1178
.org 0x14d80
	movs r0, #2	@ 00014d80 0220
.org 0x14d82
	ands r0, r1	@ 00014d82 0840
.org 0x14d84
	cmp r0, #0	@ 00014d84 0028
.org 0x14d86
	beq.n 0x14d94	@ 00014d86 05d0
.org 0x14d88
	movs r0, #2	@ 00014d88 0220
.org 0x14d8a
	eors r0, r1	@ 00014d8a 4840
.org 0x14d8c
	strb r0, [r2, #0]	@ 00014d8c 1070
.org 0x14d8e
	movs r0, #76	@ 00014d8e 4c20
.org 0x14d90
	bl 0x2624	@ 00014d90 edf748fc
.org 0x14d94
	ldr r2, [pc, #56]	@ 00014d94 0e4a
.org 0x14d96
	ldr r1, [pc, #64]	@ 00014d96 1049
.org 0x14d98
	adds r0, r2, r1	@ 00014d98 5018
.org 0x14d9a
	ldrh r1, [r0, #0]	@ 00014d9a 0188
.org 0x14d9c
	lsrs r0, r1, #8	@ 00014d9c 080a
.org 0x14d9e
	cmp r0, #9	@ 00014d9e 0928
.org 0x14da0
	bne.n 0x14ddc	@ 00014da0 1cd1
.org 0x14da2
	movs r0, #255	@ 00014da2 ff20
.org 0x14da4
	ands r0, r1	@ 00014da4 0840
.org 0x14da6
	cmp r0, #0	@ 00014da6 0028
.org 0x14da8
	bne.n 0x14ddc	@ 00014da8 18d1
.org 0x14daa
	ldr r0, [pc, #40]	@ 00014daa 0a48
.org 0x14dac
	adds r2, r2, r0	@ 00014dac 1218
.org 0x14dae
	ldrb r1, [r2, #0]	@ 00014dae 1178
.org 0x14db0
	movs r0, #32	@ 00014db0 2020
.org 0x14db2
	ands r0, r1	@ 00014db2 0840
.org 0x14db4
	cmp r0, #0	@ 00014db4 0028
.org 0x14db6
	bne.n 0x14dc6	@ 00014db6 06d1
.org 0x14db8
	movs r0, #32	@ 00014db8 2020
.org 0x14dba
	orrs r0, r1	@ 00014dba 0843
.org 0x14dbc
	strb r0, [r2, #0]	@ 00014dbc 1070
.org 0x14dbe
	movs r0, #77	@ 00014dbe 4d20
.org 0x14dc0
	movs r1, #0	@ 00014dc0 0021
.org 0x14dc2
	bl 0x249c	@ 00014dc2 edf76bfb
.org 0x14dc6
	movs r0, #77	@ 00014dc6 4d20
.org 0x14dc8
	bl 0x25d8	@ 00014dc8 edf706fc
.org 0x14dcc
	b.n 0x14e60	@ 00014dcc 48e0
.org 0x14dce
	.byte 0x00	@ 00014dce data
.org 0x14dcf
	.byte 0x00	@ 00014dcf data
.org 0x14dd0
	.byte 0xb0,0x0a,0x00,0x02	@ 00014dd0 data
.org 0x14dd4
	.byte 0x28,0xd0,0x02,0x00	@ 00014dd4 data
.org 0x14dd8
	.byte 0xd4,0x07,0x00,0x00	@ 00014dd8 data
.org 0x14ddc
	ldr r0, [pc, #28]	@ 00014ddc 0748
.org 0x14dde
	ldr r1, [pc, #32]	@ 00014dde 0849
.org 0x14de0
	adds r2, r0, r1	@ 00014de0 4218
.org 0x14de2
	ldrb r1, [r2, #0]	@ 00014de2 1178
.org 0x14de4
	movs r0, #32	@ 00014de4 2020
.org 0x14de6
	ands r0, r1	@ 00014de6 0840
.org 0x14de8
	cmp r0, #0	@ 00014de8 0028
.org 0x14dea
	beq.n 0x14e60	@ 00014dea 39d0
.org 0x14dec
	movs r0, #32	@ 00014dec 2020
.org 0x14dee
	eors r0, r1	@ 00014dee 4840
.org 0x14df0
	strb r0, [r2, #0]	@ 00014df0 1070
.org 0x14df2
	movs r0, #77	@ 00014df2 4d20
.org 0x14df4
	bl 0x2624	@ 00014df4 edf716fc
.org 0x14df8
	b.n 0x14e60	@ 00014df8 32e0
.org 0x14dfa
	.byte 0x00	@ 00014dfa data
.org 0x14dfb
	.byte 0x00	@ 00014dfb data
.org 0x14dfc
	.byte 0xb0,0x0a,0x00,0x02	@ 00014dfc data
.org 0x14e00
	.byte 0x28,0xd0,0x02,0x00	@ 00014e00 data
.org 0x14e04
	ldr r2, [pc, #52]	@ 00014e04 0d4a
.org 0x14e06
	adds r0, r6, r2	@ 00014e06 b018
.org 0x14e08
	ldrh r1, [r0, #0]	@ 00014e08 0188
.org 0x14e0a
	lsrs r0, r1, #8	@ 00014e0a 080a
.org 0x14e0c
	cmp r0, #9	@ 00014e0c 0928
.org 0x14e0e
	bne.n 0x14e44	@ 00014e0e 19d1
.org 0x14e10
	movs r0, #255	@ 00014e10 ff20
.org 0x14e12
	ands r0, r1	@ 00014e12 0840
.org 0x14e14
	cmp r0, #0	@ 00014e14 0028
.org 0x14e16
	bne.n 0x14e44	@ 00014e16 15d1
.org 0x14e18
	ldr r0, [pc, #36]	@ 00014e18 0948
.org 0x14e1a
	adds r1, r6, r0	@ 00014e1a 3118
.org 0x14e1c
	ldrb r3, [r1, #0]	@ 00014e1c 0b78
.org 0x14e1e
	movs r0, #32	@ 00014e1e 2020
.org 0x14e20
	ands r0, r3	@ 00014e20 1840
.org 0x14e22
	cmp r0, #0	@ 00014e22 0028
.org 0x14e24
	bne.n 0x14e34	@ 00014e24 06d1
.org 0x14e26
	movs r0, #32	@ 00014e26 2020
.org 0x14e28
	orrs r0, r3	@ 00014e28 1843
.org 0x14e2a
	strb r0, [r1, #0]	@ 00014e2a 0870
.org 0x14e2c
	movs r0, #182	@ 00014e2c b620
.org 0x14e2e
	movs r1, #0	@ 00014e2e 0021
.org 0x14e30
	bl 0x249c	@ 00014e30 edf734fb
.org 0x14e34
	movs r0, #182	@ 00014e34 b620
.org 0x14e36
	bl 0x25d8	@ 00014e36 edf7cffb
.org 0x14e3a
	b.n 0x14e60	@ 00014e3a 11e0
.org 0x14e3c
	.byte 0xd4,0x07,0x00,0x00	@ 00014e3c data
.org 0x14e40
	.byte 0x28,0xd0,0x02,0x00	@ 00014e40 data
.org 0x14e44
	ldr r0, [pc, #84]	@ 00014e44 1548
.org 0x14e46
	ldr r1, [pc, #88]	@ 00014e46 1649
.org 0x14e48
	adds r2, r0, r1	@ 00014e48 4218
.org 0x14e4a
	ldrb r1, [r2, #0]	@ 00014e4a 1178
.org 0x14e4c
	movs r0, #32	@ 00014e4c 2020
.org 0x14e4e
	ands r0, r1	@ 00014e4e 0840
.org 0x14e50
	cmp r0, #0	@ 00014e50 0028
.org 0x14e52
	beq.n 0x14e60	@ 00014e52 05d0
.org 0x14e54
	movs r0, #32	@ 00014e54 2020
.org 0x14e56
	eors r0, r1	@ 00014e56 4840
.org 0x14e58
	strb r0, [r2, #0]	@ 00014e58 1070
.org 0x14e5a
	movs r0, #182	@ 00014e5a b620
.org 0x14e5c
	bl 0x2624	@ 00014e5c edf7e2fb
.org 0x14e60
	ldr r2, [pc, #56]	@ 00014e60 0e4a
.org 0x14e62
	ldr r1, [pc, #64]	@ 00014e62 1049
.org 0x14e64
	adds r0, r2, r1	@ 00014e64 5018
.org 0x14e66
	ldrh r1, [r0, #0]	@ 00014e66 0188
.org 0x14e68
	lsrs r0, r1, #8	@ 00014e68 080a
.org 0x14e6a
	cmp r0, #9	@ 00014e6a 0928
.org 0x14e6c
	bne.n 0x14ea8	@ 00014e6c 1cd1
.org 0x14e6e
	movs r0, #255	@ 00014e6e ff20
.org 0x14e70
	ands r0, r1	@ 00014e70 0840
.org 0x14e72
	cmp r0, #0	@ 00014e72 0028
.org 0x14e74
	bne.n 0x14ea8	@ 00014e74 18d1
.org 0x14e76
	ldr r0, [pc, #40]	@ 00014e76 0a48
.org 0x14e78
	adds r2, r2, r0	@ 00014e78 1218
.org 0x14e7a
	ldrb r1, [r2, #0]	@ 00014e7a 1178
.org 0x14e7c
	movs r0, #4	@ 00014e7c 0420
.org 0x14e7e
	ands r0, r1	@ 00014e7e 0840
.org 0x14e80
	cmp r0, #0	@ 00014e80 0028
.org 0x14e82
	bne.n 0x14e92	@ 00014e82 06d1
.org 0x14e84
	movs r0, #4	@ 00014e84 0420
.org 0x14e86
	orrs r0, r1	@ 00014e86 0843
.org 0x14e88
	strb r0, [r2, #0]	@ 00014e88 1070
.org 0x14e8a
	movs r0, #78	@ 00014e8a 4e20
.org 0x14e8c
	movs r1, #0	@ 00014e8c 0021
.org 0x14e8e
	bl 0x249c	@ 00014e8e edf705fb
.org 0x14e92
	movs r0, #78	@ 00014e92 4e20
.org 0x14e94
	bl 0x25d8	@ 00014e94 edf7a0fb
.org 0x14e98
	b.n 0x14ec4	@ 00014e98 14e0
.org 0x14e9a
	.byte 0x00	@ 00014e9a data
.org 0x14e9b
	.byte 0x00	@ 00014e9b data
.org 0x14e9c
	.byte 0xb0,0x0a,0x00,0x02	@ 00014e9c data
.org 0x14ea0
	.byte 0x28,0xd0,0x02,0x00	@ 00014ea0 data
.org 0x14ea4
	.byte 0xd4,0x07,0x00,0x00	@ 00014ea4 data
.org 0x14ea8
	ldr r0, [pc, #88]	@ 00014ea8 1648
.org 0x14eaa
	ldr r1, [pc, #92]	@ 00014eaa 1749
.org 0x14eac
	adds r2, r0, r1	@ 00014eac 4218
.org 0x14eae
	ldrb r1, [r2, #0]	@ 00014eae 1178
.org 0x14eb0
	movs r0, #4	@ 00014eb0 0420
.org 0x14eb2
	ands r0, r1	@ 00014eb2 0840
.org 0x14eb4
	cmp r0, #0	@ 00014eb4 0028
.org 0x14eb6
	beq.n 0x14ec4	@ 00014eb6 05d0
.org 0x14eb8
	movs r0, #4	@ 00014eb8 0420
.org 0x14eba
	eors r0, r1	@ 00014eba 4840
.org 0x14ebc
	strb r0, [r2, #0]	@ 00014ebc 1070
.org 0x14ebe
	movs r0, #78	@ 00014ebe 4e20
.org 0x14ec0
	bl 0x2624	@ 00014ec0 edf7b0fb
.org 0x14ec4
	ldr r2, [pc, #60]	@ 00014ec4 0f4a
.org 0x14ec6
	ldr r1, [pc, #68]	@ 00014ec6 1149
.org 0x14ec8
	adds r0, r2, r1	@ 00014ec8 5018
.org 0x14eca
	ldrh r1, [r0, #0]	@ 00014eca 0188
.org 0x14ecc
	lsrs r0, r1, #8	@ 00014ecc 080a
.org 0x14ece
	cmp r0, #9	@ 00014ece 0928
.org 0x14ed0
	bne.n 0x14f10	@ 00014ed0 1ed1
.org 0x14ed2
	movs r0, #255	@ 00014ed2 ff20
.org 0x14ed4
	ands r0, r1	@ 00014ed4 0840
.org 0x14ed6
	cmp r0, #3	@ 00014ed6 0328
.org 0x14ed8
	beq.n 0x14ede	@ 00014ed8 01d0
.org 0x14eda
	cmp r0, #4	@ 00014eda 0428
.org 0x14edc
	bne.n 0x14f10	@ 00014edc 18d1
.org 0x14ede
	ldr r0, [pc, #40]	@ 00014ede 0a48
.org 0x14ee0
	adds r2, r2, r0	@ 00014ee0 1218
.org 0x14ee2
	ldrb r1, [r2, #0]	@ 00014ee2 1178
.org 0x14ee4
	movs r0, #8	@ 00014ee4 0820
.org 0x14ee6
	ands r0, r1	@ 00014ee6 0840
.org 0x14ee8
	cmp r0, #0	@ 00014ee8 0028
.org 0x14eea
	bne.n 0x14efa	@ 00014eea 06d1
.org 0x14eec
	movs r0, #8	@ 00014eec 0820
.org 0x14eee
	orrs r0, r1	@ 00014eee 0843
.org 0x14ef0
	strb r0, [r2, #0]	@ 00014ef0 1070
.org 0x14ef2
	movs r0, #79	@ 00014ef2 4f20
.org 0x14ef4
	movs r1, #0	@ 00014ef4 0021
.org 0x14ef6
	bl 0x249c	@ 00014ef6 edf7d1fa
.org 0x14efa
	movs r0, #79	@ 00014efa 4f20
.org 0x14efc
	bl 0x25d8	@ 00014efc edf76cfb
.org 0x14f00
	b.n 0x14f2c	@ 00014f00 14e0
.org 0x14f02
	.byte 0x00	@ 00014f02 data
.org 0x14f03
	.byte 0x00	@ 00014f03 data
.org 0x14f04
	.byte 0xb0,0x0a,0x00,0x02	@ 00014f04 data
.org 0x14f08
	.byte 0x28,0xd0,0x02,0x00	@ 00014f08 data
.org 0x14f0c
	.byte 0xd6,0x07,0x00,0x00	@ 00014f0c data
.org 0x14f10
	ldr r0, [pc, #84]	@ 00014f10 1548
.org 0x14f12
	ldr r1, [pc, #88]	@ 00014f12 1649
.org 0x14f14
	adds r2, r0, r1	@ 00014f14 4218
.org 0x14f16
	ldrb r1, [r2, #0]	@ 00014f16 1178
.org 0x14f18
	movs r0, #8	@ 00014f18 0820
.org 0x14f1a
	ands r0, r1	@ 00014f1a 0840
.org 0x14f1c
	cmp r0, #0	@ 00014f1c 0028
.org 0x14f1e
	beq.n 0x14f2c	@ 00014f1e 05d0
.org 0x14f20
	movs r0, #8	@ 00014f20 0820
.org 0x14f22
	eors r0, r1	@ 00014f22 4840
.org 0x14f24
	strb r0, [r2, #0]	@ 00014f24 1070
.org 0x14f26
	movs r0, #79	@ 00014f26 4f20
.org 0x14f28
	bl 0x2624	@ 00014f28 edf77cfb
.org 0x14f2c
	ldr r2, [pc, #56]	@ 00014f2c 0e4a
.org 0x14f2e
	ldr r1, [pc, #64]	@ 00014f2e 1049
.org 0x14f30
	adds r0, r2, r1	@ 00014f30 5018
.org 0x14f32
	ldrh r1, [r0, #0]	@ 00014f32 0188
.org 0x14f34
	lsrs r0, r1, #8	@ 00014f34 080a
.org 0x14f36
	cmp r0, #9	@ 00014f36 0928
.org 0x14f38
	bne.n 0x14f74	@ 00014f38 1cd1
.org 0x14f3a
	movs r0, #255	@ 00014f3a ff20
.org 0x14f3c
	ands r0, r1	@ 00014f3c 0840
.org 0x14f3e
	cmp r0, #3	@ 00014f3e 0328
.org 0x14f40
	bne.n 0x14f74	@ 00014f40 18d1
.org 0x14f42
	ldr r0, [pc, #40]	@ 00014f42 0a48
.org 0x14f44
	adds r2, r2, r0	@ 00014f44 1218
.org 0x14f46
	ldrb r1, [r2, #0]	@ 00014f46 1178
.org 0x14f48
	movs r0, #16	@ 00014f48 1020
.org 0x14f4a
	ands r0, r1	@ 00014f4a 0840
.org 0x14f4c
	cmp r0, #0	@ 00014f4c 0028
.org 0x14f4e
	bne.n 0x14f5e	@ 00014f4e 06d1
.org 0x14f50
	movs r0, #16	@ 00014f50 1020
.org 0x14f52
	orrs r0, r1	@ 00014f52 0843
.org 0x14f54
	strb r0, [r2, #0]	@ 00014f54 1070
.org 0x14f56
	movs r0, #80	@ 00014f56 5020
.org 0x14f58
	movs r1, #0	@ 00014f58 0021
.org 0x14f5a
	bl 0x249c	@ 00014f5a edf79ffa
.org 0x14f5e
	movs r0, #80	@ 00014f5e 5020
.org 0x14f60
	bl 0x25d8	@ 00014f60 edf73afb
.org 0x14f64
	b.n 0x14f90	@ 00014f64 14e0
.org 0x14f66
	.byte 0x00	@ 00014f66 data
.org 0x14f67
	.byte 0x00	@ 00014f67 data
.org 0x14f68
	.byte 0xb0,0x0a,0x00,0x02	@ 00014f68 data
.org 0x14f6c
	.byte 0x28,0xd0,0x02,0x00	@ 00014f6c data
.org 0x14f70
	.byte 0xd6,0x07,0x00,0x00	@ 00014f70 data
.org 0x14f74
	ldr r0, [pc, #92]	@ 00014f74 1748
.org 0x14f76
	ldr r1, [pc, #96]	@ 00014f76 1849
.org 0x14f78
	adds r2, r0, r1	@ 00014f78 4218
.org 0x14f7a
	ldrb r1, [r2, #0]	@ 00014f7a 1178
.org 0x14f7c
	movs r0, #16	@ 00014f7c 1020
.org 0x14f7e
	ands r0, r1	@ 00014f7e 0840
.org 0x14f80
	cmp r0, #0	@ 00014f80 0028
.org 0x14f82
	beq.n 0x14f90	@ 00014f82 05d0
.org 0x14f84
	movs r0, #16	@ 00014f84 1020
.org 0x14f86
	eors r0, r1	@ 00014f86 4840
.org 0x14f88
	strb r0, [r2, #0]	@ 00014f88 1070
.org 0x14f8a
	movs r0, #80	@ 00014f8a 5020
.org 0x14f8c
	bl 0x2624	@ 00014f8c edf74afb
.org 0x14f90
	ldr r0, [pc, #64]	@ 00014f90 1048
.org 0x14f92
	ldr r2, [pc, #72]	@ 00014f92 124a
.org 0x14f94
	adds r1, r0, r2	@ 00014f94 8118
.org 0x14f96
	ldrb r1, [r1, #0]	@ 00014f96 0978
.org 0x14f98
	movs r5, #15	@ 00014f98 0f25
.org 0x14f9a
	adds r3, r5, #0	@ 00014f9a 2b1c
.org 0x14f9c
	ands r3, r1	@ 00014f9c 0b40
.org 0x14f9e
	adds r6, r0, #0	@ 00014f9e 061c
.org 0x14fa0
	cmp r3, #1	@ 00014fa0 012b
.org 0x14fa2
	beq.n 0x14fa6	@ 00014fa2 00d0
.org 0x14fa4
	b.n 0x150aa	@ 00014fa4 81e0
.org 0x14fa6
	ldr r1, [pc, #56]	@ 00014fa6 0e49
.org 0x14fa8
	adds r0, r6, r1	@ 00014fa8 7018
.org 0x14faa
	ldrh r1, [r0, #0]	@ 00014faa 0188
.org 0x14fac
	lsrs r0, r1, #8	@ 00014fac 080a
.org 0x14fae
	cmp r0, #9	@ 00014fae 0928

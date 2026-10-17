@ FUN_080c69a4  entry 0x080c69a4  size 698
.thumb
.org 0xc69a4
FUN_080c69a4:
	push {r4, r5, r6, r7, lr}	@ 000c69a4 f0b5
.org 0xc69a6
	mov r7, r8	@ 000c69a6 4746
.org 0xc69a8
	push {r7}	@ 000c69a8 80b4
.org 0xc69aa
	adds r4, r0, #0	@ 000c69aa 041c
.org 0xc69ac
	ldr r0, [r4, #40]	@ 000c69ac a06a
.org 0xc69ae
	mov r8, r0	@ 000c69ae 8046
.org 0xc69b0
	ldr r0, [pc, #36]	@ 000c69b0 0948
.org 0xc69b2
	ldr r5, [r0, #0]	@ 000c69b2 0568
.org 0xc69b4
	adds r0, r4, #0	@ 000c69b4 201c
.org 0xc69b6
	bl 0x1cff0	@ 000c69b6 56f71bfb
.org 0xc69ba
	ldrb r0, [r4, #13]	@ 000c69ba 607b
.org 0xc69bc
	cmp r0, #1	@ 000c69bc 0128
.org 0xc69be
	bhi.n 0xc6a40	@ 000c69be 3fd8
.org 0xc69c0
	mov r1, r8	@ 000c69c0 4146
.org 0xc69c2
	ldrb r0, [r1, #10]	@ 000c69c2 887a
.org 0xc69c4
	lsrs r2, r0, #4	@ 000c69c4 0209
.org 0xc69c6
	movs r0, #1	@ 000c69c6 0120
.org 0xc69c8
	ands r2, r0	@ 000c69c8 0240
.org 0xc69ca
	cmp r2, #0	@ 000c69ca 002a
.org 0xc69cc
	beq.n 0xc69dc	@ 000c69cc 06d0
.org 0xc69ce
	ldrb r1, [r4, #10]	@ 000c69ce a17a
.org 0xc69d0
	movs r0, #16	@ 000c69d0 1020
.org 0xc69d2
	orrs r0, r1	@ 000c69d2 0843
.org 0xc69d4
	b.n 0xc69e2	@ 000c69d4 05e0
.org 0xc69d6
	.byte 0x00	@ 000c69d6 data
.org 0xc69d7
	.byte 0x00	@ 000c69d7 data
.org 0xc69d8
	.byte 0xf0,0xdb,0x02,0x02	@ 000c69d8 data
.org 0xc69dc
	ldrb r1, [r4, #10]	@ 000c69dc a17a
.org 0xc69de
	movs r0, #239	@ 000c69de ef20
.org 0xc69e0
	ands r0, r1	@ 000c69e0 0840
.org 0xc69e2
	strb r0, [r4, #10]	@ 000c69e2 a072
.org 0xc69e4
	adds r1, r2, #0	@ 000c69e4 111c
.org 0xc69e6
	adds r0, r4, #0	@ 000c69e6 201c
.org 0xc69e8
	adds r0, #76	@ 000c69e8 4c30
.org 0xc69ea
	strb r1, [r0, #0]	@ 000c69ea 0170
.org 0xc69ec
	adds r3, r4, #0	@ 000c69ec 231c
.org 0xc69ee
	adds r3, #74	@ 000c69ee 4a33
.org 0xc69f0
	lsls r1, r1, #4	@ 000c69f0 0901
.org 0xc69f2
	ldrb r2, [r3, #0]	@ 000c69f2 1a78
.org 0xc69f4
	movs r0, #17	@ 000c69f4 1120
.org 0xc69f6
	negs r0, r0	@ 000c69f6 4042
.org 0xc69f8
	ands r0, r2	@ 000c69f8 1040
.org 0xc69fa
	orrs r0, r1	@ 000c69fa 0843
.org 0xc69fc
	strb r0, [r3, #0]	@ 000c69fc 1870
.org 0xc69fe
	ldrb r1, [r4, #10]	@ 000c69fe a17a
.org 0xc6a00
	movs r0, #16	@ 000c6a00 1020
.org 0xc6a02
	ands r0, r1	@ 000c6a02 0840
.org 0xc6a04
	cmp r0, #0	@ 000c6a04 0028
.org 0xc6a06
	beq.n 0xc6a14	@ 000c6a06 05d0
.org 0xc6a08
	mov r2, r8	@ 000c6a08 4246
.org 0xc6a0a
	ldr r0, [r2, #84]	@ 000c6a0a 506d
.org 0xc6a0c
	movs r6, #136	@ 000c6a0c 8826
.org 0xc6a0e
	lsls r6, r6, #5	@ 000c6a0e 7601
.org 0xc6a10
	adds r0, r0, r6	@ 000c6a10 8019
.org 0xc6a12
	b.n 0xc6a1c	@ 000c6a12 03e0
.org 0xc6a14
	mov r1, r8	@ 000c6a14 4146
.org 0xc6a16
	ldr r0, [r1, #84]	@ 000c6a16 486d
.org 0xc6a18
	ldr r2, [pc, #28]	@ 000c6a18 074a
.org 0xc6a1a
	adds r0, r0, r2	@ 000c6a1a 8018
.org 0xc6a1c
	str r0, [r4, #84]	@ 000c6a1c 6065
.org 0xc6a1e
	mov r6, r8	@ 000c6a1e 4646
.org 0xc6a20
	ldr r0, [r6, #88]	@ 000c6a20 b06d
.org 0xc6a22
	ldr r1, [pc, #24]	@ 000c6a22 0649
.org 0xc6a24
	adds r0, r0, r1	@ 000c6a24 4018
.org 0xc6a26
	str r0, [r4, #88]	@ 000c6a26 a065
.org 0xc6a28
	ldrb r0, [r6, #13]	@ 000c6a28 707b
.org 0xc6a2a
	subs r0, #14	@ 000c6a2a 0e38
.org 0xc6a2c
	lsls r0, r0, #24	@ 000c6a2c 0006
.org 0xc6a2e
	lsrs r0, r0, #24	@ 000c6a2e 000e
.org 0xc6a30
	cmp r0, #4	@ 000c6a30 0428
.org 0xc6a32
	bls.n 0xc6a94	@ 000c6a32 2fd9
.org 0xc6a34
	b.n 0xc6a52	@ 000c6a34 0de0
.org 0xc6a36
	.byte 0x00	@ 000c6a36 data
.org 0xc6a37
	.byte 0x00	@ 000c6a37 data
.org 0xc6a38
	.byte 0x00,0xef,0xff,0xff	@ 000c6a38 data
.org 0xc6a3c
	.byte 0x00,0xeb,0xff,0xff	@ 000c6a3c data
.org 0xc6a40
	ldr r0, [pc, #72]	@ 000c6a40 1248
.org 0xc6a42
	adds r1, r4, #0	@ 000c6a42 211c
.org 0xc6a44
	adds r1, #84	@ 000c6a44 5431
.org 0xc6a46
	bl 0x1fb14	@ 000c6a46 59f765f8
.org 0xc6a4a
	movs r1, #192	@ 000c6a4a c021
.org 0xc6a4c
	lsls r1, r1, #6	@ 000c6a4c 8901
.org 0xc6a4e
	cmp r0, r1	@ 000c6a4e 8842
.org 0xc6a50
	bls.n 0xc6a94	@ 000c6a50 20d9
.org 0xc6a52
	ldrb r1, [r4, #10]	@ 000c6a52 a17a
.org 0xc6a54
	movs r0, #254	@ 000c6a54 fe20
.org 0xc6a56
	ands r0, r1	@ 000c6a56 0840
.org 0xc6a58
	movs r2, #0	@ 000c6a58 0022
.org 0xc6a5a
	movs r1, #253	@ 000c6a5a fd21
.org 0xc6a5c
	ands r0, r1	@ 000c6a5c 0840
.org 0xc6a5e
	strb r0, [r4, #10]	@ 000c6a5e a072
.org 0xc6a60
	adds r0, r4, #0	@ 000c6a60 201c
.org 0xc6a62
	adds r0, #140	@ 000c6a62 8c30
.org 0xc6a64
	str r2, [r0, #0]	@ 000c6a64 0260
.org 0xc6a66
	adds r0, #4	@ 000c6a66 0430
.org 0xc6a68
	str r2, [r0, #0]	@ 000c6a68 0260
.org 0xc6a6a
	adds r0, #4	@ 000c6a6a 0430
.org 0xc6a6c
	strb r2, [r0, #0]	@ 000c6a6c 0270
.org 0xc6a6e
	ldrb r1, [r4, #10]	@ 000c6a6e a17a
.org 0xc6a70
	movs r0, #251	@ 000c6a70 fb20
.org 0xc6a72
	ands r0, r1	@ 000c6a72 0840
.org 0xc6a74
	strb r0, [r4, #10]	@ 000c6a74 a072
.org 0xc6a76
	ldr r1, [pc, #24]	@ 000c6a76 0649
.org 0xc6a78
	ldrb r0, [r4, #9]	@ 000c6a78 607a
.org 0xc6a7a
	lsls r0, r0, #2	@ 000c6a7a 8000
.org 0xc6a7c
	adds r0, r0, r1	@ 000c6a7c 4018
.org 0xc6a7e
	movs r1, #3	@ 000c6a7e 0321
.org 0xc6a80
	str r1, [r4, #12]	@ 000c6a80 e160
.org 0xc6a82
	ldr r0, [r0, #0]	@ 000c6a82 0068
.org 0xc6a84
	ldr r0, [r0, #12]	@ 000c6a84 c068
.org 0xc6a86
	str r0, [r4, #20]	@ 000c6a86 6061
.org 0xc6a88
	b.n 0xc6ca6	@ 000c6a88 0de1
.org 0xc6a8a
	.byte 0x00	@ 000c6a8a data
.org 0xc6a8b
	.byte 0x00	@ 000c6a8b data
.org 0xc6a8c
	.byte 0xf8,0xe9,0x02,0x02	@ 000c6a8c data
.org 0xc6a90
	.byte 0xf4,0x49,0x86,0x08	@ 000c6a90 data
.org 0xc6a94
	ldrb r2, [r4, #13]	@ 000c6a94 627b
.org 0xc6a96
	cmp r2, #1	@ 000c6a96 012a
.org 0xc6a98
	beq.n 0xc6aa8	@ 000c6a98 06d0
.org 0xc6a9a
	cmp r2, #1	@ 000c6a9a 012a
.org 0xc6a9c
	bgt.n 0xc6aa0	@ 000c6a9c 00dc
.org 0xc6a9e
	b.n 0xc6ca6	@ 000c6a9e 02e1
.org 0xc6aa0
	cmp r2, #2	@ 000c6aa0 022a
.org 0xc6aa2
	bne.n 0xc6aa6	@ 000c6aa2 00d1
.org 0xc6aa4
	b.n 0xc6c10	@ 000c6aa4 b4e0
.org 0xc6aa6
	b.n 0xc6ca6	@ 000c6aa6 fee0
.org 0xc6aa8
	cmp r5, #0	@ 000c6aa8 002d
.org 0xc6aaa
	bne.n 0xc6aae	@ 000c6aaa 00d1
.org 0xc6aac
	b.n 0xc6bd0	@ 000c6aac 90e0
.org 0xc6aae
	ldrb r1, [r4, #10]	@ 000c6aae a17a
.org 0xc6ab0
	movs r7, #16	@ 000c6ab0 1027
.org 0xc6ab2
	adds r0, r7, #0	@ 000c6ab2 381c
.org 0xc6ab4
	ands r0, r1	@ 000c6ab4 0840
.org 0xc6ab6
	lsls r0, r0, #24	@ 000c6ab6 0006
.org 0xc6ab8
	lsrs r6, r0, #24	@ 000c6ab8 060e
.org 0xc6aba
	cmp r6, #0	@ 000c6aba 002e
.org 0xc6abc
	beq.n 0xc6b00	@ 000c6abc 20d0
.org 0xc6abe
	ldr r0, [r4, #84]	@ 000c6abe 606d
.org 0xc6ac0
	movs r6, #196	@ 000c6ac0 c426
.org 0xc6ac2
	lsls r6, r6, #6	@ 000c6ac2 b601
.org 0xc6ac4
	adds r3, r0, r6	@ 000c6ac4 8319
.org 0xc6ac6
	ldr r0, [pc, #44]	@ 000c6ac6 0b48
.org 0xc6ac8
	ldr r0, [r0, #56]	@ 000c6ac8 806b
.org 0xc6aca
	ldr r1, [pc, #44]	@ 000c6aca 0b49
.org 0xc6acc
	adds r0, r0, r1	@ 000c6acc 4018
.org 0xc6ace
	cmp r3, r0	@ 000c6ace 8342
.org 0xc6ad0
	ble.n 0xc6ad4	@ 000c6ad0 00dd
.org 0xc6ad2
	adds r3, r0, #0	@ 000c6ad2 031c
.org 0xc6ad4
	ldrb r1, [r5, #10]	@ 000c6ad4 a97a
.org 0xc6ad6
	adds r0, r7, #0	@ 000c6ad6 381c
.org 0xc6ad8
	ands r0, r1	@ 000c6ad8 0840
.org 0xc6ada
	lsls r0, r0, #24	@ 000c6ada 0006
.org 0xc6adc
	lsrs r0, r0, #24	@ 000c6adc 000e
.org 0xc6ade
	cmp r0, #0	@ 000c6ade 0028
.org 0xc6ae0
	bne.n 0xc6b40	@ 000c6ae0 2ed1
.org 0xc6ae2
	ldr r6, [pc, #24]	@ 000c6ae2 064e
.org 0xc6ae4
	adds r1, r5, r6	@ 000c6ae4 a919
.org 0xc6ae6
	strb r2, [r1, #0]	@ 000c6ae6 0a70
.org 0xc6ae8
	movs r2, #185	@ 000c6ae8 b922
.org 0xc6aea
	lsls r2, r2, #1	@ 000c6aea 5200
.org 0xc6aec
	adds r1, r5, r2	@ 000c6aec a918
.org 0xc6aee
	strb r0, [r1, #0]	@ 000c6aee 0870
.org 0xc6af0
	b.n 0xc6b4e	@ 000c6af0 2de0
.org 0xc6af2
	.byte 0x00	@ 000c6af2 data
.org 0xc6af3
	.byte 0x00	@ 000c6af3 data
.org 0xc6af4
	.byte 0xf8,0xe9,0x02,0x02	@ 000c6af4 data
.org 0xc6af8
	.byte 0xff,0x6d,0x00,0x00	@ 000c6af8 data
.org 0xc6afc
	.byte 0x71,0x01,0x00,0x00	@ 000c6afc data
.org 0xc6b00
	ldr r0, [r4, #84]	@ 000c6b00 606d
.org 0xc6b02
	ldr r1, [pc, #44]	@ 000c6b02 0b49
.org 0xc6b04
	adds r3, r0, r1	@ 000c6b04 4318
.org 0xc6b06
	ldr r0, [pc, #44]	@ 000c6b06 0b48
.org 0xc6b08
	ldr r0, [r0, #56]	@ 000c6b08 806b
.org 0xc6b0a
	ldr r1, [pc, #44]	@ 000c6b0a 0b49
.org 0xc6b0c
	adds r0, r0, r1	@ 000c6b0c 4018
.org 0xc6b0e
	cmp r3, r0	@ 000c6b0e 8342
.org 0xc6b10
	bge.n 0xc6b14	@ 000c6b10 00da
.org 0xc6b12
	adds r3, r0, #0	@ 000c6b12 031c
.org 0xc6b14
	ldrb r1, [r5, #10]	@ 000c6b14 a97a
.org 0xc6b16
	adds r0, r7, #0	@ 000c6b16 381c
.org 0xc6b18
	ands r0, r1	@ 000c6b18 0840
.org 0xc6b1a
	cmp r0, #0	@ 000c6b1a 0028
.org 0xc6b1c
	beq.n 0xc6b40	@ 000c6b1c 10d0
.org 0xc6b1e
	ldr r1, [pc, #28]	@ 000c6b1e 0749
.org 0xc6b20
	adds r0, r5, r1	@ 000c6b20 6818
.org 0xc6b22
	strb r2, [r0, #0]	@ 000c6b22 0270
.org 0xc6b24
	movs r2, #185	@ 000c6b24 b922
.org 0xc6b26
	lsls r2, r2, #1	@ 000c6b26 5200
.org 0xc6b28
	adds r0, r5, r2	@ 000c6b28 a818
.org 0xc6b2a
	strb r6, [r0, #0]	@ 000c6b2a 0670
.org 0xc6b2c
	b.n 0xc6b4e	@ 000c6b2c 0fe0
.org 0xc6b2e
	.byte 0x00	@ 000c6b2e data
.org 0xc6b2f
	.byte 0x00	@ 000c6b2f data
.org 0xc6b30
	.byte 0x00,0xcf,0xff,0xff	@ 000c6b30 data
.org 0xc6b34
	.byte 0xf8,0xe9,0x02,0x02	@ 000c6b34 data
.org 0xc6b38
	.byte 0x00,0x92,0xff,0xff	@ 000c6b38 data
.org 0xc6b3c
	.byte 0x71,0x01,0x00,0x00	@ 000c6b3c data
.org 0xc6b40
	ldr r6, [pc, #40]	@ 000c6b40 0a4e
.org 0xc6b42
	adds r0, r5, r6	@ 000c6b42 a819
.org 0xc6b44
	strb r2, [r0, #0]	@ 000c6b44 0270
.org 0xc6b46
	movs r1, #185	@ 000c6b46 b921
.org 0xc6b48
	lsls r1, r1, #1	@ 000c6b48 4900
.org 0xc6b4a
	adds r0, r5, r1	@ 000c6b4a 6818
.org 0xc6b4c
	strb r2, [r0, #0]	@ 000c6b4c 0270
.org 0xc6b4e
	ldr r0, [r4, #88]	@ 000c6b4e a06d
.org 0xc6b50
	movs r2, #168	@ 000c6b50 a822
.org 0xc6b52
	lsls r2, r2, #5	@ 000c6b52 5201
.org 0xc6b54
	adds r6, r0, r2	@ 000c6b54 8618
.org 0xc6b56
	ldr r0, [r5, #84]	@ 000c6b56 686d
.org 0xc6b58
	subs r1, r0, r3	@ 000c6b58 c11a
.org 0xc6b5a
	adds r2, r0, #0	@ 000c6b5a 021c
.org 0xc6b5c
	cmp r1, #0	@ 000c6b5c 0029
.org 0xc6b5e
	blt.n 0xc6b70	@ 000c6b5e 07db
.org 0xc6b60
	movs r0, #128	@ 000c6b60 8020
.org 0xc6b62
	lsls r0, r0, #4	@ 000c6b62 0001
.org 0xc6b64
	cmp r1, r0	@ 000c6b64 8142
.org 0xc6b66
	bgt.n 0xc6b7a	@ 000c6b66 08dc
.org 0xc6b68
	b.n 0xc6b92	@ 000c6b68 13e0
.org 0xc6b6a
	.byte 0x00	@ 000c6b6a data
.org 0xc6b6b
	.byte 0x00	@ 000c6b6b data
.org 0xc6b6c
	.byte 0x71,0x01,0x00,0x00	@ 000c6b6c data
.org 0xc6b70
	subs r1, r3, r2	@ 000c6b70 991a
.org 0xc6b72
	movs r0, #128	@ 000c6b72 8020
.org 0xc6b74
	lsls r0, r0, #4	@ 000c6b74 0001
.org 0xc6b76
	cmp r1, r0	@ 000c6b76 8142
.org 0xc6b78
	ble.n 0xc6b92	@ 000c6b78 0bdd
.org 0xc6b7a
	cmp r2, r3	@ 000c6b7a 9a42
.org 0xc6b7c
	ble.n 0xc6b88	@ 000c6b7c 04dd
.org 0xc6b7e
	ldr r1, [pc, #4]	@ 000c6b7e 0149
.org 0xc6b80
	b.n 0xc6b8c	@ 000c6b80 04e0
.org 0xc6b82
	.byte 0x00	@ 000c6b82 data
.org 0xc6b83
	.byte 0x00	@ 000c6b83 data
.org 0xc6b84
	.byte 0x00,0xf8,0xff,0xff	@ 000c6b84 data
.org 0xc6b88
	movs r1, #128	@ 000c6b88 8021
.org 0xc6b8a
	lsls r1, r1, #4	@ 000c6b8a 0901
.org 0xc6b8c
	adds r0, r2, r1	@ 000c6b8c 5018
.org 0xc6b8e
	str r0, [r5, #84]	@ 000c6b8e 6865
.org 0xc6b90
	b.n 0xc6b94	@ 000c6b90 00e0
.org 0xc6b92
	str r3, [r5, #84]	@ 000c6b92 6b65
.org 0xc6b94
	ldr r0, [r5, #88]	@ 000c6b94 a86d
.org 0xc6b96
	subs r1, r0, r6	@ 000c6b96 811b
.org 0xc6b98
	adds r2, r0, #0	@ 000c6b98 021c
.org 0xc6b9a
	cmp r1, #0	@ 000c6b9a 0029
.org 0xc6b9c
	blt.n 0xc6ba8	@ 000c6b9c 04db
.org 0xc6b9e
	movs r0, #128	@ 000c6b9e 8020
.org 0xc6ba0
	lsls r0, r0, #4	@ 000c6ba0 0001
.org 0xc6ba2
	cmp r1, r0	@ 000c6ba2 8142
.org 0xc6ba4
	bgt.n 0xc6bb2	@ 000c6ba4 05dc
.org 0xc6ba6
	b.n 0xc6bce	@ 000c6ba6 12e0
.org 0xc6ba8
	subs r1, r6, r2	@ 000c6ba8 b11a
.org 0xc6baa
	movs r0, #128	@ 000c6baa 8020
.org 0xc6bac
	lsls r0, r0, #4	@ 000c6bac 0001
.org 0xc6bae
	cmp r1, r0	@ 000c6bae 8142
.org 0xc6bb0
	ble.n 0xc6bce	@ 000c6bb0 0ddd
.org 0xc6bb2
	cmp r2, r6	@ 000c6bb2 b242
.org 0xc6bb4
	ble.n 0xc6bc4	@ 000c6bb4 06dd
.org 0xc6bb6
	ldr r6, [pc, #8]	@ 000c6bb6 024e
.org 0xc6bb8
	adds r0, r2, r6	@ 000c6bb8 9019
.org 0xc6bba
	str r0, [r5, #88]	@ 000c6bba a865
.org 0xc6bbc
	b.n 0xc6bd0	@ 000c6bbc 08e0
.org 0xc6bbe
	.byte 0x00	@ 000c6bbe data
.org 0xc6bbf
	.byte 0x00	@ 000c6bbf data
.org 0xc6bc0
	.byte 0x00,0xf8,0xff,0xff	@ 000c6bc0 data
.org 0xc6bc4
	movs r1, #128	@ 000c6bc4 8021
.org 0xc6bc6
	lsls r1, r1, #4	@ 000c6bc6 0901
.org 0xc6bc8
	adds r0, r2, r1	@ 000c6bc8 5018
.org 0xc6bca
	str r0, [r5, #88]	@ 000c6bca a865
.org 0xc6bcc
	b.n 0xc6bd0	@ 000c6bcc 00e0
.org 0xc6bce
	str r6, [r5, #88]	@ 000c6bce ae65
.org 0xc6bd0
	mov r2, r8	@ 000c6bd0 4246
.org 0xc6bd2
	ldrb r0, [r2, #13]	@ 000c6bd2 507b
.org 0xc6bd4
	cmp r0, #17	@ 000c6bd4 1128
.org 0xc6bd6
	bne.n 0xc6ca6	@ 000c6bd6 66d1
.org 0xc6bd8
	adds r0, r4, #0	@ 000c6bd8 201c
.org 0xc6bda
	adds r0, #116	@ 000c6bda 7430
.org 0xc6bdc
	ldr r1, [pc, #24]	@ 000c6bdc 0649
.org 0xc6bde
	bl 0x5784	@ 000c6bde 3ef7d1fd
.org 0xc6be2
	ldrb r1, [r4, #10]	@ 000c6be2 a17a
.org 0xc6be4
	movs r0, #16	@ 000c6be4 1020
.org 0xc6be6
	ands r0, r1	@ 000c6be6 0840
.org 0xc6be8
	cmp r0, #0	@ 000c6be8 0028
.org 0xc6bea
	beq.n 0xc6bfc	@ 000c6bea 07d0
.org 0xc6bec
	movs r0, #128	@ 000c6bec 8020
.org 0xc6bee
	lsls r0, r0, #3	@ 000c6bee c000
.org 0xc6bf0
	str r0, [r4, #92]	@ 000c6bf0 e065
.org 0xc6bf2
	subs r0, #128	@ 000c6bf2 8038
.org 0xc6bf4
	b.n 0xc6c02	@ 000c6bf4 05e0
.org 0xc6bf6
	.byte 0x00	@ 000c6bf6 data
.org 0xc6bf7
	.byte 0x00	@ 000c6bf7 data
.org 0xc6bf8
	.byte 0x18,0x5c,0x86,0x08	@ 000c6bf8 data
.org 0xc6bfc
	ldr r0, [pc, #176]	@ 000c6bfc 2c48
.org 0xc6bfe
	str r0, [r4, #92]	@ 000c6bfe e065
.org 0xc6c00
	adds r0, #128	@ 000c6c00 8030
.org 0xc6c02
	str r0, [r4, #100]	@ 000c6c02 6066
.org 0xc6c04
	movs r0, #0	@ 000c6c04 0020
.org 0xc6c06
	strb r0, [r4, #18]	@ 000c6c06 a074
.org 0xc6c08
	strb r0, [r4, #19]	@ 000c6c08 e074
.org 0xc6c0a
	ldrb r0, [r4, #13]	@ 000c6c0a 607b
.org 0xc6c0c
	adds r0, #1	@ 000c6c0c 0130
.org 0xc6c0e
	strb r0, [r4, #13]	@ 000c6c0e 6073
.org 0xc6c10
	ldrb r1, [r4, #10]	@ 000c6c10 a17a
.org 0xc6c12
	movs r0, #1	@ 000c6c12 0120
.org 0xc6c14
	orrs r0, r1	@ 000c6c14 0843
.org 0xc6c16
	strb r0, [r4, #10]	@ 000c6c16 a072
.org 0xc6c18
	ldr r0, [r4, #84]	@ 000c6c18 606d
.org 0xc6c1a
	ldr r1, [r4, #92]	@ 000c6c1a e16d
.org 0xc6c1c
	adds r0, r0, r1	@ 000c6c1c 4018
.org 0xc6c1e
	str r0, [r4, #84]	@ 000c6c1e 6065
.org 0xc6c20
	ldrb r0, [r4, #18]	@ 000c6c20 a07c
.org 0xc6c22
	movs r1, #10	@ 000c6c22 0a21
.org 0xc6c24
	bl 0x129120	@ 000c6c24 62f07cfa
.org 0xc6c28
	lsls r0, r0, #24	@ 000c6c28 0006
.org 0xc6c2a
	lsrs r1, r0, #24	@ 000c6c2a 010e
.org 0xc6c2c
	ldrb r0, [r4, #19]	@ 000c6c2c e07c
.org 0xc6c2e
	cmp r0, r1	@ 000c6c2e 8842
.org 0xc6c30
	beq.n 0xc6c4c	@ 000c6c30 0cd0
.org 0xc6c32
	cmp r1, #3	@ 000c6c32 0329
.org 0xc6c34
	bhi.n 0xc6c4c	@ 000c6c34 0ad8
.org 0xc6c36
	strb r1, [r4, #19]	@ 000c6c36 e174
.org 0xc6c38
	adds r0, r4, #0	@ 000c6c38 201c
.org 0xc6c3a
	adds r0, #116	@ 000c6c3a 7430
.org 0xc6c3c
	ldrb r2, [r4, #19]	@ 000c6c3c e27c
.org 0xc6c3e
	lsls r1, r2, #1	@ 000c6c3e 5100
.org 0xc6c40
	adds r1, r1, r2	@ 000c6c40 8918
.org 0xc6c42
	lsls r1, r1, #3	@ 000c6c42 c900
.org 0xc6c44
	ldr r2, [pc, #108]	@ 000c6c44 1b4a
.org 0xc6c46
	adds r1, r1, r2	@ 000c6c46 8918
.org 0xc6c48
	bl 0x5784	@ 000c6c48 3ef79cfd
.org 0xc6c4c
	cmp r5, #0	@ 000c6c4c 002d
.org 0xc6c4e
	beq.n 0xc6ca0	@ 000c6c4e 27d0
.org 0xc6c50
	adds r0, r5, #0	@ 000c6c50 281c
.org 0xc6c52
	adds r0, #140	@ 000c6c52 8c30
.org 0xc6c54
	ldr r0, [r0, #0]	@ 000c6c54 0068
.org 0xc6c56
	movs r6, #1	@ 000c6c56 0126
.org 0xc6c58
	ands r0, r6	@ 000c6c58 3040
.org 0xc6c5a
	cmp r0, #0	@ 000c6c5a 0028
.org 0xc6c5c
	beq.n 0xc6ca0	@ 000c6c5c 20d0

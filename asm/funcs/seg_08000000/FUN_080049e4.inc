@ FUN_080049e4  entry 0x080049e4  size 704
.thumb
.org 0x49e4
FUN_080049e4:
	push {r4, r5, r6, r7, lr}	@ 000049e4 f0b5
.org 0x49e6
	mov r7, sl	@ 000049e6 5746
.org 0x49e8
	mov r6, r9	@ 000049e8 4e46
.org 0x49ea
	mov r5, r8	@ 000049ea 4546
.org 0x49ec
	push {r5, r6, r7}	@ 000049ec e0b4
.org 0x49ee
	sub sp, #64	@ 000049ee 90b0
.org 0x49f0
	str r0, [sp, #0]	@ 000049f0 0090
.org 0x49f2
	adds r4, r1, #0	@ 000049f2 0c1c
.org 0x49f4
	str r2, [sp, #4]	@ 000049f4 0192
.org 0x49f6
	ldr r2, [r4, #0]	@ 000049f6 2268
.org 0x49f8
	str r2, [r0, #0]	@ 000049f8 0260
.org 0x49fa
	ldr r1, [r4, #4]	@ 000049fa 6168
.org 0x49fc
	ldr r0, [sp, #0]	@ 000049fc 0098
.org 0x49fe
	str r1, [r0, #4]	@ 000049fe 4160
.org 0x4a00
	ldr r3, [pc, #20]	@ 00004a00 054b
.org 0x4a02
	adds r0, r2, #0	@ 00004a02 101c
.org 0x4a04
	ands r0, r3	@ 00004a04 1840
.org 0x4a06
	ldr r5, [sp, #0]	@ 00004a06 009d
.org 0x4a08
	strh r0, [r5, #8]	@ 00004a08 2881
.org 0x4a0a
	ands r1, r3	@ 00004a0a 1940
.org 0x4a0c
	strh r1, [r5, #10]	@ 00004a0c 6981
.org 0x4a0e
	subs r2, #16	@ 00004a0e 103a
.org 0x4a10
	cmp r2, #0	@ 00004a10 002a
.org 0x4a12
	ble.n 0x4a1c	@ 00004a12 03dd
.org 0x4a14
	str r2, [sp, #12]	@ 00004a14 0392
.org 0x4a16
	b.n 0x4a20	@ 00004a16 03e0
.org 0x4a18
	.byte 0xff,0x01,0x00,0x00	@ 00004a18 data
.org 0x4a1c
	movs r0, #0	@ 00004a1c 0020
.org 0x4a1e
	str r0, [sp, #12]	@ 00004a1e 0390
.org 0x4a20
	ldr r0, [r4, #4]	@ 00004a20 6068
.org 0x4a22
	subs r0, #16	@ 00004a22 1038
.org 0x4a24
	cmp r0, #0	@ 00004a24 0028
.org 0x4a26
	ble.n 0x4a2c	@ 00004a26 01dd
.org 0x4a28
	str r0, [sp, #16]	@ 00004a28 0490
.org 0x4a2a
	b.n 0x4a30	@ 00004a2a 01e0
.org 0x4a2c
	movs r1, #0	@ 00004a2c 0021
.org 0x4a2e
	str r1, [sp, #16]	@ 00004a2e 0491
.org 0x4a30
	ldr r0, [sp, #12]	@ 00004a30 0398
.org 0x4a32
	movs r1, #240	@ 00004a32 f021
.org 0x4a34
	bl 0x128fb8	@ 00004a34 24f1c0fa
.org 0x4a38
	adds r4, r0, #0	@ 00004a38 041c
.org 0x4a3a
	adds r4, #4	@ 00004a3a 0434
.org 0x4a3c
	ldr r2, [sp, #0]	@ 00004a3c 009a
.org 0x4a3e
	ldr r6, [r2, #20]	@ 00004a3e 5669
.org 0x4a40
	adds r4, r6, r4	@ 00004a40 3419
.org 0x4a42
	ldr r5, [sp, #16]	@ 00004a42 049d
.org 0x4a44
	adds r0, r5, #0	@ 00004a44 281c
.org 0x4a46
	movs r1, #160	@ 00004a46 a021
.org 0x4a48
	bl 0x128fb8	@ 00004a48 24f1b6fa
.org 0x4a4c
	ldrb r1, [r6, #0]	@ 00004a4c 3178
.org 0x4a4e
	muls r0, r1	@ 00004a4e 4843
.org 0x4a50
	adds r4, r4, r0	@ 00004a50 2418
.org 0x4a52
	str r4, [sp, #8]	@ 00004a52 0294
.org 0x4a54
	ldr r0, [sp, #12]	@ 00004a54 0398
.org 0x4a56
	movs r1, #240	@ 00004a56 f021
.org 0x4a58
	bl 0x129050	@ 00004a58 24f1fafa
.org 0x4a5c
	adds r4, r0, #0	@ 00004a5c 041c
.org 0x4a5e
	lsls r4, r4, #12	@ 00004a5e 2403
.org 0x4a60
	lsrs r4, r4, #16	@ 00004a60 240c
.org 0x4a62
	adds r0, r5, #0	@ 00004a62 281c
.org 0x4a64
	movs r1, #160	@ 00004a64 a021
.org 0x4a66
	bl 0x129050	@ 00004a66 24f1f3fa
.org 0x4a6a
	lsls r0, r0, #12	@ 00004a6a 0003
.org 0x4a6c
	ldr r3, [sp, #8]	@ 00004a6c 029b
.org 0x4a6e
	ldrb r2, [r3, #0]	@ 00004a6e 1a78
.org 0x4a70
	lsls r1, r2, #2	@ 00004a70 9100
.org 0x4a72
	adds r1, r1, r2	@ 00004a72 8918
.org 0x4a74
	lsls r2, r1, #4	@ 00004a74 0a01
.org 0x4a76
	subs r2, r2, r1	@ 00004a76 521a
.org 0x4a78
	lsls r2, r2, #2	@ 00004a78 9200
.org 0x4a7a
	ldr r5, [sp, #0]	@ 00004a7a 009d
.org 0x4a7c
	ldr r3, [r5, #16]	@ 00004a7c 2b69
.org 0x4a7e
	adds r2, r3, r2	@ 00004a7e 9a18
.org 0x4a80
	lsls r4, r4, #16	@ 00004a80 2404
.org 0x4a82
	asrs r4, r4, #16	@ 00004a82 2414
.org 0x4a84
	lsls r5, r4, #1	@ 00004a84 6500
.org 0x4a86
	adds r2, r2, r5	@ 00004a86 5219
.org 0x4a88
	asrs r0, r0, #16	@ 00004a88 0014
.org 0x4a8a
	lsls r1, r0, #4	@ 00004a8a 0101
.org 0x4a8c
	subs r1, r1, r0	@ 00004a8c 091a
.org 0x4a8e
	lsls r1, r1, #1	@ 00004a8e 4900
.org 0x4a90
	adds r7, r2, r1	@ 00004a90 5718
.org 0x4a92
	ldr r1, [sp, #12]	@ 00004a92 0399
.org 0x4a94
	asrs r1, r1, #4	@ 00004a94 0911
.org 0x4a96
	str r1, [sp, #12]	@ 00004a96 0391
.org 0x4a98
	ldr r2, [sp, #16]	@ 00004a98 049a
.org 0x4a9a
	asrs r2, r2, #4	@ 00004a9a 1211
.org 0x4a9c
	str r2, [sp, #16]	@ 00004a9c 0492
.org 0x4a9e
	movs r1, #0	@ 00004a9e 0021
.org 0x4aa0
	mov r9, r1	@ 00004aa0 8946
.org 0x4aa2
	movs r2, #0	@ 00004aa2 0022
.org 0x4aa4
	str r2, [sp, #20]	@ 00004aa4 0592
.org 0x4aa6
	mov r8, r2	@ 00004aa6 9046
.org 0x4aa8
	str r6, [sp, #60]	@ 00004aa8 0f96
.org 0x4aaa
	str r3, [sp, #56]	@ 00004aaa 0e93
.org 0x4aac
	str r0, [sp, #28]	@ 00004aac 0790
.org 0x4aae
	movs r0, #10	@ 00004aae 0a20
.org 0x4ab0
	ldr r3, [sp, #28]	@ 00004ab0 079b
.org 0x4ab2
	subs r0, r0, r3	@ 00004ab2 c01a
.org 0x4ab4
	str r0, [sp, #32]	@ 00004ab4 0890
.org 0x4ab6
	str r4, [sp, #36]	@ 00004ab6 0994
.org 0x4ab8
	str r5, [sp, #24]	@ 00004ab8 0695
.org 0x4aba
	movs r5, #15	@ 00004aba 0f25
.org 0x4abc
	subs r4, r5, r4	@ 00004abc 2c1b
.org 0x4abe
	str r4, [sp, #40]	@ 00004abe 0a94
.org 0x4ac0
	movs r1, #0	@ 00004ac0 0021
.org 0x4ac2
	mov r0, r9	@ 00004ac2 4846
.org 0x4ac4
	lsls r0, r0, #16	@ 00004ac4 0004
.org 0x4ac6
	str r0, [sp, #48]	@ 00004ac6 0c90
.org 0x4ac8
	lsls r2, r2, #16	@ 00004ac8 1204
.org 0x4aca
	str r2, [sp, #52]	@ 00004aca 0d92
.org 0x4acc
	asrs r2, r2, #16	@ 00004acc 1214
.org 0x4ace
	mov sl, r2	@ 00004ace 9246
.org 0x4ad0
	ldr r2, [sp, #48]	@ 00004ad0 0c9a
.org 0x4ad2
	lsrs r2, r2, #16	@ 00004ad2 120c
.org 0x4ad4
	mov ip, r2	@ 00004ad4 9446
.org 0x4ad6
	lsls r1, r1, #16	@ 00004ad6 0904
.org 0x4ad8
	mov r9, r1	@ 00004ad8 8946
.org 0x4ada
	mov r3, sl	@ 00004ada 5346
.org 0x4adc
	cmp r3, #0	@ 00004adc 002b
.org 0x4ade
	bne.n 0x4af0	@ 00004ade 07d1
.org 0x4ae0
	lsls r0, r2, #16	@ 00004ae0 1004
.org 0x4ae2
	asrs r1, r0, #16	@ 00004ae2 0114
.org 0x4ae4
	adds r2, r0, #0	@ 00004ae4 021c
.org 0x4ae6
	ldr r4, [sp, #32]	@ 00004ae6 089c
.org 0x4ae8
	cmp r1, r4	@ 00004ae8 a142
.org 0x4aea
	blt.n 0x4aee	@ 00004aea 00db
.org 0x4aec
	b.n 0x4c04	@ 00004aec 8ae0
.org 0x4aee
	b.n 0x4b1e	@ 00004aee 16e0
.org 0x4af0
	mov r5, sl	@ 00004af0 5546
.org 0x4af2
	cmp r5, #1	@ 00004af2 012d
.org 0x4af4
	bne.n 0x4b12	@ 00004af4 0dd1
.org 0x4af6
	mov r1, ip	@ 00004af6 6146
.org 0x4af8
	lsls r0, r1, #16	@ 00004af8 0804
.org 0x4afa
	asrs r1, r0, #16	@ 00004afa 0114
.org 0x4afc
	adds r2, r0, #0	@ 00004afc 021c
.org 0x4afe
	cmp r1, #12	@ 00004afe 0c29
.org 0x4b00
	ble.n 0x4b04	@ 00004b00 00dd
.org 0x4b02
	b.n 0x4c04	@ 00004b02 7fe0
.org 0x4b04
	adds r0, r1, #0	@ 00004b04 081c
.org 0x4b06
	subs r0, #10	@ 00004b06 0a38
.org 0x4b08
	ldr r3, [sp, #28]	@ 00004b08 079b
.org 0x4b0a
	adds r0, r0, r3	@ 00004b0a c018
.org 0x4b0c
	cmp r0, #9	@ 00004b0c 0928
.org 0x4b0e
	bgt.n 0x4c04	@ 00004b0e 79dc
.org 0x4b10
	b.n 0x4b1e	@ 00004b10 05e0
.org 0x4b12
	mov r4, ip	@ 00004b12 6446
.org 0x4b14
	lsls r0, r4, #16	@ 00004b14 2004
.org 0x4b16
	asrs r1, r0, #16	@ 00004b16 0114
.org 0x4b18
	adds r2, r0, #0	@ 00004b18 021c
.org 0x4b1a
	cmp r1, #12	@ 00004b1a 0c29
.org 0x4b1c
	bgt.n 0x4c04	@ 00004b1c 72dc
.org 0x4b1e
	asrs r0, r2, #16	@ 00004b1e 1014
.org 0x4b20
	ldr r5, [sp, #16]	@ 00004b20 049d
.org 0x4b22
	adds r6, r5, r0	@ 00004b22 2e18
.org 0x4b24
	movs r0, #31	@ 00004b24 1f20
.org 0x4b26
	ands r6, r0	@ 00004b26 0640
.org 0x4b28
	ldr r1, [sp, #20]	@ 00004b28 0599
.org 0x4b2a
	lsls r0, r1, #16	@ 00004b2a 0804
.org 0x4b2c
	lsrs r2, r0, #16	@ 00004b2c 020c
.org 0x4b2e
	mov r8, r2	@ 00004b2e 9046
.org 0x4b30
	str r0, [sp, #44]	@ 00004b30 0b90
.org 0x4b32
	mov r3, r9	@ 00004b32 4b46
.org 0x4b34
	cmp r3, #0	@ 00004b34 002b
.org 0x4b36
	bne.n 0x4b44	@ 00004b36 05d1
.org 0x4b38
	lsls r0, r2, #16	@ 00004b38 1004
.org 0x4b3a
	asrs r0, r0, #16	@ 00004b3a 0014
.org 0x4b3c
	ldr r4, [sp, #40]	@ 00004b3c 0a9c
.org 0x4b3e
	cmp r0, r4	@ 00004b3e a042
.org 0x4b40
	bge.n 0x4bce	@ 00004b40 45da
.org 0x4b42
	b.n 0x4b6c	@ 00004b42 13e0
.org 0x4b44
	mov r5, r9	@ 00004b44 4d46
.org 0x4b46
	asrs r0, r5, #16	@ 00004b46 2814
.org 0x4b48
	cmp r0, #1	@ 00004b48 0128
.org 0x4b4a
	bne.n 0x4b62	@ 00004b4a 0ad1
.org 0x4b4c
	mov r1, r8	@ 00004b4c 4146
.org 0x4b4e
	lsls r0, r1, #16	@ 00004b4e 0804
.org 0x4b50
	asrs r0, r0, #16	@ 00004b50 0014
.org 0x4b52
	cmp r0, #19	@ 00004b52 1328
.org 0x4b54
	bgt.n 0x4bce	@ 00004b54 3bdc
.org 0x4b56
	subs r0, #15	@ 00004b56 0f38
.org 0x4b58
	ldr r2, [sp, #36]	@ 00004b58 099a
.org 0x4b5a
	adds r0, r0, r2	@ 00004b5a 8018
.org 0x4b5c
	cmp r0, #14	@ 00004b5c 0e28
.org 0x4b5e
	bgt.n 0x4bce	@ 00004b5e 36dc
.org 0x4b60
	b.n 0x4b6c	@ 00004b60 04e0
.org 0x4b62
	mov r3, r8	@ 00004b62 4346
.org 0x4b64
	lsls r0, r3, #16	@ 00004b64 1804
.org 0x4b66
	asrs r0, r0, #16	@ 00004b66 0014
.org 0x4b68
	cmp r0, #19	@ 00004b68 1328
.org 0x4b6a
	bgt.n 0x4bce	@ 00004b6a 30dc
.org 0x4b6c
	mov r4, r8	@ 00004b6c 4446
.org 0x4b6e
	lsls r5, r4, #16	@ 00004b6e 2504
.org 0x4b70
	asrs r5, r5, #16	@ 00004b70 2d14
.org 0x4b72
	ldr r0, [sp, #12]	@ 00004b72 0398
.org 0x4b74
	adds r1, r0, r5	@ 00004b74 4119
.org 0x4b76
	movs r2, #31	@ 00004b76 1f22
.org 0x4b78
	ldrh r0, [r7, #0]	@ 00004b78 3888
.org 0x4b7a
	lsls r0, r0, #3	@ 00004b7a c000
.org 0x4b7c
	ldr r4, [sp, #0]	@ 00004b7c 009c
.org 0x4b7e
	ldr r3, [r4, #12]	@ 00004b7e e368
.org 0x4b80
	adds r3, r3, r0	@ 00004b80 1b18
.org 0x4b82
	ands r1, r2	@ 00004b82 1140
.org 0x4b84
	lsls r4, r6, #7	@ 00004b84 f401
.org 0x4b86
	lsls r1, r1, #1	@ 00004b86 4900
.org 0x4b88
	ldr r0, [sp, #4]	@ 00004b88 0198
.org 0x4b8a
	adds r1, r1, r0	@ 00004b8a 0918
.org 0x4b8c
	adds r4, r4, r1	@ 00004b8c 6418
.org 0x4b8e
	ldrh r0, [r3, #0]	@ 00004b8e 1888
.org 0x4b90
	movs r1, #255	@ 00004b90 ff21
.org 0x4b92
	ands r1, r0	@ 00004b92 0140
.org 0x4b94
	ldrh r2, [r3, #2]	@ 00004b94 5a88
.org 0x4b96
	movs r0, #255	@ 00004b96 ff20
.org 0x4b98
	ands r0, r2	@ 00004b98 1040
.org 0x4b9a
	lsls r0, r0, #8	@ 00004b9a 0002
.org 0x4b9c
	orrs r1, r0	@ 00004b9c 0143
.org 0x4b9e
	strh r1, [r4, #0]	@ 00004b9e 2180
.org 0x4ba0
	adds r4, #64	@ 00004ba0 4034
.org 0x4ba2
	ldrh r0, [r3, #4]	@ 00004ba2 9888
.org 0x4ba4
	movs r1, #255	@ 00004ba4 ff21
.org 0x4ba6
	ands r1, r0	@ 00004ba6 0140
.org 0x4ba8
	ldrh r2, [r3, #6]	@ 00004ba8 da88
.org 0x4baa
	movs r0, #255	@ 00004baa ff20
.org 0x4bac
	ands r0, r2	@ 00004bac 1040
.org 0x4bae
	lsls r0, r0, #8	@ 00004bae 0002
.org 0x4bb0
	orrs r1, r0	@ 00004bb0 0143
.org 0x4bb2
	strh r1, [r4, #0]	@ 00004bb2 2180
.org 0x4bb4
	adds r7, #2	@ 00004bb4 0237
.org 0x4bb6
	adds r5, #1	@ 00004bb6 0135
.org 0x4bb8
	lsls r5, r5, #16	@ 00004bb8 2d04
.org 0x4bba
	lsrs r5, r5, #16	@ 00004bba 2d0c
.org 0x4bbc
	mov r8, r5	@ 00004bbc a846
.org 0x4bbe
	mov r1, r9	@ 00004bbe 4946
.org 0x4bc0
	cmp r1, #0	@ 00004bc0 0029
.org 0x4bc2
	bne.n 0x4b44	@ 00004bc2 bfd1
.org 0x4bc4
	lsls r0, r5, #16	@ 00004bc4 2804
.org 0x4bc6
	asrs r0, r0, #16	@ 00004bc6 0014
.org 0x4bc8
	ldr r2, [sp, #40]	@ 00004bc8 0a9a
.org 0x4bca
	cmp r0, r2	@ 00004bca 9042
.org 0x4bcc
	blt.n 0x4b6c	@ 00004bcc cedb
.org 0x4bce
	mov r3, r8	@ 00004bce 4346
.org 0x4bd0
	lsls r0, r3, #16	@ 00004bd0 1804
.org 0x4bd2
	asrs r0, r0, #16	@ 00004bd2 0014
.org 0x4bd4
	ldr r4, [sp, #44]	@ 00004bd4 0b9c
.org 0x4bd6
	asrs r1, r4, #16	@ 00004bd6 2114
.org 0x4bd8
	subs r0, r0, r1	@ 00004bd8 401a
.org 0x4bda
	movs r5, #15	@ 00004bda 0f25
.org 0x4bdc
	subs r0, r5, r0	@ 00004bdc 281a
.org 0x4bde
	lsls r0, r0, #1	@ 00004bde 4000
.org 0x4be0
	adds r7, r7, r0	@ 00004be0 3f18
.org 0x4be2
	mov r1, ip	@ 00004be2 6146
.org 0x4be4
	lsls r0, r1, #16	@ 00004be4 0804
.org 0x4be6
	movs r2, #128	@ 00004be6 8022
.org 0x4be8
	lsls r2, r2, #9	@ 00004be8 5202
.org 0x4bea
	adds r0, r0, r2	@ 00004bea 8018
.org 0x4bec
	lsrs r0, r0, #16	@ 00004bec 000c
.org 0x4bee
	mov ip, r0	@ 00004bee 8446
.org 0x4bf0
	mov r3, sl	@ 00004bf0 5346
.org 0x4bf2
	cmp r3, #0	@ 00004bf2 002b
.org 0x4bf4
	beq.n 0x4bf8	@ 00004bf4 00d0
.org 0x4bf6
	b.n 0x4af0	@ 00004bf6 7be7
.org 0x4bf8
	lsls r0, r0, #16	@ 00004bf8 0004
.org 0x4bfa
	asrs r1, r0, #16	@ 00004bfa 0114
.org 0x4bfc
	adds r2, r0, #0	@ 00004bfc 021c
.org 0x4bfe
	ldr r4, [sp, #32]	@ 00004bfe 089c
.org 0x4c00
	cmp r1, r4	@ 00004c00 a142
.org 0x4c02
	blt.n 0x4b1e	@ 00004c02 8cdb
.org 0x4c04
	mov r5, r8	@ 00004c04 4546
.org 0x4c06
	str r5, [sp, #20]	@ 00004c06 0595
.org 0x4c08
	mov r1, r9	@ 00004c08 4946
.org 0x4c0a
	asrs r0, r1, #16	@ 00004c0a 0814
.org 0x4c0c
	cmp r0, #2	@ 00004c0c 0228
.org 0x4c0e
	beq.n 0x4c5a	@ 00004c0e 24d0
.org 0x4c10
	ldr r3, [sp, #8]	@ 00004c10 029b
.org 0x4c12
	adds r3, #1	@ 00004c12 0133
.org 0x4c14
	str r3, [sp, #8]	@ 00004c14 0293
.org 0x4c16
	mov r4, sl	@ 00004c16 5446
.org 0x4c18
	cmp r4, #0	@ 00004c18 002c
.org 0x4c1a
	bne.n 0x4c38	@ 00004c1a 0dd1
.org 0x4c1c
	ldrb r1, [r3, #0]	@ 00004c1c 1978
.org 0x4c1e
	lsls r0, r1, #2	@ 00004c1e 8800
.org 0x4c20
	adds r0, r0, r1	@ 00004c20 4018
.org 0x4c22
	lsls r1, r0, #4	@ 00004c22 0101
.org 0x4c24
	subs r1, r1, r0	@ 00004c24 091a
.org 0x4c26
	lsls r1, r1, #2	@ 00004c26 8900
.org 0x4c28
	ldr r5, [sp, #56]	@ 00004c28 0e9d
.org 0x4c2a
	adds r1, r5, r1	@ 00004c2a 6918
.org 0x4c2c
	ldr r3, [sp, #28]	@ 00004c2c 079b
.org 0x4c2e
	lsls r0, r3, #4	@ 00004c2e 1801
.org 0x4c30
	subs r0, r0, r3	@ 00004c30 c01a
.org 0x4c32
	lsls r0, r0, #1	@ 00004c32 4000
.org 0x4c34
	adds r7, r1, r0	@ 00004c34 0f18
.org 0x4c36
	b.n 0x4c4a	@ 00004c36 08e0
.org 0x4c38
	ldr r4, [sp, #8]	@ 00004c38 029c
.org 0x4c3a
	ldrb r0, [r4, #0]	@ 00004c3a 2078
.org 0x4c3c
	lsls r1, r0, #2	@ 00004c3c 8100
.org 0x4c3e
	adds r1, r1, r0	@ 00004c3e 0918
.org 0x4c40
	lsls r0, r1, #4	@ 00004c40 0801
.org 0x4c42
	subs r0, r0, r1	@ 00004c42 401a
.org 0x4c44
	lsls r0, r0, #2	@ 00004c44 8000
.org 0x4c46
	ldr r5, [sp, #56]	@ 00004c46 0e9d
.org 0x4c48
	adds r7, r5, r0	@ 00004c48 2f18
.org 0x4c4a
	movs r0, #128	@ 00004c4a 8020
.org 0x4c4c
	lsls r0, r0, #9	@ 00004c4c 4002
.org 0x4c4e
	add r0, r9	@ 00004c4e 4844
.org 0x4c50
	lsrs r1, r0, #16	@ 00004c50 010c
.org 0x4c52
	asrs r0, r0, #16	@ 00004c52 0014
.org 0x4c54
	cmp r0, #2	@ 00004c54 0228
.org 0x4c56
	bgt.n 0x4c5a	@ 00004c56 00dc
.org 0x4c58
	b.n 0x4ad0	@ 00004c58 3ae7
.org 0x4c5a
	ldr r0, [sp, #52]	@ 00004c5a 0d98
.org 0x4c5c
	asrs r3, r0, #16	@ 00004c5c 0314
.org 0x4c5e
	cmp r3, #2	@ 00004c5e 022b
.org 0x4c60
	beq.n 0x4c98	@ 00004c60 1ad0
.org 0x4c62
	ldr r1, [sp, #60]	@ 00004c62 0f99
.org 0x4c64
	ldrb r0, [r1, #0]	@ 00004c64 0878
.org 0x4c66
	ldr r4, [sp, #8]	@ 00004c66 029c
.org 0x4c68
	adds r0, r4, r0	@ 00004c68 2018
.org 0x4c6a
	subs r0, #2	@ 00004c6a 0238
.org 0x4c6c
	str r0, [sp, #8]	@ 00004c6c 0290
.org 0x4c6e
	ldrb r0, [r0, #0]	@ 00004c6e 0078
.org 0x4c70
	lsls r1, r0, #2	@ 00004c70 8100
.org 0x4c72
	adds r1, r1, r0	@ 00004c72 0918
.org 0x4c74
	lsls r0, r1, #4	@ 00004c74 0801
.org 0x4c76
	subs r0, r0, r1	@ 00004c76 401a
.org 0x4c78
	lsls r0, r0, #2	@ 00004c78 8000
.org 0x4c7a
	ldr r5, [sp, #56]	@ 00004c7a 0e9d
.org 0x4c7c
	adds r0, r5, r0	@ 00004c7c 2818
.org 0x4c7e
	ldr r1, [sp, #24]	@ 00004c7e 0699
.org 0x4c80
	adds r7, r0, r1	@ 00004c80 4718
.org 0x4c82
	lsrs r2, r2, #16	@ 00004c82 120c
.org 0x4c84
	mov r9, r2	@ 00004c84 9146
.org 0x4c86
	movs r2, #0	@ 00004c86 0022
.org 0x4c88
	str r2, [sp, #20]	@ 00004c88 0592
.org 0x4c8a
	adds r0, r3, #1	@ 00004c8a 581c
.org 0x4c8c
	lsls r0, r0, #16	@ 00004c8c 0004
.org 0x4c8e
	lsrs r2, r0, #16	@ 00004c8e 020c
.org 0x4c90
	asrs r0, r0, #16	@ 00004c90 0014
.org 0x4c92
	cmp r0, #2	@ 00004c92 0228
.org 0x4c94
	bgt.n 0x4c98	@ 00004c94 00dc
.org 0x4c96
	b.n 0x4ac0	@ 00004c96 13e7
.org 0x4c98
	add sp, #64	@ 00004c98 10b0
.org 0x4c9a
	pop {r3, r4, r5}	@ 00004c9a 38bc
.org 0x4c9c
	mov r8, r3	@ 00004c9c 9846
.org 0x4c9e
	mov r9, r4	@ 00004c9e a146
.org 0x4ca0
	mov sl, r5	@ 00004ca0 aa46
.org 0x4ca2
	pop {r4, r5, r6, r7}	@ 00004ca2 f0bc

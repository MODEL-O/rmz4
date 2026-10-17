@ FUN_08048a6c  entry 0x08048a6c  size 472
.thumb
.org 0x48a6c
FUN_08048a6c:
	push {r4, r5, r6, r7, lr}	@ 00048a6c f0b5
.org 0x48a6e
	mov r7, r8	@ 00048a6e 4746
.org 0x48a70
	push {r7}	@ 00048a70 80b4
.org 0x48a72
	adds r5, r0, #0	@ 00048a72 051c
.org 0x48a74
	ldr r7, [r5, #40]	@ 00048a74 af6a
.org 0x48a76
	bl 0x1cff0	@ 00048a76 d4f7bbfa
.org 0x48a7a
	ldrb r6, [r5, #13]	@ 00048a7a 6e7b
.org 0x48a7c
	cmp r6, #0	@ 00048a7c 002e
.org 0x48a7e
	beq.n 0x48a82	@ 00048a7e 00d0
.org 0x48a80
	b.n 0x48bc8	@ 00048a80 a2e0
.org 0x48a82
	ldrb r0, [r5, #18]	@ 00048a82 a87c
.org 0x48a84
	subs r0, #1	@ 00048a84 0138
.org 0x48a86
	movs r1, #0	@ 00048a86 0021
.org 0x48a88
	mov r8, r1	@ 00048a88 8846
.org 0x48a8a
	strb r0, [r5, #18]	@ 00048a8a a874
.org 0x48a8c
	lsls r0, r0, #24	@ 00048a8c 0006
.org 0x48a8e
	lsrs r0, r0, #24	@ 00048a8e 000e
.org 0x48a90
	cmp r0, #255	@ 00048a90 ff28
.org 0x48a92
	beq.n 0x48a96	@ 00048a92 00d0
.org 0x48a94
	b.n 0x48c42	@ 00048a94 d5e0
.org 0x48a96
	adds r4, r5, #0	@ 00048a96 2c1c
.org 0x48a98
	adds r4, #84	@ 00048a98 5434
.org 0x48a9a
	adds r0, r7, #0	@ 00048a9a 381c
.org 0x48a9c
	adds r1, r4, #0	@ 00048a9c 211c
.org 0x48a9e
	bl 0x41318	@ 00048a9e f8f73bfc
.org 0x48aa2
	lsls r0, r0, #24	@ 00048aa2 0006
.org 0x48aa4
	lsrs r2, r0, #24	@ 00048aa4 020e
.org 0x48aa6
	mov ip, r4	@ 00048aa6 a446
.org 0x48aa8
	cmp r2, #0	@ 00048aa8 002a
.org 0x48aaa
	beq.n 0x48ae4	@ 00048aaa 1bd0
.org 0x48aac
	ldrb r1, [r5, #10]	@ 00048aac a97a
.org 0x48aae
	movs r0, #254	@ 00048aae fe20
.org 0x48ab0
	ands r0, r1	@ 00048ab0 0840
.org 0x48ab2
	movs r1, #253	@ 00048ab2 fd21
.org 0x48ab4
	ands r0, r1	@ 00048ab4 0840
.org 0x48ab6
	strb r0, [r5, #10]	@ 00048ab6 a872
.org 0x48ab8
	adds r0, r5, #0	@ 00048ab8 281c
.org 0x48aba
	adds r0, #140	@ 00048aba 8c30
.org 0x48abc
	str r6, [r0, #0]	@ 00048abc 0660
.org 0x48abe
	adds r0, #4	@ 00048abe 0430
.org 0x48ac0
	str r6, [r0, #0]	@ 00048ac0 0660
.org 0x48ac2
	adds r0, #4	@ 00048ac2 0430
.org 0x48ac4
	strb r6, [r0, #0]	@ 00048ac4 0670
.org 0x48ac6
	ldrb r1, [r5, #10]	@ 00048ac6 a97a
.org 0x48ac8
	movs r0, #251	@ 00048ac8 fb20
.org 0x48aca
	ands r0, r1	@ 00048aca 0840
.org 0x48acc
	strb r0, [r5, #10]	@ 00048acc a872
.org 0x48ace
	ldr r1, [pc, #16]	@ 00048ace 0449
.org 0x48ad0
	ldrb r0, [r5, #9]	@ 00048ad0 687a
.org 0x48ad2
	lsls r0, r0, #2	@ 00048ad2 8000
.org 0x48ad4
	adds r0, r0, r1	@ 00048ad4 4018
.org 0x48ad6
	movs r1, #3	@ 00048ad6 0321
.org 0x48ad8
	str r1, [r5, #12]	@ 00048ad8 e960
.org 0x48ada
	ldr r0, [r0, #0]	@ 00048ada 0068
.org 0x48adc
	ldr r0, [r0, #12]	@ 00048adc c068
.org 0x48ade
	b.n 0x48c40	@ 00048ade afe0
.org 0x48ae0
	.byte 0xf8,0x39,0x85,0x08	@ 00048ae0 data
.org 0x48ae4
	ldrb r0, [r5, #16]	@ 00048ae4 287c
.org 0x48ae6
	cmp r0, #0	@ 00048ae6 0028
.org 0x48ae8
	bne.n 0x48b44	@ 00048ae8 2cd1
.org 0x48aea
	ldr r1, [r5, #84]	@ 00048aea 696d
.org 0x48aec
	ldr r0, [r7, #84]	@ 00048aec 786d
.org 0x48aee
	cmp r1, r0	@ 00048aee 8142
.org 0x48af0
	ble.n 0x48b1c	@ 00048af0 14dd
.org 0x48af2
	movs r0, #128	@ 00048af2 8020
.org 0x48af4
	lsls r0, r0, #3	@ 00048af4 c000
.org 0x48af6
	str r0, [r5, #92]	@ 00048af6 e865
.org 0x48af8
	movs r2, #1	@ 00048af8 0122
.org 0x48afa
	ldrb r0, [r5, #10]	@ 00048afa a87a
.org 0x48afc
	movs r1, #16	@ 00048afc 1021
.org 0x48afe
	orrs r0, r1	@ 00048afe 0843
.org 0x48b00
	strb r0, [r5, #10]	@ 00048b00 a872
.org 0x48b02
	adds r0, r5, #0	@ 00048b02 281c
.org 0x48b04
	adds r0, #76	@ 00048b04 4c30
.org 0x48b06
	strb r2, [r0, #0]	@ 00048b06 0270
.org 0x48b08
	adds r3, r5, #0	@ 00048b08 2b1c
.org 0x48b0a
	adds r3, #74	@ 00048b0a 4a33
.org 0x48b0c
	movs r2, #16	@ 00048b0c 1022
.org 0x48b0e
	ldrb r1, [r3, #0]	@ 00048b0e 1978
.org 0x48b10
	movs r0, #17	@ 00048b10 1120
.org 0x48b12
	negs r0, r0	@ 00048b12 4042
.org 0x48b14
	ands r0, r1	@ 00048b14 0840
.org 0x48b16
	orrs r0, r2	@ 00048b16 1043
.org 0x48b18
	strb r0, [r3, #0]	@ 00048b18 1870
.org 0x48b1a
	b.n 0x48b3c	@ 00048b1a 0fe0
.org 0x48b1c
	ldr r0, [pc, #32]	@ 00048b1c 0848
.org 0x48b1e
	str r0, [r5, #92]	@ 00048b1e e865
.org 0x48b20
	ldrb r1, [r5, #10]	@ 00048b20 a97a
.org 0x48b22
	movs r0, #239	@ 00048b22 ef20
.org 0x48b24
	ands r0, r1	@ 00048b24 0840
.org 0x48b26
	strb r0, [r5, #10]	@ 00048b26 a872
.org 0x48b28
	adds r0, r5, #0	@ 00048b28 281c
.org 0x48b2a
	adds r0, #76	@ 00048b2a 4c30
.org 0x48b2c
	strb r2, [r0, #0]	@ 00048b2c 0270
.org 0x48b2e
	adds r2, r5, #0	@ 00048b2e 2a1c
.org 0x48b30
	adds r2, #74	@ 00048b30 4a32
.org 0x48b32
	ldrb r1, [r2, #0]	@ 00048b32 1178
.org 0x48b34
	movs r0, #17	@ 00048b34 1120
.org 0x48b36
	negs r0, r0	@ 00048b36 4042
.org 0x48b38
	ands r0, r1	@ 00048b38 0840
.org 0x48b3a
	strb r0, [r2, #0]	@ 00048b3a 1070
.org 0x48b3c
	movs r0, #0	@ 00048b3c 0020
.org 0x48b3e
	b.n 0x48b90	@ 00048b3e 27e0
.org 0x48b40
	.byte 0x00,0xfc,0xff,0xff	@ 00048b40 data
.org 0x48b44
	str r2, [r5, #92]	@ 00048b44 ea65
.org 0x48b46
	ldr r1, [r5, #84]	@ 00048b46 696d
.org 0x48b48
	ldr r0, [r7, #84]	@ 00048b48 786d
.org 0x48b4a
	cmp r1, r0	@ 00048b4a 8142
.org 0x48b4c
	ble.n 0x48b72	@ 00048b4c 11dd
.org 0x48b4e
	movs r2, #1	@ 00048b4e 0122
.org 0x48b50
	ldrb r0, [r5, #10]	@ 00048b50 a87a
.org 0x48b52
	movs r1, #16	@ 00048b52 1021
.org 0x48b54
	orrs r0, r1	@ 00048b54 0843
.org 0x48b56
	strb r0, [r5, #10]	@ 00048b56 a872
.org 0x48b58
	adds r0, r5, #0	@ 00048b58 281c
.org 0x48b5a
	adds r0, #76	@ 00048b5a 4c30
.org 0x48b5c
	strb r2, [r0, #0]	@ 00048b5c 0270
.org 0x48b5e
	adds r3, r5, #0	@ 00048b5e 2b1c
.org 0x48b60
	adds r3, #74	@ 00048b60 4a33
.org 0x48b62
	movs r2, #16	@ 00048b62 1022
.org 0x48b64
	ldrb r1, [r3, #0]	@ 00048b64 1978
.org 0x48b66
	movs r0, #17	@ 00048b66 1120
.org 0x48b68
	negs r0, r0	@ 00048b68 4042
.org 0x48b6a
	ands r0, r1	@ 00048b6a 0840
.org 0x48b6c
	orrs r0, r2	@ 00048b6c 1043
.org 0x48b6e
	strb r0, [r3, #0]	@ 00048b6e 1870
.org 0x48b70
	b.n 0x48b8e	@ 00048b70 0de0
.org 0x48b72
	ldrb r1, [r5, #10]	@ 00048b72 a97a
.org 0x48b74
	movs r0, #239	@ 00048b74 ef20
.org 0x48b76
	ands r0, r1	@ 00048b76 0840
.org 0x48b78
	strb r0, [r5, #10]	@ 00048b78 a872
.org 0x48b7a
	adds r0, r5, #0	@ 00048b7a 281c
.org 0x48b7c
	adds r0, #76	@ 00048b7c 4c30
.org 0x48b7e
	strb r2, [r0, #0]	@ 00048b7e 0270
.org 0x48b80
	adds r2, r5, #0	@ 00048b80 2a1c
.org 0x48b82
	adds r2, #74	@ 00048b82 4a32
.org 0x48b84
	ldrb r1, [r2, #0]	@ 00048b84 1178
.org 0x48b86
	movs r0, #17	@ 00048b86 1120
.org 0x48b88
	negs r0, r0	@ 00048b88 4042
.org 0x48b8a
	ands r0, r1	@ 00048b8a 0840
.org 0x48b8c
	strb r0, [r2, #0]	@ 00048b8c 1070
.org 0x48b8e
	ldr r0, [pc, #188]	@ 00048b8e 2f48
.org 0x48b90
	str r0, [r5, #96]	@ 00048b90 2866
.org 0x48b92
	ldrb r1, [r5, #10]	@ 00048b92 a97a
.org 0x48b94
	movs r0, #4	@ 00048b94 0420
.org 0x48b96
	orrs r0, r1	@ 00048b96 0843
.org 0x48b98
	strb r0, [r5, #10]	@ 00048b98 a872
.org 0x48b9a
	adds r4, r5, #0	@ 00048b9a 2c1c
.org 0x48b9c
	adds r4, #116	@ 00048b9c 7434
.org 0x48b9e
	ldr r1, [pc, #176]	@ 00048b9e 2c49
.org 0x48ba0
	adds r0, r4, #0	@ 00048ba0 201c
.org 0x48ba2
	mov r2, ip	@ 00048ba2 6246
.org 0x48ba4
	movs r3, #8	@ 00048ba4 0823
.org 0x48ba6
	bl 0x5760	@ 00048ba6 bcf7dbfd
.org 0x48baa
	str r5, [r4, #44]	@ 00048baa e562
.org 0x48bac
	ldr r0, [pc, #164]	@ 00048bac 2948
.org 0x48bae
	str r0, [r4, #36]	@ 00048bae 6062
.org 0x48bb0
	ldrb r1, [r5, #10]	@ 00048bb0 a97a
.org 0x48bb2
	movs r0, #1	@ 00048bb2 0120
.org 0x48bb4
	orrs r0, r1	@ 00048bb4 0843
.org 0x48bb6
	strb r0, [r5, #10]	@ 00048bb6 a872
.org 0x48bb8
	adds r0, r7, #0	@ 00048bb8 381c
.org 0x48bba
	bl 0x3aa4c	@ 00048bba f1f747ff
.org 0x48bbe
	adds r1, r5, #0	@ 00048bbe 291c
.org 0x48bc0
	adds r1, #189	@ 00048bc0 bd31
.org 0x48bc2
	movs r0, #1	@ 00048bc2 0120
.org 0x48bc4
	strb r0, [r1, #0]	@ 00048bc4 0870
.org 0x48bc6
	strb r0, [r5, #13]	@ 00048bc6 6873
.org 0x48bc8
	ldr r0, [r5, #84]	@ 00048bc8 686d
.org 0x48bca
	ldr r1, [r5, #92]	@ 00048bca e96d
.org 0x48bcc
	adds r0, r0, r1	@ 00048bcc 4018
.org 0x48bce
	str r0, [r5, #84]	@ 00048bce 6865
.org 0x48bd0
	ldrb r0, [r5, #16]	@ 00048bd0 287c
.org 0x48bd2
	cmp r0, #0	@ 00048bd2 0028
.org 0x48bd4
	beq.n 0x48bec	@ 00048bd4 0ad0
.org 0x48bd6
	ldr r0, [r5, #88]	@ 00048bd6 a86d
.org 0x48bd8
	ldr r1, [r5, #96]	@ 00048bd8 296e
.org 0x48bda
	adds r0, r0, r1	@ 00048bda 4018
.org 0x48bdc
	str r0, [r5, #88]	@ 00048bdc a865
.org 0x48bde
	adds r1, #64	@ 00048bde 4031
.org 0x48be0
	str r1, [r5, #96]	@ 00048be0 2966
.org 0x48be2
	movs r0, #224	@ 00048be2 e020
.org 0x48be4
	lsls r0, r0, #3	@ 00048be4 c000
.org 0x48be6
	cmp r1, r0	@ 00048be6 8142
.org 0x48be8
	ble.n 0x48bec	@ 00048be8 00dd
.org 0x48bea
	str r0, [r5, #96]	@ 00048bea 2866
.org 0x48bec
	ldrb r0, [r5, #19]	@ 00048bec e87c
.org 0x48bee
	subs r0, #1	@ 00048bee 0138
.org 0x48bf0
	strb r0, [r5, #19]	@ 00048bf0 e874
.org 0x48bf2
	lsls r0, r0, #24	@ 00048bf2 0006
.org 0x48bf4
	lsrs r0, r0, #24	@ 00048bf4 000e
.org 0x48bf6
	cmp r0, #255	@ 00048bf6 ff28
.org 0x48bf8
	beq.n 0x48c16	@ 00048bf8 0dd0
.org 0x48bfa
	adds r0, r5, #0	@ 00048bfa 281c
.org 0x48bfc
	adds r0, #140	@ 00048bfc 8c30
.org 0x48bfe
	ldr r0, [r0, #0]	@ 00048bfe 0068
.org 0x48c00
	ldr r1, [pc, #84]	@ 00048c00 1549
.org 0x48c02
	ands r0, r1	@ 00048c02 0840
.org 0x48c04
	cmp r0, #0	@ 00048c04 0028
.org 0x48c06
	bne.n 0x48c16	@ 00048c06 06d1
.org 0x48c08
	ldr r0, [r5, #84]	@ 00048c08 686d
.org 0x48c0a
	ldr r1, [r5, #88]	@ 00048c0a a96d
.org 0x48c0c
	bl 0x48cec	@ 00048c0c 00f06ef8
.org 0x48c10
	lsls r0, r0, #16	@ 00048c10 0004
.org 0x48c12
	cmp r0, #0	@ 00048c12 0028
.org 0x48c14
	beq.n 0x48c42	@ 00048c14 15d0
.org 0x48c16
	adds r1, r5, #0	@ 00048c16 291c
.org 0x48c18
	adds r1, #84	@ 00048c18 5431
.org 0x48c1a
	movs r0, #1	@ 00048c1a 0120
.org 0x48c1c
	bl 0xd0c88	@ 00048c1c 88f034f8
.org 0x48c20
	movs r0, #53	@ 00048c20 3520
.org 0x48c22
	bl 0x2b10	@ 00048c22 b9f775ff
.org 0x48c26
	adds r0, r5, #0	@ 00048c26 281c
.org 0x48c28
	adds r0, #116	@ 00048c28 7430
.org 0x48c2a
	ldr r1, [pc, #48]	@ 00048c2a 0c49
.org 0x48c2c
	bl 0x5784	@ 00048c2c bcf7aafd
.org 0x48c30
	ldr r1, [pc, #44]	@ 00048c30 0b49
.org 0x48c32
	ldrb r0, [r5, #9]	@ 00048c32 687a
.org 0x48c34
	lsls r0, r0, #2	@ 00048c34 8000
.org 0x48c36
	adds r0, r0, r1	@ 00048c36 4018
.org 0x48c38
	movs r1, #2	@ 00048c38 0221
.org 0x48c3a
	str r1, [r5, #12]	@ 00048c3a e960
.org 0x48c3c
	ldr r0, [r0, #0]	@ 00048c3c 0068
.org 0x48c3e
	ldr r0, [r0, #8]	@ 00048c3e 8068
.org 0x48c40
	str r0, [r5, #20]	@ 00048c40 6861
.org 0x48c42
	pop {r3}	@ 00048c42 08bc

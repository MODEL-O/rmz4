@ FUN_08006a94  entry 0x08006a94  size 356
.thumb
.org 0x6a94
FUN_08006a94:
	push {r4, r5, r6, r7, lr}	@ 00006a94 f0b5
.org 0x6a96
	sub sp, #4	@ 00006a96 81b0
.org 0x6a98
	adds r7, r0, #0	@ 00006a98 071c
.org 0x6a9a
	adds r4, r1, #0	@ 00006a9a 0c1c
.org 0x6a9c
	ldr r0, [pc, #48]	@ 00006a9c 0c48
.org 0x6a9e
	movs r2, #232	@ 00006a9e e822
.org 0x6aa0
	lsls r2, r2, #1	@ 00006aa0 5200
.org 0x6aa2
	adds r1, r0, r2	@ 00006aa2 8118
.org 0x6aa4
	ldrh r1, [r1, #0]	@ 00006aa4 0988
.org 0x6aa6
	adds r6, r0, #0	@ 00006aa6 061c
.org 0x6aa8
	cmp r1, #4	@ 00006aa8 0429
.org 0x6aaa
	bne.n 0x6ad8	@ 00006aaa 15d1
.org 0x6aac
	ldr r0, [r4, #0]	@ 00006aac 2068
.org 0x6aae
	ldr r1, [pc, #36]	@ 00006aae 0949
.org 0x6ab0
	adds r0, r0, r1	@ 00006ab0 4018
.org 0x6ab2
	movs r1, #240	@ 00006ab2 f021
.org 0x6ab4
	lsls r1, r1, #10	@ 00006ab4 8902
.org 0x6ab6
	bl 0x129050	@ 00006ab6 22f1cbfa
.org 0x6aba
	movs r2, #240	@ 00006aba f022
.org 0x6abc
	lsls r2, r2, #8	@ 00006abc 1202
.org 0x6abe
	adds r0, r0, r2	@ 00006abe 8018
.org 0x6ac0
	movs r2, #228	@ 00006ac0 e422
.org 0x6ac2
	lsls r2, r2, #1	@ 00006ac2 5200
.org 0x6ac4
	adds r1, r6, r2	@ 00006ac4 b118
.org 0x6ac6
	str r0, [r1, #0]	@ 00006ac6 0860
.org 0x6ac8
	ldr r0, [r4, #4]	@ 00006ac8 6068
.org 0x6aca
	str r0, [r1, #4]	@ 00006aca 4860
.org 0x6acc
	b.n 0x6ae6	@ 00006acc 0be0
.org 0x6ace
	.byte 0x00	@ 00006ace data
.org 0x6acf
	.byte 0x00	@ 00006acf data
.org 0x6ad0
	.byte 0xb0,0x0a,0x00,0x02	@ 00006ad0 data
.org 0x6ad4
	.byte 0x00,0x10,0xff,0xff	@ 00006ad4 data
.org 0x6ad8
	movs r1, #228	@ 00006ad8 e421
.org 0x6ada
	lsls r1, r1, #1	@ 00006ada 4900
.org 0x6adc
	adds r0, r6, r1	@ 00006adc 7018
.org 0x6ade
	ldr r1, [r4, #0]	@ 00006ade 2168
.org 0x6ae0
	str r1, [r0, #0]	@ 00006ae0 0160
.org 0x6ae2
	ldr r1, [r4, #4]	@ 00006ae2 6168
.org 0x6ae4
	str r1, [r0, #4]	@ 00006ae4 4160
.org 0x6ae6
	ldr r2, [pc, #284]	@ 00006ae6 474a
.org 0x6ae8
	ldr r4, [pc, #284]	@ 00006ae8 474c
.org 0x6aea
	adds r0, r6, r4	@ 00006aea 3019
.org 0x6aec
	ldrb r0, [r0, #0]	@ 00006aec 0078
.org 0x6aee
	lsrs r0, r0, #4	@ 00006aee 0009
.org 0x6af0
	lsls r0, r0, #2	@ 00006af0 8000
.org 0x6af2
	lsls r1, r7, #3	@ 00006af2 f900
.org 0x6af4
	adds r0, r0, r1	@ 00006af4 4018
.org 0x6af6
	adds r0, r0, r2	@ 00006af6 8018
.org 0x6af8
	ldr r5, [r0, #0]	@ 00006af8 0568
.org 0x6afa
	ldr r7, [r5, #0]	@ 00006afa 2f68
.org 0x6afc
	ldr r2, [pc, #268]	@ 00006afc 434a
.org 0x6afe
	ldrh r1, [r2, #0]	@ 00006afe 1188
.org 0x6b00
	ldr r0, [pc, #268]	@ 00006b00 4348
.org 0x6b02
	ands r0, r1	@ 00006b02 0840
.org 0x6b04
	movs r4, #0	@ 00006b04 0024
.org 0x6b06
	strh r0, [r2, #0]	@ 00006b06 1080
.org 0x6b08
	ldr r1, [pc, #264]	@ 00006b08 4249
.org 0x6b0a
	adds r0, r6, #0	@ 00006b0a 301c
.org 0x6b0c
	bl 0x2c94	@ 00006b0c fcf7c2f8
.org 0x6b10
	str r6, [r6, #8]	@ 00006b10 b660
.org 0x6b12
	ldr r1, [pc, #260]	@ 00006b12 4149
.org 0x6b14
	adds r0, r6, r1	@ 00006b14 7018
.org 0x6b16
	strh r4, [r0, #0]	@ 00006b16 0480
.org 0x6b18
	movs r1, #128	@ 00006b18 8021
.org 0x6b1a
	movs r4, #232	@ 00006b1a e824
.org 0x6b1c
	lsls r4, r4, #1	@ 00006b1c 6400
.org 0x6b1e
	adds r2, r6, r4	@ 00006b1e 3219
.org 0x6b20
	adds r0, r7, #0	@ 00006b20 381c
.org 0x6b22
	orrs r0, r1	@ 00006b22 0843
.org 0x6b24
	strh r0, [r2, #0]	@ 00006b24 1080
.org 0x6b26
	lsls r0, r7, #1	@ 00006b26 7800
.org 0x6b28
	adds r0, r0, r7	@ 00006b28 c019
.org 0x6b2a
	lsls r0, r0, #2	@ 00006b2a 8000
.org 0x6b2c
	ldr r1, [pc, #236]	@ 00006b2c 3b49
.org 0x6b2e
	adds r0, r0, r1	@ 00006b2e 4018
.org 0x6b30
	ldr r2, [r0, #0]	@ 00006b30 0268
.org 0x6b32
	adds r2, r2, r0	@ 00006b32 1218
.org 0x6b34
	ldr r3, [r0, #8]	@ 00006b34 8368
.org 0x6b36
	adds r3, r3, r0	@ 00006b36 1b18
.org 0x6b38
	ldr r1, [r0, #4]	@ 00006b38 4168
.org 0x6b3a
	adds r1, r1, r0	@ 00006b3a 0918
.org 0x6b3c
	subs r4, #24	@ 00006b3c 183c
.org 0x6b3e
	adds r0, r6, r4	@ 00006b3e 3019
.org 0x6b40
	ldr r4, [r5, #12]	@ 00006b40 ec68
.org 0x6b42
	str r4, [sp, #0]	@ 00006b42 0094
.org 0x6b44
	bl 0x5328	@ 00006b44 fef7f0fb
.org 0x6b48
	ldr r0, [pc, #212]	@ 00006b48 3548
.org 0x6b4a
	adds r1, r6, r0	@ 00006b4a 3118
.org 0x6b4c
	ldr r0, [pc, #212]	@ 00006b4c 3548
.org 0x6b4e
	strh r0, [r1, #0]	@ 00006b4e 0880
.org 0x6b50
	ldr r2, [pc, #212]	@ 00006b50 354a
.org 0x6b52
	adds r1, r6, r2	@ 00006b52 b118
.org 0x6b54
	movs r0, #1	@ 00006b54 0120
.org 0x6b56
	negs r0, r0	@ 00006b56 4042
.org 0x6b58
	strh r0, [r1, #0]	@ 00006b58 0880
.org 0x6b5a
	ldr r4, [pc, #208]	@ 00006b5a 344c
.org 0x6b5c
	adds r1, r6, r4	@ 00006b5c 3119
.org 0x6b5e
	ldr r0, [r5, #120]	@ 00006b5e a86f
.org 0x6b60
	str r0, [r1, #0]	@ 00006b60 0860
.org 0x6b62
	ldr r0, [pc, #204]	@ 00006b62 3348
.org 0x6b64
	adds r1, r6, r0	@ 00006b64 3118
.org 0x6b66
	ldr r0, [r5, #124]	@ 00006b66 e86f
.org 0x6b68
	str r0, [r1, #0]	@ 00006b68 0860
.org 0x6b6a
	ldr r1, [r5, #12]	@ 00006b6a e968
.org 0x6b6c
	adds r0, r5, #0	@ 00006b6c 281c
.org 0x6b6e
	bl 0x7220	@ 00006b6e 00f057fb
.org 0x6b72
	movs r0, #0	@ 00006b72 0020
.org 0x6b74
	lsls r4, r0, #16	@ 00006b74 0404
.org 0x6b76
	asrs r4, r4, #16	@ 00006b76 2414
.org 0x6b78
	adds r0, r4, #0	@ 00006b78 201c
.org 0x6b7a
	adds r1, r5, #0	@ 00006b7a 291c
.org 0x6b7c
	bl 0x7560	@ 00006b7c 00f0f0fc
.org 0x6b80
	adds r4, #1	@ 00006b80 0134
.org 0x6b82
	lsls r4, r4, #16	@ 00006b82 2404
.org 0x6b84
	lsrs r0, r4, #16	@ 00006b84 200c
.org 0x6b86
	asrs r4, r4, #16	@ 00006b86 2414
.org 0x6b88
	cmp r4, #2	@ 00006b88 022c
.org 0x6b8a
	ble.n 0x6b74	@ 00006b8a f3dd
.org 0x6b8c
	ldr r2, [pc, #164]	@ 00006b8c 294a
.org 0x6b8e
	ldr r4, [pc, #168]	@ 00006b8e 2a4c
.org 0x6b90
	adds r1, r2, r4	@ 00006b90 1119
.org 0x6b92
	ldr r0, [pc, #168]	@ 00006b92 2a48
.org 0x6b94
	str r0, [r1, #0]	@ 00006b94 0860
.org 0x6b96
	ldr r0, [pc, #168]	@ 00006b96 2a48
.org 0x6b98
	adds r5, r2, r0	@ 00006b98 1518
.org 0x6b9a
	movs r3, #0	@ 00006b9a 0023
.org 0x6b9c
	str r3, [r5, #0]	@ 00006b9c 2b60
.org 0x6b9e
	ldr r1, [pc, #164]	@ 00006b9e 2949
.org 0x6ba0
	adds r0, r2, r1	@ 00006ba0 5018
.org 0x6ba2
	str r3, [r0, #0]	@ 00006ba2 0360
.org 0x6ba4
	ldr r0, [pc, #160]	@ 00006ba4 2848
.org 0x6ba6
	adds r4, r2, r0	@ 00006ba6 1418
.org 0x6ba8
	movs r0, #240	@ 00006ba8 f020
.org 0x6baa
	lsls r0, r0, #14	@ 00006baa 8003
.org 0x6bac
	str r0, [r4, #0]	@ 00006bac 2060
.org 0x6bae
	ldr r0, [pc, #156]	@ 00006bae 2748
.org 0x6bb0
	adds r1, r2, r0	@ 00006bb0 1118
.org 0x6bb2
	movs r0, #160	@ 00006bb2 a020
.org 0x6bb4
	lsls r0, r0, #14	@ 00006bb4 8003
.org 0x6bb6
	str r0, [r1, #0]	@ 00006bb6 0860
.org 0x6bb8
	movs r1, #232	@ 00006bb8 e821
.org 0x6bba
	lsls r1, r1, #1	@ 00006bba 4900
.org 0x6bbc
	adds r0, r2, r1	@ 00006bbc 5018
.org 0x6bbe
	ldrh r1, [r0, #0]	@ 00006bbe 0188
.org 0x6bc0
	movs r0, #127	@ 00006bc0 7f20
.org 0x6bc2
	ands r0, r1	@ 00006bc2 0840
.org 0x6bc4
	cmp r0, #4	@ 00006bc4 0428
.org 0x6bc6
	bne.n 0x6bd0	@ 00006bc6 03d1
.org 0x6bc8
	str r3, [r5, #0]	@ 00006bc8 2b60
.org 0x6bca
	movs r0, #240	@ 00006bca f020
.org 0x6bcc
	lsls r0, r0, #23	@ 00006bcc c005
.org 0x6bce
	str r0, [r4, #0]	@ 00006bce 2060
.org 0x6bd0
	movs r4, #233	@ 00006bd0 e924
.org 0x6bd2
	lsls r4, r4, #1	@ 00006bd2 6400
.org 0x6bd4
	adds r0, r2, r4	@ 00006bd4 1019
.org 0x6bd6
	strb r3, [r0, #0]	@ 00006bd6 0370
.org 0x6bd8
	ldr r1, [pc, #116]	@ 00006bd8 1d49
.org 0x6bda
	adds r0, r2, r1	@ 00006bda 5018
.org 0x6bdc
	strb r3, [r0, #0]	@ 00006bdc 0370
.org 0x6bde
	movs r1, #0	@ 00006bde 0021
.org 0x6be0
	ldr r4, [pc, #112]	@ 00006be0 1c4c
.org 0x6be2
	adds r3, r2, r4	@ 00006be2 1319
.org 0x6be4
	movs r2, #0	@ 00006be4 0022
.org 0x6be6
	lsls r0, r1, #16	@ 00006be6 0804
.org 0x6be8
	asrs r0, r0, #16	@ 00006be8 0014
.org 0x6bea
	adds r1, r0, r3	@ 00006bea c118
.org 0x6bec
	strb r2, [r1, #0]	@ 00006bec 0a70
.org 0x6bee
	adds r0, #1	@ 00006bee 0130
.org 0x6bf0
	lsls r0, r0, #16	@ 00006bf0 0004
.org 0x6bf2
	lsrs r1, r0, #16	@ 00006bf2 010c
.org 0x6bf4
	asrs r0, r0, #16	@ 00006bf4 0014
.org 0x6bf6
	cmp r0, #3	@ 00006bf6 0328

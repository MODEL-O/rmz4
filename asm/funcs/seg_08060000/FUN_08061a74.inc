@ FUN_08061a74  entry 0x08061a74  size 724
.thumb
.org 0x61a74
FUN_08061a74:
	push {r4, r5, r6, r7, lr}	@ 00061a74 f0b5
.org 0x61a76
	adds r4, r0, #0	@ 00061a76 041c
.org 0x61a78
	ldrb r0, [r4, #14]	@ 00061a78 a07b
.org 0x61a7a
	cmp r0, #0	@ 00061a7a 0028
.org 0x61a7c
	bne.n 0x61af2	@ 00061a7c 39d1
.org 0x61a7e
	adds r0, r4, #0	@ 00061a7e 201c
.org 0x61a80
	adds r0, #84	@ 00061a80 5430
.org 0x61a82
	movs r1, #0	@ 00061a82 0021
.org 0x61a84
	movs r2, #193	@ 00061a84 c122
.org 0x61a86
	bl 0xdad0c	@ 00061a86 79f041f9
.org 0x61a8a
	adds r1, r0, #0	@ 00061a8a 011c
.org 0x61a8c
	adds r2, r4, #0	@ 00061a8c 221c
.org 0x61a8e
	adds r2, #180	@ 00061a8e b432
.org 0x61a90
	str r1, [r2, #12]	@ 00061a90 d160
.org 0x61a92
	cmp r1, #0	@ 00061a92 0029
.org 0x61a94
	bne.n 0x61a98	@ 00061a94 00d1
.org 0x61a96
	b.n 0x61d72	@ 00061a96 6ce1
.org 0x61a98
	ldr r0, [pc, #20]	@ 00061a98 0548
.org 0x61a9a
	ldrh r0, [r0, #0]	@ 00061a9a 0088
.org 0x61a9c
	cmp r0, #11	@ 00061a9c 0b28
.org 0x61a9e
	bne.n 0x61ab4	@ 00061a9e 09d1
.org 0x61aa0
	adds r1, #120	@ 00061aa0 7831
.org 0x61aa2
	movs r0, #57	@ 00061aa2 3920
.org 0x61aa4
	strb r0, [r1, #0]	@ 00061aa4 0870
.org 0x61aa6
	ldr r0, [r2, #12]	@ 00061aa6 d068
.org 0x61aa8
	adds r0, #121	@ 00061aa8 7930
.org 0x61aaa
	movs r1, #6	@ 00061aaa 0621
.org 0x61aac
	b.n 0x61ac0	@ 00061aac 08e0
.org 0x61aae
	.byte 0x00	@ 00061aae data
.org 0x61aaf
	.byte 0x00	@ 00061aaf data
.org 0x61ab0
	.byte 0x10,0xe9,0x02,0x02	@ 00061ab0 data
.org 0x61ab4
	adds r1, #120	@ 00061ab4 7831
.org 0x61ab6
	movs r0, #53	@ 00061ab6 3520
.org 0x61ab8
	strb r0, [r1, #0]	@ 00061ab8 0870
.org 0x61aba
	ldr r0, [r2, #12]	@ 00061aba d068
.org 0x61abc
	adds r0, #121	@ 00061abc 7930
.org 0x61abe
	movs r1, #10	@ 00061abe 0a21
.org 0x61ac0
	strb r1, [r0, #0]	@ 00061ac0 0170
.org 0x61ac2
	adds r0, r4, #0	@ 00061ac2 201c
.org 0x61ac4
	movs r1, #0	@ 00061ac4 0021
.org 0x61ac6
	bl 0xc6434	@ 00061ac6 64f0b5fc
.org 0x61aca
	movs r1, #0	@ 00061aca 0021
.org 0x61acc
	movs r0, #32	@ 00061acc 2020
.org 0x61ace
	strb r0, [r4, #18]	@ 00061ace a074
.org 0x61ad0
	strb r1, [r4, #19]	@ 00061ad0 e174
.org 0x61ad2
	str r1, [r4, #100]	@ 00061ad2 6166
.org 0x61ad4
	str r1, [r4, #104]	@ 00061ad4 a166
.org 0x61ad6
	movs r0, #16	@ 00061ad6 1020
.org 0x61ad8
	str r0, [r4, #96]	@ 00061ad8 2066
.org 0x61ada
	movs r0, #93	@ 00061ada 5d20
.org 0x61adc
	bl 0x2b10	@ 00061adc a1f718f8
.org 0x61ae0
	adds r1, r4, #0	@ 00061ae0 211c
.org 0x61ae2
	adds r1, #180	@ 00061ae2 b431
.org 0x61ae4
	movs r2, #0	@ 00061ae4 0022
.org 0x61ae6
	movs r0, #93	@ 00061ae6 5d20
.org 0x61ae8
	strh r0, [r1, #22]	@ 00061ae8 c882
.org 0x61aea
	strb r2, [r4, #15]	@ 00061aea e273
.org 0x61aec
	ldrb r0, [r4, #14]	@ 00061aec a07b
.org 0x61aee
	adds r0, #1	@ 00061aee 0130
.org 0x61af0
	strb r0, [r4, #14]	@ 00061af0 a073
.org 0x61af2
	adds r1, r4, #0	@ 00061af2 211c
.org 0x61af4
	adds r1, #84	@ 00061af4 5431
.org 0x61af6
	movs r0, #8	@ 00061af6 0820
.org 0x61af8
	bl 0x1fe64	@ 00061af8 bef7b4f9
.org 0x61afc
	ldr r0, [r4, #88]	@ 00061afc a06d
.org 0x61afe
	ldr r1, [r4, #96]	@ 00061afe 216e
.org 0x61b00
	subs r0, r0, r1	@ 00061b00 401a
.org 0x61b02
	str r0, [r4, #88]	@ 00061b02 a065
.org 0x61b04
	adds r1, #1	@ 00061b04 0131
.org 0x61b06
	str r1, [r4, #96]	@ 00061b06 2166
.org 0x61b08
	ldrb r0, [r4, #15]	@ 00061b08 e07b
.org 0x61b0a
	cmp r0, #1	@ 00061b0a 0128
.org 0x61b0c
	beq.n 0x61b54	@ 00061b0c 22d0
.org 0x61b0e
	cmp r0, #1	@ 00061b0e 0128
.org 0x61b10
	bgt.n 0x61b18	@ 00061b10 02dc
.org 0x61b12
	cmp r0, #0	@ 00061b12 0028
.org 0x61b14
	beq.n 0x61b22	@ 00061b14 05d0
.org 0x61b16
	b.n 0x61bd4	@ 00061b16 5de0
.org 0x61b18
	cmp r0, #2	@ 00061b18 0228
.org 0x61b1a
	beq.n 0x61b80	@ 00061b1a 31d0
.org 0x61b1c
	cmp r0, #3	@ 00061b1c 0328
.org 0x61b1e
	beq.n 0x61b96	@ 00061b1e 3ad0
.org 0x61b20
	b.n 0x61bd4	@ 00061b20 58e0
.org 0x61b22
	ldr r0, [r4, #104]	@ 00061b22 a06e
.org 0x61b24
	movs r1, #128	@ 00061b24 8021
.org 0x61b26
	lsls r1, r1, #1	@ 00061b26 4900
.org 0x61b28
	adds r0, r0, r1	@ 00061b28 4018
.org 0x61b2a
	str r0, [r4, #104]	@ 00061b2a a066
.org 0x61b2c
	movs r1, #128	@ 00061b2c 8021
.org 0x61b2e
	lsls r1, r1, #5	@ 00061b2e 4901
.org 0x61b30
	cmp r0, r1	@ 00061b30 8842
.org 0x61b32
	ble.n 0x61b36	@ 00061b32 00dd
.org 0x61b34
	str r1, [r4, #104]	@ 00061b34 a166
.org 0x61b36
	ldrb r0, [r4, #18]	@ 00061b36 a07c
.org 0x61b38
	subs r0, #1	@ 00061b38 0138
.org 0x61b3a
	strb r0, [r4, #18]	@ 00061b3a a074
.org 0x61b3c
	lsls r0, r0, #24	@ 00061b3c 0006
.org 0x61b3e
	lsrs r0, r0, #24	@ 00061b3e 000e
.org 0x61b40
	cmp r0, #255	@ 00061b40 ff28
.org 0x61b42
	bne.n 0x61bd4	@ 00061b42 47d1
.org 0x61b44
	ldr r1, [pc, #8]	@ 00061b44 0249
.org 0x61b46
	adds r0, r4, #0	@ 00061b46 201c
.org 0x61b48
	bl 0x1cf00	@ 00061b48 bbf7daf9
.org 0x61b4c
	b.n 0x61b8e	@ 00061b4c 1fe0
.org 0x61b4e
	.byte 0x00	@ 00061b4e data
.org 0x61b4f
	.byte 0x00	@ 00061b4f data
.org 0x61b50
	.byte 0x1f,0xa5,0x00,0x00	@ 00061b50 data
.org 0x61b54
	adds r0, r4, #0	@ 00061b54 201c
.org 0x61b56
	adds r0, #115	@ 00061b56 7330
.org 0x61b58
	ldrb r0, [r0, #0]	@ 00061b58 0078
.org 0x61b5a
	cmp r0, #3	@ 00061b5a 0328
.org 0x61b5c
	bne.n 0x61bd4	@ 00061b5c 3ad1
.org 0x61b5e
	ldr r1, [pc, #28]	@ 00061b5e 0749
.org 0x61b60
	adds r0, r4, #0	@ 00061b60 201c
.org 0x61b62
	bl 0x1cf00	@ 00061b62 bbf7cdf9
.org 0x61b66
	adds r0, r4, #0	@ 00061b66 201c
.org 0x61b68
	movs r1, #4	@ 00061b68 0421
.org 0x61b6a
	movs r2, #0	@ 00061b6a 0022
.org 0x61b6c
	bl 0x99f0c	@ 00061b6c 38f0cef9
.org 0x61b70
	movs r0, #91	@ 00061b70 5b20
.org 0x61b72
	bl 0x2b10	@ 00061b72 a0f7cdff
.org 0x61b76
	movs r0, #164	@ 00061b76 a420
.org 0x61b78
	strb r0, [r4, #18]	@ 00061b78 a074
.org 0x61b7a
	b.n 0x61b8e	@ 00061b7a 08e0
.org 0x61b7c
	.byte 0x20,0xa5,0x00,0x00	@ 00061b7c data
.org 0x61b80
	ldrb r0, [r4, #18]	@ 00061b80 a07c
.org 0x61b82
	subs r0, #1	@ 00061b82 0138
.org 0x61b84
	strb r0, [r4, #18]	@ 00061b84 a074
.org 0x61b86
	lsls r0, r0, #24	@ 00061b86 0006
.org 0x61b88
	lsrs r0, r0, #24	@ 00061b88 000e
.org 0x61b8a
	cmp r0, #255	@ 00061b8a ff28
.org 0x61b8c
	bne.n 0x61bd4	@ 00061b8c 22d1
.org 0x61b8e
	ldrb r0, [r4, #15]	@ 00061b8e e07b
.org 0x61b90
	adds r0, #1	@ 00061b90 0130
.org 0x61b92
	strb r0, [r4, #15]	@ 00061b92 e073
.org 0x61b94
	b.n 0x61bd4	@ 00061b94 1ee0
.org 0x61b96
	ldr r0, [r4, #104]	@ 00061b96 a06e
.org 0x61b98
	ldr r1, [pc, #48]	@ 00061b98 0c49
.org 0x61b9a
	adds r0, r0, r1	@ 00061b9a 4018
.org 0x61b9c
	str r0, [r4, #104]	@ 00061b9c a066
.org 0x61b9e
	ldr r1, [pc, #48]	@ 00061b9e 0c49
.org 0x61ba0
	cmp r0, r1	@ 00061ba0 8842
.org 0x61ba2
	bgt.n 0x61bd4	@ 00061ba2 17dc
.org 0x61ba4
	adds r5, r4, #0	@ 00061ba4 251c
.org 0x61ba6
	adds r5, #180	@ 00061ba6 b435
.org 0x61ba8
	ldr r0, [r5, #12]	@ 00061ba8 e868
.org 0x61baa
	cmp r0, #0	@ 00061baa 0028
.org 0x61bac
	beq.n 0x61bb8	@ 00061bac 04d0
.org 0x61bae
	adds r0, #119	@ 00061bae 7730
.org 0x61bb0
	movs r2, #0	@ 00061bb0 0022
.org 0x61bb2
	movs r1, #1	@ 00061bb2 0121
.org 0x61bb4
	strb r1, [r0, #0]	@ 00061bb4 0170
.org 0x61bb6
	str r2, [r5, #12]	@ 00061bb6 ea60
.org 0x61bb8
	movs r0, #93	@ 00061bb8 5d20
.org 0x61bba
	bl 0x2b5c	@ 00061bba a0f7cfff
.org 0x61bbe
	movs r0, #0	@ 00061bbe 0020
.org 0x61bc0
	movs r1, #0	@ 00061bc0 0021
.org 0x61bc2
	strh r1, [r5, #22]	@ 00061bc2 e982
.org 0x61bc4
	movs r1, #35	@ 00061bc4 2321
.org 0x61bc6
	strb r1, [r4, #13]	@ 00061bc6 6173
.org 0x61bc8
	strb r0, [r4, #14]	@ 00061bc8 a073
.org 0x61bca
	b.n 0x61d72	@ 00061bca d2e0
.org 0x61bcc
	.byte 0x00,0xfd,0xff,0xff	@ 00061bcc data
.org 0x61bd0
	.byte 0xff,0x03,0x00,0x00	@ 00061bd0 data
.org 0x61bd4
	adds r0, r4, #0	@ 00061bd4 201c
.org 0x61bd6
	bl 0x1cff0	@ 00061bd6 bbf70bfa
.org 0x61bda
	ldr r0, [r4, #100]	@ 00061bda 606e
.org 0x61bdc
	adds r0, #1	@ 00061bdc 0130
.org 0x61bde
	str r0, [r4, #100]	@ 00061bde 6066
.org 0x61be0
	movs r1, #3	@ 00061be0 0321
.org 0x61be2
	ands r0, r1	@ 00061be2 0840
.org 0x61be4
	cmp r0, #1	@ 00061be4 0128
.org 0x61be6
	ble.n 0x61bee	@ 00061be6 02dd
.org 0x61be8
	ldr r0, [r4, #88]	@ 00061be8 a06d
.org 0x61bea
	adds r1, #253	@ 00061bea fd31
.org 0x61bec
	b.n 0x61bf2	@ 00061bec 01e0
.org 0x61bee
	ldr r0, [r4, #88]	@ 00061bee a06d
.org 0x61bf0
	ldr r1, [pc, #48]	@ 00061bf0 0c49
.org 0x61bf2
	adds r0, r0, r1	@ 00061bf2 4018
.org 0x61bf4
	str r0, [r4, #88]	@ 00061bf4 a065
.org 0x61bf6
	adds r0, r4, #0	@ 00061bf6 201c
.org 0x61bf8
	adds r0, #180	@ 00061bf8 b430
.org 0x61bfa
	ldr r1, [r0, #12]	@ 00061bfa c168
.org 0x61bfc
	adds r7, r0, #0	@ 00061bfc 071c
.org 0x61bfe
	cmp r1, #0	@ 00061bfe 0029
.org 0x61c00
	bne.n 0x61c04	@ 00061c00 00d1
.org 0x61c02
	b.n 0x61d72	@ 00061c02 b6e0
.org 0x61c04
	adds r5, r1, #0	@ 00061c04 0d1c
.org 0x61c06
	ldrb r0, [r4, #19]	@ 00061c06 e07c
.org 0x61c08
	cmp r0, #0	@ 00061c08 0028
.org 0x61c0a
	beq.n 0x61c28	@ 00061c0a 0dd0
.org 0x61c0c
	cmp r0, #1	@ 00061c0c 0128
.org 0x61c0e
	beq.n 0x61c32	@ 00061c0e 10d0
.org 0x61c10
	ldr r6, [r4, #104]	@ 00061c10 a66e
.org 0x61c12
	adds r1, #116	@ 00061c12 7431
.org 0x61c14
	movs r0, #0	@ 00061c14 0020
.org 0x61c16
	strb r0, [r1, #0]	@ 00061c16 0870
.org 0x61c18
	adds r1, #1	@ 00061c18 0131
.org 0x61c1a
	movs r0, #25	@ 00061c1a 1920
.org 0x61c1c
	strb r0, [r1, #0]	@ 00061c1c 0870
.org 0x61c1e
	adds r1, #1	@ 00061c1e 0131
.org 0x61c20
	movs r0, #31	@ 00061c20 1f20
.org 0x61c22
	b.n 0x61c4c	@ 00061c22 13e0
.org 0x61c24
	.byte 0x00,0xff,0xff,0xff	@ 00061c24 data
.org 0x61c28
	ldr r0, [r4, #104]	@ 00061c28 a06e
.org 0x61c2a
	lsrs r1, r0, #31	@ 00061c2a c10f
.org 0x61c2c
	adds r0, r0, r1	@ 00061c2c 4018
.org 0x61c2e
	asrs r6, r0, #1	@ 00061c2e 4610
.org 0x61c30
	b.n 0x61c3e	@ 00061c30 05e0
.org 0x61c32
	ldr r0, [r4, #104]	@ 00061c32 a06e
.org 0x61c34
	lsls r0, r0, #3	@ 00061c34 c000
.org 0x61c36
	movs r1, #10	@ 00061c36 0a21
.org 0x61c38
	bl 0x128fb8	@ 00061c38 c7f0bef9
.org 0x61c3c
	adds r6, r0, #0	@ 00061c3c 061c
.org 0x61c3e
	adds r1, r5, #0	@ 00061c3e 291c
.org 0x61c40
	adds r1, #116	@ 00061c40 7431
.org 0x61c42
	movs r0, #31	@ 00061c42 1f20
.org 0x61c44
	strb r0, [r1, #0]	@ 00061c44 0870
.org 0x61c46
	adds r1, #1	@ 00061c46 0131
.org 0x61c48
	strb r0, [r1, #0]	@ 00061c48 0870
.org 0x61c4a
	adds r1, #1	@ 00061c4a 0131
.org 0x61c4c
	strb r0, [r1, #0]	@ 00061c4c 0870
.org 0x61c4e
	ldr r0, [r7, #4]	@ 00061c4e 7868
.org 0x61c50
	movs r1, #128	@ 00061c50 8021
.org 0x61c52
	lsls r1, r1, #3	@ 00061c52 c900
.org 0x61c54
	adds r0, r0, r1	@ 00061c54 4018
.org 0x61c56
	str r0, [r5, #88]	@ 00061c56 a865
.org 0x61c58
	ldr r0, [r7, #4]	@ 00061c58 7868
.org 0x61c5a
	adds r0, r0, r1	@ 00061c5a 4018
.org 0x61c5c
	str r0, [r5, #104]	@ 00061c5c a866
.org 0x61c5e
	ldr r0, [r4, #88]	@ 00061c5e a06d
.org 0x61c60
	movs r2, #208	@ 00061c60 d022
.org 0x61c62
	lsls r2, r2, #5	@ 00061c62 5201
.org 0x61c64
	adds r0, r0, r2	@ 00061c64 8018
.org 0x61c66
	str r0, [r5, #96]	@ 00061c66 2866
.org 0x61c68
	adds r1, r5, #0	@ 00061c68 291c
.org 0x61c6a
	adds r1, #128	@ 00061c6a 8031
.org 0x61c6c
	ldr r0, [r4, #88]	@ 00061c6c a06d
.org 0x61c6e
	adds r0, r0, r2	@ 00061c6e 8018
.org 0x61c70
	str r0, [r1, #0]	@ 00061c70 0860
.org 0x61c72
	ldrb r1, [r4, #10]	@ 00061c72 a17a
.org 0x61c74
	movs r0, #16	@ 00061c74 1020
.org 0x61c76
	ands r0, r1	@ 00061c76 0840
.org 0x61c78
	cmp r0, #0	@ 00061c78 0028
.org 0x61c7a
	beq.n 0x61ca8	@ 00061c7a 15d0
.org 0x61c7c
	ldr r3, [pc, #36]	@ 00061c7c 094b
.org 0x61c7e
	adds r2, r6, r3	@ 00061c7e f218
.org 0x61c80
	ldr r0, [r4, #84]	@ 00061c80 606d
.org 0x61c82
	adds r0, r0, r2	@ 00061c82 8018
.org 0x61c84
	str r0, [r5, #84]	@ 00061c84 6865
.org 0x61c86
	movs r0, #224	@ 00061c86 e020
.org 0x61c88
	lsls r0, r0, #3	@ 00061c88 c000
.org 0x61c8a
	adds r1, r6, r0	@ 00061c8a 3118
.org 0x61c8c
	ldr r0, [r4, #84]	@ 00061c8c 606d
.org 0x61c8e
	subs r0, r0, r1	@ 00061c8e 401a
.org 0x61c90
	str r0, [r5, #100]	@ 00061c90 6866
.org 0x61c92
	ldr r0, [r4, #84]	@ 00061c92 606d
.org 0x61c94
	subs r0, r0, r1	@ 00061c94 401a
.org 0x61c96
	str r0, [r5, #92]	@ 00061c96 e865
.org 0x61c98
	ldr r0, [r4, #84]	@ 00061c98 606d
.org 0x61c9a
	adds r0, r0, r2	@ 00061c9a 8018
.org 0x61c9c
	str r0, [r5, #124]	@ 00061c9c e867
.org 0x61c9e
	ldr r0, [r4, #84]	@ 00061c9e 606d
.org 0x61ca0
	adds r7, r0, r3	@ 00061ca0 c718
.org 0x61ca2
	b.n 0x61cd2	@ 00061ca2 16e0
.org 0x61ca4
	.byte 0x00,0xfa,0xff,0xff	@ 00061ca4 data
.org 0x61ca8
	movs r1, #224	@ 00061ca8 e021
.org 0x61caa
	lsls r1, r1, #3	@ 00061caa c900
.org 0x61cac
	adds r2, r6, r1	@ 00061cac 7218
.org 0x61cae
	ldr r0, [r4, #84]	@ 00061cae 606d
.org 0x61cb0
	adds r0, r0, r2	@ 00061cb0 8018
.org 0x61cb2
	str r0, [r5, #84]	@ 00061cb2 6865
.org 0x61cb4
	ldr r0, [pc, #108]	@ 00061cb4 1b48
.org 0x61cb6
	adds r1, r6, r0	@ 00061cb6 3118
.org 0x61cb8
	ldr r0, [r4, #84]	@ 00061cb8 606d
.org 0x61cba
	subs r0, r0, r1	@ 00061cba 401a
.org 0x61cbc
	str r0, [r5, #100]	@ 00061cbc 6866
.org 0x61cbe
	ldr r0, [r4, #84]	@ 00061cbe 606d
.org 0x61cc0
	subs r0, r0, r1	@ 00061cc0 401a
.org 0x61cc2
	str r0, [r5, #92]	@ 00061cc2 e865
.org 0x61cc4
	ldr r0, [r4, #84]	@ 00061cc4 606d
.org 0x61cc6
	adds r0, r0, r2	@ 00061cc6 8018
.org 0x61cc8
	str r0, [r5, #124]	@ 00061cc8 e867
.org 0x61cca
	ldr r0, [r4, #84]	@ 00061cca 606d
.org 0x61ccc
	movs r1, #192	@ 00061ccc c021
.org 0x61cce
	lsls r1, r1, #3	@ 00061cce c900
.org 0x61cd0
	adds r7, r0, r1	@ 00061cd0 4718
.org 0x61cd2
	ldrb r0, [r4, #19]	@ 00061cd2 e07c
.org 0x61cd4
	adds r0, #1	@ 00061cd4 0130
.org 0x61cd6
	movs r1, #3	@ 00061cd6 0321
.org 0x61cd8
	bl 0x129050	@ 00061cd8 c7f0baf9
.org 0x61cdc
	strb r0, [r4, #19]	@ 00061cdc e074
.org 0x61cde
	lsls r0, r0, #24	@ 00061cde 0006
.org 0x61ce0
	lsrs r6, r0, #24	@ 00061ce0 060e
.org 0x61ce2
	cmp r6, #0	@ 00061ce2 002e
.org 0x61ce4
	bne.n 0x61d34	@ 00061ce4 26d1
.org 0x61ce6
	ldr r3, [pc, #64]	@ 00061ce6 104b
.org 0x61ce8
	ldr r0, [r3, #0]	@ 00061ce8 1868
.org 0x61cea
	ldr r2, [pc, #64]	@ 00061cea 104a
.org 0x61cec
	adds r4, r0, #0	@ 00061cec 041c
.org 0x61cee
	muls r4, r2	@ 00061cee 5443
.org 0x61cf0
	ldr r1, [pc, #60]	@ 00061cf0 0f49
.org 0x61cf2
	adds r4, r4, r1	@ 00061cf2 6418
.org 0x61cf4
	lsls r4, r4, #1	@ 00061cf4 6400
.org 0x61cf6
	lsrs r0, r4, #1	@ 00061cf6 6008
.org 0x61cf8
	lsls r4, r4, #3	@ 00061cf8 e400
.org 0x61cfa
	lsrs r4, r4, #20	@ 00061cfa 240d
.org 0x61cfc
	adds r4, r7, r4	@ 00061cfc 3c19
.org 0x61cfe
	muls r0, r2	@ 00061cfe 5043
.org 0x61d00
	adds r0, r0, r1	@ 00061d00 4018
.org 0x61d02
	lsls r0, r0, #1	@ 00061d02 4000
.org 0x61d04
	lsrs r1, r0, #1	@ 00061d04 4108
.org 0x61d06
	str r1, [r3, #0]	@ 00061d06 1960
.org 0x61d08
	lsrs r0, r0, #17	@ 00061d08 400c
.org 0x61d0a
	movs r1, #3	@ 00061d0a 0321
.org 0x61d0c
	bl 0x129198	@ 00061d0c c7f044fa
.org 0x61d10
	movs r2, #1	@ 00061d10 0122
.org 0x61d12
	subs r2, r2, r0	@ 00061d12 121a
.org 0x61d14
	lsls r2, r2, #8	@ 00061d14 1202
.org 0x61d16
	ldr r1, [r5, #88]	@ 00061d16 a96d
.org 0x61d18
	adds r1, r1, r2	@ 00061d18 8918
.org 0x61d1a
	adds r0, r4, #0	@ 00061d1a 201c
.org 0x61d1c
	movs r2, #0	@ 00061d1c 0022
.org 0x61d1e
	bl 0xc6480	@ 00061d1e 64f0affb
.org 0x61d22
	b.n 0x61d72	@ 00061d22 26e0
.org 0x61d24
	.byte 0x00,0xfa,0xff,0xff	@ 00061d24 data
.org 0x61d28
	.byte 0x38,0xdc,0x02,0x02	@ 00061d28 data
.org 0x61d2c
	.byte 0xfd,0x43,0x03,0x00	@ 00061d2c data
.org 0x61d30
	.byte 0xc3,0x9e,0x26,0x00	@ 00061d30 data
.org 0x61d34
	cmp r6, #1	@ 00061d34 012e
.org 0x61d36
	bne.n 0x61d72	@ 00061d36 1cd1
.org 0x61d38
	ldr r3, [pc, #60]	@ 00061d38 0f4b
.org 0x61d3a
	ldr r0, [r3, #0]	@ 00061d3a 1868
.org 0x61d3c
	ldr r2, [pc, #60]	@ 00061d3c 0f4a
.org 0x61d3e
	adds r4, r0, #0	@ 00061d3e 041c
.org 0x61d40
	muls r4, r2	@ 00061d40 5443
.org 0x61d42
	ldr r1, [pc, #60]	@ 00061d42 0f49
.org 0x61d44
	adds r4, r4, r1	@ 00061d44 6418
.org 0x61d46
	lsls r4, r4, #1	@ 00061d46 6400

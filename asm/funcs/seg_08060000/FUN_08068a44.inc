@ FUN_08068a44  entry 0x08068a44  size 1612
.thumb
.org 0x68a44
FUN_08068a44:
	push {r4, r5, r6, r7, lr}	@ 00068a44 f0b5
.org 0x68a46
	mov r7, sl	@ 00068a46 5746
.org 0x68a48
	mov r6, r9	@ 00068a48 4e46
.org 0x68a4a
	mov r5, r8	@ 00068a4a 4546
.org 0x68a4c
	push {r5, r6, r7}	@ 00068a4c e0b4
.org 0x68a4e
	sub sp, #52	@ 00068a4e 8db0
.org 0x68a50
	adds r7, r0, #0	@ 00068a50 071c
.org 0x68a52
	ldr r1, [pc, #388]	@ 00068a52 6149
.org 0x68a54
	mov r0, sp	@ 00068a54 6846
.org 0x68a56
	movs r2, #2	@ 00068a56 0222
.org 0x68a58
	bl 0x129258	@ 00068a58 c0f0fefb
.org 0x68a5c
	ldr r2, [pc, #380]	@ 00068a5c 5f4a
.org 0x68a5e
	ldr r1, [r2, #0]	@ 00068a5e 1168
.org 0x68a60
	ldr r0, [pc, #380]	@ 00068a60 5f48
.org 0x68a62
	muls r0, r1	@ 00068a62 4843
.org 0x68a64
	ldr r1, [pc, #380]	@ 00068a64 5f49
.org 0x68a66
	adds r0, r0, r1	@ 00068a66 4018
.org 0x68a68
	lsls r0, r0, #1	@ 00068a68 4000
.org 0x68a6a
	lsrs r1, r0, #1	@ 00068a6a 4108
.org 0x68a6c
	str r1, [r2, #0]	@ 00068a6c 1160
.org 0x68a6e
	lsrs r0, r0, #17	@ 00068a6e 400c
.org 0x68a70
	mov sl, r0	@ 00068a70 8246
.org 0x68a72
	movs r0, #1	@ 00068a72 0120
.org 0x68a74
	mov r2, sl	@ 00068a74 5246
.org 0x68a76
	ands r2, r0	@ 00068a76 0240
.org 0x68a78
	mov sl, r2	@ 00068a78 9246
.org 0x68a7a
	mov r0, sp	@ 00068a7a 6846
.org 0x68a7c
	add r0, sl	@ 00068a7c 5044
.org 0x68a7e
	ldrb r0, [r0, #0]	@ 00068a7e 0078
.org 0x68a80
	str r0, [sp, #36]	@ 00068a80 0990
.org 0x68a82
	ldrb r0, [r7, #9]	@ 00068a82 787a
.org 0x68a84
	lsls r0, r0, #2	@ 00068a84 8000
.org 0x68a86
	ldr r3, [pc, #352]	@ 00068a86 584b
.org 0x68a88
	adds r0, r0, r3	@ 00068a88 c018
.org 0x68a8a
	movs r1, #1	@ 00068a8a 0121
.org 0x68a8c
	str r1, [r7, #12]	@ 00068a8c f960
.org 0x68a8e
	ldr r0, [r0, #0]	@ 00068a8e 0068
.org 0x68a90
	ldr r0, [r0, #4]	@ 00068a90 4068
.org 0x68a92
	str r0, [r7, #20]	@ 00068a92 7861
.org 0x68a94
	movs r6, #0	@ 00068a94 0026
.org 0x68a96
	movs r4, #3	@ 00068a96 0324
.org 0x68a98
	strb r4, [r7, #13]	@ 00068a98 7c73
.org 0x68a9a
	strb r6, [r7, #14]	@ 00068a9a be73
.org 0x68a9c
	strb r6, [r7, #15]	@ 00068a9c fe73
.org 0x68a9e
	ldrb r1, [r7, #10]	@ 00068a9e b97a
.org 0x68aa0
	movs r0, #254	@ 00068aa0 fe20
.org 0x68aa2
	ands r0, r1	@ 00068aa2 0840
.org 0x68aa4
	movs r1, #2	@ 00068aa4 0221
.org 0x68aa6
	orrs r0, r1	@ 00068aa6 0843
.org 0x68aa8
	strb r0, [r7, #10]	@ 00068aa8 b872
.org 0x68aaa
	ldr r0, [r7, #84]	@ 00068aaa 786d
.org 0x68aac
	ldr r1, [r7, #88]	@ 00068aac b96d
.org 0x68aae
	str r0, [sp, #20]	@ 00068aae 0590
.org 0x68ab0
	str r1, [sp, #24]	@ 00068ab0 0691
.org 0x68ab2
	ldr r0, [r7, #84]	@ 00068ab2 786d
.org 0x68ab4
	ldr r1, [r7, #88]	@ 00068ab4 b96d
.org 0x68ab6
	bl 0x8534	@ 00068ab6 9ff73dfd
.org 0x68aba
	adds r4, r0, #0	@ 00068aba 041c
.org 0x68abc
	str r4, [sp, #24]	@ 00068abc 0694
.org 0x68abe
	ldr r0, [sp, #20]	@ 00068abe 0598
.org 0x68ac0
	adds r1, r4, #0	@ 00068ac0 211c
.org 0x68ac2
	bl 0x8988	@ 00068ac2 9ff761ff
.org 0x68ac6
	adds r1, r7, #0	@ 00068ac6 391c
.org 0x68ac8
	adds r1, #216	@ 00068ac8 d831
.org 0x68aca
	str r0, [r1, #0]	@ 00068aca 0860
.org 0x68acc
	ldr r0, [sp, #20]	@ 00068acc 0598
.org 0x68ace
	adds r1, r4, #0	@ 00068ace 211c
.org 0x68ad0
	bl 0x8748	@ 00068ad0 9ff73afe
.org 0x68ad4
	adds r1, r7, #0	@ 00068ad4 391c
.org 0x68ad6
	adds r1, #220	@ 00068ad6 dc31
.org 0x68ad8
	str r0, [r1, #0]	@ 00068ad8 0860
.org 0x68ada
	str r6, [r7, #44]	@ 00068ada fe62
.org 0x68adc
	ldr r4, [pc, #268]	@ 00068adc 434c
.org 0x68ade
	ldr r1, [pc, #272]	@ 00068ade 4449
.org 0x68ae0
	adds r0, r4, r1	@ 00068ae0 6018
.org 0x68ae2
	ldr r2, [pc, #272]	@ 00068ae2 444a
.org 0x68ae4
	str r2, [sp, #40]	@ 00068ae4 0a92
.org 0x68ae6
	adds r1, r2, #0	@ 00068ae6 111c
.org 0x68ae8
	adds r1, #174	@ 00068ae8 ae31
.org 0x68aea
	ldrh r1, [r1, #0]	@ 00068aea 0988
.org 0x68aec
	ldrh r2, [r0, #6]	@ 00068aec c288
.org 0x68aee
	lsrs r2, r2, #6	@ 00068aee 9209
.org 0x68af0
	subs r1, r1, r2	@ 00068af0 891a
.org 0x68af2
	lsls r1, r1, #5	@ 00068af2 4901
.org 0x68af4
	movs r3, #128	@ 00068af4 8023
.org 0x68af6
	lsls r3, r3, #9	@ 00068af6 5b02
.org 0x68af8
	mov r9, r3	@ 00068af8 9946
.org 0x68afa
	add r1, r9	@ 00068afa 4944
.org 0x68afc
	bl 0x1d30	@ 00068afc 99f718f9
.org 0x68b00
	ldr r0, [pc, #244]	@ 00068b00 3d48
.org 0x68b02
	mov r8, r0	@ 00068b02 8046
.org 0x68b04
	add r4, r8	@ 00068b04 4444
.org 0x68b06
	ldr r1, [pc, #244]	@ 00068b06 3d49
.org 0x68b08
	str r1, [sp, #44]	@ 00068b08 0b91
.org 0x68b0a
	adds r0, r1, #0	@ 00068b0a 081c
.org 0x68b0c
	adds r0, #174	@ 00068b0c ae30
.org 0x68b0e
	ldrh r1, [r0, #0]	@ 00068b0e 0188
.org 0x68b10
	ldrb r0, [r4, #7]	@ 00068b10 e079
.org 0x68b12
	subs r1, r1, r0	@ 00068b12 091a
.org 0x68b14
	lsls r1, r1, #5	@ 00068b14 4901
.org 0x68b16
	movs r2, #128	@ 00068b16 8022
.org 0x68b18
	lsls r2, r2, #2	@ 00068b18 9200
.org 0x68b1a
	adds r1, r1, r2	@ 00068b1a 8918
.org 0x68b1c
	adds r0, r4, #0	@ 00068b1c 201c
.org 0x68b1e
	bl 0x2208	@ 00068b1e 99f773fb
.org 0x68b22
	movs r4, #220	@ 00068b22 dc24
.org 0x68b24
	lsls r4, r4, #3	@ 00068b24 e400
.org 0x68b26
	ldr r3, [pc, #200]	@ 00068b26 324b
.org 0x68b28
	adds r0, r4, r3	@ 00068b28 e018
.org 0x68b2a
	ldr r1, [sp, #40]	@ 00068b2a 0a99
.org 0x68b2c
	adds r1, #176	@ 00068b2c b031
.org 0x68b2e
	ldrh r1, [r1, #0]	@ 00068b2e 0988
.org 0x68b30
	ldrh r2, [r0, #6]	@ 00068b30 c288
.org 0x68b32
	lsrs r2, r2, #6	@ 00068b32 9209
.org 0x68b34
	subs r1, r1, r2	@ 00068b34 891a
.org 0x68b36
	lsls r1, r1, #5	@ 00068b36 4901
.org 0x68b38
	add r1, r9	@ 00068b38 4944
.org 0x68b3a
	bl 0x1d30	@ 00068b3a 99f7f9f8
.org 0x68b3e
	add r4, r8	@ 00068b3e 4444
.org 0x68b40
	ldr r0, [sp, #44]	@ 00068b40 0b98
.org 0x68b42
	adds r0, #176	@ 00068b42 b030
.org 0x68b44
	ldrh r1, [r0, #0]	@ 00068b44 0188
.org 0x68b46
	ldrb r0, [r4, #7]	@ 00068b46 e079
.org 0x68b48
	subs r1, r1, r0	@ 00068b48 091a
.org 0x68b4a
	lsls r1, r1, #5	@ 00068b4a 4901
.org 0x68b4c
	movs r0, #128	@ 00068b4c 8020
.org 0x68b4e
	lsls r0, r0, #2	@ 00068b4e 8000
.org 0x68b50
	adds r1, r1, r0	@ 00068b50 0918
.org 0x68b52
	adds r0, r4, #0	@ 00068b52 201c
.org 0x68b54
	bl 0x2208	@ 00068b54 99f758fb
.org 0x68b58
	ldr r4, [pc, #164]	@ 00068b58 294c
.org 0x68b5a
	ldr r1, [pc, #148]	@ 00068b5a 2549
.org 0x68b5c
	adds r2, r4, r1	@ 00068b5c 6218
.org 0x68b5e
	ldr r0, [sp, #40]	@ 00068b5e 0a98
.org 0x68b60
	adds r0, #178	@ 00068b60 b230
.org 0x68b62
	ldrh r1, [r0, #0]	@ 00068b62 0188
.org 0x68b64
	ldrh r0, [r2, #6]	@ 00068b64 d088
.org 0x68b66
	lsrs r0, r0, #6	@ 00068b66 8009
.org 0x68b68
	subs r1, r1, r0	@ 00068b68 091a
.org 0x68b6a
	lsls r1, r1, #5	@ 00068b6a 4901
.org 0x68b6c
	add r1, r9	@ 00068b6c 4944
.org 0x68b6e
	adds r0, r2, #0	@ 00068b6e 101c
.org 0x68b70
	bl 0x1d30	@ 00068b70 99f7def8
.org 0x68b74
	add r4, r8	@ 00068b74 4444
.org 0x68b76
	ldr r0, [sp, #44]	@ 00068b76 0b98
.org 0x68b78
	adds r0, #178	@ 00068b78 b230
.org 0x68b7a
	ldrh r1, [r0, #0]	@ 00068b7a 0188
.org 0x68b7c
	ldrb r0, [r4, #7]	@ 00068b7c e079
.org 0x68b7e
	subs r1, r1, r0	@ 00068b7e 091a
.org 0x68b80
	lsls r1, r1, #5	@ 00068b80 4901
.org 0x68b82
	movs r2, #128	@ 00068b82 8022
.org 0x68b84
	lsls r2, r2, #2	@ 00068b84 9200
.org 0x68b86
	adds r1, r1, r2	@ 00068b86 8918
.org 0x68b88
	adds r0, r4, #0	@ 00068b88 201c
.org 0x68b8a
	bl 0x2208	@ 00068b8a 99f73dfb
.org 0x68b8e
	adds r0, r7, #0	@ 00068b8e 381c
.org 0x68b90
	bl 0x1cc9c	@ 00068b90 b4f784f8
.org 0x68b94
	adds r0, r7, #0	@ 00068b94 381c
.org 0x68b96
	movs r1, #0	@ 00068b96 0021
.org 0x68b98
	movs r2, #0	@ 00068b98 0022
.org 0x68b9a
	bl 0x9ea98	@ 00068b9a 35f07dff
.org 0x68b9e
	mov r8, r0	@ 00068b9e 8046
.org 0x68ba0
	cmp r0, #0	@ 00068ba0 0028
.org 0x68ba2
	bne.n 0x68c04	@ 00068ba2 2fd1
.org 0x68ba4
	ldrb r1, [r7, #10]	@ 00068ba4 b97a
.org 0x68ba6
	movs r0, #254	@ 00068ba6 fe20
.org 0x68ba8
	ands r0, r1	@ 00068ba8 0840
.org 0x68baa
	movs r1, #253	@ 00068baa fd21
.org 0x68bac
	ands r0, r1	@ 00068bac 0840
.org 0x68bae
	strb r0, [r7, #10]	@ 00068bae b872
.org 0x68bb0
	adds r0, r7, #0	@ 00068bb0 381c
.org 0x68bb2
	adds r0, #140	@ 00068bb2 8c30
.org 0x68bb4
	mov r3, r8	@ 00068bb4 4346
.org 0x68bb6
	str r3, [r0, #0]	@ 00068bb6 0360
.org 0x68bb8
	adds r0, #4	@ 00068bb8 0430
.org 0x68bba
	str r3, [r0, #0]	@ 00068bba 0360
.org 0x68bbc
	adds r0, #4	@ 00068bbc 0430
.org 0x68bbe
	strb r3, [r0, #0]	@ 00068bbe 0370
.org 0x68bc0
	ldrb r1, [r7, #10]	@ 00068bc0 b97a
.org 0x68bc2
	movs r0, #251	@ 00068bc2 fb20
.org 0x68bc4
	ands r0, r1	@ 00068bc4 0840
.org 0x68bc6
	strb r0, [r7, #10]	@ 00068bc6 b872
.org 0x68bc8
	ldrb r0, [r7, #9]	@ 00068bc8 787a
.org 0x68bca
	lsls r0, r0, #2	@ 00068bca 8000
.org 0x68bcc
	ldr r4, [pc, #24]	@ 00068bcc 064c
.org 0x68bce
	adds r0, r0, r4	@ 00068bce 0019
.org 0x68bd0
	movs r1, #3	@ 00068bd0 0321
.org 0x68bd2
	str r1, [r7, #12]	@ 00068bd2 f960
.org 0x68bd4
	b.n 0x68e0e	@ 00068bd4 1be1
.org 0x68bd6
	.byte 0x00	@ 00068bd6 data
.org 0x68bd7
	.byte 0x00	@ 00068bd7 data
.org 0x68bd8
	.byte 0xdc,0x98,0x12,0x08	@ 00068bd8 data
.org 0x68bdc
	.byte 0x38,0xdc,0x02,0x02	@ 00068bdc data
.org 0x68be0
	.byte 0xfd,0x43,0x03,0x00	@ 00068be0 data
.org 0x68be4
	.byte 0xc3,0x9e,0x26,0x00	@ 00068be4 data
.org 0x68be8
	.byte 0x70,0x7d,0x85,0x08	@ 00068be8 data
.org 0x68bec
	.byte 0xcc,0x06,0x00,0x00	@ 00068bec data
.org 0x68bf0
	.byte 0x00,0x40,0xc4,0x08	@ 00068bf0 data
.org 0x68bf4
	.byte 0x40,0xe0,0x02,0x02	@ 00068bf4 data
.org 0x68bf8
	.byte 0x0c,0x40,0xc4,0x08	@ 00068bf8 data
.org 0x68bfc
	.byte 0x40,0xde,0x02,0x02	@ 00068bfc data
.org 0x68c00
	.byte 0xf4,0x06,0x00,0x00	@ 00068c00 data
.org 0x68c04
	adds r0, r7, #0	@ 00068c04 381c
.org 0x68c06
	movs r1, #3	@ 00068c06 0321
.org 0x68c08
	movs r2, #0	@ 00068c08 0022
.org 0x68c0a
	bl 0x9ea98	@ 00068c0a 35f045ff
.org 0x68c0e
	adds r6, r0, #0	@ 00068c0e 061c
.org 0x68c10
	cmp r6, #0	@ 00068c10 002e
.org 0x68c12
	bne.n 0x68c80	@ 00068c12 35d1
.org 0x68c14
	mov r2, r8	@ 00068c14 4246
.org 0x68c16
	ldrb r1, [r2, #10]	@ 00068c16 917a
.org 0x68c18
	movs r0, #254	@ 00068c18 fe20
.org 0x68c1a
	ands r0, r1	@ 00068c1a 0840
.org 0x68c1c
	movs r3, #253	@ 00068c1c fd23
.org 0x68c1e
	ands r0, r3	@ 00068c1e 1840
.org 0x68c20
	strb r0, [r2, #10]	@ 00068c20 9072
.org 0x68c22
	mov r0, r8	@ 00068c22 4046
.org 0x68c24
	adds r0, #140	@ 00068c24 8c30
.org 0x68c26
	str r6, [r0, #0]	@ 00068c26 0660
.org 0x68c28
	adds r0, #4	@ 00068c28 0430
.org 0x68c2a
	str r6, [r0, #0]	@ 00068c2a 0660
.org 0x68c2c
	adds r0, #4	@ 00068c2c 0430
.org 0x68c2e
	strb r6, [r0, #0]	@ 00068c2e 0670
.org 0x68c30
	ldrb r1, [r2, #10]	@ 00068c30 917a
.org 0x68c32
	movs r2, #251	@ 00068c32 fb22
.org 0x68c34
	adds r0, r2, #0	@ 00068c34 101c
.org 0x68c36
	ands r0, r1	@ 00068c36 0840
.org 0x68c38
	mov r4, r8	@ 00068c38 4446
.org 0x68c3a
	strb r0, [r4, #10]	@ 00068c3a a072
.org 0x68c3c
	ldr r1, [pc, #56]	@ 00068c3c 0e49
.org 0x68c3e
	ldrb r0, [r4, #9]	@ 00068c3e 607a
.org 0x68c40
	lsls r0, r0, #2	@ 00068c40 8000
.org 0x68c42
	adds r0, r0, r1	@ 00068c42 4018
.org 0x68c44
	movs r1, #3	@ 00068c44 0321
.org 0x68c46
	str r1, [r4, #12]	@ 00068c46 e160
.org 0x68c48
	ldr r0, [r0, #0]	@ 00068c48 0068
.org 0x68c4a
	ldr r0, [r0, #12]	@ 00068c4a c068
.org 0x68c4c
	str r0, [r4, #20]	@ 00068c4c 6061
.org 0x68c4e
	ldrb r1, [r7, #10]	@ 00068c4e b97a
.org 0x68c50
	movs r0, #254	@ 00068c50 fe20
.org 0x68c52
	ands r0, r1	@ 00068c52 0840
.org 0x68c54
	ands r0, r3	@ 00068c54 1840
.org 0x68c56
	strb r0, [r7, #10]	@ 00068c56 b872
.org 0x68c58
	adds r0, r7, #0	@ 00068c58 381c
.org 0x68c5a
	adds r0, #140	@ 00068c5a 8c30
.org 0x68c5c
	str r6, [r0, #0]	@ 00068c5c 0660
.org 0x68c5e
	adds r0, #4	@ 00068c5e 0430
.org 0x68c60
	str r6, [r0, #0]	@ 00068c60 0660
.org 0x68c62
	adds r0, #4	@ 00068c62 0430
.org 0x68c64
	strb r6, [r0, #0]	@ 00068c64 0670
.org 0x68c66
	ldrb r0, [r7, #10]	@ 00068c66 b87a
.org 0x68c68
	ands r2, r0	@ 00068c68 0240
.org 0x68c6a
	strb r2, [r7, #10]	@ 00068c6a ba72
.org 0x68c6c
	ldrb r0, [r7, #9]	@ 00068c6c 787a
.org 0x68c6e
	lsls r0, r0, #2	@ 00068c6e 8000
.org 0x68c70
	ldr r2, [pc, #8]	@ 00068c70 024a
.org 0x68c72
	adds r0, r0, r2	@ 00068c72 8018
.org 0x68c74
	movs r3, #3	@ 00068c74 0323
.org 0x68c76
	b.n 0x68e0c	@ 00068c76 c9e0
.org 0x68c78
	.byte 0x40,0xdb,0x85,0x08	@ 00068c78 data
.org 0x68c7c
	.byte 0x70,0x7d,0x85,0x08	@ 00068c7c data
.org 0x68c80
	adds r0, r7, #0	@ 00068c80 381c
.org 0x68c82
	movs r1, #2	@ 00068c82 0221
.org 0x68c84
	movs r2, #0	@ 00068c84 0022
.org 0x68c86
	bl 0x9ea98	@ 00068c86 35f007ff
.org 0x68c8a
	adds r5, r0, #0	@ 00068c8a 051c
.org 0x68c8c
	cmp r5, #0	@ 00068c8c 002d
.org 0x68c8e
	bne.n 0x68d30	@ 00068c8e 4fd1
.org 0x68c90
	ldrb r1, [r6, #10]	@ 00068c90 b17a
.org 0x68c92
	movs r0, #254	@ 00068c92 fe20
.org 0x68c94
	ands r0, r1	@ 00068c94 0840
.org 0x68c96
	movs r3, #253	@ 00068c96 fd23
.org 0x68c98
	ands r0, r3	@ 00068c98 1840
.org 0x68c9a
	strb r0, [r6, #10]	@ 00068c9a b072
.org 0x68c9c
	adds r0, r6, #0	@ 00068c9c 301c
.org 0x68c9e
	adds r0, #140	@ 00068c9e 8c30
.org 0x68ca0
	str r5, [r0, #0]	@ 00068ca0 0560
.org 0x68ca2
	adds r0, #4	@ 00068ca2 0430
.org 0x68ca4
	str r5, [r0, #0]	@ 00068ca4 0560
.org 0x68ca6
	adds r0, #4	@ 00068ca6 0430
.org 0x68ca8
	strb r5, [r0, #0]	@ 00068ca8 0570
.org 0x68caa
	ldrb r1, [r6, #10]	@ 00068caa b17a
.org 0x68cac
	movs r2, #251	@ 00068cac fb22
.org 0x68cae
	adds r0, r2, #0	@ 00068cae 101c
.org 0x68cb0
	ands r0, r1	@ 00068cb0 0840
.org 0x68cb2
	strb r0, [r6, #10]	@ 00068cb2 b072
.org 0x68cb4
	ldr r4, [pc, #112]	@ 00068cb4 1c4c
.org 0x68cb6
	ldrb r0, [r6, #9]	@ 00068cb6 707a
.org 0x68cb8
	lsls r0, r0, #2	@ 00068cb8 8000
.org 0x68cba
	adds r0, r0, r4	@ 00068cba 0019
.org 0x68cbc
	movs r1, #3	@ 00068cbc 0321
.org 0x68cbe
	str r1, [r6, #12]	@ 00068cbe f160
.org 0x68cc0
	ldr r0, [r0, #0]	@ 00068cc0 0068
.org 0x68cc2
	ldr r0, [r0, #12]	@ 00068cc2 c068
.org 0x68cc4
	str r0, [r6, #20]	@ 00068cc4 7061
.org 0x68cc6
	mov r0, r8	@ 00068cc6 4046
.org 0x68cc8
	ldrb r1, [r0, #10]	@ 00068cc8 817a
.org 0x68cca
	movs r0, #254	@ 00068cca fe20
.org 0x68ccc
	ands r0, r1	@ 00068ccc 0840
.org 0x68cce
	ands r0, r3	@ 00068cce 1840
.org 0x68cd0
	mov r1, r8	@ 00068cd0 4146
.org 0x68cd2
	strb r0, [r1, #10]	@ 00068cd2 8872
.org 0x68cd4
	mov r0, r8	@ 00068cd4 4046
.org 0x68cd6
	adds r0, #140	@ 00068cd6 8c30
.org 0x68cd8
	str r5, [r0, #0]	@ 00068cd8 0560
.org 0x68cda
	adds r0, #4	@ 00068cda 0430
.org 0x68cdc
	str r5, [r0, #0]	@ 00068cdc 0560
.org 0x68cde
	adds r0, #4	@ 00068cde 0430
.org 0x68ce0
	strb r5, [r0, #0]	@ 00068ce0 0570
.org 0x68ce2
	ldrb r1, [r1, #10]	@ 00068ce2 897a
.org 0x68ce4
	adds r0, r2, #0	@ 00068ce4 101c
.org 0x68ce6
	ands r0, r1	@ 00068ce6 0840
.org 0x68ce8
	mov r1, r8	@ 00068ce8 4146
.org 0x68cea
	strb r0, [r1, #10]	@ 00068cea 8872
.org 0x68cec
	ldrb r0, [r1, #9]	@ 00068cec 487a
.org 0x68cee
	lsls r0, r0, #2	@ 00068cee 8000
.org 0x68cf0
	adds r0, r0, r4	@ 00068cf0 0019
.org 0x68cf2
	movs r4, #3	@ 00068cf2 0324
.org 0x68cf4
	str r4, [r1, #12]	@ 00068cf4 cc60
.org 0x68cf6
	ldr r0, [r0, #0]	@ 00068cf6 0068
.org 0x68cf8
	ldr r0, [r0, #12]	@ 00068cf8 c068
.org 0x68cfa
	str r0, [r1, #20]	@ 00068cfa 4861
.org 0x68cfc
	ldrb r1, [r7, #10]	@ 00068cfc b97a
.org 0x68cfe
	movs r0, #254	@ 00068cfe fe20
.org 0x68d00
	ands r0, r1	@ 00068d00 0840
.org 0x68d02
	ands r0, r3	@ 00068d02 1840
.org 0x68d04
	strb r0, [r7, #10]	@ 00068d04 b872
.org 0x68d06
	adds r0, r7, #0	@ 00068d06 381c
.org 0x68d08
	adds r0, #140	@ 00068d08 8c30
.org 0x68d0a
	str r5, [r0, #0]	@ 00068d0a 0560
.org 0x68d0c
	adds r0, #4	@ 00068d0c 0430
.org 0x68d0e
	str r5, [r0, #0]	@ 00068d0e 0560
.org 0x68d10
	adds r0, #4	@ 00068d10 0430
.org 0x68d12
	strb r5, [r0, #0]	@ 00068d12 0570
.org 0x68d14
	ldrb r0, [r7, #10]	@ 00068d14 b87a
.org 0x68d16
	ands r2, r0	@ 00068d16 0240
.org 0x68d18
	strb r2, [r7, #10]	@ 00068d18 ba72
.org 0x68d1a
	ldrb r0, [r7, #9]	@ 00068d1a 787a
.org 0x68d1c
	lsls r0, r0, #2	@ 00068d1c 8000
.org 0x68d1e
	ldr r1, [pc, #12]	@ 00068d1e 0349
.org 0x68d20
	adds r0, r0, r1	@ 00068d20 4018
.org 0x68d22
	str r4, [r7, #12]	@ 00068d22 fc60
.org 0x68d24
	b.n 0x68e0e	@ 00068d24 73e0
.org 0x68d26
	.byte 0x00	@ 00068d26 data
.org 0x68d27
	.byte 0x00	@ 00068d27 data
.org 0x68d28
	.byte 0x40,0xdb,0x85,0x08	@ 00068d28 data
.org 0x68d2c
	.byte 0x70,0x7d,0x85,0x08	@ 00068d2c data
.org 0x68d30
	adds r0, r7, #0	@ 00068d30 381c
.org 0x68d32
	movs r1, #1	@ 00068d32 0121
.org 0x68d34
	movs r2, #0	@ 00068d34 0022
.org 0x68d36
	bl 0x9ea98	@ 00068d36 35f0affe
.org 0x68d3a
	mov r9, r0	@ 00068d3a 8146
.org 0x68d3c
	cmp r0, #0	@ 00068d3c 0028
.org 0x68d3e
	bne.n 0x68e20	@ 00068d3e 6fd1
.org 0x68d40
	ldrb r1, [r5, #10]	@ 00068d40 a97a
.org 0x68d42
	movs r0, #254	@ 00068d42 fe20
.org 0x68d44
	ands r0, r1	@ 00068d44 0840
.org 0x68d46
	movs r4, #253	@ 00068d46 fd24
.org 0x68d48
	ands r0, r4	@ 00068d48 2040
.org 0x68d4a
	strb r0, [r5, #10]	@ 00068d4a a872
.org 0x68d4c
	adds r0, r5, #0	@ 00068d4c 281c
.org 0x68d4e
	adds r0, #140	@ 00068d4e 8c30
.org 0x68d50
	mov r2, r9	@ 00068d50 4a46
.org 0x68d52
	str r2, [r0, #0]	@ 00068d52 0260
.org 0x68d54
	adds r0, #4	@ 00068d54 0430
.org 0x68d56
	str r2, [r0, #0]	@ 00068d56 0260
.org 0x68d58
	adds r0, #4	@ 00068d58 0430
.org 0x68d5a
	strb r2, [r0, #0]	@ 00068d5a 0270
.org 0x68d5c
	ldrb r1, [r5, #10]	@ 00068d5c a97a
.org 0x68d5e
	movs r2, #251	@ 00068d5e fb22
.org 0x68d60
	adds r0, r2, #0	@ 00068d60 101c
.org 0x68d62
	ands r0, r1	@ 00068d62 0840
.org 0x68d64
	strb r0, [r5, #10]	@ 00068d64 a872
.org 0x68d66
	ldr r3, [pc, #176]	@ 00068d66 2c4b
.org 0x68d68
	ldrb r0, [r5, #9]	@ 00068d68 687a
.org 0x68d6a
	lsls r0, r0, #2	@ 00068d6a 8000
.org 0x68d6c
	adds r0, r0, r3	@ 00068d6c c018
.org 0x68d6e
	movs r1, #3	@ 00068d6e 0321
.org 0x68d70
	str r1, [r5, #12]	@ 00068d70 e960
.org 0x68d72
	ldr r0, [r0, #0]	@ 00068d72 0068
.org 0x68d74
	ldr r0, [r0, #12]	@ 00068d74 c068
.org 0x68d76
	str r0, [r5, #20]	@ 00068d76 6861
.org 0x68d78
	ldrb r1, [r6, #10]	@ 00068d78 b17a
.org 0x68d7a
	movs r0, #254	@ 00068d7a fe20
.org 0x68d7c
	ands r0, r1	@ 00068d7c 0840
.org 0x68d7e
	ands r0, r4	@ 00068d7e 2040
.org 0x68d80
	strb r0, [r6, #10]	@ 00068d80 b072
.org 0x68d82
	adds r0, r6, #0	@ 00068d82 301c
.org 0x68d84
	adds r0, #140	@ 00068d84 8c30
.org 0x68d86
	mov r1, r9	@ 00068d86 4946
.org 0x68d88
	str r1, [r0, #0]	@ 00068d88 0160
.org 0x68d8a
	adds r0, #4	@ 00068d8a 0430
.org 0x68d8c
	str r1, [r0, #0]	@ 00068d8c 0160
.org 0x68d8e
	adds r0, #4	@ 00068d8e 0430
.org 0x68d90
	strb r1, [r0, #0]	@ 00068d90 0170
.org 0x68d92
	ldrb r1, [r6, #10]	@ 00068d92 b17a
.org 0x68d94
	adds r0, r2, #0	@ 00068d94 101c
.org 0x68d96
	ands r0, r1	@ 00068d96 0840
.org 0x68d98
	strb r0, [r6, #10]	@ 00068d98 b072
.org 0x68d9a
	ldrb r0, [r6, #9]	@ 00068d9a 707a
.org 0x68d9c
	lsls r0, r0, #2	@ 00068d9c 8000
.org 0x68d9e
	adds r0, r0, r3	@ 00068d9e c018
.org 0x68da0
	movs r1, #3	@ 00068da0 0321
.org 0x68da2
	str r1, [r6, #12]	@ 00068da2 f160
.org 0x68da4
	ldr r0, [r0, #0]	@ 00068da4 0068
.org 0x68da6
	ldr r0, [r0, #12]	@ 00068da6 c068
.org 0x68da8
	str r0, [r6, #20]	@ 00068da8 7061
.org 0x68daa
	mov r0, r8	@ 00068daa 4046
.org 0x68dac
	ldrb r1, [r0, #10]	@ 00068dac 817a
.org 0x68dae
	movs r0, #254	@ 00068dae fe20
.org 0x68db0
	ands r0, r1	@ 00068db0 0840
.org 0x68db2
	ands r0, r4	@ 00068db2 2040
.org 0x68db4
	mov r1, r8	@ 00068db4 4146
.org 0x68db6
	strb r0, [r1, #10]	@ 00068db6 8872
.org 0x68db8
	mov r0, r8	@ 00068db8 4046
.org 0x68dba
	adds r0, #140	@ 00068dba 8c30
.org 0x68dbc
	mov r1, r9	@ 00068dbc 4946
.org 0x68dbe
	str r1, [r0, #0]	@ 00068dbe 0160
.org 0x68dc0
	adds r0, #4	@ 00068dc0 0430
.org 0x68dc2
	str r1, [r0, #0]	@ 00068dc2 0160
.org 0x68dc4
	adds r0, #4	@ 00068dc4 0430
.org 0x68dc6
	strb r1, [r0, #0]	@ 00068dc6 0170
.org 0x68dc8
	mov r0, r8	@ 00068dc8 4046
.org 0x68dca
	ldrb r1, [r0, #10]	@ 00068dca 817a
.org 0x68dcc
	adds r0, r2, #0	@ 00068dcc 101c
.org 0x68dce
	ands r0, r1	@ 00068dce 0840
.org 0x68dd0
	mov r1, r8	@ 00068dd0 4146
.org 0x68dd2
	strb r0, [r1, #10]	@ 00068dd2 8872
.org 0x68dd4
	ldrb r0, [r1, #9]	@ 00068dd4 487a
.org 0x68dd6
	lsls r0, r0, #2	@ 00068dd6 8000
.org 0x68dd8
	adds r0, r0, r3	@ 00068dd8 c018
.org 0x68dda
	movs r3, #3	@ 00068dda 0323
.org 0x68ddc
	str r3, [r1, #12]	@ 00068ddc cb60
.org 0x68dde
	ldr r0, [r0, #0]	@ 00068dde 0068
.org 0x68de0
	ldr r0, [r0, #12]	@ 00068de0 c068
.org 0x68de2
	str r0, [r1, #20]	@ 00068de2 4861
.org 0x68de4
	ldrb r1, [r7, #10]	@ 00068de4 b97a
.org 0x68de6
	movs r0, #254	@ 00068de6 fe20
.org 0x68de8
	ands r0, r1	@ 00068de8 0840
.org 0x68dea
	ands r0, r4	@ 00068dea 2040
.org 0x68dec
	strb r0, [r7, #10]	@ 00068dec b872
.org 0x68dee
	adds r0, r7, #0	@ 00068dee 381c
.org 0x68df0
	adds r0, #140	@ 00068df0 8c30
.org 0x68df2
	mov r4, r9	@ 00068df2 4c46
.org 0x68df4
	str r4, [r0, #0]	@ 00068df4 0460
.org 0x68df6
	adds r0, #4	@ 00068df6 0430
.org 0x68df8
	str r4, [r0, #0]	@ 00068df8 0460
.org 0x68dfa
	adds r0, #4	@ 00068dfa 0430
.org 0x68dfc
	strb r4, [r0, #0]	@ 00068dfc 0470
.org 0x68dfe
	ldrb r0, [r7, #10]	@ 00068dfe b87a
.org 0x68e00
	ands r2, r0	@ 00068e00 0240
.org 0x68e02
	strb r2, [r7, #10]	@ 00068e02 ba72
.org 0x68e04
	ldrb r0, [r7, #9]	@ 00068e04 787a
.org 0x68e06
	lsls r0, r0, #2	@ 00068e06 8000
.org 0x68e08
	ldr r1, [pc, #16]	@ 00068e08 0449
.org 0x68e0a
	adds r0, r0, r1	@ 00068e0a 4018
.org 0x68e0c
	str r3, [r7, #12]	@ 00068e0c fb60
.org 0x68e0e
	ldr r0, [r0, #0]	@ 00068e0e 0068
.org 0x68e10
	ldr r0, [r0, #12]	@ 00068e10 c068
.org 0x68e12
	str r0, [r7, #20]	@ 00068e12 7861
.org 0x68e14
	b.n 0x690d8	@ 00068e14 60e1
.org 0x68e16
	.byte 0x00	@ 00068e16 data
.org 0x68e17
	.byte 0x00	@ 00068e17 data
.org 0x68e18
	.byte 0x40,0xdb,0x85,0x08	@ 00068e18 data
.org 0x68e1c
	.byte 0x70,0x7d,0x85,0x08	@ 00068e1c data
.org 0x68e20
	adds r0, r7, #0	@ 00068e20 381c
.org 0x68e22
	adds r0, #180	@ 00068e22 b430
.org 0x68e24
	mov r2, r8	@ 00068e24 4246
.org 0x68e26
	str r2, [r0, #0]	@ 00068e26 0260
.org 0x68e28
	adds r0, #4	@ 00068e28 0430
.org 0x68e2a
	mov r3, r9	@ 00068e2a 4b46
.org 0x68e2c
	str r3, [r0, #0]	@ 00068e2c 0360
.org 0x68e2e
	adds r0, #4	@ 00068e2e 0430
.org 0x68e30
	str r5, [r0, #0]	@ 00068e30 0560
.org 0x68e32
	adds r0, #4	@ 00068e32 0430
.org 0x68e34
	str r6, [r0, #0]	@ 00068e34 0660
.org 0x68e36
	mov r0, r8	@ 00068e36 4046
.org 0x68e38
	bl 0x9eaf8	@ 00068e38 35f05efe
.org 0x68e3c
	mov r0, r9	@ 00068e3c 4846
.org 0x68e3e
	bl 0x9eaf8	@ 00068e3e 35f05bfe
.org 0x68e42
	adds r0, r5, #0	@ 00068e42 281c
.org 0x68e44
	bl 0x9eaf8	@ 00068e44 35f058fe
.org 0x68e48
	adds r0, r6, #0	@ 00068e48 301c
.org 0x68e4a
	bl 0x9eaf8	@ 00068e4a 35f055fe
.org 0x68e4e
	mov r4, sl	@ 00068e4e 5446
.org 0x68e50
	cmp r4, #0	@ 00068e50 002c
.org 0x68e52
	bne.n 0x68e68	@ 00068e52 09d1
.org 0x68e54
	adds r0, r7, #0	@ 00068e54 381c
.org 0x68e56
	movs r1, #1	@ 00068e56 0121
.org 0x68e58
	bl 0x6a7c8	@ 00068e58 01f0b6fc
.org 0x68e5c
	ldr r1, [pc, #4]	@ 00068e5c 0149
.org 0x68e5e
	adds r0, r0, r1	@ 00068e5e 4018
.org 0x68e60
	b.n 0x68e74	@ 00068e60 08e0
.org 0x68e62
	.byte 0x00	@ 00068e62 data
.org 0x68e63
	.byte 0x00	@ 00068e63 data
.org 0x68e64
	.byte 0x00,0xc0,0xff,0xff	@ 00068e64 data
.org 0x68e68
	adds r0, r7, #0	@ 00068e68 381c
.org 0x68e6a
	movs r1, #1	@ 00068e6a 0121
.org 0x68e6c
	bl 0x6a7c8	@ 00068e6c 01f0acfc
.org 0x68e70
	ldr r2, [pc, #236]	@ 00068e70 3b4a
.org 0x68e72
	adds r0, r0, r2	@ 00068e72 8018
.org 0x68e74
	str r0, [sp, #4]	@ 00068e74 0190
.org 0x68e76
	adds r0, r7, #0	@ 00068e76 381c
.org 0x68e78
	movs r1, #3	@ 00068e78 0321
.org 0x68e7a
	bl 0x6a7c8	@ 00068e7a 01f0a5fc
.org 0x68e7e
	ldr r3, [pc, #224]	@ 00068e7e 384b
.org 0x68e80
	adds r0, r0, r3	@ 00068e80 c018
.org 0x68e82
	add r4, sp, #4	@ 00068e82 01ac
.org 0x68e84
	str r0, [r4, #4]	@ 00068e84 6060
.org 0x68e86
	mov r1, sl	@ 00068e86 5146
.org 0x68e88
	lsls r0, r1, #1	@ 00068e88 4800
.org 0x68e8a
	subs r0, #1	@ 00068e8a 0138
.org 0x68e8c
	lsls r1, r0, #2	@ 00068e8c 8100
.org 0x68e8e
	adds r1, r1, r0	@ 00068e8e 0918
.org 0x68e90
	lsls r1, r1, #11	@ 00068e90 c902
.org 0x68e92
	ldr r0, [sp, #4]	@ 00068e92 0198
.org 0x68e94
	subs r0, r0, r1	@ 00068e94 401a
.org 0x68e96
	str r0, [sp, #12]	@ 00068e96 0390
.org 0x68e98
	ldr r3, [r4, #4]	@ 00068e98 6368
.org 0x68e9a
	str r3, [sp, #16]	@ 00068e9a 0493
.org 0x68e9c
	ldr r2, [sp, #4]	@ 00068e9c 019a
.org 0x68e9e
	mov ip, r2	@ 00068e9e 9446
.org 0x68ea0
	adds r2, r0, #0	@ 00068ea0 021c
.org 0x68ea2
	mov r1, ip	@ 00068ea2 6146
.org 0x68ea4
	subs r0, r2, r1	@ 00068ea4 501a
.org 0x68ea6
	lsrs r1, r0, #31	@ 00068ea6 c10f
.org 0x68ea8
	adds r0, r0, r1	@ 00068ea8 4018
.org 0x68eaa
	asrs r0, r0, #1	@ 00068eaa 4010
.org 0x68eac
	add r0, ip	@ 00068eac 6044
.org 0x68eae
	str r0, [sp, #20]	@ 00068eae 0590
.org 0x68eb0
	ldr r4, [r4, #4]	@ 00068eb0 6468
.org 0x68eb2
	str r4, [sp, #48]	@ 00068eb2 0c94
.org 0x68eb4
	subs r0, r3, r4	@ 00068eb4 181b
.org 0x68eb6
	lsrs r1, r0, #31	@ 00068eb6 c10f
.org 0x68eb8
	adds r0, r0, r1	@ 00068eb8 4018
.org 0x68eba
	asrs r0, r0, #1	@ 00068eba 4010
.org 0x68ebc
	adds r0, r0, r4	@ 00068ebc 0019
.org 0x68ebe
	str r0, [sp, #24]	@ 00068ebe 0690
.org 0x68ec0
	ldr r4, [pc, #160]	@ 00068ec0 284c
.org 0x68ec2
	ldr r0, [sp, #36]	@ 00068ec2 0998
.org 0x68ec4
	adds r0, #192	@ 00068ec4 c030
.org 0x68ec6
	lsls r0, r0, #24	@ 00068ec6 0006
.org 0x68ec8
	lsrs r0, r0, #23	@ 00068ec8 c00d
.org 0x68eca
	adds r1, r0, r4	@ 00068eca 0119
.org 0x68ecc
	movs r0, #0	@ 00068ecc 0020
.org 0x68ece
	ldrsh r1, [r1, r0]	@ 00068ece 095e
.org 0x68ed0
	lsls r0, r1, #1	@ 00068ed0 4800
.org 0x68ed2
	adds r0, r0, r1	@ 00068ed2 4018
.org 0x68ed4
	lsls r0, r0, #2	@ 00068ed4 8000
.org 0x68ed6
	add ip, r0	@ 00068ed6 8444
.org 0x68ed8
	ldr r0, [sp, #36]	@ 00068ed8 0998
.org 0x68eda
	adds r0, #64	@ 00068eda 4030
.org 0x68edc
	lsls r0, r0, #24	@ 00068edc 0006
.org 0x68ede
	lsrs r0, r0, #23	@ 00068ede c00d
.org 0x68ee0
	adds r1, r0, r4	@ 00068ee0 0119
.org 0x68ee2
	movs r0, #0	@ 00068ee2 0020
.org 0x68ee4
	ldrsh r1, [r1, r0]	@ 00068ee4 095e
.org 0x68ee6
	lsls r0, r1, #1	@ 00068ee6 4800
.org 0x68ee8
	adds r0, r0, r1	@ 00068ee8 4018
.org 0x68eea
	lsls r0, r0, #2	@ 00068eea 8000
.org 0x68eec
	adds r2, r2, r0	@ 00068eec 1218
.org 0x68eee
	mov r1, ip	@ 00068eee 6146
.org 0x68ef0
	subs r2, r2, r1	@ 00068ef0 521a
.org 0x68ef2
	lsrs r0, r2, #31	@ 00068ef2 d00f
.org 0x68ef4
	adds r2, r2, r0	@ 00068ef4 1218
.org 0x68ef6
	asrs r2, r2, #1	@ 00068ef6 5210
.org 0x68ef8
	add r2, ip	@ 00068ef8 6244
.org 0x68efa
	str r2, [sp, #28]	@ 00068efa 0792
.org 0x68efc
	ldr r0, [sp, #36]	@ 00068efc 0998
.org 0x68efe
	adds r0, #128	@ 00068efe 8030
.org 0x68f00
	lsls r0, r0, #24	@ 00068f00 0006
.org 0x68f02
	lsrs r0, r0, #23	@ 00068f02 c00d
.org 0x68f04
	adds r0, r0, r4	@ 00068f04 0019
.org 0x68f06
	movs r2, #0	@ 00068f06 0022
.org 0x68f08
	ldrsh r1, [r0, r2]	@ 00068f08 815e
.org 0x68f0a
	lsls r0, r1, #1	@ 00068f0a 4800
.org 0x68f0c
	adds r0, r0, r1	@ 00068f0c 4018
.org 0x68f0e
	lsls r0, r0, #2	@ 00068f0e 8000
.org 0x68f10
	ldr r1, [sp, #48]	@ 00068f10 0c99
.org 0x68f12
	adds r2, r1, r0	@ 00068f12 0a18
.org 0x68f14
	ldr r1, [sp, #36]	@ 00068f14 0999
.org 0x68f16
	lsls r0, r1, #1	@ 00068f16 4800
.org 0x68f18
	adds r0, r0, r4	@ 00068f18 0019
.org 0x68f1a
	movs r4, #0	@ 00068f1a 0024
.org 0x68f1c
	ldrsh r1, [r0, r4]	@ 00068f1c 015f
.org 0x68f1e
	lsls r0, r1, #1	@ 00068f1e 4800
.org 0x68f20
	adds r0, r0, r1	@ 00068f20 4018
.org 0x68f22
	lsls r0, r0, #2	@ 00068f22 8000
.org 0x68f24
	adds r3, r3, r0	@ 00068f24 1b18
.org 0x68f26
	subs r3, r3, r2	@ 00068f26 9b1a
.org 0x68f28
	lsrs r0, r3, #31	@ 00068f28 d80f
.org 0x68f2a
	adds r3, r3, r0	@ 00068f2a 1b18
.org 0x68f2c
	asrs r3, r3, #1	@ 00068f2c 5b10
.org 0x68f2e
	adds r3, r2, r3	@ 00068f2e d318
.org 0x68f30
	str r3, [sp, #32]	@ 00068f30 0893
.org 0x68f32
	movs r3, #1	@ 00068f32 0123
.org 0x68f34
	mov r1, sl	@ 00068f34 5146
.org 0x68f36
	ands r1, r3	@ 00068f36 1940
.org 0x68f38
	adds r0, r7, #0	@ 00068f38 381c
.org 0x68f3a
	adds r0, #76	@ 00068f3a 4c30
.org 0x68f3c
	strb r1, [r0, #0]	@ 00068f3c 0170
.org 0x68f3e
	adds r4, r7, #0	@ 00068f3e 3c1c
.org 0x68f40
	adds r4, #74	@ 00068f40 4a34
.org 0x68f42
	lsls r1, r1, #4	@ 00068f42 0901
.org 0x68f44
	ldrb r2, [r4, #0]	@ 00068f44 2278
.org 0x68f46
	movs r0, #17	@ 00068f46 1120
.org 0x68f48
	negs r0, r0	@ 00068f48 4042
.org 0x68f4a
	ands r0, r2	@ 00068f4a 1040
.org 0x68f4c
	orrs r0, r1	@ 00068f4c 0843
.org 0x68f4e
	strb r0, [r4, #0]	@ 00068f4e 2070
.org 0x68f50
	mov r0, sl	@ 00068f50 5046
.org 0x68f52
	ands r0, r3	@ 00068f52 1840
.org 0x68f54
	cmp r0, #0	@ 00068f54 0028
.org 0x68f56
	beq.n 0x68f68	@ 00068f56 07d0
.org 0x68f58
	ldrb r0, [r7, #10]	@ 00068f58 b87a
.org 0x68f5a
	movs r1, #16	@ 00068f5a 1021
.org 0x68f5c
	orrs r0, r1	@ 00068f5c 0843
.org 0x68f5e
	b.n 0x68f6e	@ 00068f5e 06e0
.org 0x68f60
	.byte 0x00,0xe8,0xff,0xff	@ 00068f60 data
.org 0x68f64
	.byte 0x0c,0x93,0x12,0x08	@ 00068f64 data
.org 0x68f68
	ldrb r1, [r7, #10]	@ 00068f68 b97a
.org 0x68f6a
	movs r0, #239	@ 00068f6a ef20
.org 0x68f6c
	ands r0, r1	@ 00068f6c 0840
.org 0x68f6e
	strb r0, [r7, #10]	@ 00068f6e b872
.org 0x68f70
	mov r2, sl	@ 00068f70 5246
.org 0x68f72
	cmp r2, #0	@ 00068f72 002a
.org 0x68f74
	beq.n 0x68f84	@ 00068f74 06d0
.org 0x68f76
	mov r0, r8	@ 00068f76 4046
.org 0x68f78
	ldrb r1, [r0, #10]	@ 00068f78 817a
.org 0x68f7a
	movs r0, #16	@ 00068f7a 1020
.org 0x68f7c
	orrs r0, r1	@ 00068f7c 0843
.org 0x68f7e
	mov r1, r8	@ 00068f7e 4146
.org 0x68f80
	strb r0, [r1, #10]	@ 00068f80 8872
.org 0x68f82
	b.n 0x68f8e	@ 00068f82 04e0
.org 0x68f84
	mov r3, r8	@ 00068f84 4346
.org 0x68f86
	ldrb r1, [r3, #10]	@ 00068f86 997a
.org 0x68f88
	movs r0, #239	@ 00068f88 ef20
.org 0x68f8a
	ands r0, r1	@ 00068f8a 0840
.org 0x68f8c
	strb r0, [r3, #10]	@ 00068f8c 9872
.org 0x68f8e
	adds r1, r2, #0	@ 00068f8e 111c
.org 0x68f90
	mov r0, r8	@ 00068f90 4046
.org 0x68f92
	adds r0, #76	@ 00068f92 4c30
.org 0x68f94
	strb r1, [r0, #0]	@ 00068f94 0170
.org 0x68f96
	mov r3, r8	@ 00068f96 4346
.org 0x68f98
	adds r3, #74	@ 00068f98 4a33
.org 0x68f9a
	lsls r1, r1, #4	@ 00068f9a 0901
.org 0x68f9c
	ldrb r2, [r3, #0]	@ 00068f9c 1a78
.org 0x68f9e
	movs r0, #17	@ 00068f9e 1120
.org 0x68fa0
	negs r0, r0	@ 00068fa0 4042
.org 0x68fa2
	ands r0, r2	@ 00068fa2 1040
.org 0x68fa4
	orrs r0, r1	@ 00068fa4 0843
.org 0x68fa6
	strb r0, [r3, #0]	@ 00068fa6 1870
.org 0x68fa8
	mov r2, sl	@ 00068fa8 5246
.org 0x68faa
	cmp r2, #0	@ 00068faa 002a
.org 0x68fac
	beq.n 0x68fba	@ 00068fac 05d0
.org 0x68fae
	mov r4, r9	@ 00068fae 4c46
.org 0x68fb0
	ldrb r0, [r4, #10]	@ 00068fb0 a07a
.org 0x68fb2
	movs r1, #16	@ 00068fb2 1021
.org 0x68fb4
	orrs r0, r1	@ 00068fb4 0843
.org 0x68fb6
	strb r0, [r4, #10]	@ 00068fb6 a072
.org 0x68fb8
	b.n 0x68fc6	@ 00068fb8 05e0
.org 0x68fba
	mov r0, r9	@ 00068fba 4846
.org 0x68fbc
	ldrb r1, [r0, #10]	@ 00068fbc 817a
.org 0x68fbe
	movs r0, #239	@ 00068fbe ef20
.org 0x68fc0
	ands r0, r1	@ 00068fc0 0840
.org 0x68fc2
	mov r1, r9	@ 00068fc2 4946
.org 0x68fc4
	strb r0, [r1, #10]	@ 00068fc4 8872
.org 0x68fc6
	adds r1, r2, #0	@ 00068fc6 111c
.org 0x68fc8
	mov r0, r9	@ 00068fc8 4846
.org 0x68fca
	adds r0, #76	@ 00068fca 4c30
.org 0x68fcc
	strb r1, [r0, #0]	@ 00068fcc 0170
.org 0x68fce
	mov r3, r9	@ 00068fce 4b46
.org 0x68fd0
	adds r3, #74	@ 00068fd0 4a33
.org 0x68fd2
	lsls r1, r1, #4	@ 00068fd2 0901
.org 0x68fd4
	ldrb r2, [r3, #0]	@ 00068fd4 1a78
.org 0x68fd6
	movs r0, #17	@ 00068fd6 1120
.org 0x68fd8
	negs r0, r0	@ 00068fd8 4042
.org 0x68fda
	ands r0, r2	@ 00068fda 1040
.org 0x68fdc
	orrs r0, r1	@ 00068fdc 0843
.org 0x68fde
	strb r0, [r3, #0]	@ 00068fde 1870
.org 0x68fe0
	mov r2, sl	@ 00068fe0 5246
.org 0x68fe2
	cmp r2, #0	@ 00068fe2 002a
.org 0x68fe4
	beq.n 0x68fee	@ 00068fe4 03d0
.org 0x68fe6
	ldrb r0, [r5, #10]	@ 00068fe6 a87a
.org 0x68fe8
	movs r1, #16	@ 00068fe8 1021
.org 0x68fea
	orrs r0, r1	@ 00068fea 0843
.org 0x68fec
	b.n 0x68ff4	@ 00068fec 02e0
.org 0x68fee
	ldrb r1, [r5, #10]	@ 00068fee a97a
.org 0x68ff0
	movs r0, #239	@ 00068ff0 ef20
.org 0x68ff2
	ands r0, r1	@ 00068ff2 0840
.org 0x68ff4
	strb r0, [r5, #10]	@ 00068ff4 a872
.org 0x68ff6
	adds r1, r2, #0	@ 00068ff6 111c
.org 0x68ff8
	adds r0, r5, #0	@ 00068ff8 281c
.org 0x68ffa
	adds r0, #76	@ 00068ffa 4c30
.org 0x68ffc
	strb r1, [r0, #0]	@ 00068ffc 0170
.org 0x68ffe
	adds r3, r5, #0	@ 00068ffe 2b1c
.org 0x69000
	adds r3, #74	@ 00069000 4a33
.org 0x69002
	lsls r1, r1, #4	@ 00069002 0901
.org 0x69004
	ldrb r2, [r3, #0]	@ 00069004 1a78
.org 0x69006
	movs r0, #17	@ 00069006 1120
.org 0x69008
	negs r0, r0	@ 00069008 4042
.org 0x6900a
	ands r0, r2	@ 0006900a 1040
.org 0x6900c
	orrs r0, r1	@ 0006900c 0843
.org 0x6900e
	strb r0, [r3, #0]	@ 0006900e 1870
.org 0x69010
	mov r2, sl	@ 00069010 5246
.org 0x69012
	cmp r2, #0	@ 00069012 002a
.org 0x69014
	beq.n 0x6901e	@ 00069014 03d0
.org 0x69016
	ldrb r0, [r6, #10]	@ 00069016 b07a
.org 0x69018
	movs r1, #16	@ 00069018 1021
.org 0x6901a
	orrs r0, r1	@ 0006901a 0843
.org 0x6901c
	b.n 0x69024	@ 0006901c 02e0
.org 0x6901e
	ldrb r1, [r6, #10]	@ 0006901e b17a
.org 0x69020
	movs r0, #239	@ 00069020 ef20
.org 0x69022
	ands r0, r1	@ 00069022 0840
.org 0x69024
	strb r0, [r6, #10]	@ 00069024 b072
.org 0x69026
	adds r1, r2, #0	@ 00069026 111c
.org 0x69028
	adds r0, r6, #0	@ 00069028 301c
.org 0x6902a
	adds r0, #76	@ 0006902a 4c30
.org 0x6902c
	strb r1, [r0, #0]	@ 0006902c 0170
.org 0x6902e
	adds r3, r6, #0	@ 0006902e 331c
.org 0x69030
	adds r3, #74	@ 00069030 4a33
.org 0x69032
	lsls r1, r1, #4	@ 00069032 0901
.org 0x69034
	ldrb r2, [r3, #0]	@ 00069034 1a78
.org 0x69036
	movs r0, #17	@ 00069036 1120
.org 0x69038
	negs r0, r0	@ 00069038 4042
.org 0x6903a
	ands r0, r2	@ 0006903a 1040
.org 0x6903c
	orrs r0, r1	@ 0006903c 0843
.org 0x6903e
	strb r0, [r3, #0]	@ 0006903e 1870
.org 0x69040
	ldr r2, [sp, #20]	@ 00069040 059a
.org 0x69042
	ldr r3, [sp, #24]	@ 00069042 069b
.org 0x69044
	str r2, [r7, #84]	@ 00069044 7a65
.org 0x69046
	str r3, [r7, #88]	@ 00069046 bb65
.org 0x69048
	ldr r3, [sp, #28]	@ 00069048 079b
.org 0x6904a
	ldr r4, [sp, #32]	@ 0006904a 089c
.org 0x6904c
	mov r0, r8	@ 0006904c 4046
.org 0x6904e
	str r3, [r0, #84]	@ 0006904e 4365
.org 0x69050
	str r4, [r0, #88]	@ 00069050 8465
.org 0x69052
	ldr r0, [sp, #4]	@ 00069052 0198
.org 0x69054
	ldr r1, [sp, #8]	@ 00069054 0299
.org 0x69056
	mov r2, r9	@ 00069056 4a46
.org 0x69058
	str r0, [r2, #84]	@ 00069058 5065
.org 0x6905a
	str r1, [r2, #88]	@ 0006905a 9165
.org 0x6905c
	ldr r0, [sp, #12]	@ 0006905c 0398
.org 0x6905e
	ldr r1, [sp, #16]	@ 0006905e 0499
.org 0x69060
	str r0, [r6, #84]	@ 00069060 7065
.org 0x69062
	str r1, [r6, #88]	@ 00069062 b165
.org 0x69064
	str r0, [r5, #84]	@ 00069064 6865
.org 0x69066
	str r1, [r5, #88]	@ 00069066 a965
.org 0x69068
	adds r0, r6, #0	@ 00069068 301c
.org 0x6906a
	adds r0, #180	@ 0006906a b430
.org 0x6906c
	add r3, sp, #36	@ 0006906c 09ab
.org 0x6906e
	ldrb r3, [r3, #0]	@ 0006906e 1b78
.org 0x69070
	strb r3, [r0, #0]	@ 00069070 0370
.org 0x69072
	ldr r4, [sp, #36]	@ 00069072 099c
.org 0x69074
	adds r0, r5, #0	@ 00069074 281c
.org 0x69076
	adds r0, #180	@ 00069076 b430
.org 0x69078
	strb r4, [r0, #0]	@ 00069078 0470
.org 0x6907a
	mov r0, r9	@ 0006907a 4846
.org 0x6907c
	adds r0, #180	@ 0006907c b430
.org 0x6907e
	strb r4, [r0, #0]	@ 0006907e 0470
.org 0x69080
	mov r0, r8	@ 00069080 4046
.org 0x69082
	adds r0, #180	@ 00069082 b430
.org 0x69084
	strb r4, [r0, #0]	@ 00069084 0470
.org 0x69086
	adds r0, r7, #0	@ 00069086 381c
.org 0x69088
	adds r0, #196	@ 00069088 c430
.org 0x6908a
	strb r4, [r0, #0]	@ 0006908a 0470
.org 0x6908c
	adds r0, r7, #0	@ 0006908c 381c
.org 0x6908e
	adds r1, r4, #0	@ 0006908e 211c

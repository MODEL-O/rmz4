@ FUN_080f9a88  entry 0x080f9a88  size 388
.thumb
.org 0xf9a88
FUN_080f9a88:
	push {r4, r5, r6, r7, lr}	@ 000f9a88 f0b5
.org 0xf9a8a
	mov r7, r8	@ 000f9a8a 4746
.org 0xf9a8c
	push {r7}	@ 000f9a8c 80b4
.org 0xf9a8e
	sub sp, #8	@ 000f9a8e 82b0
.org 0xf9a90
	adds r7, r0, #0	@ 000f9a90 071c
.org 0xf9a92
	ldrb r1, [r7, #15]	@ 000f9a92 f97b
.org 0xf9a94
	cmp r1, #0	@ 000f9a94 0029
.org 0xf9a96
	bne.n 0xf9abe	@ 000f9a96 12d1
.org 0xf9a98
	adds r0, #140	@ 000f9a98 8c30
.org 0xf9a9a
	str r1, [r0, #0]	@ 000f9a9a 0160
.org 0xf9a9c
	adds r0, #4	@ 000f9a9c 0430
.org 0xf9a9e
	str r1, [r0, #0]	@ 000f9a9e 0160
.org 0xf9aa0
	adds r0, #4	@ 000f9aa0 0430
.org 0xf9aa2
	strb r1, [r0, #0]	@ 000f9aa2 0170
.org 0xf9aa4
	ldrb r1, [r7, #10]	@ 000f9aa4 b97a
.org 0xf9aa6
	movs r0, #251	@ 000f9aa6 fb20
.org 0xf9aa8
	ands r0, r1	@ 000f9aa8 0840
.org 0xf9aaa
	strb r0, [r7, #10]	@ 000f9aaa b872
.org 0xf9aac
	ldr r1, [pc, #348]	@ 000f9aac 5749
.org 0xf9aae
	adds r0, r7, #0	@ 000f9aae 381c
.org 0xf9ab0
	bl 0x1cf00	@ 000f9ab0 23f726fa
.org 0xf9ab4
	movs r0, #48	@ 000f9ab4 3020
.org 0xf9ab6
	strb r0, [r7, #18]	@ 000f9ab6 b874
.org 0xf9ab8
	ldrb r0, [r7, #15]	@ 000f9ab8 f87b
.org 0xf9aba
	adds r0, #1	@ 000f9aba 0130
.org 0xf9abc
	strb r0, [r7, #15]	@ 000f9abc f873
.org 0xf9abe
	adds r0, r7, #0	@ 000f9abe 381c
.org 0xf9ac0
	bl 0x1cff0	@ 000f9ac0 23f796fa
.org 0xf9ac4
	ldrb r1, [r7, #18]	@ 000f9ac4 b97c
.org 0xf9ac6
	movs r0, #7	@ 000f9ac6 0720
.org 0xf9ac8
	mov r8, r0	@ 000f9ac8 8046
.org 0xf9aca
	ands r0, r1	@ 000f9aca 0840
.org 0xf9acc
	cmp r0, #0	@ 000f9acc 0028
.org 0xf9ace
	bne.n 0xf9b14	@ 000f9ace 21d1
.org 0xf9ad0
	ldr r6, [pc, #316]	@ 000f9ad0 4f4e
.org 0xf9ad2
	ldr r0, [r6, #0]	@ 000f9ad2 3068
.org 0xf9ad4
	ldr r5, [pc, #316]	@ 000f9ad4 4f4d
.org 0xf9ad6
	muls r0, r5	@ 000f9ad6 6843
.org 0xf9ad8
	ldr r2, [pc, #316]	@ 000f9ad8 4f4a
.org 0xf9ada
	adds r0, r0, r2	@ 000f9ada 8018
.org 0xf9adc
	lsls r0, r0, #1	@ 000f9adc 4000
.org 0xf9ade
	lsrs r4, r0, #1	@ 000f9ade 4408
.org 0xf9ae0
	lsrs r0, r0, #17	@ 000f9ae0 400c
.org 0xf9ae2
	movs r3, #31	@ 000f9ae2 1f23
.org 0xf9ae4
	ands r0, r3	@ 000f9ae4 1840
.org 0xf9ae6
	subs r0, #15	@ 000f9ae6 0f38
.org 0xf9ae8
	lsls r0, r0, #8	@ 000f9ae8 0002
.org 0xf9aea
	ldr r1, [r7, #84]	@ 000f9aea 796d
.org 0xf9aec
	adds r1, r1, r0	@ 000f9aec 0918
.org 0xf9aee
	str r1, [sp, #0]	@ 000f9aee 0091
.org 0xf9af0
	adds r0, r4, #0	@ 000f9af0 201c
.org 0xf9af2
	muls r0, r5	@ 000f9af2 6843
.org 0xf9af4
	adds r0, r0, r2	@ 000f9af4 8018
.org 0xf9af6
	lsls r0, r0, #1	@ 000f9af6 4000
.org 0xf9af8
	lsrs r1, r0, #1	@ 000f9af8 4108
.org 0xf9afa
	str r1, [r6, #0]	@ 000f9afa 3160
.org 0xf9afc
	lsrs r0, r0, #17	@ 000f9afc 400c
.org 0xf9afe
	ands r0, r3	@ 000f9afe 1840
.org 0xf9b00
	lsls r0, r0, #8	@ 000f9b00 0002
.org 0xf9b02
	ldr r1, [pc, #280]	@ 000f9b02 4649
.org 0xf9b04
	adds r0, r0, r1	@ 000f9b04 4018
.org 0xf9b06
	ldr r1, [r7, #88]	@ 000f9b06 b96d
.org 0xf9b08
	adds r1, r1, r0	@ 000f9b08 0918
.org 0xf9b0a
	str r1, [sp, #4]	@ 000f9b0a 0191
.org 0xf9b0c
	movs r0, #2	@ 000f9b0c 0220
.org 0xf9b0e
	mov r1, sp	@ 000f9b0e 6946
.org 0xf9b10
	bl 0xd0c88	@ 000f9b10 d7f7baf8
.org 0xf9b14
	ldrb r0, [r7, #18]	@ 000f9b14 b87c
.org 0xf9b16
	subs r0, #1	@ 000f9b16 0138
.org 0xf9b18
	strb r0, [r7, #18]	@ 000f9b18 b874
.org 0xf9b1a
	lsls r0, r0, #24	@ 000f9b1a 0006
.org 0xf9b1c
	cmp r0, #0	@ 000f9b1c 0028
.org 0xf9b1e
	bne.n 0xf9c00	@ 000f9b1e 6fd1
.org 0xf9b20
	movs r0, #42	@ 000f9b20 2a20
.org 0xf9b22
	bl 0x2b10	@ 000f9b22 08f7f5ff
.org 0xf9b26
	ldrb r1, [r7, #10]	@ 000f9b26 b97a
.org 0xf9b28
	movs r0, #254	@ 000f9b28 fe20
.org 0xf9b2a
	ands r0, r1	@ 000f9b2a 0840
.org 0xf9b2c
	strb r0, [r7, #10]	@ 000f9b2c b872
.org 0xf9b2e
	ldr r6, [pc, #224]	@ 000f9b2e 384e
.org 0xf9b30
	ldr r0, [r6, #0]	@ 000f9b30 3068
.org 0xf9b32
	ldr r5, [pc, #224]	@ 000f9b32 384d
.org 0xf9b34
	muls r0, r5	@ 000f9b34 6843
.org 0xf9b36
	ldr r4, [pc, #224]	@ 000f9b36 384c
.org 0xf9b38
	adds r0, r0, r4	@ 000f9b38 0019
.org 0xf9b3a
	lsls r0, r0, #1	@ 000f9b3a 4000
.org 0xf9b3c
	lsrs r2, r0, #1	@ 000f9b3c 4208
.org 0xf9b3e
	lsrs r0, r0, #17	@ 000f9b3e 400c
.org 0xf9b40
	mov r1, r8	@ 000f9b40 4146
.org 0xf9b42
	ands r0, r1	@ 000f9b42 0840
.org 0xf9b44
	subs r0, #3	@ 000f9b44 0338
.org 0xf9b46
	lsls r0, r0, #8	@ 000f9b46 0002
.org 0xf9b48
	ldr r1, [r7, #84]	@ 000f9b48 796d
.org 0xf9b4a
	adds r1, r1, r0	@ 000f9b4a 0918
.org 0xf9b4c
	str r1, [sp, #0]	@ 000f9b4c 0091
.org 0xf9b4e
	adds r0, r2, #0	@ 000f9b4e 101c
.org 0xf9b50
	muls r0, r5	@ 000f9b50 6843
.org 0xf9b52
	adds r0, r0, r4	@ 000f9b52 0019
.org 0xf9b54
	lsls r0, r0, #1	@ 000f9b54 4000
.org 0xf9b56
	lsrs r1, r0, #1	@ 000f9b56 4108
.org 0xf9b58
	str r1, [r6, #0]	@ 000f9b58 3160
.org 0xf9b5a
	lsrs r0, r0, #17	@ 000f9b5a 400c
.org 0xf9b5c
	mov r1, r8	@ 000f9b5c 4146
.org 0xf9b5e
	ands r0, r1	@ 000f9b5e 0840
.org 0xf9b60
	lsls r0, r0, #8	@ 000f9b60 0002
.org 0xf9b62
	ldr r1, [pc, #188]	@ 000f9b62 2f49
.org 0xf9b64
	adds r0, r0, r1	@ 000f9b64 4018
.org 0xf9b66
	ldr r1, [r7, #88]	@ 000f9b66 b96d
.org 0xf9b68
	adds r1, r1, r0	@ 000f9b68 0918
.org 0xf9b6a
	str r1, [sp, #4]	@ 000f9b6a 0191
.org 0xf9b6c
	movs r0, #1	@ 000f9b6c 0120
.org 0xf9b6e
	mov r1, sp	@ 000f9b6e 6946
.org 0xf9b70
	bl 0xd0c88	@ 000f9b70 d7f78af8
.org 0xf9b74
	ldr r0, [r6, #0]	@ 000f9b74 3068
.org 0xf9b76
	muls r0, r5	@ 000f9b76 6843
.org 0xf9b78
	adds r0, r0, r4	@ 000f9b78 0019
.org 0xf9b7a
	lsls r0, r0, #1	@ 000f9b7a 4000
.org 0xf9b7c
	lsrs r2, r0, #1	@ 000f9b7c 4208
.org 0xf9b7e
	lsrs r0, r0, #17	@ 000f9b7e 400c
.org 0xf9b80
	mov r1, r8	@ 000f9b80 4146
.org 0xf9b82
	ands r0, r1	@ 000f9b82 0840
.org 0xf9b84
	subs r0, #3	@ 000f9b84 0338
.org 0xf9b86
	lsls r0, r0, #8	@ 000f9b86 0002
.org 0xf9b88
	ldr r1, [r7, #84]	@ 000f9b88 796d
.org 0xf9b8a
	adds r1, r1, r0	@ 000f9b8a 0918
.org 0xf9b8c
	str r1, [sp, #0]	@ 000f9b8c 0091
.org 0xf9b8e
	adds r0, r2, #0	@ 000f9b8e 101c
.org 0xf9b90
	muls r0, r5	@ 000f9b90 6843
.org 0xf9b92
	adds r0, r0, r4	@ 000f9b92 0019
.org 0xf9b94
	lsls r0, r0, #1	@ 000f9b94 4000
.org 0xf9b96
	lsrs r1, r0, #1	@ 000f9b96 4108
.org 0xf9b98
	str r1, [r6, #0]	@ 000f9b98 3160
.org 0xf9b9a
	lsrs r0, r0, #17	@ 000f9b9a 400c
.org 0xf9b9c
	mov r1, r8	@ 000f9b9c 4146
.org 0xf9b9e
	ands r0, r1	@ 000f9b9e 0840
.org 0xf9ba0
	lsls r0, r0, #8	@ 000f9ba0 0002
.org 0xf9ba2
	ldr r1, [pc, #128]	@ 000f9ba2 2049
.org 0xf9ba4
	adds r0, r0, r1	@ 000f9ba4 4018
.org 0xf9ba6
	ldr r1, [r7, #88]	@ 000f9ba6 b96d
.org 0xf9ba8
	adds r1, r1, r0	@ 000f9ba8 0918
.org 0xf9baa
	str r1, [sp, #4]	@ 000f9baa 0191
.org 0xf9bac
	movs r0, #1	@ 000f9bac 0120
.org 0xf9bae
	mov r1, sp	@ 000f9bae 6946
.org 0xf9bb0
	bl 0xd0c88	@ 000f9bb0 d7f76af8
.org 0xf9bb4
	adds r0, r7, #0	@ 000f9bb4 381c
.org 0xf9bb6
	bl 0xf9df0	@ 000f9bb6 00f01bf9
.org 0xf9bba
	adds r4, r7, #0	@ 000f9bba 3c1c
.org 0xf9bbc
	adds r4, #84	@ 000f9bbc 5434
.org 0xf9bbe
	movs r0, #4	@ 000f9bbe 0420
.org 0xf9bc0
	movs r1, #42	@ 000f9bc0 2a21
.org 0xf9bc2
	adds r2, r4, #0	@ 000f9bc2 221c
.org 0xf9bc4
	bl 0x2ab88	@ 000f9bc4 30f7e0ff
.org 0xf9bc8
	ldr r0, [pc, #92]	@ 000f9bc8 1748
.org 0xf9bca
	adds r1, r0, #0	@ 000f9bca 011c
.org 0xf9bcc
	adds r1, #38	@ 000f9bcc 2631
.org 0xf9bce
	ldrb r0, [r1, #0]	@ 000f9bce 0878
.org 0xf9bd0
	cmp r0, #0	@ 000f9bd0 0028
.org 0xf9bd2
	beq.n 0xf9bd8	@ 000f9bd2 01d0
.org 0xf9bd4
	adds r0, #255	@ 000f9bd4 ff30
.org 0xf9bd6
	strb r0, [r1, #0]	@ 000f9bd6 0870
.org 0xf9bd8
	ldr r2, [pc, #80]	@ 000f9bd8 144a
.org 0xf9bda
	ldrh r1, [r2, #12]	@ 000f9bda 9189
.org 0xf9bdc
	ldr r0, [pc, #80]	@ 000f9bdc 1448
.org 0xf9bde
	cmp r1, r0	@ 000f9bde 8142
.org 0xf9be0
	bhi.n 0xf9be6	@ 000f9be0 01d8
.org 0xf9be2
	adds r0, r1, #1	@ 000f9be2 481c
.org 0xf9be4
	strh r0, [r2, #12]	@ 000f9be4 9081
.org 0xf9be6
	adds r0, r7, #0	@ 000f9be6 381c
.org 0xf9be8
	adds r1, r4, #0	@ 000f9be8 211c
.org 0xf9bea
	bl 0x2abe0	@ 000f9bea 30f7f9ff
.org 0xf9bee
	ldr r1, [pc, #68]	@ 000f9bee 1149
.org 0xf9bf0
	ldrb r0, [r7, #9]	@ 000f9bf0 787a
.org 0xf9bf2
	lsls r0, r0, #2	@ 000f9bf2 8000
.org 0xf9bf4
	adds r0, r0, r1	@ 000f9bf4 4018
.org 0xf9bf6
	movs r1, #4	@ 000f9bf6 0421
.org 0xf9bf8
	str r1, [r7, #12]	@ 000f9bf8 f960
.org 0xf9bfa
	ldr r0, [r0, #0]	@ 000f9bfa 0068
.org 0xf9bfc
	ldr r0, [r0, #16]	@ 000f9bfc 0069
.org 0xf9bfe
	str r0, [r7, #20]	@ 000f9bfe 7861
.org 0xf9c00
	add sp, #8	@ 000f9c00 02b0
.org 0xf9c02
	pop {r3}	@ 000f9c02 08bc
.org 0xf9c04
	mov r8, r3	@ 000f9c04 9846
.org 0xf9c06
	pop {r4, r5, r6, r7}	@ 000f9c06 f0bc
.org 0xf9c08
	pop {r0}	@ 000f9c08 01bc
.org 0xf9c0a
	bx r0	@ 000f9c0a 0047

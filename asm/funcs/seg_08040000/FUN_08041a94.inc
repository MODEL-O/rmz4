@ FUN_08041a94  entry 0x08041a94  size 434
.thumb
.org 0x41a94
FUN_08041a94:
	push {r4, r5, r6, lr}	@ 00041a94 70b5
.org 0x41a96
	sub sp, #8	@ 00041a96 82b0
.org 0x41a98
	adds r4, r0, #0	@ 00041a98 041c
.org 0x41a9a
	ldr r6, [r4, #44]	@ 00041a9a e66a
.org 0x41a9c
	ldrb r0, [r4, #13]	@ 00041a9c 607b
.org 0x41a9e
	cmp r0, #1	@ 00041a9e 0128
.org 0x41aa0
	beq.n 0x41af4	@ 00041aa0 28d0
.org 0x41aa2
	cmp r0, #1	@ 00041aa2 0128
.org 0x41aa4
	bgt.n 0x41aac	@ 00041aa4 02dc
.org 0x41aa6
	cmp r0, #0	@ 00041aa6 0028
.org 0x41aa8
	beq.n 0x41ab2	@ 00041aa8 03d0
.org 0x41aaa
	b.n 0x41bac	@ 00041aaa 7fe0
.org 0x41aac
	cmp r0, #2	@ 00041aac 0228
.org 0x41aae
	beq.n 0x41b58	@ 00041aae 53d0
.org 0x41ab0
	b.n 0x41bac	@ 00041ab0 7ce0
.org 0x41ab2
	ldr r0, [r4, #92]	@ 00041ab2 e06d
.org 0x41ab4
	movs r1, #192	@ 00041ab4 c021
.org 0x41ab6
	lsls r1, r1, #3	@ 00041ab6 c900
.org 0x41ab8
	adds r0, r0, r1	@ 00041ab8 4018
.org 0x41aba
	str r0, [r4, #92]	@ 00041aba e065
.org 0x41abc
	movs r1, #176	@ 00041abc b021
.org 0x41abe
	lsls r1, r1, #6	@ 00041abe 8901
.org 0x41ac0
	cmp r0, r1	@ 00041ac0 8842
.org 0x41ac2
	ble.n 0x41bac	@ 00041ac2 73dd
.org 0x41ac4
	str r1, [r4, #92]	@ 00041ac4 e165
.org 0x41ac6
	ldr r1, [pc, #36]	@ 00041ac6 0949
.org 0x41ac8
	adds r0, r4, #0	@ 00041ac8 201c
.org 0x41aca
	bl 0x1cf00	@ 00041aca dbf719fa
.org 0x41ace
	adds r0, r4, #0	@ 00041ace 201c
.org 0x41ad0
	adds r0, #116	@ 00041ad0 7430
.org 0x41ad2
	ldr r1, [pc, #28]	@ 00041ad2 0749
.org 0x41ad4
	movs r3, #1	@ 00041ad4 0123
.org 0x41ad6
	negs r3, r3	@ 00041ad6 5b42
.org 0x41ad8
	str r3, [sp, #0]	@ 00041ad8 0093
.org 0x41ada
	movs r2, #1	@ 00041ada 0122
.org 0x41adc
	str r2, [sp, #4]	@ 00041adc 0192
.org 0x41ade
	adds r2, r3, #0	@ 00041ade 1a1c
.org 0x41ae0
	bl 0x5794	@ 00041ae0 c3f758fe
.org 0x41ae4
	movs r0, #2	@ 00041ae4 0220
.org 0x41ae6
	strb r0, [r4, #18]	@ 00041ae6 a074
.org 0x41ae8
	b.n 0x41b48	@ 00041ae8 2ee0
.org 0x41aea
	.byte 0x00	@ 00041aea data
.org 0x41aeb
	.byte 0x00	@ 00041aeb data
.org 0x41aec
	.byte 0x25,0x80,0x00,0x00	@ 00041aec data
.org 0x41af0
	.byte 0x98,0x5a,0x85,0x08	@ 00041af0 data
.org 0x41af4
	adds r0, r4, #0	@ 00041af4 201c
.org 0x41af6
	adds r0, #115	@ 00041af6 7330
.org 0x41af8
	ldrb r0, [r0, #0]	@ 00041af8 0078
.org 0x41afa
	cmp r0, #4	@ 00041afa 0428
.org 0x41afc
	bne.n 0x41bac	@ 00041afc 56d1
.org 0x41afe
	movs r0, #55	@ 00041afe 3720
.org 0x41b00
	bl 0x2b10	@ 00041b00 c1f706f8
.org 0x41b04
	adds r0, r4, #0	@ 00041b04 201c
.org 0x41b06
	adds r0, #116	@ 00041b06 7430
.org 0x41b08
	ldr r1, [pc, #68]	@ 00041b08 1149
.org 0x41b0a
	movs r3, #1	@ 00041b0a 0123
.org 0x41b0c
	negs r3, r3	@ 00041b0c 5b42
.org 0x41b0e
	str r3, [sp, #0]	@ 00041b0e 0093
.org 0x41b10
	ldrb r2, [r4, #18]	@ 00041b10 a27c
.org 0x41b12
	str r2, [sp, #4]	@ 00041b12 0192
.org 0x41b14
	adds r2, r3, #0	@ 00041b14 1a1c
.org 0x41b16
	bl 0x5794	@ 00041b16 c3f73dfe
.org 0x41b1a
	ldrb r0, [r4, #18]	@ 00041b1a a07c
.org 0x41b1c
	adds r1, r0, #1	@ 00041b1c 411c
.org 0x41b1e
	strb r1, [r4, #18]	@ 00041b1e a174
.org 0x41b20
	lsls r0, r0, #24	@ 00041b20 0006
.org 0x41b22
	lsrs r0, r0, #24	@ 00041b22 000e
.org 0x41b24
	cmp r0, #5	@ 00041b24 0528
.org 0x41b26
	bls.n 0x41bac	@ 00041b26 41d9
.org 0x41b28
	ldr r1, [pc, #40]	@ 00041b28 0a49
.org 0x41b2a
	adds r0, r4, #0	@ 00041b2a 201c
.org 0x41b2c
	bl 0x1cf00	@ 00041b2c dbf7e8f9
.org 0x41b30
	adds r0, r4, #0	@ 00041b30 201c
.org 0x41b32
	adds r0, #140	@ 00041b32 8c30
.org 0x41b34
	movs r1, #0	@ 00041b34 0021
.org 0x41b36
	str r1, [r0, #0]	@ 00041b36 0160
.org 0x41b38
	adds r0, #4	@ 00041b38 0430
.org 0x41b3a
	str r1, [r0, #0]	@ 00041b3a 0160
.org 0x41b3c
	adds r0, #4	@ 00041b3c 0430
.org 0x41b3e
	strb r1, [r0, #0]	@ 00041b3e 0170
.org 0x41b40
	ldrb r1, [r4, #10]	@ 00041b40 a17a
.org 0x41b42
	movs r0, #251	@ 00041b42 fb20
.org 0x41b44
	ands r0, r1	@ 00041b44 0840
.org 0x41b46
	strb r0, [r4, #10]	@ 00041b46 a072
.org 0x41b48
	ldrb r0, [r4, #13]	@ 00041b48 607b
.org 0x41b4a
	adds r0, #1	@ 00041b4a 0130
.org 0x41b4c
	strb r0, [r4, #13]	@ 00041b4c 6073
.org 0x41b4e
	b.n 0x41bac	@ 00041b4e 2de0
.org 0x41b50
	.byte 0x98,0x5a,0x85,0x08	@ 00041b50 data
.org 0x41b54
	.byte 0x24,0x80,0x00,0x00	@ 00041b54 data
.org 0x41b58
	ldr r0, [r4, #92]	@ 00041b58 e06d
.org 0x41b5a
	ldr r1, [pc, #68]	@ 00041b5a 1149
.org 0x41b5c
	adds r0, r0, r1	@ 00041b5c 4018
.org 0x41b5e
	str r0, [r4, #92]	@ 00041b5e e065
.org 0x41b60
	ldr r1, [pc, #64]	@ 00041b60 1049
.org 0x41b62
	cmp r0, r1	@ 00041b62 8842
.org 0x41b64
	bgt.n 0x41bac	@ 00041b64 22dc
.org 0x41b66
	ldrb r1, [r4, #10]	@ 00041b66 a17a
.org 0x41b68
	movs r0, #254	@ 00041b68 fe20
.org 0x41b6a
	ands r0, r1	@ 00041b6a 0840
.org 0x41b6c
	movs r2, #0	@ 00041b6c 0022
.org 0x41b6e
	movs r1, #253	@ 00041b6e fd21
.org 0x41b70
	ands r0, r1	@ 00041b70 0840
.org 0x41b72
	strb r0, [r4, #10]	@ 00041b72 a072
.org 0x41b74
	adds r0, r4, #0	@ 00041b74 201c
.org 0x41b76
	adds r0, #140	@ 00041b76 8c30
.org 0x41b78
	str r2, [r0, #0]	@ 00041b78 0260
.org 0x41b7a
	adds r0, #4	@ 00041b7a 0430
.org 0x41b7c
	str r2, [r0, #0]	@ 00041b7c 0260
.org 0x41b7e
	adds r0, #4	@ 00041b7e 0430
.org 0x41b80
	strb r2, [r0, #0]	@ 00041b80 0270
.org 0x41b82
	ldrb r1, [r4, #10]	@ 00041b82 a17a
.org 0x41b84
	movs r0, #251	@ 00041b84 fb20
.org 0x41b86
	ands r0, r1	@ 00041b86 0840
.org 0x41b88
	strb r0, [r4, #10]	@ 00041b88 a072
.org 0x41b8a
	ldr r1, [pc, #28]	@ 00041b8a 0749
.org 0x41b8c
	ldrb r0, [r4, #9]	@ 00041b8c 607a
.org 0x41b8e
	lsls r0, r0, #2	@ 00041b8e 8000
.org 0x41b90
	adds r0, r0, r1	@ 00041b90 4018
.org 0x41b92
	movs r1, #3	@ 00041b92 0321
.org 0x41b94
	str r1, [r4, #12]	@ 00041b94 e160
.org 0x41b96
	ldr r0, [r0, #0]	@ 00041b96 0068
.org 0x41b98
	ldr r0, [r0, #12]	@ 00041b98 c068
.org 0x41b9a
	str r0, [r4, #20]	@ 00041b9a 6061
.org 0x41b9c
	b.n 0x41c62	@ 00041b9c 61e0
.org 0x41b9e
	.byte 0x00	@ 00041b9e data
.org 0x41b9f
	.byte 0x00	@ 00041b9f data
.org 0x41ba0
	.byte 0x00,0xf0,0xff,0xff	@ 00041ba0 data
.org 0x41ba4
	.byte 0xff,0x0b,0x00,0x00	@ 00041ba4 data
.org 0x41ba8
	.byte 0xf8,0x39,0x85,0x08	@ 00041ba8 data
.org 0x41bac
	adds r0, r4, #0	@ 00041bac 201c
.org 0x41bae
	bl 0x1cff0	@ 00041bae dbf71ffa
.org 0x41bb2
	ldrb r0, [r6, #10]	@ 00041bb2 b07a
.org 0x41bb4
	lsrs r2, r0, #4	@ 00041bb4 0209
.org 0x41bb6
	movs r0, #1	@ 00041bb6 0120
.org 0x41bb8
	ands r2, r0	@ 00041bb8 0240
.org 0x41bba
	cmp r2, #0	@ 00041bba 002a
.org 0x41bbc
	beq.n 0x41bc6	@ 00041bbc 03d0
.org 0x41bbe
	ldrb r1, [r4, #10]	@ 00041bbe a17a
.org 0x41bc0
	movs r0, #16	@ 00041bc0 1020
.org 0x41bc2
	orrs r0, r1	@ 00041bc2 0843
.org 0x41bc4
	b.n 0x41bcc	@ 00041bc4 02e0
.org 0x41bc6
	ldrb r1, [r4, #10]	@ 00041bc6 a17a
.org 0x41bc8
	movs r0, #239	@ 00041bc8 ef20
.org 0x41bca
	ands r0, r1	@ 00041bca 0840
.org 0x41bcc
	strb r0, [r4, #10]	@ 00041bcc a072
.org 0x41bce
	adds r1, r2, #0	@ 00041bce 111c
.org 0x41bd0
	adds r0, r4, #0	@ 00041bd0 201c
.org 0x41bd2
	adds r0, #76	@ 00041bd2 4c30
.org 0x41bd4
	strb r1, [r0, #0]	@ 00041bd4 0170
.org 0x41bd6
	adds r3, r4, #0	@ 00041bd6 231c
.org 0x41bd8
	adds r3, #74	@ 00041bd8 4a33
.org 0x41bda
	lsls r1, r1, #4	@ 00041bda 0901
.org 0x41bdc
	ldrb r2, [r3, #0]	@ 00041bdc 1a78
.org 0x41bde
	movs r0, #17	@ 00041bde 1120
.org 0x41be0
	negs r0, r0	@ 00041be0 4042
.org 0x41be2
	ands r0, r2	@ 00041be2 1040
.org 0x41be4
	orrs r0, r1	@ 00041be4 0843
.org 0x41be6
	strb r0, [r3, #0]	@ 00041be6 1870
.org 0x41be8
	adds r0, r6, #0	@ 00041be8 301c
.org 0x41bea
	adds r0, #36	@ 00041bea 2430
.org 0x41bec
	ldrb r5, [r0, #0]	@ 00041bec 0578
.org 0x41bee
	adds r0, r4, #0	@ 00041bee 201c
.org 0x41bf0
	adds r0, #36	@ 00041bf0 2430
.org 0x41bf2
	strb r5, [r0, #0]	@ 00041bf2 0570
.org 0x41bf4
	ldr r0, [r6, #84]	@ 00041bf4 706d
.org 0x41bf6
	ldr r1, [r6, #88]	@ 00041bf6 b16d
.org 0x41bf8
	str r0, [r4, #84]	@ 00041bf8 6065
.org 0x41bfa
	str r1, [r4, #88]	@ 00041bfa a165
.org 0x41bfc
	ldr r0, [r6, #84]	@ 00041bfc 706d
.org 0x41bfe
	ldr r1, [r6, #88]	@ 00041bfe b16d
.org 0x41c00
	str r0, [r4, #100]	@ 00041c00 6066
.org 0x41c02
	str r1, [r4, #104]	@ 00041c02 a166
.org 0x41c04
	ldrb r1, [r4, #10]	@ 00041c04 a17a
.org 0x41c06
	movs r0, #16	@ 00041c06 1020
.org 0x41c08
	ands r0, r1	@ 00041c08 0840
.org 0x41c0a
	cmp r0, #0	@ 00041c0a 0028
.org 0x41c0c
	beq.n 0x41c30	@ 00041c0c 10d0
.org 0x41c0e
	ldr r3, [pc, #28]	@ 00041c0e 074b
.org 0x41c10
	adds r0, r5, #0	@ 00041c10 281c
.org 0x41c12
	adds r0, #64	@ 00041c12 4030
.org 0x41c14
	lsls r0, r0, #24	@ 00041c14 0006
.org 0x41c16
	lsrs r0, r0, #23	@ 00041c16 c00d
.org 0x41c18
	adds r0, r0, r3	@ 00041c18 c018
.org 0x41c1a
	movs r1, #0	@ 00041c1a 0021
.org 0x41c1c
	ldrsh r0, [r0, r1]	@ 00041c1c 405e
.org 0x41c1e
	ldr r2, [r4, #92]	@ 00041c1e e26d
.org 0x41c20
	adds r1, r0, #0	@ 00041c20 011c
.org 0x41c22
	muls r1, r2	@ 00041c22 5143
.org 0x41c24
	asrs r1, r1, #8	@ 00041c24 0912
.org 0x41c26
	ldr r0, [r4, #84]	@ 00041c26 606d
.org 0x41c28
	adds r0, r0, r1	@ 00041c28 4018
.org 0x41c2a
	b.n 0x41c4c	@ 00041c2a 0fe0
.org 0x41c2c
	.byte 0x0c,0x93,0x12,0x08	@ 00041c2c data
.org 0x41c30
	ldr r3, [pc, #56]	@ 00041c30 0e4b
.org 0x41c32
	adds r0, r5, #0	@ 00041c32 281c
.org 0x41c34
	adds r0, #64	@ 00041c34 4030
.org 0x41c36
	lsls r0, r0, #24	@ 00041c36 0006
.org 0x41c38
	lsrs r0, r0, #23	@ 00041c38 c00d
.org 0x41c3a
	adds r0, r0, r3	@ 00041c3a c018
.org 0x41c3c
	movs r1, #0	@ 00041c3c 0021
.org 0x41c3e
	ldrsh r0, [r0, r1]	@ 00041c3e 405e
.org 0x41c40
	ldr r2, [r4, #92]	@ 00041c40 e26d
.org 0x41c42
	adds r1, r0, #0	@ 00041c42 011c
.org 0x41c44
	muls r1, r2	@ 00041c44 5143

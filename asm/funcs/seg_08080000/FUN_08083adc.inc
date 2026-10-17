@ FUN_08083adc  entry 0x08083adc  size 308
.thumb
.org 0x83adc
FUN_08083adc:
	push {r4, r5, r6, lr}	@ 00083adc 70b5
.org 0x83ade
	adds r4, r0, #0	@ 00083ade 041c
.org 0x83ae0
	ldr r0, [r4, #84]	@ 00083ae0 606d
.org 0x83ae2
	ldr r1, [r4, #88]	@ 00083ae2 a16d
.org 0x83ae4
	ldr r2, [pc, #68]	@ 00083ae4 114a
.org 0x83ae6
	adds r1, r1, r2	@ 00083ae6 8918
.org 0x83ae8
	bl 0x7098	@ 00083ae8 83f7d6fa
.org 0x83aec
	lsls r0, r0, #24	@ 00083aec 0006
.org 0x83aee
	lsrs r2, r0, #24	@ 00083aee 020e
.org 0x83af0
	cmp r2, #0	@ 00083af0 002a
.org 0x83af2
	beq.n 0x83b34	@ 00083af2 1fd0
.org 0x83af4
	ldrb r1, [r4, #10]	@ 00083af4 a17a
.org 0x83af6
	movs r0, #254	@ 00083af6 fe20
.org 0x83af8
	ands r0, r1	@ 00083af8 0840
.org 0x83afa
	movs r2, #0	@ 00083afa 0022
.org 0x83afc
	movs r1, #253	@ 00083afc fd21
.org 0x83afe
	ands r0, r1	@ 00083afe 0840
.org 0x83b00
	strb r0, [r4, #10]	@ 00083b00 a072
.org 0x83b02
	adds r0, r4, #0	@ 00083b02 201c
.org 0x83b04
	adds r0, #140	@ 00083b04 8c30
.org 0x83b06
	str r2, [r0, #0]	@ 00083b06 0260
.org 0x83b08
	adds r0, #4	@ 00083b08 0430
.org 0x83b0a
	str r2, [r0, #0]	@ 00083b0a 0260
.org 0x83b0c
	adds r0, #4	@ 00083b0c 0430
.org 0x83b0e
	strb r2, [r0, #0]	@ 00083b0e 0270
.org 0x83b10
	ldrb r1, [r4, #10]	@ 00083b10 a17a
.org 0x83b12
	movs r0, #251	@ 00083b12 fb20
.org 0x83b14
	ands r0, r1	@ 00083b14 0840
.org 0x83b16
	strb r0, [r4, #10]	@ 00083b16 a072
.org 0x83b18
	ldr r1, [pc, #20]	@ 00083b18 0549
.org 0x83b1a
	ldrb r0, [r4, #9]	@ 00083b1a 607a
.org 0x83b1c
	lsls r0, r0, #2	@ 00083b1c 8000
.org 0x83b1e
	adds r0, r0, r1	@ 00083b1e 4018
.org 0x83b20
	movs r1, #3	@ 00083b20 0321
.org 0x83b22
	str r1, [r4, #12]	@ 00083b22 e160
.org 0x83b24
	ldr r0, [r0, #0]	@ 00083b24 0068
.org 0x83b26
	ldr r0, [r0, #12]	@ 00083b26 c068
.org 0x83b28
	str r0, [r4, #20]	@ 00083b28 6061
.org 0x83b2a
	b.n 0x83c24	@ 00083b2a 7be0
.org 0x83b2c
	.byte 0x00,0xe8,0xff,0xff	@ 00083b2c data
.org 0x83b30
	.byte 0x40,0xdb,0x85,0x08	@ 00083b30 data
.org 0x83b34
	ldrb r0, [r4, #13]	@ 00083b34 607b
.org 0x83b36
	adds r1, r0, #0	@ 00083b36 011c
.org 0x83b38
	cmp r1, #1	@ 00083b38 0129
.org 0x83b3a
	beq.n 0x83b52	@ 00083b3a 0ad0
.org 0x83b3c
	ldr r0, [r4, #44]	@ 00083b3c e06a
.org 0x83b3e
	cmp r0, #0	@ 00083b3e 0028
.org 0x83b40
	beq.n 0x83b4a	@ 00083b40 03d0
.org 0x83b42
	ldrb r0, [r0, #12]	@ 00083b42 007b
.org 0x83b44
	cmp r0, #1	@ 00083b44 0128
.org 0x83b46
	bls.n 0x83b4a	@ 00083b46 00d9
.org 0x83b48
	str r2, [r4, #44]	@ 00083b48 e262
.org 0x83b4a
	lsls r0, r1, #24	@ 00083b4a 0806
.org 0x83b4c
	lsrs r2, r0, #24	@ 00083b4c 020e
.org 0x83b4e
	cmp r2, #1	@ 00083b4e 012a
.org 0x83b50
	bne.n 0x83b5a	@ 00083b50 03d1
.org 0x83b52
	adds r0, r4, #0	@ 00083b52 201c
.org 0x83b54
	bl 0x84020	@ 00083b54 00f064fa
.org 0x83b58
	b.n 0x83c24	@ 00083b58 64e0
.org 0x83b5a
	adds r0, r4, #0	@ 00083b5a 201c
.org 0x83b5c
	adds r0, #140	@ 00083b5c 8c30
.org 0x83b5e
	ldr r1, [r0, #0]	@ 00083b5e 0168
.org 0x83b60
	movs r0, #128	@ 00083b60 8020
.org 0x83b62
	lsls r0, r0, #2	@ 00083b62 8000
.org 0x83b64
	ands r0, r1	@ 00083b64 0840
.org 0x83b66
	cmp r0, #0	@ 00083b66 0028
.org 0x83b68
	beq.n 0x83b88	@ 00083b68 0ed0
.org 0x83b6a
	ldr r1, [pc, #24]	@ 00083b6a 0649
.org 0x83b6c
	ldrb r0, [r4, #9]	@ 00083b6c 607a
.org 0x83b6e
	lsls r0, r0, #2	@ 00083b6e 8000
.org 0x83b70
	adds r0, r0, r1	@ 00083b70 4018
.org 0x83b72
	movs r1, #2	@ 00083b72 0221
.org 0x83b74
	str r1, [r4, #12]	@ 00083b74 e160
.org 0x83b76
	ldr r0, [r0, #0]	@ 00083b76 0068
.org 0x83b78
	ldr r0, [r0, #8]	@ 00083b78 8068
.org 0x83b7a
	str r0, [r4, #20]	@ 00083b7a 6061
.org 0x83b7c
	adds r0, r4, #0	@ 00083b7c 201c
.org 0x83b7e
	bl 0x839a8	@ 00083b7e fff713ff
.org 0x83b82
	b.n 0x83c24	@ 00083b82 4fe0
.org 0x83b84
	.byte 0x40,0xdb,0x85,0x08	@ 00083b84 data
.org 0x83b88
	adds r5, r4, #0	@ 00083b88 251c
.org 0x83b8a
	adds r5, #180	@ 00083b8a b435
.org 0x83b8c
	cmp r2, #8	@ 00083b8c 082a
.org 0x83b8e
	beq.n 0x83bb4	@ 00083b8e 11d0
.org 0x83b90
	movs r0, #1	@ 00083b90 0120
.org 0x83b92
	ands r1, r0	@ 00083b92 0140
.org 0x83b94
	cmp r1, #0	@ 00083b94 0029
.org 0x83b96
	beq.n 0x83bb4	@ 00083b96 0dd0
.org 0x83b98
	ldr r6, [r5, #0]	@ 00083b98 2e68
.org 0x83b9a
	cmp r6, #0	@ 00083b9a 002e
.org 0x83b9c
	bne.n 0x83bba	@ 00083b9c 0dd1
.org 0x83b9e
	ldr r2, [pc, #56]	@ 00083b9e 0e4a
.org 0x83ba0
	movs r0, #0	@ 00083ba0 0020
.org 0x83ba2
	adds r1, r4, #0	@ 00083ba2 211c
.org 0x83ba4
	bl 0x2adac	@ 00083ba4 a7f702f9
.org 0x83ba8
	str r0, [r5, #0]	@ 00083ba8 2860
.org 0x83baa
	cmp r0, #0	@ 00083baa 0028
.org 0x83bac
	beq.n 0x83be4	@ 00083bac 1ad0
.org 0x83bae
	movs r0, #8	@ 00083bae 0820
.org 0x83bb0
	strb r0, [r4, #13]	@ 00083bb0 6073
.org 0x83bb2
	strb r6, [r4, #14]	@ 00083bb2 a673
.org 0x83bb4
	ldr r0, [r5, #0]	@ 00083bb4 2868
.org 0x83bb6
	cmp r0, #0	@ 00083bb6 0028
.org 0x83bb8
	beq.n 0x83be4	@ 00083bb8 14d0
.org 0x83bba
	ldr r1, [pc, #32]	@ 00083bba 0849
.org 0x83bbc
	ldrb r0, [r4, #13]	@ 00083bbc 607b
.org 0x83bbe
	lsls r0, r0, #2	@ 00083bbe 8000
.org 0x83bc0
	adds r0, r0, r1	@ 00083bc0 4018
.org 0x83bc2
	ldr r1, [r0, #0]	@ 00083bc2 0168
.org 0x83bc4
	adds r0, r4, #0	@ 00083bc4 201c
.org 0x83bc6
	bl 0x128f80	@ 00083bc6 a5f0dbf9
.org 0x83bca
	adds r0, r4, #0	@ 00083bca 201c
.org 0x83bcc
	adds r0, #116	@ 00083bcc 7430
.org 0x83bce
	ldr r1, [pc, #16]	@ 00083bce 0449
.org 0x83bd0
	bl 0x5784	@ 00083bd0 81f7d8fd
.org 0x83bd4
	b.n 0x83c24	@ 00083bd4 26e0
.org 0x83bd6
	.byte 0x00	@ 00083bd6 data
.org 0x83bd7
	.byte 0x00	@ 00083bd7 data
.org 0x83bd8
	.byte 0x9c,0xe9,0x85,0x08	@ 00083bd8 data
.org 0x83bdc
	.byte 0x68,0xe9,0x85,0x08	@ 00083bdc data
.org 0x83be0
	.byte 0xbc,0xe9,0x85,0x08	@ 00083be0 data
.org 0x83be4
	adds r0, r4, #0	@ 00083be4 201c
.org 0x83be6
	adds r0, #116	@ 00083be6 7430
.org 0x83be8
	ldr r1, [pc, #64]	@ 00083be8 1049
.org 0x83bea
	bl 0x5784	@ 00083bea 81f7cbfd
.org 0x83bee
	adds r0, r4, #0	@ 00083bee 201c
.org 0x83bf0
	bl 0x7f90c	@ 00083bf0 fbf78cfe
.org 0x83bf4
	cmp r0, #0	@ 00083bf4 0028
.org 0x83bf6
	bne.n 0x83c24	@ 00083bf6 15d1
.org 0x83bf8
	ldrb r0, [r5, #11]	@ 00083bf8 e87a
.org 0x83bfa
	cmp r0, #0	@ 00083bfa 0028
.org 0x83bfc
	bne.n 0x83c0e	@ 00083bfc 07d1
.org 0x83bfe
	ldrb r0, [r4, #13]	@ 00083bfe 607b
.org 0x83c00
	cmp r0, #0	@ 00083c00 0028
.org 0x83c02
	beq.n 0x83c0e	@ 00083c02 04d0
.org 0x83c04
	ldr r0, [r4, #44]	@ 00083c04 e06a
.org 0x83c06
	cmp r0, #0	@ 00083c06 0028
.org 0x83c08
	bne.n 0x83c0e	@ 00083c08 01d1
.org 0x83c0a
	strb r0, [r4, #13]	@ 00083c0a 6073
.org 0x83c0c
	strb r0, [r4, #14]	@ 00083c0c a073
.org 0x83c0e
	ldr r0, [pc, #32]	@ 00083c0e 0848

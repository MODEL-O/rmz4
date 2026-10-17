@ FUN_08075b10  entry 0x08075b10  size 258
.thumb
.org 0x75b10
FUN_08075b10:
	push {r4, r5, lr}	@ 00075b10 30b5
.org 0x75b12
	adds r4, r0, #0	@ 00075b12 041c
.org 0x75b14
	ldrb r5, [r4, #14]	@ 00075b14 a57b
.org 0x75b16
	cmp r5, #0	@ 00075b16 002d
.org 0x75b18
	bne.n 0x75b38	@ 00075b18 0ed1
.org 0x75b1a
	ldr r1, [pc, #24]	@ 00075b1a 0649
.org 0x75b1c
	bl 0x1cf00	@ 00075b1c a7f7f0f9
.org 0x75b20
	movs r0, #215	@ 00075b20 d720
.org 0x75b22
	bl 0x2b10	@ 00075b22 8cf7f5ff
.org 0x75b26
	movs r0, #32	@ 00075b26 2020
.org 0x75b28
	strb r0, [r4, #18]	@ 00075b28 a074
.org 0x75b2a
	strb r5, [r4, #15]	@ 00075b2a e573
.org 0x75b2c
	ldrb r0, [r4, #14]	@ 00075b2c a07b
.org 0x75b2e
	adds r0, #1	@ 00075b2e 0130
.org 0x75b30
	strb r0, [r4, #14]	@ 00075b30 a073
.org 0x75b32
	b.n 0x75b86	@ 00075b32 28e0
.org 0x75b34
	.byte 0x05,0xaf,0x00,0x00	@ 00075b34 data
.org 0x75b38
	adds r2, r4, #0	@ 00075b38 221c
.org 0x75b3a
	adds r2, #113	@ 00075b3a 7132
.org 0x75b3c
	movs r0, #0	@ 00075b3c 0020
.org 0x75b3e
	ldrsb r0, [r2, r0]	@ 00075b3e 1056
.org 0x75b40
	cmp r0, #1	@ 00075b40 0128
.org 0x75b42
	bgt.n 0x75b86	@ 00075b42 20dc
.org 0x75b44
	adds r0, r4, #0	@ 00075b44 201c
.org 0x75b46
	adds r0, #114	@ 00075b46 7230
.org 0x75b48
	ldrb r0, [r0, #0]	@ 00075b48 0078
.org 0x75b4a
	lsls r0, r0, #24	@ 00075b4a 0006
.org 0x75b4c
	asrs r0, r0, #24	@ 00075b4c 0016
.org 0x75b4e
	cmp r0, #1	@ 00075b4e 0128
.org 0x75b50
	bgt.n 0x75b86	@ 00075b50 19dc
.org 0x75b52
	ldrb r1, [r4, #10]	@ 00075b52 a17a
.org 0x75b54
	movs r0, #16	@ 00075b54 1020
.org 0x75b56
	ands r0, r1	@ 00075b56 0840
.org 0x75b58
	cmp r0, #0	@ 00075b58 0028
.org 0x75b5a
	beq.n 0x75b74	@ 00075b5a 0bd0
.org 0x75b5c
	ldr r1, [pc, #16]	@ 00075b5c 0449
.org 0x75b5e
	movs r0, #0	@ 00075b5e 0020
.org 0x75b60
	ldrsb r0, [r2, r0]	@ 00075b60 1056
.org 0x75b62
	lsls r0, r0, #2	@ 00075b62 8000
.org 0x75b64
	adds r0, r0, r1	@ 00075b64 4018
.org 0x75b66
	ldr r1, [r4, #84]	@ 00075b66 616d
.org 0x75b68
	ldr r0, [r0, #0]	@ 00075b68 0068
.org 0x75b6a
	adds r1, r1, r0	@ 00075b6a 0918
.org 0x75b6c
	b.n 0x75b84	@ 00075b6c 0ae0
.org 0x75b6e
	.byte 0x00	@ 00075b6e data
.org 0x75b6f
	.byte 0x00	@ 00075b6f data
.org 0x75b70
	.byte 0x10,0xd1,0x85,0x08	@ 00075b70 data
.org 0x75b74
	ldr r1, [pc, #72]	@ 00075b74 1249
.org 0x75b76
	movs r0, #0	@ 00075b76 0020
.org 0x75b78
	ldrsb r0, [r2, r0]	@ 00075b78 1056
.org 0x75b7a
	lsls r0, r0, #2	@ 00075b7a 8000
.org 0x75b7c
	adds r0, r0, r1	@ 00075b7c 4018
.org 0x75b7e
	ldr r1, [r4, #84]	@ 00075b7e 616d
.org 0x75b80
	ldr r0, [r0, #0]	@ 00075b80 0068
.org 0x75b82
	subs r1, r1, r0	@ 00075b82 091a
.org 0x75b84
	str r1, [r4, #84]	@ 00075b84 6165
.org 0x75b86
	adds r0, r4, #0	@ 00075b86 201c
.org 0x75b88
	bl 0x1cff0	@ 00075b88 a7f732fa
.org 0x75b8c
	ldrb r0, [r4, #15]	@ 00075b8c e07b
.org 0x75b8e
	cmp r0, #0	@ 00075b8e 0028
.org 0x75b90
	bne.n 0x75bd4	@ 00075b90 20d1
.org 0x75b92
	adds r0, r4, #0	@ 00075b92 201c
.org 0x75b94
	adds r0, #113	@ 00075b94 7130
.org 0x75b96
	ldrb r0, [r0, #0]	@ 00075b96 0078
.org 0x75b98
	lsls r0, r0, #24	@ 00075b98 0006
.org 0x75b9a
	asrs r0, r0, #24	@ 00075b9a 0016
.org 0x75b9c
	cmp r0, #1	@ 00075b9c 0128
.org 0x75b9e
	ble.n 0x75c24	@ 00075b9e 41dd
.org 0x75ba0
	adds r0, r4, #0	@ 00075ba0 201c
.org 0x75ba2
	adds r0, #116	@ 00075ba2 7430
.org 0x75ba4
	ldr r1, [pc, #28]	@ 00075ba4 0749
.org 0x75ba6
	bl 0x5784	@ 00075ba6 8ff7edfd
.org 0x75baa
	ldrb r1, [r4, #10]	@ 00075baa a17a
.org 0x75bac
	movs r0, #16	@ 00075bac 1020
.org 0x75bae
	ands r0, r1	@ 00075bae 0840
.org 0x75bb0
	cmp r0, #0	@ 00075bb0 0028
.org 0x75bb2
	beq.n 0x75bc8	@ 00075bb2 09d0
.org 0x75bb4
	adds r0, r4, #0	@ 00075bb4 201c
.org 0x75bb6
	movs r1, #3	@ 00075bb6 0321
.org 0x75bb8
	movs r2, #0	@ 00075bb8 0022
.org 0x75bba
	bl 0xcbf7c	@ 00075bba 56f0dff9
.org 0x75bbe
	b.n 0x75bf6	@ 00075bbe 1ae0
.org 0x75bc0
	.byte 0x10,0xd1,0x85,0x08	@ 00075bc0 data
.org 0x75bc4
	.byte 0x94,0xce,0x85,0x08	@ 00075bc4 data
.org 0x75bc8
	adds r0, r4, #0	@ 00075bc8 201c
.org 0x75bca
	movs r1, #3	@ 00075bca 0321
.org 0x75bcc
	movs r2, #128	@ 00075bcc 8022
.org 0x75bce
	bl 0xcbf7c	@ 00075bce 56f0d5f9
.org 0x75bd2
	b.n 0x75bf6	@ 00075bd2 10e0
.org 0x75bd4
	cmp r0, #1	@ 00075bd4 0128
.org 0x75bd6
	bne.n 0x75c04	@ 00075bd6 15d1
.org 0x75bd8
	adds r1, r4, #0	@ 00075bd8 211c
.org 0x75bda
	adds r1, #217	@ 00075bda d931
.org 0x75bdc
	strb r0, [r1, #0]	@ 00075bdc 0870
.org 0x75bde
	adds r0, r4, #0	@ 00075bde 201c
.org 0x75be0
	adds r0, #113	@ 00075be0 7130
.org 0x75be2
	ldrb r0, [r0, #0]	@ 00075be2 0078
.org 0x75be4
	lsls r0, r0, #24	@ 00075be4 0006
.org 0x75be6
	asrs r0, r0, #24	@ 00075be6 0016
.org 0x75be8
	cmp r0, #4	@ 00075be8 0428
.org 0x75bea
	ble.n 0x75c24	@ 00075bea 1bdd
.org 0x75bec
	adds r0, r4, #0	@ 00075bec 201c
.org 0x75bee
	adds r0, #116	@ 00075bee 7430
.org 0x75bf0
	ldr r1, [pc, #12]	@ 00075bf0 0349
.org 0x75bf2
	bl 0x5784	@ 00075bf2 8ff7c7fd
.org 0x75bf6
	ldrb r0, [r4, #15]	@ 00075bf6 e07b
.org 0x75bf8
	adds r0, #1	@ 00075bf8 0130
.org 0x75bfa
	strb r0, [r4, #15]	@ 00075bfa e073
.org 0x75bfc
	b.n 0x75c24	@ 00075bfc 12e0
.org 0x75bfe
	.byte 0x00	@ 00075bfe data
.org 0x75bff
	.byte 0x00	@ 00075bff data
.org 0x75c00
	.byte 0xac,0xce,0x85,0x08	@ 00075c00 data
.org 0x75c04
	adds r0, r4, #0	@ 00075c04 201c
.org 0x75c06
	adds r0, #115	@ 00075c06 7330
.org 0x75c08
	ldrb r0, [r0, #0]	@ 00075c08 0078
.org 0x75c0a
	cmp r0, #3	@ 00075c0a 0328
.org 0x75c0c
	bne.n 0x75c24	@ 00075c0c 0ad1
.org 0x75c0e
	ldrb r0, [r4, #18]	@ 00075c0e a07c
.org 0x75c10
	subs r0, #1	@ 00075c10 0138

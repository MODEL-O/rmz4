@ FUN_08075a58  entry 0x08075a58  size 164
.thumb
.org 0x75a58
FUN_08075a58:
	push {r4, r5, lr}	@ 00075a58 30b5
.org 0x75a5a
	adds r4, r0, #0	@ 00075a5a 041c
.org 0x75a5c
	ldrb r5, [r4, #14]	@ 00075a5c a57b
.org 0x75a5e
	cmp r5, #0	@ 00075a5e 002d
.org 0x75a60
	bne.n 0x75a7a	@ 00075a60 0bd1
.org 0x75a62
	ldr r1, [pc, #60]	@ 00075a62 0f49
.org 0x75a64
	bl 0x1cf00	@ 00075a64 a7f74cfa
.org 0x75a68
	adds r0, r4, #0	@ 00075a68 201c
.org 0x75a6a
	adds r0, #116	@ 00075a6a 7430
.org 0x75a6c
	ldr r1, [pc, #52]	@ 00075a6c 0d49
.org 0x75a6e
	bl 0x5784	@ 00075a6e 8ff789fe
.org 0x75a72
	strb r5, [r4, #15]	@ 00075a72 e573
.org 0x75a74
	ldrb r0, [r4, #14]	@ 00075a74 a07b
.org 0x75a76
	adds r0, #1	@ 00075a76 0130
.org 0x75a78
	strb r0, [r4, #14]	@ 00075a78 a073
.org 0x75a7a
	adds r0, r4, #0	@ 00075a7a 201c
.org 0x75a7c
	bl 0x1cff0	@ 00075a7c a7f7b8fa
.org 0x75a80
	adds r0, r4, #0	@ 00075a80 201c
.org 0x75a82
	adds r0, #140	@ 00075a82 8c30
.org 0x75a84
	ldr r0, [r0, #0]	@ 00075a84 0068
.org 0x75a86
	movs r1, #8	@ 00075a86 0821
.org 0x75a88
	ands r0, r1	@ 00075a88 0840
.org 0x75a8a
	cmp r0, #0	@ 00075a8a 0028
.org 0x75a8c
	beq.n 0x75ab8	@ 00075a8c 14d0
.org 0x75a8e
	ldr r0, [pc, #24]	@ 00075a8e 0648
.org 0x75a90
	ldr r0, [r0, #0]	@ 00075a90 0068
.org 0x75a92
	ldr r1, [r4, #84]	@ 00075a92 616d
.org 0x75a94
	ldr r0, [r0, #84]	@ 00075a94 406d
.org 0x75a96
	cmp r1, r0	@ 00075a96 8142
.org 0x75a98
	bge.n 0x75ab0	@ 00075a98 0ada
.org 0x75a9a
	ldr r2, [pc, #16]	@ 00075a9a 044a
.org 0x75a9c
	b.n 0x75ab4	@ 00075a9c 0ae0
.org 0x75a9e
	.byte 0x00	@ 00075a9e data
.org 0x75a9f
	.byte 0x00	@ 00075a9f data
.org 0x75aa0
	.byte 0x04,0xaf,0x00,0x00	@ 00075aa0 data
.org 0x75aa4
	.byte 0x4c,0xce,0x85,0x08	@ 00075aa4 data
.org 0x75aa8
	.byte 0xf0,0xdb,0x02,0x02	@ 00075aa8 data
.org 0x75aac
	.byte 0x00,0xff,0xff,0xff	@ 00075aac data
.org 0x75ab0
	movs r2, #128	@ 00075ab0 8022
.org 0x75ab2
	lsls r2, r2, #1	@ 00075ab2 5200
.org 0x75ab4
	adds r0, r1, r2	@ 00075ab4 8818
.org 0x75ab6
	str r0, [r4, #84]	@ 00075ab6 6065
.org 0x75ab8
	ldrb r1, [r4, #15]	@ 00075ab8 e17b
.org 0x75aba
	cmp r1, #0	@ 00075aba 0029
.org 0x75abc
	bne.n 0x75ad2	@ 00075abc 09d1
.org 0x75abe
	adds r0, r4, #0	@ 00075abe 201c
.org 0x75ac0
	adds r0, #115	@ 00075ac0 7330
.org 0x75ac2
	ldrb r0, [r0, #0]	@ 00075ac2 0078
.org 0x75ac4
	cmp r0, #4	@ 00075ac4 0428
.org 0x75ac6
	bne.n 0x75b08	@ 00075ac6 1fd1
.org 0x75ac8
	movs r0, #16	@ 00075ac8 1020
.org 0x75aca
	strb r0, [r4, #18]	@ 00075aca a074
.org 0x75acc
	adds r0, r1, #1	@ 00075acc 481c
.org 0x75ace
	strb r0, [r4, #15]	@ 00075ace e073
.org 0x75ad0
	b.n 0x75b08	@ 00075ad0 1ae0
.org 0x75ad2
	ldrb r0, [r4, #18]	@ 00075ad2 a07c
.org 0x75ad4
	subs r0, #1	@ 00075ad4 0138
.org 0x75ad6
	strb r0, [r4, #18]	@ 00075ad6 a074
.org 0x75ad8
	lsls r0, r0, #24	@ 00075ad8 0006
.org 0x75ada
	lsrs r0, r0, #24	@ 00075ada 000e
.org 0x75adc
	cmp r0, #255	@ 00075adc ff28
.org 0x75ade
	bne.n 0x75b08	@ 00075ade 13d1
.org 0x75ae0
	adds r0, r4, #0	@ 00075ae0 201c
.org 0x75ae2
	adds r0, #221	@ 00075ae2 dd30
.org 0x75ae4
	ldrb r0, [r0, #0]	@ 00075ae4 0078
.org 0x75ae6
	cmp r0, #0	@ 00075ae6 0028
.org 0x75ae8
	beq.n 0x75b00	@ 00075ae8 0ad0
.org 0x75aea
	adds r2, r4, #0	@ 00075aea 221c
.org 0x75aec
	adds r2, #219	@ 00075aec db32
.org 0x75aee
	ldrb r0, [r2, #0]	@ 00075aee 1078
.org 0x75af0
	adds r0, #1	@ 00075af0 0130
.org 0x75af2
	movs r1, #1	@ 00075af2 0121
.org 0x75af4
	ands r0, r1	@ 00075af4 0840
.org 0x75af6
	strb r0, [r2, #0]	@ 00075af6 1070
.org 0x75af8
	cmp r0, #0	@ 00075af8 0028
.org 0x75afa
	beq.n 0x75b00	@ 00075afa 01d0

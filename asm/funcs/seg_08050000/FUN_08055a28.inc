@ FUN_08055a28  entry 0x08055a28  size 204
.thumb
.org 0x55a28
FUN_08055a28:
	push {r4, r5, r6, lr}	@ 00055a28 70b5
.org 0x55a2a
	adds r4, r0, #0	@ 00055a2a 041c
.org 0x55a2c
	ldrb r0, [r4, #10]	@ 00055a2c a07a
.org 0x55a2e
	lsrs r5, r0, #4	@ 00055a2e 0509
.org 0x55a30
	movs r0, #1	@ 00055a30 0120
.org 0x55a32
	ands r5, r0	@ 00055a32 0540
.org 0x55a34
	adds r6, r5, #0	@ 00055a34 2e1c
.org 0x55a36
	ldrb r0, [r4, #15]	@ 00055a36 e07b
.org 0x55a38
	cmp r0, #0	@ 00055a38 0028
.org 0x55a3a
	bne.n 0x55a68	@ 00055a3a 15d1
.org 0x55a3c
	movs r0, #248	@ 00055a3c f820
.org 0x55a3e
	bl 0x2b10	@ 00055a3e adf767f8
.org 0x55a42
	ldr r1, [pc, #132]	@ 00055a42 2149
.org 0x55a44
	adds r0, r4, #0	@ 00055a44 201c
.org 0x55a46
	bl 0x1cf00	@ 00055a46 c7f75bfa
.org 0x55a4a
	adds r0, r4, #0	@ 00055a4a 201c
.org 0x55a4c
	bl 0x5977c	@ 00055a4c 03f096fe
.org 0x55a50
	adds r2, r0, #0	@ 00055a50 021c
.org 0x55a52
	ldr r1, [pc, #120]	@ 00055a52 1e49
.org 0x55a54
	lsls r0, r2, #1	@ 00055a54 5000
.org 0x55a56
	adds r0, r0, r1	@ 00055a56 4018
.org 0x55a58
	ldrh r1, [r0, #0]	@ 00055a58 0188
.org 0x55a5a
	lsls r0, r5, #1	@ 00055a5a 6800
.org 0x55a5c
	subs r0, #1	@ 00055a5c 0138
.org 0x55a5e
	muls r0, r1	@ 00055a5e 4843
.org 0x55a60
	str r0, [r4, #92]	@ 00055a60 e065
.org 0x55a62
	ldrb r0, [r4, #15]	@ 00055a62 e07b
.org 0x55a64
	adds r0, #1	@ 00055a64 0130
.org 0x55a66
	strb r0, [r4, #15]	@ 00055a66 e073
.org 0x55a68
	adds r0, r4, #0	@ 00055a68 201c
.org 0x55a6a
	bl 0x1cff0	@ 00055a6a c7f7c1fa
.org 0x55a6e
	adds r0, r4, #0	@ 00055a6e 201c
.org 0x55a70
	adds r0, #116	@ 00055a70 7430
.org 0x55a72
	ldr r3, [pc, #92]	@ 00055a72 174b
.org 0x55a74
	ldrb r1, [r4, #30]	@ 00055a74 a17f
.org 0x55a76
	lsls r1, r1, #8	@ 00055a76 0902
.org 0x55a78
	adds r2, r4, #0	@ 00055a78 221c
.org 0x55a7a
	adds r2, #112	@ 00055a7a 7032
.org 0x55a7c
	ldrb r2, [r2, #0]	@ 00055a7c 1278
.org 0x55a7e
	orrs r1, r2	@ 00055a7e 1143
.org 0x55a80
	ldr r2, [pc, #80]	@ 00055a80 144a
.org 0x55a82
	adds r1, r1, r2	@ 00055a82 8918
.org 0x55a84
	lsls r1, r1, #2	@ 00055a84 8900
.org 0x55a86
	adds r1, r1, r3	@ 00055a86 c918
.org 0x55a88
	adds r2, r4, #0	@ 00055a88 221c
.org 0x55a8a
	adds r2, #113	@ 00055a8a 7132
.org 0x55a8c
	ldrb r2, [r2, #0]	@ 00055a8c 1278
.org 0x55a8e
	lsls r2, r2, #24	@ 00055a8e 1206
.org 0x55a90
	asrs r2, r2, #24	@ 00055a90 1216
.org 0x55a92
	ldr r1, [r1, #0]	@ 00055a92 0968
.org 0x55a94
	lsls r2, r2, #2	@ 00055a94 9200
.org 0x55a96
	adds r2, r2, r1	@ 00055a96 5218
.org 0x55a98
	ldr r1, [r2, #0]	@ 00055a98 1168
.org 0x55a9a
	ldrb r2, [r1, #0]	@ 00055a9a 0a78
.org 0x55a9c
	lsls r1, r2, #1	@ 00055a9c 5100
.org 0x55a9e
	adds r1, r1, r2	@ 00055a9e 8918
.org 0x55aa0
	lsls r1, r1, #3	@ 00055aa0 c900
.org 0x55aa2
	ldr r2, [pc, #52]	@ 00055aa2 0d4a
.org 0x55aa4
	adds r1, r1, r2	@ 00055aa4 8918
.org 0x55aa6
	bl 0x5784	@ 00055aa6 aff76dfe
.org 0x55aaa
	ldr r2, [r4, #84]	@ 00055aaa 626d
.org 0x55aac
	ldr r0, [r4, #92]	@ 00055aac e06d
.org 0x55aae
	adds r2, r2, r0	@ 00055aae 1218
.org 0x55ab0
	str r2, [r4, #84]	@ 00055ab0 6265
.org 0x55ab2
	adds r0, r4, #0	@ 00055ab2 201c
.org 0x55ab4
	bl 0x597ac	@ 00055ab4 03f07afe
.org 0x55ab8
	cmp r0, #0	@ 00055ab8 0028
.org 0x55aba
	beq.n 0x55adc	@ 00055aba 0fd0
.org 0x55abc
	movs r1, #0	@ 00055abc 0021
.org 0x55abe
	movs r0, #4	@ 00055abe 0420
.org 0x55ac0
	strb r0, [r4, #13]	@ 00055ac0 6073
.org 0x55ac2
	strb r1, [r4, #14]	@ 00055ac2 a173
.org 0x55ac4
	strb r1, [r4, #15]	@ 00055ac4 e173
.org 0x55ac6
	b.n 0x55b02	@ 00055ac6 1ce0
.org 0x55ac8
	.byte 0x08,0xa0,0x00,0x00	@ 00055ac8 data
.org 0x55acc
	.byte 0xa4,0x87,0x85,0x08	@ 00055acc data
.org 0x55ad0
	.byte 0x1c,0x87,0x85,0x08	@ 00055ad0 data
.org 0x55ad4
	.byte 0x00,0x60,0xff,0xff	@ 00055ad4 data
.org 0x55ad8
	.byte 0xcc,0x84,0x85,0x08	@ 00055ad8 data
.org 0x55adc
	ldr r0, [pc, #40]	@ 00055adc 0a48
.org 0x55ade
	ldr r2, [r0, #0]	@ 00055ade 0268
.org 0x55ae0
	lsls r0, r6, #1	@ 00055ae0 7000
.org 0x55ae2
	subs r0, #1	@ 00055ae2 0138
.org 0x55ae4
	lsls r0, r0, #13	@ 00055ae4 4003
.org 0x55ae6
	ldr r1, [r4, #84]	@ 00055ae6 616d
.org 0x55ae8
	adds r1, r1, r0	@ 00055ae8 0918
.org 0x55aea
	ldr r0, [r2, #84]	@ 00055aea 506d
.org 0x55aec
	subs r0, r0, r1	@ 00055aec 401a
.org 0x55aee
	movs r1, #128	@ 00055aee 8021
.org 0x55af0
	lsls r1, r1, #6	@ 00055af0 8901
.org 0x55af2
	adds r0, r0, r1	@ 00055af2 4018

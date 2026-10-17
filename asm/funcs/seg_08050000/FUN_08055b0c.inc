@ FUN_08055b0c  entry 0x08055b0c  size 204
.thumb
.org 0x55b0c
FUN_08055b0c:
	push {r4, r5, r6, r7, lr}	@ 00055b0c f0b5
.org 0x55b0e
	adds r4, r0, #0	@ 00055b0e 041c
.org 0x55b10
	ldrb r0, [r4, #10]	@ 00055b10 a07a
.org 0x55b12
	lsrs r5, r0, #4	@ 00055b12 0509
.org 0x55b14
	movs r6, #1	@ 00055b14 0126
.org 0x55b16
	ands r5, r6	@ 00055b16 3540
.org 0x55b18
	adds r7, r5, #0	@ 00055b18 2f1c
.org 0x55b1a
	ldrb r0, [r4, #15]	@ 00055b1a e07b
.org 0x55b1c
	cmp r0, #0	@ 00055b1c 0028
.org 0x55b1e
	bne.n 0x55b4c	@ 00055b1e 15d1
.org 0x55b20
	movs r0, #248	@ 00055b20 f820
.org 0x55b22
	bl 0x2b10	@ 00055b22 acf7f5ff
.org 0x55b26
	ldr r1, [pc, #132]	@ 00055b26 2149
.org 0x55b28
	adds r0, r4, #0	@ 00055b28 201c
.org 0x55b2a
	bl 0x1cf00	@ 00055b2a c7f7e9f9
.org 0x55b2e
	adds r0, r4, #0	@ 00055b2e 201c
.org 0x55b30
	bl 0x5977c	@ 00055b30 03f024fe
.org 0x55b34
	adds r2, r0, #0	@ 00055b34 021c
.org 0x55b36
	ldr r1, [pc, #120]	@ 00055b36 1e49
.org 0x55b38
	lsls r0, r2, #1	@ 00055b38 5000
.org 0x55b3a
	adds r0, r0, r1	@ 00055b3a 4018
.org 0x55b3c
	ldrh r1, [r0, #0]	@ 00055b3c 0188
.org 0x55b3e
	lsls r0, r5, #1	@ 00055b3e 6800
.org 0x55b40
	subs r0, r6, r0	@ 00055b40 301a
.org 0x55b42
	muls r0, r1	@ 00055b42 4843
.org 0x55b44
	str r0, [r4, #92]	@ 00055b44 e065
.org 0x55b46
	ldrb r0, [r4, #15]	@ 00055b46 e07b
.org 0x55b48
	adds r0, #1	@ 00055b48 0130
.org 0x55b4a
	strb r0, [r4, #15]	@ 00055b4a e073
.org 0x55b4c
	adds r0, r4, #0	@ 00055b4c 201c
.org 0x55b4e
	bl 0x1cff0	@ 00055b4e c7f74ffa
.org 0x55b52
	adds r0, r4, #0	@ 00055b52 201c
.org 0x55b54
	adds r0, #116	@ 00055b54 7430
.org 0x55b56
	ldr r3, [pc, #92]	@ 00055b56 174b
.org 0x55b58
	ldrb r1, [r4, #30]	@ 00055b58 a17f
.org 0x55b5a
	lsls r1, r1, #8	@ 00055b5a 0902
.org 0x55b5c
	adds r2, r4, #0	@ 00055b5c 221c
.org 0x55b5e
	adds r2, #112	@ 00055b5e 7032
.org 0x55b60
	ldrb r2, [r2, #0]	@ 00055b60 1278
.org 0x55b62
	orrs r1, r2	@ 00055b62 1143
.org 0x55b64
	ldr r2, [pc, #80]	@ 00055b64 144a
.org 0x55b66
	adds r1, r1, r2	@ 00055b66 8918
.org 0x55b68
	lsls r1, r1, #2	@ 00055b68 8900
.org 0x55b6a
	adds r1, r1, r3	@ 00055b6a c918
.org 0x55b6c
	adds r2, r4, #0	@ 00055b6c 221c
.org 0x55b6e
	adds r2, #113	@ 00055b6e 7132
.org 0x55b70
	ldrb r2, [r2, #0]	@ 00055b70 1278
.org 0x55b72
	lsls r2, r2, #24	@ 00055b72 1206
.org 0x55b74
	asrs r2, r2, #24	@ 00055b74 1216
.org 0x55b76
	ldr r1, [r1, #0]	@ 00055b76 0968
.org 0x55b78
	lsls r2, r2, #2	@ 00055b78 9200
.org 0x55b7a
	adds r2, r2, r1	@ 00055b7a 5218
.org 0x55b7c
	ldr r1, [r2, #0]	@ 00055b7c 1168
.org 0x55b7e
	ldrb r2, [r1, #0]	@ 00055b7e 0a78
.org 0x55b80
	lsls r1, r2, #1	@ 00055b80 5100
.org 0x55b82
	adds r1, r1, r2	@ 00055b82 8918
.org 0x55b84
	lsls r1, r1, #3	@ 00055b84 c900
.org 0x55b86
	ldr r2, [pc, #52]	@ 00055b86 0d4a
.org 0x55b88
	adds r1, r1, r2	@ 00055b88 8918
.org 0x55b8a
	bl 0x5784	@ 00055b8a aff7fbfd
.org 0x55b8e
	ldr r2, [r4, #84]	@ 00055b8e 626d
.org 0x55b90
	ldr r0, [r4, #92]	@ 00055b90 e06d
.org 0x55b92
	adds r2, r2, r0	@ 00055b92 1218
.org 0x55b94
	str r2, [r4, #84]	@ 00055b94 6265
.org 0x55b96
	adds r0, r4, #0	@ 00055b96 201c
.org 0x55b98
	bl 0x597ac	@ 00055b98 03f008fe
.org 0x55b9c
	cmp r0, #0	@ 00055b9c 0028
.org 0x55b9e
	beq.n 0x55bc0	@ 00055b9e 0fd0
.org 0x55ba0
	movs r1, #0	@ 00055ba0 0021
.org 0x55ba2
	movs r0, #4	@ 00055ba2 0420
.org 0x55ba4
	strb r0, [r4, #13]	@ 00055ba4 6073
.org 0x55ba6
	strb r1, [r4, #14]	@ 00055ba6 a173
.org 0x55ba8
	strb r1, [r4, #15]	@ 00055ba8 e173
.org 0x55baa
	b.n 0x55be6	@ 00055baa 1ce0
.org 0x55bac
	.byte 0x08,0xa0,0x00,0x00	@ 00055bac data
.org 0x55bb0
	.byte 0xaa,0x87,0x85,0x08	@ 00055bb0 data
.org 0x55bb4
	.byte 0x1c,0x87,0x85,0x08	@ 00055bb4 data
.org 0x55bb8
	.byte 0x00,0x60,0xff,0xff	@ 00055bb8 data
.org 0x55bbc
	.byte 0xcc,0x84,0x85,0x08	@ 00055bbc data
.org 0x55bc0
	ldr r0, [pc, #40]	@ 00055bc0 0a48
.org 0x55bc2
	ldr r2, [r0, #0]	@ 00055bc2 0268
.org 0x55bc4
	lsls r0, r7, #1	@ 00055bc4 7800
.org 0x55bc6
	subs r0, #1	@ 00055bc6 0138
.org 0x55bc8
	lsls r0, r0, #13	@ 00055bc8 4003
.org 0x55bca
	ldr r1, [r4, #84]	@ 00055bca 616d
.org 0x55bcc
	adds r1, r1, r0	@ 00055bcc 0918
.org 0x55bce
	ldr r0, [r2, #84]	@ 00055bce 506d
.org 0x55bd0
	subs r0, r0, r1	@ 00055bd0 401a
.org 0x55bd2
	movs r1, #128	@ 00055bd2 8021
.org 0x55bd4
	lsls r1, r1, #6	@ 00055bd4 8901
.org 0x55bd6
	adds r0, r0, r1	@ 00055bd6 4018

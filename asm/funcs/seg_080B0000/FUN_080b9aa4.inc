@ FUN_080b9aa4  entry 0x080b9aa4  size 214
.thumb
.org 0xb9aa4
FUN_080b9aa4:
	push {r4, r5, lr}	@ 000b9aa4 30b5
.org 0xb9aa6
	sub sp, #4	@ 000b9aa6 81b0
.org 0xb9aa8
	adds r4, r0, #0	@ 000b9aa8 041c
.org 0xb9aaa
	ldr r1, [pc, #36]	@ 000b9aaa 0949
.org 0xb9aac
	mov r0, sp	@ 000b9aac 6846
.org 0xb9aae
	movs r2, #4	@ 000b9aae 0422
.org 0xb9ab0
	bl 0x129258	@ 000b9ab0 6ff0d2fb
.org 0xb9ab4
	ldrb r0, [r4, #14]	@ 000b9ab4 a07b
.org 0xb9ab6
	cmp r0, #0	@ 000b9ab6 0028
.org 0xb9ab8
	bne.n 0xb9afc	@ 000b9ab8 20d1
.org 0xb9aba
	adds r0, r4, #0	@ 000b9aba 201c
.org 0xb9abc
	adds r0, #180	@ 000b9abc b430
.org 0xb9abe
	ldrb r0, [r0, #0]	@ 000b9abe 0078
.org 0xb9ac0
	cmp r0, #0	@ 000b9ac0 0028
.org 0xb9ac2
	bne.n 0xb9ad8	@ 000b9ac2 09d1
.org 0xb9ac4
	adds r1, r4, #0	@ 000b9ac4 211c
.org 0xb9ac6
	adds r1, #184	@ 000b9ac6 b831
.org 0xb9ac8
	ldr r0, [r4, #84]	@ 000b9ac8 606d
.org 0xb9aca
	ldr r2, [pc, #8]	@ 000b9aca 024a
.org 0xb9acc
	adds r0, r0, r2	@ 000b9acc 8018
.org 0xb9ace
	b.n 0xb9ae4	@ 000b9ace 09e0
.org 0xb9ad0
	.byte 0xf8,0x9f,0x12,0x08	@ 000b9ad0 data
.org 0xb9ad4
	.byte 0x00,0xea,0xff,0xff	@ 000b9ad4 data
.org 0xb9ad8
	adds r1, r4, #0	@ 000b9ad8 211c
.org 0xb9ada
	adds r1, #184	@ 000b9ada b831
.org 0xb9adc
	ldr r0, [r4, #84]	@ 000b9adc 606d
.org 0xb9ade
	movs r3, #176	@ 000b9ade b023
.org 0xb9ae0
	lsls r3, r3, #5	@ 000b9ae0 5b01
.org 0xb9ae2
	adds r0, r0, r3	@ 000b9ae2 c018
.org 0xb9ae4
	str r0, [r1, #0]	@ 000b9ae4 0860
.org 0xb9ae6
	adds r1, r4, #0	@ 000b9ae6 211c
.org 0xb9ae8
	adds r1, #188	@ 000b9ae8 bc31
.org 0xb9aea
	ldr r0, [r4, #88]	@ 000b9aea a06d
.org 0xb9aec
	str r0, [r1, #0]	@ 000b9aec 0860
.org 0xb9aee
	movs r0, #0	@ 000b9aee 0020
.org 0xb9af0
	strb r0, [r4, #18]	@ 000b9af0 a074
.org 0xb9af2
	movs r0, #30	@ 000b9af2 1e20
.org 0xb9af4
	strb r0, [r4, #19]	@ 000b9af4 e074
.org 0xb9af6
	ldrb r0, [r4, #14]	@ 000b9af6 a07b
.org 0xb9af8
	adds r0, #1	@ 000b9af8 0130
.org 0xb9afa
	strb r0, [r4, #14]	@ 000b9afa a073
.org 0xb9afc
	ldrb r0, [r4, #18]	@ 000b9afc a07c
.org 0xb9afe
	cmp r0, #0	@ 000b9afe 0028
.org 0xb9b00
	beq.n 0xb9b06	@ 000b9b00 01d0
.org 0xb9b02
	cmp r0, #255	@ 000b9b02 ff28
.org 0xb9b04
	bne.n 0xb9b0c	@ 000b9b04 02d1
.org 0xb9b06
	adds r0, r4, #0	@ 000b9b06 201c
.org 0xb9b08
	bl 0xb9dcc	@ 000b9b08 00f060f9
.org 0xb9b0c
	ldrb r0, [r4, #15]	@ 000b9b0c e07b
.org 0xb9b0e
	lsls r0, r0, #1	@ 000b9b0e 4000
.org 0xb9b10
	add r0, sp	@ 000b9b10 6844
.org 0xb9b12
	ldrb r0, [r0, #0]	@ 000b9b12 0078
.org 0xb9b14
	ldrb r5, [r4, #18]	@ 000b9b14 a57c
.org 0xb9b16
	adds r1, r0, r5	@ 000b9b16 4119
.org 0xb9b18
	strb r1, [r4, #18]	@ 000b9b18 a174
.org 0xb9b1a
	adds r0, r4, #0	@ 000b9b1a 201c
.org 0xb9b1c
	adds r0, #180	@ 000b9b1c b430
.org 0xb9b1e
	ldrb r0, [r0, #0]	@ 000b9b1e 0078
.org 0xb9b20
	cmp r0, #1	@ 000b9b20 0128
.org 0xb9b22
	bne.n 0xb9b48	@ 000b9b22 11d1
.org 0xb9b24
	adds r3, r4, #0	@ 000b9b24 231c
.org 0xb9b26
	adds r3, #184	@ 000b9b26 b833
.org 0xb9b28
	ldr r2, [pc, #24]	@ 000b9b28 064a
.org 0xb9b2a
	adds r0, r1, #0	@ 000b9b2a 081c
.org 0xb9b2c
	adds r0, #64	@ 000b9b2c 4030
.org 0xb9b2e
	lsls r0, r0, #24	@ 000b9b2e 0006
.org 0xb9b30
	lsrs r0, r0, #23	@ 000b9b30 c00d
.org 0xb9b32
	adds r0, r0, r2	@ 000b9b32 8018
.org 0xb9b34
	movs r5, #0	@ 000b9b34 0025
.org 0xb9b36
	ldrsh r1, [r0, r5]	@ 000b9b36 415f
.org 0xb9b38
	movs r0, #22	@ 000b9b38 1620
.org 0xb9b3a
	muls r1, r0	@ 000b9b3a 4143
.org 0xb9b3c
	ldr r0, [r3, #0]	@ 000b9b3c 1868
.org 0xb9b3e
	subs r0, r0, r1	@ 000b9b3e 401a
.org 0xb9b40
	b.n 0xb9b64	@ 000b9b40 10e0
.org 0xb9b42
	.byte 0x00	@ 000b9b42 data
.org 0xb9b43
	.byte 0x00	@ 000b9b43 data
.org 0xb9b44
	.byte 0x0c,0x93,0x12,0x08	@ 000b9b44 data
.org 0xb9b48
	adds r3, r4, #0	@ 000b9b48 231c
.org 0xb9b4a
	adds r3, #184	@ 000b9b4a b833
.org 0xb9b4c
	ldr r2, [pc, #56]	@ 000b9b4c 0e4a
.org 0xb9b4e
	adds r0, r1, #0	@ 000b9b4e 081c
.org 0xb9b50
	adds r0, #64	@ 000b9b50 4030
.org 0xb9b52
	lsls r0, r0, #24	@ 000b9b52 0006
.org 0xb9b54
	lsrs r0, r0, #23	@ 000b9b54 c00d
.org 0xb9b56
	adds r0, r0, r2	@ 000b9b56 8018
.org 0xb9b58
	movs r5, #0	@ 000b9b58 0025
.org 0xb9b5a
	ldrsh r1, [r0, r5]	@ 000b9b5a 415f
.org 0xb9b5c
	movs r0, #22	@ 000b9b5c 1620
.org 0xb9b5e
	muls r1, r0	@ 000b9b5e 4143
.org 0xb9b60
	ldr r0, [r3, #0]	@ 000b9b60 1868
.org 0xb9b62
	adds r0, r0, r1	@ 000b9b62 4018
.org 0xb9b64
	str r0, [r4, #84]	@ 000b9b64 6065
.org 0xb9b66
	adds r1, r2, #0	@ 000b9b66 111c
.org 0xb9b68
	adds r2, r4, #0	@ 000b9b68 221c
.org 0xb9b6a
	adds r2, #188	@ 000b9b6a bc32
.org 0xb9b6c
	ldrb r0, [r4, #18]	@ 000b9b6c a07c
.org 0xb9b6e
	lsls r0, r0, #1	@ 000b9b6e 4000
.org 0xb9b70
	adds r0, r0, r1	@ 000b9b70 4018
.org 0xb9b72
	movs r3, #0	@ 000b9b72 0023
.org 0xb9b74
	ldrsh r1, [r0, r3]	@ 000b9b74 c15e
.org 0xb9b76
	movs r0, #22	@ 000b9b76 1620
.org 0xb9b78
	muls r1, r0	@ 000b9b78 4143

@ FUN_08087ae8  entry 0x08087ae8  size 132
.thumb
.org 0x87ae8
FUN_08087ae8:
	push {r4, lr}	@ 00087ae8 10b5
.org 0x87aea
	adds r4, r0, #0	@ 00087aea 041c
.org 0x87aec
	ldrb r0, [r4, #15]	@ 00087aec e07b
.org 0x87aee
	cmp r0, #0	@ 00087aee 0028
.org 0x87af0
	bne.n 0x87b0e	@ 00087af0 0dd1
.org 0x87af2
	adds r0, r4, #0	@ 00087af2 201c
.org 0x87af4
	adds r0, #116	@ 00087af4 7430
.org 0x87af6
	ldr r1, [pc, #68]	@ 00087af6 1149
.org 0x87af8
	bl 0x5784	@ 00087af8 7df744fe
.org 0x87afc
	ldr r1, [pc, #64]	@ 00087afc 1049
.org 0x87afe
	adds r0, r4, #0	@ 00087afe 201c
.org 0x87b00
	bl 0x1cf00	@ 00087b00 95f7fef9
.org 0x87b04
	movs r0, #8	@ 00087b04 0820
.org 0x87b06
	strb r0, [r4, #18]	@ 00087b06 a074
.org 0x87b08
	ldrb r0, [r4, #15]	@ 00087b08 e07b
.org 0x87b0a
	adds r0, #1	@ 00087b0a 0130
.org 0x87b0c
	strb r0, [r4, #15]	@ 00087b0c e073
.org 0x87b0e
	adds r0, r4, #0	@ 00087b0e 201c
.org 0x87b10
	bl 0x1cff0	@ 00087b10 95f76efa
.org 0x87b14
	ldrb r0, [r4, #18]	@ 00087b14 a07c
.org 0x87b16
	subs r0, #1	@ 00087b16 0138
.org 0x87b18
	strb r0, [r4, #18]	@ 00087b18 a074
.org 0x87b1a
	movs r2, #255	@ 00087b1a ff22
.org 0x87b1c
	lsls r0, r0, #24	@ 00087b1c 0006
.org 0x87b1e
	lsrs r3, r0, #24	@ 00087b1e 030e
.org 0x87b20
	cmp r3, #0	@ 00087b20 002b
.org 0x87b22
	bne.n 0x87b7a	@ 00087b22 2ad1
.org 0x87b24
	adds r1, r4, #0	@ 00087b24 211c
.org 0x87b26
	adds r1, #180	@ 00087b26 b431
.org 0x87b28
	ldrb r0, [r1, #0]	@ 00087b28 0878
.org 0x87b2a
	subs r0, #1	@ 00087b2a 0138
.org 0x87b2c
	strb r0, [r1, #0]	@ 00087b2c 0870
.org 0x87b2e
	ands r0, r2	@ 00087b2e 1040
.org 0x87b30
	cmp r0, #0	@ 00087b30 0028
.org 0x87b32
	bne.n 0x87b44	@ 00087b32 07d1
.org 0x87b34
	strb r3, [r4, #13]	@ 00087b34 6373
.org 0x87b36
	strb r3, [r4, #14]	@ 00087b36 a373
.org 0x87b38
	strb r3, [r4, #15]	@ 00087b38 e373
.org 0x87b3a
	b.n 0x87b7a	@ 00087b3a 1ee0
.org 0x87b3c
	.byte 0x04,0xf0,0x85,0x08	@ 00087b3c data
.org 0x87b40
	.byte 0x0b,0x1d,0x00,0x00	@ 00087b40 data
.org 0x87b44
	ldr r2, [pc, #32]	@ 00087b44 084a
.org 0x87b46
	ldr r1, [r2, #0]	@ 00087b46 1168
.org 0x87b48
	ldr r0, [pc, #32]	@ 00087b48 0848
.org 0x87b4a
	muls r0, r1	@ 00087b4a 4843
.org 0x87b4c
	ldr r1, [pc, #32]	@ 00087b4c 0849
.org 0x87b4e
	adds r0, r0, r1	@ 00087b4e 4018
.org 0x87b50
	lsls r0, r0, #1	@ 00087b50 4000
.org 0x87b52
	lsrs r1, r0, #1	@ 00087b52 4108
.org 0x87b54
	str r1, [r2, #0]	@ 00087b54 1160
.org 0x87b56
	lsrs r1, r0, #17	@ 00087b56 410c
.org 0x87b58
	movs r0, #1	@ 00087b58 0120
.org 0x87b5a
	ands r1, r0	@ 00087b5a 0140
.org 0x87b5c
	cmp r1, #0	@ 00087b5c 0029
.org 0x87b5e
	beq.n 0x87b74	@ 00087b5e 09d0
.org 0x87b60
	movs r0, #4	@ 00087b60 0420
.org 0x87b62
	strb r0, [r4, #14]	@ 00087b62 a073
.org 0x87b64
	strb r3, [r4, #15]	@ 00087b64 e373
.org 0x87b66
	b.n 0x87b7a	@ 00087b66 08e0
.org 0x87b68
	.byte 0x38,0xdc,0x02,0x02	@ 00087b68 data

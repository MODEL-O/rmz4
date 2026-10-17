@ FUN_080b3aec  entry 0x080b3aec  size 124
.thumb
.org 0xb3aec
FUN_080b3aec:
	push {r4, lr}	@ 000b3aec 10b5
.org 0xb3aee
	adds r4, r0, #0	@ 000b3aee 041c
.org 0xb3af0
	ldrb r0, [r4, #14]	@ 000b3af0 a07b
.org 0xb3af2
	cmp r0, #0	@ 000b3af2 0028
.org 0xb3af4
	bne.n 0xb3b3a	@ 000b3af4 21d1
.org 0xb3af6
	movs r0, #128	@ 000b3af6 8020
.org 0xb3af8
	lsls r0, r0, #1	@ 000b3af8 4000
.org 0xb3afa
	str r0, [r4, #92]	@ 000b3afa e065
.org 0xb3afc
	movs r1, #199	@ 000b3afc c721
.org 0xb3afe
	lsls r1, r1, #8	@ 000b3afe 0902
.org 0xb3b00
	adds r0, r4, #0	@ 000b3b00 201c
.org 0xb3b02
	bl 0x1cf00	@ 000b3b02 69f7fdf9
.org 0xb3b06
	ldrb r1, [r4, #10]	@ 000b3b06 a17a
.org 0xb3b08
	movs r0, #16	@ 000b3b08 1020
.org 0xb3b0a
	ands r0, r1	@ 000b3b0a 0840
.org 0xb3b0c
	cmp r0, #0	@ 000b3b0c 0028
.org 0xb3b0e
	bne.n 0xb3b20	@ 000b3b0e 07d1
.org 0xb3b10
	ldr r0, [r4, #92]	@ 000b3b10 e06d
.org 0xb3b12
	lsls r0, r0, #8	@ 000b3b12 0002
.org 0xb3b14
	negs r0, r0	@ 000b3b14 4042
.org 0xb3b16
	cmp r0, #0	@ 000b3b16 0028
.org 0xb3b18
	bge.n 0xb3b1c	@ 000b3b18 00da
.org 0xb3b1a
	adds r0, #255	@ 000b3b1a ff30
.org 0xb3b1c
	asrs r0, r0, #8	@ 000b3b1c 0012
.org 0xb3b1e
	str r0, [r4, #92]	@ 000b3b1e e065
.org 0xb3b20
	ldr r0, [r4, #84]	@ 000b3b20 606d
.org 0xb3b22
	ldr r1, [r4, #92]	@ 000b3b22 e16d
.org 0xb3b24
	adds r0, r0, r1	@ 000b3b24 4018
.org 0xb3b26
	str r0, [r4, #84]	@ 000b3b26 6065
.org 0xb3b28
	adds r0, r4, #0	@ 000b3b28 201c
.org 0xb3b2a
	bl 0xb3eac	@ 000b3b2a 00f0bff9
.org 0xb3b2e
	lsls r0, r0, #24	@ 000b3b2e 0006
.org 0xb3b30
	cmp r0, #0	@ 000b3b30 0028
.org 0xb3b32
	bne.n 0xb3b5a	@ 000b3b32 12d1
.org 0xb3b34
	ldrb r0, [r4, #14]	@ 000b3b34 a07b
.org 0xb3b36
	adds r0, #1	@ 000b3b36 0130
.org 0xb3b38
	strb r0, [r4, #14]	@ 000b3b38 a073
.org 0xb3b3a
	ldr r0, [r4, #84]	@ 000b3b3a 606d
.org 0xb3b3c
	ldr r1, [r4, #92]	@ 000b3b3c e16d
.org 0xb3b3e
	adds r0, r0, r1	@ 000b3b3e 4018
.org 0xb3b40
	str r0, [r4, #84]	@ 000b3b40 6065
.org 0xb3b42
	adds r0, r4, #0	@ 000b3b42 201c
.org 0xb3b44
	bl 0xb3eac	@ 000b3b44 00f0b2f9
.org 0xb3b48
	lsls r0, r0, #24	@ 000b3b48 0006
.org 0xb3b4a
	cmp r0, #0	@ 000b3b4a 0028
.org 0xb3b4c
	bne.n 0xb3b5a	@ 000b3b4c 05d1
.org 0xb3b4e
	adds r0, r4, #0	@ 000b3b4e 201c
.org 0xb3b50
	bl 0xb3edc	@ 000b3b50 00f0c4f9
.org 0xb3b54
	lsls r0, r0, #24	@ 000b3b54 0006
.org 0xb3b56
	cmp r0, #0	@ 000b3b56 0028
.org 0xb3b58
	beq.n 0xb3b62	@ 000b3b58 03d0
.org 0xb3b5a
	movs r1, #0	@ 000b3b5a 0021
.org 0xb3b5c
	movs r0, #3	@ 000b3b5c 0320
.org 0xb3b5e
	strb r0, [r4, #13]	@ 000b3b5e 6073
.org 0xb3b60
	strb r1, [r4, #14]	@ 000b3b60 a173
.org 0xb3b62
	pop {r4}	@ 000b3b62 10bc
.org 0xb3b64
	pop {r0}	@ 000b3b64 01bc
.org 0xb3b66
	bx r0	@ 000b3b66 0047

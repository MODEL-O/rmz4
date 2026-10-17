@ FUN_08067ae4  entry 0x08067ae4  size 88
.thumb
.org 0x67ae4
FUN_08067ae4:
	push {r4, lr}	@ 00067ae4 10b5
.org 0x67ae6
	adds r4, r0, #0	@ 00067ae6 041c
.org 0x67ae8
	ldrb r0, [r4, #14]	@ 00067ae8 a07b
.org 0x67aea
	cmp r0, #0	@ 00067aea 0028
.org 0x67aec
	bne.n 0x67b06	@ 00067aec 0bd1
.org 0x67aee
	ldr r1, [pc, #76]	@ 00067aee 1349
.org 0x67af0
	adds r0, r4, #0	@ 00067af0 201c
.org 0x67af2
	bl 0x1cf00	@ 00067af2 b5f705fa
.org 0x67af6
	movs r0, #4	@ 00067af6 0420
.org 0x67af8
	strb r0, [r4, #18]	@ 00067af8 a074
.org 0x67afa
	movs r0, #101	@ 00067afa 6520
.org 0x67afc
	bl 0x2b10	@ 00067afc 9bf708f8
.org 0x67b00
	ldrb r0, [r4, #14]	@ 00067b00 a07b
.org 0x67b02
	adds r0, #1	@ 00067b02 0130
.org 0x67b04
	strb r0, [r4, #14]	@ 00067b04 a073
.org 0x67b06
	adds r0, r4, #0	@ 00067b06 201c
.org 0x67b08
	bl 0x1cff0	@ 00067b08 b5f772fa
.org 0x67b0c
	adds r0, r4, #0	@ 00067b0c 201c
.org 0x67b0e
	adds r0, #115	@ 00067b0e 7330
.org 0x67b10
	ldrb r0, [r0, #0]	@ 00067b10 0078
.org 0x67b12
	cmp r0, #4	@ 00067b12 0428
.org 0x67b14
	bne.n 0x67b36	@ 00067b14 0fd1
.org 0x67b16
	adds r0, r4, #0	@ 00067b16 201c
.org 0x67b18
	adds r0, #116	@ 00067b18 7430
.org 0x67b1a
	ldr r1, [pc, #36]	@ 00067b1a 0949
.org 0x67b1c
	bl 0x5784	@ 00067b1c 9df732fe
.org 0x67b20
	ldrb r0, [r4, #18]	@ 00067b20 a07c
.org 0x67b22
	subs r0, #1	@ 00067b22 0138
.org 0x67b24
	strb r0, [r4, #18]	@ 00067b24 a074
.org 0x67b26
	lsls r0, r0, #24	@ 00067b26 0006
.org 0x67b28
	lsrs r0, r0, #24	@ 00067b28 000e
.org 0x67b2a
	cmp r0, #255	@ 00067b2a ff28
.org 0x67b2c
	bne.n 0x67b36	@ 00067b2c 03d1
.org 0x67b2e
	movs r0, #21	@ 00067b2e 1520
.org 0x67b30
	strb r0, [r4, #13]	@ 00067b30 6073
.org 0x67b32
	movs r0, #0	@ 00067b32 0020
.org 0x67b34
	strb r0, [r4, #14]	@ 00067b34 a073
.org 0x67b36
	pop {r4}	@ 00067b36 10bc
.org 0x67b38
	pop {r0}	@ 00067b38 01bc
.org 0x67b3a
	bx r0	@ 00067b3a 0047

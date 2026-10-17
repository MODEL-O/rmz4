@ FUN_08091b4c  entry 0x08091b4c  size 160
.thumb
.org 0x91b4c
FUN_08091b4c:
	push {r4, lr}	@ 00091b4c 10b5
.org 0x91b4e
	adds r4, r0, #0	@ 00091b4e 041c
.org 0x91b50
	ldrb r0, [r4, #14]	@ 00091b50 a07b
.org 0x91b52
	cmp r0, #0	@ 00091b52 0028
.org 0x91b54
	bne.n 0x91bb0	@ 00091b54 2cd1
.org 0x91b56
	adds r0, r4, #0	@ 00091b56 201c
.org 0x91b58
	bl 0x1cc9c	@ 00091b58 8bf7a0f8
.org 0x91b5c
	ldrb r1, [r4, #10]	@ 00091b5c a17a
.org 0x91b5e
	movs r0, #1	@ 00091b5e 0120
.org 0x91b60
	orrs r0, r1	@ 00091b60 0843
.org 0x91b62
	movs r1, #2	@ 00091b62 0221
.org 0x91b64
	orrs r0, r1	@ 00091b64 0843
.org 0x91b66
	strb r0, [r4, #10]	@ 00091b66 a072
.org 0x91b68
	adds r0, r4, #0	@ 00091b68 201c
.org 0x91b6a
	adds r0, #116	@ 00091b6a 7430
.org 0x91b6c
	ldr r1, [pc, #24]	@ 00091b6c 0649
.org 0x91b6e
	bl 0x5784	@ 00091b6e 73f709fe
.org 0x91b72
	adds r0, r4, #0	@ 00091b72 201c
.org 0x91b74
	adds r0, #190	@ 00091b74 be30
.org 0x91b76
	ldrb r0, [r0, #0]	@ 00091b76 0078
.org 0x91b78
	cmp r0, #1	@ 00091b78 0128
.org 0x91b7a
	bne.n 0x91b8c	@ 00091b7a 07d1
.org 0x91b7c
	movs r1, #240	@ 00091b7c f021
.org 0x91b7e
	lsls r1, r1, #6	@ 00091b7e 8901
.org 0x91b80
	adds r0, r4, #0	@ 00091b80 201c
.org 0x91b82
	bl 0x1cf00	@ 00091b82 8bf7bdf9
.org 0x91b86
	b.n 0x91b94	@ 00091b86 05e0
.org 0x91b88
	.byte 0x3c,0x03,0x86,0x08	@ 00091b88 data
.org 0x91b8c
	ldr r1, [pc, #16]	@ 00091b8c 0449
.org 0x91b8e
	adds r0, r4, #0	@ 00091b8e 201c
.org 0x91b90
	bl 0x1cf00	@ 00091b90 8bf7b6f9
.org 0x91b94
	ldr r0, [r4, #40]	@ 00091b94 a06a
.org 0x91b96
	ldrb r0, [r0, #17]	@ 00091b96 407c
.org 0x91b98
	cmp r0, #0	@ 00091b98 0028
.org 0x91b9a
	beq.n 0x91ba4	@ 00091b9a 03d0
.org 0x91b9c
	movs r0, #160	@ 00091b9c a020
.org 0x91b9e
	b.n 0x91ba6	@ 00091b9e 02e0
.org 0x91ba0
	.byte 0x02,0x3c,0x00,0x00	@ 00091ba0 data
.org 0x91ba4
	movs r0, #240	@ 00091ba4 f020
.org 0x91ba6
	strb r0, [r4, #18]	@ 00091ba6 a074
.org 0x91ba8
	ldrb r0, [r4, #14]	@ 00091ba8 a07b
.org 0x91baa
	adds r0, #1	@ 00091baa 0130
.org 0x91bac
	strb r0, [r4, #14]	@ 00091bac a073
.org 0x91bae
	b.n 0x91bd8	@ 00091bae 13e0
.org 0x91bb0
	ldrb r0, [r4, #18]	@ 00091bb0 a07c
.org 0x91bb2
	cmp r0, #32	@ 00091bb2 2028
.org 0x91bb4
	bne.n 0x91bd8	@ 00091bb4 10d1
.org 0x91bb6
	adds r0, r4, #0	@ 00091bb6 201c
.org 0x91bb8
	adds r0, #190	@ 00091bb8 be30
.org 0x91bba
	ldrb r0, [r0, #0]	@ 00091bba 0078
.org 0x91bbc
	cmp r0, #1	@ 00091bbc 0128
.org 0x91bbe
	bne.n 0x91bd0	@ 00091bbe 07d1
.org 0x91bc0
	ldr r1, [pc, #8]	@ 00091bc0 0249
.org 0x91bc2
	adds r0, r4, #0	@ 00091bc2 201c
.org 0x91bc4
	bl 0x1cf00	@ 00091bc4 8bf79cf9
.org 0x91bc8
	b.n 0x91bd8	@ 00091bc8 06e0
.org 0x91bca
	.byte 0x00	@ 00091bca data
.org 0x91bcb
	.byte 0x00	@ 00091bcb data
.org 0x91bcc
	.byte 0x01,0x3c,0x00,0x00	@ 00091bcc data
.org 0x91bd0
	ldr r1, [pc, #40]	@ 00091bd0 0a49
.org 0x91bd2
	adds r0, r4, #0	@ 00091bd2 201c
.org 0x91bd4
	bl 0x1cf00	@ 00091bd4 8bf794f9
.org 0x91bd8
	adds r0, r4, #0	@ 00091bd8 201c
.org 0x91bda
	bl 0x1cff0	@ 00091bda 8bf709fa
.org 0x91bde
	ldrb r0, [r4, #18]	@ 00091bde a07c
.org 0x91be0
	subs r0, #1	@ 00091be0 0138
.org 0x91be2
	strb r0, [r4, #18]	@ 00091be2 a074
.org 0x91be4
	lsls r0, r0, #24	@ 00091be4 0006
.org 0x91be6
	lsrs r0, r0, #24	@ 00091be6 000e
.org 0x91be8
	cmp r0, #255	@ 00091be8 ff28
.org 0x91bea
	bne.n 0x91bf4	@ 00091bea 03d1

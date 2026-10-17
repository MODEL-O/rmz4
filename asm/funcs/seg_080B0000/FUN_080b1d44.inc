@ FUN_080b1d44  entry 0x080b1d44  size 82
.thumb
.org 0xb1d44
FUN_080b1d44:
	push {r4, lr}	@ 000b1d44 10b5
.org 0xb1d46
	adds r4, r0, #0	@ 000b1d46 041c
.org 0xb1d48
	ldrb r0, [r4, #14]	@ 000b1d48 a07b
.org 0xb1d4a
	cmp r0, #0	@ 000b1d4a 0028
.org 0xb1d4c
	bne.n 0xb1d60	@ 000b1d4c 08d1
.org 0xb1d4e
	ldr r1, [pc, #48]	@ 000b1d4e 0c49
.org 0xb1d50
	adds r0, r4, #0	@ 000b1d50 201c
.org 0xb1d52
	bl 0x1cf00	@ 000b1d52 6bf7d5f8
.org 0xb1d56
	movs r0, #50	@ 000b1d56 3220
.org 0xb1d58
	strb r0, [r4, #18]	@ 000b1d58 a074
.org 0xb1d5a
	ldrb r0, [r4, #14]	@ 000b1d5a a07b
.org 0xb1d5c
	adds r0, #1	@ 000b1d5c 0130
.org 0xb1d5e
	strb r0, [r4, #14]	@ 000b1d5e a073
.org 0xb1d60
	ldrb r0, [r4, #18]	@ 000b1d60 a07c
.org 0xb1d62
	cmp r0, #29	@ 000b1d62 1d28
.org 0xb1d64
	bhi.n 0xb1d84	@ 000b1d64 0ed8
.org 0xb1d66
	adds r0, r4, #0	@ 000b1d66 201c
.org 0xb1d68
	bl 0xb21e4	@ 000b1d68 00f03cfa
.org 0xb1d6c
	lsls r0, r0, #24	@ 000b1d6c 0006
.org 0xb1d6e
	cmp r0, #0	@ 000b1d6e 0028
.org 0xb1d70
	beq.n 0xb1d84	@ 000b1d70 08d0
.org 0xb1d72
	movs r1, #0	@ 000b1d72 0021
.org 0xb1d74
	movs r0, #2	@ 000b1d74 0220
.org 0xb1d76
	strb r0, [r4, #13]	@ 000b1d76 6073
.org 0xb1d78
	strb r1, [r4, #14]	@ 000b1d78 a173
.org 0xb1d7a
	strb r1, [r4, #18]	@ 000b1d7a a174
.org 0xb1d7c
	b.n 0xb1d96	@ 000b1d7c 0be0
.org 0xb1d7e
	.byte 0x00	@ 000b1d7e data
.org 0xb1d7f
	.byte 0x00	@ 000b1d7f data
.org 0xb1d80
	.byte 0x0e,0xc2,0x00,0x00	@ 000b1d80 data
.org 0xb1d84
	adds r0, r4, #0	@ 000b1d84 201c
.org 0xb1d86
	bl 0xb2158	@ 000b1d86 00f0e7f9
.org 0xb1d8a
	lsls r0, r0, #24	@ 000b1d8a 0006
.org 0xb1d8c
	cmp r0, #0	@ 000b1d8c 0028
.org 0xb1d8e
	beq.n 0xb1d96	@ 000b1d8e 02d0
.org 0xb1d90
	movs r0, #0	@ 000b1d90 0020
.org 0xb1d92
	strb r0, [r4, #13]	@ 000b1d92 6073
.org 0xb1d94
	strb r0, [r4, #14]	@ 000b1d94 a073

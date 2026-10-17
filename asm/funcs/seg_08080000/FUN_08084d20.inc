@ FUN_08084d20  entry 0x08084d20  size 118
.thumb
.org 0x84d20
FUN_08084d20:
	push {r4, lr}	@ 00084d20 10b5
.org 0x84d22
	adds r4, r0, #0	@ 00084d22 041c
.org 0x84d24
	ldrb r0, [r4, #14]	@ 00084d24 a07b
.org 0x84d26
	cmp r0, #1	@ 00084d26 0128
.org 0x84d28
	beq.n 0x84d5e	@ 00084d28 19d0
.org 0x84d2a
	cmp r0, #1	@ 00084d2a 0128
.org 0x84d2c
	bgt.n 0x84d34	@ 00084d2c 02dc
.org 0x84d2e
	cmp r0, #0	@ 00084d2e 0028
.org 0x84d30
	beq.n 0x84d3a	@ 00084d30 03d0
.org 0x84d32
	b.n 0x84d98	@ 00084d32 31e0
.org 0x84d34
	cmp r0, #2	@ 00084d34 0228
.org 0x84d36
	beq.n 0x84d80	@ 00084d36 23d0
.org 0x84d38
	b.n 0x84d98	@ 00084d38 2ee0
.org 0x84d3a
	movs r0, #32	@ 00084d3a 2020
.org 0x84d3c
	strb r0, [r4, #18]	@ 00084d3c a074
.org 0x84d3e
	adds r0, r4, #0	@ 00084d3e 201c
.org 0x84d40
	adds r0, #116	@ 00084d40 7430
.org 0x84d42
	ldr r1, [pc, #52]	@ 00084d42 0d49
.org 0x84d44
	bl 0x5784	@ 00084d44 80f71efd
.org 0x84d48
	ldr r1, [pc, #48]	@ 00084d48 0c49
.org 0x84d4a
	ldrb r0, [r4, #16]	@ 00084d4a 207c
.org 0x84d4c
	lsls r0, r0, #1	@ 00084d4c 4000
.org 0x84d4e
	adds r0, r0, r1	@ 00084d4e 4018
.org 0x84d50
	ldrh r1, [r0, #0]	@ 00084d50 0188
.org 0x84d52
	adds r0, r4, #0	@ 00084d52 201c
.org 0x84d54
	bl 0x1cf00	@ 00084d54 98f7d4f8
.org 0x84d58
	ldrb r0, [r4, #14]	@ 00084d58 a07b
.org 0x84d5a
	adds r0, #1	@ 00084d5a 0130
.org 0x84d5c
	strb r0, [r4, #14]	@ 00084d5c a073
.org 0x84d5e
	ldrb r0, [r4, #18]	@ 00084d5e a07c
.org 0x84d60
	subs r0, #1	@ 00084d60 0138
.org 0x84d62
	strb r0, [r4, #18]	@ 00084d62 a074
.org 0x84d64
	lsls r0, r0, #24	@ 00084d64 0006
.org 0x84d66
	cmp r0, #0	@ 00084d66 0028
.org 0x84d68
	bne.n 0x84d70	@ 00084d68 02d1
.org 0x84d6a
	ldrb r0, [r4, #14]	@ 00084d6a a07b
.org 0x84d6c
	adds r0, #1	@ 00084d6c 0130
.org 0x84d6e
	strb r0, [r4, #14]	@ 00084d6e a073
.org 0x84d70
	adds r0, r4, #0	@ 00084d70 201c
.org 0x84d72
	bl 0x1cff0	@ 00084d72 98f73df9
.org 0x84d76
	b.n 0x84d98	@ 00084d76 0fe0
.org 0x84d78
	.byte 0x18,0xeb,0x85,0x08	@ 00084d78 data
.org 0x84d7c
	.byte 0xa8,0xeb,0x85,0x08	@ 00084d7c data
.org 0x84d80
	adds r0, r4, #0	@ 00084d80 201c
.org 0x84d82
	bl 0x1cff0	@ 00084d82 98f735f9
.org 0x84d86
	adds r0, r4, #0	@ 00084d86 201c
.org 0x84d88
	adds r0, #113	@ 00084d88 7130
.org 0x84d8a
	movs r1, #0	@ 00084d8a 0021
.org 0x84d8c
	ldrsb r1, [r0, r1]	@ 00084d8c 4156
.org 0x84d8e
	cmp r1, #3	@ 00084d8e 0329
.org 0x84d90
	bne.n 0x84d98	@ 00084d90 02d1
.org 0x84d92
	movs r0, #0	@ 00084d92 0020
.org 0x84d94
	strb r1, [r4, #13]	@ 00084d94 6173

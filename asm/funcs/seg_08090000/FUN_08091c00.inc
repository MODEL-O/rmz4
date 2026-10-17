@ FUN_08091c00  entry 0x08091c00  size 168
.thumb
.org 0x91c00
FUN_08091c00:
	push {r4, lr}	@ 00091c00 10b5
.org 0x91c02
	sub sp, #8	@ 00091c02 82b0
.org 0x91c04
	adds r4, r0, #0	@ 00091c04 041c
.org 0x91c06
	ldrb r0, [r4, #14]	@ 00091c06 a07b
.org 0x91c08
	cmp r0, #0	@ 00091c08 0028
.org 0x91c0a
	bne.n 0x91c92	@ 00091c0a 42d1
.org 0x91c0c
	adds r0, r4, #0	@ 00091c0c 201c
.org 0x91c0e
	adds r0, #190	@ 00091c0e be30
.org 0x91c10
	ldrb r0, [r0, #0]	@ 00091c10 0078
.org 0x91c12
	cmp r0, #1	@ 00091c12 0128
.org 0x91c14
	bne.n 0x91c48	@ 00091c14 18d1
.org 0x91c16
	ldr r0, [r4, #84]	@ 00091c16 606d
.org 0x91c18
	str r0, [sp, #0]	@ 00091c18 0090
.org 0x91c1a
	ldr r0, [r4, #88]	@ 00091c1a a06d
.org 0x91c1c
	movs r1, #240	@ 00091c1c f021
.org 0x91c1e
	lsls r1, r1, #4	@ 00091c1e 0901
.org 0x91c20
	adds r0, r0, r1	@ 00091c20 4018
.org 0x91c22
	str r0, [sp, #4]	@ 00091c22 0190
.org 0x91c24
	mov r0, sp	@ 00091c24 6846
.org 0x91c26
	movs r1, #2	@ 00091c26 0221
.org 0x91c28
	movs r2, #0	@ 00091c28 0022
.org 0x91c2a
	bl 0xdcd68	@ 00091c2a 4bf09df8
.org 0x91c2e
	mov r0, sp	@ 00091c2e 6846
.org 0x91c30
	movs r1, #2	@ 00091c30 0221
.org 0x91c32
	movs r2, #1	@ 00091c32 0122
.org 0x91c34
	bl 0xdcd68	@ 00091c34 4bf098f8
.org 0x91c38
	ldr r1, [pc, #8]	@ 00091c38 0249
.org 0x91c3a
	adds r0, r4, #0	@ 00091c3a 201c
.org 0x91c3c
	bl 0x1cf00	@ 00091c3c 8bf760f9
.org 0x91c40
	b.n 0x91c86	@ 00091c40 21e0
.org 0x91c42
	.byte 0x00	@ 00091c42 data
.org 0x91c43
	.byte 0x00	@ 00091c43 data
.org 0x91c44
	.byte 0x10,0x3c,0x00,0x00	@ 00091c44 data
.org 0x91c48
	ldrb r1, [r4, #10]	@ 00091c48 a17a
.org 0x91c4a
	movs r0, #16	@ 00091c4a 1020
.org 0x91c4c
	ands r0, r1	@ 00091c4c 0840
.org 0x91c4e
	cmp r0, #0	@ 00091c4e 0028
.org 0x91c50
	beq.n 0x91c5c	@ 00091c50 04d0
.org 0x91c52
	ldr r0, [r4, #84]	@ 00091c52 606d
.org 0x91c54
	ldr r1, [pc, #0]	@ 00091c54 0049
.org 0x91c56
	b.n 0x91c62	@ 00091c56 04e0
.org 0x91c58
	.byte 0x00,0xf1,0xff,0xff	@ 00091c58 data
.org 0x91c5c
	ldr r0, [r4, #84]	@ 00091c5c 606d
.org 0x91c5e
	movs r1, #240	@ 00091c5e f021
.org 0x91c60
	lsls r1, r1, #4	@ 00091c60 0901
.org 0x91c62
	adds r0, r0, r1	@ 00091c62 4018
.org 0x91c64
	str r0, [sp, #0]	@ 00091c64 0090
.org 0x91c66
	ldr r0, [r4, #88]	@ 00091c66 a06d
.org 0x91c68
	str r0, [sp, #4]	@ 00091c68 0190
.org 0x91c6a
	mov r0, sp	@ 00091c6a 6846
.org 0x91c6c
	movs r1, #2	@ 00091c6c 0221
.org 0x91c6e
	movs r2, #0	@ 00091c6e 0022
.org 0x91c70
	bl 0xdcd68	@ 00091c70 4bf07af8
.org 0x91c74
	mov r0, sp	@ 00091c74 6846
.org 0x91c76
	movs r1, #2	@ 00091c76 0221
.org 0x91c78
	movs r2, #1	@ 00091c78 0122
.org 0x91c7a
	bl 0xdcd68	@ 00091c7a 4bf075f8
.org 0x91c7e
	ldr r1, [pc, #52]	@ 00091c7e 0d49
.org 0x91c80
	adds r0, r4, #0	@ 00091c80 201c
.org 0x91c82
	bl 0x1cf00	@ 00091c82 8bf73df9
.org 0x91c86
	movs r0, #231	@ 00091c86 e720
.org 0x91c88
	bl 0x2b10	@ 00091c88 70f742ff
.org 0x91c8c
	ldrb r0, [r4, #14]	@ 00091c8c a07b
.org 0x91c8e
	adds r0, #1	@ 00091c8e 0130
.org 0x91c90
	strb r0, [r4, #14]	@ 00091c90 a073
.org 0x91c92
	adds r0, r4, #0	@ 00091c92 201c
.org 0x91c94
	bl 0x1cff0	@ 00091c94 8bf7acf9
.org 0x91c98
	adds r0, r4, #0	@ 00091c98 201c
.org 0x91c9a
	adds r0, #115	@ 00091c9a 7330
.org 0x91c9c
	ldrb r0, [r0, #0]	@ 00091c9c 0078
.org 0x91c9e
	cmp r0, #3	@ 00091c9e 0328
.org 0x91ca0
	bne.n 0x91caa	@ 00091ca0 03d1
.org 0x91ca2
	movs r1, #0	@ 00091ca2 0021
.org 0x91ca4
	movs r0, #8	@ 00091ca4 0820
.org 0x91ca6
	strb r0, [r4, #13]	@ 00091ca6 6073

@ FUN_080b2a4c  entry 0x080b2a4c  size 114
.thumb
.org 0xb2a4c
FUN_080b2a4c:
	push {r4, r5, lr}	@ 000b2a4c 30b5
.org 0xb2a4e
	sub sp, #8	@ 000b2a4e 82b0
.org 0xb2a50
	adds r4, r0, #0	@ 000b2a50 041c
.org 0xb2a52
	ldrb r0, [r4, #16]	@ 000b2a52 207c
.org 0xb2a54
	cmp r0, #0	@ 000b2a54 0028
.org 0xb2a56
	bne.n 0xb2ac2	@ 000b2a56 34d1
.org 0xb2a58
	adds r5, r4, #0	@ 000b2a58 251c
.org 0xb2a5a
	adds r5, #192	@ 000b2a5a c035
.org 0xb2a5c
	ldr r0, [r5, #0]	@ 000b2a5c 2868
.org 0xb2a5e
	cmp r0, #0	@ 000b2a5e 0028
.org 0xb2a60
	bne.n 0xb2ac2	@ 000b2a60 2fd1
.org 0xb2a62
	adds r0, r4, #0	@ 000b2a62 201c
.org 0xb2a64
	adds r0, #140	@ 000b2a64 8c30
.org 0xb2a66
	ldr r0, [r0, #0]	@ 000b2a66 0068
.org 0xb2a68
	movs r1, #1	@ 000b2a68 0121
.org 0xb2a6a
	ands r0, r1	@ 000b2a6a 0840
.org 0xb2a6c
	cmp r0, #0	@ 000b2a6c 0028
.org 0xb2a6e
	beq.n 0xb2ac2	@ 000b2a6e 28d0
.org 0xb2a70
	ldr r2, [pc, #48]	@ 000b2a70 0c4a
.org 0xb2a72
	movs r0, #0	@ 000b2a72 0020
.org 0xb2a74
	adds r1, r4, #0	@ 000b2a74 211c
.org 0xb2a76
	bl 0x2adac	@ 000b2a76 78f799f9
.org 0xb2a7a
	str r0, [r5, #0]	@ 000b2a7a 2860
.org 0xb2a7c
	cmp r0, #0	@ 000b2a7c 0028
.org 0xb2a7e
	beq.n 0xb2ac2	@ 000b2a7e 20d0
.org 0xb2a80
	ldrb r0, [r4, #17]	@ 000b2a80 607c
.org 0xb2a82
	cmp r0, #1	@ 000b2a82 0128
.org 0xb2a84
	bhi.n 0xb2ab0	@ 000b2a84 14d8
.org 0xb2a86
	ldr r0, [r4, #84]	@ 000b2a86 606d
.org 0xb2a88
	str r0, [sp, #0]	@ 000b2a88 0090
.org 0xb2a8a
	ldr r0, [r4, #88]	@ 000b2a8a a06d
.org 0xb2a8c
	ldr r1, [pc, #24]	@ 000b2a8c 0649
.org 0xb2a8e
	adds r0, r0, r1	@ 000b2a8e 4018
.org 0xb2a90
	str r0, [sp, #4]	@ 000b2a90 0190
.org 0xb2a92
	movs r0, #2	@ 000b2a92 0220
.org 0xb2a94
	mov r1, sp	@ 000b2a94 6946
.org 0xb2a96
	bl 0xd0c88	@ 000b2a96 1ef0f7f8
.org 0xb2a9a
	ldr r1, [pc, #16]	@ 000b2a9a 0449
.org 0xb2a9c
	adds r0, r4, #0	@ 000b2a9c 201c
.org 0xb2a9e
	bl 0x1cf00	@ 000b2a9e 6af72ffa
.org 0xb2aa2
	b.n 0xb2ab8	@ 000b2aa2 09e0
.org 0xb2aa4
	.byte 0xcc,0x36,0x86,0x08	@ 000b2aa4 data
.org 0xb2aa8
	.byte 0x00,0xe3,0xff,0xff	@ 000b2aa8 data
.org 0xb2aac
	.byte 0x08,0xc5,0x00,0x00	@ 000b2aac data
.org 0xb2ab0
	ldr r1, [pc, #24]	@ 000b2ab0 0649
.org 0xb2ab2
	adds r0, r4, #0	@ 000b2ab2 201c
.org 0xb2ab4
	bl 0x1cf00	@ 000b2ab4 6af724fa
.org 0xb2ab8
	adds r0, r4, #0	@ 000b2ab8 201c
.org 0xb2aba
	adds r0, #116	@ 000b2aba 7430
.org 0xb2abc
	ldr r1, [pc, #16]	@ 000b2abc 0449

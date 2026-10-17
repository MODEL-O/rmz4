@ FUN_080b3a1c  entry 0x080b3a1c  size 190
.thumb
.org 0xb3a1c
FUN_080b3a1c:
	push {r4, r5, r6, lr}	@ 000b3a1c 70b5
.org 0xb3a1e
	adds r5, r0, #0	@ 000b3a1e 051c
.org 0xb3a20
	ldrb r0, [r5, #14]	@ 000b3a20 a87b
.org 0xb3a22
	cmp r0, #0	@ 000b3a22 0028
.org 0xb3a24
	bne.n 0xb3a34	@ 000b3a24 06d1
.org 0xb3a26
	ldr r1, [pc, #32]	@ 000b3a26 0849
.org 0xb3a28
	adds r0, r5, #0	@ 000b3a28 281c
.org 0xb3a2a
	bl 0x1cf00	@ 000b3a2a 69f769fa
.org 0xb3a2e
	ldrb r0, [r5, #14]	@ 000b3a2e a87b
.org 0xb3a30
	adds r0, #1	@ 000b3a30 0130
.org 0xb3a32
	strb r0, [r5, #14]	@ 000b3a32 a873
.org 0xb3a34
	adds r0, r5, #0	@ 000b3a34 281c
.org 0xb3a36
	adds r0, #181	@ 000b3a36 b530
.org 0xb3a38
	ldrb r0, [r0, #0]	@ 000b3a38 0078
.org 0xb3a3a
	cmp r0, #0	@ 000b3a3a 0028
.org 0xb3a3c
	bne.n 0xb3a4c	@ 000b3a3c 06d1
.org 0xb3a3e
	adds r0, r5, #0	@ 000b3a3e 281c
.org 0xb3a40
	bl 0x1d1f4	@ 000b3a40 69f7d8fb
.org 0xb3a44
	b.n 0xb3a52	@ 000b3a44 05e0
.org 0xb3a46
	.byte 0x00	@ 000b3a46 data
.org 0xb3a47
	.byte 0x00	@ 000b3a47 data
.org 0xb3a48
	.byte 0x05,0xc7,0x00,0x00	@ 000b3a48 data
.org 0xb3a4c
	adds r0, r5, #0	@ 000b3a4c 281c
.org 0xb3a4e
	bl 0x1cff0	@ 000b3a4e 69f7cffa
.org 0xb3a52
	adds r0, r5, #0	@ 000b3a52 281c
.org 0xb3a54
	adds r0, #115	@ 000b3a54 7330
.org 0xb3a56
	ldrb r0, [r0, #0]	@ 000b3a56 0078
.org 0xb3a58
	cmp r0, #3	@ 000b3a58 0328
.org 0xb3a5a
	bne.n 0xb3ae4	@ 000b3a5a 43d1
.org 0xb3a5c
	adds r1, r5, #0	@ 000b3a5c 291c
.org 0xb3a5e
	adds r1, #184	@ 000b3a5e b831
.org 0xb3a60
	ldr r0, [r5, #84]	@ 000b3a60 686d
.org 0xb3a62
	str r0, [r1, #0]	@ 000b3a62 0860
.org 0xb3a64
	ldrb r1, [r5, #10]	@ 000b3a64 a97a
.org 0xb3a66
	movs r0, #4	@ 000b3a66 0420
.org 0xb3a68
	movs r6, #0	@ 000b3a68 0026
.org 0xb3a6a
	orrs r0, r1	@ 000b3a6a 0843
.org 0xb3a6c
	strb r0, [r5, #10]	@ 000b3a6c a872
.org 0xb3a6e
	adds r4, r5, #0	@ 000b3a6e 2c1c
.org 0xb3a70
	adds r4, #116	@ 000b3a70 7434
.org 0xb3a72
	ldr r1, [pc, #52]	@ 000b3a72 0d49
.org 0xb3a74
	adds r2, r5, #0	@ 000b3a74 2a1c
.org 0xb3a76
	adds r2, #84	@ 000b3a76 5432
.org 0xb3a78
	adds r0, r4, #0	@ 000b3a78 201c
.org 0xb3a7a
	movs r3, #20	@ 000b3a7a 1423
.org 0xb3a7c
	bl 0x5760	@ 000b3a7c 51f770fe
.org 0xb3a80
	str r5, [r4, #44]	@ 000b3a80 e562
.org 0xb3a82
	ldr r0, [pc, #40]	@ 000b3a82 0a48
.org 0xb3a84
	str r0, [r4, #36]	@ 000b3a84 6062
.org 0xb3a86
	adds r0, r5, #0	@ 000b3a86 281c
.org 0xb3a88
	bl 0xb3e38	@ 000b3a88 00f0d6f9
.org 0xb3a8c
	lsls r0, r0, #24	@ 000b3a8c 0006
.org 0xb3a8e
	lsrs r1, r0, #24	@ 000b3a8e 010e
.org 0xb3a90
	cmp r1, #1	@ 000b3a90 0129
.org 0xb3a92
	bne.n 0xb3adc	@ 000b3a92 23d1
.org 0xb3a94
	ldrb r3, [r5, #10]	@ 000b3a94 ab7a
.org 0xb3a96
	lsrs r0, r3, #4	@ 000b3a96 1809
.org 0xb3a98
	adds r2, r1, #0	@ 000b3a98 0a1c
.org 0xb3a9a
	bics r2, r0	@ 000b3a9a 8243
.org 0xb3a9c
	cmp r2, #0	@ 000b3a9c 002a
.org 0xb3a9e
	beq.n 0xb3ab0	@ 000b3a9e 07d0
.org 0xb3aa0
	movs r0, #16	@ 000b3aa0 1020
.org 0xb3aa2
	orrs r0, r3	@ 000b3aa2 1843
.org 0xb3aa4
	b.n 0xb3ab4	@ 000b3aa4 06e0
.org 0xb3aa6
	.byte 0x00	@ 000b3aa6 data
.org 0xb3aa7
	.byte 0x00	@ 000b3aa7 data
.org 0xb3aa8
	.byte 0x54,0x37,0x86,0x08	@ 000b3aa8 data
.org 0xb3aac
	.byte 0xc9,0x39,0x0b,0x08	@ 000b3aac data
.org 0xb3ab0
	movs r0, #239	@ 000b3ab0 ef20
.org 0xb3ab2
	ands r0, r3	@ 000b3ab2 1840
.org 0xb3ab4
	strb r0, [r5, #10]	@ 000b3ab4 a872
.org 0xb3ab6
	movs r1, #1	@ 000b3ab6 0121
.org 0xb3ab8
	ands r1, r2	@ 000b3ab8 1140
.org 0xb3aba
	adds r0, r5, #0	@ 000b3aba 281c
.org 0xb3abc
	adds r0, #76	@ 000b3abc 4c30
.org 0xb3abe
	movs r3, #0	@ 000b3abe 0023
.org 0xb3ac0
	strb r1, [r0, #0]	@ 000b3ac0 0170
.org 0xb3ac2
	adds r4, r5, #0	@ 000b3ac2 2c1c
.org 0xb3ac4
	adds r4, #74	@ 000b3ac4 4a34
.org 0xb3ac6
	lsls r1, r1, #4	@ 000b3ac6 0901
.org 0xb3ac8
	ldrb r2, [r4, #0]	@ 000b3ac8 2278
.org 0xb3aca
	movs r0, #17	@ 000b3aca 1120
.org 0xb3acc
	negs r0, r0	@ 000b3acc 4042
.org 0xb3ace
	ands r0, r2	@ 000b3ace 1040
.org 0xb3ad0
	orrs r0, r1	@ 000b3ad0 0843
.org 0xb3ad2
	strb r0, [r4, #0]	@ 000b3ad2 2070
.org 0xb3ad4
	movs r0, #2	@ 000b3ad4 0220
.org 0xb3ad6
	strb r0, [r5, #13]	@ 000b3ad6 6873
.org 0xb3ad8
	strb r3, [r5, #14]	@ 000b3ad8 ab73

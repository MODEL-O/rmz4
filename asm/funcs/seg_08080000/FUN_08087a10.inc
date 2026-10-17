@ FUN_08087a10  entry 0x08087a10  size 196
.thumb
.org 0x87a10
FUN_08087a10:
	push {r4, r5, lr}	@ 00087a10 30b5
.org 0x87a12
	sub sp, #8	@ 00087a12 82b0
.org 0x87a14
	adds r4, r0, #0	@ 00087a14 041c
.org 0x87a16
	ldrb r0, [r4, #10]	@ 00087a16 a07a
.org 0x87a18
	lsrs r5, r0, #4	@ 00087a18 0509
.org 0x87a1a
	movs r0, #1	@ 00087a1a 0120
.org 0x87a1c
	ands r5, r0	@ 00087a1c 0540
.org 0x87a1e
	ldrb r0, [r4, #15]	@ 00087a1e e07b
.org 0x87a20
	cmp r0, #0	@ 00087a20 0028
.org 0x87a22
	bne.n 0x87a40	@ 00087a22 0dd1
.org 0x87a24
	adds r0, r4, #0	@ 00087a24 201c
.org 0x87a26
	adds r0, #116	@ 00087a26 7430
.org 0x87a28
	ldr r1, [pc, #104]	@ 00087a28 1a49
.org 0x87a2a
	bl 0x5784	@ 00087a2a 7df7abfe
.org 0x87a2e
	ldr r1, [pc, #104]	@ 00087a2e 1a49
.org 0x87a30
	adds r0, r4, #0	@ 00087a30 201c
.org 0x87a32
	bl 0x1cf00	@ 00087a32 95f765fa
.org 0x87a36
	movs r0, #16	@ 00087a36 1020
.org 0x87a38
	strb r0, [r4, #18]	@ 00087a38 a074
.org 0x87a3a
	ldrb r0, [r4, #15]	@ 00087a3a e07b
.org 0x87a3c
	adds r0, #1	@ 00087a3c 0130
.org 0x87a3e
	strb r0, [r4, #15]	@ 00087a3e e073
.org 0x87a40
	adds r0, r4, #0	@ 00087a40 201c
.org 0x87a42
	bl 0x1cff0	@ 00087a42 95f7d5fa
.org 0x87a46
	ldrb r0, [r4, #18]	@ 00087a46 a07c
.org 0x87a48
	subs r0, #1	@ 00087a48 0138
.org 0x87a4a
	strb r0, [r4, #18]	@ 00087a4a a074
.org 0x87a4c
	lsls r0, r0, #24	@ 00087a4c 0006
.org 0x87a4e
	cmp r0, #0	@ 00087a4e 0028
.org 0x87a50
	bne.n 0x87ade	@ 00087a50 45d1
.org 0x87a52
	movs r0, #44	@ 00087a52 2c20
.org 0x87a54
	bl 0x2b10	@ 00087a54 7bf75cf8
.org 0x87a58
	lsls r0, r5, #1	@ 00087a58 6800
.org 0x87a5a
	subs r0, #1	@ 00087a5a 0138
.org 0x87a5c
	lsls r1, r0, #3	@ 00087a5c c100
.org 0x87a5e
	subs r1, r1, r0	@ 00087a5e 091a
.org 0x87a60
	lsls r1, r1, #9	@ 00087a60 4902
.org 0x87a62
	ldr r2, [r4, #84]	@ 00087a62 626d
.org 0x87a64
	adds r2, r2, r1	@ 00087a64 5218
.org 0x87a66
	str r2, [sp, #0]	@ 00087a66 0092
.org 0x87a68
	ldr r3, [r4, #88]	@ 00087a68 a36d
.org 0x87a6a
	str r3, [sp, #4]	@ 00087a6a 0193
.org 0x87a6c
	ldr r0, [pc, #44]	@ 00087a6c 0b48
.org 0x87a6e
	ldr r1, [r0, #0]	@ 00087a6e 0168
.org 0x87a70
	ldr r0, [r1, #84]	@ 00087a70 486d
.org 0x87a72
	ldr r1, [r1, #88]	@ 00087a72 896d
.org 0x87a74
	ldr r5, [pc, #40]	@ 00087a74 0a4d
.org 0x87a76
	adds r1, r1, r5	@ 00087a76 4919
.org 0x87a78
	bl 0x10d398	@ 00087a78 85f08efc
.org 0x87a7c
	lsls r0, r0, #24	@ 00087a7c 0006
.org 0x87a7e
	lsrs r2, r0, #24	@ 00087a7e 020e
.org 0x87a80
	ldrb r1, [r4, #10]	@ 00087a80 a17a
.org 0x87a82
	movs r0, #16	@ 00087a82 1020
.org 0x87a84
	ands r0, r1	@ 00087a84 0840
.org 0x87a86
	cmp r0, #0	@ 00087a86 0028
.org 0x87a88
	bne.n 0x87aa4	@ 00087a88 0cd1
.org 0x87a8a
	adds r0, r2, #0	@ 00087a8a 101c
.org 0x87a8c
	adds r0, #128	@ 00087a8c 8030
.org 0x87a8e
	lsls r0, r0, #24	@ 00087a8e 0006
.org 0x87a90
	b.n 0x87aa6	@ 00087a90 09e0
.org 0x87a92
	.byte 0x00	@ 00087a92 data
.org 0x87a93
	.byte 0x00	@ 00087a93 data
.org 0x87a94
	.byte 0x04,0xf0,0x85,0x08	@ 00087a94 data
.org 0x87a98
	.byte 0x0c,0x1d,0x00,0x00	@ 00087a98 data
.org 0x87a9c
	.byte 0xf0,0xdb,0x02,0x02	@ 00087a9c data
.org 0x87aa0
	.byte 0x00,0xf0,0xff,0xff	@ 00087aa0 data
.org 0x87aa4
	lsls r0, r2, #24	@ 00087aa4 1006
.org 0x87aa6
	lsrs r2, r0, #24	@ 00087aa6 020e
.org 0x87aa8
	cmp r2, #111	@ 00087aa8 6f2a
.org 0x87aaa
	bhi.n 0x87ab0	@ 00087aaa 01d8
.org 0x87aac
	movs r2, #112	@ 00087aac 7022
.org 0x87aae
	b.n 0x87ab6	@ 00087aae 02e0
.org 0x87ab0
	cmp r2, #144	@ 00087ab0 902a
.org 0x87ab2
	bls.n 0x87ab6	@ 00087ab2 00d9
.org 0x87ab4
	movs r2, #144	@ 00087ab4 9022
.org 0x87ab6
	ldrb r1, [r4, #10]	@ 00087ab6 a17a
.org 0x87ab8
	movs r0, #16	@ 00087ab8 1020
.org 0x87aba
	ands r0, r1	@ 00087aba 0840
.org 0x87abc
	cmp r0, #0	@ 00087abc 0028
.org 0x87abe
	bne.n 0x87ac8	@ 00087abe 03d1
.org 0x87ac0
	adds r0, r2, #0	@ 00087ac0 101c
.org 0x87ac2
	subs r0, #128	@ 00087ac2 8038
.org 0x87ac4
	lsls r0, r0, #24	@ 00087ac4 0006
.org 0x87ac6
	b.n 0x87aca	@ 00087ac6 00e0
.org 0x87ac8
	lsls r0, r2, #24	@ 00087ac8 1006
.org 0x87aca
	lsrs r2, r0, #24	@ 00087aca 020e
.org 0x87acc
	movs r1, #192	@ 00087acc c021
.org 0x87ace
	lsls r1, r1, #1	@ 00087ace 4900
.org 0x87ad0
	mov r0, sp	@ 00087ad0 6846
.org 0x87ad2
	bl 0xbd43c	@ 00087ad2 35f0b3fc

@ FUN_08079a50  entry 0x08079a50  size 76
.thumb
.org 0x79a50
FUN_08079a50:
	push {r4, lr}	@ 00079a50 10b5
.org 0x79a52
	adds r4, r0, #0	@ 00079a52 041c
.org 0x79a54
	ldrb r0, [r4, #14]	@ 00079a54 a07b
.org 0x79a56
	cmp r0, #0	@ 00079a56 0028
.org 0x79a58
	bne.n 0x79a7a	@ 00079a58 0fd1
.org 0x79a5a
	movs r0, #1	@ 00079a5a 0120
.org 0x79a5c
	bl 0x1c560	@ 00079a5c a2f780fd
.org 0x79a60
	movs r1, #183	@ 00079a60 b721
.org 0x79a62
	lsls r1, r1, #8	@ 00079a62 0902
.org 0x79a64
	adds r0, r4, #0	@ 00079a64 201c
.org 0x79a66
	bl 0x1cf00	@ 00079a66 a3f74bfa
.org 0x79a6a
	ldr r0, [r4, #88]	@ 00079a6a a06d
.org 0x79a6c
	movs r1, #140	@ 00079a6c 8c21
.org 0x79a6e
	lsls r1, r1, #8	@ 00079a6e 0902
.org 0x79a70
	adds r0, r0, r1	@ 00079a70 4018
.org 0x79a72
	str r0, [r4, #88]	@ 00079a72 a065
.org 0x79a74
	ldrb r0, [r4, #14]	@ 00079a74 a07b
.org 0x79a76
	adds r0, #1	@ 00079a76 0130
.org 0x79a78
	strb r0, [r4, #14]	@ 00079a78 a073
.org 0x79a7a
	adds r0, r4, #0	@ 00079a7a 201c
.org 0x79a7c
	bl 0x1cff0	@ 00079a7c a3f7b8fa
.org 0x79a80
	ldr r0, [pc, #24]	@ 00079a80 0648
.org 0x79a82
	ldr r1, [pc, #28]	@ 00079a82 0749
.org 0x79a84
	adds r0, r0, r1	@ 00079a84 4018
.org 0x79a86
	ldrb r0, [r0, #0]	@ 00079a86 0078
.org 0x79a88
	cmp r0, #1	@ 00079a88 0128
.org 0x79a8a
	bne.n 0x79a96	@ 00079a8a 04d1
.org 0x79a8c
	ldrb r0, [r4, #15]	@ 00079a8c e07b
.org 0x79a8e
	adds r0, #1	@ 00079a8e 0130
.org 0x79a90
	movs r1, #0	@ 00079a90 0021
.org 0x79a92
	strb r0, [r4, #15]	@ 00079a92 e073
.org 0x79a94
	strb r1, [r4, #14]	@ 00079a94 a173
.org 0x79a96
	pop {r4}	@ 00079a96 10bc
.org 0x79a98
	pop {r0}	@ 00079a98 01bc
.org 0x79a9a
	bx r0	@ 00079a9a 0047

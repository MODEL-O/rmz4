@ FUN_080b4a40  entry 0x080b4a40  size 166
.thumb
.org 0xb4a40
FUN_080b4a40:
	push {r4, r5, r6, lr}	@ 000b4a40 70b5
.org 0xb4a42
	adds r6, r0, #0	@ 000b4a42 061c
.org 0xb4a44
	ldr r0, [r6, #20]	@ 000b4a44 7069
.org 0xb4a46
	movs r1, #1	@ 000b4a46 0121
.org 0xb4a48
	ands r0, r1	@ 000b4a48 0840
.org 0xb4a4a
	cmp r0, #0	@ 000b4a4a 0028
.org 0xb4a4c
	beq.n 0xb4ae4	@ 000b4a4c 4ad0
.org 0xb4a4e
	ldr r0, [r6, #12]	@ 000b4a4e f068
.org 0xb4a50
	ldr r5, [r0, #44]	@ 000b4a50 c56a
.org 0xb4a52
	ldr r4, [r6, #44]	@ 000b4a52 f46a
.org 0xb4a54
	ldrb r0, [r4, #16]	@ 000b4a54 207c
.org 0xb4a56
	cmp r0, #0	@ 000b4a56 0028
.org 0xb4a58
	bne.n 0xb4a62	@ 000b4a58 03d1
.org 0xb4a5a
	movs r0, #49	@ 000b4a5a 3120
.org 0xb4a5c
	bl 0x6984	@ 000b4a5c 51f792ff
.org 0xb4a60
	b.n 0xb4a68	@ 000b4a60 02e0
.org 0xb4a62
	movs r0, #48	@ 000b4a62 3020
.org 0xb4a64
	bl 0x6984	@ 000b4a64 51f78eff
.org 0xb4a68
	movs r2, #0	@ 000b4a68 0022
.org 0xb4a6a
	ldr r1, [r5, #84]	@ 000b4a6a 696d
.org 0xb4a6c
	ldr r0, [r4, #84]	@ 000b4a6c 606d
.org 0xb4a6e
	cmp r1, r0	@ 000b4a6e 8142
.org 0xb4a70
	ble.n 0xb4a74	@ 000b4a70 00dd
.org 0xb4a72
	movs r2, #1	@ 000b4a72 0122
.org 0xb4a74
	adds r0, r4, #0	@ 000b4a74 201c
.org 0xb4a76
	adds r0, #188	@ 000b4a76 bc30
.org 0xb4a78
	strb r2, [r0, #0]	@ 000b4a78 0270
.org 0xb4a7a
	movs r0, #8	@ 000b4a7a 0820
.org 0xb4a7c
	ldrsb r0, [r5, r0]	@ 000b4a7c 2856
.org 0xb4a7e
	cmp r0, #1	@ 000b4a7e 0128
.org 0xb4a80
	bne.n 0xb4aa4	@ 000b4a80 10d1
.org 0xb4a82
	ldrb r0, [r4, #16]	@ 000b4a82 207c
.org 0xb4a84
	cmp r0, #0	@ 000b4a84 0028
.org 0xb4a86
	bne.n 0xb4a96	@ 000b4a86 06d1
.org 0xb4a88
	ldrb r0, [r5, #9]	@ 000b4a88 687a
.org 0xb4a8a
	cmp r0, #54	@ 000b4a8a 3628
.org 0xb4a8c
	bne.n 0xb4aa4	@ 000b4a8c 0ad1
.org 0xb4a8e
	adds r1, r4, #0	@ 000b4a8e 211c
.org 0xb4a90
	adds r1, #184	@ 000b4a90 b831
.org 0xb4a92
	movs r0, #3	@ 000b4a92 0320
.org 0xb4a94
	b.n 0xb4ae2	@ 000b4a94 25e0
.org 0xb4a96
	ldrb r0, [r5, #9]	@ 000b4a96 687a
.org 0xb4a98
	cmp r0, #53	@ 000b4a98 3528
.org 0xb4a9a
	bne.n 0xb4aa4	@ 000b4a9a 03d1
.org 0xb4a9c
	adds r1, r4, #0	@ 000b4a9c 211c
.org 0xb4a9e
	adds r1, #184	@ 000b4a9e b831
.org 0xb4aa0
	movs r0, #3	@ 000b4aa0 0320
.org 0xb4aa2
	b.n 0xb4ae2	@ 000b4aa2 1ee0
.org 0xb4aa4
	ldr r1, [r6, #20]	@ 000b4aa4 7169
.org 0xb4aa6
	movs r0, #128	@ 000b4aa6 8020
.org 0xb4aa8
	lsls r0, r0, #2	@ 000b4aa8 8000
.org 0xb4aaa
	ands r0, r1	@ 000b4aaa 0840
.org 0xb4aac
	cmp r0, #0	@ 000b4aac 0028
.org 0xb4aae
	beq.n 0xb4ae4	@ 000b4aae 19d0
.org 0xb4ab0
	movs r0, #128	@ 000b4ab0 8020
.org 0xb4ab2
	lsls r0, r0, #10	@ 000b4ab2 8002
.org 0xb4ab4
	ands r1, r0	@ 000b4ab4 0140
.org 0xb4ab6
	cmp r1, #0	@ 000b4ab6 0029
.org 0xb4ab8
	beq.n 0xb4ae4	@ 000b4ab8 14d0
.org 0xb4aba
	ldr r0, [pc, #20]	@ 000b4aba 0548
.org 0xb4abc
	ldr r1, [r0, #0]	@ 000b4abc 0168
.org 0xb4abe
	cmp r1, #0	@ 000b4abe 0029
.org 0xb4ac0
	beq.n 0xb4ae4	@ 000b4ac0 10d0
.org 0xb4ac2
	ldrb r0, [r4, #16]	@ 000b4ac2 207c
.org 0xb4ac4
	cmp r0, #0	@ 000b4ac4 0028
.org 0xb4ac6
	bne.n 0xb4ad4	@ 000b4ac6 05d1
.org 0xb4ac8
	adds r0, r1, #0	@ 000b4ac8 081c
.org 0xb4aca
	movs r1, #5	@ 000b4aca 0521
.org 0xb4acc
	movs r2, #12	@ 000b4acc 0c22
.org 0xb4ace
	b.n 0xb4ada	@ 000b4ace 04e0
.org 0xb4ad0
	.byte 0xf0,0xdb,0x02,0x02	@ 000b4ad0 data
.org 0xb4ad4
	adds r0, r1, #0	@ 000b4ad4 081c
.org 0xb4ad6
	movs r1, #5	@ 000b4ad6 0521
.org 0xb4ad8
	movs r2, #13	@ 000b4ad8 0d22
.org 0xb4ada
	bl 0x3a578	@ 000b4ada 85f74dfd
.org 0xb4ade
	adds r1, r4, #0	@ 000b4ade 211c
.org 0xb4ae0
	adds r1, #189	@ 000b4ae0 bd31
.org 0xb4ae2
	strb r0, [r1, #0]	@ 000b4ae2 0870
.org 0xb4ae4
	pop {r4, r5, r6}	@ 000b4ae4 70bc

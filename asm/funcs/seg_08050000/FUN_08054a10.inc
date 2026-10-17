@ FUN_08054a10  entry 0x08054a10  size 138
.thumb
.org 0x54a10
FUN_08054a10:
	push {r4, r5, lr}	@ 00054a10 30b5
.org 0x54a12
	adds r4, r0, #0	@ 00054a12 041c
.org 0x54a14
	ldrb r0, [r4, #15]	@ 00054a14 e07b
.org 0x54a16
	cmp r0, #0	@ 00054a16 0028
.org 0x54a18
	bne.n 0x54a7e	@ 00054a18 31d1
.org 0x54a1a
	adds r0, r4, #0	@ 00054a1a 201c
.org 0x54a1c
	adds r0, #192	@ 00054a1c c030
.org 0x54a1e
	ldr r3, [r0, #0]	@ 00054a1e 0368
.org 0x54a20
	ldr r2, [pc, #12]	@ 00054a20 034a
.org 0x54a22
	adds r1, r3, r2	@ 00054a22 9918
.org 0x54a24
	ldr r2, [r4, #84]	@ 00054a24 626d
.org 0x54a26
	adds r5, r0, #0	@ 00054a26 051c
.org 0x54a28
	cmp r2, r1	@ 00054a28 8a42
.org 0x54a2a
	bne.n 0x54a34	@ 00054a2a 03d1
.org 0x54a2c
	movs r1, #1	@ 00054a2c 0121
.org 0x54a2e
	b.n 0x54a5a	@ 00054a2e 14e0
.org 0x54a30
	.byte 0x00,0x88,0xff,0xff	@ 00054a30 data
.org 0x54a34
	movs r1, #240	@ 00054a34 f021
.org 0x54a36
	lsls r1, r1, #7	@ 00054a36 c901
.org 0x54a38
	adds r0, r3, r1	@ 00054a38 5818
.org 0x54a3a
	cmp r2, r0	@ 00054a3a 8242
.org 0x54a3c
	bne.n 0x54a42	@ 00054a3c 01d1
.org 0x54a3e
	movs r1, #0	@ 00054a3e 0021
.org 0x54a40
	b.n 0x54a5a	@ 00054a40 0be0
.org 0x54a42
	ldr r2, [pc, #92]	@ 00054a42 174a
.org 0x54a44
	ldr r1, [r2, #0]	@ 00054a44 1168
.org 0x54a46
	ldr r0, [pc, #92]	@ 00054a46 1748
.org 0x54a48
	muls r0, r1	@ 00054a48 4843
.org 0x54a4a
	ldr r1, [pc, #92]	@ 00054a4a 1749
.org 0x54a4c
	adds r0, r0, r1	@ 00054a4c 4018
.org 0x54a4e
	lsls r0, r0, #1	@ 00054a4e 4000
.org 0x54a50
	lsrs r1, r0, #1	@ 00054a50 4108
.org 0x54a52
	str r1, [r2, #0]	@ 00054a52 1160
.org 0x54a54
	lsrs r1, r0, #17	@ 00054a54 410c
.org 0x54a56
	movs r0, #1	@ 00054a56 0120
.org 0x54a58
	ands r1, r0	@ 00054a58 0140
.org 0x54a5a
	lsls r0, r1, #1	@ 00054a5a 4800
.org 0x54a5c
	subs r0, #1	@ 00054a5c 0138
.org 0x54a5e
	lsls r1, r0, #4	@ 00054a5e 0101
.org 0x54a60
	subs r1, r1, r0	@ 00054a60 091a
.org 0x54a62
	lsls r1, r1, #11	@ 00054a62 c902
.org 0x54a64
	ldr r0, [r5, #0]	@ 00054a64 2868
.org 0x54a66
	adds r0, r0, r1	@ 00054a66 4018
.org 0x54a68
	str r0, [r4, #84]	@ 00054a68 6065
.org 0x54a6a
	movs r1, #176	@ 00054a6a b021
.org 0x54a6c
	lsls r1, r1, #6	@ 00054a6c 8901
.org 0x54a6e
	adds r0, r4, #0	@ 00054a6e 201c
.org 0x54a70
	bl 0x1cf00	@ 00054a70 c8f746fa
.org 0x54a74
	movs r0, #48	@ 00054a74 3020
.org 0x54a76
	strb r0, [r4, #18]	@ 00054a76 a074
.org 0x54a78
	ldrb r0, [r4, #15]	@ 00054a78 e07b
.org 0x54a7a
	adds r0, #1	@ 00054a7a 0130
.org 0x54a7c
	strb r0, [r4, #15]	@ 00054a7c e073
.org 0x54a7e
	adds r0, r4, #0	@ 00054a7e 201c
.org 0x54a80
	bl 0x1cff0	@ 00054a80 c8f7b6fa
.org 0x54a84
	ldrb r0, [r4, #18]	@ 00054a84 a07c
.org 0x54a86
	subs r0, #1	@ 00054a86 0138
.org 0x54a88
	strb r0, [r4, #18]	@ 00054a88 a074
.org 0x54a8a
	lsls r0, r0, #24	@ 00054a8a 0006
.org 0x54a8c
	lsrs r1, r0, #24	@ 00054a8c 010e
.org 0x54a8e
	cmp r1, #0	@ 00054a8e 0029
.org 0x54a90
	bne.n 0x54a98	@ 00054a90 02d1
.org 0x54a92
	movs r0, #3	@ 00054a92 0320
.org 0x54a94
	strb r0, [r4, #14]	@ 00054a94 a073
.org 0x54a96
	strb r1, [r4, #15]	@ 00054a96 e173
.org 0x54a98
	pop {r4, r5}	@ 00054a98 30bc

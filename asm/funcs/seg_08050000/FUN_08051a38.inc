@ FUN_08051a38  entry 0x08051a38  size 150
.thumb
.org 0x51a38
FUN_08051a38:
	push {r4, lr}	@ 00051a38 10b5
.org 0x51a3a
	adds r4, r0, #0	@ 00051a3a 041c
.org 0x51a3c
	ldrb r0, [r4, #14]	@ 00051a3c a07b
.org 0x51a3e
	cmp r0, #0	@ 00051a3e 0028
.org 0x51a40
	bne.n 0x51a60	@ 00051a40 0ed1
.org 0x51a42
	adds r0, r4, #0	@ 00051a42 201c
.org 0x51a44
	adds r0, #116	@ 00051a44 7430
.org 0x51a46
	ldr r1, [pc, #88]	@ 00051a46 1649
.org 0x51a48
	bl 0x5784	@ 00051a48 b3f79cfe
.org 0x51a4c
	ldr r1, [pc, #84]	@ 00051a4c 1549
.org 0x51a4e
	adds r0, r4, #0	@ 00051a4e 201c
.org 0x51a50
	bl 0x1cf00	@ 00051a50 cbf756fa
.org 0x51a54
	movs r0, #230	@ 00051a54 e620
.org 0x51a56
	bl 0x2b10	@ 00051a56 b1f75bf8
.org 0x51a5a
	ldrb r0, [r4, #14]	@ 00051a5a a07b
.org 0x51a5c
	adds r0, #1	@ 00051a5c 0130
.org 0x51a5e
	strb r0, [r4, #14]	@ 00051a5e a073
.org 0x51a60
	adds r0, r4, #0	@ 00051a60 201c
.org 0x51a62
	bl 0x1cff0	@ 00051a62 cbf7c5fa
.org 0x51a66
	adds r0, r4, #0	@ 00051a66 201c
.org 0x51a68
	adds r0, #115	@ 00051a68 7330
.org 0x51a6a
	ldrb r3, [r0, #0]	@ 00051a6a 0378
.org 0x51a6c
	cmp r3, #3	@ 00051a6c 032b
.org 0x51a6e
	bne.n 0x51adc	@ 00051a6e 35d1
.org 0x51a70
	ldr r2, [pc, #52]	@ 00051a70 0d4a
.org 0x51a72
	ldr r1, [r2, #0]	@ 00051a72 1168
.org 0x51a74
	ldr r0, [pc, #52]	@ 00051a74 0d48
.org 0x51a76
	muls r0, r1	@ 00051a76 4843
.org 0x51a78
	ldr r1, [pc, #52]	@ 00051a78 0d49
.org 0x51a7a
	adds r0, r0, r1	@ 00051a7a 4018
.org 0x51a7c
	lsls r0, r0, #1	@ 00051a7c 4000
.org 0x51a7e
	lsrs r1, r0, #1	@ 00051a7e 4108
.org 0x51a80
	str r1, [r2, #0]	@ 00051a80 1160
.org 0x51a82
	lsrs r1, r0, #17	@ 00051a82 410c
.org 0x51a84
	movs r0, #31	@ 00051a84 1f20
.org 0x51a86
	ands r1, r0	@ 00051a86 0140
.org 0x51a88
	adds r0, r4, #0	@ 00051a88 201c
.org 0x51a8a
	adds r0, #164	@ 00051a8a a430
.org 0x51a8c
	movs r2, #0	@ 00051a8c 0022
.org 0x51a8e
	ldrsh r0, [r0, r2]	@ 00051a8e 805e
.org 0x51a90
	cmp r0, #32	@ 00051a90 2028
.org 0x51a92
	ble.n 0x51ab4	@ 00051a92 0fdd
.org 0x51a94
	cmp r1, #15	@ 00051a94 0f29
.org 0x51a96
	bhi.n 0x51ac4	@ 00051a96 15d8
.org 0x51a98
	adds r1, r4, #0	@ 00051a98 211c
.org 0x51a9a
	adds r1, #214	@ 00051a9a d631
.org 0x51a9c
	movs r0, #2	@ 00051a9c 0220
.org 0x51a9e
	b.n 0x51ad2	@ 00051a9e 18e0
.org 0x51aa0
	.byte 0x74,0x7f,0x85,0x08	@ 00051aa0 data
.org 0x51aa4
	.byte 0x05,0xa1,0x00,0x00	@ 00051aa4 data
.org 0x51aa8
	.byte 0x38,0xdc,0x02,0x02	@ 00051aa8 data
.org 0x51aac
	.byte 0xfd,0x43,0x03,0x00	@ 00051aac data
.org 0x51ab0
	.byte 0xc3,0x9e,0x26,0x00	@ 00051ab0 data
.org 0x51ab4
	cmp r1, #7	@ 00051ab4 0729
.org 0x51ab6
	bhi.n 0x51ac0	@ 00051ab6 03d8
.org 0x51ab8
	adds r1, r4, #0	@ 00051ab8 211c
.org 0x51aba
	adds r1, #214	@ 00051aba d631
.org 0x51abc
	movs r0, #2	@ 00051abc 0220
.org 0x51abe
	b.n 0x51ad2	@ 00051abe 08e0
.org 0x51ac0
	cmp r1, #21	@ 00051ac0 1529
.org 0x51ac2
	bhi.n 0x51acc	@ 00051ac2 03d8
.org 0x51ac4
	adds r0, r4, #0	@ 00051ac4 201c
.org 0x51ac6
	adds r0, #214	@ 00051ac6 d630
.org 0x51ac8
	strb r3, [r0, #0]	@ 00051ac8 0370
.org 0x51aca
	b.n 0x51ad4	@ 00051aca 03e0
.org 0x51acc
	adds r1, r4, #0	@ 00051acc 211c

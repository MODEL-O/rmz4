@ FUN_080b5a04  entry 0x080b5a04  size 190
.thumb
.org 0xb5a04
FUN_080b5a04:
	push {r4, r5, r6, lr}	@ 000b5a04 70b5
.org 0xb5a06
	adds r4, r0, #0	@ 000b5a06 041c
.org 0xb5a08
	ldrb r5, [r4, #15]	@ 000b5a08 e57b
.org 0xb5a0a
	cmp r5, #0	@ 000b5a0a 002d
.org 0xb5a0c
	bne.n 0xb5a24	@ 000b5a0c 0ad1
.org 0xb5a0e
	movs r0, #64	@ 000b5a0e 4020
.org 0xb5a10
	bl 0x2b10	@ 000b5a10 4df77ef8
.org 0xb5a14
	ldr r1, [pc, #76]	@ 000b5a14 1349
.org 0xb5a16
	adds r0, r4, #0	@ 000b5a16 201c
.org 0xb5a18
	bl 0x1cf00	@ 000b5a18 67f772fa
.org 0xb5a1c
	str r5, [r4, #96]	@ 000b5a1c 2566
.org 0xb5a1e
	ldrb r0, [r4, #15]	@ 000b5a1e e07b
.org 0xb5a20
	adds r0, #1	@ 000b5a20 0130
.org 0xb5a22
	strb r0, [r4, #15]	@ 000b5a22 e073
.org 0xb5a24
	adds r0, r4, #0	@ 000b5a24 201c
.org 0xb5a26
	bl 0x1cff0	@ 000b5a26 67f7e3fa
.org 0xb5a2a
	ldr r0, [r4, #84]	@ 000b5a2a 606d
.org 0xb5a2c
	ldr r1, [r4, #88]	@ 000b5a2c a16d
.org 0xb5a2e
	ldr r2, [r4, #96]	@ 000b5a2e 226e
.org 0xb5a30
	adds r5, r2, r1	@ 000b5a30 5518
.org 0xb5a32
	adds r1, r5, #0	@ 000b5a32 291c
.org 0xb5a34
	bl 0x7c7c	@ 000b5a34 52f722f9
.org 0xb5a38
	lsls r0, r0, #16	@ 000b5a38 0004
.org 0xb5a3a
	lsrs r6, r0, #16	@ 000b5a3a 060c
.org 0xb5a3c
	cmp r6, #0	@ 000b5a3c 002e
.org 0xb5a3e
	beq.n 0xb5a6c	@ 000b5a3e 15d0
.org 0xb5a40
	ldr r1, [pc, #36]	@ 000b5a40 0949
.org 0xb5a42
	ldrb r0, [r4, #9]	@ 000b5a42 607a
.org 0xb5a44
	lsls r0, r0, #2	@ 000b5a44 8000
.org 0xb5a46
	adds r0, r0, r1	@ 000b5a46 4018
.org 0xb5a48
	movs r1, #2	@ 000b5a48 0221
.org 0xb5a4a
	str r1, [r4, #12]	@ 000b5a4a e160
.org 0xb5a4c
	ldr r0, [r0, #0]	@ 000b5a4c 0068
.org 0xb5a4e
	ldr r0, [r0, #8]	@ 000b5a4e 8068
.org 0xb5a50
	str r0, [r4, #20]	@ 000b5a50 6061
.org 0xb5a52
	movs r1, #0	@ 000b5a52 0021
.org 0xb5a54
	movs r0, #1	@ 000b5a54 0120
.org 0xb5a56
	strb r0, [r4, #13]	@ 000b5a56 6073
.org 0xb5a58
	strb r1, [r4, #14]	@ 000b5a58 a173
.org 0xb5a5a
	strb r1, [r4, #15]	@ 000b5a5a e173
.org 0xb5a5c
	adds r0, r4, #0	@ 000b5a5c 201c
.org 0xb5a5e
	bl 0xb5ad4	@ 000b5a5e 00f039f8
.org 0xb5a62
	b.n 0xb5ac4	@ 000b5a62 2fe0
.org 0xb5a64
	.byte 0x02,0xb4,0x00,0x00	@ 000b5a64 data
.org 0xb5a68
	.byte 0x40,0xdb,0x85,0x08	@ 000b5a68 data
.org 0xb5a6c
	str r5, [r4, #88]	@ 000b5a6c a565
.org 0xb5a6e
	ldr r0, [r4, #96]	@ 000b5a6e 206e
.org 0xb5a70
	adds r0, #64	@ 000b5a70 4030
.org 0xb5a72
	str r0, [r4, #96]	@ 000b5a72 2066
.org 0xb5a74
	movs r1, #224	@ 000b5a74 e021
.org 0xb5a76
	lsls r1, r1, #3	@ 000b5a76 c900
.org 0xb5a78
	cmp r0, r1	@ 000b5a78 8842
.org 0xb5a7a
	ble.n 0xb5a7e	@ 000b5a7a 00dd
.org 0xb5a7c
	str r1, [r4, #96]	@ 000b5a7c 2166
.org 0xb5a7e
	ldr r0, [pc, #76]	@ 000b5a7e 1348
.org 0xb5a80
	adds r1, r4, #0	@ 000b5a80 211c
.org 0xb5a82
	adds r1, #84	@ 000b5a82 5431
.org 0xb5a84
	bl 0x1fb14	@ 000b5a84 6af746f8
.org 0xb5a88
	movs r1, #128	@ 000b5a88 8021
.org 0xb5a8a
	lsls r1, r1, #5	@ 000b5a8a 4901
.org 0xb5a8c
	cmp r0, r1	@ 000b5a8c 8842
.org 0xb5a8e
	bls.n 0xb5ac4	@ 000b5a8e 19d9
.org 0xb5a90
	ldrb r1, [r4, #10]	@ 000b5a90 a17a
.org 0xb5a92
	movs r0, #254	@ 000b5a92 fe20
.org 0xb5a94
	ands r0, r1	@ 000b5a94 0840
.org 0xb5a96
	movs r1, #253	@ 000b5a96 fd21
.org 0xb5a98
	ands r0, r1	@ 000b5a98 0840
.org 0xb5a9a
	strb r0, [r4, #10]	@ 000b5a9a a072
.org 0xb5a9c
	adds r0, r4, #0	@ 000b5a9c 201c
.org 0xb5a9e
	adds r0, #140	@ 000b5a9e 8c30
.org 0xb5aa0
	str r6, [r0, #0]	@ 000b5aa0 0660
.org 0xb5aa2
	adds r0, #4	@ 000b5aa2 0430
.org 0xb5aa4
	str r6, [r0, #0]	@ 000b5aa4 0660
.org 0xb5aa6
	adds r0, #4	@ 000b5aa6 0430
.org 0xb5aa8
	strb r6, [r0, #0]	@ 000b5aa8 0670
.org 0xb5aaa
	ldrb r1, [r4, #10]	@ 000b5aaa a17a
.org 0xb5aac
	movs r0, #251	@ 000b5aac fb20
.org 0xb5aae
	ands r0, r1	@ 000b5aae 0840
.org 0xb5ab0
	strb r0, [r4, #10]	@ 000b5ab0 a072
.org 0xb5ab2
	ldr r1, [pc, #28]	@ 000b5ab2 0749
.org 0xb5ab4
	ldrb r0, [r4, #9]	@ 000b5ab4 607a
.org 0xb5ab6
	lsls r0, r0, #2	@ 000b5ab6 8000
.org 0xb5ab8
	adds r0, r0, r1	@ 000b5ab8 4018
.org 0xb5aba
	movs r1, #3	@ 000b5aba 0321
.org 0xb5abc
	str r1, [r4, #12]	@ 000b5abc e160
.org 0xb5abe
	ldr r0, [r0, #0]	@ 000b5abe 0068
.org 0xb5ac0
	ldr r0, [r0, #12]	@ 000b5ac0 c068

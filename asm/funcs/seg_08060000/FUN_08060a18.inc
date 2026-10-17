@ FUN_08060a18  entry 0x08060a18  size 168
.thumb
.org 0x60a18
FUN_08060a18:
	push {r4, lr}	@ 00060a18 10b5
.org 0x60a1a
	adds r4, r0, #0	@ 00060a1a 041c
.org 0x60a1c
	ldrb r0, [r4, #14]	@ 00060a1c a07b
.org 0x60a1e
	cmp r0, #0	@ 00060a1e 0028
.org 0x60a20
	bne.n 0x60a4e	@ 00060a20 15d1
.org 0x60a22
	ldr r1, [pc, #28]	@ 00060a22 0749
.org 0x60a24
	adds r0, r4, #0	@ 00060a24 201c
.org 0x60a26
	bl 0x1cf00	@ 00060a26 bcf76bfa
.org 0x60a2a
	ldr r0, [r4, #92]	@ 00060a2a e06d
.org 0x60a2c
	movs r1, #10	@ 00060a2c 0a21
.org 0x60a2e
	bl 0x128fb8	@ 00060a2e c8f0c3fa
.org 0x60a32
	negs r0, r0	@ 00060a32 4042
.org 0x60a34
	str r0, [r4, #100]	@ 00060a34 6066
.org 0x60a36
	ldrb r0, [r4, #15]	@ 00060a36 e07b
.org 0x60a38
	cmp r0, #0	@ 00060a38 0028
.org 0x60a3a
	beq.n 0x60a44	@ 00060a3a 03d0
.org 0x60a3c
	movs r0, #18	@ 00060a3c 1220
.org 0x60a3e
	b.n 0x60a46	@ 00060a3e 02e0
.org 0x60a40
	.byte 0x10,0xa5,0x00,0x00	@ 00060a40 data
.org 0x60a44
	movs r0, #26	@ 00060a44 1a20
.org 0x60a46
	strb r0, [r4, #18]	@ 00060a46 a074
.org 0x60a48
	ldrb r0, [r4, #14]	@ 00060a48 a07b
.org 0x60a4a
	adds r0, #1	@ 00060a4a 0130
.org 0x60a4c
	strb r0, [r4, #14]	@ 00060a4c a073
.org 0x60a4e
	adds r0, r4, #0	@ 00060a4e 201c
.org 0x60a50
	bl 0x1cff0	@ 00060a50 bcf7cefa
.org 0x60a54
	adds r0, r4, #0	@ 00060a54 201c
.org 0x60a56
	adds r0, #115	@ 00060a56 7330
.org 0x60a58
	ldrb r0, [r0, #0]	@ 00060a58 0078
.org 0x60a5a
	cmp r0, #3	@ 00060a5a 0328
.org 0x60a5c
	beq.n 0x60a86	@ 00060a5c 13d0
.org 0x60a5e
	ldrb r1, [r4, #10]	@ 00060a5e a17a
.org 0x60a60
	movs r0, #16	@ 00060a60 1020
.org 0x60a62
	ands r0, r1	@ 00060a62 0840
.org 0x60a64
	cmp r0, #0	@ 00060a64 0028
.org 0x60a66
	beq.n 0x60a70	@ 00060a66 03d0
.org 0x60a68
	ldr r0, [r4, #84]	@ 00060a68 606d
.org 0x60a6a
	ldr r1, [r4, #92]	@ 00060a6a e16d
.org 0x60a6c
	adds r0, r0, r1	@ 00060a6c 4018
.org 0x60a6e
	b.n 0x60a76	@ 00060a6e 02e0
.org 0x60a70
	ldr r0, [r4, #84]	@ 00060a70 606d
.org 0x60a72
	ldr r1, [r4, #92]	@ 00060a72 e16d
.org 0x60a74
	subs r0, r0, r1	@ 00060a74 401a
.org 0x60a76
	str r0, [r4, #84]	@ 00060a76 6065
.org 0x60a78
	movs r0, #128	@ 00060a78 8020
.org 0x60a7a
	lsls r0, r0, #2	@ 00060a7a 8000
.org 0x60a7c
	cmp r1, r0	@ 00060a7c 8142
.org 0x60a7e
	ble.n 0x60a86	@ 00060a7e 02dd
.org 0x60a80
	ldr r0, [r4, #100]	@ 00060a80 606e
.org 0x60a82
	adds r0, r1, r0	@ 00060a82 0818
.org 0x60a84
	str r0, [r4, #92]	@ 00060a84 e065
.org 0x60a86
	ldrb r0, [r4, #15]	@ 00060a86 e07b
.org 0x60a88
	cmp r0, #0	@ 00060a88 0028
.org 0x60a8a
	bne.n 0x60a9e	@ 00060a8a 08d1
.org 0x60a8c
	ldr r0, [r4, #44]	@ 00060a8c e06a
.org 0x60a8e
	adds r0, #140	@ 00060a8e 8c30
.org 0x60a90
	ldr r0, [r0, #0]	@ 00060a90 0068
.org 0x60a92
	movs r1, #4	@ 00060a92 0421
.org 0x60a94
	ands r0, r1	@ 00060a94 0840
.org 0x60a96
	cmp r0, #0	@ 00060a96 0028
.org 0x60a98
	beq.n 0x60a9e	@ 00060a98 01d0
.org 0x60a9a
	movs r0, #1	@ 00060a9a 0120
.org 0x60a9c
	strb r0, [r4, #15]	@ 00060a9c e073
.org 0x60a9e
	ldrb r0, [r4, #18]	@ 00060a9e a07c
.org 0x60aa0
	subs r0, #1	@ 00060aa0 0138
.org 0x60aa2
	strb r0, [r4, #18]	@ 00060aa2 a074
.org 0x60aa4
	lsls r0, r0, #24	@ 00060aa4 0006
.org 0x60aa6
	lsrs r0, r0, #24	@ 00060aa6 000e
.org 0x60aa8
	cmp r0, #255	@ 00060aa8 ff28
.org 0x60aaa
	bne.n 0x60abe	@ 00060aaa 08d1
.org 0x60aac
	ldrb r0, [r4, #15]	@ 00060aac e07b
.org 0x60aae
	cmp r0, #0	@ 00060aae 0028
.org 0x60ab0
	beq.n 0x60ab6	@ 00060ab0 01d0
.org 0x60ab2
	movs r0, #17	@ 00060ab2 1120
.org 0x60ab4
	b.n 0x60ab8	@ 00060ab4 00e0
.org 0x60ab6
	movs r0, #19	@ 00060ab6 1320
.org 0x60ab8
	strb r0, [r4, #13]	@ 00060ab8 6073
.org 0x60aba
	movs r0, #0	@ 00060aba 0020
.org 0x60abc
	strb r0, [r4, #14]	@ 00060abc a073
.org 0x60abe
	pop {r4}	@ 00060abe 10bc

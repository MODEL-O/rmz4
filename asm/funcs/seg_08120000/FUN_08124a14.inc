@ FUN_08124a14  entry 0x08124a14  size 140
.thumb
.org 0x124a14
FUN_08124a14:
	push {r4, r5, lr}	@ 00124a14 30b5
.org 0x124a16
	adds r5, r0, #0	@ 00124a16 051c
.org 0x124a18
	ldr r0, [pc, #16]	@ 00124a18 0448
.org 0x124a1a
	adds r4, r5, r0	@ 00124a1a 2c18
.org 0x124a1c
	ldrb r1, [r4, #25]	@ 00124a1c 617e
.org 0x124a1e
	cmp r1, #1	@ 00124a1e 0129
.org 0x124a20
	beq.n 0x124a46	@ 00124a20 11d0
.org 0x124a22
	cmp r1, #1	@ 00124a22 0129
.org 0x124a24
	bgt.n 0x124a30	@ 00124a24 04dc
.org 0x124a26
	cmp r1, #0	@ 00124a26 0029
.org 0x124a28
	beq.n 0x124a3a	@ 00124a28 07d0
.org 0x124a2a
	b.n 0x124a90	@ 00124a2a 31e0
.org 0x124a2c
	.byte 0xcc,0x0d,0x00,0x00	@ 00124a2c data
.org 0x124a30
	cmp r1, #2	@ 00124a30 0229
.org 0x124a32
	beq.n 0x124a64	@ 00124a32 17d0
.org 0x124a34
	cmp r1, #3	@ 00124a34 0329
.org 0x124a36
	beq.n 0x124a7a	@ 00124a36 20d0
.org 0x124a38
	b.n 0x124a90	@ 00124a38 2ae0
.org 0x124a3a
	movs r0, #60	@ 00124a3a 3c20
.org 0x124a3c
	strb r0, [r4, #28]	@ 00124a3c 2077
.org 0x124a3e
	str r1, [r4, #44]	@ 00124a3e e162
.org 0x124a40
	ldrb r0, [r4, #25]	@ 00124a40 607e
.org 0x124a42
	adds r0, #1	@ 00124a42 0130
.org 0x124a44
	strb r0, [r4, #25]	@ 00124a44 6076
.org 0x124a46
	ldr r0, [pc, #24]	@ 00124a46 0648
.org 0x124a48
	adds r1, r5, r0	@ 00124a48 2918
.org 0x124a4a
	ldrb r0, [r1, #28]	@ 00124a4a 087f
.org 0x124a4c
	subs r0, #1	@ 00124a4c 0138
.org 0x124a4e
	strb r0, [r1, #28]	@ 00124a4e 0877
.org 0x124a50
	lsls r0, r0, #24	@ 00124a50 0006
.org 0x124a52
	lsrs r0, r0, #24	@ 00124a52 000e
.org 0x124a54
	cmp r0, #255	@ 00124a54 ff28
.org 0x124a56
	bne.n 0x124a90	@ 00124a56 1bd1
.org 0x124a58
	ldrb r0, [r1, #25]	@ 00124a58 487e
.org 0x124a5a
	adds r0, #1	@ 00124a5a 0130
.org 0x124a5c
	strb r0, [r1, #25]	@ 00124a5c 4876
.org 0x124a5e
	b.n 0x124a90	@ 00124a5e 17e0
.org 0x124a60
	.byte 0xcc,0x0d,0x00,0x00	@ 00124a60 data
.org 0x124a64
	movs r0, #0	@ 00124a64 0020
.org 0x124a66
	bl 0xd3ebc	@ 00124a66 aff729fa
.org 0x124a6a
	str r0, [r4, #4]	@ 00124a6a 6060
.org 0x124a6c
	movs r0, #30	@ 00124a6c 1e20
.org 0x124a6e
	bl 0x2b10	@ 00124a6e def64ff8
.org 0x124a72
	ldrb r0, [r4, #25]	@ 00124a72 607e
.org 0x124a74
	adds r0, #1	@ 00124a74 0130
.org 0x124a76
	strb r0, [r4, #25]	@ 00124a76 6076
.org 0x124a78
	b.n 0x124a90	@ 00124a78 0ae0
.org 0x124a7a
	ldr r0, [r4, #4]	@ 00124a7a 6068
.org 0x124a7c
	ldrb r0, [r0, #12]	@ 00124a7c 007b
.org 0x124a7e
	cmp r0, #1	@ 00124a7e 0128
.org 0x124a80
	bls.n 0x124a90	@ 00124a80 06d9
.org 0x124a82
	ldrb r0, [r4, #24]	@ 00124a82 207e
.org 0x124a84
	adds r0, #1	@ 00124a84 0130
.org 0x124a86
	movs r1, #0	@ 00124a86 0021
.org 0x124a88
	strb r0, [r4, #24]	@ 00124a88 2076
.org 0x124a8a
	movs r0, #1	@ 00124a8a 0120
.org 0x124a8c
	str r0, [r4, #44]	@ 00124a8c e062
.org 0x124a8e
	strb r1, [r4, #25]	@ 00124a8e 6176
.org 0x124a90
	ldr r1, [pc, #20]	@ 00124a90 0549
.org 0x124a92
	adds r0, r5, r1	@ 00124a92 6818
.org 0x124a94
	ldr r0, [r0, #0]	@ 00124a94 0068
.org 0x124a96
	movs r1, #149	@ 00124a96 9521
.org 0x124a98
	lsls r1, r1, #2	@ 00124a98 8900
.org 0x124a9a
	adds r0, r0, r1	@ 00124a9a 4018
.org 0x124a9c
	movs r1, #1	@ 00124a9c 0121
.org 0x124a9e
	strb r1, [r0, #0]	@ 00124a9e 0170

@ FUN_081089c0  entry 0x081089c0  size 204
.thumb
.org 0x1089c0
FUN_081089c0:
	push {r4, r5, r6, lr}	@ 001089c0 70b5
.org 0x1089c2
	adds r5, r0, #0	@ 001089c2 051c
.org 0x1089c4
	ldr r0, [pc, #68]	@ 001089c4 1148
.org 0x1089c6
	ldrb r1, [r0, #4]	@ 001089c6 0179
.org 0x1089c8
	movs r0, #64	@ 001089c8 4020
.org 0x1089ca
	ands r0, r1	@ 001089ca 0840
.org 0x1089cc
	lsls r0, r0, #24	@ 001089cc 0006
.org 0x1089ce
	lsrs r6, r0, #24	@ 001089ce 060e
.org 0x1089d0
	cmp r6, #0	@ 001089d0 002e
.org 0x1089d2
	beq.n 0x108a14	@ 001089d2 1fd0
.org 0x1089d4
	ldrb r1, [r5, #10]	@ 001089d4 a97a
.org 0x1089d6
	movs r0, #254	@ 001089d6 fe20
.org 0x1089d8
	ands r0, r1	@ 001089d8 0840
.org 0x1089da
	movs r2, #0	@ 001089da 0022
.org 0x1089dc
	movs r1, #253	@ 001089dc fd21
.org 0x1089de
	ands r0, r1	@ 001089de 0840
.org 0x1089e0
	strb r0, [r5, #10]	@ 001089e0 a872
.org 0x1089e2
	adds r0, r5, #0	@ 001089e2 281c
.org 0x1089e4
	adds r0, #140	@ 001089e4 8c30
.org 0x1089e6
	str r2, [r0, #0]	@ 001089e6 0260
.org 0x1089e8
	adds r0, #4	@ 001089e8 0430
.org 0x1089ea
	str r2, [r0, #0]	@ 001089ea 0260
.org 0x1089ec
	adds r0, #4	@ 001089ec 0430
.org 0x1089ee
	strb r2, [r0, #0]	@ 001089ee 0270
.org 0x1089f0
	ldrb r1, [r5, #10]	@ 001089f0 a97a
.org 0x1089f2
	movs r0, #251	@ 001089f2 fb20
.org 0x1089f4
	ands r0, r1	@ 001089f4 0840
.org 0x1089f6
	strb r0, [r5, #10]	@ 001089f6 a872
.org 0x1089f8
	ldr r1, [pc, #20]	@ 001089f8 0549
.org 0x1089fa
	ldrb r0, [r5, #9]	@ 001089fa 687a
.org 0x1089fc
	lsls r0, r0, #2	@ 001089fc 8000
.org 0x1089fe
	adds r0, r0, r1	@ 001089fe 4018
.org 0x108a00
	movs r1, #3	@ 00108a00 0321
.org 0x108a02
	str r1, [r5, #12]	@ 00108a02 e960
.org 0x108a04
	ldr r0, [r0, #0]	@ 00108a04 0068
.org 0x108a06
	ldr r0, [r0, #12]	@ 00108a06 c068
.org 0x108a08
	str r0, [r5, #20]	@ 00108a08 6861
.org 0x108a0a
	b.n 0x108a9c	@ 00108a0a 47e0
.org 0x108a0c
	.byte 0xb0,0xe8,0x02,0x02	@ 00108a0c data
.org 0x108a10
	.byte 0x8c,0xc4,0x86,0x08	@ 00108a10 data
.org 0x108a14
	adds r0, r5, #0	@ 00108a14 281c
.org 0x108a16
	bl 0x1cc9c	@ 00108a16 14f741f9
.org 0x108a1a
	ldr r1, [pc, #72]	@ 00108a1a 1249
.org 0x108a1c
	adds r0, r5, #0	@ 00108a1c 281c
.org 0x108a1e
	bl 0x1cf00	@ 00108a1e 14f76ffa
.org 0x108a22
	ldrb r1, [r5, #10]	@ 00108a22 a97a
.org 0x108a24
	movs r0, #1	@ 00108a24 0120
.org 0x108a26
	orrs r0, r1	@ 00108a26 0843
.org 0x108a28
	movs r1, #2	@ 00108a28 0221
.org 0x108a2a
	orrs r0, r1	@ 00108a2a 0843
.org 0x108a2c
	movs r1, #4	@ 00108a2c 0421
.org 0x108a2e
	orrs r0, r1	@ 00108a2e 0843
.org 0x108a30
	strb r0, [r5, #10]	@ 00108a30 a872
.org 0x108a32
	adds r4, r5, #0	@ 00108a32 2c1c
.org 0x108a34
	adds r4, #116	@ 00108a34 7434
.org 0x108a36
	ldr r1, [pc, #48]	@ 00108a36 0c49
.org 0x108a38
	adds r2, r5, #0	@ 00108a38 2a1c
.org 0x108a3a
	adds r2, #84	@ 00108a3a 5432
.org 0x108a3c
	adds r0, r4, #0	@ 00108a3c 201c
.org 0x108a3e
	movs r3, #64	@ 00108a3e 4023
.org 0x108a40
	bl 0x5760	@ 00108a40 fcf68efe
.org 0x108a44
	str r5, [r4, #44]	@ 00108a44 e562
.org 0x108a46
	ldr r0, [pc, #36]	@ 00108a46 0948
.org 0x108a48
	str r0, [r4, #36]	@ 00108a48 6062
.org 0x108a4a
	adds r1, r5, #0	@ 00108a4a 291c
.org 0x108a4c
	adds r1, #180	@ 00108a4c b431
.org 0x108a4e
	ldr r0, [r5, #88]	@ 00108a4e a86d
.org 0x108a50
	str r0, [r1, #0]	@ 00108a50 0860
.org 0x108a52
	adds r0, r5, #0	@ 00108a52 281c
.org 0x108a54
	adds r0, #184	@ 00108a54 b830
.org 0x108a56
	str r6, [r0, #0]	@ 00108a56 0660
.org 0x108a58
	ldrb r0, [r5, #17]	@ 00108a58 687c
.org 0x108a5a
	cmp r0, #1	@ 00108a5a 0128
.org 0x108a5c
	bls.n 0x108a70	@ 00108a5c 08d9
.org 0x108a5e
	str r6, [r5, #96]	@ 00108a5e 2e66
.org 0x108a60
	b.n 0x108a74	@ 00108a60 08e0
.org 0x108a62
	.byte 0x00	@ 00108a62 data
.org 0x108a63
	.byte 0x00	@ 00108a63 data
.org 0x108a64
	.byte 0x06,0x04,0x00,0x00	@ 00108a64 data
.org 0x108a68
	.byte 0xe8,0xc4,0x86,0x08	@ 00108a68 data
.org 0x108a6c
	.byte 0xf9,0x8c,0x10,0x08	@ 00108a6c data
.org 0x108a70
	ldr r0, [pc, #48]	@ 00108a70 0c48
.org 0x108a72
	str r0, [r5, #96]	@ 00108a72 2866
.org 0x108a74
	movs r1, #180	@ 00108a74 b421
.org 0x108a76
	lsls r1, r1, #1	@ 00108a76 4900
.org 0x108a78
	adds r0, r1, #0	@ 00108a78 081c
.org 0x108a7a
	strh r0, [r5, #18]	@ 00108a7a 6882
.org 0x108a7c
	adds r1, r5, #0	@ 00108a7c 291c
.org 0x108a7e
	adds r1, #188	@ 00108a7e bc31
.org 0x108a80
	movs r0, #64	@ 00108a80 4020
.org 0x108a82
	strb r0, [r1, #0]	@ 00108a82 0870
.org 0x108a84
	ldr r1, [pc, #32]	@ 00108a84 0849
.org 0x108a86
	ldrb r0, [r5, #9]	@ 00108a86 687a
.org 0x108a88
	lsls r0, r0, #2	@ 00108a88 8000
.org 0x108a8a
	adds r0, r0, r1	@ 00108a8a 4018

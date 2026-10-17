@ FUN_08055c08  entry 0x08055c08  size 332
.thumb
.org 0x55c08
FUN_08055c08:
	push {r4, r5, r6, r7, lr}	@ 00055c08 f0b5
.org 0x55c0a
	mov r7, r8	@ 00055c0a 4746
.org 0x55c0c
	push {r7}	@ 00055c0c 80b4
.org 0x55c0e
	sub sp, #20	@ 00055c0e 85b0
.org 0x55c10
	adds r6, r0, #0	@ 00055c10 061c
.org 0x55c12
	ldrb r0, [r6, #15]	@ 00055c12 f07b
.org 0x55c14
	cmp r0, #0	@ 00055c14 0028
.org 0x55c16
	bne.n 0x55c34	@ 00055c16 0dd1
.org 0x55c18
	movs r0, #247	@ 00055c18 f720
.org 0x55c1a
	bl 0x2b10	@ 00055c1a acf779ff
.org 0x55c1e
	ldr r1, [pc, #160]	@ 00055c1e 2849
.org 0x55c20
	adds r0, r6, #0	@ 00055c20 301c
.org 0x55c22
	bl 0x1cf00	@ 00055c22 c7f76df9
.org 0x55c26
	ldr r0, [pc, #156]	@ 00055c26 2748
.org 0x55c28
	str r0, [r6, #96]	@ 00055c28 3066
.org 0x55c2a
	movs r0, #56	@ 00055c2a 3820
.org 0x55c2c
	str r0, [r6, #104]	@ 00055c2c b066
.org 0x55c2e
	ldrb r0, [r6, #15]	@ 00055c2e f07b
.org 0x55c30
	adds r0, #1	@ 00055c30 0130
.org 0x55c32
	strb r0, [r6, #15]	@ 00055c32 f073
.org 0x55c34
	adds r0, r6, #0	@ 00055c34 301c
.org 0x55c36
	bl 0x1cff0	@ 00055c36 c7f7dbf9
.org 0x55c3a
	adds r0, r6, #0	@ 00055c3a 301c
.org 0x55c3c
	adds r0, #116	@ 00055c3c 7430
.org 0x55c3e
	ldr r3, [pc, #136]	@ 00055c3e 224b
.org 0x55c40
	ldrb r1, [r6, #30]	@ 00055c40 b17f
.org 0x55c42
	lsls r1, r1, #8	@ 00055c42 0902
.org 0x55c44
	adds r2, r6, #0	@ 00055c44 321c
.org 0x55c46
	adds r2, #112	@ 00055c46 7032
.org 0x55c48
	ldrb r2, [r2, #0]	@ 00055c48 1278
.org 0x55c4a
	orrs r1, r2	@ 00055c4a 1143
.org 0x55c4c
	ldr r2, [pc, #124]	@ 00055c4c 1f4a
.org 0x55c4e
	adds r1, r1, r2	@ 00055c4e 8918
.org 0x55c50
	lsls r1, r1, #2	@ 00055c50 8900
.org 0x55c52
	adds r1, r1, r3	@ 00055c52 c918
.org 0x55c54
	adds r2, r6, #0	@ 00055c54 321c
.org 0x55c56
	adds r2, #113	@ 00055c56 7132
.org 0x55c58
	ldrb r2, [r2, #0]	@ 00055c58 1278
.org 0x55c5a
	lsls r2, r2, #24	@ 00055c5a 1206
.org 0x55c5c
	asrs r2, r2, #24	@ 00055c5c 1216
.org 0x55c5e
	ldr r1, [r1, #0]	@ 00055c5e 0968
.org 0x55c60
	lsls r2, r2, #2	@ 00055c60 9200
.org 0x55c62
	adds r2, r2, r1	@ 00055c62 5218
.org 0x55c64
	ldr r1, [r2, #0]	@ 00055c64 1168
.org 0x55c66
	ldrb r2, [r1, #0]	@ 00055c66 0a78
.org 0x55c68
	lsls r1, r2, #1	@ 00055c68 5100
.org 0x55c6a
	adds r1, r1, r2	@ 00055c6a 8918
.org 0x55c6c
	lsls r1, r1, #3	@ 00055c6c c900
.org 0x55c6e
	ldr r2, [pc, #96]	@ 00055c6e 184a
.org 0x55c70
	adds r1, r1, r2	@ 00055c70 8918
.org 0x55c72
	bl 0x5784	@ 00055c72 aff787fd
.org 0x55c76
	ldr r0, [r6, #96]	@ 00055c76 306e
.org 0x55c78
	ldr r1, [r6, #104]	@ 00055c78 b16e
.org 0x55c7a
	adds r0, r0, r1	@ 00055c7a 4018
.org 0x55c7c
	str r0, [r6, #96]	@ 00055c7c 3066
.org 0x55c7e
	cmp r0, #0	@ 00055c7e 0028
.org 0x55c80
	ble.n 0x55c86	@ 00055c80 01dd
.org 0x55c82
	movs r0, #0	@ 00055c82 0020
.org 0x55c84
	str r0, [r6, #96]	@ 00055c84 3066
.org 0x55c86
	adds r3, r6, #0	@ 00055c86 331c
.org 0x55c88
	adds r3, #188	@ 00055c88 bc33
.org 0x55c8a
	ldr r1, [r3, #0]	@ 00055c8a 1968
.org 0x55c8c
	ldr r0, [r6, #96]	@ 00055c8c 306e
.org 0x55c8e
	adds r1, r1, r0	@ 00055c8e 0918
.org 0x55c90
	str r1, [r3, #0]	@ 00055c90 1960
.org 0x55c92
	ldr r2, [pc, #64]	@ 00055c92 104a
.org 0x55c94
	adds r0, r6, #0	@ 00055c94 301c
.org 0x55c96
	adds r0, #181	@ 00055c96 b530
.org 0x55c98
	ldrb r0, [r0, #0]	@ 00055c98 0078
.org 0x55c9a
	lsls r0, r0, #1	@ 00055c9a 4000
.org 0x55c9c
	adds r0, r0, r2	@ 00055c9c 8018
.org 0x55c9e
	movs r2, #0	@ 00055c9e 0022
.org 0x55ca0
	ldrsh r0, [r0, r2]	@ 00055ca0 805e
.org 0x55ca2
	lsls r0, r0, #1	@ 00055ca2 4000
.org 0x55ca4
	adds r1, r1, r0	@ 00055ca4 0918
.org 0x55ca6
	str r1, [r6, #88]	@ 00055ca6 b165
.org 0x55ca8
	ldr r0, [pc, #44]	@ 00055ca8 0b48
.org 0x55caa
	mov r8, r0	@ 00055caa 8046
.org 0x55cac
	ldr r0, [r0, #60]	@ 00055cac c06b
.org 0x55cae
	ldr r1, [pc, #44]	@ 00055cae 0b49
.org 0x55cb0
	adds r0, r0, r1	@ 00055cb0 4018
.org 0x55cb2
	ldr r1, [r3, #0]	@ 00055cb2 1968
.org 0x55cb4
	cmp r1, r0	@ 00055cb4 8142
.org 0x55cb6
	bge.n 0x55ce0	@ 00055cb6 13da
.org 0x55cb8
	movs r1, #0	@ 00055cb8 0021
.org 0x55cba
	movs r0, #2	@ 00055cba 0220
.org 0x55cbc
	b.n 0x55d76	@ 00055cbc 5be0
.org 0x55cbe
	.byte 0x00	@ 00055cbe data
.org 0x55cbf
	.byte 0x00	@ 00055cbf data
.org 0x55cc0
	.byte 0x1c,0xa0,0x00,0x00	@ 00055cc0 data
.org 0x55cc4
	.byte 0xb0,0xfa,0xff,0xff	@ 00055cc4 data
.org 0x55cc8
	.byte 0x1c,0x87,0x85,0x08	@ 00055cc8 data
.org 0x55ccc
	.byte 0x00,0x60,0xff,0xff	@ 00055ccc data
.org 0x55cd0
	.byte 0xcc,0x84,0x85,0x08	@ 00055cd0 data
.org 0x55cd4
	.byte 0x0c,0x93,0x12,0x08	@ 00055cd4 data
.org 0x55cd8
	.byte 0xf8,0xe9,0x02,0x02	@ 00055cd8 data
.org 0x55cdc
	.byte 0x00,0xac,0xff,0xff	@ 00055cdc data
.org 0x55ce0
	ldr r7, [r6, #96]	@ 00055ce0 376e
.org 0x55ce2
	cmp r7, #0	@ 00055ce2 002f
.org 0x55ce4
	bne.n 0x55d7a	@ 00055ce4 49d1
.org 0x55ce6
	ldr r1, [pc, #64]	@ 00055ce6 1049
.org 0x55ce8
	mov r0, sp	@ 00055ce8 6846
.org 0x55cea
	movs r2, #3	@ 00055cea 0322
.org 0x55cec
	bl 0x129258	@ 00055cec d3f0b4fa
.org 0x55cf0
	add r5, sp, #4	@ 00055cf0 01ad
.org 0x55cf2
	ldr r1, [pc, #56]	@ 00055cf2 0e49
.org 0x55cf4
	adds r0, r5, #0	@ 00055cf4 281c
.org 0x55cf6
	movs r2, #3	@ 00055cf6 0322
.org 0x55cf8
	bl 0x129258	@ 00055cf8 d3f0aefa
.org 0x55cfc
	add r4, sp, #8	@ 00055cfc 02ac
.org 0x55cfe
	ldr r1, [pc, #48]	@ 00055cfe 0c49
.org 0x55d00
	adds r0, r4, #0	@ 00055d00 201c
.org 0x55d02
	movs r2, #3	@ 00055d02 0322
.org 0x55d04
	bl 0x129258	@ 00055d04 d3f0a8fa
.org 0x55d08
	str r5, [sp, #12]	@ 00055d08 0395
.org 0x55d0a
	add r2, sp, #12	@ 00055d0a 03aa
.org 0x55d0c
	str r4, [r2, #4]	@ 00055d0c 5460
.org 0x55d0e
	mov r0, r8	@ 00055d0e 4046
.org 0x55d10
	subs r0, #232	@ 00055d10 e838
.org 0x55d12
	ldrh r1, [r0, #8]	@ 00055d12 0189
.org 0x55d14
	movs r0, #8	@ 00055d14 0820
.org 0x55d16
	ands r0, r1	@ 00055d16 0840
.org 0x55d18
	lsls r0, r0, #16	@ 00055d18 0004
.org 0x55d1a
	lsrs r4, r0, #16	@ 00055d1a 040c
.org 0x55d1c
	cmp r4, #0	@ 00055d1c 002c
.org 0x55d1e
	beq.n 0x55d34	@ 00055d1e 09d0
.org 0x55d20
	movs r0, #1	@ 00055d20 0120
.org 0x55d22
	strb r0, [r6, #14]	@ 00055d22 b073
.org 0x55d24
	strb r7, [r6, #15]	@ 00055d24 f773
.org 0x55d26
	b.n 0x55d7a	@ 00055d26 28e0
.org 0x55d28
	.byte 0xdc,0x95,0x12,0x08	@ 00055d28 data
.org 0x55d2c
	.byte 0xdf,0x95,0x12,0x08	@ 00055d2c data
.org 0x55d30
	.byte 0xe2,0x95,0x12,0x08	@ 00055d30 data
.org 0x55d34
	movs r3, #0	@ 00055d34 0023
.org 0x55d36
	ldr r0, [pc, #56]	@ 00055d36 0e48
.org 0x55d38
	ldr r1, [r0, #0]	@ 00055d38 0168
.org 0x55d3a
	ldr r0, [r6, #84]	@ 00055d3a 706d
.org 0x55d3c
	ldr r1, [r1, #84]	@ 00055d3c 496d
.org 0x55d3e
	subs r0, r0, r1	@ 00055d3e 401a
.org 0x55d40
	movs r1, #252	@ 00055d40 fc21
.org 0x55d42
	lsls r1, r1, #6	@ 00055d42 8901
.org 0x55d44
	adds r0, r0, r1	@ 00055d44 4018
.org 0x55d46
	movs r1, #252	@ 00055d46 fc21
.org 0x55d48
	lsls r1, r1, #7	@ 00055d48 c901
.org 0x55d4a
	cmp r0, r1	@ 00055d4a 8842
.org 0x55d4c
	bls.n 0x55d50	@ 00055d4c 00d9
.org 0x55d4e
	movs r3, #1	@ 00055d4e 0123
.org 0x55d50
	lsls r0, r3, #2	@ 00055d50 9800
.org 0x55d52
	adds r0, r0, r2	@ 00055d52 8018

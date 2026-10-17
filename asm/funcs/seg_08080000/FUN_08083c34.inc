@ FUN_08083c34  entry 0x08083c34  size 326
.thumb
.org 0x83c34
FUN_08083c34:
	push {r4, r5, r6, lr}	@ 00083c34 70b5
.org 0x83c36
	adds r4, r0, #0	@ 00083c36 041c
.org 0x83c38
	ldr r6, [r4, #40]	@ 00083c38 a66a
.org 0x83c3a
	adds r0, #140	@ 00083c3a 8c30
.org 0x83c3c
	ldr r0, [r0, #0]	@ 00083c3c 0068
.org 0x83c3e
	movs r1, #128	@ 00083c3e 8021
.org 0x83c40
	lsls r1, r1, #2	@ 00083c40 8900
.org 0x83c42
	ands r0, r1	@ 00083c42 0840
.org 0x83c44
	cmp r0, #0	@ 00083c44 0028
.org 0x83c46
	beq.n 0x83c68	@ 00083c46 0fd0
.org 0x83c48
	ldr r1, [pc, #24]	@ 00083c48 0649
.org 0x83c4a
	ldrb r0, [r4, #9]	@ 00083c4a 607a
.org 0x83c4c
	lsls r0, r0, #2	@ 00083c4c 8000
.org 0x83c4e
	adds r0, r0, r1	@ 00083c4e 4018
.org 0x83c50
	movs r1, #2	@ 00083c50 0221
.org 0x83c52
	str r1, [r4, #12]	@ 00083c52 e160
.org 0x83c54
	ldr r0, [r0, #0]	@ 00083c54 0068
.org 0x83c56
	ldr r0, [r0, #8]	@ 00083c56 8068
.org 0x83c58
	str r0, [r4, #20]	@ 00083c58 6061
.org 0x83c5a
	adds r0, r4, #0	@ 00083c5a 201c
.org 0x83c5c
	bl 0x839a8	@ 00083c5c fff7a4fe
.org 0x83c60
	b.n 0x83d8e	@ 00083c60 95e0
.org 0x83c62
	.byte 0x00	@ 00083c62 data
.org 0x83c63
	.byte 0x00	@ 00083c63 data
.org 0x83c64
	.byte 0x40,0xdb,0x85,0x08	@ 00083c64 data
.org 0x83c68
	ldrb r0, [r4, #13]	@ 00083c68 607b
.org 0x83c6a
	cmp r0, #0	@ 00083c6a 0028
.org 0x83c6c
	bne.n 0x83d4c	@ 00083c6c 6ed1
.org 0x83c6e
	ldrb r0, [r6, #13]	@ 00083c6e 707b
.org 0x83c70
	cmp r0, #8	@ 00083c70 0828
.org 0x83c72
	beq.n 0x83c94	@ 00083c72 0fd0
.org 0x83c74
	adds r0, r4, #0	@ 00083c74 201c
.org 0x83c76
	adds r0, #116	@ 00083c76 7430
.org 0x83c78
	ldr r1, [pc, #20]	@ 00083c78 0549
.org 0x83c7a
	bl 0x5784	@ 00083c7a 81f783fd
.org 0x83c7e
	adds r0, r6, #0	@ 00083c7e 301c
.org 0x83c80
	bl 0x7f90c	@ 00083c80 fbf744fe
.org 0x83c84
	cmp r0, #0	@ 00083c84 0028
.org 0x83c86
	bne.n 0x83c9e	@ 00083c86 0ad1
.org 0x83c88
	adds r0, r4, #0	@ 00083c88 201c
.org 0x83c8a
	bl 0x1cff0	@ 00083c8a 99f7b1f9
.org 0x83c8e
	b.n 0x83c9e	@ 00083c8e 06e0
.org 0x83c90
	.byte 0xd4,0xe9,0x85,0x08	@ 00083c90 data
.org 0x83c94
	adds r0, r4, #0	@ 00083c94 201c
.org 0x83c96
	adds r0, #116	@ 00083c96 7430
.org 0x83c98
	ldr r1, [pc, #68]	@ 00083c98 1149
.org 0x83c9a
	bl 0x5784	@ 00083c9a 81f773fd
.org 0x83c9e
	ldr r0, [r6, #84]	@ 00083c9e 706d
.org 0x83ca0
	str r0, [r4, #84]	@ 00083ca0 6065
.org 0x83ca2
	ldr r0, [r6, #88]	@ 00083ca2 b06d
.org 0x83ca4
	str r0, [r4, #88]	@ 00083ca4 a065
.org 0x83ca6
	ldrb r0, [r6, #12]	@ 00083ca6 307b
.org 0x83ca8
	cmp r0, #1	@ 00083ca8 0128
.org 0x83caa
	bls.n 0x83cf8	@ 00083caa 25d9
.org 0x83cac
	adds r0, r6, #0	@ 00083cac 301c
.org 0x83cae
	adds r0, #180	@ 00083cae b430
.org 0x83cb0
	ldrb r2, [r0, #9]	@ 00083cb0 427a
.org 0x83cb2
	cmp r2, #0	@ 00083cb2 002a
.org 0x83cb4
	beq.n 0x83cf0	@ 00083cb4 1cd0
.org 0x83cb6
	ldrb r5, [r6, #13]	@ 00083cb6 757b
.org 0x83cb8
	cmp r5, #0	@ 00083cb8 002d
.org 0x83cba
	bne.n 0x83ce4	@ 00083cba 13d1
.org 0x83cbc
	adds r0, r4, #0	@ 00083cbc 201c
.org 0x83cbe
	bl 0xeba78	@ 00083cbe 67f0dbfe
.org 0x83cc2
	ldrb r1, [r4, #10]	@ 00083cc2 a17a
.org 0x83cc4
	movs r0, #254	@ 00083cc4 fe20
.org 0x83cc6
	ands r0, r1	@ 00083cc6 0840
.org 0x83cc8
	movs r1, #253	@ 00083cc8 fd21
.org 0x83cca
	ands r0, r1	@ 00083cca 0840
.org 0x83ccc
	strb r0, [r4, #10]	@ 00083ccc a072
.org 0x83cce
	adds r0, r4, #0	@ 00083cce 201c
.org 0x83cd0
	adds r0, #140	@ 00083cd0 8c30
.org 0x83cd2
	str r5, [r0, #0]	@ 00083cd2 0560
.org 0x83cd4
	adds r0, #4	@ 00083cd4 0430
.org 0x83cd6
	str r5, [r0, #0]	@ 00083cd6 0560
.org 0x83cd8
	adds r0, #4	@ 00083cd8 0430
.org 0x83cda
	strb r5, [r0, #0]	@ 00083cda 0570
.org 0x83cdc
	b.n 0x83d26	@ 00083cdc 23e0
.org 0x83cde
	.byte 0x00	@ 00083cde data
.org 0x83cdf
	.byte 0x00	@ 00083cdf data
.org 0x83ce0
	.byte 0xec,0xe9,0x85,0x08	@ 00083ce0 data
.org 0x83ce4
	movs r0, #64	@ 00083ce4 4020
.org 0x83ce6
	strb r0, [r4, #18]	@ 00083ce6 a074
.org 0x83ce8
	ldrb r0, [r4, #13]	@ 00083ce8 607b
.org 0x83cea
	adds r0, #1	@ 00083cea 0130
.org 0x83cec
	strb r0, [r4, #13]	@ 00083cec 6073
.org 0x83cee
	b.n 0x83cf8	@ 00083cee 03e0
.org 0x83cf0
	ldrb r1, [r4, #10]	@ 00083cf0 a17a
.org 0x83cf2
	movs r0, #254	@ 00083cf2 fe20
.org 0x83cf4
	ands r0, r1	@ 00083cf4 0840
.org 0x83cf6
	b.n 0x83d12	@ 00083cf6 0ce0
.org 0x83cf8
	ldr r0, [r6, #84]	@ 00083cf8 706d
.org 0x83cfa
	ldr r1, [r6, #88]	@ 00083cfa b16d
.org 0x83cfc
	ldr r2, [pc, #68]	@ 00083cfc 114a
.org 0x83cfe
	adds r1, r1, r2	@ 00083cfe 8918
.org 0x83d00
	bl 0x7098	@ 00083d00 83f7caf9
.org 0x83d04
	lsls r0, r0, #24	@ 00083d04 0006
.org 0x83d06
	cmp r0, #0	@ 00083d06 0028
.org 0x83d08
	beq.n 0x83d8e	@ 00083d08 41d0
.org 0x83d0a
	ldrb r1, [r4, #10]	@ 00083d0a a17a
.org 0x83d0c
	movs r0, #254	@ 00083d0c fe20
.org 0x83d0e
	ands r0, r1	@ 00083d0e 0840
.org 0x83d10
	movs r2, #0	@ 00083d10 0022
.org 0x83d12
	movs r1, #253	@ 00083d12 fd21
.org 0x83d14
	ands r0, r1	@ 00083d14 0840
.org 0x83d16
	strb r0, [r4, #10]	@ 00083d16 a072
.org 0x83d18
	adds r0, r4, #0	@ 00083d18 201c
.org 0x83d1a
	adds r0, #140	@ 00083d1a 8c30
.org 0x83d1c
	str r2, [r0, #0]	@ 00083d1c 0260
.org 0x83d1e
	adds r0, #4	@ 00083d1e 0430
.org 0x83d20
	str r2, [r0, #0]	@ 00083d20 0260
.org 0x83d22
	adds r0, #4	@ 00083d22 0430
.org 0x83d24
	strb r2, [r0, #0]	@ 00083d24 0270
.org 0x83d26
	ldrb r1, [r4, #10]	@ 00083d26 a17a
.org 0x83d28
	movs r0, #251	@ 00083d28 fb20
.org 0x83d2a
	ands r0, r1	@ 00083d2a 0840
.org 0x83d2c
	strb r0, [r4, #10]	@ 00083d2c a072
.org 0x83d2e
	ldr r1, [pc, #24]	@ 00083d2e 0649
.org 0x83d30
	ldrb r0, [r4, #9]	@ 00083d30 607a
.org 0x83d32
	lsls r0, r0, #2	@ 00083d32 8000
.org 0x83d34
	adds r0, r0, r1	@ 00083d34 4018
.org 0x83d36
	movs r1, #3	@ 00083d36 0321
.org 0x83d38
	str r1, [r4, #12]	@ 00083d38 e160
.org 0x83d3a
	ldr r0, [r0, #0]	@ 00083d3a 0068
.org 0x83d3c
	ldr r0, [r0, #12]	@ 00083d3c c068
.org 0x83d3e
	str r0, [r4, #20]	@ 00083d3e 6061
.org 0x83d40
	b.n 0x83d8e	@ 00083d40 25e0
.org 0x83d42
	.byte 0x00	@ 00083d42 data
.org 0x83d43
	.byte 0x00	@ 00083d43 data
.org 0x83d44
	.byte 0x00,0xe8,0xff,0xff	@ 00083d44 data
.org 0x83d48
	.byte 0x40,0xdb,0x85,0x08	@ 00083d48 data
.org 0x83d4c
	adds r0, r4, #0	@ 00083d4c 201c
.org 0x83d4e
	bl 0x1cff0	@ 00083d4e 99f74ff9
.org 0x83d52
	ldr r1, [r4, #88]	@ 00083d52 a16d
.org 0x83d54
	ldr r2, [pc, #60]	@ 00083d54 0f4a
.org 0x83d56
	adds r0, r1, r2	@ 00083d56 8818
.org 0x83d58
	str r0, [r4, #88]	@ 00083d58 a065
.org 0x83d5a
	ldrb r0, [r4, #18]	@ 00083d5a a07c
.org 0x83d5c
	subs r0, #1	@ 00083d5c 0138
.org 0x83d5e
	strb r0, [r4, #18]	@ 00083d5e a074
.org 0x83d60
	lsls r0, r0, #24	@ 00083d60 0006
.org 0x83d62
	cmp r0, #0	@ 00083d62 0028
.org 0x83d64
	beq.n 0x83d76	@ 00083d64 07d0
.org 0x83d66
	ldr r0, [r4, #84]	@ 00083d66 606d
.org 0x83d68
	ldr r2, [pc, #44]	@ 00083d68 0b4a
.org 0x83d6a
	adds r1, r1, r2	@ 00083d6a 8918
.org 0x83d6c
	bl 0x7c7c	@ 00083d6c 83f786ff
.org 0x83d70
	lsls r0, r0, #16	@ 00083d70 0004
.org 0x83d72
	cmp r0, #0	@ 00083d72 0028
.org 0x83d74
	beq.n 0x83d8e	@ 00083d74 0bd0
.org 0x83d76
	ldr r1, [pc, #36]	@ 00083d76 0949
.org 0x83d78
	ldrb r0, [r4, #9]	@ 00083d78 607a

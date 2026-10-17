@ FUN_08050be0  entry 0x08050be0  size 452
.thumb
.org 0x50be0
FUN_08050be0:
	push {r4, r5, r6, r7, lr}	@ 00050be0 f0b5
.org 0x50be2
	sub sp, #8	@ 00050be2 82b0
.org 0x50be4
	adds r5, r0, #0	@ 00050be4 051c
.org 0x50be6
	ldrb r4, [r5, #14]	@ 00050be6 ac7b
.org 0x50be8
	cmp r4, #0	@ 00050be8 002c
.org 0x50bea
	bne.n 0x50c10	@ 00050bea 11d1
.org 0x50bec
	ldr r1, [pc, #52]	@ 00050bec 0d49
.org 0x50bee
	bl 0x1cf00	@ 00050bee ccf787f9
.org 0x50bf2
	ldr r0, [r5, #84]	@ 00050bf2 686d
.org 0x50bf4
	ldr r1, [r5, #88]	@ 00050bf4 a96d
.org 0x50bf6
	bl 0x8748	@ 00050bf6 b7f7a7fd
.org 0x50bfa
	str r0, [r5, #88]	@ 00050bfa a865
.org 0x50bfc
	movs r0, #128	@ 00050bfc 8020
.org 0x50bfe
	str r0, [r5, #96]	@ 00050bfe 2866
.org 0x50c00
	strb r4, [r5, #18]	@ 00050c00 ac74
.org 0x50c02
	movs r0, #235	@ 00050c02 eb20
.org 0x50c04
	bl 0x2b10	@ 00050c04 b1f784ff
.org 0x50c08
	ldrb r0, [r5, #14]	@ 00050c08 a87b
.org 0x50c0a
	adds r0, #1	@ 00050c0a 0130
.org 0x50c0c
	strb r0, [r5, #14]	@ 00050c0c a873
.org 0x50c0e
	strb r4, [r5, #15]	@ 00050c0e ec73
.org 0x50c10
	ldrb r0, [r5, #15]	@ 00050c10 e87b
.org 0x50c12
	cmp r0, #1	@ 00050c12 0128
.org 0x50c14
	bne.n 0x50c18	@ 00050c14 00d1
.org 0x50c16
	b.n 0x50d2c	@ 00050c16 89e0
.org 0x50c18
	cmp r0, #1	@ 00050c18 0128
.org 0x50c1a
	bgt.n 0x50c28	@ 00050c1a 05dc
.org 0x50c1c
	cmp r0, #0	@ 00050c1c 0028
.org 0x50c1e
	beq.n 0x50c36	@ 00050c1e 0ad0
.org 0x50c20
	b.n 0x50dca	@ 00050c20 d3e0
.org 0x50c22
	.byte 0x00	@ 00050c22 data
.org 0x50c23
	.byte 0x00	@ 00050c23 data
.org 0x50c24
	.byte 0x17,0xa1,0x00,0x00	@ 00050c24 data
.org 0x50c28
	cmp r0, #2	@ 00050c28 0228
.org 0x50c2a
	bne.n 0x50c2e	@ 00050c2a 00d1
.org 0x50c2c
	b.n 0x50d3c	@ 00050c2c 86e0
.org 0x50c2e
	cmp r0, #3	@ 00050c2e 0328
.org 0x50c30
	bne.n 0x50c34	@ 00050c30 00d1
.org 0x50c32
	b.n 0x50dac	@ 00050c32 bbe0
.org 0x50c34
	b.n 0x50dca	@ 00050c34 c9e0
.org 0x50c36
	ldrb r1, [r5, #18]	@ 00050c36 a97c
.org 0x50c38
	movs r7, #1	@ 00050c38 0127
.org 0x50c3a
	movs r0, #1	@ 00050c3a 0120
.org 0x50c3c
	ands r0, r1	@ 00050c3c 0840
.org 0x50c3e
	cmp r0, #0	@ 00050c3e 0028
.org 0x50c40
	beq.n 0x50cc8	@ 00050c40 42d0
.org 0x50c42
	ldr r0, [r5, #84]	@ 00050c42 686d
.org 0x50c44
	str r0, [sp, #0]	@ 00050c44 0090
.org 0x50c46
	ldr r1, [r5, #88]	@ 00050c46 a96d
.org 0x50c48
	bl 0x8748	@ 00050c48 b7f77efd
.org 0x50c4c
	str r0, [sp, #4]	@ 00050c4c 0190
.org 0x50c4e
	ldr r2, [sp, #0]	@ 00050c4e 009a
.org 0x50c50
	movs r0, #128	@ 00050c50 8020
.org 0x50c52
	lsls r0, r0, #5	@ 00050c52 4001
.org 0x50c54
	adds r2, r2, r0	@ 00050c54 1218
.org 0x50c56
	ldr r6, [pc, #68]	@ 00050c56 114e
.org 0x50c58
	ldr r0, [r6, #0]	@ 00050c58 3068
.org 0x50c5a
	ldr r4, [pc, #68]	@ 00050c5a 114c
.org 0x50c5c
	muls r0, r4	@ 00050c5c 6043
.org 0x50c5e
	ldr r1, [pc, #68]	@ 00050c5e 1149
.org 0x50c60
	adds r0, r0, r1	@ 00050c60 4018
.org 0x50c62
	lsls r0, r0, #1	@ 00050c62 4000
.org 0x50c64
	lsrs r3, r0, #1	@ 00050c64 4308
.org 0x50c66
	str r3, [r6, #0]	@ 00050c66 3360
.org 0x50c68
	lsrs r0, r0, #17	@ 00050c68 400c
.org 0x50c6a
	movs r1, #31	@ 00050c6a 1f21
.org 0x50c6c
	ands r0, r1	@ 00050c6c 0840
.org 0x50c6e
	lsls r0, r0, #8	@ 00050c6e 0002
.org 0x50c70
	subs r2, r2, r0	@ 00050c70 121a
.org 0x50c72
	str r2, [sp, #0]	@ 00050c72 0092
.org 0x50c74
	ldrb r1, [r5, #18]	@ 00050c74 a97c
.org 0x50c76
	movs r0, #3	@ 00050c76 0320
.org 0x50c78
	ands r0, r1	@ 00050c78 0840
.org 0x50c7a
	cmp r0, #1	@ 00050c7a 0128
.org 0x50c7c
	bne.n 0x50cac	@ 00050c7c 16d1
.org 0x50c7e
	ldr r1, [pc, #40]	@ 00050c7e 0a49
.org 0x50c80
	muls r3, r4	@ 00050c80 6343
.org 0x50c82
	ldr r2, [pc, #32]	@ 00050c82 084a
.org 0x50c84
	adds r3, r3, r2	@ 00050c84 9b18
.org 0x50c86
	lsls r3, r3, #1	@ 00050c86 5b00
.org 0x50c88
	lsrs r0, r3, #1	@ 00050c88 5808
.org 0x50c8a
	str r0, [r6, #0]	@ 00050c8a 3060
.org 0x50c8c
	lsrs r3, r3, #17	@ 00050c8c 5b0c
.org 0x50c8e
	ands r3, r7	@ 00050c8e 3b40
.org 0x50c90
	lsls r3, r3, #4	@ 00050c90 1b01
.org 0x50c92
	mov r0, sp	@ 00050c92 6846
.org 0x50c94
	movs r2, #0	@ 00050c94 0022
.org 0x50c96
	bl 0xd4c8c	@ 00050c96 83f0f9ff
.org 0x50c9a
	b.n 0x50cc8	@ 00050c9a 15e0
.org 0x50c9c
	.byte 0x38,0xdc,0x02,0x02	@ 00050c9c data
.org 0x50ca0
	.byte 0xfd,0x43,0x03,0x00	@ 00050ca0 data
.org 0x50ca4
	.byte 0xc3,0x9e,0x26,0x00	@ 00050ca4 data
.org 0x50ca8
	.byte 0xb8,0x81,0x85,0x08	@ 00050ca8 data
.org 0x50cac
	ldr r1, [pc, #48]	@ 00050cac 0c49
.org 0x50cae
	muls r3, r4	@ 00050cae 6343
.org 0x50cb0
	ldr r0, [pc, #48]	@ 00050cb0 0c48
.org 0x50cb2
	adds r3, r3, r0	@ 00050cb2 1b18
.org 0x50cb4
	lsls r3, r3, #1	@ 00050cb4 5b00
.org 0x50cb6
	lsrs r0, r3, #1	@ 00050cb6 5808
.org 0x50cb8
	str r0, [r6, #0]	@ 00050cb8 3060
.org 0x50cba
	lsrs r3, r3, #17	@ 00050cba 5b0c
.org 0x50cbc
	ands r3, r7	@ 00050cbc 3b40
.org 0x50cbe
	lsls r3, r3, #4	@ 00050cbe 1b01
.org 0x50cc0
	mov r0, sp	@ 00050cc0 6846
.org 0x50cc2
	movs r2, #0	@ 00050cc2 0022
.org 0x50cc4
	bl 0xd4c8c	@ 00050cc4 83f0e2ff
.org 0x50cc8
	ldrb r1, [r5, #18]	@ 00050cc8 a97c
.org 0x50cca
	adds r0, r1, #1	@ 00050cca 481c
.org 0x50ccc
	strb r0, [r5, #18]	@ 00050ccc a874
.org 0x50cce
	movs r0, #3	@ 00050cce 0320
.org 0x50cd0
	ands r0, r1	@ 00050cd0 0840
.org 0x50cd2
	cmp r0, #1	@ 00050cd2 0128
.org 0x50cd4
	bhi.n 0x50ce8	@ 00050cd4 08d8
.org 0x50cd6
	ldr r0, [r5, #84]	@ 00050cd6 686d
.org 0x50cd8
	movs r1, #128	@ 00050cd8 8021
.org 0x50cda
	lsls r1, r1, #1	@ 00050cda 4900
.org 0x50cdc
	adds r0, r0, r1	@ 00050cdc 4018
.org 0x50cde
	b.n 0x50cee	@ 00050cde 06e0
.org 0x50ce0
	.byte 0x9c,0x81,0x85,0x08	@ 00050ce0 data
.org 0x50ce4
	.byte 0xc3,0x9e,0x26,0x00	@ 00050ce4 data
.org 0x50ce8
	ldr r0, [r5, #84]	@ 00050ce8 686d
.org 0x50cea
	ldr r2, [pc, #52]	@ 00050cea 0d4a
.org 0x50cec
	adds r0, r0, r2	@ 00050cec 8018
.org 0x50cee
	str r0, [r5, #84]	@ 00050cee 6865
.org 0x50cf0
	ldr r1, [r5, #88]	@ 00050cf0 a96d
.org 0x50cf2
	ldr r0, [r5, #96]	@ 00050cf2 286e
.org 0x50cf4
	adds r1, r1, r0	@ 00050cf4 0918
.org 0x50cf6
	str r1, [r5, #88]	@ 00050cf6 a965
.org 0x50cf8
	ldr r0, [r5, #84]	@ 00050cf8 686d
.org 0x50cfa
	ldr r2, [pc, #40]	@ 00050cfa 0a4a
.org 0x50cfc
	adds r1, r1, r2	@ 00050cfc 8918
.org 0x50cfe
	bl 0x7c7c	@ 00050cfe b6f7bdff
.org 0x50d02
	lsls r0, r0, #16	@ 00050d02 0004
.org 0x50d04
	lsrs r4, r0, #16	@ 00050d04 040c
.org 0x50d06
	cmp r4, #0	@ 00050d06 002c
.org 0x50d08
	bne.n 0x50dca	@ 00050d08 5fd1
.org 0x50d0a
	ldr r1, [pc, #28]	@ 00050d0a 0749
.org 0x50d0c
	adds r0, r5, #0	@ 00050d0c 281c
.org 0x50d0e
	movs r2, #3	@ 00050d0e 0322
.org 0x50d10
	movs r3, #4	@ 00050d10 0423
.org 0x50d12
	bl 0x1cfc8	@ 00050d12 ccf759f9
.org 0x50d16
	str r4, [r5, #96]	@ 00050d16 2c66
.org 0x50d18
	movs r0, #8	@ 00050d18 0820
.org 0x50d1a
	strb r0, [r5, #18]	@ 00050d1a a874
.org 0x50d1c
	b.n 0x50d9c	@ 00050d1c 3ee0
.org 0x50d1e
	.byte 0x00	@ 00050d1e data
.org 0x50d1f
	.byte 0x00	@ 00050d1f data
.org 0x50d20
	.byte 0x00,0xff,0xff,0xff	@ 00050d20 data
.org 0x50d24
	.byte 0x00,0xe9,0xff,0xff	@ 00050d24 data
.org 0x50d28
	.byte 0x03,0xa1,0x00,0x00	@ 00050d28 data
.org 0x50d2c
	ldrb r0, [r5, #18]	@ 00050d2c a87c
.org 0x50d2e
	subs r0, #1	@ 00050d2e 0138
.org 0x50d30
	strb r0, [r5, #18]	@ 00050d30 a874
.org 0x50d32
	lsls r0, r0, #24	@ 00050d32 0006
.org 0x50d34
	lsrs r0, r0, #24	@ 00050d34 000e
.org 0x50d36
	cmp r0, #255	@ 00050d36 ff28
.org 0x50d38
	bne.n 0x50dca	@ 00050d38 47d1
.org 0x50d3a
	b.n 0x50d9c	@ 00050d3a 2fe0
.org 0x50d3c
	ldr r0, [r5, #96]	@ 00050d3c 286e
.org 0x50d3e
	adds r0, #32	@ 00050d3e 2030
.org 0x50d40
	str r0, [r5, #96]	@ 00050d40 2866
.org 0x50d42
	ldr r1, [r5, #88]	@ 00050d42 a96d
.org 0x50d44
	adds r1, r1, r0	@ 00050d44 0918
.org 0x50d46
	str r1, [r5, #88]	@ 00050d46 a965
.org 0x50d48
	ldr r0, [r5, #84]	@ 00050d48 686d
.org 0x50d4a
	bl 0x7c7c	@ 00050d4a b6f797ff
.org 0x50d4e
	lsls r0, r0, #16	@ 00050d4e 0004
.org 0x50d50
	cmp r0, #0	@ 00050d50 0028
.org 0x50d52
	beq.n 0x50dca	@ 00050d52 3ad0
.org 0x50d54
	ldr r1, [pc, #76]	@ 00050d54 1349
.org 0x50d56
	adds r0, r5, #0	@ 00050d56 281c
.org 0x50d58
	bl 0x1cf00	@ 00050d58 ccf7d2f8
.org 0x50d5c
	ldr r0, [r5, #84]	@ 00050d5c 686d
.org 0x50d5e
	ldr r1, [r5, #88]	@ 00050d5e a96d
.org 0x50d60
	bl 0x8534	@ 00050d60 b7f7e8fb
.org 0x50d64
	str r0, [r5, #88]	@ 00050d64 a865
.org 0x50d66
	movs r0, #240	@ 00050d66 f020
.org 0x50d68
	bl 0x2b10	@ 00050d68 b1f7d2fe
.org 0x50d6c
	adds r1, r5, #0	@ 00050d6c 291c
.org 0x50d6e
	adds r1, #84	@ 00050d6e 5431
.org 0x50d70
	movs r0, #4	@ 00050d70 0420
.org 0x50d72
	bl 0x1fe64	@ 00050d72 cff777f8
.org 0x50d76
	ldr r0, [r5, #84]	@ 00050d76 686d
.org 0x50d78
	ldr r1, [pc, #44]	@ 00050d78 0b49
.org 0x50d7a
	adds r0, r0, r1	@ 00050d7a 4018
.org 0x50d7c
	adds r4, r5, #0	@ 00050d7c 2c1c
.org 0x50d7e
	adds r4, #180	@ 00050d7e b434
.org 0x50d80
	ldr r1, [r4, #4]	@ 00050d80 6168
.org 0x50d82
	movs r2, #0	@ 00050d82 0022
.org 0x50d84
	movs r3, #2	@ 00050d84 0223
.org 0x50d86
	bl 0xc1a78	@ 00050d86 70f077fe
.org 0x50d8a
	ldr r0, [r5, #84]	@ 00050d8a 686d
.org 0x50d8c
	movs r2, #192	@ 00050d8c c022
.org 0x50d8e
	lsls r2, r2, #5	@ 00050d8e 5201
.org 0x50d90
	adds r0, r0, r2	@ 00050d90 8018
.org 0x50d92
	ldr r1, [r4, #4]	@ 00050d92 6168
.org 0x50d94
	movs r2, #1	@ 00050d94 0122
.org 0x50d96
	movs r3, #2	@ 00050d96 0223
.org 0x50d98
	bl 0xc1a78	@ 00050d98 70f06efe
.org 0x50d9c
	ldrb r0, [r5, #15]	@ 00050d9c e87b
.org 0x50d9e
	adds r0, #1	@ 00050d9e 0130
.org 0x50da0
	strb r0, [r5, #15]	@ 00050da0 e873
.org 0x50da2
	b.n 0x50dca	@ 00050da2 12e0

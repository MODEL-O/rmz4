@ FUN_08042bfc  entry 0x08042bfc  size 254
.thumb
.org 0x42bfc
FUN_08042bfc:
	push {r4, r5, r6, lr}	@ 00042bfc 70b5
.org 0x42bfe
	adds r5, r0, #0	@ 00042bfe 051c
.org 0x42c00
	ldr r6, [r5, #40]	@ 00042c00 ae6a
.org 0x42c02
	ldr r1, [r5, #44]	@ 00042c02 e96a
.org 0x42c04
	ldrb r0, [r5, #13]	@ 00042c04 687b
.org 0x42c06
	cmp r0, #0	@ 00042c06 0028
.org 0x42c08
	beq.n 0x42c3c	@ 00042c08 18d0
.org 0x42c0a
	adds r0, r5, #0	@ 00042c0a 281c
.org 0x42c0c
	adds r0, #115	@ 00042c0c 7330
.org 0x42c0e
	ldrb r0, [r0, #0]	@ 00042c0e 0078
.org 0x42c10
	cmp r0, #3	@ 00042c10 0328
.org 0x42c12
	bne.n 0x42c50	@ 00042c12 1dd1
.org 0x42c14
	ldr r0, [pc, #28]	@ 00042c14 0748
.org 0x42c16
	adds r2, r6, r0	@ 00042c16 3218
.org 0x42c18
	ldrb r0, [r2, #0]	@ 00042c18 1078
.org 0x42c1a
	movs r1, #64	@ 00042c1a 4021
.org 0x42c1c
	orrs r0, r1	@ 00042c1c 0843
.org 0x42c1e
	strb r0, [r2, #0]	@ 00042c1e 1070
.org 0x42c20
	ldr r1, [pc, #20]	@ 00042c20 0549
.org 0x42c22
	ldrb r0, [r5, #9]	@ 00042c22 687a
.org 0x42c24
	lsls r0, r0, #2	@ 00042c24 8000
.org 0x42c26
	adds r0, r0, r1	@ 00042c26 4018
.org 0x42c28
	movs r1, #2	@ 00042c28 0221
.org 0x42c2a
	str r1, [r5, #12]	@ 00042c2a e960
.org 0x42c2c
	ldr r0, [r0, #0]	@ 00042c2c 0068
.org 0x42c2e
	ldr r0, [r0, #8]	@ 00042c2e 8068
.org 0x42c30
	str r0, [r5, #20]	@ 00042c30 6861
.org 0x42c32
	b.n 0x42d06	@ 00042c32 68e0
.org 0x42c34
	.byte 0x53,0x01,0x00,0x00	@ 00042c34 data
.org 0x42c38
	.byte 0xf8,0x39,0x85,0x08	@ 00042c38 data
.org 0x42c3c
	ldrb r0, [r1, #12]	@ 00042c3c 087b
.org 0x42c3e
	cmp r0, #1	@ 00042c3e 0128
.org 0x42c40
	bls.n 0x42c50	@ 00042c40 06d9
.org 0x42c42
	ldr r1, [pc, #40]	@ 00042c42 0a49
.org 0x42c44
	adds r0, r5, #0	@ 00042c44 281c
.org 0x42c46
	bl 0x1cf00	@ 00042c46 daf75bf9
.org 0x42c4a
	ldrb r0, [r5, #13]	@ 00042c4a 687b
.org 0x42c4c
	adds r0, #1	@ 00042c4c 0130
.org 0x42c4e
	strb r0, [r5, #13]	@ 00042c4e 6873
.org 0x42c50
	adds r0, r5, #0	@ 00042c50 281c
.org 0x42c52
	bl 0x1cff0	@ 00042c52 daf7cdf9
.org 0x42c56
	ldrb r0, [r6, #10]	@ 00042c56 b07a
.org 0x42c58
	lsrs r2, r0, #4	@ 00042c58 0209
.org 0x42c5a
	movs r0, #1	@ 00042c5a 0120
.org 0x42c5c
	ands r2, r0	@ 00042c5c 0240
.org 0x42c5e
	cmp r2, #0	@ 00042c5e 002a
.org 0x42c60
	beq.n 0x42c70	@ 00042c60 06d0
.org 0x42c62
	ldrb r1, [r5, #10]	@ 00042c62 a97a
.org 0x42c64
	movs r0, #16	@ 00042c64 1020
.org 0x42c66
	orrs r0, r1	@ 00042c66 0843
.org 0x42c68
	b.n 0x42c76	@ 00042c68 05e0
.org 0x42c6a
	.byte 0x00	@ 00042c6a data
.org 0x42c6b
	.byte 0x00	@ 00042c6b data
.org 0x42c6c
	.byte 0x1e,0x80,0x00,0x00	@ 00042c6c data
.org 0x42c70
	ldrb r1, [r5, #10]	@ 00042c70 a97a
.org 0x42c72
	movs r0, #239	@ 00042c72 ef20
.org 0x42c74
	ands r0, r1	@ 00042c74 0840
.org 0x42c76
	strb r0, [r5, #10]	@ 00042c76 a872
.org 0x42c78
	adds r1, r2, #0	@ 00042c78 111c
.org 0x42c7a
	adds r0, r5, #0	@ 00042c7a 281c
.org 0x42c7c
	adds r0, #76	@ 00042c7c 4c30
.org 0x42c7e
	strb r1, [r0, #0]	@ 00042c7e 0170
.org 0x42c80
	adds r3, r5, #0	@ 00042c80 2b1c
.org 0x42c82
	adds r3, #74	@ 00042c82 4a33
.org 0x42c84
	lsls r1, r1, #4	@ 00042c84 0901
.org 0x42c86
	ldrb r2, [r3, #0]	@ 00042c86 1a78
.org 0x42c88
	movs r0, #17	@ 00042c88 1120
.org 0x42c8a
	negs r0, r0	@ 00042c8a 4042
.org 0x42c8c
	ands r0, r2	@ 00042c8c 1040
.org 0x42c8e
	orrs r0, r1	@ 00042c8e 0843
.org 0x42c90
	strb r0, [r3, #0]	@ 00042c90 1870
.org 0x42c92
	adds r0, r6, #0	@ 00042c92 301c
.org 0x42c94
	adds r0, #113	@ 00042c94 7130
.org 0x42c96
	ldrb r0, [r0, #0]	@ 00042c96 0078
.org 0x42c98
	lsls r0, r0, #24	@ 00042c98 0006
.org 0x42c9a
	asrs r0, r0, #24	@ 00042c9a 0016
.org 0x42c9c
	movs r3, #0	@ 00042c9c 0023
.org 0x42c9e
	cmp r0, #3	@ 00042c9e 0328
.org 0x42ca0
	bne.n 0x42ca4	@ 00042ca0 00d1
.org 0x42ca2
	movs r3, #1	@ 00042ca2 0123
.org 0x42ca4
	ldrb r1, [r5, #10]	@ 00042ca4 a97a
.org 0x42ca6
	movs r0, #16	@ 00042ca6 1020
.org 0x42ca8
	ands r0, r1	@ 00042ca8 0840
.org 0x42caa
	cmp r0, #0	@ 00042caa 0028
.org 0x42cac
	beq.n 0x42ccc	@ 00042cac 0ed0
.org 0x42cae
	ldr r2, [pc, #24]	@ 00042cae 064a
.org 0x42cb0
	lsls r3, r3, #3	@ 00042cb0 db00
.org 0x42cb2
	movs r0, #168	@ 00042cb2 a820
.org 0x42cb4
	lsls r0, r0, #1	@ 00042cb4 4000
.org 0x42cb6
	adds r4, r6, r0	@ 00042cb6 3418
.org 0x42cb8
	ldrb r0, [r4, #0]	@ 00042cb8 2078
.org 0x42cba
	lsls r0, r0, #4	@ 00042cba 0001
.org 0x42cbc
	adds r0, r3, r0	@ 00042cbc 1818
.org 0x42cbe
	adds r0, r0, r2	@ 00042cbe 8018
.org 0x42cc0
	ldr r1, [r6, #84]	@ 00042cc0 716d
.org 0x42cc2
	ldr r0, [r0, #0]	@ 00042cc2 0068
.org 0x42cc4
	subs r1, r1, r0	@ 00042cc4 091a
.org 0x42cc6
	b.n 0x42ce4	@ 00042cc6 0de0
.org 0x42cc8
	.byte 0x4c,0x35,0x85,0x08	@ 00042cc8 data
.org 0x42ccc
	ldr r2, [pc, #60]	@ 00042ccc 0f4a
.org 0x42cce
	lsls r3, r3, #3	@ 00042cce db00
.org 0x42cd0
	movs r0, #168	@ 00042cd0 a820
.org 0x42cd2
	lsls r0, r0, #1	@ 00042cd2 4000
.org 0x42cd4
	adds r4, r6, r0	@ 00042cd4 3418
.org 0x42cd6
	ldrb r0, [r4, #0]	@ 00042cd6 2078
.org 0x42cd8
	lsls r0, r0, #4	@ 00042cd8 0001
.org 0x42cda
	adds r0, r3, r0	@ 00042cda 1818
.org 0x42cdc
	adds r0, r0, r2	@ 00042cdc 8018
.org 0x42cde
	ldr r1, [r6, #84]	@ 00042cde 716d
.org 0x42ce0
	ldr r0, [r0, #0]	@ 00042ce0 0068
.org 0x42ce2
	adds r1, r1, r0	@ 00042ce2 0918
.org 0x42ce4
	str r1, [r5, #84]	@ 00042ce4 6965
.org 0x42ce6
	ldrb r0, [r4, #0]	@ 00042ce6 2078
.org 0x42ce8
	lsls r0, r0, #4	@ 00042ce8 0001
.org 0x42cea
	adds r0, r3, r0	@ 00042cea 1818
.org 0x42cec
	adds r1, r2, #4	@ 00042cec 111d
.org 0x42cee
	adds r0, r0, r1	@ 00042cee 4018
.org 0x42cf0
	ldr r1, [r6, #88]	@ 00042cf0 b16d
.org 0x42cf2
	ldr r0, [r0, #0]	@ 00042cf2 0068
.org 0x42cf4
	adds r1, r1, r0	@ 00042cf4 0918
.org 0x42cf6
	str r1, [r5, #88]	@ 00042cf6 a965
.org 0x42cf8
	ldr r1, [pc, #20]	@ 00042cf8 0549

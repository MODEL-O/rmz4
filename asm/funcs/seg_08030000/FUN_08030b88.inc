@ FUN_08030b88  entry 0x08030b88  size 244
.thumb
.org 0x30b88
FUN_08030b88:
	push {r4, lr}	@ 00030b88 10b5
.org 0x30b8a
	adds r4, r0, #0	@ 00030b8a 041c
.org 0x30b8c
	movs r1, #150	@ 00030b8c 9621
.org 0x30b8e
	lsls r1, r1, #2	@ 00030b8e 8900
.org 0x30b90
	adds r0, r4, r1	@ 00030b90 6018
.org 0x30b92
	ldr r1, [r0, #0]	@ 00030b92 0168
.org 0x30b94
	movs r3, #32	@ 00030b94 2023
.org 0x30b96
	adds r0, r1, #0	@ 00030b96 081c
.org 0x30b98
	ands r0, r3	@ 00030b98 1840
.org 0x30b9a
	cmp r0, #0	@ 00030b9a 0028
.org 0x30b9c
	beq.n 0x30bfc	@ 00030b9c 2ed0
.org 0x30b9e
	adds r1, r4, #0	@ 00030b9e 211c
.org 0x30ba0
	adds r1, #76	@ 00030ba0 4c31
.org 0x30ba2
	movs r0, #0	@ 00030ba2 0020
.org 0x30ba4
	strb r0, [r1, #0]	@ 00030ba4 0870
.org 0x30ba6
	adds r2, r4, #0	@ 00030ba6 221c
.org 0x30ba8
	adds r2, #74	@ 00030ba8 4a32
.org 0x30baa
	ldrb r1, [r2, #0]	@ 00030baa 1178
.org 0x30bac
	subs r0, #17	@ 00030bac 1138
.org 0x30bae
	ands r0, r1	@ 00030bae 0840
.org 0x30bb0
	strb r0, [r2, #0]	@ 00030bb0 1070
.org 0x30bb2
	ldrb r1, [r4, #10]	@ 00030bb2 a17a
.org 0x30bb4
	movs r0, #239	@ 00030bb4 ef20
.org 0x30bb6
	ands r0, r1	@ 00030bb6 0840
.org 0x30bb8
	strb r0, [r4, #10]	@ 00030bb8 a072
.org 0x30bba
	movs r1, #161	@ 00030bba a121
.org 0x30bbc
	lsls r1, r1, #1	@ 00030bbc 4900
.org 0x30bbe
	adds r0, r4, r1	@ 00030bbe 6018
.org 0x30bc0
	ldrb r1, [r0, #0]	@ 00030bc0 0178
.org 0x30bc2
	adds r0, r3, #0	@ 00030bc2 181c
.org 0x30bc4
	ands r0, r1	@ 00030bc4 0840
.org 0x30bc6
	cmp r0, #0	@ 00030bc6 0028
.org 0x30bc8
	beq.n 0x30bee	@ 00030bc8 11d0
.org 0x30bca
	ldr r0, [r4, #92]	@ 00030bca e06d
.org 0x30bcc
	subs r0, #64	@ 00030bcc 4038
.org 0x30bce
	str r0, [r4, #92]	@ 00030bce e065
.org 0x30bd0
	adds r0, r4, #0	@ 00030bd0 201c
.org 0x30bd2
	bl 0x386d4	@ 00030bd2 07f07ffd
.org 0x30bd6
	lsls r0, r0, #16	@ 00030bd6 0004
.org 0x30bd8
	asrs r0, r0, #16	@ 00030bd8 0014
.org 0x30bda
	ldr r1, [r4, #92]	@ 00030bda e16d
.org 0x30bdc
	cmn r1, r0	@ 00030bdc c142
.org 0x30bde
	bge.n 0x30c50	@ 00030bde 37da
.org 0x30be0
	adds r0, r4, #0	@ 00030be0 201c
.org 0x30be2
	bl 0x386d4	@ 00030be2 07f077fd
.org 0x30be6
	lsls r0, r0, #16	@ 00030be6 0004
.org 0x30be8
	asrs r0, r0, #16	@ 00030be8 0014
.org 0x30bea
	negs r0, r0	@ 00030bea 4042
.org 0x30bec
	b.n 0x30c4e	@ 00030bec 2fe0
.org 0x30bee
	adds r0, r4, #0	@ 00030bee 201c
.org 0x30bf0
	bl 0x386d4	@ 00030bf0 07f070fd
.org 0x30bf4
	lsls r0, r0, #16	@ 00030bf4 0004
.org 0x30bf6
	asrs r0, r0, #16	@ 00030bf6 0014
.org 0x30bf8
	negs r0, r0	@ 00030bf8 4042
.org 0x30bfa
	b.n 0x30c4e	@ 00030bfa 28e0
.org 0x30bfc
	movs r0, #16	@ 00030bfc 1020
.org 0x30bfe
	ands r1, r0	@ 00030bfe 0140
.org 0x30c00
	cmp r1, #0	@ 00030c00 0029
.org 0x30c02
	beq.n 0x30c50	@ 00030c02 25d0
.org 0x30c04
	adds r1, r4, #0	@ 00030c04 211c
.org 0x30c06
	adds r1, #76	@ 00030c06 4c31
.org 0x30c08
	movs r0, #1	@ 00030c08 0120
.org 0x30c0a
	strb r0, [r1, #0]	@ 00030c0a 0870
.org 0x30c0c
	adds r2, r4, #0	@ 00030c0c 221c
.org 0x30c0e
	adds r2, #74	@ 00030c0e 4a32
.org 0x30c10
	ldrb r0, [r2, #0]	@ 00030c10 1078
.org 0x30c12
	movs r1, #16	@ 00030c12 1021
.org 0x30c14
	orrs r0, r1	@ 00030c14 0843
.org 0x30c16
	strb r0, [r2, #0]	@ 00030c16 1070
.org 0x30c18
	ldrb r0, [r4, #10]	@ 00030c18 a07a
.org 0x30c1a
	orrs r1, r0	@ 00030c1a 0143
.org 0x30c1c
	strb r1, [r4, #10]	@ 00030c1c a172
.org 0x30c1e
	movs r1, #161	@ 00030c1e a121
.org 0x30c20
	lsls r1, r1, #1	@ 00030c20 4900
.org 0x30c22
	adds r0, r4, r1	@ 00030c22 6018
.org 0x30c24
	ldrb r1, [r0, #0]	@ 00030c24 0178
.org 0x30c26
	adds r0, r3, #0	@ 00030c26 181c
.org 0x30c28
	ands r0, r1	@ 00030c28 0840
.org 0x30c2a
	cmp r0, #0	@ 00030c2a 0028
.org 0x30c2c
	beq.n 0x30c44	@ 00030c2c 0ad0
.org 0x30c2e
	ldr r0, [r4, #92]	@ 00030c2e e06d
.org 0x30c30
	adds r0, #64	@ 00030c30 4030
.org 0x30c32
	str r0, [r4, #92]	@ 00030c32 e065
.org 0x30c34
	adds r0, r4, #0	@ 00030c34 201c
.org 0x30c36
	bl 0x386d4	@ 00030c36 07f04dfd
.org 0x30c3a
	lsls r0, r0, #16	@ 00030c3a 0004
.org 0x30c3c
	asrs r0, r0, #16	@ 00030c3c 0014
.org 0x30c3e
	ldr r1, [r4, #92]	@ 00030c3e e16d
.org 0x30c40
	cmp r1, r0	@ 00030c40 8142
.org 0x30c42
	ble.n 0x30c50	@ 00030c42 05dd
.org 0x30c44
	adds r0, r4, #0	@ 00030c44 201c
.org 0x30c46
	bl 0x386d4	@ 00030c46 07f045fd
.org 0x30c4a
	lsls r0, r0, #16	@ 00030c4a 0004
.org 0x30c4c
	asrs r0, r0, #16	@ 00030c4c 0014
.org 0x30c4e
	str r0, [r4, #92]	@ 00030c4e e065
.org 0x30c50
	adds r0, r4, #0	@ 00030c50 201c
.org 0x30c52
	adds r0, #113	@ 00030c52 7130
.org 0x30c54
	ldrb r0, [r0, #0]	@ 00030c54 0078
.org 0x30c56
	lsls r0, r0, #24	@ 00030c56 0006
.org 0x30c58
	asrs r0, r0, #24	@ 00030c58 0016
.org 0x30c5a
	cmp r0, #3	@ 00030c5a 0328
.org 0x30c5c
	beq.n 0x30c62	@ 00030c5c 01d0
.org 0x30c5e
	cmp r0, #8	@ 00030c5e 0828
.org 0x30c60
	bne.n 0x30c76	@ 00030c60 09d1
.org 0x30c62
	adds r0, r4, #0	@ 00030c62 201c
.org 0x30c64
	adds r0, #114	@ 00030c64 7230
.org 0x30c66
	ldrb r0, [r0, #0]	@ 00030c66 0078
.org 0x30c68
	lsls r0, r0, #24	@ 00030c68 0006
.org 0x30c6a
	asrs r0, r0, #24	@ 00030c6a 0016
.org 0x30c6c
	cmp r0, #1	@ 00030c6c 0128
.org 0x30c6e
	bgt.n 0x30c76	@ 00030c6e 02dc
.org 0x30c70
	movs r0, #7	@ 00030c70 0720
.org 0x30c72
	bl 0x2b10	@ 00030c72 d1f74dff
.org 0x30c76
	pop {r4}	@ 00030c76 10bc
.org 0x30c78
	pop {r0}	@ 00030c78 01bc
.org 0x30c7a
	bx r0	@ 00030c7a 0047

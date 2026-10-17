@ FUN_08030a94  entry 0x08030a94  size 242
.thumb
.org 0x30a94
FUN_08030a94:
	push {r4, lr}	@ 00030a94 10b5
.org 0x30a96
	adds r4, r0, #0	@ 00030a96 041c
.org 0x30a98
	ldrb r1, [r4, #30]	@ 00030a98 a17f
.org 0x30a9a
	lsls r1, r1, #8	@ 00030a9a 0902
.org 0x30a9c
	adds r0, #112	@ 00030a9c 7030
.org 0x30a9e
	ldrb r0, [r0, #0]	@ 00030a9e 0078
.org 0x30aa0
	orrs r0, r1	@ 00030aa0 0843
.org 0x30aa2
	movs r1, #128	@ 00030aa2 8021
.org 0x30aa4
	lsls r1, r1, #2	@ 00030aa4 8900
.org 0x30aa6
	cmp r0, r1	@ 00030aa6 8842
.org 0x30aa8
	bne.n 0x30ab8	@ 00030aa8 06d1
.org 0x30aaa
	adds r0, r4, #0	@ 00030aaa 201c
.org 0x30aac
	adds r0, #114	@ 00030aac 7230
.org 0x30aae
	ldrb r0, [r0, #0]	@ 00030aae 0078
.org 0x30ab0
	lsls r0, r0, #24	@ 00030ab0 0006
.org 0x30ab2
	asrs r0, r0, #24	@ 00030ab2 0016
.org 0x30ab4
	cmp r0, #1	@ 00030ab4 0128
.org 0x30ab6
	bgt.n 0x30abc	@ 00030ab6 01dc
.org 0x30ab8
	movs r0, #2	@ 00030ab8 0220
.org 0x30aba
	strb r0, [r4, #15]	@ 00030aba e073
.org 0x30abc
	movs r1, #150	@ 00030abc 9621
.org 0x30abe
	lsls r1, r1, #2	@ 00030abe 8900
.org 0x30ac0
	adds r0, r4, r1	@ 00030ac0 6018
.org 0x30ac2
	ldr r1, [r0, #0]	@ 00030ac2 0168
.org 0x30ac4
	movs r3, #32	@ 00030ac4 2023
.org 0x30ac6
	adds r0, r1, #0	@ 00030ac6 081c
.org 0x30ac8
	ands r0, r3	@ 00030ac8 1840
.org 0x30aca
	cmp r0, #0	@ 00030aca 0028
.org 0x30acc
	beq.n 0x30b2c	@ 00030acc 2ed0
.org 0x30ace
	adds r1, r4, #0	@ 00030ace 211c
.org 0x30ad0
	adds r1, #76	@ 00030ad0 4c31
.org 0x30ad2
	movs r0, #0	@ 00030ad2 0020
.org 0x30ad4
	strb r0, [r1, #0]	@ 00030ad4 0870
.org 0x30ad6
	adds r2, r4, #0	@ 00030ad6 221c
.org 0x30ad8
	adds r2, #74	@ 00030ad8 4a32
.org 0x30ada
	ldrb r1, [r2, #0]	@ 00030ada 1178
.org 0x30adc
	subs r0, #17	@ 00030adc 1138
.org 0x30ade
	ands r0, r1	@ 00030ade 0840
.org 0x30ae0
	strb r0, [r2, #0]	@ 00030ae0 1070
.org 0x30ae2
	ldrb r1, [r4, #10]	@ 00030ae2 a17a
.org 0x30ae4
	movs r0, #239	@ 00030ae4 ef20
.org 0x30ae6
	ands r0, r1	@ 00030ae6 0840
.org 0x30ae8
	strb r0, [r4, #10]	@ 00030ae8 a072
.org 0x30aea
	movs r1, #161	@ 00030aea a121
.org 0x30aec
	lsls r1, r1, #1	@ 00030aec 4900
.org 0x30aee
	adds r0, r4, r1	@ 00030aee 6018
.org 0x30af0
	ldrb r1, [r0, #0]	@ 00030af0 0178
.org 0x30af2
	adds r0, r3, #0	@ 00030af2 181c
.org 0x30af4
	ands r0, r1	@ 00030af4 0840
.org 0x30af6
	cmp r0, #0	@ 00030af6 0028
.org 0x30af8
	beq.n 0x30b1e	@ 00030af8 11d0
.org 0x30afa
	ldr r0, [r4, #92]	@ 00030afa e06d
.org 0x30afc
	subs r0, #64	@ 00030afc 4038
.org 0x30afe
	str r0, [r4, #92]	@ 00030afe e065
.org 0x30b00
	adds r0, r4, #0	@ 00030b00 201c
.org 0x30b02
	bl 0x38740	@ 00030b02 07f01dfe
.org 0x30b06
	lsls r0, r0, #16	@ 00030b06 0004
.org 0x30b08
	asrs r0, r0, #16	@ 00030b08 0014
.org 0x30b0a
	ldr r1, [r4, #92]	@ 00030b0a e16d
.org 0x30b0c
	cmn r1, r0	@ 00030b0c c142
.org 0x30b0e
	bge.n 0x30b80	@ 00030b0e 37da
.org 0x30b10
	adds r0, r4, #0	@ 00030b10 201c
.org 0x30b12
	bl 0x38740	@ 00030b12 07f015fe
.org 0x30b16
	lsls r0, r0, #16	@ 00030b16 0004
.org 0x30b18
	asrs r0, r0, #16	@ 00030b18 0014
.org 0x30b1a
	negs r0, r0	@ 00030b1a 4042
.org 0x30b1c
	b.n 0x30b7e	@ 00030b1c 2fe0
.org 0x30b1e
	adds r0, r4, #0	@ 00030b1e 201c
.org 0x30b20
	bl 0x38740	@ 00030b20 07f00efe
.org 0x30b24
	lsls r0, r0, #16	@ 00030b24 0004
.org 0x30b26
	asrs r0, r0, #16	@ 00030b26 0014
.org 0x30b28
	negs r0, r0	@ 00030b28 4042
.org 0x30b2a
	b.n 0x30b7e	@ 00030b2a 28e0
.org 0x30b2c
	movs r0, #16	@ 00030b2c 1020
.org 0x30b2e
	ands r1, r0	@ 00030b2e 0140
.org 0x30b30
	cmp r1, #0	@ 00030b30 0029
.org 0x30b32
	beq.n 0x30b80	@ 00030b32 25d0
.org 0x30b34
	adds r1, r4, #0	@ 00030b34 211c
.org 0x30b36
	adds r1, #76	@ 00030b36 4c31
.org 0x30b38
	movs r0, #1	@ 00030b38 0120
.org 0x30b3a
	strb r0, [r1, #0]	@ 00030b3a 0870
.org 0x30b3c
	adds r2, r4, #0	@ 00030b3c 221c
.org 0x30b3e
	adds r2, #74	@ 00030b3e 4a32
.org 0x30b40
	ldrb r0, [r2, #0]	@ 00030b40 1078
.org 0x30b42
	movs r1, #16	@ 00030b42 1021
.org 0x30b44
	orrs r0, r1	@ 00030b44 0843
.org 0x30b46
	strb r0, [r2, #0]	@ 00030b46 1070
.org 0x30b48
	ldrb r0, [r4, #10]	@ 00030b48 a07a
.org 0x30b4a
	orrs r1, r0	@ 00030b4a 0143
.org 0x30b4c
	strb r1, [r4, #10]	@ 00030b4c a172
.org 0x30b4e
	movs r1, #161	@ 00030b4e a121
.org 0x30b50
	lsls r1, r1, #1	@ 00030b50 4900
.org 0x30b52
	adds r0, r4, r1	@ 00030b52 6018
.org 0x30b54
	ldrb r1, [r0, #0]	@ 00030b54 0178
.org 0x30b56
	adds r0, r3, #0	@ 00030b56 181c
.org 0x30b58
	ands r0, r1	@ 00030b58 0840
.org 0x30b5a
	cmp r0, #0	@ 00030b5a 0028
.org 0x30b5c
	beq.n 0x30b74	@ 00030b5c 0ad0
.org 0x30b5e
	ldr r0, [r4, #92]	@ 00030b5e e06d
.org 0x30b60
	adds r0, #64	@ 00030b60 4030
.org 0x30b62
	str r0, [r4, #92]	@ 00030b62 e065
.org 0x30b64
	adds r0, r4, #0	@ 00030b64 201c
.org 0x30b66
	bl 0x38740	@ 00030b66 07f0ebfd
.org 0x30b6a
	lsls r0, r0, #16	@ 00030b6a 0004
.org 0x30b6c
	asrs r0, r0, #16	@ 00030b6c 0014
.org 0x30b6e
	ldr r1, [r4, #92]	@ 00030b6e e16d
.org 0x30b70
	cmp r1, r0	@ 00030b70 8142
.org 0x30b72
	ble.n 0x30b80	@ 00030b72 05dd
.org 0x30b74
	adds r0, r4, #0	@ 00030b74 201c
.org 0x30b76
	bl 0x38740	@ 00030b76 07f0e3fd
.org 0x30b7a
	lsls r0, r0, #16	@ 00030b7a 0004
.org 0x30b7c
	asrs r0, r0, #16	@ 00030b7c 0014
.org 0x30b7e
	str r0, [r4, #92]	@ 00030b7e e065
.org 0x30b80
	pop {r4}	@ 00030b80 10bc
.org 0x30b82
	pop {r0}	@ 00030b82 01bc
.org 0x30b84
	bx r0	@ 00030b84 0047

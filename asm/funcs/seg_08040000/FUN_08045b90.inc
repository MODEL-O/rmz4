@ FUN_08045b90  entry 0x08045b90  size 416
.thumb
.org 0x45b90
FUN_08045b90:
	push {r4, r5, r6, r7, lr}	@ 00045b90 f0b5
.org 0x45b92
	adds r4, r0, #0	@ 00045b92 041c
.org 0x45b94
	adds r1, r4, #0	@ 00045b94 211c
.org 0x45b96
	adds r1, #180	@ 00045b96 b431
.org 0x45b98
	adds r0, #188	@ 00045b98 bc30
.org 0x45b9a
	ldr r0, [r0, #0]	@ 00045b9a 0068
.org 0x45b9c
	str r0, [r1, #0]	@ 00045b9c 0860
.org 0x45b9e
	adds r1, #4	@ 00045b9e 0431
.org 0x45ba0
	adds r0, r4, #0	@ 00045ba0 201c
.org 0x45ba2
	adds r0, #192	@ 00045ba2 c030
.org 0x45ba4
	ldr r0, [r0, #0]	@ 00045ba4 0068
.org 0x45ba6
	str r0, [r1, #0]	@ 00045ba6 0860
.org 0x45ba8
	ldrb r0, [r4, #14]	@ 00045ba8 a07b
.org 0x45baa
	cmp r0, #1	@ 00045baa 0128
.org 0x45bac
	bhi.n 0x45bc2	@ 00045bac 09d8
.org 0x45bae
	cmp r0, #1	@ 00045bae 0128
.org 0x45bb0
	bne.n 0x45bbc	@ 00045bb0 04d1
.org 0x45bb2
	ldr r0, [r4, #44]	@ 00045bb2 e06a
.org 0x45bb4
	adds r1, r4, #0	@ 00045bb4 211c
.org 0x45bb6
	movs r2, #0	@ 00045bb6 0022
.org 0x45bb8
	bl 0x455c4	@ 00045bb8 fff704fd
.org 0x45bbc
	ldrb r0, [r4, #14]	@ 00045bbc a07b
.org 0x45bbe
	adds r0, #1	@ 00045bbe 0130
.org 0x45bc0
	strb r0, [r4, #14]	@ 00045bc0 a073
.org 0x45bc2
	ldrb r0, [r4, #13]	@ 00045bc2 607b
.org 0x45bc4
	cmp r0, #0	@ 00045bc4 0028
.org 0x45bc6
	bne.n 0x45cb4	@ 00045bc6 75d1
.org 0x45bc8
	movs r5, #0	@ 00045bc8 0025
.org 0x45bca
	adds r0, r4, #0	@ 00045bca 201c
.org 0x45bcc
	adds r0, #188	@ 00045bcc bc30
.org 0x45bce
	ldr r2, [r0, #0]	@ 00045bce 0268
.org 0x45bd0
	ldr r1, [r4, #92]	@ 00045bd0 e16d
.org 0x45bd2
	adds r2, r2, r1	@ 00045bd2 5218
.org 0x45bd4
	str r2, [r0, #0]	@ 00045bd4 0260
.org 0x45bd6
	ldr r3, [r4, #100]	@ 00045bd6 636e
.org 0x45bd8
	adds r7, r0, #0	@ 00045bd8 071c
.org 0x45bda
	cmp r3, #0	@ 00045bda 002b
.org 0x45bdc
	beq.n 0x45bf4	@ 00045bdc 0ad0
.org 0x45bde
	ldrb r1, [r4, #10]	@ 00045bde a17a
.org 0x45be0
	movs r0, #16	@ 00045be0 1020
.org 0x45be2
	ands r0, r1	@ 00045be2 0840
.org 0x45be4
	cmp r0, #0	@ 00045be4 0028
.org 0x45be6
	beq.n 0x45bee	@ 00045be6 02d0
.org 0x45be8
	cmp r2, r3	@ 00045be8 9a42
.org 0x45bea
	ble.n 0x45bf4	@ 00045bea 03dd
.org 0x45bec
	b.n 0x45bfc	@ 00045bec 06e0
.org 0x45bee
	cmp r2, r3	@ 00045bee 9a42
.org 0x45bf0
	bge.n 0x45bf4	@ 00045bf0 00da
.org 0x45bf2
	movs r5, #1	@ 00045bf2 0125
.org 0x45bf4
	adds r6, r4, #0	@ 00045bf4 261c
.org 0x45bf6
	adds r6, #192	@ 00045bf6 c036
.org 0x45bf8
	cmp r5, #0	@ 00045bf8 002d
.org 0x45bfa
	beq.n 0x45cc6	@ 00045bfa 64d0
.org 0x45bfc
	adds r0, r4, #0	@ 00045bfc 201c
.org 0x45bfe
	adds r0, #192	@ 00045bfe c030
.org 0x45c00
	ldr r2, [r0, #0]	@ 00045c00 0268
.org 0x45c02
	ldr r1, [r4, #104]	@ 00045c02 a16e
.org 0x45c04
	adds r6, r0, #0	@ 00045c04 061c
.org 0x45c06
	cmp r2, r1	@ 00045c06 8a42
.org 0x45c08
	ble.n 0x45c18	@ 00045c08 06dd
.org 0x45c0a
	ldr r0, [pc, #8]	@ 00045c0a 0248
.org 0x45c0c
	str r0, [r4, #96]	@ 00045c0c 2066
.org 0x45c0e
	adds r5, r4, #0	@ 00045c0e 251c
.org 0x45c10
	adds r5, #74	@ 00045c10 4a35
.org 0x45c12
	b.n 0x45c42	@ 00045c12 16e0
.org 0x45c14
	.byte 0x00,0xfa,0xff,0xff	@ 00045c14 data
.org 0x45c18
	movs r0, #192	@ 00045c18 c020
.org 0x45c1a
	lsls r0, r0, #3	@ 00045c1a c000
.org 0x45c1c
	str r0, [r4, #96]	@ 00045c1c 2066
.org 0x45c1e
	movs r2, #1	@ 00045c1e 0122
.org 0x45c20
	ldrb r1, [r4, #10]	@ 00045c20 a17a
.org 0x45c22
	movs r0, #32	@ 00045c22 2020
.org 0x45c24
	orrs r0, r1	@ 00045c24 0843
.org 0x45c26
	strb r0, [r4, #10]	@ 00045c26 a072
.org 0x45c28
	adds r0, r4, #0	@ 00045c28 201c
.org 0x45c2a
	adds r0, #77	@ 00045c2a 4d30
.org 0x45c2c
	strb r2, [r0, #0]	@ 00045c2c 0270
.org 0x45c2e
	adds r1, r4, #0	@ 00045c2e 211c
.org 0x45c30
	adds r1, #74	@ 00045c30 4a31
.org 0x45c32
	movs r3, #32	@ 00045c32 2023
.org 0x45c34
	ldrb r2, [r1, #0]	@ 00045c34 0a78
.org 0x45c36
	movs r0, #33	@ 00045c36 2120
.org 0x45c38
	negs r0, r0	@ 00045c38 4042
.org 0x45c3a
	ands r0, r2	@ 00045c3a 1040
.org 0x45c3c
	orrs r0, r3	@ 00045c3c 1843
.org 0x45c3e
	strb r0, [r1, #0]	@ 00045c3e 0870
.org 0x45c40
	adds r5, r1, #0	@ 00045c40 0d1c
.org 0x45c42
	ldr r1, [r4, #44]	@ 00045c42 e16a
.org 0x45c44
	movs r2, #0	@ 00045c44 0022
.org 0x45c46
	ldr r0, [r4, #92]	@ 00045c46 e06d
.org 0x45c48
	cmp r0, #0	@ 00045c48 0028
.org 0x45c4a
	ble.n 0x45c4e	@ 00045c4a 00dd
.org 0x45c4c
	movs r2, #1	@ 00045c4c 0122
.org 0x45c4e
	movs r3, #0	@ 00045c4e 0023
.org 0x45c50
	ldr r0, [r4, #96]	@ 00045c50 206e
.org 0x45c52
	cmp r0, #0	@ 00045c52 0028
.org 0x45c54
	ble.n 0x45c58	@ 00045c54 00dd
.org 0x45c56
	movs r3, #1	@ 00045c56 0123
.org 0x45c58
	adds r0, r1, #0	@ 00045c58 081c
.org 0x45c5a
	adds r1, r4, #0	@ 00045c5a 211c
.org 0x45c5c
	bl 0x45668	@ 00045c5c fff704fd
.org 0x45c60
	ldr r1, [pc, #76]	@ 00045c60 1349
.org 0x45c62
	adds r0, r4, #0	@ 00045c62 201c
.org 0x45c64
	adds r0, #113	@ 00045c64 7130
.org 0x45c66
	movs r2, #0	@ 00045c66 0022
.org 0x45c68
	ldrsb r2, [r0, r2]	@ 00045c68 8256
.org 0x45c6a
	lsls r2, r2, #16	@ 00045c6a 1204
.org 0x45c6c
	lsrs r2, r2, #16	@ 00045c6c 120c
.org 0x45c6e
	adds r0, #1	@ 00045c6e 0130
.org 0x45c70
	movs r3, #0	@ 00045c70 0023
.org 0x45c72
	ldrsb r3, [r0, r3]	@ 00045c72 c356
.org 0x45c74
	lsls r3, r3, #16	@ 00045c74 1b04
.org 0x45c76
	lsrs r3, r3, #16	@ 00045c76 1b0c
.org 0x45c78
	adds r0, r4, #0	@ 00045c78 201c
.org 0x45c7a
	bl 0x1cfc8	@ 00045c7a d7f7a5f9
.org 0x45c7e
	movs r2, #0	@ 00045c7e 0022
.org 0x45c80
	ldrb r1, [r4, #10]	@ 00045c80 a17a
.org 0x45c82
	movs r0, #239	@ 00045c82 ef20
.org 0x45c84
	ands r0, r1	@ 00045c84 0840
.org 0x45c86
	strb r0, [r4, #10]	@ 00045c86 a072
.org 0x45c88
	adds r0, r4, #0	@ 00045c88 201c
.org 0x45c8a
	adds r0, #76	@ 00045c8a 4c30
.org 0x45c8c
	strb r2, [r0, #0]	@ 00045c8c 0270
.org 0x45c8e
	ldrb r1, [r5, #0]	@ 00045c8e 2978
.org 0x45c90
	movs r0, #17	@ 00045c90 1120
.org 0x45c92
	negs r0, r0	@ 00045c92 4042
.org 0x45c94
	ands r0, r1	@ 00045c94 0840
.org 0x45c96
	strb r0, [r5, #0]	@ 00045c96 2870
.org 0x45c98
	str r2, [r4, #92]	@ 00045c98 e265
.org 0x45c9a
	ldr r0, [r6, #0]	@ 00045c9a 3068
.org 0x45c9c
	ldr r1, [r4, #96]	@ 00045c9c 216e
.org 0x45c9e
	adds r0, r0, r1	@ 00045c9e 4018
.org 0x45ca0
	str r0, [r6, #0]	@ 00045ca0 3060
.org 0x45ca2
	movs r0, #18	@ 00045ca2 1220
.org 0x45ca4
	bl 0x2b10	@ 00045ca4 bcf734ff
.org 0x45ca8
	ldrb r0, [r4, #13]	@ 00045ca8 607b
.org 0x45caa
	adds r0, #1	@ 00045caa 0130
.org 0x45cac
	strb r0, [r4, #13]	@ 00045cac 6073
.org 0x45cae
	b.n 0x45cc6	@ 00045cae 0ae0
.org 0x45cb0
	.byte 0x09,0x84,0x00,0x00	@ 00045cb0 data
.org 0x45cb4
	adds r0, r4, #0	@ 00045cb4 201c
.org 0x45cb6
	adds r0, #192	@ 00045cb6 c030
.org 0x45cb8
	ldr r1, [r0, #0]	@ 00045cb8 0168
.org 0x45cba
	ldr r2, [r4, #96]	@ 00045cba 226e
.org 0x45cbc
	adds r1, r1, r2	@ 00045cbc 8918
.org 0x45cbe
	str r1, [r0, #0]	@ 00045cbe 0160
.org 0x45cc0
	adds r7, r4, #0	@ 00045cc0 271c
.org 0x45cc2
	adds r7, #188	@ 00045cc2 bc37
.org 0x45cc4
	adds r6, r0, #0	@ 00045cc4 061c
.org 0x45cc6
	adds r0, r4, #0	@ 00045cc6 201c
.org 0x45cc8
	bl 0x1cff0	@ 00045cc8 d7f792f9
.org 0x45ccc
	ldr r1, [r7, #0]	@ 00045ccc 3968
.org 0x45cce
	ldrb r2, [r4, #10]	@ 00045cce a27a
.org 0x45cd0
	movs r0, #16	@ 00045cd0 1020
.org 0x45cd2
	ands r0, r2	@ 00045cd2 1040
.org 0x45cd4
	cmp r0, #0	@ 00045cd4 0028
.org 0x45cd6
	beq.n 0x45cdc	@ 00045cd6 01d0
.org 0x45cd8
	ldr r0, [pc, #92]	@ 00045cd8 1748
.org 0x45cda
	adds r1, r1, r0	@ 00045cda 0918
.org 0x45cdc
	str r1, [r4, #84]	@ 00045cdc 6165
.org 0x45cde
	ldr r1, [r6, #0]	@ 00045cde 3168
.org 0x45ce0
	movs r0, #32	@ 00045ce0 2020
.org 0x45ce2
	ands r0, r2	@ 00045ce2 1040
.org 0x45ce4
	cmp r0, #0	@ 00045ce4 0028
.org 0x45ce6
	beq.n 0x45cec	@ 00045ce6 01d0
.org 0x45ce8
	ldr r0, [pc, #76]	@ 00045ce8 1348
.org 0x45cea
	adds r1, r1, r0	@ 00045cea 0918
.org 0x45cec
	str r1, [r4, #88]	@ 00045cec a165
.org 0x45cee
	adds r0, r4, #0	@ 00045cee 201c
.org 0x45cf0
	movs r1, #3	@ 00045cf0 0321
.org 0x45cf2
	bl 0x3a99c	@ 00045cf2 f4f753fe
.org 0x45cf6
	lsls r0, r0, #24	@ 00045cf6 0006
.org 0x45cf8
	lsrs r5, r0, #24	@ 00045cf8 050e
.org 0x45cfa
	cmp r5, #0	@ 00045cfa 002d
.org 0x45cfc
	bne.n 0x45d0c	@ 00045cfc 06d1
.org 0x45cfe
	adds r0, r4, #0	@ 00045cfe 201c
.org 0x45d00
	adds r0, #140	@ 00045d00 8c30
.org 0x45d02
	ldr r0, [r0, #0]	@ 00045d02 0068
.org 0x45d04
	movs r1, #4	@ 00045d04 0421
.org 0x45d06
	ands r0, r1	@ 00045d06 0840
.org 0x45d08
	cmp r0, #0	@ 00045d08 0028
.org 0x45d0a
	beq.n 0x45d32	@ 00045d0a 12d0
.org 0x45d0c
	cmp r5, #255	@ 00045d0c ff2d
.org 0x45d0e
	beq.n 0x45d18	@ 00045d0e 03d0
.org 0x45d10
	ldr r0, [r4, #44]	@ 00045d10 e06a
.org 0x45d12
	adds r1, r4, #0	@ 00045d12 211c
.org 0x45d14
	bl 0x457a4	@ 00045d14 fff746fd
.org 0x45d18
	ldr r0, [r4, #84]	@ 00045d18 606d
.org 0x45d1a
	ldr r1, [r4, #92]	@ 00045d1a e16d
.org 0x45d1c
	subs r0, r0, r1	@ 00045d1c 401a
.org 0x45d1e
	str r0, [r4, #84]	@ 00045d1e 6065
.org 0x45d20
	ldr r1, [pc, #24]	@ 00045d20 0649
.org 0x45d22
	ldrb r0, [r4, #9]	@ 00045d22 607a
.org 0x45d24
	lsls r0, r0, #2	@ 00045d24 8000
.org 0x45d26
	adds r0, r0, r1	@ 00045d26 4018
.org 0x45d28
	movs r1, #2	@ 00045d28 0221
.org 0x45d2a
	str r1, [r4, #12]	@ 00045d2a e160
.org 0x45d2c
	ldr r0, [r0, #0]	@ 00045d2c 0068
.org 0x45d2e
	ldr r0, [r0, #8]	@ 00045d2e 8068

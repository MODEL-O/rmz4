@ FUN_08099b74  entry 0x08099b74  size 378
.thumb
.org 0x99b74
FUN_08099b74:
	push {r4, r5, r6, r7, lr}	@ 00099b74 f0b5
.org 0x99b76
	sub sp, #8	@ 00099b76 82b0
.org 0x99b78
	adds r6, r0, #0	@ 00099b78 061c
.org 0x99b7a
	ldrb r0, [r6, #15]	@ 00099b7a f07b
.org 0x99b7c
	cmp r0, #0	@ 00099b7c 0028
.org 0x99b7e
	bne.n 0x99be8	@ 00099b7e 33d1
.org 0x99b80
	adds r0, r6, #0	@ 00099b80 301c
.org 0x99b82
	bl 0x1cd28	@ 00099b82 83f7d1f8
.org 0x99b86
	ldr r1, [pc, #24]	@ 00099b86 0649
.org 0x99b88
	adds r0, r6, #0	@ 00099b88 301c
.org 0x99b8a
	bl 0x1cf00	@ 00099b8a 83f7b9f9
.org 0x99b8e
	adds r0, r6, #0	@ 00099b8e 301c
.org 0x99b90
	adds r0, #188	@ 00099b90 bc30
.org 0x99b92
	ldrb r2, [r0, #0]	@ 00099b92 0278
.org 0x99b94
	cmp r2, #0	@ 00099b94 002a
.org 0x99b96
	beq.n 0x99ba4	@ 00099b96 05d0
.org 0x99b98
	ldrb r1, [r6, #10]	@ 00099b98 b17a
.org 0x99b9a
	movs r0, #16	@ 00099b9a 1020
.org 0x99b9c
	orrs r0, r1	@ 00099b9c 0843
.org 0x99b9e
	b.n 0x99baa	@ 00099b9e 04e0
.org 0x99ba0
	.byte 0x06,0x69,0x00,0x00	@ 00099ba0 data
.org 0x99ba4
	ldrb r1, [r6, #10]	@ 00099ba4 b17a
.org 0x99ba6
	movs r0, #239	@ 00099ba6 ef20
.org 0x99ba8
	ands r0, r1	@ 00099ba8 0840
.org 0x99baa
	strb r0, [r6, #10]	@ 00099baa b072
.org 0x99bac
	movs r4, #1	@ 00099bac 0124
.org 0x99bae
	adds r1, r4, #0	@ 00099bae 211c
.org 0x99bb0
	ands r1, r2	@ 00099bb0 1140
.org 0x99bb2
	adds r0, r6, #0	@ 00099bb2 301c
.org 0x99bb4
	adds r0, #76	@ 00099bb4 4c30
.org 0x99bb6
	movs r5, #0	@ 00099bb6 0025
.org 0x99bb8
	strb r1, [r0, #0]	@ 00099bb8 0170
.org 0x99bba
	adds r3, r6, #0	@ 00099bba 331c
.org 0x99bbc
	adds r3, #74	@ 00099bbc 4a33
.org 0x99bbe
	lsls r1, r1, #4	@ 00099bbe 0901
.org 0x99bc0
	ldrb r2, [r3, #0]	@ 00099bc0 1a78
.org 0x99bc2
	movs r0, #17	@ 00099bc2 1120
.org 0x99bc4
	negs r0, r0	@ 00099bc4 4042
.org 0x99bc6
	ands r0, r2	@ 00099bc6 1040
.org 0x99bc8
	orrs r0, r1	@ 00099bc8 0843
.org 0x99bca
	strb r0, [r3, #0]	@ 00099bca 1870
.org 0x99bcc
	adds r0, r6, #0	@ 00099bcc 301c
.org 0x99bce
	adds r0, #84	@ 00099bce 5430
.org 0x99bd0
	ldrb r3, [r6, #10]	@ 00099bd0 b37a
.org 0x99bd2
	lsrs r3, r3, #4	@ 00099bd2 1b09
.org 0x99bd4
	ands r3, r4	@ 00099bd4 2340
.org 0x99bd6
	movs r1, #2	@ 00099bd6 0221
.org 0x99bd8
	movs r2, #0	@ 00099bd8 0022
.org 0x99bda
	bl 0xdd574	@ 00099bda 43f0cbfc
.org 0x99bde
	str r5, [r6, #96]	@ 00099bde 3566
.org 0x99be0
	strb r5, [r6, #18]	@ 00099be0 b574
.org 0x99be2
	ldrb r0, [r6, #15]	@ 00099be2 f07b
.org 0x99be4
	adds r0, #1	@ 00099be4 0130
.org 0x99be6
	strb r0, [r6, #15]	@ 00099be6 f073
.org 0x99be8
	adds r0, r6, #0	@ 00099be8 301c
.org 0x99bea
	bl 0x1cff0	@ 00099bea 83f701fa
.org 0x99bee
	ldrb r1, [r6, #18]	@ 00099bee b17c
.org 0x99bf0
	adds r0, r6, #0	@ 00099bf0 301c
.org 0x99bf2
	adds r0, #36	@ 00099bf2 2430
.org 0x99bf4
	strb r1, [r0, #0]	@ 00099bf4 0170
.org 0x99bf6
	ldrb r0, [r6, #18]	@ 00099bf6 b07c
.org 0x99bf8
	adds r0, #3	@ 00099bf8 0330
.org 0x99bfa
	strb r0, [r6, #18]	@ 00099bfa b074
.org 0x99bfc
	lsls r0, r0, #24	@ 00099bfc 0006
.org 0x99bfe
	lsrs r0, r0, #24	@ 00099bfe 000e
.org 0x99c00
	cmp r0, #34	@ 00099c00 2228
.org 0x99c02
	bls.n 0x99c08	@ 00099c02 01d9
.org 0x99c04
	movs r0, #34	@ 00099c04 2220
.org 0x99c06
	strb r0, [r6, #18]	@ 00099c06 b074
.org 0x99c08
	ldrb r0, [r6, #15]	@ 00099c08 f07b
.org 0x99c0a
	cmp r0, #1	@ 00099c0a 0128
.org 0x99c0c
	bne.n 0x99c36	@ 00099c0c 13d1
.org 0x99c0e
	ldr r0, [r6, #88]	@ 00099c0e b06d
.org 0x99c10
	ldr r1, [r6, #96]	@ 00099c10 316e
.org 0x99c12
	adds r0, r0, r1	@ 00099c12 4018
.org 0x99c14
	str r0, [r6, #88]	@ 00099c14 b065
.org 0x99c16
	adds r1, #64	@ 00099c16 4031
.org 0x99c18
	str r1, [r6, #96]	@ 00099c18 3166
.org 0x99c1a
	adds r4, r6, #0	@ 00099c1a 341c
.org 0x99c1c
	adds r4, #184	@ 00099c1c b834
.org 0x99c1e
	ldr r1, [r4, #0]	@ 00099c1e 2168
.org 0x99c20
	cmp r0, r1	@ 00099c20 8842
.org 0x99c22
	ble.n 0x99d00	@ 00099c22 6ddd
.org 0x99c24
	adds r0, r6, #0	@ 00099c24 301c
.org 0x99c26
	bl 0x1cff0	@ 00099c26 83f7e3f9
.org 0x99c2a
	ldr r0, [r4, #0]	@ 00099c2a 2068
.org 0x99c2c
	str r0, [r6, #88]	@ 00099c2c b065
.org 0x99c2e
	ldrb r0, [r6, #15]	@ 00099c2e f07b
.org 0x99c30
	adds r0, #1	@ 00099c30 0130
.org 0x99c32
	strb r0, [r6, #15]	@ 00099c32 f073
.org 0x99c34
	b.n 0x99d00	@ 00099c34 64e0
.org 0x99c36
	ldrb r0, [r6, #18]	@ 00099c36 b07c
.org 0x99c38
	cmp r0, #34	@ 00099c38 2228
.org 0x99c3a
	bne.n 0x99d00	@ 00099c3a 61d1
.org 0x99c3c
	ldrb r1, [r6, #10]	@ 00099c3c b17a
.org 0x99c3e
	movs r0, #16	@ 00099c3e 1020
.org 0x99c40
	ands r0, r1	@ 00099c40 0840
.org 0x99c42
	adds r4, r1, #0	@ 00099c42 0c1c
.org 0x99c44
	cmp r0, #0	@ 00099c44 0028
.org 0x99c46
	beq.n 0x99c54	@ 00099c46 05d0
.org 0x99c48
	ldr r0, [r6, #84]	@ 00099c48 706d
.org 0x99c4a
	ldr r1, [pc, #4]	@ 00099c4a 0149
.org 0x99c4c
	b.n 0x99c5a	@ 00099c4c 05e0
.org 0x99c4e
	.byte 0x00	@ 00099c4e data
.org 0x99c4f
	.byte 0x00	@ 00099c4f data
.org 0x99c50
	.byte 0x00,0xf0,0xff,0xff	@ 00099c50 data
.org 0x99c54
	ldr r0, [r6, #84]	@ 00099c54 706d
.org 0x99c56
	movs r1, #128	@ 00099c56 8021
.org 0x99c58
	lsls r1, r1, #5	@ 00099c58 4901
.org 0x99c5a
	adds r0, r0, r1	@ 00099c5a 4018
.org 0x99c5c
	str r0, [sp, #0]	@ 00099c5c 0090
.org 0x99c5e
	ldr r0, [r6, #88]	@ 00099c5e b06d
.org 0x99c60
	ldr r1, [pc, #28]	@ 00099c60 0749
.org 0x99c62
	adds r0, r0, r1	@ 00099c62 4018
.org 0x99c64
	str r0, [sp, #4]	@ 00099c64 0190
.org 0x99c66
	ldr r7, [pc, #28]	@ 00099c66 074f
.org 0x99c68
	adds r1, r6, #0	@ 00099c68 311c
.org 0x99c6a
	adds r1, #188	@ 00099c6a bc31
.org 0x99c6c
	ldrb r2, [r1, #0]	@ 00099c6c 0a78
.org 0x99c6e
	movs r3, #16	@ 00099c6e 1023
.org 0x99c70
	adds r0, r3, #0	@ 00099c70 181c
.org 0x99c72
	ands r0, r4	@ 00099c72 2040
.org 0x99c74
	adds r5, r1, #0	@ 00099c74 0d1c
.org 0x99c76
	cmp r0, #0	@ 00099c76 0028
.org 0x99c78
	beq.n 0x99c88	@ 00099c78 06d0
.org 0x99c7a
	orrs r3, r2	@ 00099c7a 1343
.org 0x99c7c
	b.n 0x99c8a	@ 00099c7c 05e0
.org 0x99c7e
	.byte 0x00	@ 00099c7e data
.org 0x99c7f
	.byte 0x00	@ 00099c7f data
.org 0x99c80
	.byte 0x00,0xfc,0xff,0xff	@ 00099c80 data
.org 0x99c84
	.byte 0xfc,0x0d,0x86,0x08	@ 00099c84 data
.org 0x99c88
	adds r3, r2, #0	@ 00099c88 131c
.org 0x99c8a
	mov r0, sp	@ 00099c8a 6846
.org 0x99c8c
	adds r1, r7, #0	@ 00099c8c 391c
.org 0x99c8e
	movs r2, #0	@ 00099c8e 0022
.org 0x99c90
	bl 0xd4c8c	@ 00099c90 3af0fcff
.org 0x99c94
	mov r4, sp	@ 00099c94 6c46
.org 0x99c96
	ldr r7, [pc, #20]	@ 00099c96 054f
.org 0x99c98
	ldrb r2, [r5, #0]	@ 00099c98 2a78
.org 0x99c9a
	ldrb r1, [r6, #10]	@ 00099c9a b17a
.org 0x99c9c
	movs r3, #16	@ 00099c9c 1023
.org 0x99c9e
	adds r0, r3, #0	@ 00099c9e 181c
.org 0x99ca0
	ands r0, r1	@ 00099ca0 0840
.org 0x99ca2
	cmp r0, #0	@ 00099ca2 0028
.org 0x99ca4
	beq.n 0x99cb0	@ 00099ca4 04d0
.org 0x99ca6
	orrs r3, r2	@ 00099ca6 1343
.org 0x99ca8
	b.n 0x99cb2	@ 00099ca8 03e0
.org 0x99caa
	.byte 0x00	@ 00099caa data
.org 0x99cab
	.byte 0x00	@ 00099cab data
.org 0x99cac
	.byte 0x18,0x0e,0x86,0x08	@ 00099cac data
.org 0x99cb0
	adds r3, r2, #0	@ 00099cb0 131c
.org 0x99cb2
	adds r0, r4, #0	@ 00099cb2 201c
.org 0x99cb4
	adds r1, r7, #0	@ 00099cb4 391c
.org 0x99cb6
	movs r2, #0	@ 00099cb6 0022
.org 0x99cb8
	bl 0xd4c8c	@ 00099cb8 3af0e8ff
.org 0x99cbc
	movs r0, #1	@ 00099cbc 0120
.org 0x99cbe
	mov r1, sp	@ 00099cbe 6946
.org 0x99cc0
	bl 0xd0c88	@ 00099cc0 36f0e2ff
.org 0x99cc4
	movs r0, #42	@ 00099cc4 2a20
.org 0x99cc6
	bl 0x2b10	@ 00099cc6 68f723ff
.org 0x99cca
	adds r4, r6, #0	@ 00099cca 341c
.org 0x99ccc
	adds r4, #84	@ 00099ccc 5434
.org 0x99cce
	movs r0, #3	@ 00099cce 0320
.org 0x99cd0
	movs r1, #44	@ 00099cd0 2c21
.org 0x99cd2
	adds r2, r4, #0	@ 00099cd2 221c
.org 0x99cd4
	bl 0x2ab88	@ 00099cd4 90f758ff
.org 0x99cd8
	ldr r2, [pc, #44]	@ 00099cd8 0b4a
.org 0x99cda
	ldrh r1, [r2, #12]	@ 00099cda 9189
.org 0x99cdc
	ldr r0, [pc, #44]	@ 00099cdc 0b48
.org 0x99cde
	cmp r1, r0	@ 00099cde 8142
.org 0x99ce0
	bhi.n 0x99ce6	@ 00099ce0 01d8
.org 0x99ce2
	adds r0, r1, #1	@ 00099ce2 481c
.org 0x99ce4
	strh r0, [r2, #12]	@ 00099ce4 9081
.org 0x99ce6
	adds r0, r6, #0	@ 00099ce6 301c
.org 0x99ce8
	adds r1, r4, #0	@ 00099ce8 211c
.org 0x99cea
	bl 0x2abe0	@ 00099cea 90f779ff

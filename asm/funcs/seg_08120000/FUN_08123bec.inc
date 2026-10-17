@ FUN_08123bec  entry 0x08123bec  size 138
.thumb
.org 0x123bec
FUN_08123bec:
	push {r4, r5, lr}	@ 00123bec 30b5
.org 0x123bee
	adds r5, r0, #0	@ 00123bee 051c
.org 0x123bf0
	ldr r0, [pc, #16]	@ 00123bf0 0448
.org 0x123bf2
	adds r4, r5, r0	@ 00123bf2 2c18
.org 0x123bf4
	ldrb r0, [r4, #25]	@ 00123bf4 607e
.org 0x123bf6
	cmp r0, #1	@ 00123bf6 0128
.org 0x123bf8
	beq.n 0x123c1c	@ 00123bf8 10d0
.org 0x123bfa
	cmp r0, #1	@ 00123bfa 0128
.org 0x123bfc
	bgt.n 0x123c08	@ 00123bfc 04dc
.org 0x123bfe
	cmp r0, #0	@ 00123bfe 0028
.org 0x123c00
	beq.n 0x123c12	@ 00123c00 07d0
.org 0x123c02
	b.n 0x123c68	@ 00123c02 31e0
.org 0x123c04
	.byte 0xcc,0x0d,0x00,0x00	@ 00123c04 data
.org 0x123c08
	cmp r0, #2	@ 00123c08 0228
.org 0x123c0a
	beq.n 0x123c3c	@ 00123c0a 17d0
.org 0x123c0c
	cmp r0, #3	@ 00123c0c 0328
.org 0x123c0e
	beq.n 0x123c52	@ 00123c0e 20d0
.org 0x123c10
	b.n 0x123c68	@ 00123c10 2ae0
.org 0x123c12
	movs r0, #60	@ 00123c12 3c20
.org 0x123c14
	strb r0, [r4, #28]	@ 00123c14 2077
.org 0x123c16
	ldrb r0, [r4, #25]	@ 00123c16 607e
.org 0x123c18
	adds r0, #1	@ 00123c18 0130
.org 0x123c1a
	strb r0, [r4, #25]	@ 00123c1a 6076
.org 0x123c1c
	ldr r0, [pc, #24]	@ 00123c1c 0648
.org 0x123c1e
	adds r1, r5, r0	@ 00123c1e 2918
.org 0x123c20
	ldrb r0, [r1, #28]	@ 00123c20 087f
.org 0x123c22
	subs r0, #1	@ 00123c22 0138
.org 0x123c24
	strb r0, [r1, #28]	@ 00123c24 0877
.org 0x123c26
	lsls r0, r0, #24	@ 00123c26 0006
.org 0x123c28
	lsrs r0, r0, #24	@ 00123c28 000e
.org 0x123c2a
	cmp r0, #255	@ 00123c2a ff28
.org 0x123c2c
	bne.n 0x123c68	@ 00123c2c 1cd1
.org 0x123c2e
	ldrb r0, [r1, #25]	@ 00123c2e 487e
.org 0x123c30
	adds r0, #1	@ 00123c30 0130
.org 0x123c32
	strb r0, [r1, #25]	@ 00123c32 4876
.org 0x123c34
	b.n 0x123c68	@ 00123c34 18e0
.org 0x123c36
	.byte 0x00	@ 00123c36 data
.org 0x123c37
	.byte 0x00	@ 00123c37 data
.org 0x123c38
	.byte 0xcc,0x0d,0x00,0x00	@ 00123c38 data
.org 0x123c3c
	movs r0, #0	@ 00123c3c 0020
.org 0x123c3e
	bl 0xd3ebc	@ 00123c3e b0f73df9
.org 0x123c42
	str r0, [r4, #4]	@ 00123c42 6060
.org 0x123c44
	movs r0, #30	@ 00123c44 1e20
.org 0x123c46
	bl 0x2b10	@ 00123c46 def663ff
.org 0x123c4a
	ldrb r0, [r4, #25]	@ 00123c4a 607e
.org 0x123c4c
	adds r0, #1	@ 00123c4c 0130
.org 0x123c4e
	strb r0, [r4, #25]	@ 00123c4e 6076
.org 0x123c50
	b.n 0x123c68	@ 00123c50 0ae0
.org 0x123c52
	ldr r0, [r4, #4]	@ 00123c52 6068
.org 0x123c54
	ldrb r0, [r0, #12]	@ 00123c54 007b
.org 0x123c56
	cmp r0, #1	@ 00123c56 0128
.org 0x123c58
	bls.n 0x123c68	@ 00123c58 06d9
.org 0x123c5a
	movs r0, #1	@ 00123c5a 0120
.org 0x123c5c
	str r0, [r4, #60]	@ 00123c5c e063
.org 0x123c5e
	ldrb r0, [r4, #24]	@ 00123c5e 207e
.org 0x123c60
	adds r0, #1	@ 00123c60 0130
.org 0x123c62
	movs r1, #0	@ 00123c62 0021
.org 0x123c64
	strb r0, [r4, #24]	@ 00123c64 2076
.org 0x123c66
	strb r1, [r4, #25]	@ 00123c66 6176
.org 0x123c68
	ldr r1, [pc, #20]	@ 00123c68 0549
.org 0x123c6a
	adds r0, r5, r1	@ 00123c6a 6818
.org 0x123c6c
	ldr r0, [r0, #0]	@ 00123c6c 0068
.org 0x123c6e
	movs r1, #149	@ 00123c6e 9521
.org 0x123c70
	lsls r1, r1, #2	@ 00123c70 8900
.org 0x123c72
	adds r0, r0, r1	@ 00123c72 4018
.org 0x123c74
	movs r1, #1	@ 00123c74 0121

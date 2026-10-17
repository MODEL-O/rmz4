@ FUN_080a3bec  entry 0x080a3bec  size 148
.thumb
.org 0xa3bec
FUN_080a3bec:
	push {r4, r5, lr}	@ 000a3bec 30b5
.org 0xa3bee
	adds r4, r0, #0	@ 000a3bee 041c
.org 0xa3bf0
	adds r0, #140	@ 000a3bf0 8c30
.org 0xa3bf2
	ldr r2, [r0, #0]	@ 000a3bf2 0268
.org 0xa3bf4
	movs r0, #128	@ 000a3bf4 8020
.org 0xa3bf6
	lsls r0, r0, #2	@ 000a3bf6 8000
.org 0xa3bf8
	ands r0, r2	@ 000a3bf8 1040
.org 0xa3bfa
	cmp r0, #0	@ 000a3bfa 0028
.org 0xa3bfc
	beq.n 0xa3c1c	@ 000a3bfc 0ed0
.org 0xa3bfe
	ldr r1, [pc, #24]	@ 000a3bfe 0649
.org 0xa3c00
	ldrb r0, [r4, #9]	@ 000a3c00 607a
.org 0xa3c02
	lsls r0, r0, #2	@ 000a3c02 8000
.org 0xa3c04
	adds r0, r0, r1	@ 000a3c04 4018
.org 0xa3c06
	movs r1, #2	@ 000a3c06 0221
.org 0xa3c08
	str r1, [r4, #12]	@ 000a3c08 e160
.org 0xa3c0a
	ldr r0, [r0, #0]	@ 000a3c0a 0068
.org 0xa3c0c
	ldr r0, [r0, #8]	@ 000a3c0c 8068
.org 0xa3c0e
	str r0, [r4, #20]	@ 000a3c0e 6061
.org 0xa3c10
	adds r0, r4, #0	@ 000a3c10 201c
.org 0xa3c12
	bl 0xa3c94	@ 000a3c12 00f03ff8
.org 0xa3c16
	b.n 0xa3c7e	@ 000a3c16 32e0
.org 0xa3c18
	.byte 0x40,0xdb,0x85,0x08	@ 000a3c18 data
.org 0xa3c1c
	adds r0, r4, #0	@ 000a3c1c 201c
.org 0xa3c1e
	adds r0, #192	@ 000a3c1e c030
.org 0xa3c20
	ldr r1, [r0, #0]	@ 000a3c20 0168
.org 0xa3c22
	adds r5, r0, #0	@ 000a3c22 051c
.org 0xa3c24
	cmp r1, #0	@ 000a3c24 0029
.org 0xa3c26
	bne.n 0xa3c50	@ 000a3c26 13d1
.org 0xa3c28
	movs r0, #1	@ 000a3c28 0120
.org 0xa3c2a
	ands r2, r0	@ 000a3c2a 0240
.org 0xa3c2c
	cmp r2, #0	@ 000a3c2c 002a
.org 0xa3c2e
	beq.n 0xa3c4a	@ 000a3c2e 0cd0
.org 0xa3c30
	ldr r2, [pc, #80]	@ 000a3c30 144a
.org 0xa3c32
	movs r0, #0	@ 000a3c32 0020
.org 0xa3c34
	adds r1, r4, #0	@ 000a3c34 211c
.org 0xa3c36
	bl 0x2adac	@ 000a3c36 87f7b9f8
.org 0xa3c3a
	str r0, [r5, #0]	@ 000a3c3a 2860
.org 0xa3c3c
	cmp r0, #0	@ 000a3c3c 0028
.org 0xa3c3e
	beq.n 0xa3c68	@ 000a3c3e 13d0
.org 0xa3c40
	adds r0, r4, #0	@ 000a3c40 201c
.org 0xa3c42
	adds r0, #116	@ 000a3c42 7430
.org 0xa3c44
	ldr r1, [pc, #64]	@ 000a3c44 1049
.org 0xa3c46
	bl 0x5784	@ 000a3c46 61f79dfd
.org 0xa3c4a
	ldr r0, [r5, #0]	@ 000a3c4a 2868
.org 0xa3c4c
	cmp r0, #0	@ 000a3c4c 0028
.org 0xa3c4e
	beq.n 0xa3c68	@ 000a3c4e 0bd0
.org 0xa3c50
	ldr r0, [r5, #0]	@ 000a3c50 2868
.org 0xa3c52
	bl 0x2b3e4	@ 000a3c52 87f7c7fb
.org 0xa3c56
	cmp r0, #0	@ 000a3c56 0028
.org 0xa3c58
	beq.n 0xa3c68	@ 000a3c58 06d0
.org 0xa3c5a
	adds r0, r4, #0	@ 000a3c5a 201c
.org 0xa3c5c
	adds r0, #116	@ 000a3c5c 7430
.org 0xa3c5e
	ldr r1, [pc, #44]	@ 000a3c5e 0b49
.org 0xa3c60
	bl 0x5784	@ 000a3c60 61f790fd
.org 0xa3c64
	movs r0, #0	@ 000a3c64 0020
.org 0xa3c66
	str r0, [r5, #0]	@ 000a3c66 2860
.org 0xa3c68
	adds r0, r4, #0	@ 000a3c68 201c
.org 0xa3c6a
	bl 0x1cff0	@ 000a3c6a 79f7c1f9
.org 0xa3c6e
	ldr r0, [pc, #32]	@ 000a3c6e 0848
.org 0xa3c70
	ldrb r1, [r4, #13]	@ 000a3c70 617b
.org 0xa3c72
	lsls r1, r1, #2	@ 000a3c72 8900
.org 0xa3c74
	adds r1, r1, r0	@ 000a3c74 0918
.org 0xa3c76
	ldr r1, [r1, #0]	@ 000a3c76 0968
.org 0xa3c78
	adds r0, r4, #0	@ 000a3c78 201c
.org 0xa3c7a
	bl 0x128f80	@ 000a3c7a 85f081f9
.org 0xa3c7e
	pop {r4, r5}	@ 000a3c7e 30bc

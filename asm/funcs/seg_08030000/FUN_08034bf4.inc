@ FUN_08034bf4  entry 0x08034bf4  size 156
.thumb
.org 0x34bf4
FUN_08034bf4:
	push {r4, lr}	@ 00034bf4 10b5
.org 0x34bf6
	adds r4, r0, #0	@ 00034bf6 041c
.org 0x34bf8
	adds r0, #180	@ 00034bf8 b430
.org 0x34bfa
	ldrb r0, [r0, #12]	@ 00034bfa 007b
.org 0x34bfc
	cmp r0, #0	@ 00034bfc 0028
.org 0x34bfe
	bne.n 0x34c10	@ 00034bfe 07d1
.org 0x34c00
	ldr r0, [pc, #8]	@ 00034c00 0248
.org 0x34c02
	adds r2, r4, r0	@ 00034c02 2218
.org 0x34c04
	ldrb r0, [r2, #0]	@ 00034c04 1078
.org 0x34c06
	movs r1, #16	@ 00034c06 1021
.org 0x34c08
	b.n 0x34c18	@ 00034c08 06e0
.org 0x34c0a
	.byte 0x00	@ 00034c0a data
.org 0x34c0b
	.byte 0x00	@ 00034c0b data
.org 0x34c0c
	.byte 0x53,0x01,0x00,0x00	@ 00034c0c data
.org 0x34c10
	ldr r1, [pc, #64]	@ 00034c10 1049
.org 0x34c12
	adds r2, r4, r1	@ 00034c12 6218
.org 0x34c14
	ldrb r0, [r2, #0]	@ 00034c14 1078
.org 0x34c16
	movs r1, #32	@ 00034c16 2021
.org 0x34c18
	orrs r0, r1	@ 00034c18 0843
.org 0x34c1a
	strb r0, [r2, #0]	@ 00034c1a 1070
.org 0x34c1c
	ldrb r0, [r4, #30]	@ 00034c1c a07f
.org 0x34c1e
	lsls r0, r0, #8	@ 00034c1e 0002
.org 0x34c20
	adds r1, r4, #0	@ 00034c20 211c
.org 0x34c22
	adds r1, #112	@ 00034c22 7031
.org 0x34c24
	ldrb r2, [r1, #0]	@ 00034c24 0a78
.org 0x34c26
	orrs r2, r0	@ 00034c26 0243
.org 0x34c28
	movs r1, #144	@ 00034c28 9021
.org 0x34c2a
	lsls r1, r1, #4	@ 00034c2a 0901
.org 0x34c2c
	cmp r2, r1	@ 00034c2c 8a42
.org 0x34c2e
	beq.n 0x34c66	@ 00034c2e 1ad0
.org 0x34c30
	ldr r0, [pc, #36]	@ 00034c30 0948
.org 0x34c32
	cmp r2, r0	@ 00034c32 8242
.org 0x34c34
	bne.n 0x34c5c	@ 00034c34 12d1
.org 0x34c36
	adds r0, r4, #0	@ 00034c36 201c
.org 0x34c38
	adds r0, #113	@ 00034c38 7130
.org 0x34c3a
	movs r2, #0	@ 00034c3a 0022
.org 0x34c3c
	ldrsb r2, [r0, r2]	@ 00034c3c 8256
.org 0x34c3e
	lsls r2, r2, #16	@ 00034c3e 1204
.org 0x34c40
	lsrs r2, r2, #16	@ 00034c40 120c
.org 0x34c42
	adds r0, #1	@ 00034c42 0130
.org 0x34c44
	movs r3, #0	@ 00034c44 0023
.org 0x34c46
	ldrsb r3, [r0, r3]	@ 00034c46 c356
.org 0x34c48
	lsls r3, r3, #16	@ 00034c48 1b04
.org 0x34c4a
	lsrs r3, r3, #16	@ 00034c4a 1b0c
.org 0x34c4c
	adds r0, r4, #0	@ 00034c4c 201c
.org 0x34c4e
	bl 0x1cfc8	@ 00034c4e e8f7bbf9
.org 0x34c52
	b.n 0x34c66	@ 00034c52 08e0
.org 0x34c54
	.byte 0x53,0x01,0x00,0x00	@ 00034c54 data
.org 0x34c58
	.byte 0x01,0x09,0x00,0x00	@ 00034c58 data
.org 0x34c5c
	adds r0, r4, #0	@ 00034c5c 201c
.org 0x34c5e
	movs r2, #0	@ 00034c5e 0022
.org 0x34c60
	movs r3, #1	@ 00034c60 0123
.org 0x34c62
	bl 0x1cfc8	@ 00034c62 e8f7b1f9
.org 0x34c66
	movs r1, #170	@ 00034c66 aa21
.org 0x34c68
	lsls r1, r1, #1	@ 00034c68 4900
.org 0x34c6a
	adds r0, r4, r1	@ 00034c6a 6018
.org 0x34c6c
	ldrb r0, [r0, #0]	@ 00034c6c 0078
.org 0x34c6e
	cmp r0, #1	@ 00034c6e 0128
.org 0x34c70
	bne.n 0x34c98	@ 00034c70 12d1
.org 0x34c72
	ldr r1, [pc, #44]	@ 00034c72 0b49
.org 0x34c74
	adds r0, r4, #0	@ 00034c74 201c
.org 0x34c76
	adds r0, #113	@ 00034c76 7130
.org 0x34c78
	movs r2, #0	@ 00034c78 0022
.org 0x34c7a
	ldrsb r2, [r0, r2]	@ 00034c7a 8256
.org 0x34c7c
	lsls r2, r2, #16	@ 00034c7c 1204
.org 0x34c7e
	lsrs r2, r2, #16	@ 00034c7e 120c
.org 0x34c80
	adds r0, #1	@ 00034c80 0130
.org 0x34c82
	movs r3, #0	@ 00034c82 0023
.org 0x34c84
	ldrsb r3, [r0, r3]	@ 00034c84 c356
.org 0x34c86
	lsls r3, r3, #16	@ 00034c86 1b04
.org 0x34c88
	lsrs r3, r3, #16	@ 00034c88 1b0c
.org 0x34c8a
	adds r0, r4, #0	@ 00034c8a 201c
.org 0x34c8c
	bl 0x1cfc8	@ 00034c8c e8f79cf9

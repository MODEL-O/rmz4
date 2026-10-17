@ FUN_08087be4  entry 0x08087be4  size 176
.thumb
.org 0x87be4
FUN_08087be4:
	push {r4, r5, r6, lr}	@ 00087be4 70b5
.org 0x87be6
	sub sp, #8	@ 00087be6 82b0
.org 0x87be8
	adds r4, r0, #0	@ 00087be8 041c
.org 0x87bea
	ldrb r0, [r4, #15]	@ 00087bea e07b
.org 0x87bec
	cmp r0, #0	@ 00087bec 0028
.org 0x87bee
	bne.n 0x87c0c	@ 00087bee 0dd1
.org 0x87bf0
	adds r0, r4, #0	@ 00087bf0 201c
.org 0x87bf2
	adds r0, #116	@ 00087bf2 7430
.org 0x87bf4
	ldr r1, [pc, #144]	@ 00087bf4 2449
.org 0x87bf6
	bl 0x5784	@ 00087bf6 7df7c5fd
.org 0x87bfa
	ldr r1, [pc, #144]	@ 00087bfa 2449
.org 0x87bfc
	adds r0, r4, #0	@ 00087bfc 201c
.org 0x87bfe
	bl 0x1cf00	@ 00087bfe 95f77ff9
.org 0x87c02
	movs r0, #24	@ 00087c02 1820
.org 0x87c04
	strb r0, [r4, #18]	@ 00087c04 a074
.org 0x87c06
	ldrb r0, [r4, #15]	@ 00087c06 e07b
.org 0x87c08
	adds r0, #1	@ 00087c08 0130
.org 0x87c0a
	strb r0, [r4, #15]	@ 00087c0a e073
.org 0x87c0c
	adds r0, r4, #0	@ 00087c0c 201c
.org 0x87c0e
	bl 0x1cff0	@ 00087c0e 95f7eff9
.org 0x87c12
	ldrb r0, [r4, #18]	@ 00087c12 a07c
.org 0x87c14
	subs r0, #1	@ 00087c14 0138
.org 0x87c16
	strb r0, [r4, #18]	@ 00087c16 a074
.org 0x87c18
	movs r5, #255	@ 00087c18 ff25
.org 0x87c1a
	lsls r0, r0, #24	@ 00087c1a 0006
.org 0x87c1c
	cmp r0, #0	@ 00087c1c 0028
.org 0x87c1e
	bne.n 0x87cae	@ 00087c1e 46d1
.org 0x87c20
	movs r0, #44	@ 00087c20 2c20
.org 0x87c22
	bl 0x2b10	@ 00087c22 7af775ff
.org 0x87c26
	ldr r2, [r4, #84]	@ 00087c26 626d
.org 0x87c28
	str r2, [sp, #0]	@ 00087c28 0092
.org 0x87c2a
	ldr r3, [r4, #88]	@ 00087c2a a36d
.org 0x87c2c
	ldr r0, [pc, #96]	@ 00087c2c 1848
.org 0x87c2e
	adds r3, r3, r0	@ 00087c2e 1b18
.org 0x87c30
	str r3, [sp, #4]	@ 00087c30 0193
.org 0x87c32
	ldr r0, [pc, #96]	@ 00087c32 1848
.org 0x87c34
	ldr r1, [r0, #0]	@ 00087c34 0168
.org 0x87c36
	ldr r0, [r1, #84]	@ 00087c36 486d
.org 0x87c38
	ldr r1, [r1, #88]	@ 00087c38 896d
.org 0x87c3a
	ldr r6, [pc, #92]	@ 00087c3a 174e
.org 0x87c3c
	adds r1, r1, r6	@ 00087c3c 8919
.org 0x87c3e
	bl 0x10d398	@ 00087c3e 85f0abfb
.org 0x87c42
	adds r2, r0, #0	@ 00087c42 021c
.org 0x87c44
	lsls r2, r2, #24	@ 00087c44 1206
.org 0x87c46
	lsrs r2, r2, #24	@ 00087c46 120e
.org 0x87c48
	movs r1, #192	@ 00087c48 c021
.org 0x87c4a
	lsls r1, r1, #1	@ 00087c4a 4900
.org 0x87c4c
	mov r0, sp	@ 00087c4c 6846
.org 0x87c4e
	bl 0xbd43c	@ 00087c4e 35f0f5fb
.org 0x87c52
	adds r1, r4, #0	@ 00087c52 211c
.org 0x87c54
	adds r1, #180	@ 00087c54 b431
.org 0x87c56
	ldrb r0, [r1, #0]	@ 00087c56 0878
.org 0x87c58
	subs r0, #1	@ 00087c58 0138
.org 0x87c5a
	strb r0, [r1, #0]	@ 00087c5a 0870
.org 0x87c5c
	adds r1, r5, #0	@ 00087c5c 291c
.org 0x87c5e
	ands r1, r0	@ 00087c5e 0140
.org 0x87c60
	cmp r1, #0	@ 00087c60 0029
.org 0x87c62
	beq.n 0x87ca8	@ 00087c62 21d0
.org 0x87c64
	ldr r2, [pc, #52]	@ 00087c64 0d4a
.org 0x87c66
	ldr r1, [r2, #0]	@ 00087c66 1168
.org 0x87c68
	ldr r0, [pc, #52]	@ 00087c68 0d48
.org 0x87c6a
	muls r0, r1	@ 00087c6a 4843
.org 0x87c6c
	ldr r1, [pc, #52]	@ 00087c6c 0d49
.org 0x87c6e
	adds r0, r0, r1	@ 00087c6e 4018
.org 0x87c70
	lsls r0, r0, #1	@ 00087c70 4000
.org 0x87c72
	lsrs r1, r0, #1	@ 00087c72 4108
.org 0x87c74
	str r1, [r2, #0]	@ 00087c74 1160
.org 0x87c76
	lsrs r1, r0, #17	@ 00087c76 410c
.org 0x87c78
	movs r0, #1	@ 00087c78 0120
.org 0x87c7a
	ands r1, r0	@ 00087c7a 0140
.org 0x87c7c
	cmp r1, #0	@ 00087c7c 0029
.org 0x87c7e
	beq.n 0x87ca8	@ 00087c7e 13d0
.org 0x87c80
	movs r0, #24	@ 00087c80 1820
.org 0x87c82
	strb r0, [r4, #18]	@ 00087c82 a074
.org 0x87c84
	b.n 0x87cae	@ 00087c84 13e0
.org 0x87c86
	.byte 0x00	@ 00087c86 data
.org 0x87c87
	.byte 0x00	@ 00087c87 data
.org 0x87c88
	.byte 0x04,0xf0,0x85,0x08	@ 00087c88 data
.org 0x87c8c
	.byte 0x09,0x1d,0x00,0x00	@ 00087c8c data
.org 0x87c90
	.byte 0x00,0xf6,0xff,0xff	@ 00087c90 data

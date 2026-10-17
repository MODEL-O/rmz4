@ FUN_080f3c08  entry 0x080f3c08  size 144
.thumb
.org 0xf3c08
FUN_080f3c08:
	push {r4, r5, lr}	@ 000f3c08 30b5
.org 0xf3c0a
	ldr r4, [pc, #104]	@ 000f3c0a 1a4c
.org 0xf3c0c
	movs r1, #10	@ 000f3c0c 0a21
.org 0xf3c0e
	ldrsh r0, [r4, r1]	@ 000f3c0e 605e
.org 0xf3c10
	cmp r0, #0	@ 000f3c10 0028
.org 0xf3c12
	bne.n 0xf3c1a	@ 000f3c12 02d1
.org 0xf3c14
	movs r0, #128	@ 000f3c14 8020
.org 0xf3c16
	lsls r0, r0, #8	@ 000f3c16 0002
.org 0xf3c18
	strh r0, [r4, #10]	@ 000f3c18 6081
.org 0xf3c1a
	ldr r5, [pc, #92]	@ 000f3c1a 174d
.org 0xf3c1c
	ldrh r1, [r5, #6]	@ 000f3c1c e988
.org 0xf3c1e
	movs r0, #128	@ 000f3c1e 8020
.org 0xf3c20
	ands r0, r1	@ 000f3c20 0840
.org 0xf3c22
	cmp r0, #0	@ 000f3c22 0028
.org 0xf3c24
	beq.n 0xf3c3c	@ 000f3c24 0ad0
.org 0xf3c26
	movs r0, #1	@ 000f3c26 0120
.org 0xf3c28
	bl 0x2b10	@ 000f3c28 0ef772ff
.org 0xf3c2c
	ldrh r0, [r4, #10]	@ 000f3c2c 6089
.org 0xf3c2e
	adds r0, #1	@ 000f3c2e 0130
.org 0xf3c30
	movs r1, #1	@ 000f3c30 0121
.org 0xf3c32
	ands r0, r1	@ 000f3c32 0840
.org 0xf3c34
	ldr r2, [pc, #68]	@ 000f3c34 114a
.org 0xf3c36
	adds r1, r2, #0	@ 000f3c36 111c
.org 0xf3c38
	orrs r0, r1	@ 000f3c38 0843
.org 0xf3c3a
	strh r0, [r4, #10]	@ 000f3c3a 6081
.org 0xf3c3c
	ldrh r1, [r5, #6]	@ 000f3c3c e988
.org 0xf3c3e
	movs r0, #64	@ 000f3c3e 4020
.org 0xf3c40
	ands r0, r1	@ 000f3c40 0840
.org 0xf3c42
	cmp r0, #0	@ 000f3c42 0028
.org 0xf3c44
	beq.n 0xf3c5c	@ 000f3c44 0ad0
.org 0xf3c46
	movs r0, #1	@ 000f3c46 0120
.org 0xf3c48
	bl 0x2b10	@ 000f3c48 0ef762ff
.org 0xf3c4c
	ldrh r0, [r4, #10]	@ 000f3c4c 6089
.org 0xf3c4e
	adds r0, #1	@ 000f3c4e 0130
.org 0xf3c50
	movs r1, #1	@ 000f3c50 0121
.org 0xf3c52
	ands r0, r1	@ 000f3c52 0840
.org 0xf3c54
	ldr r2, [pc, #36]	@ 000f3c54 094a
.org 0xf3c56
	adds r1, r2, #0	@ 000f3c56 111c
.org 0xf3c58
	orrs r0, r1	@ 000f3c58 0843
.org 0xf3c5a
	strh r0, [r4, #10]	@ 000f3c5a 6081
.org 0xf3c5c
	ldrh r1, [r5, #4]	@ 000f3c5c a988
.org 0xf3c5e
	movs r0, #2	@ 000f3c5e 0220
.org 0xf3c60
	ands r0, r1	@ 000f3c60 0840
.org 0xf3c62
	cmp r0, #0	@ 000f3c62 0028
.org 0xf3c64
	beq.n 0xf3c80	@ 000f3c64 0cd0
.org 0xf3c66
	movs r0, #3	@ 000f3c66 0320
.org 0xf3c68
	bl 0x2b10	@ 000f3c68 0ef752ff
.org 0xf3c6c
	movs r0, #2	@ 000f3c6c 0220
.org 0xf3c6e
	negs r0, r0	@ 000f3c6e 4042
.org 0xf3c70
	b.n 0xf3ca0	@ 000f3c70 16e0
.org 0xf3c72
	.byte 0x00	@ 000f3c72 data
.org 0xf3c73
	.byte 0x00	@ 000f3c73 data
.org 0xf3c74
	.byte 0x10,0xf6,0x02,0x02	@ 000f3c74 data
.org 0xf3c78
	.byte 0x60,0x07,0x00,0x02	@ 000f3c78 data
.org 0xf3c7c
	.byte 0x00,0x80,0xff,0xff	@ 000f3c7c data
.org 0xf3c80
	movs r0, #1	@ 000f3c80 0120
.org 0xf3c82
	ands r0, r1	@ 000f3c82 0840
.org 0xf3c84
	cmp r0, #0	@ 000f3c84 0028
.org 0xf3c86
	beq.n 0xf3c9e	@ 000f3c86 0ad0
.org 0xf3c88
	movs r0, #2	@ 000f3c88 0220
.org 0xf3c8a
	bl 0x2b10	@ 000f3c8a 0ef741ff
.org 0xf3c8e
	ldrb r0, [r4, #10]	@ 000f3c8e a07a
.org 0xf3c90
	cmp r0, #0	@ 000f3c90 0028
.org 0xf3c92
	bne.n 0xf3c98	@ 000f3c92 01d1
.org 0xf3c94
	movs r0, #1	@ 000f3c94 0120
.org 0xf3c96
	b.n 0xf3ca0	@ 000f3c96 03e0

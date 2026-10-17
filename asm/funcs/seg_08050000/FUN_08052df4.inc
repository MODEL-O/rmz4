@ FUN_08052df4  entry 0x08052df4  size 160
.thumb
.org 0x52df4
FUN_08052df4:
	push {r4, lr}	@ 00052df4 10b5
.org 0x52df6
	adds r4, r0, #0	@ 00052df6 041c
.org 0x52df8
	ldrb r0, [r4, #14]	@ 00052df8 a07b
.org 0x52dfa
	cmp r0, #0	@ 00052dfa 0028
.org 0x52dfc
	bne.n 0x52e6e	@ 00052dfc 37d1
.org 0x52dfe
	ldr r1, [pc, #84]	@ 00052dfe 1549
.org 0x52e00
	adds r0, r4, #0	@ 00052e00 201c
.org 0x52e02
	bl 0x1cf00	@ 00052e02 caf77df8
.org 0x52e06
	adds r0, r4, #0	@ 00052e06 201c
.org 0x52e08
	adds r0, #116	@ 00052e08 7430
.org 0x52e0a
	ldr r1, [pc, #76]	@ 00052e0a 1349
.org 0x52e0c
	bl 0x5784	@ 00052e0c b2f7bafc
.org 0x52e10
	movs r3, #0	@ 00052e10 0023
.org 0x52e12
	ldr r0, [pc, #72]	@ 00052e12 1248
.org 0x52e14
	ldr r2, [r0, #0]	@ 00052e14 0268
.org 0x52e16
	ldr r1, [r4, #84]	@ 00052e16 616d
.org 0x52e18
	ldr r0, [r2, #84]	@ 00052e18 506d
.org 0x52e1a
	cmp r1, r0	@ 00052e1a 8142
.org 0x52e1c
	bge.n 0x52e20	@ 00052e1c 00da
.org 0x52e1e
	movs r3, #1	@ 00052e1e 0123
.org 0x52e20
	adds r0, r4, #0	@ 00052e20 201c
.org 0x52e22
	adds r0, #76	@ 00052e22 4c30
.org 0x52e24
	strb r3, [r0, #0]	@ 00052e24 0370
.org 0x52e26
	movs r3, #0	@ 00052e26 0023
.org 0x52e28
	ldr r1, [r4, #84]	@ 00052e28 616d
.org 0x52e2a
	ldr r0, [r2, #84]	@ 00052e2a 506d
.org 0x52e2c
	cmp r1, r0	@ 00052e2c 8142
.org 0x52e2e
	bge.n 0x52e32	@ 00052e2e 00da
.org 0x52e30
	movs r3, #1	@ 00052e30 0123
.org 0x52e32
	movs r0, #74	@ 00052e32 4a20
.org 0x52e34
	adds r0, r0, r4	@ 00052e34 0019
.org 0x52e36
	mov ip, r0	@ 00052e36 8446
.org 0x52e38
	lsls r2, r3, #4	@ 00052e38 1a01
.org 0x52e3a
	ldrb r1, [r0, #0]	@ 00052e3a 0178
.org 0x52e3c
	movs r0, #17	@ 00052e3c 1120
.org 0x52e3e
	negs r0, r0	@ 00052e3e 4042
.org 0x52e40
	ands r0, r1	@ 00052e40 0840
.org 0x52e42
	orrs r0, r2	@ 00052e42 1043
.org 0x52e44
	mov r1, ip	@ 00052e44 6146
.org 0x52e46
	strb r0, [r1, #0]	@ 00052e46 0870
.org 0x52e48
	cmp r3, #0	@ 00052e48 002b
.org 0x52e4a
	beq.n 0x52e60	@ 00052e4a 09d0
.org 0x52e4c
	ldrb r0, [r4, #10]	@ 00052e4c a07a
.org 0x52e4e
	movs r1, #16	@ 00052e4e 1021
.org 0x52e50
	orrs r0, r1	@ 00052e50 0843
.org 0x52e52
	b.n 0x52e66	@ 00052e52 08e0
.org 0x52e54
	.byte 0x0b,0xa1,0x00,0x00	@ 00052e54 data
.org 0x52e58
	.byte 0x54,0x7e,0x85,0x08	@ 00052e58 data
.org 0x52e5c
	.byte 0xf0,0xdb,0x02,0x02	@ 00052e5c data
.org 0x52e60
	ldrb r1, [r4, #10]	@ 00052e60 a17a
.org 0x52e62
	movs r0, #239	@ 00052e62 ef20
.org 0x52e64
	ands r0, r1	@ 00052e64 0840
.org 0x52e66
	strb r0, [r4, #10]	@ 00052e66 a072
.org 0x52e68
	ldrb r0, [r4, #14]	@ 00052e68 a07b
.org 0x52e6a
	adds r0, #1	@ 00052e6a 0130
.org 0x52e6c
	strb r0, [r4, #14]	@ 00052e6c a073
.org 0x52e6e
	adds r0, r4, #0	@ 00052e6e 201c
.org 0x52e70
	bl 0x1cff0	@ 00052e70 caf7bef8
.org 0x52e74
	ldr r0, [r4, #84]	@ 00052e74 606d
.org 0x52e76
	ldr r1, [r4, #92]	@ 00052e76 e16d
.org 0x52e78
	adds r0, r0, r1	@ 00052e78 4018
.org 0x52e7a
	str r0, [r4, #84]	@ 00052e7a 6065
.org 0x52e7c
	ldr r0, [r4, #88]	@ 00052e7c a06d
.org 0x52e7e
	ldr r1, [r4, #96]	@ 00052e7e 216e
.org 0x52e80
	adds r0, r0, r1	@ 00052e80 4018
.org 0x52e82
	str r0, [r4, #88]	@ 00052e82 a065
.org 0x52e84
	adds r1, #64	@ 00052e84 4031
.org 0x52e86
	str r1, [r4, #96]	@ 00052e86 2166
.org 0x52e88
	adds r0, r4, #0	@ 00052e88 201c
.org 0x52e8a
	adds r0, #115	@ 00052e8a 7330
.org 0x52e8c
	ldrb r0, [r0, #0]	@ 00052e8c 0078
.org 0x52e8e
	cmp r0, #3	@ 00052e8e 0328
.org 0x52e90
	bne.n 0x52e9a	@ 00052e90 03d1
.org 0x52e92
	movs r1, #0	@ 00052e92 0021

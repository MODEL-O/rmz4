@ FUN_080b6e3c  entry 0x080b6e3c  size 156
.thumb
.org 0xb6e3c
FUN_080b6e3c:
	push {r4, r5, r6, lr}	@ 000b6e3c 70b5
.org 0xb6e3e
	adds r4, r0, #0	@ 000b6e3e 041c
.org 0xb6e40
	ldrb r5, [r4, #15]	@ 000b6e40 e57b
.org 0xb6e42
	cmp r5, #0	@ 000b6e42 002d
.org 0xb6e44
	bne.n 0xb6e76	@ 000b6e44 17d1
.org 0xb6e46
	adds r0, #116	@ 000b6e46 7430
.org 0xb6e48
	ldr r1, [pc, #88]	@ 000b6e48 1649
.org 0xb6e4a
	bl 0x5784	@ 000b6e4a 4ef79bfc
.org 0xb6e4e
	ldrb r1, [r4, #10]	@ 000b6e4e a17a
.org 0xb6e50
	movs r0, #1	@ 000b6e50 0120
.org 0xb6e52
	orrs r0, r1	@ 000b6e52 0843
.org 0xb6e54
	strb r0, [r4, #10]	@ 000b6e54 a072
.org 0xb6e56
	movs r1, #181	@ 000b6e56 b521
.org 0xb6e58
	lsls r1, r1, #8	@ 000b6e58 0902
.org 0xb6e5a
	adds r0, r4, #0	@ 000b6e5a 201c
.org 0xb6e5c
	bl 0x1cf00	@ 000b6e5c 66f750f8
.org 0xb6e60
	adds r1, r4, #0	@ 000b6e60 211c
.org 0xb6e62
	adds r1, #180	@ 000b6e62 b431
.org 0xb6e64
	movs r0, #90	@ 000b6e64 5a20
.org 0xb6e66
	str r0, [r1, #0]	@ 000b6e66 0860
.org 0xb6e68
	adds r1, #9	@ 000b6e68 0931
.org 0xb6e6a
	movs r0, #1	@ 000b6e6a 0120
.org 0xb6e6c
	strb r0, [r1, #0]	@ 000b6e6c 0870
.org 0xb6e6e
	strb r5, [r4, #19]	@ 000b6e6e e574
.org 0xb6e70
	ldrb r0, [r4, #15]	@ 000b6e70 e07b
.org 0xb6e72
	adds r0, #1	@ 000b6e72 0130
.org 0xb6e74
	strb r0, [r4, #15]	@ 000b6e74 e073
.org 0xb6e76
	adds r5, r4, #0	@ 000b6e76 251c
.org 0xb6e78
	adds r5, #113	@ 000b6e78 7135
.org 0xb6e7a
	movs r6, #0	@ 000b6e7a 0026
.org 0xb6e7c
	ldrsb r6, [r5, r6]	@ 000b6e7c ae57
.org 0xb6e7e
	adds r0, r4, #0	@ 000b6e7e 201c
.org 0xb6e80
	bl 0x1cff0	@ 000b6e80 66f7b6f8
.org 0xb6e84
	movs r1, #0	@ 000b6e84 0021
.org 0xb6e86
	ldrsb r1, [r5, r1]	@ 000b6e86 6956
.org 0xb6e88
	ldrb r0, [r4, #19]	@ 000b6e88 e07c
.org 0xb6e8a
	cmp r0, #0	@ 000b6e8a 0028
.org 0xb6e8c
	bne.n 0xb6ec6	@ 000b6e8c 1bd1
.org 0xb6e8e
	cmp r1, #6	@ 000b6e8e 0629
.org 0xb6e90
	ble.n 0xb6eac	@ 000b6e90 0cdd
.org 0xb6e92
	adds r0, r4, #0	@ 000b6e92 201c
.org 0xb6e94
	adds r0, #116	@ 000b6e94 7430
.org 0xb6e96
	ldr r1, [pc, #16]	@ 000b6e96 0449
.org 0xb6e98
	bl 0x5784	@ 000b6e98 4ef774fc
.org 0xb6e9c
	movs r0, #1	@ 000b6e9c 0120
.org 0xb6e9e
	strb r0, [r4, #19]	@ 000b6e9e e074
.org 0xb6ea0
	b.n 0xb6ec6	@ 000b6ea0 11e0
.org 0xb6ea2
	.byte 0x00	@ 000b6ea2 data
.org 0xb6ea3
	.byte 0x00	@ 000b6ea3 data
.org 0xb6ea4
	.byte 0x28,0x3e,0x86,0x08	@ 000b6ea4 data
.org 0xb6ea8
	.byte 0x40,0x3e,0x86,0x08	@ 000b6ea8 data
.org 0xb6eac
	cmp r1, r6	@ 000b6eac b142
.org 0xb6eae
	beq.n 0xb6ec6	@ 000b6eae 0ad0
.org 0xb6eb0
	adds r1, r4, #0	@ 000b6eb0 211c
.org 0xb6eb2
	adds r1, #189	@ 000b6eb2 bd31
.org 0xb6eb4
	ldrb r0, [r1, #0]	@ 000b6eb4 0878
.org 0xb6eb6
	adds r0, #1	@ 000b6eb6 0130
.org 0xb6eb8
	strb r0, [r1, #0]	@ 000b6eb8 0870
.org 0xb6eba
	lsls r0, r0, #24	@ 000b6eba 0006
.org 0xb6ebc
	lsrs r0, r0, #24	@ 000b6ebc 000e
.org 0xb6ebe
	cmp r0, #8	@ 000b6ebe 0828
.org 0xb6ec0
	bls.n 0xb6ec6	@ 000b6ec0 01d9
.org 0xb6ec2
	movs r0, #8	@ 000b6ec2 0820
.org 0xb6ec4
	strb r0, [r1, #0]	@ 000b6ec4 0870
.org 0xb6ec6
	adds r1, r4, #0	@ 000b6ec6 211c
.org 0xb6ec8
	adds r1, #180	@ 000b6ec8 b431
.org 0xb6eca
	ldr r0, [r1, #0]	@ 000b6eca 0868
.org 0xb6ecc
	subs r2, r0, #1	@ 000b6ecc 421e
.org 0xb6ece
	str r2, [r1, #0]	@ 000b6ece 0a60
.org 0xb6ed0
	cmp r2, #0	@ 000b6ed0 002a
.org 0xb6ed2
	bne.n 0xb6edc	@ 000b6ed2 03d1
.org 0xb6ed4
	movs r0, #2	@ 000b6ed4 0220
.org 0xb6ed6
	strb r0, [r4, #13]	@ 000b6ed6 6073

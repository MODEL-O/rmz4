@ FUN_08065f24  entry 0x08065f24  size 168
.thumb
.org 0x65f24
FUN_08065f24:
	push {r4, r5, r6, r7, lr}	@ 00065f24 f0b5
.org 0x65f26
	sub sp, #8	@ 00065f26 82b0
.org 0x65f28
	adds r5, r0, #0	@ 00065f28 051c
.org 0x65f2a
	ldr r1, [pc, #44]	@ 00065f2a 0b49
.org 0x65f2c
	mov r0, sp	@ 00065f2c 6846
.org 0x65f2e
	movs r2, #2	@ 00065f2e 0222
.org 0x65f30
	bl 0x129258	@ 00065f30 c3f092f9
.org 0x65f34
	add r4, sp, #4	@ 00065f34 01ac
.org 0x65f36
	ldr r1, [pc, #36]	@ 00065f36 0949
.org 0x65f38
	adds r0, r4, #0	@ 00065f38 201c
.org 0x65f3a
	movs r2, #2	@ 00065f3a 0222
.org 0x65f3c
	bl 0x129258	@ 00065f3c c3f08cf9
.org 0x65f40
	ldr r0, [pc, #28]	@ 00065f40 0748
.org 0x65f42
	ldrh r1, [r0, #8]	@ 00065f42 0189
.org 0x65f44
	movs r0, #8	@ 00065f44 0820
.org 0x65f46
	ands r0, r1	@ 00065f46 0840
.org 0x65f48
	adds r3, r4, #0	@ 00065f48 231c
.org 0x65f4a
	cmp r0, #0	@ 00065f4a 0028
.org 0x65f4c
	beq.n 0x65f64	@ 00065f4c 0ad0
.org 0x65f4e
	movs r0, #0	@ 00065f4e 0020
.org 0x65f50
	strb r0, [r5, #13]	@ 00065f50 6873
.org 0x65f52
	strb r0, [r5, #14]	@ 00065f52 a873
.org 0x65f54
	strb r0, [r5, #15]	@ 00065f54 e873
.org 0x65f56
	b.n 0x65fd6	@ 00065f56 3ee0
.org 0x65f58
	.byte 0xa7,0x98,0x12,0x08	@ 00065f58 data
.org 0x65f5c
	.byte 0xa9,0x98,0x12,0x08	@ 00065f5c data
.org 0x65f60
	.byte 0x10,0xe9,0x02,0x02	@ 00065f60 data
.org 0x65f64
	adds r0, r5, #0	@ 00065f64 281c
.org 0x65f66
	adds r0, #205	@ 00065f66 cd30
.org 0x65f68
	ldrb r1, [r0, #0]	@ 00065f68 0178
.org 0x65f6a
	adds r6, r0, #0	@ 00065f6a 061c
.org 0x65f6c
	adds r4, r5, #0	@ 00065f6c 2c1c
.org 0x65f6e
	adds r4, #204	@ 00065f6e cc34
.org 0x65f70
	cmp r1, #2	@ 00065f70 0229
.org 0x65f72
	bls.n 0x65f9a	@ 00065f72 12d9
.org 0x65f74
	ldrb r2, [r4, #0]	@ 00065f74 2278
.org 0x65f76
	movs r1, #0	@ 00065f76 0021
.org 0x65f78
	mov r0, sp	@ 00065f78 6846
.org 0x65f7a
	ldrb r0, [r0, #0]	@ 00065f7a 0078
.org 0x65f7c
	cmp r0, r2	@ 00065f7c 9042
.org 0x65f7e
	bne.n 0x65f84	@ 00065f7e 01d1
.org 0x65f80
	strb r1, [r3, #0]	@ 00065f80 1970
.org 0x65f82
	b.n 0x65f9a	@ 00065f82 0ae0
.org 0x65f84
	adds r1, #1	@ 00065f84 0131
.org 0x65f86
	cmp r1, #1	@ 00065f86 0129
.org 0x65f88
	bgt.n 0x65f9a	@ 00065f88 07dc
.org 0x65f8a
	mov r7, sp	@ 00065f8a 6f46
.org 0x65f8c
	adds r0, r7, r1	@ 00065f8c 7818
.org 0x65f8e
	ldrb r0, [r0, #0]	@ 00065f8e 0078
.org 0x65f90
	cmp r0, r2	@ 00065f90 9042
.org 0x65f92
	bne.n 0x65f84	@ 00065f92 f7d1
.org 0x65f94
	adds r1, r3, r1	@ 00065f94 5918
.org 0x65f96
	movs r0, #0	@ 00065f96 0020
.org 0x65f98
	strb r0, [r1, #0]	@ 00065f98 0870
.org 0x65f9a
	adds r0, r3, #0	@ 00065f9a 181c
.org 0x65f9c
	movs r1, #2	@ 00065f9c 0221
.org 0x65f9e
	bl 0x6635c	@ 00065f9e 00f0ddf9
.org 0x65fa2
	add r0, sp	@ 00065fa2 6844
.org 0x65fa4
	ldrb r2, [r0, #0]	@ 00065fa4 0278
.org 0x65fa6
	ldr r0, [pc, #36]	@ 00065fa6 0948
.org 0x65fa8
	adds r0, r2, r0	@ 00065fa8 1018
.org 0x65faa
	ldrb r0, [r0, #0]	@ 00065faa 0078
.org 0x65fac
	movs r1, #0	@ 00065fac 0021
.org 0x65fae
	strb r0, [r5, #13]	@ 00065fae 6873
.org 0x65fb0
	strb r1, [r5, #14]	@ 00065fb0 a973
.org 0x65fb2
	strb r1, [r5, #15]	@ 00065fb2 e973
.org 0x65fb4
	cmp r0, #13	@ 00065fb4 0d28
.org 0x65fb6
	bne.n 0x65fbe	@ 00065fb6 02d1
.org 0x65fb8
	adds r0, r5, #0	@ 00065fb8 281c
.org 0x65fba
	adds r0, #224	@ 00065fba e030
.org 0x65fbc
	strb r1, [r0, #0]	@ 00065fbc 0170
.org 0x65fbe
	ldrb r0, [r4, #0]	@ 00065fbe 2078
.org 0x65fc0
	cmp r2, r0	@ 00065fc0 8242
.org 0x65fc2
	bne.n 0x65fd0	@ 00065fc2 05d1
.org 0x65fc4
	ldrb r0, [r6, #0]	@ 00065fc4 3078
.org 0x65fc6
	adds r0, #1	@ 00065fc6 0130
.org 0x65fc8
	b.n 0x65fd4	@ 00065fc8 04e0
.org 0x65fca
	.byte 0x00	@ 00065fca data
.org 0x65fcb
	.byte 0x00	@ 00065fcb data

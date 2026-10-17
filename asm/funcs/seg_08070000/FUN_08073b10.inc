@ FUN_08073b10  entry 0x08073b10  size 164
.thumb
.org 0x73b10
FUN_08073b10:
	push {r4, r5, r6, lr}	@ 00073b10 70b5
.org 0x73b12
	mov r6, r9	@ 00073b12 4e46
.org 0x73b14
	mov r5, r8	@ 00073b14 4546
.org 0x73b16
	push {r5, r6}	@ 00073b16 60b4
.org 0x73b18
	sub sp, #64	@ 00073b18 90b0
.org 0x73b1a
	adds r5, r0, #0	@ 00073b1a 051c
.org 0x73b1c
	ldr r1, [pc, #96]	@ 00073b1c 1849
.org 0x73b1e
	mov r0, sp	@ 00073b1e 6846
.org 0x73b20
	movs r2, #8	@ 00073b20 0822
.org 0x73b22
	bl 0x129258	@ 00073b22 b5f099fb
.org 0x73b26
	add r0, sp, #8	@ 00073b26 02a8
.org 0x73b28
	mov r9, r0	@ 00073b28 8146
.org 0x73b2a
	ldr r1, [pc, #88]	@ 00073b2a 1649
.org 0x73b2c
	movs r2, #8	@ 00073b2c 0822
.org 0x73b2e
	bl 0x129258	@ 00073b2e b5f093fb
.org 0x73b32
	add r6, sp, #16	@ 00073b32 04ae
.org 0x73b34
	ldr r1, [pc, #80]	@ 00073b34 1449
.org 0x73b36
	adds r0, r6, #0	@ 00073b36 301c
.org 0x73b38
	movs r2, #8	@ 00073b38 0822
.org 0x73b3a
	bl 0x129258	@ 00073b3a b5f08dfb
.org 0x73b3e
	add r4, sp, #24	@ 00073b3e 06ac
.org 0x73b40
	ldr r1, [pc, #72]	@ 00073b40 1249
.org 0x73b42
	adds r0, r4, #0	@ 00073b42 201c
.org 0x73b44
	movs r2, #8	@ 00073b44 0822
.org 0x73b46
	bl 0x129258	@ 00073b46 b5f087fb
.org 0x73b4a
	add r1, sp, #32	@ 00073b4a 08a9
.org 0x73b4c
	mov r8, r1	@ 00073b4c 8846
.org 0x73b4e
	mov r0, sp	@ 00073b4e 6846
.org 0x73b50
	str r0, [sp, #48]	@ 00073b50 0c90
.org 0x73b52
	mov r1, r9	@ 00073b52 4946
.org 0x73b54
	str r1, [sp, #52]	@ 00073b54 0d91
.org 0x73b56
	str r6, [sp, #56]	@ 00073b56 0e96
.org 0x73b58
	str r4, [sp, #60]	@ 00073b58 0f94
.org 0x73b5a
	add r1, sp, #48	@ 00073b5a 0ca9
.org 0x73b5c
	mov r0, r8	@ 00073b5c 4046
.org 0x73b5e
	movs r2, #16	@ 00073b5e 1022
.org 0x73b60
	bl 0x129258	@ 00073b60 b5f07afb
.org 0x73b64
	ldr r0, [pc, #40]	@ 00073b64 0a48
.org 0x73b66
	ldr r0, [r0, #0]	@ 00073b66 0068
.org 0x73b68
	ldr r2, [r0, #84]	@ 00073b68 426d
.org 0x73b6a
	adds r5, #204	@ 00073b6a cc35
.org 0x73b6c
	ldr r5, [r5, #0]	@ 00073b6c 2d68
.org 0x73b6e
	movs r1, #224	@ 00073b6e e021
.org 0x73b70
	lsls r1, r1, #6	@ 00073b70 8901
.org 0x73b72
	adds r0, r5, r1	@ 00073b72 6818
.org 0x73b74
	mov r3, r8	@ 00073b74 4346
.org 0x73b76
	cmp r2, r0	@ 00073b76 8242
.org 0x73b78
	bge.n 0x73b94	@ 00073b78 0cda
.org 0x73b7a
	movs r1, #0	@ 00073b7a 0021
.org 0x73b7c
	b.n 0x73bb0	@ 00073b7c 18e0
.org 0x73b7e
	.byte 0x00	@ 00073b7e data
.org 0x73b7f
	.byte 0x00	@ 00073b7f data
.org 0x73b80
	.byte 0x7c,0x99,0x12,0x08	@ 00073b80 data
.org 0x73b84
	.byte 0x84,0x99,0x12,0x08	@ 00073b84 data
.org 0x73b88
	.byte 0x8c,0x99,0x12,0x08	@ 00073b88 data
.org 0x73b8c
	.byte 0x94,0x99,0x12,0x08	@ 00073b8c data
.org 0x73b90
	.byte 0xf0,0xdb,0x02,0x02	@ 00073b90 data
.org 0x73b94
	movs r1, #208	@ 00073b94 d021
.org 0x73b96
	lsls r1, r1, #7	@ 00073b96 c901
.org 0x73b98
	adds r0, r5, r1	@ 00073b98 6818
.org 0x73b9a
	cmp r2, r0	@ 00073b9a 8242
.org 0x73b9c
	bge.n 0x73ba2	@ 00073b9c 01da
.org 0x73b9e
	movs r1, #1	@ 00073b9e 0121
.org 0x73ba0
	b.n 0x73bb0	@ 00073ba0 06e0
.org 0x73ba2
	movs r1, #152	@ 00073ba2 9821
.org 0x73ba4
	lsls r1, r1, #8	@ 00073ba4 0902
.org 0x73ba6
	adds r0, r5, r1	@ 00073ba6 6818
.org 0x73ba8
	movs r1, #3	@ 00073ba8 0321
.org 0x73baa
	cmp r2, r0	@ 00073baa 8242
.org 0x73bac
	bge.n 0x73bb0	@ 00073bac 00da
.org 0x73bae
	movs r1, #2	@ 00073bae 0221
.org 0x73bb0
	lsls r0, r1, #2	@ 00073bb0 8800
.org 0x73bb2
	adds r0, r3, r0	@ 00073bb2 1818

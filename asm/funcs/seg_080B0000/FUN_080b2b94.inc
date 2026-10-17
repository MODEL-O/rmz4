@ FUN_080b2b94  entry 0x080b2b94  size 308
.thumb
.org 0xb2b94
FUN_080b2b94:
	push {r4, r5, r6, r7, lr}	@ 000b2b94 f0b5
.org 0xb2b96
	mov r7, r9	@ 000b2b96 4f46
.org 0xb2b98
	mov r6, r8	@ 000b2b98 4646
.org 0xb2b9a
	push {r6, r7}	@ 000b2b9a c0b4
.org 0xb2b9c
	sub sp, #16	@ 000b2b9c 84b0
.org 0xb2b9e
	adds r6, r0, #0	@ 000b2b9e 061c
.org 0xb2ba0
	ldr r0, [pc, #104]	@ 000b2ba0 1a48
.org 0xb2ba2
	ldr r1, [r0, #0]	@ 000b2ba2 0168
.org 0xb2ba4
	ldr r2, [r0, #4]	@ 000b2ba4 4268
.org 0xb2ba6
	str r1, [sp, #8]	@ 000b2ba6 0291
.org 0xb2ba8
	str r2, [sp, #12]	@ 000b2ba8 0392
.org 0xb2baa
	ldr r0, [pc, #100]	@ 000b2baa 1948
.org 0xb2bac
	ldr r1, [r0, #4]	@ 000b2bac 4168
.org 0xb2bae
	ldr r0, [r0, #0]	@ 000b2bae 0068
.org 0xb2bb0
	str r0, [sp, #0]	@ 000b2bb0 0090
.org 0xb2bb2
	str r1, [sp, #4]	@ 000b2bb2 0191
.org 0xb2bb4
	ldrb r0, [r6, #17]	@ 000b2bb4 707c
.org 0xb2bb6
	cmp r0, #1	@ 000b2bb6 0128
.org 0xb2bb8
	beq.n 0xb2c6a	@ 000b2bb8 57d0
.org 0xb2bba
	ldr r2, [sp, #8]	@ 000b2bba 029a
.org 0xb2bbc
	lsls r5, r2, #8	@ 000b2bbc 1502
.org 0xb2bbe
	ldr r0, [r6, #84]	@ 000b2bbe 706d
.org 0xb2bc0
	adds r0, r0, r5	@ 000b2bc0 4019
.org 0xb2bc2
	ldr r1, [r6, #88]	@ 000b2bc2 b16d
.org 0xb2bc4
	bl 0x7c7c	@ 000b2bc4 55f75af8
.org 0xb2bc8
	lsls r0, r0, #16	@ 000b2bc8 0004
.org 0xb2bca
	lsrs r0, r0, #16	@ 000b2bca 000c
.org 0xb2bcc
	mov r9, r0	@ 000b2bcc 8146
.org 0xb2bce
	ldr r0, [sp, #12]	@ 000b2bce 0398
.org 0xb2bd0
	lsls r4, r0, #8	@ 000b2bd0 0402
.org 0xb2bd2
	ldr r0, [r6, #84]	@ 000b2bd2 706d
.org 0xb2bd4
	adds r0, r0, r4	@ 000b2bd4 0019
.org 0xb2bd6
	ldr r1, [r6, #88]	@ 000b2bd6 b16d
.org 0xb2bd8
	bl 0x7c7c	@ 000b2bd8 55f750f8
.org 0xb2bdc
	lsls r0, r0, #16	@ 000b2bdc 0004
.org 0xb2bde
	lsrs r7, r0, #16	@ 000b2bde 070c
.org 0xb2be0
	mov r8, r4	@ 000b2be0 a046
.org 0xb2be2
	mov r1, r9	@ 000b2be2 4946
.org 0xb2be4
	cmp r1, #0	@ 000b2be4 0029
.org 0xb2be6
	bne.n 0xb2c16	@ 000b2be6 16d1
.org 0xb2be8
	cmp r7, #0	@ 000b2be8 002f
.org 0xb2bea
	bne.n 0xb2c16	@ 000b2bea 14d1
.org 0xb2bec
	ldr r0, [r6, #84]	@ 000b2bec 706d
.org 0xb2bee
	adds r0, r0, r5	@ 000b2bee 4019
.org 0xb2bf0
	ldr r1, [r6, #88]	@ 000b2bf0 b16d
.org 0xb2bf2
	bl 0x8534	@ 000b2bf2 55f79ffc
.org 0xb2bf6
	adds r4, r0, #0	@ 000b2bf6 041c
.org 0xb2bf8
	ldr r0, [r6, #84]	@ 000b2bf8 706d
.org 0xb2bfa
	add r0, r8	@ 000b2bfa 4044
.org 0xb2bfc
	ldr r1, [r6, #88]	@ 000b2bfc b16d
.org 0xb2bfe
	bl 0x8534	@ 000b2bfe 55f799fc
.org 0xb2c02
	cmp r4, r0	@ 000b2c02 8442
.org 0xb2c04
	bge.n 0xb2c14	@ 000b2c04 06da
.org 0xb2c06
	str r4, [r6, #88]	@ 000b2c06 b465
.org 0xb2c08
	b.n 0xb2c16	@ 000b2c08 05e0
.org 0xb2c0a
	.byte 0x00	@ 000b2c0a data
.org 0xb2c0b
	.byte 0x00	@ 000b2c0b data
.org 0xb2c0c
	.byte 0x24,0x9e,0x12,0x08	@ 000b2c0c data
.org 0xb2c10
	.byte 0x2c,0x9e,0x12,0x08	@ 000b2c10 data
.org 0xb2c14
	str r0, [r6, #88]	@ 000b2c14 b065
.org 0xb2c16
	mov r2, r9	@ 000b2c16 4a46
.org 0xb2c18
	cmp r2, #1	@ 000b2c18 012a
.org 0xb2c1a
	bne.n 0xb2c22	@ 000b2c1a 02d1
.org 0xb2c1c
	ldr r0, [r6, #84]	@ 000b2c1c 706d
.org 0xb2c1e
	adds r0, r0, r5	@ 000b2c1e 4019
.org 0xb2c20
	b.n 0xb2c2a	@ 000b2c20 03e0
.org 0xb2c22
	cmp r7, #1	@ 000b2c22 012f
.org 0xb2c24
	bne.n 0xb2c32	@ 000b2c24 05d1
.org 0xb2c26
	ldr r0, [r6, #84]	@ 000b2c26 706d
.org 0xb2c28
	add r0, r8	@ 000b2c28 4044
.org 0xb2c2a
	ldr r1, [r6, #88]	@ 000b2c2a b16d
.org 0xb2c2c
	bl 0x8534	@ 000b2c2c 55f782fc
.org 0xb2c30
	str r0, [r6, #88]	@ 000b2c30 b065
.org 0xb2c32
	ldrb r1, [r6, #10]	@ 000b2c32 b17a
.org 0xb2c34
	movs r0, #16	@ 000b2c34 1020
.org 0xb2c36
	ands r0, r1	@ 000b2c36 0840
.org 0xb2c38
	lsls r0, r0, #24	@ 000b2c38 0006
.org 0xb2c3a
	lsrs r0, r0, #24	@ 000b2c3a 000e
.org 0xb2c3c
	negs r0, r0	@ 000b2c3c 4042
.org 0xb2c3e
	asrs r0, r0, #31	@ 000b2c3e c017
.org 0xb2c40
	movs r1, #4	@ 000b2c40 0421
.org 0xb2c42
	ands r0, r1	@ 000b2c42 0840
.org 0xb2c44
	add r0, sp	@ 000b2c44 6844
.org 0xb2c46
	ldr r1, [r0, #0]	@ 000b2c46 0168
.org 0xb2c48
	lsls r1, r1, #8	@ 000b2c48 0902
.org 0xb2c4a
	ldr r0, [r6, #84]	@ 000b2c4a 706d
.org 0xb2c4c
	adds r0, r0, r1	@ 000b2c4c 4018
.org 0xb2c4e
	ldr r1, [r6, #88]	@ 000b2c4e b16d
.org 0xb2c50
	movs r2, #128	@ 000b2c50 8022
.org 0xb2c52
	lsls r2, r2, #4	@ 000b2c52 1201
.org 0xb2c54
	adds r1, r1, r2	@ 000b2c54 8918
.org 0xb2c56
	bl 0x7c7c	@ 000b2c56 55f711f8
.org 0xb2c5a
	lsls r0, r0, #16	@ 000b2c5a 0004
.org 0xb2c5c
	cmp r0, #0	@ 000b2c5c 0028
.org 0xb2c5e
	bne.n 0xb2cc2	@ 000b2c5e 30d1
.org 0xb2c60
	adds r1, r6, #0	@ 000b2c60 311c
.org 0xb2c62
	adds r1, #183	@ 000b2c62 b731
.org 0xb2c64
	movs r0, #1	@ 000b2c64 0120
.org 0xb2c66
	strb r0, [r1, #0]	@ 000b2c66 0870
.org 0xb2c68
	b.n 0xb2cc4	@ 000b2c68 2ce0
.org 0xb2c6a
	ldr r0, [r6, #84]	@ 000b2c6a 706d
.org 0xb2c6c
	ldr r1, [r6, #88]	@ 000b2c6c b16d
.org 0xb2c6e
	movs r4, #128	@ 000b2c6e 8024
.org 0xb2c70
	lsls r4, r4, #4	@ 000b2c70 2401
.org 0xb2c72
	adds r1, r1, r4	@ 000b2c72 0919
.org 0xb2c74
	bl 0x7c7c	@ 000b2c74 55f702f8
.org 0xb2c78
	lsls r0, r0, #16	@ 000b2c78 0004
.org 0xb2c7a
	cmp r0, #0	@ 000b2c7a 0028
.org 0xb2c7c
	beq.n 0xb2c88	@ 000b2c7c 04d0
.org 0xb2c7e
	ldr r0, [r6, #84]	@ 000b2c7e 706d
.org 0xb2c80
	ldr r1, [r6, #88]	@ 000b2c80 b16d
.org 0xb2c82
	bl 0x8534	@ 000b2c82 55f757fc
.org 0xb2c86
	str r0, [r6, #88]	@ 000b2c86 b065
.org 0xb2c88
	adds r0, r6, #0	@ 000b2c88 301c
.org 0xb2c8a
	bl 0xb2e08	@ 000b2c8a 00f0bdf8
.org 0xb2c8e
	ldrb r1, [r6, #10]	@ 000b2c8e b17a
.org 0xb2c90
	movs r0, #16	@ 000b2c90 1020
.org 0xb2c92
	ands r0, r1	@ 000b2c92 0840
.org 0xb2c94
	lsls r0, r0, #24	@ 000b2c94 0006
.org 0xb2c96
	lsrs r0, r0, #24	@ 000b2c96 000e
.org 0xb2c98
	negs r0, r0	@ 000b2c98 4042
.org 0xb2c9a
	asrs r0, r0, #31	@ 000b2c9a c017
.org 0xb2c9c
	movs r1, #4	@ 000b2c9c 0421
.org 0xb2c9e
	ands r0, r1	@ 000b2c9e 0840
.org 0xb2ca0
	add r0, sp	@ 000b2ca0 6844
.org 0xb2ca2
	ldr r1, [r0, #0]	@ 000b2ca2 0168
.org 0xb2ca4
	lsls r1, r1, #8	@ 000b2ca4 0902
.org 0xb2ca6
	ldr r0, [r6, #84]	@ 000b2ca6 706d
.org 0xb2ca8
	adds r0, r0, r1	@ 000b2ca8 4018
.org 0xb2caa
	ldr r1, [r6, #88]	@ 000b2caa b16d
.org 0xb2cac
	adds r1, r1, r4	@ 000b2cac 0919
.org 0xb2cae
	bl 0x7c7c	@ 000b2cae 54f7e5ff
.org 0xb2cb2
	lsls r0, r0, #16	@ 000b2cb2 0004
.org 0xb2cb4
	cmp r0, #0	@ 000b2cb4 0028
.org 0xb2cb6
	bne.n 0xb2cc2	@ 000b2cb6 04d1
.org 0xb2cb8
	adds r0, r6, #0	@ 000b2cb8 301c
.org 0xb2cba
	bl 0xb2b38	@ 000b2cba fff73dff
.org 0xb2cbe
	movs r0, #1	@ 000b2cbe 0120
.org 0xb2cc0
	b.n 0xb2cc4	@ 000b2cc0 00e0
.org 0xb2cc2
	movs r0, #0	@ 000b2cc2 0020
.org 0xb2cc4
	add sp, #16	@ 000b2cc4 04b0
.org 0xb2cc6
	pop {r3, r4}	@ 000b2cc6 18bc

@ FUN_08027c1c  entry 0x08027c1c  size 174
.thumb
.org 0x27c1c
FUN_08027c1c:
	push {r4, r5, r6, r7, lr}	@ 00027c1c f0b5
.org 0x27c1e
	mov r7, r9	@ 00027c1e 4f46
.org 0x27c20
	mov r6, r8	@ 00027c20 4646
.org 0x27c22
	push {r6, r7}	@ 00027c22 c0b4
.org 0x27c24
	sub sp, #4	@ 00027c24 81b0
.org 0x27c26
	mov r9, r0	@ 00027c26 8146
.org 0x27c28
	ldr r2, [r0, #16]	@ 00027c28 0269
.org 0x27c2a
	movs r6, #0	@ 00027c2a 0026
.org 0x27c2c
	movs r7, #0	@ 00027c2c 0027
.org 0x27c2e
	ldr r0, [pc, #156]	@ 00027c2e 2748
.org 0x27c30
	ldr r4, [r0, #0]	@ 00027c30 0468
.org 0x27c32
	ldr r5, [r0, #4]	@ 00027c32 4568
.org 0x27c34
	cmp r2, #0	@ 00027c34 002a
.org 0x27c36
	beq.n 0x27cbc	@ 00027c36 41d0
.org 0x27c38
	ldr r3, [pc, #148]	@ 00027c38 254b
.org 0x27c3a
	movs r1, #232	@ 00027c3a e821
.org 0x27c3c
	lsls r1, r1, #1	@ 00027c3c 4900
.org 0x27c3e
	adds r0, r3, r1	@ 00027c3e 5818
.org 0x27c40
	ldrh r1, [r0, #0]	@ 00027c40 0188
.org 0x27c42
	movs r0, #127	@ 00027c42 7f20
.org 0x27c44
	ands r0, r1	@ 00027c44 0840
.org 0x27c46
	cmp r0, #4	@ 00027c46 0428
.org 0x27c48
	bne.n 0x27c4e	@ 00027c48 01d1
.org 0x27c4a
	movs r4, #240	@ 00027c4a f024
.org 0x27c4c
	lsls r4, r4, #23	@ 00027c4c e405
.org 0x27c4e
	ldr r1, [pc, #132]	@ 00027c4e 2149
.org 0x27c50
	movs r0, #24	@ 00027c50 1820
.org 0x27c52
	ldrsb r0, [r1, r0]	@ 00027c52 0856
.org 0x27c54
	cmp r0, #3	@ 00027c54 0328
.org 0x27c56
	ble.n 0x27c60	@ 00027c56 03dd
.org 0x27c58
	ldr r6, [r1, #92]	@ 00027c58 ce6d
.org 0x27c5a
	ldr r7, [r1, #100]	@ 00027c5a 4f6e
.org 0x27c5c
	ldr r4, [r1, #96]	@ 00027c5c 0c6e
.org 0x27c5e
	ldr r5, [r1, #104]	@ 00027c5e 8d6e
.org 0x27c60
	ldr r1, [pc, #116]	@ 00027c60 1d49
.org 0x27c62
	adds r0, r3, r1	@ 00027c62 5818
.org 0x27c64
	ldr r0, [r0, #0]	@ 00027c64 0068
.org 0x27c66
	cmp r6, r0	@ 00027c66 8642
.org 0x27c68
	bge.n 0x27c6c	@ 00027c68 00da
.org 0x27c6a
	adds r6, r0, #0	@ 00027c6a 061c
.org 0x27c6c
	ldr r1, [pc, #108]	@ 00027c6c 1b49
.org 0x27c6e
	adds r0, r3, r1	@ 00027c6e 5818
.org 0x27c70
	ldr r0, [r0, #0]	@ 00027c70 0068
.org 0x27c72
	cmp r7, r0	@ 00027c72 8742
.org 0x27c74
	bge.n 0x27c78	@ 00027c74 00da
.org 0x27c76
	adds r7, r0, #0	@ 00027c76 071c
.org 0x27c78
	ldr r1, [pc, #100]	@ 00027c78 1949
.org 0x27c7a
	adds r0, r3, r1	@ 00027c7a 5818
.org 0x27c7c
	ldr r0, [r0, #0]	@ 00027c7c 0068
.org 0x27c7e
	cmp r4, r0	@ 00027c7e 8442
.org 0x27c80
	ble.n 0x27c84	@ 00027c80 00dd
.org 0x27c82
	adds r4, r0, #0	@ 00027c82 041c
.org 0x27c84
	ldr r1, [pc, #92]	@ 00027c84 1749
.org 0x27c86
	adds r0, r3, r1	@ 00027c86 5818
.org 0x27c88
	ldr r0, [r0, #0]	@ 00027c88 0068
.org 0x27c8a
	cmp r5, r0	@ 00027c8a 8542
.org 0x27c8c
	ble.n 0x27c90	@ 00027c8c 00dd
.org 0x27c8e
	adds r5, r0, #0	@ 00027c8e 051c
.org 0x27c90
	str r5, [sp, #0]	@ 00027c90 0095
.org 0x27c92
	adds r0, r2, #0	@ 00027c92 101c
.org 0x27c94
	adds r1, r6, #0	@ 00027c94 311c
.org 0x27c96
	adds r2, r7, #0	@ 00027c96 3a1c
.org 0x27c98
	adds r3, r4, #0	@ 00027c98 231c
.org 0x27c9a
	bl 0x2cbec	@ 00027c9a 04f0a7ff
.org 0x27c9e
	mov r0, r9	@ 00027c9e 4846
.org 0x27ca0
	ldr r2, [r0, #32]	@ 00027ca0 026a
.org 0x27ca2
	cmp r2, #0	@ 00027ca2 002a
.org 0x27ca4
	beq.n 0x27cbc	@ 00027ca4 0ad0
.org 0x27ca6
	movs r0, #8	@ 00027ca6 0820
.org 0x27ca8
	ldrsb r0, [r2, r0]	@ 00027ca8 1056
.org 0x27caa
	cmp r0, #0	@ 00027caa 0028
.org 0x27cac
	bne.n 0x27cbc	@ 00027cac 06d1
.org 0x27cae
	str r5, [sp, #0]	@ 00027cae 0095
.org 0x27cb0
	adds r0, r2, #0	@ 00027cb0 101c
.org 0x27cb2
	adds r1, r6, #0	@ 00027cb2 311c
.org 0x27cb4
	adds r2, r7, #0	@ 00027cb4 3a1c
.org 0x27cb6
	adds r3, r4, #0	@ 00027cb6 231c
.org 0x27cb8
	bl 0x2cbec	@ 00027cb8 04f098ff
.org 0x27cbc
	add sp, #4	@ 00027cbc 01b0
.org 0x27cbe
	pop {r3, r4}	@ 00027cbe 18bc
.org 0x27cc0
	mov r8, r3	@ 00027cc0 9846
.org 0x27cc2
	mov r9, r4	@ 00027cc2 a146
.org 0x27cc4
	pop {r4, r5, r6, r7}	@ 00027cc4 f0bc
.org 0x27cc6
	pop {r0}	@ 00027cc6 01bc
.org 0x27cc8
	bx r0	@ 00027cc8 0047

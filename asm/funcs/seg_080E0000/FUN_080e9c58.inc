@ FUN_080e9c58  entry 0x080e9c58  size 80
.thumb
.org 0xe9c58
FUN_080e9c58:
	push {r4, r5, lr}	@ 000e9c58 30b5
.org 0xe9c5a
	adds r5, r0, #0	@ 000e9c5a 051c
.org 0xe9c5c
	ldrb r0, [r5, #14]	@ 000e9c5c a87b
.org 0xe9c5e
	cmp r0, #0	@ 000e9c5e 0028
.org 0xe9c60
	beq.n 0xe9c68	@ 000e9c60 02d0
.org 0xe9c62
	cmp r0, #1	@ 000e9c62 0128
.org 0xe9c64
	beq.n 0xe9c9c	@ 000e9c64 1ad0
.org 0xe9c66
	b.n 0xe9ca2	@ 000e9c66 1ce0
.org 0xe9c68
	adds r0, r5, #0	@ 000e9c68 281c
.org 0xe9c6a
	adds r0, #184	@ 000e9c6a b830
.org 0xe9c6c
	ldrb r1, [r0, #0]	@ 000e9c6c 0178
.org 0xe9c6e
	lsls r1, r1, #8	@ 000e9c6e 0902
.org 0xe9c70
	adds r0, r5, #0	@ 000e9c70 281c
.org 0xe9c72
	bl 0x1cf00	@ 000e9c72 33f745f9
.org 0xe9c76
	ldrb r1, [r5, #10]	@ 000e9c76 a97a
.org 0xe9c78
	movs r0, #4	@ 000e9c78 0420
.org 0xe9c7a
	orrs r0, r1	@ 000e9c7a 0843
.org 0xe9c7c
	strb r0, [r5, #10]	@ 000e9c7c a872
.org 0xe9c7e
	adds r4, r5, #0	@ 000e9c7e 2c1c
.org 0xe9c80
	adds r4, #116	@ 000e9c80 7434
.org 0xe9c82
	ldr r1, [pc, #36]	@ 000e9c82 0949
.org 0xe9c84
	adds r2, r5, #0	@ 000e9c84 2a1c
.org 0xe9c86
	adds r2, #84	@ 000e9c86 5432
.org 0xe9c88
	adds r0, r4, #0	@ 000e9c88 201c
.org 0xe9c8a
	movs r3, #0	@ 000e9c8a 0023
.org 0xe9c8c
	bl 0x5760	@ 000e9c8c 1bf768fd
.org 0xe9c90
	str r5, [r4, #44]	@ 000e9c90 e562
.org 0xe9c92
	ldr r0, [pc, #24]	@ 000e9c92 0648
.org 0xe9c94
	str r0, [r4, #36]	@ 000e9c94 6062
.org 0xe9c96
	ldrb r0, [r5, #14]	@ 000e9c96 a87b
.org 0xe9c98
	adds r0, #1	@ 000e9c98 0130
.org 0xe9c9a
	strb r0, [r5, #14]	@ 000e9c9a a873
.org 0xe9c9c
	adds r0, r5, #0	@ 000e9c9c 281c
.org 0xe9c9e
	bl 0x1cff0	@ 000e9c9e 33f7a7f9
.org 0xe9ca2
	pop {r4, r5}	@ 000e9ca2 30bc
.org 0xe9ca4
	pop {r0}	@ 000e9ca4 01bc
.org 0xe9ca6
	bx r0	@ 000e9ca6 0047

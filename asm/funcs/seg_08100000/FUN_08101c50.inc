@ FUN_08101c50  entry 0x08101c50  size 104
.thumb
.org 0x101c50
FUN_08101c50:
	push {r4, r5, lr}	@ 00101c50 30b5
.org 0x101c52
	adds r4, r0, #0	@ 00101c52 041c
.org 0x101c54
	ldrb r5, [r4, #13]	@ 00101c54 657b
.org 0x101c56
	cmp r5, #0	@ 00101c56 002d
.org 0x101c58
	beq.n 0x101c60	@ 00101c58 02d0
.org 0x101c5a
	cmp r5, #1	@ 00101c5a 012d
.org 0x101c5c
	beq.n 0x101cac	@ 00101c5c 26d0
.org 0x101c5e
	b.n 0x101cb2	@ 00101c5e 28e0
.org 0x101c60
	adds r0, r4, #0	@ 00101c60 201c
.org 0x101c62
	bl 0x1cc9c	@ 00101c62 1bf71bf8
.org 0x101c66
	ldrb r1, [r4, #10]	@ 00101c66 a17a
.org 0x101c68
	movs r0, #1	@ 00101c68 0120
.org 0x101c6a
	orrs r0, r1	@ 00101c6a 0843
.org 0x101c6c
	strb r0, [r4, #10]	@ 00101c6c a072
.org 0x101c6e
	ldr r1, [pc, #72]	@ 00101c6e 1249
.org 0x101c70
	adds r0, r4, #0	@ 00101c70 201c
.org 0x101c72
	bl 0x1cf00	@ 00101c72 1bf745f9
.org 0x101c76
	ldrb r1, [r4, #10]	@ 00101c76 a17a
.org 0x101c78
	movs r0, #239	@ 00101c78 ef20
.org 0x101c7a
	ands r0, r1	@ 00101c7a 0840
.org 0x101c7c
	strb r0, [r4, #10]	@ 00101c7c a072
.org 0x101c7e
	adds r0, r4, #0	@ 00101c7e 201c
.org 0x101c80
	adds r0, #76	@ 00101c80 4c30
.org 0x101c82
	strb r5, [r0, #0]	@ 00101c82 0570
.org 0x101c84
	adds r2, r4, #0	@ 00101c84 221c
.org 0x101c86
	adds r2, #74	@ 00101c86 4a32
.org 0x101c88
	ldrb r1, [r2, #0]	@ 00101c88 1178
.org 0x101c8a
	movs r0, #17	@ 00101c8a 1120
.org 0x101c8c
	negs r0, r0	@ 00101c8c 4042
.org 0x101c8e
	ands r0, r1	@ 00101c8e 0840
.org 0x101c90
	strb r0, [r2, #0]	@ 00101c90 1070
.org 0x101c92
	ldrb r0, [r4, #17]	@ 00101c92 607c
.org 0x101c94
	adds r0, #25	@ 00101c94 1930
.org 0x101c96
	adds r1, r4, #0	@ 00101c96 211c
.org 0x101c98
	adds r1, #37	@ 00101c98 2531
.org 0x101c9a
	strb r0, [r1, #0]	@ 00101c9a 0870
.org 0x101c9c
	ldr r0, [r4, #84]	@ 00101c9c 606d
.org 0x101c9e
	ldr r1, [r4, #88]	@ 00101c9e a16d
.org 0x101ca0
	bl 0x8534	@ 00101ca0 06f748fc
.org 0x101ca4
	str r0, [r4, #88]	@ 00101ca4 a065
.org 0x101ca6
	ldrb r0, [r4, #13]	@ 00101ca6 607b
.org 0x101ca8
	adds r0, #1	@ 00101ca8 0130
.org 0x101caa
	strb r0, [r4, #13]	@ 00101caa 6073
.org 0x101cac
	adds r0, r4, #0	@ 00101cac 201c
.org 0x101cae
	bl 0x1cff0	@ 00101cae 1bf79ff9
.org 0x101cb2
	pop {r4, r5}	@ 00101cb2 30bc
.org 0x101cb4
	pop {r0}	@ 00101cb4 01bc
.org 0x101cb6
	bx r0	@ 00101cb6 0047

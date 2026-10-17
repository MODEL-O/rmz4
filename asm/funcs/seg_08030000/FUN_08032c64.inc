@ FUN_08032c64  entry 0x08032c64  size 62
.thumb
.org 0x32c64
FUN_08032c64:
	push {r4, lr}	@ 00032c64 10b5
.org 0x32c66
	adds r4, r0, #0	@ 00032c66 041c
.org 0x32c68
	ldr r1, [pc, #56]	@ 00032c68 0e49
.org 0x32c6a
	movs r2, #1	@ 00032c6a 0122
.org 0x32c6c
	movs r3, #3	@ 00032c6c 0323
.org 0x32c6e
	bl 0x1cfc8	@ 00032c6e eaf7abf9
.org 0x32c72
	adds r2, r4, #0	@ 00032c72 221c
.org 0x32c74
	adds r2, #180	@ 00032c74 b432
.org 0x32c76
	ldr r0, [pc, #48]	@ 00032c76 0c48
.org 0x32c78
	adds r1, r4, r0	@ 00032c78 2118
.org 0x32c7a
	movs r3, #0	@ 00032c7a 0023
.org 0x32c7c
	movs r0, #60	@ 00032c7c 3c20
.org 0x32c7e
	strb r0, [r1, #0]	@ 00032c7e 0870
.org 0x32c80
	ldr r0, [pc, #40]	@ 00032c80 0a48
.org 0x32c82
	str r0, [r4, #96]	@ 00032c82 2066
.org 0x32c84
	str r3, [r2, #104]	@ 00032c84 9366
.org 0x32c86
	ldr r1, [r2, #84]	@ 00032c86 516d
.org 0x32c88
	cmp r1, #0	@ 00032c88 0029
.org 0x32c8a
	beq.n 0x32c92	@ 00032c8a 02d0
.org 0x32c8c
	movs r0, #1	@ 00032c8c 0120
.org 0x32c8e
	strb r0, [r1, #17]	@ 00032c8e 4874
.org 0x32c90
	str r3, [r2, #84]	@ 00032c90 5365
.org 0x32c92
	movs r0, #1	@ 00032c92 0120
.org 0x32c94
	strb r0, [r4, #14]	@ 00032c94 a073
.org 0x32c96
	adds r0, r4, #0	@ 00032c96 201c
.org 0x32c98
	bl 0x32cb0	@ 00032c98 00f00af8
.org 0x32c9c
	pop {r4}	@ 00032c9c 10bc
.org 0x32c9e
	pop {r0}	@ 00032c9e 01bc
.org 0x32ca0
	bx r0	@ 00032ca0 0047

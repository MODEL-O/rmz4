@ FUN_08035c48  entry 0x08035c48  size 82
.thumb
.org 0x35c48
FUN_08035c48:
	push {r4, lr}	@ 00035c48 10b5
.org 0x35c4a
	adds r4, r0, #0	@ 00035c4a 041c
.org 0x35c4c
	adds r0, #180	@ 00035c4c b430
.org 0x35c4e
	ldrb r0, [r0, #12]	@ 00035c4e 007b
.org 0x35c50
	cmp r0, #0	@ 00035c50 0028
.org 0x35c52
	bne.n 0x35c64	@ 00035c52 07d1
.org 0x35c54
	ldr r0, [pc, #8]	@ 00035c54 0248
.org 0x35c56
	adds r2, r4, r0	@ 00035c56 2218
.org 0x35c58
	ldrb r0, [r2, #0]	@ 00035c58 1078
.org 0x35c5a
	movs r1, #16	@ 00035c5a 1021
.org 0x35c5c
	b.n 0x35c6c	@ 00035c5c 06e0
.org 0x35c5e
	.byte 0x00	@ 00035c5e data
.org 0x35c5f
	.byte 0x00	@ 00035c5f data
.org 0x35c60
	.byte 0x53,0x01,0x00,0x00	@ 00035c60 data
.org 0x35c64
	ldr r1, [pc, #40]	@ 00035c64 0a49
.org 0x35c66
	adds r2, r4, r1	@ 00035c66 6218
.org 0x35c68
	ldrb r0, [r2, #0]	@ 00035c68 1078
.org 0x35c6a
	movs r1, #32	@ 00035c6a 2021
.org 0x35c6c
	orrs r0, r1	@ 00035c6c 0843
.org 0x35c6e
	strb r0, [r2, #0]	@ 00035c6e 1070
.org 0x35c70
	ldr r1, [pc, #32]	@ 00035c70 0849
.org 0x35c72
	adds r0, r4, #0	@ 00035c72 201c
.org 0x35c74
	movs r2, #1	@ 00035c74 0122
.org 0x35c76
	movs r3, #2	@ 00035c76 0223
.org 0x35c78
	bl 0x1cfc8	@ 00035c78 e7f7a6f9
.org 0x35c7c
	movs r2, #170	@ 00035c7c aa22
.org 0x35c7e
	lsls r2, r2, #1	@ 00035c7e 5200
.org 0x35c80
	adds r0, r4, r2	@ 00035c80 a018
.org 0x35c82
	ldrb r0, [r0, #0]	@ 00035c82 0078
.org 0x35c84
	cmp r0, #3	@ 00035c84 0328
.org 0x35c86
	bne.n 0x35c98	@ 00035c86 07d1
.org 0x35c88
	subs r2, #83	@ 00035c88 533a
.org 0x35c8a
	adds r1, r4, r2	@ 00035c8a a118
.org 0x35c8c
	b.n 0x35ca2	@ 00035c8c 09e0
.org 0x35c8e
	.byte 0x00	@ 00035c8e data
.org 0x35c8f
	.byte 0x00	@ 00035c8f data
.org 0x35c90
	.byte 0x53,0x01,0x00,0x00	@ 00035c90 data
.org 0x35c94
	.byte 0x01,0x0b,0x00,0x00	@ 00035c94 data
.org 0x35c98
	cmp r0, #2	@ 00035c98 0228

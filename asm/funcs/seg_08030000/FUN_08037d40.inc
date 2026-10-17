@ FUN_08037d40  entry 0x08037d40  size 82
.thumb
.org 0x37d40
FUN_08037d40:
	push {r4, lr}	@ 00037d40 10b5
.org 0x37d42
	adds r4, r0, #0	@ 00037d42 041c
.org 0x37d44
	adds r0, #180	@ 00037d44 b430
.org 0x37d46
	ldrb r0, [r0, #12]	@ 00037d46 007b
.org 0x37d48
	cmp r0, #0	@ 00037d48 0028
.org 0x37d4a
	bne.n 0x37d5c	@ 00037d4a 07d1
.org 0x37d4c
	ldr r0, [pc, #8]	@ 00037d4c 0248
.org 0x37d4e
	adds r2, r4, r0	@ 00037d4e 2218
.org 0x37d50
	ldrb r0, [r2, #0]	@ 00037d50 1078
.org 0x37d52
	movs r1, #16	@ 00037d52 1021
.org 0x37d54
	b.n 0x37d64	@ 00037d54 06e0
.org 0x37d56
	.byte 0x00	@ 00037d56 data
.org 0x37d57
	.byte 0x00	@ 00037d57 data
.org 0x37d58
	.byte 0x53,0x01,0x00,0x00	@ 00037d58 data
.org 0x37d5c
	ldr r1, [pc, #40]	@ 00037d5c 0a49
.org 0x37d5e
	adds r2, r4, r1	@ 00037d5e 6218
.org 0x37d60
	ldrb r0, [r2, #0]	@ 00037d60 1078
.org 0x37d62
	movs r1, #32	@ 00037d62 2021
.org 0x37d64
	orrs r0, r1	@ 00037d64 0843
.org 0x37d66
	strb r0, [r2, #0]	@ 00037d66 1070
.org 0x37d68
	ldr r1, [pc, #32]	@ 00037d68 0849
.org 0x37d6a
	adds r0, r4, #0	@ 00037d6a 201c
.org 0x37d6c
	movs r2, #1	@ 00037d6c 0122
.org 0x37d6e
	movs r3, #2	@ 00037d6e 0223
.org 0x37d70
	bl 0x1cfc8	@ 00037d70 e5f72af9
.org 0x37d74
	movs r2, #170	@ 00037d74 aa22
.org 0x37d76
	lsls r2, r2, #1	@ 00037d76 5200
.org 0x37d78
	adds r0, r4, r2	@ 00037d78 a018
.org 0x37d7a
	ldrb r0, [r0, #0]	@ 00037d7a 0078
.org 0x37d7c
	cmp r0, #3	@ 00037d7c 0328
.org 0x37d7e
	bne.n 0x37d90	@ 00037d7e 07d1
.org 0x37d80
	subs r2, #83	@ 00037d80 533a
.org 0x37d82
	adds r1, r4, r2	@ 00037d82 a118
.org 0x37d84
	b.n 0x37d9a	@ 00037d84 09e0
.org 0x37d86
	.byte 0x00	@ 00037d86 data
.org 0x37d87
	.byte 0x00	@ 00037d87 data
.org 0x37d88
	.byte 0x53,0x01,0x00,0x00	@ 00037d88 data
.org 0x37d8c
	.byte 0x01,0x0d,0x00,0x00	@ 00037d8c data
.org 0x37d90
	cmp r0, #2	@ 00037d90 0228

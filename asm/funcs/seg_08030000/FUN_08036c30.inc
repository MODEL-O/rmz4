@ FUN_08036c30  entry 0x08036c30  size 108
.thumb
.org 0x36c30
FUN_08036c30:
	push {r4, r5, lr}	@ 00036c30 30b5
.org 0x36c32
	adds r4, r0, #0	@ 00036c32 041c
.org 0x36c34
	movs r0, #129	@ 00036c34 8120
.org 0x36c36
	lsls r0, r0, #1	@ 00036c36 4000
.org 0x36c38
	adds r5, r4, r0	@ 00036c38 2518
.org 0x36c3a
	ldrb r0, [r5, #0]	@ 00036c3a 2878
.org 0x36c3c
	cmp r0, #0	@ 00036c3c 0028
.org 0x36c3e
	bne.n 0x36c58	@ 00036c3e 0bd1
.org 0x36c40
	ldr r1, [pc, #60]	@ 00036c40 0f49
.org 0x36c42
	adds r0, r4, #0	@ 00036c42 201c
.org 0x36c44
	bl 0x1cf00	@ 00036c44 e6f75cf9
.org 0x36c48
	movs r0, #169	@ 00036c48 a920
.org 0x36c4a
	lsls r0, r0, #1	@ 00036c4a 4000
.org 0x36c4c
	adds r1, r4, r0	@ 00036c4c 2118
.org 0x36c4e
	movs r0, #4	@ 00036c4e 0420
.org 0x36c50
	strb r0, [r1, #0]	@ 00036c50 0870
.org 0x36c52
	ldrb r0, [r5, #0]	@ 00036c52 2878
.org 0x36c54
	adds r0, #1	@ 00036c54 0130
.org 0x36c56
	strb r0, [r5, #0]	@ 00036c56 2870
.org 0x36c58
	movs r0, #169	@ 00036c58 a920
.org 0x36c5a
	lsls r0, r0, #1	@ 00036c5a 4000
.org 0x36c5c
	adds r1, r4, r0	@ 00036c5c 2118
.org 0x36c5e
	ldrb r0, [r1, #0]	@ 00036c5e 0878
.org 0x36c60
	subs r0, #1	@ 00036c60 0138
.org 0x36c62
	strb r0, [r1, #0]	@ 00036c62 0870
.org 0x36c64
	lsls r0, r0, #24	@ 00036c64 0006
.org 0x36c66
	lsrs r0, r0, #24	@ 00036c66 000e
.org 0x36c68
	cmp r0, #255	@ 00036c68 ff28
.org 0x36c6a
	bne.n 0x36c9e	@ 00036c6a 18d1
.org 0x36c6c
	ldrb r0, [r4, #14]	@ 00036c6c a07b
.org 0x36c6e
	cmp r0, #1	@ 00036c6e 0128
.org 0x36c70
	bne.n 0x36c88	@ 00036c70 0ad1
.org 0x36c72
	ldr r1, [pc, #16]	@ 00036c72 0449
.org 0x36c74
	adds r0, r4, #0	@ 00036c74 201c
.org 0x36c76
	movs r2, #2	@ 00036c76 0222
.org 0x36c78
	movs r3, #1	@ 00036c78 0123
.org 0x36c7a
	bl 0x1cfc8	@ 00036c7a e6f7a5f9
.org 0x36c7e
	b.n 0x36c94	@ 00036c7e 09e0
.org 0x36c80
	.byte 0x07,0x2b,0x00,0x00	@ 00036c80 data
.org 0x36c84
	.byte 0x03,0x04,0x00,0x00	@ 00036c84 data
.org 0x36c88
	ldr r1, [pc, #24]	@ 00036c88 0649
.org 0x36c8a
	adds r0, r4, #0	@ 00036c8a 201c
.org 0x36c8c
	movs r2, #2	@ 00036c8c 0222
.org 0x36c8e
	movs r3, #1	@ 00036c8e 0123
.org 0x36c90
	bl 0x1cfc8	@ 00036c90 e6f79af9
.org 0x36c94
	movs r0, #128	@ 00036c94 8020
.org 0x36c96
	lsls r0, r0, #1	@ 00036c96 4000
.org 0x36c98
	adds r1, r4, r0	@ 00036c98 2118
.org 0x36c9a
	movs r0, #0	@ 00036c9a 0020

@ FUN_08033c2c  entry 0x08033c2c  size 116
.thumb
.org 0x33c2c
FUN_08033c2c:
	push {r4, r5, lr}	@ 00033c2c 30b5
.org 0x33c2e
	adds r4, r0, #0	@ 00033c2e 041c
.org 0x33c30
	movs r0, #129	@ 00033c30 8120
.org 0x33c32
	lsls r0, r0, #1	@ 00033c32 4000
.org 0x33c34
	adds r5, r4, r0	@ 00033c34 2518
.org 0x33c36
	ldrb r0, [r5, #0]	@ 00033c36 2878
.org 0x33c38
	cmp r0, #0	@ 00033c38 0028
.org 0x33c3a
	bne.n 0x33c48	@ 00033c3a 05d1
.org 0x33c3c
	movs r1, #136	@ 00033c3c 8821
.org 0x33c3e
	lsls r1, r1, #5	@ 00033c3e 4901
.org 0x33c40
	adds r0, r4, #0	@ 00033c40 201c
.org 0x33c42
	bl 0x1cf00	@ 00033c42 e9f75df9
.org 0x33c46
	b.n 0x33c6e	@ 00033c46 12e0
.org 0x33c48
	movs r1, #136	@ 00033c48 8821
.org 0x33c4a
	lsls r1, r1, #5	@ 00033c4a 4901
.org 0x33c4c
	adds r0, r4, #0	@ 00033c4c 201c
.org 0x33c4e
	bl 0x3a3b0	@ 00033c4e 06f0affb
.org 0x33c52
	ldrb r0, [r5, #0]	@ 00033c52 2878
.org 0x33c54
	cmp r0, #1	@ 00033c54 0128
.org 0x33c56
	bne.n 0x33c74	@ 00033c56 0dd1
.org 0x33c58
	adds r0, r4, #0	@ 00033c58 201c
.org 0x33c5a
	adds r0, #114	@ 00033c5a 7230
.org 0x33c5c
	ldrb r0, [r0, #0]	@ 00033c5c 0078
.org 0x33c5e
	lsls r0, r0, #24	@ 00033c5e 0006
.org 0x33c60
	asrs r0, r0, #24	@ 00033c60 0016
.org 0x33c62
	cmp r0, #1	@ 00033c62 0128
.org 0x33c64
	bgt.n 0x33c74	@ 00033c64 06dc
.org 0x33c66
	adds r0, r4, #0	@ 00033c66 201c
.org 0x33c68
	movs r1, #12	@ 00033c68 0c21
.org 0x33c6a
	bl 0x3c464	@ 00033c6a 08f0fbfb
.org 0x33c6e
	ldrb r0, [r5, #0]	@ 00033c6e 2878
.org 0x33c70
	adds r0, #1	@ 00033c70 0130
.org 0x33c72
	strb r0, [r5, #0]	@ 00033c72 2870
.org 0x33c74
	adds r0, r4, #0	@ 00033c74 201c
.org 0x33c76
	adds r0, #115	@ 00033c76 7330
.org 0x33c78
	ldrb r0, [r0, #0]	@ 00033c78 0078
.org 0x33c7a
	cmp r0, #3	@ 00033c7a 0328
.org 0x33c7c
	bne.n 0x33c9a	@ 00033c7c 0dd1
.org 0x33c7e
	movs r0, #128	@ 00033c7e 8020
.org 0x33c80
	lsls r0, r0, #1	@ 00033c80 4000
.org 0x33c82
	adds r1, r4, r0	@ 00033c82 2118
.org 0x33c84
	movs r0, #0	@ 00033c84 0020
.org 0x33c86
	strb r0, [r1, #0]	@ 00033c86 0870
.org 0x33c88
	adds r0, r4, #0	@ 00033c88 201c
.org 0x33c8a
	bl 0x2b7d8	@ 00033c8a f7f7a5fd
.org 0x33c8e
	adds r1, r0, #0	@ 00033c8e 011c
.org 0x33c90
	lsls r1, r1, #16	@ 00033c90 0904
.org 0x33c92
	lsrs r1, r1, #16	@ 00033c92 090c
.org 0x33c94
	adds r0, r4, #0	@ 00033c94 201c
.org 0x33c96
	bl 0x1cf00	@ 00033c96 e9f733f9
.org 0x33c9a
	pop {r4, r5}	@ 00033c9a 30bc
.org 0x33c9c
	pop {r0}	@ 00033c9c 01bc
.org 0x33c9e
	bx r0	@ 00033c9e 0047

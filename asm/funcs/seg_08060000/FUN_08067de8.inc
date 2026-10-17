@ FUN_08067de8  entry 0x08067de8  size 124
.thumb
.org 0x67de8
FUN_08067de8:
	push {r4, lr}	@ 00067de8 10b5
.org 0x67dea
	adds r4, r0, #0	@ 00067dea 041c
.org 0x67dec
	ldrb r0, [r4, #14]	@ 00067dec a07b
.org 0x67dee
	cmp r0, #0	@ 00067dee 0028
.org 0x67df0
	bne.n 0x67e34	@ 00067df0 20d1
.org 0x67df2
	ldrb r0, [r4, #30]	@ 00067df2 a07f
.org 0x67df4
	lsls r0, r0, #8	@ 00067df4 0002
.org 0x67df6
	adds r1, r4, #0	@ 00067df6 211c
.org 0x67df8
	adds r1, #112	@ 00067df8 7031
.org 0x67dfa
	ldrb r1, [r1, #0]	@ 00067dfa 0978
.org 0x67dfc
	orrs r0, r1	@ 00067dfc 0843
.org 0x67dfe
	ldr r1, [pc, #16]	@ 00067dfe 0449
.org 0x67e00
	cmp r0, r1	@ 00067e00 8842
.org 0x67e02
	bne.n 0x67e14	@ 00067e02 07d1
.org 0x67e04
	adds r1, #1	@ 00067e04 0131
.org 0x67e06
	adds r0, r4, #0	@ 00067e06 201c
.org 0x67e08
	bl 0x1cf00	@ 00067e08 b5f77af8
.org 0x67e0c
	b.n 0x67e50	@ 00067e0c 20e0
.org 0x67e0e
	.byte 0x00	@ 00067e0e data
.org 0x67e0f
	.byte 0x00	@ 00067e0f data
.org 0x67e10
	.byte 0x14,0xa9,0x00,0x00	@ 00067e10 data
.org 0x67e14
	ldr r1, [pc, #20]	@ 00067e14 0549
.org 0x67e16
	adds r0, r4, #0	@ 00067e16 201c
.org 0x67e18
	bl 0x1cf00	@ 00067e18 b5f772f8
.org 0x67e1c
	adds r0, r4, #0	@ 00067e1c 201c
.org 0x67e1e
	adds r0, #116	@ 00067e1e 7430
.org 0x67e20
	ldr r1, [pc, #12]	@ 00067e20 0349
.org 0x67e22
	bl 0x5784	@ 00067e22 9df7affc
.org 0x67e26
	ldrb r0, [r4, #14]	@ 00067e26 a07b
.org 0x67e28
	adds r0, #2	@ 00067e28 0230
.org 0x67e2a
	b.n 0x67e54	@ 00067e2a 13e0
.org 0x67e2c
	.byte 0x17,0xa9,0x00,0x00	@ 00067e2c data
.org 0x67e30
	.byte 0xfc,0xb1,0x85,0x08	@ 00067e30 data
.org 0x67e34
	cmp r0, #1	@ 00067e34 0128
.org 0x67e36
	bne.n 0x67e56	@ 00067e36 0ed1
.org 0x67e38
	adds r0, r4, #0	@ 00067e38 201c
.org 0x67e3a
	adds r0, #113	@ 00067e3a 7130
.org 0x67e3c
	ldrb r0, [r0, #0]	@ 00067e3c 0078
.org 0x67e3e
	lsls r0, r0, #24	@ 00067e3e 0006
.org 0x67e40
	asrs r0, r0, #24	@ 00067e40 0016
.org 0x67e42
	cmp r0, #1	@ 00067e42 0128
.org 0x67e44
	ble.n 0x67e56	@ 00067e44 07dd
.org 0x67e46
	adds r0, r4, #0	@ 00067e46 201c
.org 0x67e48
	adds r0, #116	@ 00067e48 7430
.org 0x67e4a
	ldr r1, [pc, #40]	@ 00067e4a 0a49
.org 0x67e4c
	bl 0x5784	@ 00067e4c 9df79afc
.org 0x67e50
	ldrb r0, [r4, #14]	@ 00067e50 a07b
.org 0x67e52
	adds r0, #1	@ 00067e52 0130
.org 0x67e54
	strb r0, [r4, #14]	@ 00067e54 a073
.org 0x67e56
	adds r0, r4, #0	@ 00067e56 201c
.org 0x67e58
	bl 0x1cff0	@ 00067e58 b5f7caf8
.org 0x67e5c
	adds r0, r4, #0	@ 00067e5c 201c
.org 0x67e5e
	adds r0, #115	@ 00067e5e 7330
.org 0x67e60
	ldrb r1, [r0, #0]	@ 00067e60 0178
.org 0x67e62
	cmp r1, #3	@ 00067e62 0329

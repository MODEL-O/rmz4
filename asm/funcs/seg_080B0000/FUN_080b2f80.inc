@ FUN_080b2f80  entry 0x080b2f80  size 94
.thumb
.org 0xb2f80
FUN_080b2f80:
	push {r4, lr}	@ 000b2f80 10b5
.org 0xb2f82
	adds r4, r0, #0	@ 000b2f82 041c
.org 0xb2f84
	adds r0, #182	@ 000b2f84 b630
.org 0xb2f86
	ldrb r0, [r0, #0]	@ 000b2f86 0078
.org 0xb2f88
	cmp r0, #0	@ 000b2f88 0028
.org 0xb2f8a
	bne.n 0xb2fa4	@ 000b2f8a 0bd1
.org 0xb2f8c
	ldr r0, [pc, #16]	@ 000b2f8c 0448
.org 0xb2f8e
	ldrb r1, [r4, #13]	@ 000b2f8e 617b
.org 0xb2f90
	lsls r1, r1, #2	@ 000b2f90 8900
.org 0xb2f92
	adds r1, r1, r0	@ 000b2f92 0918
.org 0xb2f94
	ldr r1, [r1, #0]	@ 000b2f94 0968
.org 0xb2f96
	adds r0, r4, #0	@ 000b2f96 201c
.org 0xb2f98
	bl 0x128f80	@ 000b2f98 75f0f2ff
.org 0xb2f9c
	b.n 0xb2faa	@ 000b2f9c 05e0
.org 0xb2f9e
	.byte 0x00	@ 000b2f9e data
.org 0xb2f9f
	.byte 0x00	@ 000b2f9f data
.org 0xb2fa0
	.byte 0xe8,0x36,0x86,0x08	@ 000b2fa0 data
.org 0xb2fa4
	adds r0, r4, #0	@ 000b2fa4 201c
.org 0xb2fa6
	bl 0xb3730	@ 000b2fa6 00f0c3fb
.org 0xb2faa
	ldr r0, [r4, #44]	@ 000b2faa e06a
.org 0xb2fac
	cmp r0, #0	@ 000b2fac 0028
.org 0xb2fae
	beq.n 0xb2fb6	@ 000b2fae 02d0
.org 0xb2fb0
	ldrb r0, [r4, #13]	@ 000b2fb0 607b
.org 0xb2fb2
	cmp r0, #2	@ 000b2fb2 0228
.org 0xb2fb4
	bne.n 0xb2fde	@ 000b2fb4 13d1
.org 0xb2fb6
	adds r0, r4, #0	@ 000b2fb6 201c
.org 0xb2fb8
	bl 0xb3804	@ 000b2fb8 00f024fc
.org 0xb2fbc
	lsls r0, r0, #24	@ 000b2fbc 0006
.org 0xb2fbe
	cmp r0, #0	@ 000b2fbe 0028
.org 0xb2fc0
	beq.n 0xb2fd8	@ 000b2fc0 0ad0
.org 0xb2fc2
	adds r0, r4, #0	@ 000b2fc2 201c
.org 0xb2fc4
	adds r0, #84	@ 000b2fc4 5430
.org 0xb2fc6
	ldrb r2, [r4, #10]	@ 000b2fc6 a27a
.org 0xb2fc8
	lsrs r2, r2, #4	@ 000b2fc8 1209
.org 0xb2fca
	movs r1, #1	@ 000b2fca 0121
.org 0xb2fcc
	ands r2, r1	@ 000b2fcc 0a40
.org 0xb2fce
	movs r1, #0	@ 000b2fce 0021
.org 0xb2fd0
	bl 0xe67ac	@ 000b2fd0 33f0ecfb
.org 0xb2fd4
	movs r0, #30	@ 000b2fd4 1e20
.org 0xb2fd6
	strb r0, [r4, #19]	@ 000b2fd6 e074
.org 0xb2fd8
	adds r0, r4, #0	@ 000b2fd8 201c
.org 0xb2fda
	bl 0x1cff0	@ 000b2fda 6af709f8
